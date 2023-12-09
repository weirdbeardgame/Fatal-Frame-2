// STATUS: NOT STARTED

#ifndef HOME_ZERO_ROM_ZERO2NP_SRC_GRAPHICS_GRAPH3D_GRA3DSHADOW_H
#define HOME_ZERO_ROM_ZERO2NP_SRC_GRAPHICS_GRAPH3D_GRA3DSHADOW_H

struct SGDVECTORINFO {
	unsigned int uiNumAddress;
	SGDVECTORADDRESS aAddress[3];
};

struct SGDFILEHEADER {
	unsigned int uiVersionId;
	unsigned char ucMapFlag;
	unsigned char ucModelType;
	short unsigned int usNumMaterial;
	SGDCOORDINATE *pCoord;
	SGDMATERIAL *pMaterial;
	SGDVECTORINFO *pVectorInfo;
	unsigned int uiNumBlock;
	SGDPROCUNITHEADER *apProcUnitHead[1];
	int aiPad[1];
};

struct GRA3DSHADOWCREATIONDATA {
	GRA3DSCRATCHPADLAYOUT_MAPSHADOW *pSL;
};

struct GRA3DSHADOWDEBUG {
	int bDrawShadowModelBB;
	int bDrawCastShadowOnBB;
	int bDrawLightDir;
	int bTextureMapEnable;
	int bFogEnable;
	int bDrawCharShadow;
	int bDrawObjectShadow;
};

extern GRA3DSHADOWDEBUG g_gra3dShadowDebug;
extern unsigned char SGDFILEHEADER * type_info node[12];
extern unsigned char SGDFILEHEADER type_info node[8];

void AssignShadowPrim(SGDPROCUNITHEADER *pPUHead);
void gra3dshadowInit(GRA3DSHADOWCREATIONDATA *pCD);
void gra3dshadowAddProjectModel(SGDFILEHEADER *pSGDTop);
void gra3dshadowSetSourceModel(SGDFILEHEADER *pSM);
void gra3dshadowSetAssignGroup(int gnum);
int gra3dshadowGetAssignGroup();
void gra3dshadowClearProjectModel();
void gra3dshadowSetBoundingBox(float *avBB[4], float *mat[4]);
void gra3dshadowSetLight(G3DLIGHT *pLight);
float&[4] gra3dshadowGetTarget();
void gra3dshadowDrawSGD(SGDFILEHEADER *pSGDTop, SGDCOORDINATE *pCoord, int iObjectIndex);
void DispShadowSprite();
float* float * min_element<float *>(float *__first, float *__last);
SGDFILEHEADER** SGDFILEHEADER * * _fixed_array_verifyrange<SGDFILEHEADER *>(size_t v, size_t _max);
void void fill<SGDFILEHEADER **, SGDFILEHEADER *>(SGDFILEHEADER **__first, SGDFILEHEADER **__last, SGDFILEHEADER *&__value);
type_info& SGDFILEHEADER * type_info function();
type_info& SGDFILEHEADER type_info function();

#endif // HOME_ZERO_ROM_ZERO2NP_SRC_GRAPHICS_GRAPH3D_GRA3DSHADOW_H
