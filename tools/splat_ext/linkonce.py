from splat.segtypes.common.asm import CommonSegAsm


class PS2SegLinkonce(CommonSegAsm):
    def get_linker_section(self) -> str:
        return ".linkonce"

    @staticmethod
    def is_text() -> bool:
        return False
