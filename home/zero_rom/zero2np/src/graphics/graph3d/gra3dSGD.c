// STATUS: NOT STARTED

#include "gra3dSGD.h"

struct _SGDVUVNDATA_WEIGHTED_2 {
	float *pVertex[4];
	float *pNormal[4];
};

struct _SGDVUVNDATA_WEIGHTEDVERTEX_3 {
	float vVertex[4];
	unsigned int aui[3];
	unsigned char ucBoneId0;
	unsigned char ucBoneId1;
	unsigned char auc[2];
};

struct _SGDVUVNDATA_WEIGHTED_3 {
	_SGDVUVNDATA_WEIGHTEDVERTEX_3 *pWeightedVertex;
	float *pNormal[4];
};

typedef void (*LPFUNC_CALCWEIGHTEDVECTORBUFFER)(/* parameters unknown */);

struct _LIGHTCOMPAREDATA {
	float fMaxPower;
	int iIndex;
};

struct SGDVUMESHTEXGIFTAG {
	unsigned int auiVifCode[2];
	unsigned int auiGifTag[4];
	long unsigned int aulData[2];
};

struct SGDVUMESHPOINTNUMREGSET {
	unsigned int auiVifCode[2];
};

struct SGDVUMESHPOINTNUM {
	G3DVIF1CODE_UNPACK VifUnpack;
	unsigned int uiPointNum;
};

struct SGDVUMESHSTREGSET {
	unsigned int auiVifCode[3];
};

struct SGDVUMESHST {
	float fS;
	float fT;
};

struct SGDVUMESHSTDATA {
	G3DVIF1CODE_UNPACK VifUnpack;
	SGDVUMESHST astData[1];
};

struct fixed_array_base<_LIGHTCOMPAREDATA,4,_LIGHTCOMPAREDATA[4]> {
protected:
	_LIGHTCOMPAREDATA m_aData[4];
	
public:
	fixed_array_base<_LIGHTCOMPAREDATA,4,_LIGHTCOMPAREDATA[4]>& operator=();
	fixed_array_base();
protected:
	fixed_array_base();
public:
	_LIGHTCOMPAREDATA& operator[]();
	_LIGHTCOMPAREDATA& operator[]();
	_LIGHTCOMPAREDATA* data();
	_LIGHTCOMPAREDATA* begin();
	_LIGHTCOMPAREDATA* end();
	void fill();
	size_t size();
	bool empty();
};

struct fixed_array<_LIGHTCOMPAREDATA,4> : fixed_array_base<_LIGHTCOMPAREDATA,4,_LIGHTCOMPAREDATA[4]> {
};

static float *s_pGlobalVertexBuffer[4] = NULL;
static float *s_pGlobalNormalBuffer[4] = NULL;
static int s_iGlobalBufferSize = 0;
unsigned char _LIGHTCOMPAREDATA type_info node[8];
static SGDPROCUNITHEADER *save_tri2_pointer;
static SGDPROCUNITHEADER *save_bw_pointer;
static SGDPROCUNITHEADER *s_ppuhVUVN;
static SGDCOORDINATE *s_pCoordBase;
static SGDFILEHEADER *s_pSGDTop;
static CoordCache ccahe;
static int edge_check;

static _LIGHTCOMPAREDATA s_NullLightCompareData = {
	/* .fMaxPower = */ 0.f,
	/* .iIndex = */ -1
};

static SGDPROCUNITHEADER *previous_tri2_prim;

static void _fixed_array_assert(char *strType, size_t v0, size_t v1) {
	static char *str = 0x3b7150;
	
  g3ddbgAssert__FbPCce(false,str_735);
  return (type_info *)dp;
}

static void** void * * _fixed_array_verifyrange<void *>(size_t v, size_t _max) {
  if (_max <= v) {
    __tf17_LIGHTCOMPAREDATA((float *)s_void__003f1298,(float *)_max);
  }
  return (void **)0x0;
}

static char** char * * _fixed_array_verifyrange<char *>(size_t v, size_t _max) {
  if (_max <= v) {
    __tf17_LIGHTCOMPAREDATA((float *)s_char__003f12a0,(float *)_max);
  }
  return (char **)0x0;
}

static unsigned int** unsigned int * * _fixed_array_verifyrange<unsigned int *>(size_t v, size_t _max) {
  if (_max <= v) {
    __tf17_LIGHTCOMPAREDATA((float *)"unsigned int*",(float *)_max);
  }
  return (uint **)0x0;
}

static SGDFILEHEADER* _GetSGDTop() {
  return s_pSGDTop;
}

static PHEAD* _GetLPHEAD() {
	static char __FUNCTION__[11] = {
		/* [0] = */ 95,
		/* [1] = */ 71,
		/* [2] = */ 101,
		/* [3] = */ 116,
		/* [4] = */ 76,
		/* [5] = */ 80,
		/* [6] = */ 72,
		/* [7] = */ 69,
		/* [8] = */ 65,
		/* [9] = */ 68,
		/* [10] = */ 0
	};
	
  SGDFILEHEADER *pSVar1;
  
  pSVar1 = _GetSGDTop__Fv();
  if (pSVar1 == (SGDFILEHEADER *)0x0) {
    _SetLineInfo__FPCciT0T0("gra3dSGD.c",0x89,"_GetLPHEAD","_GetSGDTop()");
    pSVar1 = _GetSGDTop__Fv();
    g3ddbgAssert__FbPCce(pSVar1 != (SGDFILEHEADER *)0x0,"sgd_top_addr is null");
  }
  return (PHEAD *)s_pSGDTop->pVectorInfo;
}

static u_int* GetNextUnpackAddr(u_int *prim) {
  uint *puVar1;
  
  do {
    puVar1 = prim;
    prim = puVar1 + 1;
  } while ((*puVar1 & 0x60000000) != 0x60000000);
  return puVar1;
}

static void SetVUVNData(SGDPROCUNITHEADER *pPUHead) {
	static char __FUNCTION__[12] = {
		/* [0] = */ 83,
		/* [1] = */ 101,
		/* [2] = */ 116,
		/* [3] = */ 86,
		/* [4] = */ 85,
		/* [5] = */ 86,
		/* [6] = */ 78,
		/* [7] = */ 68,
		/* [8] = */ 97,
		/* [9] = */ 116,
		/* [10] = */ 97,
		/* [11] = */ 0
	};
	SGDVUVNDESC &rVUVNDesc;
	SGDVUVNDATA *pVUVNData;
	G3DVIF1CODE_UNPACK *pVU;
	DVECTOR &ravDest[1];
	_VECTORADDRESS &raVA[1];
	size_t qwcount;
	u_long128 *pqwDest;
	u_long128 *pqwSrc;
	int i;
	
  ushort uVar1;
  ushort uVar2;
  SGDPROCUNITHEADER *pSVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined4 *puVar7;
  int iVar8;
  int iVar9;
  SGDPROCUNITHEADER *pSVar10;
  undefined4 *puVar11;
  int iVar12;
  uint uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  long lVar16;
  SGDPROCUNITHEADER____unnamed_8 *pSVar17;
  
  pSVar17 = &pPUHead->field2_0x8;
  puVar7 = (undefined4 *)g3dDmaOpenPacket__Fv();
                    /* inlined from g3dMemory.h */
  pSVar10 = pPUHead + 1;
  iVar12 = 1;
  puVar11 = puVar7;
  do {
    prefetch(pSVar10 + 1,0);
    uVar6._0_4_ = pSVar10->pNext;
    uVar6._4_4_ = pSVar10->iCategory;
    iVar8 = (pSVar10->field2_0x8).VUMeshDesc.iTagSize;
    iVar9 = (pSVar10->field2_0x8).VUMaterialDesc.iPad;
    pSVar10 = pSVar10 + 1;
    iVar12 = iVar12 + -1;
    *puVar11 = (int)uVar6;
    puVar11[1] = (int)((ulong)uVar6 >> 0x20);
    puVar11[2] = iVar8;
    puVar11[3] = iVar9;
    puVar11 = puVar11 + 4;
  } while (iVar12 != -1);
                    /* end of inlined section */
  uVar1 = (pSVar17->VUVNDesc).sNumVertex;
  uVar2 = (pPUHead->field2_0x8).VUVNDesc.sNumNormal;
  if ((pSVar17->VUVNDesc).sNumVertex != (pPUHead->field2_0x8).VUVNDesc.sNumNormal) {
    _SetLineInfo__FPCciT0T0
              ("gra3dSGD.c",0xbd,"SetVUVNData","rVUVNDesc.sNumVertex == rVUVNDesc.sNumNormal");
    g3ddbgAssert__FbPCce
              ((pSVar17->VUVNDesc).sNumVertex == (pPUHead->field2_0x8).VUVNDesc.sNumNormal,
               &DAT_003f12b8);
    uVar1 = (pSVar17->VUVNDesc).sNumVertex;
    uVar2 = (pPUHead->field2_0x8).VUVNDesc.sNumNormal;
  }
  if ((uint)*(byte *)((int)puVar7 + 0xe) != (int)(short)uVar1 + (int)(short)uVar2 + 1U) {
    _SetLineInfo__FPCciT0T0
              ("gra3dSGD.c",0xbf,"SetVUVNData",
               "(int)pVU->NUM == rVUVNDesc.sNumVertex + rVUVNDesc.sNumNormal + 1");
    g3ddbgAssert__FbPCce
              ((uint)*(byte *)((int)puVar7 + 0xe) ==
               (int)(short)(pSVar17->VUVNDesc).sNumVertex +
               (int)(short)(pPUHead->field2_0x8).VUVNDesc.sNumNormal + 1U,&DAT_003f12b8);
    uVar1 = (pSVar17->VUVNDesc).sNumVertex;
  }
  uVar13 = (uint)uVar1;
  pSVar10 = pPUHead + 3;
  lVar16 = 0;
  puVar11 = puVar7 + 8;
  if (0 < (int)(uVar13 << 0x10)) {
    do {
                    /* inlined from g3dxVu0.h */
      pSVar3 = pSVar10->pNext;
      puVar4 = (undefined8 *)pSVar10->iCategory;
      uVar5._0_4_ = pSVar3->pNext;
      uVar5._4_4_ = pSVar3->iCategory;
      iVar12 = (pSVar3->field2_0x8).VUMeshDesc.iTagSize;
      iVar8 = (pSVar3->field2_0x8).VUMaterialDesc.iPad;
      uVar6 = *puVar4;
      uVar14 = *(undefined4 *)(puVar4 + 1);
      uVar15 = *(undefined4 *)((int)puVar4 + 0xc);
      *puVar11 = (int)uVar5;
      puVar11[1] = (int)((ulong)uVar5 >> 0x20);
      puVar11[2] = iVar12;
      puVar11[3] = iVar8;
      puVar11[4] = (int)uVar6;
      puVar11[5] = (int)((ulong)uVar6 >> 0x20);
      puVar11[6] = uVar14;
      puVar11[7] = uVar15;
                    /* end of inlined section */
      lVar16 = (long)((int)lVar16 + 1);
      pSVar10 = (SGDPROCUNITHEADER *)&pSVar10->field2_0x8;
      uVar13 = (uint)(pSVar17->VUVNDesc).sNumVertex;
      puVar11 = puVar11 + 8;
    } while (lVar16 < (short)(pSVar17->VUVNDesc).sNumVertex);
  }
  g3dDmaClosePacket__FPCv((void *)((int)(puVar7 + 8) + ((int)(uVar13 << 0x10) >> 0xb)));
  return;
}

static void SetVUVNDataPost(SGDPROCUNITHEADER *pPUHead) {
	SGDVUVNDESC &rVUVNDesc;
	SGDVUVNDATA *pVUVNData;
	SGDVECTORINFO *pVI;
	DVECTOR &ravDest[1];
	_VECTORADDRESS &raVA[1];
	void *src;
	size_t qwcount;
	u_long128 *pqwDest;
	u_long128 *pqwSrc;
	int i;
	SGDCOORDINATE *pCoord0;
	SGDCOORDINATE *pCoord1;
	int i;
	int i;
	int i;
	int i;
	
  uchar uVar1;
  ushort uVar2;
  undefined8 *puVar3;
  SGDPROCUNITHEADER *pSVar4;
  float afVar5 [4];
  float afVar6 [4];
  float afVar7 [4];
  float afVar8 [4];
  float afVar9 [4];
  float afVar10 [4];
  float afVar11 [4];
  float afVar12 [4];
  float afVar13 [4];
  float afVar14 [4];
  float afVar15 [4];
  float afVar16 [4];
  float afVar17 [4];
  float afVar18 [4];
  float afVar19 [4];
  float afVar20 [4];
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined4 *puVar25;
  PHEAD *pPVar26;
  SGDCOORDINATE *pSVar27;
  SGDCOORDINATE *pSVar28;
  int iVar29;
  int iVar30;
  SGDPROCUNITHEADER *pSVar31;
  uint uVar32;
  undefined4 *puVar33;
  int iVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  undefined4 uVar37;
  long lVar38;
  SGDPROCUNITHEADER____unnamed_8 *pSVar39;
  undefined in_vf0 [16];
  undefined auVar40 [16];
  undefined auVar41 [16];
  undefined auVar42 [16];
  undefined auVar43 [16];
  undefined auVar44 [16];
  undefined auVar45 [16];
  undefined auVar46 [16];
  undefined auVar47 [16];
  undefined auVar48 [16];
  undefined auVar49 [16];
  undefined auVar50 [16];
  
                    /* inlined from g3dMemory.h */
  pSVar31 = pPUHead + 1;
  pSVar39 = &pPUHead->field2_0x8;
                    /* end of inlined section */
  puVar25 = (undefined4 *)g3dDmaOpenPacket__Fv();
  pPVar26 = _GetLPHEAD__Fv();
                    /* inlined from g3dMemory.h */
  iVar34 = 1;
  puVar33 = puVar25;
  do {
    prefetch(pSVar31 + 1,0);
    uVar22._0_4_ = pSVar31->pNext;
    uVar22._4_4_ = pSVar31->iCategory;
    iVar29 = (pSVar31->field2_0x8).VUMeshDesc.iTagSize;
    iVar30 = (pSVar31->field2_0x8).VUMaterialDesc.iPad;
    pSVar31 = pSVar31 + 1;
    iVar34 = iVar34 + -1;
    *puVar33 = (int)uVar22;
    puVar33[1] = (int)((ulong)uVar22 >> 0x20);
    puVar33[2] = iVar29;
    puVar33[3] = iVar30;
    puVar33 = puVar33 + 4;
  } while (iVar34 != -1);
                    /* end of inlined section */
  uVar1 = (pPUHead->field2_0x8).VUVNDesc.ucVectorType;
  pSVar31 = pPUHead + 3;
  if (uVar1 == '\x02') {
    lVar38 = 0;
    if (pPVar26->pWeightedList == (uint *)0x0) {
      pSVar27 = gra3dsgdGetCoordinate__Fi((uint)pPUHead[2].field2_0x8.VUVNDesc.ucSize);
      pSVar28 = gra3dsgdGetCoordinate__Fi((uint)pPUHead[2].field2_0x8.VUVNDesc.ucVectorType);
      afVar5[0] = *(float *)((int)pSVar27->matLocalWorld[0] + 0);
      afVar5[1] = *(float *)((int)pSVar27->matLocalWorld[0] + 4);
      afVar5[2] = *(float *)((int)pSVar27->matLocalWorld[0] + 8);
      afVar5[3] = *(float *)((int)pSVar27->matLocalWorld[0] + 0xc);
                    /* inlined from gra3dVu0.h */
      auVar40 = _lqc2((undefined  [16])afVar5);
      afVar6[0] = *(float *)((int)pSVar27->matLocalWorld[1] + 0);
      afVar6[1] = *(float *)((int)pSVar27->matLocalWorld[1] + 4);
      afVar6[2] = *(float *)((int)pSVar27->matLocalWorld[1] + 8);
      afVar6[3] = *(float *)((int)pSVar27->matLocalWorld[1] + 0xc);
      auVar41 = _lqc2((undefined  [16])afVar6);
      afVar7[0] = *(float *)((int)pSVar27->matLocalWorld[2] + 0);
      afVar7[1] = *(float *)((int)pSVar27->matLocalWorld[2] + 4);
      afVar7[2] = *(float *)((int)pSVar27->matLocalWorld[2] + 8);
      afVar7[3] = *(float *)((int)pSVar27->matLocalWorld[2] + 0xc);
      auVar42 = _lqc2((undefined  [16])afVar7);
      afVar8[0] = *(float *)((int)pSVar27->matLocalWorld[3] + 0);
      afVar8[1] = *(float *)((int)pSVar27->matLocalWorld[3] + 4);
      afVar8[2] = *(float *)((int)pSVar27->matLocalWorld[3] + 8);
      afVar8[3] = *(float *)((int)pSVar27->matLocalWorld[3] + 0xc);
      auVar43 = _lqc2((undefined  [16])afVar8);
      afVar9[0] = *(float *)((int)pSVar28->matLocalWorld[0] + 0);
      afVar9[1] = *(float *)((int)pSVar28->matLocalWorld[0] + 4);
      afVar9[2] = *(float *)((int)pSVar28->matLocalWorld[0] + 8);
      afVar9[3] = *(float *)((int)pSVar28->matLocalWorld[0] + 0xc);
      auVar44 = _lqc2((undefined  [16])afVar9);
      afVar10[0] = *(float *)((int)pSVar28->matLocalWorld[1] + 0);
      afVar10[1] = *(float *)((int)pSVar28->matLocalWorld[1] + 4);
      afVar10[2] = *(float *)((int)pSVar28->matLocalWorld[1] + 8);
      afVar10[3] = *(float *)((int)pSVar28->matLocalWorld[1] + 0xc);
      auVar45 = _lqc2((undefined  [16])afVar10);
      afVar11[0] = *(float *)((int)pSVar28->matLocalWorld[2] + 0);
      afVar11[1] = *(float *)((int)pSVar28->matLocalWorld[2] + 4);
      afVar11[2] = *(float *)((int)pSVar28->matLocalWorld[2] + 8);
      afVar11[3] = *(float *)((int)pSVar28->matLocalWorld[2] + 0xc);
      auVar46 = _lqc2((undefined  [16])afVar11);
      afVar12[0] = *(float *)((int)pSVar28->matLocalWorld[3] + 0);
      afVar12[1] = *(float *)((int)pSVar28->matLocalWorld[3] + 4);
      afVar12[2] = *(float *)((int)pSVar28->matLocalWorld[3] + 8);
      afVar12[3] = *(float *)((int)pSVar28->matLocalWorld[3] + 0xc);
      auVar47 = _lqc2((undefined  [16])afVar12);
                    /* end of inlined section */
      lVar38 = 0;
      uVar32 = (uint)(pSVar39->VUVNDesc).sNumVertex;
      if (0 < (short)(pSVar39->VUVNDesc).sNumVertex) {
        do {
                    /* inlined from gra3dVu0.h */
          auVar48 = _lqc2((undefined  [16])*pSVar31->pNext);
          _vmulabc(auVar40,auVar48);
          _vmaddabc(auVar41,auVar48);
          _vmaddabc(auVar42,auVar48);
          _vmaddbc(auVar43,in_vf0);
          _vsubbc(in_vf0,auVar48);
          auVar49 = _vmove(auVar48);
          auVar48 = _lqc2((undefined  [16])pSVar31->pNext[1]);
          _vmulabc(auVar44,auVar48);
          _vmaddabc(auVar45,auVar48);
          _vmaddabc(auVar46,auVar48);
          auVar48 = _vmaddbc(auVar47,in_vf0);
          _vmulabc(auVar49,auVar49);
          _vmaddbc(auVar48,auVar48);
          auVar50 = _vmove(in_vf0);
          auVar48 = _lqc2(*(undefined (*) [16])pSVar31->iCategory);
          _vmulabc(auVar40,auVar48);
          _vmaddabc(auVar41,auVar48);
          auVar49 = _vmaddbc(auVar42,auVar48);
          _vsubbc(in_vf0,auVar48);
          auVar48 = _lqc2(((undefined (*) [16])pSVar31->iCategory)[1]);
          _vmulabc(auVar44,auVar48);
          _vmaddabc(auVar45,auVar48);
          auVar48 = _vmaddbc(auVar46,auVar48);
          _vmulabc(auVar49,auVar49);
          auVar48 = _vmaddbc(auVar48,auVar48);
          _vmulbc(auVar48,auVar43);
          auVar49 = _vmove(in_vf0);
          auVar48 = _sqc2(auVar50);
          *(undefined (*) [16])(puVar25 + (int)lVar38 * 8 + 8) = auVar48;
          auVar48 = _sqc2(auVar49);
          ((undefined (*) [16])(puVar25 + (int)lVar38 * 8 + 8))[1] = auVar48;
                    /* end of inlined section */
          lVar38 = (long)((int)lVar38 + 1);
          pSVar31 = (SGDPROCUNITHEADER *)&pSVar31->field2_0x8;
        } while (lVar38 < (short)(pSVar39->VUVNDesc).sNumVertex);
        iVar34 = (uint)(pSVar39->VUVNDesc).sNumVertex << 0x10;
        goto LAB_001b7fb0;
      }
    }
    else {
      uVar32 = (uint)(pSVar39->VUVNDesc).sNumVertex;
      if (0 < (short)(pSVar39->VUVNDesc).sNumVertex) {
        do {
                    /* inlined from g3dxVu0.h */
          pSVar4 = pSVar31->pNext;
          puVar33 = puVar25 + (int)lVar38 * 8 + 8;
          puVar3 = (undefined8 *)pSVar31->iCategory;
          uVar21._0_4_ = pSVar4->pNext;
          uVar21._4_4_ = pSVar4->iCategory;
          iVar34 = (((SGDPROCUNITHEADER____unnamed_8 *)(&pSVar4->pNext + 2))->VUMeshDesc).iTagSize;
          uVar35 = (&pSVar4->pNext)[3];
          uVar22 = *puVar3;
          uVar36 = *(undefined4 *)(puVar3 + 1);
          uVar37 = *(undefined4 *)((int)puVar3 + 0xc);
          *puVar33 = (int)uVar21;
          puVar33[1] = (int)((ulong)uVar21 >> 0x20);
          puVar33[2] = iVar34;
          puVar33[3] = uVar35;
          puVar33[4] = (int)uVar22;
          puVar33[5] = (int)((ulong)uVar22 >> 0x20);
          puVar33[6] = uVar36;
          puVar33[7] = uVar37;
                    /* end of inlined section */
          lVar38 = (long)((int)lVar38 + 1);
          pSVar31 = (SGDPROCUNITHEADER *)&pSVar31->field2_0x8;
        } while (lVar38 < (short)(pSVar39->VUVNDesc).sNumVertex);
        iVar34 = (uint)(pSVar39->VUVNDesc).sNumVertex << 0x10;
        goto LAB_001b7fb0;
      }
    }
  }
  else {
    lVar38 = 0;
    if (uVar1 == '\x03') {
      lVar38 = 0;
      if (pPVar26->pWeightedList == (uint *)0x0) {
        lVar38 = 0;
        uVar32 = (uint)(pSVar39->VUVNDesc).sNumVertex;
        if (0 < (short)(pSVar39->VUVNDesc).sNumVertex) {
          do {
            pSVar27 = gra3dsgdGetCoordinate__Fi((uint)*(byte *)(&pSVar31->pNext[1].pNext + 3));
                    /* inlined from gra3dVu0.h */
                    /* end of inlined section */
            pSVar28 = gra3dsgdGetCoordinate__Fi
                                ((uint)*(byte *)((int)&pSVar31->pNext[1].pNext + 0xd));
            afVar13[0] = *(float *)((int)pSVar27->matLocalWorld[0] + 0);
            afVar13[1] = *(float *)((int)pSVar27->matLocalWorld[0] + 4);
            afVar13[2] = *(float *)((int)pSVar27->matLocalWorld[0] + 8);
            afVar13[3] = *(float *)((int)pSVar27->matLocalWorld[0] + 0xc);
                    /* inlined from gra3dVu0.h */
            auVar40 = _lqc2((undefined  [16])afVar13);
            afVar14[0] = *(float *)((int)pSVar27->matLocalWorld[1] + 0);
            afVar14[1] = *(float *)((int)pSVar27->matLocalWorld[1] + 4);
            afVar14[2] = *(float *)((int)pSVar27->matLocalWorld[1] + 8);
            afVar14[3] = *(float *)((int)pSVar27->matLocalWorld[1] + 0xc);
            auVar41 = _lqc2((undefined  [16])afVar14);
            afVar15[0] = *(float *)((int)pSVar27->matLocalWorld[2] + 0);
            afVar15[1] = *(float *)((int)pSVar27->matLocalWorld[2] + 4);
            afVar15[2] = *(float *)((int)pSVar27->matLocalWorld[2] + 8);
            afVar15[3] = *(float *)((int)pSVar27->matLocalWorld[2] + 0xc);
            auVar42 = _lqc2((undefined  [16])afVar15);
            afVar16[0] = *(float *)((int)pSVar27->matLocalWorld[3] + 0);
            afVar16[1] = *(float *)((int)pSVar27->matLocalWorld[3] + 4);
            afVar16[2] = *(float *)((int)pSVar27->matLocalWorld[3] + 8);
            afVar16[3] = *(float *)((int)pSVar27->matLocalWorld[3] + 0xc);
            auVar43 = _lqc2((undefined  [16])afVar16);
            afVar17[0] = *(float *)((int)pSVar28->matLocalWorld[0] + 0);
            afVar17[1] = *(float *)((int)pSVar28->matLocalWorld[0] + 4);
            afVar17[2] = *(float *)((int)pSVar28->matLocalWorld[0] + 8);
            afVar17[3] = *(float *)((int)pSVar28->matLocalWorld[0] + 0xc);
            auVar44 = _lqc2((undefined  [16])afVar17);
            afVar18[0] = *(float *)((int)pSVar28->matLocalWorld[1] + 0);
            afVar18[1] = *(float *)((int)pSVar28->matLocalWorld[1] + 4);
            afVar18[2] = *(float *)((int)pSVar28->matLocalWorld[1] + 8);
            afVar18[3] = *(float *)((int)pSVar28->matLocalWorld[1] + 0xc);
            auVar45 = _lqc2((undefined  [16])afVar18);
            afVar19[0] = *(float *)((int)pSVar28->matLocalWorld[2] + 0);
            afVar19[1] = *(float *)((int)pSVar28->matLocalWorld[2] + 4);
            afVar19[2] = *(float *)((int)pSVar28->matLocalWorld[2] + 8);
            afVar19[3] = *(float *)((int)pSVar28->matLocalWorld[2] + 0xc);
            auVar46 = _lqc2((undefined  [16])afVar19);
            afVar20[0] = *(float *)((int)pSVar28->matLocalWorld[3] + 0);
            afVar20[1] = *(float *)((int)pSVar28->matLocalWorld[3] + 4);
            afVar20[2] = *(float *)((int)pSVar28->matLocalWorld[3] + 8);
            afVar20[3] = *(float *)((int)pSVar28->matLocalWorld[3] + 0xc);
            auVar47 = _lqc2((undefined  [16])afVar20);
            auVar48 = _lqc2((undefined  [16])*pSVar31->pNext);
            _vmulabc(auVar40,auVar48);
            _vmaddabc(auVar41,auVar48);
            _vmaddabc(auVar42,auVar48);
            _vmaddbc(auVar43,in_vf0);
            _vsubbc(in_vf0,auVar48);
            auVar49 = _vmove(auVar48);
            auVar48 = _lqc2((undefined  [16])pSVar31->pNext[1]);
            _vmulabc(auVar44,auVar48);
            _vmaddabc(auVar45,auVar48);
            _vmaddabc(auVar46,auVar48);
            auVar47 = _vmaddbc(auVar47,in_vf0);
            _vmulabc(auVar49,auVar49);
            _vmaddbc(auVar47,auVar47);
            auVar48 = _vmove(in_vf0);
            auVar47 = _lqc2(*(undefined (*) [16])pSVar31->iCategory);
            _vmulabc(auVar40,auVar47);
            _vmaddabc(auVar41,auVar47);
            auVar41 = _vmaddbc(auVar42,auVar47);
            _vsubbc(in_vf0,auVar47);
            auVar40 = _lqc2(((undefined (*) [16])pSVar31->iCategory)[1]);
            _vmulabc(auVar44,auVar40);
            _vmaddabc(auVar45,auVar40);
            auVar40 = _vmaddbc(auVar46,auVar40);
            _vmulabc(auVar41,auVar41);
            auVar40 = _vmaddbc(auVar40,auVar40);
            _vmulbc(auVar40,auVar43);
            auVar41 = _vmove(in_vf0);
            auVar40 = _sqc2(auVar48);
            *(undefined (*) [16])(puVar25 + (int)lVar38 * 8 + 8) = auVar40;
            auVar40 = _sqc2(auVar41);
            ((undefined (*) [16])(puVar25 + (int)lVar38 * 8 + 8))[1] = auVar40;
                    /* end of inlined section */
            lVar38 = (long)((int)lVar38 + 1);
            pSVar31 = (SGDPROCUNITHEADER *)&pSVar31->field2_0x8;
          } while (lVar38 < (short)(pSVar39->VUVNDesc).sNumVertex);
          iVar34 = (uint)(pSVar39->VUVNDesc).sNumVertex << 0x10;
          goto LAB_001b7fb0;
        }
      }
      else {
        uVar32 = (uint)(pSVar39->VUVNDesc).sNumVertex;
        if (0 < (short)(pSVar39->VUVNDesc).sNumVertex) {
          do {
                    /* inlined from g3dxVu0.h */
            pSVar4 = pSVar31->pNext;
            puVar33 = puVar25 + (int)lVar38 * 8 + 8;
            puVar3 = (undefined8 *)pSVar31->iCategory;
            uVar23._0_4_ = pSVar4->pNext;
            uVar23._4_4_ = pSVar4->iCategory;
            iVar34 = (((SGDPROCUNITHEADER____unnamed_8 *)(&pSVar4->pNext + 2))->VUMeshDesc).iTagSize
            ;
            uVar35 = (&pSVar4->pNext)[3];
            uVar22 = *puVar3;
            uVar36 = *(undefined4 *)(puVar3 + 1);
            uVar37 = *(undefined4 *)((int)puVar3 + 0xc);
            *puVar33 = (int)uVar23;
            puVar33[1] = (int)((ulong)uVar23 >> 0x20);
            puVar33[2] = iVar34;
            puVar33[3] = uVar35;
            puVar33[4] = (int)uVar22;
            puVar33[5] = (int)((ulong)uVar22 >> 0x20);
            puVar33[6] = uVar36;
            puVar33[7] = uVar37;
                    /* end of inlined section */
            lVar38 = (long)((int)lVar38 + 1);
            pSVar31 = (SGDPROCUNITHEADER *)&pSVar31->field2_0x8;
          } while (lVar38 < (short)(pSVar39->VUVNDesc).sNumVertex);
          iVar34 = (uint)(pSVar39->VUVNDesc).sNumVertex << 0x10;
          goto LAB_001b7fb0;
        }
      }
    }
    else {
      uVar2 = (pSVar39->VUVNDesc).sNumVertex;
      while (uVar32 = (uint)(pSVar39->VUVNDesc).sNumVertex, lVar38 < (short)uVar2) {
                    /* inlined from g3dxVu0.h */
        iVar29 = (int)lVar38;
        puVar33 = puVar25 + iVar29 * 8 + 8;
        puVar3 = (undefined8 *)(&pSVar31->pNext + iVar29 * 2)[1];
        pSVar4 = (&pSVar31->pNext)[iVar29 * 2];
        uVar24._0_4_ = pSVar4->pNext;
        uVar24._4_4_ = pSVar4->iCategory;
        iVar34 = (((SGDPROCUNITHEADER____unnamed_8 *)(&pSVar4->pNext + 2))->VUMeshDesc).iTagSize;
        uVar35 = (&pSVar4->pNext)[3];
        uVar22 = *puVar3;
        uVar36 = *(undefined4 *)(puVar3 + 1);
        uVar37 = *(undefined4 *)((int)puVar3 + 0xc);
        *puVar33 = (int)uVar24;
        puVar33[1] = (int)((ulong)uVar24 >> 0x20);
        puVar33[2] = iVar34;
        puVar33[3] = uVar35;
        puVar33[4] = (int)uVar22;
        puVar33[5] = (int)((ulong)uVar22 >> 0x20);
        puVar33[6] = uVar36;
        puVar33[7] = uVar37;
                    /* end of inlined section */
        uVar2 = (pSVar39->VUVNDesc).sNumVertex;
        lVar38 = (long)(iVar29 + 1);
      }
    }
  }
  iVar34 = uVar32 << 0x10;
LAB_001b7fb0:
  g3dDmaClosePacket__FPCv((void *)((int)puVar25 + (iVar34 >> 0xb) + 0x20));
  return;
}

