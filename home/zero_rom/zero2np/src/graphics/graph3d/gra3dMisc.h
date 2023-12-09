// STATUS: NOT STARTED

#ifndef HOME_ZERO_ROM_ZERO2NP_SRC_GRAPHICS_GRAPH3D_GRA3DMISC_H
#define HOME_ZERO_ROM_ZERO2NP_SRC_GRAPHICS_GRAPH3D_GRA3DMISC_H

typedef enum {
	LID_DIRECTIONAL_0 = 0,
	LID_DIRECTIONAL_1 = 1,
	LID_DIRECTIONAL_2 = 2,
	LID_POINT_0 = 3,
	LID_POINT_1 = 4,
	LID_POINT_2 = 5,
	LID_POINT_3 = 6,
	LID_POINT_4 = 7,
	LID_POINT_5 = 8,
	LID_POINT_6 = 9,
	LID_POINT_7 = 10,
	LID_POINT_8 = 11,
	LID_POINT_9 = 12,
	LID_POINT_10 = 13,
	LID_POINT_11 = 14,
	LID_POINT_12 = 15,
	LID_POINT_13 = 16,
	LID_POINT_14 = 17,
	LID_POINT_15 = 18,
	LID_POINT_FLASHLIGHT_0 = 19,
	LID_POINT_FLASHLIGHT_1 = 20,
	LID_POINT_SELFREFLECTION = 21,
	LID_SPOT_0 = 22,
	LID_SPOT_1 = 23,
	LID_SPOT_2 = 24,
	LID_SPOT_3 = 25,
	LID_SPOT_4 = 26,
	LID_SPOT_5 = 27,
	LID_SPOT_6 = 28,
	LID_SPOT_7 = 29,
	LID_SPOT_8 = 30,
	LID_SPOT_9 = 31,
	LID_SPOT_10 = 32,
	LID_SPOT_11 = 33,
	LID_SPOT_12 = 34,
	LID_SPOT_13 = 35,
	LID_SPOT_14 = 36,
	LID_SPOT_15 = 37,
	LID_SPOT_FLASHLIGHT = 38,
	NUM_GRA3DLIGHTID = 39,
	GRA3D_START_LIGHT_DIRECTIONAL = 0,
	GRA3D_END_LIGHT_DIRECTIONAL = 2,
	GRA3D_NUM_LIGHT_DIRECTIONAL = 3,
	GRA3D_START_LIGHT_POINT = 3,
	GRA3D_END_LIGHT_POINT = 21,
	GRA3D_NUM_LIGHT_POINT = 19,
	GRA3D_NUM_LIGHT_POINT_STATIC = 16,
	GRA3D_START_LIGHT_SPOT = 22,
	GRA3D_END_LIGHT_SPOT = 38,
	GRA3D_NUM_LIGHT_SPOT = 17,
	GRA3D_NUM_LIGHT_SPOT_STATIC = 16,
	INVALID_GRA3DLIGHTID = 2147483647,
	GRA3DLIGHTID_FORCE_DWORD = 2147483647
} GRA3DLIGHTID;

struct GRA3DEMULATIONLIGHTDATACREATIONDATA {
	float vStaticDirLightColor[4];
	float fAngleScale;
	float fDiffuseScale;
	float fMaplightScale;
	int bEnableSelfreflection;
	int bEmulateSelfreflection;
	int bEnableFlashlight;
	int bEmulateFlashlight;
	int bEnableFlashlight2;
	int bEmulateFlashlight2;
	int bEnableStaticDirLight;
};

extern unsigned char G3DLIGHT type_info node[8];
extern unsigned char GRA3DLIGHTSTATUS type_info node[8];

