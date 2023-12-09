// STATUS: NOT STARTED

#include "gra3dSGDData.h"

static int s_bEnableOptimizeTexture = 0;
unsigned char G3DLIGHT type_info node[8];

static void _fixed_array_assert(char *strType, size_t v0, size_t v1) {
	static char *str = 0x3b7a00;
	
  g3ddbgAssert__FbPCce(false,str_735);
  return (type_info *)arraytop;
}

static void** void * * _fixed_array_verifyrange<void *>(size_t v, size_t _max) {
  if (_max <= v) {
    __tf8G3DLIGHT((SGDMATERIAL *)s_void__003f1340,(SGDMATERIAL *)_max);
  }
  return (void **)0x0;
}

static char** char * * _fixed_array_verifyrange<char *>(size_t v, size_t _max) {
  if (_max <= v) {
    __tf8G3DLIGHT((SGDMATERIAL *)s_char__003f1348,(SGDMATERIAL *)_max);
  }
  return (char **)0x0;
}

static unsigned int** unsigned int * * _fixed_array_verifyrange<unsigned int *>(size_t v, size_t _max) {
  if (_max <= v) {
    __tf8G3DLIGHT((SGDMATERIAL *)"unsigned int*",(SGDMATERIAL *)_max);
  }
  return (uint **)0x0;
}

static void sgdClearCoordCalcFlgParents(SGDCOORDINATE *pCoord) {
  SGDCOORDINATE *pCoord_00;
  
  pCoord_00 = pCoord->pParent;
  if (pCoord_00 != (SGDCOORDINATE *)0x0) {
    if (pCoord_00 == (SGDCOORDINATE *)&_heap_size) {
      pCoord->bCalc = 0;
      return;
    }
    sgdClearCoordCalcFlgParents__FP13SGDCOORDINATE(pCoord_00);
  }
  pCoord->bCalc = 0;
  return;
}

static void RebuildTRI2Files(SGDPROCUNITHEADER *pPUHead) {
	static char __FUNCTION__[17] = {
		/* [0] = */ 82,
		/* [1] = */ 101,
		/* [2] = */ 98,
		/* [3] = */ 117,
		/* [4] = */ 105,
		/* [5] = */ 108,
		/* [6] = */ 100,
		/* [7] = */ 84,
		/* [8] = */ 82,
		/* [9] = */ 73,
		/* [10] = */ 50,
		/* [11] = */ 70,
		/* [12] = */ 105,
		/* [13] = */ 108,
		/* [14] = */ 101,
		/* [15] = */ 115,
		/* [16] = */ 0
	};
	SGDTEXTUREIMAGEDESC &rTexDesc;
	TRI2SIZEDATA TRI2SizeData;
	SGDTRI2FILEHEADER *pTRI2Head;
	int i;
	
  ushort uVar1;
  SGDTRI2FILEHEADER *pTRI2HeadTop;
  SGDPROCUNITHEADER____unnamed_8 *pSVar2;
  int iVar3;
  TRI2SIZEDATA TRI2SizeData;
  
  if (s_bEnableOptimizeTexture != 0) {
    pSVar2 = &pPUHead->field2_0x8;
    memset(&TRI2SizeData,0,0x14);
    TRI2SizeData.uiMinAddress = 0xffffffff;
    if (2 < (pSVar2->VUMeshDesc).iTagSize) {
      iVar3 = 0;
      _SetPREVIOUSTRI2PRIM__FP17SGDPROCUNITHEADER((SGDPROCUNITHEADER *)0x0);
                    /* inlined from g3dUtil.h */
                    /* end of inlined section */
                    /* inlined from g3dUtil.h */
      pTRI2HeadTop = (SGDTRI2FILEHEADER *)
                     ((int)&pPUHead[1].pNext + (pPUHead->field2_0x8).VUMaterialDesc.iPad);
                    /* end of inlined section */
      gra3dLoadTRI2FileToVRAM__FiPC17SGDTRI2FILEHEADERi
                ((pSVar2->VUMeshDesc).iTagSize,pTRI2HeadTop,1);
      if (0 < (pSVar2->VUMeshDesc).iTagSize) {
        do {
                    /* inlined from sgd_types.h */
          uVar1 = *(ushort *)&pTRI2HeadTop->uiVif1Code_DIRECT;
                    /* end of inlined section */
          gra3dGetTRI2SizeData__FP12TRI2SIZEDATAPC12TRI2SIZEDATAPC17SGDTRI2FILEHEADER
                    (&TRI2SizeData,&TRI2SizeData,pTRI2HeadTop);
                    /* inlined from g3dUtil.h */
                    /* end of inlined section */
          iVar3 = iVar3 + 1;
                    /* inlined from g3dUtil.h */
                    /* end of inlined section */
          pTRI2HeadTop = (SGDTRI2FILEHEADER *)(&pTRI2HeadTop->gsli + (uint)uVar1 * 0x10);
        } while (iVar3 < (pSVar2->VUMeshDesc).iTagSize);
      }
      gra3dSetGsRegister__Flli(0,0x3f);
      g3dDmaFlush__Fv();
      TRI2SizeData.uiPageSize =
           gra3dCalcVRAMPageSize__FUi(TRI2SizeData.uiMaxAddress - TRI2SizeData.uiMinAddress);
      if ((uint)((int)pPUHead->pNext - (int)pPUHead) < TRI2SizeData.uiPageSize * 0x2000 + 0x180) {
        _SetLineInfo__FPCciT0T0
                  ("gra3dSGDData.c",0x81,"RebuildTRI2Files",
                   "(( (u_int)pPUHead->pNext - (u_int)pPUHead ) >= TRI2SizeData.uiPageSize*1024*8 + 16*24)"
                  );
        g3ddbgWarning__FbPCce
                  (TRI2SizeData.uiPageSize * 0x2000 + 0x180 <=
                   (uint)((int)pPUHead->pNext - (int)pPUHead),"Not Enough Memory %d %d\n");
        g3ddbgPrintf__FPCce("[G3DRETURN]%s(%d)(%s):%s\n");
      }
      else {
                    /* inlined from g3dUtil.h */
                    /* end of inlined section */
                    /* inlined from g3dUtil.h */
                    /* end of inlined section */
        iVar3 = gra3dGenerateTRI2FileFromVRAM__FP17SGDTRI2FILEHEADERPC12TRI2SIZEDATA
                          ((SGDTRI2FILEHEADER *)
                           ((int)&pPUHead[1].pNext + (pPUHead->field2_0x8).VUMaterialDesc.iPad),
                           &TRI2SizeData);
        (pSVar2->VUMeshDesc).iTagSize = iVar3;
      }
    }
  }
  return;
}

static void MappingCoordinateData(u_int *intpointer, HeaderSection *hs) {
  return;
}

static void MappingVUVNDataPreset(u_int *intpointer, int mtype, int gloops, int hsize) {
  return;
}

