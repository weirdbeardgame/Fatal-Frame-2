#! /usr/bin/env python3

import argparse
import os
import shutil
import subprocess
import sys
import re

from pathlib import Path
from typing import Dict, List, Set, Union

from fix_gp import fix_gp

import ninja_syntax

import splat
import splat.scripts.split as split
from splat.segtypes.linker_entry import LinkerEntry

ROOT = Path(__file__).parent
TOOLS_DIR = ROOT / "tools"

YAML_FILE = "FF2.yaml"
BASENAME = "SLES_523.84"
LD_PATH = f"{BASENAME}.ld"
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
    if os.path.exists(".splache"):
        os.remove(".splache")
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

    ld_args = "-EL -T undefined_syms.txt -T undefined_syms_auto.txt -T undefined_funcs_auto.txt -Map $mapfile -T $in -o $out"

    ninja.rule(
        "as",
        description="as $in",
        command=f"cpp {COMMON_INCLUDES} $in -o  - | {cross}as -no-pad-sections -EL -march=5900 -mabi=eabi -Iinclude -o $out",
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

        if isinstance(
            seg,
            (
                splat.segtypes.common.asm.CommonSegAsm,
                splat.segtypes.common.data.CommonSegData,
            ),
        ):
            build(entry.object_path, entry.src_paths, "as")

        elif isinstance(seg, splat.segtypes.common.c.CommonSegC):
            if any(
                str(src_path).startswith("src/lib/") for src_path in entry.src_paths
            ):
                build(entry.object_path, entry.src_paths, "libcc")

            else:
                # check file for cc or cc-01
                build(entry.object_path, entry.src_paths, "cc")

        elif isinstance(seg, splat.segtypes.common.databin.CommonSegDatabin):
            build(entry.object_path, entry.src_paths, "as")

        elif isinstance(seg, splat.segtypes.common.rodatabin.CommonSegRodatabin):
            build(entry.object_path, entry.src_paths, "as")

        elif isinstance(seg, splat.segtypes.common.textbin.CommonSegTextbin):
            build(entry.object_path, entry.src_paths, "as")

        elif isinstance(seg, splat.segtypes.common.sbss.CommonSegSbss):
            build(entry.object_path, entry.src_paths, "as")

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

    try:
        exec_shell(["wibo"])
    except FileNotFoundError:
        print("ERROR: wibo does not appear to be accessible")
        print("To install it, please download it and put it in your PATH:")
        print(
            f"  wget https://github.com/decompals/wibo/releases/download/{WIBO_VER}/wibo && chmod +x wibo && sudo mv wibo /usr/bin/"
        )
        sys.exit(1)

    if args.clean:
        clean()

    split.main([YAML_FILE], modes="all", verbose=False)

    linker_entries = split.linker_writer.entries

    build_stuff(linker_entries)

    write_permuter_settings()

    gp_value = split.config["options"]["gp_value"]

    fix_gp(Path("asm"), gp_value, Path("symbol_addrs.txt"))
