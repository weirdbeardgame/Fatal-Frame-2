#include "common.h"

INCLUDE_ASM("asm/nonmatchings/system/mc/prg/mc_check_card", MemoryCardInfoCtrlInit__Fv);

INCLUDE_ASM("asm/nonmatchings/system/mc/prg/mc_check_card", MemoryCardGetCardInfoInit__Fii);

INCLUDE_ASM("asm/nonmatchings/system/mc/prg/mc_check_card", MemoryCardCheckEveryFrameInit__Fii);

INCLUDE_ASM("asm/nonmatchings/system/mc/prg/mc_check_card", MemoryCardGetCardInfoMain__Fv);

INCLUDE_ASM("asm/nonmatchings/system/mc/prg/mc_check_card", MemoryCardGetCardInfoReq__Fii);

INCLUDE_ASM("asm/nonmatchings/system/mc/prg/mc_check_card", MemoryCardCheckEveryFrameMain__Fv);

INCLUDE_ASM("asm/nonmatchings/system/mc/prg/mc_check_card", GetAccessMemoryCardPort__Fv);

INCLUDE_ASM("asm/nonmatchings/system/mc/prg/mc_check_card", GetAccessMemoryCardSlot__Fv);

INCLUDE_ASM("asm/nonmatchings/system/mc/prg/mc_check_card", GetAccessMemoryCardType__Fv);

INCLUDE_ASM("asm/nonmatchings/system/mc/prg/mc_check_card", GetAccessMemoryCardFreeCluster__Fv);

INCLUDE_ASM("asm/nonmatchings/system/mc/prg/mc_check_card", GetAccessMemoryCardFormat__Fv);

INCLUDE_ASM("asm/nonmatchings/system/mc/prg/mc_check_card", MemoryCardSetAccessPort__Fi);
