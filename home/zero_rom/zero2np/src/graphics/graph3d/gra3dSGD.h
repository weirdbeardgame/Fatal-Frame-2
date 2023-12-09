// STATUS: NOT STARTED

#ifndef HOME_ZERO_ROM_ZERO2NP_SRC_GRAPHICS_GRAPH3D_GRA3DSGD_H
#define HOME_ZERO_ROM_ZERO2NP_SRC_GRAPHICS_GRAPH3D_GRA3DSGD_H

struct GRA3DMATERIALINDEXCACHE {
	int bEnable;
	int aiIndex[3];
};

struct CoordCache {
	int cache_on;
	int edge_check;
	int cn0;
	GRA3DMATERIALINDEXCACHE Point;
	GRA3DMATERIALINDEXCACHE Spot;
};

struct G3DVIF1CODE_UNPACK {
	unsigned int ADDR : 10;
	unsigned int pad : 4;
	unsigned int USN : 1;
	unsigned int FLG : 1;
	unsigned int NUM : 8;
	unsigned int CMD : 8;
};

struct SGDVUVNDESC {
	short int sNumVertex;
	short int sNumNormal;
	unsigned char ucSize;
	unsigned char ucVectorType;
	unsigned char aucPad[2];
};

struct SGDVUMESHDESC {
	int iTagSize;
	unsigned char ucPad0;
	union {
		SGDVUMESHTYPE MeshType;
		unsigned char ucMeshType;
	};
	unsigned char ucNumMesh;
	unsigned char ucPad1;
};

struct SGDVUMATERIALDESC {
	union {
		int iMaterialIndex;
		SGDMATERIAL *pMat;
	};
	int iPad;
};

struct SGDCOORDINATEDESC {
	int iCoordId0;
	int iCoordId1;
};

struct SGDBOUNDINGBOXDESC {
	int iCoordId;
	int iPad;
};

struct SGDGSIMAGEDESC {
	int iQWordSize;
	int iPad;
};

struct SGDTEXTUREIMAGEDESC {
	int iNumTexture;
	int iPaddingSize;
};

struct SGDLIGHTDESC {
	SGDLIGHTTYPE Type;
	int iNum;
};

struct SGDTEXTUREANIMATIONDESC {
	unsigned char ucNumTexture;
	unsigned char ucPaddingSize;
	unsigned char bEnable;
	unsigned char ucStep;
	unsigned char ucCount;
	unsigned char bLoop;
	unsigned char aucPad[2];
};

struct SGDPROCUNITHEADER {
	SGDPROCUNITHEADER *pNext;
	int iCategory;
	union {
		long int lPrimType;
		SGDVUVNDESC VUVNDesc;
		SGDVUMESHDESC VUMeshDesc;
		SGDVUMATERIALDESC VUMaterialDesc;
		SGDCOORDINATEDESC CoordDesc;
		SGDBOUNDINGBOXDESC BoundingBoxDesc;
		SGDGSIMAGEDESC GSImageDesc;
		SGDLIGHTDESC LightDesc;
		SGDTEXTUREIMAGEDESC TexDesc;
		SGDTEXTUREANIMATIONDESC TexAnimDesc;
	};
};

typedef enum {
	SRT_REALTIME = 0,
	SRT_PRELIGHTING = 1,
	SRT_MAPSHADOW = 2,
	SRT_CLEARPRELIGHTING = 3,
	NUM_SGDRENDERTYPE = 4
} SGDRENDERTYPE;

struct GRA3DSGDCREATIONDATA {
	sceVu0FVECTOR *vnarray;
	int size;
};

extern unsigned char _LIGHTCOMPAREDATA type_info node[8];

void _SetVUVNPRIM(SGDPROCUNITHEADER *ppuhVUVN);
SGDPROCUNITHEADER* _GetVUVNPRIM();
SGDCOORDINATE* gra3dsgdGetCoordinate(int iIndex);
void gra3dsgdSetCoordinate(SGDCOORDINATE *pCU, int iIndex);
void gra3dsgdSetupVu1();
int BoundingBoxCalcP(SGDPROCUNITHEADER *_prim);
unsigned int gra3dCalcVRAMPageSize(unsigned int uiBlockSize);
SGDPROCUNITHEADER* _GetPREVIOUSTRI2PRIM();
void _SetPREVIOUSTRI2PRIM(SGDPROCUNITHEADER *p);
void gra3dsgdDrawPresetDataObject(SGDPROCUNITHEADER *pPUHead);
int gra3dsgdGetNumBlock();
CoordCache& _GetCoordCache();
void _SetCoordCache(CoordCache &rCC);
float*[4] _GetGlobalVertexBuffer();
float*[4] _GetGlobalNormalBuffer();
int _GetGlobalBufferSize();
void gra3dsgdInit(GRA3DSGDCREATIONDATA *pCD);
void gra3dsgdSetData(SGDFILEHEADER *pSGDTop);
SGDFILEHEADER* gra3dsgdGetData();
int _GetEdgeCheck();
void _SetEdgeCheck(int ec);
void SgSortPreProcess(u_int *_prim);
void _gra3dDrawSGD(SGDFILEHEADER *pSGDTop, SGDRENDERTYPE type, SGDCOORDINATE *pCoord, int pnum);
void gra3dChangeST(SGDFILEHEADER *pSGDTop, float fAddS, float fAddT);
void gra3dSetVertexColorPreset(SGDFILEHEADER *pSGDTop, int iVertexNo, float *vSetColor);
void void fill<_LIGHTCOMPAREDATA *, _LIGHTCOMPAREDATA>(_LIGHTCOMPAREDATA *__first, _LIGHTCOMPAREDATA *__last, _LIGHTCOMPAREDATA &__value);
_LIGHTCOMPAREDATA* _LIGHTCOMPAREDATA * _fixed_array_verifyrange<_LIGHTCOMPAREDATA>(size_t v, size_t _max);
void _CalcWeightedVertexBuffer(float *dp, float *v);
void _CalcWeightedNormalBuffer(float *dp, float *v);
type_info& _LIGHTCOMPAREDATA type_info function();

#endif // HOME_ZERO_ROM_ZERO2NP_SRC_GRAPHICS_GRAPH3D_GRA3DSGD_H
