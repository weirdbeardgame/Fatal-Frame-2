// STATUS: NOT STARTED

#ifndef HOME_ZERO_ROM_ZERO2NP_SRC_MAIN_MAIN_H
#define HOME_ZERO_ROM_ZERO2NP_SRC_MAIN_MAIN_H


int main();
void DebugMemoryCheck();
void newAssert(char *pStr);
void init_super();
void end_super();
GPHASE_ENUM pre_super(GPHASE_ENUM super);
GPHASE_ENUM after_super();
void init_Boot_Init();
void end_Boot_Init();
GPHASE_ENUM one_Boot_Init(GPHASE_ENUM dummy);
void SoftResetLock();
void SoftResetUnlock();
int* GetSubTitleAddr();
void init_SoftResetMain();
GPHASE_ENUM one_SoftResetMain(GPHASE_ENUM dummy);
void end_SoftResetMain();

#endif // HOME_ZERO_ROM_ZERO2NP_SRC_MAIN_MAIN_H
