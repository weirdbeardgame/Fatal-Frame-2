// STATUS: NOT STARTED

#include "sis_algo.h"

void (*SisCtrlTbl[20])(/* parameters unknown */) = {
	/* [0] = */ SaEndAct,
	/* [1] = */ SaLoopSet,
	/* [2] = */ SaLoopEnd,
	/* [3] = */ SaJump,
	/* [4] = */ SaNeckPos,
	/* [5] = */ SaAnimSet,
	/* [6] = */ SaAnimEnd,
	/* [7] = */ SaEneDist,
	/* [8] = */ SaAlgoChg,
	/* [9] = */ SaAlgoTrace,
	/* [10] = */ SaRotEneDir,
	/* [11] = */ SaObjHit,
	/* [12] = */ SaEneOutTime,
	/* [13] = */ SaPlyrDist,
	/* [14] = */ SaWait,
	/* [15] = */ SaGetEneNum,
	/* [16] = */ SaSetDirection,
	/* [17] = */ SaReqSE,
	/* [18] = */ SaRndJump,
	/* [19] = */ SaSetMvsta
};

unsigned char ENE_WRK type_info node[8];

SIS_LOCAL_ALG sis_lalg = {
	/* .loop_cnt = */ 0,
	/* .hit = */ 0,
	/* .ghost_erase_tm = */ 0
};

static void _fixed_array_assert(char *strType, size_t v0, size_t v1) {
	static char *str = 0x3c6e90;
	
  g3ddbgAssert__FbPCce(false,str_574);
  return (type_info *)v;
}

static void** void * * _fixed_array_verifyrange<void *>(size_t v, size_t _max) {
  if (_max <= v) {
    __tf7ENE_WRK(0x3f4310,_max);
  }
  return (void **)0x0;
}

static char** char * * _fixed_array_verifyrange<char *>(size_t v, size_t _max) {
  if (_max <= v) {
    __tf7ENE_WRK(0x3f4318,_max);
  }
  return (char **)0x0;
}

static unsigned int** unsigned int * * _fixed_array_verifyrange<unsigned int *>(size_t v, size_t _max) {
  if (_max <= v) {
    __tf7ENE_WRK(0x3c6ed8,_max);
  }
  return (uint **)0x0;
}

void SisActSet(u_char alg_no) {
	SISALG_WRK *alg;
	
  void *pvVar1;
  byte *pbVar2;
  
  pvVar1 = sis_mdlGetAlgAdrs__Fv();
  sis_wrk.alg.data_addr = ZEXT48(pvVar1);
  pbVar2 = (byte *)((int)pvVar1 + (uint)alg_no * 2);
  sis_wrk.alg.comm_add_top = sis_wrk.alg.data_addr;
  sis_wrk.alg.stack_p = sis_wrk.alg.stack_b;
  sis_wrk.alg.wait_time = '\x01';
  sis_wrk.alg.pos_no = '\0';
  sis_wrk.alg.comm_add.wrk =
       sis_wrk.alg.data_addr + ((long)(int)((uint)*pbVar2 + (uint)pbVar2[1] * 0x100) & 0xffffU);
  return;
}

void SisAlgCtrl() {
	SISALG_WRK *alg;
	
  uchar uVar1;
  
  if ((sis_wrk.alg.data_addr != 0) &&
     (uVar1 = sis_wrk.alg.wait_time + 0xff, sis_wrk.alg.wait_time != '\0')) {
    do {
      sis_wrk.alg.wait_time = uVar1;
      if (sis_wrk.alg.wait_time != '\0') {
        return;
      }
      if (sis_wrk.alg.pos_no == '\0') {
        sis_wrk.alg.job_no = *sis_wrk.alg.comm_add.pu8;
        sis_wrk.alg.comm_add.pu8 = sis_wrk.alg.comm_add.pu8 + 1;
      }
      (*(code *)SisCtrlTbl[sis_wrk.alg.job_no])(0x34fd10);
      uVar1 = sis_wrk.alg.wait_time;
    } while (sis_wrk.alg.wait_time != 0xff);
    sis_wrk.alg.pos_no = '\0';
    sis_wrk.alg.wait_time = '\0';
  }
  return;
}

