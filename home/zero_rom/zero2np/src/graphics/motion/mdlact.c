// STATUS: NOT STARTED

#include "mdlact.h"

static void _fixed_array_assert(char *strType, size_t v0, size_t v1) {
	static char *str = 0x3bc198;
	
  g3ddbgAssert__FbPCce(false,str_574);
  return;
}

static void** void * * _fixed_array_verifyrange<void *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_assert__FPCcUiUi(s_void__003f1b70,_max,v);
  }
  return (void **)0x0;
}

static char** char * * _fixed_array_verifyrange<char *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_assert__FPCcUiUi(s_char__003f1b78,_max,v);
  }
  return (char **)0x0;
}

static unsigned int** unsigned int * * _fixed_array_verifyrange<unsigned int *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_assert__FPCcUiUi("unsigned int*",_max,v);
  }
  return (uint **)0x0;
}

float motGetRandom(float upper, float lower) {
  int iVar1;
  
  iVar1 = rand();
  return ((float)iVar1 / DAT_003ee4b8) * (upper - lower) + lower;
}

float motLinearSupValue(float moto, float saki, u_char mode, u_int cnt, u_int all_cnt) {
	u_int now_cnt;
	float val;
	float cnt_rate;
	float dv;
	
  float fVar1;
  float fVar2;
  
  if (all_cnt < cnt) {
    cnt = all_cnt;
  }
  if (all_cnt == 0) {
    all_cnt = all_cnt + 1;
  }
  if ((int)cnt < 0) {
    fVar1 = (float)(cnt & 1 | cnt >> 1);
    fVar1 = fVar1 + fVar1;
  }
  else {
    fVar1 = (float)cnt;
  }
  if ((int)all_cnt < 0) {
    fVar2 = (float)(all_cnt & 1 | all_cnt >> 1);
    fVar2 = fVar2 + fVar2;
  }
  else {
    fVar2 = (float)all_cnt;
  }
  fVar1 = fVar1 / fVar2;
  fVar2 = saki - moto;
  if (mode == '\x01') {
    fVar1 = sinf(fVar1 * DAT_003ee4bc + DAT_003ee4c0);
    fVar2 = fVar1 * fVar2 + fVar2;
  }
  else if (mode < 2) {
    if (mode != '\0') {
      return moto;
    }
    fVar2 = fVar2 * fVar1;
  }
  else {
    if (mode != '\x02') {
      return moto;
    }
    fVar1 = sinf(fVar1 * DAT_003ee4c4);
    fVar2 = fVar2 * fVar1;
  }
  return moto + fVar2;
}

int motGetEneNeckRot(float *trot_m[4], ANI_CTRL *ani_ctrl, SGDCOORDINATE *cp2, float *e_rot) {
	SGDCOORDINATE *cp;
	NECK_CTRL_WORK *nw;
	float p[4];
	float d0[4];
	float d1[4];
	float d2[4];
	float n[4];
	float v0[4];
	float v1[4];
	float trot[4];
	float inm[4][4];
	float rotm[4][4];
	float tmpm[4][4];
	float lwm[4][4];
	float scale;
	int m_no;
	u_short neck_id;
	u_short mdl_no;
	u_short anm_no;
	float neck_offset;
	float neck_spd;
	float lr_limit;
	
  SGDCOORDINATE *pSVar1;
  float p [4];
  float d0 [4];
  float d1 [4];
  float d2 [4];
  float n [4];
  float v0 [4];
  float v1 [4];
  float trot [4];
  float inm [4] [4];
  float rotm [4] [4];
  float tmpm [4] [4];
  float lwm [4] [4];
  
  pSVar1 = ani_ctrl->base_p->coordp;
  memset(trot,0,0x10);
  if (anm_tbl[*(ushort *)&ani_ctrl->anm_no].neck_spd != (float *)0x0) {
    sceVu0CopyVector(p,cp2[2].matLocalWorld[3]);
    p[3] = 1.0;
    sceVu0SubVector(d0,p,(ani_ctrl->neck_work).chest_lw[3]);
    sceVu0CopyVector(d1,(ani_ctrl->neck_work).chest_lw[1]);
    sceVu0SubVector(d2,cp2->matLocalWorld[3],pSVar1->matCoord[3]);
    d1[0] = d1[0] * -1.0;
    d1[2] = d1[2] * -1.0;
    sceVu0CopyVector(v0,d0);
    sceVu0CopyVector(v1,d1);
    v0[1] = 0.0;
    v1[1] = 0.0;
    sceVu0Normalize(v0,v0);
    sceVu0ScaleVector(0xbf800000,v1,v1);
    sceVu0Normalize(v1,v1);
                    /* WARNING: Subroutine does not return */
    sceVu0InnerProduct(v0,v1);
  }
  return 0;
}

