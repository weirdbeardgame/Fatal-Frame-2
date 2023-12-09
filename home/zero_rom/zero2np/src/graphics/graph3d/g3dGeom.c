// STATUS: NOT STARTED

#include "g3dGeom.h"

float g3dCalcAngle(float *vDirection, float *vOrigin, float *vTarget) {
	float vDir0[4];
	float vDir1[4];
	
  float fVar1;
  undefined in_vf0 [16];
  undefined in_vf1 [16];
  undefined auVar2 [16];
  undefined auVar3 [16];
  undefined auVar4 [16];
  undefined4 uVar5;
  float vDir0 [4];
  float vDir1 [4];
  
                    /* inlined from g3dxVu0.h */
  auVar3 = _lqc2(*(undefined (*) [16])vOrigin);
  auVar4 = _lqc2(*(undefined (*) [16])vTarget);
  auVar3 = _vsub(auVar3,auVar4);
  auVar4 = _vmul(auVar3,auVar3);
  _vaddabc(auVar4,auVar4);
  auVar4 = _vmaddbc(in_vf1,auVar4);
  _vnop();
  _vnop();
  _vnop();
  _vrsqrt(in_vf0,auVar4);
  _vmul(auVar3,in_vf0);
  uVar5 = _vwaitq();
  auVar3 = _vmulq(auVar3,uVar5);
  auVar3 = _sqc2(auVar3);
  auVar4 = _lqc2(*(undefined (*) [16])vDirection);
  auVar2 = _vmul(auVar4,auVar4);
  _vnop();
  _vnop();
  _vnop();
  _vaddabc(auVar2,auVar2);
  auVar2 = _vmaddbc(in_vf1,auVar2);
  _vnop();
  _vnop();
  _vnop();
  uVar5 = _vrsqrt(in_vf0,auVar2);
  _vsubbc(in_vf0,in_vf0);
  _vnop();
  _vnop();
  _vnop();
  _vnop();
  _vnop();
  _vnop();
  _vnop();
  _vnop();
  _vnop();
  _vnop();
  _vnop();
  auVar4 = _vmulq(auVar4,uVar5);
  auVar4 = _sqc2(auVar4);
  auVar3 = _lqc2(auVar3);
  auVar4 = _lqc2(auVar4);
  auVar3 = _vmul(auVar3,auVar4);
  _vaddabc(auVar3,auVar3);
  auVar3 = _vmaddbc(in_vf1,auVar3);
  auVar3 = _qmfc2(auVar3._0_4_);
  fVar1 = acosf(-auVar3._0_4_);
  return fVar1;
}

void g3dMatrixSetPosition(float *mat[4], float *vPos) {
	float *pv0;
	
  float fVar1;
  float fVar2;
  float fVar3;
  
                    /* inlined from g3dxVu0.h */
  fVar1 = vPos[1];
  fVar2 = vPos[2];
  fVar3 = vPos[3];
  mat[3][0] = *vPos;
  mat[3][1] = fVar1;
  mat[3][2] = fVar2;
  mat[3][3] = fVar3;
  return;
}

void g3dMatrixSetDirection(float *mat[4], float *vDir, int bFixUp) {
	float vFixUp[4];
	float &rvY[4];
	float &rvZ[4];
	
  float afVar1 [4];
  float (*pafVar2) [4];
  float (*pafVar3) [4];
  undefined in_vf0 [16];
  undefined in_vf1 [16];
  undefined auVar4 [16];
  undefined auVar5 [16];
  undefined4 uVar6;
  float vFixUp [4];
  
  pafVar3 = mat[1];
  pafVar2 = mat[2];
  vFixUp[2] = (float)_DAT_003b2118;
  vFixUp[3] = (float)((ulong)_DAT_003b2118 >> 0x20);
  vFixUp[0] = (float)DAT_003b2110;
  vFixUp[1] = (float)((ulong)DAT_003b2110 >> 0x20);
  if (bFixUp == 0) {
                    /* inlined from g3dxVu0.h */
    vFixUp[2] = mat[1][2];
    vFixUp[3] = mat[1][3];
    vFixUp[0] = (float)*(undefined8 *)*pafVar3;
    vFixUp[1] = (float)((ulong)*(undefined8 *)*pafVar3 >> 0x20);
  }
  auVar4 = _lqc2(*(undefined (*) [16])vDir);
  auVar5 = _vmul(auVar4,auVar4);
  _vnop();
  _vnop();
  _vnop();
  _vaddabc(auVar5,auVar5);
  auVar5 = _vmaddbc(in_vf1,auVar5);
  _vnop();
  _vnop();
  _vnop();
  uVar6 = _vrsqrt(in_vf0,auVar5);
  _vsubbc(in_vf0,in_vf0);
  _vnop();
  _vnop();
  _vnop();
  _vnop();
  _vnop();
  _vnop();
  _vnop();
  _vnop();
  _vnop();
  _vnop();
  _vnop();
  auVar4 = _vmulq(auVar4,uVar6);
  afVar1 = (float  [4])_sqc2(auVar4);
  *pafVar2 = afVar1;
  auVar4._4_4_ = vFixUp[1];
  auVar4._0_4_ = vFixUp[0];
  auVar4._8_4_ = vFixUp[2];
  auVar4._12_4_ = vFixUp[3];
  auVar4 = _lqc2(auVar4);
  auVar5 = _lqc2((undefined  [16])*pafVar2);
  _vopmula(auVar4,auVar5);
  auVar4 = _vopmsub(auVar5,auVar4);
  afVar1 = (float  [4])_sqc2(auVar4);
  *mat = afVar1;
  auVar4 = _lqc2((undefined  [16])*mat);
  auVar5 = _vmul(auVar4,auVar4);
  _vnop();
  _vnop();
  _vnop();
  _vaddabc(auVar5,auVar5);
  auVar5 = _vmaddbc(in_vf1,auVar5);
  _vnop();
  _vnop();
  _vnop();
  uVar6 = _vrsqrt(in_vf0,auVar5);
  _vsubbc(in_vf0,in_vf0);
  _vnop();
  _vnop();
  _vnop();
  _vnop();
  _vnop();
  _vnop();
  _vnop();
  _vnop();
  _vnop();
  _vnop();
  _vnop();
  auVar4 = _vmulq(auVar4,uVar6);
  afVar1 = (float  [4])_sqc2(auVar4);
  *mat = afVar1;
  auVar4 = _lqc2((undefined  [16])*pafVar2);
  auVar5 = _lqc2((undefined  [16])*mat);
  _vopmula(auVar4,auVar5);
  auVar4 = _vopmsub(auVar5,auVar4);
  afVar1 = (float  [4])_sqc2(auVar4);
  *pafVar3 = afVar1;
  auVar4 = _lqc2((undefined  [16])*pafVar3);
  auVar5 = _vmul(auVar4,auVar4);
  _vnop();
  _vnop();
  _vnop();
  _vaddabc(auVar5,auVar5);
  auVar5 = _vmaddbc(in_vf1,auVar5);
  _vnop();
  _vnop();
  _vnop();
  uVar6 = _vrsqrt(in_vf0,auVar5);
  _vsubbc(in_vf0,in_vf0);
  _vnop();
  _vnop();
  _vnop();
  _vnop();
  _vnop();
  _vnop();
  _vnop();
  _vnop();
  _vnop();
  _vnop();
  _vnop();
  auVar4 = _vmulq(auVar4,uVar6);
  afVar1 = (float  [4])_sqc2(auVar4);
  *pafVar3 = afVar1;
  return;
}

