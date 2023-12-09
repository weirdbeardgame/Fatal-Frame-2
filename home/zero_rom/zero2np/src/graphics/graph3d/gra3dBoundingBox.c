// STATUS: NOT STARTED

#include "gra3dBoundingBox.h"

static void _fixed_array_assert(char *strType, size_t v0, size_t v1) {
	static char *str = 0x3b4ce8;
	
  g3ddbgAssert__FbPCce(false,str_574);
  return;
}

static void** void * * _fixed_array_verifyrange<void *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_assert__FPCcUiUi(s_void__003f10e8,_max,v);
  }
  return (void **)0x0;
}

static char** char * * _fixed_array_verifyrange<char *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_assert__FPCcUiUi(s_char__003f10f0,_max,v);
  }
  return (char **)0x0;
}

static unsigned int** unsigned int * * _fixed_array_verifyrange<unsigned int *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_assert__FPCcUiUi("unsigned int*",_max,v);
  }
  return (uint **)0x0;
}

void gra3dbbApplyMatrix(float *avDest[4], float *avSrc[4], float *mat[4]) {
	int i;
	float *vDest;
	
  int iVar1;
  int iVar2;
  int iVar3;
  
                    /* inlined from g3dVu0Instance.h */
                    /* end of inlined section */
                    /* inlined from g3dVu0Instance.h */
  if (_10CVu0Matrix_s_pFuncLoadMatrix == (undefined1 *)0x0) {
    _SetLineInfo__FPCciT0T0("g3dVu0Instance.h",0x3d,(char *)&__FUNCTION___790,"s_pFuncLoadMatrix");
    g3ddbgAssert__FbPCce(_10CVu0Matrix_s_pFuncLoadMatrix != (undefined1 *)0x0,&DAT_003f1128);
  }
  iVar3 = 7;
                    /* inlined from g3dVu0Instance.h */
  (*(code *)_10CVu0Matrix_s_pFuncLoadMatrix)(mat);
                    /* end of inlined section */
  iVar1 = 0x70;
  do {
    iVar2 = (int)*avSrc + iVar1;
    prefetch(iVar2 + 0x10,0);
                    /* inlined from g3dVu0Instance.h */
    iVar3 = iVar3 + -1;
    if (_10CVu0Matrix_s_pFuncApplyMatrixWithoutTrans == (undefined1 *)0x0) {
      _SetLineInfo__FPCciT0T0
                ("g3dVu0Instance.h",0x50,"ApplyWithoutTrans","s_pFuncApplyMatrixWithoutTrans");
      g3ddbgAssert__FbPCce
                (_10CVu0Matrix_s_pFuncApplyMatrixWithoutTrans != (undefined1 *)0x0,&DAT_003f1128);
    }
    (*(code *)_10CVu0Matrix_s_pFuncApplyMatrixWithoutTrans)((int)*avDest + iVar1,iVar2);
    iVar1 = iVar3 * 0x10;
  } while (iVar3 != -1);
  return;
}

int gra3dbbIsInFogArea(float *matWorldScreen[4], G3DFOG *pFog, float *avBBWorld[4]) {
	float vWork[4];
	int i;
	float f;
	
  float (*pafVar1) [4];
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float vWork [4];
  
  if (0.0 < pFog->fNear) {
                    /* inlined from g3dVu0Instance.h */
    if (_10CVu0Matrix_s_pFuncLoadMatrix == (undefined1 *)0x0) {
      _SetLineInfo__FPCciT0T0("g3dVu0Instance.h",0x3d,(char *)&__FUNCTION___790,"s_pFuncLoadMatrix")
      ;
      g3ddbgAssert__FbPCce(_10CVu0Matrix_s_pFuncLoadMatrix != (undefined1 *)0x0,&DAT_003f1128);
    }
                    /* end of inlined section */
                    /* inlined from g3dVu0Instance.h */
    fVar5 = 0.0;
    (*(code *)_10CVu0Matrix_s_pFuncLoadMatrix)(matWorldScreen);
                    /* end of inlined section */
    iVar2 = 7;
    pafVar1 = avBBWorld[7];
    do {
      prefetch(pafVar1[1],0);
                    /* inlined from g3dVu0Instance.h */
      iVar2 = iVar2 + -1;
      if (_10CVu0Matrix_s_pFuncApplyMatrixWithoutTrans == (undefined1 *)0x0) {
        _SetLineInfo__FPCciT0T0
                  ("g3dVu0Instance.h",0x50,"ApplyWithoutTrans","s_pFuncApplyMatrixWithoutTrans");
        g3ddbgAssert__FbPCce
                  (_10CVu0Matrix_s_pFuncApplyMatrixWithoutTrans != (undefined1 *)0x0,&DAT_003f1128);
      }
                    /* end of inlined section */
                    /* inlined from g3dVu0Instance.h */
      (*(code *)_10CVu0Matrix_s_pFuncApplyMatrixWithoutTrans)(vWork,pafVar1);
                    /* end of inlined section */
      fVar3 = g3dCalcFA__FPC6G3DFOG(pFog);
      fVar4 = g3dCalcFB__FPC6G3DFOG(pFog);
      if (fVar5 < fVar3 * vWork[3] + fVar4) {
        return 1;
      }
      pafVar1 = pafVar1[-1];
    } while (iVar2 != -1);
  }
  return 0;
}