void ReqSisAlgo(u_char no) {
  SisActSet__FUc(no);
  return;
}

void SisAlgoMain() {
  CountAlgTime__Fv();
  SisAlgCtrl__Fv();
  if ((sis_wrk.cmn_wrk.st.mvsta & 0x61a8000) != 0) {
    SisterNoMove__Fv();
  }
  return;
}

int EneDistCount(float dist) {
	ENE_WRK *ew;
	u_char i;
	int num;
	
  byte bVar1;
  fixed_array<ENE_WRK,10> *pfVar2;
  int iVar3;
  float fVar4;
  
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  bVar1 = 0;
  iVar3 = 0;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  _fixed_array_verifyrange__H1Z7ENE_WRK_UiUi_PX01(0,10);
  pfVar2 = &ene_wrk;
  do {
                    /* end of inlined section */
    if ((((((ENE_WRK *)pfVar2)->type < 2) && (((ENE_WRK *)pfVar2)->status == 4)) &&
        ((((ENE_WRK *)pfVar2)->st).hp != 0)) &&
       (fVar4 = GetDistV__FPCfT0(sis_wrk.cmn_wrk.mbox.pos,(((ENE_WRK *)pfVar2)->mbox).pos),
       fVar4 < dist)) {
      iVar3 = iVar3 + 1;
    }
    bVar1 = bVar1 + 1;
    pfVar2 = (fixed_array<ENE_WRK,10> *)((int)pfVar2 + 0x490);
  } while (bVar1 < 10);
  return iVar3;
}

void CountAlgTime() {
  int iVar1;
  
  if (((plyr_wrk.cmn_wrk.st.sta & 0x20) == 0) || (iVar1 = EneDistCount__Ff(8000.0), iVar1 == 0)) {
    sis_lalg.ghost_erase_tm = sis_lalg.ghost_erase_tm + 1;
  }
  else {
    sis_lalg.ghost_erase_tm = 0;
  }
  return;
}

void SaEndAct(SISALG_WRK *alg) {
  alg->pos_no = '\0';
  alg->wait_time = 0xff;
  return;
}

void SaLoopSet(SISALG_WRK *alg) {
	u_short frm;
	
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  int iVar4;
  uint uVar5;
  
  pbVar3 = (alg->comm_add).pu8;
  bVar1 = pbVar3[1];
  bVar2 = *pbVar3;
  (alg->comm_add).pu8 = pbVar3 + 2;
  uVar5 = (uint)bVar2 + (uint)bVar1 * 0x100 & 0xffff;
  iVar4 = GetPALMode__Fv();
  if (iVar4 == 0) {
    alg->loop[0] = (float)uVar5;
  }
  else {
    alg->loop[0] = (float)uVar5 / DAT_003ee8b0;
  }
  alg->pos_no = '\0';
  alg->wait_time = '\0';
  return;
}

void SaLoopEnd(SISALG_WRK *alg) {
	u_short adj;
	
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  
  pbVar3 = (alg->comm_add).pu8;
  bVar1 = pbVar3[1];
  bVar2 = *pbVar3;
  (alg->comm_add).pu8 = pbVar3 + 2;
  if (0.0 < alg->loop[0]) {
    alg->loop[0] = alg->loop[0] - 1.0;
  }
  else {
    (alg->comm_add).wrk =
         ((long)(int)((uint)bVar2 + (uint)bVar1 * 0x100) & 0xffffU) + alg->comm_add_top;
  }
  alg->pos_no = '\0';
  alg->wait_time = '\0';
  return;
}

void SaJump(SISALG_WRK *alg) {
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  
  pbVar3 = (alg->comm_add).pu8;
  bVar1 = pbVar3[1];
  bVar2 = *pbVar3;
  (alg->comm_add).pu8 = pbVar3 + 2;
  alg->pos_no = '\0';
  alg->wait_time = '\0';
  (alg->comm_add).wrk =
       alg->comm_add_top + ((long)(int)((uint)bVar2 + (uint)bVar1 * 0x100) & 0xffffU);
  return;
}

