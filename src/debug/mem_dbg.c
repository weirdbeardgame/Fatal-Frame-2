#include "common.h"

INCLUDE_ASM("asm/nonmatchings/debug/mem_dbg", mem_dbgInit__FPvi);

INCLUDE_ASM("asm/nonmatchings/debug/mem_dbg", mem_dbgReset__FPvi);

INCLUDE_ASM("asm/nonmatchings/debug/mem_dbg", mem_dbgGetMem__Fi);

INCLUDE_ASM("asm/nonmatchings/debug/mem_dbg", mem_dbgFreeMem__FPv);

INCLUDE_ASM("asm/nonmatchings/debug/mem_dbg", mem_dbgDrawMemory__FPFiiiii_vT0iiii);

INCLUDE_ASM("asm/nonmatchings/debug/mem_dbg", mem_dbgQueryMaxFreeSize__Fv);

INCLUDE_ASM("asm/nonmatchings/debug/mem_dbg", mem_dbgQueryTotalFreeSize__Fv);
