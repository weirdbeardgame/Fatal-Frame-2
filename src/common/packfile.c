#include "common.h"

INCLUDE_ASM("asm/nonmatchings/common/packfile", PakAlign128__FPUi);

INCLUDE_ASM("asm/nonmatchings/common/packfile", GetNumInPak__FPv);

INCLUDE_ASM("asm/nonmatchings/common/packfile", GetFileInPak__FPvi);

INCLUDE_ASM("asm/nonmatchings/common/packfile", GetFileSizeInPak__FPvi);

INCLUDE_ASM("asm/nonmatchings/common/packfile", GetPakTaleAddr__FPv);

INCLUDE_ASM("asm/nonmatchings/common/packfile", Pk2GetNum__FPUi);

INCLUDE_ASM("asm/nonmatchings/common/packfile", Pk2GetAddr__FPUii);