static void SetVUMeshData(SGDPROCUNITHEADER *pPUHead) {
	static char __FUNCTION__[14] = {
		/* [0] = */ 83,
		/* [1] = */ 101,
		/* [2] = */ 116,
		/* [3] = */ 86,
		/* [4] = */ 85,
		/* [5] = */ 77,
		/* [6] = */ 101,
		/* [7] = */ 115,
		/* [8] = */ 104,
		/* [9] = */ 68,
		/* [10] = */ 97,
		/* [11] = */ 116,
		/* [12] = */ 97,
		/* [13] = */ 0
	};
	SGDVUMESHDESC &rVUMeshDesc;
	SGDVUMESHDATA *pVUMeshData;
	SGDVUVNDESC *pVUVNDesc;
	SGDVUVNDATA *pVUVNData;
	
  byte bVar1;
  SGDPROCUNITHEADER *pSVar2;
  byte bVar3;
  SGDPROCUNITHEADER *pPacket;
  SGDPROCUNITHEADER____unnamed_8 *pSVar4;
  SGDPROCUNITHEADER *pPacket_00;
  
  pSVar2 = s_ppuhVUVN;
  pSVar4 = &pPUHead->field2_0x8;
  pPacket_00 = s_ppuhVUVN + 1;
  bVar1 = (pPUHead->field2_0x8).VUVNDesc.ucVectorType;
  bVar3 = bVar1 & 0xd3;
  pPacket = pPUHead + 1;
  if (bVar3 == 0x42) {
    g3dDmaAddPacket__FPCvi(pPacket,(pSVar4->VUMeshDesc).iTagSize);
    gra3dCallMicroSubroutine2__FPCUi((uint *)0x1968);
    return;
  }
  if (bVar3 < 0x43) {
    if ((bVar1 & 0xd3) == 0) {
      g3dDmaAddPacket__FPCvi(pPacket,(pSVar4->VUMeshDesc).iTagSize);
      SetVUVNData__FP17SGDPROCUNITHEADER(s_ppuhVUVN);
      gra3dCallMicroSubroutine2__FPCUi((uint *)0x12f8);
      return;
    }
    if (bVar3 == 2) {
      g3dDmaAddPacket__FPCvi(pPacket,(pSVar4->VUMeshDesc).iTagSize);
      SetVUVNData__FP17SGDPROCUNITHEADER(s_ppuhVUVN);
      gra3dCallMicroSubroutine2__FPCUi((uint *)0x598);
      return;
    }
  }
  else {
    if (bVar3 == 0x80) {
      g3dDmaAddPacket__FPCvi(pPacket,(pSVar4->VUMeshDesc).iTagSize);
      g3dDmaAddPacket__FPCvi(pPacket_00,(uint)(pSVar2->field2_0x8).VUVNDesc.ucSize);
      gra3dCallMicroSubroutine2__FPCUi((uint *)0x12f8);
      return;
    }
    if (bVar3 == 0x82) {
      g3dDmaAddPacket__FPCvi(pPacket,(pSVar4->VUMeshDesc).iTagSize);
      g3dDmaAddPacket__FPCvi(pPacket_00,(uint)(pSVar2->field2_0x8).VUVNDesc.ucSize);
      gra3dCallMicroSubroutine2__FPCUi((uint *)0x598);
      return;
    }
  }
  _SetLineInfo__FPCciT0T0("gra3dSGD.c",0x185,"SetVUMeshData",&DAT_003f12c0);
  g3ddbgAssert__FbPCce(false,&DAT_003b7288);
  return;
}

static void SetVUMeshDataPost(SGDPROCUNITHEADER *pPUHead) {
	static char __FUNCTION__[18] = {
		/* [0] = */ 83,
		/* [1] = */ 101,
		/* [2] = */ 116,
		/* [3] = */ 86,
		/* [4] = */ 85,
		/* [5] = */ 77,
		/* [6] = */ 101,
		/* [7] = */ 115,
		/* [8] = */ 104,
		/* [9] = */ 68,
		/* [10] = */ 97,
		/* [11] = */ 116,
		/* [12] = */ 97,
		/* [13] = */ 80,
		/* [14] = */ 111,
		/* [15] = */ 115,
		/* [16] = */ 116,
		/* [17] = */ 0
	};
	SGDVUMESHDESC &rVUMeshDesc;
	SGDVUMESHDATA *pVUMeshData;
	
  byte bVar1;
  byte bVar2;
  SGDPROCUNITHEADER *pPacket;
  SGDPROCUNITHEADER____unnamed_8 *pSVar3;
  
  pPacket = pPUHead + 1;
  pSVar3 = &pPUHead->field2_0x8;
  bVar1 = (pPUHead->field2_0x8).VUVNDesc.ucVectorType;
  bVar2 = bVar1 & 0x53;
  if (bVar2 == 2) {
    g3dDmaAddPacket__FPCvi(pPacket,(pSVar3->VUMeshDesc).iTagSize);
    SetVUVNDataPost__FP17SGDPROCUNITHEADER(s_ppuhVUVN);
    gra3dCallMicroSubroutine2__FPCUi((uint *)0xc88);
    return;
  }
  if (bVar2 < 3) {
    if ((bVar1 & 0x53) == 0) {
      g3dDmaAddPacket__FPCvi(pPacket,(pSVar3->VUMeshDesc).iTagSize);
      SetVUVNDataPost__FP17SGDPROCUNITHEADER(s_ppuhVUVN);
      gra3dCallMicroSubroutine2__FPCUi((uint *)0x12f8);
      return;
    }
  }
  else if (bVar2 == 0x42) {
    g3dDmaAddPacket__FPCvi(pPacket,(pSVar3->VUMeshDesc).iTagSize);
    gra3dCallMicroSubroutine2__FPCUi((uint *)0x1968);
    return;
  }
  _SetLineInfo__FPCciT0T0("gra3dSGD.c",0x1b8,"SetVUMeshDataPost",&DAT_003f12c0);
  g3ddbgAssert__FbPCce(false,&DAT_003b7288);
  return;
}

static int CheckCoordCache(int cn) {
	GRA3DMATERIALINDEXCACHE *pMatIndexCachePoint;
	GRA3DMATERIALINDEXCACHE *pMatIndexCacheSpot;
	int bEnablePoint;
	int bEnableSpot;
	int i;
	int i;
	GRA3DVU1MATERIALCACHE_POINT *pMatCache;
	GRA3DVU1MATERIALCACHE_SPOT *pMatCache;
	
  int iVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  void *pvVar5;
  int *piVar6;
  int iVar7;
  int *piVar8;
  
  if ((ccahe.cache_on == -1) || (iVar3 = _GetEdgeCheck__Fv(), ccahe.edge_check != iVar3))
  goto LAB_001b841c;
  iVar3 = gra3dIsLightTypeEnable__F12G3DLIGHTTYPE(G3DLIGHT_POINT);
  iVar4 = gra3dIsLightTypeEnable__F12G3DLIGHTTYPE(G3DLIGHT_SPOT);
  if ((ccahe.Point.bEnable == iVar3) && (ccahe.Spot.bEnable == iVar4)) {
    if (ccahe.Point.bEnable != 0) {
      pvVar5 = g3dGetVu1MaterialCache__F12G3DLIGHTTYPEi(G3DLIGHT_POINT,0);
      iVar7 = 0;
      piVar6 = (int *)((int)pvVar5 + 0x74);
      piVar8 = ccahe.Point.aiIndex;
      iVar3 = ccahe.Point.aiIndex[0];
      while( true ) {
        piVar8 = piVar8 + 1;
        iVar1 = *piVar6;
        piVar6 = piVar6 + 1;
        if (iVar3 != iVar1) break;
        iVar7 = iVar7 + 1;
        if (2 < iVar7) goto LAB_001b837c;
        iVar3 = *piVar8;
      }
      goto LAB_001b8324;
    }
LAB_001b837c:
    bVar2 = true;
    if (iVar4 != 0) {
      pvVar5 = g3dGetVu1MaterialCache__F12G3DLIGHTTYPEi(G3DLIGHT_SPOT,0);
      iVar4 = 0;
      piVar8 = (int *)((int)pvVar5 + 0x74);
      piVar6 = ccahe.Spot.aiIndex;
      iVar3 = ccahe.Spot.aiIndex[0];
      while( true ) {
        piVar6 = piVar6 + 1;
        iVar7 = *piVar8;
        piVar8 = piVar8 + 1;
        if (iVar3 != iVar7) break;
        iVar4 = iVar4 + 1;
        if (2 < iVar4) {
          bVar2 = true;
          goto LAB_001b83c8;
        }
        iVar3 = *piVar6;
      }
      goto LAB_001b8324;
    }
  }
  else {
LAB_001b8324:
    bVar2 = false;
  }
LAB_001b83c8:
  if ((bVar2) &&
     (iVar3 = memcmp(s_pCoordBase[cn].matLocalWorld,s_pCoordBase[ccahe.cn0].matLocalWorld,0x40),
     iVar3 == 0)) {
    return 1;
  }
LAB_001b841c:
  ccahe.cache_on = 1;
  ccahe.edge_check = _GetEdgeCheck__Fv();
  ccahe.cn0 = cn;
  iVar3 = gra3dIsLightTypeEnable__F12G3DLIGHTTYPE(G3DLIGHT_POINT);
  if (iVar3 != 0) {
    pvVar5 = g3dGetVu1MaterialCache__F12G3DLIGHTTYPEi(G3DLIGHT_POINT,0);
    ccahe.Point.aiIndex[0] = *(int *)((int)pvVar5 + 0x74);
    ccahe.Point.aiIndex[1] = *(int *)((int)pvVar5 + 0x78);
    ccahe.Point.aiIndex[2] = *(int *)((int)pvVar5 + 0x7c);
  }
  iVar3 = gra3dIsLightTypeEnable__F12G3DLIGHTTYPE(G3DLIGHT_SPOT);
  if (iVar3 != 0) {
    pvVar5 = g3dGetVu1MaterialCache__F12G3DLIGHTTYPEi(G3DLIGHT_SPOT,0);
    ccahe.Spot.aiIndex[0] = *(int *)((int)pvVar5 + 0x74);
    ccahe.Spot.aiIndex[1] = *(int *)((int)pvVar5 + 0x78);
    ccahe.Spot.aiIndex[2] = *(int *)((int)pvVar5 + 0x7c);
  }
  return 0;
}

static void SetMaterialDataVU(SGDPROCUNITHEADER *pPUHead) {
	static int old_tag_buf = -1;
	qword *base;
	qword *top;
	static SGDMATERIAL *s_pMatOld = NULL;
	SGDMATERIAL *pMat;
	int qwc;
	GRA3DVU1MATERIALPACKET_POINT *pPacketPoint;
	GRA3DVU1MATERIALPACKET_SPOT *pPacketSpot;
	GRA3DMATERIALINDEXCACHE *pMatIndexCachePoint;
	GRA3DMATERIALINDEXCACHE *pMatIndexCacheSpot;
	int bEnablePoint;
	int bEnableSpot;
	int i;
	int i;
	GRA3DVU1MATERIALCACHE_SPOT *pMatCache;
	GRA3DVU1MATERIALCACHE_POINT *pMatCache;
	
  int iVar1;
  bool bVar2;
  undefined *puVar3;
  SGDFILEHEADER *pSGDData;
  int iVar4;
  int iVar5;
  int *piVar6;
  void *pvVar7;
  int *piVar8;
  int *piVar9;
  int *dest;
  int iVar10;
  int iVar11;
  int *dest_00;
  
  puVar3 = (undefined *)dmaVif1GetToggle__Fv();
  if (old_tag_buf_928 == puVar3) {
    iVar10 = (pPUHead->field2_0x8).VUMeshDesc.iTagSize;
  }
  else {
    pSGDData = _GetSGDTop__Fv();
    sgdResetMaterialCache__FP13SGDFILEHEADER(pSGDData);
    old_tag_buf_928 = (undefined *)dmaVif1GetToggle__Fv();
    iVar10 = (pPUHead->field2_0x8).VUMeshDesc.iTagSize;
  }
  if (*(int *)(iVar10 + 0x50) < 0) goto LAB_001b8638;
  iVar4 = gra3dIsLightTypeEnable__F12G3DLIGHTTYPE(G3DLIGHT_POINT);
  iVar5 = gra3dIsLightTypeEnable__F12G3DLIGHTTYPE(G3DLIGHT_SPOT);
  if ((*(int *)(iVar10 + 0x70) == iVar4) && (*(int *)(iVar10 + 0x80) == iVar5)) {
    if (*(int *)(iVar10 + 0x70) != 0) {
      pvVar7 = g3dGetVu1MaterialCache__F12G3DLIGHTTYPEi(G3DLIGHT_POINT,0);
      iVar11 = 0;
      piVar9 = (int *)((int)pvVar7 + 0x74);
      piVar8 = (int *)(iVar10 + 0x74);
      iVar4 = *piVar8;
      while( true ) {
        piVar8 = piVar8 + 1;
        iVar1 = *piVar9;
        piVar9 = piVar9 + 1;
        if (iVar4 != iVar1) break;
        iVar11 = iVar11 + 1;
        if (2 < iVar11) goto LAB_001b85ac;
        iVar4 = *piVar8;
      }
      goto LAB_001b8554;
    }
LAB_001b85ac:
    bVar2 = true;
    if (iVar5 != 0) {
      pvVar7 = g3dGetVu1MaterialCache__F12G3DLIGHTTYPEi(G3DLIGHT_SPOT,0);
      iVar5 = 0;
      piVar9 = (int *)((int)pvVar7 + 0x74);
      piVar8 = (int *)(iVar10 + 0x84);
      iVar4 = *piVar8;
      while( true ) {
        piVar8 = piVar8 + 1;
        iVar11 = *piVar9;
        piVar9 = piVar9 + 1;
        if (iVar4 != iVar11) break;
        iVar5 = iVar5 + 1;
        if (2 < iVar5) {
          bVar2 = true;
          goto LAB_001b85f8;
        }
        iVar4 = *piVar8;
      }
      goto LAB_001b8554;
    }
  }
  else {
LAB_001b8554:
    bVar2 = false;
  }
LAB_001b85f8:
  if (bVar2) {
    if (iVar10 == s_pMatOld_929) {
      return;
    }
    s_pMatOld_929 = iVar10;
    g3dDmaAddPacket__FPCvi(*(void **)(iVar10 + 0x54),*(int *)(iVar10 + 0x58));
    return;
  }
LAB_001b8638:
  s_pMatOld_929 = iVar10;
  piVar6 = (int *)g3dDmaOpenPacket__Fv();
  *(uint *)(iVar10 + 0x54) = (uint)piVar6 & 0xfffffff;
  iVar5 = 0;
  iVar4 = gra3dIsLightTypeEnable__F12G3DLIGHTTYPE(G3DLIGHT_SPOT);
  piVar8 = (int *)0x0;
  piVar9 = piVar6;
  if (iVar4 != 0) {
    piVar9 = piVar6 + 0x20;
    iVar5 = 8;
    piVar8 = piVar6;
  }
  iVar4 = gra3dIsLightTypeEnable__F12G3DLIGHTTYPE(G3DLIGHT_POINT);
  iVar11 = iVar5 + 8;
  dest = piVar9;
  dest_00 = (int *)0x0;
  if (iVar4 != 0) {
    dest = piVar9 + 0x20;
    iVar11 = iVar5 + 0x10;
    dest_00 = piVar9;
  }
  *(int *)(iVar10 + 0x58) = iVar11;
  gra3dSetMaterial__FP11SGDMATERIAL((SGDMATERIAL *)(pPUHead->field2_0x8).VUMeshDesc.iTagSize);
  if (piVar8 != (int *)0x0) {
    gra3dSetVif1Code_Unpack__FPiiii(piVar8,0x35,7,0x6c);
    gra3dCalcVu1MaterialDataSpot__FP25GRA3DVU1MATERIALDATA_SPOT
              ((GRA3DVU1MATERIALDATA_SPOT *)(piVar8 + 4));
    pvVar7 = g3dGetVu1MaterialCache__F12G3DLIGHTTYPEi(G3DLIGHT_SPOT,0);
    *(undefined4 *)(iVar10 + 0x84) = *(undefined4 *)((int)pvVar7 + 0x74);
    *(undefined4 *)(iVar10 + 0x88) = *(undefined4 *)((int)pvVar7 + 0x78);
    *(undefined4 *)(iVar10 + 0x8c) = *(undefined4 *)((int)pvVar7 + 0x7c);
  }
  iVar4 = gra3dIsLightTypeEnable__F12G3DLIGHTTYPE(G3DLIGHT_SPOT);
  *(int *)(iVar10 + 0x80) = iVar4;
  if (dest_00 != (int *)0x0) {
    gra3dSetVif1Code_Unpack__FPiiii(dest_00,0x3c,7,0x6c);
    gra3dCalcVu1MaterialDataPoint__FP26GRA3DVU1MATERIALDATA_POINT
              ((GRA3DVU1MATERIALDATA_POINT *)(dest_00 + 4));
    pvVar7 = g3dGetVu1MaterialCache__F12G3DLIGHTTYPEi(G3DLIGHT_POINT,0);
    *(undefined4 *)(iVar10 + 0x74) = *(undefined4 *)((int)pvVar7 + 0x74);
    *(undefined4 *)(iVar10 + 0x78) = *(undefined4 *)((int)pvVar7 + 0x78);
    *(undefined4 *)(iVar10 + 0x7c) = *(undefined4 *)((int)pvVar7 + 0x7c);
  }
  iVar4 = gra3dIsLightTypeEnable__F12G3DLIGHTTYPE(G3DLIGHT_POINT);
  *(int *)(iVar10 + 0x70) = iVar4;
  gra3dSetVif1Code_Unpack__FPiiii(dest,0x2e,7,0x6c);
  gra3dCalcVu1MaterialDataDirectional__FP32GRA3DVU1MATERIALDATA_DIRECTIONAL
            ((GRA3DVU1MATERIALDATA_DIRECTIONAL *)(dest + 4));
  g3dDmaClosePacket__FPCv(piVar6 + iVar11 * 4);
  return;
}

