#include "common.h"

INCLUDE_ASM("asm/nonmatchings/pad/pad", InitPad__Fv);

INCLUDE_ASM("asm/nonmatchings/pad/pad", padIsConnected__Fi);

INCLUDE_ASM("asm/nonmatchings/pad/pad", GetPadDUALSHOCK2__Fi);

INCLUDE_ASM("asm/nonmatchings/pad/pad", GetPadStateStable__Fi);

INCLUDE_ASM("asm/nonmatchings/pad/pad", PadSyncCallback__Fv);

INCLUDE_ASM("asm/nonmatchings/pad/pad", PadReadFunc__FP10PAD_STRUCTi);

INCLUDE_ASM("asm/nonmatchings/pad/pad", SetAnlgInfo__FP10PAD_STRUCTi);

INCLUDE_ASM("asm/nonmatchings/pad/pad", VibrateRequest__FUsUsUs);

INCLUDE_ASM("asm/nonmatchings/pad/pad", VibrateRequest1__FUsUs);

INCLUDE_ASM("asm/nonmatchings/pad/pad", VibrateRequest2__FUsUs);

INCLUDE_ASM("asm/nonmatchings/pad/pad", PadClearCount__Fi);

INCLUDE_ASM("asm/nonmatchings/pad/pad", PadAnalogInit__Fv);

INCLUDE_ASM("asm/nonmatchings/pad/pad", PadAnalogMain__Fv);

INCLUDE_ASM("asm/nonmatchings/pad/pad", PadAnalogRptCtrl__Fi);

INCLUDE_ASM("asm/nonmatchings/pad/pad", GetPadAnalogRpt__Fi);

INCLUDE_RODATA("asm/nonmatchings/pad/pad", D_003C29D8);
