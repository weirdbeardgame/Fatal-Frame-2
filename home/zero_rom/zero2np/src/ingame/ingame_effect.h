// STATUS: NOT STARTED

#ifndef HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_INGAME_EFFECT_H
#define HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_INGAME_EFFECT_H

extern unsigned char SUBFUNC_PDEFORM_CTRL type_info node[8];
extern unsigned char ENE_WRK type_info node[8];
extern unsigned char CVariable<char, 0, 9> type_info node[8];
extern unsigned char CVariable<char, 0, 3> type_info node[8];

void IgEffectInit();
void IgEffectMain();
float*[4] IgEffectParticleEndPosFinderGet();
float*[4] IgEffectParticleEndPosNoFinderGet();
void IgEffectParticleEndPosCalcFinder(float *EndPos);
void IgEffectParticleEndPosCalcNoFinder(float *EndPos);
int CalcParticleNumFromDamage(int damage);
void IgEffectEneDmgReq(int num);
void IgEffectEneParticleDmgReq(int num, int damage);
void IgEffectEneDmgReqZero(int num, int damage);
void IgEffectSubFuncZeroReq(int num, int type);
void IgEffectSubFuncSlowReq(int num);
void IgEffectSubFuncKokuReq(int num, int type);
void IgEffectSubFuncParalyzeReq(int num);
void IgEffectSubFuncViewReq(int num);
void IgEffectSubFuncMetsuReq(int num, int type);
void IgEffectSubFuncRenReq(int num, int type);
void IgEffectSubFuncTsuiReq(int num);
void IgEffectSubFuncFuuReq(int num);
void IgEffectSubFuncPDeformClear(int EneWrkNo);
void IgEffectZeroCamFreqReq();
int IgEffectIsEndParticleSuck();
void IgEffectRenzFlareDispFlgSet(int Flg);
void IgEffectStoryMainScreenEffectReq(SCREEN_EFFECT_PARAMETER *pScreenPara);
int IgEffectStoryMainContrastTypeGet();
int IgEffectStoryMainContrastColorGet();
int IgEffectStoryMainContrastAlphaGet();
void IgEffectDustReq(ANI_CTRL *pAniCtrl, int BoneId, float *Offset);
void IgEffectPlayerDustReq(ANI_CTRL *pAniCtrl, int BoneId);
void IgEffectButterflyReq(float *Position);
void IgEffectButterflyAllCut();
void IgEffectLightComeInModelDraw();
void IgEffectLightComeInModelDrawSub(void *pSgdTop, float *CoordMat[4]);
void IgEffectTourouFreaModelDraw();
void IgEffectTourouFreaModelDrawSub(void *pHandle, float *CoordMat[4]);
void IgEffectTourouBaseModelDraw();
void IgEffectTourouBaseModelDrawSub(void *pSgdTop, float *CoordMat[4]);
void IgEffectEffectEndParticleReq(float *Position, int EffectType);
SUBFUNC_PDEFORM_CTRL* SUBFUNC_PDEFORM_CTRL * _fixed_array_verifyrange<SUBFUNC_PDEFORM_CTRL>(size_t v, size_t _max);
ENE_WRK* ENE_WRK * _fixed_array_verifyrange<ENE_WRK>(size_t v, size_t _max);
type_info& SUBFUNC_PDEFORM_CTRL type_info function();
type_info& ENE_WRK type_info function();

#endif // HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_INGAME_EFFECT_H
