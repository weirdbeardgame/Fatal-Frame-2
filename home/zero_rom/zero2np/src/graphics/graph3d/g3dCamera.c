// STATUS: NOT STARTED

#include "g3dCamera.h"

void g3dCalcScreenGSPrimitiveMatrix(float *mat[4], float fAspectX, float fAspectY, float fAspectZ, float fCenterX, float fCenterY, float fCenterZ) {
  sceVu0UnitMatrix();
  mat[3][2] = fCenterZ;
  (*mat)[0] = fAspectX;
  mat[1][1] = fAspectY;
  mat[2][2] = fAspectZ;
  mat[3][0] = fCenterX;
  mat[3][1] = fCenterY;
  return;
}

void g3dCalcViewScreenMatrixPerspective(float *mat[4], float fScrZ, float fAspectX, float fAspectY, float fCenterX, float fCenterY, float fZmin, float fZmax, float fNearZ, float fFarZ) {
	float fFarZ;
	float fCenterZ;
	float fAspectZ;
	float matScreenGSPrimitive[4][4];
	
  float fAspectZ;
  float matScreenGSPrimitive [4] [4];
  
  fAspectZ = (param_11 * fNearZ * (fZmax - fZmin)) / (param_11 - fNearZ);
  sceVu0UnitMatrix(mat,fFarZ);
  mat[1][1] = fScrZ;
  mat[2][3] = 1.0;
  mat[3][2] = 1.0;
  (*mat)[0] = fScrZ;
  mat[2][2] = 0.0;
  mat[3][3] = 0.0;
  g3dCalcScreenGSPrimitiveMatrix__FPA3_fffffff
            (matScreenGSPrimitive,fAspectX,fAspectY,fAspectZ,fCenterX,fCenterY,
             (-fZmax * fNearZ + fZmin * param_11) / (param_11 - fNearZ));
  sceVu0MulMatrix(mat,matScreenGSPrimitive,mat);
  return;
}

void g3dCalcViewScreenMatrixOrtho(float *mat[4], float fScrZ, float fAspectX, float fAspectY, float fCenterX, float fCenterY, float fZmin, float fZmax, float fNearZ, float fFarZ) {
	float fFarZ;
	float matScreenGSPrimitive[4][4];
	float *pm2[4];
	
  float afVar1 [4];
  undefined auVar2 [16];
  undefined auVar3 [16];
  undefined auVar4 [16];
  undefined auVar5 [16];
  undefined auVar6 [16];
  undefined auVar7 [16];
  undefined auVar8 [16];
  undefined auVar9 [16];
  float matScreenGSPrimitive [4] [4];
  
  g3dCalcScreenGSPrimitiveMatrix__FPA3_fffffff
            (matScreenGSPrimitive,fAspectX,fAspectY,
             (param_11 * fNearZ * (fZmax - fZmin)) / (param_11 - fNearZ),fCenterX,fCenterY,
             (-fZmax * fNearZ + fZmin * param_11) / (param_11 - fNearZ));
                    /* inlined from g3dxVu0.h */
  auVar2 = _lqc2((undefined  [16])matScreenGSPrimitive[0]);
  auVar3 = _lqc2((undefined  [16])matScreenGSPrimitive[1]);
  auVar4 = _lqc2((undefined  [16])matScreenGSPrimitive[2]);
  auVar5 = _lqc2((undefined  [16])matScreenGSPrimitive[3]);
  auVar6 = _lqc2((undefined  [16])g_matUnit[0]);
  auVar7 = _lqc2((undefined  [16])g_matUnit[1]);
  auVar8 = _lqc2((undefined  [16])g_matUnit[2]);
  auVar9 = _lqc2((undefined  [16])g_matUnit[3]);
  _vmulabc(auVar2,auVar6);
  _vmaddabc(auVar3,auVar6);
  _vmaddabc(auVar4,auVar6);
  auVar6 = _vmaddbc(auVar5,auVar6);
  _vmulabc(auVar2,auVar7);
  _vmaddabc(auVar3,auVar7);
  _vmaddabc(auVar4,auVar7);
  auVar7 = _vmaddbc(auVar5,auVar7);
  _vmulabc(auVar2,auVar8);
  _vmaddabc(auVar3,auVar8);
  _vmaddabc(auVar4,auVar8);
  auVar8 = _vmaddbc(auVar5,auVar8);
  _vmulabc(auVar2,auVar9);
  _vmaddabc(auVar3,auVar9);
  _vmaddabc(auVar4,auVar9);
  auVar2 = _vmaddbc(auVar5,auVar9);
  afVar1 = (float  [4])_sqc2(auVar6);
  *mat = afVar1;
  afVar1 = (float  [4])_sqc2(auVar7);
  mat[1] = afVar1;
  afVar1 = (float  [4])_sqc2(auVar8);
  mat[2] = afVar1;
  afVar1 = (float  [4])_sqc2(auVar2);
  mat[3] = afVar1;
  return;
}

void g3dCalcViewClipMatrixPerspective(float *mat[4], float fScrZ, float fAspectX, float fAspectY, float fNearZ, float fFarZ, float fClipVolumeX, float fClipVolumeY) {
	float fRScrZ;
	float fGSX;
	float fGSY;
	
  float fVar1;
  float fVar2;
  
  fVar1 = fClipVolumeX * (fNearZ / fScrZ);
  fVar2 = fClipVolumeY * (fNearZ / fScrZ);
  sceVu0UnitMatrix();
  mat[3][3] = 0.0;
  mat[2][3] = 1.0;
  mat[3][2] = (fFarZ * fNearZ * -2.0) / (fFarZ - fNearZ);
  mat[1][1] = ((fNearZ + fNearZ) * fAspectY) / (fVar2 + fVar2);
  (*mat)[0] = ((fNearZ + fNearZ) * fAspectX) / (fVar1 + fVar1);
  mat[2][2] = (fFarZ + fNearZ) / (fFarZ - fNearZ);
  return;
}

void g3dCalcViewClipMatrixOrtho(float *mat[4], float fScrZ, float fAspectX, float fAspectY, float fNearZ, float fFarZ, float fClipVolumeX, float fClipVolumeY) {
  sceVu0UnitMatrix();
  (*mat)[0] = fAspectX / fClipVolumeX;
  mat[1][1] = fAspectY / fClipVolumeY;
  mat[3][2] = (fFarZ + fNearZ) / (fFarZ - fNearZ);
  mat[2][2] = -2.0 / (fFarZ - fNearZ);
  return;
}

float g3dCalcDistanceToScreen(float fFov, float fClipValueAbs) {
  float fVar1;
  
  fVar1 = tanf(fFov * 0.5);
  return fClipValueAbs / fVar1;
}