int motSetNeckWork(ANI_CTRL *ani_ctrl) {
	SGDCOORDINATE *cp;
	NECK_CTRL_WORK *nw;
	
  byte bVar1;
  byte bVar2;
  SGDCOORDINATE *pSVar3;
  
  pSVar3 = ani_ctrl->base_p->coordp;
  bVar1 = manmdl_dat[*(ushort *)&ani_ctrl->mdl_no].neck_id;
  bVar2 = manmdl_dat[*(ushort *)&ani_ctrl->mdl_no].chest_id;
  sceVu0CopyMatrix(&ani_ctrl->neck_work,pSVar3[bVar1].matLocalWorld);
  sceVu0CopyMatrix((ani_ctrl->neck_work).neck_p_lw,(pSVar3[bVar1].pParent)->matLocalWorld);
  sceVu0CopyMatrix((ani_ctrl->neck_work).chest_lw,pSVar3[bVar2].matLocalWorld);
  (ani_ctrl->neck_work).flg = 1;
  return 1;
}

void GetNeckPos(float *pos, void *ani_hndl) {
	HeaderSection *hs2;
	SGDCOORDINATE *cp2;
	int mdl_no;
	
  sceVu0CopyVector(pos,*(int *)(*(int *)((int)ani_hndl + 0xdc) + 8) +
                       (uint)manmdl_dat[*(int *)((int)ani_hndl + 0x124)].neck_id * 0xe0 + 0x70);
  return;
}

int IsTargetInSight(ANI_CTRL *ani_ctrl, float *pos) {
	float neck_offset;
	float lr_limit;
	HeaderSection *hs;
	float rot[4];
	float limit;
	
  int iVar1;
  float limit;
  float rot [4];
  
  limit = anm_tbl[ani_ctrl->anm_no].neck_lr_limit + DAT_003ee4d8;
  motGetTargetRot__FPfP13SGDCOORDINATET0i(rot,ani_ctrl->base_p->coordp + 0x19,pos,1);
  iVar1 = motCheckRotLimit__FPfff(rot + 1,limit,limit);
  return (int)(iVar1 != 0);
}

static void motAddRotOffsetZX(SGDCOORDINATE *cp, float roty, float rotz, float *lwm2[4]) {
	float scale;
	float inm[4][4];
	float lwm[4][4];
	float tmpm[4][4];
	
  undefined4 uVar1;
  float inm [4] [4];
  float lwm [4] [4];
  float tmpm [4] [4];
  
  uVar1 = DAT_003ee4dc;
  sceVu0CopyMatrix(lwm,lwm2);
  sceVu0MulMatrix(lwm,lwm,cp);
  sceVu0ScaleVectorXYZ(uVar1,lwm,lwm);
  sceVu0ScaleVectorXYZ(uVar1,lwm[1],lwm[1]);
  sceVu0ScaleVectorXYZ(uVar1,lwm[2],lwm[2]);
  lwm[3][0] = 0.0;
  lwm[3][1] = 0.0;
  lwm[3][2] = 0.0;
  sceVu0InversMatrix(inm,lwm);
  LocalRotMatrixY__FPA3_fT0f(tmpm,inm,roty);
  sceVu0MulMatrix(tmpm,tmpm,lwm);
  LocalRotMatrixZ__FPA3_fT0f(tmpm,tmpm,rotz);
  sceVu0MulMatrix(cp,cp,tmpm);
  return;
}

static float GetClampValAddOffsetF(float val, float target_val, float spd_val) {
  bool bVar1;
  float fVar2;
  
  if (0.0 < target_val) {
    if (val < target_val) {
      fVar2 = val + spd_val;
      bVar1 = target_val < fVar2;
      goto LAB_001e38b4;
    }
  }
  else if (val <= target_val) {
    if (target_val < val + spd_val) {
      return target_val;
    }
    return val + spd_val;
  }
  fVar2 = val - spd_val;
  bVar1 = fVar2 < target_val;
LAB_001e38b4:
  if (!bVar1) {
    return fVar2;
  }
  return target_val;
}