void SaNeckPos(SISALG_WRK *alg) {
  alg->pos_no = '\0';
  alg->wait_time = '\0';
  return;
}

void SaAnimSet(SISALG_WRK *alg) {
  uchar anime_no;
  uchar frame;
  uchar *puVar1;
  P_INT *pPVar2;
  
  pPVar2 = &alg->comm_add;
  puVar1 = pPVar2->pu8;
  anime_no = *puVar1;
  pPVar2->pu8 = puVar1 + 1;
  frame = puVar1[1];
  pPVar2->pu8 = puVar1 + 2;
  SetSisterAnime__FUcUc(anime_no,frame);
  alg->wait_time = '\0';
  alg->pos_no = '\0';
  return;
}

void SaAnimEnd(SISALG_WRK *alg) {
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  
  pbVar3 = (alg->comm_add).pu8;
  bVar1 = *pbVar3;
  bVar2 = pbVar3[1];
  (alg->comm_add).pu8 = pbVar3 + 2;
  if ((sis_wrk.cmn_wrk.st.sta & 0x6000) != 0) {
    (alg->comm_add).wrk =
         ((long)(int)((uint)bVar1 + (uint)bVar2 * 0x100) & 0xffffU) + alg->comm_add_top;
  }
  alg->pos_no = '\0';
  alg->wait_time = '\0';
  return;
}

void SaEneDist(SISALG_WRK *alg) {
	float fl;
	float dist;
	u_short adj;
	
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte *pbVar6;
  bool bVar7;
  P_INT *pPVar8;
  float fVar9;
  
  pPVar8 = &alg->comm_add;
  pbVar6 = pPVar8->pu8;
  bVar1 = *pbVar6;
  pPVar8->pu8 = pbVar6 + 1;
  bVar2 = pbVar6[1];
  bVar3 = pbVar6[2];
  pPVar8->pu8 = pbVar6 + 3;
  bVar4 = pbVar6[4];
  bVar5 = pbVar6[3];
  pPVar8->pu8 = pbVar6 + 5;
  fVar9 = (float)((uint)bVar2 + (uint)bVar3 * 0x100 & 0xffff);
  if ((float)(uint)bVar1 == 0.0) {
    bVar7 = sis_wrk.cmn_wrk.near_ene_dist < fVar9;
  }
  else {
    bVar7 = fVar9 < sis_wrk.cmn_wrk.near_ene_dist;
  }
  if (bVar7) {
    pPVar8->wrk = ((long)(int)((uint)bVar5 + (uint)bVar4 * 0x100) & 0xffffU) + alg->comm_add_top;
    alg->pos_no = '\0';
  }
  else {
    alg->pos_no = '\0';
  }
  alg->wait_time = '\0';
  return;
}

void SaAlgoChg(SISALG_WRK *alg) {
  uchar *puVar1;
  
  puVar1 = (alg->comm_add).pu8;
  sis_algo.amode = *puVar1;
  (alg->comm_add).pu8 = puVar1 + 1;
  alg->pos_no = '\0';
  alg->wait_time = '\0';
  return;
}

void SaAlgoTrace(SISALG_WRK *alg) {
  SetSisEscape__Fv();
  alg->pos_no = '\0';
  alg->wait_time = '\0';
  return;
}

