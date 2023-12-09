// STATUS: NOT STARTED

#ifndef HOME_ZERO_ROM_ZERO2NP_SRC_GRAPHICS_EFFECT_EFFECT_H
#define HOME_ZERO_ROM_ZERO2NP_SRC_GRAPHICS_EFFECT_EFFECT_H

typedef struct {
	u_char sw;
	u_char alp;
	int scl;
	int rot;
	float x;
	float y;
} BLUR_STR;

typedef struct {
	u_char sw;
	u_char type;
	u_char col;
	u_char alp;
} CONTRAST_STR;

typedef struct {
	u_char sw;
	u_char alp;
} FFRAME_STR;

typedef struct {
	u_char sw;
	u_char type;
	float spd;
	float alp;
	u_char amax;
	u_char cmax;
} DITHER_STR;

typedef struct {
	u_char sw;
	u_char type;
	u_char rate;
} DEFORM_STR;

typedef struct {
	u_char sw;
	u_char col;
	u_char alp;
	u_char alp2;
} NEGA_STR;

typedef struct {
	u_char sw;
} MONO_STR;

typedef struct {
	BLUR_STR bl;
	CONTRAST_STR cn;
	FFRAME_STR ff;
	DITHER_STR dt;
	DEFORM_STR df;
	NEGA_STR ng;
	MONO_STR mn;
} SBTSET;

typedef struct {
	int Z_Dep;
	int Dither;
	int DitherSpeed;
	int DitherAlpha;
	int DitherAlphaMax;
	int DitherColorMax;
	int Blur;
	int BlurAlpha;
	int BlurScale;
	int BlrrRot;
	int Deform;
	int DeformRate;
	int Focus;
	int ColorFilter;
	int BlackFilter;
	int Contrast;
	int ContrastColor;
	int ContrastAlpha;
	int NegaColor;
	int NegaAlpha;
	int NegaAlpha2;
	int FadeFrame;
	int FadeFrameAlpha;
	int Overlap;
} SCREEN_EFFECT_PARAMETER;

struct fixed_array_base<EFFECT_CONT,64,EFFECT_CONT[64]> {
protected:
	EFFECT_CONT m_aData[64];
	
public:
	fixed_array_base<EFFECT_CONT,64,EFFECT_CONT[64]>& operator=();
	fixed_array_base();
protected:
	fixed_array_base();
public:
	EFFECT_CONT& operator[]();
	EFFECT_CONT& operator[]();
	EFFECT_CONT* data();
	EFFECT_CONT* begin();
	EFFECT_CONT* end();
	void fill();
	size_t size();
	bool empty();
};

struct fixed_array<EFFECT_CONT,64> : fixed_array_base<EFFECT_CONT,64,EFFECT_CONT[64]> {
};

extern SCREEN_EFFECT_PARAMETER ScreenEffectParam00;
extern SCREEN_EFFECT_PARAMETER ScreenEffectParam01;
extern SCREEN_EFFECT_PARAMETER ScreenEffectParam02;
extern SCREEN_EFFECT_PARAMETER ScreenEffectParam03;
extern SCREEN_EFFECT_PARAMETER ScreenEffectParam04;
extern SCREEN_EFFECT_PARAMETER ScreenEffectParam05;
extern fixed_array<EFFECT_CONT,64> efcnt;
extern fixed_array<EFFECT_CONT,48> efcntm;
extern fixed_array<EFFECT_CONT,64> efcnt_cnt;
extern fixed_array<EFFECT_CONT,48> efcntm_cnt;
extern reference_fixed_array<SCREEN_EFFECT_PARAMETER *,6> pScreenEffectParamPtr;
extern unsigned char EFFECT_CONT type_info node[8];
extern unsigned char SCREEN_EFFECT_PARAMETER * type_info node[12];
extern unsigned char SCREEN_EFFECT_PARAMETER type_info node[8];
extern SBTSET msbtset;
extern u_char g_bInterlace;
extern int look_debugmenu;

void InitEffects();
void InitEffectsEF();
EFFECT_CONT* EffectGetBufferTopAdrs();
void EffectEndSet();
void* SetEffects(int id, int fl);
void CutEffects(int id);
int EffectDitherIsSet();
void ResetEffects(void *p);
void EffectControl(int no);
void SetBlurOff();
void SetDebugMenuSwitch(int sw);
int GetDebugMenuSwitch();
int EffWrkDispFlgGet();
void EffWrkDispFlgSet(int flg);
int EffWrkMonochroModeGet();
void EffWrkMonochroModeSet(int flg);
int EffWrkStopFlgGet();
void EffWrkStopFlgSet(int flg);
int EffWrkEffectBankGet();
void EffWrkEffectBankSet(int flg);
int EffWrkBlurOffGet();
void EffWrkBlurOffSet(int flg);
int EffWrkDithOffGet();
void EffWrkDithOffSet(int flg);
int EffWrkFilamentOffGet();
void EffWrkFilamentOffSet(int flg);
void EffImageHalf32(u_int *pImage, u_int Width, u_int Height);
void EffScreenEffectStatusSet(int Status);
void EffInKeepOutFlowCtrl(EFFECT_CONT *ec);
void EffectCandleFlameYuramekiCtrl(float *PlayerNowPos, float *PlayerOldPos);
void EffectPhotoPhase();
SCREEN_EFFECT_PARAMETER* EffectGetScreenEffectParamPtr(int EffectNo);
SCREEN_EFFECT_PARAMETER* EffectGetNowScreenEffectParamPtr();
void EffectSetScreenEffectNo(int EffectNo);
int EffectGetScreenEffectNo();
void* EFFECT_MALLOC(int size);
void EFFECT_FREE(void *block);
int EffectExecCheck(void *pEffRet, int EffectType);
EFFECT_CONT* EFFECT_CONT * _fixed_array_verifyrange<EFFECT_CONT>(size_t v, size_t _max);
float* float * _fixed_array_verifyrange<float>(size_t v, size_t _max);
int* int * _fixed_array_verifyrange<int>(size_t v, size_t _max);
SCREEN_EFFECT_PARAMETER** SCREEN_EFFECT_PARAMETER * * _fixed_array_verifyrange<SCREEN_EFFECT_PARAMETER *>(size_t v, size_t _max);
type_info& EFFECT_CONT type_info function();
type_info& SCREEN_EFFECT_PARAMETER * type_info function();
type_info& SCREEN_EFFECT_PARAMETER type_info function();

#endif // HOME_ZERO_ROM_ZERO2NP_SRC_GRAPHICS_EFFECT_EFFECT_H
