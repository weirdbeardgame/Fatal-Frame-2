// STATUS: NOT STARTED

#include "gra3dTRI2.h"

static SGDTRI2FILEHEADER s_TRI2FileHeaderDefault = {
	/* .uiVif1Code_NOP0 = */ 0,
	/* .uiVif1Code_NOP1 = */ 0,
	/* .uiVif1Code_FLUSH = */ 0,
	/* .uiVif1Code_DIRECT = */ 48879,
	/* .gsli = */ CCC_TYPE_LOOKUP_FAILED
};

static void _fixed_array_assert(char *strType, size_t v0, size_t v1) {
	static char *str = 0x3b84a0;
	
  g3ddbgAssert__FbPCce(false,str_711);
  return;
}

static void** void * * _fixed_array_verifyrange<void *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_assert__FPCcUiUi(s_void__003f1410,_max,v);
  }
  return (void **)0x0;
}

static char** char * * _fixed_array_verifyrange<char *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_assert__FPCcUiUi(s_char__003f1418,_max,v);
  }
  return (char **)0x0;
}

static unsigned int** unsigned int * * _fixed_array_verifyrange<unsigned int *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_assert__FPCcUiUi("unsigned int*",_max,v);
  }
  return (uint **)0x0;
}

static void _MakeTRI2FileHeader(SGDTRI2FILEHEADER *pTRI2Head, short int sVRAMAddress, unsigned int uiPageSize) {
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined1 uVar4;
  undefined7 uVar5;
  SGDTRI2FILEHEADER *pSVar6;
  SGDTRI2FILEHEADER *pSVar7;
  SGDTRI2FILEHEADER *pSVar8;
  SGDTRI2FILEHEADER *pSVar9;
  undefined8 uVar10;
  
  pSVar6 = pTRI2Head;
  pSVar7 = &s_TRI2FileHeaderDefault;
  do {
    pSVar8 = pSVar7;
    pSVar9 = pSVar6;
    uVar1 = pSVar8->uiVif1Code_NOP1;
    uVar2 = pSVar8->uiVif1Code_FLUSH;
    uVar3 = pSVar8->uiVif1Code_DIRECT;
    uVar4 = pSVar8->gsli;
    uVar5 = *(undefined7 *)&pSVar8->field_0x11;
    uVar10 = *(undefined8 *)&pSVar8->field_0x18;
    pSVar9->uiVif1Code_NOP0 = pSVar8->uiVif1Code_NOP0;
    pSVar9->uiVif1Code_NOP1 = uVar1;
    pSVar9->uiVif1Code_FLUSH = uVar2;
    pSVar9->uiVif1Code_DIRECT = uVar3;
    pSVar9->gsli = uVar4;
    *(undefined7 *)&pSVar9->field_0x11 = uVar5;
    *(undefined8 *)&pSVar9->field_0x18 = uVar10;
    pSVar6 = (SGDTRI2FILEHEADER *)&pSVar9->field_0x20;
    pSVar7 = (SGDTRI2FILEHEADER *)&pSVar8->field_0x20;
  } while (&pSVar8->field_0x20 != &s_TRI2FileHeaderDefault.field_0x60);
  uVar10 = *(undefined8 *)&pSVar8->field_0x28;
  *(undefined8 *)&pSVar9->field_0x20 = s_TRI2FileHeaderDefault._96_8_;
  *(undefined8 *)&pSVar9->field_0x28 = uVar10;
  pTRI2Head->uiVif1Code_DIRECT = uiPageSize * 0x200 + 6 | 0x50000000;
  *(ulong *)&pTRI2Head->field_0x60 =
       *(ulong *)&pTRI2Head->field_0x60 & 0xffffffffffff8000 |
       (long)(int)(uiPageSize * 0x200) & 0x7e00U;
  *(ulong *)&pTRI2Head->field_0x20 =
       *(ulong *)&pTRI2Head->field_0x20 & 0xffffc000ffffffff |
       ((long)(int)(short)sVRAMAddress & 0x3fffU) << 0x20;
  *(ulong *)&pTRI2Head->field_0x40 =
       *(ulong *)&pTRI2Head->field_0x40 & 0xfffff000ffffffff |
       ((long)(int)(uiPageSize << 5) & 0xfe0U) << 0x20;
  return;
}