void SaRotEneDir(SISALG_WRK *alg) {
	float vw[4];
	u_short adj;
	float rotf;
	float rw;
	float psrot;
	
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte *pbVar5;
  uchar uVar6;
  double arg_a;
  int iVar7;
  float fVar8;
  float fVar9;
  float vw [4];
  float psrot;
  
  pbVar5 = (alg->comm_add).pu8;
  bVar1 = *pbVar5;
  bVar2 = pbVar5[1];
  (alg->comm_add).pu8 = pbVar5 + 2;
  bVar3 = pbVar5[3];
  bVar4 = pbVar5[2];
  (alg->comm_add).pu8 = pbVar5 + 4;
  uVar6 = sis_wrk.cmn_wrk.near_ene_no;
  if (sis_wrk.cmn_wrk.near_ene_no != 0xff) {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Z7ENE_WRK_UiUi_PX01(sis_wrk.cmn_wrk.near_ene_no,10);
    fVar9 = DAT_003ee8b8;
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    iVar7 = (uint)uVar6 * 0x48 + (uint)uVar6;
                    /* end of inlined section */
    if (ene_wrk.field0_0x0.m_aData[0].directionaldiffuse[iVar7 * 4 + -3] != 5.605194e-45) {
      alg->pos_no = '\0';
      goto LAB_0025a354;
    }
    fVar8 = ((float)((uint)bVar1 + (uint)bVar2 * 0x100 & 0xffff) * DAT_003ee8b4) / 180.0;
    sis_wrk.spd[2] = 0.0;
    GetTrgtRot__FPCfT0Pfi
              (sis_wrk.cmn_wrk.mbox.pos,
               (float *)((int)&ene_wrk.field0_0x0.m_aData[0].mbox + iVar7 * 0x10 + 0x10),vw,2);
    psrot = vw[1] - sis_wrk.cmn_wrk.mbox.rot[1];
    RotLimitChk__FPf(&psrot);
    iVar7 = GetPALMode__Fv();
    if (iVar7 == 0) {
      fVar9 = DAT_003ee8bc;
    }
    arg_a = (double)psrot;
    iVar7 = dpcmp((long)arg_a,0);
    if (iVar7 < 0) {
      arg_a = 0.0 - arg_a;
    }
    iVar7 = dpcmp((long)arg_a,(long)(double)fVar9);
    if (iVar7 < 1) {
      if (psrot < 0.0) {
        sis_wrk.cmn_wrk.mbox.rot[1] = sis_wrk.cmn_wrk.mbox.rot[1] - psrot;
      }
      else {
        sis_wrk.cmn_wrk.mbox.rot[1] = sis_wrk.cmn_wrk.mbox.rot[1] + psrot;
      }
    }
    else if (psrot < 0.0) {
      sis_wrk.cmn_wrk.mbox.rot[1] = sis_wrk.cmn_wrk.mbox.rot[1] - fVar9;
    }
    else {
      sis_wrk.cmn_wrk.mbox.rot[1] = sis_wrk.cmn_wrk.mbox.rot[1] + fVar9;
    }
    RotLimitChk__FPf(sis_wrk.cmn_wrk.mbox.rot + 1);
    psrot = vw[1] - sis_wrk.cmn_wrk.mbox.rot[1];
    RotLimitChk__FPf(&psrot);
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/g3dxVu0.h */
                    /* end of inlined section */
    sis_wrk.cmn_wrk.mbox.brot[1] = sis_wrk.cmn_wrk.mbox.rot[1];
    sis_wrk.wpos[0] = (float)sis_wrk.cmn_wrk.mbox.pos._0_8_;
    sis_wrk.wpos[1] = SUB84(sis_wrk.cmn_wrk.mbox.pos._0_8_,4);
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/g3dxVu0.h */
    sis_wrk.wpos[2] = sis_wrk.cmn_wrk.mbox.pos[2];
    sis_wrk.wpos[3] = sis_wrk.cmn_wrk.mbox.pos[3];
                    /* end of inlined section */
    if (fVar8 < ABS(psrot)) {
      alg->pos_no = '\0';
      goto LAB_0025a354;
    }
  }
  (alg->comm_add).wrk =
       ((long)(int)((uint)bVar4 + (uint)bVar3 * 0x100) & 0xffffU) + alg->comm_add_top;
  alg->pos_no = '\0';
LAB_0025a354:
  alg->wait_time = '\0';
  return;
}

void SaObjHit(SISALG_WRK *alg) {
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  
  pbVar3 = (alg->comm_add).pu8;
  bVar1 = *pbVar3;
  bVar2 = pbVar3[1];
  (alg->comm_add).pu8 = pbVar3 + 2;
  if (sis_lalg.hit != '\0') {
    (alg->comm_add).wrk =
         ((long)(int)((uint)bVar1 + (uint)bVar2 * 0x100) & 0xffffU) + alg->comm_add_top;
  }
  alg->pos_no = '\0';
  alg->wait_time = '\0';
  return;
}

