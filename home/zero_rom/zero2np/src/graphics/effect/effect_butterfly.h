// STATUS: NOT STARTED

#ifndef HOME_ZERO_ROM_ZERO2NP_SRC_GRAPHICS_EFFECT_EFFECT_BUTTERFLY_H
#define HOME_ZERO_ROM_ZERO2NP_SRC_GRAPHICS_EFFECT_EFFECT_BUTTERFLY_H

typedef struct {
	int Speed;
	int TurnMax;
	int BureLeftRight;
	int BureUpDown;
	int InTime;
	int OutTime;
	int LockOnIntervalNear;
	int LockOnIntervalMiddle;
	int LockOnIntervalFar;
	int NearDistance;
	int FarDistance;
} BUTTERFLY_TARGET_PARAMETER;

extern BUTTERFLY_TARGET_PARAMETER ButterflyTargetType00;
extern BUTTERFLY_TARGET_PARAMETER ButterflyTargetType01;
extern BUTTERFLY_TARGET_PARAMETER ButterflyTargetType02;
extern BUTTERFLY_TARGET_PARAMETER ButterflyTargetType03;
extern BUTTERFLY_TARGET_PARAMETER ButterflyTargetType04;
extern GRA3DLIGHTDATA ButterflyLight;
extern reference_fixed_array<BUTTERFLY_TARGET_PARAMETER *,5> pButterflyTargetParamPtr;
extern unsigned char GRA3DLIGHTSTATUS type_info node[8];
extern unsigned char BUTTERFLY_TARGET_PARAMETER * type_info node[12];
extern unsigned char BUTTERFLY_TARGET_PARAMETER type_info node[8];
extern BUTTERFLY_DISP_CTRL ButterFlyDispCtrl;
extern BUTTERFLY_PARTICLE_CTRL ButterFlyParticleCtrl;

void EffectButterflyInit();
void EffectSetupButterflyModel();
void EffectReleaseButterflyModel();
int EffectIsReadyButterflyModel();
void EffectInitAniCtrlButterflyOne(ANI_CTRL *pAniCtrl);
void EffectButterflyMain();
void EffectButterflyReq(float *Position);
void EffectButterflyReqTarget(int Id, int Type, float *Position, float *Target);
void EffectButterflyAllCut();
void EffectButterflyFadeOut(int Id);
void EffectButterflyAllFadeOut();
void EffectButterflyChangeTarget(int Id, float *Target);
void EffectButterflyChangeType(int Id, int Type);
void EffectButterflyAllChangeTarget(float *Target);
int EffectButterflyNumGet();
BUTTERFLY_TARGET_PARAMETER* EffectButterflyTargetParameterPtrGetPublic(int Type);
void EffectButterflyParticleInit();
void EffectButterflyParticleMain();
void EffectButterflyParticleAllCut();
GRA3DLIGHTSTATUS* GRA3DLIGHTSTATUS * _fixed_array_verifyrange<GRA3DLIGHTSTATUS>(size_t v, size_t _max);
BUTTERFLY_TARGET_PARAMETER** BUTTERFLY_TARGET_PARAMETER * * _fixed_array_verifyrange<BUTTERFLY_TARGET_PARAMETER *>(size_t v, size_t _max);
type_info& GRA3DLIGHTSTATUS type_info function();
type_info& BUTTERFLY_TARGET_PARAMETER * type_info function();
type_info& BUTTERFLY_TARGET_PARAMETER type_info function();

#endif // HOME_ZERO_ROM_ZERO2NP_SRC_GRAPHICS_EFFECT_EFFECT_BUTTERFLY_H