static void _MakeTRI2FileByVRAMImage(SGDTRI2FILEHEADER *pTRI2Head, short int sVRAMAddress, unsigned int uiPageSize) {
	sceGsStoreImage spi;
	
  undefined local_90 [112];
  
  sceGsSetDefStoreImage(local_90,sVRAMAddress,1,0,0,0,0x40,(int)(uiPageSize << 0x15) >> 0x10);
  FlushCache(0);
  g3dGsExecStoreImage__FPC15sceGsStoreImagePUI80(local_90,(uint16 *)(pTRI2Head + 1));
  g3dGsSyncPath__FiUs(0,0);
  _MakeTRI2FileHeader__FP17SGDTRI2FILEHEADERsUi(pTRI2Head,sVRAMAddress,uiPageSize);
  return;
}

void gra3dGetTRI2SizeData(TRI2SIZEDATA *pSD, TRI2SIZEDATA *pSDPrev, SGDTRI2FILEHEADER *pTRI2Head) {
	static char __FUNCTION__[21] = {
		/* [0] = */ 103,
		/* [1] = */ 114,
		/* [2] = */ 97,
		/* [3] = */ 51,
		/* [4] = */ 100,
		/* [5] = */ 71,
		/* [6] = */ 101,
		/* [7] = */ 116,
		/* [8] = */ 84,
		/* [9] = */ 82,
		/* [10] = */ 73,
		/* [11] = */ 50,
		/* [12] = */ 83,
		/* [13] = */ 105,
		/* [14] = */ 122,
		/* [15] = */ 101,
		/* [16] = */ 68,
		/* [17] = */ 97,
		/* [18] = */ 116,
		/* [19] = */ 97,
		/* [20] = */ 0
	};
	sceGsLoadImage *pLI;
	TRI2SIZEDATA SDWork;
	sceGsBitbltbuf &rgsBbb;
	unsigned int uiTexSize;
	
  undefined *puVar1;
  uint uVar2;
  ushort uVar3;
  ulong *puVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined1 *puVar10;
  TRI2SIZEDATA SDWork;
  
  puVar10 = &pTRI2Head->gsli;
                    /* inlined from sgd_types.h */
  uVar3 = *(ushort *)&pTRI2Head->uiVif1Code_DIRECT;
  puVar1 = (undefined *)((int)&pSDPrev->uiMinAddress + 3);
                    /* end of inlined section */
  uVar2 = (uint)puVar1 & 7;
  uVar5 = (uint)pSDPrev & 7;
  SDWork._0_8_ = (*(long *)(puVar1 + -uVar2) << (7 - uVar2) * 8 |
                 (long)(int)pSD & 0xffffffffffffffffU >> (uVar2 + 1) * 8) & -1L << (8 - uVar5) * 8 |
                 *(ulong *)((int)pSDPrev - uVar5) >> uVar5 * 8;
  puVar1 = (undefined *)((int)&pSDPrev->uiMaxTbp + 3);
  uVar2 = (uint)puVar1 & 7;
  uVar5 = (uint)&pSDPrev->uiVRAMTexSize & 7;
  uVar9 = (*(long *)(puVar1 + -uVar2) << (7 - uVar2) * 8 |
          (long)(int)pTRI2Head & 0xffffffffffffffffU >> (uVar2 + 1) * 8) & -1L << (8 - uVar5) * 8 |
          *(ulong *)((int)&pSDPrev->uiVRAMTexSize - uVar5) >> uVar5 * 8;
  uVar2 = pSDPrev->uiPageSize;
  puVar1 = (undefined *)((int)&SDWork.uiMinAddress + 3);
  uVar5 = (uint)puVar1 & 7;
  puVar4 = (ulong *)(puVar1 + -uVar5);
  *puVar4 = *puVar4 & -1L << (uVar5 + 1) * 8 | (ulong)SDWork._0_8_ >> (7 - uVar5) * 8;
  puVar1 = (undefined *)((int)&SDWork.uiMaxTbp + 3);
  uVar5 = (uint)puVar1 & 7;
  puVar4 = (ulong *)(puVar1 + -uVar5);
  *puVar4 = *puVar4 & -1L << (uVar5 + 1) * 8 | uVar9 >> (7 - uVar5) * 8;
  uVar5 = uVar3 - 8;
  SDWork._8_8_ = uVar9;
  SDWork.uiPageSize = uVar2;
  if (1 < uVar5) {
    lVar6 = *(long *)&pTRI2Head->field_0x28;
    do {
      if (lVar6 != 0x50) {
        _SetLineInfo__FPCciT0T0
                  ("gra3dTRI2.c",0xbf,"gra3dGetTRI2SizeData",
                   "pLI->bitbltbufaddr == SCE_GS_BITBLTBUF");
        g3ddbgAssert__FbPCce(*(long *)(puVar10 + 0x18) == 0x50,&DAT_003f1420);
      }
      uVar8 = *(ulong *)(puVar10 + 0x10);
      uVar2 = (uint)*(undefined8 *)(puVar10 + 0x50);
      uVar9 = uVar8 >> 0x20 & 0x3fff;
      if (uVar9 < (ulong)SDWork._0_8_ >> 0x20) {
        SDWork.uiMinAddress = (uint)uVar9;
      }
      uVar9 = uVar8 >> 0x20 & 0x3fff;
      if ((ulong)SDWork._8_8_ >> 0x20 < uVar9) {
        uVar7 = *(ulong *)(puVar10 + 0x10);
        uVar8 = uVar7 >> 0x38 & 0x3f;
        SDWork.uiMaxTbp = (uint)uVar9;
        if (uVar8 < 0x15) {
          switch((int)uVar8) {
          case 0x13:
          case 0x14:
            if ((uVar7 & 0x1000000000000) != 0) {
              SDWork.uiVRAMTexSize = (uVar2 & 0x7fff) << 1;
              goto LAB_001c0414;
            }
          }
          SDWork._8_8_ = CONCAT44(SDWork.uiMaxTbp,uVar2) & 0xffffffff00007fff;
        }
        else {
          SDWork._8_8_ = CONCAT44(SDWork.uiMaxTbp,uVar2) & 0xffffffff00007fff;
        }
LAB_001c0414:
        SDWork.uiMaxAddress = (*(uint *)(puVar10 + 0x14) & 0x3fff) + (SDWork.uiVRAMTexSize >> 4);
                    /* inlined from g3dUtil.h */
      }
      puVar10 = puVar10 + (uVar2 & 0x7fff) * 0x10 + 0x60;
      if (uVar5 <= (uint)((int)puVar10 - (int)pTRI2Head) >> 4) break;
      lVar6 = *(long *)(puVar10 + 0x18);
    } while( true );
  }
                    /* end of inlined section */
  puVar1 = (undefined *)((int)&pSD->uiMinAddress + 3);
  uVar2 = (uint)puVar1 & 7;
  puVar4 = (ulong *)(puVar1 + -uVar2);
  *puVar4 = *puVar4 & -1L << (uVar2 + 1) * 8 | (ulong)SDWork._0_8_ >> (7 - uVar2) * 8;
  uVar2 = (uint)pSD & 7;
  *(ulong *)((int)pSD - uVar2) =
       SDWork._0_8_ << uVar2 * 8 |
       *(ulong *)((int)pSD - uVar2) & 0xffffffffffffffffU >> (8 - uVar2) * 8;
  puVar1 = (undefined *)((int)&pSD->uiMaxTbp + 3);
  uVar2 = (uint)puVar1 & 7;
  puVar4 = (ulong *)(puVar1 + -uVar2);
  *puVar4 = *puVar4 & -1L << (uVar2 + 1) * 8 | (ulong)SDWork._8_8_ >> (7 - uVar2) * 8;
  uVar2 = (uint)&pSD->uiVRAMTexSize & 7;
  puVar4 = (ulong *)((int)&pSD->uiVRAMTexSize - uVar2);
  *puVar4 = SDWork._8_8_ << uVar2 * 8 | *puVar4 & 0xffffffffffffffffU >> (8 - uVar2) * 8;
  pSD->uiPageSize = SDWork.uiPageSize;
  return;
}

