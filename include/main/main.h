#pragma once
#include "common.h"
#include "gphase.h"

extern "C++" {

extern int main(int argc, char **args);
extern void DebugMemoryCheck();
extern void newAssert(char *pStr);
extern void init_super();
extern void end_super();
extern GPHASE_ENUM pre_super(GPHASE_ENUM super);
extern GPHASE_ENUM after_super(GPHASE_ENUM result);
extern void init_Boot_Init();
extern void end_Boot_Init();
extern GPHASE_ENUM one_Boot_Init(GPHASE_ENUM dummy);
extern int CheckSoftReset();
extern void SoftResetLock();
extern void SoftResetUnlock();
extern void CallSoftReset();
extern int *GetSubTitleAddr();
extern void init_SoftResetMain();
extern GPHASE_ENUM one_SoftResetMain(GPHASE_ENUM dummy);
extern void end_SoftResetMain();
};
