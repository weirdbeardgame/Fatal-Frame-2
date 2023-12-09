// STATUS: NOT STARTED

#ifndef HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_MENU_ANIM_2D_H
#define HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_MENU_ANIM_2D_H

typedef struct {
	float start_pos;
	float end_pos;
	short int start_time;
	short int end_time;
	int anim_label;
} POS_ANIM_TBL;

typedef struct {
	float start_scl;
	float end_scl;
	short int start_time;
	short int end_time;
} SCL_ANIM_TBL;

typedef struct {
	short int start_alpha;
	short int end_alpha;
	short int start_time;
	short int end_time;
} ALPHA_ANIM_TBL;

typedef struct {
	short int start_rgb;
	short int end_rgb;
	short int start_time;
	short int end_time;
} RGB_ANIM_TBL;

typedef struct {
	float start_rot;
	float end_rot;
	short int start_time;
	short int end_time;
} ROT_ANIM_TBL;

float Anim2D_CalcNowPos(POS_ANIM_TBL *tbl, int timer);
float Anim2D_CalcNowScale(SCL_ANIM_TBL *tbl, int timer);
u_char Anim2D_CalcNowAlpha(ALPHA_ANIM_TBL *tbl, int timer);
u_char Anim2D_CalcNowRGB(RGB_ANIM_TBL *tbl, int timer);
float Anim2D_CalcNowRot(ROT_ANIM_TBL *tbl, int timer);
float Anim2D_CalcPosAnim(float start_pos, float end_pos, int calc_label, int anim_time, int timer);
u_char Anim2D_CalcAlphaAnim(u_char start_alpha, u_char end_alpha, int anim_time, int timer);

#endif // HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_MENU_ANIM_2D_H