int motLookAtCtrl(ANI_CTRL *ani_ctrl, LOOK_AT_PARAM *param) {
	float chest_limit;
	float rot_diff;
	float rate;
	float work_flg;
	float lr_limit;
	float rot[4];
	float dmy[4];
	HeaderSection *hs;
	SGDCOORDINATE *cp;
	int i;
	int eyes[2];
	float eye_limits[2][2];
	
  undefined *puVar1;
  HeaderSection *pSGDData;
  SGDCOORDINATE *pSVar2;
  int iVar3;
  uint uVar4;
  ulong *puVar5;
  float *pfVar6;
  float *pfVar7;
  int *piVar8;
  SGDCOORDINATE *pSVar9;
  float *pfVar10;
  float (*pafVar11) [2];
  int iVar12;
  SGDCOORDINATE *pCoord;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float rot [4];
  float dmy [4];
  int eyes [2];
  float eye_limits [2] [2];
  
  fVar14 = DAT_003ee4e0;
  pSGDData = ani_ctrl->base_p;
  fVar16 = 0.0;
  pSVar2 = pSGDData->coordp;
  if (param->enable != 0) {
    fVar16 = 1.0;
  }
  fVar15 = anm_tbl[ani_ctrl->anm_no].neck_lr_limit;
  pSVar9 = pSVar2 + 1;
  sgdClearCoordCalcFlgParents__FPvi(pSGDData,1);
  sgdCalcCoordinateMatrix__FP13SGDCOORDINATE(pSVar9);
  if (fVar16 == 0.0) {
    rot[1] = 0.0;
  }
  else {
    motGetTargetRot__FPfP13SGDCOORDINATET0i(rot,pSVar9,param->pos,1);
    motCheckRotLimit__FPfff(rot + 1,DAT_003ee4e4,DAT_003ee4e4);
  }
  fVar13 = GetClampValAddOffsetF__Ffff(ani_ctrl->chest_rot[1],rot[1],param->chest_spd);
  ani_ctrl->chest_rot[1] = fVar13;
  if (fVar14 < fVar13) {
    ani_ctrl->chest_rot[1] = fVar14;
  }
  else if (fVar13 < -fVar14) {
    ani_ctrl->chest_rot[1] = -fVar14;
  }
  fVar14 = 0.5;
  pCoord = pSVar2 + 4;
  LocalRotMatrixX__FPA3_fT0f
            ((float (*) [4])(pSVar2 + 0x19),(float (*) [4])(pSVar2 + 0x19),
             ani_ctrl->chest_rot[1] * 0.5);
  LocalRotMatrixX__FPA3_fT0f
            ((float (*) [4])pSVar9,(float (*) [4])pSVar9,ani_ctrl->chest_rot[1] * 0.5);
  sgdClearCoordCalcFlgParents__FPvi(pSGDData,4);
  sgdCalcCoordinateMatrix__FP13SGDCOORDINATE(pCoord);
  if (fVar16 == 0.0) {
    fVar14 = 0.5;
    rot[2] = 0.0;
    rot[1] = 0.0;
    fVar15 = ani_ctrl->neck_rot[2];
  }
  else {
    motGetTargetRot__FPfP13SGDCOORDINATET0i(rot,pSVar2 + 2,param->pos,1);
    motCheckRotLimit__FPfff(rot + 1,fVar15,fVar15);
    motGetTargetRot__FPfP13SGDCOORDINATET0i(dmy,pCoord,param->pos,1);
    rot[2] = GetClampValF(dmy[2],DAT_003ee4e8,DAT_003ee4ec);
    fVar15 = ani_ctrl->neck_rot[2];
    fVar13 = ABS((rot[2] - fVar15) / DAT_003ee4f0);
    if (fVar13 < DAT_003ee4f4) {
      fVar14 = fVar13;
    }
  }
  pfVar10 = ani_ctrl->eye_rots + 2;
  iVar12 = 0;
  fVar13 = GetClampValAddOffsetF__Ffff(ani_ctrl->neck_rot[1],rot[1],param->head_spd);
  ani_ctrl->neck_rot[1] = fVar13;
  fVar14 = GetClampValAddOffsetF__Ffff(fVar15,rot[2],param->head_spd * fVar14);
  pSVar9 = pSVar2[0xe].pParent;
  ani_ctrl->neck_rot[2] = fVar14;
  motAddRotOffsetZX__FP13SGDCOORDINATEffPA3_f
            (pSVar2 + 0xe,fVar13 * 0.5,fVar14 * 0.5,pSVar9->matLocalWorld);
  motAddRotOffsetZX__FP13SGDCOORDINATEffPA3_f
            (pSVar2 + 2,ani_ctrl->neck_rot[1] * 0.5,ani_ctrl->neck_rot[2] * 0.5,
             (pSVar2[2].pParent)->matLocalWorld);
  sgdClearCoordCalcFlgParents__FPvi(pSGDData,4);
  sgdClearCoordCalcFlg__FPvi(pSGDData,0xf);
  sgdCalcCoordinateMatrix__FP13SGDCOORDINATE(pCoord);
  sgdCalcCoordinateMatrix__FP13SGDCOORDINATE(pSVar2 + 0xf);
  piVar8 = eyes;
  pafVar11 = eye_limits;
  uVar4 = (int)eyes + 7U & 7;
  puVar5 = (ulong *)(((int)eyes + 7U) - uVar4);
  *puVar5 = *puVar5 & -1L << (uVar4 + 1) * 8 | (ulong)DAT_003f1ba8 >> (7 - uVar4) * 8;
  eyes[0] = DAT_003f1ba8[0];
  eyes[1] = DAT_003f1ba8[1];
  puVar1 = (undefined *)((int)eye_limits + 7);
  uVar4 = (uint)puVar1 & 7;
  puVar5 = (ulong *)(puVar1 + -uVar4);
  *puVar5 = *puVar5 & -1L << (uVar4 + 1) * 8 | (ulong)DAT_003bc1f0 >> (7 - uVar4) * 8;
  eye_limits[0][0] = DAT_003bc1f0[0];
  eye_limits[0][1] = DAT_003bc1f0[1];
  puVar1 = (undefined *)((int)eye_limits[1] + 7);
  uVar4 = (uint)puVar1 & 7;
  puVar5 = (ulong *)(puVar1 + -uVar4);
  *puVar5 = *puVar5 & -1L << (uVar4 + 1) * 8 | (ulong)DAT_003bc1f8 >> (7 - uVar4) * 8;
  eye_limits[1][0] = DAT_003bc1f8[0];
  eye_limits[1][1] = DAT_003bc1f8[1];
  do {
    if (fVar16 == 0.0) {
      rot[1] = 0.0;
    }
    else {
      motGetTargetRot__FPfP13SGDCOORDINATET0i(rot,pSVar2 + *piVar8,param->pos,0);
    }
    fVar14 = DAT_003ee4f8;
    if (((iVar12 != 0) || (0.0 <= rot[1])) && ((iVar12 != 1 || (rot[1] <= 0.0)))) {
      fVar14 = 0.75;
    }
    rot[1] = rot[1] * fVar14;
    iVar12 = iVar12 + 1;
    pfVar6 = *pafVar11;
    pfVar7 = *pafVar11;
    pafVar11 = pafVar11[1];
    rot[1] = GetClampValF(rot[1],*pfVar6,pfVar7[1]);
    fVar14 = GetClampValAddOffsetF__Ffff(pfVar10[-1],rot[1],param->eye_spd);
    iVar3 = *piVar8;
    pfVar10[-1] = fVar14;
    LocalRotMatrixY__FPA3_fT0f
              ((float (*) [4])(pSVar2 + iVar3),(float (*) [4])(pSVar2 + iVar3),-fVar14);
    fVar14 = GetClampValF(rot[2],DAT_003ee4fc,DAT_003ee500);
    rot[2] = fVar14 * DAT_003ee504;
    fVar14 = GetClampValAddOffsetF__Ffff(*pfVar10,rot[2],param->eye_spd);
    iVar3 = *piVar8;
    *pfVar10 = fVar14;
    piVar8 = piVar8 + 1;
    pfVar10 = pfVar10 + 4;
    LocalRotMatrixZ__FPA3_fT0f
              ((float (*) [4])(pSVar2 + iVar3),(float (*) [4])(pSVar2 + iVar3),-fVar14);
  } while (iVar12 < 2);
  return 1;
}