void g3dMatrixSetTarget(float *mat[4], float *vTarget, int bFixUp) {
	float v[4];
	
  undefined auVar1 [16];
  undefined auVar2 [16];
  float v [4];
  
                    /* inlined from g3dxVu0.h */
                    /* end of inlined section */
                    /* inlined from g3dxVu0.h */
  auVar1 = _lqc2(*(undefined (*) [16])vTarget);
  auVar2 = _lqc2((undefined  [16])mat[3]);
  auVar1 = _vsub(auVar1,auVar2);
  v = (float  [4])_sqc2(auVar1);
                    /* end of inlined section */
  g3dMatrixSetDirection__FPA3_fPCfi(mat,v,bFixUp);
  return;
}

void g3dMatrixSetRoll(float *mat[4], float fRoll) {
	float matRot[4][4];
	float *pm1[4];
	float rz;
	float f;
	float fRange;
	float f1;
	float f2;
	
  float afVar1 [4];
  float fVar2;
  float fVar3;
  float x;
  float fVar4;
  undefined auVar5 [16];
  undefined auVar6 [16];
  undefined auVar7 [16];
  undefined auVar8 [16];
  undefined auVar9 [16];
  undefined auVar10 [16];
  undefined auVar11 [16];
  undefined auVar12 [16];
  float matRot [4] [4];
  
  fVar3 = DAT_003ee370;
  fVar2 = DAT_003ee36c;
                    /* inlined from g3dxVu0.h */
  x = -fRoll;
                    /* end of inlined section */
                    /* inlined from g3dxVu0.h */
                    /* inlined from g3dMath.h */
                    /* end of inlined section */
                    /* inlined from g3dMath.h */
                    /* end of inlined section */
                    /* inlined from g3dMath.h */
                    /* end of inlined section */
                    /* inlined from g3dxVu0.h */
                    /* end of inlined section */
                    /* inlined from g3dMath.h */
  if (DAT_003ee36c < x) {
    fVar4 = DAT_003ee36c;
    x = fmodf(x,DAT_003ee370);
    if (fVar4 < x) {
      x = x - fVar3;
    }
    else if (x < -fVar2) {
      x = x + fVar3;
    }
  }
                    /* inlined from g3dxVu0.h */
  sceVu0RotMatrixZ(x,matRot,0x3b4f30);
  auVar5 = _lqc2((undefined  [16])*mat);
  auVar6 = _lqc2((undefined  [16])mat[1]);
  auVar7 = _lqc2((undefined  [16])mat[2]);
  auVar8 = _lqc2((undefined  [16])mat[3]);
  auVar9 = _lqc2((undefined  [16])matRot[0]);
  auVar10 = _lqc2((undefined  [16])matRot[1]);
  auVar11 = _lqc2((undefined  [16])matRot[2]);
  auVar12 = _lqc2((undefined  [16])matRot[3]);
  _vmulabc(auVar5,auVar9);
  _vmaddabc(auVar6,auVar9);
  _vmaddabc(auVar7,auVar9);
  auVar9 = _vmaddbc(auVar8,auVar9);
  _vmulabc(auVar5,auVar10);
  _vmaddabc(auVar6,auVar10);
  _vmaddabc(auVar7,auVar10);
  auVar10 = _vmaddbc(auVar8,auVar10);
  _vmulabc(auVar5,auVar11);
  _vmaddabc(auVar6,auVar11);
  _vmaddabc(auVar7,auVar11);
  auVar11 = _vmaddbc(auVar8,auVar11);
  _vmulabc(auVar5,auVar12);
  _vmaddabc(auVar6,auVar12);
  _vmaddabc(auVar7,auVar12);
  auVar5 = _vmaddbc(auVar8,auVar12);
  afVar1 = (float  [4])_sqc2(auVar9);
  *mat = afVar1;
  afVar1 = (float  [4])_sqc2(auVar10);
  mat[1] = afVar1;
  afVar1 = (float  [4])_sqc2(auVar11);
  mat[2] = afVar1;
  afVar1 = (float  [4])_sqc2(auVar5);
  mat[3] = afVar1;
  return;
}

