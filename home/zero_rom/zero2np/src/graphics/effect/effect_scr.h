// STATUS: NOT STARTED

#ifndef HOME_ZERO_ROM_ZERO2NP_SRC_GRAPHICS_EFFECT_EFFECT_SCR_H
#define HOME_ZERO_ROM_ZERO2NP_SRC_GRAPHICS_EFFECT_EFFECT_SCR_H

struct fixed_array<float,3> : fixed_array_base<float,3,float[3]> {
};

typedef struct {
	Q_WORDDATA dat;
	float Pos[4];
	void *pnt[6];
	fixed_array<float,3> fw;
	u_int z;
	u_int flow;
	u_int cnt;
	u_int in;
	u_int keep;
	u_int out;
	u_int max;
	u_char r;
	u_char g;
	u_char b;
	u_char a;
} EFFECT_CONT;

extern EFF_BLUR eff_blur;
extern EFF_FOCUS eff_focus;
extern EFF_DEFORM eff_deform;
extern short int overlap_passflg[2];
extern unsigned char SCREEN_SAVER_TEX type_info node[8];

void InitEffectScr();
void InitEffectScrEF();
void SetWhiteOut();
void SetWhiteIn();
void SetBlackOut();
void SetBlackIn();
void SetWhiteOut2(int time);
void SetWhiteIn2(int time);
void SetBlackOut2(int time);
void SetBlackIn2(int time);
void SetFlash();
void SetBlackFilter(EFFECT_CONT *ec);
void SubBlur(int type, u_char alpha, float scale, float rot, float cx, float cy, int bPhotoType);
void SetBlur(EFFECT_CONT *ec);
void RunBlur(EFFECT_CONT *ec);
void CallBlur(int type, int wait, u_char alpha, float scale, float rot);
void CallBlur2(int in, int keep, int out, u_char alpha, float scale, float rot);
void CallBlur3(int in, int keep, int out, u_char alpha, float scale, float rot, float cx, float cy);
void SetFocus(EFFECT_CONT *ec);
void RunFocus(EFFECT_CONT *ec);
void CallFocus(int type, int wait, int gap);
void CallFocus2(int in, int keep, int out, int max);
void SubDeform(int type, float rate, u_char alp);
void SetDeform(EFFECT_CONT *ec);
void CallDeform2(int in, int keep, int out, int type, int max);
void SubContrast2(u_char col, u_char alp);
void SetContrast2(EFFECT_CONT *ec);
void SubContrast3(u_char col, u_char alp);
void SetContrast3(EFFECT_CONT *ec);
void SubNega(u_char r, u_char g, u_char b, u_char alp, u_char alp2);
void SetNega(EFFECT_CONT *ec);
void* CallNega2(int in, int keep, int out);
void* CallNega(int time);
void SetOverRap(EFFECT_CONT *ec);
void SetForcusDepth(EFFECT_CONT *ec);
void SubDither3(int type, float alp, float spd, u_char alpmx, u_char colmx);
void SetDither3(EFFECT_CONT *ec);
void SubFadeFrame(u_char alp, u_int pri);
void SetFadeFrame(EFFECT_CONT *ec);
void ChangeMonochrome(int sw);
void ScreenSaverDraw();
void BrightnessAdjustmentFilterDraw();
float* float * _fixed_array_verifyrange<float>(size_t v, size_t _max);
SCREEN_SAVER_TEX* SCREEN_SAVER_TEX * _fixed_array_verifyrange<SCREEN_SAVER_TEX>(size_t v, size_t _max);
type_info& SCREEN_SAVER_TEX type_info function();

#endif // HOME_ZERO_ROM_ZERO2NP_SRC_GRAPHICS_EFFECT_EFFECT_SCR_H