static void MappingVUVNData(SGDPROCUNITHEADER *pPUHead, SGDFILEHEADER *pSGDHead) {
	SGDVECTORINFO *pVectorInfo;
	float *vp[4];
	float *np[4];
	SGDVUVNDESC &rVUVNDesc;
	_VECTORDATA *pVectorData;
	int i;
	int i;
	int i;
	
  byte bVar1;
  ushort uVar2;
  SGDVECTORINFO *pSVar3;
  _VERTEXLIST *p_Var4;
  float (*pafVar5) [4];
  float (*pafVar6) [4];
  long lVar7;
  SGDPROCUNITHEADER *pSVar8;
  SGDPROCUNITHEADER____unnamed_8 *pSVar9;
  
  pSVar8 = pPUHead + 3;
  pSVar9 = &pPUHead->field2_0x8;
  bVar1 = (pPUHead->field2_0x8).VUVNDesc.ucVectorType;
  pSVar3 = pSGDHead->pVectorInfo;
  if (bVar1 != 1) {
    if (bVar1 < 2) {
      if (bVar1 == 0) {
        uVar2 = (pSVar9->VUVNDesc).sNumVertex;
        lVar7 = 0;
        pafVar5 = pSVar3->aAddress[0].pvNormal;
        pafVar6 = pSVar3->aAddress[0].pvVertex;
        if ((long)(short)uVar2 < 1) {
          return;
        }
        do {
                    /* inlined from g3dUtil.h */
                    /* end of inlined section */
          lVar7 = (long)((int)lVar7 + 1);
                    /* inlined from g3dUtil.h */
                    /* end of inlined section */
                    /* inlined from g3dUtil.h */
          pSVar8->pNext = (SGDPROCUNITHEADER *)pafVar6[(int)pSVar8->pNext];
          pSVar8->iCategory = (int)pafVar5[pSVar8->iCategory];
          pSVar8 = (SGDPROCUNITHEADER *)&pSVar8->field2_0x8;
                    /* end of inlined section */
        } while (lVar7 < (short)uVar2);
        return;
      }
      p_Var4 = pSVar3->aAddress[2].pVertexList;
    }
    else {
      p_Var4 = pSVar3->aAddress[2].pVertexList;
    }
    if (p_Var4 == (_VERTEXLIST *)0x0) {
      lVar7 = (long)(short)(pSVar9->VUVNDesc).sNumVertex;
      pafVar5 = pSVar3->aAddress[2].pvNormal;
      pafVar6 = pSVar3->aAddress[2].pvVertex;
      if (0 < lVar7) {
        do {
                    /* inlined from g3dUtil.h */
                    /* end of inlined section */
          lVar7 = (long)((int)lVar7 + -1);
                    /* inlined from g3dUtil.h */
          pSVar8->pNext = (SGDPROCUNITHEADER *)pafVar6[(int)pSVar8->pNext * 2];
          pSVar8->iCategory = (int)pafVar5[pSVar8->iCategory * 2];
                    /* end of inlined section */
          pSVar8 = (SGDPROCUNITHEADER *)&pSVar8->field2_0x8;
        } while (lVar7 != 0);
      }
    }
    else {
      pafVar5 = _GetGlobalVertexBuffer__Fv();
      pafVar6 = _GetGlobalNormalBuffer__Fv();
      uVar2 = (pSVar9->VUVNDesc).sNumVertex;
      lVar7 = 0;
      if (0 < (long)(short)uVar2) {
        do {
                    /* inlined from g3dUtil.h */
                    /* end of inlined section */
          lVar7 = (long)((int)lVar7 + 1);
                    /* inlined from g3dUtil.h */
                    /* end of inlined section */
                    /* inlined from g3dUtil.h */
          pSVar8->pNext = (SGDPROCUNITHEADER *)pafVar5[(int)pSVar8->pNext];
          pSVar8->iCategory = (int)pafVar6[pSVar8->iCategory];
          pSVar8 = (SGDPROCUNITHEADER *)&pSVar8->field2_0x8;
                    /* end of inlined section */
        } while (lVar7 < (short)uVar2);
      }
    }
  }
  return;
}

static void MappingMeshData(SGDPROCUNITHEADER *pPUHeader, u_int *vuvnprim, SGDFILEHEADER *pSGDHead) {
	int mtype;
	int gloops;
	
  byte bVar1;
  
  bVar1 = (pPUHeader->field2_0x8).VUVNDesc.ucVectorType;
  if ((bVar1 & 0x10) == 0) {
    if ((bVar1 & 0xc0) == 0) {
      MappingVUVNData__FP17SGDPROCUNITHEADERP13SGDFILEHEADER((SGDPROCUNITHEADER *)vuvnprim,pSGDHead)
      ;
    }
  }
  else if ((bVar1 & 0x40) == 0) {
    MappingVUVNDataPreset__FPUiiii
              (vuvnprim,(uint)bVar1,(uint)(pPUHeader->field2_0x8).VUVNDesc.aucPad[0],0);
    return;
  }
  return;
}

static void MappingVertexList(_VERTEXLIST *pVL, SGDVECTORINFO *pVectorInfo) {
	static char __FUNCTION__[18] = {
		/* [0] = */ 77,
		/* [1] = */ 97,
		/* [2] = */ 112,
		/* [3] = */ 112,
		/* [4] = */ 105,
		/* [5] = */ 110,
		/* [6] = */ 103,
		/* [7] = */ 86,
		/* [8] = */ 101,
		/* [9] = */ 114,
		/* [10] = */ 116,
		/* [11] = */ 101,
		/* [12] = */ 120,
		/* [13] = */ 76,
		/* [14] = */ 105,
		/* [15] = */ 115,
		/* [16] = */ 116,
		/* [17] = */ 0
	};
	int size;
	int vnnum;
	int i;
	
  int iVar1;
  int iVar2;
  short *psVar3;
  short *psVar4;
  int iVar5;
  int iVar6;
  
  iVar5 = 0;
  iVar6 = 0;
  iVar2 = pVL->iNumList;
  if (0 < iVar2) {
    psVar4 = &pVL->aList[0].vOff;
    psVar3 = &pVL->aList[0].usNumVector;
    do {
      iVar1 = *(int *)psVar3;
      psVar3 = psVar3 + 4;
      iVar5 = iVar5 + 1;
      *psVar4 = (short)iVar6;
      iVar6 = iVar6 + iVar1;
      psVar4 = psVar4 + 4;
    } while (iVar5 < iVar2);
  }
  iVar2 = _GetGlobalBufferSize__Fv();
  if (iVar2 < iVar6) {
    _GetGlobalBufferSize__Fv();
    printf("VNBuffer Over size %d needs %d\n");
    _SetLineInfo__FPCciT0T0("gra3dSGDData.c",0x16e,"MappingVertexList",&DAT_003f1358);
    g3ddbgAssert__FbPCce(false,&DAT_003f1360);
    pVectorInfo->aAddress[0].pVertexList = (_VERTEXLIST *)0x0;
    pVectorInfo->aAddress[2].pVertexList = (_VERTEXLIST *)0x0;
  }
  return;
}

static void RebuildTRI2FilesInverse(SGDPROCUNITHEADER *pPUHead) {
  return;
}

static void MappingCoordinateDataInverse(SGDPROCUNITHEADER *intpointer, SGDFILEHEADER *hs) {
  return;
}

static void MappingVUVNDataInverse(SGDPROCUNITHEADER *pPUHead, SGDFILEHEADER *pSGDHead) {
  return;
}

static void MappingVUVNDataPresetInverse(u_int *intpointer, int mtype, int gloops, int hsize) {
  return;
}

static void MappingMeshDataInverse(SGDPROCUNITHEADER *pPUHeader, u_int *vuvnprim, SGDFILEHEADER *pSGDHead) {
	int mtype;
	int gloops;
	
  byte bVar1;
  
  bVar1 = (pPUHeader->field2_0x8).VUVNDesc.ucVectorType;
  if ((bVar1 & 0x10) == 0) {
    if ((bVar1 & 0xc0) == 0) {
      MappingVUVNDataInverse__FP17SGDPROCUNITHEADERP13SGDFILEHEADER
                ((SGDPROCUNITHEADER *)vuvnprim,pSGDHead);
    }
  }
  else if ((bVar1 & 0x40) == 0) {
    MappingVUVNDataPresetInverse__FPUiiii
              (vuvnprim,(uint)bVar1,(uint)(pPUHeader->field2_0x8).VUVNDesc.aucPad[0],0);
    return;
  }
  return;
}

static void MappingVertexListInverse(_VERTEXLIST *pVL, SGDVECTORINFO *pVectorInfo) {
  return;
}

