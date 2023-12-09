// STATUS: NOT STARTED

#ifndef HOME_ZERO_ROM_ZERO2NP_SRC_GRAPHICS_EFFECT_EFFECT_OTH_H
#define HOME_ZERO_ROM_ZERO2NP_SRC_GRAPHICS_EFFECT_EFFECT_OTH_H

typedef int sceVu0IVECTOR[4];

typedef struct {
	int fl;
	u_char r;
	u_char g;
	u_char b;
	u_char a;
	float mang;
	float cnt;
	float pos[4];
	float opos[4];
	float vel[4];
	float ang[4];
} EFF_LEAF_ONE;

struct fixed_array<EFF_LEAF_ONE,16> : fixed_array_base<EFF_LEAF_ONE,16,EFF_LEAF_ONE[16]> {
};

typedef struct {
	int flag;
	int type;
	float bpos[4];
	fixed_array<EFF_LEAF_ONE,16> lo;
} EFF_LEAF;

typedef struct {
	float position[4];
	float color[4];
	float velocity[4];
	float acceleration[4];
	float alp_step;
	int lifetime;
	int BaseLifeTime;
	float Scale;
} PARTICLE;

struct fixed_array<PARTICLE,200> : fixed_array_base<PARTICLE,200,PARTICLE[200]> {
};

typedef struct {
	fixed_array<PARTICLE,200> particles;
	int head;
	int cnt;
	short int flag;
	short int max;
	short int disp;
	short int blife;
} HEAT_HAZE;

typedef struct {
	int AreaRadius;
	int MaxY;
	int MinY;
	int Frequency;
	int SpeedXMax;
	int SpeedXMin;
	int SpeedYMax;
	int SpeedYMin;
	int SpeedZMax;
	int SpeedZMin;
	int AllSpeedX_1;
	int AllSpeedY_1;
	int AllSpeedZ_1;
	int AllSpeedX_2;
	int AllSpeedY_2;
	int AllSpeedZ_2;
	int AllSpeedX_3;
	int AllSpeedY_3;
	int AllSpeedZ_3;
	int AllSpeedTime_1;
	int AllSpeedTime_2;
	int AllSpeedTime_3;
	int Alpha;
	int AlphaInTime;
	int AlphaKeepTime;
	int AlphaOutTime;
	int StartScale;
	int EndScale;
	int R;
	int G;
	int B;
	int RotZMax;
	int RotZMin;
	int RotZTime;
	int AlphaBlendA;
	int AlphaBlendB;
	int AlphaBlendC;
	int AlphaBlendD;
	int AlphaBlendFIX;
	int OffsetX;
	int OffsetY;
	int OffsetZ;
} HAZE_PARAMETER;

typedef struct {
	float Position[4];
	float Velocity[4];
	int Lifetime;
	int Alpha;
	float Scale;
	float RotZ;
	float RotZSpeed;
} HAZE_PARTICLE;

typedef struct {
	float Position[4];
	int Alpha;
	int FreaAlpha;
	int Count;
} MANY_CANDLE_PARTICLE;

extern HAZE_PARAMETER HazeParameter;
extern HAZE_PARAMETER KusabiHazeParameter;
extern HAZE_PARAMETER SaeHazeParameter;
extern int stop_lf;
extern DOOR_SEAL_DISAPPEAR_CTRL DoorSealDisappearCtrl;
extern float CandleFlameScaleData[150][2];
extern float CandleFlameScaleData2[75][2];
extern unsigned char HEAT_HAZE type_info node[8];
extern unsigned char MANY_CANDLE_PARTICLE type_info node[8];
extern unsigned char int [3] type_info node[8];
extern unsigned char PARTICLE type_info node[8];
extern unsigned char EFF_LEAF type_info node[8];
extern unsigned char EFF_LEAF_ONE type_info node[8];
extern unsigned char HAZE_PARTICLE type_info node[8];
extern MANY_CANDLE_LOAD_CTRL ManyCandleLoadCtrl;
extern SINGLE_LINK_LIST ItemEffectList;
extern THUNDER_LIGHT_CTRL ThunderLightCtrl;

