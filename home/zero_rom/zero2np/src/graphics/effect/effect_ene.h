// STATUS: NOT STARTED

#ifndef HOME_ZERO_ROM_ZERO2NP_SRC_GRAPHICS_EFFECT_EFFECT_ENE_H
#define HOME_ZERO_ROM_ZERO2NP_SRC_GRAPHICS_EFFECT_EFFECT_ENE_H

typedef unsigned int size_t;
typedef float sceVu0FVECTOR[4];

typedef struct {
	float npos[4];
	sceVu0FVECTOR *oposp;
	float *wmtxp[4][4];
	int time;
	short int top;
	short int num;
	float xp;
	float xm;
	float rot;
	float rotp;
	float x;
	float y;
	float n;
	float cnt;
} NEW_PERTICLE;

struct fixed_array<float[4],2> : fixed_array_base<float[4],2,float[2][4]> {
};

struct fixed_array<float,4> : fixed_array_base<float,4,float[4]> {
};

struct fixed_array<int,4> : fixed_array_base<int,4,int[4]> {
};

typedef struct {
	fixed_array<float[4],2> wbpos;
	fixed_array<float,4> scw;
	fixed_array<float,4> sch;
	fixed_array<float,4> rot_z;
	fixed_array<float,4> alp;
	fixed_array<int,4> cnt;
	fixed_array<int,4> flow;
	int enedmg_no;
	int enedmg1_flg;
	int enedmg_chance;
	int dummy;
} ENDMG1;

typedef struct {
	int enedmg_no;
	int enedmg2_flg;
	int enedmg_chance;
} ENDMG2;

typedef struct {
	int CenterRgba[4];
	int OutsideRgba[4];
	int VertexNumW;
	int VertexNumH;
	int Size;
	int LastScale;
	int AllFrame;
	int MoveDist;
	int Distance;
	int RotVal;
	int CaptureInterval;
	int CaptureNumber;
	int AlphaBlendA;
	int AlphaBlendB;
	int AlphaBlendC;
	int AlphaBlendD;
	int AlphaBlendFIX;
} ENE_DMG_LARGE_HIT_PARAMETER;

typedef struct {
	int StartFrame;
	int InTime;
	int KeepTime;
	int OutTime;
	int MinBlurScale;
	int MaxBlurScale;
	int MinBlurAlpha;
	int MaxBlurAlpha;
	int MinBlurRot;
	int MaxBlurRot;
	int BlurOnFlg;
	int MinContrastColor;
	int MaxContrastColor;
	int MinContrastAlpha;
	int MaxContrastAlpha;
	int ContrastOnFlg;
	int CameraShakeOnFlg;
	int CameraShakeFrame;
	int PadVibrateOnFlg;
	int PadVibrateFrame;
} ENE_DMG_BLUR_CONTRAST_PARAMETER;

struct fixed_array<unsigned char,4> : fixed_array_base<unsigned char,4,unsigned char[4]> {
};

typedef struct {
	float CenterPos[4];
	long int AlphaBlend;
	float Scale;
	float LastScale;
	float MoveDist;
	float Distance;
	float RotVal;
	u_int VertexNumW;
	u_int VertexNumH;
	u_int NowFrame;
	u_int AllFrame;
	u_int CaptureInterval;
	u_int CaptureNumber;
	fixed_array<unsigned char,4> CenterRgba;
	fixed_array<unsigned char,4> OutsideRgba;
	u_int InitCenterAlpha;
	u_int InitOutsideAlpha;
	int Delay;
} ENE_DMG_LARGE_HIT;

struct fixed_array<ENE_DMG_LARGE_HIT,2> : fixed_array_base<ENE_DMG_LARGE_HIT,2,ENE_DMG_LARGE_HIT[2]> {
};

typedef struct {
	fixed_array<ENE_DMG_LARGE_HIT,2> Work;
	fixed_array<int,2> Status;
} ENE_DMG_LARGE_HIT_CTRL;

typedef struct {
	float Center[4];
	float rpos[4];
	float rrad;
	float rrot;
	float racc;
	float rbrk;
	float ralp;
	float rrad_max;
	float cnt_f;
	float cnt_spd;
	float rot_spd;
	int anm_count;
	float AlphaRate;
} ENEDMG_PARTICLE_ONE;

