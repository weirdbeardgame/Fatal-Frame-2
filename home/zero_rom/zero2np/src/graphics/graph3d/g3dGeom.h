// STATUS: NOT STARTED

#ifndef HOME_ZERO_ROM_ZERO2NP_SRC_GRAPHICS_GRAPH3D_G3DGEOM_H
#define HOME_ZERO_ROM_ZERO2NP_SRC_GRAPHICS_GRAPH3D_G3DGEOM_H

float g3dCalcAngle(float *vDirection, float *vOrigin, float *vTarget);
void g3dMatrixSetPosition(float *mat[4], float *vPos);
void g3dMatrixSetDirection(float *mat[4], float *vDir, int bFixUp);
void g3dMatrixSetTarget(float *mat[4], float *vTarget, int bFixUp);
void g3dMatrixSetRoll(float *mat[4], float fRoll);
float g3dMatrixGetRoll(float *mat[4]);
void g3dMatrixRotationByAxis(float *mat[4], float *vAxis, float fAngle);
void g3dMatrixInverseTransform(float *matDest[4], float *matSrc[4]);
void g3dMatrixSetColumn(float *mat[4], float *v, int iCol);
void g3dMatrixSetColumnXYZ(float *mat[4], float *v, int iCol);
void g3dPlaneFromMatrixZ(float *plane, float *mat[4]);
void g3dCalcPlaneFromPointNormal(float *plane, float *vPoint, float *vNormal);
void g3dCalcPlaneFromPoints(float *plane, float *vP0, float *vP1, float *vP2);
int g3dCalcIntersectionSphereAndLine(float *avRet[4], float *vCenter, float fRadius, float *vStart, float *vDir);
float g3dCalcEllipseEffectiveRadius(float *e[4], float *plane);
int g3dCalcIntersectionEllipseAndLine(float *avRet[4], float *e[4], float *vStart, float *vDir);

#endif // HOME_ZERO_ROM_ZERO2NP_SRC_GRAPHICS_GRAPH3D_G3DGEOM_H
