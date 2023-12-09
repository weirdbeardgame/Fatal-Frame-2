// STATUS: NOT STARTED

#ifndef HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_SAVEPOINT_SAVEPOINT_MAIN_H
#define HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_SAVEPOINT_SAVEPOINT_MAIN_H


void SavePointMainBackGroundLoadReq();
void GetSavePointMainTexMem(void **tex_addr, int data_label);
void SavePointMainTexLoadReq(void *tex_addr, int data_label);
void SavePointMainFadeOutReq();
void SavePointMainMemFree();
void LiberateSavePointMainTexMem(void **tex_addr);
void init_SavePoint_Main();
GPHASE_ENUM pre_SavePoint_Main(GPHASE_ENUM dummy);
GPHASE_ENUM after_SavePoint_Main(GPHASE_ENUM result);
void end_SavePoint_Main();
void init_SavePoint_Top();
GPHASE_ENUM one_SavePoint_Top(GPHASE_ENUM dummy);
void end_SavePoint_Top();
void init_SavePoint_Save();
GPHASE_ENUM one_SavePoint_Save(GPHASE_ENUM dummy);
void end_SavePoint_Save();
void init_SavePoint_Album();
GPHASE_ENUM one_SavePoint_Album(GPHASE_ENUM dummy);
void end_SavePoint_Album();

#endif // HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_SAVEPOINT_SAVEPOINT_MAIN_H
