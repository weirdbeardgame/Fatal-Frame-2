// STATUS: NOT STARTED

#include "fly_ctrl.h"

struct fixed_array_base<FLY_WRK,40,FLY_WRK[40]> {
protected:
	FLY_WRK m_aData[40];
	
public:
	fixed_array_base<FLY_WRK,40,FLY_WRK[40]>& operator=();
	fixed_array_base();
protected:
	fixed_array_base();
public:
	FLY_WRK& operator[]();
	FLY_WRK& operator[]();
	FLY_WRK* data();
	FLY_WRK* begin();
	FLY_WRK* end();
	void fill();
	size_t size();
	bool empty();
};

struct fixed_array<FLY_WRK,40> : fixed_array_base<FLY_WRK,40,FLY_WRK[40]> {
};

FLY_DATA fly_dat[6] = {
	/* [0] = */ {
		/* .attr = */ 0,
		/* .alp = */ 64,
		/* .mdl_no = */ 14,
		/* .anm_no = */ 16,
		/* .dmg = */ 1500,
		/* .hit_rng = */ 100,
		/* .cond = */ 0,
		/* .blifetime = */ 120,
		/* .chg_cnt = */ 0,
		/* .fstmove = */ 20.f,
		/* .fstrot = */ 3.f,
		/* .fdist = */ 1200.f,
		/* .fmove = */ 20.f,
		/* .frot = */ 3.f,
		/* .ndist = */ 700.f,
		/* .nmove = */ 35.f,
		/* .nrot = */ 1.f
	},
	/* [1] = */ {
		/* .attr = */ 2,
		/* .alp = */ 128,
		/* .mdl_no = */ 32768,
		/* .anm_no = */ 0,
		/* .dmg = */ 1500,
		/* .hit_rng = */ 100,
		/* .cond = */ 0,
		/* .blifetime = */ 300,
		/* .chg_cnt = */ 0,
		/* .fstmove = */ 15.f,
		/* .fstrot = */ 4.f,
		/* .fdist = */ 1000.f,
		/* .fmove = */ 15.f,
		/* .frot = */ 4.f,
		/* .ndist = */ 400.f,
		/* .nmove = */ 15.f,
		/* .nrot = */ 1.f
	},
	/* [2] = */ {
		/* .attr = */ 0,
		/* .alp = */ 64,
		/* .mdl_no = */ 14,
		/* .anm_no = */ 16,
		/* .dmg = */ 1500,
		/* .hit_rng = */ 100,
		/* .cond = */ 0,
		/* .blifetime = */ 400,
		/* .chg_cnt = */ 30,
		/* .fstmove = */ 30.f,
		/* .fstrot = */ 0.199999988f,
		/* .fdist = */ 1000.f,
		/* .fmove = */ 20.f,
		/* .frot = */ 5.f,
		/* .ndist = */ 500.f,
		/* .nmove = */ 10.f,
		/* .nrot = */ 1.19999993f
	},
	/* [3] = */ {
		/* .attr = */ 1,
		/* .alp = */ 64,
		/* .mdl_no = */ 14,
		/* .anm_no = */ 16,
		/* .dmg = */ 1500,
		/* .hit_rng = */ 100,
		/* .cond = */ 0,
		/* .blifetime = */ 400,
		/* .chg_cnt = */ 0,
		/* .fstmove = */ 12.f,
		/* .fstrot = */ 1.f,
		/* .fdist = */ 1500.f,
		/* .fmove = */ 12.f,
		/* .frot = */ 1.f,
		/* .ndist = */ 700.f,
		/* .nmove = */ 10.f,
		/* .nrot = */ 0.299999982f
	},
	/* [4] = */ {
		/* .attr = */ 0,
		/* .alp = */ 128,
		/* .mdl_no = */ 32768,
		/* .anm_no = */ 0,
		/* .dmg = */ 1800,
		/* .hit_rng = */ 100,
		/* .cond = */ 0,
		/* .blifetime = */ 400,
		/* .chg_cnt = */ 30,
		/* .fstmove = */ 30.f,
		/* .fstrot = */ 0.199999988f,
		/* .fdist = */ 1000.f,
		/* .fmove = */ 20.f,
		/* .frot = */ 5.f,
		/* .ndist = */ 500.f,
		/* .nmove = */ 10.f,
		/* .nrot = */ 1.19999993f
	},
	/* [5] = */ {
		/* .attr = */ 0,
		/* .alp = */ 64,
		/* .mdl_no = */ 14,
		/* .anm_no = */ 16,
		/* .dmg = */ 1800,
		/* .hit_rng = */ 100,
		/* .cond = */ 0,
		/* .blifetime = */ 400,
		/* .chg_cnt = */ 90,
		/* .fstmove = */ 30.f,
		/* .fstrot = */ 0.199999988f,
		/* .fdist = */ 1000.f,
		/* .fmove = */ 16.f,
		/* .frot = */ 5.f,
		/* .ndist = */ 500.f,
		/* .nmove = */ 8.f,
		/* .nrot = */ 1.19999993f
	}
};

static fixed_array<FLY_WRK,40> fly_wrk;
unsigned char FLY_WRK type_info node[8];
unsigned char G3DLIGHT type_info node[8];

static void _fixed_array_assert(char *strType, size_t v0, size_t v1) {
	static char *str = 0x3ae3b0;
	
  g3ddbgAssert__FbPCce(false,str_646);
  return (type_info *)v;
}

static void** void * * _fixed_array_verifyrange<void *>(size_t v, size_t _max) {
  if (_max <= v) {
    __tf8G3DLIGHT(0x3f08b0,_max);
  }
  return (void **)0x0;
}

static char** char * * _fixed_array_verifyrange<char *>(size_t v, size_t _max) {
  if (_max <= v) {
    __tf8G3DLIGHT(0x3f08b8,_max);
  }
  return (char **)0x0;
}

static unsigned int** unsigned int * * _fixed_array_verifyrange<unsigned int *>(size_t v, size_t _max) {
  if (_max <= v) {
    __tf8G3DLIGHT(0x3ae3f8,_max);
  }
  return (uint **)0x0;
}

static int CheckEffectFly(FLY_WRK *fw) {
  return (int)((fw->mdl_no & 0x8000U) != 0);
}