void movGetMoveval(float *spd, float *old_spd, ANI_CTRL *ani_ctrl, u_int frame_num, float frame_f) {
	float *dist;
	float reso_val;
	u_int *mov_p;
	
  short sVar1;
  uint *mov_p;
  uint uVar2;
  int iVar3;
  float *pfVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  mov_p = ani_ctrl->mdat;
  if (400 < (ani_ctrl->mot).reso) {
    (ani_ctrl->mot).reso = 400;
  }
  if (mov_p != (uint *)0x0) {
    movGetMaxval__FPUi(mov_p);
    uVar2 = movGetFrameNum__FPUi(mov_p);
    if (frame_num < uVar2) {
      sVar1 = ani_ctrl->interp_flg;
    }
    else {
      uVar2 = movGetFrameNum__FPUi(mov_p);
      frame_num = uVar2 - 1;
      sVar1 = ani_ctrl->interp_flg;
    }
    if (sVar1 == 1) {
      frame_num = 0;
    }
    pfVar4 = (float *)(mov_p + frame_num * 4 + 2);
    fVar6 = (float)(ani_ctrl->mot).reso / 200.0;
    fVar5 = *pfVar4;
    *spd = fVar5;
    fVar7 = pfVar4[1];
    spd[1] = fVar7;
    fVar8 = pfVar4[2];
    spd[2] = fVar8;
    spd[3] = pfVar4[3];
    dpcmp(0x3ff0000000000000,(long)(double)fVar6);
    spd[2] = fVar8 * 25.0 * fVar6;
    *spd = -fVar5 * 25.0 * fVar6;
    spd[1] = -fVar7 * 25.0 * fVar6;
    if (sVar1 == 1) {
      if (old_spd[2] <= spd[2]) {
        GetPlyrSpd__FPfN20P8ANI_CTRL(spd,spd,old_spd,ani_ctrl);
        iVar3 = (ani_ctrl->mot).reso;
      }
      else {
        sceVu0CopyVector(spd,old_spd);
        iVar3 = (ani_ctrl->mot).reso;
      }
    }
    else {
      sceVu0CopyVector(old_spd,spd);
      iVar3 = (ani_ctrl->mot).reso;
    }
    if (iVar3 == 0) {
      spd[3] = 0.0;
      *spd = 0.0;
      spd[1] = 0.0;
      spd[2] = 0.0;
    }
  }
  return;
}

