// STATUS: NOT STARTED

#ifndef HOME_ZERO_ROM_ZERO2NP_SRC_GRAPHICS_MOTION_MDLACT_H
#define HOME_ZERO_ROM_ZERO2NP_SRC_GRAPHICS_MOTION_MDLACT_H

struct _LOOK_AT_PARAM {
	sceVu0FVECTOR pos;
	float eye_spd;
	float head_spd;
	float chest_spd;
	int enable;
};

typedef _LOOK_AT_PARAM LOOK_AT_PARAM;
float motGetRandom(float upper, float lower);
float motLinearSupValue(float moto, float saki, u_char mode, u_int cnt, u_int all_cnt);
int motGetEneNeckRot(float *trot_m[4], ANI_CTRL *ani_ctrl, SGDCOORDINATE *cp2, float *e_rot);
int motSetNeckWork(ANI_CTRL *ani_ctrl);
void GetNeckPos(float *pos, void *ani_hndl);
int IsTargetInSight(ANI_CTRL *ani_ctrl, float *pos);
int motLookAtCtrl(ANI_CTRL *ani_ctrl, LOOK_AT_PARAM *param);
void movGetMoveval(float *spd, float *old_spd, ANI_CTRL *ani_ctrl, u_int frame_num, float frame_f);

#endif // HOME_ZERO_ROM_ZERO2NP_SRC_GRAPHICS_MOTION_MDLACT_H
