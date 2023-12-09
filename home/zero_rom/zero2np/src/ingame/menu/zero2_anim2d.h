// STATUS: NOT STARTED

#ifndef HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_MENU_ZERO2_ANIM2D_H
#define HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_MENU_ZERO2_ANIM2D_H

u_char Zero2Anim2D_InOutAnimCtrl(char *anim_step, char *anim_timer, short int in_anim_time, short int out_anim_time);
void Zero2Anim2D_CsrAnimCtrl(char *timer, u_char *rgb);
u_char Zero2Anim2D_SelAnimCtrl(char *timer);
u_char Zero2Anim2D_FadeInAnimCtrl(int *timer, short int fade_in_time);
u_char Zero2Anim2D_FadeOutAnimCtrl(int *timer, short int fade_out_time);

#endif // HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_MENU_ZERO2_ANIM2D_H