void gra3dLoadTRI2FileToVRAM(int iNumTexture, SGDTRI2FILEHEADER *pTRI2HeadTop, int iDmaChan) {
	static char __FUNCTION__[24] = {
		/* [0] = */ 103,
		/* [1] = */ 114,
		/* [2] = */ 97,
		/* [3] = */ 51,
		/* [4] = */ 100,
		/* [5] = */ 76,
		/* [6] = */ 111,
		/* [7] = */ 97,
		/* [8] = */ 100,
		/* [9] = */ 84,
		/* [10] = */ 82,
		/* [11] = */ 73,
		/* [12] = */ 50,
		/* [13] = */ 70,
		/* [14] = */ 105,
		/* [15] = */ 108,
		/* [16] = */ 101,
		/* [17] = */ 84,
		/* [18] = */ 111,
		/* [19] = */ 86,
		/* [20] = */ 82,
		/* [21] = */ 65,
		/* [22] = */ 77,
		/* [23] = */ 0
	};
	SGDTRI2FILEHEADER *pTRI2HeadWork;
	int i;
	unsigned int uiTRI2Size;
	sceGsBitbltbuf &rBBB;
	int iSizeBlock;
	
  ushort uVar1;
  ulong uVar2;
  long lVar3;
  
  if (1 < iDmaChan - 1U) {
    _SetLineInfo__FPCciT0T0
              ("gra3dTRI2.c",0xf4,"gra3dLoadTRI2FileToVRAM",
               "iDmaChan == SCE_DMA_VIF1 || iDmaChan == SCE_DMA_GIF");
    g3ddbgAssert__FbPCce(false,"iDmaChan:%d");
  }
  if (0 < iNumTexture) {
    do {
                    /* end of inlined section */
                    /* inlined from sgd_types.h */
      uVar1 = *(ushort *)&pTRI2HeadTop->uiVif1Code_DIRECT;
                    /* end of inlined section */
      uVar2 = *(ulong *)&pTRI2HeadTop->field_0x20;
      if (0xedf < (uVar2 >> 0x20 & 0x3fff) - 0x2bc0) {
        _SetLineInfo__FPCciT0T0
                  ("gra3dTRI2.c",0x106,"gra3dLoadTRI2FileToVRAM",
                   "TEX_VADR <= rBBB.DBP && rBBB.DBP < EWRK_S_VADR");
        g3ddbgAssert__FbPCce
                  (((ulong)*(uint *)&pTRI2HeadTop->field_0x24 & 0x3fff) - 0x2bc0 < 0xee0,
                   "illegal VRAM address, DBP:%d");
        uVar2 = *(ulong *)&pTRI2HeadTop->field_0x20;
      }
      lVar3 = (long)(int)((long)((*(ulong *)&pTRI2HeadTop->field_0x60 & 0x7fff) << 0x24) >> 0x28);
      if (0x3aa0 < (uVar2 >> 0x20 & 0x3fff) + lVar3) {
        _SetLineInfo__FPCciT0T0
                  ("gra3dTRI2.c",0x10b,"gra3dLoadTRI2FileToVRAM",
                   "rBBB.DBP + iSizeBlock <= EWRK_S_VADR");
        g3ddbgAssert__FbPCce
                  (((ulong)*(uint *)&pTRI2HeadTop->field_0x24 & 0x3fff) + lVar3 < 0x3aa1,
                   "illegal texture size, DBP:%d, iSizeBlock:%d");
      }
      if (iDmaChan == 1) {
        g3dDmaAddPacket__FPCvi(pTRI2HeadTop,uVar1 + 1);
      }
      else {
        FlushCache(0);
        sceGsExecLoadImage(&pTRI2HeadTop->gsli,pTRI2HeadTop + 1);
        g3dGsSyncPath__FiUs(0,0);
                    /* inlined from g3dUtil.h */
      }
                    /* end of inlined section */
      iNumTexture = iNumTexture + -1;
                    /* end of inlined section */
      pTRI2HeadTop = (SGDTRI2FILEHEADER *)(&pTRI2HeadTop->gsli + (uint)uVar1 * 0x10);
    } while (iNumTexture != 0);
  }
  return;
}

