// STATUS: NOT STARTED

#ifndef HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_GAMEOVER_PRG_GAMEOVER_H
#define HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_GAMEOVER_PRG_GAMEOVER_H


void GameOverScreenBgDisp(u_char alpha, u_char r, u_char g, u_char b, u_int pri);
void init_Story_GameOver_Eff();
GPHASE_ENUM one_Story_GameOver_Eff(GPHASE_ENUM dummy);
void end_Story_GameOver_Eff();
void init_Story_GameOver_Fade();
GPHASE_ENUM one_Story_GameOver_Fade(GPHASE_ENUM dummy);
void end_Story_GameOver_Fade();
void init_Story_GameOver_Movie();
GPHASE_ENUM one_Story_GameOver_Movie(GPHASE_ENUM dummy);
void end_Story_GameOver_Movie();

#endif // HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_GAMEOVER_PRG_GAMEOVER_H
