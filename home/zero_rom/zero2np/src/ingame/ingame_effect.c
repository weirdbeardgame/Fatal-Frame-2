// STATUS: NOT STARTED

#include "ingame_effect.h"

typedef enum {
	PDEFORM_TYPE_ZERO = 0,
	PDEFORM_TYPE_SLOW = 1,
	PDEFORM_TYPE_KOKU = 2,
	PDEFORM_TYPE_PARALYZE = 3,
	PDEFORM_TYPE_VIEW = 4,
	PDEFORM_TYPE_METSU = 5,
	PDEFORM_TYPE_REN = 6,
	PDEFORM_TYPE_TSUI = 7,
	PDEFORM_TYPE_FUU = 8,
	PDEFORM_TYPE_FREQ = 9
} SUBFUNC_PDEFORM_TYPE;

typedef enum {
	SUBFUNC_PDEFORM_STATUS_NOT_USE = 0,
	SUBFUNC_PDEFORM_STATUS_USE = 1,
	SUBFUNC_PDEFORM_STATUS_WAIT = 2
} SUBFUNC_PDEFORM_STATUS;

typedef struct {
	int EneWrkNo;
	int Count;
	int Type;
	int StartFrame;
	void *pEffRet;
	int Status;
} SUBFUNC_PDEFORM_CTRL;

typedef struct {
	int EneWrkNo;
	int Count;
} ZERO_PARTICLE_CTRL;

struct fixed_array_base<SUBFUNC_PDEFORM_CTRL,10,SUBFUNC_PDEFORM_CTRL[10]> {
protected:
	SUBFUNC_PDEFORM_CTRL m_aData[10];
	
public:
	fixed_array_base<SUBFUNC_PDEFORM_CTRL,10,SUBFUNC_PDEFORM_CTRL[10]>& operator=();
	fixed_array_base();
protected:
	fixed_array_base();
public:
	SUBFUNC_PDEFORM_CTRL& operator[]();
	SUBFUNC_PDEFORM_CTRL& operator[]();
	SUBFUNC_PDEFORM_CTRL* data();
	SUBFUNC_PDEFORM_CTRL* begin();
	SUBFUNC_PDEFORM_CTRL* end();
	void fill();
	size_t size();
	bool empty();
};

struct fixed_array<SUBFUNC_PDEFORM_CTRL,10> : fixed_array_base<SUBFUNC_PDEFORM_CTRL,10,SUBFUNC_PDEFORM_CTRL[10]> {
};

static fixed_array<SUBFUNC_PDEFORM_CTRL,10> SubFuncPDeformCtrl;
unsigned char SUBFUNC_PDEFORM_CTRL type_info node[8];
unsigned char ENE_WRK type_info node[8];
unsigned char CVariable<char, 0, 9> type_info node[8];
unsigned char CVariable<char, 0, 3> type_info node[8];
static float ParticleEndPosFiner[4];
static float ParticleEndPosNoFiner[4];
static ZERO_PARTICLE_CTRL ZeroParticleCtrl;
static int RenzFlareDispFlg;

static void _fixed_array_assert(char *strType, size_t v0, size_t v1) {
	static char *str = 0x3b9320;
	
  g3ddbgAssert__FbPCce(false,str_735);
  return (type_info *)v;
}

static void** void * * _fixed_array_verifyrange<void *>(size_t v, size_t _max) {
  if (_max <= v) {
    __tf7ENE_WRK(0x3f1598,_max);
  }
  return (void **)0x0;
}

static char** char * * _fixed_array_verifyrange<char *>(size_t v, size_t _max) {
  if (_max <= v) {
    __tf7ENE_WRK(0x3f15a0,_max);
  }
  return (char **)0x0;
}

static unsigned int** unsigned int * * _fixed_array_verifyrange<unsigned int *>(size_t v, size_t _max) {
  if (_max <= v) {
    __tf7ENE_WRK(0x3b9368,_max);
  }
  return (uint **)0x0;
}

void IgEffectInit() {
	int i;
	
  int iVar1;
  int iVar2;
  fixed_array<SUBFUNC_PDEFORM_CTRL,10> *pfVar3;
  
  pfVar3 = &SubFuncPDeformCtrl;
  iVar1 = 0;
  do {
                    /* inlined from ../graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Z20SUBFUNC_PDEFORM_CTRL_UiUi_PX01(iVar1,10);
    ((SUBFUNC_PDEFORM_CTRL *)pfVar3)->Status = 0;
                    /* end of inlined section */
    iVar2 = iVar1 + 1;
                    /* inlined from ../graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Z20SUBFUNC_PDEFORM_CTRL_UiUi_PX01(iVar1,10);
    ((SUBFUNC_PDEFORM_CTRL *)pfVar3)->Count = 0;
                    /* end of inlined section */
    pfVar3 = (fixed_array<SUBFUNC_PDEFORM_CTRL,10> *)((int)pfVar3 + 0x18);
    iVar1 = iVar2;
  } while (iVar2 < 10);
  RenzFlareDispFlg = 0;
  ZeroParticleCtrl.Count = -1;
  return;
}

void IgEffectMain() {
  float (*pafVar1) [4];
  
  if (plyr_wrk.cmn_wrk.mode == '\x06') {
    IgEffectParticleEndPosCalcFinder__FPf(ParticleEndPosFiner);
    pafVar1 = IgEffectParticleEndPosFinderGet__Fv();
    EneDmgParticleEndPosSet__FPA3_Cf(pafVar1);
  }
  else {
    IgEffectParticleEndPosCalcNoFinder__FPf(ParticleEndPosNoFiner);
    pafVar1 = IgEffectParticleEndPosNoFinderGet__Fv();
    EneDmgParticleEndPosSet__FPA3_Cf(pafVar1);
  }
  IgEffectSubFuncPDeformMain__Fv();
  IgEffectZeroParticleMain__Fv();
  if (RenzFlareDispFlg != 0) {
    SetEffects__Fiie(10,1);
  }
  EffectCandleFlameYuramekiCtrl__FPfT0(plyr_wrk.cmn_wrk.mbox.pos,plyr_wrk.cmn_wrk.mbox.bpos);
  return;
}

float*[4] IgEffectParticleEndPosFinderGet() {
  return (float (*) [4])ParticleEndPosFiner;
}

float*[4] IgEffectParticleEndPosNoFinderGet() {
  return (float (*) [4])ParticleEndPosNoFiner;
}

void IgEffectParticleEndPosCalcFinder(float *EndPos) {
	float wlm[4][4];
	float ppp2[4];
	
  float wlm [4] [4];
  float ppp2 [4];
  
  ppp2[0] = DAT_003ee438;
  ppp2[1] = DAT_003ee43c;
  ppp2[2] = DAT_003ee440;
  ppp2[3] = 1.0;
  sceVu0UnitMatrix(wlm);
  sceVu0RotMatrixX(plyr_wrk.cmn_wrk.mbox.rot[0],wlm,wlm);
  sceVu0RotMatrixY(plyr_wrk.cmn_wrk.mbox.rot[1],wlm,wlm);
  sceVu0TransMatrix(wlm,wlm,0x33cda0);
  sceVu0ApplyMatrix(EndPos,wlm,ppp2);
  return;
}

