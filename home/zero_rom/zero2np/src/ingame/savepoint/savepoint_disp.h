// STATUS: NOT STARTED

#ifndef HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_SAVEPOINT_SAVEPOINT_DISP_H
#define HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_SAVEPOINT_SAVEPOINT_DISP_H

void SavePoint_MenuWinDisp(int off_x, int off_y, u_char alpha);
void SavePoint_MenuConfWinDisp(int cursor, int off_x, int off_y, u_char alpha);
void SavePoint_BgDisp(int *bg_anim_timer, int *moyou1_anim_timer, int *moyou2_anim_timer, void *pk2_addr);
void SavePoint_BlackBgDisp(u_char alpha);
void SavePointTopCaptionDisp(int off_x, int off_y, u_char alpha);

#endif // HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_SAVEPOINT_SAVEPOINT_DISP_H
