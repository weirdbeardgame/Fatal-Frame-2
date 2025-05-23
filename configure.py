#! /usr/bin/env python3

from __future__ import annotations

import os
import re
import sys
import json
import yaml
import copy
import splat
import shutil
import argparse
import tempfile
import subprocess
import ninja_syntax

from typing import Any, Union, Protocol, Literal, cast
from pathlib import Path
from contextlib import contextmanager

from splat.scripts import split
from splat.util.conf import load as splat_load_yaml
from splat.segtypes.linker_entry import LinkerEntry

ASM_FILE_OVERRIDE = set(
    [
        "libkernl.a_klib_",
        "libkernl.a_tlbtrap_",
        "libc.a_memcmp_",
        "libc.a_memcpy_",
        "libc.a_memmove_",
        "libc.a_memset_",
        "libc.a_strcat_",
        "libc.a_strcmp_",
        "libc.a_strcpy_",
        "libc.a_strlen_",
        "libc.a_strncmp_",
        "libc.a_strncpy_",
        "libc.a_memchr_"
    ]
)

ROOT = Path(__file__).parent.resolve()
TOOLS_DIR = ROOT / "tools"

YAML_FILE = "config/FF2.yaml"
BASENAME = "SLES_523.84"
LD_PATH = f"build/{BASENAME}.ld"
ELF_PATH = f"build/{BASENAME}"
MAP_PATH = f"build/{BASENAME}.map"
PRE_ELF_PATH = f"build/{BASENAME}.elf"

COMMON_INCLUDES = (
    "-Iinclude -I include/sdk/ee -I include/gcc -I include/gcc/sys -I include/gcc/gcc-lib -I include/main -I include/graphics -I include/graphics/graph3d -I include/graphics/graph3d/ctl -I include/graphics/motion -I include/ingame -I include/ingame/plyr"
)

COMPILER = "ee-gcc2.96"
GAME_CC_DIR = f"{TOOLS_DIR}/cc/{COMPILER}/bin"
LIB_CC_DIR = f"{TOOLS_DIR}/cc/{COMPILER}/bin"

GAME_COMPILE_CMD = f"{GAME_CC_DIR}/ee-gcc -c {COMMON_INCLUDES} -O2 -G8 -g -x c++"

LIB_COMPILE_CMD = f"{LIB_CC_DIR}/ee-gcc -c -I include/gcc-9.26 {COMMON_INCLUDES} -O2 -G8 -g -x c++"

WIBO_VER = "0.6.4"


def exec_shell(command: List[str]) -> str:
    ret = subprocess.run(
        command, stdout=subprocess.PIPE, stderr=subprocess.PIPE, text=True
    )
    return ret.stdout


def clean():
    if os.path.exists("config/.splache"):
        os.remove("config/.splache")
    shutil.rmtree("asm", ignore_errors=True)
    shutil.rmtree("assets", ignore_errors=True)
    shutil.rmtree("build", ignore_errors=True)


def write_permuter_settings():
    with open("permuter_settings.toml", "w") as f:
        f.write(
            f"""compiler_command = "{os.path.relpath(GAME_COMPILE_CMD, ROOT)} -D__GNUC__"
assembler_command = "mips-linux-gnu-as -march=r5900 -mabi=eabi -Iinclude"
compiler_type = "gcc"

[preserve_macros]

[decompme.compilers]
"tools/build/cc/gcc/gcc" = "{COMPILER}"
"""
        )

pattern0 = re.compile(r'%(gp_rel)\(([^)]+)\)\(\$28\)')
pattern1 = re.compile(r"\$28, (%gp_rel\((.+)\))")

def remove_gprel():
    for root, dirs, files in os.walk("asm/nonmatchings/"):
        for filename in files:
            filepath = os.path.join(root, filename)

            with open(filepath, "r") as file:
                content = file.read()
            
            replace: bool = False

            # Search for any %gp_rel access
            updated_content = content
            if re.search(pattern0, content):
                replace = True
                # Reference found, remove
                updated_content = re.sub(pattern0, r'\2', updated_content)
            
            if re.search(pattern1, updated_content):
                replace = True

                updated_content = re.sub(pattern1, r'\2', updated_content)
        
            if replace == True:
                # Write the updated content back to the file
                with open(filepath, "w") as file:
                    file.write(updated_content)

def fix_asm_include():
    for root, dirs, files in os.walk("asm/nonmatchings/"):
        for filename in files:
            filepath = os.path.join(root, filename)

            with open(filepath, "r") as file:
                content = file.read()
            
            if content.find(".include \"macro.inc\"") != -1:
                updated_content = content.replace(".include \"macro.inc\"", ".include \"include/macro.inc\"")
                
                # Write the updated content back to the file
                with open(filepath, "w") as file:
                    file.write(updated_content)