FLY_WRK* FlyInit(u_char type) {
	FLY_WRK *fw;
	
  ushort uVar1;
  float fVar2;
  FLY_WRK *fw;
  int iVar3;
  float fVar4;
  
  fw = GetFlyWork__Fv();
  iVar3 = (uint)type * 0xc + (uint)type;
  if (fw == (FLY_WRK *)0x0) {
    printf("FLY_BUFFER is FULL!!\n");
    fw = (FLY_WRK *)0x0;
  }
  else {
    fw->init_flow = 0;
    fw->adjp_cnt = 0.0;
    uVar1 = (&fly_dat[0].mdl_no)[iVar3 * 2];
    fw->anm_no = (uint)(ushort)(&fly_dat[0].anm_no)[iVar3 * 2];
    fw->mdl_no = (uint)uVar1;
    fVar2 = DAT_003ee2b8;
    fw->dat = (FLY_DATA *)(&fly_dat[0].attr + iVar3 * 4);
    iVar3 = GetRndSP__FUiUi(0,0x46);
    fVar4 = 1800.0;
    fw->adjp_add = ((float)(iVar3 + 0x14) * fVar2) / 1800.0;
    iVar3 = GetRndSP__FUiUi(0,0x46);
    fw->adjp_span = (float)iVar3 + 10.0;
    iVar3 = GetRndSP__FUiUi(0,0x168);
    fw->adjp_ang = ((float)iVar3 * fVar2) / fVar4;
    iVar3 = CheckEffectFly__FP7FLY_WRK(fw);
    if (iVar3 == 0) {
      FlyModelDataInit__FP7FLY_WRK(fw);
    }
    else {
      fw->sta = fw->sta | 0x10;
    }
  }
  return fw;
}

int FlyAct(FLY_WRK *fw, u_char type, float *pos, float *rot, PLCMN_WRK *target) {
  int iVar1;
  
  if ((fw->sta & 0x10U) == 0) {
LAB_001932e8:
    iVar1 = 0;
  }
  else {
    if (((fw->sta ^ 1U) & 1) == 0) {
      return 0;
    }
    iVar1 = CheckEffectFly__FP7FLY_WRK(fw);
    if (iVar1 == 0) {
      iVar1 = FlyModelDataInit__FP7FLY_WRK(fw);
      if (iVar1 != 1) goto LAB_001932e8;
    }
    else {
      FlyEffectDataInit__FP7FLY_WRK(fw);
    }
    SetFlyOne__FP7FLY_WRKP7ENE_WRKUcPfT3P9PLCMN_WRK(fw,(ENE_WRK *)0x0,type,pos,rot,target);
    iVar1 = 1;
  }
  return iVar1;
}

void EneFlyInit(ENE_WRK *ew) {
	int i;
	int j;
	FLY_WRK *fw;
	short int type;
	
  short sVar1;
  ushort uVar2;
  int iVar3;
  FLY_WRK *fw;
  int iVar4;
  FLY_WRK *(*papFVar5) [5];
  int iVar6;
  ENE_WRK *pEVar7;
  int iVar8;
  int iVar9;
  float fVar10;
  
  iVar9 = 0;
  if (ew->type != '\x02') {
    iVar8 = 0x60;
    pEVar7 = ew;
    do {
      sVar1 = *(short *)((ew->dat->cmn).def_type + iVar8 + -0x2a);
      if (-1 < sVar1) {
        iVar3 = sVar1 * 0xc + (int)sVar1;
        iVar6 = 0;
        papFVar5 = pEVar7->fw;
        fVar10 = DAT_003ee2bc;
        do {
          fw = GetFlyWork__Fv();
          if (fw == (FLY_WRK *)0x0) {
            printf("FLY_BUFFER is FULL!!\n");
            return;
          }
          uVar2 = (&fly_dat[0].mdl_no)[iVar3 * 2];
          fw->anm_no = (uint)(ushort)(&fly_dat[0].anm_no)[iVar3 * 2];
          fw->mdl_no = (uint)uVar2;
          fw->init_flow = 0;
          fw->dat = (FLY_DATA *)(&fly_dat[0].attr + iVar3 * 4);
          fw->adjp_cnt = 0.0;
          iVar4 = GetRndSP__FUiUi(0,0x46);
          fw->adjp_add = ((float)(iVar4 + 0x14) * fVar10) / 1800.0;
          iVar4 = GetRndSP__FUiUi(0,0x46);
          fw->adjp_span = (float)iVar4 + 10.0;
          iVar4 = GetRndSP__FUiUi(0,0x168);
          (*papFVar5)[0] = fw;
          papFVar5 = (FLY_WRK *(*) [5])(*papFVar5 + 1);
          fw->adjp_ang = ((float)iVar4 * fVar10) / 1800.0;
          iVar4 = CheckEffectFly__FP7FLY_WRK(fw);
          if (iVar4 == 0) {
            FlyModelDataInit__FP7FLY_WRK(fw);
          }
          else {
            fw->sta = fw->sta | 0x10;
          }
          iVar6 = iVar6 + 1;
        } while (iVar6 < 5);
      }
      iVar9 = iVar9 + 1;
      iVar8 = iVar8 + 2;
      pEVar7 = (ENE_WRK *)(pEVar7->neck_rot + 1);
    } while (iVar9 < 3);
  }
  return;
}

int EneFlyModelInitWait(ENE_WRK *ew) {
	int ret;
	int i;
	int j;
	
  uint uVar1;
  int iVar2;
  uint uVar3;
  FLY_WRK *fw;
  FLY_WRK *(*papFVar4) [5];
  int iVar5;
  FLY_WRK *(*papFVar6) [5];
  int iVar7;
  
  uVar1 = 1;
  if (ew->type != '\x02') {
    iVar5 = 0;
    papFVar6 = ew->fw;
    iVar7 = 0x60;
    uVar1 = 1;
    do {
      if ((-1 < *(short *)((ew->dat->cmn).def_type + iVar7 + -0x2a)) &&
         (iVar2 = CheckEffectFly__FP7FLY_WRK((*papFVar6)[0]), iVar2 == 0)) {
        iVar2 = 4;
        papFVar4 = ew->fw[iVar5];
        fw = (*papFVar4)[0];
        while( true ) {
          papFVar4 = (FLY_WRK *(*) [5])(*papFVar4 + 1);
          if ((fw->sta & 0x10U) != 0) {
            uVar3 = FlyModelDataInit__FP7FLY_WRK(fw);
            uVar1 = uVar1 & uVar3;
          }
          iVar2 = iVar2 + -1;
          if (iVar2 < 0) break;
          fw = (*papFVar4)[0];
        }
      }
      iVar5 = iVar5 + 1;
      papFVar6 = papFVar6[1];
      iVar7 = iVar7 + 2;
    } while (iVar5 < 3);
  }
  return uVar1;
}

