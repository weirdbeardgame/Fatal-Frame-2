// STATUS: NOT STARTED

#include "enemy_act.h"

int debug_alg = 255;

void (*CommJmpContTbl[74])(/* parameters unknown */) = {
	/* [0] = */ EJobC00,
	/* [1] = */ EJobC01,
	/* [2] = */ EJobC02,
	/* [3] = */ EJobC03,
	/* [4] = */ EJobC04,
	/* [5] = */ EJobC05,
	/* [6] = */ EJobC06,
	/* [7] = */ EJobC07,
	/* [8] = */ EJobC08,
	/* [9] = */ EJobC09,
	/* [10] = */ EJobC0A,
	/* [11] = */ EJobC0B,
	/* [12] = */ EJobC0C,
	/* [13] = */ EJobC0D,
	/* [14] = */ EJobC0E,
	/* [15] = */ EJobC0F,
	/* [16] = */ EJobC10,
	/* [17] = */ EJobC11,
	/* [18] = */ EJobC12,
	/* [19] = */ EJobC13,
	/* [20] = */ EJobC14,
	/* [21] = */ EJobC15,
	/* [22] = */ EJobC16,
	/* [23] = */ EJobC17,
	/* [24] = */ EJobC18,
	/* [25] = */ EJobC19,
	/* [26] = */ EJobC1A,
	/* [27] = */ EJobC1B,
	/* [28] = */ EJobC1C,
	/* [29] = */ EJobC1D,
	/* [30] = */ EJobC1E,
	/* [31] = */ EJobC1F,
	/* [32] = */ EJobC20,
	/* [33] = */ EJobC21,
	/* [34] = */ EJobC22,
	/* [35] = */ EJobC23,
	/* [36] = */ EJobC24,
	/* [37] = */ EJobC25,
	/* [38] = */ EJobC26,
	/* [39] = */ EJobC27,
	/* [40] = */ EJobC28,
	/* [41] = */ EJobC29,
	/* [42] = */ EJobC2A,
	/* [43] = */ EJobC2B,
	/* [44] = */ EJobC2C,
	/* [45] = */ EJobC2D,
	/* [46] = */ EJobC2E,
	/* [47] = */ EJobC2F,
	/* [48] = */ EJobC30,
	/* [49] = */ EJobC31,
	/* [50] = */ EJobC32,
	/* [51] = */ EJobC33,
	/* [52] = */ EJobC34,
	/* [53] = */ EJobC35,
	/* [54] = */ EJobC36,
	/* [55] = */ EJobC37,
	/* [56] = */ EJobC38,
	/* [57] = */ EJobC39,
	/* [58] = */ EJobC3A,
	/* [59] = */ EJobC3B,
	/* [60] = */ EJobC3C,
	/* [61] = */ EJobC3D,
	/* [62] = */ EJobC3E,
	/* [63] = */ EJobC3F,
	/* [64] = */ EJobC40,
	/* [65] = */ EJobC41,
	/* [66] = */ EJobC42,
	/* [67] = */ EJobC43,
	/* [68] = */ EJobC44,
	/* [69] = */ EJobC45,
	/* [70] = */ EJobC46,
	/* [71] = */ EJobC47,
	/* [72] = */ EJobC48,
	/* [73] = */ EJobC49
};

void (*CommJmpMoveTbl[22])(/* parameters unknown */) = {
	/* [0] = */ EJobM00,
	/* [1] = */ EJobM01,
	/* [2] = */ EJobM02,
	/* [3] = */ EJobM03,
	/* [4] = */ EJobM04,
	/* [5] = */ EJobM05,
	/* [6] = */ EJobM06,
	/* [7] = */ EJobM07,
	/* [8] = */ EJobM08,
	/* [9] = */ EJobM09,
	/* [10] = */ EJobM0A,
	/* [11] = */ EJobM0B,
	/* [12] = */ EJobM0C,
	/* [13] = */ EJobM0D,
	/* [14] = */ EJobM0E,
	/* [15] = */ EJobM0F,
	/* [16] = */ EJobM10,
	/* [17] = */ EJobM11,
	/* [18] = */ EJobM12,
	/* [19] = */ EJobM13,
	/* [20] = */ EJobM14,
	/* [21] = */ EJobM15
};

void (*CommJmpBrnchTbl[43])(/* parameters unknown */) = {
	/* [0] = */ EJobB00,
	/* [1] = */ EJobB01,
	/* [2] = */ EJobB02,
	/* [3] = */ EJobB03,
	/* [4] = */ EJobB04,
	/* [5] = */ EJobB05,
	/* [6] = */ EJobB06,
	/* [7] = */ EJobB07,
	/* [8] = */ EJobB08,
	/* [9] = */ EJobB09,
	/* [10] = */ EJobB0A,
	/* [11] = */ EJobB0B,
	/* [12] = */ EJobB0C,
	/* [13] = */ EJobB0D,
	/* [14] = */ EJobB0E,
	/* [15] = */ EJobB0F,
	/* [16] = */ EJobB10,
	/* [17] = */ EJobB11,
	/* [18] = */ EJobB12,
	/* [19] = */ EJobB13,
	/* [20] = */ EJobB14,
	/* [21] = */ EJobB15,
	/* [22] = */ EJobB16,
	/* [23] = */ EJobB17,
	/* [24] = */ EJobB18,
	/* [25] = */ EJobB19,
	/* [26] = */ EJobB1A,
	/* [27] = */ EJobB1B,
	/* [28] = */ EJobB1C,
	/* [29] = */ EJobB1D,
	/* [30] = */ EJobB1E,
	/* [31] = */ EJobB1F,
	/* [32] = */ EJobB20,
	/* [33] = */ EJobB21,
	/* [34] = */ EJobB22,
	/* [35] = */ EJobB23,
	/* [36] = */ EJobB24,
	/* [37] = */ EJobB25,
	/* [38] = */ EJobB26,
	/* [39] = */ EJobB27,
	/* [40] = */ EJobB28,
	/* [41] = */ EJobB29,
	/* [42] = */ EJobB2A
};

void (*CommJmpEffTbl[6])(/* parameters unknown */) = {
	/* [0] = */ EJobE00,
	/* [1] = */ EJobE01,
	/* [2] = */ EJobE02,
	/* [3] = */ EJobE03,
	/* [4] = */ EJobE04,
	/* [5] = */ EJobE05
};

void (*BCommJmpTbl[8])(/* parameters unknown */) = {
	/* [0] = */ BJobL00,
	/* [1] = */ BJobL01,
	/* [2] = */ BJobL02,
	/* [3] = */ BJobL03,
	/* [4] = */ BJobL04,
	/* [5] = */ BJobL05,
	/* [6] = */ BJobL06,
	/* [7] = */ NULL
};

unsigned char ENE_WRK type_info node[8];

static void _fixed_array_assert(char *strType, size_t v0, size_t v1) {
	static char *str = 0x3a8e20;
	
  g3ddbgAssert__FbPCce(false,str_646);
  return (type_info *)v;
}

static void** void * * _fixed_array_verifyrange<void *>(size_t v, size_t _max) {
  if (_max <= v) {
    __tf7ENE_WRK(0x3f0208,_max);
  }
  return (void **)0x0;
}

static char** char * * _fixed_array_verifyrange<char *>(size_t v, size_t _max) {
  if (_max <= v) {
    __tf7ENE_WRK(0x3f0210,_max);
  }
  return (char **)0x0;
}

static unsigned int** unsigned int * * _fixed_array_verifyrange<unsigned int *>(size_t v, size_t _max) {
  if (_max <= v) {
    __tf7ENE_WRK(0x3a8e68,_max);
  }
  return (uint **)0x0;
}

void EneAlgCtrl(ENE_WRK *ew) {
	ENEALG_WRK *alg;
	
  uchar uVar1;
  byte bVar2;
  uchar *puVar3;
  ENEALG_WRK *pEVar4;
  P_INT *pPVar5;
  float fVar6;
  
  pEVar4 = &ew->alg;
  fVar6 = (ew->alg).wait_time;
  if ((0.0 < fVar6) && (fVar6 = fVar6 - ew->reso, (ew->alg).wait_time = fVar6, fVar6 <= 0.0)) {
    pPVar5 = &(ew->alg).comm_add;
    uVar1 = (ew->alg).pos_no;
    while( true ) {
      if (uVar1 == '\0') {
        puVar3 = pPVar5->pu8;
        (ew->alg).job_no = *puVar3;
        pPVar5->pu8 = puVar3 + 1;
        bVar2 = (ew->alg).job_no;
      }
      else {
        bVar2 = (ew->alg).job_no;
      }
      if (bVar2 < 0x70) {
        (*(code *)CommJmpContTbl[bVar2])(pEVar4);
        fVar6 = (ew->alg).wait_time;
      }
      else if ((byte)(bVar2 + 0x90) < 0x30) {
        (*(code *)(&def_type1[7].spd)[(ew->alg).job_no])(pEVar4);
        fVar6 = (ew->alg).wait_time;
      }
      else if ((byte)(bVar2 + 0x60) < 0x40) {
        (**(code **)(&dit_type[8].type + (uint)(ew->alg).job_no * 4))(pEVar4);
        fVar6 = (ew->alg).wait_time;
      }
      else if ((byte)(bVar2 + 0x20) < 0x1f) {
        (**(code **)(&dit_type[3].type + (uint)(ew->alg).job_no * 4))(pEVar4);
        fVar6 = (ew->alg).wait_time;
      }
      else {
        fVar6 = (ew->alg).wait_time;
      }
      if (fVar6 == 255.0) break;
      if (0.0 < fVar6) {
        return;
      }
      uVar1 = (ew->alg).pos_no;
    }
    (ew->alg).pos_no = '\0';
    (ew->alg).wait_time = 0.0;
  }
  return;
}

void EneBlinkCtrl(ENE_WRK *ew) {
	ENEALG_WRK *alg;
	
  uchar uVar1;
  byte bVar2;
  uchar *puVar3;
  P_INT *pPVar4;
  float fVar5;
  float fVar6;
  
  fVar5 = (ew->alg).bwait_time;
  if ((0.0 < fVar5) && (fVar5 = fVar5 - ew->reso, (ew->alg).bwait_time = fVar5, fVar5 <= 0.0)) {
    fVar5 = 255.0;
    pPVar4 = &(ew->alg).bcomm_add;
    uVar1 = (ew->alg).bpos_no;
    while( true ) {
      if (uVar1 == '\0') {
        puVar3 = pPVar4->pu8;
        (ew->alg).bjob_no = *puVar3;
        pPVar4->pu8 = puVar3 + 1;
        bVar2 = (ew->alg).bjob_no;
      }
      else {
        bVar2 = (ew->alg).bjob_no;
      }
      (*(code *)BCommJmpTbl[bVar2])(ew);
      fVar6 = (ew->alg).bwait_time;
      if (fVar6 == fVar5) break;
      if (0.0 < fVar6) {
        return;
      }
      uVar1 = (ew->alg).bpos_no;
    }
    (ew->alg).bpos_no = '\0';
    (ew->alg).bwait_time = 0.0;
  }
  return;
}

void EJobC00(ENEALG_WRK *alg) {
	u_char time;
	
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  uint uVar4;
  float fVar5;
  
  bVar1 = alg->pos_no;
  if (bVar1 == 1) {
    alg->pos_no = '\0';
    alg->wait_time = 0.0;
  }
  else {
    if (bVar1 < 2) {
      if (bVar1 != 0) {
        return;
      }
      pbVar2 = (alg->comm_add).pu8;
      bVar1 = *pbVar2;
      (alg->comm_add).pu8 = pbVar2 + 1;
      if (bVar1 == 0) {
        fVar5 = 1.0;
        alg->pos_no = '\x02';
      }
      else {
        iVar3 = GetPALMode__Fv();
        if (iVar3 == 0) {
          fVar5 = (float)(uint)bVar1;
          alg->pos_no = alg->pos_no + '\x01';
        }
        else {
          fVar5 = (float)(uint)bVar1 / DAT_003ee178;
          if (2.147484e+09 <= fVar5) {
            fVar5 = fVar5 - 2.147484e+09;
          }
          uVar4 = 1;
          if (((int)fVar5 & 0xffU) != 0) {
            uVar4 = (int)fVar5 & 0xffU;
          }
          fVar5 = (float)uVar4;
          alg->pos_no = alg->pos_no + '\x01';
        }
      }
    }
    else {
      if (bVar1 != 2) {
        return;
      }
      fVar5 = 1.0;
    }
    alg->wait_time = fVar5;
  }
  return;
}

void EJobC01(ENEALG_WRK *alg) {
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  
  pbVar3 = (alg->comm_add).pu8;
  bVar1 = pbVar3[1];
  bVar2 = *pbVar3;
  (alg->comm_add).pu8 = pbVar3 + 2;
  alg->pos_no = '\0';
  alg->wait_time = 0.0;
  (alg->comm_add).wrk =
       alg->comm_add_top + ((long)(int)((uint)bVar2 + (uint)bVar1 * 0x100) & 0xffffU);
  return;
}

void EJobC02(ENEALG_WRK *alg) {
  byte bVar1;
  ulong uVar2;
  int iVar3;
  
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  bVar1 = alg->idx;
  _fixed_array_verifyrange__H1Z7ENE_WRK_UiUi_PX01(bVar1,10);
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  iVar3 = (uint)bVar1 * 0x48 + (uint)bVar1;
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  uVar2 = *(ulong *)(ene_wrk.field0_0x0.m_aData[0].dist_p_e + iVar3 * 4 + -0x12);
  *(undefined *)((int)ene_wrk.field0_0x0.m_aData[0].dist_in_tm + iVar3 * 0x10 + 0x1f) = 0xff;
  alg->wait_time = 255.0;
  *(ulong *)(ene_wrk.field0_0x0.m_aData[0].dist_p_e + iVar3 * 4 + -0x12) =
       uVar2 & 0xfffffffffaf0cfff | 0x800008;
  alg->pos_no = '\0';
  return;
}

void EJobC03(ENEALG_WRK *alg) {
  byte bVar1;
  
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  bVar1 = alg->idx;
  _fixed_array_verifyrange__H1Z7ENE_WRK_UiUi_PX01(bVar1,10);
                    /* end of inlined section */
  alg->wait_time = 0.0;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  ene_wrk.field0_0x0.m_aData[0].directionaldiffuse[((uint)bVar1 * 0x48 + (uint)bVar1) * 4 + -3] =
       7.006492e-45;
                    /* end of inlined section */
  alg->pos_no = '\0';
  return;
}

void EJobC04(ENEALG_WRK *alg) {
	ENE_WRK *ew;
	
  byte bVar1;
  uchar uVar2;
  uchar *puVar3;
  int iVar4;
  ulong uVar5;
  
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  bVar1 = alg->idx;
  _fixed_array_verifyrange__H1Z7ENE_WRK_UiUi_PX01(bVar1,10);
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  puVar3 = (alg->comm_add).pu8;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  uVar2 = *puVar3;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  iVar4 = (uint)bVar1 * 0x48 + (uint)bVar1;
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  (alg->comm_add).pu8 = puVar3 + 1;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  uVar5 = *(ulong *)(ene_wrk.field0_0x0.m_aData[0].dist_p_e + iVar4 * 4 + -0x12);
  if (uVar2 == '\0') {
    uVar5 = uVar5 & 0xfffffff7ffffffff;
  }
  else {
    uVar5 = uVar5 | 0x800000000;
  }
  *(ulong *)(ene_wrk.field0_0x0.m_aData[0].dist_p_e + iVar4 * 4 + -0x12) = uVar5;
  alg->pos_no = '\0';
  alg->wait_time = 0.0;
  return;
}

void EJobC05(ENEALG_WRK *alg) {
	float rv[4];
	float tv[4];
	u_char req;
	ENE_WRK *ew;
	float CamPos[4];
	SND_3D_SET set;
	
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  GRA3DCAMERA *pGVar4;
  float fVar5;
  int iVar6;
  float (*pvTarget) [4];
  ENE_WRK *ew;
  float rv [4];
  float tv [4];
  float CamPos [4];
  _SND_3D_SET set;
  
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  bVar1 = alg->idx;
  _fixed_array_verifyrange__H1Z7ENE_WRK_UiUi_PX01(bVar1,10);
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  pbVar2 = (alg->comm_add).pu8;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  iVar6 = (uint)bVar1 * 0x48 + (uint)bVar1;
                    /* end of inlined section */
  bVar1 = *pbVar2;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  ew = (ENE_WRK *)(ene_wrk.field0_0x0.m_aData[0].bep + iVar6 * 4);
                    /* end of inlined section */
  (alg->comm_add).pu8 = pbVar2 + 1;
  if (bVar1 == 1) {
    PlayerChangeMode__Fi(6);
    ReqEneStop__FUcUc('\0','\0');
    alg->pos_no = '\0';
  }
  else if (bVar1 < 2) {
    if (bVar1 == 0) {
      ReqEneStop__FUcUc('\0','\0');
      if (((uint)ene_wrk.field0_0x0.m_aData[0].directionaldiffuse[iVar6 * 4 + -1] & 0x40000) == 0) {
        alg->pos_no = '\0';
      }
      else {
        iVar6 = IsSisWrk__Fv();
        if (iVar6 != 0) {
          SisterDrawUnlock__Fv();
        }
        PlayerUnlock__Fv();
        PlayerDrawUnlock__Fv();
        SetIngameEneDead__Fi(0);
        alg->pos_no = '\0';
      }
    }
    else {
      alg->pos_no = '\0';
    }
  }
  else if (bVar1 == 2) {
    if (((uint)ene_wrk.field0_0x0.m_aData[0].directionaldiffuse[iVar6 * 4 + -1] & 0x40000) == 0) {
      alg->pos_no = '\0';
    }
    else {
      PlayerLock__Fv();
      ReqEneStop__FUcUc('\x01',(uchar)(1 << (alg->idx & 0x1f)));
      alg->pos_no = '\0';
    }
  }
  else if (bVar1 == 3) {
    if (((uint)ene_wrk.field0_0x0.m_aData[0].directionaldiffuse[iVar6 * 4 + -1] & 0x40000) != 0) {
      iVar3 = IsSisWrk__Fv();
      if (iVar3 != 0) {
        SisterDrawLock__Fv();
      }
      _SetVector__FPfffff(tv,0.0,0.0,DAT_003ee17c,0.0);
      pvTarget = (float (*) [4])((int)&ene_wrk.field0_0x0.m_aData[0].mpos + iVar6 * 0x10);
      pGVar4 = gra3dGetCamera__Fv();
      GetTrgtRot__FPCfT0Pfi((float *)pvTarget,(float *)pGVar4->matCoord[3],rv,3);
      RotFvector__FPfT0(rv,tv);
      sceVu0AddVector((float (*) [4])CamPos,pvTarget,tv);
      MapCamSetFinCamera__FRA3_CfPA3_Cf((float (*) [4])CamPos,pvTarget);
      EffScreenEffectStatusSet__Fi(1);
    }
    EnemyDeadPDeformCall__FP7ENE_WRK(ew);
    SetEnemyParallelLight__FP7ENE_WRKffff(ew,1.0,1.0,1.0,1.0);
    if (-1 < *(int *)((int)ene_wrk.field0_0x0.m_aData[0].dist_p_e[iVar6 * 4 + -2] + 0x48)) {
      memset(&set,0,0xc);
      set.pos = (float (*) [4])((int)&ene_wrk.field0_0x0.m_aData[0].mbox + iVar6 * 0x10 + 0x10);
      StreamAutoFadeOut((int)ene_wrk.field0_0x0.m_aData[0].directionaldiffuse[iVar6 * 4 + -4],10);
      iVar3 = *(int *)((int)ene_wrk.field0_0x0.m_aData[0].dist_p_e[iVar6 * 4 + -2] + 0x48);
      fVar5 = (float)StreamAutoPlay(iVar3,iVar3 + -1,0x12,0,0,0x3200,0,&set);
      ene_wrk.field0_0x0.m_aData[0].directionaldiffuse[iVar6 * 4 + -4] = fVar5;
    }
    if (((uint)ene_wrk.field0_0x0.m_aData[0].directionaldiffuse[iVar6 * 4 + -1] & 0x40000) != 0) {
      ReqEneStop__FUcUc('\x02',(uchar)(1 << (alg->idx & 0x1f)));
      PlayerDrawLock__Fv();
      SetIngameEneDead__Fi(1);
    }
    alg->pos_no = '\0';
  }
  else {
    alg->pos_no = '\0';
  }
  alg->wait_time = 0.0;
  return;
}

void EJobC06(ENEALG_WRK *alg) {
	ENE_WRK *ew;
	
  byte bVar1;
  uchar uVar2;
  uchar *puVar3;
  int iVar4;
  ulong uVar5;
  
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  bVar1 = alg->idx;
  _fixed_array_verifyrange__H1Z7ENE_WRK_UiUi_PX01(bVar1,10);
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  puVar3 = (alg->comm_add).pu8;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  uVar2 = *puVar3;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  iVar4 = (uint)bVar1 * 0x48 + (uint)bVar1;
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  (alg->comm_add).pu8 = puVar3 + 1;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  if (uVar2 == '\0') {
    uVar5 = *(ulong *)(ene_wrk.field0_0x0.m_aData[0].dist_p_e + iVar4 * 4 + -0x12) &
            0xffffffffffffefff;
  }
  else {
    uVar5 = *(ulong *)(ene_wrk.field0_0x0.m_aData[0].dist_p_e + iVar4 * 4 + -0x12) | 0x1000;
  }
  *(ulong *)(ene_wrk.field0_0x0.m_aData[0].dist_p_e + iVar4 * 4 + -0x12) = uVar5;
  alg->pos_no = '\0';
  alg->wait_time = 0.0;
  return;
}

void EJobC07(ENEALG_WRK *alg) {
	ENE_WRK *ew;
	
  byte bVar1;
  uchar uVar2;
  uchar *puVar3;
  int iVar4;
  ulong uVar5;
  
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  bVar1 = alg->idx;
  _fixed_array_verifyrange__H1Z7ENE_WRK_UiUi_PX01(bVar1,10);
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  puVar3 = (alg->comm_add).pu8;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  uVar2 = *puVar3;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  iVar4 = (uint)bVar1 * 0x48 + (uint)bVar1;
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  (alg->comm_add).pu8 = puVar3 + 1;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  if (uVar2 == '\0') {
    uVar5 = *(ulong *)(ene_wrk.field0_0x0.m_aData[0].dist_p_e + iVar4 * 4 + -0x12) &
            0xffffffffffffdfff;
  }
  else {
    uVar5 = *(ulong *)(ene_wrk.field0_0x0.m_aData[0].dist_p_e + iVar4 * 4 + -0x12) | 0x2000;
  }
  *(ulong *)(ene_wrk.field0_0x0.m_aData[0].dist_p_e + iVar4 * 4 + -0x12) = uVar5;
  alg->pos_no = '\0';
  alg->wait_time = 0.0;
  return;
}

void EJobC08(ENEALG_WRK *alg) {
	ENE_WRK *ew;
	
  byte bVar1;
  uchar uVar2;
  uchar *puVar3;
  int iVar4;
  ulong uVar5;
  
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  bVar1 = alg->idx;
  _fixed_array_verifyrange__H1Z7ENE_WRK_UiUi_PX01(bVar1,10);
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  puVar3 = (alg->comm_add).pu8;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  uVar2 = *puVar3;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  iVar4 = (uint)bVar1 * 0x48 + (uint)bVar1;
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  (alg->comm_add).pu8 = puVar3 + 1;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  if (uVar2 == '\0') {
    uVar5 = *(ulong *)(ene_wrk.field0_0x0.m_aData[0].dist_p_e + iVar4 * 4 + -0x12) &
            0xfffffffffff7ffff;
  }
  else {
    uVar5 = *(ulong *)(ene_wrk.field0_0x0.m_aData[0].dist_p_e + iVar4 * 4 + -0x12) | 0x80000;
  }
  *(ulong *)(ene_wrk.field0_0x0.m_aData[0].dist_p_e + iVar4 * 4 + -0x12) = uVar5;
  alg->pos_no = '\0';
  alg->wait_time = 0.0;
  return;
}

void EJobC09(ENEALG_WRK *alg) {
	u_short tm;
	
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
    alg->loop[0] = (float)uVar5 / DAT_003ee180;
  }
  alg->pos_no = '\0';
  alg->wait_time = 0.0;
  return;
}

void EJobC0A(ENEALG_WRK *alg) {
	u_char n;
	u_short tm;
	
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte *pbVar4;
  int iVar5;
  P_INT *pPVar6;
  uint uVar7;
  
  pPVar6 = &alg->comm_add;
  pbVar4 = pPVar6->pu8;
  bVar1 = *pbVar4;
  pPVar6->pu8 = pbVar4 + 1;
  bVar2 = pbVar4[2];
  bVar3 = pbVar4[1];
  pPVar6->pu8 = pbVar4 + 3;
  uVar7 = (uint)bVar3 + (uint)bVar2 * 0x100 & 0xffff;
  iVar5 = GetPALMode__Fv();
  if (iVar5 == 0) {
    alg->loop[bVar1] = (float)uVar7;
  }
  else {
    alg->loop[bVar1] = (float)uVar7 / DAT_003ee184;
  }
  alg->pos_no = '\0';
  alg->wait_time = 0.0;
  return;
}

void EJobC0B(ENEALG_WRK *alg) {
	u_short min;
	u_short rng;
	
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte *pbVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  
  pbVar5 = (alg->comm_add).pu8;
  bVar1 = *pbVar5;
  bVar2 = pbVar5[1];
  (alg->comm_add).pu8 = pbVar5 + 2;
  bVar3 = pbVar5[3];
  bVar4 = pbVar5[2];
  (alg->comm_add).pu8 = pbVar5 + 4;
  uVar6 = (uint)bVar4 + (uint)bVar3 * 0x100 & 0xffff;
  if (uVar6 != 0) {
    uVar6 = GetRndSP__FUiUi(0,uVar6);
    uVar6 = uVar6 & 0xffff;
  }
  iVar7 = GetPALMode__Fv();
  iVar8 = ((uint)bVar1 + (uint)bVar2 * 0x100 & 0xffff) + uVar6;
  if (iVar7 == 0) {
    alg->loop[0] = (float)iVar8;
  }
  else {
    alg->loop[0] = (float)iVar8 / DAT_003ee188;
  }
  alg->pos_no = '\0';
  alg->wait_time = 0.0;
  return;
}

void EJobC0C(ENEALG_WRK *alg) {
	u_char n;
	u_short min;
	u_short rng;
	
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte *pbVar6;
  uint uVar7;
  int iVar8;
  P_INT *pPVar9;
  uint uVar10;
  
  pPVar9 = &alg->comm_add;
  pbVar6 = pPVar9->pu8;
  bVar1 = *pbVar6;
  pPVar9->pu8 = pbVar6 + 1;
  bVar2 = pbVar6[1];
  bVar3 = pbVar6[2];
  pPVar9->pu8 = pbVar6 + 3;
  bVar4 = pbVar6[4];
  bVar5 = pbVar6[3];
  uVar10 = (uint)bVar2 + (uint)bVar3 * 0x100 & 0xffff;
  pPVar9->pu8 = pbVar6 + 5;
  uVar7 = (uint)bVar5 + (uint)bVar4 * 0x100 & 0xffff;
  if (uVar7 != 0) {
    uVar7 = GetRndSP__FUiUi(0,uVar7);
    uVar7 = uVar7 & 0xffff;
  }
  iVar8 = GetPALMode__Fv();
  if (iVar8 == 0) {
    alg->loop[bVar1] = (float)(uVar10 + uVar7);
  }
  else {
    alg->loop[bVar1] = (float)(uVar10 + uVar7) / DAT_003ee18c;
  }
  alg->pos_no = '\0';
  alg->wait_time = 0.0;
  return;
}

void EJobC0D(ENEALG_WRK *alg) {
	ENE_WRK *ew;
	
  byte bVar1;
  uchar uVar2;
  uchar *puVar3;
  int iVar4;
  ulong uVar5;
  
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  bVar1 = alg->idx;
  _fixed_array_verifyrange__H1Z7ENE_WRK_UiUi_PX01(bVar1,10);
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  puVar3 = (alg->comm_add).pu8;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  uVar2 = *puVar3;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  iVar4 = (uint)bVar1 * 0x48 + (uint)bVar1;
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  (alg->comm_add).pu8 = puVar3 + 1;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  if (uVar2 == '\0') {
    uVar5 = *(ulong *)(ene_wrk.field0_0x0.m_aData[0].dist_p_e + iVar4 * 4 + -0x12) &
            0xfffffffffffbffff;
  }
  else {
    uVar5 = *(ulong *)(ene_wrk.field0_0x0.m_aData[0].dist_p_e + iVar4 * 4 + -0x12) | 0x40000;
  }
  *(ulong *)(ene_wrk.field0_0x0.m_aData[0].dist_p_e + iVar4 * 4 + -0x12) = uVar5;
  alg->pos_no = '\0';
  alg->wait_time = 0.0;
  return;
}

void EJobC0E(ENEALG_WRK *alg) {
	ENE_WRK *ew;
	
  byte bVar1;
  uchar uVar2;
  uchar *puVar3;
  int iVar4;
  ulong uVar5;
  
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  bVar1 = alg->idx;
  _fixed_array_verifyrange__H1Z7ENE_WRK_UiUi_PX01(bVar1,10);
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  puVar3 = (alg->comm_add).pu8;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  uVar2 = *puVar3;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  iVar4 = (uint)bVar1 * 0x48 + (uint)bVar1;
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  (alg->comm_add).pu8 = puVar3 + 1;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  if (uVar2 == '\0') {
    uVar5 = *(ulong *)(ene_wrk.field0_0x0.m_aData[0].dist_p_e + iVar4 * 4 + -0x12) &
            0xfffffffffeffffff;
  }
  else {
    uVar5 = *(ulong *)(ene_wrk.field0_0x0.m_aData[0].dist_p_e + iVar4 * 4 + -0x12) | 0x1000000;
  }
  *(ulong *)(ene_wrk.field0_0x0.m_aData[0].dist_p_e + iVar4 * 4 + -0x12) = uVar5;
  alg->pos_no = '\0';
  alg->wait_time = 0.0;
  return;
}

void EJobC0F(ENEALG_WRK *alg) {
	ENE_WRK *ew;
	
  byte bVar1;
  uchar uVar2;
  uchar *puVar3;
  int iVar4;
  ulong uVar5;
  
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  bVar1 = alg->idx;
  _fixed_array_verifyrange__H1Z7ENE_WRK_UiUi_PX01(bVar1,10);
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  puVar3 = (alg->comm_add).pu8;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  uVar2 = *puVar3;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  iVar4 = (uint)bVar1 * 0x48 + (uint)bVar1;
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  (alg->comm_add).pu8 = puVar3 + 1;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  if (uVar2 == '\0') {
    uVar5 = *(ulong *)(ene_wrk.field0_0x0.m_aData[0].dist_p_e + iVar4 * 4 + -0x12) &
            0xfffffffffffeefff;
  }
  else {
    uVar5 = *(ulong *)(ene_wrk.field0_0x0.m_aData[0].dist_p_e + iVar4 * 4 + -0x12) | 0x10000;
  }
  *(ulong *)(ene_wrk.field0_0x0.m_aData[0].dist_p_e + iVar4 * 4 + -0x12) = uVar5;
  alg->pos_no = '\0';
  alg->wait_time = 0.0;
  return;
}

