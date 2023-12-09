// STATUS: NOT STARTED

#ifndef HOME_ZERO_ROM_ZERO2NP_SRC_GRAPHICS_GRAPH3D_G3DCAMERA_H
#define HOME_ZERO_ROM_ZERO2NP_SRC_GRAPHICS_GRAPH3D_G3DCAMERA_H

void g3dCalcScreenGSPrimitiveMatrix(float *mat[4], float fAspectX, float fAspectY, float fAspectZ, float fCenterX, float fCenterY, float fCenterZ);
void g3dCalcViewScreenMatrixPerspective(float *mat[4], float fScrZ, float fAspectX, float fAspectY, float fCenterX, float fCenterY, float fZmin, float fZmax, float fNearZ, float fFarZ);
void g3dCalcViewScreenMatrixOrtho(float *mat[4], float fScrZ, float fAspectX, float fAspectY, float fCenterX, float fCenterY, float fZmin, float fZmax, float fNearZ, float fFarZ);
void g3dCalcViewClipMatrixPerspective(float *mat[4], float fScrZ, float fAspectX, float fAspectY, float fNearZ, float fFarZ, float fClipVolumeX, float fClipVolumeY);
void g3dCalcViewClipMatrixOrtho(float *mat[4], float fScrZ, float fAspectX, float fAspectY, float fNearZ, float fFarZ, float fClipVolumeX, float fClipVolumeY);
float g3dCalcDistanceToScreen(float fFov, float fClipValueAbs);

#endif // HOME_ZERO_ROM_ZERO2NP_SRC_GRAPHICS_GRAPH3D_G3DCAMERA_H