static int motGetTargetRot(float *rot, SGDCOORDINATE *cp, float *target, int xyz) {
	float v0[4];
	float v1[4];
	float d0[4];
	float d1[4];
	float n[4];
	float inner;
	
  float v0 [4];
  float v1 [4];
  float d0 [4];
  float d1 [4];
  float n [4];
  
  sceVu0CopyVector(d0,cp->matLocalWorld[xyz]);
  sceVu0SubVector(d1,target,cp->matLocalWorld[3]);
  sceVu0CopyVector(v0,d0);
  sceVu0CopyVector(v1,d1);
  v0[1] = 0.0;
  v1[1] = 0.0;
  sceVu0Normalize(v0,v0);
  sceVu0Normalize(v1,v1);
                    /* WARNING: Subroutine does not return */
  sceVu0InnerProduct(v0,v1);
}

static int motCheckRotLimit(float *rot, float limit, float new_rot) {
  if (limit < *rot) {
    *rot = new_rot;
  }
  else {
    if (-limit <= *rot) {
      return 1;
    }
    *rot = -new_rot;
  }
  return 0;
}

static int GetPlyrSpd(float *spd, float *new_spd, float *old_spd, ANI_CTRL *ani_ctrl) {
	float cnt;
	float allcnt;
	float inter_a[4];
	float inter_b[4];
	
  float fVar1;
  float inter_a [4];
  float inter_b [4];
  
  fVar1 = (ani_ctrl->mot).inp_cnt / (float)(ani_ctrl->mot).inp_allcnt;
  sceVu0ScaleVectorXYZ(fVar1,inter_a,new_spd);
  sceVu0ScaleVectorXYZ(1.0 - fVar1,inter_b,old_spd);
  sceVu0AddVector(spd,inter_a,inter_b);
  return 1;
}

static u_int movGetFrameNum(u_int *mov_p) {
  return *mov_p;
}

static float movGetMaxval(u_int *mov_p) {
  return (float)mov_p[1];
}
