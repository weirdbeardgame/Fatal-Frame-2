// STATUS: NOT STARTED

#ifndef HOME_ZERO_ROM_ZERO2NP_SRC_GRAPHICS_GRAPH3D_GRA3D_H
#define HOME_ZERO_ROM_ZERO2NP_SRC_GRAPHICS_GRAPH3D_GRA3D_H

typedef enum {
	G3DLIGHT_DIRECTIONAL = 0,
	G3DLIGHT_POINT = 1,
	G3DLIGHT_SPOT = 2,
	NUM_G3DLIGHTTYPE = 3,
	G3DLIGHT_AMBIENT = 3,
	INVALID_G3DLIGHTTYPE = 2147483647,
	G3DLIGHTTYPE_FORCE_DWORD = 2147483647
} G3DLIGHTTYPE;

struct G3DWINDOW {
	float fAspectX;
	float fAspectY;
	float fCenterX;
	float fCenterY;
};

struct G3DVIEWPORT {
	float fX;
	float fY;
	float fWidth;
	float fHeight;
	float fMinZ;
	float fMaxZ;
};

typedef enum {
	PT_PERSPECTIVE = 0,
	PT_ORTHO = 1,
	NUM_G3DCAMPROJECTIONTYPE = 2,
	G3DCAMPROJECTIONTYPE_FORCE_DWORD = -1
} G3DCAMPROJECTIONTYPE;

struct G3DFOG {
	float fMin;
	float fMax;
	float fNear;
	float fFar;
};

struct binary_function<G3D_EMULATE_DIRECTIONALLIGHT_DATA,G3D_EMULATE_DIRECTIONALLIGHT_DATA,bool> {
};

// warning: multiple differing types with the same name (#165, type name not equal)
struct greater : binary_function<G3D_EMULATE_DIRECTIONALLIGHT_DATA,G3D_EMULATE_DIRECTIONALLIGHT_DATA,bool> {
	greater& operator=();
	greater();
	greater();
	bool operator()();
};

struct G3D_EMULATE_DIRECTIONALLIGHT_DATA {
	XVECTOR vDiffuse;
	XVECTOR vDirection;
	float fLength;
	int aiPad[3];
};

struct CVu0Matrix {
	static LPFUNC_VU0LOADMATRIX s_pFuncLoadMatrix;
	static LPFUNC_VU0APPLYMATRIXWITHOUTTRANS s_pFuncApplyMatrixWithoutTrans;
	
	CVu0Matrix& operator=();
	CVu0Matrix();
private:
	void Set();
public:
	CVu0Matrix();
	CVu0Matrix();
	CVu0Matrix& operator=();
	void ApplyWithoutTrans();
	void ApplyWithoutTrans();
};

struct G3DVU1FOG {
	float fMin;
	float fMax;
	float FA;
	float FB;
};

union G3DVU1MEMLAYOUT {
	G3DVU1MEMLAYOUT_PACKED Packed;
	G3DVU1MEMLAYOUT_DIRECT Direct;
};

struct GRA3DCAMERA {
	float fFov;
	float fNearZ;
	float fFarZ;
	float fAspectX;
	float fAspectY;
	float fCenterX;
	float fCenterY;
	float fZmin;
	float fZmax;
	G3DCAMPROJECTIONTYPE type;
	int aiPad[2];
	float vTarget[4];
	float vPositionOld[4];
	float vTargetOld[4];
	float matViewClipPolygon[4][4];
	float matViewClipObject[4][4];
	float matWorldScreen[4][4];
	float matWorldClipPolygon[4][4];
	float matWorldClipObject[4][4];
	float matCoord[4][4];
};

typedef float LMATRIX[3][4];

struct GRA3DLIGHTSTATUS {
	int bEnable;
	int bEnableToChar;
	int bEnableToShadow;
	int bEmulateToDirectionalLight;
};

typedef enum {
	GRA3DTS_VIEW = 0,
	GRA3DTS_PROJECTION = 1,
	GRA3DTS_WORLD = 2,
	GRA3DTS_WORLD1 = 3,
	GRA3DTS_WORLDCLIP = 4,
	GRA3DTS_WORLDSCREEN = 5,
	NUM_GRA3DTRANSFORMSTATETYPE = 6,
	GRA3DTS_FORCE_DWORD = 2147483647
} GRA3DTRANSFORMSTATETYPE;

