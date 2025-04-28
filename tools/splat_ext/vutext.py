from splat.segtypes.common.textbin import CommonSegTextbin


class PS2SegVutext(CommonSegTextbin):
    def get_linker_section(self) -> str:
        return ".vutext"

    @staticmethod
    def is_text() -> bool:
        return False