void IgEffectParticleEndPosCalcNoFinder(float *EndPos) {
	float wlm[4][4];
	float ppp[4];
	
  float wlm [4] [4];
  float ppp [4];
  
  ppp._0_8_ = DAT_003b9380;
  ppp._8_8_ = DAT_003b9388;
  sceVu0UnitMatrix(wlm);
  sceVu0RotMatrixX(plyr_wrk.cmn_wrk.mbox.rot[0],wlm,wlm);
  sceVu0RotMatrixY(plyr_wrk.cmn_wrk.mbox.rot[1],wlm,wlm);
  sceVu0TransMatrix(wlm,wlm,0x33cda0);
  sceVu0ApplyMatrix(EndPos,wlm,ppp);
  return;
}

int CalcParticleNumFromDamage(int damage) {
  float fVar1;
  
  fVar1 = g3dSinf__Ff((((float)damage * DAT_003ee444) / 211.0) * 0.5);
  return (int)(fVar1 * 48.0);
}

void IgEffectEneDmgReq(int num) {
  ushort uVar1;
  
                    /* inlined from ../graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from ../graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from ../graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from ../graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from ../graphics/graph3d/ctl/fixed_array.h */
  _fixed_array_verifyrange__H1Z7ENE_WRK_UiUi_PX01(num,10);
  _fixed_array_verifyrange__H1Z7ENE_WRK_UiUi_PX01(num,10);
  uVar1 = ene_wrk.field0_0x0.m_aData[num].st.dmg_type;
  _fixed_array_verifyrange__H1Z7ENE_WRK_UiUi_PX01(num,10);
  _fixed_array_verifyrange__H1Z7ENE_WRK_UiUi_PX01(num,10);
  EneDmgScreenEffectReq__FPfiif
            (ene_wrk.field0_0x0.m_aData[num].mpos.p0,(uint)uVar1,
             *(int *)&ene_wrk.field0_0x0.m_aData[num].st.sta,
             ene_wrk.field0_0x0.m_aData[num].dist_p_e[0]);
  return;
}

void IgEffectEneParticleDmgReq(int num, int damage) {
	int particle_num;
	ENE_DMG_PARTICLE_REQ EneDmgParticleReq;
	
  int iParticleNum;
  ENE_DMG_PARTICLE_REQ EneDmgParticleReq;
  
                    /* inlined from ../graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from ../graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from ../graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from ../graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  iParticleNum = CalcParticleNumFromDamage__Fi(damage);
                    /* inlined from ../graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from ../graphics/graph3d/ctl/fixed_array.h */
  _fixed_array_verifyrange__H1Z7ENE_WRK_UiUi_PX01(num,10);
                    /* inlined from ../graphics/graph3d/g3dxVu0.h */
  EneDmgParticleReq.StartPos[0] = ene_wrk.field0_0x0.m_aData[num].mpos.p0[0];
  EneDmgParticleReq.StartPos[1] = ene_wrk.field0_0x0.m_aData[num].mpos.p0[1];
  EneDmgParticleReq.StartPos[2] = ene_wrk.field0_0x0.m_aData[num].mpos.p0[2];
  EneDmgParticleReq.StartPos[3] = ene_wrk.field0_0x0.m_aData[num].mpos.p0[3];
                    /* end of inlined section */
  EneDmgParticleReq.pEndPos = IgEffectParticleEndPosFinderGet__Fv();
  EneDmgParticleReq.ParticleNum = iParticleNum;
                    /* inlined from ../graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from ../graphics/graph3d/ctl/fixed_array.h */
  _fixed_array_verifyrange__H1Z7ENE_WRK_UiUi_PX01(num,10);
  EneDmgParticleReq.DistPE = ene_wrk.field0_0x0.m_aData[num].dist_p_e[0];
                    /* end of inlined section */
                    /* inlined from ../graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  EneDmgParticleReq.SuctionFlg = 1;
  EneDmgParticleEffectReq__FPC20ENE_DMG_PARTICLE_REQ(&EneDmgParticleReq);
  SetRemainParticle__14CNEquipTrayWrki(&m_plyr_camera.eq_tray,iParticleNum);
  return;
}

void IgEffectEneDmgReqZero(int num, int damage) {
  ushort uVar1;
  
                    /* inlined from ../graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from ../graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from ../graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from ../graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from ../graphics/graph3d/ctl/fixed_array.h */
  _fixed_array_verifyrange__H1Z7ENE_WRK_UiUi_PX01(num,10);
  _fixed_array_verifyrange__H1Z7ENE_WRK_UiUi_PX01(num,10);
  uVar1 = ene_wrk.field0_0x0.m_aData[num].st.dmg_type;
  _fixed_array_verifyrange__H1Z7ENE_WRK_UiUi_PX01(num,10);
  _fixed_array_verifyrange__H1Z7ENE_WRK_UiUi_PX01(num,10);
  EneDmgScreenEffectReq__FPfiif
            (ene_wrk.field0_0x0.m_aData[num].mpos.p0,(uint)uVar1,
             *(int *)&ene_wrk.field0_0x0.m_aData[num].st.sta,
             ene_wrk.field0_0x0.m_aData[num].dist_p_e[0]);
                    /* end of inlined section */
  ReqFreqCamera__Fv();
  IgEffectZeroParticleReqSet__Fi(num);
  SetVibrate__Fiii(0,0x1e,1);
  SetVibrate__Fiii(1,0x28,0xff);
  return;
}

void IgEffectSubFuncZeroReq(int num, int type) {
	int EffectTypeA;
	int EffectTypeB;
	
  int EffectType;
  int EffectType_00;
  
  if (type == 0) {
    EffectType = 6;
    EffectType_00 = 7;
  }
  else if (type == 1) {
    EffectType = 8;
    EffectType_00 = 9;
  }
  else {
    EffectType = 10;
    EffectType_00 = 0xb;
  }
  EneDmgLargeHitReq__Fi(EffectType);
  EneDmgLargeHitReq__Fi(EffectType_00);
  IgEffectSubFuncPDeformReqSet__Fiii(num,0,3);
  return;
}

