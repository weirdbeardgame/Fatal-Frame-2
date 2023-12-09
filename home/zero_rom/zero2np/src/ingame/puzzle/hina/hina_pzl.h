// STATUS: NOT STARTED

#ifndef HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_PUZZLE_HINA_HINA_PZL_H
#define HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_PUZZLE_HINA_HINA_PZL_H


void HinaPuzzleExeInit();
void HinaPuzzleCrossDispInit();
int HinaPuzzleMain();
void HinaPuzzleDispMain();
void HinaPuzzleNumberDisp(int data, int num, float x, float y, u_char alpha, int pri, u_char zero_flg);
void HinaPuzzleNumberDisp_One(int data, float x, float y, u_char alpha, int pri);
void HinaPuzzleCrossScreenDisp(int off_x, int off_y, u_char alpha);

#endif // HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_PUZZLE_HINA_HINA_PZL_H
