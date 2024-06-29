#!/usr/bin/env python3

# SPDX-FileCopyrightText: © 2024 AngheloAlf
# SPDX-License-Identifier: MIT

from __future__ import annotations

from splat.segtypes.common.rodata import CommonSegRodata

class PS2SegGcc_except_table(CommonSegRodata):
    def get_linker_section(self) -> str:
        return ".gcc_except_table"

    def get_section_flags(self) -> str|None:
        return "a"
