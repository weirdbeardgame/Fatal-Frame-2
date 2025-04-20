#!/usr/bin/env python3

# SPDX-FileCopyrightText: © 2024 AngheloAlf
# SPDX-License-Identifier: MIT

from __future__ import annotations

import spimdisasm

from splat.segtypes.common.rodata import CommonSegRodata
from ...disassembler.disassembler_section import DisassemblerSection

class PS2SegGcc_except_table(CommonSegRodata):
    def get_linker_section(self) -> str:
        return ".gcc_except_table"

    def get_section_flags(self) -> str|None:
        return "a"

    def configure_disassembler_section(self, disassembler_section: DisassemblerSection) -> None:
        "Allows to configure the section before running the analysis on it"

        super().configure_disassembler_section(disassembler_section)

        section = disassembler_section.get_section()
        assert isinstance(section, spimdisasm.mips.sections.SectionBase)

        section.enableStringGuessing = False
        section.typeForOwnedSymbols = "s32"