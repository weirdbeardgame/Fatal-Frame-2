#include "common.h"

INCLUDE_ASM("asm/nonmatchings/common/heapctrl", heapCtrlReset);

INCLUDE_ASM("asm/nonmatchings/common/heapctrl", heapCtrlInit);

INCLUDE_ASM("asm/nonmatchings/common/heapctrl", heapCtrlMalloc);

INCLUDE_ASM("asm/nonmatchings/common/heapctrl", heapCtrlFree);

INCLUDE_ASM("asm/nonmatchings/common/heapctrl", heapCtrlMemSize);

INCLUDE_ASM("asm/nonmatchings/common/heapctrl", heapCtrlQueryMaxOneSize);

INCLUDE_ASM("asm/nonmatchings/common/heapctrl", SAFE_MALLOC);

INCLUDE_ASM("asm/nonmatchings/common/heapctrl", heapCtrlDrawMemory);