void IgEffectSubFuncSlowReq(int num) {
  EneDmgLargeHitReq__Fi(4);
  EneDmgLargeHitReq__Fi(5);
  IgEffectSubFuncPDeformReqSet__Fiii(num,1,0x20);
  FinderBankPlay__FiiiiP11_SND_3D_SETii(0x11,1,1,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
  return;
}

void IgEffectSubFuncKokuReq(int num, int type) {
	int EffectTypeA;
	int EffectTypeB;
	
  int EffectType;
  int EffectType_00;
  
  if (type == 0) {
    EffectType = 0xc;
    EffectType_00 = 0xd;
  }
  else if (type == 1) {
    EffectType = 0xe;
    EffectType_00 = 0xf;
  }
  else {
    EffectType = 0x10;
    EffectType_00 = 0x11;
  }
  EneDmgLargeHitReq__Fi(EffectType);
  EneDmgLargeHitReq__Fi(EffectType_00);
  IgEffectSubFuncPDeformReqSet__Fiii(num,2,5);
  return;
}

void IgEffectSubFuncParalyzeReq(int num) {
  EneDmgLargeHitReq__Fi(0x12);
  EneDmgLargeHitReq__Fi(0x13);
  IgEffectSubFuncPDeformReqSet__Fiii(num,3,0x16);
  FinderBankPlay__FiiiiP11_SND_3D_SETii(0x11,1,1,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
  return;
}

void IgEffectSubFuncViewReq(int num) {
  EneDmgLargeHitReq__Fi(0x14);
  EneDmgLargeHitReq__Fi(0x15);
  IgEffectSubFuncPDeformReqSet__Fiii(num,4,0x2e);
  FinderBankPlay__FiiiiP11_SND_3D_SETii(0x11,1,1,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
  return;
}

void IgEffectSubFuncMetsuReq(int num, int type) {
	int EffectTypeA;
	int EffectTypeB;
	
  int EffectType;
  int EffectType_00;
  
  if (type == 0) {
    EffectType = 0x16;
    EffectType_00 = 0x17;
  }
  else if (type == 1) {
    EffectType = 0x18;
    EffectType_00 = 0x19;
  }
  else {
    EffectType = 0x1a;
    EffectType_00 = 0x1b;
  }
  EneDmgLargeHitReq__Fi(EffectType);
  EneDmgLargeHitReq__Fi(EffectType_00);
  IgEffectSubFuncPDeformReqSet__Fiii(num,5,5);
  return;
}

void IgEffectSubFuncRenReq(int num, int type) {
	int EffectTypeA;
	int EffectTypeB;
	
  int EffectType;
  int EffectType_00;
  
  if (type == 0) {
    EffectType = 0x1c;
    EffectType_00 = 0x1d;
  }
  else if (type == 1) {
    EffectType = 0x1e;
    EffectType_00 = 0x1f;
  }
  else {
    EffectType = 0x20;
    EffectType_00 = 0x21;
  }
  EneDmgLargeHitReq__Fi(EffectType);
  EneDmgLargeHitReq__Fi(EffectType_00);
  IgEffectSubFuncPDeformReqSet__Fiii(num,6,0);
  return;
}

void IgEffectSubFuncTsuiReq(int num) {
  EneDmgLargeHitReq__Fi(0x22);
  EneDmgLargeHitReq__Fi(0x23);
  IgEffectSubFuncPDeformReqSet__Fiii(num,7,0x19);
  FinderBankPlay__FiiiiP11_SND_3D_SETii(0x11,1,1,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
  return;
}

void IgEffectSubFuncFuuReq(int num) {
  EneDmgLargeHitReq__Fi(0x24);
  EneDmgLargeHitReq__Fi(0x25);
  IgEffectSubFuncPDeformReqSet__Fiii(num,8,0x19);
  FinderBankPlay__FiiiiP11_SND_3D_SETii(0x11,1,1,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
  return;
}

static void IgEffectSubFuncPDeformReqSet(int EneWrkNo, int Type, int StartFrame) {
	int i;
	int WrkNo;
	
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  piVar3 = &SubFuncPDeformCtrl.field0_0x0.m_aData[0].Status;
  for (iVar2 = 0; iVar4 = -1, iVar2 < 10; iVar2 = iVar2 + 1) {
                    /* inlined from ../graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Z20SUBFUNC_PDEFORM_CTRL_UiUi_PX01(iVar2,10);
    iVar1 = *piVar3;
    piVar3 = piVar3 + 6;
    iVar4 = iVar2;
    if (iVar1 == 0) break;
  }
  if (iVar4 != -1) {
                    /* inlined from ../graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Z20SUBFUNC_PDEFORM_CTRL_UiUi_PX01(iVar4,10);
    SubFuncPDeformCtrl.field0_0x0.m_aData[iVar4].EneWrkNo = EneWrkNo;
    _fixed_array_verifyrange__H1Z20SUBFUNC_PDEFORM_CTRL_UiUi_PX01(iVar4,10);
    SubFuncPDeformCtrl.field0_0x0.m_aData[iVar4].Count = 0;
    _fixed_array_verifyrange__H1Z20SUBFUNC_PDEFORM_CTRL_UiUi_PX01(iVar4,10);
    SubFuncPDeformCtrl.field0_0x0.m_aData[iVar4].Type = Type;
    _fixed_array_verifyrange__H1Z20SUBFUNC_PDEFORM_CTRL_UiUi_PX01(iVar4,10);
    SubFuncPDeformCtrl.field0_0x0.m_aData[iVar4].StartFrame = StartFrame;
    _fixed_array_verifyrange__H1Z20SUBFUNC_PDEFORM_CTRL_UiUi_PX01(iVar4,10);
    SubFuncPDeformCtrl.field0_0x0.m_aData[iVar4].pEffRet = (void *)0x0;
    _fixed_array_verifyrange__H1Z20SUBFUNC_PDEFORM_CTRL_UiUi_PX01(iVar4,10);
    SubFuncPDeformCtrl.field0_0x0.m_aData[iVar4].Status = 1;
  }
  return;
}

static void* IgEffectZeroPDeformReq(int EneWrkNo) {
	static float spd = 1.f;
	static float rate = 1.f;
	void *pRet;
	
  void *pvVar1;
  
                    /* inlined from ../graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  spd_1156 = DAT_003ee448;
                    /* inlined from ../graphics/graph3d/ctl/fixed_array.h */
  rate_1157 = 0x3e800000;
  _fixed_array_verifyrange__H1Z7ENE_WRK_UiUi_PX01(EneWrkNo,10);
  pvVar1 = CallPartsDeform6__FifPvUiUiUiiPfT7iii
                     (0xf,1.0,ene_wrk.field0_0x0.m_aData + EneWrkNo,9,0x12,0x3b,0x32,
                      (float *)&spd_1156,(float *)&rate_1157,0x6d,0x71,0x7a);
                    /* end of inlined section */
                    /* end of inlined section */
  FinderBankPlay__FiiiiP11_SND_3D_SETii(0x14,1,1,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
  return pvVar1;
}

static void* IgEffectSlowPDeformReq(int EneWrkNo) {
	static float spd = 1.f;
	static float rate = 1.f;
	void *pRet;
	
  void *pvVar1;
  
                    /* inlined from ../graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  spd_1161 = DAT_003ee44c;
                    /* inlined from ../graphics/graph3d/ctl/fixed_array.h */
  rate_1162 = DAT_003ee450;
  _fixed_array_verifyrange__H1Z7ENE_WRK_UiUi_PX01(EneWrkNo,10);
  pvVar1 = CallPartsDeform6__FifPvUiUiUiiPfT7iii
                     (0xd,1.0,ene_wrk.field0_0x0.m_aData + EneWrkNo,7,0xeb,0x45,0xc,
                      (float *)&spd_1161,(float *)&rate_1162,0xc5,0xad,0xbe);
                    /* end of inlined section */
                    /* end of inlined section */
  FinderBankPlay__FiiiiP11_SND_3D_SETii(0x12,1,1,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
  return pvVar1;
}

static void* IgEffectKokuPDeformReq(int EneWrkNo) {
	static float spd = 1.f;
	static float rate = 1.f;
	void *pRet;
	
  void *pvVar1;
  
                    /* inlined from ../graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  spd_1166 = DAT_003ee454;
                    /* inlined from ../graphics/graph3d/ctl/fixed_array.h */
  rate_1167 = DAT_003ee458;
  _fixed_array_verifyrange__H1Z7ENE_WRK_UiUi_PX01(EneWrkNo,10);
  pvVar1 = CallPartsDeform6__FifPvUiUiUiiPfT7iii
                     (0x10,1.0,ene_wrk.field0_0x0.m_aData + EneWrkNo,0,0,0x21,0x1b,
                      (float *)&spd_1166,(float *)&rate_1167,0xec,0xe6,0xb0);
                    /* end of inlined section */
                    /* end of inlined section */
  FinderBankPlay__FiiiiP11_SND_3D_SETii(0x14,1,1,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
  return pvVar1;
}

static void* IgEffectParalyzePDeformReq(int EneWrkNo) {
	static float spd = 1.f;
	static float rate = 1.f;
	void *pRet;
	
  void *pvVar1;
  
                    /* inlined from ../graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  spd_1171 = DAT_003ee45c;
                    /* inlined from ../graphics/graph3d/ctl/fixed_array.h */
  rate_1172 = DAT_003ee460;
  _fixed_array_verifyrange__H1Z7ENE_WRK_UiUi_PX01(EneWrkNo,10);
  pvVar1 = CallPartsDeform6__FifPvUiUiUiiPfT7iii
                     (0xb,1.0,ene_wrk.field0_0x0.m_aData + EneWrkNo,0x2e,0x9c,0x2b,0x18,
                      (float *)&spd_1171,(float *)&rate_1172,0xbc,0xbf,0xb8);
                    /* end of inlined section */
                    /* end of inlined section */
  FinderBankPlay__FiiiiP11_SND_3D_SETii(0x12,1,1,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
  return pvVar1;
}

static void* IgEffectViewPDeformReq(int EneWrkNo) {
	static float spd = 1.f;
	static float rate = 1.f;
	void *pRet;
	
  void *pvVar1;
  
                    /* inlined from ../graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  spd_1176 = DAT_003ee464;
                    /* inlined from ../graphics/graph3d/ctl/fixed_array.h */
  rate_1177 = DAT_003ee468;
  _fixed_array_verifyrange__H1Z7ENE_WRK_UiUi_PX01(EneWrkNo,10);
  pvVar1 = CallPartsDeform6__FifPvUiUiUiiPfT7iii
                     (0xb,1.0,ene_wrk.field0_0x0.m_aData + EneWrkNo,7,0x5e,0x2e,0xf,
                      (float *)&spd_1176,(float *)&rate_1177,0xff,0xed,0xda);
                    /* end of inlined section */
                    /* end of inlined section */
  FinderBankPlay__FiiiiP11_SND_3D_SETii(0x12,1,1,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
  return pvVar1;
}

static void* IgEffectMetsuPDeformReq(int EneWrkNo) {
	static float spd = 1.f;
	static float rate = 1.f;
	void *pRet;
	
  void *pvVar1;
  
                    /* inlined from ../graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  spd_1181 = DAT_003ee46c;
                    /* inlined from ../graphics/graph3d/ctl/fixed_array.h */
  rate_1182 = DAT_003ee470;
  _fixed_array_verifyrange__H1Z7ENE_WRK_UiUi_PX01(EneWrkNo,10);
  pvVar1 = CallPartsDeform6__FifPvUiUiUiiPfT7iii
                     (0x10,1.0,ene_wrk.field0_0x0.m_aData + EneWrkNo,0,0x32,0x21,0x3a,
                      (float *)&spd_1181,(float *)&rate_1182,0x9c,0x92,0x92);
                    /* end of inlined section */
                    /* end of inlined section */
  FinderBankPlay__FiiiiP11_SND_3D_SETii(0x14,1,1,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
  return pvVar1;
}

static void* IgEffectRenPDeformReq(int EneWrkNo) {
	static float spd = 1.f;
	static float rate = 1.f;
	void *pRet;
	
  void *pvVar1;
  
                    /* inlined from ../graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  spd_1186 = DAT_003ee474;
                    /* inlined from ../graphics/graph3d/ctl/fixed_array.h */
  rate_1187 = DAT_003ee478;
  _fixed_array_verifyrange__H1Z7ENE_WRK_UiUi_PX01(EneWrkNo,10);
  pvVar1 = CallPartsDeform6__FifPvUiUiUiiPfT7iii
                     (0x10,1.0,ene_wrk.field0_0x0.m_aData + EneWrkNo,0,0,0xd,0x26,(float *)&spd_1186
                      ,(float *)&rate_1187,0xdb,0xeb,0xcd);
                    /* end of inlined section */
                    /* end of inlined section */
  FinderBankPlay__FiiiiP11_SND_3D_SETii(0x14,1,1,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
  return pvVar1;
}

static void* IgEffectTsuiPDeformReq(int EneWrkNo) {
	static float spd = 1.f;
	static float rate = 1.f;
	void *pRet;
	
  void *pvVar1;
  
                    /* inlined from ../graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  spd_1191 = DAT_003ee47c;
                    /* inlined from ../graphics/graph3d/ctl/fixed_array.h */
  rate_1192 = DAT_003ee480;
  _fixed_array_verifyrange__H1Z7ENE_WRK_UiUi_PX01(EneWrkNo,10);
  pvVar1 = CallPartsDeform6__FifPvUiUiUiiPfT7iii
                     (0xb,1.0,ene_wrk.field0_0x0.m_aData + EneWrkNo,7,0xa9,0x2e,0x15,
                      (float *)&spd_1191,(float *)&rate_1192,0xff,0xf7,0xda);
                    /* end of inlined section */
                    /* end of inlined section */
  FinderBankPlay__FiiiiP11_SND_3D_SETii(0x12,1,1,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
  return pvVar1;
}

static void* IgEffectFuuPDeformReq(int EneWrkNo) {
	static float spd = 1.f;
	static float rate = 1.f;
	void *pRet;
	
  void *pvVar1;
  
                    /* inlined from ../graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  spd_1196 = DAT_003ee484;
                    /* inlined from ../graphics/graph3d/ctl/fixed_array.h */
  rate_1197 = DAT_003ee488;
  _fixed_array_verifyrange__H1Z7ENE_WRK_UiUi_PX01(EneWrkNo,10);
  pvVar1 = CallPartsDeform6__FifPvUiUiUiiPfT7iii
                     (0xd,1.0,ene_wrk.field0_0x0.m_aData + EneWrkNo,7,0x15d,0x61,0x1a,
                      (float *)&spd_1196,(float *)&rate_1197,0xd5,0xf7,0xec);
                    /* end of inlined section */
                    /* end of inlined section */
  FinderBankPlay__FiiiiP11_SND_3D_SETii(0x12,1,1,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
  return pvVar1;
}

void IgEffectSubFuncPDeformClear(int EneWrkNo) {
	int i;
	
  fixed_array<SUBFUNC_PDEFORM_CTRL,10> *pfVar1;
  int iVar2;
  int iVar3;
  
  pfVar1 = &SubFuncPDeformCtrl;
  iVar2 = 0;
  do {
                    /* inlined from ../graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
    iVar3 = iVar2 + 1;
                    /* inlined from ../graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Z20SUBFUNC_PDEFORM_CTRL_UiUi_PX01(iVar2,10);
                    /* end of inlined section */
    if ((((SUBFUNC_PDEFORM_CTRL *)pfVar1)->Status != 0) &&
       (((fixed_array_base<SUBFUNC_PDEFORM_CTRL,10,SUBFUNC_PDEFORM_CTRL[10]> *)
        &((SUBFUNC_PDEFORM_CTRL *)pfVar1)->EneWrkNo)->m_aData[0].EneWrkNo == EneWrkNo)) {
      ResetEffects__FPv(((SUBFUNC_PDEFORM_CTRL *)pfVar1)->pEffRet);
      ((SUBFUNC_PDEFORM_CTRL *)pfVar1)->pEffRet = (void *)0x0;
      ((SUBFUNC_PDEFORM_CTRL *)pfVar1)->Status = 0;
    }
    pfVar1 = (fixed_array<SUBFUNC_PDEFORM_CTRL,10> *)((int)pfVar1 + 0x18);
    iVar2 = iVar3;
  } while (iVar3 < 10);
  return;
}

static void IgEffectSubFuncPDeformMain() {
	SUBFUNC_PDEFORM_CTRL *pPDeformCtrl;
	int i;
	
  int iVar1;
  int iVar2;
  void *pvVar3;
  fixed_array<SUBFUNC_PDEFORM_CTRL,10> *pfVar4;
  int *piVar5;
  int iVar6;
  
  pfVar4 = &SubFuncPDeformCtrl;
  iVar2 = 0;
  do {
                    /* inlined from ../graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
    iVar6 = iVar2 + 1;
                    /* inlined from ../graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Z20SUBFUNC_PDEFORM_CTRL_UiUi_PX01(iVar2,10);
                    /* end of inlined section */
    if (((SUBFUNC_PDEFORM_CTRL *)pfVar4)->Status == 2) {
      iVar2 = EffectExecCheck__FPvi(((SUBFUNC_PDEFORM_CTRL *)pfVar4)->pEffRet,0x18);
      if (iVar2 == 0) {
        ((SUBFUNC_PDEFORM_CTRL *)pfVar4)->pEffRet = (void *)0x0;
      }
      else if (((SUBFUNC_PDEFORM_CTRL *)pfVar4)->pEffRet != (void *)0x0) goto LAB_001cbcc8;
      ((SUBFUNC_PDEFORM_CTRL *)pfVar4)->Status = 0;
    }
LAB_001cbcc8:
    pfVar4 = (fixed_array<SUBFUNC_PDEFORM_CTRL,10> *)((int)pfVar4 + 0x18);
    iVar2 = iVar6;
  } while (iVar6 < 10);
  iVar2 = 0;
  iVar6 = 0;
                    /* inlined from ../graphics/graph3d/ctl/fixed_array.h */
  do {
    _fixed_array_verifyrange__H1Z20SUBFUNC_PDEFORM_CTRL_UiUi_PX01(iVar2,10);
    piVar5 = (int *)((int)&SubFuncPDeformCtrl.field0_0x0.m_aData[0].EneWrkNo + iVar6);
                    /* end of inlined section */
    if (*(int *)((int)&SubFuncPDeformCtrl.field0_0x0.m_aData[0].Status + iVar6) == 1) {
      iVar1 = *(int *)((int)&SubFuncPDeformCtrl.field0_0x0.m_aData[0].Count + iVar6);
      if (iVar1 == *(int *)((int)&SubFuncPDeformCtrl.field0_0x0.m_aData[0].StartFrame + iVar6)) {
        iVar1 = *(int *)((int)&SubFuncPDeformCtrl.field0_0x0.m_aData[0].Type + iVar6);
        if (iVar1 == 0) {
          IgEffectSubFuncPDeformClear__Fi(*piVar5);
          pvVar3 = IgEffectZeroPDeformReq__Fi(*piVar5);
          *(undefined4 *)((int)&SubFuncPDeformCtrl.field0_0x0.m_aData[0].Status + iVar6) = 2;
        }
        else {
          if (iVar1 != 1) {
            if (iVar1 == 2) {
              IgEffectSubFuncPDeformClear__Fi(*piVar5);
              pvVar3 = IgEffectKokuPDeformReq__Fi(*piVar5);
              *(undefined4 *)((int)&SubFuncPDeformCtrl.field0_0x0.m_aData[0].Status + iVar6) = 2;
              *(void **)((int)&SubFuncPDeformCtrl.field0_0x0.m_aData[0].pEffRet + iVar6) = pvVar3;
            }
            else {
              if (iVar1 == 3) {
                IgEffectSubFuncPDeformClear__Fi(*piVar5);
                pvVar3 = IgEffectParalyzePDeformReq__Fi(*piVar5);
                *(undefined4 *)((int)&SubFuncPDeformCtrl.field0_0x0.m_aData[0].Status + iVar6) = 2;
              }
              else if (iVar1 == 4) {
                IgEffectSubFuncPDeformClear__Fi(*piVar5);
                pvVar3 = IgEffectViewPDeformReq__Fi(*piVar5);
                *(undefined4 *)((int)&SubFuncPDeformCtrl.field0_0x0.m_aData[0].Status + iVar6) = 2;
              }
              else if (iVar1 == 5) {
                IgEffectSubFuncPDeformClear__Fi(*piVar5);
                pvVar3 = IgEffectMetsuPDeformReq__Fi(*piVar5);
                *(undefined4 *)((int)&SubFuncPDeformCtrl.field0_0x0.m_aData[0].Status + iVar6) = 2;
              }
              else if (iVar1 == 6) {
                IgEffectSubFuncPDeformClear__Fi(*piVar5);
                pvVar3 = IgEffectRenPDeformReq__Fi(*piVar5);
                *(undefined4 *)((int)&SubFuncPDeformCtrl.field0_0x0.m_aData[0].Status + iVar6) = 2;
              }
              else if (iVar1 == 7) {
                IgEffectSubFuncPDeformClear__Fi(*piVar5);
                pvVar3 = IgEffectTsuiPDeformReq__Fi(*piVar5);
                *(undefined4 *)((int)&SubFuncPDeformCtrl.field0_0x0.m_aData[0].Status + iVar6) = 2;
              }
              else {
                if (iVar1 != 8) {
                  if (iVar1 == 9) {
                    ReqFreqCamera__Fv();
                  }
                  goto LAB_001cbe74;
                }
                IgEffectSubFuncPDeformClear__Fi(*piVar5);
                pvVar3 = IgEffectFuuPDeformReq__Fi(*piVar5);
                *(undefined4 *)((int)&SubFuncPDeformCtrl.field0_0x0.m_aData[0].Status + iVar6) = 2;
              }
              *(void **)((int)&SubFuncPDeformCtrl.field0_0x0.m_aData[0].pEffRet + iVar6) = pvVar3;
            }
            goto LAB_001cbe74;
          }
          IgEffectSubFuncPDeformClear__Fi(*piVar5);
          pvVar3 = IgEffectSlowPDeformReq__Fi(*piVar5);
          *(undefined4 *)((int)&SubFuncPDeformCtrl.field0_0x0.m_aData[0].Status + iVar6) = 2;
        }
        *(void **)((int)&SubFuncPDeformCtrl.field0_0x0.m_aData[0].pEffRet + iVar6) = pvVar3;
      }
      else {
        *(int *)((int)&SubFuncPDeformCtrl.field0_0x0.m_aData[0].Count + iVar6) = iVar1 + 1;
      }
    }
LAB_001cbe74:
    iVar2 = iVar2 + 1;
    iVar6 = iVar6 + 0x18;
    if (9 < iVar2) {
      return;
    }
  } while( true );
}

static void IgEffectZeroParticleReqSet(int num) {
  ZeroParticleCtrl.EneWrkNo = num;
  ZeroParticleCtrl.Count = 0;
  return;
}

static void IgEffectZeroParticleMain() {
  if (ZeroParticleCtrl.Count != -1) {
    if (ZeroParticleCtrl.Count == 8) {
      IgEffectZeroParticleReq__Fi(ZeroParticleCtrl.EneWrkNo);
      ZeroParticleCtrl.Count = -1;
    }
    else {
      ZeroParticleCtrl.Count = ZeroParticleCtrl.Count + 1;
    }
  }
  return;
}

static void IgEffectZeroParticleReq(int num) {
	ENE_DMG_PARTICLE_REQ EneDmgParticleReq;
	
  ENE_DMG_PARTICLE_REQ EneDmgParticleReq;
  
                    /* inlined from ../graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from ../graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from ../graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from ../graphics/graph3d/ctl/fixed_array.h */
                    /* inlined from ../graphics/graph3d/g3dxVu0.h */
                    /* inlined from ../graphics/graph3d/ctl/fixed_array.h */
  _fixed_array_verifyrange__H1Z7ENE_WRK_UiUi_PX01(num,10);
                    /* inlined from ../graphics/graph3d/g3dxVu0.h */
  EneDmgParticleReq.StartPos[0] = ene_wrk.field0_0x0.m_aData[num].mpos.p0[0];
  EneDmgParticleReq.StartPos[1] = ene_wrk.field0_0x0.m_aData[num].mpos.p0[1];
  EneDmgParticleReq.StartPos[2] = ene_wrk.field0_0x0.m_aData[num].mpos.p0[2];
  EneDmgParticleReq.StartPos[3] = ene_wrk.field0_0x0.m_aData[num].mpos.p0[3];
                    /* end of inlined section */
  EneDmgParticleReq.pEndPos = IgEffectParticleEndPosFinderGet__Fv();
                    /* inlined from ../graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from ../graphics/graph3d/ctl/fixed_array.h */
  EneDmgParticleReq.ParticleNum = 0x30;
  _fixed_array_verifyrange__H1Z7ENE_WRK_UiUi_PX01(num,10);
  EneDmgParticleReq.DistPE = ene_wrk.field0_0x0.m_aData[num].dist_p_e[0];
                    /* end of inlined section */
  EneDmgParticleReq.SuctionFlg = 0;
                    /* inlined from ../graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  EneDmgParticleReq.EffectType = 0;
  EneDmgParticleEffectReq__FPC20ENE_DMG_PARTICLE_REQ(&EneDmgParticleReq);
  return;
}

void IgEffectZeroCamFreqReq() {
  ReqFreqCamera__Fv();
  return;
}

int IgEffectIsEndParticleSuck() {
  int iVar1;
  
  iVar1 = IsMoving__14CNEquipTrayWrk(&m_plyr_camera.eq_tray);
  if (iVar1 == 0) {
    iVar1 = IsActiveEneDmgParticle__Fv();
    if (iVar1 == 0) {
      iVar1 = 1;
    }
    else {
      iVar1 = 0;
    }
  }
  else {
    iVar1 = 0;
  }
  return iVar1;
}

void IgEffectRenzFlareDispFlgSet(int Flg) {
  if (Flg != 0) {
    RenzFlareDispFlg = 1;
    return;
  }
  RenzFlareDispFlg = 0;
  return;
}

void IgEffectStoryMainScreenEffectReq(SCREEN_EFFECT_PARAMETER *pScreenPara) {
	int Contrast;
	float tx;
	float ty;
	float tx;
	float ty;
	float tx;
	float ty;
	
  int iVar1;
  float ty;
  float tx;
  
  iVar1 = GetDebugMenuSwitch__Fv();
  if (iVar1 == 0) {
    return;
  }
  if (pScreenPara->Z_Dep == 1) {
    SetEffects__Fiie(1,1);
    iVar1 = pScreenPara->Dither;
  }
  else {
    iVar1 = pScreenPara->Dither;
  }
  if (iVar1 - 1U < 8) {
    iVar1 = EffectDitherIsSet__Fv();
    if (iVar1 == 0) {
      SetEffects__Fiie(2,1);
      iVar1 = pScreenPara->Blur;
    }
    else {
      iVar1 = pScreenPara->Blur;
    }
  }
  else {
    iVar1 = pScreenPara->Blur;
  }
  if (iVar1 == 1) {
    GetCamI2DPos__FPCfPfT1(plyr_wrk.cmn_wrk.mbox.pos,&ty,&tx);
    SetEffects__Fiie(3,1);
    iVar1 = pScreenPara->Blur;
  }
  if (iVar1 == 2) {
    GetCamI2DPos__FPCfPfT1(plyr_wrk.cmn_wrk.mbox.pos,&tx,&ty);
    SetEffects__Fiie(4,1);
    iVar1 = pScreenPara->Blur;
  }
  if (iVar1 == 3) {
    GetCamI2DPos__FPCfPfT1(plyr_wrk.cmn_wrk.mbox.pos,&tx,&ty);
    SetEffects__Fiie(5,1);
    iVar1 = pScreenPara->Deform;
  }
  else {
    iVar1 = pScreenPara->Deform;
  }
  if (iVar1 != 0) {
    SetEffects__Fiie(6,1);
  }
  if (pScreenPara->Focus != 0) {
    SetEffects__Fiie(7,1);
  }
  if (pScreenPara->Overlap == 1) {
    SetEffects__Fiie(8,1);
    iVar1 = pScreenPara->FadeFrame;
  }
  else {
    iVar1 = pScreenPara->FadeFrame;
  }
  if (iVar1 != 0) {
    SetEffects__Fiie(9,1);
  }
  iVar1 = IgEffectStoryMainContrastTypeGet__Fv();
  if (iVar1 != 0) {
    if (iVar1 != 0xc) {
      IgEffectStoryMainContrastColorGet__Fv();
      IgEffectStoryMainContrastAlphaGet__Fv();
      SetEffects__Fiie(iVar1,1);
      iVar1 = pScreenPara->BlackFilter;
      goto LAB_001cc2d0;
    }
    SetEffects__Fiie(0xc,1);
  }
  iVar1 = pScreenPara->BlackFilter;
LAB_001cc2d0:
  if (iVar1 != 0) {
    SetEffects__Fiie(0xb,1);
  }
  return;
}

int IgEffectStoryMainContrastTypeGet() {
	int RetVal;
	
  int iVar1;
  SCREEN_EFFECT_PARAMETER *pSVar2;
  int iVar3;
  
  pSVar2 = EffectGetNowScreenEffectParamPtr__Fv();
  iVar1 = pSVar2->Contrast;
  iVar3 = 0xd;
  if ((((iVar1 != 2) && (iVar3 = 0xe, iVar1 != 3)) && (iVar3 = 0xf, iVar1 != 4)) &&
     (iVar3 = 0xc, iVar1 != 5)) {
    iVar3 = 0;
  }
  return iVar3;
}

int IgEffectStoryMainContrastColorGet() {
  SCREEN_EFFECT_PARAMETER *pSVar1;
  
  pSVar1 = EffectGetNowScreenEffectParamPtr__Fv();
  return pSVar1->ContrastColor;
}

int IgEffectStoryMainContrastAlphaGet() {
  SCREEN_EFFECT_PARAMETER *pSVar1;
  
  pSVar1 = EffectGetNowScreenEffectParamPtr__Fv();
  return pSVar1->ContrastAlpha;
}

void IgEffectDustReq(ANI_CTRL *pAniCtrl, int BoneId, float *Offset) {
	float LocalWorld[4][4];
	float Position[4];
	
  float LocalWorld [4] [4];
  float Position [4];
  
  if (pAniCtrl != (ANI_CTRL *)0x0) {
    motGetLocalWorldMatrix__FPA3_fPUii(LocalWorld,pAniCtrl->mpk_p,BoneId);
    sceVu0ApplyMatrix(Position,LocalWorld,Offset);
    SetEffects__Fiie(0x1a,2);
  }
  return;
}

void IgEffectPlayerDustReq(ANI_CTRL *pAniCtrl, int BoneId) {
	float Offset[4];
	
  float Offset [4];
  
  Offset[0] = -4.0;
  Offset[3] = 1.0;
  Offset[1] = 0.0;
  Offset[2] = 0.0;
  IgEffectDustReq__FP8ANI_CTRLiPf(pAniCtrl,BoneId,Offset);
  return;
}

void IgEffectButterflyReq(float *Position) {
	int BirthRate;
	
  int iVar1;
  
  iVar1 = EffectButterflyNumGet__Fv();
                    /* inlined from ../graphics/effect/effect.h */
  if ((iVar1 < 10) && (iVar1 = rand(), ((float)iVar1 / DAT_003ee48c) * 400.0 * 10.0 < 10.0)) {
                    /* end of inlined section */
    EffectButterflyReq__FPCf(Position);
  }
  return;
}

void IgEffectButterflyAllCut() {
  EffectButterflyAllCut__Fv();
  EffectButterflyParticleAllCut__Fv();
  return;
}

void IgEffectLightComeInModelDraw() {
	void *hdl;
	void *pSgdTop;
	
  void *obj;
  void *pSgdTop;
  float (*CoordMat) [4] [4];
  
  obj = MapPutGetNowHdl__Fv();
  pSgdTop = (void *)MapPutGetWork__FPv(obj);
  CoordMat = MapPutGetMatrixPtr__FPv(obj);
  IgEffectLightComeInModelDrawSub__FPvPA3_f(pSgdTop,(float (*) [4])CoordMat);
  return;
}

void IgEffectLightComeInModelDrawSub(void *pSgdTop, float *CoordMat[4]) {
	long int BackupAlpha;
	long int BackupClamp;
	float Ambient[4];
	G3DFOG FogBak;
	
  uchar uVar1;
  LIGHT_COME_IN_DATA *pData;
  G3DFOG *pGVar2;
  long alpha;
  long clamp;
  float Ambient [4];
  G3DFOG FogBak;
  
  memset(Ambient,0,0x10);
  if (pSgdTop != (void *)0x0) {
    alpha = GET_ALPHA_REGISTER__Fi(0);
    clamp = GET_CLAMP_REGISTER__Fi(0);
    uVar1 = plyr_wrk.cmn_wrk.mode;
    pData = EffectLightComeInGetDataPtr__FPv(pSgdTop);
    EffectLightComeInExecOne__FP18LIGHT_COME_IN_DATAi(pData,(uint)(uVar1 == '\x06'));
    SetAlphaRegister__Fil(0,0x48);
    SetClampRegister__Fil(0,0);
    pGVar2 = gra3dGetFogRef__Fv();
    FogBak.fMin = pGVar2->fMin;
    FogBak.fMax = pGVar2->fMax;
    FogBak.fNear = pGVar2->fNear;
    FogBak.fFar = pGVar2->fFar;
    gra3dSetFog__Fffff(255.0,255.0,1000.0,2000.0);
    gra3dApplyFog__Fv();
    gra3dLightEnableAll__Fi(0);
    gra3dSetAmbient__FPCf(Ambient);
    gra3dApplyLight__Fv();
    MapDrawObjNoShadow__FPvPA3_f(pSgdTop,CoordMat);
    SetAlphaRegister__Fil(0,alpha);
    SetClampRegister__Fil(0,clamp);
    gra3dSetFog__FPC6G3DFOG(&FogBak);
    gra3dApplyFog__Fv();
  }
  return;
}

void IgEffectTourouFreaModelDraw() {
	void *hdl;
	
  void *obj;
  float (*CoordMat) [4] [4];
  
  obj = MapPutGetNowHdl__Fv();
  CoordMat = MapPutGetMatrixPtr__FPv(obj);
  IgEffectTourouFreaModelDrawSub__FPvPA3_f(obj,(float (*) [4])CoordMat);
  return;
}

void IgEffectTourouFreaModelDrawSub(void *pHandle, float *CoordMat[4]) {
	float NewCoord[4][4];
	float FlamePos[4];
	TOUROU_FREA_DATA *pTourouFrea;
	long int BackupAlpha;
	long int BackupZBuf;
	float RotX;
	float RotY;
	sceVu0IVECTOR FlameColor;
	static DRAW_ENV DrawEnv = {
		/* .tex1 = */ 353,
		/* .alpha = */ 68,
		/* .zbuf = */ 4462739736,
		/* .test = */ 327693,
		/* .clamp = */ 0,
		/* .prim = */ 3470656831586598916
	};
	
  undefined8 uVar1;
  float (*dir) [4];
  TOUROU_FREA_DATA *pData;
  long alpha;
  long zbuf;
  float NewCoord [4] [4];
  float FlamePos [4];
  float RotX;
  float RotY;
  int FlameColor [4];
  
                    /* end of inlined section */
  dir = gra3dcamGetDirection__Fv();
                    /* inlined from ../graphics/graph3d/g3dxVu0.h */
                    /* end of inlined section */
  FlameColor[2] = (int)DAT_003b9398;
  FlameColor[3] = DAT_003b9398._4_4_;
  FlameColor[0] = (int)DAT_003b9390;
  FlameColor[1] = DAT_003b9390._4_4_;
  if (pHandle != (void *)0x0) {
    uVar1 = *(undefined8 *)CoordMat[3];
                    /* inlined from ../graphics/graph3d/g3dxVu0.h */
    FlamePos[2] = CoordMat[3][2];
    FlamePos[3] = CoordMat[3][3];
    FlamePos[0] = (float)uVar1;
                    /* end of inlined section */
    FlamePos[1] = (float)((ulong)uVar1 >> 0x20) + 25.0;
    alpha = GET_ALPHA_REGISTER__Fi(0);
    zbuf = GET_ZBUF_REGISTER__Fi(0);
    pData = EffectTourouFreaGetDataPtr__FPv(pHandle);
    if (pData != (TOUROU_FREA_DATA *)0x0) {
      Vector2Rot__FPCfPfT1((float *)dir,&RotX,&RotY);
      EffectTourouFreaExecOne__FP16TOUROU_FREA_DATA(pData);
      sceVu0UnitMatrix(NewCoord);
      sceVu0RotMatrixY(RotY,NewCoord,NewCoord);
      sceVu0TransMatrix(NewCoord,NewCoord,CoordMat[3]);
      SetAlphaRegister__Fil(0,0x48);
      SetZbufRegister__Fil(0,0x10a000118);
      Set3DPosTexure__FPA3_fP8DRAW_ENViffUcUcUcUc
                (NewCoord,(DRAW_ENV *)DrawEnv_1258,0x4c,pData->ScaleX * 100.0,pData->ScaleY * 100.0,
                 0x89,'d','Z',*(uchar *)&pData->Alpha);
      EffectCandleFlameDraw__FPfPifi(FlamePos,FlameColor,1.0,pData->FlameCounter);
      SetAlphaRegister__Fil(0,alpha);
      SetZbufRegister__Fil(0,zbuf);
    }
  }
  return;
}

void IgEffectTourouBaseModelDraw() {
	void *hdl;
	void *pSgdTop;
	
  void *obj;
  void *pSgdTop;
  float (*CoordMat) [4] [4];
  
  obj = MapPutGetNowHdl__Fv();
  pSgdTop = (void *)MapPutGetWork__FPv(obj);
  CoordMat = MapPutGetMatrixPtr__FPv(obj);
  IgEffectTourouBaseModelDrawSub__FPvPA3_f(pSgdTop,(float (*) [4])CoordMat);
  return;
}

void IgEffectTourouBaseModelDrawSub(void *pSgdTop, float *CoordMat[4]) {
	TOUROU_BASE_DATA *pTourouBase;
	VECTOR3 Color;
	long int BackupAlpha;
	long int BackupZBuf;
	
  TOUROU_BASE_DATA *pData;
  long alpha;
  long zbuf;
  float Color [3];
  
  if (pSgdTop != (void *)0x0) {
    alpha = GET_ALPHA_REGISTER__Fi(0);
    zbuf = GET_ZBUF_REGISTER__Fi(0);
    pData = EffectTourouBaseGetDataPtr__FPv(pSgdTop);
    if (pData != (TOUROU_BASE_DATA *)0x0) {
      EffectTourouBaseExecOne__FP16TOUROU_BASE_DATA(pData);
      ManmdlSetAlpha__FPvUc(pSgdTop,*(uchar *)(pData->Color + 3));
      Color[0] = (float)pData->Color[0];
      Color[2] = (float)pData->Color[2];
      Color[1] = (float)pData->Color[1];
      gra3dSetVertexColorPreset__FP13SGDFILEHEADERiPf((SGDFILEHEADER *)pSgdTop,-1,Color);
      SetAlphaRegister__Fil(0,0x48);
      SetZbufRegister__Fil(0,0x10a000118);
      MapDrawObj__FPvPA3_f(pSgdTop,CoordMat);
      SetAlphaRegister__Fil(0,alpha);
      SetZbufRegister__Fil(0,zbuf);
    }
  }
  return;
}

void IgEffectEffectEndParticleReq(float *Position, int EffectType) {
	ENE_DMG_PARTICLE_REQ EneDmgParticleReq;
	int ParticleNum;
	
  ENE_DMG_PARTICLE_REQ EneDmgParticleReq;
  
                    /* inlined from ../graphics/graph3d/g3dxVu0.h */
  EneDmgParticleReq.StartPos[0] = *Position;
  EneDmgParticleReq.StartPos[1] = Position[1];
  EneDmgParticleReq.StartPos[2] = Position[2];
  EneDmgParticleReq.StartPos[3] = Position[3];
                    /* end of inlined section */
  EneDmgParticleReq.ParticleNum = 0x30;
  EneDmgParticleReq.pEndPos = (float (*) [4])0x0;
  EneDmgParticleReq.DistPE = 0.0;
  EneDmgParticleReq.SuctionFlg = 0;
  EneDmgParticleReq.EffectType = EffectType;
  EffectEndParticleEffectReq__FPC20ENE_DMG_PARTICLE_REQ(&EneDmgParticleReq);
  return;
}

SUBFUNC_PDEFORM_CTRL* SUBFUNC_PDEFORM_CTRL * _fixed_array_verifyrange<SUBFUNC_PDEFORM_CTRL>(size_t v, size_t _max) {
  g3ddbgAssert__FbPCce(false,str_735);
  return (type_info *)v;
}

ENE_WRK* ENE_WRK * _fixed_array_verifyrange<ENE_WRK>(size_t v, size_t _max) {
  g3ddbgAssert__FbPCce(false,str_735);
  return (type_info *)v;
}

static void __static_initialization_and_destruction_0(int __initialize_p, int __priority) {
  return;
}

type_info& SUBFUNC_PDEFORM_CTRL type_info function() {
  g3ddbgAssert__FbPCce(false,str_735);
  return (type_info *)v;
}

type_info& ENE_WRK type_info function() {
  g3ddbgAssert__FbPCce(false,str_735);
  return (type_info *)v;
}

static void global constructors keyed to IgEffectInit() {
  __static_initialization_and_destruction_0(1,0xffff);
  return;
}