int gra3dbbIsInViewvolume(float *avBBTransformed[4], float *avBBWorld[4]) {
	int iClip1;
	int i;
	
  float afVar1 [4];
  ulong uVar2;
  int iVar3;
  ulong uVar4;
  undefined4 in_vc2;
  undefined in_vf0 [16];
  undefined in_vf4 [16];
  undefined in_vf5 [16];
  undefined in_vf6 [16];
  undefined in_vf7 [16];
  undefined in_vf8 [16];
  undefined in_vf9 [16];
  undefined in_vf10 [16];
  undefined in_vf11 [16];
  undefined auVar5 [16];
  undefined auVar6 [16];
  
  uVar4 = 0x3f;
  iVar3 = 7;
  do {
    prefetch(avBBWorld[iVar3][1],0);
                    /* inlined from gra3dVu0.h */
    auVar5 = _lqc2((undefined  [16])avBBWorld[iVar3]);
    _vmulabc(in_vf4,auVar5);
    _vmaddabc(in_vf5,auVar5);
    _vmaddabc(in_vf6,auVar5);
    auVar6 = _vmaddbc(in_vf7,in_vf0);
    _vmulabc(in_vf8,auVar5);
    _vmaddabc(in_vf9,auVar5);
    _vmaddabc(in_vf10,auVar5);
    auVar5 = _vmaddbc(in_vf11,in_vf0);
    _vclip(auVar6,auVar6);
    _vnop();
    _vnop();
    _vnop();
    _vnop();
    _vnop();
    afVar1 = (float  [4])_sqc2(auVar5);
    avBBTransformed[iVar3] = afVar1;
    uVar2 = _cfc2(in_vc2);
    iVar3 = iVar3 + -1;
    uVar4 = uVar4 & uVar2;
  } while (iVar3 != -1);
                    /* end of inlined section */
  return (int)(uVar4 == 0);
}

void gra3dbbCalcCenter(float *vC, float *avBB[4]) {
  undefined in_vf0 [16];
  undefined auVar1 [16];
  undefined auVar2 [16];
  undefined auVar3 [16];
  undefined auVar4 [16];
  
                    /* inlined from g3dxVu0.h */
  auVar1 = _lqc2((undefined  [16])*avBB);
  auVar2 = _lqc2((undefined  [16])avBB[7]);
  auVar3 = _qmtc2(0x3f000000);
  _vmove(auVar1);
  auVar4 = _vaddbc(in_vf0,in_vf0);
  auVar4 = _vsub(auVar4,auVar3);
  _vmulabc(auVar1,auVar3);
  auVar1 = _vmaddbc(auVar2,auVar4);
  auVar1 = _sqc2(auVar1);
  *(undefined (*) [16])vC = auVar1;
                    /* end of inlined section */
  vC[3] = 1.0;
  return;
}

