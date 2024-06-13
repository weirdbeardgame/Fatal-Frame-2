#include "common.h"

INCLUDE_ASM("asm/nonmatchings/ingame/event/prg/ev_se", ev_seInit__Fv);

INCLUDE_ASM("asm/nonmatchings/ingame/event/prg/ev_se", ev_seSetSave__FP12MC_SAVE_DATA);

INCLUDE_ASM("asm/nonmatchings/ingame/event/prg/ev_se", ev_seRelease__Fv);

INCLUDE_RODATA("asm/nonmatchings/ingame/event/prg/ev_se", __FUNCTION__.9);

INCLUDE_RODATA("asm/nonmatchings/ingame/event/prg/ev_se", D_003ABEB8);

INCLUDE_ASM("asm/nonmatchings/ingame/event/prg/ev_se", ev_seRegisterFile__Fii);

INCLUDE_ASM("asm/nonmatchings/ingame/event/prg/ev_se", ev_seDeleteFile__Fii);

INCLUDE_ASM("asm/nonmatchings/ingame/event/prg/ev_se", ev_seGetBankID__Fi);

INCLUDE_ASM("asm/nonmatchings/ingame/event/prg/ev_se", ev_seChangeRoom__Fi);

INCLUDE_ASM("asm/nonmatchings/ingame/event/prg/ev_se", ev_seIsReady__Fv);