void SaEneOutTime(SISALG_WRK *alg) {
	u_short frm;
	u_short adj;
	
  uchar uVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  uchar *puVar6;
  bool bVar7;
  ulong uVar8;
  P_INT *pPVar9;
  
  pPVar9 = &alg->comm_add;
  puVar6 = pPVar9->pu8;
  uVar1 = *puVar6;
  pPVar9->pu8 = puVar6 + 1;
  bVar2 = puVar6[1];
  bVar3 = puVar6[2];
  pPVar9->pu8 = puVar6 + 3;
  bVar4 = puVar6[4];
  bVar5 = puVar6[3];
  uVar8 = (long)(int)((uint)bVar2 + (uint)bVar3 * 0x100) & 0xffff;
  pPVar9->pu8 = puVar6 + 5;
  if (uVar1 == '\0') {
    bVar7 = sis_lalg.ghost_erase_tm < uVar8;
  }
  else {
    bVar7 = uVar8 < sis_lalg.ghost_erase_tm;
  }
  if (bVar7) {
    pPVar9->wrk = ((long)(int)((uint)bVar5 + (uint)bVar4 * 0x100) & 0xffffU) + alg->comm_add_top;
    alg->pos_no = '\0';
  }
  else {
    alg->pos_no = '\0';
  }
  alg->wait_time = '\0';
  return;
}

void SaPlyrDist(SISALG_WRK *alg) {
	float f;
	float fl;
	float dist;
	u_short adj;
	
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte *pbVar6;
  bool bVar7;
  P_INT *pPVar8;
  float fVar9;
  float fVar10;
  
  pPVar8 = &alg->comm_add;
  pbVar6 = pPVar8->pu8;
  bVar1 = *pbVar6;
  pPVar8->pu8 = pbVar6 + 1;
  bVar2 = pbVar6[1];
  bVar3 = pbVar6[2];
  pPVar8->pu8 = pbVar6 + 3;
  bVar4 = pbVar6[4];
  bVar5 = pbVar6[3];
  pPVar8->pu8 = pbVar6 + 5;
  fVar10 = (float)((uint)bVar2 + (uint)bVar3 * 0x100 & 0xffff);
  fVar9 = GetDistV__FPCfT0(sis_wrk.cmn_wrk.mbox.pos,plyr_wrk.cmn_wrk.mbox.pos);
  if ((float)(uint)bVar1 == 0.0) {
    bVar7 = fVar9 < fVar10;
  }
  else {
    bVar7 = fVar10 < fVar9;
  }
  if (bVar7) {
    pPVar8->wrk = ((long)(int)((uint)bVar5 + (uint)bVar4 * 0x100) & 0xffffU) + alg->comm_add_top;
    alg->pos_no = '\0';
  }
  else {
    alg->pos_no = '\0';
  }
  alg->wait_time = '\0';
  return;
}

void SaWait(SISALG_WRK *alg) {
	u_char time;
	
  byte bVar1;
  uchar uVar2;
  byte *pbVar3;
  int iVar4;
  uchar uVar5;
  float fVar6;
  
  bVar1 = alg->pos_no;
  if (bVar1 == 1) {
    alg->pos_no = '\0';
    alg->wait_time = '\0';
  }
  else if (bVar1 < 2) {
    if (bVar1 == 0) {
      pbVar3 = (alg->comm_add).pu8;
      bVar1 = *pbVar3;
      (alg->comm_add).pu8 = pbVar3 + 1;
      if (bVar1 == 0) {
        alg->wait_time = '\x01';
        alg->pos_no = '\x02';
      }
      else {
        iVar4 = GetPALMode__Fv();
        if (iVar4 == 0) {
          alg->wait_time = bVar1;
          alg->pos_no = alg->pos_no + '\x01';
        }
        else {
          fVar6 = (float)(uint)bVar1 / DAT_003ee8c0;
          if (2.147484e+09 <= fVar6) {
            fVar6 = fVar6 - 2.147484e+09;
            uVar2 = alg->pos_no;
          }
          else {
            uVar2 = alg->pos_no;
          }
          uVar5 = '\x01';
          if (((int)fVar6 & 0xffU) != 0) {
            uVar5 = (uchar)(int)fVar6;
          }
          alg->pos_no = uVar2 + '\x01';
          alg->wait_time = uVar5;
        }
      }
    }
  }
  else if (bVar1 == 2) {
    alg->wait_time = '\x01';
  }
  return;
}