float g3dMatrixGetRoll(float *mat[4]) {
  undefined in_vf1 [16];
  undefined auVar1 [16];
  
                    /* inlined from g3dxVu0.h */
  auVar1 = _lqc2((undefined  [16])*mat);
  auVar1 = _vmul(auVar1,auVar1);
  _vaddbc(in_vf1,auVar1);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

void g3dMatrixRotationByAxis(float *mat[4], float *vAxis, float fAngle) {
	float matRot[4][4];
	
  float afVar1 [4];
  float fVar2;
  float fVar3;
  float fVar4;
  undefined auVar5 [16];
  undefined auVar6 [16];
  undefined auVar7 [16];
  undefined auVar8 [16];
  undefined auVar9 [16];
  undefined auVar10 [16];
  undefined auVar11 [16];
  undefined auVar12 [16];
  undefined auVar13 [16];
  float matRot [4] [4];
  float local_c0;
  float fStack_bc;
  float fStack_b8;
  
                    /* inlined from g3dxVu0.h */
                    /* end of inlined section */
                    /* inlined from g3dxVu0.h */
                    /* end of inlined section */
                    /* inlined from g3dxVu0.h */
                    /* end of inlined section */
                    /* inlined from g3dxVu0.h */
                    /* end of inlined section */
                    /* inlined from g3dxVu0.h */
  fVar2 = sinf(fAngle * 0.5);
  auVar6 = _qmtc2(fVar2);
  auVar5 = _lqc2(*(undefined (*) [16])vAxis);
  auVar5 = _vmulbc(auVar5,auVar6);
  auVar5 = _sqc2(auVar5);
  fVar2 = cosf(fAngle * 0.5);
  fStack_bc = auVar5._4_4_;
  fStack_b8 = auVar5._8_4_;
  fVar3 = -fStack_bc;
  fVar4 = -fStack_b8;
  local_c0 = auVar5._0_4_;
  auVar6._4_4_ = fStack_b8;
  auVar6._0_4_ = fVar2;
  auVar6._8_4_ = fVar3;
  auVar6._12_4_ = local_c0;
  auVar6 = _lqc2(auVar6);
  auVar7._4_4_ = fVar2;
  auVar7._0_4_ = fVar4;
  auVar7._8_4_ = local_c0;
  auVar7._12_4_ = fStack_bc;
  auVar7 = _lqc2(auVar7);
  auVar8._4_4_ = -local_c0;
  auVar8._0_4_ = fStack_bc;
  auVar8._8_4_ = fVar2;
  auVar8._12_4_ = fStack_b8;
  auVar8 = _lqc2(auVar8);
  auVar9._4_4_ = fVar3;
  auVar9._0_4_ = -local_c0;
  auVar9._8_4_ = fVar4;
  auVar9._12_4_ = fVar2;
  auVar9 = _lqc2(auVar9);
  auVar10._4_4_ = fStack_b8;
  auVar10._0_4_ = fVar2;
  auVar10._8_4_ = fVar3;
  auVar10._12_4_ = -local_c0;
  auVar10 = _lqc2(auVar10);
  auVar11._4_4_ = fVar2;
  auVar11._0_4_ = fVar4;
  auVar11._8_4_ = local_c0;
  auVar11._12_4_ = fVar3;
  auVar11 = _lqc2(auVar11);
  auVar12._4_4_ = -local_c0;
  auVar12._0_4_ = fStack_bc;
  auVar12._8_4_ = fVar2;
  auVar12._12_4_ = fVar4;
  auVar12 = _lqc2(auVar12);
  auVar13._12_4_ = fVar2;
  auVar13._0_12_ = auVar5._0_12_;
  auVar13 = _lqc2(auVar13);
  _vmulabc(auVar6,auVar10);
  _vmaddabc(auVar7,auVar10);
  _vmaddabc(auVar8,auVar10);
  auVar5 = _vmaddbc(auVar9,auVar10);
  _vmulabc(auVar6,auVar11);
  _vmaddabc(auVar7,auVar11);
  _vmaddabc(auVar8,auVar11);
  auVar10 = _vmaddbc(auVar9,auVar11);
  _vmulabc(auVar6,auVar12);
  _vmaddabc(auVar7,auVar12);
  _vmaddabc(auVar8,auVar12);
  auVar11 = _vmaddbc(auVar9,auVar12);
  _vmulabc(auVar6,auVar13);
  _vmaddabc(auVar7,auVar13);
  _vmaddabc(auVar8,auVar13);
  auVar8 = _vmaddbc(auVar9,auVar13);
  auVar5 = _sqc2(auVar5);
  auVar6 = _sqc2(auVar10);
  auVar7 = _sqc2(auVar11);
  auVar8 = _sqc2(auVar8);
  auVar9 = _lqc2((undefined  [16])*mat);
  auVar10 = _lqc2((undefined  [16])mat[1]);
  auVar11 = _lqc2((undefined  [16])mat[2]);
  auVar12 = _lqc2((undefined  [16])mat[3]);
  auVar5 = _lqc2(auVar5);
  auVar6 = _lqc2(auVar6);
  auVar7 = _lqc2(auVar7);
  auVar8 = _lqc2(auVar8);
  _vmulabc(auVar9,auVar5);
  _vmaddabc(auVar10,auVar5);
  _vmaddabc(auVar11,auVar5);
  auVar5 = _vmaddbc(auVar12,auVar5);
  _vmulabc(auVar9,auVar6);
  _vmaddabc(auVar10,auVar6);
  _vmaddabc(auVar11,auVar6);
  auVar6 = _vmaddbc(auVar12,auVar6);
  _vmulabc(auVar9,auVar7);
  _vmaddabc(auVar10,auVar7);
  _vmaddabc(auVar11,auVar7);
  auVar7 = _vmaddbc(auVar12,auVar7);
  _vmulabc(auVar9,auVar8);
  _vmaddabc(auVar10,auVar8);
  _vmaddabc(auVar11,auVar8);
  auVar8 = _vmaddbc(auVar12,auVar8);
  afVar1 = (float  [4])_sqc2(auVar5);
  *mat = afVar1;
  afVar1 = (float  [4])_sqc2(auVar6);
  mat[1] = afVar1;
  afVar1 = (float  [4])_sqc2(auVar7);
  mat[2] = afVar1;
  afVar1 = (float  [4])_sqc2(auVar8);
  mat[3] = afVar1;
                    /* end of inlined section */
  g3dMatrixSetDirection__FPA3_fPCfi(mat,(float *)mat[2],1);
  return;
}

void g3dMatrixInverseTransform(float *matDest[4], float *matSrc[4]) {
	float matWork[4][4];
	float vScale[4];
	float vTrans[4];
	
  float afVar1 [4];
  undefined auVar2 [16];
  undefined auVar3 [16];
  undefined auVar4 [16];
  undefined auVar5 [16];
  undefined auVar6 [16];
  undefined auVar7 [16];
  undefined auVar8 [16];
  undefined in_vf0 [16];
  undefined extraout_vf1 [16];
  undefined auVar9 [16];
  undefined4 uVar10;
  float matWork [4] [4];
  float vScale [4];
  float vTrans [4];
  
                    /* inlined from g3dxVu0.h */
  auVar5 = _pextlw(SUB128(*(undefined (*) [12])matSrc[1],0),SUB168(*matSrc,0));
  auVar6 = _pextuw((undefined  [16])matSrc[1],(undefined  [16])*matSrc);
  auVar7 = _pextlw(SUB128(*(undefined (*) [12])matSrc[3],0),SUB128(*(undefined (*) [12])matSrc[2],0)
                  );
  auVar8 = _pextuw((undefined  [16])matSrc[3],(undefined  [16])matSrc[2]);
  matWork[0] = (float  [4])_pcpyld(auVar7,auVar5);
  matWork[1] = (float  [4])_pcpyud(auVar5,auVar7);
  matWork[2] = (float  [4])_pcpyld(auVar8,auVar6);
  matWork[3] = (float  [4])_pcpyud(auVar6,auVar8);
                    /* end of inlined section */
  g3dMatrixSetColumn__FPA3_fPCfi(matWork,g_v0001,3);
                    /* inlined from g3dxVu0.h */
  auVar5 = _lqc2((undefined  [16])matWork[0]);
  auVar6 = _lqc2((undefined  [16])matWork[0]);
  auVar5 = _vmul(auVar5,auVar6);
  _vaddabc(auVar5,auVar5);
  auVar5 = _vmaddbc(extraout_vf1,auVar5);
  auVar5 = _qmfc2(auVar5._0_4_);
  auVar5 = _qmtc2(auVar5._0_4_);
  _vrsqrt(in_vf0,auVar5);
  uVar10 = _vwaitq();
  auVar5 = _vaddq(in_vf0,uVar10);
  auVar2 = _qmfc2(auVar5._0_4_);
  auVar5 = _lqc2((undefined  [16])matWork[1]);
  auVar6 = _lqc2((undefined  [16])matWork[1]);
  auVar5 = _vmul(auVar5,auVar6);
  _vaddabc(auVar5,auVar5);
  auVar5 = _vmaddbc(extraout_vf1,auVar5);
  auVar5 = _qmfc2(auVar5._0_4_);
  auVar5 = _qmtc2(auVar5._0_4_);
  _vrsqrt(in_vf0,auVar5);
  uVar10 = _vwaitq();
  auVar5 = _vaddq(in_vf0,uVar10);
  auVar3 = _qmfc2(auVar5._0_4_);
  auVar5 = _lqc2((undefined  [16])matWork[2]);
  auVar6 = _lqc2((undefined  [16])matWork[2]);
  auVar5 = _vmul(auVar5,auVar6);
  _vaddabc(auVar5,auVar5);
  auVar5 = _vmaddbc(extraout_vf1,auVar5);
  auVar5 = _qmfc2(auVar5._0_4_);
  auVar5 = _qmtc2(auVar5._0_4_);
  _vrsqrt(in_vf0,auVar5);
  uVar10 = _vwaitq();
  auVar5 = _vaddq(in_vf0,uVar10);
  auVar4 = _qmfc2(auVar5._0_4_);
  auVar6 = _qmtc2(auVar2._0_4_);
  auVar5 = _lqc2((undefined  [16])matWork[0]);
  auVar5 = _vmulbc(auVar5,auVar6);
  auVar5 = _sqc2(auVar5);
  auVar7 = _qmtc2(auVar3._0_4_);
  auVar6 = _lqc2((undefined  [16])matWork[1]);
  auVar6 = _vmulbc(auVar6,auVar7);
  auVar6 = _sqc2(auVar6);
  auVar8 = _qmtc2(auVar4._0_4_);
  auVar7 = _lqc2((undefined  [16])matWork[2]);
  auVar7 = _vmulbc(auVar7,auVar8);
  auVar7 = _sqc2(auVar7);
  auVar8 = _lqc2((undefined  [16])g_v0001);
  auVar9 = _lqc2((undefined  [16])matSrc[3]);
  auVar8 = _vsub(auVar8,auVar9);
  auVar8 = _sqc2(auVar8);
  auVar3._4_4_ = auVar3._0_4_;
  auVar3._0_4_ = auVar2._0_4_;
  auVar3._8_4_ = auVar4._0_4_;
  auVar3._12_4_ = vScale[3];
  auVar2 = _lqc2(auVar3);
  auVar5 = _lqc2(auVar5);
  auVar6 = _lqc2(auVar6);
  auVar7 = _lqc2(auVar7);
  auVar3 = _lqc2((undefined  [16])matWork[3]);
  auVar4 = _vmulbc(auVar5,auVar2);
  auVar9 = _vmulbc(auVar6,auVar2);
  auVar2 = _vmulbc(auVar7,auVar2);
  auVar5 = _sqc2(auVar3);
  auVar6 = _sqc2(auVar4);
  auVar7 = _sqc2(auVar9);
  auVar3 = _sqc2(auVar2);
  auVar2 = _lqc2(auVar8);
  auVar6 = _lqc2(auVar6);
  auVar7 = _lqc2(auVar7);
  auVar8 = _lqc2(auVar3);
  auVar5 = _lqc2(auVar5);
  _vmulabc(auVar6,auVar2);
  _vmaddabc(auVar7,auVar2);
  _vmaddabc(auVar8,auVar2);
  auVar5 = _vmaddbc(auVar5,auVar2);
  afVar1 = (float  [4])_sqc2(auVar6);
  *matDest = afVar1;
  afVar1 = (float  [4])_sqc2(auVar7);
  matDest[1] = afVar1;
  afVar1 = (float  [4])_sqc2(auVar8);
  matDest[2] = afVar1;
  afVar1 = (float  [4])_sqc2(auVar5);
  matDest[3] = afVar1;
  return;
}

void g3dMatrixSetColumn(float *mat[4], float *v, int iCol) {
	static char __FUNCTION__[19] = {
		/* [0] = */ 103,
		/* [1] = */ 51,
		/* [2] = */ 100,
		/* [3] = */ 77,
		/* [4] = */ 97,
		/* [5] = */ 116,
		/* [6] = */ 114,
		/* [7] = */ 105,
		/* [8] = */ 120,
		/* [9] = */ 83,
		/* [10] = */ 101,
		/* [11] = */ 116,
		/* [12] = */ 67,
		/* [13] = */ 111,
		/* [14] = */ 108,
		/* [15] = */ 117,
		/* [16] = */ 109,
		/* [17] = */ 110,
		/* [18] = */ 0
	};
	
  float *pfVar1;
  
  if (3 < iCol) {
    _SetLineInfo__FPCciT0T0("g3dGeom.c",299,"g3dMatrixSetColumn","iCol < 4");
    g3ddbgAssert__FbPCce(false,"iCol : %d");
  }
  pfVar1 = *mat + iCol;
  *pfVar1 = *v;
  pfVar1[4] = v[1];
  pfVar1[8] = v[2];
  pfVar1[0xc] = v[3];
  return;
}

void g3dMatrixSetColumnXYZ(float *mat[4], float *v, int iCol) {
	static char __FUNCTION__[22] = {
		/* [0] = */ 103,
		/* [1] = */ 51,
		/* [2] = */ 100,
		/* [3] = */ 77,
		/* [4] = */ 97,
		/* [5] = */ 116,
		/* [6] = */ 114,
		/* [7] = */ 105,
		/* [8] = */ 120,
		/* [9] = */ 83,
		/* [10] = */ 101,
		/* [11] = */ 116,
		/* [12] = */ 67,
		/* [13] = */ 111,
		/* [14] = */ 108,
		/* [15] = */ 117,
		/* [16] = */ 109,
		/* [17] = */ 110,
		/* [18] = */ 88,
		/* [19] = */ 89,
		/* [20] = */ 90,
		/* [21] = */ 0
	};
	
  float *pfVar1;
  
  if (2 < iCol) {
    _SetLineInfo__FPCciT0T0("g3dGeom.c",0x138,"g3dMatrixSetColumnXYZ","iCol < 3");
    g3ddbgAssert__FbPCce(false,"iCol : %d");
  }
  pfVar1 = *mat + iCol;
  *pfVar1 = *v;
  pfVar1[4] = v[1];
  pfVar1[8] = v[2];
  return;
}

static void _PlaneFromMatrix(float *plane, float *mat[4], int iCol) {
	static char __FUNCTION__[17] = {
		/* [0] = */ 95,
		/* [1] = */ 80,
		/* [2] = */ 108,
		/* [3] = */ 97,
		/* [4] = */ 110,
		/* [5] = */ 101,
		/* [6] = */ 70,
		/* [7] = */ 114,
		/* [8] = */ 111,
		/* [9] = */ 109,
		/* [10] = */ 77,
		/* [11] = */ 97,
		/* [12] = */ 116,
		/* [13] = */ 114,
		/* [14] = */ 105,
		/* [15] = */ 120,
		/* [16] = */ 0
	};
	
  float *pfVar1;
  
  if (2 < iCol) {
    _SetLineInfo__FPCciT0T0("g3dGeom.c",0x151,"_PlaneFromMatrix","iCol < 3");
    g3ddbgAssert__FbPCce(false,"iCol : %d");
  }
  pfVar1 = *mat + iCol;
  *plane = *pfVar1;
  plane[1] = pfVar1[4];
  plane[2] = pfVar1[8];
  plane[3] = pfVar1[0xc];
  return;
}

void g3dPlaneFromMatrixZ(float *plane, float *mat[4]) {
  _PlaneFromMatrix__FPfPA3_Cfi(plane,mat,2);
  return;
}

void g3dCalcPlaneFromPointNormal(float *plane, float *vPoint, float *vNormal) {
  undefined8 uVar1;
  float fVar2;
  float fVar3;
  undefined in_vf1 [16];
  undefined auVar4 [16];
  undefined auVar5 [16];
  
  uVar1 = *(undefined8 *)vNormal;
                    /* inlined from g3dxVu0.h */
  fVar2 = vNormal[2];
  fVar3 = vNormal[3];
  *plane = (float)uVar1;
  plane[1] = (float)((ulong)uVar1 >> 0x20);
  plane[2] = fVar2;
  plane[3] = fVar3;
  auVar4 = _lqc2(*(undefined (*) [16])vNormal);
  auVar5 = _lqc2(*(undefined (*) [16])vPoint);
  auVar4 = _vmul(auVar4,auVar5);
  _vaddabc(auVar4,auVar4);
  auVar4 = _vmaddbc(in_vf1,auVar4);
  auVar4 = _qmfc2(auVar4._0_4_);
  plane[3] = -auVar4._0_4_;
  return;
}

void g3dCalcPlaneFromPoints(float *plane, float *vP0, float *vP1, float *vP2) {
	float vNorm[4];
	float vCross[4];
	float vDir01[4];
	float vDir02[4];
	
  undefined in_vf0 [16];
  undefined in_vf1 [16];
  undefined auVar1 [16];
  undefined auVar2 [16];
  undefined auVar3 [16];
  undefined4 uVar4;
  float vNorm [4];
  float vCross [4];
  float vDir01 [4];
  float vDir02 [4];
  
                    /* inlined from g3dxVu0.h */
  auVar1 = _lqc2(*(undefined (*) [16])vP1);
  auVar2 = _lqc2(*(undefined (*) [16])vP0);
  auVar1 = _vsub(auVar1,auVar2);
  auVar2 = _vmul(auVar1,auVar1);
  _vaddabc(auVar2,auVar2);
  auVar2 = _vmaddbc(in_vf1,auVar2);
  _vnop();
  _vnop();
  _vnop();
  _vrsqrt(in_vf0,auVar2);
  _vmul(auVar1,in_vf0);
  uVar4 = _vwaitq();
  auVar1 = _vmulq(auVar1,uVar4);
  auVar1 = _sqc2(auVar1);
  auVar2 = _lqc2(*(undefined (*) [16])vP2);
  auVar3 = _lqc2(*(undefined (*) [16])vP0);
  auVar2 = _vsub(auVar2,auVar3);
  auVar3 = _vmul(auVar2,auVar2);
  _vaddabc(auVar3,auVar3);
  auVar3 = _vmaddbc(in_vf1,auVar3);
  _vnop();
  _vnop();
  _vnop();
  _vrsqrt(in_vf0,auVar3);
  _vmul(auVar2,in_vf0);
  uVar4 = _vwaitq();
  auVar2 = _vmulq(auVar2,uVar4);
  auVar2 = _sqc2(auVar2);
  auVar1 = _lqc2(auVar1);
  auVar2 = _lqc2(auVar2);
  _vopmula(auVar1,auVar2);
  auVar1 = _vopmsub(auVar2,auVar1);
  auVar1 = _sqc2(auVar1);
  auVar1 = _lqc2(auVar1);
  auVar2 = _vmul(auVar1,auVar1);
  _vnop();
  _vnop();
  _vnop();
  _vaddabc(auVar2,auVar2);
  auVar2 = _vmaddbc(in_vf1,auVar2);
  _vnop();
  _vnop();
  _vnop();
  uVar4 = _vrsqrt(in_vf0,auVar2);
  _vsubbc(in_vf0,in_vf0);
  _vnop();
  _vnop();
  _vnop();
  _vnop();
  _vnop();
  _vnop();
  _vnop();
  _vnop();
  _vnop();
  _vnop();
  _vnop();
  auVar1 = _vmulq(auVar1,uVar4);
  vNorm = (float  [4])_sqc2(auVar1);
                    /* end of inlined section */
  g3dCalcPlaneFromPointNormal__FPfPCfT1(plane,vP0,vNorm);
  return;
}

int g3dCalcIntersectionSphereAndLine(float *avRet[4], float *vCenter, float fRadius, float *vStart, float *vDir) {
	static char __FUNCTION__[33] = {
		/* [0] = */ 103,
		/* [1] = */ 51,
		/* [2] = */ 100,
		/* [3] = */ 67,
		/* [4] = */ 97,
		/* [5] = */ 108,
		/* [6] = */ 99,
		/* [7] = */ 73,
		/* [8] = */ 110,
		/* [9] = */ 116,
		/* [10] = */ 101,
		/* [11] = */ 114,
		/* [12] = */ 115,
		/* [13] = */ 101,
		/* [14] = */ 99,
		/* [15] = */ 116,
		/* [16] = */ 105,
		/* [17] = */ 111,
		/* [18] = */ 110,
		/* [19] = */ 83,
		/* [20] = */ 112,
		/* [21] = */ 104,
		/* [22] = */ 101,
		/* [23] = */ 114,
		/* [24] = */ 101,
		/* [25] = */ 65,
		/* [26] = */ 110,
		/* [27] = */ 100,
		/* [28] = */ 76,
		/* [29] = */ 105,
		/* [30] = */ 110,
		/* [31] = */ 101,
		/* [32] = */ 0
	};
	float vStartTrans[4];
	float vDirNormalized[4];
	float fB;
	float fC;
	float fD;
	
  float afVar1 [4];
  float fVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  undefined in_vf0 [16];
  undefined in_vf1 [16];
  undefined auVar6 [16];
  undefined auVar7 [16];
  undefined auVar8 [16];
  undefined auVar9 [16];
  undefined4 uVar10;
  float vStartTrans [4];
  float vDirNormalized [4];
  
                    /* inlined from g3dxVu0.h */
  auVar7 = _lqc2(*(undefined (*) [16])vStart);
  auVar8 = _lqc2(*(undefined (*) [16])vCenter);
  auVar7 = _vsub(auVar7,auVar8);
  auVar7 = _sqc2(auVar7);
  auVar8 = _lqc2(*(undefined (*) [16])vDir);
  auVar6 = _vmul(auVar8,auVar8);
  _vnop();
  _vnop();
  _vnop();
  _vaddabc(auVar6,auVar6);
  auVar6 = _vmaddbc(in_vf1,auVar6);
  _vnop();
  _vnop();
  _vnop();
  uVar10 = _vrsqrt(in_vf0,auVar6);
  _vsubbc(in_vf0,in_vf0);
  _vnop();
  _vnop();
  _vnop();
  _vnop();
  _vnop();
  _vnop();
  _vnop();
  _vnop();
  _vnop();
  _vnop();
  _vnop();
  auVar8 = _vmulq(auVar8,uVar10);
  auVar8 = _sqc2(auVar8);
  auVar6 = _lqc2(auVar8);
  auVar9 = _lqc2(auVar8);
  auVar6 = _vmul(auVar6,auVar9);
  _vaddabc(auVar6,auVar6);
  auVar6 = _vmaddbc(in_vf1,auVar6);
  auVar6 = _qmfc2(auVar6._0_4_);
  fVar2 = auVar6._0_4_;
  auVar6 = _lqc2(auVar7);
  auVar9 = _lqc2(auVar8);
  auVar6 = _vmul(auVar6,auVar9);
  _vaddabc(auVar6,auVar6);
  auVar6 = _vmaddbc(in_vf1,auVar6);
  auVar6 = _qmfc2(auVar6._0_4_);
  fVar5 = auVar6._0_4_ + auVar6._0_4_;
  auVar6 = _lqc2(auVar7);
  auVar7 = _lqc2(auVar7);
  auVar7 = _vmul(auVar6,auVar7);
  _vaddabc(auVar7,auVar7);
  auVar7 = _vmaddbc(in_vf1,auVar7);
  auVar7 = _qmfc2(auVar7._0_4_);
                    /* end of inlined section */
                    /* inlined from g3dxVu0.h */
                    /* end of inlined section */
  fVar4 = fVar5 * fVar5 - fVar2 * 4.0 * (auVar7._0_4_ - fRadius * fRadius);
  iVar3 = 0;
  if (0.0 <= fVar4) {
    if (fVar4 != 0.0) {
                    /* inlined from g3dxVu0.h */
      _qmtc2(fVar4);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
                    /* inlined from g3dxVu0.h */
    auVar7 = _lqc2(auVar8);
    auVar8 = _vmul(auVar7,auVar7);
    _vaddabc(auVar8,auVar8);
    auVar8 = _vmaddbc(in_vf1,auVar8);
    _vrsqrt(in_vf0,auVar8);
    _vmul(auVar7,in_vf0);
    prefetch(vStart,0);
    uVar10 = _vwaitq();
    auVar8 = _vmulq(auVar7,uVar10);
    auVar7 = _qmtc2(-fVar5 / (fVar2 + fVar2));
    auVar7 = _vmulbc(auVar8,auVar7);
    auVar8 = _lqc2(*(undefined (*) [16])vStart);
    auVar7 = _vadd(auVar8,auVar7);
    afVar1 = (float  [4])_sqc2(auVar7);
    *avRet = afVar1;
    iVar3 = 1;
                    /* end of inlined section */
  }
  return iVar3;
}

float g3dCalcEllipseEffectiveRadius(float *e[4], float *plane) {
	float vvv[4];
	
  undefined in_vf1 [16];
  undefined auVar1 [16];
  undefined auVar2 [16];
  undefined auVar3 [16];
  undefined auVar4 [16];
  float vvv [4];
  
                    /* inlined from g3dxVu0.h */
  auVar1 = _lqc2((undefined  [16])*e);
  auVar2 = _lqc2(*(undefined (*) [16])plane);
  auVar1 = _vmul(auVar1,auVar2);
  _vaddabc(auVar1,auVar1);
  auVar1 = _vmaddbc(in_vf1,auVar1);
  auVar2 = _qmfc2(auVar1._0_4_);
  auVar1 = _lqc2((undefined  [16])e[1]);
  auVar3 = _lqc2(*(undefined (*) [16])plane);
  auVar1 = _vmul(auVar1,auVar3);
  _vaddabc(auVar1,auVar1);
  auVar1 = _vmaddbc(in_vf1,auVar1);
  auVar1 = _qmfc2(auVar1._0_4_);
  auVar3 = _lqc2((undefined  [16])e[2]);
  auVar4 = _lqc2(*(undefined (*) [16])plane);
  auVar3 = _vmul(auVar3,auVar4);
  _vaddabc(auVar3,auVar3);
  auVar3 = _vmaddbc(in_vf1,auVar3);
  auVar3 = _qmfc2(auVar3._0_4_);
  auVar1._4_4_ = auVar1._0_4_;
  auVar1._0_4_ = auVar2._0_4_;
  auVar1._8_4_ = auVar3._0_4_;
  auVar1._12_4_ = vvv[3];
  auVar1 = _lqc2(auVar1);
  auVar1 = _vmul(auVar1,auVar1);
  _vaddabc(auVar1,auVar1);
  _vmaddbc(in_vf1,auVar1);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

int g3dCalcIntersectionEllipseAndLine(float *avRet[4], float *e[4], float *vStart, float *vDir) {
	float matInv[4][4];
	float vStartInv[4];
	float vDirInv[4];
	int iNumIntersection;
	int i;
	
  float afVar1 [4];
  int iVar2;
  int iVar3;
  undefined auVar4 [16];
  undefined in_vf0 [16];
  undefined in_vf1 [16];
  undefined auVar5 [16];
  undefined auVar6 [16];
  undefined auVar7 [16];
  undefined auVar8 [16];
  undefined auVar9 [16];
  undefined auVar10 [16];
  undefined auVar11 [16];
  undefined4 uVar12;
  float matInv [4] [4];
  float vStartInv [4];
  float vDirInv [4];
  
                    /* inlined from g3dxVu0.h */
  auVar8 = _lqc2((undefined  [16])*e);
  auVar9 = _lqc2((undefined  [16])e[1]);
  auVar10 = _lqc2((undefined  [16])e[2]);
  _lqc2((undefined  [16])e[3]);
  _vopmula(auVar9,auVar10);
  auVar11 = _vopmsub(auVar10,auVar9);
  auVar6 = _vmul(auVar8,auVar11);
  _vaddabc(auVar6,auVar6);
  auVar6 = _vmaddbc(in_vf1,auVar6);
  _vdiv(in_vf0,0,auVar6,0);
  _vopmula(auVar10,auVar8);
  auVar10 = _vopmsub(auVar8,auVar10);
  _vopmula(auVar8,auVar9);
  auVar9 = _vopmsub(auVar9,auVar8);
  auVar6 = _sqc2(auVar11);
  auVar8 = _sqc2(auVar10);
  auVar9 = _sqc2(auVar9);
  auVar10 = _sqc2(in_vf0);
  uVar12 = _vwaitq();
  auVar7 = _vaddq(in_vf0,uVar12);
  matInv[1]._0_8_ = auVar8._0_8_;
  matInv[2]._0_8_ = auVar9._0_8_;
  matInv[3]._0_8_ = auVar10._0_8_;
  auVar11 = _pextlw(matInv[1]._0_8_,auVar6._0_8_);
  auVar4 = _pextuw(auVar8,auVar6);
  auVar8 = _pextlw(matInv[3]._0_8_,matInv[2]._0_8_);
  auVar10 = _pextuw(auVar10,auVar9);
  auVar6 = _pcpyld(auVar8,auVar11);
  auVar8 = _pcpyud(auVar11,auVar8);
  auVar9 = _pcpyld(auVar10,auVar4);
  _pcpyud(auVar4,auVar10);
  auVar6 = _lqc2(auVar6);
  auVar8 = _lqc2(auVar8);
  auVar9 = _lqc2(auVar9);
  auVar10 = _lqc2((undefined  [16])e[3]);
  auVar6 = _vmulbc(auVar6,auVar7);
  auVar8 = _vmulbc(auVar8,auVar7);
  auVar9 = _vmulbc(auVar9,auVar7);
  auVar10 = _vsub(in_vf0,auVar10);
  auVar6 = _sqc2(auVar6);
  auVar8 = _sqc2(auVar8);
  auVar9 = _sqc2(auVar9);
  auVar10 = _sqc2(auVar10);
  auVar11 = _lqc2(auVar6);
  auVar4 = _lqc2(auVar8);
  auVar7 = _lqc2(auVar9);
  auVar10 = _lqc2(auVar10);
  auVar5 = _lqc2(*(undefined (*) [16])vStart);
  auVar10 = _vadd(auVar10,auVar5);
  _vmulabc(auVar11,auVar10);
  _vmaddabc(auVar4,auVar10);
  auVar10 = _vmaddbc(auVar7,auVar10);
  vStartInv = (float  [4])_sqc2(auVar10);
  auVar10 = _lqc2(*(undefined (*) [16])vDir);
  auVar11 = _vmul(auVar10,auVar10);
  _vnop();
  _vnop();
  _vnop();
  _vaddabc(auVar11,auVar11);
  auVar11 = _vmaddbc(in_vf1,auVar11);
  _vnop();
  _vnop();
  _vnop();
  uVar12 = _vrsqrt(in_vf0,auVar11);
  _vsubbc(in_vf0,in_vf0);
  _vnop();
  _vnop();
  _vnop();
  _vnop();
  _vnop();
  _vnop();
  _vnop();
  _vnop();
  _vnop();
  _vnop();
  _vnop();
  auVar10 = _vmulq(auVar10,uVar12);
  auVar10 = _sqc2(auVar10);
  auVar10 = _lqc2(auVar10);
  auVar6 = _lqc2(auVar6);
  auVar8 = _lqc2(auVar8);
  auVar9 = _lqc2(auVar9);
  _vmulabc(auVar6,auVar10);
  _vmaddabc(auVar8,auVar10);
  auVar6 = _vmaddbc(auVar9,auVar10);
  vDirInv = (float  [4])_sqc2(auVar6);
                    /* end of inlined section */
  iVar2 = g3dCalcIntersectionSphereAndLine__FPA3_fPCffT1T1(avRet,g_v0001,1.0,vStartInv,vDirInv);
  if ((iVar2 != 0) && (iVar3 = iVar2, 0 < iVar2)) {
    do {
                    /* inlined from g3dxVu0.h */
      auVar6 = _lqc2((undefined  [16])*avRet);
      auVar8 = _lqc2((undefined  [16])*e);
      auVar9 = _lqc2((undefined  [16])e[1]);
      auVar10 = _lqc2((undefined  [16])e[2]);
      auVar11 = _lqc2((undefined  [16])e[3]);
      _vmula(auVar8,auVar6);
      _vmadda(auVar9,auVar6);
      auVar6 = _vmadd(auVar10,auVar6);
      _vnop();
      _vnop();
      _vnop();
      auVar6 = _vadd(auVar6,auVar11);
      _vnop();
      _vnop();
      _vnop();
      afVar1 = (float  [4])_sqc2(auVar6);
      *avRet = afVar1;
                    /* end of inlined section */
      iVar3 = iVar3 + -1;
      avRet = avRet[1];
    } while (iVar3 != 0);
  }
  return iVar2;
}