void _DrawShadowTexture();
void gra3dCalcShadowLight(G3DLIGHT *pLight, float *vTarget);
void gra3dPrelightScene(int RoomNo);
void gra3dPrelight();
void gra3dDrawSGDShadow(SGDFILEHEADER *pSGDTop, SGDCOORDINATE *pCoord, G3DLIGHT *pLight, float *avBBWorld[4]);
void gra3dSetObjectIdDrawNoShadow(int iId);
void gra3dDrawSGDShadowEveryObject(SGDFILEHEADER *pShadowModel, G3DLIGHT *pLight);
void gra3dGenerateLightDataToChar(GRA3DLIGHTDATA *pLDDest, GRA3DLIGHTDATA *pLDSrc, GRA3DEMULATIONLIGHTDATACREATIONDATA *pData);
void gra3dDrawSGDShadowCharacter(ANI_CTRL *pAC, SGDCOORDINATE *pCoord, float *avBBWorld[4], GRA3DEMULATIONLIGHTDATACREATIONDATA *pELDCD);
void gra3dStartSpecialLight();
void gra3dEndSpecialLight();
void gra3dUpdateSpecialLight();
int gra3dIsSpecialLightActive();
G3DLIGHT& gra3dGetProjectorSpot();
GRA3DLIGHTID gra3dGetProjectorSpotId();
void void fill<float *, float>(float *__first, float *__last, float &__value);
void void ZeroArray<LIGHTCOMPAREDATA>(LIGHTCOMPAREDATA *a, int n);
void void __introsort_loop<LIGHTCOMPAREDATA *, LIGHTCOMPAREDATA, int, LIGHTCOMPAREDATA::greater>(LIGHTCOMPAREDATA *__first, LIGHTCOMPAREDATA *__last, int __depth_limit, greater __comp);
void void __final_insertion_sort<LIGHTCOMPAREDATA *, LIGHTCOMPAREDATA::greater>(LIGHTCOMPAREDATA *__first, LIGHTCOMPAREDATA *__last, greater __comp);
G3DLIGHT* G3DLIGHT * _fixed_array_verifyrange<G3DLIGHT>(size_t v, size_t _max);
GRA3DLIGHTSTATUS* GRA3DLIGHTSTATUS * _fixed_array_verifyrange<GRA3DLIGHTSTATUS>(size_t v, size_t _max);
LIGHTCOMPAREDATA* LIGHTCOMPAREDATA * __unguarded_partition<LIGHTCOMPAREDATA *, LIGHTCOMPAREDATA, LIGHTCOMPAREDATA::greater>(LIGHTCOMPAREDATA *__first, LIGHTCOMPAREDATA *__last, LIGHTCOMPAREDATA __pivot, greater __comp);
void void __partial_sort<LIGHTCOMPAREDATA *, LIGHTCOMPAREDATA, LIGHTCOMPAREDATA::greater>(LIGHTCOMPAREDATA *__first, LIGHTCOMPAREDATA *__middle, LIGHTCOMPAREDATA *__last, greater __comp);
void void __insertion_sort<LIGHTCOMPAREDATA *, LIGHTCOMPAREDATA::greater>(LIGHTCOMPAREDATA *__first, LIGHTCOMPAREDATA *__last, greater __comp);
void void __unguarded_insertion_sort_aux<LIGHTCOMPAREDATA *, LIGHTCOMPAREDATA, LIGHTCOMPAREDATA::greater>(LIGHTCOMPAREDATA *__first, LIGHTCOMPAREDATA *__last, greater __comp);
void void sort_heap<LIGHTCOMPAREDATA *, LIGHTCOMPAREDATA::greater>(LIGHTCOMPAREDATA *__first, LIGHTCOMPAREDATA *__last, greater __comp);
void void __make_heap<LIGHTCOMPAREDATA *, LIGHTCOMPAREDATA::greater, LIGHTCOMPAREDATA, int>(LIGHTCOMPAREDATA *__first, LIGHTCOMPAREDATA *__last, greater __comp);
void void __adjust_heap<LIGHTCOMPAREDATA *, int, LIGHTCOMPAREDATA, LIGHTCOMPAREDATA::greater>(LIGHTCOMPAREDATA *__first, int __holeIndex, int __len, LIGHTCOMPAREDATA __value, greater __comp);
void void __unguarded_linear_insert<LIGHTCOMPAREDATA *, LIGHTCOMPAREDATA, LIGHTCOMPAREDATA::greater>(LIGHTCOMPAREDATA *__last, LIGHTCOMPAREDATA __val, greater __comp);
void void __push_heap<LIGHTCOMPAREDATA *, int, LIGHTCOMPAREDATA, LIGHTCOMPAREDATA::greater>(LIGHTCOMPAREDATA *__first, int __holeIndex, int __topIndex, LIGHTCOMPAREDATA __value, greater __comp);
type_info& G3DLIGHT type_info function();
type_info& GRA3DLIGHTSTATUS type_info function();

#endif // HOME_ZERO_ROM_ZERO2NP_SRC_GRAPHICS_GRAPH3D_GRA3DMISC_H