void EJobC10(ENEALG_WRK *alg) {
	ENE_WRK *ew;
	PLCMN_WRK *pcw;
	STATUS_DAT *pcsw;
	MOVE_BOX *mb;
	float tv[4];
	float rv[4];
	u_short adj;
	u_char id;
	u_char flag;
	u_char ani;
	int n;
	float rw[4];
	u_char pani_tbl[3][2];
	u_char sani_tbl[3][2];
	
  uchar *puVar1;
  byte bVar2;
  byte bVar3;
  char cVar4;
  byte *pbVar5;
  float fVar6;
  uint uVar7;
  bool bVar8;
  uchar uVar9;
  undefined2 uVar10;
  ulong uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  undefined uVar15;
  P_INT *pPVar16;
  byte bVar17;
  float *rot;
  ENE_WRK *ew;
  float *pfVar18;
  float *p0;
  float fVar19;
  float tv [4];
  float rv [4];
  float rw [4];
  uchar pani_tbl [3] [2];
  uchar sani_tbl [3] [2];
  short adj;
  
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  bVar17 = alg->idx;
  _fixed_array_verifyrange__H1Z7ENE_WRK_UiUi_PX01(bVar17);
  puVar1 = pani_tbl[1] + 1;
                    /* end of inlined section */
  uVar7 = (uint)puVar1 & 3;
  *(uint *)(puVar1 + -uVar7) =
       *(uint *)(puVar1 + -uVar7) & -1 << (uVar7 + 1) * 8 | DAT_003f0240 >> (3 - uVar7) * 8;
  pani_tbl[0][0] = (undefined)DAT_003f0240;
  pani_tbl[0][1] = DAT_003f0240._1_1_;
  pani_tbl[1][0] = DAT_003f0240._2_1_;
  pani_tbl[1][1] = DAT_003f0240._3_1_;
  pani_tbl[2][0] = DAT_003f0244;
  pani_tbl[2][1] = DAT_003f0245;
  pPVar16 = &alg->comm_add;
  puVar1 = sani_tbl[1] + 1;
  uVar7 = (uint)puVar1 & 3;
  *(uint *)(puVar1 + -uVar7) =
       *(uint *)(puVar1 + -uVar7) & -1 << (uVar7 + 1) * 8 | DAT_003f0248 >> (3 - uVar7) * 8;
  sani_tbl[0][0] = (undefined)DAT_003f0248;
  sani_tbl[0][1] = DAT_003f0248._1_1_;
  sani_tbl[1][0] = DAT_003f0248._2_1_;
  sani_tbl[1][1] = DAT_003f0248._3_1_;
  sani_tbl[2][0] = DAT_003f024c;
  sani_tbl[2][1] = DAT_003f024d;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  pbVar5 = pPVar16->pu8;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  iVar12 = (uint)bVar17 * 0x48 + (uint)bVar17;
  iVar13 = iVar12 * 0x10;
                    /* end of inlined section */
  bVar17 = *pbVar5;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  ew = (ENE_WRK *)(ene_wrk.field0_0x0.m_aData[0].bep + iVar12 * 4);
                    /* end of inlined section */
  fVar6 = ene_wrk.field0_0x0.m_aData[0].dist_p_e_o[iVar12 * 4 + 8];
  pPVar16->pu8 = pbVar5 + 2;
  bVar2 = pbVar5[3];
  bVar3 = pbVar5[2];
  pPVar16->pu8 = pbVar5 + 4;
  if (*(char *)(ene_wrk.field0_0x0.m_aData[0].dist_in_tm + iVar12 * 8 + 9) == '\x01') {
    uVar10 = 0x99;
  }
  else {
    uVar10 = 0x21;
  }
  *(undefined2 *)((int)fVar6 + 0xdc) = uVar10;
  bVar8 = false;
  ene_wrk.field0_0x0.m_aData[0].dist_p_e_o[iVar12 * 4 + 5] = 1.0;
  SetEneMahiClear__FP7ENE_WRK(ew);
  SetEneSlowClear__FP7ENE_WRK(ew);
  if (((plyr_wrk.cmn_wrk.mode == '\b') ||
      (200.0 < ABS((*(float *)((int)fVar6 + 0x14) -
                   *(float *)((int)&ene_wrk.field0_0x0.m_aData[0].mbox + iVar13 + 0x14)) +
                   ene_wrk.field0_0x0.m_aData[0].adjp[iVar12 * 4 + 1]))) ||
     ((cVar4 = *(char *)(ene_wrk.field0_0x0.m_aData[0].dist_in_tm + iVar12 * 8 + 9), cVar4 == '\0'
      && (plyr_wrk.cmn_wrk.mode == '\x03')))) {
LAB_00172d64:
    bVar8 = true;
    fVar19 = ene_wrk.field0_0x0.m_aData[0].dist_p_e[iVar12 * 4 + -2];
  }
  else if (cVar4 == '\x01') {
    if (sis_wrk.cmn_wrk.mode == '\x03') goto LAB_00172d64;
    fVar19 = ene_wrk.field0_0x0.m_aData[0].dist_p_e[iVar12 * 4 + -2];
  }
  else {
    fVar19 = ene_wrk.field0_0x0.m_aData[0].dist_p_e[iVar12 * 4 + -2];
  }
  uVar15 = *(undefined *)((int)fVar19 + 0x3b);
  if ((bVar17 & 0x80) != 0) {
    uVar7 = (uint)bVar17;
    bVar17 = bVar17 & 0xf;
    uVar15 = (undefined)((uVar7 & 0x70) >> 4);
  }
  *(undefined *)((int)fVar6 + 0xee) = uVar15;
  if (bVar17 != 1) {
    if (bVar17 < 2) {
      if (bVar17 != 0) {
        alg->pos_no = '\0';
        goto LAB_001731ac;
      }
      plyr_wrk.cmn_wrk.st.mvsta = plyr_wrk.cmn_wrk.st.mvsta & 0xfffffffffffffff0;
      if (plyr_wrk.cmn_wrk.mode == '\x06') {
        if (*(char *)(ene_wrk.field0_0x0.m_aData[0].dist_in_tm + iVar12 * 8 + 9) == '\0') {
          SetPlyrFinderQEnd__Fv();
          *(undefined *)((int)fVar6 + 0xd2) = 0;
          goto LAB_00172dec;
        }
LAB_00172e10:
        sis_wrk.cmn_wrk.mode = '\x01';
        *(undefined *)((int)fVar6 + 0xd2) = 0;
      }
      else {
LAB_00172dec:
        if (*(char *)(ene_wrk.field0_0x0.m_aData[0].dist_in_tm + iVar12 * 8 + 9) != '\0')
        goto LAB_00172e10;
        SetIngameDamageMode__Fi(1);
        PlayerChangeMode__Fi(1);
        *(undefined *)((int)fVar6 + 0xd2) = 0;
      }
      p0 = (float *)((int)fVar6 + 0x10);
      pfVar18 = (float *)((int)&ene_wrk.field0_0x0.m_aData[0].mbox + iVar13 + 0x10);
      *(uchar *)((int)fVar6 + 0xed) = alg->idx;
      *(undefined2 *)((int)fVar6 + 0xda) = 0;
      fVar19 = ene_wrk.field0_0x0.m_aData[0].dist_p_e_o[iVar12 * 4 + 8];
      uVar11 = *(ulong *)((int)fVar19 + 0xa0);
      *(undefined2 *)((int)fVar6 + 0xc6) =
           *(undefined2 *)((int)ene_wrk.field0_0x0.m_aData[0].dist_p_e[iVar12 * 4 + -2] + 0x56);
      *(ulong *)((int)fVar19 + 0xa0) = uVar11 & 0xfffffffffffcffff;
      ene_wrk.field0_0x0.m_aData[0].fp[iVar12 * 8 + -6] = 3;
      *(undefined2 *)((int)fVar6 + 0xd0) = 3;
      *(uchar *)((int)fVar6 + 0xed) = alg->idx;
      fVar19 = GetTrgtRotY__FPCfT0(p0,pfVar18);
      rv[1] = fVar19 - *(float *)((int)fVar6 + 0x54);
      RotLimitChk__FPf(rv + 1);
      if (DAT_003ee190 < rv[1]) {
        iVar14 = 1;
        *(undefined *)((int)fVar6 + 0xef) = 1;
      }
      else if (rv[1] < DAT_003ee194) {
        iVar14 = 2;
        *(undefined *)((int)fVar6 + 0xef) = 2;
      }
      else {
        *(undefined *)((int)fVar6 + 0xef) = 0;
        iVar14 = 0;
      }
      if (*(char *)(ene_wrk.field0_0x0.m_aData[0].dist_in_tm + iVar12 * 8 + 9) == '\0') {
        SetPlyrAnime__FUcUc(pani_tbl[iVar14][*(byte *)((int)fVar6 + 0xee)],'\x05');
        fVar19 = ene_wrk.field0_0x0.m_aData[0].dist_p_e[iVar12 * 4 + -2];
      }
      else {
        SetSisterAnime__FUcUc(sani_tbl[iVar14][*(byte *)((int)fVar6 + 0xee)],'\x05');
        ReqSisBankPlay__FiiiiP11_SND_3D_SET(0,1,1,0,&sis_wrk.s3d);
        fVar19 = ene_wrk.field0_0x0.m_aData[0].dist_p_e[iVar12 * 4 + -2];
      }
      ene_wrk.field0_0x0.m_aData[0].fp[iVar12 * 8 + -7] =
           (ushort)*(byte *)((int)fVar19 + 0x59) * 0x10 - (ushort)*(byte *)((int)fVar19 + 0x59);
      *(undefined2 *)((int)fVar6 + 0xd4) = 0x2d;
      sceVu0AddVector(tv,p0,iVar13 + 0x2fe050);
      GetTrgtRot__FPCfT0Pfi(tv,pfVar18,rw,3);
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/g3dxVu0.h */
      rv[2] = *(float *)((int)fVar6 + 0x58);
      rv[3] = *(float *)((int)fVar6 + 0x5c);
      rv[0] = (float)*(undefined8 *)((int)fVar6 + 0x50);
                    /* end of inlined section */
      rot = (float *)((int)&ene_wrk.field0_0x0.m_aData[0].mbox + iVar13 + 0x50);
      rv[1] = rw[1];
      _SetVector__FPfffff(tv,0.0,ene_wrk.field0_0x0.m_aData[0].adjp[iVar12 * 4 + 1],
                          *(float *)((int)ene_wrk.field0_0x0.m_aData[0].dist_p_e[iVar12 * 4 + -2] +
                                    0x40),0.0);
      RotFvector__FPfT0(rv,tv);
      sceVu0AddVector(pfVar18,p0,tv);
      GetTrgtRot__FPCfT0Pfi(pfVar18,p0,rot,2);
      _SetVector__FPfffff(tv,(float)(int)*(short *)((int)ene_wrk.field0_0x0.m_aData[0].dist_p_e
                                                         [iVar12 * 4 + -2] + 0x4c),0.0,0.0,0.0);
      RotFvector__FPfT0(rot,tv);
      sceVu0AddVector(pfVar18,pfVar18,tv);
      *(float *)((int)&ene_wrk.field0_0x0.m_aData[0].mbox + iVar13 + 0x14) =
           *(float *)((int)fVar6 + 0x14) + ene_wrk.field0_0x0.m_aData[0].adjp[iVar12 * 4 + 1];
    }
    else {
      if (bVar17 != 2) {
        alg->pos_no = '\0';
        goto LAB_001731ac;
      }
      if (plyr_wrk.cmn_wrk.mode == '\x06') {
        if (*(char *)(ene_wrk.field0_0x0.m_aData[0].dist_in_tm + iVar12 * 8 + 9) == '\0') {
          SetPlyrFinderQEnd__Fv();
          *(undefined2 *)((int)fVar6 + 0xda) = 0;
        }
        else {
          *(undefined2 *)((int)fVar6 + 0xda) = 0;
        }
      }
      else {
        *(undefined2 *)((int)fVar6 + 0xda) = 0;
      }
      *(undefined2 *)((int)fVar6 + 0xc6) =
           *(undefined2 *)((int)ene_wrk.field0_0x0.m_aData[0].dist_p_e[iVar12 * 4 + -2] + 0x54);
      ene_wrk.field0_0x0.m_aData[0].fp[iVar12 * 8 + -6] = 2;
      *(undefined2 *)((int)fVar6 + 0xd0) = 2;
      *(undefined *)((int)fVar6 + 0xd2) = 0;
      *(uchar *)((int)fVar6 + 0xed) = alg->idx;
      if (*(char *)(ene_wrk.field0_0x0.m_aData[0].dist_in_tm + iVar12 * 8 + 9) == '\0') {
        SetIngameDamageMode__Fi(1);
        PlayerChangeMode__Fi(2);
        uVar11 = *(ulong *)(ene_wrk.field0_0x0.m_aData[0].dist_p_e + iVar12 * 4 + -0x12);
      }
      else {
        sis_wrk.cmn_wrk.mode = '\x02';
        uVar11 = *(ulong *)(ene_wrk.field0_0x0.m_aData[0].dist_p_e + iVar12 * 4 + -0x12);
      }
      pfVar18 = (float *)((int)&ene_wrk.field0_0x0.m_aData[0].mbox + iVar13 + 0x10);
      *(ulong *)(ene_wrk.field0_0x0.m_aData[0].dist_p_e + iVar12 * 4 + -0x12) = uVar11 | 0x8000;
      GetTrgtRot__FPCfT0Pfi
                (pfVar18,(float *)((int)fVar6 + 0x10),
                 (float *)((int)&ene_wrk.field0_0x0.m_aData[0].mbox + iVar13 + 0x50),2);
      if (!bVar8) {
        ene_wrk.field0_0x0.m_aData[0].fp[iVar12 * 8 + -6] = 1;
        plyr_wrk.cmn_wrk.st.mvsta = plyr_wrk.cmn_wrk.st.mvsta & 0xfffffffffffffff0;
        *(undefined2 *)((int)fVar6 + 0xd0) = 1;
        GetTrgtRot__FPCfT0Pfi((float *)((int)fVar6 + 0x10),pfVar18,rv,2);
        rv[1] = rv[1] - *(float *)((int)fVar6 + 0x54);
        RotLimitChk__FPf(rv + 1);
        uVar9 = ConvertRot2Dir__FfUc(rv[1],'\x02');
        cVar4 = *(char *)(ene_wrk.field0_0x0.m_aData[0].dist_in_tm + iVar12 * 8 + 9);
        if (uVar9 == '\0') {
          if (cVar4 == '\0') {
            uVar9 = '8';
LAB_0017317c:
            SetPlyrAnime__FUcUc(uVar9,'\x05');
          }
          else {
            SetSisterAnime__FUcUc('\"','\x05');
          }
        }
        else {
          if (cVar4 == '\0') {
            uVar9 = '9';
            goto LAB_0017317c;
          }
          SetSisterAnime__FUcUc('#','\x05');
        }
      }
      (alg->comm_add).wrk =
           (long)(int)((uint)bVar3 + (uint)bVar2 * 0x100 & 0xffff) + alg->comm_add_top;
    }
  }
  alg->pos_no = '\0';
LAB_001731ac:
  alg->wait_time = 0.0;
  return;
}

void EJobC11(ENEALG_WRK *alg) {
	float hit_rng;
	float rot;
	float hit_rot;
	u_short id;
	u_short adj;
	ENE_WRK *ew;
	PLCMN_WRK *pcw;
	STATUS_DAT *pcsw;
	MOVE_BOX *mb;
	
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte *pbVar4;
  float fVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  float *p0;
  float fVar9;
  float fVar10;
  float rot;
  float hit_rot;
  
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  bVar1 = alg->idx;
  _fixed_array_verifyrange__H1Z7ENE_WRK_UiUi_PX01(bVar1,10);
  fVar10 = DAT_003ee198;
                    /* end of inlined section */
  pbVar4 = (alg->comm_add).pu8;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  iVar6 = (uint)bVar1 * 0x48 + (uint)bVar1;
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  iVar7 = iVar6 * 0x10;
                    /* end of inlined section */
  bVar1 = *pbVar4;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  bVar2 = pbVar4[1];
  fVar5 = ene_wrk.field0_0x0.m_aData[0].dist_p_e_o[iVar6 * 4 + 8];
  (alg->comm_add).pu8 = pbVar4 + 2;
  bVar3 = pbVar4[2];
  (alg->comm_add).pu8 = pbVar4 + 3;
  uVar8 = (uint)bVar1 + (uint)bVar2 * 0x100 & 0xffff;
  bVar1 = pbVar4[4];
  bVar2 = pbVar4[3];
  (alg->comm_add).pu8 = pbVar4 + 5;
  p0 = (float *)((int)&ene_wrk.field0_0x0.m_aData[0].mbox + iVar7 + 0x10);
  hit_rot = ((float)(uint)bVar3 * fVar10) / 180.0;
  RotLimitChk__FPf(&hit_rot);
  if (uVar8 == 0) {
    fVar10 = *(float *)((int)ene_wrk.field0_0x0.m_aData[0].dist_p_e[iVar6 * 4 + -2] + 0x40);
  }
  else {
    fVar10 = (float)uVar8;
  }
  fVar9 = GetTrgtRotY__FPCfT0(p0,(float *)((int)fVar5 + 0x10));
  rot = fVar9 - *(float *)((int)&ene_wrk.field0_0x0.m_aData[0].mbox + iVar7 + 0x54);
  RotLimitChk__FPf(&rot);
  fVar9 = GetDistV__FPCfT0((float *)((int)fVar5 + 0x10),p0);
  if (fVar9 <= fVar10) {
    if (ABS((*(float *)((int)fVar5 + 0x14) -
            *(float *)((int)&ene_wrk.field0_0x0.m_aData[0].mbox + iVar7 + 0x14)) +
            ene_wrk.field0_0x0.m_aData[0].adjp[iVar6 * 4 + 1]) <= 300.0) {
      if (ABS(rot) <= hit_rot) {
        if (*(short *)((int)fVar5 + 0xdc) == 0) {
          (alg->comm_add).wrk =
               ((long)(int)((uint)bVar2 + (uint)bVar1 * 0x100) & 0xffffU) + alg->comm_add_top;
          *(ulong *)(ene_wrk.field0_0x0.m_aData[0].dist_p_e + iVar6 * 4 + -0x12) =
               *(ulong *)(ene_wrk.field0_0x0.m_aData[0].dist_p_e + iVar6 * 4 + -0x12) |
               0x40000000000;
          alg->pos_no = '\0';
        }
        else {
          alg->pos_no = '\0';
        }
      }
      else {
        alg->pos_no = '\0';
      }
    }
    else {
      alg->pos_no = '\0';
    }
  }
  else {
    alg->pos_no = '\0';
  }
  alg->wait_time = 0.0;
  return;
}

void EJobC12(ENEALG_WRK *alg) {
	float hit_rng;
	float rot;
	float hit_rot;
	u_short id;
	u_short adj;
	ENE_WRK *ew;
	PLCMN_WRK *pcw;
	STATUS_DAT *pcsw;
	MOVE_BOX *mb;
	
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte *pbVar4;
  float fVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  float *p0;
  float fVar9;
  float fVar10;
  float rot;
  float hit_rot;
  
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  bVar1 = alg->idx;
  _fixed_array_verifyrange__H1Z7ENE_WRK_UiUi_PX01(bVar1,10);
  fVar10 = DAT_003ee19c;
                    /* end of inlined section */
  pbVar4 = (alg->comm_add).pu8;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  iVar6 = (uint)bVar1 * 0x48 + (uint)bVar1;
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  iVar7 = iVar6 * 0x10;
                    /* end of inlined section */
  bVar1 = *pbVar4;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  bVar2 = pbVar4[1];
  fVar5 = ene_wrk.field0_0x0.m_aData[0].dist_p_e_o[iVar6 * 4 + 8];
  (alg->comm_add).pu8 = pbVar4 + 2;
  bVar3 = pbVar4[2];
  (alg->comm_add).pu8 = pbVar4 + 3;
  uVar8 = (uint)bVar1 + (uint)bVar2 * 0x100 & 0xffff;
  bVar1 = pbVar4[4];
  bVar2 = pbVar4[3];
  (alg->comm_add).pu8 = pbVar4 + 5;
  p0 = (float *)((int)&ene_wrk.field0_0x0.m_aData[0].mbox + iVar7 + 0x10);
  hit_rot = ((float)(uint)bVar3 * fVar10) / 180.0;
  RotLimitChk__FPf(&hit_rot);
  if (uVar8 == 0) {
    fVar10 = *(float *)((int)ene_wrk.field0_0x0.m_aData[0].dist_p_e[iVar6 * 4 + -2] + 0x40);
  }
  else {
    fVar10 = (float)uVar8;
  }
  fVar9 = GetTrgtRotY__FPCfT0(p0,(float *)((int)fVar5 + 0x10));
  rot = fVar9 - *(float *)((int)&ene_wrk.field0_0x0.m_aData[0].mbox + iVar7 + 0x54);
  RotLimitChk__FPf(&rot);
  fVar9 = GetDistV__FPCfT0((float *)((int)fVar5 + 0x10),p0);
  if (fVar9 <= fVar10) {
    if (ABS((*(float *)((int)fVar5 + 0x14) -
            *(float *)((int)&ene_wrk.field0_0x0.m_aData[0].mbox + iVar7 + 0x14)) +
            ene_wrk.field0_0x0.m_aData[0].adjp[iVar6 * 4 + 1]) <= 300.0) {
      if (ABS(rot) <= hit_rot) {
        (alg->comm_add).wrk =
             ((long)(int)((uint)bVar2 + (uint)bVar1 * 0x100) & 0xffffU) + alg->comm_add_top;
        *(undefined2 *)((int)fVar5 + 0xdc) = 0x21;
        *(ulong *)(ene_wrk.field0_0x0.m_aData[0].dist_p_e + iVar6 * 4 + -0x12) =
             *(ulong *)(ene_wrk.field0_0x0.m_aData[0].dist_p_e + iVar6 * 4 + -0x12) | 0x40000000000;
        alg->pos_no = '\0';
      }
      else {
        alg->pos_no = '\0';
      }
    }
    else {
      alg->pos_no = '\0';
    }
  }
  else {
    alg->pos_no = '\0';
  }
  alg->wait_time = 0.0;
  return;
}

void EJobC13(ENEALG_WRK *alg) {
	int no;
	ENE_WRK *ew;
	MOVE_BOX *mb;
	float f;
	float tv[4];
	MOVE_BOX *pcmw;
	static float time[10];
	static float trot[10][4];
	
  byte bVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  float *pfVar6;
  uint uVar7;
  float *rot;
  undefined4 uVar8;
  float f;
  float tv [4];
  
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  bVar1 = alg->idx;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  _fixed_array_verifyrange__H1Z7ENE_WRK_UiUi_PX01(bVar1,10);
  uVar7 = (uint)bVar1;
  iVar4 = (uint)bVar1 * 0x48 + uVar7;
  iVar5 = iVar4 * 0x10;
                    /* end of inlined section */
  fVar2 = ene_wrk.field0_0x0.m_aData[0].dist_p_e_o[iVar4 * 4 + 8];
  if ((ene_wrk.field0_0x0.m_aData[0].fp[iVar4 * 8 + -7] == 0) &&
     ((*(ulong *)((int)fVar2 + 0xa0) & 0x10000) == 0)) {
    alg->pos_no = '\0';
    alg->wait_time = 0.0;
  }
  else if (alg->pos_no == '\0') {
    sceVu0AddVector(tv,(int)fVar2 + 0x10,iVar5 + 0x2fe050);
    GetTrgtRot__FPCfT0Pfi
              (tv,(float *)((int)&ene_wrk.field0_0x0.m_aData[0].mbox + iVar5 + 0x10),
               (float *)(&trot_1058 + uVar7 * 0x10),3);
    uVar8 = *(undefined4 *)((int)fVar2 + 0x54);
    *(undefined4 *)(&time_1057 + (uint)bVar1 * 4) = 0;
    *(undefined4 *)(&DAT_0047878c + uVar7 * 0x10) = uVar8;
    alg->wait_time = 1.0;
    alg->pos_no = alg->pos_no + '\x01';
  }
  else if (alg->pos_no == '\x01') {
    pfVar6 = (float *)(&time_1057 + (uint)bVar1 * 4);
    if (31.0 <= *pfVar6) {
      rot = (float *)((int)&ene_wrk.field0_0x0.m_aData[0].mbox + iVar5 + 0x50);
      fVar3 = ene_wrk.field0_0x0.m_aData[0].dist_p_e[iVar4 * 4 + -2];
      *(undefined4 *)((int)fVar2 + 0x54) = *(undefined4 *)(&DAT_00478784 + uVar7 * 0x10);
      pfVar6 = (float *)((int)&ene_wrk.field0_0x0.m_aData[0].mbox + iVar5 + 0x10);
      _SetVector__FPfffff(tv,0.0,ene_wrk.field0_0x0.m_aData[0].adjp[iVar4 * 4 + 1],
                          *(float *)((int)fVar3 + 0x40),0.0);
      RotFvector__FPfT0((float *)((int)fVar2 + 0x50),tv);
      sceVu0AddVector(pfVar6,(float *)((int)fVar2 + 0x10),tv);
      GetTrgtRot__FPCfT0Pfi(pfVar6,(float *)((int)fVar2 + 0x10),rot,2);
      _SetVector__FPfffff(tv,(float)(int)*(short *)((int)ene_wrk.field0_0x0.m_aData[0].dist_p_e
                                                         [iVar4 * 4 + -2] + 0x4c),0.0,0.0,0.0);
      RotFvector__FPfT0(rot,tv);
      sceVu0AddVector(pfVar6,pfVar6,tv);
      *(float *)((int)&ene_wrk.field0_0x0.m_aData[0].mbox + iVar5 + 0x14) =
           *(float *)((int)fVar2 + 0x14) + ene_wrk.field0_0x0.m_aData[0].adjp[iVar4 * 4 + 1];
      alg->wait_time = 0.0;
      alg->pos_no = '\0';
    }
    else {
      f = *(float *)(&DAT_00478784 + uVar7 * 0x10) - *(float *)(&DAT_0047878c + uVar7 * 0x10);
      RotLimitChk__FPf(&f);
      *(float *)((int)fVar2 + 0x54) =
           (f * *pfVar6) / 31.0 + *(float *)(&DAT_0047878c + uVar7 * 0x10);
      RotLimitChk__FPf((float *)((int)fVar2 + 0x54));
      *pfVar6 = *pfVar6 + 1.0;
      alg->wait_time = 1.0;
    }
  }
  return;
}

void EJobC14(ENEALG_WRK *alg) {
  (alg->comm_add).pu8 = (alg->comm_add).pu8 + 2;
  alg->pos_no = '\0';
  alg->wait_time = 0.0;
  return;
}

void EJobC15(ENEALG_WRK *alg) {
	ENE_WRK *ew;
	
  uchar uVar1;
  byte bVar2;
  uchar *puVar3;
  int iVar4;
  ulong uVar5;
  
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  bVar2 = alg->idx;
  _fixed_array_verifyrange__H1Z7ENE_WRK_UiUi_PX01(bVar2,10);
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  puVar3 = (alg->comm_add).pu8;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  uVar1 = *puVar3;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  iVar4 = (uint)bVar2 * 0x48 + (uint)bVar2;
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  (alg->comm_add).pu8 = puVar3 + 1;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  uVar5 = *(ulong *)(ene_wrk.field0_0x0.m_aData[0].dist_p_e + iVar4 * 4 + -0x12);
  if (uVar1 == '\0') {
    uVar5 = uVar5 & 0xfffffdffffffffff;
  }
  else {
    uVar5 = uVar5 | 0x20000000000;
  }
  *(ulong *)(ene_wrk.field0_0x0.m_aData[0].dist_p_e + iVar4 * 4 + -0x12) = uVar5;
  alg->pos_no = '\0';
  alg->wait_time = 0.0;
  return;
}

