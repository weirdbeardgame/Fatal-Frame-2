// STATUS: NOT STARTED

#ifndef HOME_ZERO_ROM_ZERO2NP_SRC_OUTGAME_TITLE_DISP_H
#define HOME_ZERO_ROM_ZERO2NP_SRC_OUTGAME_TITLE_DISP_H

void DispTitleCursorL(float x, float y, u_char alpha, u_char rgb);
void DispTitleCursorR(float x, float y, u_char alpha, u_char rgb);
void DispTitleZeroLogo(int off_x, int off_y, u_char alpha);
void DispTitleTecmoLogo(int off_x, int off_y, u_char alpha);
void DispTitleBack(int *timer, void *tex_addr);
void TitleCaptionDisp(int off_x, int off_y, u_char alpha);

#endif // HOME_ZERO_ROM_ZERO2NP_SRC_OUTGAME_TITLE_DISP_H
