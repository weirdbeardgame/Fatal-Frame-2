#ifndef SGD_TYPES_H
#define SGD_TYPES_H

#include "common.h"
#include "g3d_types.h"

typedef float VECTOR3[3];
typedef unsigned int void_type[4];
typedef unsigned int u_int;
typedef unsigned int uint;
typedef unsigned char u_char;
typedef unsigned short u_short;
typedef unsigned long ulong;

// Mesh Types
#define iMT_0 0x10
#define iMT_2 0x12
#define iMT_2F 0x32

/// Refered to as "ch"
#define MODEL_TYPE_CHARACTER 0

/// Refered to as "f"
#define MODEL_TYPE_FURNITURE 1

/// Refered to as "d"
#define MODEL_TYPE_DOOR 2

/// Refered to as "i"
#define MODEL_TYPE_ITEM 3

typedef enum {
    SRT_REALTIME = 0,
    SRT_PRELIGHTING = 1,
    SRT_MAPSHADOW = 2,
    SRT_CLEARPRELIGHTING = 3,
    NUM_SGDRENDERTYPE = 4
} SGDRENDERTYPE;

typedef G3DLIGHTTYPE SGDLIGHTTYPE;
typedef GRA3DMATERIALINDEXCACHE SGDMATERIALCACHE;

struct SGDMATERIAL { // 0xb0
    /* 0x00 */ unsigned int uiPrimType;
    /* 0x04 */ char strTexName[12];
    /* 0x10 */ float vAmbient[4];
    /* 0x20 */ float vDiffuse[4];
    /* 0x30 */ float vSpecular[4];
    /* 0x40 */ float vEmission[4];
    /* 0x50 */ int iCacheStatus;
    /* 0x54 */ unsigned int iTagAddressOld;
    /* 0x58 */ int iSizeOld;
    /* 0x5c */ int iPad;
    /* 0x60 */ SGDMATERIALCACHE aCache[3];
    /* 0x90 */ int aiPad[8];
};

struct _VECTORINDEX { // 0x8
    /* 0x0 */ unsigned int uiVertexId;
    /* 0x4 */ unsigned int uiNormalId;
};

struct _VECTORADDRESS { // 0x8
    /* 0x0 */ sceVu0FVECTOR *pVertex;
    /* 0x4 */ sceVu0FVECTOR *pNormal;
};

union _VECTORDATA { // 0x8
    /* 0x0 */ _VECTORINDEX vIndex;
    /* 0x0 */ _VECTORADDRESS vAddress;
};

struct SGDVUVNDESC { // 0x8
    /* 0x0 */ short int sNumVertex;
    /* 0x2 */ short int sNumNormal;
    /* 0x4 */ unsigned char ucSize;
    /* 0x5 */ unsigned char ucVectorType;
    /* 0x6 */ unsigned char aucPad[2];
};

struct SGDVUVNDATA {
    /* 0x00 */ qword qwVif1Code;
    /* 0x10 */ unsigned int uiVTop;
    /* 0x14 */ unsigned int uiPTop;
    /* 0x18 */ unsigned int uiWTop;
    /* 0x1c */ unsigned int uiNumMesh;
};

struct _SGDVUMESHCOLORDATA { // 0x10
    /* 0x0 */ G3DVIF1CODE_UNPACK VifUnpack;
    /* 0x4 */ VECTOR3 avColor[1];
};

struct SGDMESHVERTEXDATA_TYPE2 { // 0x18
    /* 0x00 */ VECTOR3 vVertex;
    /* 0x0c */ VECTOR3 vNormal;
};

struct SGDMESHVERTEXDATA_TYPE2F { // 0xc
    /* 0x0 */ VECTOR3 avNormal[1];
};

struct SGDVUVNDATA_PRESET { // 0x40
    /* 0x00 */ unsigned int aui[10];
    /* 0x28 */ union { // 0x18
        /* 0x28 */ SGDMESHVERTEXDATA_TYPE2 avt2[1];
        /* 0x28 */ SGDMESHVERTEXDATA_TYPE2F vt2f;
    };
};

