// STATUS: NOT STARTED

#ifndef HOME_ZERO_ROM_ZERO2NP_SRC_OUTGAME_SETUP_H
#define HOME_ZERO_ROM_ZERO2NP_SRC_OUTGAME_SETUP_H


void SetupInit();
void SetupBackGroundLoadReq();
void SetupMain();
void SetupReturnTitleReq();
void* GetSetupBgPk2Addr();
void* GetSetupFontPk2Addr();
void* GetSetupMsnslPk2Addr();
void SetupMemFree();
void SetupDispMain();
void SetupBlackBgDisp(int off_x, int off_y, u_char alpha);
void init_Title_SetupMenu();
GPHASE_ENUM one_Title_SetupMenu(GPHASE_ENUM dummy);
void end_Title_SetupMenu();
void init_Title_Mission();
GPHASE_ENUM pre_Title_Mission(GPHASE_ENUM dummy);
GPHASE_ENUM after_Title_Mission(GPHASE_ENUM result);
void end_Title_Mission();
void init_Mission_Sel();
GPHASE_ENUM one_Mission_Sel(GPHASE_ENUM dummy);
void end_Mission_Sel();
void init_Mission_Cam();
GPHASE_ENUM one_Mission_Cam(GPHASE_ENUM dummy);
void end_Mission_Cam();
void init_Mission_Album();
GPHASE_ENUM one_Mission_Album(GPHASE_ENUM dummy);
void end_Mission_Album();
void init_Mission_Save();
GPHASE_ENUM one_Mission_Save(GPHASE_ENUM dummy);
void end_Mission_Save();

#endif // HOME_ZERO_ROM_ZERO2NP_SRC_OUTGAME_SETUP_H