void sgdRemap(SGDFILEHEADER *pSGDHead) {
	static char __FUNCTION__[9] = {
		/* [0] = */ 115,
		/* [1] = */ 103,
		/* [2] = */ 100,
		/* [3] = */ 82,
		/* [4] = */ 101,
		/* [5] = */ 109,
		/* [6] = */ 97,
		/* [7] = */ 112,
		/* [8] = */ 0
	};
	SGDPROCUNITHEADER **apProcUnitHead;
	void *p0;
	void *p1;
	unsigned int i;
	SGDCOORDINATE &rCoord;
	int j;
	unsigned int i;
	SGDVECTORADDRESS &rVA;
	unsigned int i;
	SGDPROCUNITHEADER *&rpPH;
	unsigned int i;
	u_int *vuvnprim;
	SGDPROCUNITHEADER *pPUHead;
	
  SGDMATERIAL *pSVar1;
  int iVar2;
  float (*pafVar3) [4];
  _VERTEXLIST *p_Var4;
  SGDMATERIAL *pSVar5;
  int iVar6;
  SGDPROCUNITHEADER *pSVar7;
  uint uVar8;
  uint uVar9;
  SGDPROCUNITHEADER *pSVar10;
  SGDVECTORINFO *pSVar11;
  SGDCOORDINATE *pSVar12;
  uint uVar13;
  uint *puVar14;
  SGDVECTORINFO *pVectorInfo;
  SGDCOORDINATE *pSVar15;
  SGDPROCUNITHEADER *vuvnprim;
  
  if (pSGDHead == (SGDFILEHEADER *)0x0) {
    _SetLineInfo__FPCciT0T0("gra3dSGDData.c",0x26e,"sgdRemap","pSGDHead");
    g3ddbgWarning__FbPCce(false,&DAT_003f1360);
    g3ddbgPrintf__FPCce("[G3DRETURN]%s(%d)(%s):%s\n");
    return;
  }
  if (pSGDHead->uiVersionId != 0x1050) {
    _SetLineInfo__FPCciT0T0
              ("gra3dSGDData.c",0x271,"sgdRemap","pSGDHead->uiVersionId == SGD_VALID_VERSIONID");
    g3ddbgWarning__FbPCce(pSGDHead->uiVersionId == 0x1050,&DAT_003f1360);
    if (pSGDHead->uiVersionId != 0x1050) {
      g3ddbgPrintf__FPCce("[G3DRETURN]%s(%d)(%s):%s\n");
      return;
    }
  }
  if (pSGDHead->ucMapFlag != '\0') {
    return;
  }
  pSVar15 = pSGDHead->pCoord;
  pSGDHead->ucMapFlag = '\x01';
  if ((pSVar15 < (SGDCOORDINATE *)0x30000000) && (pSVar15 != (SGDCOORDINATE *)0x0)) {
                    /* inlined from g3dUtil.h */
    pSGDHead->pCoord =
         (SGDCOORDINATE *)((int)pSGDHead->apProcUnitHead + (int)pSVar15->matCoord[-2] + 8);
  }
                    /* end of inlined section */
  pSVar1 = pSGDHead->pMaterial;
  if (pSVar1 < (SGDMATERIAL *)0x30000000) {
    pSVar5 = (SGDMATERIAL *)((int)pSGDHead->apProcUnitHead + (int)(pSVar1->strTexName + -0x1c));
                    /* end of inlined section */
                    /* end of inlined section */
    if ((pSVar1 != (SGDMATERIAL *)0x0) && (pSGDHead->pMaterial = pSVar5, ((uint)pSVar5 & 0xf) != 0))
    {
      _SetLineInfo__FPCciT0T0
                ("gra3dSGDData.c",0x285,"sgdRemap","!((u_int)pSGDHead->pMaterial & 0xf)");
      g3ddbgAssert__FbPCce(((uint)pSGDHead->pMaterial & 0xf) == 0,&DAT_003b7c60);
    }
    pSVar15 = pSGDHead->pCoord;
  }
  else {
    pSVar15 = pSGDHead->pCoord;
  }
  if (pSVar15 == (SGDCOORDINATE *)0x0) {
    pSVar11 = pSGDHead->pVectorInfo;
  }
  else {
    uVar8 = pSGDHead->uiNumBlock;
    uVar13 = 0;
    if (uVar8 != 1) {
      iVar6 = 0;
      do {
        iVar2 = *(int *)((int)pSVar15->vRot + iVar6 + 0x10);
        if ((int)(uVar8 - 2) < iVar2) {
          _SetLineInfo__FPCciT0T0
                    ("gra3dSGDData.c",0x294,"sgdRemap","(int)j <= (int)pSGDHead->uiNumBlock - 2");
          g3ddbgAssert__FbPCce(iVar2 <= (int)(pSGDHead->uiNumBlock - 2),&DAT_003b7ca8);
        }
        if (iVar2 < 0) {
          *(undefined4 *)((int)pSVar15->vRot + iVar6 + 0x10) = 0;
          pSVar12 = (SGDCOORDINATE *)0x0;
        }
        else {
          pSVar12 = *(SGDCOORDINATE **)((int)pSVar15->vRot + iVar6 + 0x10);
          if (pSVar12 < pSVar15) {
            pSVar12 = pSVar15 + iVar2;
            *(SGDCOORDINATE **)((int)pSVar15->vRot + iVar6 + 0x10) = pSVar12;
          }
        }
        if (((uint)pSVar12 & 0xf) != 0) {
          _SetLineInfo__FPCciT0T0("gra3dSGDData.c",0x29e,"sgdRemap","!((int)rCoord.pParent & 0xf)");
          g3ddbgAssert__FbPCce
                    ((*(uint *)((int)pSVar15->vRot + iVar6 + 0x10) & 0xf) == 0,&DAT_003b7d10);
        }
        uVar8 = pSGDHead->uiNumBlock;
        uVar13 = uVar13 + 1;
        iVar6 = iVar6 + 0xe0;
      } while (uVar13 < uVar8 - 1);
    }
    pSVar11 = pSGDHead->pVectorInfo;
  }
  pVectorInfo = (SGDVECTORINFO *)((int)pSGDHead->apProcUnitHead + (int)(pSVar11->aAddress + -2) + 4)
  ;
  if (pSVar11 != (SGDVECTORINFO *)0x0) {
                    /* end of inlined section */
    pSGDHead->pVectorInfo = pVectorInfo;
    if (pVectorInfo == (SGDVECTORINFO *)0x0) {
      _SetLineInfo__FPCciT0T0("gra3dSGDData.c",0x2a9,"sgdRemap","pVectorInfo");
      g3ddbgAssert__FbPCce(false,"pVectorInfo is NULL");
    }
    uVar8 = pVectorInfo->uiNumAddress;
    uVar13 = 0;
    pSVar11 = pVectorInfo;
    if (uVar8 != 0) {
      do {
        uVar9 = pSVar11->aAddress[0].uiSize;
        if ((uVar9 != 0) && (pafVar3 = pSVar11->aAddress[0].pvVertex, pafVar3 != (float (*) [4])0x0)
           ) {
                    /* inlined from g3dUtil.h */
          pSVar11->aAddress[0].pvVertex =
               (float (*) [4])((int)pSGDHead->apProcUnitHead + (int)(*pafVar3 + -6));
        }
        if ((1 < uVar9) && (pafVar3 = pSVar11->aAddress[0].pvNormal, pafVar3 != (float (*) [4])0x0))
        {
                    /* inlined from g3dUtil.h */
          pSVar11->aAddress[0].pvNormal =
               (float (*) [4])((int)pSGDHead->apProcUnitHead + (int)(*pafVar3 + -6));
        }
        if ((2 < uVar9) && (p_Var4 = pSVar11->aAddress[0].pVertexList, p_Var4 != (_VERTEXLIST *)0x0)
           ) {
                    /* inlined from g3dUtil.h */
          pSVar11->aAddress[0].pVertexList =
               (_VERTEXLIST *)((int)pSGDHead->apProcUnitHead + (int)(p_Var4->aList + -4) + 4);
        }
        uVar13 = uVar13 + 1;
        pSVar11 = (SGDVECTORINFO *)&pSVar11->aAddress[0].pVertexList;
      } while (uVar13 < uVar8);
    }
    if (pVectorInfo->aAddress[0].pVertexList != (_VERTEXLIST *)0x0) {
      if (uVar8 != 4) {
        uVar8 = pSGDHead->uiNumBlock;
        goto LAB_001bc48c;
      }
      iVar6 = _GetGlobalBufferSize__Fv();
      if (iVar6 == 0) {
        pVectorInfo->aAddress[0].pVertexList = (_VERTEXLIST *)0x0;
        pVectorInfo->aAddress[1].pVertexList = (_VERTEXLIST *)0x0;
        pVectorInfo->aAddress[2].pVertexList = (_VERTEXLIST *)0x0;
LAB_001bc458:
        p_Var4 = pVectorInfo->aAddress[2].pVertexList;
      }
      else {
        if (pVectorInfo->aAddress[2].pvVertex == (float (*) [4])0x0) {
          if (pVectorInfo->aAddress[2].pvNormal == (float (*) [4])0x0) {
            pVectorInfo->aAddress[2].pVertexList = (_VERTEXLIST *)0x0;
          }
          goto LAB_001bc458;
        }
        p_Var4 = pVectorInfo->aAddress[2].pVertexList;
      }
      pVectorInfo->aAddress[0].pVertexList = (_VERTEXLIST *)0x0;
      if (p_Var4 != (_VERTEXLIST *)0x0) {
        MappingVertexList__FP11_VERTEXLISTP13SGDVECTORINFO(p_Var4,pVectorInfo);
        MappingVertexList__FP11_VERTEXLISTP13SGDVECTORINFO
                  ((_VERTEXLIST *)(p_Var4->aList + p_Var4->iNumList),pVectorInfo);
      }
    }
  }
  uVar8 = pSGDHead->uiNumBlock;
LAB_001bc48c:
  uVar13 = 0;
  if (uVar8 != 0) {
    iVar6 = 0;
    do {
      puVar14 = (uint *)((int)pSGDHead->apProcUnitHead + iVar6);
      uVar9 = *puVar14;
      if ((uVar9 & 0xf) != 0) {
        _SetLineInfo__FPCciT0T0("gra3dSGDData.c",0x2e2,"sgdRemap","!((int)rpPH & 0xf)");
        g3ddbgAssert__FbPCce((*puVar14 & 0xf) == 0,"sgd is illegal");
        uVar8 = pSGDHead->uiNumBlock;
        uVar9 = *puVar14;
      }
      if (uVar9 != 0) {
                    /* inlined from g3dUtil.h */
        *puVar14 = (int)pSGDHead->apProcUnitHead + (uVar9 - 0x18);
      }
                    /* end of inlined section */
      uVar13 = uVar13 + 1;
      iVar6 = uVar13 * 4;
    } while (uVar13 < uVar8);
  }
  pSVar10 = (SGDPROCUNITHEADER *)0x0;
  if (pSGDHead->pVectorInfo != (SGDVECTORINFO *)0x0) {
    pSVar10 = (SGDPROCUNITHEADER *)pSGDHead->pVectorInfo->aAddress[0].pvVertex;
  }
  if (((pSVar10 != (SGDPROCUNITHEADER *)0x0) ||
      (pSGDHead->apProcUnitHead[0] != (SGDPROCUNITHEADER *)0x0)) &&
     (pSVar10 == pSGDHead->apProcUnitHead[0])) {
    _SetLineInfo__FPCciT0T0("gra3dSGDData.c",0x2f0,"sgdRemap",&DAT_003f1358);
    g3ddbgAssert__FbPCce(false,"Illegal SGD Data\n");
    uVar8 = pSGDHead->uiNumBlock;
  }
  uVar13 = 0;
  if (uVar8 != 0) {
    iVar6 = 0;
    do {
      vuvnprim = (SGDPROCUNITHEADER *)0x0;
      pSVar10 = *(SGDPROCUNITHEADER **)((int)pSGDHead->apProcUnitHead + iVar6);
LAB_001bc6d0:
      if (pSVar10 != (SGDPROCUNITHEADER *)0x0) {
        if (((uint)pSVar10 & 0xf) != 0) {
          _SetLineInfo__FPCciT0T0("gra3dSGDData.c",0x304,"sgdRemap","!((int)pPUHead & 0xf)");
          g3ddbgAssert__FbPCce(((uint)pSVar10 & 0xf) == 0,"sgd is illegal");
        }
        pSVar7 = (SGDPROCUNITHEADER *)((int)&pSVar10->pNext + (int)pSVar10->pNext);
        if (pSVar10->pNext == (SGDPROCUNITHEADER *)0x0) goto LAB_001bc718;
                    /* end of inlined section */
                    /* end of inlined section */
        pSVar10->pNext = pSVar7;
        if (((uint)pSVar7 & 0xf) != 0) {
          _SetLineInfo__FPCciT0T0("gra3dSGDData.c",0x30c,"sgdRemap","!((int)pPUHead->pNext & 0xf)");
          g3ddbgAssert__FbPCce(((uint)pSVar10->pNext & 0xf) == 0,"sgd is illegal");
        }
        switch(pSVar10->iCategory) {
        case 0:
          vuvnprim = pSVar10;
          break;
        case 1:
          MappingMeshData__FP17SGDPROCUNITHEADERPUiP13SGDFILEHEADER
                    (pSVar10,(uint *)vuvnprim,pSGDHead);
          pSVar10 = pSVar10->pNext;
          goto LAB_001bc6d0;
        case 2:
          (pSVar10->field2_0x8).VUMeshDesc.iTagSize =
               (int)(pSGDHead->pMaterial + (pSVar10->field2_0x8).VUMeshDesc.iTagSize);
          break;
        case 3:
          MappingCoordinateData__FPUiP13HeaderSection((uint *)pSVar10,(HeaderSection *)pSGDHead);
          pSVar10 = pSVar10->pNext;
          goto LAB_001bc6d0;
        case 4:
        case 0xd:
          break;
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        case 0xc:
        default:
          _SetLineInfo__FPCciT0T0("gra3dSGDData.c",0x332,"sgdRemap",&DAT_003f1358);
          g3ddbgAssert__FbPCce(false,"pPUHead->iCategory : %d");
          break;
        case 10:
          RebuildTRI2Files__FP17SGDPROCUNITHEADER(pSVar10);
          pSVar10 = pSVar10->pNext;
          goto LAB_001bc6d0;
        case 0xb:
          goto switchD_001bc5e4_caseD_b;
        }
        pSVar10 = pSVar10->pNext;
        goto LAB_001bc6d0;
      }
LAB_001bc718:
      uVar13 = uVar13 + 1;
      iVar6 = uVar13 * 4;
    } while (uVar13 < pSGDHead->uiNumBlock);
  }
  return;
switchD_001bc5e4_caseD_b:
  _SetLineInfo__FPCciT0T0("gra3dSGDData.c",0x32c,"sgdRemap",&DAT_003f1358);
  g3ddbgAssert__FbPCce(false,&DAT_003f1360);
  pSVar10 = pSVar10->pNext;
  goto LAB_001bc6d0;
}