struct SGDVUVNDATA_WEIGHTED { // 0x20
    /* 0x00 */ unsigned char auc0[28];
    /* 0x1c */ unsigned char ucBoneId0;
    /* 0x1d */ unsigned char ucBoneId1;
    /* 0x1e */ unsigned char auc1[2];
};

struct SGDVUMESHTYPE { // 0x1
    /* 0x0:0 */ unsigned char GRD: 1;
    /* 0x0:1 */ unsigned char TEX: 1;
    /* 0x0:2 */ unsigned char VTYPE: 2;
    /* 0x0:4 */ unsigned char PRE: 1;
    /* 0x0:5 */ unsigned char FLAT: 1;
    /* 0x0:6 */ unsigned char MULTI: 1;
    /* 0x0:7 */ unsigned char NVL: 1;
};

struct SGDVUMESHDESC { // 0x8
    /* 0x0 */ int iTagSize;
    /* 0x4 */ unsigned char ucPad0;
    /* 0x5 */ union { // 0x1
        /* 0x5 */ SGDVUMESHTYPE MeshType;
        /* 0x5 */ unsigned char ucMeshType;
    };
    /* 0x6 */ unsigned char ucNumMesh;
    /* 0x7 */ unsigned char ucPad1;
};

struct G3DVIF1CODE_STCYCLE { // 0x4
  /* 0x0:0 */ unsigned int CL : 8;
  /* 0x1:0 */ unsigned int WL : 8;
  /* 0x2:0 */ unsigned int NUM : 8;
  /* 0x3:0 */ unsigned int CMD : 7;
  /* 0x3:7 */ unsigned int irq : 1;
};

struct G3DVIF1CODE_OFFSET { // 0x4
  /* 0x0:0 */ unsigned int OFFSET : 10;
  /* 0x1:2 */ unsigned int __ : 6;
  /* 0x2:0 */ unsigned int NUM : 8;
  /* 0x3:0 */ unsigned int CMD : 7;
  /* 0x3:7 */ unsigned int irq : 1;
};

struct G3DVIF1CODE_BASE { // 0x4
  /* 0x0:0 */ unsigned int BASE : 8;
  /* 0x1:0 */ unsigned int __ : 8;
  /* 0x2:0 */ unsigned int NUM : 8;
  /* 0x3:0 */ unsigned int CMD : 7;
  /* 0x3:7 */ unsigned int irq : 1;
};

struct G3DVIF1CODE_ITOP { // 0x4
  /* 0x0:0 */ unsigned int ADDR : 8;
  /* 0x1:0 */ unsigned int __ : 8;
  /* 0x2:0 */ unsigned int NUM : 8;
  /* 0x3:0 */ unsigned int CMD : 7;
  /* 0x3:7 */ unsigned int irq : 1;
};

struct G3DVIF1CODE_STMOD { // 0x4
  /* 0x0:0 */ unsigned int MODE : 2;
  /* 0x0:2 */ unsigned int __ : 14;
  /* 0x2:0 */ unsigned int NUM : 8;
  /* 0x3:0 */ unsigned int CMD : 7;
  /* 0x3:7 */ unsigned int irq : 1;
};

struct G3DVIF1CODE_MARK { // 0x4
  /* 0x0:0 */ unsigned int MARK : 16;
  /* 0x2:0 */ unsigned int NUM : 8;
  /* 0x3:0 */ unsigned int CMD : 7;
  /* 0x3:7 */ unsigned int irq : 1;
};

struct G3DVIF1CODE_DIRECT { // 0x4
  /* 0x0:0 */ unsigned int size : 16;
  /* 0x2:0 */ unsigned int num : 8;
  /* 0x3:0 */ unsigned int cmd : 7;
  /* 0x3:7 */ unsigned int irq : 1;
};

union G3DVIF1CODE { // 0x4
  /* 0x0 */ G3DVIF1CODE_STCYCLE stcycle;
  /* 0x0 */ G3DVIF1CODE_OFFSET offset;
  /* 0x0 */ G3DVIF1CODE_BASE base;
  /* 0x0 */ G3DVIF1CODE_ITOP itop;
  /* 0x0 */ G3DVIF1CODE_STMOD stmod;
  /* 0x0 */ G3DVIF1CODE_MARK mark;
  /* 0x0 */ G3DVIF1CODE_DIRECT direct;
  /* 0x0 */ G3DVIF1CODE_UNPACK unpack;
};

