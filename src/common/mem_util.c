#include "common.h"

INCLUDE_ASM("asm/nonmatchings/common/mem_util", mem_utilInit__FPvi);

INCLUDE_ASM("asm/nonmatchings/common/mem_util", mem_utilReset__FPvi);

INCLUDE_ASM("asm/nonmatchings/common/mem_util", mem_utilGetMem__Fi);

INCLUDE_ASM("asm/nonmatchings/common/mem_util", mem_utilFreeMem__FPv);

INCLUDE_ASM("asm/nonmatchings/common/mem_util", mem_utiDrawMemory__FPFiiiii_vT0iiii);

INCLUDE_ASM("asm/nonmatchings/common/mem_util", mem_utilQueryMaxFreeSize__Fv);

INCLUDE_ASM("asm/nonmatchings/common/mem_util", mem_utilQueryTotalFreeSize__Fv);