def build_stuff(linker_entries: List[LinkerEntry]):
    built_objects: Set[Path] = set()

    def build(
        object_paths: Union[Path, List[Path]],
        src_paths: List[Path],
        task: str,
        variables: Dict[str, str] = {},
        implicit_outputs: List[str] = [],
    ):
        if not isinstance(object_paths, list):
            object_paths = [object_paths]

        object_strs = [str(obj) for obj in object_paths]

        for object_path in object_paths:
            if object_path.suffix == ".o":
                built_objects.add(object_path)
            ninja.build(
                outputs=object_strs,
                rule=task,
                inputs=[str(s) for s in src_paths],
                variables=variables,
                implicit_outputs=implicit_outputs,
            )

    ninja = ninja_syntax.Writer(open(str(ROOT / "build.ninja"), "w"), width=9999)

    # Rules
    cross = "mips-linux-gnu-"

    ld_args = "-EL -T config/undefined_syms.txt -T config/undefined_syms_auto.txt -T config/undefined_funcs_auto.txt -Map $mapfile -T $in -o $out"

    ninja.rule(
        "as",
        description="as $in",
        command=f"cpp {COMMON_INCLUDES} $in -o  - | {cross}as -no-pad-sections -EL -march=5900 -mabi=eabi -Iinclude -o $out && python3 tools/elf_patcher.py $out gas $override",
    )

    ninja.rule(
        "cc",
        description="cc $in",
        command=f"{GAME_COMPILE_CMD} $in -o $out && {cross}strip $out -N dummy-symbol-name",
    )

    ninja.rule(
        "libcc",
        description="cc $in",
        command=f"{LIB_COMPILE_CMD} $in -o $out && {cross}strip $out -N dummy-symbol-name",
    )

    ninja.rule(
        "ld",
        description="link $out",
        command=f"{cross}ld {ld_args}",
    )

    ninja.rule(
        "sha1sum",
        description="sha1sum $in",
        command="sha1sum -c $in && touch $out",
    )

    ninja.rule(
        "elf",
        description="elf $out",
        command=f"{cross}objcopy $in $out -O binary",
    )

    for entry in linker_entries:
        seg = entry.segment

        if seg.type[0] == ".":
            continue

        if entry.object_path is None:
            continue

        if seg.name in ASM_FILE_OVERRIDE:
            override = "--section-align .text:0x4"
        elif "libm.a" in seg.name:
            override = "--section-align .rodata:0x4"
        elif seg.name == "ingame/map/CBuff":
            override = "--section-align .sbss:0x80"
        elif seg.name == "outgame/pad_check":
            override = "--section-align .sbss:0x1"
        else:
            override = ""

        if isinstance(
            seg,
            (
                splat.segtypes.common.asm.CommonSegAsm,
                splat.segtypes.common.data.CommonSegData,
            ),
        ):
            build(entry.object_path, entry.src_paths, "as", variables={"override": override})

        elif isinstance(seg, splat.segtypes.common.c.CommonSegC):
            if any(
                str(src_path).startswith("src/lib/") for src_path in entry.src_paths
            ):
                build(entry.object_path, entry.src_paths, "libcc")

            else:
                # check file for cc or cc-01
                build(entry.object_path, entry.src_paths, "cc")

        elif isinstance(seg, splat.segtypes.common.databin.CommonSegDatabin):
            build(entry.object_path, entry.src_paths, "as", variables={"override": override})

        elif isinstance(seg, splat.segtypes.common.rodatabin.CommonSegRodatabin):
            build(entry.object_path, entry.src_paths, "as", variables={"override": override})

        elif isinstance(seg, splat.segtypes.common.textbin.CommonSegTextbin):
            build(entry.object_path, entry.src_paths, "as", variables={"override": override})

        elif isinstance(seg, splat.segtypes.common.sbss.CommonSegSbss):
            build(entry.object_path, entry.src_paths, "as", variables={"override": override})

        elif isinstance(seg, splat.segtypes.common.eh_frame.PS2SegEh_frame):
            build(entry.object_path, entry.src_paths, "as", variables={"override": override})

        elif isinstance(seg, splat.segtypes.common.gcc_except_table.PS2SegGcc_except_table):
            build(entry.object_path, entry.src_paths, "as", variables={"override": override})

        else:
            print(f"ERROR: Unsupported build segment type {seg.type}")
            sys.exit(1)

    ninja.build(
        PRE_ELF_PATH,
        "ld",
        LD_PATH,
        implicit=[str(obj) for obj in built_objects],
        variables={"mapfile": MAP_PATH},
    )

    ninja.build(
        ELF_PATH,
        "elf",
        PRE_ELF_PATH,
    )

    ninja.build(
        ELF_PATH + ".ok",
        "sha1sum",
        "checksum.sha1",
        implicit=[ELF_PATH],
    )


if __name__ == "__main__":
    parser = argparse.ArgumentParser(description="Configure the project")
    parser.add_argument(
        "-c",
        "--clean",
        help="Clean extraction and build artifacts",
        action="store_true",
    )
    args = parser.parse_args()


    if args.clean:
        clean()

    split.main([Path(YAML_FILE)], modes=["all"], verbose=False, disassemble_all=False)

    linker_entries = split.linker_writer.entries

    build_stuff(linker_entries)

    write_permuter_settings()

    remove_gprel()

    fix_asm_include()