struct GRA3DVU1LIGHTDATA_DIRECTIONAL {
	LMATRIX lmDiffuse;
	LMATRIX lmSpecular;
};

struct GRA3DVU1LIGHTDATA_POINT {
	LMATRIX lmPosition;
	float _vDirectionInverse[4];
};

struct GRA3DVU1LIGHTDATA_SPOT {
	LMATRIX lmPosition;
	float vIntens[4];
	float vIntensB[4];
	LMATRIX lmDirection;
	LMATRIX lmSpecular;
};

struct GRA3DVU1LIGHTDATA {
	GRA3DVU1LIGHTDATA_DIRECTIONAL dir;
	GRA3DVU1LIGHTDATA_SPOT spot;
	GRA3DVU1LIGHTDATA_POINT point;
};

struct GRA3DVU1MATERIALDATA_POINT {
	float vPower[4];
	LMATRIX lmDiffuse;
	LMATRIX lmSpecular;
};

struct GRA3DVU1MATERIALDATA_SPOT {
	float vPower[4];
	LMATRIX lmDiffuse;
	LMATRIX lmSpecular;
};

struct GRA3DVU1MATERIALDATA_DIRECTIONAL {
	float vAmbient[4];
	LMATRIX lmDiffuse;
	LMATRIX lmSpecular;
};

union GRA3DVU1MEMLAYOUT {
	GRA3DVU1MEMLAYOUT_DIRECT Direct;
	GRA3DVU1MEMLAYOUT_PACKED Packed;
};

union GRA3DVU1MEMLAYOUT_MAPSHADOW {
	GRA3DVU1MEMLAYOUT_MAPSHADOW_DIRECT Direct;
};

struct GRA3DSCRATCHPADLAYOUT {
	qword qwVif1Code0;
	GRA3DVU1MEMLAYOUT Vu1Mem;
};

typedef void (*LPFUNC_SETREGISTER_WITHCONTEXT)(/* parameters unknown */);
typedef void (*LPFUNC_SETREGISTER)(/* parameters unknown */);
typedef long int (*LPFUNC_GETREGISTER_WITHCONTEXT)(/* parameters unknown */);
typedef long int (*LPFUNC_GETREGISTER)(/* parameters unknown */);

struct GRA3DSCRATCHPADLAYOUT_MAPSHADOW {
	qword qwVif1Code;
	GRA3DVU1MEMLAYOUT_MAPSHADOW Vu1Mem;
};

struct _LIGHTDATA {
	G3DLIGHT L;
	int bEnable;
};

union G3DGSREGISTERLAYOUT {
	G3DGSREGISTERLAYOUT_DIRECT Direct;
	G3DGSREGISTERLAYOUT_ARRAY Array;
};

struct G3DRESOURCE {
	CTexture *apTexture[1];
	IG3DVertexBuffer *pVertexBuffer;
	IG3DIndexBuffer *pIndexBuffer;
};

struct G3DCOREOBJECT {
	unsigned int auiRenderState[8];
	unsigned int auiGlobalState[2];
	_LIGHTDATA aLightData[9];
	float vAmbient[4];
	G3DMATERIAL Material;
	sceVu0FMATRIX amatTransform[5];
	G3DVIEWPORT Viewport;
	G3DWINDOW Window;
	G3DRESOURCE Resource;
	G3DVU1MEMLAYOUT Vu1Mem;
	G3DGSREGISTERLAYOUT GsRegister;
};

extern CVu0Matrix g_Vu0Matrix;
extern Rep basic_string<char, string_char_traits<char>, ctl::custom_allocator<char> >::nilRep;
extern size_t basic_string<char, string_char_traits<char>, ctl::custom_allocator<char> >::npos;
extern unsigned char GRA3DLIGHTSTATUS type_info node[8];
extern unsigned char G3DLIGHT type_info node[8];