typedef struct {
	float StartPos[4];
	float *pEndPos[4];
	int ParticleNum;
	float DistPE;
	int SuctionFlg;
	int EffectType;
} ENE_DMG_PARTICLE_REQ;

extern ENE_DMG_LARGE_HIT_PARAMETER SmallHit;
extern ENE_DMG_LARGE_HIT_PARAMETER LargeHitType00;
extern ENE_DMG_LARGE_HIT_PARAMETER LargeHitSPAType00;
extern ENE_DMG_LARGE_HIT_PARAMETER LargeHitSPBType00;
extern ENE_DMG_LARGE_HIT_PARAMETER SlowHitAType00;
extern ENE_DMG_LARGE_HIT_PARAMETER SlowHitBType00;
extern ENE_DMG_LARGE_HIT_PARAMETER ZeroHitA;
extern ENE_DMG_LARGE_HIT_PARAMETER ZeroHitB;
extern ENE_DMG_LARGE_HIT_PARAMETER ZeroHitSCA;
extern ENE_DMG_LARGE_HIT_PARAMETER ZeroHitSCB;
extern ENE_DMG_LARGE_HIT_PARAMETER ZeroHitSPA;
extern ENE_DMG_LARGE_HIT_PARAMETER ZeroHitSPB;
extern ENE_DMG_LARGE_HIT_PARAMETER KokuHitA;
extern ENE_DMG_LARGE_HIT_PARAMETER KokuHitB;
extern ENE_DMG_LARGE_HIT_PARAMETER KokuHitSCA;
extern ENE_DMG_LARGE_HIT_PARAMETER KokuHitSCB;
extern ENE_DMG_LARGE_HIT_PARAMETER KokuHitSPA;
extern ENE_DMG_LARGE_HIT_PARAMETER KokuHitSPB;
extern ENE_DMG_LARGE_HIT_PARAMETER ParalyzeHitA;
extern ENE_DMG_LARGE_HIT_PARAMETER ParalyzeHitB;
extern ENE_DMG_LARGE_HIT_PARAMETER ViewHitA;
extern ENE_DMG_LARGE_HIT_PARAMETER ViewHitB;
extern ENE_DMG_LARGE_HIT_PARAMETER MetsuHitA;
extern ENE_DMG_LARGE_HIT_PARAMETER MetsuHitB;
extern ENE_DMG_LARGE_HIT_PARAMETER MetsuHitSCA;
extern ENE_DMG_LARGE_HIT_PARAMETER MetsuHitSCB;
extern ENE_DMG_LARGE_HIT_PARAMETER MetsuHitSPA;
extern ENE_DMG_LARGE_HIT_PARAMETER MetsuHitSPB;
extern ENE_DMG_LARGE_HIT_PARAMETER RenHitA;
extern ENE_DMG_LARGE_HIT_PARAMETER RenHitB;
extern ENE_DMG_LARGE_HIT_PARAMETER RenHitSCA;
extern ENE_DMG_LARGE_HIT_PARAMETER RenHitSCB;
extern ENE_DMG_LARGE_HIT_PARAMETER RenHitSPA;
extern ENE_DMG_LARGE_HIT_PARAMETER RenHitSPB;
extern ENE_DMG_LARGE_HIT_PARAMETER TsuiHitA;
extern ENE_DMG_LARGE_HIT_PARAMETER TsuiHitB;
extern ENE_DMG_LARGE_HIT_PARAMETER FuuHitA;
extern ENE_DMG_LARGE_HIT_PARAMETER FuuHitB;
extern ENE_DMG_BLUR_CONTRAST_PARAMETER SmallHit_Blur;
extern ENE_DMG_BLUR_CONTRAST_PARAMETER LargeHit_Blur;
extern ENE_DMG_BLUR_CONTRAST_PARAMETER LargeHitSP_Blur;
extern ENE_DMG_BLUR_CONTRAST_PARAMETER SlowHit_Blur;
extern ENE_DMG_BLUR_CONTRAST_PARAMETER ZeroHit_Blur;
extern ENE_DMG_BLUR_CONTRAST_PARAMETER ZeroHitSC_Blur;
extern ENE_DMG_BLUR_CONTRAST_PARAMETER ZeroHitSP_Blur;
extern ENE_DMG_BLUR_CONTRAST_PARAMETER KokuHit_Blur;
extern ENE_DMG_BLUR_CONTRAST_PARAMETER KokuHitSC_Blur;
extern ENE_DMG_BLUR_CONTRAST_PARAMETER KokuHitSP_Blur;
extern ENE_DMG_BLUR_CONTRAST_PARAMETER ParalyzeHit_Blur;
extern ENE_DMG_BLUR_CONTRAST_PARAMETER ViewHit_Blur;
extern ENE_DMG_BLUR_CONTRAST_PARAMETER MetsuHit_Blur;
extern ENE_DMG_BLUR_CONTRAST_PARAMETER MetsuHitSC_Blur;
extern ENE_DMG_BLUR_CONTRAST_PARAMETER MetsuHitSP_Blur;
extern ENE_DMG_BLUR_CONTRAST_PARAMETER RenHit_Blur;
extern ENE_DMG_BLUR_CONTRAST_PARAMETER RenHitSC_Blur;
extern ENE_DMG_BLUR_CONTRAST_PARAMETER RenHitSP_Blur;
extern ENE_DMG_BLUR_CONTRAST_PARAMETER TsuiHit_Blur;
extern ENE_DMG_BLUR_CONTRAST_PARAMETER FuuHit_Blur;
extern fixed_array<ENDMG1,10> enedmg1;
extern ENE_DMG_LARGE_HIT_CTRL EneDmgLargeHitCtrl;
extern float enedmg2_sp;
extern int SEC0;
extern int SEC1;
extern int SEC2;
extern int SEC3;
extern int SEC4;
extern int SEC5;
extern unsigned char ENDMG1 type_info node[8];
extern unsigned char ENE_WRK type_info node[8];
extern unsigned char float [3] type_info node[8];
extern unsigned char SPRT_DAT type_info node[8];
extern unsigned char NEW_PERTICLE type_info node[8];
extern unsigned char float [3][3] type_info node[8];
extern unsigned char TAIL_DMG2_DAT type_info node[8];
extern unsigned char ENEDMG_PARTICLE_ONE type_info node[8];
extern unsigned char int [3] type_info node[8];
extern unsigned char ENE_DMG_LARGE_HIT type_info node[8];
extern unsigned char ENE_DMG_LARGE_HIT_PARAMETER * type_info node[12];
extern unsigned char ENE_DMG_BLUR_CONTRAST_PARAMETER * type_info node[12];
extern unsigned char ENE_DMG_LARGE_HIT_PARAMETER type_info node[8];
extern unsigned char ENE_DMG_BLUR_CONTRAST_PARAMETER type_info node[8];
extern ENDMG2 enedmg2;
extern ENE_HIT_EFFECT_CTRL EneHitEffectCtrl;
extern int eneseal_status;
extern int enedmg_status;
extern SWORD_LINE sw_line;
extern ENE_DMG_EFF ene_dmg_eff;
extern SINGLE_LINK_LIST EneParticleList;
extern SINGLE_LINK_LIST EffectEndParticleList;