void sgdResetMaterialCache(SGDFILEHEADER *pSGDData) {
	int i;
	
  int *piVar1;
  uint uVar2;
  
  uVar2 = (uint)(ushort)pSGDData->usNumMaterial;
  if (uVar2 != 0) {
    piVar1 = &pSGDData->pMaterial->iCacheStatus;
    do {
      uVar2 = uVar2 - 1;
      *piVar1 = -1;
      piVar1 = piVar1 + 0x2c;
    } while (uVar2 != 0);
  }
  return;
}

void sgdCalcBoneCoordinate(SGDCOORDINATE *pCoord, int iNumBlock) {
	int i;
	int i;
	
  int iVar1;
  uint *puVar2;
  
  if (0 < iNumBlock) {
    puVar2 = &pCoord->bCalc;
    iVar1 = iNumBlock;
    do {
      iVar1 = iVar1 + -1;
      *puVar2 = 0;
      puVar2 = puVar2 + 0x38;
    } while (iVar1 != 0);
  }
  if (0 < iNumBlock) {
    do {
      iNumBlock = iNumBlock + -1;
      sgdCalcCoordinateMatrix__FP13SGDCOORDINATE(pCoord);
      pCoord = pCoord + 1;
    } while (iNumBlock != 0);
  }
  return;
}

