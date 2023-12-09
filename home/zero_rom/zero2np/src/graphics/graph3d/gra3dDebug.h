// STATUS: NOT STARTED

#ifndef HOME_ZERO_ROM_ZERO2NP_SRC_GRAPHICS_GRAPH3D_GRA3DDEBUG_H
#define HOME_ZERO_ROM_ZERO2NP_SRC_GRAPHICS_GRAPH3D_GRA3DDEBUG_H

typedef _sceGifPackXyzf sceGifPackXyzf;

struct G3DFREGION {
	float fLeft;
	float fTop;
	float fWidth;
	float fHeight;
};

extern unsigned char G3DLIGHT type_info node[8];

void _PrintLMatrix(float *fmat[4], char *pValName);
void gra3ddbgDrawLine(float *vStart, float *vEnd, G3DCOLOR col);
void gra3ddbgDrawPoint(float *vPoint, G3DCOLOR col);
void gra3ddbgVerifyVu1MemAddress();
void gra3ddbgDrawSphere(float *vPosition, float fRange, G3DCOLOR col, float *vScale);
void gra3ddbgDrawRangedCone(float *vPosition, float *vDirection, float fRange, float fAngle, G3DCOLOR col);
void gra3ddbgDrawSprite(G3DFREGION *pRegion, float fZ, G3DCOLOR col, sceGsTex0 *pGsTex0);
void gra3ddbgDrawBB(float *avBB[4], G3DCOLOR col);
void gra3ddbgDrawProc();
void gra3ddbgVerifyVifCodex4(tVIF_CODE *aVC);
void gra3ddbgNormalizeLightData(GRA3DLIGHTDATA *pLDDest, GRA3DLIGHTDATA *pLDSrc);
G3DLIGHT* G3DLIGHT * _fixed_array_verifyrange<G3DLIGHT>(size_t v, size_t _max);
type_info& G3DLIGHT type_info function();

#endif // HOME_ZERO_ROM_ZERO2NP_SRC_GRAPHICS_GRAPH3D_GRA3DDEBUG_H