void gra3dLightDataAddOffsetPosition(GRA3DLIGHTDATA *pDest, GRA3DLIGHTDATA *pSrc, float *vPosition);
void gra3dLightEnableAll(int bEnable);
void gra3dLightEnablePush();
void gra3dLightEnablePop();
void gra3dLightPushData();
void gra3dLightPopData();
void gra3dSetLightData(GRA3DLIGHTDATA *pLightData, float *vTrans);
void gra3dEmulateLightData(GRA3DLIGHTDATA *pLDDest, GRA3DLIGHTDATA *pLDSrc, float *vPosition, float fMagnification);
void gra3dEmulateLightDataObj(GRA3DLIGHTDATA *pLDDest, GRA3DLIGHTDATA *pLDSrc, float *vPosition, float fMagnification);
int gra3dIsBBInViewvolume(float *avBBTransformed[4], float *avBBClipped[4], float *avBBWorld[4]);
int CheckModelBoundingBox(float *avBBWorld[4]);
void gra3dExecPrelight(SGDFILEHEADER *pSGDHead, float *vTrans, float *vRot);
void gra3dExecPrelight(SGDFILEHEADER *pSGDHead, float *mat[4]);
GRA3DCAMERA* gra3dGetCamera();
float&[4] gra3dcamGetPosition();
float&[4] gra3dcamGetDirection();
float&[4] gra3dcamGetTarget();
void gra3dcamSetPosition(float *vPos);
void gra3dcamSetPosition(float x, float y, float z);
float&[4] gra3dcamGetPositionOld();
void gra3dcamSetCoord(float *mat[4]);
void gra3dcamSetTarget(float *vTarget, int bFixUp);
void gra3dcamSetTarget(float x, float y, float z, int bFixUp);
void gra3dcamSetRoll(float fRad);
float gra3dcamGetRoll();
void gra3dcamRotationByAxis(float *vAxis, float fAngle);
int gra3dGetNumLightEnable(GRA3DLIGHTDATA *pLD, int iLightType);
int gra3dGetNumLightInitial(GRA3DLIGHTDATA *pLD, int iLightType);
void utilSetGRA3DLIGHTDATADefault(GRA3DLIGHTDATA *pLD);
void gra3dSetGsRegisterDefault();
void gra3dCalcWorldScreenMatrix(float *mat[4], GRA3DCAMERA *pCam, int bFixup);
void gra3dApplyCamera(GRA3DCAMERA *pCam, int bFixup);
void _gra3dSetCameraForce(GRA3DCAMERA *pCamera);
void gra3dcamSetFov(float fFov);
float gra3dcamGetFov();
void gra3dcamSetAspect(float fX, float fY);
void gra3dcamSetDepth(float fMinZ, float fMaxZ);
void gra3dcamSetClip(float fNearZ, float fFarZ);
void gra3dcamSetType(G3DCAMPROJECTIONTYPE type);
float&[4] _GetClipVolume();
float&[4] _GetClipVolumeV();
void gra3dSetFog(float fMin, float fMax, float fNear, float fFar);
void gra3dSetFog(G3DFOG *pFog);
void gra3dSetFogColor(int r, int g, int b);
void gra3dApplyFog();
G3DFOG& gra3dGetFogRef();
int gra3dIsFogEnable();
void gra3dEnableFog(int b);
void g3dCalcVu1Fog(G3DVU1FOG *pVu1Fog, G3DFOG *pFog);
float g3dCalcFA(G3DFOG *pFog);
float g3dCalcFB(G3DFOG *pFog);
int gra3dIsMonotoneDrawEnable();
void gra3dMonotoneDrawEnable(int bEnable);
void _ClearMaterialData(void *pMatData);
void gra3dSetValidLightId(int iLightType, unsigned int iIndex, int iLightTypeIndex);
int gra3dGetNumEnableLight(int iLightType);
void g3dSetVu1LightData(GRA3DVU1LIGHTDATA *pVu1LightData, SGDCOORDINATE *cp0, SGDCOORDINATE *cp1);
void gra3dVu1TransGTEOP();
void SetVU1Header();
int gra3dIsLightTypeEnable(G3DLIGHTTYPE type);
void gra3dEnableLightType(G3DLIGHTTYPE type, int bEnable);
void gra3dSetAmbient(float *vAmbient);
float&[4] gra3dGetAmbientRef();
void gra3dSetLight(int iLightId, G3DLIGHT *pLight);
G3DLIGHT& gra3dGetLightRef(int iLightId);
void gra3dLightEnable(int iLightId, int bEnable);
int gra3dIsLightEnable(int iLightId);
void gra3dSetLightStatus(int iLightId, GRA3DLIGHTSTATUS *pS);
GRA3DLIGHTSTATUS& gra3dGetLightStatusRef(int iLightId);
void gra3dApplyLight();
void gra3dDrawPrimitive(void *pData, int iSize);
void* g3dGetVu1MaterialCache(G3DLIGHTTYPE type, int iIndex);
void gra3dCalcVu1MaterialDataDirectional(GRA3DVU1MATERIALDATA_DIRECTIONAL *_pDirectionalData);
void gra3dCalcVu1MaterialDataPoint(GRA3DVU1MATERIALDATA_POINT *_pPointData);
void gra3dCalcVu1MaterialDataSpot(GRA3DVU1MATERIALDATA_SPOT *_pSpotData);
void gra3dSetMaterial(SGDMATERIAL *pMat);
int gra3dSetTransform(GRA3DTRANSFORMSTATETYPE state, float *mat[4]);
float&[4][4] gra3dGetTransformRef(GRA3DTRANSFORMSTATETYPE state);
void _gra3dEnableTextureForce(int bEnable);
void gra3dCalcVertexColor(float *vDest, float *vVertex, float *vNormal, float *vSrcColor);
int gra3dSetGsRegister(long int lData, long int lAddress);
int gra3dSetGsRegisters(sceGifPackAd *aGPA, int iNum);
long int& gra3dGetGsRegisterRef(long int lAddress);
void gra3dUseScratchpad(int b);
int gra3dIsUsingScratchpad();
void gra3dInit(void *pPacket, int iSize);
void gra3dDraw();
void void fill<float *, float>(float *__first, float *__last, float &__value);
GRA3DLIGHTSTATUS* GRA3DLIGHTSTATUS * _fixed_array_verifyrange<GRA3DLIGHTSTATUS>(size_t v, size_t _max);
G3DLIGHT* G3DLIGHT * _fixed_array_verifyrange<G3DLIGHT>(size_t v, size_t _max);
void void __introsort_loop<G3D_EMULATE_DIRECTIONALLIGHT_DATA *, G3D_EMULATE_DIRECTIONALLIGHT_DATA, int, G3D_EMULATE_DIRECTIONALLIGHT_DATA::greater>(G3D_EMULATE_DIRECTIONALLIGHT_DATA *__first, G3D_EMULATE_DIRECTIONALLIGHT_DATA *__last, int __depth_limit, greater __comp);
void void __final_insertion_sort<G3D_EMULATE_DIRECTIONALLIGHT_DATA *, G3D_EMULATE_DIRECTIONALLIGHT_DATA::greater>(G3D_EMULATE_DIRECTIONALLIGHT_DATA *__first, G3D_EMULATE_DIRECTIONALLIGHT_DATA *__last, greater __comp);
int* int * _fixed_array_verifyrange<int>(size_t v, size_t _max);
float* float * max_element<float *>(float *__first, float *__last);
G3DCOREOBJECT* G3DCOREOBJECT * GetStaticInstance<G3DCOREOBJECT>();
GRA3DSCRATCHPADLAYOUT* GRA3DSCRATCHPADLAYOUT * GetStaticInstance<GRA3DSCRATCHPADLAYOUT>();
GRA3DSCRATCHPADLAYOUT_MAPSHADOW* GRA3DSCRATCHPADLAYOUT_MAPSHADOW * GetStaticInstance<GRA3DSCRATCHPADLAYOUT_MAPSHADOW>();
G3D_EMULATE_DIRECTIONALLIGHT_DATA* G3D_EMULATE_DIRECTIONALLIGHT_DATA * __unguarded_partition<G3D_EMULATE_DIRECTIONALLIGHT_DATA *, G3D_EMULATE_DIRECTIONALLIGHT_DATA, G3D_EMULATE_DIRECTIONALLIGHT_DATA::greater>(G3D_EMULATE_DIRECTIONALLIGHT_DATA *__first, G3D_EMULATE_DIRECTIONALLIGHT_DATA *__last, G3D_EMULATE_DIRECTIONALLIGHT_DATA __pivot, greater __comp);
void void __partial_sort<G3D_EMULATE_DIRECTIONALLIGHT_DATA *, G3D_EMULATE_DIRECTIONALLIGHT_DATA, G3D_EMULATE_DIRECTIONALLIGHT_DATA::greater>(G3D_EMULATE_DIRECTIONALLIGHT_DATA *__first, G3D_EMULATE_DIRECTIONALLIGHT_DATA *__middle, G3D_EMULATE_DIRECTIONALLIGHT_DATA *__last, greater __comp);
void void __insertion_sort<G3D_EMULATE_DIRECTIONALLIGHT_DATA *, G3D_EMULATE_DIRECTIONALLIGHT_DATA::greater>(G3D_EMULATE_DIRECTIONALLIGHT_DATA *__first, G3D_EMULATE_DIRECTIONALLIGHT_DATA *__last, greater __comp);
void void __unguarded_insertion_sort_aux<G3D_EMULATE_DIRECTIONALLIGHT_DATA *, G3D_EMULATE_DIRECTIONALLIGHT_DATA, G3D_EMULATE_DIRECTIONALLIGHT_DATA::greater>(G3D_EMULATE_DIRECTIONALLIGHT_DATA *__first, G3D_EMULATE_DIRECTIONALLIGHT_DATA *__last, greater __comp);
void void sort_heap<G3D_EMULATE_DIRECTIONALLIGHT_DATA *, G3D_EMULATE_DIRECTIONALLIGHT_DATA::greater>(G3D_EMULATE_DIRECTIONALLIGHT_DATA *__first, G3D_EMULATE_DIRECTIONALLIGHT_DATA *__last, greater __comp);
void void __make_heap<G3D_EMULATE_DIRECTIONALLIGHT_DATA *, G3D_EMULATE_DIRECTIONALLIGHT_DATA::greater, G3D_EMULATE_DIRECTIONALLIGHT_DATA, int>(G3D_EMULATE_DIRECTIONALLIGHT_DATA *__first, G3D_EMULATE_DIRECTIONALLIGHT_DATA *__last, greater __comp);
void void __adjust_heap<G3D_EMULATE_DIRECTIONALLIGHT_DATA *, int, G3D_EMULATE_DIRECTIONALLIGHT_DATA, G3D_EMULATE_DIRECTIONALLIGHT_DATA::greater>(G3D_EMULATE_DIRECTIONALLIGHT_DATA *__first, int __holeIndex, int __len, G3D_EMULATE_DIRECTIONALLIGHT_DATA __value, greater __comp);
void void __unguarded_linear_insert<G3D_EMULATE_DIRECTIONALLIGHT_DATA *, G3D_EMULATE_DIRECTIONALLIGHT_DATA, G3D_EMULATE_DIRECTIONALLIGHT_DATA::greater>(G3D_EMULATE_DIRECTIONALLIGHT_DATA *__last, G3D_EMULATE_DIRECTIONALLIGHT_DATA __val, greater __comp);
void void __push_heap<G3D_EMULATE_DIRECTIONALLIGHT_DATA *, int, G3D_EMULATE_DIRECTIONALLIGHT_DATA, G3D_EMULATE_DIRECTIONALLIGHT_DATA::greater>(G3D_EMULATE_DIRECTIONALLIGHT_DATA *__first, int __holeIndex, int __topIndex, G3D_EMULATE_DIRECTIONALLIGHT_DATA __value, greater __comp);
type_info& GRA3DLIGHTSTATUS type_info function();
type_info& G3DLIGHT type_info function();

#endif // HOME_ZERO_ROM_ZERO2NP_SRC_GRAPHICS_GRAPH3D_GRA3D_H
