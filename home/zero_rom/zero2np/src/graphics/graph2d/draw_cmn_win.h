// STATUS: NOT STARTED

#ifndef HOME_ZERO_ROM_ZERO2NP_SRC_GRAPHICS_GRAPH2D_DRAW_CMN_WIN_H
#define HOME_ZERO_ROM_ZERO2NP_SRC_GRAPHICS_GRAPH2D_DRAW_CMN_WIN_H

void DrawCmnWindow(u_int pri, float x, float y, float sizew, float sizeh, u_char alpha, u_char max_alpha);
void DrawCmnTwoLineWindow(u_int pri, float x, float y, float sizew, float sizeh, u_char alpha, u_char max_alpha);
void DrawCmnFileWindow(int file_type, int file_id, u_int pri, u_char alpha, u_char max_alpha);
void DrawCmnYesNoSel(int cursor, float y, u_char alpha, u_int pri);
void DrawCmnSelFrame(u_int pri, float x, float y, u_char alpha, float w);
void DrawCmnSelYes(u_int pri, float x, float y, u_char alpha);
void DrawCmnSelNo(u_int pri, float x, float y, u_char alpha);
void DrawCmnSelCsr(u_int pri, float x, float y, u_char alpha, float w, u_char flg);
void DrawCmnTriCsrL(u_int pri, float x, float y, u_char alpha, u_char rgb);
void DrawCmnTriCsrR(u_int pri, float x, float y, u_char alpha, u_char rgb);

#endif // HOME_ZERO_ROM_ZERO2NP_SRC_GRAPHICS_GRAPH2D_DRAW_CMN_WIN_H