void EneFlyAct(ENE_WRK *ew, u_char type, float *pos, float *rot, PLCMN_WRK *target) {
	int i;
	int j;
	int m;
	int n;
	
  int iVar1;
  FLY_WRK *pFVar2;
  FLY_WRK *(*papFVar3) [5];
  int iVar4;
  int iVar5;
  FLY_WRK **ppFVar6;
  
  if (ew->type != '\x02') {
    if ((ushort)type == ew->dat->fly_type[0]) {
      iVar5 = 0;
    }
    else {
      for (iVar1 = 1;
          (iVar5 = -1, iVar1 < 3 && (iVar5 = iVar1, (ushort)type != ew->dat->fly_type[iVar1]));
          iVar1 = iVar1 + 1) {
      }
    }
    if (iVar5 != -1) {
      papFVar3 = ew->fw[iVar5];
      pFVar2 = (*papFVar3)[0];
      iVar1 = 0;
      while (((papFVar3 = (FLY_WRK *(*) [5])(*papFVar3 + 1), (pFVar2->sta & 0x10U) == 0 ||
              (((pFVar2->sta ^ 1U) & 1) == 0)) && (iVar4 = iVar1 + 1, iVar1 = -1, iVar4 < 5))) {
        pFVar2 = (*papFVar3)[0];
        iVar1 = iVar4;
      }
      if (iVar1 < 0) {
        printf("ENE_FLY_BUFFER OVER!!\n");
      }
      else {
        ppFVar6 = ew->fw[iVar5] + iVar1;
        iVar1 = CheckEffectFly__FP7FLY_WRK(*ppFVar6);
        if (iVar1 == 0) {
          pFVar2 = *ppFVar6;
        }
        else {
          FlyEffectDataInit__FP7FLY_WRK(*ppFVar6);
          pFVar2 = *ppFVar6;
        }
        SetFlyOne__FP7FLY_WRKP7ENE_WRKUcPfT3P9PLCMN_WRK(pFVar2,ew,type,pos,rot,target);
      }
    }
  }
  return;
}