typedef struct {
  /// Repeat count (GS primitive data size)
  ///     PACKED mode NREG x NLOOP(qword)
  ///         REGLIST mode NREG x NLOOP(dword)
  ///             IMAGE mode NLOOP(qword)
  unsigned long long NLOOP : 15;
  
  /// Termination information (End Of Packet)
  ///     0 With following primitive
  ///     1 Without following primitive (End of GS packet)
  unsigned long long EOP : 1;
  unsigned long long pad16 : 16;
  unsigned long long id : 14;

  /// PRIM field enable
  ///     0 Ignores PRIM field
  ///     1 Outputs PRIM field value to PRIM register
  unsigned long long PRE : 1;

  /// Data to be set to the PRIM register of GS
  unsigned long long PRIM : 11;

  /// Data format
  ///     00  PACKED mode
  ///     01  REGLIST mode
  ///     10  IMAGE mode
  ///     11  Disable (Same operation with the IMAGE mode)
  unsigned long long FLG : 2;

  /// Register descriptor
  ///     Number of register descriptors in REGS field
  ///         When the value is 0, the number of descriptors is 16.
  unsigned long long NREG : 4;

  /// PRIM
  unsigned long long REGS0 : 4;

  /// RGBAQ
  unsigned long long REGS1 : 4;

  /// ST
  unsigned long long REGS2 : 4;

  /// UV
  unsigned long long REGS3 : 4;

  /// XYZF2
  unsigned long long REGS4 : 4;

  /// XYZ2
  unsigned long long REGS5 : 4;

  /// TEX0_1
  unsigned long long REGS6 : 4;

  /// TEX0_2
  unsigned long long REGS7 : 4;

  /// CLAMP_1
  unsigned long long REGS8 : 4;

  /// CLAMP_2
  unsigned long long REGS9 : 4;

  /// FOG
  unsigned long long REGS10 : 4;
  unsigned long long REGS11 : 4;

  /// XYZF3
  unsigned long long REGS12 : 4;

  /// XYZ3
  unsigned long long REGS13 : 4;

  /// A+D
  unsigned long long REGS14 : 4;

  /// NOP
  unsigned long long REGS15 : 4;
} sceGifTag;

struct SGDVUMESHDATA { // 0x20
    /* 0x00 */ G3DVIF1CODE qwVif1Code[4];
    /* 0x10 */ sceGifTag GifTag;
};

struct SGDVUMESHDATA_PRESET { // 0x18
    /* 0x00 */ short int asPad0[2];
    /* 0x04 */ short int sOffsetToST;
    /* 0x06 */ short int sOffsetToPrim;
    /* 0x08 */ int aiPad1[2];
    /* 0x10 */ long int alData[1];
};

struct SGDVUMATERIALDESC { // 0x8
    /* 0x0 */ union { // 0x4
        /* 0x0 */ int iMaterialIndex;
        /* 0x0 */ SGDMATERIAL *pMat;
    };
    /* 0x4 */ int iPad;
};

struct SGDCOORDINATEDESC { // 0x8
    /* 0x0 */ int iCoordId0;
    /* 0x4 */ int iCoordId1;
};

struct SGDBOUNDINGBOXDESC { // 0x8
    /* 0x0 */ int iCoordId;
    /* 0x4 */ int iPad;
};

struct SGDGSIMAGEDESC { // 0x8
    /* 0x0 */ int iQWordSize;
    /* 0x4 */ int iPad;
};

struct SGDGSIMAGEDATA { // 0x30
    /* 0x00 */ unsigned int auiVifCode[4];
    /* 0x10 */ void_type GT;
    /* 0x20 */ unsigned char aucData[1];
};

struct SGDTEXTUREIMAGEDESC { // 0x8
    /* 0x0 */ int iNumTexture;
    /* 0x4 */ int iPaddingSize;
};