void EJobC16(ENEALG_WRK *alg) {
	int no;
	ENE_WRK *ew;
	
  byte bVar1;
  short sVar2;
  ushort uVar3;
  void *ani_hndl;
  int iVar4;
  int iVar5;
  ulong uVar6;
  int anime_no;
  
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  anime_no = 0;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  bVar1 = alg->idx;
  _fixed_array_verifyrange__H1Z7ENE_WRK_UiUi_PX01(bVar1,10);
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  iVar4 = (uint)bVar1 * 0x48 + (uint)bVar1;
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  sVar2 = *(short *)(ene_wrk.field0_0x0.m_aData[0].dist_p_e + iVar4 * 4 + -6);
  if (sVar2 == 4) {
    anime_no = 0xb;
    FinderBankPlay__FiiiiP11_SND_3D_SETii(0xc,1,1,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
    SndBankPlay(*(int *)((int)ene_wrk.field0_0x0.m_aData[0].fw + iVar4 * 0x10 + -4),1,0,0,0x3200,
                0x1000,0,(_SND_3D_SET *)0x0);
  }
  else {
    if (sVar2 == 3) {
      anime_no = 0xc;
      FinderBankPlay__FiiiiP11_SND_3D_SETii(0xc,1,1,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
      iVar5 = 2;
    }
    else {
      if (sVar2 != 2) {
        if (sVar2 == 1) {
          FinderBankPlay__FiiiiP11_SND_3D_SETii(0,1,1,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
          alg->wait_time = 0.0;
          alg->pos_no = '\0';
          return;
        }
        goto LAB_00173ac8;
      }
      anime_no = 10;
      FinderBankPlay__FiiiiP11_SND_3D_SETii(1,1,1,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
      iVar5 = 0;
    }
    SndBankPlay(*(int *)((int)ene_wrk.field0_0x0.m_aData[0].fw + iVar4 * 0x10 + -4),iVar5,0,0,0x3200
                ,0x1000,0,(_SND_3D_SET *)0x0);
  }
LAB_00173ac8:
  iVar5 = motGetMotReso__Fv();
  uVar6 = *(ulong *)(ene_wrk.field0_0x0.m_aData[0].dist_p_e + iVar4 * 4 + -0x12);
  ani_hndl = (void *)ene_wrk.field0_0x0.m_aData[0].directionaldiffuse[iVar4 * 4 + -2];
  uVar3 = *(ushort *)((int)ene_wrk.field0_0x0.m_aData[0].directionaldiffuse[iVar4 * 4 + 4] + 0x16);
  *(int *)(ene_wrk.field0_0x0.m_aData[0].dist_in_tm + iVar4 * 8 + 0x15) = iVar5;
  *(ulong *)(ene_wrk.field0_0x0.m_aData[0].dist_p_e + iVar4 * 4 + -0x12) =
       uVar6 & 0xfffffffc7fffffff;
  ReqAnm__FPviii(ani_hndl,4,(uint)uVar3,anime_no);
  alg->pos_no = '\0';
  alg->wait_time = 0.0;
  return;
}

void EJobC17(ENEALG_WRK *alg) {
	ENE_WRK *ew;
	
  byte bVar1;
  uchar uVar2;
  uchar *puVar3;
  int iVar4;
  ulong uVar5;
  
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  bVar1 = alg->idx;
  _fixed_array_verifyrange__H1Z7ENE_WRK_UiUi_PX01(bVar1,10);
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  puVar3 = (alg->comm_add).pu8;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  uVar2 = *puVar3;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  iVar4 = (uint)bVar1 * 0x48 + (uint)bVar1;
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  (alg->comm_add).pu8 = puVar3 + 1;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  if (uVar2 == '\0') {
    uVar5 = *(ulong *)(ene_wrk.field0_0x0.m_aData[0].dist_p_e + iVar4 * 4 + -0x12) &
            0xfffffffffffdffff;
  }
  else {
    uVar5 = *(ulong *)(ene_wrk.field0_0x0.m_aData[0].dist_p_e + iVar4 * 4 + -0x12) | 0x20000;
  }
  *(ulong *)(ene_wrk.field0_0x0.m_aData[0].dist_p_e + iVar4 * 4 + -0x12) = uVar5;
  alg->pos_no = '\0';
  alg->wait_time = 0.0;
  return;
}

void EJobC18(ENEALG_WRK *alg) {
	u_char no;
	ENE_WRK *ew;
	static float time[10];
	static float max[10];
	
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  int iVar7;
  uint uVar8;
  float fVar9;
  float fVar10;
  
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  bVar1 = alg->idx;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  _fixed_array_verifyrange__H1Z7ENE_WRK_UiUi_PX01(bVar1,10);
                    /* end of inlined section */
  iVar7 = (uint)bVar1 * 4;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  uVar8 = (uint)bVar1;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  iVar4 = ((uint)bVar1 * 8 + uVar8) * 8 + uVar8;
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  iVar5 = iVar4 * 0x10;
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  if (alg->pos_no == '\0') {
    pbVar3 = (alg->comm_add).pu8;
    bVar1 = pbVar3[1];
    bVar2 = *pbVar3;
    (alg->comm_add).pu8 = pbVar3 + 2;
    fVar9 = (float)((uint)bVar2 + (uint)bVar1 * 0x100 & 0xffff);
    alg->loop[0] = fVar9;
    *(float *)(&time_1074 + iVar7) = fVar9;
    *(float *)(&max_1075 + iVar7) =
         (float)(uint)*(byte *)((int)ene_wrk.field0_0x0.m_aData[0].dist_in_tm + iVar5 + 0x1b);
    FinderBankPlay__FiiiiP11_SND_3D_SETii(6,1,1,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
    *(ulong *)(ene_wrk.field0_0x0.m_aData[0].dist_p_e + iVar4 * 4 + -0x12) =
         *(ulong *)(ene_wrk.field0_0x0.m_aData[0].dist_p_e + iVar4 * 4 + -0x12) | 0x4000000;
    alg->wait_time = 1.0;
    alg->pos_no = alg->pos_no + '\x01';
  }
  else if (alg->pos_no == '\x01') {
    iVar7 = uVar8 * 4;
    if (alg->loop[0] <= 0.0) {
      uVar6 = *(ulong *)(ene_wrk.field0_0x0.m_aData[0].dist_p_e + iVar4 * 4 + -0x12);
      alg->loop[0] = 0.0;
      *(undefined *)((int)ene_wrk.field0_0x0.m_aData[0].dist_in_tm + iVar5 + 0x1b) = 0;
      ene_wrk.field0_0x0.m_aData[0].dist_p_e_o[iVar4 * 4 + 0xf] = 0.0;
      ene_wrk.field0_0x0.m_aData[0].dist_p_e_o[iVar4 * 4 + 0x10] = 0.0;
      *(ulong *)(ene_wrk.field0_0x0.m_aData[0].dist_p_e + iVar4 * 4 + -0x12) =
           uVar6 & 0xfffffffffbffffff;
      alg->wait_time = 0.0;
      alg->pos_no = '\0';
    }
    else {
      fVar9 = alg->loop[0] - 1.0;
      alg->loop[0] = fVar9;
      fVar9 = (*(float *)(&max_1075 + iVar7) * fVar9) / *(float *)(&time_1074 + iVar7);
      if (2.147484e+09 <= fVar9) {
        *(char *)((int)ene_wrk.field0_0x0.m_aData[0].dist_in_tm + iVar5 + 0x1b) =
             (char)(int)(fVar9 - 2.147484e+09);
      }
      else {
        *(char *)((int)ene_wrk.field0_0x0.m_aData[0].dist_in_tm + iVar5 + 0x1b) = (char)(int)fVar9;
      }
      fVar9 = *(float *)(&time_1074 + iVar7);
      fVar10 = ene_wrk.field0_0x0.m_aData[0].directionaldiffuse[iVar4 * 4 + -0xc];
      ene_wrk.field0_0x0.m_aData[0].dist_p_e_o[iVar4 * 4 + 0xf] =
           (ene_wrk.field0_0x0.m_aData[0].directionaldiffuse[iVar4 * 4 + -0xd] * alg->loop[0]) /
           fVar9;
      ene_wrk.field0_0x0.m_aData[0].dist_p_e_o[iVar4 * 4 + 0x10] = (fVar10 * alg->loop[0]) / fVar9;
      alg->wait_time = 1.0;
    }
  }
  return;
}

void EJobC19(ENEALG_WRK *alg) {
	u_char no;
	ENE_WRK *ew;
	static float time[10];
	static float max[10];
	
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  ulong uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  float fVar9;
  float fVar10;
  undefined uVar11;
  float fVar12;
  
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  bVar1 = alg->idx;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  _fixed_array_verifyrange__H1Z7ENE_WRK_UiUi_PX01(bVar1,10);
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  uVar8 = (uint)bVar1;
  iVar5 = (uint)bVar1 * 0x48 + uVar8;
  iVar6 = iVar5 * 0x10;
                    /* end of inlined section */
  if (alg->pos_no == '\0') {
    pbVar3 = (alg->comm_add).pu8;
    bVar1 = *pbVar3;
    bVar2 = pbVar3[1];
    (alg->comm_add).pu8 = pbVar3 + 2;
    fVar9 = (float)((uint)bVar1 + (uint)bVar2 * 0x100 & 0xffff);
    *(float *)(&max_1080 + uVar8 * 4) = (float)((uint)pbVar3[2] + (uint)pbVar3[3] * 0x100 & 0xffff);
    alg->loop[0] = fVar9;
    (alg->comm_add).pu8 = (alg->comm_add).pu8 + 2;
    *(float *)(&time_1079 + uVar8 * 4) = fVar9;
    FinderBankPlay__FiiiiP11_SND_3D_SETii(6,1,1,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
    *(ulong *)(ene_wrk.field0_0x0.m_aData[0].dist_p_e + iVar5 * 4 + -0x12) =
         *(ulong *)(ene_wrk.field0_0x0.m_aData[0].dist_p_e + iVar5 * 4 + -0x12) | 0x4000000;
    alg->wait_time = 1.0;
    alg->pos_no = alg->pos_no + '\x01';
  }
  else if (alg->pos_no == '\x01') {
    if (0.0 < alg->loop[0]) {
      iVar7 = uVar8 * 4;
      fVar9 = alg->loop[0] - 1.0;
      alg->loop[0] = fVar9;
      fVar9 = *(float *)(&max_1080 + iVar7) -
              (*(float *)(&max_1080 + iVar7) * fVar9) / *(float *)(&time_1079 + iVar7);
      if (2.147484e+09 <= fVar9) {
        *(char *)((int)ene_wrk.field0_0x0.m_aData[0].dist_in_tm + iVar6 + 0x1b) =
             (char)(int)(fVar9 - 2.147484e+09);
      }
      else {
        *(char *)((int)ene_wrk.field0_0x0.m_aData[0].dist_in_tm + iVar6 + 0x1b) = (char)(int)fVar9;
      }
      fVar12 = ene_wrk.field0_0x0.m_aData[0].directionaldiffuse[iVar5 * 4 + -0xd];
      fVar10 = *(float *)(&time_1079 + iVar7);
      fVar9 = ene_wrk.field0_0x0.m_aData[0].directionaldiffuse[iVar5 * 4 + -0xc];
      ene_wrk.field0_0x0.m_aData[0].dist_p_e_o[iVar5 * 4 + 0xf] =
           fVar12 - (fVar12 * alg->loop[0]) / fVar10;
      ene_wrk.field0_0x0.m_aData[0].dist_p_e_o[iVar5 * 4 + 0x10] =
           fVar9 - (fVar9 * alg->loop[0]) / fVar10;
      alg->wait_time = 1.0;
    }
    else {
      alg->loop[0] = 0.0;
      fVar9 = *(float *)(&max_1080 + uVar8 * 4);
      uVar11 = (undefined)(int)fVar9;
      if (2.147484e+09 <= fVar9) {
        uVar11 = (undefined)(int)(fVar9 - 2.147484e+09);
        uVar4 = *(ulong *)(ene_wrk.field0_0x0.m_aData[0].dist_p_e + iVar5 * 4 + -0x12);
      }
      else {
        uVar4 = *(ulong *)(ene_wrk.field0_0x0.m_aData[0].dist_p_e + iVar5 * 4 + -0x12);
      }
      fVar9 = ene_wrk.field0_0x0.m_aData[0].directionaldiffuse[iVar5 * 4 + -0xd];
      fVar10 = ene_wrk.field0_0x0.m_aData[0].directionaldiffuse[iVar5 * 4 + -0xc];
      *(undefined *)((int)ene_wrk.field0_0x0.m_aData[0].dist_in_tm + iVar6 + 0x1b) = uVar11;
      ene_wrk.field0_0x0.m_aData[0].dist_p_e_o[iVar5 * 4 + 0xf] = fVar9;
      ene_wrk.field0_0x0.m_aData[0].dist_p_e_o[iVar5 * 4 + 0x10] = fVar10;
      *(ulong *)(ene_wrk.field0_0x0.m_aData[0].dist_p_e + iVar5 * 4 + -0x12) =
           uVar4 & 0xfffffffffbffffff;
      alg->wait_time = 0.0;
      alg->pos_no = '\0';
    }
  }
  return;
}

void EJobC1A(ENEALG_WRK *alg) {
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte *pbVar4;
  float fVar5;
  void *ani_hndl;
  int iVar6;
  ulong uVar7;
  P_INT *pPVar8;
  int iVar9;
  
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  bVar1 = alg->idx;
  _fixed_array_verifyrange__H1Z7ENE_WRK_UiUi_PX01(bVar1,10);
                    /* end of inlined section */
  pPVar8 = &alg->comm_add;
  pbVar4 = pPVar8->pu8;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  bVar2 = *pbVar4;
  pPVar8->pu8 = pbVar4 + 1;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  iVar9 = (uint)bVar1 * 0x48 + (uint)bVar1;
                    /* end of inlined section */
  bVar1 = pbVar4[2];
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  bVar3 = pbVar4[1];
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  pPVar8->pu8 = pbVar4 + 3;
  iVar6 = motGetMotReso__Fv();
  *(byte *)((int)ene_wrk.field0_0x0.m_aData[0].dist_in_tm + iVar9 * 0x10 + 0x11) = bVar2;
  uVar7 = *(ulong *)(ene_wrk.field0_0x0.m_aData[0].dist_p_e + iVar9 * 4 + -0x12);
  fVar5 = ene_wrk.field0_0x0.m_aData[0].directionaldiffuse[iVar9 * 4 + 4];
  ani_hndl = (void *)ene_wrk.field0_0x0.m_aData[0].directionaldiffuse[iVar9 * 4 + -2];
  *(int *)(ene_wrk.field0_0x0.m_aData[0].dist_in_tm + iVar9 * 8 + 0x15) = iVar6;
  *(ulong *)(ene_wrk.field0_0x0.m_aData[0].dist_p_e + iVar9 * 4 + -0x12) =
       uVar7 & 0xfffffff87fffffff;
  ReqAnm__FPviii(ani_hndl,(uint)bVar3 + (uint)bVar1 * 0x100 & 0xffff,
                 (uint)*(ushort *)((int)fVar5 + 0x16),(uint)bVar2);
  alg->pos_no = '\0';
  alg->wait_time = 0.0;
  return;
}

void EJobC1B(ENEALG_WRK *alg) {
  byte bVar1;
  uchar uVar2;
  uchar *puVar3;
  
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  bVar1 = alg->idx;
  _fixed_array_verifyrange__H1Z7ENE_WRK_UiUi_PX01(bVar1,10);
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  puVar3 = (alg->comm_add).pu8;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  uVar2 = *puVar3;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  (alg->comm_add).pu8 = puVar3 + 1;
  *(uchar *)((int)ene_wrk.field0_0x0.m_aData[0].dist_in_tm +
            ((uint)bVar1 * 0x48 + (uint)bVar1) * 0x10 + 0x1b) = uVar2;
  alg->pos_no = '\0';
  alg->wait_time = 0.0;
  return;
}

void EJobC1C(ENEALG_WRK *alg) {
  byte bVar1;
  uchar uVar2;
  uchar *puVar3;
  
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  bVar1 = alg->idx;
  _fixed_array_verifyrange__H1Z7ENE_WRK_UiUi_PX01(bVar1,10);
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  puVar3 = (alg->comm_add).pu8;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  uVar2 = *puVar3;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  (alg->comm_add).pu8 = puVar3 + 1;
  *(uchar *)(ene_wrk.field0_0x0.m_aData[0].dist_in_tm + ((uint)bVar1 * 0x48 + (uint)bVar1) * 8 + 0xe
            ) = uVar2;
  alg->pos_no = '\0';
  alg->wait_time = 0.0;
  return;
}

void EJobC1D(ENEALG_WRK *alg) {
	ENE_WRK *ew;
	
  byte bVar1;
  uchar uVar2;
  uchar *puVar3;
  int iVar4;
  ulong uVar5;
  
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  bVar1 = alg->idx;
  _fixed_array_verifyrange__H1Z7ENE_WRK_UiUi_PX01(bVar1,10);
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  puVar3 = (alg->comm_add).pu8;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  uVar2 = *puVar3;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  iVar4 = (uint)bVar1 * 0x48 + (uint)bVar1;
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  (alg->comm_add).pu8 = puVar3 + 1;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  if (uVar2 == '\0') {
    uVar5 = *(ulong *)(ene_wrk.field0_0x0.m_aData[0].dist_p_e + iVar4 * 4 + -0x12) &
            0xfffffffffbffffff;
  }
  else {
    uVar5 = *(ulong *)(ene_wrk.field0_0x0.m_aData[0].dist_p_e + iVar4 * 4 + -0x12) | 0x4000000;
  }
  *(ulong *)(ene_wrk.field0_0x0.m_aData[0].dist_p_e + iVar4 * 4 + -0x12) = uVar5;
  alg->pos_no = '\0';
  alg->wait_time = 0.0;
  return;
}

void EJobC1E(ENEALG_WRK *alg) {
	ENE_WRK *ew;
	
  byte bVar1;
  uchar uVar2;
  uchar *puVar3;
  int iVar4;
  ulong uVar5;
  
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  bVar1 = alg->idx;
  _fixed_array_verifyrange__H1Z7ENE_WRK_UiUi_PX01(bVar1,10);
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  puVar3 = (alg->comm_add).pu8;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  uVar2 = *puVar3;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  iVar4 = (uint)bVar1 * 0x48 + (uint)bVar1;
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  (alg->comm_add).pu8 = puVar3 + 1;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  if (uVar2 == '\0') {
    uVar5 = *(ulong *)(ene_wrk.field0_0x0.m_aData[0].dist_p_e + iVar4 * 4 + -0x12) &
            0xfffffffff7ffffff;
  }
  else {
    uVar5 = *(ulong *)(ene_wrk.field0_0x0.m_aData[0].dist_p_e + iVar4 * 4 + -0x12) | 0x8000000;
  }
  *(ulong *)(ene_wrk.field0_0x0.m_aData[0].dist_p_e + iVar4 * 4 + -0x12) = uVar5;
  alg->pos_no = '\0';
  alg->wait_time = 0.0;
  return;
}

void EJobC1F(ENEALG_WRK *alg) {
	u_short time;
	u_short max;
	u_short mrng;
	ENE_WRK *ew;
	
  byte bVar1;
  uchar uVar2;
  byte bVar3;
  uchar *puVar4;
  int iVar5;
  int iVar6;
  P_INT *pPVar7;
  uint uVar8;
  byte bVar9;
  
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  bVar1 = alg->idx;
  _fixed_array_verifyrange__H1Z7ENE_WRK_UiUi_PX01(bVar1,10);
                    /* end of inlined section */
  pPVar7 = &alg->comm_add;
  puVar4 = pPVar7->pu8;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  uVar2 = *puVar4;
  pPVar7->pu8 = puVar4 + 1;
  uVar8 = (uint)puVar4[1];
  pPVar7->pu8 = puVar4 + 2;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  iVar5 = (uint)bVar1 * 0x48 + (uint)bVar1;
                    /* end of inlined section */
  bVar1 = puVar4[2];
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  pPVar7->pu8 = puVar4 + 3;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  bVar9 = puVar4[3];
  pPVar7->pu8 = puVar4 + 4;
  bVar3 = puVar4[4];
  pPVar7->pu8 = puVar4 + 5;
  if (uVar2 == '\0') {
    *(ulong *)(ene_wrk.field0_0x0.m_aData[0].dist_p_e + iVar5 * 4 + -0x12) =
         *(ulong *)(ene_wrk.field0_0x0.m_aData[0].dist_p_e + iVar5 * 4 + -0x12) & 0xfffffffff7ffffff
    ;
  }
  else {
    *(ulong *)(ene_wrk.field0_0x0.m_aData[0].dist_p_e + iVar5 * 4 + -0x12) =
         *(ulong *)(ene_wrk.field0_0x0.m_aData[0].dist_p_e + iVar5 * 4 + -0x12) | 0x8000000;
    if (bVar1 != 0) {
      uVar8 = GetRndSP__FUiUi(uVar8,(uint)bVar1);
      uVar8 = uVar8 & 0xffff;
    }
    ene_wrk.field0_0x0.m_aData[0].fp[iVar5 * 8 + -4] = (ushort)uVar8;
    if (bVar3 != 0) {
      iVar6 = GetRndSP__FUiUi((uint)bVar9,(uint)bVar3);
      bVar9 = (byte)iVar6;
    }
    *(byte *)((int)ene_wrk.field0_0x0.m_aData[0].dist_in_tm + iVar5 * 0x10 + 0x13) = bVar9;
  }
  alg->pos_no = '\0';
  alg->wait_time = 0.0;
  return;
}

void EJobC20(ENEALG_WRK *alg) {
	u_char no;
	ENE_WRK *ew;
	static float time[10];
	static float max[10];
	
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  float fVar8;
  float fVar9;
  
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  bVar1 = alg->idx;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  _fixed_array_verifyrange__H1Z7ENE_WRK_UiUi_PX01(bVar1,10);
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  uVar7 = (uint)bVar1;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  iVar4 = (uint)bVar1 * 0x48 + uVar7;
  iVar5 = iVar4 * 0x10;
                    /* end of inlined section */
  if (alg->pos_no == '\0') {
    pbVar3 = (alg->comm_add).pu8;
    bVar1 = pbVar3[1];
    bVar2 = *pbVar3;
    (alg->comm_add).pu8 = pbVar3 + 2;
    fVar8 = (float)((uint)bVar2 + (uint)bVar1 * 0x100 & 0xffff);
    alg->loop[0] = fVar8;
    *(float *)(&time_1102 + uVar7 * 4) = fVar8;
    *(float *)(&max_1103 + uVar7 * 4) =
         (float)(uint)*(byte *)((int)ene_wrk.field0_0x0.m_aData[0].dist_in_tm + iVar5 + 0x1b);
    alg->pos_no = alg->pos_no + '\x01';
    fVar8 = alg->loop[0];
  }
  else {
    if (alg->pos_no != '\x01') {
      return;
    }
    fVar8 = alg->loop[0];
  }
  iVar6 = uVar7 * 4;
  if (fVar8 <= 0.0) {
    ene_wrk.field0_0x0.m_aData[0].dist_p_e_o[iVar4 * 4 + 0x10] = 0.0;
    *(undefined *)((int)ene_wrk.field0_0x0.m_aData[0].dist_in_tm + iVar5 + 0x1b) = 0;
    ene_wrk.field0_0x0.m_aData[0].dist_p_e_o[iVar4 * 4 + 0xf] = 0.0;
    alg->wait_time = 0.0;
    alg->pos_no = '\0';
  }
  else {
    alg->loop[0] = fVar8 - 1.0;
    fVar8 = (*(float *)(&max_1103 + iVar6) * (fVar8 - 1.0)) / *(float *)(&time_1102 + iVar6);
    if (2.147484e+09 <= fVar8) {
      *(char *)((int)ene_wrk.field0_0x0.m_aData[0].dist_in_tm + iVar5 + 0x1b) =
           (char)(int)(fVar8 - 2.147484e+09);
    }
    else {
      *(char *)((int)ene_wrk.field0_0x0.m_aData[0].dist_in_tm + iVar5 + 0x1b) = (char)(int)fVar8;
    }
    fVar8 = *(float *)(&time_1102 + iVar6);
    fVar9 = ene_wrk.field0_0x0.m_aData[0].directionaldiffuse[iVar4 * 4 + -0xc];
    ene_wrk.field0_0x0.m_aData[0].dist_p_e_o[iVar4 * 4 + 0xf] =
         (ene_wrk.field0_0x0.m_aData[0].directionaldiffuse[iVar4 * 4 + -0xd] * alg->loop[0]) / fVar8
    ;
    ene_wrk.field0_0x0.m_aData[0].dist_p_e_o[iVar4 * 4 + 0x10] = (fVar9 * alg->loop[0]) / fVar8;
    alg->wait_time = 1.0;
  }
  return;
}

void EJobC21(ENEALG_WRK *alg) {
	u_char no;
	ENE_WRK *ew;
	static float max[10];
	static float loop[10];
	
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  float fVar8;
  float fVar9;
  undefined uVar10;
  float fVar11;
  
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  bVar1 = alg->idx;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  _fixed_array_verifyrange__H1Z7ENE_WRK_UiUi_PX01(bVar1,10);
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  uVar7 = (uint)bVar1;
  iVar4 = (uint)bVar1 * 0x48 + uVar7;
  iVar5 = iVar4 * 0x10;
                    /* end of inlined section */
  if (alg->pos_no == '\0') {
    pbVar3 = (alg->comm_add).pu8;
    bVar1 = pbVar3[1];
    bVar2 = *pbVar3;
    (alg->comm_add).pu8 = pbVar3 + 2;
    alg->loop[0] = (float)((uint)bVar2 + (uint)bVar1 * 0x100 & 0xffff);
    *(float *)(&max_1107 + uVar7 * 4) = (float)((uint)pbVar3[2] + (uint)pbVar3[3] * 0x100 & 0xffff);
    (alg->comm_add).pu8 = (alg->comm_add).pu8 + 2;
    *(float *)(&loop_1108 + uVar7 * 4) = alg->loop[0];
    alg->pos_no = alg->pos_no + '\x01';
  }
  else if (alg->pos_no != '\x01') {
    return;
  }
  iVar6 = uVar7 * 4;
  if (0.0 < alg->loop[0]) {
    fVar8 = alg->loop[0] - 1.0;
    alg->loop[0] = fVar8;
    fVar8 = *(float *)(&max_1107 + iVar6) -
            (*(float *)(&max_1107 + iVar6) * fVar8) / *(float *)(&loop_1108 + iVar6);
    if (2.147484e+09 <= fVar8) {
      *(char *)((int)ene_wrk.field0_0x0.m_aData[0].dist_in_tm + iVar5 + 0x1b) =
           (char)(int)(fVar8 - 2.147484e+09);
    }
    else {
      *(char *)((int)ene_wrk.field0_0x0.m_aData[0].dist_in_tm + iVar5 + 0x1b) = (char)(int)fVar8;
    }
    fVar11 = ene_wrk.field0_0x0.m_aData[0].directionaldiffuse[iVar4 * 4 + -0xd];
    fVar9 = *(float *)(&loop_1108 + iVar6);
    fVar8 = ene_wrk.field0_0x0.m_aData[0].directionaldiffuse[iVar4 * 4 + -0xc];
    ene_wrk.field0_0x0.m_aData[0].dist_p_e_o[iVar4 * 4 + 0xf] =
         fVar11 - (fVar11 * alg->loop[0]) / fVar9;
    ene_wrk.field0_0x0.m_aData[0].dist_p_e_o[iVar4 * 4 + 0x10] =
         fVar8 - (fVar8 * alg->loop[0]) / fVar9;
    alg->wait_time = 1.0;
  }
  else {
    fVar8 = *(float *)(&max_1107 + iVar6);
    uVar10 = (undefined)(int)fVar8;
    if (2.147484e+09 <= fVar8) {
      uVar10 = (undefined)(int)(fVar8 - 2.147484e+09);
      fVar8 = ene_wrk.field0_0x0.m_aData[0].directionaldiffuse[iVar4 * 4 + -0xd];
    }
    else {
      fVar8 = ene_wrk.field0_0x0.m_aData[0].directionaldiffuse[iVar4 * 4 + -0xd];
    }
    fVar9 = ene_wrk.field0_0x0.m_aData[0].directionaldiffuse[iVar4 * 4 + -0xc];
    *(undefined *)((int)ene_wrk.field0_0x0.m_aData[0].dist_in_tm + iVar5 + 0x1b) = uVar10;
    ene_wrk.field0_0x0.m_aData[0].dist_p_e_o[iVar4 * 4 + 0x10] = fVar9;
    ene_wrk.field0_0x0.m_aData[0].dist_p_e_o[iVar4 * 4 + 0xf] = fVar8;
    alg->pos_no = '\0';
    alg->wait_time = 0.0;
  }
  return;
}

void EJobC22(ENEALG_WRK *alg) {
	ENE_WRK *ew;
	u_short sec;
	
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte *pbVar4;
  int iVar5;
  uint time;
  ENE_WRK *ew;
  float fVar6;
  
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  bVar1 = alg->idx;
  _fixed_array_verifyrange__H1Z7ENE_WRK_UiUi_PX01(bVar1,10);
                    /* end of inlined section */
  pbVar4 = (alg->comm_add).pu8;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  bVar2 = pbVar4[1];
  bVar3 = *pbVar4;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  (alg->comm_add).pu8 = pbVar4 + 2;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  ew = (ENE_WRK *)(ene_wrk.field0_0x0.m_aData[0].bep + ((uint)bVar1 * 0x48 + (uint)bVar1) * 4);
  time = (uint)bVar3 + (uint)bVar2 * 0x100 & 0xffff;
                    /* end of inlined section */
  iVar5 = GetPALMode__Fv();
  if (iVar5 == 0) {
    SetEneSlow__FP7ENE_WRKif(ew,time,DAT_003ee1a8);
    alg->pos_no = '\0';
  }
  else {
    fVar6 = (float)time / DAT_003ee1a0;
    if (2.147484e+09 <= fVar6) {
      fVar6 = fVar6 - 2.147484e+09;
    }
    SetEneSlow__FP7ENE_WRKif(ew,(int)fVar6 & 0xffff,DAT_003ee1a4);
    alg->pos_no = '\0';
  }
  alg->wait_time = 0.0;
  return;
}

void EJobC23(ENEALG_WRK *alg) {
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  P_INT *pPVar4;
  
  pbVar3 = (alg->comm_add).pu8;
  pPVar4 = (P_INT *)alg->stack_p;
  bVar1 = *pbVar3;
  bVar2 = pbVar3[1];
  (alg->comm_add).pu8 = pbVar3 + 2;
  alg->stack_p = (ulong *)(pPVar4 + 1);
  alg->wait_time = 0.0;
  *pPVar4 = alg->comm_add;
  alg->pos_no = '\0';
  (alg->comm_add).wrk =
       alg->comm_add_top + ((long)(int)((uint)bVar1 + (uint)bVar2 * 0x100) & 0xffffU);
  return;
}

void EJobC24(ENEALG_WRK *alg) {
	static char __FUNCTION__[8] = {
		/* [0] = */ 69,
		/* [1] = */ 74,
		/* [2] = */ 111,
		/* [3] = */ 98,
		/* [4] = */ 67,
		/* [5] = */ 50,
		/* [6] = */ 52,
		/* [7] = */ 0
	};
	
  P_INT PVar1;
  P_INT *pPVar2;
  
  pPVar2 = (P_INT *)(alg->stack_p + -1);
  if (alg->stack_b < alg->stack_p) {
    PVar1 = *pPVar2;
    alg->stack_p = (ulong *)pPVar2;
    alg->comm_add = PVar1;
  }
  else {
    SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
    PrintAssertReal("AlgoStackBuffer is Empty\n");
  }
  alg->pos_no = '\0';
  alg->wait_time = 0.0;
  return;
}

void EJobC25(ENEALG_WRK *alg) {
  byte bVar1;
  uchar uVar2;
  uchar *puVar3;
  
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  bVar1 = alg->idx;
  _fixed_array_verifyrange__H1Z7ENE_WRK_UiUi_PX01(bVar1,10);
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  puVar3 = (alg->comm_add).pu8;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  uVar2 = *puVar3;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  (alg->comm_add).pu8 = puVar3 + 1;
  *(uchar *)((int)&ene_wrk.field0_0x0.m_aData[0].alg +
            ((uint)bVar1 * 0x48 + (uint)bVar1) * 0x10 + 199) = uVar2;
  alg->pos_no = '\0';
  alg->wait_time = 0.0;
  return;
}

void EJobC26(ENEALG_WRK *alg) {
  byte bVar1;
  ulong uVar2;
  int iVar3;
  
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  bVar1 = alg->idx;
  _fixed_array_verifyrange__H1Z7ENE_WRK_UiUi_PX01(bVar1,10);
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  iVar3 = (uint)bVar1 * 0x48 + (uint)bVar1;
                    /* end of inlined section */
  EneActSet__FP7ENE_WRKUc((ENE_WRK *)(ene_wrk.field0_0x0.m_aData[0].bep + iVar3 * 4),'\x01');
  uVar2 = *(ulong *)(ene_wrk.field0_0x0.m_aData[0].dist_p_e + iVar3 * 4 + -0x12);
  alg->wait_time = 0.0;
  *(ulong *)(ene_wrk.field0_0x0.m_aData[0].dist_p_e + iVar3 * 4 + -0x12) = uVar2 | 0x800000000;
  alg->pos_no = '\0';
  return;
}

void EJobC27(ENEALG_WRK *alg) {
  byte bVar1;
  ulong uVar2;
  int iVar3;
  
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  bVar1 = alg->idx;
  _fixed_array_verifyrange__H1Z7ENE_WRK_UiUi_PX01(bVar1,10);
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  iVar3 = (uint)bVar1 * 0x48 + (uint)bVar1;
                    /* end of inlined section */
  EneActSet__FP7ENE_WRKUc((ENE_WRK *)(ene_wrk.field0_0x0.m_aData[0].bep + iVar3 * 4),'\x03');
  uVar2 = *(ulong *)(ene_wrk.field0_0x0.m_aData[0].dist_p_e + iVar3 * 4 + -0x12);
  alg->wait_time = 0.0;
  *(ulong *)(ene_wrk.field0_0x0.m_aData[0].dist_p_e + iVar3 * 4 + -0x12) = uVar2 | 0x800000000;
  alg->pos_no = '\0';
  return;
}

void EJobC28(ENEALG_WRK *alg) {
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte *pbVar4;
  int iVar5;
  
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  bVar1 = alg->idx;
  _fixed_array_verifyrange__H1Z7ENE_WRK_UiUi_PX01(bVar1,10);
                    /* end of inlined section */
  pbVar4 = (alg->comm_add).pu8;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  bVar2 = *pbVar4;
  bVar3 = pbVar4[1];
  (alg->comm_add).pu8 = pbVar4 + 2;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  iVar5 = ((uint)bVar1 * 0x48 + (uint)bVar1) * 0x10;
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  bVar1 = pbVar4[2];
  (alg->comm_add).pu8 = pbVar4 + 4;
  if ((ushort)*(byte *)((int)&ene_wrk.field0_0x0.m_aData[0].alg + iVar5 + 199) ==
      (ushort)((ushort)bVar2 + (ushort)bVar3 * 0x100)) {
    *(byte *)((int)&ene_wrk.field0_0x0.m_aData[0].alg + iVar5 + 199) = bVar1;
  }
  alg->pos_no = '\0';
  alg->wait_time = 0.0;
  return;
}

void EJobC29(ENEALG_WRK *alg) {
	ENE_WRK *ew;
	
  byte bVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  bVar1 = alg->idx;
  _fixed_array_verifyrange__H1Z7ENE_WRK_UiUi_PX01(bVar1,10);
  iVar4 = (uint)bVar1 * 0x48 + (uint)bVar1;
                    /* end of inlined section */
  if (*(short *)((int)ene_wrk.field0_0x0.m_aData[0].dist_p_e[iVar4 * 4 + -1] + 0x44) < 0) {
    alg->pos_no = '\0';
  }
  else {
    iVar3 = GetPALMode__Fv();
    fVar2 = ene_wrk.field0_0x0.m_aData[0].dist_p_e[iVar4 * 4 + -1];
    if (iVar3 == 0) {
      alg->loop[0] = (float)(int)*(short *)((int)fVar2 + 0x44);
    }
    else {
      alg->loop[0] = (float)(int)*(short *)((int)fVar2 + 0x44) / DAT_003ee1ac;
    }
    alg->pos_no = '\0';
  }
  alg->wait_time = 0.0;
  return;
}

void EJobC2A(ENEALG_WRK *alg) {
  uchar uVar1;
  uchar *puVar2;
  
  puVar2 = (alg->comm_add).pu8;
  uVar1 = *puVar2;
  (alg->comm_add).pu8 = puVar2 + 1;
  if (uVar1 == '\0') {
    ReqModeSisMotion__FUi(0);
    alg->pos_no = '\0';
  }
  else if (uVar1 == '\x01') {
    ReqModeSisMotion__FUi(1);
    alg->pos_no = '\0';
  }
  else {
    alg->pos_no = '\0';
  }
  alg->wait_time = 0.0;
  return;
}

void EJobC2B(ENEALG_WRK *alg) {
	u_char no;
	ENE_WRK *ew;
	static float time[10];
	static float max[10];
	
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  int iVar4;
  uint uVar5;
  undefined uVar6;
  float fVar7;
  
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  bVar1 = alg->idx;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  _fixed_array_verifyrange__H1Z7ENE_WRK_UiUi_PX01(bVar1,10);
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  uVar5 = (uint)bVar1;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  iVar4 = ((uint)bVar1 * 0x48 + uVar5) * 0x10;
                    /* end of inlined section */
  if (alg->pos_no == '\0') {
    pbVar3 = (alg->comm_add).pu8;
    bVar1 = pbVar3[1];
    bVar2 = *pbVar3;
    (alg->comm_add).pu8 = pbVar3 + 2;
    fVar7 = (float)((uint)bVar2 + (uint)bVar1 * 0x100 & 0xffff);
    alg->loop_tr[0] = fVar7;
    *(float *)(&time_1139 + uVar5 * 4) = fVar7;
    *(float *)(&max_1140 + uVar5 * 4) =
         (float)(uint)*(byte *)((int)ene_wrk.field0_0x0.m_aData[0].dist_in_tm + iVar4 + 0x19);
    alg->pos_no = alg->pos_no + '\x01';
    fVar7 = alg->loop_tr[0];
  }
  else {
    if (alg->pos_no != '\x01') {
      return;
    }
    fVar7 = alg->loop_tr[0];
  }
  if (fVar7 <= 0.0) {
    alg->wait_time = 0.0;
    alg->pos_no = '\0';
  }
  else {
    alg->loop_tr[0] = fVar7 - 1.0;
    fVar7 = (*(float *)(&max_1140 + uVar5 * 4) * (fVar7 - 1.0)) / *(float *)(&time_1139 + uVar5 * 4)
    ;
    uVar6 = (undefined)(int)fVar7;
    if (2.147484e+09 <= fVar7) {
      uVar6 = (undefined)(int)(fVar7 - 2.147484e+09);
    }
    *(undefined *)((int)ene_wrk.field0_0x0.m_aData[0].dist_in_tm + iVar4 + 0x19) = uVar6;
    alg->wait_time = 1.0;
  }
  return;
}

void EJobC2C(ENEALG_WRK *alg) {
	u_char no;
	ENE_WRK *ew;
	static float max[10];
	static float loop[10];
	
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte *pbVar4;
  uint uVar5;
  undefined uVar6;
  float fVar7;
  
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  bVar1 = alg->idx;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  _fixed_array_verifyrange__H1Z7ENE_WRK_UiUi_PX01(bVar1,10);
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  uVar5 = (uint)bVar1;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  if (alg->pos_no == '\0') {
    pbVar4 = (alg->comm_add).pu8;
    bVar2 = pbVar4[1];
    bVar3 = *pbVar4;
    (alg->comm_add).pu8 = pbVar4 + 2;
    alg->loop_tr[0] = (float)((uint)bVar3 + (uint)bVar2 * 0x100 & 0xffff);
    *(float *)(&max_1144 + uVar5 * 4) = (float)((uint)pbVar4[2] + (uint)pbVar4[3] * 0x100 & 0xffff);
    (alg->comm_add).pu8 = (alg->comm_add).pu8 + 2;
    *(float *)(&loop_1145 + uVar5 * 4) = alg->loop_tr[0];
    alg->pos_no = alg->pos_no + '\x01';
    fVar7 = alg->loop_tr[0];
  }
  else {
    if (alg->pos_no != '\x01') {
      return;
    }
    fVar7 = alg->loop_tr[0];
  }
  if (fVar7 <= 0.0) {
    alg->wait_time = 0.0;
    alg->pos_no = '\0';
  }
  else {
    alg->loop_tr[0] = fVar7 - 1.0;
    fVar7 = *(float *)(&max_1144 + uVar5 * 4) -
            (*(float *)(&max_1144 + uVar5 * 4) * (fVar7 - 1.0)) / *(float *)(&loop_1145 + uVar5 * 4)
    ;
    uVar6 = (undefined)(int)fVar7;
    if (2.147484e+09 <= fVar7) {
      uVar6 = (undefined)(int)(fVar7 - 2.147484e+09);
    }
    *(undefined *)
     ((int)ene_wrk.field0_0x0.m_aData[0].dist_in_tm + ((uint)bVar1 * 0x48 + uVar5) * 0x10 + 0x19) =
         uVar6;
    alg->wait_time = 1.0;
  }
  return;
}

void EJobC2D(ENEALG_WRK *alg) {
	u_char no;
	ENE_WRK *ew;
	static float time[10];
	static float max[10];
	
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  int iVar4;
  uint uVar5;
  undefined uVar6;
  float fVar7;
  
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  bVar1 = alg->idx;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  _fixed_array_verifyrange__H1Z7ENE_WRK_UiUi_PX01(bVar1,10);
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  uVar5 = (uint)bVar1;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  iVar4 = (uint)bVar1 * 0x48 + uVar5;
                    /* end of inlined section */
  if (alg->pos_no == '\0') {
    pbVar3 = (alg->comm_add).pu8;
    bVar1 = pbVar3[1];
    bVar2 = *pbVar3;
    (alg->comm_add).pu8 = pbVar3 + 2;
    fVar7 = (float)((uint)bVar2 + (uint)bVar1 * 0x100 & 0xffff);
    alg->loop_tr[1] = fVar7;
    *(float *)(&time_1149 + uVar5 * 4) = fVar7;
    *(float *)(&max_1150 + uVar5 * 4) =
         (float)(uint)*(byte *)(ene_wrk.field0_0x0.m_aData[0].dist_in_tm + iVar4 * 8 + 0xd);
    alg->pos_no = alg->pos_no + '\x01';
    fVar7 = alg->loop_tr[1];
  }
  else {
    if (alg->pos_no != '\x01') {
      return;
    }
    fVar7 = alg->loop_tr[1];
  }
  if (fVar7 <= 0.0) {
    alg->wait_time = 0.0;
    alg->pos_no = '\0';
  }
  else {
    alg->loop_tr[1] = fVar7 - 1.0;
    fVar7 = (*(float *)(&max_1150 + uVar5 * 4) * (fVar7 - 1.0)) / *(float *)(&time_1149 + uVar5 * 4)
    ;
    uVar6 = (undefined)(int)fVar7;
    if (2.147484e+09 <= fVar7) {
      uVar6 = (undefined)(int)(fVar7 - 2.147484e+09);
    }
    *(undefined *)(ene_wrk.field0_0x0.m_aData[0].dist_in_tm + iVar4 * 8 + 0xd) = uVar6;
    alg->wait_time = 1.0;
  }
  return;
}

void EJobC2E(ENEALG_WRK *alg) {
	u_char no;
	ENE_WRK *ew;
	static float max[10];
	static float loop[10];
	
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte *pbVar4;
  uint uVar5;
  undefined uVar6;
  float fVar7;
  
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  bVar1 = alg->idx;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  _fixed_array_verifyrange__H1Z7ENE_WRK_UiUi_PX01(bVar1,10);
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  uVar5 = (uint)bVar1;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  if (alg->pos_no == '\0') {
    pbVar4 = (alg->comm_add).pu8;
    bVar2 = pbVar4[1];
    bVar3 = *pbVar4;
    (alg->comm_add).pu8 = pbVar4 + 2;
    alg->loop_tr[1] = (float)((uint)bVar3 + (uint)bVar2 * 0x100 & 0xffff);
    *(float *)(&max_1154 + uVar5 * 4) = (float)((uint)pbVar4[2] + (uint)pbVar4[3] * 0x100 & 0xffff);
    fVar7 = alg->loop_tr[1];
    (alg->comm_add).pu8 = (alg->comm_add).pu8 + 2;
    *(float *)(&loop_1155 + uVar5 * 4) = fVar7;
    alg->pos_no = alg->pos_no + '\x01';
    fVar7 = alg->loop_tr[1];
  }
  else {
    if (alg->pos_no != '\x01') {
      return;
    }
    fVar7 = alg->loop_tr[1];
  }
  if (fVar7 <= 0.0) {
    alg->wait_time = 0.0;
    alg->pos_no = '\0';
  }
  else {
    alg->loop_tr[1] = fVar7 - 1.0;
    fVar7 = *(float *)(&max_1154 + uVar5 * 4) -
            (*(float *)(&max_1154 + uVar5 * 4) * (fVar7 - 1.0)) / *(float *)(&loop_1155 + uVar5 * 4)
    ;
    uVar6 = (undefined)(int)fVar7;
    if (2.147484e+09 <= fVar7) {
      uVar6 = (undefined)(int)(fVar7 - 2.147484e+09);
    }
    *(undefined *)
     (ene_wrk.field0_0x0.m_aData[0].dist_in_tm + ((uint)bVar1 * 0x48 + uVar5) * 8 + 0xd) = uVar6;
    alg->wait_time = 1.0;
  }
  return;
}

void EJobC2F(ENEALG_WRK *alg) {
  byte bVar1;
  uchar uVar2;
  uchar *puVar3;
  
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  bVar1 = alg->idx;
  _fixed_array_verifyrange__H1Z7ENE_WRK_UiUi_PX01(bVar1,10);
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  puVar3 = (alg->comm_add).pu8;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  uVar2 = *puVar3;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  (alg->comm_add).pu8 = puVar3 + 1;
  *(uchar *)((int)ene_wrk.field0_0x0.m_aData[0].dist_in_tm +
            ((uint)bVar1 * 0x48 + (uint)bVar1) * 0x10 + 0x19) = uVar2;
  alg->pos_no = '\0';
  alg->wait_time = 0.0;
  return;
}

void EJobC30(ENEALG_WRK *alg) {
  byte bVar1;
  uchar uVar2;
  uchar *puVar3;
  
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  bVar1 = alg->idx;
  _fixed_array_verifyrange__H1Z7ENE_WRK_UiUi_PX01(bVar1,10);
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  puVar3 = (alg->comm_add).pu8;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  uVar2 = *puVar3;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  (alg->comm_add).pu8 = puVar3 + 1;
  *(uchar *)(ene_wrk.field0_0x0.m_aData[0].dist_in_tm + ((uint)bVar1 * 0x48 + (uint)bVar1) * 8 + 0xd
            ) = uVar2;
  alg->pos_no = '\0';
  alg->wait_time = 0.0;
  return;
}

void EJobC31(ENEALG_WRK *alg) {
	ENE_WRK *ew;
	
  byte bVar1;
  uchar uVar2;
  uchar uVar3;
  uchar uVar4;
  uchar uVar5;
  uchar *puVar6;
  int iVar7;
  ulong uVar8;
  P_INT *pPVar9;
  
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  bVar1 = alg->idx;
  _fixed_array_verifyrange__H1Z7ENE_WRK_UiUi_PX01(bVar1,10);
                    /* end of inlined section */
  pPVar9 = &alg->comm_add;
  puVar6 = pPVar9->pu8;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  uVar2 = *puVar6;
  pPVar9->pu8 = puVar6 + 1;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  uVar3 = puVar6[1];
  pPVar9->pu8 = puVar6 + 2;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  iVar7 = (uint)bVar1 * 0x48 + (uint)bVar1;
                    /* end of inlined section */
  uVar4 = puVar6[2];
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  pPVar9->pu8 = puVar6 + 3;
  uVar5 = puVar6[3];
  pPVar9->pu8 = puVar6 + 4;
  if (uVar2 == '\0') {
    *(ulong *)(ene_wrk.field0_0x0.m_aData[0].dist_p_e + iVar7 * 4 + -0x12) =
         *(ulong *)(ene_wrk.field0_0x0.m_aData[0].dist_p_e + iVar7 * 4 + -0x12) & 0xfffffffff7ffffff
    ;
  }
  else {
    uVar8 = *(ulong *)(ene_wrk.field0_0x0.m_aData[0].dist_p_e + iVar7 * 4 + -0x12);
    *(uchar *)((int)ene_wrk.field0_0x0.m_aData[0].dist_in_tm + iVar7 * 0x10 + 0x17) = uVar5;
    *(uchar *)((int)ene_wrk.field0_0x0.m_aData[0].dist_in_tm + iVar7 * 0x10 + 0x15) = uVar3;
    *(uchar *)(ene_wrk.field0_0x0.m_aData[0].dist_in_tm + iVar7 * 8 + 0xb) = uVar4;
    ene_wrk.field0_0x0.m_aData[0].fp[iVar7 * 8 + -3] = 0;
    *(ulong *)(ene_wrk.field0_0x0.m_aData[0].dist_p_e + iVar7 * 4 + -0x12) = uVar8 | 0x8000000;
  }
  alg->pos_no = '\0';
  alg->wait_time = 0.0;
  return;
}

void EJobC32(ENEALG_WRK *alg) {
  byte bVar1;
  uchar uVar2;
  uchar *puVar3;
  
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  bVar1 = alg->idx;
  _fixed_array_verifyrange__H1Z7ENE_WRK_UiUi_PX01(bVar1,10);
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  puVar3 = (alg->comm_add).pu8;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  uVar2 = *puVar3;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  (alg->comm_add).pu8 = puVar3 + 1;
  *(uchar *)(ene_wrk.field0_0x0.m_aData[0].dist_in_tm + ((uint)bVar1 * 0x48 + (uint)bVar1) * 8 + 10)
       = uVar2;
  alg->pos_no = '\0';
  alg->wait_time = 0.0;
  return;
}

void EJobC33(ENEALG_WRK *alg) {
	u_char no;
	ENE_WRK *ew;
	u_short adj;
	float f;
	static float time[10];
	static float max[10];
	
  byte bVar1;
  uchar uVar2;
  byte bVar3;
  uchar *puVar4;
  int iVar5;
  int iVar6;
  ENE_WRK *ew;
  uint uVar7;
  P_INT *pPVar8;
  undefined uVar9;
  float fVar10;
  float fVar11;
  
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  pPVar8 = &alg->comm_add;
  bVar1 = alg->idx;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  _fixed_array_verifyrange__H1Z7ENE_WRK_UiUi_PX01(bVar1,10);
                    /* end of inlined section */
  puVar4 = pPVar8->pu8;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  uVar2 = *puVar4;
  pPVar8->pu8 = puVar4 + 3;
  uVar7 = (uint)bVar1;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  iVar5 = (uint)bVar1 * 0x48 + uVar7;
  iVar6 = iVar5 * 0x10;
                    /* end of inlined section */
  bVar1 = puVar4[4];
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  ew = (ENE_WRK *)(ene_wrk.field0_0x0.m_aData[0].bep + iVar5 * 4);
                    /* end of inlined section */
  bVar3 = puVar4[3];
  pPVar8->pu8 = puVar4 + 5;
  if (uVar2 == '\0') {
    bVar1 = *(byte *)((int)ene_wrk.field0_0x0.m_aData[0].dist_in_tm + iVar6 + 0x1b);
    *(float *)(&time_1171 + uVar7 * 4) = alg->loop[0];
    *(float *)(&max_1172 + uVar7 * 4) = (float)(uint)bVar1;
    alg->pos_no = alg->pos_no + '\x01';
  }
  else {
    if (uVar2 != '\x01') {
      alg->pos_no = '\0';
      goto LAB_00175834;
    }
    if (alg->loop[0] <= 0.0) {
      *(undefined *)((int)ene_wrk.field0_0x0.m_aData[0].dist_in_tm + iVar6 + 0x1b) = 0;
      ene_wrk.field0_0x0.m_aData[0].dist_p_e_o[iVar5 * 4 + 0xf] = 0.0;
      ene_wrk.field0_0x0.m_aData[0].dist_p_e_o[iVar5 * 4 + 0x10] = 0.0;
      SetEnemyParallelLight__FP7ENE_WRKffff(ew,0.0,0.0,0.0,1.0);
      pPVar8->wrk = ((long)(int)((uint)bVar3 + (uint)bVar1 * 0x100) & 0xffffU) + alg->comm_add_top;
    }
    else {
      fVar11 = alg->loop[0] / *(float *)(&time_1171 + uVar7 * 4);
      fVar10 = *(float *)(&max_1172 + uVar7 * 4) * fVar11;
      uVar9 = (undefined)(int)fVar10;
      if (2.147484e+09 <= fVar10) {
        uVar9 = (undefined)(int)(fVar10 - 2.147484e+09);
      }
      fVar10 = 1.0;
      *(undefined *)((int)ene_wrk.field0_0x0.m_aData[0].dist_in_tm + iVar6 + 0x1b) = uVar9;
      if (fVar11 < 0.5) {
        fVar10 = fVar11 + fVar11;
      }
      ene_wrk.field0_0x0.m_aData[0].dist_p_e_o[iVar5 * 4 + 0xf] = (float)(int)(fVar10 * 69.0);
      ene_wrk.field0_0x0.m_aData[0].dist_p_e_o[iVar5 * 4 + 0x10] = (float)(int)(fVar10 * 45.0);
      SetEnemyParallelLight__FP7ENE_WRKffff(ew,fVar10,fVar10,fVar10,1.0);
      alg->loop[0] = alg->loop[0] - 1.0;
    }
  }
  alg->pos_no = '\0';
LAB_00175834:
  alg->wait_time = 0.0;
  return;
}

void EJobC34(ENEALG_WRK *alg) {
	SND_3D_SET s3d;
	
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  int iVar4;
  _SND_3D_SET s3d;
  
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  bVar1 = alg->idx;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  _fixed_array_verifyrange__H1Z7ENE_WRK_UiUi_PX01(bVar1,10);
                    /* end of inlined section */
  memset(&s3d,0,0xc);
  pbVar3 = (alg->comm_add).pu8;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  bVar2 = *pbVar3;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  (alg->comm_add).pu8 = pbVar3 + 1;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  iVar4 = ((uint)bVar1 * 0x48 + (uint)bVar1) * 0x10;
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  s3d.pos = (float (*) [4])((int)&ene_wrk.field0_0x0.m_aData[0].mbox + iVar4 + 0x10);
  SndBankPlay(*(int *)((int)ene_wrk.field0_0x0.m_aData[0].fw + iVar4 + -4),(uint)bVar2,0,0,0x3200,
              0x1000,0,&s3d);
  alg->wait_time = 0.0;
  alg->pos_no = '\0';
  return;
}

void EJobC35(ENEALG_WRK *alg) {
  byte bVar1;
  int iVar2;
  
  iVar2 = IsSisWrk__Fv();
                    /* end of inlined section */
  if (iVar2 != 0) {
    bVar1 = alg->idx;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Z7ENE_WRK_UiUi_PX01(bVar1,10);
    ChangeAtkTargetRnd__FP7ENE_WRK
              ((ENE_WRK *)
               (ene_wrk.field0_0x0.m_aData[0].bep + ((uint)bVar1 * 0x48 + (uint)bVar1) * 4));
  }
                    /* end of inlined section */
  alg->pos_no = '\0';
  alg->wait_time = 0.0;
  return;
}

void EJobC36(ENEALG_WRK *alg) {
	u_int attr;
	
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte *pbVar5;
  float fVar6;
  int iVar7;
  
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  bVar1 = alg->idx;
  _fixed_array_verifyrange__H1Z7ENE_WRK_UiUi_PX01(bVar1,10);
                    /* end of inlined section */
  pbVar5 = (alg->comm_add).pu8;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  bVar2 = pbVar5[3];
  bVar3 = pbVar5[2];
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  iVar7 = (uint)bVar1 * 0x48 + (uint)bVar1;
                    /* end of inlined section */
  bVar1 = pbVar5[1];
  bVar4 = *pbVar5;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  (alg->comm_add).pu8 = pbVar5 + 4;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  fVar6 = ene_wrk.field0_0x0.m_aData[0].directionaldiffuse[iVar7 * 4 + -1];
  alg->wait_time = 0.0;
  ene_wrk.field0_0x0.m_aData[0].directionaldiffuse[iVar7 * 4 + -1] =
       (float)((uint)fVar6 &
              ~((uint)bVar4 + (uint)bVar2 * 0x1000000 + (uint)bVar3 * 0x10000 + (uint)bVar1 * 0x100)
              );
  alg->pos_no = '\0';
  return;
}

void EJobC37(ENEALG_WRK *alg) {
	u_int attr;
	
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte *pbVar5;
  float fVar6;
  int iVar7;
  
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  bVar1 = alg->idx;
  _fixed_array_verifyrange__H1Z7ENE_WRK_UiUi_PX01(bVar1,10);
                    /* end of inlined section */
  pbVar5 = (alg->comm_add).pu8;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  bVar2 = pbVar5[3];
  bVar3 = pbVar5[2];
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  iVar7 = (uint)bVar1 * 0x48 + (uint)bVar1;
                    /* end of inlined section */
  bVar1 = pbVar5[1];
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  bVar4 = *pbVar5;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  (alg->comm_add).pu8 = pbVar5 + 4;
  fVar6 = ene_wrk.field0_0x0.m_aData[0].directionaldiffuse[iVar7 * 4 + -1];
  alg->wait_time = 0.0;
  ene_wrk.field0_0x0.m_aData[0].directionaldiffuse[iVar7 * 4 + -1] =
       (float)((uint)fVar6 |
              (uint)bVar4 + (uint)bVar2 * 0x1000000 + (uint)bVar3 * 0x10000 + (uint)bVar1 * 0x100);
  alg->pos_no = '\0';
  return;
}

void EJobC38(ENEALG_WRK *alg) {
	ENE_WRK *ew;
	u_char type;
	
  byte bVar1;
  uchar type;
  uchar *puVar2;
  int iVar3;
  int iVar4;
  float *pfVar5;
  PLCMN_WRK *target;
  float *rot;
  ENE_WRK *ew;
  
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  bVar1 = alg->idx;
  _fixed_array_verifyrange__H1Z7ENE_WRK_UiUi_PX01(bVar1,10);
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  puVar2 = (alg->comm_add).pu8;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  iVar3 = (uint)bVar1 * 0x48 + (uint)bVar1;
                    /* end of inlined section */
  type = *puVar2;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  iVar4 = iVar3 * 0x10;
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  ew = (ENE_WRK *)(ene_wrk.field0_0x0.m_aData[0].bep + iVar3 * 4);
                    /* end of inlined section */
  (alg->comm_add).pu8 = puVar2 + 1;
  switch(type) {
  case '\0':
    target = (PLCMN_WRK *)ene_wrk.field0_0x0.m_aData[0].dist_p_e_o[iVar3 * 4 + 8];
    pfVar5 = (float *)((int)&ene_wrk.field0_0x0.m_aData[0].mpos + iVar4 + 0x20);
    break;
  case '\x01':
    target = (PLCMN_WRK *)ene_wrk.field0_0x0.m_aData[0].dist_p_e_o[iVar3 * 4 + 8];
    pfVar5 = (float *)((int)&ene_wrk.field0_0x0.m_aData[0].mpos + iVar4 + 0x30);
    break;
  case '\x02':
  case '\x04':
    pfVar5 = (float *)((int)&ene_wrk.field0_0x0.m_aData[0].mpos + iVar4 + 0x20);
    rot = (float *)((int)&ene_wrk.field0_0x0.m_aData[0].mbox + iVar4 + 0x50);
    EneFlyAct__FP7ENE_WRKUcPfT2P9PLCMN_WRK
              (ew,type,pfVar5,rot,
               (PLCMN_WRK *)ene_wrk.field0_0x0.m_aData[0].dist_p_e_o[iVar3 * 4 + 8]);
    EneFlyAct__FP7ENE_WRKUcPfT2P9PLCMN_WRK
              (ew,type,pfVar5,rot,
               (PLCMN_WRK *)ene_wrk.field0_0x0.m_aData[0].dist_p_e_o[iVar3 * 4 + 8]);
    EneFlyAct__FP7ENE_WRKUcPfT2P9PLCMN_WRK
              (ew,type,pfVar5,rot,
               (PLCMN_WRK *)ene_wrk.field0_0x0.m_aData[0].dist_p_e_o[iVar3 * 4 + 8]);
    alg->pos_no = '\0';
    goto LAB_00175c48;
  case '\x05':
    pfVar5 = (float *)((int)&ene_wrk.field0_0x0.m_aData[0].mbox + iVar4 + 0x50);
    EneFlyAct__FP7ENE_WRKUcPfT2P9PLCMN_WRK
              (ew,type,(float *)((int)&ene_wrk.field0_0x0.m_aData[0].mpos + iVar4 + 0x20),pfVar5,
               (PLCMN_WRK *)ene_wrk.field0_0x0.m_aData[0].dist_p_e_o[iVar3 * 4 + 8]);
    EneFlyAct__FP7ENE_WRKUcPfT2P9PLCMN_WRK
              (ew,type,(float *)((int)&ene_wrk.field0_0x0.m_aData[0].mpos + iVar4 + 0x30),pfVar5,
               (PLCMN_WRK *)ene_wrk.field0_0x0.m_aData[0].dist_p_e_o[iVar3 * 4 + 8]);
    EneFlyAct__FP7ENE_WRKUcPfT2P9PLCMN_WRK
              (ew,type,(float *)((int)&ene_wrk.field0_0x0.m_aData[0].mpos + iVar4 + 0x40),pfVar5,
               (PLCMN_WRK *)ene_wrk.field0_0x0.m_aData[0].dist_p_e_o[iVar3 * 4 + 8]);
    EneFlyAct__FP7ENE_WRKUcPfT2P9PLCMN_WRK
              (ew,type,(float *)((int)&ene_wrk.field0_0x0.m_aData[0].mpos + iVar4 + 0x50),pfVar5,
               (PLCMN_WRK *)ene_wrk.field0_0x0.m_aData[0].dist_p_e_o[iVar3 * 4 + 8]);
  default:
    alg->pos_no = '\0';
    goto LAB_00175c48;
  }
  EneFlyAct__FP7ENE_WRKUcPfT2P9PLCMN_WRK
            (ew,type,pfVar5,(float *)((int)&ene_wrk.field0_0x0.m_aData[0].mbox + iVar4 + 0x50),
             target);
  alg->pos_no = '\0';
LAB_00175c48:
  alg->wait_time = 0.0;
  return;
}

void EJobC39(ENEALG_WRK *alg) {
  byte bVar1;
  
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  bVar1 = alg->idx;
  _fixed_array_verifyrange__H1Z7ENE_WRK_UiUi_PX01(bVar1,10);
                    /* end of inlined section */
  EraseEneFlyWork__FP7ENE_WRK
            ((ENE_WRK *)(ene_wrk.field0_0x0.m_aData[0].bep + ((uint)bVar1 * 0x48 + (uint)bVar1) * 4)
            );
  alg->wait_time = 0.0;
  alg->pos_no = '\0';
  return;
}

void EJobC3A(ENEALG_WRK *alg) {
	ENE_WRK *ew;
	u_char algno;
	int i;
	
  byte bVar1;
  uchar uVar2;
  short sVar3;
  uchar *puVar4;
  int iVar5;
  int iVar7;
  P_INT *pPVar8;
  int iVar9;
  int iVar10;
  float fVar6;
  
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  bVar1 = alg->idx;
  _fixed_array_verifyrange__H1Z7ENE_WRK_UiUi_PX01(bVar1,10);
                    /* end of inlined section */
  pPVar8 = &alg->comm_add;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  puVar4 = pPVar8->pu8;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  iVar7 = (uint)bVar1 * 0x48 + (uint)bVar1;
                    /* end of inlined section */
  uVar2 = *puVar4;
  pPVar8->pu8 = puVar4 + 1;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  bVar1 = puVar4[1];
  pPVar8->pu8 = puVar4 + 2;
  if (uVar2 == '\0') {
    alg->branch = bVar1;
  }
  else {
    iVar10 = 0x60;
    if (*(char *)(ene_wrk.field0_0x0.m_aData[0].dist_in_tm + iVar7 * 8 + 0xf) != '\x02') {
      iVar9 = 2;
      fVar6 = ene_wrk.field0_0x0.m_aData[0].dist_p_e[iVar7 * 4 + -2];
      while( true ) {
        iVar5 = (int)fVar6 + iVar10;
        iVar10 = iVar10 + 2;
        sVar3 = *(short *)(iVar5 + 0xe);
        if (-1 < sVar3) {
          ChangeEneAlgorithm__Fiii(0,(int)sVar3,(uint)bVar1);
        }
        iVar9 = iVar9 + -1;
        if (iVar9 < 0) break;
        fVar6 = ene_wrk.field0_0x0.m_aData[0].dist_p_e[iVar7 * 4 + -2];
      }
    }
  }
  alg->pos_no = '\0';
  alg->wait_time = 0.0;
  return;
}

void EJobC3B(ENEALG_WRK *alg) {
	ENE_WRK *ew;
	int i;
	int n;
	u_char type;
	
  byte bVar1;
  short sVar2;
  byte *pbVar3;
  int iVar4;
  ulong uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  float fVar5;
  
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  bVar1 = alg->idx;
  _fixed_array_verifyrange__H1Z7ENE_WRK_UiUi_PX01(bVar1,10);
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  pbVar3 = (alg->comm_add).pu8;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  iVar7 = (uint)bVar1 * 0x48 + (uint)bVar1;
                    /* end of inlined section */
  bVar1 = *pbVar3;
  (alg->comm_add).pu8 = pbVar3 + 1;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  if (*(char *)(ene_wrk.field0_0x0.m_aData[0].dist_in_tm + iVar7 * 8 + 0xf) != '\x02') {
    iVar9 = 0x60;
    iVar8 = 2;
    fVar5 = ene_wrk.field0_0x0.m_aData[0].dist_p_e[iVar7 * 4 + -2];
    while( true ) {
      iVar4 = (int)fVar5 + iVar9;
      iVar9 = iVar9 + 2;
      sVar2 = *(short *)(iVar4 + 0xe);
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* end of inlined section */
      if ((-1 < sVar2) &&
         (iVar4 = SearchEneWrkNo__Fii((uint)*(byte *)(ene_wrk.field0_0x0.m_aData[0].dist_in_tm +
                                                     iVar7 * 8 + 0xf),(int)sVar2), -1 < iVar4)) {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
        _fixed_array_verifyrange__H1Z7ENE_WRK_UiUi_PX01(iVar4,10);
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
        if ((ene_wrk.field0_0x0.m_aData[iVar4].act_no != '\b') &&
           ((ene_wrk.field0_0x0.m_aData[iVar4].status == 4 &&
            (ene_wrk.field0_0x0.m_aData[iVar4].st.hp != 0)))) {
          uVar6 = ene_wrk.field0_0x0.m_aData[iVar4].st.sta;
          ene_wrk.field0_0x0.m_aData[iVar4].st.dmg = 0;
          ene_wrk.field0_0x0.m_aData[iVar4].st.dmg_type = (ushort)bVar1;
          ene_wrk.field0_0x0.m_aData[iVar4].st.sta = uVar6 | 0x20000100000;
        }
      }
      iVar8 = iVar8 + -1;
      if (iVar8 < 0) break;
      fVar5 = ene_wrk.field0_0x0.m_aData[0].dist_p_e[iVar7 * 4 + -2];
    }
  }
  alg->pos_no = '\0';
  alg->wait_time = 0.0;
  return;
}

void EJobC3C(ENEALG_WRK *alg) {
	ENE_WRK *ew;
	int i;
	int n;
	
  byte bVar1;
  short sVar2;
  int iVar3;
  ulong uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  float fVar4;
  
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  bVar1 = alg->idx;
  _fixed_array_verifyrange__H1Z7ENE_WRK_UiUi_PX01(bVar1,10);
  iVar6 = (uint)bVar1 * 0x48 + (uint)bVar1;
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  if (*(char *)(ene_wrk.field0_0x0.m_aData[0].dist_in_tm + iVar6 * 8 + 0xf) != '\x02') {
    iVar8 = 0x60;
    iVar7 = 2;
    fVar4 = ene_wrk.field0_0x0.m_aData[0].dist_p_e[iVar6 * 4 + -2];
    while( true ) {
      iVar3 = (int)fVar4 + iVar8;
      iVar8 = iVar8 + 2;
      sVar2 = *(short *)(iVar3 + 0xe);
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* end of inlined section */
      if ((-1 < sVar2) &&
         (iVar3 = SearchEneWrkNo__Fii((uint)*(byte *)(ene_wrk.field0_0x0.m_aData[0].dist_in_tm +
                                                     iVar6 * 8 + 0xf),(int)sVar2), -1 < iVar3)) {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
        _fixed_array_verifyrange__H1Z7ENE_WRK_UiUi_PX01(iVar3,10);
                    /* end of inlined section */
        if (ene_wrk.field0_0x0.m_aData[iVar3].status == 4) {
          uVar5 = ene_wrk.field0_0x0.m_aData[iVar3].st.sta;
          ene_wrk.field0_0x0.m_aData[iVar3].st.dmg = -0x7961;
          ene_wrk.field0_0x0.m_aData[iVar3].st.sta = uVar5 | 0x100000;
        }
      }
      iVar7 = iVar7 + -1;
      if (iVar7 < 0) break;
      fVar4 = ene_wrk.field0_0x0.m_aData[0].dist_p_e[iVar6 * 4 + -2];
    }
  }
  alg->pos_no = '\0';
  alg->wait_time = 0.0;
  return;
}

void EJobC3D(ENEALG_WRK *alg) {
	ENE_WRK *ew;
	u_char sw;
	int i;
	int n;
	
  byte bVar1;
  uchar uVar2;
  short sVar3;
  uchar *puVar4;
  int iVar5;
  int iVar7;
  int iVar8;
  int iVar9;
  float fVar6;
  
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  bVar1 = alg->idx;
  _fixed_array_verifyrange__H1Z7ENE_WRK_UiUi_PX01(bVar1,10);
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  puVar4 = (alg->comm_add).pu8;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  iVar7 = (uint)bVar1 * 0x48 + (uint)bVar1;
                    /* end of inlined section */
  uVar2 = *puVar4;
  (alg->comm_add).pu8 = puVar4 + 1;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  if (*(char *)(ene_wrk.field0_0x0.m_aData[0].dist_in_tm + iVar7 * 8 + 0xf) != '\x02') {
    iVar9 = 0x60;
    iVar8 = 2;
    fVar6 = ene_wrk.field0_0x0.m_aData[0].dist_p_e[iVar7 * 4 + -2];
    while( true ) {
      iVar5 = (int)fVar6 + iVar9;
      iVar9 = iVar9 + 2;
      sVar3 = *(short *)(iVar5 + 0xe);
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* end of inlined section */
      if ((-1 < sVar3) &&
         (iVar5 = SearchEneWrkNo__Fii((uint)*(byte *)(ene_wrk.field0_0x0.m_aData[0].dist_in_tm +
                                                     iVar7 * 8 + 0xf),(int)sVar3), -1 < iVar5)) {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
        _fixed_array_verifyrange__H1Z7ENE_WRK_UiUi_PX01(iVar5,10);
                    /* end of inlined section */
        if ((ene_wrk.field0_0x0.m_aData[iVar5].status == 4) &&
           (ene_wrk.field0_0x0.m_aData[iVar5].st.hp != 0)) {
          ene_wrk.field0_0x0.m_aData[iVar5].alg.flag = uVar2;
        }
      }
      iVar8 = iVar8 + -1;
      if (iVar8 < 0) break;
      fVar6 = ene_wrk.field0_0x0.m_aData[0].dist_p_e[iVar7 * 4 + -2];
    }
  }
  alg->pos_no = '\0';
  alg->wait_time = 0.0;
  return;
}

void EJobC3E(ENEALG_WRK *alg) {
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte *pbVar4;
  P_INT *pPVar5;
  
  pPVar5 = &alg->comm_add;
  pbVar4 = pPVar5->pu8;
  bVar1 = *pbVar4;
  pPVar5->pu8 = pbVar4 + 1;
  bVar2 = pbVar4[2];
  bVar3 = pbVar4[1];
  pPVar5->pu8 = pbVar4 + 3;
  plyr_wrk.cmn_wrk.st.cond_tm = (ushort)bVar3 + (ushort)bVar2 * 0x100;
  plyr_wrk.cmn_wrk.st.cond = (short)bVar1;
  alg->wait_time = 0.0;
  alg->pos_no = '\0';
  return;
}

void EJobC3F(ENEALG_WRK *alg) {
  byte bVar1;
  
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  bVar1 = alg->idx;
  _fixed_array_verifyrange__H1Z7ENE_WRK_UiUi_PX01(bVar1,10);
                    /* end of inlined section */
  ReqCamTraceNearEne__FPv
            (ene_wrk.field0_0x0.m_aData[0].bep + ((uint)bVar1 * 0x48 + (uint)bVar1) * 4);
  alg->wait_time = 0.0;
  alg->pos_no = '\0';
  return;
}

void EJobC40(ENEALG_WRK *alg) {
	ENE_WRK *ew;
	u_char trgt;
	u_char dmg;
	
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte *pbVar4;
  P_INT *pPVar5;
  
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  bVar1 = alg->idx;
  _fixed_array_verifyrange__H1Z7ENE_WRK_UiUi_PX01(bVar1,10);
                    /* end of inlined section */
  pPVar5 = &alg->comm_add;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  pbVar4 = pPVar5->pu8;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  bVar2 = *pbVar4;
  pPVar5->pu8 = pbVar4 + 1;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  bVar3 = pbVar4[1];
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  pPVar5->pu8 = pbVar4 + 2;
  if (bVar2 == 1) {
    ReqPlyrSPdownP__FP9PLCMN_WRKUs(&sis_wrk.cmn_wrk,(ushort)bVar3);
    alg->pos_no = '\0';
  }
  else if (bVar2 < 2) {
    if (bVar2 == 0) {
      ReqPlyrSPdownP__FP9PLCMN_WRKUs(&plyr_wrk.cmn_wrk,(ushort)bVar3);
      alg->pos_no = '\0';
    }
    else {
      alg->pos_no = '\0';
    }
  }
  else if (bVar2 == 2) {
    ReqPlyrSPdownP__FP9PLCMN_WRKUs
              ((PLCMN_WRK *)
               ene_wrk.field0_0x0.m_aData[0].dist_p_e_o[((uint)bVar1 * 0x48 + (uint)bVar1) * 4 + 8],
               (ushort)bVar3);
    alg->pos_no = '\0';
  }
  else {
    alg->pos_no = '\0';
  }
  alg->wait_time = 0.0;
  return;
}

void EJobC41(ENEALG_WRK *alg) {
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  P_INT *pPVar4;
  
  pPVar4 = &alg->comm_add;
  pbVar3 = pPVar4->pu8;
  bVar1 = *pbVar3;
  pPVar4->pu8 = pbVar3 + 1;
  bVar2 = pbVar3[1];
  pPVar4->pu8 = pbVar3 + 2;
  alg->cnt[bVar1] = bVar2;
  alg->pos_no = '\0';
  alg->wait_time = 0.0;
  return;
}

void EJobC42(ENEALG_WRK *alg) {
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  P_INT *pPVar4;
  
  pPVar4 = &alg->comm_add;
  pbVar3 = pPVar4->pu8;
  bVar1 = *pbVar3;
  pPVar4->pu8 = pbVar3 + 1;
  bVar2 = pbVar3[1];
  pPVar4->pu8 = pbVar3 + 2;
  alg->cnt[bVar1] = bVar2 + alg->cnt[bVar1];
  alg->pos_no = '\0';
  alg->wait_time = 0.0;
  return;
}

void EJobC43(ENEALG_WRK *alg) {
	ENE_WRK *ew;
	int i;
	
  byte bVar1;
  short sVar2;
  int iVar3;
  int iVar5;
  int iVar6;
  int iVar7;
  float fVar4;
  
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  bVar1 = alg->idx;
  _fixed_array_verifyrange__H1Z7ENE_WRK_UiUi_PX01(bVar1,10);
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  iVar5 = (uint)bVar1 * 0x48 + (uint)bVar1;
                    /* end of inlined section */
  iVar7 = 0x60;
  if (*(char *)(ene_wrk.field0_0x0.m_aData[0].dist_in_tm + iVar5 * 8 + 0xf) != '\x02') {
    iVar6 = 2;
    fVar4 = ene_wrk.field0_0x0.m_aData[0].dist_p_e[iVar5 * 4 + -2];
    while( true ) {
      iVar3 = (int)fVar4 + iVar7;
      iVar7 = iVar7 + 2;
      sVar2 = *(short *)(iVar3 + 0xe);
      if ((-1 < sVar2) &&
         (iVar3 = SearchEneWrkNo__Fii((uint)*(byte *)(ene_wrk.field0_0x0.m_aData[0].dist_in_tm +
                                                     iVar5 * 8 + 0xf),(int)sVar2), iVar3 < 0)) {
        EneActReq__Fii(0,(int)sVar2);
      }
      iVar6 = iVar6 + -1;
      if (iVar6 < 0) break;
      fVar4 = ene_wrk.field0_0x0.m_aData[0].dist_p_e[iVar5 * 4 + -2];
    }
  }
  alg->pos_no = '\0';
  alg->wait_time = 0.0;
  return;
}

void EJobC44(ENEALG_WRK *alg) {
	ENE_WRK *ew;
	int i;
	int n;
	
  byte bVar1;
  uchar uVar2;
  short sVar3;
  uchar *puVar4;
  int iVar5;
  int iVar7;
  int iVar8;
  int iVar9;
  float fVar6;
  
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  bVar1 = alg->idx;
  _fixed_array_verifyrange__H1Z7ENE_WRK_UiUi_PX01(bVar1,10);
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  puVar4 = (alg->comm_add).pu8;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  iVar7 = (uint)bVar1 * 0x48 + (uint)bVar1;
                    /* end of inlined section */
  uVar2 = *puVar4;
  (alg->comm_add).pu8 = puVar4 + 1;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  if (*(char *)(ene_wrk.field0_0x0.m_aData[0].dist_in_tm + iVar7 * 8 + 0xf) == '\x02') {
    alg->pos_no = '\0';
  }
  else if (uVar2 == '\0') {
    EneActSet__FP7ENE_WRKUc((ENE_WRK *)(ene_wrk.field0_0x0.m_aData[0].bep + iVar7 * 4),'\b');
    alg->pos_no = '\0';
  }
  else {
    iVar9 = 0x60;
    iVar8 = 2;
    fVar6 = ene_wrk.field0_0x0.m_aData[0].dist_p_e[iVar7 * 4 + -2];
    while( true ) {
      iVar5 = (int)fVar6 + iVar9;
      iVar9 = iVar9 + 2;
      sVar3 = *(short *)(iVar5 + 0xe);
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* end of inlined section */
      if ((-1 < sVar3) &&
         (iVar5 = SearchEneWrkNo__Fii((uint)*(byte *)(ene_wrk.field0_0x0.m_aData[0].dist_in_tm +
                                                     iVar7 * 8 + 0xf),(int)sVar3), -1 < iVar5)) {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
        _fixed_array_verifyrange__H1Z7ENE_WRK_UiUi_PX01(iVar5,10);
                    /* end of inlined section */
        if ((ene_wrk.field0_0x0.m_aData[iVar5].status == 4) &&
           (ene_wrk.field0_0x0.m_aData[iVar5].st.hp != 0)) {
          EneActSet__FP7ENE_WRKUc(ene_wrk.field0_0x0.m_aData + iVar5,'\b');
        }
      }
      iVar8 = iVar8 + -1;
      if (iVar8 < 0) break;
      fVar6 = ene_wrk.field0_0x0.m_aData[0].dist_p_e[iVar7 * 4 + -2];
    }
    alg->pos_no = '\0';
  }
  alg->wait_time = 0.0;
  return;
}

void EJobC45(ENEALG_WRK *alg) {
	u_char no;
	ENE_WRK *ew;
	static float time[10];
	
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  int iVar4;
  uint uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  bVar1 = alg->idx;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  _fixed_array_verifyrange__H1Z7ENE_WRK_UiUi_PX01(bVar1,10);
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  uVar5 = (uint)bVar1;
  iVar4 = (uint)bVar1 * 0x48 + uVar5;
                    /* end of inlined section */
  if (alg->pos_no == '\0') {
    pbVar3 = (alg->comm_add).pu8;
    bVar1 = pbVar3[1];
    bVar2 = *pbVar3;
    (alg->comm_add).pu8 = pbVar3 + 2;
    fVar7 = (float)((uint)bVar2 + (uint)bVar1 * 0x100 & 0xffff);
    alg->loop[0] = fVar7;
    *(float *)(&time_1227 + uVar5 * 4) = fVar7;
    alg->wait_time = 1.0;
    alg->pos_no = alg->pos_no + '\x01';
  }
  else if (alg->pos_no == '\x01') {
    if (alg->loop[0] <= 0.0) {
      alg->loop[0] = 0.0;
      ene_wrk.field0_0x0.m_aData[0].dist_p_e_o[iVar4 * 4 + 0x10] = 0.0;
      ene_wrk.field0_0x0.m_aData[0].dist_p_e_o[iVar4 * 4 + 0xf] = 0.0;
      alg->wait_time = 0.0;
      alg->pos_no = '\0';
    }
    else {
      fVar7 = alg->loop[0] - 1.0;
      alg->loop[0] = fVar7;
      fVar7 = (ene_wrk.field0_0x0.m_aData[0].directionaldiffuse[iVar4 * 4 + -0xd] * fVar7) /
              *(float *)(&time_1227 + uVar5 * 4);
      if (2.147484e+09 <= fVar7) {
        fVar7 = fVar7 - 2.147484e+09;
      }
      fVar6 = ene_wrk.field0_0x0.m_aData[0].directionaldiffuse[iVar4 * 4 + -0xc];
      fVar8 = *(float *)(&time_1227 + uVar5 * 4);
      ene_wrk.field0_0x0.m_aData[0].dist_p_e_o[iVar4 * 4 + 0xf] = (float)((int)fVar7 & 0xff);
      fVar8 = (fVar6 * alg->loop[0]) / fVar8;
      if (2.147484e+09 <= fVar8) {
        fVar8 = fVar8 - 2.147484e+09;
      }
      ene_wrk.field0_0x0.m_aData[0].dist_p_e_o[iVar4 * 4 + 0x10] = (float)((int)fVar8 & 0xff);
      alg->wait_time = 1.0;
    }
  }
  return;
}

void EJobC46(ENEALG_WRK *alg) {
	u_char no;
	ENE_WRK *ew;
	static float time[10];
	
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte *pbVar4;
  int iVar5;
  uint uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  bVar1 = alg->idx;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  _fixed_array_verifyrange__H1Z7ENE_WRK_UiUi_PX01(bVar1,10);
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  uVar6 = (uint)bVar1;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  iVar5 = ((uint)bVar1 * 8 + uVar6) * 8 + uVar6;
                    /* end of inlined section */
  if (alg->pos_no == '\0') {
    pbVar4 = (alg->comm_add).pu8;
    bVar2 = pbVar4[1];
    bVar3 = *pbVar4;
    (alg->comm_add).pu8 = pbVar4 + 2;
    fVar7 = (float)((uint)bVar3 + (uint)bVar2 * 0x100 & 0xffff);
    alg->loop[0] = fVar7;
    *(float *)(&time_1231 + (uint)bVar1 * 4) = fVar7;
    alg->wait_time = 1.0;
    alg->pos_no = alg->pos_no + '\x01';
  }
  else if (alg->pos_no == '\x01') {
    if (alg->loop[0] <= 0.0) {
      alg->loop[0] = 0.0;
      fVar7 = ene_wrk.field0_0x0.m_aData[0].directionaldiffuse[iVar5 * 4 + -0xc];
      ene_wrk.field0_0x0.m_aData[0].dist_p_e_o[iVar5 * 4 + 0xf] =
           ene_wrk.field0_0x0.m_aData[0].directionaldiffuse[iVar5 * 4 + -0xd];
      ene_wrk.field0_0x0.m_aData[0].dist_p_e_o[iVar5 * 4 + 0x10] = fVar7;
      alg->wait_time = 0.0;
      alg->pos_no = '\0';
    }
    else {
      fVar8 = alg->loop[0] - 1.0;
      alg->loop[0] = fVar8;
      fVar7 = ene_wrk.field0_0x0.m_aData[0].directionaldiffuse[iVar5 * 4 + -0xd];
      fVar9 = *(float *)(&time_1231 + uVar6 * 4);
      fVar10 = ene_wrk.field0_0x0.m_aData[0].directionaldiffuse[iVar5 * 4 + -0xc];
      ene_wrk.field0_0x0.m_aData[0].dist_p_e_o[iVar5 * 4 + 0xf] = fVar7 - (fVar7 * fVar8) / fVar9;
      ene_wrk.field0_0x0.m_aData[0].dist_p_e_o[iVar5 * 4 + 0x10] =
           fVar10 - (fVar10 * alg->loop[0]) / fVar9;
      alg->wait_time = 1.0;
    }
  }
  return;
}

void EJobC47(ENEALG_WRK *alg) {
	ENE_WRK *ew;
	u_char flg;
	
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  uint uVar4;
  float fVar5;
  
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  bVar1 = alg->idx;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  _fixed_array_verifyrange__H1Z7ENE_WRK_UiUi_PX01(bVar1,10);
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  pbVar2 = (alg->comm_add).pu8;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  uVar4 = (uint)*pbVar2;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  iVar3 = (uint)bVar1 * 0x48 + (uint)bVar1;
                    /* end of inlined section */
  (alg->comm_add).pu8 = pbVar2 + 1;
  if (uVar4 == 0) {
    ene_wrk.field0_0x0.m_aData[0].dist_p_e_o[iVar3 * 4 + 0x10] = 0.0;
    ene_wrk.field0_0x0.m_aData[0].dist_p_e_o[iVar3 * 4 + 0xf] = 0.0;
  }
  else if (uVar4 == 0xff) {
    fVar5 = ene_wrk.field0_0x0.m_aData[0].directionaldiffuse[iVar3 * 4 + -0xc];
    ene_wrk.field0_0x0.m_aData[0].dist_p_e_o[iVar3 * 4 + 0xf] =
         ene_wrk.field0_0x0.m_aData[0].directionaldiffuse[iVar3 * 4 + -0xd];
    ene_wrk.field0_0x0.m_aData[0].dist_p_e_o[iVar3 * 4 + 0x10] = fVar5;
  }
  else {
    ene_wrk.field0_0x0.m_aData[0].dist_p_e_o[iVar3 * 4 + 0x10] = (float)uVar4;
    ene_wrk.field0_0x0.m_aData[0].dist_p_e_o[iVar3 * 4 + 0xf] = (float)uVar4;
  }
  alg->pos_no = '\0';
  alg->wait_time = 0.0;
  return;
}

void EJobC48(ENEALG_WRK *alg) {
  ClearPlyrDoorFlg__Fv();
  alg->pos_no = '\0';
  alg->wait_time = 0.0;
  return;
}

void EJobC49(ENEALG_WRK *alg) {
	ANI_CTRL *anc;
	
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  float fVar4;
  uint uVar5;
  uint uVar6;
  
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  bVar1 = alg->idx;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  _fixed_array_verifyrange__H1Z7ENE_WRK_UiUi_PX01(bVar1,10);
                    /* end of inlined section */
  pbVar3 = (alg->comm_add).pu8;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  bVar2 = pbVar3[1];
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  fVar4 = ene_wrk.field0_0x0.m_aData[0].directionaldiffuse
          [((uint)bVar1 * 0x48 + (uint)bVar1) * 4 + -2];
  bVar1 = *pbVar3;
  (alg->comm_add).pu8 = pbVar3 + 2;
  uVar6 = (uint)*(ushort *)((int)fVar4 + 0x7c);
  uVar5 = (uint)bVar1 + (uint)bVar2 * 0x100 & 0xffff;
  if (uVar5 < uVar6) {
    alg->loop[0] = (float)(uVar6 - uVar5);
  }
  else {
    alg->loop[0] = 0.0;
  }
  alg->pos_no = '\0';
  alg->wait_time = 0.0;
  return;
}

void EJobM00(ENEALG_WRK *alg) {
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte *pbVar8;
  
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  bVar1 = alg->idx;
  _fixed_array_verifyrange__H1Z7ENE_WRK_UiUi_PX01(bVar1,10);
                    /* end of inlined section */
  pbVar8 = (alg->comm_add).pu8;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  bVar2 = *pbVar8;
  bVar3 = pbVar8[1];
  (alg->comm_add).pu8 = pbVar8 + 2;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  bVar4 = pbVar8[3];
  bVar5 = pbVar8[2];
  (alg->comm_add).pu8 = pbVar8 + 4;
  bVar6 = pbVar8[5];
  bVar7 = pbVar8[4];
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  (alg->comm_add).pu8 = pbVar8 + 6;
  _SetVector__FPfffff((float *)((int)&ene_wrk.field0_0x0.m_aData[0].mbox +
                               ((uint)bVar1 * 0x48 + (uint)bVar1) * 0x10 + 0x10),
                      (float)((int)(((uint)bVar2 + (uint)bVar3 * 0x100) * 0x10000) >> 0x10),
                      (float)((int)(((uint)bVar5 + (uint)bVar4 * 0x100) * 0x10000) >> 0x10),
                      (float)((int)(((uint)bVar7 + (uint)bVar6 * 0x100) * 0x10000) >> 0x10),0.0);
  alg->wait_time = 0.0;
  alg->pos_no = '\0';
  return;
}

void EJobM01(ENEALG_WRK *alg) {
	float tv[4];
	
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte *pbVar8;
  int iVar9;
  int iVar10;
  float tv [4];
  
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  bVar1 = alg->idx;
  _fixed_array_verifyrange__H1Z7ENE_WRK_UiUi_PX01(bVar1,10);
                    /* end of inlined section */
  pbVar8 = (alg->comm_add).pu8;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  bVar2 = *pbVar8;
  bVar3 = pbVar8[1];
  (alg->comm_add).pu8 = pbVar8 + 2;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  bVar4 = pbVar8[3];
  bVar5 = pbVar8[2];
  (alg->comm_add).pu8 = pbVar8 + 4;
  bVar6 = pbVar8[5];
  bVar7 = pbVar8[4];
  (alg->comm_add).pu8 = pbVar8 + 6;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  iVar9 = ((uint)bVar1 * 0x48 + (uint)bVar1) * 0x10;
                    /* end of inlined section */
  _SetVector__FPfffff(tv,(float)((int)(((uint)bVar2 + (uint)bVar3 * 0x100) * 0x10000) >> 0x10),
                      (float)((int)(((uint)bVar5 + (uint)bVar4 * 0x100) * 0x10000) >> 0x10),
                      (float)((int)(((uint)bVar7 + (uint)bVar6 * 0x100) * 0x10000) >> 0x10),0.0);
  iVar10 = iVar9 + 0x2fe290;
  RotFvector__FPfT0((float *)((int)&ene_wrk.field0_0x0.m_aData[0].mbox + iVar9 + 0x50),tv);
  sceVu0AddVector(iVar10,iVar10,tv);
  alg->wait_time = 0.0;
  alg->pos_no = '\0';
  return;
}

void EJobM02(ENEALG_WRK *alg) {
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte *pbVar8;
  
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  bVar1 = alg->idx;
  _fixed_array_verifyrange__H1Z7ENE_WRK_UiUi_PX01(bVar1,10);
                    /* end of inlined section */
  pbVar8 = (alg->comm_add).pu8;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  bVar2 = *pbVar8;
  bVar3 = pbVar8[1];
  (alg->comm_add).pu8 = pbVar8 + 2;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  bVar4 = pbVar8[3];
  bVar5 = pbVar8[2];
  (alg->comm_add).pu8 = pbVar8 + 4;
  bVar6 = pbVar8[5];
  bVar7 = pbVar8[4];
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  (alg->comm_add).pu8 = pbVar8 + 6;
  _SetVector__FPfffff(ene_wrk.field0_0x0.m_aData[0].adjp + ((uint)bVar1 * 0x48 + (uint)bVar1) * 4,
                      (float)((int)(((uint)bVar2 + (uint)bVar3 * 0x100) * 0x10000) >> 0x10),
                      (float)((int)(((uint)bVar5 + (uint)bVar4 * 0x100) * 0x10000) >> 0x10),
                      (float)((int)(((uint)bVar7 + (uint)bVar6 * 0x100) * 0x10000) >> 0x10),0.0);
  alg->wait_time = 0.0;
  alg->pos_no = '\0';
  return;
}

void EJobM03(ENEALG_WRK *alg) {
	float spd;
	u_char id;
	ENE_WRK *ew;
	MOVE_BOX *mb;
	
  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  bVar1 = alg->idx;
  _fixed_array_verifyrange__H1Z7ENE_WRK_UiUi_PX01(bVar1,10);
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  pbVar2 = (alg->comm_add).pu8;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  iVar4 = (uint)bVar1 * 0x48 + (uint)bVar1;
                    /* end of inlined section */
  bVar1 = *pbVar2;
  (alg->comm_add).pu8 = pbVar2 + 1;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  if (*(char *)(ene_wrk.field0_0x0.m_aData[0].dist_in_tm + iVar4 * 8 + 0xf) == '\x02') {
    printf("AUTO ENE CANNOT USE SPD\n");
    return;
  }
  if (bVar1 == 0x33) {
    fVar5 = 0.5;
    uVar3 = (uint)*(byte *)((int)ene_wrk.field0_0x0.m_aData[0].dist_p_e[iVar4 * 4 + -2] + 0x5b);
    goto LAB_0017711c;
  }
  if (bVar1 < 0x34) {
    if (bVar1 == 0x15) {
      uVar3 = (uint)*(byte *)((int)ene_wrk.field0_0x0.m_aData[0].dist_p_e[iVar4 * 4 + -2] + 0x5b);
      goto LAB_001770c4;
    }
    if (bVar1 < 0x16) {
      if (bVar1 == 10) {
        fVar5 = 1.5;
        uVar3 = (uint)*(byte *)((int)ene_wrk.field0_0x0.m_aData[0].dist_p_e[iVar4 * 4 + -2] + 0x5a);
        goto LAB_0017711c;
      }
      if (bVar1 < 0xb) {
        if (bVar1 == 0) {
          fVar6 = ene_wrk.field0_0x0.m_aData[0].dist_p_e[iVar4 * 4 + -2];
          goto LAB_00177134;
        }
        fVar6 = ene_wrk.field0_0x0.m_aData[0].dist_p_e[iVar4 * 4 + -2];
        if (bVar1 == 1) {
          uVar3 = (uint)*(byte *)((int)fVar6 + 0x5b);
        }
        else {
          uVar3 = (uint)*(byte *)((int)fVar6 + 0x5a);
        }
      }
      else {
        if (bVar1 == 0xb) {
          fVar5 = 1.5;
          uVar3 = (uint)*(byte *)((int)ene_wrk.field0_0x0.m_aData[0].dist_p_e[iVar4 * 4 + -2] + 0x5b
                                 );
          goto LAB_0017711c;
        }
        fVar6 = ene_wrk.field0_0x0.m_aData[0].dist_p_e[iVar4 * 4 + -2];
        if (bVar1 == 0x14) {
          uVar3 = (uint)*(byte *)((int)fVar6 + 0x5a);
          goto LAB_001770c4;
        }
        uVar3 = (uint)*(byte *)((int)fVar6 + 0x5a);
      }
LAB_00177138:
      fVar5 = (float)uVar3;
    }
    else {
      if (bVar1 == 0x28) {
        fVar5 = 3.0;
        uVar3 = (uint)*(byte *)((int)ene_wrk.field0_0x0.m_aData[0].dist_p_e[iVar4 * 4 + -2] + 0x5a);
      }
      else if (bVar1 < 0x29) {
        if (bVar1 == 0x1e) {
          fVar5 = 2.5;
          uVar3 = (uint)*(byte *)((int)ene_wrk.field0_0x0.m_aData[0].dist_p_e[iVar4 * 4 + -2] + 0x5a
                                 );
        }
        else {
          if (bVar1 != 0x1f) {
            fVar6 = ene_wrk.field0_0x0.m_aData[0].dist_p_e[iVar4 * 4 + -2];
            goto LAB_00177134;
          }
          fVar5 = 2.5;
          uVar3 = (uint)*(byte *)((int)ene_wrk.field0_0x0.m_aData[0].dist_p_e[iVar4 * 4 + -2] + 0x5b
                                 );
        }
      }
      else if (bVar1 == 0x29) {
        fVar5 = 3.0;
        uVar3 = (uint)*(byte *)((int)ene_wrk.field0_0x0.m_aData[0].dist_p_e[iVar4 * 4 + -2] + 0x5b);
      }
      else {
        if (bVar1 != 0x32) {
          fVar6 = ene_wrk.field0_0x0.m_aData[0].dist_p_e[iVar4 * 4 + -2];
          goto LAB_00177134;
        }
        fVar5 = 0.5;
        uVar3 = (uint)*(byte *)((int)ene_wrk.field0_0x0.m_aData[0].dist_p_e[iVar4 * 4 + -2] + 0x5a);
      }
LAB_0017711c:
      fVar5 = (float)uVar3 * fVar5;
    }
  }
  else {
    if (bVar1 != 0x79) {
      if (bVar1 < 0x7a) {
        if (bVar1 != 0x6e) {
          if (bVar1 < 0x6f) {
            if (bVar1 == 100) {
              bVar1 = *(byte *)((int)ene_wrk.field0_0x0.m_aData[0].dist_p_e[iVar4 * 4 + -2] + 0x5a);
            }
            else {
              if (bVar1 != 0x65) {
                fVar6 = ene_wrk.field0_0x0.m_aData[0].dist_p_e[iVar4 * 4 + -2];
                goto LAB_00177134;
              }
              bVar1 = *(byte *)((int)ene_wrk.field0_0x0.m_aData[0].dist_p_e[iVar4 * 4 + -2] + 0x5b);
            }
            fVar5 = (float)-(uint)bVar1;
            fVar6 = ene_wrk.field0_0x0.m_aData[0].dist_p_e_o[iVar4 * 4 + 5];
            goto LAB_00177144;
          }
          if (bVar1 == 0x6f) {
            fVar5 = 1.5;
            fVar6 = ene_wrk.field0_0x0.m_aData[0].dist_p_e[iVar4 * 4 + -2];
            goto LAB_00177114;
          }
          fVar6 = ene_wrk.field0_0x0.m_aData[0].dist_p_e[iVar4 * 4 + -2];
          if (bVar1 != 0x78) {
            uVar3 = (uint)*(byte *)((int)fVar6 + 0x5a);
            goto LAB_00177138;
          }
          bVar1 = *(byte *)((int)fVar6 + 0x5a);
          goto LAB_001770c0;
        }
        fVar5 = 1.5;
        uVar3 = (uint)*(byte *)((int)ene_wrk.field0_0x0.m_aData[0].dist_p_e[iVar4 * 4 + -2] + 0x5a);
      }
      else {
        if (bVar1 != 0xa0) {
          if (bVar1 < 0xa1) {
            if (bVar1 == 0x96) {
              fVar5 = 0.5;
              uVar3 = (uint)*(byte *)((int)ene_wrk.field0_0x0.m_aData[0].dist_p_e[iVar4 * 4 + -2] +
                                     0x5a);
              goto LAB_00177118;
            }
            if (bVar1 == 0x97) {
              fVar5 = 0.5;
              fVar6 = ene_wrk.field0_0x0.m_aData[0].dist_p_e[iVar4 * 4 + -2];
              goto LAB_00177114;
            }
            fVar6 = ene_wrk.field0_0x0.m_aData[0].dist_p_e[iVar4 * 4 + -2];
          }
          else {
            if (bVar1 == 0xa1) {
              fVar6 = ene_wrk.field0_0x0.m_aData[0].dist_p_e[iVar4 * 4 + -2];
              fVar5 = 0.25;
LAB_00177114:
              uVar3 = (uint)*(byte *)((int)fVar6 + 0x5b);
              goto LAB_00177118;
            }
            fVar5 = 0.0;
            if (bVar1 == 0xff) {
              fVar6 = ene_wrk.field0_0x0.m_aData[0].dist_p_e_o[iVar4 * 4 + 5];
              goto LAB_00177144;
            }
            fVar6 = ene_wrk.field0_0x0.m_aData[0].dist_p_e[iVar4 * 4 + -2];
          }
LAB_00177134:
          uVar3 = (uint)*(byte *)((int)fVar6 + 0x5a);
          goto LAB_00177138;
        }
        fVar5 = 0.25;
        uVar3 = (uint)*(byte *)((int)ene_wrk.field0_0x0.m_aData[0].dist_p_e[iVar4 * 4 + -2] + 0x5a);
      }
LAB_00177118:
      uVar3 = -uVar3;
      goto LAB_0017711c;
    }
    bVar1 = *(byte *)((int)ene_wrk.field0_0x0.m_aData[0].dist_p_e[iVar4 * 4 + -2] + 0x5b);
LAB_001770c0:
    uVar3 = -(uint)bVar1;
LAB_001770c4:
    fVar5 = (float)uVar3 + (float)uVar3;
  }
  fVar6 = ene_wrk.field0_0x0.m_aData[0].dist_p_e_o[iVar4 * 4 + 5];
LAB_00177144:
  _SetVector__FPfffff((float *)((int)&ene_wrk.field0_0x0.m_aData[0].mbox + iVar4 * 0x10 + 0x70),0.0,
                      0.0,fVar5 * fVar6,0.0);
  alg->wait_time = 0.0;
  alg->pos_no = '\0';
  return;
}

void EJobM04(ENEALG_WRK *alg) {
	u_char type;
	short int x;
	short int y;
	short int z;
	float f;
	ENE_WRK *ew;
	
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte *pbVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  P_INT *pPVar14;
  float *pfVar15;
  float fVar16;
  
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  bVar1 = alg->idx;
  _fixed_array_verifyrange__H1Z7ENE_WRK_UiUi_PX01(bVar1,10);
                    /* end of inlined section */
  pPVar14 = &alg->comm_add;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  pbVar8 = pPVar14->pu8;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  bVar2 = *pbVar8;
  pPVar14->pu8 = pbVar8 + 1;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  iVar9 = (uint)bVar1 * 0x48 + (uint)bVar1;
                    /* end of inlined section */
  bVar1 = pbVar8[1];
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  iVar10 = iVar9 * 0x10;
                    /* end of inlined section */
  bVar3 = pbVar8[2];
  pPVar14->pu8 = pbVar8 + 3;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  pfVar15 = (float *)((int)&ene_wrk.field0_0x0.m_aData[0].mbox + iVar10 + 0x70);
  bVar4 = pbVar8[4];
  bVar5 = pbVar8[3];
  pPVar14->pu8 = pbVar8 + 5;
  bVar6 = pbVar8[6];
  bVar7 = pbVar8[5];
  pPVar14->pu8 = pbVar8 + 7;
  iVar13 = (int)(((uint)bVar1 + (uint)bVar3 * 0x100) * 0x10000) >> 0x10;
  iVar12 = (int)(((uint)bVar5 + (uint)bVar4 * 0x100) * 0x10000) >> 0x10;
  iVar11 = (int)(((uint)bVar7 + (uint)bVar6 * 0x100) * 0x10000) >> 0x10;
  if (bVar2 == 1) {
    fVar16 = ene_wrk.field0_0x0.m_aData[0].dist_p_e_o[iVar9 * 4 + 5];
    _SetVector__FPfffff(pfVar15,(float)iVar13 * fVar16,(float)iVar12 * fVar16,(float)iVar11 * fVar16
                        ,0.0);
    RotFvector__FPfT0((float *)((int)&ene_wrk.field0_0x0.m_aData[0].mbox + iVar10 + 0x50),pfVar15);
    alg->pos_no = '\0';
  }
  else if (bVar2 < 2) {
    if (bVar2 == 0) {
      fVar16 = ene_wrk.field0_0x0.m_aData[0].dist_p_e_o[iVar9 * 4 + 5];
      _SetVector__FPfffff((float *)((int)&ene_wrk.field0_0x0.m_aData[0].mbox + iVar10 + 0x70),
                          (float)iVar13 * fVar16,(float)iVar12 * fVar16,(float)iVar11 * fVar16,0.0);
      alg->pos_no = '\0';
    }
    else {
      alg->pos_no = '\0';
    }
  }
  else if (bVar2 == 2) {
    pfVar15 = (float *)((int)&ene_wrk.field0_0x0.m_aData[0].mbox + iVar10 + 0x70);
    fVar16 = ((float)(uint)*(ushort *)
                            ((int)ene_wrk.field0_0x0.m_aData[0].dist_p_e[iVar9 * 4 + -2] + 0x5e) /
             100.0) * ene_wrk.field0_0x0.m_aData[0].dist_p_e_o[iVar9 * 4 + 5];
    _SetVector__FPfffff(pfVar15,(float)iVar13 * fVar16,(float)iVar12 * fVar16,(float)iVar11 * fVar16
                        ,0.0);
    RotFvector__FPfT0((float *)((int)&ene_wrk.field0_0x0.m_aData[0].mbox + iVar10 + 0x50),pfVar15);
    alg->pos_no = '\0';
  }
  else {
    alg->pos_no = '\0';
  }
  alg->wait_time = 0.0;
  return;
}

void EJobM05(ENEALG_WRK *alg) {
	short int rot[3];
	u_char i;
	MOVE_BOX *mb;
	
  byte bVar1;
  float fVar2;
  float fVar3;
  byte *pbVar4;
  int iVar5;
  float *pfVar6;
  uint uVar7;
  int iVar8;
  float fVar9;
  ushort rot [3];
  
  fVar3 = DAT_003ee1b4;
  fVar2 = DAT_003ee1b0;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  uVar7 = 0;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  bVar1 = alg->idx;
                    /* end of inlined section */
  fVar9 = 1800.0;
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  _fixed_array_verifyrange__H1Z7ENE_WRK_UiUi_PX01(bVar1,10);
  iVar8 = ((uint)bVar1 * 0x48 + (uint)bVar1) * 0x10 + 0x2fe280;
                    /* end of inlined section */
  pbVar4 = (alg->comm_add).pu8;
  while( true ) {
    pfVar6 = (float *)(iVar8 + uVar7 * 4 + 0x80);
    iVar5 = (uint)*pbVar4 + (uint)pbVar4[1] * 0x100;
    (alg->comm_add).pu8 = pbVar4 + 2;
    rot[uVar7] = (ushort)iVar5;
    *pfVar6 = ((float)(iVar5 * 0x10000 >> 0x10) * fVar2) / fVar9;
    iVar5 = GetPALMode__Fv();
    if (iVar5 != 0) {
      *pfVar6 = *pfVar6 * fVar3;
    }
    RotLimitChk__FPf((float *)(iVar8 + uVar7 * 4 + 0x80));
    uVar7 = uVar7 + 1 & 0xff;
    if (2 < uVar7) break;
    pbVar4 = (alg->comm_add).pu8;
  }
  alg->pos_no = '\0';
  alg->wait_time = 0.0;
  return;
}

void EJobM06(ENEALG_WRK *alg) {
	float tv[4];
	float rv[4];
	float rot;
	u_char side;
	float r;
	float m;
	float v;
	float f;
	static int cnt;
	ENE_WRK *ew;
	MOVE_BOX *pcmw;
	MOVE_BOX *mb;
	
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  P_INT *pPVar8;
  float *p1;
  float *p0;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float tv [4];
  float rv [4];
  
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  fVar11 = 0.0;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  bVar1 = alg->idx;
  _fixed_array_verifyrange__H1Z7ENE_WRK_UiUi_PX01(bVar1,10);
                    /* end of inlined section */
  pPVar8 = &alg->comm_add;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  pbVar3 = pPVar8->pu8;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  iVar5 = (uint)bVar1 * 0x48 + (uint)bVar1;
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  iVar6 = iVar5 * 0x10;
                    /* end of inlined section */
  bVar1 = *pbVar3;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  fVar9 = ene_wrk.field0_0x0.m_aData[0].dist_p_e_o[iVar5 * 4 + 8];
  pPVar8->pu8 = pbVar3 + 1;
  p0 = (float *)((int)fVar9 + 0x10);
  bVar2 = pbVar3[1];
  pPVar8->pu8 = pbVar3 + 2;
  fVar12 = (float)((uint)pbVar3[2] + (uint)pbVar3[3] * 0x100 & 0xffff);
  pPVar8->pu8 = pbVar3 + 4;
  _ClearVector__FPf(tv);
  fVar9 = GetDistV__FPCfT0(p0,(float *)((int)&ene_wrk.field0_0x0.m_aData[0].mbox + iVar6 + 0x10));
  if (bVar1 != 0) {
    fVar11 = 10.0 / (float)(uint)bVar1;
  }
  fVar10 = (fVar12 / 1600.0) * (float)(cnt_1262 * cnt_1262);
  tv[2] = fVar9 - (float)(uint)*(byte *)((int)ene_wrk.field0_0x0.m_aData[0].dist_p_e[iVar5 * 4 + -2]
                                        + 0x5a) * fVar11;
  if (fVar12 < fVar10) {
    fVar10 = fVar12;
  }
  iVar7 = cnt_1262 + 1;
  bVar4 = cnt_1262 < 0x28;
  p1 = (float *)((int)&ene_wrk.field0_0x0.m_aData[0].mbox + iVar6 + 0x10);
  cnt_1262 = 0x28;
  if (bVar4) {
    cnt_1262 = iVar7;
  }
  fVar10 = fVar10 / tv[2];
  GetTrgtRot__FPCfT0Pfi(p0,p1,rv,2);
  if (bVar2 == 0) {
    rv[1] = rv[1] - fVar10;
  }
  else {
    rv[1] = rv[1] + fVar10;
  }
  RotLimitChk__FPf(rv + 1);
  RotFvector__FPfT0(rv,tv);
  sceVu0AddVector(tv,tv,p0);
  sceVu0SubVector(tv,tv,p1);
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/g3dxVu0.h */
                    /* end of inlined section */
  tv[1] = 0.0;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/g3dxVu0.h */
  *(float *)((int)&ene_wrk.field0_0x0.m_aData[0].mbox + iVar6 + 0x70) = tv[0];
  *(undefined4 *)((int)&ene_wrk.field0_0x0.m_aData[0].mbox + iVar6 + 0x74) = 0;
  *(float *)((int)&ene_wrk.field0_0x0.m_aData[0].mbox + iVar6 + 0x78) = tv[2];
  *(float *)((int)&ene_wrk.field0_0x0.m_aData[0].mbox + iVar6 + 0x7c) = tv[3];
                    /* end of inlined section */
  sceVu0AddVector(tv,tv,p1);
  tv[1] = (tv[1] + ene_wrk.field0_0x0.m_aData[0].adjp[iVar5 * 4 + 1]) -
          *(float *)((int)&ene_wrk.field0_0x0.m_aData[0].mbox + iVar6 + 0x14);
  if ((1.0 < ABS(tv[1])) && (bVar4 = 0.0 <= tv[1], tv[1] = -1.0, bVar4)) {
    tv[1] = 1.0;
  }
  *(float *)((int)&ene_wrk.field0_0x0.m_aData[0].mbox + iVar6 + 0x74) = tv[1];
  alg->pos_no = '\0';
  alg->wait_time = 0.0;
  return;
}

void EJobM07(ENEALG_WRK *alg) {
	float tv[4];
	float rv[4];
	u_char type1;
	u_char type2;
	u_char side;
	int time;
	int time_m;
	float max_v;
	float r;
	float m;
	float fr;
	static int cnt;
	ENE_WRK *ew;
	MOVE_BOX *pcmw;
	MOVE_BOX *mb;
	
  byte bVar1;
  uchar uVar2;
  uchar uVar3;
  uchar uVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  uchar *puVar8;
  bool bVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  P_INT *pPVar14;
  float *p1;
  float *p0;
  uint uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float tv [4];
  float rv [4];
  
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  bVar1 = alg->idx;
  _fixed_array_verifyrange__H1Z7ENE_WRK_UiUi_PX01(bVar1,10);
                    /* end of inlined section */
  pPVar14 = &alg->comm_add;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  puVar8 = pPVar14->pu8;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  iVar11 = (uint)bVar1 * 0x48 + (uint)bVar1;
  iVar12 = iVar11 * 0x10;
                    /* end of inlined section */
  uVar2 = *puVar8;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  fVar18 = ene_wrk.field0_0x0.m_aData[0].dist_p_e_o[iVar11 * 4 + 8];
  pPVar14->pu8 = puVar8 + 1;
  uVar3 = puVar8[1];
  pPVar14->pu8 = puVar8 + 2;
  uVar4 = puVar8[2];
  pPVar14->pu8 = puVar8 + 3;
  bVar1 = puVar8[4];
  bVar5 = puVar8[3];
  pPVar14->pu8 = puVar8 + 5;
  bVar6 = puVar8[6];
  bVar7 = puVar8[5];
  fVar16 = (float)((uint)bVar5 + (uint)bVar1 * 0x100 & 0xffff);
  pPVar14->pu8 = puVar8 + 7;
  uVar15 = (uint)bVar7 + (uint)bVar6 * 0x100 & 0xffff;
  iVar10 = GetPALMode__Fv();
  if (iVar10 == 0) {
    fVar17 = 1.0;
  }
  else {
    uVar15 = (uint)((float)uVar15 / DAT_003ee1b8);
    fVar17 = DAT_003ee1b8;
  }
  p0 = (float *)((int)fVar18 + 0x10);
  p1 = (float *)((int)&ene_wrk.field0_0x0.m_aData[0].mbox + iVar12 + 0x10);
  _ClearVector__FPf(tv);
  tv[2] = GetDistV__FPCfT0(p0,p1);
  if (uVar3 == '\x01') {
LAB_001778d8:
    if (tv[2] == 0.0) {
      alg->wait_time = 0.0;
    }
    else {
      if (uVar15 != 0) {
        if (uVar2 != '\0') {
          fVar16 = (fVar16 * (float)(cnt_1266 * cnt_1266)) / (float)(uVar15 * uVar15);
        }
        fVar18 = (fVar16 * fVar17) / tv[2];
        if (uVar2 == '\x01') {
          uVar13 = cnt_1266 + 1;
          bVar9 = (int)cnt_1266 < (int)uVar15;
          cnt_1266 = uVar15;
          if (bVar9) {
            cnt_1266 = uVar13;
          }
        }
        else if (uVar2 == '\x02') {
          bVar9 = (int)cnt_1266 < 1;
          cnt_1266 = cnt_1266 - 1;
          if (bVar9) {
            cnt_1266 = 0;
          }
        }
        else {
          cnt_1266 = 0;
        }
        GetTrgtRot__FPCfT0Pfi(p0,p1,rv,2);
        if (uVar4 == '\0') {
          rv[1] = rv[1] - fVar18;
        }
        else {
          rv[1] = rv[1] + fVar18;
        }
        RotLimitChk__FPf(rv + 1);
        RotFvector__FPfT0(rv,tv);
        sceVu0AddVector(tv,tv,p0);
        sceVu0SubVector(tv,tv,p1);
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/g3dxVu0.h */
                    /* end of inlined section */
        tv[1] = 0.0;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/g3dxVu0.h */
        *(float *)((int)&ene_wrk.field0_0x0.m_aData[0].mbox + iVar12 + 0x70) = tv[0];
        *(undefined4 *)((int)&ene_wrk.field0_0x0.m_aData[0].mbox + iVar12 + 0x74) = 0;
        *(float *)((int)&ene_wrk.field0_0x0.m_aData[0].mbox + iVar12 + 0x78) = tv[2];
        *(float *)((int)&ene_wrk.field0_0x0.m_aData[0].mbox + iVar12 + 0x7c) = tv[3];
                    /* end of inlined section */
        sceVu0AddVector(tv,tv,p1);
        tv[1] = (tv[1] + ene_wrk.field0_0x0.m_aData[0].adjp[iVar11 * 4 + 1]) -
                *(float *)((int)&ene_wrk.field0_0x0.m_aData[0].mbox + iVar12 + 0x14);
        if ((1.0 < ABS(tv[1])) && (bVar9 = 0.0 <= tv[1], tv[1] = -1.0, bVar9)) {
          tv[1] = 1.0;
        }
        *(float *)((int)&ene_wrk.field0_0x0.m_aData[0].mbox + iVar12 + 0x74) = tv[1];
        goto LAB_00177a64;
      }
      alg->wait_time = 0.0;
    }
    alg->pos_no = '\0';
  }
  else {
    if (uVar3 == '\x02') {
      bVar1 = *(byte *)((int)ene_wrk.field0_0x0.m_aData[0].dist_p_e[iVar11 * 4 + -2] + 0x5a);
LAB_001778a0:
      tv[2] = tv[2] - (float)(uint)bVar1;
      goto LAB_001778d8;
    }
    if (uVar3 == '\x03') {
      bVar1 = *(byte *)((int)ene_wrk.field0_0x0.m_aData[0].dist_p_e[iVar11 * 4 + -2] + 0x5b);
      goto LAB_001778a0;
    }
    if (uVar2 == '\x01') {
      cnt_1266 = 0;
    }
    else {
      cnt_1266 = 0;
      if (uVar2 == '\x02') {
        cnt_1266 = uVar15;
      }
    }
LAB_00177a64:
    alg->pos_no = '\0';
    alg->wait_time = 0.0;
  }
  return;
}

void EJobM08(ENEALG_WRK *alg) {
	float tv[4];
	u_char id;
	ENE_WRK *ew;
	PLCMN_WRK *pcw;
	MOVE_BOX *mb;
	
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  int iVar4;
  float *p0;
  uint uVar5;
  float fVar6;
  float tv [4];
  
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  bVar1 = alg->idx;
  _fixed_array_verifyrange__H1Z7ENE_WRK_UiUi_PX01(bVar1,10);
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  pbVar2 = (alg->comm_add).pu8;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  iVar3 = (uint)bVar1 * 0x48 + (uint)bVar1;
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  iVar4 = iVar3 * 0x10;
                    /* end of inlined section */
  uVar5 = (uint)*pbVar2;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  fVar6 = ene_wrk.field0_0x0.m_aData[0].dist_p_e_o[iVar3 * 4 + 8];
  (alg->comm_add).pu8 = pbVar2 + 1;
  sceVu0AddVector(tv,(int)fVar6 + 0x10,iVar4 + 0x2fe050);
  if (uVar5 == 0) {
    GetTrgtRot__FPCfT0Pfi
              ((float *)((int)&ene_wrk.field0_0x0.m_aData[0].mbox + iVar4 + 0x10),tv,
               (float *)((int)&ene_wrk.field0_0x0.m_aData[0].mbox + iVar4 + 0x50),3);
    ene_wrk.field0_0x0.m_aData[0].dist_p_e[iVar3 * 4 + -0x17] = 0.0;
  }
  else if (uVar5 == 0xff) {
    fVar6 = *(float *)((int)&ene_wrk.field0_0x0.m_aData[0].mbox + iVar4 + 0x54);
    ene_wrk.field0_0x0.m_aData[0].dist_p_e[iVar3 * 4 + -0x17] = 0.0;
    ene_wrk.field0_0x0.m_aData[0].dist_p_e[iVar3 * 4 + -0x19] = fVar6;
  }
  else {
    p0 = (float *)((int)&ene_wrk.field0_0x0.m_aData[0].mbox + iVar4 + 0x10);
    if (uVar5 == 0xfe) {
      tv[1] = plyr_wrk.cmn_wrk.headpos[1];
      GetTrgtRot__FPCfT0Pfi(p0,tv,ene_wrk.field0_0x0.m_aData[0].dist_p_e + iVar3 * 4 + -0x1a,3);
      *(float *)((int)&ene_wrk.field0_0x0.m_aData[0].mbox + iVar4 + 0x50) =
           ene_wrk.field0_0x0.m_aData[0].dist_p_e[iVar3 * 4 + -0x1a];
      iVar4 = GetPALMode__Fv();
      if (iVar4 == 0) {
        ene_wrk.field0_0x0.m_aData[0].dist_p_e[iVar3 * 4 + -0x17] = DAT_003ee1c0;
      }
      else {
        ene_wrk.field0_0x0.m_aData[0].dist_p_e[iVar3 * 4 + -0x17] = DAT_003ee1bc;
      }
    }
    else {
      GetTrgtRot__FPCfT0Pfi(p0,tv,ene_wrk.field0_0x0.m_aData[0].dist_p_e + iVar3 * 4 + -0x1a,3);
      *(float *)((int)&ene_wrk.field0_0x0.m_aData[0].mbox + iVar4 + 0x50) =
           ene_wrk.field0_0x0.m_aData[0].dist_p_e[iVar3 * 4 + -0x1a];
      iVar4 = GetPALMode__Fv();
      fVar6 = DAT_003ee1c8;
      if (iVar4 != 0) {
        fVar6 = DAT_003ee1c4;
      }
      ene_wrk.field0_0x0.m_aData[0].dist_p_e[iVar3 * 4 + -0x17] =
           (fVar6 / (float)uVar5) * ene_wrk.field0_0x0.m_aData[0].dist_p_e_o[iVar3 * 4 + 5];
    }
  }
  alg->pos_no = '\0';
  alg->wait_time = 0.0;
  return;
}

void EJobM09(ENEALG_WRK *alg) {
	float tv[4];
	
  uchar *puVar1;
  float tv [4];
  
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  _fixed_array_verifyrange__H1Z7ENE_WRK_UiUi_PX01(alg->idx,10);
                    /* end of inlined section */
  puVar1 = (alg->comm_add).pu8;
  (alg->comm_add).pu8 = puVar1 + 2;
  (alg->comm_add).pu8 = puVar1 + 3;
  alg->pos_no = '\0';
  alg->wait_time = 0.0;
  return;
}

void EJobM0A(ENEALG_WRK *alg) {
	int rot;
	MOVE_BOX *pcmw;
	MOVE_BOX *mb;
	
  byte bVar1;
  byte *pbVar2;
  PLCMN_WRK *pPVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  float fVar7;
  
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  bVar1 = alg->idx;
  _fixed_array_verifyrange__H1Z7ENE_WRK_UiUi_PX01(bVar1,10);
                    /* end of inlined section */
  pbVar2 = (alg->comm_add).pu8;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  iVar4 = (uint)bVar1 * 0x48 + (uint)bVar1;
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  iVar5 = iVar4 * 0x10;
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  uVar6 = (uint)*pbVar2 + (uint)pbVar2[1] * 0x100 & 0xffff;
  pPVar3 = (PLCMN_WRK *)ene_wrk.field0_0x0.m_aData[0].dist_p_e_o[iVar4 * 4 + 8];
  (alg->comm_add).pu8 = pbVar2 + 2;
  if (uVar6 == 0x5dd) {
    fVar7 = GetTrgtRotY__FPCfT0((float *)((int)&ene_wrk.field0_0x0.m_aData[0].mbox + iVar5 + 0x10),
                                (pPVar3->mbox).pos);
    fVar7 = fVar7 + DAT_003ee1d0;
LAB_00177d80:
    *(float *)((int)&ene_wrk.field0_0x0.m_aData[0].mbox + iVar5 + 0x54) = fVar7;
    RotLimitChk__FPf((float *)((int)&ene_wrk.field0_0x0.m_aData[0].mbox + iVar5 + 0x54));
    alg->pos_no = '\0';
    goto LAB_00177dfc;
  }
  if (uVar6 < 0x5de) {
    if (uVar6 == 1000) {
LAB_00177db8:
      fVar7 = GetTrgtRotY__FPCfT0((float *)((int)&ene_wrk.field0_0x0.m_aData[0].mbox + iVar5 + 0x10)
                                  ,(pPVar3->mbox).pos);
      *(float *)((int)&ene_wrk.field0_0x0.m_aData[0].mbox + iVar5 + 0x54) = fVar7;
    }
    else {
      if (uVar6 == 0x5dc) {
        fVar7 = GetTrgtRotY__FPCfT0((float *)((int)&ene_wrk.field0_0x0.m_aData[0].mbox +
                                             iVar5 + 0x10),(pPVar3->mbox).pos);
        fVar7 = fVar7 - DAT_003ee1cc;
        goto LAB_00177d80;
      }
LAB_00177dc8:
      *(float *)((int)&ene_wrk.field0_0x0.m_aData[0].mbox + iVar5 + 0x54) =
           ((float)uVar6 / 180.0) * DAT_003ee1d8;
      RotLimitChk__FPf((float *)((int)&ene_wrk.field0_0x0.m_aData[0].mbox + iVar5 + 0x54));
    }
  }
  else {
    if (uVar6 != 2000) {
      if (uVar6 != 3000) goto LAB_00177dc8;
      pPVar3 = &plyr_wrk.cmn_wrk;
      goto LAB_00177db8;
    }
    fVar7 = GetTrgtRotY__FPCfT0((float *)((int)&ene_wrk.field0_0x0.m_aData[0].mbox + iVar5 + 0x10),
                                (pPVar3->mbox).pos);
    *(float *)((int)&ene_wrk.field0_0x0.m_aData[0].mbox + iVar5 + 0x54) = fVar7 + DAT_003ee1d4;
  }
  alg->pos_no = '\0';
LAB_00177dfc:
  alg->wait_time = 0.0;
  return;
}

void EJobM0B(ENEALG_WRK *alg) {
	float rot[4];
	int no;
	ENE_WRK *ew;
	MOVE_BOX *pcmw;
	MOVE_BOX *mb;
	static u_char turn[10];
	static u_char time[10];
	
  byte bVar1;
  byte bVar2;
  uchar *puVar3;
  uchar uVar4;
  int iVar5;
  int iVar6;
  P_INT *pPVar7;
  uint uVar8;
  float *p0;
  float *p1;
  float fVar9;
  float rot [4];
  
  memset(rot,0,0x10);
  bVar1 = alg->idx;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  _fixed_array_verifyrange__H1Z7ENE_WRK_UiUi_PX01(bVar1,10);
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  uVar8 = (uint)bVar1;
  iVar5 = (uint)bVar1 * 0x48 + uVar8;
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  iVar6 = iVar5 * 0x10;
                    /* end of inlined section */
  fVar9 = ene_wrk.field0_0x0.m_aData[0].dist_p_e_o[iVar5 * 4 + 8];
  if (4 < alg->pos_no) {
    return;
  }
  switch(alg->pos_no) {
  case '\0':
    pPVar7 = &alg->comm_add;
    puVar3 = pPVar7->pu8;
    p1 = (float *)((int)fVar9 + 0x10);
    (&turn_1279)[uVar8] = *puVar3;
    p0 = (float *)((int)&ene_wrk.field0_0x0.m_aData[0].mbox + iVar6 + 0x10);
    pPVar7->pu8 = puVar3 + 1;
    (&time_1280)[uVar8] = puVar3[1];
    pPVar7->pu8 = puVar3 + 2;
    bVar2 = (&time_1280)[uVar8];
    *(ulong *)(ene_wrk.field0_0x0.m_aData[0].dist_p_e + iVar5 * 4 + -0x12) =
         *(ulong *)(ene_wrk.field0_0x0.m_aData[0].dist_p_e + iVar5 * 4 + -0x12) | 0x40000;
    iVar5 = GetRndSP__FUiUi((uint)bVar2,0x1e);
    alg->loop[0] = (float)iVar5;
    GetTrgtRot__FPCfT0Pfi(p0,p1,rot,1);
    if ((&turn_1279)[uVar8] == '\x02') {
      fVar9 = GetTrgtRotY__FPCfT0(p0,p1);
      rot[1] = fVar9 + DAT_003ee1dc;
      RotLimitChk__FPf(rot + 1);
    }
    else {
      iVar5 = GetRndSP__FUiUi(0,0xe);
      rot[1] = ((float)iVar5 - 7.0) * DAT_003ee1e0;
      RotLimitChk__FPf(rot + 1);
      if (0.0 < rot[1]) {
        rot[1] = rot[1] + DAT_003ee1e4;
      }
      else {
        rot[1] = rot[1] - DAT_003ee1e8;
      }
    }
    _SetVector__FPfffff((float *)((int)&ene_wrk.field0_0x0.m_aData[0].mbox + iVar6 + 0x70),0.0,0.0,
                        20.0,0.0);
                    /* end of inlined section */
LAB_00178108:
    RotFvector__FPfT0(rot,(float *)((int)&ene_wrk.field0_0x0.m_aData[0].mbox + iVar6 + 0x70));
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Z7ENE_WRK_UiUi_PX01(bVar1,10);
                    /* end of inlined section */
    alg->wait_time = 1.0;
    alg->pos_no = alg->pos_no + '\x01';
    return;
  case '\x01':
    fVar9 = alg->loop[0];
    if (0.0 < fVar9) {
LAB_00178168:
      alg->loop[0] = fVar9 - 1.0;
      if (fVar9 - 1.0 <= 30.0) {
        sceVu0ScaleVector(DAT_003ee1f8,iVar6 + 0x2fe2f0,iVar6 + 0x2fe2f0);
      }
      alg->wait_time = 1.0;
      return;
    }
    if ((&turn_1279)[bVar1] == '\x02') {
      uVar4 = '\x04';
      goto LAB_0017815c;
    }
    uVar4 = alg->pos_no;
    break;
  case '\x02':
    if (((&turn_1279)[uVar8] == '\0') || (iVar5 = GetRndSP__FUiUi(0,100), 0x28 < iVar5)) {
      GetTrgtRot__FPCfT0Pfi
                ((float *)((int)&ene_wrk.field0_0x0.m_aData[0].mbox + iVar6 + 0x10),
                 (float *)((int)fVar9 + 0x10),rot,1);
      iVar5 = GetRndSP__FUiUi((uint)(byte)(&time_1280)[bVar1],0x1e);
      alg->loop[0] = (float)iVar5;
      iVar5 = GetRndSP__FUiUi(0,0xe);
      rot[1] = (float)iVar5 * DAT_003ee1ec;
      RotLimitChk__FPf(rot + 1);
      if (0.0 < rot[1]) {
        rot[1] = rot[1] + DAT_003ee1f0;
      }
      else {
        rot[1] = rot[1] - DAT_003ee1f4;
      }
      *(undefined4 *)((int)&ene_wrk.field0_0x0.m_aData[0].mbox + iVar6 + 0x78) = 0x41a00000;
      goto LAB_00178108;
    }
    uVar4 = '\x04';
    goto LAB_0017815c;
  case '\x03':
    fVar9 = alg->loop[0];
    if (0.0 < fVar9) goto LAB_00178168;
    uVar4 = alg->pos_no;
    break;
  case '\x04':
    fVar9 = ene_wrk.field0_0x0.m_aData[0].dist_p_e[iVar5 * 4 + -2];
    *(ulong *)(ene_wrk.field0_0x0.m_aData[0].dist_p_e + iVar5 * 4 + -0x12) =
         *(ulong *)(ene_wrk.field0_0x0.m_aData[0].dist_p_e + iVar5 * 4 + -0x12) & 0xfffffffffffbffff
    ;
    _SetVector__FPfffff((float *)((int)&ene_wrk.field0_0x0.m_aData[0].mbox + iVar6 + 0x70),0.0,0.0,
                        (float)(uint)*(byte *)((int)fVar9 + 0x5a),0.0);
    alg->wait_time = 0.0;
    alg->pos_no = '\0';
    return;
  }
  uVar4 = uVar4 + '\x01';
LAB_0017815c:
  alg->pos_no = uVar4;
  alg->wait_time = 1.0;
  return;
}

void EJobM0C(ENEALG_WRK *alg) {
  return;
}

void EJobM0D(ENEALG_WRK *alg) {
  return;
}

void EJobM0E(ENEALG_WRK *alg) {
	float tv[4];
	float tr[4];
	u_char type;
	u_char dmin;
	u_char wmin;
	ENE_WRK *ew;
	MOVE_BOX *pcmw;
	MOVE_BOX *mb;
	static u_char tr_rate_save[10];
	
  byte bVar1;
  uchar uVar2;
  byte bVar3;
  byte bVar4;
  undefined uVar5;
  float fVar6;
  uchar *puVar7;
  int iVar8;
  int iVar9;
  P_INT *pPVar10;
  undefined4 uVar11;
  float y;
  float tv [4];
  float tr [4];
  
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  bVar1 = alg->idx;
  _fixed_array_verifyrange__H1Z7ENE_WRK_UiUi_PX01(bVar1,10);
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  iVar8 = (uint)bVar1 * 0x48 + (uint)bVar1;
  iVar9 = iVar8 * 0x10;
                    /* end of inlined section */
  fVar6 = ene_wrk.field0_0x0.m_aData[0].dist_p_e_o[iVar8 * 4 + 8];
  if (alg->pos_no != '\0') {
    if (alg->pos_no != '\x01') {
      return;
    }
    *(undefined *)((int)ene_wrk.field0_0x0.m_aData[0].dist_in_tm + iVar9 + 0x1b) =
         (&tr_rate_save_1290)[alg->idx];
    alg->pos_no = '\0';
    goto LAB_00178540;
  }
  pPVar10 = &alg->comm_add;
  puVar7 = pPVar10->pu8;
  uVar2 = *puVar7;
  pPVar10->pu8 = puVar7 + 1;
  bVar1 = puVar7[1];
  pPVar10->pu8 = puVar7 + 2;
  bVar3 = puVar7[2];
  pPVar10->pu8 = puVar7 + 3;
  bVar4 = puVar7[3];
  pPVar10->pu8 = puVar7 + 5;
  if (bVar3 == bVar1) {
    _SetVector__FPfffff(tv,0.0,0.0,(float)(uint)bVar3 * 50.0,0.0);
  }
  else {
    iVar8 = GetRndSP__FUiUi((uint)bVar1,(uint)bVar3 - (uint)bVar1);
    _SetVector__FPfffff(tv,0.0,0.0,(float)iVar8 * 50.0,0.0);
  }
  switch(uVar2) {
  case '\0':
    y = *(float *)((int)fVar6 + 0x54) + DAT_003ee1fc;
    goto LAB_001783d8;
  case '\x01':
    iVar8 = GetRndSP__FUiUi(0,0x24);
    _SetVector__FPfffff(tr,0.0,(float)iVar8 * DAT_003ee200 - DAT_003ee204,0.0,0.0);
    break;
  case '\x02':
    y = *(float *)((int)fVar6 + 0x54);
LAB_001783d8:
    _SetVector__FPfffff(tr,0.0,y,0.0,0.0);
    break;
  case '\x03':
  case '\x04':
  case '\x05':
  case '\x06':
  case '\a':
  case '\b':
  case '\t':
  case '\n':
  case '\v':
    break;
  case '\f':
    iVar8 = GetRndSP__FUiUi(0,0x5a);
    _SetVector__FPfffff(tr,0.0,*(float *)((int)fVar6 + 0x54) +
                               ((float)(iVar8 + -0x2d) * DAT_003ee208) / 180.0,0.0,0.0);
    break;
  case '\r':
    iVar8 = GetRndSP__FUiUi(0,0x28);
    _SetVector__FPfffff(tr,0.0,*(float *)((int)fVar6 + 0x54) +
                               ((float)(iVar8 + -0x14) * DAT_003ee20c) / 180.0,0.0,0.0);
  }
  RotLimitChk__FPf(tr + 1);
  RotFvector__FPfT0(tr,tv);
  sceVu0AddVector(tv,(int)fVar6 + 0x10,tv);
  uVar11 = *(undefined4 *)((int)&ene_wrk.field0_0x0.m_aData[0].mbox + iVar9 + 0x14);
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/g3dxVu0.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/g3dxVu0.h */
  *(float *)((int)&ene_wrk.field0_0x0.m_aData[0].mbox + iVar9 + 0x10) = tv[0];
  *(undefined4 *)((int)&ene_wrk.field0_0x0.m_aData[0].mbox + iVar9 + 0x14) = uVar11;
  *(float *)((int)&ene_wrk.field0_0x0.m_aData[0].mbox + iVar9 + 0x18) = tv[2];
  *(float *)((int)&ene_wrk.field0_0x0.m_aData[0].mbox + iVar9 + 0x1c) = tv[3];
                    /* end of inlined section */
  if (bVar4 == 0) {
    alg->pos_no = '\0';
LAB_00178540:
    alg->wait_time = 0.0;
  }
  else {
    uVar5 = *(undefined *)((int)ene_wrk.field0_0x0.m_aData[0].dist_in_tm + iVar9 + 0x1b);
    bVar1 = alg->idx;
    *(undefined *)((int)ene_wrk.field0_0x0.m_aData[0].dist_in_tm + iVar9 + 0x1b) = 0;
    (&tr_rate_save_1290)[bVar1] = uVar5;
    alg->wait_time = (float)(uint)bVar4;
    alg->pos_no = alg->pos_no + '\x01';
  }
  return;
}

void EJobM0F(ENEALG_WRK *alg) {
	u_char type1;
	u_char type2;
	u_char side;
	int time;
	int time_m;
	float max_v;
	float m;
	float fr;
	static int cnt;
	MOVE_BOX *mb;
	
  byte bVar1;
  uchar uVar2;
  uchar uVar3;
  uchar uVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  uchar *puVar9;
  bool bVar10;
  int iVar11;
  uint uVar12;
  P_INT *pPVar13;
  float fVar14;
  uint uVar15;
  float fVar16;
  
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  bVar1 = alg->idx;
  _fixed_array_verifyrange__H1Z7ENE_WRK_UiUi_PX01(bVar1,10);
                    /* end of inlined section */
  pPVar13 = &alg->comm_add;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  puVar9 = pPVar13->pu8;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  uVar2 = *puVar9;
  pPVar13->pu8 = puVar9 + 1;
  uVar3 = puVar9[1];
  pPVar13->pu8 = puVar9 + 2;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  uVar4 = puVar9[2];
  pPVar13->pu8 = puVar9 + 3;
  bVar5 = puVar9[4];
  bVar6 = puVar9[3];
  pPVar13->pu8 = puVar9 + 5;
  bVar7 = puVar9[6];
  bVar8 = puVar9[5];
  fVar16 = (float)((uint)bVar6 + (uint)bVar5 * 0x100 & 0xffff);
  pPVar13->pu8 = puVar9 + 7;
  uVar15 = (uint)bVar8 + (uint)bVar7 * 0x100 & 0xffff;
  iVar11 = GetPALMode__Fv();
  if (iVar11 == 0) {
    fVar14 = 1.0;
  }
  else {
    uVar15 = (uint)((float)uVar15 / DAT_003ee210);
    fVar14 = DAT_003ee210;
  }
  if (uVar3 == '\x01') {
    if (uVar2 == '\0') {
      fVar16 = fVar16 * fVar14;
    }
    else {
      fVar16 = (fVar16 * fVar14 * (float)(cnt_1294 * cnt_1294)) / (float)(uVar15 * uVar15);
    }
    if (uVar2 == '\x01') {
      uVar12 = cnt_1294 + 1;
      bVar10 = (int)cnt_1294 < (int)uVar15;
      cnt_1294 = uVar15;
      if (bVar10) {
        cnt_1294 = uVar12;
      }
    }
    else if (uVar2 == '\x02') {
      bVar10 = (int)cnt_1294 < 1;
      cnt_1294 = cnt_1294 - 1;
      if (bVar10) {
        cnt_1294 = 0;
      }
    }
    else {
      cnt_1294 = 0;
    }
    if (uVar4 != '\0') {
      fVar16 = -fVar16;
    }
    _SetVector__FPfffff((float *)((int)&ene_wrk.field0_0x0.m_aData[0].mbox +
                                 ((uint)bVar1 * 0x48 + (uint)bVar1) * 0x10 + 0x70),0.0,0.0,fVar16,
                        0.0);
    alg->wait_time = 0.0;
    alg->pos_no = '\0';
  }
  else {
    if (uVar2 == '\x01') {
      cnt_1294 = 0;
    }
    else {
      cnt_1294 = 0;
      if (uVar2 == '\x02') {
        cnt_1294 = uVar15;
      }
    }
    alg->pos_no = '\0';
    alg->wait_time = 0.0;
  }
  return;
}

void EJobM10(ENEALG_WRK *alg) {
	float spd;
	float r;
	ENE_WRK *ew;
	MOVE_BOX *mb;
	
  byte bVar1;
  uchar uVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  uchar *puVar6;
  float fVar7;
  int iVar8;
  uint uVar9;
  P_INT *pPVar10;
  
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  bVar1 = alg->idx;
  _fixed_array_verifyrange__H1Z7ENE_WRK_UiUi_PX01(bVar1,10);
                    /* end of inlined section */
  pPVar10 = &alg->comm_add;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  puVar6 = pPVar10->pu8;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  iVar8 = (uint)bVar1 * 0x48 + (uint)bVar1;
                    /* end of inlined section */
  uVar2 = *puVar6;
  pPVar10->pu8 = puVar6 + 1;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  bVar1 = puVar6[1];
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  bVar3 = puVar6[2];
  pPVar10->pu8 = puVar6 + 3;
  bVar4 = puVar6[4];
  bVar5 = puVar6[3];
  uVar9 = (uint)bVar1 + (uint)bVar3 * 0x100 & 0xffff;
  pPVar10->pu8 = puVar6 + 5;
  fVar7 = ene_wrk.field0_0x0.m_aData[0].dist_p_e[iVar8 * 4 + -2];
  if (*(ushort *)((int)fVar7 + 0x52) == 0) {
    trap(7);
  }
  if (uVar2 == '\0') {
    bVar1 = *(byte *)((int)fVar7 + 0x5a);
  }
  else {
    bVar1 = *(byte *)((int)fVar7 + 0x5b);
  }
  _SetVector__FPfffff((float *)((int)&ene_wrk.field0_0x0.m_aData[0].mbox + iVar8 * 0x10 + 0x70),0.0,
                      0.0,(float)(uint)bVar1 *
                          ((float)((int)((((uint)bVar5 + (uint)bVar4 * 0x100 & 0xffff) - uVar9) *
                                        (uint)*(ushort *)
                                               (ene_wrk.field0_0x0.m_aData[0].dist_p_e +
                                               iVar8 * 4 + -0xc)) /
                                   (int)(uint)*(ushort *)((int)fVar7 + 0x52) + uVar9) / 100.0) *
                          ene_wrk.field0_0x0.m_aData[0].dist_p_e_o[iVar8 * 4 + 5],0.0);
  alg->wait_time = 0.0;
  alg->pos_no = '\0';
  return;
}

void EJobM11(ENEALG_WRK *alg) {
	float tv[4];
	float rv[4];
	float rot;
	u_char side;
	float r;
	float f;
	ENE_WRK *ew;
	MOVE_BOX *pcmw;
	MOVE_BOX *mb;
	
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte *pbVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  P_INT *pPVar9;
  float *p1;
  float *p0;
  float fVar10;
  float fVar11;
  float tv [4];
  float rv [4];
  
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  fVar11 = 0.0;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  bVar1 = alg->idx;
  _fixed_array_verifyrange__H1Z7ENE_WRK_UiUi_PX01(bVar1,10);
                    /* end of inlined section */
  pPVar9 = &alg->comm_add;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  pbVar5 = pPVar9->pu8;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  iVar7 = (uint)bVar1 * 0x48 + (uint)bVar1;
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  iVar8 = iVar7 * 0x10;
                    /* end of inlined section */
  bVar1 = *pbVar5;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  fVar10 = ene_wrk.field0_0x0.m_aData[0].dist_p_e_o[iVar7 * 4 + 8];
  pPVar9->pu8 = pbVar5 + 1;
  p0 = (float *)((int)fVar10 + 0x10);
  p1 = (float *)((int)&ene_wrk.field0_0x0.m_aData[0].mbox + iVar8 + 0x10);
  bVar2 = pbVar5[1];
  pPVar9->pu8 = pbVar5 + 2;
  bVar3 = pbVar5[3];
  bVar4 = pbVar5[2];
  pPVar9->pu8 = pbVar5 + 4;
  _ClearVector__FPf(tv);
  fVar10 = GetDistV__FPCfT0(p0,p1);
  if (bVar1 != 0) {
    fVar11 = 10.0 / (float)(uint)bVar1;
  }
  tv[2] = fVar10 - (float)(uint)*(byte *)((int)ene_wrk.field0_0x0.m_aData[0].dist_p_e
                                               [iVar7 * 4 + -2] + 0x5a) * fVar11;
  GetTrgtRot__FPCfT0Pfi(p0,p1,rv,2);
  fVar10 = ((float)((uint)bVar4 + (uint)bVar3 * 0x100 & 0xffff) * DAT_003ee214) / 1800.0;
  if (bVar2 == 0) {
    rv[1] = rv[1] - fVar10;
  }
  else {
    rv[1] = rv[1] + fVar10;
  }
  RotLimitChk__FPf(rv + 1);
  RotFvector__FPfT0(rv,tv);
  sceVu0AddVector(tv,tv,p0);
  sceVu0SubVector(tv,tv,iVar8 + 0x2fe290);
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/g3dxVu0.h */
                    /* end of inlined section */
  tv[1] = 0.0;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/g3dxVu0.h */
  *(float *)((int)&ene_wrk.field0_0x0.m_aData[0].mbox + iVar8 + 0x70) = tv[0];
  *(undefined4 *)((int)&ene_wrk.field0_0x0.m_aData[0].mbox + iVar8 + 0x74) = 0;
  *(float *)((int)&ene_wrk.field0_0x0.m_aData[0].mbox + iVar8 + 0x78) = tv[2];
  *(float *)((int)&ene_wrk.field0_0x0.m_aData[0].mbox + iVar8 + 0x7c) = tv[3];
                    /* end of inlined section */
  sceVu0AddVector(tv,tv,iVar8 + 0x2fe290);
  tv[1] = (tv[1] + ene_wrk.field0_0x0.m_aData[0].adjp[iVar7 * 4 + 1]) -
          *(float *)((int)&ene_wrk.field0_0x0.m_aData[0].mbox + iVar8 + 0x14);
  if ((1.0 < ABS(tv[1])) && (bVar6 = 0.0 <= tv[1], tv[1] = -1.0, bVar6)) {
    tv[1] = 1.0;
  }
  *(float *)((int)&ene_wrk.field0_0x0.m_aData[0].mbox + iVar8 + 0x74) = tv[1];
  alg->pos_no = '\0';
  alg->wait_time = 0.0;
  return;
}

void EJobM12(ENEALG_WRK *alg) {
	ENE_WRK *ew;
	float mv[4];
	short int x;
	short int y;
	short int z;
	int i;
	int n;
	
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  short sVar7;
  byte *pbVar8;
  undefined8 uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  float fVar13;
  float fVar14;
  undefined4 *puVar15;
  float *rot;
  int iVar16;
  int iVar17;
  float mv [4];
  ushort x;
  
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  bVar1 = alg->idx;
  _fixed_array_verifyrange__H1Z7ENE_WRK_UiUi_PX01(bVar1,10);
                    /* end of inlined section */
  pbVar8 = (alg->comm_add).pu8;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  bVar2 = *pbVar8;
  bVar3 = pbVar8[1];
  (alg->comm_add).pu8 = pbVar8 + 2;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  iVar11 = (uint)bVar1 * 0x48 + (uint)bVar1;
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  iVar12 = iVar11 * 0x10;
                    /* end of inlined section */
  bVar1 = pbVar8[3];
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  bVar4 = pbVar8[2];
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  (alg->comm_add).pu8 = pbVar8 + 4;
  bVar5 = pbVar8[5];
  bVar6 = pbVar8[4];
  (alg->comm_add).pu8 = pbVar8 + 6;
  if (*(char *)(ene_wrk.field0_0x0.m_aData[0].dist_in_tm + iVar11 * 8 + 0xf) != '\x02') {
    puVar15 = (undefined4 *)((int)&ene_wrk.field0_0x0.m_aData[0].mbox + iVar12 + 0x10);
    rot = (float *)((int)&ene_wrk.field0_0x0.m_aData[0].mbox + iVar12 + 0x50);
    iVar17 = 0x60;
    iVar16 = 2;
    do {
      sVar7 = *(short *)((int)ene_wrk.field0_0x0.m_aData[0].dist_p_e[iVar11 * 4 + -2] + iVar17 + 0xe
                        );
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* end of inlined section */
      if ((-1 < sVar7) &&
         (iVar10 = SearchEneWrkNo__Fii((uint)*(byte *)(ene_wrk.field0_0x0.m_aData[0].dist_in_tm +
                                                      iVar11 * 8 + 0xf),(int)sVar7), -1 < iVar10)) {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
        _fixed_array_verifyrange__H1Z7ENE_WRK_UiUi_PX01(iVar10,10);
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
        if ((ene_wrk.field0_0x0.m_aData[iVar10].status == 4) &&
           (ene_wrk.field0_0x0.m_aData[iVar10].st.hp != 0)) {
          uVar9 = *(undefined8 *)ene_wrk.field0_0x0.m_aData[iVar10].mbox.pos;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/g3dxVu0.h */
          fVar13 = ene_wrk.field0_0x0.m_aData[iVar10].mbox.pos[2];
          fVar14 = ene_wrk.field0_0x0.m_aData[iVar10].mbox.pos[3];
          *puVar15 = (int)uVar9;
          *(int *)((int)&ene_wrk.field0_0x0.m_aData[0].mbox + iVar12 + 0x14) =
               (int)((ulong)uVar9 >> 0x20);
          *(float *)((int)&ene_wrk.field0_0x0.m_aData[0].mbox + iVar12 + 0x18) = fVar13;
          *(float *)((int)&ene_wrk.field0_0x0.m_aData[0].mbox + iVar12 + 0x1c) = fVar14;
          uVar9 = *(undefined8 *)ene_wrk.field0_0x0.m_aData[iVar10].mbox.rot;
          fVar13 = ene_wrk.field0_0x0.m_aData[iVar10].mbox.rot[2];
          fVar14 = ene_wrk.field0_0x0.m_aData[iVar10].mbox.rot[3];
          *rot = (float)uVar9;
          *(int *)((int)&ene_wrk.field0_0x0.m_aData[0].mbox + iVar12 + 0x54) =
               (int)((ulong)uVar9 >> 0x20);
          *(float *)((int)&ene_wrk.field0_0x0.m_aData[0].mbox + iVar12 + 0x58) = fVar13;
          *(float *)((int)&ene_wrk.field0_0x0.m_aData[0].mbox + iVar12 + 0x5c) = fVar14;
                    /* end of inlined section */
          _SetVector__FPfffff(mv,(float)((int)(((uint)bVar2 + (uint)bVar3 * 0x100) * 0x10000) >>
                                        0x10),
                              (float)((int)(((uint)bVar4 + (uint)bVar1 * 0x100) * 0x10000) >> 0x10),
                              (float)((int)(((uint)bVar6 + (uint)bVar5 * 0x100) * 0x10000) >> 0x10),
                              0.0);
          RotFvector__FPfT0(rot,mv);
          sceVu0AddVector(puVar15,puVar15,mv);
        }
      }
      iVar16 = iVar16 + -1;
      iVar17 = iVar17 + 2;
    } while (-1 < iVar16);
  }
  alg->pos_no = '\0';
  alg->wait_time = 0.0;
  return;
}

void EJobM13(ENEALG_WRK *alg) {
	float spd;
	u_char id;
	u_short per;
	ENE_WRK *ew;
	MOVE_BOX *mb;
	
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte *pbVar4;
  uint uVar5;
  int iVar6;
  float fVar7;
  P_INT *pPVar8;
  
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  bVar1 = alg->idx;
  _fixed_array_verifyrange__H1Z7ENE_WRK_UiUi_PX01(bVar1,10);
                    /* end of inlined section */
  pPVar8 = &alg->comm_add;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  pbVar4 = pPVar8->pu8;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  iVar6 = (uint)bVar1 * 0x48 + (uint)bVar1;
                    /* end of inlined section */
  bVar1 = *pbVar4;
  pPVar8->pu8 = pbVar4 + 1;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  bVar2 = pbVar4[2];
  bVar3 = pbVar4[1];
  pPVar8->pu8 = pbVar4 + 3;
  if (bVar1 == 1) {
    uVar5 = (uint)*(byte *)((int)ene_wrk.field0_0x0.m_aData[0].dist_p_e[iVar6 * 4 + -2] + 0x5b);
    goto LAB_00178dfc;
  }
  if (bVar1 < 2) {
    fVar7 = ene_wrk.field0_0x0.m_aData[0].dist_p_e[iVar6 * 4 + -2];
  }
  else {
    fVar7 = ene_wrk.field0_0x0.m_aData[0].dist_p_e[iVar6 * 4 + -2];
    if (bVar1 == 100) {
      uVar5 = -(uint)*(byte *)((int)fVar7 + 0x5a);
      goto LAB_00178dfc;
    }
    if (bVar1 == 0x65) {
      uVar5 = -(uint)*(byte *)((int)fVar7 + 0x5b);
      goto LAB_00178dfc;
    }
  }
  uVar5 = (uint)*(byte *)((int)fVar7 + 0x5a);
LAB_00178dfc:
  _SetVector__FPfffff((float *)((int)&ene_wrk.field0_0x0.m_aData[0].mbox + iVar6 * 0x10 + 0x70),0.0,
                      0.0,(((float)uVar5 * (float)((uint)bVar3 + (uint)bVar2 * 0x100 & 0xffff)) /
                          100.0) * ene_wrk.field0_0x0.m_aData[0].dist_p_e_o[iVar6 * 4 + 5],0.0);
  alg->wait_time = 0.0;
  alg->pos_no = '\0';
  return;
}

void EJobM14(ENEALG_WRK *alg) {
	float rot;
	
  byte bVar1;
  int iVar2;
  float rot;
  
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  bVar1 = alg->idx;
  _fixed_array_verifyrange__H1Z7ENE_WRK_UiUi_PX01(bVar1,10);
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  iVar2 = (uint)bVar1 * 0x48 + (uint)bVar1;
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  rot = ((float)(uint)*(ushort *)
                       ((int)ene_wrk.field0_0x0.m_aData[0].directionaldiffuse[iVar2 * 4 + 4] + 0x1c)
        * DAT_003ee218) / 180.0;
  RotLimitChk__FPf(&rot);
  *(float *)((int)&ene_wrk.field0_0x0.m_aData[0].mbox + iVar2 * 0x10 + 0x54) = rot;
  alg->pos_no = '\0';
  alg->wait_time = 0.0;
  return;
}

void EJobM15(ENEALG_WRK *alg) {
	u_short time;
	MOVE_BOX *mb;
	PLCMN_WRK *pcw;
	float tv[4];
	float vw[4];
	float fmin;
	float fmax;
	
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte *pbVar7;
  float fVar8;
  float fVar9;
  int iVar10;
  int iVar11;
  float fVar12;
  float tv [4];
  float vw [4];
  
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  bVar1 = alg->idx;
  _fixed_array_verifyrange__H1Z7ENE_WRK_UiUi_PX01(bVar1,10);
  fVar9 = DAT_003ee21c;
                    /* end of inlined section */
  pbVar7 = (alg->comm_add).pu8;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  iVar10 = (uint)bVar1 * 0x48 + (uint)bVar1;
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  iVar11 = iVar10 * 0x10;
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  bVar1 = *pbVar7;
  bVar2 = pbVar7[1];
  fVar8 = ene_wrk.field0_0x0.m_aData[0].dist_p_e_o[iVar10 * 4 + 8];
  (alg->comm_add).pu8 = pbVar7 + 2;
  bVar3 = pbVar7[3];
  bVar4 = pbVar7[2];
  (alg->comm_add).pu8 = pbVar7 + 4;
  bVar5 = pbVar7[5];
  bVar6 = pbVar7[4];
  (alg->comm_add).pu8 = pbVar7 + 6;
  fVar12 = ((float)((int)(((uint)bVar6 + (uint)bVar5 * 0x100) * 0x10000) >> 0x10) * fVar9) / 180.0;
  sceVu0AddVector(tv,(int)fVar8 + 0x10,iVar11 + 0x2fe050);
  GetTrgtRot__FPCfT0Pfi((float *)((int)&ene_wrk.field0_0x0.m_aData[0].mbox + iVar11 + 0x10),tv,vw,3)
  ;
  vw[1] = vw[1] - *(float *)((int)&ene_wrk.field0_0x0.m_aData[0].mbox + iVar11 + 0x54);
  RotLimitChk__FPf(vw + 1);
  if (vw[1] < ((float)((int)(((uint)bVar4 + (uint)bVar3 * 0x100) * 0x10000) >> 0x10) * fVar9) /
              180.0) {
    vw[1] = vw[1] + DAT_003ee220;
  }
  if (fVar12 < vw[1]) {
    vw[1] = vw[1] - DAT_003ee224;
  }
  ene_wrk.field0_0x0.m_aData[0].dist_p_e[iVar10 * 4 + -0x1d] =
       vw[1] / (float)((uint)bVar1 + (uint)bVar2 * 0x100 & 0xffff);
  RotLimitChk__FPf(ene_wrk.field0_0x0.m_aData[0].dist_p_e + iVar10 * 4 + -0x1d);
  alg->pos_no = '\0';
  alg->wait_time = 0.0;
  return;
}

void EJobB00(ENEALG_WRK *alg) {
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  
  pbVar3 = (alg->comm_add).pu8;
  bVar1 = pbVar3[1];
  bVar2 = *pbVar3;
  (alg->comm_add).pu8 = pbVar3 + 2;
  if (alg->loop[0] <= 0.0) {
    (alg->comm_add).wrk =
         ((long)(int)((uint)bVar2 + (uint)bVar1 * 0x100) & 0xffffU) + alg->comm_add_top;
  }
  else {
    alg->loop[0] = alg->loop[0] - 1.0;
  }
  alg->pos_no = '\0';
  alg->wait_time = 0.0;
  return;
}

void EJobB01(ENEALG_WRK *alg) {
	u_char n;
	
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte *pbVar4;
  P_INT *pPVar5;
  float fVar6;
  
  pPVar5 = &alg->comm_add;
  pbVar4 = pPVar5->pu8;
  bVar1 = *pbVar4;
  pPVar5->pu8 = pbVar4 + 1;
  bVar2 = pbVar4[1];
  bVar3 = pbVar4[2];
  pPVar5->pu8 = pbVar4 + 3;
  fVar6 = alg->loop[bVar1];
  if (fVar6 <= 0.0) {
    pPVar5->wrk = ((long)(int)((uint)bVar2 + (uint)bVar3 * 0x100) & 0xffffU) + alg->comm_add_top;
  }
  else {
    alg->loop[bVar1] = fVar6 - 1.0;
  }
  alg->pos_no = '\0';
  alg->wait_time = 0.0;
  return;
}

void EJobB02(ENEALG_WRK *alg) {
  alg->pos_no = '\0';
  alg->wait_time = 0.0;
  return;
}

void EJobB03(ENEALG_WRK *alg) {
	u_short adj[5];
	
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte *pbVar12;
  ulong uVar13;
  short adj [5];
  
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  bVar1 = alg->idx;
  _fixed_array_verifyrange__H1Z7ENE_WRK_UiUi_PX01(bVar1,10);
                    /* end of inlined section */
  pbVar12 = (alg->comm_add).pu8;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  bVar2 = pbVar12[1];
  bVar3 = *pbVar12;
  (alg->comm_add).pu8 = pbVar12 + 2;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  bVar4 = pbVar12[3];
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  bVar5 = pbVar12[2];
  (alg->comm_add).pu8 = pbVar12 + 4;
  bVar6 = pbVar12[5];
  bVar7 = pbVar12[4];
  (alg->comm_add).pu8 = pbVar12 + 6;
  bVar8 = pbVar12[7];
  bVar9 = pbVar12[6];
  (alg->comm_add).pu8 = pbVar12 + 8;
  bVar10 = pbVar12[9];
  bVar11 = pbVar12[8];
  (alg->comm_add).pu8 = pbVar12 + 10;
  switch(*(undefined2 *)
          (ene_wrk.field0_0x0.m_aData[0].dist_p_e + ((uint)bVar1 * 0x48 + (uint)bVar1) * 4 + -6)) {
  case 0:
    uVar13 = (ulong)(ushort)((ushort)bVar3 + (ushort)bVar2 * 0x100);
    break;
  case 1:
    uVar13 = (ulong)(ushort)((ushort)bVar5 + (ushort)bVar4 * 0x100);
    break;
  case 2:
    uVar13 = (ulong)(ushort)((ushort)bVar7 + (ushort)bVar6 * 0x100);
    break;
  case 3:
    uVar13 = (ulong)(ushort)((ushort)bVar9 + (ushort)bVar8 * 0x100);
    break;
  default:
    uVar13 = (ulong)(ushort)((ushort)bVar11 + (ushort)bVar10 * 0x100);
  }
  (alg->comm_add).wrk = alg->comm_add_top + uVar13;
  alg->pos_no = '\0';
  alg->wait_time = 0.0;
  return;
}

void EJobB04(ENEALG_WRK *alg) {
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
  alg->wait_time = 0.0;
  return;
}

void EJobB05(ENEALG_WRK *alg) {
	ENE_WRK *ew;
	
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  int iVar4;
  
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  bVar1 = alg->idx;
  _fixed_array_verifyrange__H1Z7ENE_WRK_UiUi_PX01(bVar1,10);
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  pbVar3 = (alg->comm_add).pu8;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  iVar4 = (uint)bVar1 * 0x48 + (uint)bVar1;
                    /* end of inlined section */
  bVar1 = *pbVar3;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  bVar2 = pbVar3[1];
  (alg->comm_add).pu8 = pbVar3 + 2;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  if (ene_wrk.field0_0x0.m_aData[0].fp[iVar4 * 8 + -7] == 0) {
    (alg->comm_add).wrk =
         ((long)(int)((uint)bVar1 + (uint)bVar2 * 0x100) & 0xffffU) + alg->comm_add_top;
  }
  else {
    if (*(char *)(ene_wrk.field0_0x0.m_aData[0].dist_in_tm + iVar4 * 8 + 9) != '\x01') {
      alg->pos_no = '\0';
      goto LAB_00179460;
    }
    *(ulong *)(ene_wrk.field0_0x0.m_aData[0].dist_p_e + iVar4 * 4 + -0x12) =
         *(ulong *)(ene_wrk.field0_0x0.m_aData[0].dist_p_e + iVar4 * 4 + -0x12) & 0xfffffffffef7ffff
         | 0x2000;
  }
  alg->pos_no = '\0';
LAB_00179460:
  alg->wait_time = 0.0;
  return;
}

void EJobB06(ENEALG_WRK *alg) {
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte *pbVar4;
  
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  bVar1 = alg->idx;
  _fixed_array_verifyrange__H1Z7ENE_WRK_UiUi_PX01(bVar1,10);
                    /* end of inlined section */
  pbVar4 = (alg->comm_add).pu8;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  bVar2 = *pbVar4;
  bVar3 = pbVar4[1];
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  (alg->comm_add).pu8 = pbVar4 + 2;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  if ((*(ulong *)(ene_wrk.field0_0x0.m_aData[0].dist_p_e +
                 ((uint)bVar1 * 0x48 + (uint)bVar1) * 4 + -0x12) & 0x200000000) != 0) {
    (alg->comm_add).wrk =
         ((long)(int)((uint)bVar2 + (uint)bVar3 * 0x100) & 0xffffU) + alg->comm_add_top;
  }
  alg->pos_no = '\0';
  alg->wait_time = 0.0;
  return;
}

void EJobB07(ENEALG_WRK *alg) {
	u_short per;
	u_short adj;
	ENE_WRK *ew;
	
  byte bVar1;
  uchar uVar2;
  byte bVar3;
  byte bVar4;
  uchar *puVar5;
  long lVar6;
  int iVar7;
  P_INT *pPVar8;
  
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  bVar1 = alg->idx;
  _fixed_array_verifyrange__H1Z7ENE_WRK_UiUi_PX01(bVar1,10);
                    /* end of inlined section */
  pPVar8 = &alg->comm_add;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  puVar5 = pPVar8->pu8;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  uVar2 = *puVar5;
  pPVar8->pu8 = puVar5 + 1;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  iVar7 = (uint)bVar1 * 0x48 + (uint)bVar1;
                    /* end of inlined section */
  bVar1 = puVar5[1];
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  pPVar8->pu8 = puVar5 + 2;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  bVar3 = puVar5[3];
  bVar4 = puVar5[2];
  pPVar8->pu8 = puVar5 + 4;
  if (uVar2 == '\0') {
    if (((uint)*(ushort *)((int)ene_wrk.field0_0x0.m_aData[0].dist_p_e[iVar7 * 4 + -2] + 0x52) *
        (uint)bVar1) / 100 <
        (uint)*(ushort *)(ene_wrk.field0_0x0.m_aData[0].dist_p_e + iVar7 * 4 + -0xc)) {
      alg->pos_no = '\0';
      goto LAB_0017961c;
    }
    lVar6 = alg->comm_add_top;
  }
  else {
    if ((uint)*(ushort *)(ene_wrk.field0_0x0.m_aData[0].dist_p_e + iVar7 * 4 + -0xc) <
        ((uint)*(ushort *)((int)ene_wrk.field0_0x0.m_aData[0].dist_p_e[iVar7 * 4 + -2] + 0x52) *
        (uint)bVar1) / 100) {
      alg->pos_no = '\0';
      goto LAB_0017961c;
    }
    lVar6 = alg->comm_add_top;
  }
  pPVar8->wrk = ((long)(int)((uint)bVar4 + (uint)bVar3 * 0x100) & 0xffffU) + lVar6;
  alg->pos_no = '\0';
LAB_0017961c:
  alg->wait_time = 0.0;
  return;
}

void EJobB08(ENEALG_WRK *alg) {
	u_short dist;
	u_short adj;
	MOVE_BOX *pcmw;
	
  byte bVar1;
  byte bVar2;
  uchar uVar3;
  byte bVar4;
  byte bVar5;
  uchar *puVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  P_INT *pPVar10;
  float fVar11;
  
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  pPVar10 = &alg->comm_add;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  bVar1 = alg->idx;
  _fixed_array_verifyrange__H1Z7ENE_WRK_UiUi_PX01(bVar1,10);
  bVar2 = alg->idx;
  fVar11 = ene_wrk.field0_0x0.m_aData[0].dist_p_e_o[((uint)bVar1 * 0x48 + (uint)bVar1) * 4 + 8];
  _fixed_array_verifyrange__H1Z7ENE_WRK_UiUi_PX01(bVar2,10);
                    /* end of inlined section */
  puVar6 = pPVar10->pu8;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  uVar3 = *puVar6;
  pPVar10->pu8 = puVar6 + 1;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  bVar1 = puVar6[1];
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  bVar4 = puVar6[2];
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  iVar8 = ((uint)bVar2 * 0x48 + (uint)bVar2) * 0x10;
                    /* end of inlined section */
  pPVar10->pu8 = puVar6 + 3;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  bVar2 = puVar6[4];
  bVar5 = puVar6[3];
  uVar9 = (uint)bVar1 + (uint)bVar4 * 0x100 & 0xffff;
  pPVar10->pu8 = puVar6 + 5;
  if (uVar3 == '\0') {
    fVar11 = GetDistV__FPCfT0((float *)((int)fVar11 + 0x10),
                              (float *)((int)&ene_wrk.field0_0x0.m_aData[0].mbox + iVar8 + 0x10));
    bVar7 = fVar11 < (float)uVar9;
  }
  else {
    fVar11 = GetDistV__FPCfT0((float *)((int)fVar11 + 0x10),
                              (float *)((int)&ene_wrk.field0_0x0.m_aData[0].mbox + iVar8 + 0x10));
    bVar7 = (float)uVar9 <= fVar11;
  }
  if (bVar7) {
    pPVar10->wrk = ((long)(int)((uint)bVar5 + (uint)bVar2 * 0x100) & 0xffffU) + alg->comm_add_top;
    alg->pos_no = '\0';
  }
  else {
    alg->pos_no = '\0';
  }
  alg->wait_time = 0.0;
  return;
}

void EJobB09(ENEALG_WRK *alg) {
	char dir;
	u_short adj;
	float tv[4];
	MOVE_BOX *mb;
	PLCMN_WRK *pcw;
	
  uchar uVar1;
  byte bVar2;
  byte bVar3;
  uchar *puVar4;
  float fVar5;
  int iVar6;
  int iVar7;
  P_INT *pPVar8;
  ulong uVar9;
  float tv [4];
  
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  pPVar8 = &alg->comm_add;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  bVar2 = alg->idx;
  _fixed_array_verifyrange__H1Z7ENE_WRK_UiUi_PX01(bVar2,10);
                    /* end of inlined section */
  puVar4 = pPVar8->pu8;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  iVar6 = (uint)bVar2 * 0x48 + (uint)bVar2;
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  iVar7 = iVar6 * 0x10;
                    /* end of inlined section */
  uVar1 = *puVar4;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  fVar5 = ene_wrk.field0_0x0.m_aData[0].dist_p_e_o[iVar6 * 4 + 8];
  pPVar8->pu8 = puVar4 + 1;
  bVar2 = puVar4[2];
  bVar3 = puVar4[1];
  pPVar8->pu8 = puVar4 + 3;
  uVar9 = (long)(int)((uint)bVar3 + (uint)bVar2 * 0x100) & 0xffff;
  sceVu0AddVector(tv,(int)fVar5 + 0x10,iVar7 + 0x2fe050);
  GetTrgtRot__FPCfT0Pfi
            ((float *)((int)&ene_wrk.field0_0x0.m_aData[0].mbox + iVar7 + 0x10),tv,
             ene_wrk.field0_0x0.m_aData[0].dist_p_e + iVar6 * 4 + -0x1a,3);
  tv[1] = ene_wrk.field0_0x0.m_aData[0].dist_p_e[iVar6 * 4 + -0x19] -
          *(float *)((int)&ene_wrk.field0_0x0.m_aData[0].mbox + iVar7 + 0x54);
  RotLimitChk__FPf(tv + 1);
  if ((tv[1] <= 0.0) || (uVar1 != '\0')) {
    if (0.0 < tv[1]) {
      alg->pos_no = '\0';
      goto LAB_001798b0;
    }
    if (uVar1 != '\x01') {
      alg->pos_no = '\0';
      goto LAB_001798b0;
    }
    (alg->comm_add).wrk = uVar9 + alg->comm_add_top;
  }
  else {
    pPVar8->wrk = uVar9 + alg->comm_add_top;
  }
  alg->pos_no = '\0';
LAB_001798b0:
  alg->wait_time = 0.0;
  return;
}

void EJobB0A(ENEALG_WRK *alg) {
	int w;
	int rot;
	u_short adj;
	PLCMN_WRK *pcw;
	
  byte bVar1;
  uchar uVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  uchar *puVar6;
  float fVar7;
  float fVar8;
  long lVar9;
  int iVar10;
  int iVar11;
  P_INT *pPVar12;
  
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  pPVar12 = &alg->comm_add;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  bVar1 = alg->idx;
  _fixed_array_verifyrange__H1Z7ENE_WRK_UiUi_PX01(bVar1,10);
                    /* end of inlined section */
  puVar6 = pPVar12->pu8;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  iVar10 = (uint)bVar1 * 0x48 + (uint)bVar1;
                    /* end of inlined section */
  uVar2 = *puVar6;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  iVar11 = iVar10 * 0x10;
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  fVar7 = ene_wrk.field0_0x0.m_aData[0].dist_p_e_o[iVar10 * 4 + 8];
  pPVar12->pu8 = puVar6 + 1;
  fVar8 = DAT_003ee228;
  bVar1 = puVar6[2];
  bVar3 = puVar6[1];
  pPVar12->pu8 = puVar6 + 3;
  bVar4 = puVar6[3];
  bVar5 = puVar6[4];
  pPVar12->pu8 = puVar6 + 5;
  iVar10 = RotRngChk__FPfT0ff((float *)((int)&ene_wrk.field0_0x0.m_aData[0].mbox + iVar11 + 0x10),
                              (float *)((int)fVar7 + 0x10),
                              *(float *)((int)&ene_wrk.field0_0x0.m_aData[0].mbox + iVar11 + 0x54),
                              ((float)((uint)bVar3 + (uint)bVar1 * 0x100 & 0xffff) / 180.0) * fVar8)
  ;
  if (uVar2 == '\0') {
    if (iVar10 == 0) {
      alg->pos_no = '\0';
      goto LAB_001799d8;
    }
    lVar9 = alg->comm_add_top;
  }
  else {
    if (iVar10 != 0) {
      alg->pos_no = '\0';
      goto LAB_001799d8;
    }
    lVar9 = alg->comm_add_top;
  }
  pPVar12->wrk = ((long)(int)((uint)bVar4 + (uint)bVar5 * 0x100) & 0xffffU) + lVar9;
  alg->pos_no = '\0';
LAB_001799d8:
  alg->wait_time = 0.0;
  return;
}

void EJobB0B(ENEALG_WRK *alg) {
	float rng;
	
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  bVar1 = alg->idx;
  _fixed_array_verifyrange__H1Z7ENE_WRK_UiUi_PX01(bVar1,10);
                    /* end of inlined section */
  pbVar3 = (alg->comm_add).pu8;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  iVar4 = (uint)bVar1 * 0x48 + (uint)bVar1;
                    /* end of inlined section */
  bVar1 = *pbVar3;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  bVar2 = pbVar3[1];
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  (alg->comm_add).pu8 = pbVar3 + 2;
  if (*(char *)(ene_wrk.field0_0x0.m_aData[0].dist_in_tm + iVar4 * 8 + 0xf) == '\x02') {
    fVar6 = *(float *)((int)ene_wrk.field0_0x0.m_aData[0].dist_p_e[iVar4 * 4 + -1] + 0x40);
    if (fVar6 <= 0.0) {
      alg->pos_no = '\0';
      goto LAB_00179abc;
    }
    fVar5 = GetDistV__FPCfT0(plyr_wrk.cmn_wrk.mbox.pos,
                             (float *)((int)&ene_wrk.field0_0x0.m_aData[0].mbox +
                                      iVar4 * 0x10 + 0x10));
    if (fVar6 < fVar5) {
      alg->pos_no = '\0';
      goto LAB_00179abc;
    }
    (alg->comm_add).wrk =
         ((long)(int)((uint)bVar1 + (uint)bVar2 * 0x100) & 0xffffU) + alg->comm_add_top;
    ene_wrk.field0_0x0.m_aData[0].wrkp[iVar4 * 4 + 3] = (void *)0x3;
  }
  alg->pos_no = '\0';
LAB_00179abc:
  alg->wait_time = 0.0;
  return;
}

void EJobB0C(ENEALG_WRK *alg) {
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte *pbVar4;
  
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  bVar1 = alg->idx;
  _fixed_array_verifyrange__H1Z7ENE_WRK_UiUi_PX01(bVar1,10);
                    /* end of inlined section */
  pbVar4 = (alg->comm_add).pu8;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  bVar2 = *pbVar4;
  bVar3 = pbVar4[1];
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  (alg->comm_add).pu8 = pbVar4 + 2;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  if (*(char *)((int)ene_wrk.field0_0x0.m_aData[0].dist_in_tm +
               ((uint)bVar1 * 0x48 + (uint)bVar1) * 0x10 + 0x1f) == '\x03') {
    (alg->comm_add).wrk =
         ((long)(int)((uint)bVar2 + (uint)bVar3 * 0x100) & 0xffffU) + alg->comm_add_top;
  }
  alg->pos_no = '\0';
  alg->wait_time = 0.0;
  return;
}

void EJobB0D(ENEALG_WRK *alg) {
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  
  pbVar3 = (alg->comm_add).pu8;
  bVar1 = pbVar3[1];
  bVar2 = *pbVar3;
  (alg->comm_add).pu8 = pbVar3 + 2;
  if (alg->flag != '\0') {
    (alg->comm_add).wrk =
         ((long)(int)((uint)bVar2 + (uint)bVar1 * 0x100) & 0xffffU) + alg->comm_add_top;
  }
  alg->pos_no = '\0';
  alg->wait_time = 0.0;
  return;
}

void EJobB0E(ENEALG_WRK *alg) {
	int i;
	int n;
	int datno;
	u_short adj;
	u_short num;
	ENE_WRK *ew;
	
  byte bVar1;
  uchar uVar2;
  byte bVar3;
  byte bVar4;
  short sVar5;
  uchar *puVar6;
  int iVar7;
  int iVar9;
  ulong uVar10;
  ushort uVar11;
  P_INT *pPVar12;
  int iVar13;
  int iVar14;
  float fVar8;
  
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  bVar1 = alg->idx;
  _fixed_array_verifyrange__H1Z7ENE_WRK_UiUi_PX01(bVar1,10);
                    /* end of inlined section */
  pPVar12 = &alg->comm_add;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  puVar6 = pPVar12->pu8;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  uVar2 = *puVar6;
  pPVar12->pu8 = puVar6 + 1;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  iVar9 = (uint)bVar1 * 0x48 + (uint)bVar1;
                    /* end of inlined section */
  bVar1 = puVar6[1];
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  bVar3 = puVar6[2];
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  pPVar12->pu8 = puVar6 + 3;
  bVar4 = puVar6[4];
  uVar11 = (ushort)bVar1 + (ushort)bVar3 * 0x100;
  bVar1 = puVar6[3];
  pPVar12->pu8 = puVar6 + 5;
  uVar10 = (long)(int)((uint)bVar1 + (uint)bVar4 * 0x100) & 0xffff;
  if (uVar2 == '\0') {
    if (alg->flag != uVar11) {
      alg->pos_no = '\0';
      goto LAB_00179d44;
    }
    pPVar12->wrk = uVar10 + alg->comm_add_top;
  }
  else if (*(char *)(ene_wrk.field0_0x0.m_aData[0].dist_in_tm + iVar9 * 8 + 0xf) != '\x02') {
    iVar14 = 0x60;
    iVar13 = 2;
    fVar8 = ene_wrk.field0_0x0.m_aData[0].dist_p_e[iVar9 * 4 + -2];
    while( true ) {
      iVar7 = (int)fVar8 + iVar14;
      iVar14 = iVar14 + 2;
      sVar5 = *(short *)(iVar7 + 0xe);
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* end of inlined section */
      if ((-1 < sVar5) &&
         (iVar7 = SearchEneWrkNo__Fii((uint)*(byte *)(ene_wrk.field0_0x0.m_aData[0].dist_in_tm +
                                                     iVar9 * 8 + 0xf),(int)sVar5), -1 < iVar7)) {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
        _fixed_array_verifyrange__H1Z7ENE_WRK_UiUi_PX01(iVar7,10);
                    /* end of inlined section */
        if ((ene_wrk.field0_0x0.m_aData[iVar7].status == 4) &&
           ((ene_wrk.field0_0x0.m_aData[iVar7].st.hp != 0 &&
            (ene_wrk.field0_0x0.m_aData[iVar7].alg.flag == uVar11)))) {
          (alg->comm_add).wrk = alg->comm_add_top + uVar10;
        }
      }
      iVar13 = iVar13 + -1;
      if (iVar13 < 0) break;
      fVar8 = ene_wrk.field0_0x0.m_aData[0].dist_p_e[iVar9 * 4 + -2];
    }
  }
  alg->pos_no = '\0';
LAB_00179d44:
  alg->wait_time = 0.0;
  return;
}

void EJobB0F(ENEALG_WRK *alg) {
	u_char fl;
	u_char num;
	u_short adj;
	int i;
	int n;
	
  uchar uVar1;
  byte bVar2;
  byte bVar3;
  uchar *puVar4;
  bool bVar5;
  int iVar6;
  P_INT *pPVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  
  iVar9 = 0;
  pPVar7 = &alg->comm_add;
  puVar4 = pPVar7->pu8;
  uVar1 = *puVar4;
  pPVar7->pu8 = puVar4 + 1;
  uVar10 = (uint)puVar4[1];
  pPVar7->pu8 = puVar4 + 2;
  bVar2 = puVar4[3];
  bVar3 = puVar4[2];
  pPVar7->pu8 = puVar4 + 4;
  iVar6 = 0;
  do {
    iVar8 = iVar6 + 1;
    iVar6 = IsActEnemy__Fi(iVar6);
    if (iVar6 != 0) {
      iVar9 = iVar9 + 1;
    }
    iVar6 = iVar8;
  } while (iVar8 < 10);
  bVar5 = iVar9 < (int)uVar10;
  if (uVar1 == '\0') {
    bVar5 = (int)uVar10 < iVar9;
  }
  if (bVar5) {
    alg->pos_no = '\0';
  }
  else {
    (alg->comm_add).wrk =
         ((long)(int)((uint)bVar3 + (uint)bVar2 * 0x100) & 0xffffU) + alg->comm_add_top;
    alg->pos_no = '\0';
  }
  alg->wait_time = 0.0;
  return;
}

void EJobB10(ENEALG_WRK *alg) {
	u_short adj;
	ENE_WRK *ew;
	
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  long lVar4;
  int iVar5;
  
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  bVar1 = alg->idx;
  _fixed_array_verifyrange__H1Z7ENE_WRK_UiUi_PX01(bVar1,10);
                    /* end of inlined section */
  pbVar3 = (alg->comm_add).pu8;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  iVar5 = (uint)bVar1 * 0x48 + (uint)bVar1;
                    /* end of inlined section */
  bVar1 = *pbVar3;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  bVar2 = pbVar3[1];
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  (alg->comm_add).pu8 = pbVar3 + 2;
  if (*(short *)((int)ene_wrk.field0_0x0.m_aData[0].dist_p_e[iVar5 * 4 + -1] + 0x44) < 0) {
    if ((*(ulong *)(ene_wrk.field0_0x0.m_aData[0].dist_p_e + iVar5 * 4 + -0x12) & 0x200000000) == 0)
    {
      alg->pos_no = '\0';
      goto LAB_00179f10;
    }
    lVar4 = alg->comm_add_top;
LAB_00179efc:
    (alg->comm_add).wrk = ((long)(int)((uint)bVar1 + (uint)bVar2 * 0x100) & 0xffffU) + lVar4;
    ene_wrk.field0_0x0.m_aData[0].wrkp[iVar5 * 4 + 3] = (void *)0x2;
  }
  else {
    if (alg->loop[0] <= 0.0) {
      lVar4 = alg->comm_add_top;
      goto LAB_00179efc;
    }
    alg->loop[0] = alg->loop[0] - ene_wrk.field0_0x0.m_aData[0].dist_p_e_o[iVar5 * 4 + 5];
  }
  alg->pos_no = '\0';
LAB_00179f10:
  alg->wait_time = 0.0;
  return;
}

void EJobB11(ENEALG_WRK *alg) {
	u_short adj1;
	u_short adj2;
	
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte *pbVar6;
  long lVar7;
  
  pbVar6 = (alg->comm_add).pu8;
  bVar1 = alg->branch;
  bVar2 = *pbVar6;
  bVar3 = pbVar6[1];
  (alg->comm_add).pu8 = pbVar6 + 2;
  bVar4 = pbVar6[3];
  bVar5 = pbVar6[2];
  (alg->comm_add).pu8 = pbVar6 + 4;
  if (bVar1 == 1) {
    lVar7 = alg->comm_add_top;
LAB_00179fac:
    lVar7 = ((long)(int)((uint)bVar2 + (uint)bVar3 * 0x100) & 0xffffU) + lVar7;
  }
  else {
    if (bVar1 < 2) {
      alg->pos_no = '\0';
      goto LAB_00179fb8;
    }
    if (bVar1 != 2) {
      if (bVar1 != 0xf0) {
        alg->pos_no = '\0';
        goto LAB_00179fb8;
      }
      lVar7 = alg->comm_add_top;
      goto LAB_00179fac;
    }
    lVar7 = ((long)(int)((uint)bVar5 + (uint)bVar4 * 0x100) & 0xffffU) + alg->comm_add_top;
  }
  (alg->comm_add).wrk = lVar7;
  alg->pos_no = '\0';
LAB_00179fb8:
  alg->branch = '\0';
  alg->wait_time = 0.0;
  return;
}

void EJobB12(ENEALG_WRK *alg) {
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  int iVar4;
  
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  bVar1 = alg->idx;
  _fixed_array_verifyrange__H1Z7ENE_WRK_UiUi_PX01(bVar1,10);
                    /* end of inlined section */
  pbVar3 = (alg->comm_add).pu8;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  iVar4 = (uint)bVar1 * 0x48 + (uint)bVar1;
                    /* end of inlined section */
  bVar1 = *pbVar3;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  bVar2 = pbVar3[1];
  (alg->comm_add).pu8 = pbVar3 + 2;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  if ((*(ulong *)(ene_wrk.field0_0x0.m_aData[0].dist_p_e + iVar4 * 4 + -0x12) & 0x10000000000) != 0)
  {
    (alg->comm_add).wrk =
         ((long)(int)((uint)bVar1 + (uint)bVar2 * 0x100) & 0xffffU) + alg->comm_add_top;
    ene_wrk.field0_0x0.m_aData[0].wrkp[iVar4 * 4 + 3] = (void *)0x1;
  }
  alg->pos_no = '\0';
  alg->wait_time = 0.0;
  return;
}

void EJobB13(ENEALG_WRK *alg) {
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte *pbVar6;
  
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  bVar1 = alg->idx;
  _fixed_array_verifyrange__H1Z7ENE_WRK_UiUi_PX01(bVar1,10);
                    /* end of inlined section */
  pbVar6 = (alg->comm_add).pu8;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  bVar2 = *pbVar6;
  bVar3 = pbVar6[1];
  (alg->comm_add).pu8 = pbVar6 + 2;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  bVar4 = pbVar6[3];
  bVar5 = pbVar6[2];
  (alg->comm_add).pu8 = pbVar6 + 4;
  if ((ushort)*(byte *)((int)ene_wrk.field0_0x0.m_aData[0].dist_in_tm +
                       ((uint)bVar1 * 0x48 + (uint)bVar1) * 0x10 + 0x11) ==
      (ushort)((ushort)bVar2 + (ushort)bVar3 * 0x100)) {
    (alg->comm_add).wrk =
         ((long)(int)((uint)bVar5 + (uint)bVar4 * 0x100) & 0xffffU) + alg->comm_add_top;
  }
  return;
}

void EJobB14(ENEALG_WRK *alg) {
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte *pbVar4;
  
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  bVar1 = alg->idx;
  _fixed_array_verifyrange__H1Z7ENE_WRK_UiUi_PX01(bVar1,10);
                    /* end of inlined section */
  pbVar4 = (alg->comm_add).pu8;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  bVar2 = pbVar4[1];
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  bVar3 = *pbVar4;
  (alg->comm_add).pu8 = pbVar4 + 2;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  EffScreenEffectStatusSet__Fi(0);
  EnemyDeadPDeformReset__FP7ENE_WRK
            ((ENE_WRK *)(ene_wrk.field0_0x0.m_aData[0].bep + ((uint)bVar1 * 0x48 + (uint)bVar1) * 4)
            );
  MapCamCutFinCamera__Fv();
  alg->pos_no = '\0';
  alg->wait_time = 0.0;
  (alg->comm_add).wrk =
       ((long)(int)((uint)bVar3 + (uint)bVar2 * 0x100) & 0xffffU) + alg->comm_add_top;
  return;
}

void EJobB15(ENEALG_WRK *alg) {
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  int iVar4;
  
  pbVar3 = (alg->comm_add).pu8;
  bVar1 = pbVar3[1];
  bVar2 = *pbVar3;
  (alg->comm_add).pu8 = pbVar3 + 2;
  iVar4 = IgEffectIsEndParticleSuck__Fv();
  if (iVar4 == 0) {
    alg->pos_no = '\0';
  }
  else {
    (alg->comm_add).wrk =
         ((long)(int)((uint)bVar2 + (uint)bVar1 * 0x100) & 0xffffU) + alg->comm_add_top;
    alg->pos_no = '\0';
  }
  alg->wait_time = 0.0;
  return;
}

void EJobB16(ENEALG_WRK *alg) {
	u_short adj1;
	ENE_WRK *ew;
	
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte *pbVar5;
  float fVar6;
  int iVar7;
  ulong uVar8;
  
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  bVar1 = alg->idx;
  _fixed_array_verifyrange__H1Z7ENE_WRK_UiUi_PX01(bVar1,10);
                    /* end of inlined section */
  pbVar5 = (alg->comm_add).pu8;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  bVar2 = *pbVar5;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  iVar7 = (uint)bVar1 * 0x48 + (uint)bVar1;
                    /* end of inlined section */
  bVar1 = pbVar5[1];
  (alg->comm_add).pu8 = pbVar5 + 2;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  bVar3 = pbVar5[3];
  bVar4 = pbVar5[2];
  (alg->comm_add).pu8 = pbVar5 + 4;
  fVar6 = ene_wrk.field0_0x0.m_aData[0].dist_p_e_o[iVar7 * 4 + 8];
  uVar8 = *(ulong *)((int)fVar6 + 0xa0);
  if ((uVar8 & 0x20000) == 0) {
    if (ene_wrk.field0_0x0.m_aData[0].fp[iVar7 * 8 + -7] == 0) {
      uVar8 = *(ulong *)(ene_wrk.field0_0x0.m_aData[0].dist_p_e + iVar7 * 4 + -0x12);
    }
    else {
      if (*(uchar *)((int)fVar6 + 0xed) == alg->idx) goto LAB_0017a328;
      uVar8 = *(ulong *)(ene_wrk.field0_0x0.m_aData[0].dist_p_e + iVar7 * 4 + -0x12);
      ene_wrk.field0_0x0.m_aData[0].fp[iVar7 * 8 + -7] = 0;
    }
  }
  else {
    if ((uVar8 & 0x10000) != 0) {
      (alg->comm_add).wrk =
           ((long)(int)((uint)bVar4 + (uint)bVar3 * 0x100) & 0xffffU) + alg->comm_add_top;
      goto LAB_0017a328;
    }
    uVar8 = *(ulong *)(ene_wrk.field0_0x0.m_aData[0].dist_p_e + iVar7 * 4 + -0x12);
  }
  *(ulong *)(ene_wrk.field0_0x0.m_aData[0].dist_p_e + iVar7 * 4 + -0x12) = uVar8 | 0x8000;
  (alg->comm_add).wrk =
       ((long)(int)((uint)bVar2 + (uint)bVar1 * 0x100) & 0xffffU) + alg->comm_add_top;
LAB_0017a328:
  alg->pos_no = '\0';
  alg->wait_time = 0.0;
  return;
}

void EJobB17(ENEALG_WRK *alg) {
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte *pbVar4;
  
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  bVar1 = alg->idx;
  _fixed_array_verifyrange__H1Z7ENE_WRK_UiUi_PX01(bVar1,10);
                    /* end of inlined section */
  pbVar4 = (alg->comm_add).pu8;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  bVar2 = *pbVar4;
  bVar3 = pbVar4[1];
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  (alg->comm_add).pu8 = pbVar4 + 2;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  if ((*(ulong *)(ene_wrk.field0_0x0.m_aData[0].dist_p_e +
                 ((uint)bVar1 * 0x48 + (uint)bVar1) * 4 + -0x12) & 0x80) != 0) {
    (alg->comm_add).wrk =
         ((long)(int)((uint)bVar2 + (uint)bVar3 * 0x100) & 0xffffU) + alg->comm_add_top;
  }
  alg->pos_no = '\0';
  alg->wait_time = 0.0;
  return;
}

void EJobB18(ENEALG_WRK *alg) {
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  
  pbVar3 = (alg->comm_add).pu8;
  bVar1 = *pbVar3;
  bVar2 = pbVar3[1];
  (alg->comm_add).pu8 = pbVar3 + 2;
  if (plyr_wrk.cmn_wrk.mode == '\x06') {
    (alg->comm_add).wrk =
         ((long)(int)((uint)bVar1 + (uint)bVar2 * 0x100) & 0xffffU) + alg->comm_add_top;
  }
  alg->pos_no = '\0';
  alg->wait_time = 0.0;
  return;
}

void EJobB19(ENEALG_WRK *alg) {
	ENE_WRK *ew;
	u_short adj;
	short int rt;
	float tv[4];
	float vw[4];
	MOVE_BOX *mb;
	float l1;
	float l2;
	
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte *pbVar11;
  int iVar12;
  int iVar13;
  float *p0;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float z;
  float fVar18;
  float tv [4];
  float vw [4];
  
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  fVar18 = 0.0;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  bVar1 = alg->idx;
  _fixed_array_verifyrange__H1Z7ENE_WRK_UiUi_PX01(bVar1,10);
                    /* end of inlined section */
  pbVar11 = (alg->comm_add).pu8;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  bVar2 = *pbVar11;
  bVar3 = pbVar11[1];
  (alg->comm_add).pu8 = pbVar11 + 2;
  bVar4 = pbVar11[3];
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  iVar12 = (uint)bVar1 * 0x48 + (uint)bVar1;
                    /* end of inlined section */
  bVar1 = pbVar11[2];
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  iVar13 = iVar12 * 0x10;
                    /* end of inlined section */
  (alg->comm_add).pu8 = pbVar11 + 4;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  bVar5 = pbVar11[5];
  bVar6 = pbVar11[4];
  (alg->comm_add).pu8 = pbVar11 + 6;
  bVar7 = pbVar11[7];
  bVar8 = pbVar11[6];
  (alg->comm_add).pu8 = pbVar11 + 8;
  bVar9 = pbVar11[9];
  bVar10 = pbVar11[8];
  (alg->comm_add).pu8 = pbVar11 + 10;
  fVar17 = (float)((int)(((uint)bVar8 + (uint)bVar7 * 0x100) * 0x10000) >> 0x10);
  bVar7 = pbVar11[0xb];
  bVar8 = pbVar11[10];
  (alg->comm_add).pu8 = pbVar11 + 0xc;
  p0 = (float *)((int)&ene_wrk.field0_0x0.m_aData[0].mbox + iVar13 + 0x10);
  _SetVector__FPfffff(vw,(float)((int)(((uint)bVar6 + (uint)bVar5 * 0x100) * 0x10000) >> 0x10),
                      fVar17,(float)((int)(((uint)bVar10 + (uint)bVar9 * 0x100) * 0x10000) >> 0x10),
                      fVar18);
  fVar14 = GetDistV2__FPCfT0(p0,vw);
  z = ((float)(uint)*(byte *)((int)ene_wrk.field0_0x0.m_aData[0].dist_p_e[iVar12 * 4 + -2] + 0x5a) *
      (float)((int)(((uint)bVar2 + (uint)bVar3 * 0x100) * 0x10000) >> 0x10)) / 100.0;
  if (z < fVar14) {
    _SetVector__FPfffff(tv,fVar18,fVar18,z,fVar18);
    if (*(float *)((int)&ene_wrk.field0_0x0.m_aData[0].mbox + iVar13 + 0x14) == fVar17) {
      GetTrgtRot__FPCfT0Pfi(p0,vw,ene_wrk.field0_0x0.m_aData[0].dist_p_e + iVar12 * 4 + -0x1a,2);
    }
    else {
      GetTrgtRot__FPCfT0Pfi(p0,vw,ene_wrk.field0_0x0.m_aData[0].dist_p_e + iVar12 * 4 + -0x1a,3);
    }
    fVar17 = DAT_003ee22c;
    fVar15 = ene_wrk.field0_0x0.m_aData[0].dist_p_e[iVar12 * 4 + -0x19];
    fVar16 = *(float *)((int)&ene_wrk.field0_0x0.m_aData[0].mbox + iVar13 + 0x54);
    fVar18 = DAT_003ee230 / (float)((int)(((uint)bVar1 + (uint)bVar4 * 0x100) * 0x10000) >> 0x10);
    *(float *)((int)&ene_wrk.field0_0x0.m_aData[0].mbox + iVar13 + 0x50) =
         ene_wrk.field0_0x0.m_aData[0].dist_p_e[iVar12 * 4 + -0x1a];
    ene_wrk.field0_0x0.m_aData[0].dist_p_e[iVar12 * 4 + -0x17] =
         fVar18 * ene_wrk.field0_0x0.m_aData[0].dist_p_e_o[iVar12 * 4 + 5];
    if (ABS((fVar15 * 180.0) / fVar17 - (fVar16 * 180.0) / fVar17) < 2.0) {
      RotFvector__FPfT0((float *)((int)&ene_wrk.field0_0x0.m_aData[0].mbox + iVar13 + 0x50),tv);
      sceVu0AddVector(iVar13 + 0x2fe290,iVar13 + 0x2fe290,tv);
    }
  }
  else {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/g3dxVu0.h */
    *p0 = (float)vw._0_8_;
    *(float *)((int)&ene_wrk.field0_0x0.m_aData[0].mbox + iVar13 + 0x14) = SUB84(vw._0_8_,4);
    *(float *)((int)&ene_wrk.field0_0x0.m_aData[0].mbox + iVar13 + 0x18) = vw[2];
    *(float *)((int)&ene_wrk.field0_0x0.m_aData[0].mbox + iVar13 + 0x1c) = vw[3];
  }
                    /* end of inlined section */
  if (fVar14 < z) {
    (alg->comm_add).wrk =
         ((long)(int)((uint)bVar8 + (uint)bVar7 * 0x100) & 0xffffU) + alg->comm_add_top;
    alg->pos_no = '\0';
  }
  else {
    alg->pos_no = '\0';
  }
  alg->wait_time = 0.0;
  return;
}

void EJobB1A(ENEALG_WRK *alg) {
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte *pbVar8;
  int iVar9;
  
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  pbVar8 = (alg->comm_add).pu8;
  bVar1 = alg->idx;
  bVar2 = *pbVar8;
  bVar3 = pbVar8[1];
  (alg->comm_add).pu8 = pbVar8 + 2;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  bVar4 = pbVar8[3];
  bVar5 = pbVar8[2];
  (alg->comm_add).pu8 = pbVar8 + 4;
  bVar6 = pbVar8[5];
  bVar7 = pbVar8[4];
  (alg->comm_add).pu8 = pbVar8 + 6;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  _fixed_array_verifyrange__H1Z7ENE_WRK_UiUi_PX01(bVar1,10);
  iVar9 = CheckEneView__FP7ENE_WRKff
                    ((ENE_WRK *)
                     (ene_wrk.field0_0x0.m_aData[0].bep + ((uint)bVar1 * 0x48 + (uint)bVar1) * 4),
                     (float)((uint)bVar2 + (uint)bVar3 * 0x100 & 0xffff),
                     (float)((uint)bVar5 + (uint)bVar4 * 0x100 & 0xffff));
  if (iVar9 == 0) {
    alg->pos_no = '\0';
  }
  else {
                    /* end of inlined section */
    (alg->comm_add).wrk =
         ((long)(int)((uint)bVar7 + (uint)bVar6 * 0x100) & 0xffffU) + alg->comm_add_top;
    alg->pos_no = '\0';
  }
  alg->wait_time = 0.0;
  return;
}

void EJobB1B(ENEALG_WRK *alg) {
	u_char num;
	u_short adj;
	
  uchar uVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  uchar *puVar5;
  bool bVar6;
  P_INT *pPVar7;
  
  pPVar7 = &alg->comm_add;
  puVar5 = pPVar7->pu8;
  uVar1 = *puVar5;
  pPVar7->pu8 = puVar5 + 1;
  bVar2 = puVar5[1];
  pPVar7->pu8 = puVar5 + 2;
  bVar3 = puVar5[3];
  bVar4 = puVar5[2];
  pPVar7->pu8 = puVar5 + 4;
  if (uVar1 == '\0') {
    bVar6 = bVar2 < plyr_wrk.charge_num;
  }
  else {
    bVar6 = plyr_wrk.charge_num < bVar2;
  }
  if (bVar6) {
    alg->pos_no = '\0';
  }
  else {
    pPVar7->wrk = ((long)(int)((uint)bVar4 + (uint)bVar3 * 0x100) & 0xffffU) + alg->comm_add_top;
    alg->pos_no = '\0';
  }
  alg->wait_time = 0.0;
  return;
}

void EJobB1C(ENEALG_WRK *alg) {
	ENE_WRK *ew;
	ENE_WRK *ewo;
	u_short per;
	u_short adj;
	int i;
	int n;
	u_char fl;
	
  byte bVar1;
  uchar uVar2;
  byte bVar3;
  byte bVar4;
  short sVar5;
  uchar *puVar6;
  int iVar7;
  long lVar9;
  int iVar10;
  P_INT *pPVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  float fVar8;
  
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  bVar1 = alg->idx;
  _fixed_array_verifyrange__H1Z7ENE_WRK_UiUi_PX01(bVar1,10);
                    /* end of inlined section */
  pPVar11 = &alg->comm_add;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  puVar6 = pPVar11->pu8;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  iVar10 = (uint)bVar1 * 0x48 + (uint)bVar1;
                    /* end of inlined section */
  uVar2 = *puVar6;
  pPVar11->pu8 = puVar6 + 1;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  bVar1 = puVar6[1];
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  pPVar11->pu8 = puVar6 + 2;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  bVar3 = puVar6[3];
  bVar4 = puVar6[2];
  pPVar11->pu8 = puVar6 + 4;
  if (*(char *)(ene_wrk.field0_0x0.m_aData[0].dist_in_tm + iVar10 * 8 + 0xf) == '\x02') {
LAB_0017aa68:
    alg->pos_no = '\0';
    alg->wait_time = 0.0;
    return;
  }
  iVar14 = 0;
  iVar13 = 0x60;
  fVar8 = ene_wrk.field0_0x0.m_aData[0].dist_p_e[iVar10 * 4 + -2];
  do {
    iVar7 = (int)fVar8 + iVar13;
    iVar13 = iVar13 + 2;
    sVar5 = *(short *)(iVar7 + 0xe);
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* end of inlined section */
    if ((-1 < sVar5) &&
       (iVar7 = SearchEneWrkNo__Fii((uint)*(byte *)(ene_wrk.field0_0x0.m_aData[0].dist_in_tm +
                                                   iVar10 * 8 + 0xf),(int)sVar5), -1 < iVar7)) {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
      _fixed_array_verifyrange__H1Z7ENE_WRK_UiUi_PX01(iVar7,10);
                    /* end of inlined section */
      uVar12 = (uint)bVar1;
      if (uVar2 == '\0') {
        if ((uint)(ushort)ene_wrk.field0_0x0.m_aData[iVar7].st.hp <=
            ((ushort)(ene_wrk.field0_0x0.m_aData[iVar7].dat)->hp * uVar12) / 100) {
          lVar9 = alg->comm_add_top;
LAB_0017aa40:
          alg->pos_no = '\0';
          alg->wait_time = 0.0;
          (alg->comm_add).wrk = lVar9 + ((long)(int)((uint)bVar4 + (uint)bVar3 * 0x100) & 0xffffU);
          return;
        }
      }
      else if (((ushort)(ene_wrk.field0_0x0.m_aData[iVar7].dat)->hp * uVar12) / 100 <=
               (uint)(ushort)ene_wrk.field0_0x0.m_aData[iVar7].st.hp) {
        lVar9 = alg->comm_add_top;
        goto LAB_0017aa40;
      }
    }
    iVar14 = iVar14 + 1;
    if (2 < iVar14) goto LAB_0017aa68;
    fVar8 = ene_wrk.field0_0x0.m_aData[0].dist_p_e[iVar10 * 4 + -2];
  } while( true );
}

void EJobB1D(ENEALG_WRK *alg) {
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte *pbVar4;
  P_INT *pPVar5;
  
  pPVar5 = &alg->comm_add;
  pbVar4 = pPVar5->pu8;
  bVar1 = *pbVar4;
  pPVar5->pu8 = pbVar4 + 1;
  bVar2 = pbVar4[1];
  bVar3 = pbVar4[2];
  pPVar5->pu8 = pbVar4 + 3;
  if (plyr_wrk.cmn_wrk.st.cond == (ushort)bVar1) {
    pPVar5->wrk = ((long)(int)((uint)bVar2 + (uint)bVar3 * 0x100) & 0xffffU) + alg->comm_add_top;
  }
  alg->pos_no = '\0';
  alg->wait_time = 0.0;
  return;
}

void EJobB1E(ENEALG_WRK *alg) {
	ENE_WRK *ew;
	MOVE_BOX *mb;
	u_char spd;
	u_short adj;
	float l1;
	float l2;
	float tv[4];
	float tr[4];
	MOVE_BOX *pcmw;
	static float pos[10][4];
	float *pv0;
	float *pv1;
	
  byte bVar1;
  uchar uVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  uchar *puVar7;
  undefined8 uVar8;
  int iVar9;
  int iVar10;
  uint min;
  P_INT *pPVar11;
  undefined4 uVar12;
  float *p0;
  undefined4 uVar13;
  float fVar14;
  float fVar15;
  float tv [4];
  float tr [4];
  
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  bVar1 = alg->idx;
  _fixed_array_verifyrange__H1Z7ENE_WRK_UiUi_PX01(bVar1,10);
                    /* end of inlined section */
  pPVar11 = &alg->comm_add;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  puVar7 = pPVar11->pu8;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  iVar9 = (uint)bVar1 * 0x48 + (uint)bVar1;
  iVar10 = iVar9 * 0x10;
                    /* end of inlined section */
  uVar2 = *puVar7;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  fVar14 = ene_wrk.field0_0x0.m_aData[0].dist_p_e_o[iVar9 * 4 + 8];
  pPVar11->pu8 = puVar7 + 1;
  bVar1 = puVar7[1];
  pPVar11->pu8 = puVar7 + 2;
  bVar3 = puVar7[2];
  pPVar11->pu8 = puVar7 + 3;
  bVar4 = puVar7[3];
  pPVar11->pu8 = puVar7 + 4;
  bVar5 = puVar7[5];
  bVar6 = puVar7[4];
  pPVar11->pu8 = puVar7 + 6;
  if (uVar2 == '\0') {
    min = (uint)bVar1;
    iVar9 = GetRndSP__FUiUi(min,bVar3 - min);
    _SetVector__FPfffff(tv,0.0,0.0,(float)iVar9 * 50.0,0.0);
    iVar9 = GetRndSP__FUiUi(0,0x24);
    _SetVector__FPfffff(tr,0.0,(float)iVar9 * DAT_003ee234 - DAT_003ee238,0.0,0.0);
    RotLimitChk__FPf(tr + 1);
    RotFvector__FPfT0(tr,tv);
    sceVu0AddVector(tv,(int)fVar14 + 0x10,tv);
    uVar13 = *(undefined4 *)((int)&ene_wrk.field0_0x0.m_aData[0].mbox + iVar10 + 0x14);
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/g3dxVu0.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/g3dxVu0.h */
    iVar9 = (uint)alg->idx * 0x10;
    *(float *)(&pos_1406 + iVar9) = tv[0];
    *(undefined4 *)(&DAT_00478b74 + iVar9) = uVar13;
    *(float *)(&DAT_00478b78 + iVar9) = tv[2];
    *(float *)(&DAT_00478b7c + iVar9) = tv[3];
    alg->pos_no = '\0';
  }
  else {
                    /* end of inlined section */
    p0 = (float *)((int)&ene_wrk.field0_0x0.m_aData[0].mbox + iVar10 + 0x10);
    fVar14 = GetDistV__FPCfT0(p0,(float *)(&pos_1406 + (uint)alg->idx * 0x10));
    fVar15 = (float)((uint)*(byte *)((int)ene_wrk.field0_0x0.m_aData[0].dist_p_e[iVar9 * 4 + -2] +
                                    0x5a) * (uint)bVar4);
    if (fVar15 < fVar14) {
      _SetVector__FPfffff(tv,0.0,0.0,
                          fVar15 * ene_wrk.field0_0x0.m_aData[0].dist_p_e_o[iVar9 * 4 + 5],0.0);
      GetTrgtRot__FPCfT0Pfi(p0,(float *)(&pos_1406 + (uint)alg->idx * 0x10),tr,2);
      RotFvector__FPfT0(tr,tv);
      sceVu0AddVector(p0,p0,tv);
    }
    else {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/g3dxVu0.h */
      iVar9 = (uint)alg->idx * 0x10;
      uVar8 = *(undefined8 *)(&pos_1406 + iVar9);
      uVar13 = *(undefined4 *)(&DAT_00478b78 + iVar9);
      uVar12 = *(undefined4 *)(&DAT_00478b7c + iVar9);
      *p0 = (float)uVar8;
      *(int *)((int)&ene_wrk.field0_0x0.m_aData[0].mbox + iVar10 + 0x14) =
           (int)((ulong)uVar8 >> 0x20);
      *(undefined4 *)((int)&ene_wrk.field0_0x0.m_aData[0].mbox + iVar10 + 0x18) = uVar13;
      *(undefined4 *)((int)&ene_wrk.field0_0x0.m_aData[0].mbox + iVar10 + 0x1c) = uVar12;
    }
                    /* end of inlined section */
    if (fVar14 < fVar15) {
      (alg->comm_add).wrk =
           ((long)(int)((uint)bVar6 + (uint)bVar5 * 0x100) & 0xffffU) + alg->comm_add_top;
      alg->pos_no = '\0';
    }
    else {
      alg->pos_no = '\0';
    }
  }
  alg->wait_time = 0.0;
  return;
}

void EJobB1F(ENEALG_WRK *alg) {
	u_char no;
	u_char num;
	u_short adr;
	
  uchar uVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  uchar *puVar6;
  bool bVar7;
  P_INT *pPVar8;
  
  pPVar8 = &alg->comm_add;
  puVar6 = pPVar8->pu8;
  uVar1 = *puVar6;
  pPVar8->pu8 = puVar6 + 1;
  bVar2 = puVar6[1];
  pPVar8->pu8 = puVar6 + 2;
  bVar3 = puVar6[2];
  pPVar8->pu8 = puVar6 + 3;
  bVar4 = puVar6[4];
  bVar5 = puVar6[3];
  pPVar8->pu8 = puVar6 + 5;
  if (uVar1 == '\0') {
    bVar7 = bVar3 < alg->cnt[bVar2];
  }
  else {
    bVar7 = alg->cnt[bVar2] < bVar3;
  }
  if (bVar7) {
    alg->pos_no = '\0';
  }
  else {
    pPVar8->wrk = ((long)(int)((uint)bVar5 + (uint)bVar4 * 0x100) & 0xffffU) + alg->comm_add_top;
    alg->pos_no = '\0';
  }
  alg->wait_time = 0.0;
  return;
}

void EJobB20(ENEALG_WRK *alg) {
	ENE_WRK *ew;
	int i;
	int act;
	u_short adr;
	
  byte bVar1;
  byte bVar2;
  short sVar3;
  byte *pbVar4;
  int iVar5;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  float fVar6;
  
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  bVar1 = alg->idx;
  _fixed_array_verifyrange__H1Z7ENE_WRK_UiUi_PX01(bVar1,10);
                    /* end of inlined section */
  pbVar4 = (alg->comm_add).pu8;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  iVar7 = (uint)bVar1 * 0x48 + (uint)bVar1;
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  bVar1 = *pbVar4;
  bVar2 = pbVar4[1];
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  (alg->comm_add).pu8 = pbVar4 + 2;
  if (*(char *)(ene_wrk.field0_0x0.m_aData[0].dist_in_tm + iVar7 * 8 + 0xf) != '\x02') {
    iVar8 = 0;
    iVar10 = 0x60;
    iVar9 = 2;
    fVar6 = ene_wrk.field0_0x0.m_aData[0].dist_p_e[iVar7 * 4 + -2];
    while( true ) {
      iVar5 = (int)fVar6 + iVar10;
      iVar10 = iVar10 + 2;
      sVar3 = *(short *)(iVar5 + 0xe);
      if (-1 < sVar3) {
        iVar5 = SearchEneWrkNo__Fii((uint)*(byte *)(ene_wrk.field0_0x0.m_aData[0].dist_in_tm +
                                                   iVar7 * 8 + 0xf),(int)sVar3);
        if (-1 < iVar5) {
          iVar8 = iVar8 + 1;
        }
      }
      iVar9 = iVar9 + -1;
      if (iVar9 < 0) break;
      fVar6 = ene_wrk.field0_0x0.m_aData[0].dist_p_e[iVar7 * 4 + -2];
    }
    if (iVar8 == 0) {
      alg->pos_no = '\0';
      goto LAB_0017aeec;
    }
    (alg->comm_add).wrk =
         ((long)(int)((uint)bVar1 + (uint)bVar2 * 0x100) & 0xffffU) + alg->comm_add_top;
  }
  alg->pos_no = '\0';
LAB_0017aeec:
  alg->wait_time = 0.0;
  return;
}

void EJobB21(ENEALG_WRK *alg) {
	ENE_WRK *ew;
	int i;
	int n;
	int cldnum;
	int oknum;
	u_short adr;
	u_char act;
	
  byte bVar1;
  uchar uVar2;
  byte bVar3;
  short sVar4;
  uchar *puVar5;
  int iVar6;
  int iVar8;
  P_INT *pPVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  float fVar7;
  
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  bVar1 = alg->idx;
  _fixed_array_verifyrange__H1Z7ENE_WRK_UiUi_PX01(bVar1,10);
                    /* end of inlined section */
  pPVar9 = &alg->comm_add;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  puVar5 = pPVar9->pu8;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  iVar8 = (uint)bVar1 * 0x48 + (uint)bVar1;
                    /* end of inlined section */
  uVar2 = *puVar5;
  pPVar9->pu8 = puVar5 + 1;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  bVar1 = puVar5[1];
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  bVar3 = puVar5[2];
  pPVar9->pu8 = puVar5 + 3;
  if (*(char *)(ene_wrk.field0_0x0.m_aData[0].dist_in_tm + iVar8 * 8 + 0xf) != '\x02') {
    iVar13 = 0;
    iVar10 = 0;
    iVar12 = 0x60;
    iVar11 = 2;
    fVar7 = ene_wrk.field0_0x0.m_aData[0].dist_p_e[iVar8 * 4 + -2];
    while( true ) {
      iVar6 = (int)fVar7 + iVar12;
      iVar12 = iVar12 + 2;
      sVar4 = *(short *)(iVar6 + 0xe);
      if (-1 < sVar4) {
        iVar6 = SearchEneWrkNo__Fii((uint)*(byte *)(ene_wrk.field0_0x0.m_aData[0].dist_in_tm +
                                                   iVar8 * 8 + 0xf),(int)sVar4);
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* end of inlined section */
        if (-1 < iVar6) {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
          iVar13 = iVar13 + 1;
          _fixed_array_verifyrange__H1Z7ENE_WRK_UiUi_PX01(iVar6,10);
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
          if (ene_wrk.field0_0x0.m_aData[iVar6].act_no == uVar2) {
            iVar10 = iVar10 + 1;
          }
        }
      }
      iVar11 = iVar11 + -1;
      if (iVar11 < 0) break;
      fVar7 = ene_wrk.field0_0x0.m_aData[0].dist_p_e[iVar8 * 4 + -2];
    }
    if (iVar10 != iVar13) {
      alg->pos_no = '\0';
      goto LAB_0017b050;
    }
    (alg->comm_add).wrk =
         ((long)(int)((uint)bVar1 + (uint)bVar3 * 0x100) & 0xffffU) + alg->comm_add_top;
  }
  alg->pos_no = '\0';
LAB_0017b050:
  alg->wait_time = 0.0;
  return;
}

void EJobB22(ENEALG_WRK *alg) {
	u_short adr;
	PLCMN_WRK *pcw;
	u_char ret;
	
  byte bVar1;
  uchar uVar2;
  byte bVar3;
  uchar *puVar4;
  float fVar5;
  int iVar6;
  long lVar7;
  int iVar8;
  float *pos1;
  P_INT *pPVar9;
  
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  pPVar9 = &alg->comm_add;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  bVar1 = alg->idx;
  _fixed_array_verifyrange__H1Z7ENE_WRK_UiUi_PX01(bVar1,10);
                    /* end of inlined section */
  puVar4 = pPVar9->pu8;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  iVar8 = (uint)bVar1 * 0x48 + (uint)bVar1;
                    /* end of inlined section */
  uVar2 = *puVar4;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  fVar5 = ene_wrk.field0_0x0.m_aData[0].dist_p_e_o[iVar8 * 4 + 8];
  pos1 = (float *)((int)&ene_wrk.field0_0x0.m_aData[0].mpos + iVar8 * 0x10);
  pPVar9->pu8 = puVar4 + 1;
  bVar1 = puVar4[1];
  bVar3 = puVar4[2];
  pPVar9->pu8 = puVar4 + 3;
  iVar8 = MhCtlHitLineCheck__FPfT0i
                    (pos1,(float *)((int)fVar5 + 0x100),(uint)*(byte *)((int)fVar5 + 0xe0));
  iVar6 = MapHitLineCheck__FPfiT0if
                    (pos1,(int)*(short *)((int)fVar5 + 0xfa),(float *)((int)fVar5 + 0x100),
                     (int)*(short *)((int)fVar5 + 0xfa),0.0);
  if (uVar2 == '\0') {
    if (iVar6 != 0 || iVar8 != 0) {
      alg->pos_no = '\0';
      goto LAB_0017b180;
    }
    lVar7 = alg->comm_add_top;
  }
  else {
    if (iVar6 == 0 && iVar8 == 0) {
      alg->pos_no = '\0';
      goto LAB_0017b180;
    }
    lVar7 = alg->comm_add_top;
  }
  pPVar9->wrk = ((long)(int)((uint)bVar1 + (uint)bVar3 * 0x100) & 0xffffU) + lVar7;
  alg->pos_no = '\0';
LAB_0017b180:
  alg->wait_time = 0.0;
  return;
}

void EJobB23(ENEALG_WRK *alg) {
	u_short adj1;
	u_short adj2;
	u_short adj3;
	u_short adj4;
	
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte *pbVar10;
  long lVar11;
  
  pbVar10 = (alg->comm_add).pu8;
  bVar1 = alg->branch;
  bVar2 = *pbVar10;
  bVar3 = pbVar10[1];
  (alg->comm_add).pu8 = pbVar10 + 2;
  bVar4 = pbVar10[3];
  bVar5 = pbVar10[2];
  (alg->comm_add).pu8 = pbVar10 + 4;
  bVar6 = pbVar10[5];
  bVar7 = pbVar10[4];
  (alg->comm_add).pu8 = pbVar10 + 6;
  bVar8 = pbVar10[7];
  bVar9 = pbVar10[6];
  (alg->comm_add).pu8 = pbVar10 + 8;
  if (bVar1 == 2) {
    lVar11 = ((long)(int)((uint)bVar5 + (uint)bVar4 * 0x100) & 0xffffU) + alg->comm_add_top;
LAB_0017b2a4:
    (alg->comm_add).wrk = lVar11;
  }
  else {
    if (2 < bVar1) {
      if (bVar1 == 4) {
        lVar11 = ((long)(int)((uint)bVar9 + (uint)bVar8 * 0x100) & 0xffffU) + alg->comm_add_top;
      }
      else {
        if (3 < bVar1) {
          if (bVar1 != 0xf0) {
            alg->pos_no = '\0';
            goto LAB_0017b2ac;
          }
          lVar11 = alg->comm_add_top;
          goto LAB_0017b2a0;
        }
        lVar11 = ((long)(int)((uint)bVar7 + (uint)bVar6 * 0x100) & 0xffffU) + alg->comm_add_top;
      }
      goto LAB_0017b2a4;
    }
    if (bVar1 != 0) {
      if (bVar1 != 1) {
        alg->pos_no = '\0';
        goto LAB_0017b2ac;
      }
      lVar11 = alg->comm_add_top;
LAB_0017b2a0:
      lVar11 = ((long)(int)((uint)bVar2 + (uint)bVar3 * 0x100) & 0xffffU) + lVar11;
      goto LAB_0017b2a4;
    }
  }
  alg->pos_no = '\0';
LAB_0017b2ac:
  alg->branch = '\0';
  alg->wait_time = 0.0;
  return;
}

void EJobB24(ENEALG_WRK *alg) {
	u_short dist;
	u_short adj;
	MOVE_BOX *pcmw;
	
  byte bVar1;
  byte bVar2;
  uchar uVar3;
  byte bVar4;
  byte bVar5;
  uchar *puVar6;
  P_INT *pPVar7;
  bool bVar8;
  int iVar9;
  uint uVar10;
  P_INT *pPVar11;
  float fVar12;
  
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  pPVar11 = &alg->comm_add;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  bVar1 = alg->idx;
  _fixed_array_verifyrange__H1Z7ENE_WRK_UiUi_PX01(bVar1,10);
  bVar2 = alg->idx;
  fVar12 = ene_wrk.field0_0x0.m_aData[0].dist_p_e_o[((uint)bVar1 * 0x48 + (uint)bVar1) * 4 + 8];
  _fixed_array_verifyrange__H1Z7ENE_WRK_UiUi_PX01(bVar2,10);
                    /* end of inlined section */
  puVar6 = pPVar11->pu8;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  uVar3 = *puVar6;
  pPVar11->pu8 = puVar6 + 1;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  bVar1 = puVar6[1];
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  bVar4 = puVar6[2];
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  iVar9 = ((uint)bVar2 * 0x48 + (uint)bVar2) * 0x10;
                    /* end of inlined section */
  pPVar11->pu8 = puVar6 + 3;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  bVar2 = puVar6[4];
  bVar5 = puVar6[3];
  uVar10 = (uint)bVar1 + (uint)bVar4 * 0x100 & 0xffff;
  pPVar11->pu8 = puVar6 + 5;
  if (uVar3 == '\0') {
    fVar12 = GetDistV__FPCfT0((float *)((int)fVar12 + 0x10),
                              (float *)((int)&ene_wrk.field0_0x0.m_aData[0].mbox + iVar9 + 0x10));
    bVar8 = fVar12 < (float)uVar10;
  }
  else {
    fVar12 = GetDistV__FPCfT0((float *)((int)fVar12 + 0x10),
                              (float *)((int)&ene_wrk.field0_0x0.m_aData[0].mbox + iVar9 + 0x10));
    bVar8 = (float)uVar10 <= fVar12;
  }
  if (bVar8) {
    pPVar7 = (P_INT *)alg->stack_p;
    pPVar7->wrk = *(long *)pPVar11;
    alg->stack_p = (ulong *)(pPVar7 + 1);
    pPVar11->wrk = ((long)(int)((uint)bVar5 + (uint)bVar2 * 0x100) & 0xffffU) + alg->comm_add_top;
    alg->pos_no = '\0';
  }
  else {
    alg->pos_no = '\0';
  }
  alg->wait_time = 0.0;
  return;
}

void EJobB25(ENEALG_WRK *alg) {
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  uchar uVar4;
  
  pbVar3 = (alg->comm_add).pu8;
  bVar1 = pbVar3[1];
  bVar2 = *pbVar3;
  (alg->comm_add).pu8 = pbVar3 + 2;
  uVar4 = GetPlyrDoorFlg__Fv();
  if (uVar4 == '\0') {
    alg->pos_no = '\0';
  }
  else {
    (alg->comm_add).wrk =
         ((long)(int)((uint)bVar2 + (uint)bVar1 * 0x100) & 0xffffU) + alg->comm_add_top;
    alg->pos_no = '\0';
  }
  alg->wait_time = 0.0;
  return;
}

void EJobB26(ENEALG_WRK *alg) {
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte *pbVar5;
  uchar uVar6;
  
  pbVar5 = (alg->comm_add).pu8;
  bVar1 = *pbVar5;
  bVar2 = pbVar5[1];
  (alg->comm_add).pu8 = pbVar5 + 2;
  bVar3 = pbVar5[3];
  bVar4 = pbVar5[2];
  (alg->comm_add).pu8 = pbVar5 + 4;
  uVar6 = GetPlyrDoorFlg__Fv();
  if (uVar6 != '\0') {
    if (plyr_wrk.door_no != (ushort)((ushort)bVar1 + (ushort)bVar2 * 0x100)) {
      alg->pos_no = '\0';
      goto LAB_0017b504;
    }
    (alg->comm_add).wrk =
         ((long)(int)((uint)bVar4 + (uint)bVar3 * 0x100) & 0xffffU) + alg->comm_add_top;
  }
  alg->pos_no = '\0';
LAB_0017b504:
  alg->wait_time = 0.0;
  return;
}

void EJobB27(ENEALG_WRK *alg) {
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte *pbVar4;
  
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  bVar1 = alg->idx;
  _fixed_array_verifyrange__H1Z7ENE_WRK_UiUi_PX01(bVar1,10);
                    /* end of inlined section */
  pbVar4 = (alg->comm_add).pu8;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  bVar2 = *pbVar4;
  bVar3 = pbVar4[1];
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  (alg->comm_add).pu8 = pbVar4 + 2;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  if ((*(ulong *)(ene_wrk.field0_0x0.m_aData[0].dist_p_e +
                 ((uint)bVar1 * 0x48 + (uint)bVar1) * 4 + -0x12) & 0x400000000) != 0) {
    (alg->comm_add).wrk =
         ((long)(int)((uint)bVar2 + (uint)bVar3 * 0x100) & 0xffffU) + alg->comm_add_top;
  }
  alg->pos_no = '\0';
  alg->wait_time = 0.0;
  return;
}

void EJobB28(ENEALG_WRK *alg) {
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  
  pbVar3 = (alg->comm_add).pu8;
  bVar1 = *pbVar3;
  bVar2 = pbVar3[1];
  (alg->comm_add).pu8 = pbVar3 + 2;
  if ((plyr_wrk.cmn_wrk.st.mvsta & 0xe) != 0) {
    (alg->comm_add).wrk =
         ((long)(int)((uint)bVar1 + (uint)bVar2 * 0x100) & 0xffffU) + alg->comm_add_top;
  }
  alg->pos_no = '\0';
  alg->wait_time = 0.0;
  return;
}

void EJobB29(ENEALG_WRK *alg) {
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  
  pbVar3 = (alg->comm_add).pu8;
  bVar1 = *pbVar3;
  bVar2 = pbVar3[1];
  (alg->comm_add).pu8 = pbVar3 + 2;
  if ((plyr_wrk.cmn_wrk.st.mvsta & 1) != 0) {
    (alg->comm_add).wrk =
         ((long)(int)((uint)bVar1 + (uint)bVar2 * 0x100) & 0xffffU) + alg->comm_add_top;
  }
  alg->pos_no = '\0';
  alg->wait_time = 0.0;
  return;
}

void EJobB2A(ENEALG_WRK *alg) {
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  
  pbVar3 = (alg->comm_add).pu8;
  bVar1 = *pbVar3;
  bVar2 = pbVar3[1];
  (alg->comm_add).pu8 = pbVar3 + 2;
  if (plyr_wrk.shutter_tm != 0) {
    (alg->comm_add).wrk =
         ((long)(int)((uint)bVar1 + (uint)bVar2 * 0x100) & 0xffffU) + alg->comm_add_top;
  }
  alg->pos_no = '\0';
  alg->wait_time = 0.0;
  return;
}

void EJobE00(ENEALG_WRK *alg) {
  (alg->comm_add).pu8 = (alg->comm_add).pu8 + 4;
  alg->pos_no = '\0';
  alg->wait_time = 0.0;
  return;
}

void EJobE01(ENEALG_WRK *alg) {
  (alg->comm_add).pu8 = (alg->comm_add).pu8 + 4;
  alg->pos_no = '\0';
  alg->wait_time = 0.0;
  return;
}

void EJobE02(ENEALG_WRK *alg) {
  alg->pos_no = '\0';
  alg->wait_time = 0.0;
  (alg->comm_add).pu8 = (alg->comm_add).pu8 + 0x10;
  return;
}

void EJobE03(ENEALG_WRK *alg) {
	ENE_WRK *ew;
	
  byte bVar1;
  int iVar2;
  
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  bVar1 = alg->idx;
  _fixed_array_verifyrange__H1Z7ENE_WRK_UiUi_PX01(bVar1,10);
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  iVar2 = (uint)bVar1 * 0x48 + (uint)bVar1;
                    /* end of inlined section */
  if (alg->pos_no == '\0') {
    (alg->comm_add).pu8 = (alg->comm_add).pu8 + 1;
    alg->wait_time = 1.0;
    *(ulong *)(ene_wrk.field0_0x0.m_aData[0].dist_p_e + iVar2 * 4 + -0x12) =
         *(ulong *)(ene_wrk.field0_0x0.m_aData[0].dist_p_e + iVar2 * 4 + -0x12) & 0xffffffffffbfffff
    ;
    alg->pos_no = alg->pos_no + '\x01';
  }
  else if (alg->pos_no == '\x01') {
    alg->pos_no = '\0';
    alg->wait_time = 0.0;
  }
  return;
}

void EJobE04(ENEALG_WRK *alg) {
	u_char no;
	ENE_WRK *ew;
	float add;
	static float fper[10];
	
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  uint uVar4;
  float fVar5;
  
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  bVar1 = alg->idx;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  _fixed_array_verifyrange__H1Z7ENE_WRK_UiUi_PX01(bVar1,10);
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  uVar4 = (uint)bVar1;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  iVar3 = (uint)bVar1 * 0x48 + uVar4;
                    /* end of inlined section */
  if (alg->pos_no == '\0') {
    pbVar2 = (alg->comm_add).pu8;
    bVar1 = *pbVar2;
    (alg->comm_add).pu8 = pbVar2 + 1;
    *(float *)(&fper_1458 + uVar4 * 4) = (float)(uint)bVar1 / 100.0;
    alg->wait_time = 1.0;
    alg->pos_no = alg->pos_no + '\x01';
  }
  else if (alg->pos_no == '\x01') {
    fVar5 = ene_wrk.field0_0x0.m_aData[0].directionaldiffuse[iVar3 * 4 + -6] + 0.125;
    if (*(float *)(&fper_1458 + uVar4 * 4) <= fVar5) {
      ene_wrk.field0_0x0.m_aData[0].directionaldiffuse[iVar3 * 4 + -6] =
           *(float *)(&fper_1458 + uVar4 * 4);
      alg->pos_no = '\0';
      alg->wait_time = 0.0;
    }
    else {
      ene_wrk.field0_0x0.m_aData[0].directionaldiffuse[iVar3 * 4 + -6] = fVar5;
      alg->wait_time = 1.0;
    }
  }
  return;
}

void EJobE05(ENEALG_WRK *alg) {
	ENE_WRK *ew;
	float sub;
	
  byte bVar1;
  int iVar2;
  float fVar3;
  
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  bVar1 = alg->idx;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  _fixed_array_verifyrange__H1Z7ENE_WRK_UiUi_PX01(bVar1,10);
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  iVar2 = (uint)bVar1 * 0x48 + (uint)bVar1;
                    /* end of inlined section */
  if (alg->pos_no == '\0') {
    alg->pos_no = '\x01';
  }
  else {
    if (alg->pos_no != '\x01') {
      return;
    }
    fVar3 = ene_wrk.field0_0x0.m_aData[0].directionaldiffuse[iVar2 * 4 + -6] - 0.0625;
    if (fVar3 <= 0.0) {
      ene_wrk.field0_0x0.m_aData[0].directionaldiffuse[iVar2 * 4 + -6] = 0.0;
      alg->wait_time = 0.0;
      alg->pos_no = '\0';
      return;
    }
    ene_wrk.field0_0x0.m_aData[0].directionaldiffuse[iVar2 * 4 + -6] = fVar3;
  }
  alg->wait_time = 1.0;
  return;
}

void BJobL00(ENE_WRK *ew) {
	u_char time;
	ENEALG_WRK *alg;
	
  byte bVar1;
  byte *pbVar2;
  uchar uVar3;
  P_INT *pPVar4;
  float fVar5;
  
  bVar1 = (ew->alg).bpos_no;
  if (bVar1 == 1) {
    (ew->alg).bpos_no = '\0';
    (ew->alg).bwait_time = 0.0;
    return;
  }
  if (1 < bVar1) {
    if (bVar1 != 2) {
      return;
    }
    (ew->alg).bwait_time = 1.0;
    return;
  }
  pPVar4 = &(ew->alg).bcomm_add;
  if (bVar1 != 0) {
    return;
  }
  pbVar2 = pPVar4->pu8;
  bVar1 = *pbVar2;
  pPVar4->pu8 = pbVar2 + 1;
  if (bVar1 == 0) {
    fVar5 = 1.0;
    uVar3 = '\x02';
  }
  else {
    fVar5 = (float)(uint)bVar1;
    uVar3 = (ew->alg).bpos_no + '\x01';
  }
  (ew->alg).bpos_no = uVar3;
  (ew->alg).bwait_time = fVar5;
  return;
}

void BJobL01(ENE_WRK *ew) {
	ENEALG_WRK *alg;
	
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  
  pbVar3 = (ew->alg).bcomm_add.pu8;
  bVar1 = pbVar3[1];
  bVar2 = *pbVar3;
  (ew->alg).bcomm_add.pu8 = pbVar3 + 2;
  (ew->alg).bcomm_add.wrk =
       (ew->alg).bcomm_add_top + ((long)(int)((uint)bVar2 + (uint)bVar1 * 0x100) & 0xffffU);
  (ew->alg).bpos_no = '\0';
  (ew->alg).bwait_time = 0.0;
  return;
}

void BJobL02(ENE_WRK *ew) {
	ENEALG_WRK *alg;
	
  P_INT *pPVar1;
  
  pPVar1 = &(ew->alg).bcomm_add;
  pPVar1->pu8 = pPVar1->pu8 + 4;
  (ew->alg).bpos_no = '\0';
  (ew->alg).bwait_time = 0.0;
  return;
}

void BJobL03(ENE_WRK *ew) {
	ENEALG_WRK *alg;
	
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  
  pbVar3 = (ew->alg).bcomm_add.pu8;
  bVar1 = *pbVar3;
  bVar2 = pbVar3[1];
  (ew->alg).bcomm_add.pu8 = pbVar3 + 2;
  if (((ew->st).sta & 0x4000000) != 0) {
    (ew->alg).bcomm_add.wrk =
         ((long)(int)((uint)bVar1 + (uint)bVar2 * 0x100) & 0xffffU) + (ew->alg).bcomm_add_top;
  }
  (ew->alg).bpos_no = '\0';
  (ew->alg).bwait_time = 0.0;
  return;
}

void BJobL04(ENE_WRK *ew) {
	ENEALG_WRK *alg;
	
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  
  pbVar3 = (ew->alg).bcomm_add.pu8;
  bVar1 = *pbVar3;
  bVar2 = pbVar3[1];
  (ew->alg).bcomm_add.pu8 = pbVar3 + 2;
  if (((ew->st).sta & 0x8000000) != 0) {
    (ew->alg).bcomm_add.wrk =
         ((long)(int)((uint)bVar1 + (uint)bVar2 * 0x100) & 0xffffU) + (ew->alg).bcomm_add_top;
  }
  (ew->alg).bpos_no = '\0';
  (ew->alg).bwait_time = 0.0;
  return;
}

void BJobL05(ENE_WRK *ew) {
	ENEALG_WRK *alg;
	
  byte bVar1;
  ushort uVar2;
  char cVar3;
  float fVar4;
  
  fVar4 = sinf(((float)(uint)(ushort)ew->tr2_cnt * DAT_003ee23c) / 180.0);
  fVar4 = fVar4 * (float)(uint)ew->tr2_freq;
  cVar3 = (char)(int)fVar4;
  if (2.147484e+09 <= fVar4) {
    cVar3 = (char)(int)(fVar4 - 2.147484e+09);
  }
  uVar2 = ew->tr2_cnt;
  bVar1 = ew->tr2_add;
  ew->tr2_rate_alg = cVar3 + ew->tr2_base;
  (ew->alg).bwait_time = 0.0;
  ew->tr2_cnt = (short)(((uint)uVar2 + (uint)bVar1) % 0x168);
  (ew->alg).bpos_no = '\0';
  return;
}

void BJobL06(ENE_WRK *ew) {
	ENEALG_WRK *alg;
	
  (ew->alg).bpos_no = '\0';
  (ew->alg).bwait_time = 0.0;
  return;
}

static void EnemyDeadPDeformCall(ENE_WRK *ew) {
	static float WaveSpeed = 1.8f;
	static float WaveRate = 0.909999967f;
	
  float scly;
  void *pvVar1;
  float sclx;
  
  scly = DAT_003ee244;
  sclx = DAT_003ee240;
  ResetEffects__FPv(ew->pdf);
  ResetEffects__FPv(ew->pdf2);
  pvVar1 = CallPartsDeform5__FiffPvPf(0x13,sclx,scly,ew,&ew->d_pd);
  ew->pdf = pvVar1;
  pvVar1 = CallPartsDeform5_2__FiffPvPfN24
                     (0x18,sclx,scly,ew,&ew->d_pd2,(float *)&WaveSpeed_1486,(float *)&WaveRate_1487)
  ;
  ew->pdf2 = pvVar1;
  return;
}

static void EnemyDeadPDeformReset(ENE_WRK *ew) {
  ResetEffects__FPv(ew->pdf);
  ResetEffects__FPv(ew->pdf2);
  return;
}

void SetEnemyParallelLight(ENE_WRK *ew, float r, float g, float b, float amb) {
  _SetVector__FPfffff(ew->directionaldiffuse,r,g,b,0.0);
  return;
}

ENE_WRK* ENE_WRK * _fixed_array_verifyrange<ENE_WRK>(size_t v, size_t _max) {
  g3ddbgAssert__FbPCce(false,str_646);
  return (type_info *)v;
}

type_info& ENE_WRK type_info function() {
  g3ddbgAssert__FbPCce(false,str_646);
  return (type_info *)v;
}
