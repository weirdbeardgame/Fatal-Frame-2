#include "common.h"

INCLUDE_ASM("asm/nonmatchings/common/my_malloc", my_mallocInit__FP10_MY_MALLOCPvi);

INCLUDE_ASM("asm/nonmatchings/common/my_malloc", my_mallocMalloc__FP10_MY_MALLOCii);

INCLUDE_RODATA("asm/nonmatchings/common/my_malloc", D_003C1BA8);

INCLUDE_ASM("asm/nonmatchings/common/my_malloc", my_mallocFree__FP10_MY_MALLOCPv);

INCLUDE_ASM("asm/nonmatchings/common/my_malloc", my_mallocQueryTotalFreeMem__FP10_MY_MALLOC);

INCLUDE_ASM("asm/nonmatchings/common/my_malloc", my_mallocQueryMaxFreeMem__FP10_MY_MALLOC);

INCLUDE_ASM("asm/nonmatchings/common/my_malloc", my_mallocDrawMemory__FP10_MY_MALLOCPFiiiii_vT1iiii);
