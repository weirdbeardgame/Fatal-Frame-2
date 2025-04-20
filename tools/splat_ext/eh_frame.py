from typing import Optional

import spimdisasm

from ..common.data import CommonSegData
from ...disassembler.disassembler_section import DisassemblerSection


class PS2SegEh_frame(CommonSegData):
    """Segment that contains C++ exceptions"""

    def get_linker_section(self) -> str:
        return ".eh_frame"

    def get_section_flags(self) -> Optional[str]:
        return "a"

    def configure_disassembler_section(self, disassembler_section: DisassemblerSection) -> None:
        "Allows to configure the section before running the analysis on it"

        super().configure_disassembler_section(disassembler_section)

        section = disassembler_section.get_section()
        assert isinstance(section, spimdisasm.mips.sections.SectionBase)

        section.enableStringGuessing = False
        section.typeForOwnedSymbols = "s32"