void gra3dbbCalcCenterBase(float *vCB, float *avBB[4]) {
	int iVertexIndex0;
	int iVertexIndex1;
	
  int iVar1;
  int iVar2;
  undefined in_vf0 [16];
  undefined auVar3 [16];
  undefined auVar4 [16];
  undefined auVar5 [16];
  undefined auVar6 [16];
  
  if (avBB[2][1] < (*avBB)[1]) {
    iVar2 = 0;
    iVar1 = 5;
  }
  else {
    iVar2 = 2;
    iVar1 = 7;
  }
                    /* inlined from g3dxVu0.h */
  auVar3 = _lqc2((undefined  [16])avBB[iVar2]);
  auVar4 = _lqc2((undefined  [16])avBB[iVar1]);
  auVar5 = _qmtc2(0x3f000000);
  _vmove(auVar3);
  auVar6 = _vaddbc(in_vf0,in_vf0);
  auVar6 = _vsub(auVar6,auVar5);
  _vmulabc(auVar3,auVar5);
  auVar3 = _vmaddbc(auVar4,auVar6);
  auVar3 = _sqc2(auVar3);
  *(undefined (*) [16])vCB = auVar3;
                    /* end of inlined section */
  vCB[3] = 1.0;
  return;
}

float gra3dbbCalcRadiusXZ(float *avBB[4]) {
	float vCenterBase[4];
	
  undefined auVar1 [16];
  undefined auVar2 [16];
  float vCenterBase [4];
  
  gra3dbbCalcCenterBase__FPfPA3_Cf(vCenterBase,avBB);
                    /* inlined from g3dxVu0.h */
  auVar1 = _lqc2((undefined  [16])vCenterBase);
  auVar2 = _lqc2((undefined  [16])*avBB);
  auVar1 = _vsub(auVar1,auVar2);
  auVar1 = _vmul(auVar1,auVar1);
  _vaddbc(auVar1,auVar1);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

void gra3dbbCalcInnerEllipse(float *vEllipse, float *avBB[4]) {
  float fVar1;
  float fVar2;
  
  *vEllipse = ABS((*avBB)[0] - avBB[1][0]) * 0.5;
  vEllipse[1] = ABS((*avBB)[1] - avBB[2][1]) * 0.5;
  fVar1 = avBB[4][2];
  fVar2 = (*avBB)[2];
  vEllipse[3] = 0.0;
  vEllipse[2] = ABS(fVar2 - fVar1) * 0.5;
  return;
}

void gra3dbbCopy(float *avBBDest[4], float *avBBSrc[4]) {
	int i;
	
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  
  iVar7 = 7;
  iVar2 = 0x70;
  while( true ) {
    puVar1 = (undefined4 *)((int)*avBBSrc + iVar2);
    prefetch(puVar1 + 4,0);
                    /* inlined from g3dxVu0.h */
    puVar3 = (undefined4 *)((int)*avBBDest + iVar2);
    uVar4 = puVar1[1];
    uVar5 = puVar1[2];
    uVar6 = puVar1[3];
    *puVar3 = *puVar1;
    puVar3[1] = uVar4;
    puVar3[2] = uVar5;
    puVar3[3] = uVar6;
    iVar7 = iVar7 + -1;
    if (iVar7 == -1) break;
    iVar2 = iVar7 * 0x10;
  }
  return;
}

void gra3dbbApplyFromBounds(float *avBBDest[4], float *vMin, float *vMax, float *mat[4]) {
	float *vDest;
	float fX;
	float fY;
	float fZ;
	float v[4];
	float *vDest;
	float fX;
	float fY;
	float fZ;
	float v[4];
	float *vDest;
	float fX;
	float fY;
	float fZ;
	float v[4];
	float *vDest;
	float fX;
	float fY;
	float fZ;
	float v[4];
	float *vDest;
	float fX;
	float fY;
	float fZ;
	float v[4];
	float *vDest;
	float fX;
	float fY;
	float fZ;
	float v[4];
	float *vDest;
	
  float fVar1;
  float local_b0;
  float local_ac;
  float local_a8;
  undefined4 local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float v [4];
  
                    /* inlined from g3dVu0Instance.h */
                    /* end of inlined section */
                    /* inlined from g3dVu0Instance.h */
  if (_10CVu0Matrix_s_pFuncLoadMatrix == (undefined1 *)0x0) {
    _SetLineInfo__FPCciT0T0("g3dVu0Instance.h",0x3d,(char *)&__FUNCTION___790,"s_pFuncLoadMatrix");
    g3ddbgAssert__FbPCce(_10CVu0Matrix_s_pFuncLoadMatrix != (undefined1 *)0x0,&DAT_003f1128);
  }
  (*(code *)_10CVu0Matrix_s_pFuncLoadMatrix)(mat);
  if (_10CVu0Matrix_s_pFuncApplyMatrixWithoutTrans == (undefined1 *)0x0) {
    _SetLineInfo__FPCciT0T0
              ("g3dVu0Instance.h",0x50,"ApplyWithoutTrans","s_pFuncApplyMatrixWithoutTrans");
    g3ddbgAssert__FbPCce
              (_10CVu0Matrix_s_pFuncApplyMatrixWithoutTrans != (undefined1 *)0x0,&DAT_003f1128);
  }
  (*(code *)_10CVu0Matrix_s_pFuncApplyMatrixWithoutTrans)(avBBDest,vMin);
  local_b0 = *vMax;
  local_ac = vMin[1];
  local_a8 = vMin[2];
  if (_10CVu0Matrix_s_pFuncApplyMatrixWithoutTrans == (undefined1 *)0x0) {
    _SetLineInfo__FPCciT0T0
              ("g3dVu0Instance.h",0x56,"ApplyWithoutTrans","s_pFuncApplyMatrixWithoutTrans");
    g3ddbgAssert__FbPCce
              (_10CVu0Matrix_s_pFuncApplyMatrixWithoutTrans != (undefined1 *)0x0,&DAT_003f1128);
  }
  fVar1 = 1.0;
  local_a4 = 0x3f800000;
  (*(code *)_10CVu0Matrix_s_pFuncApplyMatrixWithoutTrans)(avBBDest[1],&local_b0);
  local_a0 = *vMin;
  local_9c = vMax[1];
  local_98 = vMin[2];
  if (_10CVu0Matrix_s_pFuncApplyMatrixWithoutTrans == (undefined1 *)0x0) {
    _SetLineInfo__FPCciT0T0
              ("g3dVu0Instance.h",0x56,"ApplyWithoutTrans","s_pFuncApplyMatrixWithoutTrans");
    g3ddbgAssert__FbPCce
              (_10CVu0Matrix_s_pFuncApplyMatrixWithoutTrans != (undefined1 *)0x0,&DAT_003f1128);
  }
  local_94 = fVar1;
  (*(code *)_10CVu0Matrix_s_pFuncApplyMatrixWithoutTrans)(avBBDest[2],&local_a0);
  local_90 = *vMax;
  local_8c = vMax[1];
  local_88 = vMin[2];
  if (_10CVu0Matrix_s_pFuncApplyMatrixWithoutTrans == (undefined1 *)0x0) {
    _SetLineInfo__FPCciT0T0
              ("g3dVu0Instance.h",0x56,"ApplyWithoutTrans","s_pFuncApplyMatrixWithoutTrans");
    g3ddbgAssert__FbPCce
              (_10CVu0Matrix_s_pFuncApplyMatrixWithoutTrans != (undefined1 *)0x0,&DAT_003f1128);
  }
  local_84 = fVar1;
  (*(code *)_10CVu0Matrix_s_pFuncApplyMatrixWithoutTrans)(avBBDest[3],&local_90);
  local_80 = *vMin;
  local_7c = vMin[1];
  local_78 = vMax[2];
  if (_10CVu0Matrix_s_pFuncApplyMatrixWithoutTrans == (undefined1 *)0x0) {
    _SetLineInfo__FPCciT0T0
              ("g3dVu0Instance.h",0x56,"ApplyWithoutTrans","s_pFuncApplyMatrixWithoutTrans");
    g3ddbgAssert__FbPCce
              (_10CVu0Matrix_s_pFuncApplyMatrixWithoutTrans != (undefined1 *)0x0,&DAT_003f1128);
  }
  local_74 = fVar1;
  (*(code *)_10CVu0Matrix_s_pFuncApplyMatrixWithoutTrans)(avBBDest[4],&local_80);
  local_70 = *vMax;
  local_6c = vMin[1];
  local_68 = vMax[2];
  if (_10CVu0Matrix_s_pFuncApplyMatrixWithoutTrans == (undefined1 *)0x0) {
    _SetLineInfo__FPCciT0T0
              ("g3dVu0Instance.h",0x56,"ApplyWithoutTrans","s_pFuncApplyMatrixWithoutTrans");
    g3ddbgAssert__FbPCce
              (_10CVu0Matrix_s_pFuncApplyMatrixWithoutTrans != (undefined1 *)0x0,&DAT_003f1128);
  }
  local_64 = fVar1;
  (*(code *)_10CVu0Matrix_s_pFuncApplyMatrixWithoutTrans)(avBBDest[5],&local_70);
  v[0] = *vMin;
  v[1] = vMax[1];
  v[2] = vMax[2];
  if (_10CVu0Matrix_s_pFuncApplyMatrixWithoutTrans == (undefined1 *)0x0) {
    _SetLineInfo__FPCciT0T0
              ("g3dVu0Instance.h",0x56,"ApplyWithoutTrans","s_pFuncApplyMatrixWithoutTrans");
    g3ddbgAssert__FbPCce
              (_10CVu0Matrix_s_pFuncApplyMatrixWithoutTrans != (undefined1 *)0x0,&DAT_003f1128);
  }
  v[3] = fVar1;
  (*(code *)_10CVu0Matrix_s_pFuncApplyMatrixWithoutTrans)(avBBDest[6],v);
  if (_10CVu0Matrix_s_pFuncApplyMatrixWithoutTrans == (undefined1 *)0x0) {
    _SetLineInfo__FPCciT0T0
              ("g3dVu0Instance.h",0x50,"ApplyWithoutTrans","s_pFuncApplyMatrixWithoutTrans");
    g3ddbgAssert__FbPCce
              (_10CVu0Matrix_s_pFuncApplyMatrixWithoutTrans != (undefined1 *)0x0,&DAT_003f1128);
  }
  (*(code *)_10CVu0Matrix_s_pFuncApplyMatrixWithoutTrans)(avBBDest[7],vMax);
  return;
}

void gra3dbbFromBounds(float *avBBDest[4], float *vMin, float *vMax) {
	float *pv0;
	
  undefined8 uVar1;
  float fVar2;
  float fVar3;
  
  uVar1 = *(undefined8 *)vMin;
                    /* inlined from g3dxVu0.h */
  fVar2 = vMin[2];
  fVar3 = vMin[3];
  (*avBBDest)[0] = (float)uVar1;
  (*avBBDest)[1] = (float)((ulong)uVar1 >> 0x20);
  (*avBBDest)[2] = fVar2;
  (*avBBDest)[3] = fVar3;
                    /* end of inlined section */
                    /* inlined from g3dxVu0.h */
                    /* end of inlined section */
  avBBDest[1][0] = *vMax;
  avBBDest[1][1] = vMin[1];
  fVar2 = vMin[2];
  avBBDest[1][3] = 1.0;
  avBBDest[1][2] = fVar2;
  avBBDest[2][0] = *vMin;
  avBBDest[2][1] = vMax[1];
  fVar2 = vMin[2];
  avBBDest[2][3] = 1.0;
  avBBDest[2][2] = fVar2;
  avBBDest[3][0] = *vMax;
  avBBDest[3][1] = vMax[1];
  fVar2 = vMin[2];
  avBBDest[3][3] = 1.0;
  avBBDest[3][2] = fVar2;
  avBBDest[4][0] = *vMin;
  avBBDest[4][1] = vMin[1];
  fVar2 = vMax[2];
  avBBDest[4][3] = 1.0;
  avBBDest[4][2] = fVar2;
  avBBDest[5][0] = *vMax;
  avBBDest[5][1] = vMin[1];
  avBBDest[5][2] = vMax[2];
  avBBDest[5][3] = 1.0;
  avBBDest[6][0] = *vMin;
  avBBDest[6][1] = vMax[1];
  fVar2 = vMax[2];
  avBBDest[6][3] = 1.0;
  avBBDest[6][2] = fVar2;
  uVar1 = *(undefined8 *)vMax;
                    /* inlined from g3dxVu0.h */
  fVar2 = vMax[2];
  fVar3 = vMax[3];
  avBBDest[7][0] = (float)uVar1;
  avBBDest[7][1] = (float)((ulong)uVar1 >> 0x20);
  avBBDest[7][2] = fVar2;
  avBBDest[7][3] = fVar3;
  return;
}
