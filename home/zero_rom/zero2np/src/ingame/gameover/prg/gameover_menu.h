// STATUS: NOT STARTED

#ifndef HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_GAMEOVER_PRG_GAMEOVER_MENU_H
#define HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_GAMEOVER_PRG_GAMEOVER_MENU_H


void GetGameOverMenuTexMem(void **tex_addr, int data_label);
void GameOverMenuTexLoadReq(void *tex_addr, int data_label);
void GameOverMenuFadeOutReq();
void LiberateGameOverMenuTexMem(void **tex_addr);
void init_GameOver_Menu();
GPHASE_ENUM pre_GameOver_Menu(GPHASE_ENUM dummy);
GPHASE_ENUM after_GameOver_Menu(GPHASE_ENUM result);
void end_GameOver_Menu();
void init_GameOver_Menu_Top();
GPHASE_ENUM one_GameOver_Menu_Top(GPHASE_ENUM dummy);
void end_GameOver_Menu_Top();
void init_GameOver_Menu_Load();
GPHASE_ENUM one_GameOver_Menu_Load(GPHASE_ENUM dummy);
void end_GameOver_Menu_Load();
void init_GameOver_Menu_Album();
GPHASE_ENUM one_GameOver_Menu_Album(GPHASE_ENUM dummy);
void end_GameOver_Menu_Album();

#endif // HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_GAMEOVER_PRG_GAMEOVER_MENU_H