struct SGDLIGHTDESC { // 0x8
    /* 0x0 */ SGDLIGHTTYPE Type;
    /* 0x4 */ int iNum;
};

struct SGDLIGHTDATA_DIRECTIONAL { // 0x20
    /* 0x00 */ float vColor[4];
    /* 0x10 */ float vDirection[4];
};

struct SGDLIGHTDATA_POINT { // 0x20
    /* 0x00 */ float vColor[4];
    /* 0x10 */ float vPosition[4];
};

struct SGDLIGHTDATA_SPOT { // 0x30
    /* 0x00 */ float vColor[4];
    /* 0x10 */ float vPosition[4];
    /* 0x20 */ float vTarget[4];
};

struct SGDLIGHTDATA_AMBIENT { // 0x10
    /* 0x0 */ float vColor[4];
};

struct SGDTEXTUREANIMATIONDESC { // 0x8
    /* 0x0 */ unsigned char ucNumTexture;
    /* 0x1 */ unsigned char ucPaddingSize;
    /* 0x2 */ unsigned char bEnable;
    /* 0x3 */ unsigned char ucStep;
    /* 0x4 */ unsigned char ucCount;
    /* 0x5 */ unsigned char bLoop;
    /* 0x6 */ unsigned char aucPad[2];
};

struct SGDPROCUNITHEADER { // 0x10
    /* 0x0 */ SGDPROCUNITHEADER *pNext;
    /* 0x4 */ int iCategory;
    /* 0x8 */ union { // 0x8
        /* 0x8 */ long int lPrimType;
        /* 0x8 */ SGDVUVNDESC VUVNDesc;
        /* 0x8 */ SGDVUMESHDESC VUMeshDesc;
        /* 0x8 */ SGDVUMATERIALDESC VUMaterialDesc;
        /* 0x8 */ SGDCOORDINATEDESC CoordDesc;
        /* 0x8 */ SGDBOUNDINGBOXDESC BoundingBoxDesc;
        /* 0x8 */ SGDGSIMAGEDESC GSImageDesc;
        /* 0x8 */ SGDLIGHTDESC LightDesc;
        /* 0x8 */ SGDTEXTUREIMAGEDESC TexDesc;
        /* 0x8 */ SGDTEXTUREANIMATIONDESC TexAnimDesc;
    };
};

union SGDPROCUNITDATA { // 0x80
    /* 0x00 */ SGDVUVNDATA VUVNData;
    /* 0x00 */ SGDVUMESHDATA VUMeshData;
    /* 0x00 */ SGDVUVNDATA_PRESET VUVNData_Preset;
    /* 0x00 */ SGDVUMESHDATA_PRESET VUMeshData_Preset;
    /* 0x00 */ unsigned char aucGSImage;
    /* 0x00 */ float avBB[8][4];
    /* 0x00 */ SGDLIGHTDATA_DIRECTIONAL alightDirectional[1];
    /* 0x00 */ SGDLIGHTDATA_POINT alightPoint[1];
    /* 0x00 */ SGDLIGHTDATA_SPOT alightSpot[1];
    /* 0x00 */ SGDLIGHTDATA_AMBIENT lightAmbient;
    /* 0x00 */ SGDGSIMAGEDATA GSImage;
};

typedef enum {
    SVA_UNIQUE = 0,
    SVA_COMMON = 1,
    SVA_WEIGHTED = 2,
    NUM_SGDVECTORADDRESSID = 3,
    SGDVECTORADDRESSID_FORCE_DWORD = -1
} SGDVECTORADDRESSID;

struct _ONELIST { // 0x8
    /* 0x0 */ short int sCoordId0;
    /* 0x2 */ short int sCoordId1;
    /* 0x4 */ unsigned short usNumVector;
    /* 0x6 */ unsigned short vOff;
};

struct _VERTEXLIST { // 0xc
    /* 0x0 */ int iNumList;
    /* 0x4 */ _ONELIST aList[1];
};

struct SGDVECTORADDRESS { // 0x10
    /* 0x0 */ unsigned int uiSize;
    /* 0x4 */ sceVu0FVECTOR *pvVertex;
    /* 0x8 */ sceVu0FVECTOR *pvNormal;
    /* 0xc */ _VERTEXLIST *pVertexList;
};

