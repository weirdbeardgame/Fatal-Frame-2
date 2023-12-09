// STATUS: NOT STARTED

#ifndef HOME_ZERO_ROM_ZERO2NP_SRC_GRAPHICS_EFFECT_EFFECT_OBJ_H
#define HOME_ZERO_ROM_ZERO2NP_SRC_GRAPHICS_EFFECT_EFFECT_OBJ_H

typedef struct {
	float r;
	float add;
	float h;
	float x;
	float y;
	float z;
	float ox;
	float oy;
	float oz;
	float lng;
} EFFPOS;

struct fixed_array<EFFPOS,289> : fixed_array_base<EFFPOS,289,EFFPOS[289]> {
};

typedef struct {
	fixed_array<EFFPOS,289> ep;
	short int use;
	short int pass;
	float r;
} EFFINFO2;

typedef struct {
	void *pSgdTop;
	float TotalS;
	float TotalT;
	int MapBuffId;
	int AlphaMax;
	int Type;
} LIGHT_COME_IN_DATA;

typedef struct {
	void *pHandle;
	int Id;
	float ScaleX;
	float ScaleY;
	int Alpha;
	int Time;
	int Counter;
	int FlameCounter;
} TOUROU_FREA_DATA;

typedef struct {
	sceVu0IVECTOR Color;
	void *pSgdTop;
	int Id;
	int Time;
	int Counter;
} TOUROU_BASE_DATA;

extern fixed_array<EFFINFO2,8> efi;
extern unsigned char EFFINFO2 type_info node[8];
extern unsigned char int [3] type_info node[8];
extern unsigned char EFFPOS type_info node[8];
extern unsigned char float [3] type_info node[8];
extern LIGHT_COME_IN_CTRL LightComeInCtrl;
extern SINGLE_LINK_LIST WaterFlowList;
extern SINGLE_LINK_LIST ModelAlphaChangeList;
extern SINGLE_LINK_LIST TourouFreaList;
extern SINGLE_LINK_LIST TourouBaseList;

void InitEffectObj();
void InitEffectObjEF();
void* CallPartsDeform2(int type, float scale, void *pos, u_int in, u_int keep, u_int out);
void* CallPartsDeform3(int type, float scale, void *pos, u_int in, u_int keep, u_int out, int alp);
void* CallPartsDeform3_2(int type, float sclx, float scly, void *pos, u_int in, u_int keep, u_int out, int alp);
void* CallPartsDeform4(int type, float scale, void *pos, float *vol);
void* CallPartsDeform5(int type, float sclx, float scly, void *pos, float *vol);
void* CallPartsDeform5_2(int type, float sclx, float scly, void *pos, float *vol, float *pSpd, float *pRate);
void* CallPartsDeform6(int type, float scale, void *pos, u_int in, u_int keep, u_int out, int alp, float *pSpd, float *pRate, int r, int g, int b);
void SetPartsDeform(EFFECT_CONT *ec);
int EffectObjPartsDeformBlurCheck(EFFECT_CONT *ec);
void SetVURand(float x);
int CalcPartsDeformXYZ(int *vi, float *vf);
int GetCornHitCheck(float *bpos, float power);
int GetCornHitCheck2(float *bpos, float power, float *rrate, float *lrate);
void SetRenzFlare(EFFECT_CONT *ec);
void EffectLightComeInRegist(void *pSgdTop, int MapBuffId, int Type);
void EffectLightComeInDeleteMapBuffId(int MapBuffId);
void EffectLightComeInExecOne(LIGHT_COME_IN_DATA *pData, int AlphaCalcMode);
LIGHT_COME_IN_DATA* EffectLightComeInGetDataPtr(void *pSgdTop);
void EffectWaterFlowRegist(void *pSgdTop, int Id, int MoveType);
void EffectWaterFlowDelete(int Id);
void EffectWaterFlowExec();
void* EffectCameraFlashReq();
void SetCameraFlash(EFFECT_CONT *ec);
void EffectModelAlphaChangeRegist(void *pSgdTop, int Id);
void EffectModelAlphaChangeDelete(int Id);
void EffectModelAlphaChangeDeleteGroup(int Id);
void EffectModelAlphaChangeExec();
void EffectModelAlphaChangeReq(int Id, int AlphaStart, int AlphaEnd, int Time);
void EffectTourouFreaRegist(void *pHandle, int Id);
void EffectTourouFreaDelete(int Id);
void EffectTourouFreaExecOne(TOUROU_FREA_DATA *pData);
TOUROU_FREA_DATA* EffectTourouFreaGetDataPtr(void *pHandle);
void EffectTourouBaseRegist(void *pSgdTop, int Id);
void EffectTourouBaseDelete(int Id);
void EffectTourouBaseExecOne(TOUROU_BASE_DATA *pData);
TOUROU_BASE_DATA* EffectTourouBaseGetDataPtr(void *pSgdTop);
EFFINFO2* EFFINFO2 * _fixed_array_verifyrange<EFFINFO2>(size_t v, size_t _max);
int* int * _fixed_array_verifyrange<int>(size_t v, size_t _max);
int*[4] int [3] * _fixed_array_verifyrange<int [3]>(size_t v, size_t _max);
EFFPOS* EFFPOS * _fixed_array_verifyrange<EFFPOS>(size_t v, size_t _max);
float*[4] float [3] * _fixed_array_verifyrange<float [3]>(size_t v, size_t _max);
float* float * _fixed_array_verifyrange<float>(size_t v, size_t _max);
type_info& EFFINFO2 type_info function();
type_info& int [3] type_info function();
type_info& EFFPOS type_info function();
type_info& float [3] type_info function();

#endif // HOME_ZERO_ROM_ZERO2NP_SRC_GRAPHICS_EFFECT_EFFECT_OBJ_H