void InitEffectOth();
void InitEffectOthEF();
void* CallFire(void *pos, u_char r, u_char g, u_char b, float scale);
void* CallFire2(void *pos, u_char r, u_char g, u_char b, float scl, u_char r2, u_char g2, u_char b2, float scl2);
void* CallFire3(void *pos, int type, u_char r, u_char g, u_char b, float scl, u_char r2, u_char g2, u_char b2, float scl2);
void DrawFrea(float *Position, float Scale, int Depth, int R, int G, int B, int Alpha);
void EffOthCandleFlameYuramekiReq(EFFECT_CONT *pEffCont, float *PlayerPos);
void EffOthCandleFlameFlareUpReq(EFFECT_CONT *pEffCont);
void SetFire(EFFECT_CONT *ec);
void EffectManyCandleLoadReq(float *Offset);
void EffectManyCandleLoadCut();
void SetManyCandle(EFFECT_CONT *ec);
void EffectManyCandleCut(void *pEffect);
void EffectCandleFlameDraw(float *Position, int *Color, float Scale, int Count);
void SetHalo(EFFECT_CONT *ec);
void SubHalo(float *p, int type, int textp, u_int z, u_char r, u_char g, u_char b, u_char alp, float sc);
void InitHeatHaze();
int draw_distortion_particles2(float *local_screen[4][4], float *local_clip[4][4], int t_particles, PARTICLE *pParticles, float psize, u_long Tex0, u_long AlphaBlend);
void add_particle(int type, HEAT_HAZE *hh, float *pos, float *vel, float r, float g, float b, float a);
void update_particles(PARTICLE *prt);
void add_particle2(int type, HEAT_HAZE *hh, float *pos, float *vel, float r, float g, float b, float a);
void update_particles2(HEAT_HAZE *hh, float lng, float arate);
void* ContHeatHaze(void *addr, int type, float *pos, float *pos2, int st, float r, float g, float b, float a, float size, float arate);
void SetPartInit(HEAT_HAZE *addr, int type, int lifetime);
void* GetEnePartAddr(void *addr, int type, int lifetime);
void* GetAmuPartAddr(void *addr, int type, int lifetime);
void* GetTorchPartAddr(void *addr, int type, int lifetime);
void ItemEffectReq(float *Pos, int ItemNo, int EffectType);
void ItemEffectCut(int ItemNo);
void ItemEffectAllCut();
void ItemEffectDrawOne(int ItemNo);
void SetEneFire(EFFECT_CONT *ec);
void CallAmuletFire();
void* ContTorch(void *addr, int type, float *pos, float *pos2, int st, float r, float g, float b, float a, float size, float arate, int tp2, float ar, float sr);
void SetTorch(EFFECT_CONT *ec);
int UpdateCloudOfDustParticles(PARTICLE *pPtop, float BrakeRate, int StartAlpha, int EndAlpha, float StartScale, float EndScale);
void SetDust(EFFECT_CONT *ec);
void SetDustLeaf(float *pos, int type);
void SetLeaf(float *pos);
void SetDust2(float *pos);
void RunLeafSub(EFF_LEAF *lep);
void RunLeaf();
void* EffectHazeReq(float *CenterPos);
void EffectHazeReqId(float *CenterPos, int Id);
void* EffectKusabiHazeReq(float *pCenterPos[4], float *pRot[4], float *pAlphaRate);
void* EffectSaeHazeReq(float *pCenterPos[4], float *pRot[4], float *pAlphaRate);
void EffectSaeHazSetNoDrawFlg(int iFlg);
void EffectHazeCut(void *pEffect);
void EffectHazeCutId(int Id);
void EffectKusabiHazeCut(void *pEffect);
void EffectSaeHazeCut(void *pEffect);
void SetHaze(EFFECT_CONT *ec);
HAZE_PARAMETER* EffectHazeGetParameterPtr(int Type);
HAZE_PARAMETER* EffectHazeGetParameterPtrOrg(int Type);
void EffectThunderLightReq(float *LightningDirection, int DelayTime, float *ThunderPosition);
void EffectThunderLightExec();
void EffectThunderLightSetRoomLight();
void EffectThunderLightGetG3dLight(G3DLIGHT *pLight);
int EffectThunderLightGetLightningFlg();
void SetDoorSeal(EFFECT_CONT *ec);
void DoorSealDisappearReq();
int DoorSealDisappearIsEnd();
void DoorSealDisappearEndProc();
void DoorSealDisappearDraw();
HEAT_HAZE* HEAT_HAZE * _fixed_array_verifyrange<HEAT_HAZE>(size_t v, size_t _max);
float* float * _fixed_array_verifyrange<float>(size_t v, size_t _max);
MANY_CANDLE_PARTICLE* MANY_CANDLE_PARTICLE * _fixed_array_verifyrange<MANY_CANDLE_PARTICLE>(size_t v, size_t _max);
sceVu0IVECTOR* int [3] * _fixed_array_verifyrange<int [3]>(size_t v, size_t _max);
int* int * _fixed_array_verifyrange<int>(size_t v, size_t _max);
PARTICLE* PARTICLE * _fixed_array_verifyrange<PARTICLE>(size_t v, size_t _max);
EFF_LEAF* EFF_LEAF * _fixed_array_verifyrange<EFF_LEAF>(size_t v, size_t _max);
EFF_LEAF_ONE* EFF_LEAF_ONE * _fixed_array_verifyrange<EFF_LEAF_ONE>(size_t v, size_t _max);
HAZE_PARTICLE* HAZE_PARTICLE * _fixed_array_verifyrange<HAZE_PARTICLE>(size_t v, size_t _max);
type_info& HEAT_HAZE type_info function();
type_info& MANY_CANDLE_PARTICLE type_info function();
type_info& int [3] type_info function();
type_info& PARTICLE type_info function();
type_info& EFF_LEAF type_info function();
type_info& EFF_LEAF_ONE type_info function();
type_info& HAZE_PARTICLE type_info function();

#endif // HOME_ZERO_ROM_ZERO2NP_SRC_GRAPHICS_EFFECT_EFFECT_OTH_H
