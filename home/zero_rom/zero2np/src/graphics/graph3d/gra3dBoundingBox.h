// STATUS: NOT STARTED

#ifndef HOME_ZERO_ROM_ZERO2NP_SRC_GRAPHICS_GRAPH3D_GRA3DBOUNDINGBOX_H
#define HOME_ZERO_ROM_ZERO2NP_SRC_GRAPHICS_GRAPH3D_GRA3DBOUNDINGBOX_H

void gra3dbbApplyMatrix(float *avDest[4], float *avSrc[4], float *mat[4]);
int gra3dbbIsInFogArea(float *matWorldScreen[4], G3DFOG *pFog, float *avBBWorld[4]);
int gra3dbbIsInViewvolume(float *avBBTransformed[4], float *avBBWorld[4]);
void gra3dbbCalcCenter(float *vC, float *avBB[4]);
void gra3dbbCalcCenterBase(float *vCB, float *avBB[4]);
float gra3dbbCalcRadiusXZ(float *avBB[4]);
void gra3dbbCalcInnerEllipse(float *vEllipse, float *avBB[4]);
void gra3dbbCopy(float *avBBDest[4], float *avBBSrc[4]);
void gra3dbbApplyFromBounds(float *avBBDest[4], float *vMin, float *vMax, float *mat[4]);
void gra3dbbFromBounds(float *avBBDest[4], float *vMin, float *vMax);

#endif // HOME_ZERO_ROM_ZERO2NP_SRC_GRAPHICS_GRAPH3D_GRA3DBOUNDINGBOX_H