void sgdCalcCoordinate(SGDFILEHEADER *pSGDData, float *matLocalWorld[4]) {
	static char __FUNCTION__[18] = {
		/* [0] = */ 115,
		/* [1] = */ 103,
		/* [2] = */ 100,
		/* [3] = */ 67,
		/* [4] = */ 97,
		/* [5] = */ 108,
		/* [6] = */ 99,
		/* [7] = */ 67,
		/* [8] = */ 111,
		/* [9] = */ 111,
		/* [10] = */ 114,
		/* [11] = */ 100,
		/* [12] = */ 105,
		/* [13] = */ 110,
		/* [14] = */ 97,
		/* [15] = */ 116,
		/* [16] = */ 101,
		/* [17] = */ 0
	};
	int iNumBlock;
	
  uint uVar1;
  SGDCOORDINATE *pSVar2;
  float afVar3 [4];
  undefined auVar4 [16];
  undefined auVar5 [16];
  undefined auVar6 [16];
  undefined auVar7 [16];
  
  if (pSGDData == (SGDFILEHEADER *)0x0) {
    g3ddbgPrintf__FPCce("[G3DRETURN]%s(%d)(%s):%s\n");
    return;
  }
  uVar1 = pSGDData->uiNumBlock;
                    /* inlined from g3dxVu0.h */
  pSVar2 = pSGDData->pCoord;
  auVar4 = _lqc2((undefined  [16])*matLocalWorld);
  auVar5 = _lqc2((undefined  [16])matLocalWorld[1]);
  auVar6 = _lqc2((undefined  [16])matLocalWorld[2]);
  auVar7 = _lqc2((undefined  [16])matLocalWorld[3]);
  afVar3 = (float  [4])_sqc2(auVar4);
  *(float *)((int)pSVar2->matCoord[0] + 0) = afVar3[0];
  *(float *)((int)pSVar2->matCoord[0] + 4) = afVar3[1];
  *(float *)((int)pSVar2->matCoord[0] + 8) = afVar3[2];
  *(float *)((int)pSVar2->matCoord[0] + 0xc) = afVar3[3];
  afVar3 = (float  [4])_sqc2(auVar5);
  *(float *)((int)pSVar2->matCoord[1] + 0) = afVar3[0];
  *(float *)((int)pSVar2->matCoord[1] + 4) = afVar3[1];
  *(float *)((int)pSVar2->matCoord[1] + 8) = afVar3[2];
  *(float *)((int)pSVar2->matCoord[1] + 0xc) = afVar3[3];
  afVar3 = (float  [4])_sqc2(auVar6);
  *(float *)((int)pSVar2->matCoord[2] + 0) = afVar3[0];
  *(float *)((int)pSVar2->matCoord[2] + 4) = afVar3[1];
  *(float *)((int)pSVar2->matCoord[2] + 8) = afVar3[2];
  *(float *)((int)pSVar2->matCoord[2] + 0xc) = afVar3[3];
  afVar3 = (float  [4])_sqc2(auVar7);
  *(float *)((int)pSVar2->matCoord[3] + 0) = afVar3[0];
  *(float *)((int)pSVar2->matCoord[3] + 4) = afVar3[1];
  *(float *)((int)pSVar2->matCoord[3] + 8) = afVar3[2];
  *(float *)((int)pSVar2->matCoord[3] + 0xc) = afVar3[3];
                    /* end of inlined section */
  sgdCalcBoneCoordinate__FP13SGDCOORDINATEi(pSGDData->pCoord,uVar1 - 1);
  return;
}

void sgdCalcCoordinateMatrix(SGDCOORDINATE *pCoord) {
  SGDCOORDINATE *pCoord_00;
  
  if (((pCoord != (SGDCOORDINATE *)0x0) && (pCoord != (SGDCOORDINATE *)&_heap_size)) &&
     (pCoord->bCalc == 0)) {
    pCoord_00 = pCoord->pParent;
    if ((pCoord_00 == (SGDCOORDINATE *)0x0) || (pCoord_00 == (SGDCOORDINATE *)&_heap_size)) {
      sceVu0CopyMatrix(pCoord->matLocalWorld,pCoord);
    }
    else {
      sgdCalcCoordinateMatrix__FP13SGDCOORDINATE(pCoord_00);
      sceVu0MulMatrix(pCoord->matLocalWorld,pCoord->pParent->matLocalWorld,pCoord);
    }
    pCoord->bCalc = 1;
  }
  return;
}

void sgdVerifyLightData(GRA3DLIGHTDATA *pRet, ZERO2LIGHTDATAFILE *pZLD) {
	static char __FUNCTION__[19] = {
		/* [0] = */ 115,
		/* [1] = */ 103,
		/* [2] = */ 100,
		/* [3] = */ 86,
		/* [4] = */ 101,
		/* [5] = */ 114,
		/* [6] = */ 105,
		/* [7] = */ 102,
		/* [8] = */ 121,
		/* [9] = */ 76,
		/* [10] = */ 105,
		/* [11] = */ 103,
		/* [12] = */ 104,
		/* [13] = */ 116,
		/* [14] = */ 68,
		/* [15] = */ 97,
		/* [16] = */ 116,
		/* [17] = */ 97,
		/* [18] = */ 0
	};
	int i;
	float *pv0;
	float *pv1;
	int i;
	
  float fVar1;
  float fVar2;
  int iVar3;
  ZERO2LIGHTDATAFILE *pZVar4;
  bool bVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  fixed_array<G3DLIGHT,39> *pfVar9;
  fixed_array<G3DLIGHT,39> *pfVar10;
  int iVar11;
  G3DLIGHTTYPE *pGVar12;
  
  if (pZLD == (ZERO2LIGHTDATAFILE *)0x0) {
    _SetLineInfo__FPCciT0T0("gra3dSGDData.c",0x3be,"sgdVerifyLightData",&DAT_003f1368);
    g3ddbgAssert__FbPCce(false,"Lightdata is illegal");
  }
  if (pZLD->iSignature != 0x646c7a) {
    _SetLineInfo__FPCciT0T0
              ("gra3dSGDData.c",0x3bf,"sgdVerifyLightData",
               "pZLD->iSignature == GRA3DSIGNATURE_ZERO2LIGHTDATAFILE");
    g3ddbgAssert__FbPCce(pZLD->iSignature == 0x646c7a,"Lightdata is illegal");
  }
  if (pZLD->iSizeOfThisFile != 0x1890) {
    _SetLineInfo__FPCciT0T0
              ("gra3dSGDData.c",0x3c0,"sgdVerifyLightData",
               "pZLD->iSizeOfThisFile == sizeof( ZERO2LIGHTDATAFILE )");
    g3ddbgAssert__FbPCce
              (pZLD->iSizeOfThisFile == 0x1890,
               "Lightdata is illegal(iSizeOfThisFile:%d(sizeof( ZERO2LIGHTDATAFILE ):%d))");
  }
  pfVar10 = &(pZLD->LD).aLight;
                    /* inlined from ctl/fixed_array.h */
                    /* end of inlined section */
  iVar11 = 0;
                    /* inlined from ctl/fixed_array.h */
  pfVar9 = pfVar10;
  do {
    _fixed_array_verifyrange__H1Z8G3DLIGHT_UiUi_PX01(iVar11,0x27);
    fVar2 = g_v0000[3];
    fVar1 = g_v0000[2];
    uVar6 = g_v0000._0_8_;
                    /* end of inlined section */
    if ((pfVar9->field0_0x0).m_aData[0].Type == G3DLIGHT_POINT) {
                    /* inlined from g3dxVu0.h */
      (pfVar9->field0_0x0).m_aData[0].vDirection[0] = (float)g_v0000._0_8_;
      (pfVar9->field0_0x0).m_aData[0].vDirection[1] = SUB84(uVar6,4);
      (pfVar9->field0_0x0).m_aData[0].vDirection[2] = fVar1;
      (pfVar9->field0_0x0).m_aData[0].vDirection[3] = fVar2;
    }
                    /* end of inlined section */
    iVar11 = iVar11 + 1;
    (pfVar9->field0_0x0).m_aData[0].fFalloff = 1.0;
                    /* inlined from ctl/fixed_array.h */
    pfVar9 = (fixed_array<G3DLIGHT,39> *)((pfVar9->field0_0x0).m_aData + 1);
  } while (iVar11 < 0x27);
                    /* inlined from ctl/fixed_array.h */
                    /* end of inlined section */
  iVar11 = 0;
                    /* inlined from ctl/fixed_array.h */
  do {
    _fixed_array_verifyrange__H1Z8G3DLIGHT_UiUi_PX01(iVar11,0x27);
                    /* end of inlined section */
    if (((pfVar10->field0_0x0).m_aData[0].Type != G3DLIGHT_DIRECTIONAL) &&
       ((pfVar10->field0_0x0).m_aData[0].fMaxRange < (pfVar10->field0_0x0).m_aData[0].fMinRange)) {
      _SetLineInfo__FPCciT0T0
                ("gra3dSGDData.c",0x3e1,"sgdVerifyLightData",
                 "pLight->Type == G3DLIGHT_DIRECTIONAL || pLight->fMaxRange >= pLight->fMinRange");
      bVar5 = false;
      if (((pfVar10->field0_0x0).m_aData[0].Type == G3DLIGHT_DIRECTIONAL) ||
         ((pfVar10->field0_0x0).m_aData[0].fMinRange <= (pfVar10->field0_0x0).m_aData[0].fMaxRange))
      {
        bVar5 = true;
      }
      g3ddbgAssert__FbPCce(bVar5,&DAT_003f1360);
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_relops.h */
    }
    pGVar12 = &(pfVar10->field0_0x0).m_aData[0].Type;
    bVar5 = false;
    if ((*pGVar12 == G3DLIGHT_SPOT) &&
       ((pfVar10->field0_0x0).m_aData[0].fAngleOutside <
        (pfVar10->field0_0x0).m_aData[0].fAngleInside)) {
      bVar5 = true;
    }
    if (bVar5) {
                    /* end of inlined section */
      _SetLineInfo__FPCciT0T0
                ("gra3dSGDData.c",0x3e3,"sgdVerifyLightData",
                 "pLight->Type != G3DLIGHT_SPOT || pLight->fAngleOutside >= pLight->fAngleInside");
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_relops.h */
      bVar5 = false;
      if ((*pGVar12 != G3DLIGHT_SPOT) ||
         ((pfVar10->field0_0x0).m_aData[0].fAngleInside <=
          (pfVar10->field0_0x0).m_aData[0].fAngleOutside)) {
        bVar5 = true;
      }
      g3ddbgAssert__FbPCce(bVar5,&DAT_003f1360);
    }
    bVar5 = false;
    if (*pGVar12 == G3DLIGHT_POINT) {
      iVar3 = memcmp((pfVar10->field0_0x0).m_aData[0].vDirection,g_v0000,0x10);
      bVar5 = iVar3 != 0;
    }
    if (bVar5) {
                    /* end of inlined section */
      _SetLineInfo__FPCciT0T0
                ("gra3dSGDData.c",0x3e5,"sgdVerifyLightData",
                 "pLight->Type != G3DLIGHT_POINT || EqualMemory128(pLight->vDirection,g_v0000,1 )");
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_relops.h */
      if (*pGVar12 == G3DLIGHT_POINT) {
        iVar3 = memcmp((pfVar10->field0_0x0).m_aData[0].vDirection,g_v0000,0x10);
        bVar5 = false;
        if (iVar3 == 0) goto LAB_001bcbe4;
      }
      else {
LAB_001bcbe4:
        bVar5 = true;
      }
      g3ddbgAssert__FbPCce(bVar5,&DAT_003f1360);
    }
                    /* end of inlined section */
    if ((pfVar10->field0_0x0).m_aData[0].fFalloff != 1.0) {
      _SetLineInfo__FPCciT0T0("gra3dSGDData.c",999,"sgdVerifyLightData","pLight->fFalloff == 1.0f");
      g3ddbgAssert__FbPCce((pfVar10->field0_0x0).m_aData[0].fFalloff == 1.0,&DAT_003f1360);
    }
    iVar11 = iVar11 + 1;
                    /* inlined from ctl/fixed_array.h */
    pfVar10 = (fixed_array<G3DLIGHT,39> *)((pfVar10->field0_0x0).m_aData + 1);
    if (0x26 < iVar11) {
                    /* end of inlined section */
      pZVar4 = (ZERO2LIGHTDATAFILE *)&pZLD->LD;
      do {
        uVar6 = *(undefined8 *)pZVar4->aiPad;
        uVar7 = *(undefined8 *)pZVar4->astrLightName;
        uVar8 = *(undefined8 *)(pZVar4->astrLightName + 8);
        *(undefined8 *)pRet->vAmbient = *(undefined8 *)pZVar4;
        *(undefined8 *)(pRet->vAmbient + 2) = uVar6;
        *(undefined8 *)(pRet->aLight).field0_0x0.m_aData[0].vDiffuse = uVar7;
        *(undefined8 *)((pRet->aLight).field0_0x0.m_aData[0].vDiffuse + 2) = uVar8;
        pZVar4 = (ZERO2LIGHTDATAFILE *)(pZVar4->astrLightName + 0x10);
        pRet = (GRA3DLIGHTDATA *)(pRet->aLight).field0_0x0.m_aData[0].vSpecular;
      } while (pZVar4 != pZLD + 1);
      return;
    }
  } while( true );
}

