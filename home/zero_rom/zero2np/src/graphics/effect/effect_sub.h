// STATUS: NOT STARTED

#ifndef HOME_ZERO_ROM_ZERO2NP_SRC_GRAPHICS_EFFECT_EFFECT_SUB_H
#define HOME_ZERO_ROM_ZERO2NP_SRC_GRAPHICS_EFFECT_EFFECT_SUB_H

struct fixed_array<unsigned char,10> : fixed_array_base<unsigned char,10,unsigned char[10]> {
};

struct fixed_array<float[4],10> : fixed_array_base<float[4],10,float[10][4]> {
};

typedef struct {
	u_char num;
	fixed_array<unsigned char,10> result;
	fixed_array<float[4],10> p;
} PP_JUDGE;

typedef struct {
	u_long tex1;
	u_long alpha;
	u_long zbuf;
	u_long test;
	u_long clamp;
	u_long prim;
} DRAW_ENV;

extern unsigned char float [3] type_info node[8];
extern SINGLE_LINK_LIST LeavesList;
extern EFFECT_SOUND_CTRL EffectSoundCtrl;

void InitEffectSub();
void SetParam(int alp, int time, u_char r, u_char g, u_char b, int flag);
int ScreenCtrl();
void SetPanel2(u_int pri, float x1, float y1, float x2, float y2, int z, u_char r, u_char g, u_char b, u_char a);
void SetScreenZ(int addr);
void Set3DPosTexure(float *wlm[4], DRAW_ENV *de, int texno, float w, float h, u_char r, u_char g, u_char b, u_char a);
void Set3DPosTexure2(float *wlm[4], DRAW_ENV *de, int texno, float w, float h, u_char r, u_char g, u_char b, u_char a, int MonochroModeFlg);
void CamSave();
int CamChangeCheck();
void CheckPointDepth(PP_JUDGE *ppj);
void GetCamI2DPos(float *pos, float *tx, float *ty);
void Vector2Rot(float *dir, float *x, float *y);
void Get2PosRot(float *v1, float *v2, float *x, float *y);
void Get2PosRot2(float *v1, float *v2, float *x, float *z);
void GetTrgtRotType2(float *p0, float *p1, float *rot, int id);
float Get2PLength(float *v1, float *v2);
int GetYOffset();
float GetYOffsetf();
void LocalCopyZtoBZ();
void LocalCopyBZtoZ();
void LocalCopyLtoBD(int addr, void *outbuf);
void EffectSndInit();
void EffectSndEnd();
void EffectSndCtrl();
void EffectSndFileReadyReq(int FileNo);
void EffectSndFileRelease(int FileNo);
void EffectSndPlay(int FileNo, int No, int Effect, int FadeTime, float *pPosition[4]);
void EffectSndPlayDeleteKey(int FileNo, int No, int Effect, int FadeTime, float *pPosition[4], u_int DeleteKey);
void EffectSndStop(int FileNo, int No, int FadeFlg);
void EffectSndStopDeleteKey(u_int DeleteKey, int FadeFlg);
void EffectSndAllStop();
void EffectSndAllPause();
void EffectSndAllRestart();
void EffectLeavesFallReq(float *CenterPos, int Id);
void EffectLeavesFallCut(int Id);
void EffectLeavesFallExec();
float*[4] float [3] * _fixed_array_verifyrange<float [3]>(size_t v, size_t _max);
u_char* unsigned char * _fixed_array_verifyrange<unsigned char>(size_t v, size_t _max);
short int* short * _fixed_array_verifyrange<short>(size_t v, size_t _max);
type_info& float [3] type_info function();

#endif // HOME_ZERO_ROM_ZERO2NP_SRC_GRAPHICS_EFFECT_EFFECT_SUB_H