struct SGDVECTORINFO { // 0x34
    /* 0x00 */ unsigned int uiNumAddress;
    /* 0x04 */ SGDVECTORADDRESS aAddress[3];
};

struct SGDCOORDINATE 
{
    float matCoord[4][4];
    float matLocalWorld[4][4];
    float _matWork[4][4];
    float vRot[4];
    SGDCOORDINATE *pParent;
    unsigned int bCalc;
    unsigned int edge_check;
    int bInViewvolume;
};

struct SGDFILEHEADER { // 0x20
    /* 0x00 */ unsigned int uiVersionId;
    /* 0x04 */ unsigned char ucMapFlag;
    /* 0x05 */ unsigned char ucModelType;
    /* 0x06 */ short unsigned int usNumMaterial;
    /* 0x08 */ SGDCOORDINATE *pCoord;
    /* 0x0c */ SGDMATERIAL *pMaterial;
    /* 0x10 */ SGDVECTORINFO *pVectorInfo;
    /* 0x14 */ unsigned int uiNumBlock;
    /* 0x18 */ SGDPROCUNITHEADER *apProcUnitHead[1];
    /* 0x1c */ int aiPad[1];
};

struct HeaderSection { // 0x1c
    /* 0x00 */ u_int VersionID;
    /* 0x04 */ u_char MAPFLAG;
    /* 0x05 */ u_char kind;
    /* 0x06 */ u_short materials;
    /* 0x08 */ SGDCOORDINATE *coordp;
    /* 0x0c */ SGDMATERIAL *matp;
    /* 0x10 */ u_int *phead;
    /* 0x14 */ u_int blocks;
    /* 0x18 */ u_int **primitives;
};

struct CoordCache { // 0x2c
    /* 0x00 */ int cache_on;
    /* 0x04 */ int edge_check;
    /* 0x08 */ int cn0;
    /* 0x0c */ GRA3DMATERIALINDEXCACHE Point;
    /* 0x1c */ GRA3DMATERIALINDEXCACHE Spot;
};

typedef enum {
    ITEM_MODEL_PACK_ORDER_SGD = 0,
    ITEM_MODEL_PACK_ORDER_TM2 = 1,
    ITEM_MODEL_PACK_ORDER_BWC = 2
} ITEM_MODEL_PACK_ORDER;

typedef enum {
    MAPMODELPK2_MODEL = 0,
    MAPMODELPK2_SOURCEMODEL = 1,
    MAPMODELPK2_SHADOWMODEL = 2
} MAPMODELPK2DATAINDEX;

enum ProcUnitType {
    VUVN = 0,
    MESH = 1,
    MATERIAL = 2,
    COORDINATE = 3,
    BOUNDING_BOX = 4,
    GS_IMAGE = 5,
    TRI2 = 10,
    END = 11,
    INVALID = 12,
    MonotoneTRI2 = 13,
    StackTRI2 = 14,
};


struct PHEAD
{ 
	u_int HeaderSections;
	u_int UniqHeaderSize;
	float *pUniqVertex[4];
	float *pUniqNormal[4];
	u_int *pUniqList;
	u_int CommonHeaderSize;
	float *pCommonVertex[4];
	float *pCommonNormal[4];
	u_int *pCommonList;
	u_int WeightedHeaderSize;
	float *pWeightedVertex[4];
	float *pWeightedNormal[4];
	u_int *pWeightedList;
};

#define SGD_VALID_VERSIONID 0x1050
#define INVALID_SGD_OBJECTID -1

/// Refered to as "ch"
#define MODEL_TYPE_CHARACTER 0

/// Refered to as "f"
#define MODEL_TYPE_FURNITURE 1

/// Refered to as "d"
#define MODEL_TYPE_DOOR 2

/// Refered to as "i"
#define MODEL_TYPE_ITEM 3

/* inlined from sgd_types.h @ line 642 */
inline bool sgdIsPresetData(SGDFILEHEADER *pSGDTop) {
    return pSGDTop->ucModelType & 1;
}

#endif //MIKOMPILATION_SGD_TYPES_H