void sgdGetLocalWorldMatrix(void *pSGDTop, float *mat[4], int iObjectId) {
	float *pm1[4];
	
  float afVar1 [4];
  int iVar2;
  undefined auVar3 [16];
  undefined auVar4 [16];
  undefined auVar5 [16];
  undefined auVar6 [16];
  
                    /* inlined from g3dxVu0.h */
                    /* end of inlined section */
                    /* inlined from g3dxVu0.h */
                    /* end of inlined section */
  if (iObjectId < *(int *)((int)pSGDTop + 0x14)) {
                    /* inlined from g3dxVu0.h */
    iVar2 = *(int *)((int)pSGDTop + 8) + iObjectId * 0xe0;
    auVar3 = _lqc2(*(undefined (*) [16])(iVar2 + 0x40));
    auVar4 = _lqc2(*(undefined (*) [16])(iVar2 + 0x50));
    auVar5 = _lqc2(*(undefined (*) [16])(iVar2 + 0x60));
    auVar6 = _lqc2(*(undefined (*) [16])(iVar2 + 0x70));
    afVar1 = (float  [4])_sqc2(auVar3);
    *mat = afVar1;
    afVar1 = (float  [4])_sqc2(auVar4);
    mat[1] = afVar1;
    afVar1 = (float  [4])_sqc2(auVar5);
    mat[2] = afVar1;
    afVar1 = (float  [4])_sqc2(auVar6);
    mat[3] = afVar1;
  }
                    /* end of inlined section */
  return;
}

