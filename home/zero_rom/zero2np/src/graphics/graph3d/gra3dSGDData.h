// STATUS: NOT STARTED

#ifndef HOME_ZERO_ROM_ZERO2NP_SRC_GRAPHICS_GRAPH3D_GRA3DSGDDATA_H
#define HOME_ZERO_ROM_ZERO2NP_SRC_GRAPHICS_GRAPH3D_GRA3DSGDDATA_H

struct ZERO2LIGHTDATAFILE {
	int iSignature;
	int iSizeOfThisFile;
	int aiPad[2];
	char astrLightName[39][32];
	GRA3DLIGHTDATA LD;
};

typedef GRA3DMATERIALINDEXCACHE SGDMATERIALCACHE;

struct SGDMATERIAL {
	unsigned int uiPrimType;
	char strTexName[12];
	float vAmbient[4];
	float vDiffuse[4];
	float vSpecular[4];
	float vEmission[4];
	int iCacheStatus;
	unsigned int iTagAddressOld;
	int iSizeOld;
	int iPad;
	SGDMATERIALCACHE aCache[3];
	int aiPad[8];
};

extern unsigned char G3DLIGHT type_info node[8];

void sgdRemap(SGDFILEHEADER *pSGDHead);
void sgdResetMaterialCache(SGDFILEHEADER *pSGDData);
void sgdCalcBoneCoordinate(SGDCOORDINATE *pCoord, int iNumBlock);
void sgdCalcCoordinate(SGDFILEHEADER *pSGDData, float *matLocalWorld[4]);
void sgdCalcCoordinateMatrix(SGDCOORDINATE *pCoord);
void sgdVerifyLightData(GRA3DLIGHTDATA *pRet, ZERO2LIGHTDATAFILE *pZLD);
void sgdGetLocalWorldMatrix(void *pSGDTop, float *mat[4], int iObjectId);
void sgdClearCoordCalcFlgParents(void *pSGDData, int bone_no);
void sgdClearCoordCalcFlgAll(void *pSGDData);
void sgdClearCoordCalcFlg(void *pSGDData, int bone_no);
SGDPROCUNITHEADER* sgdGetProcUnit(SGDPROCUNITHEADER *pPUHead, int iProcUnitId, int iUnitIndex);
void sgdGetBoundingBox(SGDFILEHEADER *pFH, float *avBB[4]);
void sgdRemapInverse(SGDFILEHEADER *pSGDHead);
void sgdEnableOptimizeTexture(int b);
G3DLIGHT* G3DLIGHT * _fixed_array_verifyrange<G3DLIGHT>(size_t v, size_t _max);
int int indexof<SGDCOORDINATE>(SGDCOORDINATE *arraytop, SGDCOORDINATE *obj);
int int indexof<SGDMATERIAL>(SGDMATERIAL *arraytop, SGDMATERIAL *obj);
type_info& G3DLIGHT type_info function();

#endif // HOME_ZERO_ROM_ZERO2NP_SRC_GRAPHICS_GRAPH3D_GRA3DSGDDATA_H
