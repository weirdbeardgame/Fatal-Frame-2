// STATUS: NOT STARTED

#ifndef HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_CLEAR_PRG_CLEARMENU_H
#define HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_CLEAR_PRG_CLEARMENU_H


void GetClearMenuTexMem(void **tex_addr, int data_label);
void ClearMenuTexLoadReq(void *tex_addr, int data_label);
void ClearMenuFadeOutReq();
void SetClearMenuStreamID(int stream_id);
void LiberateClearMenuTexMem(void **tex_addr);
void init_ClearMenu();
GPHASE_ENUM pre_ClearMenu(GPHASE_ENUM dummy);
GPHASE_ENUM after_ClearMenu(GPHASE_ENUM result);
void end_ClearMenu();
void init_ClearMenu_Top();
GPHASE_ENUM one_ClearMenu_Top(GPHASE_ENUM dummy);
void end_ClearMenu_Top();
void init_ClearMenu_Save();
GPHASE_ENUM one_ClearMenu_Save(GPHASE_ENUM dummy);
void end_ClearMenu_Save();
void init_ClearMenu_Album();
GPHASE_ENUM one_ClearMenu_Album(GPHASE_ENUM dummy);
void end_ClearMenu_Album();

#endif // HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_CLEAR_PRG_CLEARMENU_H