void SaGetEneNum(SISALG_WRK *alg) {
	u_char n;
	u_char num;
	u_short adj;
	
  uchar uVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  uchar *puVar6;
  bool bVar7;
  uint uVar8;
  P_INT *pPVar9;
  uint uVar10;
  
  pPVar9 = &alg->comm_add;
  puVar6 = pPVar9->pu8;
  uVar1 = *puVar6;
  pPVar9->pu8 = puVar6 + 1;
  bVar2 = puVar6[2];
  bVar3 = puVar6[1];
  pPVar9->pu8 = puVar6 + 3;
  uVar10 = (uint)puVar6[3];
  pPVar9->pu8 = puVar6 + 4;
  bVar4 = puVar6[5];
  bVar5 = puVar6[4];
  pPVar9->pu8 = puVar6 + 6;
  uVar8 = EneDistCount__Ff((float)((uint)bVar3 + (uint)bVar2 * 0x100 & 0xffff));
  if (uVar1 == '\0') {
    bVar7 = uVar10 < (uVar8 & 0xff);
  }
  else {
    bVar7 = (uVar8 & 0xff) < uVar10;
  }
  if (bVar7) {
    alg->pos_no = '\0';
  }
  else {
    pPVar9->wrk = ((long)(int)((uint)bVar5 + (uint)bVar4 * 0x100) & 0xffffU) + alg->comm_add_top;
    alg->pos_no = '\0';
  }
  alg->wait_time = '\0';
  return;
}

void SaSetDirection(SISALG_WRK *alg) {
	u_char id;
	MOVE_BOX *mb;
	MOVE_BOX *tgt;
	float vw[4];
	float adjr;
	
  uchar uVar1;
  byte bVar2;
  uchar *puVar3;
  bool bVar4;
  uchar uVar5;
  PLYR_WRK *pPVar6;
  P_INT *pPVar7;
  float *p1;
  float fVar8;
  float vw [4];
  
  pPVar7 = &alg->comm_add;
  puVar3 = pPVar7->pu8;
  uVar1 = *puVar3;
  pPVar7->pu8 = puVar3 + 1;
  bVar2 = puVar3[1];
  pPVar7->pu8 = puVar3 + 2;
  uVar5 = sis_wrk.cmn_wrk.near_ene_no;
  if (uVar1 == '\0') {
                    /* end of inlined section */
    pPVar6 = &plyr_wrk;
LAB_0025a7e8:
    p1 = (pPVar6->cmn_wrk).mbox.pos;
    if (bVar2 == 0) {
      GetTrgtRot__FPCfT0Pfi(sis_wrk.cmn_wrk.mbox.pos,p1,sis_wrk.cmn_wrk.mbox.rot,3);
      alg->pos_no = '\0';
      goto LAB_0025a898;
    }
    GetTrgtRot__FPCfT0Pfi(sis_wrk.cmn_wrk.mbox.pos,p1,vw,3);
    vw[1] = vw[1] - sis_wrk.cmn_wrk.mbox.rot[1];
    RotLimitChk__FPf(vw + 1);
    if (0.0 < vw[1]) {
      bVar4 = DAT_003ee8c4 < vw[1];
      fVar8 = DAT_003ee8c4;
    }
    else {
      bVar4 = vw[1] < DAT_003ee8c8;
      fVar8 = DAT_003ee8c8;
    }
    if (!bVar4) {
      fVar8 = vw[1];
    }
    sis_wrk.cmn_wrk.mbox.rot[1] = sis_wrk.cmn_wrk.mbox.rot[1] + fVar8 / (float)(uint)bVar2;
    RotLimitChk__FPf(sis_wrk.cmn_wrk.mbox.rot + 1);
  }
  else if (sis_wrk.cmn_wrk.near_ene_no != 0xff) {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Z7ENE_WRK_UiUi_PX01(sis_wrk.cmn_wrk.near_ene_no,10);
    pPVar6 = (PLYR_WRK *)(((uint)uVar5 * 0x48 + (uint)uVar5) * 0x10 + 0x2fe280);
    goto LAB_0025a7e8;
  }
  alg->pos_no = '\0';
LAB_0025a898:
  alg->wait_time = '\0';
  return;
}