void EneFlyAnmctrlRelease(ENE_WRK *ew) {
	int i;
	int j;
	
  FLY_WRK *fw;
  FLY_WRK *(*papFVar1) [5];
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = 0;
  if (ew->type != '\x02') {
    iVar4 = 0x60;
    do {
      if (-1 < *(short *)((ew->dat->cmn).def_type + iVar4 + -0x2a)) {
        iVar2 = 4;
        papFVar1 = ew->fw[iVar3];
        fw = (*papFVar1)[0];
        while( true ) {
          papFVar1 = (FLY_WRK *(*) [5])(*papFVar1 + 1);
          iVar2 = iVar2 + -1;
          FlyRelease__FP7FLY_WRK(fw);
          if (iVar2 < 0) break;
          fw = (*papFVar1)[0];
        }
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + 2;
    } while (iVar3 < 3);
  }
  return;
}

static int FlyModelDataInit(FLY_WRK *fw) {
	int ret;
	int LoadOK;
	
  int iVar1;
  ushort uVar2;
  _OL_LOAD_ERR _Var3;
  uint uVar4;
  uint uVar5;
  void *pvVar6;
  
  iVar1 = fw->init_flow;
  if (iVar1 == 1) {
    uVar4 = mmanageIsReadyMdl__FiPii(fw->mdl_no,&fw->mdl_p,0);
    uVar5 = mmanageIsReadyAnm__FiPii(fw->anm_no,&fw->anm_p,0);
    if ((uVar4 & uVar5) == 0) {
      return 0;
    }
    pvVar6 = motInitOneEnemyAnm__FPUiT0UiUi
                       ((uint *)fw->anm_p,(uint *)fw->mdl_p,fw->mdl_no,fw->anm_no);
    fw->ani_ctrl = pvVar6;
    if (pvVar6 == (void *)0x0) {
      printf("ANI_CTRL assign failure!!\n");
      fw->init_flow = 3;
      return 0;
    }
    printf("ANI_CTRL addr: %x\n");
    ChrSortRegistFly__FP7FLY_WRK(fw);
    fw->init_flow = 2;
    return 0;
  }
  if (iVar1 < 2) {
    if (iVar1 != 0) {
      return 0;
    }
    _Var3 = mmanageReqAnm__Fi(fw->anm_no);
    if (_Var3 == OL_LOAD_ERR_WORK_LACK) {
      fw->init_flow = 3;
      printf("mmanageReqAnm() > FLY_INIT_FAILURE\n");
    }
    _Var3 = mmanageReqMdl__Fi(fw->mdl_no);
    if (_Var3 == OL_LOAD_ERR_WORK_LACK) {
      fw->init_flow = 3;
      printf("mmanageReqMdl() > FLY_INIT_FAILURE\n");
      uVar2 = fw->sta;
    }
    else {
      uVar2 = fw->sta;
    }
    fw->init_flow = 1;
    uVar2 = uVar2 | 0x10;
  }
  else {
    if (iVar1 == 2) {
      return 1;
    }
    if (iVar1 != 3) {
      return 0;
    }
    uVar2 = fw->sta & 0xffef;
  }
  fw->sta = uVar2;
  return 0;
}

static int FlyEffectDataInit(FLY_WRK *fw) {
	u_short type;
	
  void *pvVar1;
  ushort uVar2;
  int Type;
  
  uVar2 = *(ushort *)&fw->mdl_no & 0x7fff;
  if (uVar2 == 1) {
    Type = 2;
  }
  else if (uVar2 < 2) {
    Type = 5;
    if ((*(ushort *)&fw->mdl_no & 0x7fff) != 0) {
      return 1;
    }
  }
  else {
    if (uVar2 != 2) {
      return 1;
    }
    Type = 5;
  }
  pvVar1 = EffectSetTorch2__FPA3_fi((float (*) [4])fw->npos,Type);
  fw->efpw = pvVar1;
  return 1;
}

void FlyModelRelease(FLY_WRK *fw) {
  if (fw->ani_ctrl != (void *)0x0) {
    motReleaseOneAnm__FPv(fw->ani_ctrl);
    fw->ani_ctrl = (void *)0x0;
    printf("FlyWrk [%x] Heap Release!!\n");
    ChrSortDeleteFly__FP7FLY_WRK(fw);
  }
  mmanageClearAnm__Fi(fw->anm_no);
  mmanageClearMdl__Fi(fw->mdl_no);
  printf("FlyWrk [Model & Anime] Heap Release!!\n");
  return;
}

void FlyEffectRelease(FLY_WRK *fw) {
  if ((fw->efpw != (void *)0x0) && ((*(ushort *)&fw->mdl_no & 0x7fff) < 3)) {
    EffectResetTorch2__FPv(fw->efpw);
    fw->efpw = (void *)0x0;
  }
  return;
}

void FlyRelease(FLY_WRK *fw) {
  int iVar1;
  
  iVar1 = CheckEffectFly__FP7FLY_WRK(fw);
  if (iVar1 == 0) {
    FlyModelRelease__FP7FLY_WRK(fw);
    fw->sta = 0;
  }
  else {
    FlyEffectRelease__FP7FLY_WRK(fw);
    fw->sta = 0;
  }
  return;
}

void PhotoFlyChk() {
	FLY_WRK *fw;
	float tx;
	float ty;
	u_char i;
	
  float fVar1;
  uchar uVar2;
  GRA3DCAMERA *pGVar3;
  int iVar4;
  byte bVar5;
  float *p1;
  fixed_array<FLY_WRK,40> *pfVar6;
  float fVar7;
  float tx;
  float ty;
  
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  bVar5 = 0;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  _fixed_array_verifyrange__H1Z7FLY_WRK_UiUi_PX01(0,0x28);
  fVar1 = DAT_003ee2c0;
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  pfVar6 = &fly_wrk;
                    /* end of inlined section */
  do {
    if ((((((fixed_array_base<FLY_WRK,40,FLY_WRK[40]> *)&((FLY_WRK *)pfVar6)->sta)->m_aData[0].sta ^
          1U) & 1) == 0) && ((((FLY_WRK *)pfVar6)->dat->attr & 1) == 0)) {
      p1 = ((FLY_WRK *)pfVar6)->npos;
      fVar7 = GetDistV__FPCfT0(plyr_wrk.cmn_wrk.mbox.pos,p1);
      if (fVar7 <= fVar1) {
        pGVar3 = gra3dGetCamera__Fv();
        uVar2 = OutSightChk__FPfT0fff
                          (p1,(float *)pGVar3->matCoord[3],plyr_wrk.cmn_wrk.mbox.rot[1],DAT_003ee2c4
                           ,DAT_003ee2c8);
        if ((uVar2 == '\0') && (iVar4 = FrameInsideChk__FPfN20(p1,&tx,&ty), iVar4 != 0)) {
          ((fixed_array_base<FLY_WRK,40,FLY_WRK[40]> *)&((FLY_WRK *)pfVar6)->sta)->m_aData[0].sta =
               ((fixed_array_base<FLY_WRK,40,FLY_WRK[40]> *)&((FLY_WRK *)pfVar6)->sta)->m_aData[0].
               sta | 8;
        }
      }
    }
    bVar5 = bVar5 + 1;
    pfVar6 = (fixed_array<FLY_WRK,40> *)((int)pfVar6 + 0x1460);
  } while (bVar5 < 0x28);
  return;
}

static PLCMN_WRK* FlyPlyrHitChk(FLY_WRK *fw) {
	float pf[4];
	float pp[4];
	PLCMN_WRK *p1;
	PLCMN_WRK *p2;
	PLCMN_WRK *ret;
	
  PLYR_WRK *pPVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  SIS_WRK *pSVar5;
  SIS_WRK *pSVar6;
  float fVar7;
  PLYR_WRK *pPVar8;
  float fVar9;
  float fVar10;
  float pf [4];
  float pp [4];
  
  pPVar8 = (PLYR_WRK *)0x0;
  iVar3 = IsSisWrk__Fv();
  if (iVar3 == 0) {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/g3dxVu0.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/g3dxVu0.h */
                    /* end of inlined section */
    uVar4 = (uint)(ushort)fw->dat->hit_rng;
    fVar7 = (float)uVar4;
    if (fVar7 < ABS(fw->npos[0] - plyr_wrk.cmn_wrk.headpos[0])) {
      return (PLCMN_WRK *)0x0;
    }
    if (fVar7 < ABS(fw->npos[2] - plyr_wrk.cmn_wrk.headpos[2])) {
      return (PLCMN_WRK *)0x0;
    }
    fVar10 = fw->npos[1] - plyr_wrk.cmn_wrk.headpos[1];
    if (fw->npos[1] < plyr_wrk.cmn_wrk.headpos[1]) {
      bVar2 = ABS(fVar10) <= fVar7;
    }
    else {
      bVar2 = ABS(fVar10) <= (float)(uVar4 + 600);
    }
    if (bVar2) {
      pPVar8 = &plyr_wrk;
    }
  }
  else {
    pPVar1 = (PLYR_WRK *)fw->target;
    pSVar6 = (SIS_WRK *)pPVar1;
    if (pPVar1 != &plyr_wrk) {
      pSVar6 = &sis_wrk;
    }
    pSVar5 = (SIS_WRK *)&plyr_wrk;
    if (pPVar1 == &plyr_wrk) {
      pSVar5 = &sis_wrk;
    }
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/g3dxVu0.h */
    fVar7 = fw->npos[1];
                    /* end of inlined section */
    uVar4 = (uint)(ushort)fw->dat->hit_rng;
    fVar10 = (float)uVar4;
    if ((ABS(fw->npos[0] - *(float *)&((PLYR_WRK *)pSVar6)->cmn_wrk) <= fVar10) &&
       (ABS(fw->npos[2] - *(float *)((int)&((PLYR_WRK *)pSVar6)->cmn_wrk + 8)) <= fVar10)) {
      fVar9 = fVar7 - *(float *)((int)&((PLYR_WRK *)pSVar6)->cmn_wrk + 4);
      if (fVar7 < *(float *)((int)&((PLYR_WRK *)pSVar6)->cmn_wrk + 4)) {
        bVar2 = ABS(fVar9) <= fVar10;
      }
      else {
        bVar2 = ABS(fVar9) <= (float)(uVar4 + 600);
      }
      if (bVar2) {
        pPVar8 = (PLYR_WRK *)pSVar6;
      }
    }
    if (pPVar8 != (PLYR_WRK *)0x0) {
      return &pPVar8->cmn_wrk;
    }
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/g3dxVu0.h */
                    /* end of inlined section */
    uVar4 = (uint)(ushort)fw->dat->hit_rng;
    fVar10 = (float)uVar4;
    if (fVar10 < ABS(fw->npos[0] - *(float *)&((PLYR_WRK *)pSVar5)->cmn_wrk)) {
      return (PLCMN_WRK *)0x0;
    }
    if (fVar10 < ABS(fw->npos[2] - *(float *)((int)&((PLYR_WRK *)pSVar5)->cmn_wrk + 8))) {
      return (PLCMN_WRK *)0x0;
    }
    fVar9 = fVar7 - *(float *)((int)&((PLYR_WRK *)pSVar5)->cmn_wrk + 4);
    if (fVar7 < *(float *)((int)&((PLYR_WRK *)pSVar5)->cmn_wrk + 4)) {
      bVar2 = ABS(fVar9) <= fVar10;
    }
    else {
      bVar2 = ABS(fVar9) <= (float)(uVar4 + 600);
    }
    pPVar8 = (PLYR_WRK *)pSVar5;
    if (!bVar2) {
      return (PLCMN_WRK *)0x0;
    }
  }
  return &pPVar8->cmn_wrk;
}

static void FlyAtkHit(FLY_WRK *fw, PLCMN_WRK *target) {
	float rv[4];
	STATUS_DAT *st;
	
  short sVar1;
  uchar uVar2;
  uchar uVar3;
  float rv [4];
  
  fw->sta = fw->sta | 2;
  if ((target->st).invisible_timer == 0) {
    if ((PLYR_WRK *)target == &plyr_wrk) {
      if (plyr_wrk.cmn_wrk.mode == '\x06') {
        SetPlyrFinderQEnd__Fv();
        plyr_wrk.cmn_wrk.st.dmg_cam_flag = '\0';
      }
      else {
        plyr_wrk.cmn_wrk.st.dmg_cam_flag = '\0';
      }
    }
    else {
      (target->st).dmg_cam_flag = '\0';
    }
    (target->st).dmg_type = 4;
    (target->st).cond_tm = 0;
    (target->st).dmg = (target->st).dmg + fw->dat->dmg;
    if (plyr_wrk.cmn_wrk.mode != '\b') {
      GetTrgtRot__FPCfT0Pfi((target->mbox).pos,fw->npos,rv,2);
      rv[1] = rv[1] - (target->mbox).rot[1];
      RotLimitChk__FPf(rv + 1);
      if ((PLYR_WRK *)target == &plyr_wrk) {
        uVar2 = ConvertRot2Dir__FfUc(rv[1],'\x02');
        uVar3 = '8';
        if (uVar2 != '\0') {
          uVar3 = '9';
        }
        SetPlyrAnime__FUcUc(uVar3,'\x01');
        plyr_wrk.cmn_wrk.st.mvsta = plyr_wrk.cmn_wrk.st.mvsta & 0xfffffffffffffff0;
        PlayerChangeMode__Fi(2);
        SetIngameDamageMode__Fi(1);
      }
      else {
        uVar2 = ConvertRot2Dir__FfUc(rv[1],'\x02');
        uVar3 = '\"';
        if (uVar2 != '\0') {
          uVar3 = '#';
        }
        SetSisterAnime__FUcUc(uVar3,'\x01');
        sis_wrk.cmn_wrk.mode = '\x02';
        sis_wrk.cmn_wrk.st.mvsta = sis_wrk.cmn_wrk.st.mvsta & 0xfffffffffffffff0;
      }
      (target->st).dmg_type = 4;
      (target->st).invisible_timer = 0x21;
      sVar1 = fw->dat->cond;
      if (sVar1 != 0) {
        (target->st).cond = sVar1;
        (target->st).cond_tm = 0xf0;
      }
    }
  }
  return;
}

void SetFlyOne(FLY_WRK *fw, ENE_WRK *ew, u_char type, float *pos, float *rot, PLCMN_WRK *target) {
	float wvec[4];
	float mvv[4];
	float wmx[4][4];
	float xrw;
	float yrw;
	
  uint uVar1;
  PLCMN_WRK *pPVar2;
  undefined8 uVar3;
  int iVar4;
  uint uVar5;
  float fVar6;
  float fVar7;
  float *pfVar8;
  float fVar9;
  float wvec [4];
  float mvv [4];
  float wmx [4] [4];
  float xrw;
  float yrw;
  
  mvv._8_8_ = DAT_003ae518;
  mvv._0_8_ = DAT_003ae510;
  fw->ew = ew;
  fw->target = target;
  fw->dat = (FLY_DATA *)(&fly_dat[0].attr + ((uint)type * 0xc + (uint)type) * 4);
  iVar4 = GetRndSP__FUiUi(0,100);
  uVar5 = iVar4 + fw->dat->blifetime;
  fw->life_time = uVar5;
  fw->trace_time = uVar5;
  iVar4 = GetPALMode__Fv();
  if (iVar4 == 0) {
    fw->now_cnt = 0;
  }
  else {
    uVar5 = fw->life_time;
    if ((int)uVar5 < 0) {
      fVar6 = (float)(uVar5 & 1 | uVar5 >> 1);
      fVar6 = fVar6 + fVar6;
    }
    else {
      fVar6 = (float)uVar5;
    }
    fVar6 = fVar6 / DAT_003ee2cc;
    uVar5 = (uint)fVar6;
    if (2.147484e+09 <= fVar6) {
      uVar5 = (int)(fVar6 - 2.147484e+09) | 0x80000000;
      uVar1 = fw->trace_time;
    }
    else {
      uVar1 = fw->trace_time;
    }
    fw->life_time = uVar5;
    if ((int)uVar1 < 0) {
      fVar6 = (float)(uVar1 & 1 | uVar1 >> 1);
      fVar6 = fVar6 + fVar6;
    }
    else {
      fVar6 = (float)uVar1;
    }
    fVar6 = fVar6 / DAT_003ee2d0;
    if (2.147484e+09 <= fVar6) {
      fw->trace_time = (int)(fVar6 - 2.147484e+09) | 0x80000000;
    }
    else {
      fw->trace_time = (int)fVar6;
    }
    fw->now_cnt = 0;
  }
  fw->alp = fw->dat->alp;
  iVar4 = CheckEffectFly__FP7FLY_WRK(fw);
  if (iVar4 != 0) {
    EffectTorch2SetAlphaRate__FPvf(fw->efpw,(float)(uint)fw->alp * 0.0078125);
  }
  switch((uint)type) {
  case 0:
  case 1:
  case 3:
    iVar4 = GetRndSP__FUiUi(0,100);
    fVar9 = DAT_003ee2e0;
    fVar7 = DAT_003ee2dc;
    fVar6 = 180.0;
    fw->nrot[0] = ((float)(iVar4 + -0x32) * DAT_003ee2dc * DAT_003ee2e0) / 180.0;
    iVar4 = GetRndSP__FUiUi(0,200);
    fVar6 = ((float)(iVar4 + -100) * fVar7 * fVar9) / fVar6;
    break;
  case 2:
  case 4:
  case 5:
    iVar4 = GetRndSP__FUiUi(0,200);
    fVar7 = DAT_003ee2d8;
    fVar6 = DAT_003ee2d4;
    fVar9 = 180.0;
    fw->nrot[0] = ((float)(iVar4 + 0xfa) * DAT_003ee2d4 * DAT_003ee2d8) / 180.0;
    iVar4 = GetRndSP__FUiUi(0,400);
    fw->nrot[1] = ((float)(iVar4 + 0x1c2) * fVar6 * fVar7) / fVar9;
    iVar4 = GetRndSP__FUiUi(0,2);
    if (iVar4 != 0) {
      fw->nrot[0] = -fw->nrot[0];
    }
    iVar4 = GetRndSP__FUiUi(0,2);
    if (iVar4 == 0) goto switchD_00194228_caseD_6;
    fVar6 = -fw->nrot[1];
    break;
  default:
    goto switchD_00194228_caseD_6;
  }
  fw->nrot[1] = fVar6;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/g3dxVu0.h */
switchD_00194228_caseD_6:
  pfVar8 = fw->npos;
  uVar3 = *(undefined8 *)pos;
  fVar6 = pos[2];
  fVar7 = pos[3];
  *pfVar8 = (float)uVar3;
  fw->npos[1] = (float)((ulong)uVar3 >> 0x20);
  fw->npos[2] = fVar6;
  fw->npos[3] = fVar7;
  pPVar2 = fw->target;
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/g3dxVu0.h */
                    /* end of inlined section */
  fw->npos[3] = 1.0;
  uVar3 = *(undefined8 *)pPVar2->headpos;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/g3dxVu0.h */
  fVar6 = pPVar2->headpos[2];
  fVar7 = pPVar2->headpos[3];
  fw->tpos[0] = (float)uVar3;
  fw->tpos[1] = (float)((ulong)uVar3 >> 0x20);
  fw->tpos[2] = fVar6;
  fw->tpos[3] = fVar7;
                    /* end of inlined section */
  fw->tpos[3] = 1.0;
  yrw = rot[1] + fw->nrot[1];
  xrw = *rot + fw->nrot[0];
  RotLimitChk__FPf(&xrw);
  RotLimitChk__FPf(&yrw);
  sceVu0UnitMatrix(wmx);
  if ((fw->dat->attr & 2) == 0) {
    sceVu0RotMatrixX(xrw,wmx,wmx);
  }
  sceVu0RotMatrixY(yrw,wmx,wmx);
  sceVu0TransMatrix(wmx,wmx,pfVar8);
  sceVu0ApplyMatrix(wvec,wmx,mvv);
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/g3dxVu0.h */
  fVar6 = fw->npos[2];
  fVar7 = fw->npos[3];
  fw->opos[0] = (float)*(undefined8 *)pfVar8;
  fw->opos[1] = (float)((ulong)*(undefined8 *)pfVar8 >> 0x20);
  fw->opos[2] = fVar6;
  fw->opos[3] = fVar7;
  *pfVar8 = (float)wvec._0_8_;
  fw->npos[1] = SUB84(wvec._0_8_,4);
  fw->npos[2] = wvec[2];
  fw->npos[3] = wvec[3];
                    /* end of inlined section */
  fw->sta = fw->sta | 1;
  return;
}

static void FlyMove(FLY_WRK *fw) {
	float wvec[4];
	float mvv[4];
	float wmx[4][4];
	float tr_ang;
	float xrw;
	float yrw;
	float f;
	FLY_DATA *fd;
	
  ushort uVar1;
  FLY_DATA *pFVar2;
  PLCMN_WRK *pPVar3;
  undefined8 uVar4;
  uint uVar5;
  int iVar6;
  float fVar7;
  float *p1;
  float *rot;
  float *p0;
  float fVar8;
  float fVar9;
  float fVar10;
  float wvec [4];
  float mvv [4];
  float wmx [4] [4];
  float xrw;
  float yrw;
  float f;
  
  memset(mvv,0,0x10);
  mvv[3] = 1.0;
  if (((fw->sta & 4U) == 0) && (uVar5 = fw->life_time - 1, fw->life_time = uVar5, uVar5 == 0)) {
    fw->sta = fw->sta | 8;
  }
  pFVar2 = fw->dat;
  p0 = fw->npos;
  p1 = fw->tpos;
  f = GetDistV__FPCfT0(p0,p1);
  if (pFVar2->fdist < f) {
    mvv[2] = pFVar2->fmove;
    fVar9 = pFVar2->frot;
    fVar8 = DAT_003ee2e4;
  }
  else {
    fVar8 = pFVar2->ndist;
    if (fVar8 <= f) {
      mvv[2] = (1.0 - (f - fVar8) / (pFVar2->fdist - fVar8)) * (pFVar2->nmove - pFVar2->fmove) +
               pFVar2->fmove;
      fVar9 = (((f - pFVar2->ndist) / (pFVar2->fdist - pFVar2->ndist)) *
               (pFVar2->frot - pFVar2->nrot) + pFVar2->nrot) * DAT_003ee2ec;
      goto LAB_001945d8;
    }
    mvv[2] = pFVar2->nmove;
    fVar9 = pFVar2->nrot;
    fVar8 = DAT_003ee2e8;
  }
  fVar9 = fVar9 * fVar8;
LAB_001945d8:
  fVar9 = fVar9 / 180.0;
  iVar6 = GetPALMode__Fv();
  if (iVar6 != 0) {
    mvv[2] = mvv[2] * DAT_003ee2f0;
    fVar9 = fVar9 * DAT_003ee2f0;
  }
  if ((ushort)fw->now_cnt < (ushort)pFVar2->chg_cnt) {
    fVar8 = (float)(uint)(ushort)pFVar2->chg_cnt;
    fVar7 = pFVar2->fstmove;
    f = (pFVar2->fstrot * DAT_003ee2f4) / 180.0;
    fVar10 = (float)(uint)(ushort)fw->now_cnt;
    fw->now_cnt = fw->now_cnt + 1;
    mvv[2] = ((mvv[2] - fVar7) * fVar10) / fVar8 + fVar7;
    fVar9 = ((fVar9 - f) * fVar10) / fVar8 + f;
    uVar1 = fw->sta;
  }
  else {
    uVar1 = fw->sta;
  }
  if ((uVar1 & 4) == 0) {
    uVar5 = fw->trace_time - 1;
    fw->trace_time = uVar5;
    if (uVar5 == 0) {
      fVar9 = 0.0;
    }
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/g3dxVu0.h */
    pPVar3 = fw->target;
    uVar4 = *(undefined8 *)pPVar3->headpos;
    fVar8 = pPVar3->headpos[2];
    fVar7 = pPVar3->headpos[3];
    *p1 = (float)uVar4;
    fw->tpos[1] = (float)((ulong)uVar4 >> 0x20);
    fw->tpos[2] = fVar8;
    fw->tpos[3] = fVar7;
                    /* end of inlined section */
    rot = fw->nrot;
    GetTrgtRot__FPCfT0Pfi(p0,p1,fw->trot,3);
    GetTrgtRot__FPCfT0Pfi(fw->opos,p0,rot,3);
    xrw = fw->trot[0];
    if (fVar9 < ABS(*rot - xrw)) {
      f = *rot - xrw;
      RotLimitChk__FPf(&f);
      if (f <= 0.0) {
        xrw = *rot + fVar9;
      }
      else {
        xrw = *rot - fVar9;
      }
    }
    yrw = fw->trot[1];
    fVar8 = fw->nrot[1] - yrw;
    if (fVar9 < ABS(fVar8)) {
      f = fVar8;
      RotLimitChk__FPf(&f);
      if (f <= 0.0) {
        yrw = fw->nrot[1] + fVar9;
      }
      else {
        yrw = fw->nrot[1] - fVar9;
      }
    }
    RotLimitChk__FPf(&xrw);
    RotLimitChk__FPf(&yrw);
    sceVu0UnitMatrix(wmx);
    if ((fw->dat->attr & 2) == 0) {
      sceVu0RotMatrixX(xrw,wmx,wmx);
    }
    sceVu0RotMatrixY(yrw,wmx,wmx);
    sceVu0TransMatrix(wmx,wmx,p0);
    sceVu0ApplyMatrix(wvec,wmx,mvv);
    fVar8 = sinf(fw->adjp_cnt);
    f = fVar8 * fw->adjp_span;
    fVar8 = cosf(fw->adjp_ang);
    mvv[0] = fVar8 * f;
    fVar9 = sinf(fw->adjp_ang);
    fVar8 = fw->adjp_ang + DAT_003ee2f8;
    mvv[1] = fVar9 * f;
    fw->adjp_cnt = fw->adjp_cnt + fw->adjp_add;
    fw->adjp_ang = fVar8;
    RotLimitChk__FPf(&fw->adjp_cnt);
    RotLimitChk__FPf(&fw->adjp_ang);
    sceVu0ApplyMatrix(fw->adjv,wmx,mvv);
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/g3dxVu0.h */
    fVar8 = fw->npos[2];
    fVar9 = fw->npos[3];
    fw->opos[0] = (float)*(undefined8 *)p0;
    fw->opos[1] = (float)((ulong)*(undefined8 *)p0 >> 0x20);
    fw->opos[2] = fVar8;
    fw->opos[3] = fVar9;
    *p0 = (float)wvec._0_8_;
    fw->npos[1] = SUB84(wvec._0_8_,4);
    fw->npos[2] = wvec[2];
    fw->npos[3] = wvec[3];
  }
  return;
}

static FLY_WRK* GetFlyWork() {
	int i;
	
  int iVar1;
  fixed_array<FLY_WRK,40> *pfVar2;
  
  iVar1 = 0;
  pfVar2 = &fly_wrk;
  do {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Z7FLY_WRK_UiUi_PX01(iVar1,0x28);
    if ((((FLY_WRK *)pfVar2)->sta & 0x10U) == 0) {
                    /* end of inlined section */
      printf("ASSIGN FLY BUFFER fly_wrk[%d]\n");
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
      _fixed_array_verifyrange__H1Z7FLY_WRK_UiUi_PX01(iVar1,0x28);
      return (FLY_WRK *)pfVar2;
    }
    iVar1 = iVar1 + 1;
    pfVar2 = (fixed_array<FLY_WRK,40> *)((int)pfVar2 + 0x1460);
  } while (iVar1 < 0x28);
  printf("FLY BUFFER is FULL!!\n");
  return (FLY_WRK *)0x0;
}

void EraseEneFlyWork(ENE_WRK *ew) {
	FLY_WRK *fw;
	int i;
	
  fixed_array<FLY_WRK,40> *pfVar1;
  int iVar2;
  
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  _fixed_array_verifyrange__H1Z7FLY_WRK_UiUi_PX01(0,0x28);
  pfVar1 = &fly_wrk;
                    /* end of inlined section */
  iVar2 = 0x27;
  do {
    iVar2 = iVar2 + -1;
    if ((ENE_WRK *)((FLY_WRK *)pfVar1)->ew == ew) {
      ((fixed_array_base<FLY_WRK,40,FLY_WRK[40]> *)&((FLY_WRK *)pfVar1)->sta)->m_aData[0].sta =
           ((fixed_array_base<FLY_WRK,40,FLY_WRK[40]> *)&((FLY_WRK *)pfVar1)->sta)->m_aData[0].sta |
           8;
    }
    pfVar1 = (fixed_array<FLY_WRK,40> *)((int)pfVar1 + 0x1460);
  } while (-1 < iVar2);
  return;
}

static void ClearCheckFlyWork() {
	FLY_WRK *fw;
	int i;
	
  ushort uVar1;
  int iVar2;
  fixed_array<FLY_WRK,40> *fw;
  int iVar3;
  
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  iVar3 = 0x27;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  _fixed_array_verifyrange__H1Z7FLY_WRK_UiUi_PX01(0,0x28);
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  fw = &fly_wrk;
  do {
                    /* end of inlined section */
    uVar1 = ((FLY_WRK *)fw)->sta;
    if ((uVar1 & 2) == 0) {
      if ((uVar1 & 8) == 0) {
        if ((((FLY_WRK *)fw)->ew != (void *)0x0) &&
           (*(int *)((int)((FLY_WRK *)fw)->ew + 0x3c4) != 4)) {
          ((FLY_WRK *)fw)->sta = uVar1 | 8;
        }
      }
      else {
        if ((int)(((FLY_WRK *)fw)->alp - 8) < 1) {
          ((FLY_WRK *)fw)->alp = '\0';
          ((FLY_WRK *)fw)->sta = uVar1 | 2;
        }
        else {
          ((FLY_WRK *)fw)->alp = ((FLY_WRK *)fw)->alp - 8;
        }
        iVar2 = CheckEffectFly__FP7FLY_WRK((FLY_WRK *)fw);
        if (iVar2 != 0) {
          EffectTorch2SetAlphaRate__FPvf
                    (((FLY_WRK *)fw)->efpw,(float)(uint)((FLY_WRK *)fw)->alp * 0.0078125);
        }
      }
    }
    else {
      ((FLY_WRK *)fw)->sta = uVar1 & 0xfff0;
      ((FLY_WRK *)fw)->alp = '\0';
      if (((FLY_WRK *)fw)->ew == (void *)0x0) {
        FlyRelease__FP7FLY_WRK((FLY_WRK *)fw);
      }
      else {
        iVar2 = CheckEffectFly__FP7FLY_WRK((FLY_WRK *)fw);
        if (iVar2 != 0) {
          FlyEffectRelease__FP7FLY_WRK((FLY_WRK *)fw);
        }
      }
    }
    iVar3 = iVar3 + -1;
    fw = (fixed_array<FLY_WRK,40> *)((int)fw + 0x1460);
  } while (-1 < iVar3);
  return;
}

void FlyRule() {
	FLY_WRK *fw;
	int i;
	PLCMN_WRK *target;
	
  PLCMN_WRK *target;
  int iVar1;
  FLY_WRK *fw;
  fixed_array<FLY_WRK,40> *pfVar2;
  
  iVar1 = 0;
  ClearCheckFlyWork__Fv();
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  _fixed_array_verifyrange__H1Z7FLY_WRK_UiUi_PX01(0,0x28);
  pfVar2 = &fly_wrk;
                    /* end of inlined section */
  fw = (FLY_WRK *)pfVar2;
  do {
    if ((((fixed_array_base<FLY_WRK,40,FLY_WRK[40]> *)&((FLY_WRK *)pfVar2)->sta)->m_aData[0].sta &
        1U) != 0) {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
      _fixed_array_verifyrange__H1Z7FLY_WRK_UiUi_PX01(iVar1,0x28);
      FlyMove__FP7FLY_WRK(fw);
                    /* end of inlined section */
                    /* end of inlined section */
      if ((((fixed_array_base<FLY_WRK,40,FLY_WRK[40]> *)&((FLY_WRK *)pfVar2)->sta)->m_aData[0].sta &
          8U) == 0) {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
        _fixed_array_verifyrange__H1Z7FLY_WRK_UiUi_PX01(iVar1,0x28);
        target = FlyPlyrHitChk__FP7FLY_WRK(fw);
        if (target != (PLCMN_WRK *)0x0) {
          _fixed_array_verifyrange__H1Z7FLY_WRK_UiUi_PX01(iVar1,0x28);
          FlyAtkHit__FP7FLY_WRKP9PLCMN_WRK(fw,target);
        }
      }
    }
    iVar1 = iVar1 + 1;
    fw = fw + 1;
    pfVar2 = (fixed_array<FLY_WRK,40> *)((int)pfVar2 + 0x1460);
  } while (iVar1 < 0x28);
  return;
}

void SetFlyLight(FLY_WRK *fw) {
	int i;
	
  float afVar1 [4];
  GRA3DCAMERA *pGVar2;
  int iVar3;
  float *v;
  fixed_array<G3DLIGHT,39> *pLight;
  float fVar4;
  undefined4 uVar5;
  float fVar6;
  undefined auVar7 [16];
  undefined auVar8 [16];
  int iLightId;
  
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  pLight = &(fw->light).aLight;
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  _fixed_array_verifyrange__H1Z8G3DLIGHT_UiUi_PX01(0,0x27);
                    /* end of inlined section */
  (fw->light).aLight.field0_0x0.m_aData[0].Type = G3DLIGHT_DIRECTIONAL;
  iLightId = 0;
  do {
    iVar3 = iLightId + 1;
    gra3dLightEnable__Fii(iLightId,0);
    iLightId = iVar3;
  } while (iVar3 < 0x27);
  v = (fw->light).aLight.field0_0x0.m_aData[0].vDirection;
  pGVar2 = gra3dGetCamera__Fv();
  fVar4 = fw->npos[0];
  fVar6 = pGVar2->matCoord[3][0];
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/g3dxVu0.h */
                    /* end of inlined section */
  pGVar2 = gra3dGetCamera__Fv();
  uVar5 = 0xbf800000;
  _SetVector__FPfffff(v,fVar6 - fVar4,-1.0,pGVar2->matCoord[3][2] - fw->npos[2],0.0);
  _SetVector__FPfffff((float *)pLight,0.5,0.5,0.5,0.0);
  _SetVector__FPfffff((fw->light).aLight.field0_0x0.m_aData[0].vSpecular,0.0,0.0,0.0,0.0);
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/g3dxVu0.h */
  pGVar2 = gra3dGetCamera__Fv();
  auVar8 = _qmtc2(uVar5);
  afVar1[0] = *(float *)((int)pGVar2->matCoord[2] + 0);
  afVar1[1] = *(float *)((int)pGVar2->matCoord[2] + 4);
  afVar1[2] = *(float *)((int)pGVar2->matCoord[2] + 8);
  afVar1[3] = *(float *)((int)pGVar2->matCoord[2] + 0xc);
  auVar7 = _lqc2((undefined  [16])afVar1);
  auVar7 = _vmulbc(auVar7,auVar8);
  auVar7 = _sqc2(auVar7);
  *(undefined (*) [16])v = auVar7;
                    /* end of inlined section */
  (fw->light).aLight.field0_0x0.m_aData[0].fFalloff = 1.0;
  gra3dSetLight__FiPC8G3DLIGHT(0,(G3DLIGHT *)pLight);
  gra3dLightEnable__Fii(0,1);
  gra3dApplyLight__Fv();
  return;
}

FLY_WRK* FLY_WRK * _fixed_array_verifyrange<FLY_WRK>(size_t v, size_t _max) {
  g3ddbgAssert__FbPCce(false,str_646);
  return (type_info *)v;
}

G3DLIGHT* G3DLIGHT * _fixed_array_verifyrange<G3DLIGHT>(size_t v, size_t _max) {
  g3ddbgAssert__FbPCce(false,str_646);
  return (type_info *)v;
}

static void __static_initialization_and_destruction_0(int __initialize_p, int __priority) {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  return;
}

type_info& FLY_WRK type_info function() {
  g3ddbgAssert__FbPCce(false,str_646);
  return (type_info *)v;
}

type_info& G3DLIGHT type_info function() {
  g3ddbgAssert__FbPCce(false,str_646);
  return (type_info *)v;
}

static void global constructors keyed to fly_dat() {
  __static_initialization_and_destruction_0(1,0xffff);
  return;
}