int gra3dGenerateTRI2FileFromVRAM(SGDTRI2FILEHEADER *pTRI2HeadTop, TRI2SIZEDATA *pSD) {
	int iNewNumTexture;
	SGDTRI2FILEHEADER *pTRI2HeadWork;
	int minaddr;
	int tsize;
	
  uint uiPageSize;
  uint *puVar1;
  uint uVar2;
  int iVar3;
  int tsize;
  uint local_4c [3];
  
  iVar3 = 0;
  uVar2 = pSD->uiMinAddress;
  tsize = pSD->uiPageSize;
  if (0 < (int)pSD->uiPageSize) {
    do {
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_algobase.h */
      local_4c[0] = 0x3f;
                    /* end of inlined section */
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_algobase.h */
      puVar1 = local_4c;
                    /* end of inlined section */
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_algobase.h */
      if (tsize < 0x3f) {
        puVar1 = (uint *)&tsize;
      }
                    /* end of inlined section */
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_algobase.h */
      uiPageSize = *puVar1;
                    /* end of inlined section */
      iVar3 = iVar3 + 1;
      _MakeTRI2FileByVRAMImage__FP17SGDTRI2FILEHEADERsUi(pTRI2HeadTop,(ushort)uVar2,uiPageSize);
      pTRI2HeadTop = (SGDTRI2FILEHEADER *)((int)pTRI2HeadTop + uiPageSize * 0x2000 + 0x70);
      tsize = tsize - uiPageSize;
      uVar2 = uVar2 + uiPageSize * 0x20;
    } while (0 < tsize);
  }
  return iVar3;
}
