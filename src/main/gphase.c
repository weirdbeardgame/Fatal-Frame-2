#include "common.h"
#include "gphase.h"

extern "C++" GPHASE_ENUM SetNextGPhase__F14GPHASE_ID_ENUM(GPHASE_ID_ENUM id);

void InitGPhaseSys()
{
    for (int i = 0; i < gphase_sys_num; i++)
    {
        gphase_sys.now[i] = GPHASE_ID_NONE;
    }

    SetNextGPhase__F14GPHASE_ID_ENUM(GID_SUPER);
}

INCLUDE_ASM("asm/nonmatchings/main/gphase", SetInitFlag__Fv);

INCLUDE_ASM("asm/nonmatchings/main/gphase", DoJobPhase__Fv);

INCLUDE_ASM("asm/nonmatchings/main/gphase", GPhaseSysMain__Fv);

INCLUDE_ASM("asm/nonmatchings/main/gphase", SetNextGPhase__F14GPHASE_ID_ENUM);