void SaReqSE(SISALG_WRK *alg) {
  byte bVar1;
  byte *pbVar2;
  
  pbVar2 = (alg->comm_add).pu8;
  bVar1 = *pbVar2;
  (alg->comm_add).pu8 = pbVar2 + 1;
  ReqSisBankPlay__FiiiiP11_SND_3D_SET((uint)bVar1,1,1,0,&sis_wrk.s3d);
  alg->wait_time = '\0';
  alg->pos_no = '\0';
  return;
}

void SaRndJump(SISALG_WRK *alg) {
	u_char percent;
	u_short adj;
	
  uchar uVar1;
  byte bVar2;
  byte bVar3;
  uchar *puVar4;
  bool bVar5;
  int iVar6;
  P_INT *pPVar7;
  uint uVar8;
  
  pPVar7 = &alg->comm_add;
  puVar4 = pPVar7->pu8;
  uVar1 = *puVar4;
  pPVar7->pu8 = puVar4 + 1;
  uVar8 = (uint)puVar4[1];
  pPVar7->pu8 = puVar4 + 2;
  bVar2 = puVar4[3];
  bVar3 = puVar4[2];
  pPVar7->pu8 = puVar4 + 4;
  if (uVar1 == '\0') {
    iVar6 = GetRndSP__FUiUi(1,99);
    bVar5 = (int)uVar8 < iVar6;
  }
  else {
    iVar6 = GetRndSP__FUiUi(1,99);
    bVar5 = iVar6 < (int)uVar8;
  }
  if (bVar5) {
    alg->pos_no = '\0';
  }
  else {
    pPVar7->wrk = ((long)(int)((uint)bVar3 + (uint)bVar2 * 0x100) & 0xffffU) + alg->comm_add_top;
    alg->pos_no = '\0';
  }
  alg->wait_time = '\0';
  return;
}

void SaSetMvsta(SISALG_WRK *alg) {
	u_int attr;
	
  uchar uVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  uchar *puVar6;
  uint uVar7;
  P_INT *pPVar8;
  
  pPVar8 = &alg->comm_add;
  puVar6 = pPVar8->pu8;
  uVar1 = *puVar6;
  pPVar8->pu8 = puVar6 + 1;
  bVar2 = puVar6[4];
  bVar3 = puVar6[3];
  bVar4 = puVar6[2];
  bVar5 = puVar6[1];
  pPVar8->pu8 = puVar6 + 5;
  uVar7 = (uint)bVar5 + (uint)bVar2 * 0x1000000 + (uint)bVar3 * 0x10000 + (uint)bVar4 * 0x100;
  if (uVar1 != '\0') {
    sis_wrk.cmn_wrk.st.mvsta = sis_wrk.cmn_wrk.st.mvsta | uVar7;
    return;
  }
  sis_wrk.cmn_wrk.st.mvsta = sis_wrk.cmn_wrk.st.mvsta & ~(long)(int)uVar7 & 0xffffffffU;
  return;
}

ENE_WRK* ENE_WRK * _fixed_array_verifyrange<ENE_WRK>(size_t v, size_t _max) {
  g3ddbgAssert__FbPCce(false,str_574);
  return (type_info *)v;
}

type_info& ENE_WRK type_info function() {
  g3ddbgAssert__FbPCce(false,str_574);
  return (type_info *)v;
}