void InitEffectEne();
void InitEffectEneEF();
void SetEneDmgEffect1_Sub();
void SetEneDmgEffect2_Sub();
void SetEneDmgEffect2();
void EneHitEffectReq(int EneWrkNo, float *EneMposP0, int HitEffectLabel);
void EneHitEffectMain();
void EneDmgScreenEffectReq(float *EneMposP0, int DmgType, int EneStatus, float DistPE);
int EneDmgParticleEffectReq(ENE_DMG_PARTICLE_REQ *pEneDmgReq);
int EffectEndParticleEffectReq(ENE_DMG_PARTICLE_REQ *pEneDmgReq);
void EneDmgParticleEndPosSet(float *pEndPos[4]);
void EneDmgMain();
void EffectEndParticleMain();
int IsActiveEneDmgParticle();
int EneDmgParticleSuctionNumGet();
void EneDmgLargeHitReq(int EffectType);
void EneDmgLargeHitAllOff();
void EneDmgLargeHitMakePacket(sceVu0FVECTOR *pVertexBuf, int VertexNum, float *LocalWorldMat[4], u_char *pCenterRgba, u_char *pOutsideRgba, sceVu0FVECTOR *pStq, u_long tex0);
ENE_DMG_LARGE_HIT_PARAMETER* EffEneDmgLargeHitParameterPtrGet(int Label);
ENE_DMG_BLUR_CONTRAST_PARAMETER* EffEneDmgLargeHitBlurParameterPtrGet(int Label);
ENDMG1* ENDMG1 * _fixed_array_verifyrange<ENDMG1>(size_t v, size_t _max);
ENE_WRK* ENE_WRK * _fixed_array_verifyrange<ENE_WRK>(size_t v, size_t _max);
sceVu0FVECTOR* float [3] * _fixed_array_verifyrange<float [3]>(size_t v, size_t _max);
float* float * _fixed_array_verifyrange<float>(size_t v, size_t _max);
int* int * _fixed_array_verifyrange<int>(size_t v, size_t _max);
u_long* unsigned long * _fixed_array_verifyrange<unsigned long>(size_t v, size_t _max);
SPRT_DAT* SPRT_DAT * _fixed_array_verifyrange<SPRT_DAT>(size_t v, size_t _max);
u_int* unsigned int * _fixed_array_verifyrange<unsigned int>(size_t v, size_t _max);
NEW_PERTICLE* NEW_PERTICLE * _fixed_array_verifyrange<NEW_PERTICLE>(size_t v, size_t _max);
float*[4][4] float [3][3] * _fixed_array_verifyrange<float [3][3]>(size_t v, size_t _max);
TAIL_DMG2_DAT* TAIL_DMG2_DAT * _fixed_array_verifyrange<TAIL_DMG2_DAT>(size_t v, size_t _max);
ENEDMG_PARTICLE_ONE* ENEDMG_PARTICLE_ONE * _fixed_array_verifyrange<ENEDMG_PARTICLE_ONE>(size_t v, size_t _max);
int*[4] int [3] * _fixed_array_verifyrange<int [3]>(size_t v, size_t _max);
ENE_DMG_LARGE_HIT* ENE_DMG_LARGE_HIT * _fixed_array_verifyrange<ENE_DMG_LARGE_HIT>(size_t v, size_t _max);
u_char* unsigned char * _fixed_array_verifyrange<unsigned char>(size_t v, size_t _max);
ENE_DMG_LARGE_HIT_PARAMETER** ENE_DMG_LARGE_HIT_PARAMETER * * _fixed_array_verifyrange<ENE_DMG_LARGE_HIT_PARAMETER *>(size_t v, size_t _max);
ENE_DMG_BLUR_CONTRAST_PARAMETER** ENE_DMG_BLUR_CONTRAST_PARAMETER * * _fixed_array_verifyrange<ENE_DMG_BLUR_CONTRAST_PARAMETER *>(size_t v, size_t _max);
void EneDmgParticleOneDraw(ENEDMG_PARTICLE_ONE *pEneParticle, float rot_x, float rot_y, int r, int g, int b, float AlphaRate, int Type);
type_info& ENDMG1 type_info function();
type_info& ENE_WRK type_info function();
type_info& float [3] type_info function();
type_info& SPRT_DAT type_info function();
type_info& NEW_PERTICLE type_info function();
type_info& float [3][3] type_info function();
type_info& TAIL_DMG2_DAT type_info function();
type_info& ENEDMG_PARTICLE_ONE type_info function();
type_info& int [3] type_info function();
type_info& ENE_DMG_LARGE_HIT type_info function();
type_info& ENE_DMG_LARGE_HIT_PARAMETER * type_info function();
type_info& ENE_DMG_BLUR_CONTRAST_PARAMETER * type_info function();
type_info& ENE_DMG_LARGE_HIT_PARAMETER type_info function();
type_info& ENE_DMG_BLUR_CONTRAST_PARAMETER type_info function();

#endif // HOME_ZERO_ROM_ZERO2NP_SRC_GRAPHICS_EFFECT_EFFECT_ENE_H
