// STATUS: NOT STARTED

#ifndef HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_MENU_MENU_CMN_DISP_H
#define HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_MENU_MENU_CMN_DISP_H

extern unsigned char CVariable<char, 0, 3> type_info node[8];
extern unsigned char CVariable<char, 0, 9> type_info node[8];

void MenuPlyrDataDisp(int x, int y, u_char alpha);
void MenuNumberDisp(int data, int num, int x, int y, u_char alpha, int pri, u_char zero_flg);
void MenuCmnConfirmWinDisp(int off_x, int off_y, u_char alpha, u_int pri);
void MenuCmnYesNoWinDisp(int off_x, int off_y, u_char alpha, u_int pri);
void MenuCmnSelFrameDisp(float x, float y, float w, u_char alpha, u_int pri);
void MenuCmnNonSelFrameDisp(float x, float y, float w, u_char alpha, u_int pri);
void MenuCmnLineTateDisp(float x, float y, float h, u_char alpha, u_int pri);
void MenuCmnLineYokoDisp(float x, float y, float w, u_char alpha, u_int pri);
CVariable<char,0,3>* CVariable<char, 0, 3> * _fixed_array_verifyrange<CVariable<char, 0, 3> >(size_t v, size_t _max);
type_info& CVariable<char, 0, 3> type_info function();

#endif // HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_MENU_MENU_CMN_DISP_H
