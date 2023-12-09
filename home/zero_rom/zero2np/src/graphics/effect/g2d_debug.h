// STATUS: NOT STARTED

#ifndef HOME_ZERO_ROM_ZERO2NP_SRC_GRAPHICS_EFFECT_G2D_DEBUG_H
#define HOME_ZERO_ROM_ZERO2NP_SRC_GRAPHICS_EFFECT_G2D_DEBUG_H

extern int dither_alp;
extern int dither_col;
extern int hint_test_sw;
extern int hint_test_posx;

void InitShibataSet();
void SetShibataSet();
void CheckHintTex();
void DrawPerformanceCounter2(int draw_counter);

#endif // HOME_ZERO_ROM_ZERO2NP_SRC_GRAPHICS_EFFECT_G2D_DEBUG_H
