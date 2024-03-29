#include "common.h"

INCLUDE_ASM(const s32, "devvu0", func_0027D250);

INCLUDE_ASM(const s32, "devvu0", sceDevVu0Reset);

INCLUDE_ASM(const s32, "devvu0", sceDevVu0Pause);

INCLUDE_ASM(const s32, "devvu0", sceDevVu0Continue);

INCLUDE_ASM(const s32, "devvu0", sceDevVu0PutDBit);

INCLUDE_ASM(const s32, "devvu0", sceDevVu0PutTBit);

INCLUDE_ASM(const s32, "devvu0", sceDevVu0GetDBit);

INCLUDE_ASM(const s32, "devvu0", sceDevVu0GetTBit);

INCLUDE_ASM(const s32, "devvu0", func_0027D3B0);

void sceDevVu0Exec(u_short addr)
{
    register u_int reg = addr;
    __asm__ volatile(
        "ctc2 %0, $vi27\n"
        "vcallmsr $vi27\n"
        : : "r"(reg));
}

INCLUDE_ASM(const s32, "devvu0", sceDevVu0GetTpc);

INCLUDE_ASM(const s32, "devvu0", sceDevVu0GetCnd);

INCLUDE_ASM(const s32, "devvu0", sceDevVu0PutCnd);

INCLUDE_ASM(const s32, "devvu0", sceDevVif0Reset);

INCLUDE_ASM(const s32, "devvu0", sceDevVif0Pause);

INCLUDE_ASM(const s32, "devvu0", sceDevVif0Continue);

INCLUDE_ASM(const s32, "devvu0", sceDevVif0PutErr);

INCLUDE_ASM(const s32, "devvu0", sceDevVif0GetErr);

INCLUDE_ASM(const s32, "devvu0", func_0027D7E8);

INCLUDE_ASM(const s32, "devvu0", sceDevVif0GetCnd);
