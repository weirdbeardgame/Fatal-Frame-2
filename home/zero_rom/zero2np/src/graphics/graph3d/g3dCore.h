// STATUS: NOT STARTED

#ifndef HOME_ZERO_ROM_ZERO2NP_SRC_GRAPHICS_GRAPH3D_G3DCORE_H
#define HOME_ZERO_ROM_ZERO2NP_SRC_GRAPHICS_GRAPH3D_G3DCORE_H

typedef struct {
	long unsigned int X : 16;
	long unsigned int Y : 16;
	long unsigned int Z : 32;
} sceGsXyz;

struct G3DMATERIAL {
	sceVu0FVECTOR vDiffuse;
	sceVu0FVECTOR vAmbient;
	sceVu0FVECTOR vSpecular;
	sceVu0FVECTOR vEmissive;
	float fPower;
	int aiPad[3];
};

typedef enum {
	G3DRS_LIGHTING = 0,
	G3DRS_COLORVERTEX = 1,
	G3DRS_SPECULARENABLE = 2,
	G3DRS_DIFFUSEMATERIALSOURCE = 3,
	G3DRS_SPECULARMATERIALSOURCE = 4,
	G3DRS_AMBIENTMATERIALSOURCE = 5,
	G3DRS_EMISSIVEMATERIALSOURCE = 6,
	G3DRS_FOGCOLOR = 7,
	NUM_G3DRENDERSTATETYPE = 8,
	G3DRENDERSTATE_FORCE_DWORD = 2147483647
} G3DRENDERSTATETYPE;

typedef enum {
	G3DGS_LIGHTATTENUATIONTYPE = 0,
	G3DGS_LIGHTINGTYPE = 1,
	NUM_G3DGLOBALSTATETYPE = 2,
	G3DGLOBALSTATE_FORCE_DWORD = 2147483647
} G3DGLOBALSTATETYPE;

typedef enum {
	G3DTS_VIEW = 0,
	G3DTS_PROJECTION = 1,
	G3DTS_WORLD = 2,
	G3DTS_WORLD1 = 3,
	G3DTS_WORLDCLIP = 4,
	NUM_G3DTRANSFORMSTATETYPE = 5,
	G3DTS_FORCE_DWORD = 2147483647
} G3DTRANSFORMSTATETYPE;

typedef int (*LPFUNC_SETGSREGISTER)(/* parameters unknown */);
typedef int (*LPFUNC_SETGSREGISTERS)(/* parameters unknown */);
typedef long int& (*LPFUNC_GETGSREGISTERREF)(/* parameters unknown */);
typedef int (*LPFUNC_SETTRANSFORM)(/* parameters unknown */);
typedef float&[4][4] (*LPFUNC_GETTRANSFORMREF)(/* parameters unknown */);

struct G3DCREATIONDATA {
	G3DCOREOBJECT *pObj;
};

extern LPFUNC_SETGSREGISTER IG3DCompatible::s_pFuncSetGsRegister;
extern LPFUNC_SETGSREGISTERS IG3DCompatible::s_pFuncSetGsRegisters;
extern LPFUNC_GETGSREGISTERREF IG3DCompatible::s_pFuncGetGsRegisterRef;
extern LPFUNC_SETTRANSFORM IG3DCompatible::s_pFuncSetTransform;
extern LPFUNC_GETTRANSFORMREF IG3DCompatible::s_pFuncGetTransformRef;
extern Rep basic_string<char, string_char_traits<char>, ctl::custom_allocator<char> >::nilRep;
extern size_t basic_string<char, string_char_traits<char>, ctl::custom_allocator<char> >::npos;

void g3dInitialize(G3DCREATIONDATA *pCD);
int g3dSetRenderState(G3DRENDERSTATETYPE State, unsigned int uiValue);
unsigned int& g3dGetRenderStateRef(G3DRENDERSTATETYPE State);
int g3dSetGlobalState(G3DGLOBALSTATETYPE State, unsigned int uiValue);
unsigned int& g3dGetGlobalStateRef(G3DGLOBALSTATETYPE State);
void g3dSetAmbient(float *vAmbient);
float&[4] g3dGetAmbientRef();
int g3dSetTransform(G3DTRANSFORMSTATETYPE State, float *mat[4]);
float&[4][4] g3dGetTransformRef(G3DTRANSFORMSTATETYPE State);
int g3dSetMaterial(G3DMATERIAL *pMaterial);
G3DMATERIAL& g3dGetMaterialRef();
int g3dLightEnable(int iLightId, int bEnable);
int g3dIsLightEnable(int iLightId);
int g3dSetLight(int iLightId, G3DLIGHT *pLight);
G3DLIGHT& g3dGetLightRef(int iLightId);
int g3dApplyLight();
int g3dSetTexture(int iStage, CTexture *pTexture);
void g3dCalcVertexColor(float *vDest, float *vVertex, float *vNormal, float *vColorSource);
int g3dSetGsRegister(long int lData, long int lAddress, int iDmaChan);
int g3dSetGsRegisters(sceGifPackAd *aGPA, int iNum, int iDmaChan);
long int& g3dGetGsRegisterRef(long int lAddress);
void g3dCalcGsPrimitiveCoord(sceGsXyz *pGsXyz, float *vScreenCoord);
void g3dCalcScreenCoord(float *vScreenCoord, sceGsXyz *pGsXyz);
void _Vu0LoadMaterialConstant(G3DMATERIAL *pMat);
void _Vu0LoadMaterialLambert(G3DMATERIAL *pMat);
void _Vu0LoadMaterialPhong(G3DMATERIAL *pMat);
void _Vu0CalcColorDataConstant(void *pCD, void *pL);
void _Vu0CalcColorDataLambert(void *pCD, void *pL);
void _Vu0CalcColorDataPhong(void *pCD, void *pL);
void _Vu0LoadColorDataConstant(void *pCD);
void _Vu0LoadColorDataLambert(void *pCD);
void _Vu0LoadColorDataPhong(void *pCD);
void _Vu0LoadColorCoeffConstant();
void _Vu0LoadColorCoeffLambert();
void _Vu0LoadColorCoeffPhong();
void _Vu0CalcVertexColorDirectinalLightConstant(float *vDestColor);
void _Vu0CalcVertexColorDirectinalLightLambert(float *vDestColor);
void _Vu0CalcVertexColorDirectinalLightPhong(float *vDestColor);
void _Vu0CalcVertexColorSpotLightConstant(float *vDestColor);
void _Vu0CalcVertexColorSpotLightLambert(float *vDestColor);
void _Vu0CalcVertexColorSpotLightPhong(float *vDestColor);

#endif // HOME_ZERO_ROM_ZERO2NP_SRC_GRAPHICS_GRAPH3D_G3DCORE_H
