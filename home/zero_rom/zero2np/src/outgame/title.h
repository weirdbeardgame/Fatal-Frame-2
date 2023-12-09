// STATUS: NOT STARTED

#ifndef HOME_ZERO_ROM_ZERO2NP_SRC_OUTGAME_TITLE_H
#define HOME_ZERO_ROM_ZERO2NP_SRC_OUTGAME_TITLE_H


void TitleInit();
void TitleTexBackGroundLoadReq();
void GetTitleTexMem(void **tex_addr, int data_label);
void TitleTexLoadReq(void *tex_addr, int data_label);
void SetTitleStreamID(int stream_id);
void SetTitleSoundID(int sound_id);
void SetTitleLoadFlg(char flg);
void SetTitleBgSendLock(u_char flg);
void* GetTitleBgTexAddr();
void* GetTitleLogoTexAddr();
int GetTitleStreamID();
int GetTitleSoundBankID();
int GetTitleSoundID();
u_char GetTitleAnimRGB();
void* GetOutGameCmnTexAddr();
void TitleEndReq();
void TitleMemFree();
void LiberateTitleTexMem(void **tex_addr);
void init_Title_Mode();
GPHASE_ENUM pre_Title_Mode(GPHASE_ENUM dummy);
GPHASE_ENUM after_Title_Mode(GPHASE_ENUM result);
void end_Title_Mode();
void init_Title_Top();
GPHASE_ENUM one_Title_Top(GPHASE_ENUM dummy);
void end_Title_Top();
void init_Title_Menu();
GPHASE_ENUM one_Title_Menu(GPHASE_ENUM dummy);
void end_Title_Menu();
void init_Title_NewGame();
GPHASE_ENUM one_Title_NewGame(GPHASE_ENUM dummy);
void end_Title_NewGame();
void init_Title_LoadGame();
GPHASE_ENUM one_Title_LoadGame(GPHASE_ENUM dummy);
void end_Title_LoadGame();
void init_Title_Setup();
GPHASE_ENUM pre_Title_Setup(GPHASE_ENUM dummy);
GPHASE_ENUM after_Title_Setup(GPHASE_ENUM result);
void end_Title_Setup();
void init_Title_Album();
GPHASE_ENUM one_Title_Album(GPHASE_ENUM dummy);
void end_Title_Album();
void init_Title_Gallery();
GPHASE_ENUM one_Title_Gallery(GPHASE_ENUM dummy);
void end_Title_Gallery();
void init_Title_Option();
GPHASE_ENUM one_Title_Option(GPHASE_ENUM dummy);
void end_Title_Option();
void init_Title_FrameRate_Sel();
GPHASE_ENUM one_Title_FrameRate_Sel(GPHASE_ENUM dummy);
void end_Title_FrameRate_Sel();
void init_Title_Chapter_Sel();
GPHASE_ENUM one_Title_Chapter_Sel(GPHASE_ENUM dummy);
void end_Title_Chapter_Sel();
void init_Title_Move_Movie();
GPHASE_ENUM one_Title_Move_Movie(GPHASE_ENUM dummy);
void end_Title_Move_Movie();

#endif // HOME_ZERO_ROM_ZERO2NP_SRC_OUTGAME_TITLE_H