static void GsImageProcess(SGDPROCUNITHEADER *pPUHead) {
  g3dDmaAddPacket__FPCvi(pPUHead + 1,(pPUHead->field2_0x8).VUMeshDesc.iTagSize);
  return;
}

static void _SetCoordData(SGDPROCUNITHEADER *pPUHead) {
	static char __FUNCTION__[14] = {
		/* [0] = */ 95,
		/* [1] = */ 83,
		/* [2] = */ 101,
		/* [3] = */ 116,
		/* [4] = */ 67,
		/* [5] = */ 111,
		/* [6] = */ 111,
		/* [7] = */ 114,
		/* [8] = */ 100,
		/* [9] = */ 68,
		/* [10] = */ 97,
		/* [11] = */ 116,
		/* [12] = */ 97,
		/* [13] = */ 0
	};
	GRA3DVU1LIGHTPACKET *pVu1LightPacket;
	
  int iVar1;
  int *dest;
  SGDCOORDINATE *cp0;
  
  iVar1 = CheckCoordCache__Fi((pPUHead->field2_0x8).VUMeshDesc.iTagSize);
  if (iVar1 == 0) {
    dest = (int *)g3dDmaOpenPacket__Fv();
    gra3dSetVif1Code_Unpack__FPiiii(dest,0x19,0x15,0x6c);
    if (dest == (int *)0x0) {
      _SetLineInfo__FPCciT0T0("gra3dSGD.c",0x2a0,"_SetCoordData","pVu1LightPacket");
      g3ddbgAssert__FbPCce(false,&DAT_003f12b8);
    }
    if (s_pCoordBase == (SGDCOORDINATE *)0x0) {
      _SetLineInfo__FPCciT0T0("gra3dSGD.c",0x2a1,"_SetCoordData","s_pCoordBase");
      g3ddbgAssert__FbPCce(s_pCoordBase != (SGDCOORDINATE *)0x0,&DAT_003f12b8);
    }
    cp0 = gra3dsgdGetCoordinate__Fi((pPUHead->field2_0x8).VUMeshDesc.iTagSize);
    g3dSetVu1LightData__FP17GRA3DVU1LIGHTDATAPC13SGDCOORDINATET1
              ((GRA3DVU1LIGHTDATA *)(dest + 4),cp0,(SGDCOORDINATE *)0x0);
    g3dDmaClosePacket__FPCv(dest + 0x58);
    gra3dVu1TransGTEOP__Fv();
    SetVU1Header__Fv();
  }
  return;
}

void _SetVUVNPRIM(SGDPROCUNITHEADER *ppuhVUVN) {
  s_ppuhVUVN = ppuhVUVN;
  return;
}

SGDPROCUNITHEADER* _GetVUVNPRIM() {
  return s_ppuhVUVN;
}

static int CheckBoundingBox(SGDPROCUNITHEADER *pPUHead) {
	float avWork[16][4];
	SGDBOUNDINGBOXDESC &rBBDesc;
	int clip1;
	SGDCOORDINATE Coord;
	SGDCOORDINATE Coord;
	
  float afVar1 [4];
  float afVar2 [4];
  float afVar3 [4];
  float afVar4 [4];
  float afVar5 [4];
  float afVar6 [4];
  float afVar7 [4];
  float afVar8 [4];
  float afVar9 [4];
  float afVar10 [4];
  float afVar11 [4];
  float afVar12 [4];
  SGDCOORDINATE *pSVar13;
  GRA3DCAMERA *pGVar14;
  GRA3DCAMERA *pGVar15;
  SGDCOORDINATE *pSVar16;
  int iVar17;
  ulong uVar18;
  SGDCOORDINATE *pSVar19;
  ulong uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  SGDPROCUNITHEADER____unnamed_8 *pSVar24;
  undefined4 in_vc2;
  undefined auVar25 [16];
  undefined auVar26 [16];
  undefined auVar27 [16];
  undefined auVar28 [16];
  undefined auVar29 [16];
  undefined auVar30 [16];
  undefined auVar31 [16];
  undefined auVar32 [16];
  float avWork [16] [4];
  SGDCOORDINATE local_1f0;
  SGDCOORDINATE Coord;
  
  pSVar24 = &pPUHead->field2_0x8;
  pSVar13 = gra3dsgdGetCoordinate__Fi((pSVar24->VUMeshDesc).iTagSize);
  pSVar19 = pSVar13 + 1;
  pSVar16 = &local_1f0;
  do {
    uVar21 = *(undefined8 *)(pSVar13->matCoord + 2);
    uVar22 = *(undefined8 *)pSVar13->matCoord[1];
    uVar23 = *(undefined8 *)(pSVar13->matCoord[1] + 2);
    *(undefined8 *)pSVar16->matCoord = *(undefined8 *)pSVar13->matCoord;
    *(undefined8 *)(pSVar16->matCoord + 2) = uVar21;
    *(undefined8 *)pSVar16->matCoord[1] = uVar22;
    *(undefined8 *)(pSVar16->matCoord[1] + 2) = uVar23;
    pSVar13 = (SGDCOORDINATE *)pSVar13->matCoord[2];
    pSVar16 = (SGDCOORDINATE *)pSVar16->matCoord[2];
  } while (pSVar13 != pSVar19);
  local_1f0.bInViewvolume = 0;
  gra3dsgdSetCoordinate__FPC13SGDCOORDINATEi(&local_1f0,(pSVar24->VUMeshDesc).iTagSize);
                    /* inlined from gra3dVu0.h */
  pGVar14 = gra3dGetCamera__Fv();
  pGVar15 = gra3dGetCamera__Fv();
  pSVar16 = gra3dsgdGetCoordinate__Fi((pSVar24->VUMeshDesc).iTagSize);
  afVar1[0] = *(float *)((int)pGVar14->matWorldClipObject[0] + 0);
  afVar1[1] = *(float *)((int)pGVar14->matWorldClipObject[0] + 4);
  afVar1[2] = *(float *)((int)pGVar14->matWorldClipObject[0] + 8);
  afVar1[3] = *(float *)((int)pGVar14->matWorldClipObject[0] + 0xc);
  auVar25 = _lqc2((undefined  [16])afVar1);
  afVar2[0] = *(float *)((int)pGVar14->matWorldClipObject[1] + 0);
  afVar2[1] = *(float *)((int)pGVar14->matWorldClipObject[1] + 4);
  afVar2[2] = *(float *)((int)pGVar14->matWorldClipObject[1] + 8);
  afVar2[3] = *(float *)((int)pGVar14->matWorldClipObject[1] + 0xc);
  auVar26 = _lqc2((undefined  [16])afVar2);
  afVar3[0] = *(float *)((int)pGVar14->matWorldClipObject[2] + 0);
  afVar3[1] = *(float *)((int)pGVar14->matWorldClipObject[2] + 4);
  afVar3[2] = *(float *)((int)pGVar14->matWorldClipObject[2] + 8);
  afVar3[3] = *(float *)((int)pGVar14->matWorldClipObject[2] + 0xc);
  auVar27 = _lqc2((undefined  [16])afVar3);
  afVar4[0] = *(float *)((int)pGVar14->matWorldClipObject[3] + 0);
  afVar4[1] = *(float *)((int)pGVar14->matWorldClipObject[3] + 4);
  afVar4[2] = *(float *)((int)pGVar14->matWorldClipObject[3] + 8);
  afVar4[3] = *(float *)((int)pGVar14->matWorldClipObject[3] + 0xc);
  auVar28 = _lqc2((undefined  [16])afVar4);
  afVar5[0] = *(float *)((int)pSVar16->matLocalWorld[0] + 0);
  afVar5[1] = *(float *)((int)pSVar16->matLocalWorld[0] + 4);
  afVar5[2] = *(float *)((int)pSVar16->matLocalWorld[0] + 8);
  afVar5[3] = *(float *)((int)pSVar16->matLocalWorld[0] + 0xc);
  auVar29 = _lqc2((undefined  [16])afVar5);
  afVar6[0] = *(float *)((int)pSVar16->matLocalWorld[1] + 0);
  afVar6[1] = *(float *)((int)pSVar16->matLocalWorld[1] + 4);
  afVar6[2] = *(float *)((int)pSVar16->matLocalWorld[1] + 8);
  afVar6[3] = *(float *)((int)pSVar16->matLocalWorld[1] + 0xc);
  auVar30 = _lqc2((undefined  [16])afVar6);
  afVar7[0] = *(float *)((int)pSVar16->matLocalWorld[2] + 0);
  afVar7[1] = *(float *)((int)pSVar16->matLocalWorld[2] + 4);
  afVar7[2] = *(float *)((int)pSVar16->matLocalWorld[2] + 8);
  afVar7[3] = *(float *)((int)pSVar16->matLocalWorld[2] + 0xc);
  auVar31 = _lqc2((undefined  [16])afVar7);
  afVar8[0] = *(float *)((int)pSVar16->matLocalWorld[3] + 0);
  afVar8[1] = *(float *)((int)pSVar16->matLocalWorld[3] + 4);
  afVar8[2] = *(float *)((int)pSVar16->matLocalWorld[3] + 8);
  afVar8[3] = *(float *)((int)pSVar16->matLocalWorld[3] + 0xc);
  auVar32 = _lqc2((undefined  [16])afVar8);
  _vmulabc(auVar25,auVar29);
  _vmaddabc(auVar26,auVar29);
  _vmaddabc(auVar27,auVar29);
  _vmaddbc(auVar28,auVar29);
  _vmulabc(auVar25,auVar30);
  _vmaddabc(auVar26,auVar30);
  _vmaddabc(auVar27,auVar30);
  _vmaddbc(auVar28,auVar30);
  _vmulabc(auVar25,auVar31);
  _vmaddabc(auVar26,auVar31);
  _vmaddabc(auVar27,auVar31);
  _vmaddbc(auVar28,auVar31);
  _vmulabc(auVar25,auVar32);
  _vmaddabc(auVar26,auVar32);
  _vmaddabc(auVar27,auVar32);
  _vmaddbc(auVar28,auVar32);
  afVar9[0] = *(float *)((int)pGVar15->matWorldClipPolygon[0] + 0);
  afVar9[1] = *(float *)((int)pGVar15->matWorldClipPolygon[0] + 4);
  afVar9[2] = *(float *)((int)pGVar15->matWorldClipPolygon[0] + 8);
  afVar9[3] = *(float *)((int)pGVar15->matWorldClipPolygon[0] + 0xc);
  auVar25 = _lqc2((undefined  [16])afVar9);
  afVar10[0] = *(float *)((int)pGVar15->matWorldClipPolygon[1] + 0);
  afVar10[1] = *(float *)((int)pGVar15->matWorldClipPolygon[1] + 4);
  afVar10[2] = *(float *)((int)pGVar15->matWorldClipPolygon[1] + 8);
  afVar10[3] = *(float *)((int)pGVar15->matWorldClipPolygon[1] + 0xc);
  auVar26 = _lqc2((undefined  [16])afVar10);
  afVar11[0] = *(float *)((int)pGVar15->matWorldClipPolygon[2] + 0);
  afVar11[1] = *(float *)((int)pGVar15->matWorldClipPolygon[2] + 4);
  afVar11[2] = *(float *)((int)pGVar15->matWorldClipPolygon[2] + 8);
  afVar11[3] = *(float *)((int)pGVar15->matWorldClipPolygon[2] + 0xc);
  auVar27 = _lqc2((undefined  [16])afVar11);
  afVar12[0] = *(float *)((int)pGVar15->matWorldClipPolygon[3] + 0);
  afVar12[1] = *(float *)((int)pGVar15->matWorldClipPolygon[3] + 4);
  afVar12[2] = *(float *)((int)pGVar15->matWorldClipPolygon[3] + 8);
  afVar12[3] = *(float *)((int)pGVar15->matWorldClipPolygon[3] + 0xc);
  auVar28 = _lqc2((undefined  [16])afVar12);
  _vmulabc(auVar25,auVar29);
  _vmaddabc(auVar26,auVar29);
  _vmaddabc(auVar27,auVar29);
  _vmaddbc(auVar28,auVar29);
  _vmulabc(auVar25,auVar30);
  _vmaddabc(auVar26,auVar30);
  _vmaddabc(auVar27,auVar30);
  _vmaddbc(auVar28,auVar30);
  _vmulabc(auVar25,auVar31);
  _vmaddabc(auVar26,auVar31);
  _vmaddabc(auVar27,auVar31);
  _vmaddbc(auVar28,auVar31);
  _vmulabc(auVar25,auVar32);
  _vmaddabc(auVar26,auVar32);
  _vmaddabc(auVar27,auVar32);
  _vmaddbc(auVar28,auVar32);
                    /* end of inlined section */
  iVar17 = gra3dIsBBInViewvolume__FPA3_fT0PA3_Cf(avWork[8],avWork,(float (*) [4])(pPUHead + 1));
  if (iVar17 == 0) {
    iVar17 = 0;
  }
  else {
    pSVar13 = gra3dsgdGetCoordinate__Fi((pSVar24->VUMeshDesc).iTagSize);
    pSVar19 = pSVar13 + 1;
    pSVar16 = &Coord;
    do {
      uVar21 = *(undefined8 *)(pSVar13->matCoord + 2);
      uVar22 = *(undefined8 *)pSVar13->matCoord[1];
      uVar23 = *(undefined8 *)(pSVar13->matCoord[1] + 2);
      *(undefined8 *)pSVar16->matCoord = *(undefined8 *)pSVar13->matCoord;
      *(undefined8 *)(pSVar16->matCoord + 2) = uVar21;
      *(undefined8 *)pSVar16->matCoord[1] = uVar22;
      *(undefined8 *)(pSVar16->matCoord[1] + 2) = uVar23;
      pSVar13 = (SGDCOORDINATE *)pSVar13->matCoord[2];
      pSVar16 = (SGDCOORDINATE *)pSVar16->matCoord[2];
    } while (pSVar13 != pSVar19);
    Coord.bInViewvolume = 1;
    gra3dsgdSetCoordinate__FPC13SGDCOORDINATEi(&Coord,(pSVar24->VUMeshDesc).iTagSize);
                    /* inlined from gra3dVu0.h */
    auVar25 = _lqc2((undefined  [16])avWork[8]);
    auVar26 = _lqc2((undefined  [16])avWork[9]);
    auVar27 = _lqc2((undefined  [16])avWork[10]);
    auVar28 = _lqc2((undefined  [16])avWork[11]);
    _vclip(auVar25,auVar25);
    _vclip(auVar26,auVar26);
    _vclip(auVar27,auVar27);
    _vclip(auVar28,auVar28);
    _vnop();
    _vnop();
    _vnop();
    _vnop();
    _vnop();
    uVar18 = _cfc2(in_vc2);
    auVar25 = _lqc2((undefined  [16])avWork[12]);
    auVar26 = _lqc2((undefined  [16])avWork[13]);
    auVar27 = _lqc2((undefined  [16])avWork[14]);
    auVar28 = _lqc2((undefined  [16])avWork[15]);
    _vclip(auVar25,auVar25);
    _vclip(auVar26,auVar26);
    _vclip(auVar27,auVar27);
    _vclip(auVar28,auVar28);
    _vnop();
    _vnop();
    _vnop();
    _vnop();
    _vnop();
    uVar20 = _cfc2(in_vc2);
                    /* end of inlined section */
                    /* inlined from gra3dVu0.h */
                    /* end of inlined section */
    if (((uVar18 | uVar20) & 0xffffff) == 0) {
      _SetEdgeCheck__Fi(0);
    }
    else {
      _SetEdgeCheck__Fi(1);
    }
    iVar17 = 1;
  }
  return iVar17;
}

static void SgSortUnitPrim(SGDPROCUNITHEADER *pPUHead) {
	static char __FUNCTION__[15] = {
		/* [0] = */ 83,
		/* [1] = */ 103,
		/* [2] = */ 83,
		/* [3] = */ 111,
		/* [4] = */ 114,
		/* [5] = */ 116,
		/* [6] = */ 85,
		/* [7] = */ 110,
		/* [8] = */ 105,
		/* [9] = */ 116,
		/* [10] = */ 80,
		/* [11] = */ 114,
		/* [12] = */ 105,
		/* [13] = */ 109,
		/* [14] = */ 0
	};
	
  int iVar1;
  uint uVar2;
  
  if (pPUHead != (SGDPROCUNITHEADER *)0x0) {
    uVar2 = (uint)pPUHead & 0xf;
    do {
      if (uVar2 != 0) {
        _SetLineInfo__FPCciT0T0("gra3dSGD.c",0x30e,"SgSortUnitPrim","!((int)pPUHead & 0xf)");
        g3ddbgAssert__FbPCce(uVar2 == 0,"memory illegal access occured");
      }
      switch(pPUHead->iCategory) {
      case 0:
        _SetVUVNPRIM__FPC17SGDPROCUNITHEADER(pPUHead);
        pPUHead = pPUHead->pNext;
        break;
      case 1:
        SetVUMeshData__FP17SGDPROCUNITHEADER(pPUHead);
        pPUHead = pPUHead->pNext;
        break;
      case 2:
        SetMaterialDataVU__FP17SGDPROCUNITHEADER(pPUHead);
        pPUHead = pPUHead->pNext;
        break;
      case 4:
        iVar1 = CheckBoundingBox__FP17SGDPROCUNITHEADER(pPUHead);
        if (iVar1 == 0) {
          return;
        }
        _SetCoordData__FP17SGDPROCUNITHEADER(pPUHead);
        pPUHead = pPUHead->pNext;
        break;
      case 5:
        GsImageProcess__FPC17SGDPROCUNITHEADER(pPUHead);
      case 3:
        pPUHead = pPUHead->pNext;
        break;
      default:
        pPUHead = pPUHead->pNext;
      }
      uVar2 = (uint)pPUHead & 0xf;
    } while (pPUHead != (SGDPROCUNITHEADER *)0x0);
  }
  return;
}

