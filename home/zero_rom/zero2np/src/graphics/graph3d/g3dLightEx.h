// STATUS: NOT STARTED

#ifndef HOME_ZERO_ROM_ZERO2NP_SRC_GRAPHICS_GRAPH3D_G3DLIGHTEX_H
#define HOME_ZERO_ROM_ZERO2NP_SRC_GRAPHICS_GRAPH3D_G3DLIGHTEX_H

struct G3DLIGHT {
	sceVu0FVECTOR vDiffuse;
	sceVu0FVECTOR vSpecular;
	sceVu0FVECTOR vAmbient;
	sceVu0FVECTOR vPosition;
	sceVu0FVECTOR vDirection;
	G3DLIGHTTYPE Type;
	float fAngleInside;
	float fAngleOutside;
	float fMaxRange;
	float fMinRange;
	float fFalloff;
	float afPad0[2];
};

struct binary_function<LIGHTCOMPAREDATA,LIGHTCOMPAREDATA,bool> {
};

// warning: multiple differing types with the same name (#141, type name not equal)
struct greater : binary_function<LIGHTCOMPAREDATA,LIGHTCOMPAREDATA,bool> {
	greater& operator=();
	greater();
	greater();
	bool operator()();
};

struct LIGHTCOMPAREDATA {
	float fPower;
	G3DLIGHT *pLight;
	int iIndex;
};

void gra3dSetLightIntens(G3DLIGHT *pLight, float fIntens);
void g3dEmulateDirectionalLight(G3D_EMULATE_DIRECTIONALLIGHT_DATA *pEDD, G3DLIGHT *pLight, float *vPos);
float g3dCalcLightPower(G3DLIGHT *pLight, float *vPos);
void gra3dEmulateDirectionalLight(G3DLIGHT *pDest, G3DLIGHT *pLight, G3DLIGHTTYPE iLightType, float *vPos);
void g3dGenerateDirectionalLightByEmulatedData(G3DLIGHT *aDest, G3D_EMULATE_DIRECTIONALLIGHT_DATA *aSrc, int iNumEmulated);
int g3dIsBBLightingup(G3DLIGHT *pLight, float *avBB[4]);
void g3dSortLightForBoundingBoxByPowerOrder(int iNum, LIGHTCOMPAREDATA *aCD, G3DLIGHT **apLightSrc, float *avBB[4]);
void g3dBlendLight(G3DLIGHT *pLight, G3DLIGHT **apSrc, int iNumSrc, float *vTarget);
float* float * max_element<float *>(float *__first, float *__last);
int int indexof<float>(float *arraytop, float *obj);
void void __introsort_loop<LIGHTCOMPAREDATA *, LIGHTCOMPAREDATA, int, LIGHTCOMPAREDATA::greater>(LIGHTCOMPAREDATA *__first, LIGHTCOMPAREDATA *__last, int __depth_limit, greater __comp);
void void __final_insertion_sort<LIGHTCOMPAREDATA *, LIGHTCOMPAREDATA::greater>(LIGHTCOMPAREDATA *__first, LIGHTCOMPAREDATA *__last, greater __comp);
LIGHTCOMPAREDATA* LIGHTCOMPAREDATA * __unguarded_partition<LIGHTCOMPAREDATA *, LIGHTCOMPAREDATA, LIGHTCOMPAREDATA::greater>(LIGHTCOMPAREDATA *__first, LIGHTCOMPAREDATA *__last, LIGHTCOMPAREDATA __pivot, greater __comp);
void void __partial_sort<LIGHTCOMPAREDATA *, LIGHTCOMPAREDATA, LIGHTCOMPAREDATA::greater>(LIGHTCOMPAREDATA *__first, LIGHTCOMPAREDATA *__middle, LIGHTCOMPAREDATA *__last, greater __comp);
void void __insertion_sort<LIGHTCOMPAREDATA *, LIGHTCOMPAREDATA::greater>(LIGHTCOMPAREDATA *__first, LIGHTCOMPAREDATA *__last, greater __comp);
void void __unguarded_insertion_sort_aux<LIGHTCOMPAREDATA *, LIGHTCOMPAREDATA, LIGHTCOMPAREDATA::greater>(LIGHTCOMPAREDATA *__first, LIGHTCOMPAREDATA *__last, greater __comp);
void void sort_heap<LIGHTCOMPAREDATA *, LIGHTCOMPAREDATA::greater>(LIGHTCOMPAREDATA *__first, LIGHTCOMPAREDATA *__last, greater __comp);
void void __make_heap<LIGHTCOMPAREDATA *, LIGHTCOMPAREDATA::greater, LIGHTCOMPAREDATA, int>(LIGHTCOMPAREDATA *__first, LIGHTCOMPAREDATA *__last, greater __comp);
void void __adjust_heap<LIGHTCOMPAREDATA *, int, LIGHTCOMPAREDATA, LIGHTCOMPAREDATA::greater>(LIGHTCOMPAREDATA *__first, int __holeIndex, int __len, LIGHTCOMPAREDATA __value, greater __comp);
void void __unguarded_linear_insert<LIGHTCOMPAREDATA *, LIGHTCOMPAREDATA, LIGHTCOMPAREDATA::greater>(LIGHTCOMPAREDATA *__last, LIGHTCOMPAREDATA __val, greater __comp);
void void __push_heap<LIGHTCOMPAREDATA *, int, LIGHTCOMPAREDATA, LIGHTCOMPAREDATA::greater>(LIGHTCOMPAREDATA *__first, int __holeIndex, int __topIndex, LIGHTCOMPAREDATA __value, greater __comp);

#endif // HOME_ZERO_ROM_ZERO2NP_SRC_GRAPHICS_GRAPH3D_G3DLIGHTEX_H