void sgdClearCoordCalcFlgParents(void *pSGDData, int bone_no) {
	SGDCOORDINATE *pCoord;
	int iNumBlock;
	
  if (*(int *)((int)pSGDData + 0x14) + -1 <= bone_no) {
    printf("sgdClearCoordCalcFlgParents Assert\n");
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  sgdClearCoordCalcFlgParents__FP13SGDCOORDINATE
            ((SGDCOORDINATE *)(*(int *)((int)pSGDData + 8) + bone_no * 0xe0));
  return;
}

void sgdClearCoordCalcFlgAll(void *pSGDData) {
	int iNumBlock;
	SGDCOORDINATE *pCoord;
	int i;
	
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = *(int *)((int)pSGDData + 0x14) + -1;
  if (0 < iVar1) {
    puVar2 = (undefined4 *)(*(int *)((int)pSGDData + 8) + 0xd4);
    do {
      iVar1 = iVar1 + -1;
      *puVar2 = 0;
      puVar2 = puVar2 + 0x38;
    } while (iVar1 != 0);
  }
  return;
}

void sgdClearCoordCalcFlg(void *pSGDData, int bone_no) {
	SGDCOORDINATE *pCoord;
	int iNumBlock;
	
  if (*(int *)((int)pSGDData + 0x14) + -1 <= bone_no) {
    printf("sgdClearCoordCalcFlg Assert\n");
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  *(undefined4 *)(bone_no * 0xe0 + *(int *)((int)pSGDData + 8) + 0xd4) = 0;
  return;
}

SGDPROCUNITHEADER* sgdGetProcUnit(SGDPROCUNITHEADER *pPUHead, int iProcUnitId, int iUnitIndex) {
	SGDPROCUNITHEADER *pProcUnit;
	int iCount;
	
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (pPUHead != (SGDPROCUNITHEADER *)0x0) {
    iVar1 = pPUHead->iCategory;
    while( true ) {
      if (iVar1 == iProcUnitId) {
        if (iVar2 == iUnitIndex) {
          return pPUHead;
        }
        pPUHead = pPUHead->pNext;
        iVar2 = iVar2 + 1;
      }
      else {
        pPUHead = pPUHead->pNext;
      }
      if (pPUHead == (SGDPROCUNITHEADER *)0x0) break;
      iVar1 = pPUHead->iCategory;
    }
  }
  return (SGDPROCUNITHEADER *)0x0;
}

void sgdGetBoundingBox(SGDFILEHEADER *pFH, float *avBB[4]) {
	unsigned int i;
	SGDPROCUNITHEADER *pPUHead;
	float *avBBDest[4];
	float *avBBSrc[4];
	float &rvSrc[4];
	float &rvDest[4];
	float &rvSrc[4];
	float &rvDest[4];
	float &rvSrc[4];
	float &rvDest[4];
	float &rvSrc[4];
	float &rvDest[4];
	float &rvSrc[4];
	float &rvDest[4];
	float &rvSrc[4];
	float &rvDest[4];
	float &rvSrc[4];
	float &rvDest[4];
	
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  
  memset(avBB,0,0x80);
  uVar1 = pFH->uiNumBlock;
  uVar5 = 0;
  if (uVar1 != 0) {
    iVar4 = 0x10;
    do {
      puVar3 = *(undefined4 **)((int)pFH->apProcUnitHead + iVar4 + -0x10);
      if (puVar3 != (undefined4 *)0x0) {
        iVar2 = puVar3[1];
        while( true ) {
          if (iVar2 == 4) {
            if ((float)puVar3[4] < (*avBB)[0]) {
              (*avBB)[0] = (float)puVar3[4];
            }
            if ((float)puVar3[5] < (*avBB)[1]) {
              (*avBB)[1] = (float)puVar3[5];
            }
            if ((float)puVar3[6] < (*avBB)[2]) {
              (*avBB)[2] = (float)puVar3[6];
            }
            if (avBB[1][0] < (float)puVar3[8]) {
              avBB[1][0] = (float)puVar3[8];
            }
            if ((float)puVar3[9] < avBB[1][1]) {
              avBB[1][1] = (float)puVar3[9];
            }
            if ((float)puVar3[10] < avBB[1][2]) {
              avBB[1][2] = (float)puVar3[10];
            }
            if ((float)puVar3[0xc] < avBB[2][0]) {
              avBB[2][0] = (float)puVar3[0xc];
            }
            if (avBB[2][1] < (float)puVar3[0xd]) {
              avBB[2][1] = (float)puVar3[0xd];
            }
            if ((float)puVar3[0xe] < avBB[2][2]) {
              avBB[2][2] = (float)puVar3[0xe];
            }
            if (avBB[3][0] < (float)puVar3[0x10]) {
              avBB[3][0] = (float)puVar3[0x10];
            }
            if (avBB[3][1] < (float)puVar3[0x11]) {
              avBB[3][1] = (float)puVar3[0x11];
            }
            if ((float)puVar3[0x12] < avBB[3][2]) {
              avBB[3][2] = (float)puVar3[0x12];
            }
            if ((float)puVar3[0x14] < avBB[4][0]) {
              avBB[4][0] = (float)puVar3[0x14];
            }
            if ((float)puVar3[0x15] < avBB[4][1]) {
              avBB[4][1] = (float)puVar3[0x15];
            }
            if (avBB[4][2] < (float)puVar3[0x16]) {
              avBB[4][2] = (float)puVar3[0x16];
            }
            if (avBB[5][0] < (float)puVar3[0x18]) {
              avBB[5][0] = (float)puVar3[0x18];
            }
            if ((float)puVar3[0x19] < avBB[5][1]) {
              avBB[5][1] = (float)puVar3[0x19];
            }
            if (avBB[5][2] < (float)puVar3[0x1a]) {
              avBB[5][2] = (float)puVar3[0x1a];
            }
            if ((float)puVar3[0x1c] < avBB[6][0]) {
              avBB[6][0] = (float)puVar3[0x1c];
            }
            if (avBB[6][1] < (float)puVar3[0x1d]) {
              avBB[6][1] = (float)puVar3[0x1d];
            }
            if (avBB[6][2] < (float)puVar3[0x1e]) {
              avBB[6][2] = (float)puVar3[0x1e];
            }
            if (avBB[7][0] < (float)puVar3[0x20]) {
              avBB[7][0] = (float)puVar3[0x20];
            }
            if (avBB[7][1] < (float)puVar3[0x21]) {
              avBB[7][1] = (float)puVar3[0x21];
            }
            if (avBB[7][2] < (float)puVar3[0x22]) {
              avBB[7][2] = (float)puVar3[0x22];
            }
            puVar3 = (undefined4 *)*puVar3;
          }
          else {
            puVar3 = (undefined4 *)*puVar3;
          }
          if (puVar3 == (undefined4 *)0x0) break;
          iVar2 = puVar3[1];
        }
      }
      uVar5 = uVar5 + 1;
      iVar4 = iVar4 + 4;
    } while (uVar5 < uVar1);
  }
  return;
}

void sgdRemapInverse(SGDFILEHEADER *pSGDHead) {
	static char __FUNCTION__[16] = {
		/* [0] = */ 115,
		/* [1] = */ 103,
		/* [2] = */ 100,
		/* [3] = */ 82,
		/* [4] = */ 101,
		/* [5] = */ 109,
		/* [6] = */ 97,
		/* [7] = */ 112,
		/* [8] = */ 73,
		/* [9] = */ 110,
		/* [10] = */ 118,
		/* [11] = */ 101,
		/* [12] = */ 114,
		/* [13] = */ 115,
		/* [14] = */ 101,
		/* [15] = */ 0
	};
	SGDPROCUNITHEADER **apProcUnitHead;
	unsigned int i;
	SGDCOORDINATE &rCoord;
	int iIndex;
	unsigned int i;
	SGDVECTORADDRESS &rVA;
	unsigned int i;
	u_int *vuvnprim;
	SGDPROCUNITHEADER *pPUHead;
	
  SGDVECTORINFO *pSVar1;
  uint uVar2;
  float (*pafVar3) [4];
  int iVar4;
  _VERTEXLIST *p_Var5;
  SGDPROCUNITHEADER *pSVar6;
  SGDMATERIAL *pSVar7;
  SGDCOORDINATE *pSVar8;
  int *piVar9;
  SGDVECTORINFO *pSVar10;
  uint uVar11;
  uint uVar12;
  SGDPROCUNITHEADER *pPUHead;
  SGDPROCUNITHEADER *pSVar13;
  SGDPROCUNITHEADER *vuvnprim;
  int iVar14;
  uint uVar15;
  
  if (pSGDHead == (SGDFILEHEADER *)0x0) {
    _SetLineInfo__FPCciT0T0("gra3dSGDData.c",0x46e,"sgdRemapInverse","pSGDHead");
    g3ddbgWarning__FbPCce(false,&DAT_003f1360);
    g3ddbgPrintf__FPCce("[G3DRETURN]%s(%d)(%s):%s\n");
    return;
  }
  if (pSGDHead->uiVersionId != 0x1050) {
    _SetLineInfo__FPCciT0T0
              ("gra3dSGDData.c",0x471,"sgdRemapInverse",
               "pSGDHead->uiVersionId == SGD_VALID_VERSIONID");
    g3ddbgWarning__FbPCce(pSGDHead->uiVersionId == 0x1050,&DAT_003f1360);
    if (pSGDHead->uiVersionId != 0x1050) {
      g3ddbgPrintf__FPCce("[G3DRETURN]%s(%d)(%s):%s\n");
      return;
    }
  }
  if (pSGDHead->ucMapFlag != '\0') {
    pSVar8 = pSGDHead->pCoord;
    pSGDHead->ucMapFlag = '\0';
    if (pSVar8 == (SGDCOORDINATE *)0x0) {
      uVar11 = pSGDHead->uiNumBlock;
    }
    else {
      uVar11 = pSGDHead->uiNumBlock;
      uVar15 = 0;
      if (uVar11 != 1) {
        iVar14 = 0;
        do {
          if (*(int *)((int)pSVar8->vRot + iVar14 + 0x10) == 0) {
            *(undefined4 *)((int)pSVar8->vRot + iVar14 + 0x10) = 0xffffffff;
          }
          else {
            iVar4 = indexof__H1Z13SGDCOORDINATE_PCX01T0_i(pSVar8);
            if ((int)(pSGDHead->uiNumBlock - 2) < iVar4) {
              _SetLineInfo__FPCciT0T0
                        ("gra3dSGDData.c",0x498,"sgdRemapInverse",
                         "(int)iIndex <= (int)pSGDHead->uiNumBlock - 2");
              g3ddbgAssert__FbPCce(iVar4 <= (int)(pSGDHead->uiNumBlock - 2),&DAT_003b7ca8);
              *(int *)((int)pSVar8->vRot + iVar14 + 0x10) = iVar4;
            }
            else {
              *(int *)((int)pSVar8->vRot + iVar14 + 0x10) = iVar4;
            }
          }
          uVar11 = pSGDHead->uiNumBlock;
          uVar15 = uVar15 + 1;
          iVar14 = iVar14 + 0xe0;
        } while (uVar15 < uVar11 - 1);
        pSVar8 = pSGDHead->pCoord;
      }
                    /* inlined from g3dUtil.h */
      pSGDHead->pCoord = (SGDCOORDINATE *)((int)pSVar8 - (int)pSGDHead);
    }
                    /* end of inlined section */
    pSVar1 = pSGDHead->pVectorInfo;
    if (pSVar1 != (SGDVECTORINFO *)0x0) {
      uVar15 = pSVar1->uiNumAddress;
      uVar12 = 0;
      if (uVar15 == 0) {
        p_Var5 = pSVar1->aAddress[0].pVertexList;
      }
      else {
        iVar14 = -(int)pSGDHead;
        pSVar10 = pSVar1;
        do {
          uVar2 = pSVar10->aAddress[0].uiSize;
          if ((uVar2 != 0) &&
             (pafVar3 = pSVar10->aAddress[0].pvVertex, pafVar3 != (float (*) [4])0x0)) {
                    /* inlined from g3dUtil.h */
            pSVar10->aAddress[0].pvVertex = (float (*) [4])((int)pafVar3 + iVar14);
          }
          if ((1 < uVar2) &&
             (pafVar3 = pSVar10->aAddress[0].pvNormal, pafVar3 != (float (*) [4])0x0)) {
                    /* inlined from g3dUtil.h */
            pSVar10->aAddress[0].pvNormal = (float (*) [4])((int)pafVar3 + iVar14);
          }
          if ((2 < uVar2) &&
             (p_Var5 = pSVar10->aAddress[0].pVertexList, p_Var5 != (_VERTEXLIST *)0x0)) {
                    /* inlined from g3dUtil.h */
            pSVar10->aAddress[0].pVertexList = (_VERTEXLIST *)((int)p_Var5 + iVar14);
          }
          uVar12 = uVar12 + 1;
          pSVar10 = (SGDVECTORINFO *)&pSVar10->aAddress[0].pVertexList;
        } while (uVar12 < uVar15);
        p_Var5 = pSVar1->aAddress[0].pVertexList;
      }
      if ((p_Var5 != (_VERTEXLIST *)0x0) && (pSVar1->uiNumAddress == 4)) {
        pSVar1->aAddress[1].pVertexList = (_VERTEXLIST *)0x0;
        pSVar1->aAddress[2].pVertexList = (_VERTEXLIST *)0x0;
        pSVar1->aAddress[0].pVertexList = (_VERTEXLIST *)0x0;
      }
      pSGDHead->pVectorInfo = (SGDVECTORINFO *)((int)pSVar1 - (int)pSGDHead);
                    /* end of inlined section */
    }
    uVar15 = 0;
    if (uVar11 != 0) {
      iVar14 = 0;
      do {
        vuvnprim = (SGDPROCUNITHEADER *)0x0;
        pPUHead = *(SGDPROCUNITHEADER **)((int)pSGDHead->apProcUnitHead + iVar14);
        while (pPUHead != (SGDPROCUNITHEADER *)0x0) {
          if (((uint)pPUHead & 0xf) != 0) {
            _SetLineInfo__FPCciT0T0
                      ("gra3dSGDData.c",0x514,"sgdRemapInverse","!((int)pPUHead & 0xf)");
            g3ddbgAssert__FbPCce(((uint)pPUHead & 0xf) == 0,"sgd is illegal");
          }
          pSVar13 = pPUHead->pNext;
          if (pSVar13 == (SGDPROCUNITHEADER *)0x0) break;
          switch(pPUHead->iCategory) {
          case 0:
            vuvnprim = pPUHead;
            break;
          case 1:
            MappingMeshDataInverse__FP17SGDPROCUNITHEADERPUiP13SGDFILEHEADER
                      (pPUHead,(uint *)vuvnprim,pSGDHead);
            pSVar13 = pPUHead->pNext;
            break;
          case 2:
            iVar4 = indexof__H1Z11SGDMATERIAL_PCX01T0_i
                              (pSGDHead->pMaterial,(pPUHead->field2_0x8).VUMeshDesc.iTagSize);
            pSVar13 = pPUHead->pNext;
            (pPUHead->field2_0x8).VUMeshDesc.iTagSize = iVar4;
            break;
          case 3:
            MappingCoordinateDataInverse__FP17SGDPROCUNITHEADERP13SGDFILEHEADER(pPUHead,pSGDHead);
            pSVar6 = (SGDPROCUNITHEADER *)((int)pSVar13 - (int)pPUHead);
            goto LAB_001bd534;
          case 4:
          case 0xd:
            break;
          case 5:
          case 6:
          case 7:
          case 8:
          case 9:
          case 0xc:
          default:
            _SetLineInfo__FPCciT0T0("gra3dSGDData.c",0x53f,"sgdRemapInverse",&DAT_003f1358);
            g3ddbgAssert__FbPCce(false,"pPUHead->iCategory : %d");
            pSVar13 = pPUHead->pNext;
            break;
          case 10:
            RebuildTRI2FilesInverse__FP17SGDPROCUNITHEADER(pPUHead);
            pSVar6 = (SGDPROCUNITHEADER *)((int)pSVar13 - (int)pPUHead);
            goto LAB_001bd534;
          case 0xb:
            _SetLineInfo__FPCciT0T0("gra3dSGDData.c",0x539,"sgdRemapInverse",&DAT_003f1358);
            g3ddbgAssert__FbPCce(false,&DAT_003f1360);
            pSVar13 = pPUHead->pNext;
          }
                    /* inlined from g3dUtil.h */
          pSVar6 = (SGDPROCUNITHEADER *)((int)pSVar13 - (int)pPUHead);
LAB_001bd534:
          pPUHead->pNext = pSVar6;
                    /* end of inlined section */
          pPUHead = pSVar13;
        }
        piVar9 = (int *)((int)pSGDHead->apProcUnitHead + iVar14);
        iVar14 = *piVar9;
        if (iVar14 != 0) {
                    /* inlined from g3dUtil.h */
          *piVar9 = iVar14 - (int)pSGDHead;
        }
                    /* end of inlined section */
        uVar15 = uVar15 + 1;
        iVar14 = uVar15 * 4;
      } while (uVar15 < pSGDHead->uiNumBlock);
    }
                    /* inlined from g3dUtil.h */
                    /* end of inlined section */
                    /* end of inlined section */
    if ((pSGDHead < pSGDHead->pMaterial) &&
       (pSVar7 = (SGDMATERIAL *)((int)pSGDHead->pMaterial - (int)pSGDHead),
       pSGDHead->pMaterial = pSVar7, ((uint)pSVar7 & 0xf) != 0)) {
      _SetLineInfo__FPCciT0T0
                ("gra3dSGDData.c",0x552,"sgdRemapInverse","!((u_int)pSGDHead->pMaterial & 0xf)");
      g3ddbgAssert__FbPCce(((uint)pSGDHead->pMaterial & 0xf) == 0,&DAT_003b7c60);
    }
  }
  return;
}

void sgdEnableOptimizeTexture(int b) {
  s_bEnableOptimizeTexture = b;
  return;
}

G3DLIGHT* G3DLIGHT * _fixed_array_verifyrange<G3DLIGHT>(size_t v, size_t _max) {
  g3ddbgAssert__FbPCce(false,str_735);
  return (type_info *)arraytop;
}

int int indexof<SGDCOORDINATE>(SGDCOORDINATE *arraytop, SGDCOORDINATE *obj) {
	static char __FUNCTION__[8] = {
		/* [0] = */ 105,
		/* [1] = */ 110,
		/* [2] = */ 100,
		/* [3] = */ 101,
		/* [4] = */ 120,
		/* [5] = */ 111,
		/* [6] = */ 102,
		/* [7] = */ 0
	};
	
  g3ddbgAssert__FbPCce(false,str_735);
  return (type_info *)arraytop;
}

int int indexof<SGDMATERIAL>(SGDMATERIAL *arraytop, SGDMATERIAL *obj) {
	static char __FUNCTION__[8] = {
		/* [0] = */ 105,
		/* [1] = */ 110,
		/* [2] = */ 100,
		/* [3] = */ 101,
		/* [4] = */ 120,
		/* [5] = */ 111,
		/* [6] = */ 102,
		/* [7] = */ 0
	};
	
  g3ddbgAssert__FbPCce(false,str_735);
  return (type_info *)arraytop;
}

type_info& G3DLIGHT type_info function() {
  g3ddbgAssert__FbPCce(false,str_735);
  return (type_info *)arraytop;
}