static float&[4][4] _CalcWeightedLocalWorldMatrix(float *matRet[4], float *matLocalWorld[4]) {
	float fABS;
	float matTemp[4][4];
	
  float afVar1 [4];
  undefined auVar2 [16];
  undefined in_vf1 [16];
  undefined auVar3 [16];
  undefined auVar4 [16];
  undefined auVar5 [16];
  undefined auVar6 [16];
  float matTemp [4] [4];
  
                    /* inlined from g3dxVu0.h */
  auVar3 = _lqc2((undefined  [16])*matLocalWorld);
  auVar4 = _lqc2((undefined  [16])matLocalWorld[1]);
  auVar5 = _lqc2((undefined  [16])matLocalWorld[2]);
  auVar6 = _lqc2((undefined  [16])matLocalWorld[3]);
  afVar1 = (float  [4])_sqc2(auVar3);
  *matRet = afVar1;
  afVar1 = (float  [4])_sqc2(auVar4);
  matRet[1] = afVar1;
  afVar1 = (float  [4])_sqc2(auVar5);
  matRet[2] = afVar1;
  afVar1 = (float  [4])_sqc2(auVar6);
  matRet[3] = afVar1;
  auVar4 = _pextlw(SUB128(*(undefined (*) [12])matLocalWorld[1],0),SUB168(*matLocalWorld,0));
  auVar5 = _pextuw((undefined  [16])matLocalWorld[1],(undefined  [16])*matLocalWorld);
  auVar6 = _pextlw(SUB128(*(undefined (*) [12])matLocalWorld[3],0),
                   SUB128(*(undefined (*) [12])matLocalWorld[2],0));
  auVar2 = _pextuw((undefined  [16])matLocalWorld[3],(undefined  [16])matLocalWorld[2]);
  auVar3 = _pcpyld(auVar6,auVar4);
  _pcpyud(auVar4,auVar6);
  _pcpyld(auVar2,auVar5);
  _pcpyud(auVar5,auVar2);
  auVar3 = _lqc2(auVar3);
  auVar3 = _vmul(auVar3,auVar3);
  _vaddabc(auVar3,auVar3);
  _vmaddbc(in_vf1,auVar3);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

static void SetCoordData(GRA3DVU1LIGHTDATA *pVu1LightData, SGDPROCUNITHEADER *pPUHead) {
	SGDCOORDINATEDESC &rCoordDesc;
	SGDCOORDINATE *pCoord0;
	SGDCOORDINATE *pCoord1;
	
  int iIndex;
  int iIndex_00;
  SGDCOORDINATE *cp0;
  SGDCOORDINATE *cp1;
  
  iIndex = (pPUHead->field2_0x8).VUMaterialDesc.iPad;
  if (iIndex != 0) {
    iIndex_00 = (pPUHead->field2_0x8).VUMeshDesc.iTagSize;
    if (iIndex_00 == 0) {
      cp0 = (SGDCOORDINATE *)0x0;
    }
    else {
      cp0 = gra3dsgdGetCoordinate__Fi(iIndex_00);
      iIndex = (pPUHead->field2_0x8).VUMaterialDesc.iPad;
    }
    cp1 = (SGDCOORDINATE *)0x0;
    if (iIndex != 0) {
      cp1 = gra3dsgdGetCoordinate__Fi(iIndex);
    }
    g3dSetVu1LightData__FP17GRA3DVU1LIGHTDATAPC13SGDCOORDINATET1(pVu1LightData,cp0,cp1);
  }
  return;
}

static void _CalcWeightedVectorBuffer(_ONELIST *aList, int iNumList, float *pvDest[4], float *pvSrc[4], LPFUNC_CALCWEIGHTEDVECTORBUFFER pFunc) {
	static char __FUNCTION__[26] = {
		/* [0] = */ 95,
		/* [1] = */ 67,
		/* [2] = */ 97,
		/* [3] = */ 108,
		/* [4] = */ 99,
		/* [5] = */ 87,
		/* [6] = */ 101,
		/* [7] = */ 105,
		/* [8] = */ 103,
		/* [9] = */ 104,
		/* [10] = */ 116,
		/* [11] = */ 101,
		/* [12] = */ 100,
		/* [13] = */ 86,
		/* [14] = */ 101,
		/* [15] = */ 99,
		/* [16] = */ 116,
		/* [17] = */ 111,
		/* [18] = */ 114,
		/* [19] = */ 66,
		/* [20] = */ 117,
		/* [21] = */ 102,
		/* [22] = */ 102,
		/* [23] = */ 101,
		/* [24] = */ 114,
		/* [25] = */ 0
	};
	int i;
	_ONELIST &rList;
	static int s_iWriteSize = 0;
	float matWork[4][4];
	int j;
	
  SGDCOORDINATE *pSVar1;
  int iVar2;
  short *psVar3;
  float (*pafVar4) [4];
  float (*pafVar5) [4];
  int iVar6;
  float matWork [4] [4];
  
  if (pFunc == (undefined1 *)0x0) {
    _SetLineInfo__FPCciT0T0("gra3dSGD.c",0x3d6,"_CalcWeightedVectorBuffer",s_pFunc_003f12d0);
    g3ddbgAssert__FbPCce(false,&DAT_003f12b8);
  }
  iVar6 = 0;
  if (0 < iNumList) {
    iVar2 = 0;
    do {
      psVar3 = (short *)((int)&aList->sCoordId0 + iVar2);
      if (iVar6 == 0) {
        s_iWriteSize_969 = 0;
      }
      s_iWriteSize_969 = s_iWriteSize_969 + (uint)(ushort)psVar3[2];
      if (s_iGlobalBufferSize <= s_iWriteSize_969) {
        _SetLineInfo__FPCciT0T0
                  ("gra3dSGD.c",0x3ed,"_CalcWeightedVectorBuffer",
                   "s_iWriteSize < s_iGlobalBufferSize");
        g3ddbgAssert__FbPCce(s_iWriteSize_969 < s_iGlobalBufferSize,&DAT_003f12b8);
      }
      pSVar1 = gra3dsgdGetCoordinate__Fi((int)*psVar3);
      _CalcWeightedLocalWorldMatrix__FPA3_fPA3_Cf(matWork,pSVar1->matLocalWorld);
      _lqc2((undefined  [16])matWork[0]);
      _lqc2((undefined  [16])matWork[1]);
      _lqc2((undefined  [16])matWork[2]);
      _lqc2((undefined  [16])matWork[3]);
      pSVar1 = gra3dsgdGetCoordinate__Fi((int)psVar3[1]);
      _CalcWeightedLocalWorldMatrix__FPA3_fPA3_Cf(matWork,pSVar1->matLocalWorld);
      _lqc2((undefined  [16])matWork[0]);
      _lqc2((undefined  [16])matWork[1]);
      _lqc2((undefined  [16])matWork[2]);
      _lqc2((undefined  [16])matWork[3]);
      iVar2 = 0;
      if (psVar3[2] != 0) {
        do {
          pafVar5 = pvDest[1];
          pafVar4 = pvSrc[2];
          (*(code *)pFunc)(pvDest,pvSrc);
          iVar2 = iVar2 + 1;
          pvDest = pafVar5;
          pvSrc = pafVar4;
        } while (iVar2 < (int)(uint)(ushort)psVar3[2]);
      }
      iVar6 = iVar6 + 1;
      iVar2 = iVar6 * 8;
    } while (iVar6 < iNumList);
  }
  return;
}

static void CalcVertexBuffer(SGDPROCUNITHEADER *pPUHead) {
	SGDVECTORINFO *pVI;
	_VERTEXLIST *pVL;
	
  uint *puVar1;
  PHEAD *pPVar2;
  
  pPVar2 = _GetLPHEAD__Fv();
  if ((pPUHead->field2_0x8).VUMaterialDesc.iPad != 0) {
    puVar1 = pPVar2->pWeightedList;
    if (puVar1 != (uint *)0x0) {
      _CalcWeightedVectorBuffer__FP8_ONELISTiPA3_fPA3_CfPFPfPCf_v
                ((_ONELIST *)(puVar1 + 1),*puVar1,s_pGlobalVertexBuffer,pPVar2->pWeightedVertex,
                 _CalcWeightedVertexBuffer__FPfPCf);
      _CalcWeightedVectorBuffer__FP8_ONELISTiPA3_fPA3_CfPFPfPCf_v
                ((_ONELIST *)(puVar1 + *puVar1 * 2 + 2),puVar1[*puVar1 * 2 + 1],
                 s_pGlobalNormalBuffer,pPVar2->pWeightedNormal,_CalcWeightedNormalBuffer__FPfPCf);
    }
  }
  return;
}

static void SgSortUnitPrimPost(SGDPROCUNITHEADER *pPUHead) {
  int *dest;
  int iVar1;
  
  if (pPUHead == (SGDPROCUNITHEADER *)0x0) {
    return;
  }
  iVar1 = pPUHead->iCategory;
  do {
    switch(iVar1) {
    case 0:
      _SetVUVNPRIM__FPC17SGDPROCUNITHEADER(pPUHead);
      pPUHead = pPUHead->pNext;
      break;
    case 1:
      SetVUMeshDataPost__FP17SGDPROCUNITHEADER(pPUHead);
      pPUHead = pPUHead->pNext;
      break;
    case 2:
      SetMaterialDataVU__FP17SGDPROCUNITHEADER(pPUHead);
      pPUHead = pPUHead->pNext;
      break;
    case 3:
      dest = (int *)g3dDmaOpenPacket__Fv();
      gra3dSetVif1Code_Unpack__FPiiii(dest,0x19,0x15,0x6c);
      SetCoordData__FP17GRA3DVU1LIGHTDATAP17SGDPROCUNITHEADER
                ((GRA3DVU1LIGHTDATA *)(dest + 4),pPUHead);
      g3dDmaClosePacket__FPCv(dest + 0x58);
      gra3dVu1TransGTEOP__Fv();
      ccahe.cache_on = -1;
      SetVU1Header__Fv();
      CalcVertexBuffer__FP17SGDPROCUNITHEADER(pPUHead);
      pPUHead = pPUHead->pNext;
      break;
    case 5:
      GsImageProcess__FPC17SGDPROCUNITHEADER(pPUHead);
    case 4:
      pPUHead = pPUHead->pNext;
      break;
    default:
      pPUHead = pPUHead->pNext;
    }
    if (pPUHead == (SGDPROCUNITHEADER *)0x0) {
      return;
    }
    iVar1 = pPUHead->iCategory;
  } while( true );
}

static void SetPreRenderMeshData(SGDPROCUNITHEADER *pPUHead, int bAddColor) {
	static char __FUNCTION__[21] = {
		/* [0] = */ 83,
		/* [1] = */ 101,
		/* [2] = */ 116,
		/* [3] = */ 80,
		/* [4] = */ 114,
		/* [5] = */ 101,
		/* [6] = */ 82,
		/* [7] = */ 101,
		/* [8] = */ 110,
		/* [9] = */ 100,
		/* [10] = */ 101,
		/* [11] = */ 114,
		/* [12] = */ 77,
		/* [13] = */ 101,
		/* [14] = */ 115,
		/* [15] = */ 104,
		/* [16] = */ 68,
		/* [17] = */ 97,
		/* [18] = */ 116,
		/* [19] = */ 97,
		/* [20] = */ 0
	};
	SGDVUVNDESC &rVUVNDesc;
	SGDVUVNDATA_PRESET &rVUVNData;
	SGDVUMESHDATA_PRESET &rVUMeshData;
	int mtype;
	int gloops;
	_SGDVUMESHCOLORDATA *pVMCD;
	int iVertexCount;
	int j;
	int loops;
	VECTOR3 &ravColor[1];
	int i;
	VECTOR3 &rvColor;
	int iVertexIndex;
	float vV[4];
	float vN[4];
	VECTOR3 *pvVSrc;
	VECTOR3 *pvNSrc;
	float pcol[4];
	float first[4];
	
  uint uVar1;
  uint uVar2;
  short sVar3;
  ushort uVar4;
  float fVar5;
  float fVar6;
  ulong *puVar7;
  SGDPROCUNITHEADER *pSVar8;
  SGDVUVNDATA_PRESET *pSVar9;
  SGDVUVNDATA_PRESET____unnamed_40 *pSVar10;
  bool b;
  undefined *puVar11;
  ulong uVar12;
  int iVar13;
  uint *puVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  float vV [4];
  float vN [4];
  float pcol [4];
  float first [4];
  int local_90;
  SGDVUVNDESC *rVUVNDesc;
  SGDVUVNDATA_PRESET *rVUVNData;
  int mtype;
  int gloops;
  _SGDVUMESHCOLORDATA *pVMCD;
  int iVertexCount;
  int j;
  float (*ravColor) [1] [3];
  int local_6c;
  int local_68;
  
  pSVar8 = s_ppuhVUVN;
  mtype = (int)(pPUHead->field2_0x8).VUVNDesc.ucVectorType;
  rVUVNData = (SGDVUVNDATA_PRESET *)(s_ppuhVUVN + 1);
  rVUVNDesc = (SGDVUVNDESC *)&s_ppuhVUVN->field2_0x8;
  gloops = (int)(pPUHead->field2_0x8).VUVNDesc.aucPad[0];
  if (((mtype == 0x10) || (mtype == 0x12)) || (mtype == 0x32)) {
    sVar3 = *(short *)((int)&pPUHead[1].iCategory + 2);
    if (sVar3 != 0) {
      pVMCD = (_SGDVUMESHCOLORDATA *)(&pPUHead->pNext + sVar3);
      uVar4 = (s_ppuhVUVN->field2_0x8).VUVNDesc.sNumNormal;
      if (((long)gloops != (long)(short)(s_ppuhVUVN->field2_0x8).VUVNDesc.sNumNormal) &&
         (mtype == 0x32)) {
        _SetLineInfo__FPCciT0T0
                  ("gra3dSGD.c",0x48e,"SetPreRenderMeshData",
                   "!(gloops != rVUVNDesc.sNumNormal && mtype == iMT_2F )");
        g3ddbgAssert__FbPCce
                  ((long)gloops == (long)(short)(pSVar8->field2_0x8).VUVNDesc.sNumNormal,
                   "gloop(%d) != rVUVNDesc.sNumNormal(%d), mtype:2F");
        uVar4 = (pSVar8->field2_0x8).VUVNDesc.sNumNormal;
      }
      if (((long)(short)rVUVNDesc->sNumVertex != (long)(int)(short)uVar4) &&
         ((mtype == 0x10 || (mtype == 0x12)))) {
        _SetLineInfo__FPCciT0T0
                  ("gra3dSGD.c",0x48f,"SetPreRenderMeshData",
                   "!(rVUVNDesc.sNumVertex != rVUVNDesc.sNumNormal && (mtype == iMT_0||mtype == iMT_2))"
                  );
        if ((rVUVNDesc->sNumVertex == (pSVar8->field2_0x8).VUVNDesc.sNumNormal) ||
           ((b = false, mtype != 0x10 && (b = false, mtype != 0x12)))) {
          b = true;
        }
        g3ddbgAssert__FbPCce(b,"rVUVNDesc.sNumVertex(%d) != rVUVNDesc.sNumNormal(%d), mtype:0,2");
      }
      iVertexCount = 0;
      j = 0;
      if (gloops != 0) {
        local_68 = 0;
        local_90 = bAddColor;
        do {
          pSVar9 = rVUVNData;
          iVar18 = 0;
          pVMCD = (_SGDVUMESHCOLORDATA *)GetNextUnpackAddr__FPUi((uint *)pVMCD);
          ravColor = (float (*) [1] [3])pVMCD->avColor;
          uVar16 = (uint)(byte)(pVMCD->VifUnpack).field_0x2;
          if (uVar16 != 0) {
            local_6c = local_68;
            puVar14 = rVUVNData->aui + iVertexCount * 6;
            iVar17 = 0;
            do {
              uVar15 = (int)*ravColor + iVar17;
              memset(vV,0,0x10);
              uVar12 = (ulong)iVertexCount;
              iVar13 = iVertexCount + iVar18;
              iVar18 = iVar18 + 1;
              vV[3] = 1.0;
              memset(vN,0,0x10);
              iVar17 = iVar17 + 0xc;
              if ((mtype == 0x10) || (mtype == 0x12)) {
                pSVar10 = (SGDVUVNDATA_PRESET____unnamed_40 *)(puVar14 + 10);
                puVar11 = (undefined *)(puVar14 + 0xd);
              }
              else {
                puVar11 = (undefined *)((int)pSVar9->aui + local_6c + 0x28);
                pSVar10 = (SGDVUVNDATA_PRESET____unnamed_40 *)
                          (pSVar9->aui + (iVar13 + (short)rVUVNDesc->sNumNormal) * 3 + 10);
              }
              uVar1 = (uint)(undefined *)((int)pSVar10 + 7U) & 7;
              uVar2 = (uint)pSVar10 & 7;
              vV._0_8_ = (*(long *)((undefined *)((int)pSVar10 + 7U) + -uVar1) << (7 - uVar1) * 8 |
                         uVar12 & 0xffffffffffffffffU >> (uVar1 + 1) * 8) & -1L << (8 - uVar2) * 8 |
                         *(ulong *)((int)pSVar10 - uVar2) >> uVar2 * 8;
              fVar5 = pSVar10->avt2[0].vVertex[2];
              uVar1 = (int)vV + 7U & 7;
              puVar7 = (ulong *)(((int)vV + 7U) - uVar1);
              *puVar7 = *puVar7 & -1L << (uVar1 + 1) * 8 | (ulong)vV._0_8_ >> (7 - uVar1) * 8;
              uVar1 = (uint)(puVar11 + 7) & 7;
              uVar2 = (uint)puVar11 & 7;
              uVar12 = (*(long *)(puVar11 + 7 + -uVar1) << (7 - uVar1) * 8 |
                       vV._0_8_ & 0xffffffffffffffffU >> (uVar1 + 1) * 8) & -1L << (8 - uVar2) * 8 |
                       *(ulong *)(puVar11 + -uVar2) >> uVar2 * 8;
              fVar6 = *(float *)(puVar11 + 8);
              uVar1 = (int)vN + 7U & 7;
              puVar7 = (ulong *)(((int)vN + 7U) - uVar1);
              *puVar7 = *puVar7 & -1L << (uVar1 + 1) * 8 | uVar12 >> (7 - uVar1) * 8;
              vV[2] = fVar5;
              vN._0_8_ = uVar12;
              vN[2] = fVar6;
              memset(first,0,0x10);
              if (local_90 != 0) {
                uVar1 = uVar15 + 7 & 7;
                uVar2 = uVar15 & 7;
                first._0_8_ = (*(long *)((uVar15 + 7) - uVar1) << (7 - uVar1) * 8 |
                              uVar12 & 0xffffffffffffffffU >> (uVar1 + 1) * 8) &
                              -1L << (8 - uVar2) * 8 | *(ulong *)(uVar15 - uVar2) >> uVar2 * 8;
                fVar5 = *(float *)(uVar15 + 8);
                uVar1 = (int)first + 7U & 7;
                puVar7 = (ulong *)(((int)first + 7U) - uVar1);
                *puVar7 = *puVar7 & -1L << (uVar1 + 1) * 8 | (ulong)first._0_8_ >> (7 - uVar1) * 8;
                first[2] = fVar5;
              }
              puVar14 = puVar14 + 6;
              gra3dCalcVertexColor__FPfPCfN21(pcol,vV,vN,first);
              uVar1 = uVar15 + 7 & 7;
              puVar7 = (ulong *)((uVar15 + 7) - uVar1);
              *puVar7 = *puVar7 & -1L << (uVar1 + 1) * 8 | (ulong)pcol._0_8_ >> (7 - uVar1) * 8;
              uVar1 = uVar15 & 7;
              *(ulong *)(uVar15 - uVar1) =
                   pcol._0_8_ << uVar1 * 8 |
                   *(ulong *)(uVar15 - uVar1) & 0xffffffffffffffffU >> (8 - uVar1) * 8;
              *(float *)(uVar15 + 8) = pcol[2];
            } while (iVar18 < (int)uVar16);
          }
          j = j + 1;
          iVertexCount = iVertexCount + uVar16;
          local_68 = local_68 + 0xc;
          pVMCD = (_SGDVUMESHCOLORDATA *)pVMCD->avColor[uVar16];
        } while (j < gloops);
      }
    }
  }
  else {
    g3ddbgPrintf__FPCce("[G3DRETURN]%s(%d)(%s):%s\n");
  }
  return;
}

static void SelectLight(SGDPROCUNITHEADER *pPUHead) {
  undefined in_vf0 [16];
  undefined auVar1 [16];
  undefined auVar2 [16];
  undefined auVar3 [16];
  undefined auVar4 [16];
  
  gra3dbbApplyMatrix__FPA3_fPA3_CfT1
            ((float (*) [4])&DAT_70003900,(float (*) [4])(pPUHead + 1),
             s_pCoordBase[(pPUHead->field2_0x8).VUMeshDesc.iTagSize].matLocalWorld);
                    /* inlined from g3dxVu0.h */
  auVar1 = _lqc2(_DAT_70003900);
  auVar2 = _lqc2(_DAT_70003970);
  auVar3 = _qmtc2(0x3f000000);
  _vmove(auVar1);
  auVar4 = _vaddbc(in_vf0,in_vf0);
  auVar4 = _vsub(auVar4,auVar3);
  _vmulabc(auVar1,auVar3);
  auVar1 = _vmaddbc(auVar2,auVar4);
  _DAT_70003980 = _sqc2(auVar1);
                    /* end of inlined section */
  _SelectLightByType__H1i4_12G3DLIGHTTYPEPA3_Cf_v(G3DLIGHT_POINT,(float (*) [4])&DAT_70003900);
  _SelectLightByType__H1i4_12G3DLIGHTTYPEPA3_Cf_v(G3DLIGHT_SPOT,(float (*) [4])&DAT_70003900);
  return;
}

static int _SetG3DLightForPrelighting(int bFirst) {
	static int iCount_GRA3DDL = 0;
	static int iCount_GRA3DPL = 0;
	static int iCount_GRA3DSL = 0;
	int iCount_G3DDL;
	int iCount_G3DPL;
	int iCount_G3DSL;
	int i;
	int i;
	int i;
	
  bool bVar1;
  int iVar2;
  G3DLIGHT *pGVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  if (bFirst != 0) {
    iCount_GRA3DDL_988 = 0;
    iCount_GRA3DPL_989 = 0;
    iCount_GRA3DSL_990 = 0;
  }
  if (((iCount_GRA3DDL_988 < 3) || (iCount_GRA3DPL_989 < 0x13)) ||
     (iVar4 = 0, iCount_GRA3DSL_990 < 0x11)) {
    iVar4 = 0;
    iVar5 = 0;
    iVar6 = 0;
    iVar2 = iCount_GRA3DDL_988;
    do {
      if (2 < iVar2) break;
      iVar2 = gra3dIsLightEnable__Fi(iCount_GRA3DDL_988);
      if (iVar2 != 0) {
        pGVar3 = gra3dGetLightRef__Fi(iCount_GRA3DDL_988);
        g3dSetLight__FiPC8G3DLIGHT(iVar4,pGVar3);
        iVar4 = iVar4 + 1;
      }
      iCount_GRA3DDL_988 = iCount_GRA3DDL_988 + 1;
      iVar2 = iVar4;
    } while (iCount_GRA3DDL_988 < 3);
    iVar2 = 0;
    bVar1 = 0 < iVar4;
    do {
      if (bVar1) {
        g3dLightEnable__Fii(iVar2,1);
      }
      else {
        g3dLightEnable__Fii(iVar2,0);
      }
      iVar2 = iVar2 + 1;
      bVar1 = iVar2 < iVar4;
    } while (iVar2 < 3);
    if (iCount_GRA3DPL_989 < 0x13) {
      do {
        iVar4 = gra3dIsLightEnable__Fi(iCount_GRA3DPL_989 + 3);
        if (iVar4 != 0) {
          pGVar3 = gra3dGetLightRef__Fi(iCount_GRA3DPL_989 + 3);
          iVar4 = iVar5 + 3;
          iVar5 = iVar5 + 1;
          g3dSetLight__FiPC8G3DLIGHT(iVar4,pGVar3);
        }
        iCount_GRA3DPL_989 = iCount_GRA3DPL_989 + 1;
      } while ((iCount_GRA3DPL_989 < 0x13) && (iVar5 < 3));
    }
    iVar4 = 0;
    bVar1 = 0 < iVar5;
    do {
      if (bVar1) {
        g3dLightEnable__Fii(iVar4 + 3,1);
      }
      else {
        g3dLightEnable__Fii(iVar4 + 3,0);
      }
      iVar4 = iVar4 + 1;
      bVar1 = iVar4 < iVar5;
    } while (iVar4 < 3);
    if (iCount_GRA3DSL_990 < 0x11) {
      do {
        iVar4 = gra3dIsLightEnable__Fi(iCount_GRA3DSL_990 + 0x16);
        if (iVar4 != 0) {
          pGVar3 = gra3dGetLightRef__Fi(iCount_GRA3DSL_990 + 0x16);
          iVar4 = iVar6 + 6;
          iVar6 = iVar6 + 1;
          g3dSetLight__FiPC8G3DLIGHT(iVar4,pGVar3);
        }
        iCount_GRA3DSL_990 = iCount_GRA3DSL_990 + 1;
      } while ((iCount_GRA3DSL_990 < 0x11) && (iVar6 < 3));
    }
    iVar4 = 0;
    bVar1 = 0 < iVar6;
    while( true ) {
      if (bVar1) {
        g3dLightEnable__Fii(iVar4 + 6,1);
      }
      else {
        g3dLightEnable__Fii(iVar4 + 6,0);
      }
      iVar4 = iVar4 + 1;
      if (2 < iVar4) break;
      bVar1 = iVar4 < iVar6;
    }
    g3dApplyLight__Fv();
    iVar4 = 1;
  }
  return iVar4;
}

static void SgPreRenderPrim(SGDPROCUNITHEADER *pPUHead) {
	int bFirst;
	
  int iVar1;
  uint bAddColor;
  uint bFirst;
  
  if (pPUHead == (SGDPROCUNITHEADER *)0x0) {
    return;
  }
  iVar1 = pPUHead->iCategory;
  do {
    switch(iVar1) {
    case 0:
      _SetVUVNPRIM__FPC17SGDPROCUNITHEADER(pPUHead);
      pPUHead = pPUHead->pNext;
      break;
    case 1:
      bFirst = 1;
      while (iVar1 = _SetG3DLightForPrelighting__Fi(bFirst), iVar1 != 0) {
        bAddColor = bFirst ^ 1;
        bFirst = 0;
        SetPreRenderMeshData__FP17SGDPROCUNITHEADERi(pPUHead,bAddColor);
      }
      pPUHead = pPUHead->pNext;
      break;
    case 2:
      gra3dSetMaterial__FP11SGDMATERIAL((SGDMATERIAL *)(pPUHead->field2_0x8).VUMeshDesc.iTagSize);
      pPUHead = pPUHead->pNext;
      break;
    case 3:
      gra3dSetTransform__F23GRA3DTRANSFORMSTATETYPEPA3_Cf
                (GRA3DTS_WORLD,s_pCoordBase[(pPUHead->field2_0x8).VUMeshDesc.iTagSize].matLocalWorld
                );
    case 4:
      pPUHead = pPUHead->pNext;
      break;
    default:
      pPUHead = pPUHead->pNext;
    }
    if (pPUHead == (SGDPROCUNITHEADER *)0x0) {
      return;
    }
    iVar1 = pPUHead->iCategory;
  } while( true );
}

SGDCOORDINATE* gra3dsgdGetCoordinate(int iIndex) {
	static char __FUNCTION__[22] = {
		/* [0] = */ 103,
		/* [1] = */ 114,
		/* [2] = */ 97,
		/* [3] = */ 51,
		/* [4] = */ 100,
		/* [5] = */ 115,
		/* [6] = */ 103,
		/* [7] = */ 100,
		/* [8] = */ 71,
		/* [9] = */ 101,
		/* [10] = */ 116,
		/* [11] = */ 67,
		/* [12] = */ 111,
		/* [13] = */ 111,
		/* [14] = */ 114,
		/* [15] = */ 100,
		/* [16] = */ 105,
		/* [17] = */ 110,
		/* [18] = */ 97,
		/* [19] = */ 116,
		/* [20] = */ 101,
		/* [21] = */ 0
	};
	SGDCOORDINATE *pCoord;
	
  int iVar1;
  SGDCOORDINATE *pSVar2;
  
  pSVar2 = s_pCoordBase + iIndex;
  iVar1 = gra3dsgdGetNumBlock__Fv();
  if (iVar1 <= iIndex) {
    _SetLineInfo__FPCciT0T0
              ("gra3dSGD.c",0x61e,"gra3dsgdGetCoordinate","iIndex < gra3dsgdGetNumBlock()");
    iVar1 = gra3dsgdGetNumBlock__Fv();
    g3ddbgAssert__FbPCce(iIndex < iVar1,&DAT_003f12b8);
  }
  return pSVar2;
}

void gra3dsgdSetCoordinate(SGDCOORDINATE *pCU, int iIndex) {
	static char __FUNCTION__[22] = {
		/* [0] = */ 103,
		/* [1] = */ 114,
		/* [2] = */ 97,
		/* [3] = */ 51,
		/* [4] = */ 100,
		/* [5] = */ 115,
		/* [6] = */ 103,
		/* [7] = */ 100,
		/* [8] = */ 83,
		/* [9] = */ 101,
		/* [10] = */ 116,
		/* [11] = */ 67,
		/* [12] = */ 111,
		/* [13] = */ 111,
		/* [14] = */ 114,
		/* [15] = */ 100,
		/* [16] = */ 105,
		/* [17] = */ 110,
		/* [18] = */ 97,
		/* [19] = */ 116,
		/* [20] = */ 101,
		/* [21] = */ 0
	};
	
  SGDCOORDINATE *pSVar1;
  SGDCOORDINATE *pSVar2;
  undefined8 uVar3;
  SGDCOORDINATE *pSVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  if (pCU == (SGDCOORDINATE *)0x0) {
    _SetLineInfo__FPCciT0T0("gra3dSGD.c",0x62b,"gra3dsgdSetCoordinate",&DAT_003f12e8);
    g3ddbgAssert__FbPCce(false,&DAT_003f12b8);
  }
  pSVar1 = pCU;
  if (iIndex != -1) {
    pSVar4 = pCU + 1;
    pSVar2 = s_pCoordBase + iIndex;
    do {
      uVar3 = *(undefined8 *)(pCU->matCoord + 2);
      uVar5 = *(undefined8 *)pCU->matCoord[1];
      uVar6 = *(undefined8 *)(pCU->matCoord[1] + 2);
      *(undefined8 *)pSVar2->matCoord = *(undefined8 *)pCU->matCoord;
      *(undefined8 *)(pSVar2->matCoord + 2) = uVar3;
      *(undefined8 *)pSVar2->matCoord[1] = uVar5;
      *(undefined8 *)(pSVar2->matCoord[1] + 2) = uVar6;
      pCU = (SGDCOORDINATE *)pCU->matCoord[2];
      pSVar2 = (SGDCOORDINATE *)pSVar2->matCoord[2];
      pSVar1 = s_pCoordBase;
    } while (pCU != pSVar4);
  }
  s_pCoordBase = pSVar1;
  return;
}

static void ClearPreRenderMeshData(SGDPROCUNITHEADER *pPUHead) {
	static char __FUNCTION__[23] = {
		/* [0] = */ 67,
		/* [1] = */ 108,
		/* [2] = */ 101,
		/* [3] = */ 97,
		/* [4] = */ 114,
		/* [5] = */ 80,
		/* [6] = */ 114,
		/* [7] = */ 101,
		/* [8] = */ 82,
		/* [9] = */ 101,
		/* [10] = */ 110,
		/* [11] = */ 100,
		/* [12] = */ 101,
		/* [13] = */ 114,
		/* [14] = */ 77,
		/* [15] = */ 101,
		/* [16] = */ 115,
		/* [17] = */ 104,
		/* [18] = */ 68,
		/* [19] = */ 97,
		/* [20] = */ 116,
		/* [21] = */ 97,
		/* [22] = */ 0
	};
	int mtype;
	int gloops;
	_SGDVUMESHCOLORDATA *pVMCD;
	int j;
	int loops;
	VECTOR3 &ravColor[1];
	int i;
	
  byte bVar1;
  short sVar2;
  uint *puVar3;
  uint *puVar4;
  SGDPROCUNITHEADER **prim;
  uint uVar5;
  int iVar6;
  uint uVar7;
  
  sVar2 = *(short *)((int)&pPUHead[1].iCategory + 2);
  uVar7 = (uint)(pPUHead->field2_0x8).VUVNDesc.aucPad[0];
  bVar1 = (pPUHead->field2_0x8).VUVNDesc.ucVectorType;
  if (sVar2 == 0) {
    return;
  }
  prim = &pPUHead->pNext + sVar2;
  if (bVar1 == 0x10) {
LAB_001b9a70:
    iVar6 = 0;
    if (uVar7 != 0) {
      do {
        puVar3 = GetNextUnpackAddr__FPUi((uint *)prim);
        bVar1 = *(byte *)((int)puVar3 + 2);
        puVar4 = puVar3 + 1;
        uVar5 = (uint)bVar1;
        while (uVar5 != 0) {
          uVar5 = uVar5 - 1;
          if (*puVar4 != 1) {
            *puVar4 = 0;
            puVar4[1] = 0;
            puVar4[2] = 0;
          }
          puVar4 = puVar4 + 3;
        }
        iVar6 = iVar6 + 1;
        prim = (SGDPROCUNITHEADER **)(puVar3 + (uint)bVar1 * 3 + 1);
      } while (iVar6 < (int)uVar7);
    }
  }
  else {
    if (bVar1 < 0x11) {
      if (bVar1 == 2) {
        return;
      }
    }
    else if ((bVar1 == 0x12) || (bVar1 == 0x32)) goto LAB_001b9a70;
    _SetLineInfo__FPCciT0T0("gra3dSGD.c",0x667,"ClearPreRenderMeshData",&DAT_003f12c0);
    g3ddbgWarning__FbPCce(false,"illegal type(mtype:%d)");
  }
  return;
}

static void SgClearPreRenderPrim(SGDPROCUNITHEADER *pPUHead) {
  int iVar1;
  
  if (pPUHead != (SGDPROCUNITHEADER *)0x0) {
    iVar1 = pPUHead->iCategory;
    while( true ) {
      if (iVar1 == 1) {
        ClearPreRenderMeshData__FP17SGDPROCUNITHEADER(pPUHead);
        pPUHead = pPUHead->pNext;
      }
      else {
        pPUHead = pPUHead->pNext;
      }
      if (pPUHead == (SGDPROCUNITHEADER *)0x0) break;
      iVar1 = pPUHead->iCategory;
    }
  }
  return;
}

void gra3dsgdSetupVu1() {
  int iVar1;
  GRA3DCAMERA *pGVar2;
  
  ccahe.cache_on = -1;
  iVar1 = gra3dGetNumEnableLight__Fi(1);
  if (iVar1 == 0) {
    gra3dEnableLightType__F12G3DLIGHTTYPEi(G3DLIGHT_POINT,0);
  }
  else {
    gra3dEnableLightType__F12G3DLIGHTTYPEi(G3DLIGHT_POINT,1);
  }
  iVar1 = gra3dGetNumEnableLight__Fi(2);
  if (iVar1 == 0) {
    gra3dEnableLightType__F12G3DLIGHTTYPEi(G3DLIGHT_SPOT,0);
  }
  else {
    gra3dEnableLightType__F12G3DLIGHTTYPEi(G3DLIGHT_SPOT,1);
  }
  pGVar2 = gra3dGetCamera__Fv();
  gra3dSetTransform__F23GRA3DTRANSFORMSTATETYPEPA3_Cf(GRA3DTS_WORLDSCREEN,pGVar2->matWorldScreen);
  pGVar2 = gra3dGetCamera__Fv();
  gra3dSetTransform__F23GRA3DTRANSFORMSTATETYPEPA3_Cf(GRA3DTS_WORLDCLIP,pGVar2->matWorldClipPolygon)
  ;
  return;
}

int BoundingBoxCalcP(SGDPROCUNITHEADER *_prim) {
	SGDBOUNDINGBOXDESC &rBBDesc;
	GRA3DCAMERA *pCam;
	float &rMat[4][4];
	float matWorldScreen[4][4];
	float matWorldClip[4][4];
	SGDCOORDINATE CU;
	
  float afVar1 [4];
  float afVar2 [4];
  float afVar3 [4];
  float afVar4 [4];
  float afVar5 [4];
  float afVar6 [4];
  float afVar7 [4];
  float afVar8 [4];
  float afVar9 [4];
  float afVar10 [4];
  float afVar11 [4];
  float afVar12 [4];
  float afVar13 [4];
  float afVar14 [4];
  float afVar15 [4];
  float afVar16 [4];
  float afVar17 [4];
  float afVar18 [4];
  float afVar19 [4];
  float afVar20 [4];
  float afVar21 [4];
  float afVar22 [4];
  float afVar23 [4];
  float afVar24 [4];
  GRA3DCAMERA *pGVar25;
  SGDCOORDINATE *pSVar26;
  int iVar27;
  SGDCOORDINATE *pSVar28;
  SGDCOORDINATE *pSVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  float (*mat) [4];
  SGDPROCUNITHEADER____unnamed_8 *pSVar33;
  undefined auVar34 [16];
  undefined auVar35 [16];
  undefined auVar36 [16];
  undefined auVar37 [16];
  undefined auVar38 [16];
  undefined auVar39 [16];
  undefined auVar40 [16];
  undefined auVar41 [16];
  float matWorldScreen [4] [4];
  float matWorldClip [4] [4];
  SGDCOORDINATE CU;
  
  pSVar33 = &_prim->field2_0x8;
  pGVar25 = gra3dGetCamera__Fv();
  pSVar26 = gra3dsgdGetCoordinate__Fi((pSVar33->VUMeshDesc).iTagSize);
  mat = pSVar26->matLocalWorld;
  gra3dSetTransform__F23GRA3DTRANSFORMSTATETYPEPA3_Cf(GRA3DTS_WORLD,mat);
  afVar1[0] = *(float *)((int)pGVar25->matWorldScreen[0] + 0);
  afVar1[1] = *(float *)((int)pGVar25->matWorldScreen[0] + 4);
  afVar1[2] = *(float *)((int)pGVar25->matWorldScreen[0] + 8);
  afVar1[3] = *(float *)((int)pGVar25->matWorldScreen[0] + 0xc);
                    /* inlined from g3dxVu0.h */
  auVar34 = _lqc2((undefined  [16])afVar1);
  afVar2[0] = *(float *)((int)pGVar25->matWorldScreen[1] + 0);
  afVar2[1] = *(float *)((int)pGVar25->matWorldScreen[1] + 4);
  afVar2[2] = *(float *)((int)pGVar25->matWorldScreen[1] + 8);
  afVar2[3] = *(float *)((int)pGVar25->matWorldScreen[1] + 0xc);
  auVar35 = _lqc2((undefined  [16])afVar2);
  afVar3[0] = *(float *)((int)pGVar25->matWorldScreen[2] + 0);
  afVar3[1] = *(float *)((int)pGVar25->matWorldScreen[2] + 4);
  afVar3[2] = *(float *)((int)pGVar25->matWorldScreen[2] + 8);
  afVar3[3] = *(float *)((int)pGVar25->matWorldScreen[2] + 0xc);
  auVar36 = _lqc2((undefined  [16])afVar3);
  afVar4[0] = *(float *)((int)pGVar25->matWorldScreen[3] + 0);
  afVar4[1] = *(float *)((int)pGVar25->matWorldScreen[3] + 4);
  afVar4[2] = *(float *)((int)pGVar25->matWorldScreen[3] + 8);
  afVar4[3] = *(float *)((int)pGVar25->matWorldScreen[3] + 0xc);
  auVar37 = _lqc2((undefined  [16])afVar4);
  afVar5[0] = *(float *)((int)mat + 0);
  afVar5[1] = *(float *)((int)mat + 4);
  afVar5[2] = *(float *)((int)mat + 8);
  afVar5[3] = *(float *)((int)mat + 0xc);
  auVar38 = _lqc2((undefined  [16])afVar5);
  afVar6[0] = *(float *)((int)pSVar26->matLocalWorld[1] + 0);
  afVar6[1] = *(float *)((int)pSVar26->matLocalWorld[1] + 4);
  afVar6[2] = *(float *)((int)pSVar26->matLocalWorld[1] + 8);
  afVar6[3] = *(float *)((int)pSVar26->matLocalWorld[1] + 0xc);
  auVar39 = _lqc2((undefined  [16])afVar6);
  afVar7[0] = *(float *)((int)pSVar26->matLocalWorld[2] + 0);
  afVar7[1] = *(float *)((int)pSVar26->matLocalWorld[2] + 4);
  afVar7[2] = *(float *)((int)pSVar26->matLocalWorld[2] + 8);
  afVar7[3] = *(float *)((int)pSVar26->matLocalWorld[2] + 0xc);
  auVar40 = _lqc2((undefined  [16])afVar7);
  afVar8[0] = *(float *)((int)pSVar26->matLocalWorld[3] + 0);
  afVar8[1] = *(float *)((int)pSVar26->matLocalWorld[3] + 4);
  afVar8[2] = *(float *)((int)pSVar26->matLocalWorld[3] + 8);
  afVar8[3] = *(float *)((int)pSVar26->matLocalWorld[3] + 0xc);
  auVar41 = _lqc2((undefined  [16])afVar8);
  _vmulabc(auVar34,auVar38);
  _vmaddabc(auVar35,auVar38);
  _vmaddabc(auVar36,auVar38);
  auVar38 = _vmaddbc(auVar37,auVar38);
  _vmulabc(auVar34,auVar39);
  _vmaddabc(auVar35,auVar39);
  _vmaddabc(auVar36,auVar39);
  auVar39 = _vmaddbc(auVar37,auVar39);
  _vmulabc(auVar34,auVar40);
  _vmaddabc(auVar35,auVar40);
  _vmaddabc(auVar36,auVar40);
  auVar40 = _vmaddbc(auVar37,auVar40);
  _vmulabc(auVar34,auVar41);
  _vmaddabc(auVar35,auVar41);
  _vmaddabc(auVar36,auVar41);
  auVar34 = _vmaddbc(auVar37,auVar41);
  matWorldScreen[0] = (float  [4])_sqc2(auVar38);
  matWorldScreen[1] = (float  [4])_sqc2(auVar39);
  matWorldScreen[2] = (float  [4])_sqc2(auVar40);
  matWorldScreen[3] = (float  [4])_sqc2(auVar34);
                    /* end of inlined section */
  gra3dSetTransform__F23GRA3DTRANSFORMSTATETYPEPA3_Cf(GRA3DTS_WORLDSCREEN,matWorldScreen);
  iVar27 = _GetEdgeCheck__Fv();
  if (iVar27 == 0) {
                    /* inlined from g3dxVu0.h */
    afVar17[0] = *(float *)((int)pGVar25->matWorldClipPolygon[0] + 0);
    afVar17[1] = *(float *)((int)pGVar25->matWorldClipPolygon[0] + 4);
    afVar17[2] = *(float *)((int)pGVar25->matWorldClipPolygon[0] + 8);
    afVar17[3] = *(float *)((int)pGVar25->matWorldClipPolygon[0] + 0xc);
    auVar34 = _lqc2((undefined  [16])afVar17);
    afVar18[0] = *(float *)((int)pGVar25->matWorldClipPolygon[1] + 0);
    afVar18[1] = *(float *)((int)pGVar25->matWorldClipPolygon[1] + 4);
    afVar18[2] = *(float *)((int)pGVar25->matWorldClipPolygon[1] + 8);
    afVar18[3] = *(float *)((int)pGVar25->matWorldClipPolygon[1] + 0xc);
    auVar35 = _lqc2((undefined  [16])afVar18);
    afVar19[0] = *(float *)((int)pGVar25->matWorldClipPolygon[2] + 0);
    afVar19[1] = *(float *)((int)pGVar25->matWorldClipPolygon[2] + 4);
    afVar19[2] = *(float *)((int)pGVar25->matWorldClipPolygon[2] + 8);
    afVar19[3] = *(float *)((int)pGVar25->matWorldClipPolygon[2] + 0xc);
    auVar36 = _lqc2((undefined  [16])afVar19);
    afVar20[0] = *(float *)((int)pGVar25->matWorldClipPolygon[3] + 0);
    afVar20[1] = *(float *)((int)pGVar25->matWorldClipPolygon[3] + 4);
    afVar20[2] = *(float *)((int)pGVar25->matWorldClipPolygon[3] + 8);
    afVar20[3] = *(float *)((int)pGVar25->matWorldClipPolygon[3] + 0xc);
    auVar37 = _lqc2((undefined  [16])afVar20);
    afVar21[0] = *(float *)((int)mat + 0);
    afVar21[1] = *(float *)((int)mat + 4);
    afVar21[2] = *(float *)((int)mat + 8);
    afVar21[3] = *(float *)((int)mat + 0xc);
    auVar38 = _lqc2((undefined  [16])afVar21);
    afVar22[0] = *(float *)((int)pSVar26->matLocalWorld[1] + 0);
    afVar22[1] = *(float *)((int)pSVar26->matLocalWorld[1] + 4);
    afVar22[2] = *(float *)((int)pSVar26->matLocalWorld[1] + 8);
    afVar22[3] = *(float *)((int)pSVar26->matLocalWorld[1] + 0xc);
    auVar39 = _lqc2((undefined  [16])afVar22);
    afVar23[0] = *(float *)((int)pSVar26->matLocalWorld[2] + 0);
    afVar23[1] = *(float *)((int)pSVar26->matLocalWorld[2] + 4);
    afVar23[2] = *(float *)((int)pSVar26->matLocalWorld[2] + 8);
    afVar23[3] = *(float *)((int)pSVar26->matLocalWorld[2] + 0xc);
    auVar40 = _lqc2((undefined  [16])afVar23);
    afVar24[0] = *(float *)((int)pSVar26->matLocalWorld[3] + 0);
    afVar24[1] = *(float *)((int)pSVar26->matLocalWorld[3] + 4);
    afVar24[2] = *(float *)((int)pSVar26->matLocalWorld[3] + 8);
    afVar24[3] = *(float *)((int)pSVar26->matLocalWorld[3] + 0xc);
    auVar41 = _lqc2((undefined  [16])afVar24);
    _vmulabc(auVar34,auVar38);
    _vmaddabc(auVar35,auVar38);
    _vmaddabc(auVar36,auVar38);
    auVar38 = _vmaddbc(auVar37,auVar38);
    _vmulabc(auVar34,auVar39);
    _vmaddabc(auVar35,auVar39);
    _vmaddabc(auVar36,auVar39);
    auVar39 = _vmaddbc(auVar37,auVar39);
    _vmulabc(auVar34,auVar40);
    _vmaddabc(auVar35,auVar40);
    _vmaddabc(auVar36,auVar40);
    auVar40 = _vmaddbc(auVar37,auVar40);
    _vmulabc(auVar34,auVar41);
    _vmaddabc(auVar35,auVar41);
    _vmaddabc(auVar36,auVar41);
    auVar34 = _vmaddbc(auVar37,auVar41);
    matWorldClip[0] = (float  [4])_sqc2(auVar38);
    matWorldClip[1] = (float  [4])_sqc2(auVar39);
    matWorldClip[2] = (float  [4])_sqc2(auVar40);
    matWorldClip[3] = (float  [4])_sqc2(auVar34);
                    /* end of inlined section */
    gra3dSetTransform__F23GRA3DTRANSFORMSTATETYPEPA3_Cf(GRA3DTS_WORLDCLIP,matWorldClip);
  }
  else {
                    /* inlined from g3dxVu0.h */
    afVar9[0] = *(float *)((int)pGVar25->matWorldClipObject[0] + 0);
    afVar9[1] = *(float *)((int)pGVar25->matWorldClipObject[0] + 4);
    afVar9[2] = *(float *)((int)pGVar25->matWorldClipObject[0] + 8);
    afVar9[3] = *(float *)((int)pGVar25->matWorldClipObject[0] + 0xc);
    auVar34 = _lqc2((undefined  [16])afVar9);
    afVar10[0] = *(float *)((int)pGVar25->matWorldClipObject[1] + 0);
    afVar10[1] = *(float *)((int)pGVar25->matWorldClipObject[1] + 4);
    afVar10[2] = *(float *)((int)pGVar25->matWorldClipObject[1] + 8);
    afVar10[3] = *(float *)((int)pGVar25->matWorldClipObject[1] + 0xc);
    auVar35 = _lqc2((undefined  [16])afVar10);
    afVar11[0] = *(float *)((int)pGVar25->matWorldClipObject[2] + 0);
    afVar11[1] = *(float *)((int)pGVar25->matWorldClipObject[2] + 4);
    afVar11[2] = *(float *)((int)pGVar25->matWorldClipObject[2] + 8);
    afVar11[3] = *(float *)((int)pGVar25->matWorldClipObject[2] + 0xc);
    auVar36 = _lqc2((undefined  [16])afVar11);
    afVar12[0] = *(float *)((int)pGVar25->matWorldClipObject[3] + 0);
    afVar12[1] = *(float *)((int)pGVar25->matWorldClipObject[3] + 4);
    afVar12[2] = *(float *)((int)pGVar25->matWorldClipObject[3] + 8);
    afVar12[3] = *(float *)((int)pGVar25->matWorldClipObject[3] + 0xc);
    auVar37 = _lqc2((undefined  [16])afVar12);
    afVar13[0] = *(float *)((int)mat + 0);
    afVar13[1] = *(float *)((int)mat + 4);
    afVar13[2] = *(float *)((int)mat + 8);
    afVar13[3] = *(float *)((int)mat + 0xc);
    auVar38 = _lqc2((undefined  [16])afVar13);
    afVar14[0] = *(float *)((int)pSVar26->matLocalWorld[1] + 0);
    afVar14[1] = *(float *)((int)pSVar26->matLocalWorld[1] + 4);
    afVar14[2] = *(float *)((int)pSVar26->matLocalWorld[1] + 8);
    afVar14[3] = *(float *)((int)pSVar26->matLocalWorld[1] + 0xc);
    auVar39 = _lqc2((undefined  [16])afVar14);
    afVar15[0] = *(float *)((int)pSVar26->matLocalWorld[2] + 0);
    afVar15[1] = *(float *)((int)pSVar26->matLocalWorld[2] + 4);
    afVar15[2] = *(float *)((int)pSVar26->matLocalWorld[2] + 8);
    afVar15[3] = *(float *)((int)pSVar26->matLocalWorld[2] + 0xc);
    auVar40 = _lqc2((undefined  [16])afVar15);
    afVar16[0] = *(float *)((int)pSVar26->matLocalWorld[3] + 0);
    afVar16[1] = *(float *)((int)pSVar26->matLocalWorld[3] + 4);
    afVar16[2] = *(float *)((int)pSVar26->matLocalWorld[3] + 8);
    afVar16[3] = *(float *)((int)pSVar26->matLocalWorld[3] + 0xc);
    auVar41 = _lqc2((undefined  [16])afVar16);
    _vmulabc(auVar34,auVar38);
    _vmaddabc(auVar35,auVar38);
    _vmaddabc(auVar36,auVar38);
    auVar38 = _vmaddbc(auVar37,auVar38);
    _vmulabc(auVar34,auVar39);
    _vmaddabc(auVar35,auVar39);
    _vmaddabc(auVar36,auVar39);
    auVar39 = _vmaddbc(auVar37,auVar39);
    _vmulabc(auVar34,auVar40);
    _vmaddabc(auVar35,auVar40);
    _vmaddabc(auVar36,auVar40);
    auVar40 = _vmaddbc(auVar37,auVar40);
    _vmulabc(auVar34,auVar41);
    _vmaddabc(auVar35,auVar41);
    _vmaddabc(auVar36,auVar41);
    auVar34 = _vmaddbc(auVar37,auVar41);
    matWorldClip[0] = (float  [4])_sqc2(auVar38);
    matWorldClip[1] = (float  [4])_sqc2(auVar39);
    matWorldClip[2] = (float  [4])_sqc2(auVar40);
    matWorldClip[3] = (float  [4])_sqc2(auVar34);
                    /* end of inlined section */
    gra3dSetTransform__F23GRA3DTRANSFORMSTATETYPEPA3_Cf(GRA3DTS_WORLDCLIP,matWorldClip);
  }
  pSVar28 = gra3dsgdGetCoordinate__Fi((pSVar33->VUMeshDesc).iTagSize);
  pSVar29 = pSVar28 + 1;
  pSVar26 = &CU;
  do {
    uVar30 = *(undefined8 *)(pSVar28->matCoord + 2);
    uVar31 = *(undefined8 *)pSVar28->matCoord[1];
    uVar32 = *(undefined8 *)(pSVar28->matCoord[1] + 2);
    *(undefined8 *)pSVar26->matCoord = *(undefined8 *)pSVar28->matCoord;
    *(undefined8 *)(pSVar26->matCoord + 2) = uVar30;
    *(undefined8 *)pSVar26->matCoord[1] = uVar31;
    *(undefined8 *)(pSVar26->matCoord[1] + 2) = uVar32;
    pSVar28 = (SGDCOORDINATE *)pSVar28->matCoord[2];
    pSVar26 = (SGDCOORDINATE *)pSVar26->matCoord[2];
  } while (pSVar28 != pSVar29);
  CU.edge_check = _GetEdgeCheck__Fv();
  gra3dsgdSetCoordinate__FPC13SGDCOORDINATEi(&CU,(pSVar33->VUMeshDesc).iTagSize);
  SelectLight__FP17SGDPROCUNITHEADER(_prim);
  return 1;
}

static void SetVUMeshDataP(SGDPROCUNITHEADER *pPUHead) {
	u_int dsize;
	SGDVUMESHDESC &rVUMeshDesc;
	SGDVUMESHDATA_PRESET &rVUMeshData;
	SGDVUVNDESC &rVUVNDesc;
	SGDVUVNDATA_PRESET &rVUVNData;
	
  byte bVar1;
  SGDPROCUNITHEADER *pSVar2;
  SGDPROCUNITHEADER *pSVar3;
  int iVar4;
  
  pSVar2 = _GetVUVNPRIM__Fv();
  pSVar3 = _GetVUVNPRIM__Fv();
  bVar1 = (pPUHead->field2_0x8).VUVNDesc.ucVectorType;
  if (bVar1 != 0x32) {
    if (0x32 < bVar1) {
      if ((bVar1 != 0x52) && (bVar1 != 0x72)) {
        return;
      }
      iVar4 = _GetEdgeCheck__Fv();
      if (iVar4 != 0) {
        return;
      }
      gra3dCallMicroSubroutine2__FPCUi((uint *)0x3180);
      return;
    }
    if (bVar1 == 0x10) {
      gra3dDmaLoadVu1MicroProgram__FPCUii((uint *)&_dma_1);
      g3dDmaAddPacket__FPCvi(pPUHead + 2,(pPUHead->field2_0x8).VUMeshDesc.iTagSize);
      pSVar2 = _GetVUVNPRIM__Fv();
      bVar1 = (pSVar2->field2_0x8).VUVNDesc.ucSize;
      pSVar2 = _GetVUVNPRIM__Fv();
      g3dDmaAddPacket__FPCvi(pSVar2 + 4,(uint)bVar1);
      iVar4 = _GetEdgeCheck__Fv();
      if (iVar4 == 0) {
        gra3dCallMicroSubroutine2__FPCUi((uint *)0x1ba8);
        return;
      }
      gra3dCallMicroSubroutine1__FPCUi((uint *)0xf58);
      return;
    }
    if (bVar1 != 0x12) {
      return;
    }
  }
  gra3dDmaLoadVu1MicroProgram__FPCUii((uint *)&_dma_1);
  g3dDmaAddPacket__FPCvi(pSVar3 + 1,(uint)(pSVar2->field2_0x8).VUVNDesc.ucSize);
  g3dDmaAddPacket__FPCvi(pPUHead + 2,(pPUHead->field2_0x8).VUMeshDesc.iTagSize);
  iVar4 = _GetEdgeCheck__Fv();
  if (iVar4 == 0) {
    gra3dCallMicroSubroutine2__FPCUi((uint *)0x2108);
  }
  else {
    gra3dCallMicroSubroutine1__FPCUi((uint *)0xf58);
  }
  return;
}

unsigned int gra3dCalcVRAMPageSize(unsigned int uiBlockSize) {
  if ((uiBlockSize & 0x1f) != 0) {
    return (uiBlockSize >> 5) + 1;
  }
  return uiBlockSize >> 5;
}

SGDPROCUNITHEADER* _GetPREVIOUSTRI2PRIM() {
  return previous_tri2_prim;
}

void _SetPREVIOUSTRI2PRIM(SGDPROCUNITHEADER *p) {
  previous_tri2_prim = p;
  return;
}

static void LoadTRI2Files(SGDPROCUNITHEADER *pPUHead) {
	SGDTEXTUREIMAGEDESC *pTexDesc;
	SGDTRI2FILEHEADER *pTRI2Head;
	
  SGDPROCUNITHEADER *pSVar1;
  SGDTRI2FILEHEADER *pTRI2HeadTop;
  
  if ((pPUHead != (SGDPROCUNITHEADER *)0x0) &&
     (pSVar1 = _GetPREVIOUSTRI2PRIM__Fv(), pPUHead != pSVar1)) {
    _SetPREVIOUSTRI2PRIM__FP17SGDPROCUNITHEADER(pPUHead);
    pTRI2HeadTop = (SGDTRI2FILEHEADER *)
                   ((int)&pPUHead[1].pNext + (pPUHead->field2_0x8).VUMaterialDesc.iPad);
    pTRI2HeadTop->uiVif1Code_FLUSH = (uint)&DAT_11000000;
    gra3dLoadTRI2FileToVRAM__FiPC17SGDTRI2FILEHEADERi
              ((pPUHead->field2_0x8).VUMeshDesc.iTagSize,pTRI2HeadTop,1);
    gra3dSetGsRegister__Flli(0,0x3f);
  }
  return;
}

void gra3dsgdDrawPresetDataObject(SGDPROCUNITHEADER *pPUHead) {
  int iVar1;
  
  if (pPUHead == (SGDPROCUNITHEADER *)0x0) {
LAB_001ba1b0:
    return;
  }
  iVar1 = pPUHead->iCategory;
LAB_001ba0e0:
  switch(iVar1) {
  case 0:
    _SetVUVNPRIM__FPC17SGDPROCUNITHEADER(pPUHead);
    pPUHead = pPUHead->pNext;
    break;
  case 1:
    SetVUMeshDataP__FP17SGDPROCUNITHEADER(pPUHead);
    pPUHead = pPUHead->pNext;
    break;
  case 2:
    SetMaterialDataVU__FP17SGDPROCUNITHEADER(pPUHead);
    pPUHead = pPUHead->pNext;
    break;
  case 3:
  case 6:
  case 7:
  case 8:
  case 9:
  case 10:
  case 0xb:
  case 0xc:
  case 0xd:
  case 0xe:
  case 0xf:
  case 0x10:
  case 0x11:
  case 0x12:
  case 0x13:
  case 0x14:
  case 0x15:
  case 0x16:
  case 0x17:
  case 0x18:
  case 0x19:
  case 0x1a:
  case 0x1b:
  case 0x1c:
  case 0x1d:
  case 0x1e:
  case 0x1f:
  case 0x20:
  case 0x21:
  case 0x22:
  case 0x23:
  case 0x24:
  case 0x25:
  case 0x26:
  case 0x27:
  case 0x28:
  case 0x29:
  case 0x2a:
  case 0x2b:
  case 0x2c:
  case 0x2d:
  case 0x2e:
  case 0x2f:
  case 0x30:
  case 0x31:
  case 0x32:
  case 0x33:
  case 0x34:
  case 0x35:
  case 0x36:
  case 0x37:
  case 0x38:
  case 0x39:
  case 0x3a:
  case 0x3b:
  case 0x3c:
  case 0x3d:
  case 0x3e:
  case 0x3f:
  case 0x40:
    goto switchD_001ba0fc_caseD_3;
  case 4:
    iVar1 = CheckBoundingBox__FP17SGDPROCUNITHEADER(pPUHead);
    if (iVar1 == 0) {
      return;
    }
    iVar1 = BoundingBoxCalcP__FP17SGDPROCUNITHEADER(pPUHead);
    if (iVar1 == 0) {
      return;
    }
    _SetCoordData__FP17SGDPROCUNITHEADER(pPUHead);
    if (save_tri2_pointer != (SGDPROCUNITHEADER *)0x0) {
      LoadTRI2Files__FP17SGDPROCUNITHEADER(save_tri2_pointer);
      save_tri2_pointer = (SGDPROCUNITHEADER *)0x0;
    }
    if (save_bw_pointer != (SGDPROCUNITHEADER *)0x0) {
      LoadTRI2Files__FP17SGDPROCUNITHEADER(save_bw_pointer);
      save_bw_pointer = (SGDPROCUNITHEADER *)0x0;
      goto switchD_001ba0fc_caseD_3;
    }
    pPUHead = pPUHead->pNext;
    break;
  case 5:
    GsImageProcess__FPC17SGDPROCUNITHEADER(pPUHead);
    goto switchD_001ba0fc_caseD_3;
  case 0x41:
    goto LAB_001ba1b0;
  default:
    pPUHead = pPUHead->pNext;
  }
LAB_001ba1a4:
  if (pPUHead == (SGDPROCUNITHEADER *)0x0) {
    return;
  }
  iVar1 = pPUHead->iCategory;
  goto LAB_001ba0e0;
switchD_001ba0fc_caseD_3:
  pPUHead = pPUHead->pNext;
  goto LAB_001ba1a4;
}

static void SgSortPreProcessP(SGDPROCUNITHEADER *pPUHead) {
	static char __FUNCTION__[18] = {
		/* [0] = */ 83,
		/* [1] = */ 103,
		/* [2] = */ 83,
		/* [3] = */ 111,
		/* [4] = */ 114,
		/* [5] = */ 116,
		/* [6] = */ 80,
		/* [7] = */ 114,
		/* [8] = */ 101,
		/* [9] = */ 80,
		/* [10] = */ 114,
		/* [11] = */ 111,
		/* [12] = */ 99,
		/* [13] = */ 101,
		/* [14] = */ 115,
		/* [15] = */ 115,
		/* [16] = */ 80,
		/* [17] = */ 0
	};
	
  SGDPROCUNITHEADER *pSVar1;
  SGDPROCUNITHEADER *pSVar2;
  int iVar3;
  
  if (pPUHead == (SGDPROCUNITHEADER *)0x0) {
    return;
  }
  iVar3 = pPUHead->iCategory;
  do {
    pSVar1 = save_tri2_pointer;
    pSVar2 = save_bw_pointer;
    switch(iVar3) {
    case 5:
      GsImageProcess__FPC17SGDPROCUNITHEADER(pPUHead);
      pPUHead = pPUHead->pNext;
      goto LAB_001ba2cc;
    case 6:
    case 7:
    case 8:
    case 9:
    case 0xb:
      break;
    case 10:
      pSVar1 = pPUHead;
      if (save_tri2_pointer == (SGDPROCUNITHEADER *)&_heap_size) {
        LoadTRI2Files__FP17SGDPROCUNITHEADER(pPUHead);
        save_tri2_pointer = (SGDPROCUNITHEADER *)0x0;
        pSVar1 = save_tri2_pointer;
        pSVar2 = save_bw_pointer;
      }
      break;
    case 0xc:
      _SetLineInfo__FPCciT0T0("gra3dSGD.c",0x829,"SgSortPreProcessP",&DAT_003f12c0);
      g3ddbgAssert__FbPCce(false,&DAT_003f12b8);
      pPUHead = pPUHead->pNext;
      goto LAB_001ba2cc;
    case 0xd:
      iVar3 = gra3dIsMonotoneDrawEnable__Fv();
      pSVar1 = save_tri2_pointer;
      pSVar2 = save_bw_pointer;
      if ((iVar3 != 0) && (pSVar2 = pPUHead, save_bw_pointer == (SGDPROCUNITHEADER *)&_heap_size)) {
        LoadTRI2Files__FP17SGDPROCUNITHEADER(pPUHead);
        save_bw_pointer = (SGDPROCUNITHEADER *)0x0;
        pSVar1 = save_tri2_pointer;
        pSVar2 = save_bw_pointer;
      }
      break;
    case 0xe:
      _SetLineInfo__FPCciT0T0("gra3dSGD.c",0x837,"SgSortPreProcessP",&DAT_003f12c0);
      g3ddbgAssert__FbPCce(false,&DAT_003f12b8);
      pSVar1 = save_tri2_pointer;
      pSVar2 = save_bw_pointer;
      break;
    default:
      pPUHead = pPUHead->pNext;
      goto LAB_001ba2cc;
    }
    save_bw_pointer = pSVar2;
    save_tri2_pointer = pSVar1;
    pPUHead = pPUHead->pNext;
LAB_001ba2cc:
    if (pPUHead == (SGDPROCUNITHEADER *)&_heap_size) {
      _SetLineInfo__FPCciT0T0
                ("gra3dSGD.c",0x83c,"SgSortPreProcessP","(int)pPUHead != (int)0xffffffff");
      g3ddbgWarning__FbPCce(false,"sgd has been broken...");
    }
    if (pPUHead == (SGDPROCUNITHEADER *)0x0) {
      return;
    }
    iVar3 = pPUHead->iCategory;
  } while( true );
}

int gra3dsgdGetNumBlock() {
	static char __FUNCTION__[20] = {
		/* [0] = */ 103,
		/* [1] = */ 114,
		/* [2] = */ 97,
		/* [3] = */ 51,
		/* [4] = */ 100,
		/* [5] = */ 115,
		/* [6] = */ 103,
		/* [7] = */ 100,
		/* [8] = */ 71,
		/* [9] = */ 101,
		/* [10] = */ 116,
		/* [11] = */ 78,
		/* [12] = */ 117,
		/* [13] = */ 109,
		/* [14] = */ 66,
		/* [15] = */ 108,
		/* [16] = */ 111,
		/* [17] = */ 99,
		/* [18] = */ 107,
		/* [19] = */ 0
	};
	
  SGDFILEHEADER *pSVar1;
  
  pSVar1 = _GetSGDTop__Fv();
  if (pSVar1 == (SGDFILEHEADER *)0x0) {
    _SetLineInfo__FPCciT0T0("gra3dSGD.c",0x846,"gra3dsgdGetNumBlock","_GetSGDTop()");
    pSVar1 = _GetSGDTop__Fv();
    g3ddbgAssert__FbPCce(pSVar1 != (SGDFILEHEADER *)0x0,"sgd_top_addr is null");
  }
  return s_pSGDTop->uiNumBlock;
}

CoordCache& _GetCoordCache() {
  return &ccahe;
}

void _SetCoordCache(CoordCache &rCC) {
  undefined *puVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  ulong in_v1;
  ulong uVar5;
  ulong in_a1;
  ulong uVar6;
  ulong in_a2;
  ulong uVar7;
  
  puVar1 = (undefined *)((int)&rCC->edge_check + 3);
  uVar3 = (uint)puVar1 & 7;
  uVar4 = (uint)rCC & 7;
  uVar5 = (*(long *)(puVar1 + -uVar3) << (7 - uVar3) * 8 |
          in_v1 & 0xffffffffffffffffU >> (uVar3 + 1) * 8) & -1L << (8 - uVar4) * 8 |
          *(ulong *)((int)rCC - uVar4) >> uVar4 * 8;
  puVar1 = (undefined *)((int)&(rCC->Point).bEnable + 3);
  uVar3 = (uint)puVar1 & 7;
  uVar4 = (uint)&rCC->cn0 & 7;
  uVar6 = (*(long *)(puVar1 + -uVar3) << (7 - uVar3) * 8 |
          in_a1 & 0xffffffffffffffffU >> (uVar3 + 1) * 8) & -1L << (8 - uVar4) * 8 |
          *(ulong *)((int)&rCC->cn0 - uVar4) >> uVar4 * 8;
  puVar1 = (undefined *)((int)(rCC->Point).aiIndex + 7);
  uVar3 = (uint)puVar1 & 7;
  piVar2 = (rCC->Point).aiIndex;
  uVar4 = (uint)piVar2 & 7;
  uVar7 = (*(long *)(puVar1 + -uVar3) << (7 - uVar3) * 8 |
          in_a2 & 0xffffffffffffffffU >> (uVar3 + 1) * 8) & -1L << (8 - uVar4) * 8 |
          *(ulong *)((int)piVar2 - uVar4) >> uVar4 * 8;
  ccahe.cache_on = (int)uVar5;
  ccahe.edge_check = (int)(uVar5 >> 0x20);
  ccahe.cn0 = (int)uVar6;
  ccahe.Point.bEnable = (int)(uVar6 >> 0x20);
  ccahe.Point.aiIndex[0] = (int)uVar7;
  ccahe.Point.aiIndex[1] = (int)(uVar7 >> 0x20);
  puVar1 = (undefined *)((int)&(rCC->Spot).bEnable + 3);
  uVar3 = (uint)puVar1 & 7;
  piVar2 = (rCC->Point).aiIndex + 2;
  uVar4 = (uint)piVar2 & 7;
  uVar5 = (*(long *)(puVar1 + -uVar3) << (7 - uVar3) * 8 |
          uVar5 & 0xffffffffffffffffU >> (uVar3 + 1) * 8) & -1L << (8 - uVar4) * 8 |
          *(ulong *)((int)piVar2 - uVar4) >> uVar4 * 8;
  puVar1 = (undefined *)((int)(rCC->Spot).aiIndex + 7);
  uVar3 = (uint)puVar1 & 7;
  piVar2 = (rCC->Spot).aiIndex;
  uVar4 = (uint)piVar2 & 7;
  uVar6 = (*(long *)(puVar1 + -uVar3) << (7 - uVar3) * 8 |
          uVar6 & 0xffffffffffffffffU >> (uVar3 + 1) * 8) & -1L << (8 - uVar4) * 8 |
          *(ulong *)((int)piVar2 - uVar4) >> uVar4 * 8;
  ccahe.Point.aiIndex[2] = (int)uVar5;
  ccahe.Spot.bEnable = (int)(uVar5 >> 0x20);
  ccahe.Spot.aiIndex[0] = (int)uVar6;
  ccahe.Spot.aiIndex[1] = (int)(uVar6 >> 0x20);
  ccahe.Spot.aiIndex[2] = (rCC->Spot).aiIndex[2];
  return;
}

float*[4] _GetGlobalVertexBuffer() {
  return s_pGlobalVertexBuffer;
}

float*[4] _GetGlobalNormalBuffer() {
  return s_pGlobalNormalBuffer;
}

int _GetGlobalBufferSize() {
  return s_iGlobalBufferSize;
}

static void SgSetVNBuffer(float *varraysizeof[4], int size) {
  s_pGlobalVertexBuffer = varraysizeof;
  s_iGlobalBufferSize = size / 2;
  s_pGlobalNormalBuffer = varraysizeof[size / 2];
  return;
}

void gra3dsgdInit(GRA3DSGDCREATIONDATA *pCD) {
  SgSetVNBuffer__FPA3_fi(pCD->vnarray,pCD->size);
  _SetPREVIOUSTRI2PRIM__FP17SGDPROCUNITHEADER((SGDPROCUNITHEADER *)0x0);
  return;
}

void gra3dsgdSetData(SGDFILEHEADER *pSGDTop) {
	static char __FUNCTION__[16] = {
		/* [0] = */ 103,
		/* [1] = */ 114,
		/* [2] = */ 97,
		/* [3] = */ 51,
		/* [4] = */ 100,
		/* [5] = */ 115,
		/* [6] = */ 103,
		/* [7] = */ 100,
		/* [8] = */ 83,
		/* [9] = */ 101,
		/* [10] = */ 116,
		/* [11] = */ 68,
		/* [12] = */ 97,
		/* [13] = */ 116,
		/* [14] = */ 97,
		/* [15] = */ 0
	};
	
  if (pSGDTop == (SGDFILEHEADER *)0x0) {
    _SetLineInfo__FPCciT0T0("gra3dSGD.c",0x88b,"gra3dsgdSetData",s_pSGDTop_003f12f0);
    g3ddbgWarning__FbPCce(false,"pSGDTop is NULL");
    g3ddbgPrintf__FPCce("[G3DRETURN]%s(%d)(%s):%s\n");
    return;
  }
  if (pSGDTop->uiVersionId != 0x1050) {
    _SetLineInfo__FPCciT0T0
              ("gra3dSGD.c",0x88f,"gra3dsgdSetData","pSGDTop->uiVersionId == SGD_VALID_VERSIONID");
    g3ddbgWarning__FbPCce(pSGDTop->uiVersionId == 0x1050,"Invalid SGD File");
    if (pSGDTop->uiVersionId != 0x1050) {
      g3ddbgPrintf__FPCce("[G3DRETURN]%s(%d)(%s):%s\n");
      return;
    }
  }
  s_pSGDTop = pSGDTop;
  return;
}

SGDFILEHEADER* gra3dsgdGetData() {
  return s_pSGDTop;
}

int _GetEdgeCheck() {
  return edge_check;
}

void _SetEdgeCheck(int ec) {
  edge_check = ec;
  return;
}

void SgSortPreProcess(u_int *_prim) {
	SGDPROCUNITHEADER *pPUHead;
	
  int iVar1;
  uint uVar2;
  
  if (_prim != (uint *)0x0) {
    uVar2 = _prim[1];
    while( true ) {
      if (uVar2 == 10) {
        LoadTRI2Files__FP17SGDPROCUNITHEADER((SGDPROCUNITHEADER *)_prim);
        _prim = (uint *)*(SGDPROCUNITHEADER **)_prim;
      }
      else if ((int)uVar2 < 0xb) {
        if (uVar2 == 5) {
          GsImageProcess__FPC17SGDPROCUNITHEADER((SGDPROCUNITHEADER *)_prim);
          _prim = (uint *)*(SGDPROCUNITHEADER **)_prim;
        }
        else {
          _prim = (uint *)*(SGDPROCUNITHEADER **)_prim;
        }
      }
      else if (uVar2 == 0xd) {
        iVar1 = gra3dIsMonotoneDrawEnable__Fv();
        if (iVar1 == 0) {
          _prim = (uint *)*(SGDPROCUNITHEADER **)_prim;
        }
        else {
          LoadTRI2Files__FP17SGDPROCUNITHEADER((SGDPROCUNITHEADER *)_prim);
          _prim = (uint *)*(SGDPROCUNITHEADER **)_prim;
        }
      }
      else {
        _prim = (uint *)*(SGDPROCUNITHEADER **)_prim;
      }
      if ((SGDPROCUNITHEADER *)_prim == (SGDPROCUNITHEADER *)0x0) break;
      uVar2 = *(int *)((int)_prim + 4);
    }
  }
  return;
}

void _gra3dDrawSGD(SGDFILEHEADER *pSGDTop, SGDRENDERTYPE type, SGDCOORDINATE *pCoord, int pnum) {
	static char __FUNCTION__[14] = {
		/* [0] = */ 95,
		/* [1] = */ 103,
		/* [2] = */ 114,
		/* [3] = */ 97,
		/* [4] = */ 51,
		/* [5] = */ 100,
		/* [6] = */ 68,
		/* [7] = */ 114,
		/* [8] = */ 97,
		/* [9] = */ 119,
		/* [10] = */ 83,
		/* [11] = */ 71,
		/* [12] = */ 68,
		/* [13] = */ 0
	};
	int bPreset;
	SGDPROCUNITHEADER **pk;
	CoordCache CC;
	int iNumBlock;
	int i;
	int i;
	int b;
	int i;
	int b;
	int i;
	int iNumBlock;
	int iNumBlock;
	int i;
	int iNumBlock;
	int i;
	int iNumBlock;
	int i;
	
  undefined *puVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  ulong *puVar5;
  CoordCache *pCVar6;
  int iVar7;
  int iVar8;
  G3DLIGHT *pGVar9;
  SGDCOORDINATE *pSVar10;
  SGDPROCUNITHEADER *pSVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong in_t0;
  ulong uVar15;
  int *piVar16;
  int iVar17;
  int iVar18;
  ulong uVar19;
  SGDPROCUNITHEADER **ppSVar20;
  CoordCache CC;
  
  uVar13 = (ulong)pnum;
  uVar12 = (ulong)(int)pCoord;
  if (pSGDTop == (SGDFILEHEADER *)0x0) {
    _SetLineInfo__FPCciT0T0("gra3dSGD.c",0x8db,"_gra3dDrawSGD",s_pSGDTop_003f12f0);
    g3ddbgWarning__FbPCce(false,"pSGDTop is NULL");
    g3ddbgPrintf__FPCce("[G3DRETURN]%s(%d)(%s):%s\n");
  }
  else {
                    /* inlined from sgd_types.h */
    bVar2 = pSGDTop->ucModelType;
                    /* end of inlined section */
                    /* inlined from sgd_types.h */
                    /* end of inlined section */
    uVar19 = uVar12;
    uVar14 = uVar13;
    if (pSGDTop->uiVersionId != 0x1050) {
      uVar19 = 0x3b7828;
      uVar14 = 0x3b77b0;
      _SetLineInfo__FPCciT0T0
                ("gra3dSGD.c",0x8e2,"_gra3dDrawSGD","pSGDTop->uiVersionId == SGD_VALID_VERSIONID");
      g3ddbgWarning__FbPCce(pSGDTop->uiVersionId == 0x1050,"Invalid SGD File");
      if (pSGDTop->uiVersionId != 0x1050) {
        g3ddbgPrintf__FPCce("[G3DRETURN]%s(%d)(%s):%s\n");
        return;
      }
    }
    if ((uVar12 & 0xf) == 0) {
      gra3dsgdSetData__FP13SGDFILEHEADER(pSGDTop);
      if (uVar12 == 0) {
        uVar12 = 0xffffffffffffffff;
        gra3dsgdSetCoordinate__FPC13SGDCOORDINATEi(pSGDTop->pCoord,-1);
      }
      else {
        uVar12 = 0xffffffffffffffff;
        gra3dsgdSetCoordinate__FPC13SGDCOORDINATEi(pCoord,-1);
      }
      if (type == SRT_REALTIME) {
        sgdResetMaterialCache__FP13SGDFILEHEADER(pSGDTop);
        gra3dsgdSetupVu1__Fv();
      }
      else if (((type != SRT_PRELIGHTING) && (type != SRT_CLEARPRELIGHTING)) &&
              (type == SRT_MAPSHADOW)) {
        pCVar6 = _GetCoordCache__Fv();
        puVar1 = (undefined *)((int)&pCVar6->edge_check + 3);
        uVar3 = (uint)puVar1 & 7;
        uVar4 = (uint)pCVar6 & 7;
        uVar12 = (*(long *)(puVar1 + -uVar3) << (7 - uVar3) * 8 |
                 uVar12 & 0xffffffffffffffffU >> (uVar3 + 1) * 8) & -1L << (8 - uVar4) * 8 |
                 *(ulong *)((int)pCVar6 - uVar4) >> uVar4 * 8;
        puVar1 = (undefined *)((int)&(pCVar6->Point).bEnable + 3);
        uVar3 = (uint)puVar1 & 7;
        uVar4 = (uint)&pCVar6->cn0 & 7;
        uVar19 = (*(long *)(puVar1 + -uVar3) << (7 - uVar3) * 8 |
                 uVar19 & 0xffffffffffffffffU >> (uVar3 + 1) * 8) & -1L << (8 - uVar4) * 8 |
                 *(ulong *)((int)&pCVar6->cn0 - uVar4) >> uVar4 * 8;
        puVar1 = (undefined *)((int)(pCVar6->Point).aiIndex + 7);
        uVar3 = (uint)puVar1 & 7;
        piVar16 = (pCVar6->Point).aiIndex;
        uVar4 = (uint)piVar16 & 7;
        uVar14 = (*(long *)(puVar1 + -uVar3) << (7 - uVar3) * 8 |
                 uVar14 & 0xffffffffffffffffU >> (uVar3 + 1) * 8) & -1L << (8 - uVar4) * 8 |
                 *(ulong *)((int)piVar16 - uVar4) >> uVar4 * 8;
        puVar1 = (undefined *)((int)&(pCVar6->Spot).bEnable + 3);
        uVar3 = (uint)puVar1 & 7;
        piVar16 = (pCVar6->Point).aiIndex + 2;
        uVar4 = (uint)piVar16 & 7;
        uVar15 = (*(long *)(puVar1 + -uVar3) << (7 - uVar3) * 8 |
                 in_t0 & 0xffffffffffffffffU >> (uVar3 + 1) * 8) & -1L << (8 - uVar4) * 8 |
                 *(ulong *)((int)piVar16 - uVar4) >> uVar4 * 8;
        puVar1 = (undefined *)((int)&CC.edge_check + 3);
        uVar3 = (uint)puVar1 & 7;
        puVar5 = (ulong *)(puVar1 + -uVar3);
        *puVar5 = *puVar5 & -1L << (uVar3 + 1) * 8 | uVar12 >> (7 - uVar3) * 8;
        puVar1 = (undefined *)((int)&CC.Point.bEnable + 3);
        uVar3 = (uint)puVar1 & 7;
        puVar5 = (ulong *)(puVar1 + -uVar3);
        *puVar5 = *puVar5 & -1L << (uVar3 + 1) * 8 | uVar19 >> (7 - uVar3) * 8;
        puVar1 = (undefined *)((int)CC.Point.aiIndex + 7);
        uVar3 = (uint)puVar1 & 7;
        puVar5 = (ulong *)(puVar1 + -uVar3);
        *puVar5 = *puVar5 & -1L << (uVar3 + 1) * 8 | uVar14 >> (7 - uVar3) * 8;
        puVar1 = (undefined *)((int)&CC.Spot.bEnable + 3);
        uVar3 = (uint)puVar1 & 7;
        puVar5 = (ulong *)(puVar1 + -uVar3);
        *puVar5 = *puVar5 & -1L << (uVar3 + 1) * 8 | uVar15 >> (7 - uVar3) * 8;
        puVar1 = (undefined *)((int)(pCVar6->Spot).aiIndex + 7);
        uVar3 = (uint)puVar1 & 7;
        piVar16 = (pCVar6->Spot).aiIndex;
        uVar4 = (uint)piVar16 & 7;
        CC.Spot.aiIndex._0_8_ =
             (*(long *)(puVar1 + -uVar3) << (7 - uVar3) * 8 |
             uVar12 & 0xffffffffffffffffU >> (uVar3 + 1) * 8) & -1L << (8 - uVar4) * 8 |
             *(ulong *)((int)piVar16 - uVar4) >> uVar4 * 8;
        iVar7 = (pCVar6->Spot).aiIndex[2];
        puVar1 = (undefined *)((int)CC.Spot.aiIndex + 7);
        uVar3 = (uint)puVar1 & 7;
        puVar5 = (ulong *)(puVar1 + -uVar3);
        *puVar5 = *puVar5 & -1L << (uVar3 + 1) * 8 | (ulong)CC.Spot.aiIndex._0_8_ >> (7 - uVar3) * 8
        ;
        CC.edge_check = (int)(uVar12 >> 0x20);
        CC.cache_on = -1;
        CC._8_8_ = uVar19;
        CC.Point.aiIndex._0_8_ = uVar14;
        CC._24_8_ = uVar15;
        CC.Spot.aiIndex[2] = iVar7;
        _SetCoordCache__FRC10CoordCache(&CC);
      }
      if ((long)uVar13 < -1) {
        _SetLineInfo__FPCciT0T0
                  ("gra3dSGD.c",0x919,"_gra3dDrawSGD","!(pnum != INVALID_SGD_OBJECTID && pnum < 0)")
        ;
        g3ddbgAssert__FbPCce(false,&DAT_003f12b8);
      }
      iVar7 = gra3dsgdGetNumBlock__Fv();
      if ((long)(iVar7 + -1) < (long)uVar13) {
        _SetLineInfo__FPCciT0T0
                  ("gra3dSGD.c",0x91a,"_gra3dDrawSGD","pnum <= gra3dsgdGetNumBlock()-1");
        iVar7 = gra3dsgdGetNumBlock__Fv();
        gra3dsgdGetNumBlock__Fv();
        g3ddbgAssert__FbPCce
                  ((long)uVar13 <= (long)(iVar7 + -1),"pnum:%d, gra3dsgdGetNumBlock()-1:%d");
      }
      ppSVar20 = pSGDTop->apProcUnitHead;
      if (ppSVar20 == (SGDPROCUNITHEADER **)0x0) {
        _SetLineInfo__FPCciT0T0("gra3dSGD.c",0x91e,"_gra3dDrawSGD",&DAT_003f12f8);
        g3ddbgAssert__FbPCce(false,&DAT_003f12b8);
      }
      if ((bVar2 & 1) == 0) {
        if (type == SRT_REALTIME) {
          iVar8 = 3;
          iVar7 = 0;
          do {
            iVar18 = iVar7 + 1;
            iVar17 = gra3dIsLightEnable__Fi(iVar8);
            g3dLightEnable__Fii(iVar8,iVar17);
            if (iVar17 != 0) {
              pGVar9 = gra3dGetLightRef__Fi(iVar8);
              g3dSetLight__FiPC8G3DLIGHT(iVar8,pGVar9);
            }
            iVar8 = iVar7 + 4;
            iVar7 = iVar18;
          } while (iVar18 < 3);
          iVar8 = 0x16;
          iVar7 = 0;
          while( true ) {
            iVar17 = gra3dIsLightEnable__Fi(iVar8);
            g3dLightEnable__Fii(iVar7 + 6,iVar17);
            if (iVar17 != 0) {
              pGVar9 = gra3dGetLightRef__Fi(iVar8);
              g3dSetLight__FiPC8G3DLIGHT(iVar7 + 6,pGVar9);
            }
            if (2 < iVar7 + 1) break;
            iVar8 = iVar7 + 0x17;
            iVar7 = iVar7 + 1;
          }
          gra3dDmaLoadVu1MicroProgram__FPCUii((uint *)&_dma_1);
          if ((long)uVar13 < 0) {
            SgSortPreProcess__FPUi((uint *)*ppSVar20);
            iVar7 = gra3dsgdGetNumBlock__Fv();
            iVar8 = 4;
            if (1 < iVar7 + -1) {
              iVar8 = iVar7 + -2;
              piVar16 = pSGDTop->aiPad;
              pSVar11 = (SGDPROCUNITHEADER *)*piVar16;
              while( true ) {
                piVar16 = piVar16 + 1;
                iVar8 = iVar8 + -1;
                SgSortUnitPrim__FP17SGDPROCUNITHEADER(pSVar11);
                if (iVar8 == 0) break;
                pSVar11 = (SGDPROCUNITHEADER *)*piVar16;
              }
              iVar8 = (iVar7 + -1) * 4;
            }
            if (*(SGDPROCUNITHEADER **)(iVar8 + (int)ppSVar20) == (SGDPROCUNITHEADER *)0x0) {
              return;
            }
            SgSortUnitPrimPost__FP17SGDPROCUNITHEADER
                      (*(SGDPROCUNITHEADER **)(iVar8 + (int)ppSVar20));
            return;
          }
          if (uVar13 == 0) {
            SgSortPreProcess__FPUi((uint *)*ppSVar20);
            return;
          }
          iVar7 = gra3dsgdGetNumBlock__Fv();
          if (uVar13 == (long)(iVar7 + -1)) {
            SgSortUnitPrimPost__FP17SGDPROCUNITHEADER(ppSVar20[pnum]);
            return;
          }
          SgSortUnitPrim__FP17SGDPROCUNITHEADER(ppSVar20[pnum]);
          return;
        }
      }
      else if (type == SRT_REALTIME) {
        iVar7 = 1;
        if (-1 < (long)uVar13) {
          if (uVar13 != 0) {
            save_bw_pointer = (SGDPROCUNITHEADER *)0x0;
            save_tri2_pointer = (SGDPROCUNITHEADER *)0x0;
            gra3dsgdDrawPresetDataObject__FP17SGDPROCUNITHEADER(ppSVar20[pnum]);
            return;
          }
          save_bw_pointer = (SGDPROCUNITHEADER *)&_heap_size;
          save_tri2_pointer = (SGDPROCUNITHEADER *)&_heap_size;
          SgSortPreProcessP__FP17SGDPROCUNITHEADER(*ppSVar20);
          return;
        }
        save_bw_pointer = (SGDPROCUNITHEADER *)0x0;
        save_tri2_pointer = (SGDPROCUNITHEADER *)0x0;
        SgSortPreProcessP__FP17SGDPROCUNITHEADER(*ppSVar20);
        iVar8 = gra3dsgdGetNumBlock__Fv();
        if (iVar8 < 2) {
          return;
        }
        piVar16 = pSGDTop->aiPad;
        pSVar11 = (SGDPROCUNITHEADER *)*piVar16;
        while( true ) {
          piVar16 = piVar16 + 1;
          iVar7 = iVar7 + 1;
          gra3dsgdDrawPresetDataObject__FP17SGDPROCUNITHEADER(pSVar11);
          if (iVar8 <= iVar7) break;
          pSVar11 = (SGDPROCUNITHEADER *)*piVar16;
        }
        return;
      }
      if (type == SRT_PRELIGHTING) {
        if ((bVar2 & 1) == 0) {
          _SetLineInfo__FPCciT0T0("gra3dSGD.c",0x99d,"_gra3dDrawSGD",s_bPreset_003f1300);
          g3ddbgAssert__FbPCce(false,&DAT_003f12b8);
        }
        if ((long)uVar13 < 0) {
          iVar8 = 1;
          iVar7 = gra3dsgdGetNumBlock__Fv();
          if (1 < iVar7) {
            piVar16 = pSGDTop->aiPad;
            pSVar11 = (SGDPROCUNITHEADER *)*piVar16;
            while( true ) {
              piVar16 = piVar16 + 1;
              iVar8 = iVar8 + 1;
              SgPreRenderPrim__FP17SGDPROCUNITHEADER(pSVar11);
              if (iVar7 <= iVar8) break;
              pSVar11 = (SGDPROCUNITHEADER *)*piVar16;
            }
          }
        }
        else if (uVar13 != 0) {
          SgPreRenderPrim__FP17SGDPROCUNITHEADER(ppSVar20[pnum]);
        }
      }
      else if (type == SRT_CLEARPRELIGHTING) {
        if ((long)uVar13 < 0) {
          iVar8 = 1;
          iVar7 = gra3dsgdGetNumBlock__Fv();
          if (1 < iVar7) {
            piVar16 = pSGDTop->aiPad;
            pSVar11 = (SGDPROCUNITHEADER *)*piVar16;
            while( true ) {
              piVar16 = piVar16 + 1;
              iVar8 = iVar8 + 1;
              SgClearPreRenderPrim__FP17SGDPROCUNITHEADER(pSVar11);
              if (iVar7 <= iVar8) break;
              pSVar11 = (SGDPROCUNITHEADER *)*piVar16;
            }
          }
        }
        else if (uVar13 != 0) {
          SgClearPreRenderPrim__FP17SGDPROCUNITHEADER(ppSVar20[pnum]);
        }
      }
      else if (type == SRT_MAPSHADOW) {
        iVar7 = gra3dshadowGetAssignGroup__Fv();
        if (-1 < iVar7) {
          _SetLineInfo__FPCciT0T0
                    ("gra3dSGD.c",0x9c0,"_gra3dDrawSGD","gra3dshadowGetAssignGroup() < 0");
          iVar7 = gra3dshadowGetAssignGroup__Fv();
          g3ddbgAssert__FbPCce(SUB41((uint)iVar7 >> 0x1f,0),&DAT_003b7938);
        }
        if (uVar13 != 0xffffffffffffffff) {
          _SetLineInfo__FPCciT0T0("gra3dSGD.c",0x9c1,"_gra3dDrawSGD","pnum == -1");
          g3ddbgAssert__FbPCce(pnum == -1,"see old source");
        }
        iVar7 = gra3dsgdGetNumBlock__Fv();
        if (1 < iVar7 + -1) {
          piVar16 = pSGDTop->aiPad;
          iVar8 = 1;
          do {
            iVar17 = iVar8 + 1;
            pSVar10 = gra3dsgdGetCoordinate__Fi(iVar8);
            if (pSVar10->bInViewvolume != 0) {
              AssignShadowPrim__FP17SGDPROCUNITHEADER((SGDPROCUNITHEADER *)*piVar16);
            }
            piVar16 = piVar16 + 1;
            iVar8 = iVar17;
          } while (iVar17 < iVar7 + -1);
        }
      }
      else {
        _SetLineInfo__FPCciT0T0("gra3dSGD.c",0x9d3,"_gra3dDrawSGD",&DAT_003f12c0);
        g3ddbgAssert__FbPCce(false,&DAT_003f12b8);
      }
    }
    else {
      _SetLineInfo__FPCciT0T0("gra3dSGD.c",0x8e6,"_gra3dDrawSGD","!((unsigned int)pCoord & 0x0f)");
      g3ddbgWarning__FbPCce((uVar12 & 0xf) == 0,"SGDFILEHEADER::pCoord is illegal");
      g3ddbgPrintf__FPCce("[G3DRETURN]%s(%d)(%s):%s\n");
    }
  }
  return;
}

static void ChangeST(SGDVUMESHTEXGIFTAG *pMGTHead, int iNumMesh, float fAddS, float fAddT) {
	SGDVUMESHPOINTNUM *pMPointNum;
	SGDVUMESHSTREGSET *pMSTReg;
	SGDVUMESHSTDATA *pMSTData;
	int i;
	int j;
	
  uint uVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  uint *puVar5;
  
  puVar5 = pMGTHead[1].auiGifTag;
  puVar4 = puVar5 + iNumMesh * 2 + 3;
  if (0 < iNumMesh) {
    do {
      uVar1 = puVar5[1];
      iVar3 = 0;
      iVar2 = iVar3;
      if (0 < (int)uVar1) {
        do {
          iVar3 = iVar2 + 1;
          puVar4[iVar2 * 2 + 1] = (uint)((float)puVar4[iVar2 * 2 + 1] + fAddS);
          puVar4[(iVar2 + 1) * 2] = (uint)((float)puVar4[(iVar2 + 1) * 2] + fAddT);
          iVar2 = iVar3;
        } while (iVar3 < (int)uVar1);
      }
      iNumMesh = iNumMesh + -1;
      puVar5 = puVar5 + 2;
      puVar4 = puVar4 + iVar3 * 2 + 1;
    } while (iNumMesh != 0);
  }
  return;
}

static void ChangeSTP(SGDPROCUNITHEADER *pPUHead, float fAddS, float fAddT) {
	SGDVUMESHSTREGSET *pMSTReg;
	SGDVUMESHSTDATA *pMSTData;
	int gloops;
	int i;
	int j;
	
  float *pfVar1;
  uint uVar2;
  int iVar3;
  float *pfVar4;
  int iVar5;
  int iVar6;
  
  iVar5 = (int)&pPUHead->field2_0x8 + *(short *)&pPUHead[1].iCategory * 4 + 4;
  for (uVar2 = (uint)(pPUHead->field2_0x8).VUVNDesc.aucPad[0]; uVar2 != 0; uVar2 = uVar2 - 1) {
    iVar6 = 0;
    if (*(char *)(iVar5 + 2) != '\0') {
      iVar3 = 0;
      do {
        iVar6 = iVar6 + 1;
        pfVar1 = (float *)(iVar5 + 4 + iVar3);
        pfVar4 = (float *)(iVar5 + 8 + iVar3);
        *pfVar1 = *pfVar1 + fAddS;
        *pfVar4 = *pfVar4 + fAddT;
        iVar3 = iVar6 * 8;
      } while (iVar6 < (int)(uint)*(byte *)(iVar5 + 2));
    }
    iVar5 = iVar5 + iVar6 * 8 + 4;
  }
  return;
}

static void ChangeSTVUMeshData(SGDPROCUNITHEADER *pPUHead, float fAddS, float fAddT) {
	static char __FUNCTION__[19] = {
		/* [0] = */ 67,
		/* [1] = */ 104,
		/* [2] = */ 97,
		/* [3] = */ 110,
		/* [4] = */ 103,
		/* [5] = */ 101,
		/* [6] = */ 83,
		/* [7] = */ 84,
		/* [8] = */ 86,
		/* [9] = */ 85,
		/* [10] = */ 77,
		/* [11] = */ 101,
		/* [12] = */ 115,
		/* [13] = */ 104,
		/* [14] = */ 68,
		/* [15] = */ 97,
		/* [16] = */ 116,
		/* [17] = */ 97,
		/* [18] = */ 0
	};
	SGDVUMESHDESC &rVUMeshDesc;
	SGDVUMESHDATA *pVUMeshData;
	int gloops;
	
  byte bVar1;
  uint iNumMesh;
  byte bVar2;
  
  bVar1 = (pPUHead->field2_0x8).VUVNDesc.ucVectorType;
  bVar2 = bVar1 & 0xd3;
  if (bVar2 != 0x42) {
    iNumMesh = (uint)(pPUHead->field2_0x8).VUVNDesc.aucPad[0];
    if (bVar2 < 0x43) {
      if ((bVar1 & 0xd3) == 0) {
        return;
      }
      if (bVar2 == 2) {
        ChangeST__FP18SGDVUMESHTEXGIFTAGiff
                  ((SGDVUMESHTEXGIFTAG *)(pPUHead + 1),iNumMesh,fAddS,fAddT);
        return;
      }
    }
    else {
      if (bVar2 == 0x80) {
        return;
      }
      if (bVar2 == 0x82) {
        ChangeST__FP18SGDVUMESHTEXGIFTAGiff
                  ((SGDVUMESHTEXGIFTAG *)(pPUHead + 1),iNumMesh,fAddS,fAddT);
        return;
      }
    }
    _SetLineInfo__FPCciT0T0("gra3dSGD.c",0xa53,"ChangeSTVUMeshData",&DAT_003f12c0);
    g3ddbgAssert__FbPCce(false,&DAT_003b7288);
  }
  return;
}

static void ChangeSTVUMeshDataP(SGDPROCUNITHEADER *pPUHead, float fAddS, float fAddT) {
  byte bVar1;
  
  bVar1 = (pPUHead->field2_0x8).VUVNDesc.ucVectorType;
  if ((bVar1 == 0x32) || (((bVar1 < 0x33 && (bVar1 != 0x10)) && (bVar1 == 0x12)))) {
    ChangeSTP__FP17SGDPROCUNITHEADERff(pPUHead,fAddS,fAddT);
  }
  return;
}

static void SgChangeSTUnitPrim(SGDPROCUNITHEADER *pPUHead, int bPreset, float fAddS, float fAddT) {
  int iVar1;
  
  if (pPUHead != (SGDPROCUNITHEADER *)0x0) {
    iVar1 = pPUHead->iCategory;
    while( true ) {
      if (iVar1 == 1) {
        if (bPreset == 0) {
          ChangeSTVUMeshData__FP17SGDPROCUNITHEADERff(pPUHead,fAddS,fAddT);
          pPUHead = pPUHead->pNext;
        }
        else {
          ChangeSTVUMeshDataP__FP17SGDPROCUNITHEADERff(pPUHead,fAddS,fAddT);
          pPUHead = pPUHead->pNext;
        }
      }
      else {
        pPUHead = pPUHead->pNext;
      }
      if (pPUHead == (SGDPROCUNITHEADER *)0x0) break;
      iVar1 = pPUHead->iCategory;
    }
  }
  return;
}

void gra3dChangeST(SGDFILEHEADER *pSGDTop, float fAddS, float fAddT) {
	static char __FUNCTION__[14] = {
		/* [0] = */ 103,
		/* [1] = */ 114,
		/* [2] = */ 97,
		/* [3] = */ 51,
		/* [4] = */ 100,
		/* [5] = */ 67,
		/* [6] = */ 104,
		/* [7] = */ 97,
		/* [8] = */ 110,
		/* [9] = */ 103,
		/* [10] = */ 101,
		/* [11] = */ 83,
		/* [12] = */ 84,
		/* [13] = */ 0
	};
	int bPreset;
	int i;
	
  byte bVar1;
  SGDPROCUNITHEADER *pPUHead;
  bool bVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  
                    /* inlined from sgd_types.h */
  bVar1 = pSGDTop->ucModelType;
                    /* end of inlined section */
  if (pSGDTop == (SGDFILEHEADER *)0x0) {
    _SetLineInfo__FPCciT0T0("gra3dSGD.c",0xa8c,"gra3dChangeST",s_pSGDTop_003f12f0);
    g3ddbgWarning__FbPCce(false,"pSGDTop is NULL");
    g3ddbgPrintf__FPCce("[G3DRETURN]%s(%d)(%s):%s\n");
    return;
  }
  if (pSGDTop->uiVersionId != 0x1050) {
    _SetLineInfo__FPCciT0T0
              ("gra3dSGD.c",0xa90,"gra3dChangeST","pSGDTop->uiVersionId == SGD_VALID_VERSIONID");
    g3ddbgWarning__FbPCce(pSGDTop->uiVersionId == 0x1050,"Invalid SGD File");
    if (pSGDTop->uiVersionId != 0x1050) {
      g3ddbgPrintf__FPCce("[G3DRETURN]%s(%d)(%s):%s\n");
      return;
    }
  }
  piVar4 = pSGDTop->aiPad;
  gra3dsgdSetData__FP13SGDFILEHEADER(pSGDTop);
  iVar5 = 1;
  while( true ) {
    iVar3 = gra3dsgdGetNumBlock__Fv();
    bVar2 = iVar3 + -1 <= iVar5;
    iVar5 = iVar5 + 1;
    if (bVar2) break;
    pPUHead = (SGDPROCUNITHEADER *)*piVar4;
    piVar4 = piVar4 + 1;
    SgChangeSTUnitPrim__FP17SGDPROCUNITHEADERiff(pPUHead,bVar1 & 1,fAddS,fAddT);
  }
  return;
}

static void SetVertexColorPresetMeshData(SGDPROCUNITHEADER *pPUHead, int iVertexNo, float *vSetColor) {
	static char __FUNCTION__[29] = {
		/* [0] = */ 83,
		/* [1] = */ 101,
		/* [2] = */ 116,
		/* [3] = */ 86,
		/* [4] = */ 101,
		/* [5] = */ 114,
		/* [6] = */ 116,
		/* [7] = */ 101,
		/* [8] = */ 120,
		/* [9] = */ 67,
		/* [10] = */ 111,
		/* [11] = */ 108,
		/* [12] = */ 111,
		/* [13] = */ 114,
		/* [14] = */ 80,
		/* [15] = */ 114,
		/* [16] = */ 101,
		/* [17] = */ 115,
		/* [18] = */ 101,
		/* [19] = */ 116,
		/* [20] = */ 77,
		/* [21] = */ 101,
		/* [22] = */ 115,
		/* [23] = */ 104,
		/* [24] = */ 68,
		/* [25] = */ 97,
		/* [26] = */ 116,
		/* [27] = */ 97,
		/* [28] = */ 0
	};
	int mtype;
	int gloops;
	int iVertexCount;
	_SGDVUMESHCOLORDATA *pVMCD;
	int j;
	int loops;
	VECTOR3 &ravColor[1];
	int i;
	int j;
	int loops;
	VECTOR3 &ravColor[1];
	int i;
	
  byte bVar1;
  short sVar2;
  uint *puVar3;
  float *pfVar4;
  uint uVar5;
  SGDPROCUNITHEADER **prim;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  
  sVar2 = *(short *)((int)&pPUHead[1].iCategory + 2);
  uVar10 = (uint)(pPUHead->field2_0x8).VUVNDesc.aucPad[0];
  bVar1 = (pPUHead->field2_0x8).VUVNDesc.ucVectorType;
  if (sVar2 == 0) {
    return;
  }
  prim = &pPUHead->pNext + sVar2;
  if (bVar1 == 0x12) {
LAB_001bb368:
    if (iVertexNo < 0) {
      iVar8 = 0;
      if (uVar10 != 0) {
        do {
          puVar3 = GetNextUnpackAddr__FPUi((uint *)prim);
          bVar1 = *(byte *)((int)puVar3 + 2);
          pfVar4 = (float *)(puVar3 + 1);
          for (uVar5 = (uint)bVar1; uVar5 != 0; uVar5 = uVar5 - 1) {
            *pfVar4 = *vSetColor;
            pfVar4[1] = vSetColor[1];
            pfVar4[2] = vSetColor[2];
            pfVar4 = pfVar4 + 3;
          }
          iVar8 = iVar8 + 1;
          prim = (SGDPROCUNITHEADER **)(puVar3 + (uint)bVar1 * 3 + 1);
        } while (iVar8 < (int)uVar10);
      }
    }
    else {
      iVar7 = 0;
      iVar8 = 0;
      if (uVar10 != 0) {
        do {
          puVar3 = GetNextUnpackAddr__FPUi((uint *)prim);
          bVar1 = *(byte *)((int)puVar3 + 2);
          iVar9 = iVar8 + (uint)bVar1;
          if ((iVertexNo <= (int)(iVar8 + (uint)bVar1)) && (iVar6 = 0, iVar9 = iVar8, bVar1 != 0)) {
            do {
              if (iVar8 == iVertexNo) {
                pfVar4 = (float *)(puVar3 + iVar6 * 3 + 1);
                *pfVar4 = *vSetColor;
                pfVar4[1] = vSetColor[1];
                pfVar4[2] = vSetColor[2];
                return;
              }
              iVar6 = iVar6 + 1;
              iVar8 = iVar8 + 1;
              iVar9 = iVar8;
            } while (iVar6 < (int)(uint)bVar1);
          }
          prim = (SGDPROCUNITHEADER **)(puVar3 + (uint)bVar1 * 2 + (uint)bVar1 + 1);
          iVar7 = iVar7 + 1;
          iVar8 = iVar9;
        } while (iVar7 < (int)uVar10);
      }
    }
  }
  else {
    if (bVar1 < 0x13) {
      if (bVar1 == 0x10) goto LAB_001bb368;
    }
    else if (bVar1 == 0x32) goto LAB_001bb368;
    _SetLineInfo__FPCciT0T0("gra3dSGD.c",0xae6,"SetVertexColorPresetMeshData",&DAT_003f12c0);
    g3ddbgWarning__FbPCce(false,"illegal type(mtype:%d)");
  }
  return;
}

static void SgSetVertexColorUnitPrimP(SGDPROCUNITHEADER *pPUHead, int iVertexNo, float *vSetColor) {
  int iVar1;
  
  if (pPUHead != (SGDPROCUNITHEADER *)0x0) {
    iVar1 = pPUHead->iCategory;
    while( true ) {
      if (iVar1 == 1) {
        SetVertexColorPresetMeshData__FP17SGDPROCUNITHEADERiPf(pPUHead,iVertexNo,vSetColor);
        pPUHead = pPUHead->pNext;
      }
      else {
        pPUHead = pPUHead->pNext;
      }
      if (pPUHead == (SGDPROCUNITHEADER *)0x0) break;
      iVar1 = pPUHead->iCategory;
    }
  }
  return;
}

void gra3dSetVertexColorPreset(SGDFILEHEADER *pSGDTop, int iVertexNo, float *vSetColor) {
	static char __FUNCTION__[26] = {
		/* [0] = */ 103,
		/* [1] = */ 114,
		/* [2] = */ 97,
		/* [3] = */ 51,
		/* [4] = */ 100,
		/* [5] = */ 83,
		/* [6] = */ 101,
		/* [7] = */ 116,
		/* [8] = */ 86,
		/* [9] = */ 101,
		/* [10] = */ 114,
		/* [11] = */ 116,
		/* [12] = */ 101,
		/* [13] = */ 120,
		/* [14] = */ 67,
		/* [15] = */ 111,
		/* [16] = */ 108,
		/* [17] = */ 111,
		/* [18] = */ 114,
		/* [19] = */ 80,
		/* [20] = */ 114,
		/* [21] = */ 101,
		/* [22] = */ 115,
		/* [23] = */ 101,
		/* [24] = */ 116,
		/* [25] = */ 0
	};
	int i;
	
  SGDPROCUNITHEADER *pPUHead;
  bool bVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  if (pSGDTop == (SGDFILEHEADER *)0x0) {
    _SetLineInfo__FPCciT0T0("gra3dSGD.c",0xb02,"gra3dSetVertexColorPreset",s_pSGDTop_003f12f0);
    g3ddbgWarning__FbPCce(false,"pSGDTop is NULL");
    g3ddbgPrintf__FPCce("[G3DRETURN]%s(%d)(%s):%s\n");
    return;
  }
  if (pSGDTop->uiVersionId != 0x1050) {
    _SetLineInfo__FPCciT0T0
              ("gra3dSGD.c",0xb06,"gra3dSetVertexColorPreset",
               "pSGDTop->uiVersionId == SGD_VALID_VERSIONID");
    g3ddbgWarning__FbPCce(pSGDTop->uiVersionId == 0x1050,"Invalid SGD File");
    if (pSGDTop->uiVersionId != 0x1050) {
      g3ddbgPrintf__FPCce("[G3DRETURN]%s(%d)(%s):%s\n");
      return;
    }
  }
  piVar3 = pSGDTop->aiPad;
  gra3dsgdSetData__FP13SGDFILEHEADER(pSGDTop);
  iVar4 = 1;
  while( true ) {
    iVar2 = gra3dsgdGetNumBlock__Fv();
    bVar1 = iVar2 + -1 <= iVar4;
    iVar4 = iVar4 + 1;
    if (bVar1) break;
    pPUHead = (SGDPROCUNITHEADER *)*piVar3;
    piVar3 = piVar3 + 1;
    SgSetVertexColorUnitPrimP__FP17SGDPROCUNITHEADERiPf(pPUHead,iVertexNo,vSetColor);
  }
  return;
}

static void void G3DLIGHTTYPE::_SelectLightByType<4>(G3DLIGHTTYPE type, float *avBB[4]) {
	int aiIndex[4];
	int j;
	int iIndex;
	
  int *piVar1;
  uint iIndex;
  int aiIndex [4];
  
  piVar1 = aiIndex;
  iIndex = 0;
  _CalcValidLightIndexByType__H1i4_Pi12G3DLIGHTTYPEPA3_Cf_v(aiIndex,type,avBB);
  gra3dEnableLightType__F12G3DLIGHTTYPEi(type,0);
  gra3dSetValidLightId__FiUii(type,0,0x7fffffff);
  gra3dSetValidLightId__FiUii(type,1,0x7fffffff);
  gra3dSetValidLightId__FiUii(type,2,0x7fffffff);
  while( true ) {
    piVar1 = piVar1 + 1;
    if (-1 < aiIndex[0]) {
      gra3dSetValidLightId__FiUii(type,iIndex,aiIndex[0]);
      gra3dEnableLightType__F12G3DLIGHTTYPEi(type,1);
    }
    iIndex = iIndex + 1;
    if (2 < (int)iIndex) break;
    aiIndex[0] = *piVar1;
  }
  return;
}

static void void _CalcValidLightIndexByType<4>(int *aiRet, G3DLIGHTTYPE type, float *avBB[4]) {
	fixed_array<_LIGHTCOMPAREDATA,4> aLCD;
	int i;
	int iId;
	float colscale;
	int i;
	
  int iVar1;
  G3DLIGHT *pLight;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  undefined extraout_vf1 [16];
  undefined auVar7 [16];
  undefined auVar8 [16];
  fixed_array<_LIGHTCOMPAREDATA,4> aLCD;
  
                    /* inlined from ctl/fixed_array.h */
  iVar6 = 0x13;
                    /* end of inlined section */
                    /* end of inlined section */
                    /* inlined from ctl/fixed_array.h */
  fill__H2ZP17_LIGHTCOMPAREDATAZ17_LIGHTCOMPAREDATA_X01X01RCX11_v(&aLCD,&stack0xffffffc0,0x3f1308);
                    /* inlined from gra3dTypes.h */
  if (type != G3DLIGHT_POINT) {
    if ((int)type < 2) {
      iVar6 = 3;
      if (type != G3DLIGHT_DIRECTIONAL) {
        iVar6 = 0;
      }
    }
    else {
      iVar6 = 0x11;
      if (type != G3DLIGHT_SPOT) {
        iVar6 = 0;
      }
    }
  }
  iVar3 = 3;
  if (type != G3DLIGHT_POINT) {
    if ((int)type < 2) {
      iVar3 = 0;
      if (type == G3DLIGHT_DIRECTIONAL) goto LAB_001bb860;
    }
    else {
      iVar3 = 0x16;
      if (type == G3DLIGHT_SPOT) goto LAB_001bb860;
    }
    iVar3 = 0x7fffffff;
  }
LAB_001bb860:
                    /* end of inlined section */
  iVar4 = 0;
  if (iVar6 != 0) {
    iVar2 = iVar3;
    do {
      iVar1 = gra3dIsLightEnable__Fi(iVar2);
      if (iVar1 != 0) {
        pLight = gra3dGetLightRef__Fi(iVar2);
        iVar2 = g3dIsBBLightingup__FPC8G3DLIGHTPA3_Cf(pLight,avBB);
        if (iVar2 != 0) {
                    /* inlined from g3dxVu0.h */
          auVar7 = _lqc2(*(undefined (*) [16])pLight->vDiffuse);
          _vaddabc(auVar7,auVar7);
          auVar7 = _vmaddbc(extraout_vf1,auVar7);
          _qmfc2(auVar7._0_4_);
          auVar7 = _lqc2(*(undefined (*) [16])pLight->vPosition);
          auVar8 = _lqc2((undefined  [16])avBB[8]);
          auVar7 = _vsub(auVar7,auVar8);
          auVar7 = _vmul(auVar7,auVar7);
          _vaddabc(auVar7,auVar7);
          _vmaddbc(extraout_vf1,auVar7);
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
      }
      iVar4 = iVar4 + 1;
      iVar2 = iVar3 + iVar4;
    } while (iVar4 < iVar6);
  }
  piVar5 = &aLCD.field0_0x0.m_aData[0].iIndex;
  iVar6 = 0;
  do {
                    /* inlined from ctl/fixed_array.h */
                    /* end of inlined section */
    iVar3 = iVar6 + 1;
                    /* inlined from ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Z17_LIGHTCOMPAREDATA_UiUi_PX01(iVar6,4);
    iVar6 = *piVar5;
                    /* end of inlined section */
    piVar5 = piVar5 + 2;
                    /* inlined from ctl/fixed_array.h */
    *aiRet = iVar6;
    aiRet = aiRet + 1;
    iVar6 = iVar3;
                    /* end of inlined section */
  } while (iVar3 < 3);
  return;
}

void void fill<_LIGHTCOMPAREDATA *, _LIGHTCOMPAREDATA>(_LIGHTCOMPAREDATA *__first, _LIGHTCOMPAREDATA *__last, _LIGHTCOMPAREDATA &__value) {
  g3ddbgAssert__FbPCce(false,str_735);
  return (type_info *)dp;
}

static void void _SortLightCompareData<4>(fixed_array<_LIGHTCOMPAREDATA,4> &raLCD, float fMaxPower, int iIndex) {
	int j;
	int k;
	
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  ulong *puVar4;
  ulong uVar5;
  int iVar6;
  _LIGHTCOMPAREDATA *p_Var7;
  int iVar8;
  _LIGHTCOMPAREDATA *p_Var9;
  int iVar10;
  undefined auStack_50 [16];
  
  iVar10 = 0;
  p_Var9 = (_LIGHTCOMPAREDATA *)raLCD;
  do {
                    /* inlined from ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Z17_LIGHTCOMPAREDATA_UiUi_PX01(iVar10,4);
                    /* end of inlined section */
    if (((fixed_array_base<_LIGHTCOMPAREDATA,4,_LIGHTCOMPAREDATA[4]> *)&p_Var9->fMaxPower)->m_aData
        [0].fMaxPower < fMaxPower) {
      if (iVar10 < 3) {
        p_Var7 = (raLCD->field0_0x0).m_aData + 3;
        iVar8 = 3;
        do {
                    /* inlined from ctl/fixed_array.h */
          iVar6 = iVar8 + -1;
          _fixed_array_verifyrange__H1Z17_LIGHTCOMPAREDATA_UiUi_PX01(iVar8,4);
          uVar5 = _fixed_array_verifyrange__H1Z17_LIGHTCOMPAREDATA_UiUi_PX01(iVar6,4);
                    /* end of inlined section */
          puVar1 = (undefined *)((int)&p_Var7->iIndex + 3);
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_algobase.h */
          uVar2 = (uint)puVar1 & 7;
          uVar3 = (uint)p_Var7 & 7;
          auStack_50._0_8_ =
               (*(long *)(puVar1 + -uVar2) << (7 - uVar2) * 8 |
               uVar5 & 0xffffffffffffffffU >> (uVar2 + 1) * 8) & -1L << (8 - uVar3) * 8 |
               *(ulong *)((int)p_Var7 - uVar3) >> uVar3 * 8;
          puVar1 = auStack_50 + 7;
          uVar2 = (uint)puVar1 & 7;
          *(ulong *)(puVar1 + -uVar2) =
               *(ulong *)(puVar1 + -uVar2) & -1L << (uVar2 + 1) * 8 |
               (ulong)auStack_50._0_8_ >> (7 - uVar2) * 8;
          puVar1 = (undefined *)((int)&p_Var7[-1].iIndex + 3);
          uVar2 = (uint)puVar1 & 7;
          uVar3 = (uint)(p_Var7 + -1) & 7;
          uVar5 = (*(long *)(puVar1 + -uVar2) << (7 - uVar2) * 8 |
                  auStack_50._0_8_ & 0xffffffffffffffffU >> (uVar2 + 1) * 8) &
                  -1L << (8 - uVar3) * 8 | *(ulong *)((int)(p_Var7 + -1) - uVar3) >> uVar3 * 8;
          puVar1 = (undefined *)((int)&p_Var7->iIndex + 3);
          uVar2 = (uint)puVar1 & 7;
          puVar4 = (ulong *)(puVar1 + -uVar2);
          *puVar4 = *puVar4 & -1L << (uVar2 + 1) * 8 | uVar5 >> (7 - uVar2) * 8;
          uVar2 = (uint)p_Var7 & 7;
          *(ulong *)((int)p_Var7 - uVar2) =
               uVar5 << uVar2 * 8 |
               *(ulong *)((int)p_Var7 - uVar2) & 0xffffffffffffffffU >> (8 - uVar2) * 8;
          puVar1 = (undefined *)((int)&p_Var7[-1].iIndex + 3);
          uVar2 = (uint)puVar1 & 7;
          puVar4 = (ulong *)(puVar1 + -uVar2);
          *puVar4 = *puVar4 & -1L << (uVar2 + 1) * 8 | (ulong)auStack_50._0_8_ >> (7 - uVar2) * 8;
          uVar2 = (uint)(p_Var7 + -1) & 7;
          puVar4 = (ulong *)((int)(p_Var7 + -1) - uVar2);
          *puVar4 = auStack_50._0_8_ << uVar2 * 8 | *puVar4 & 0xffffffffffffffffU >> (8 - uVar2) * 8
          ;
          p_Var7 = p_Var7 + -1;
          iVar8 = iVar6;
                    /* end of inlined section */
        } while (iVar10 < iVar6);
      }
      p_Var9->iIndex = iIndex;
      ((fixed_array_base<_LIGHTCOMPAREDATA,4,_LIGHTCOMPAREDATA[4]> *)&p_Var9->fMaxPower)->m_aData[0]
      .fMaxPower = fMaxPower;
      return;
    }
    iVar10 = iVar10 + 1;
    p_Var9 = p_Var9 + 1;
  } while (iVar10 < 3);
  return;
}

_LIGHTCOMPAREDATA* _LIGHTCOMPAREDATA * _fixed_array_verifyrange<_LIGHTCOMPAREDATA>(size_t v, size_t _max) {
  g3ddbgAssert__FbPCce(false,str_735);
  return (type_info *)dp;
}

void _CalcWeightedVertexBuffer(float *dp, float *v) {
  g3ddbgAssert__FbPCce(false,str_735);
  return (type_info *)dp;
}

void _CalcWeightedNormalBuffer(float *dp, float *v) {
  g3ddbgAssert__FbPCce(false,str_735);
  return (type_info *)dp;
}

type_info& _LIGHTCOMPAREDATA type_info function() {
  g3ddbgAssert__FbPCce(false,str_735);
  return (type_info *)dp;
}
