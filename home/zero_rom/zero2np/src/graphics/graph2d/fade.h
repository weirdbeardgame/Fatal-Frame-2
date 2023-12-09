// STATUS: NOT STARTED

#ifndef HOME_ZERO_ROM_ZERO2NP_SRC_GRAPHICS_GRAPH2D_FADE_H
#define HOME_ZERO_ROM_ZERO2NP_SRC_GRAPHICS_GRAPH2D_FADE_H

extern FADE_MODE_CTRL fade_ctrl;

void FadeCtrlInit();
void FadeMain();
int GetFadeState();
void FadeInReq(u_char r, u_char g, u_char b, u_int fade_in_time);
void FadeOutReq(u_char r, u_char g, u_char b, u_int fade_out_time);

#endif // HOME_ZERO_ROM_ZERO2NP_SRC_GRAPHICS_GRAPH2D_FADE_H
