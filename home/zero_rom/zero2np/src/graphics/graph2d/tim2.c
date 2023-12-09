// STATUS: NOT STARTED

#include "tim2.h"

void printClut(void *pClut, int ClutColors) {
	int i;
	u_int *pointer;
	
  int iVar1;
  
  iVar1 = 0;
  if (0 < ClutColors) {
    do {
      iVar1 = iVar1 + 1;
      printf(s__d__x_003f4710);
    } while (iVar1 < ClutColors);
  }
  return;
}

void ResetClutAlpha(void *pClut, int ClutColors) {
	int i;
	u_char *pointer;
	
  byte *pbVar1;
  
  pbVar1 = (byte *)((int)pClut + 3);
  if (0 < ClutColors) {
    do {
      if (0x80 < *pbVar1) {
        *pbVar1 = *pbVar1 + 0x81;
      }
      ClutColors = ClutColors + -1;
      pbVar1 = pbVar1 + 4;
    } while (ClutColors != 0);
  }
  return;
}

void ResetPIXELAlpha(u_char *ip, int size) {
	int i;
	
  int iVar1;
  
  iVar1 = size / 2;
  if (0 < iVar1) {
    do {
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return;
}

int Tim2CheckFileHeaer(void *pTim2) {
	TIM2_FILEHEADER *pFileHdr;
	int i;
	
  int iVar1;
  
                    /* WARNING: Load size is inaccurate */
  if (((*pTim2 == 0x4954) && (iVar1 = 1, *(short *)((int)pTim2 + 2) == 0x324d)) ||
     ((*pTim2 == 0x4c43 && (iVar1 = 2, *(short *)((int)pTim2 + 2) == 0x3254)))) {
    if ((*(char *)((int)pTim2 + 4) != '\x03') &&
       ((*(char *)((int)pTim2 + 4) != '\x04' || (1 < *(byte *)((int)pTim2 + 5))))) {
      printf("Tim2CheckFileHeaer: TIM2 is broken (2)\n");
      iVar1 = 0;
    }
  }
  else {
    printf("Tim2CheckFileHeaer: TIM2 is broken %02X,%02X,%02X,%02X\n");
    iVar1 = 0;
  }
  return iVar1;
}

TIM2_PICTUREHEADER* Tim2GetPictureHeader(void *pTim2, int imgno) {
	TIM2_PICTUREHEADER *pPictHdr;
	int i;
	
  TIM2_PICTUREHEADER *pTVar1;
  
  if (imgno < (int)(uint)*(ushort *)((int)pTim2 + 6)) {
    pTVar1 = (TIM2_PICTUREHEADER *)((int)pTim2 + 0x10);
    if (*(char *)((int)pTim2 + 5) != '\0') {
      pTVar1 = (TIM2_PICTUREHEADER *)((int)pTim2 + 0x80);
    }
    if (0 < imgno) {
      do {
        imgno = imgno + -1;
        pTVar1 = (TIM2_PICTUREHEADER *)((int)&pTVar1->TotalSize + pTVar1->TotalSize);
      } while (imgno != 0);
    }
  }
  else {
    printf("Tim2GetPictureHeader: Illegal image no.(%d)\n");
    pTVar1 = (TIM2_PICTUREHEADER *)0x0;
  }
  return pTVar1;
}

int Tim2IsClut2(TIM2_PICTUREHEADER *ph) {
  return (int)(ph->MipMapTextures == '\0');
}

int Tim2GetMipMapPictureSize(TIM2_PICTUREHEADER *ph, int mipmap, int *pWidth, int *pHeight) {
	int w;
	int h;
	int n;
	
  int iVar1;
  int iVar2;
  
  iVar2 = (int)(uint)(ushort)ph->ImageWidth >> (mipmap & 0x1fU);
  iVar1 = (int)(uint)(ushort)ph->ImageHeight >> (mipmap & 0x1fU);
  if (pWidth != (int *)0x0) {
    *pWidth = iVar2;
  }
  if (pHeight != (int *)0x0) {
    *pHeight = iVar1;
  }
  iVar2 = iVar2 * iVar1;
  switch(ph->ImageType) {
  case '\x01':
    iVar2 = iVar2 * 2;
    break;
  case '\x02':
    iVar2 = iVar2 * 3;
    break;
  case '\x03':
    iVar2 = iVar2 * 4;
    break;
  case '\x04':
    iVar2 = iVar2 / 2;
  }
  return iVar2 + 0xfU & 0xfffffff0;
}

TIM2_MIPMAPHEADER* Tim2GetMipMapHeader(TIM2_PICTUREHEADER *ph, int *pSize) {
	TIM2_MIPMAPHEADER *pMmHdr;
	static char mmsize[8] = {
		/* [0] = */ 0,
		/* [1] = */ 0,
		/* [2] = */ 32,
		/* [3] = */ 32,
		/* [4] = */ 32,
		/* [5] = */ 48,
		/* [6] = */ 48,
		/* [7] = */ 48
	};
	
  TIM2_PICTUREHEADER *pTVar1;
  
  pTVar1 = (TIM2_PICTUREHEADER *)0x0;
  if (1 < ph->MipMapTextures) {
    pTVar1 = ph + 1;
  }
  if (pSize != (int *)0x0) {
    *pSize = (int)*(char *)((int)&mmsize_105 + (uint)ph->MipMapTextures);
  }
  return (TIM2_MIPMAPHEADER *)pTVar1;
}

void* Tim2GetUserSpace(TIM2_PICTUREHEADER *ph, int *pSize) {
	void *pUserSpace;
	static char mmsize[8] = {
		/* [0] = */ 48,
		/* [1] = */ 48,
		/* [2] = */ 80,
		/* [3] = */ 80,
		/* [4] = */ 80,
		/* [5] = */ 96,
		/* [6] = */ 96,
		/* [7] = */ 96
	};
	
  char cVar1;
  int iVar2;
  int *piVar3;
  
  cVar1 = mmsize_109[ph->MipMapTextures];
  if ((ulong)(ushort)ph->HeaderSize == (long)cVar1) {
    if (pSize != (int *)0x0) {
      *pSize = 0;
    }
    return (void *)0x0;
  }
  piVar3 = (int *)((int)&ph->TotalSize + (int)cVar1);
  if (pSize != (int *)0x0) {
    if (*piVar3 == 0x745865) {
      iVar2 = piVar3[1];
    }
    else {
      iVar2 = (uint)(ushort)ph->HeaderSize - (int)cVar1;
    }
    *pSize = iVar2;
  }
  return piVar3;
}

void* Tim2GetUserData(TIM2_PICTUREHEADER *ph, int *pSize) {
	void *pUserSpace;
	
  int *piVar1;
  int *piVar2;
  
  piVar1 = (int *)Tim2GetUserSpace__FP18TIM2_PICTUREHEADERPi(ph,pSize);
  piVar2 = piVar1;
  if (((piVar1 != (int *)0x0) && (*piVar1 == 0x745865)) &&
     (piVar2 = piVar1 + 4, pSize != (int *)0x0)) {
    *pSize = piVar1[2];
    piVar2 = piVar1 + 4;
  }
  return piVar2;
}

char* Tim2GetComment(TIM2_PICTUREHEADER *ph) {
	void *pUserSpace;
	
  int *piVar1;
  int *piVar2;
  
  piVar1 = (int *)Tim2GetUserSpace__FP18TIM2_PICTUREHEADERPi(ph,(int *)0x0);
  piVar2 = piVar1;
  if (((piVar1 != (int *)0x0) && (piVar2 = (int *)0x0, *piVar1 == 0x745865)) &&
     (piVar1[1] != piVar1[2] + 0x10)) {
    piVar2 = (int *)((int)piVar1 + piVar1[2] + 0x10);
  }
  return (char *)piVar2;
}

void* Tim2GetImage(TIM2_PICTUREHEADER *ph, int mipmap) {
	void *pImage;
	int i;
	
  int iVar1;
  ulong *puVar2;
  void *pvVar3;
  
  pvVar3 = (void *)0x0;
  if (((mipmap < (int)(uint)ph->MipMapTextures) &&
      (pvVar3 = (void *)((int)&ph->TotalSize + (uint)(ushort)ph->HeaderSize),
      ph->MipMapTextures != 1)) && (0 < mipmap)) {
    puVar2 = (ulong *)&ph[1].PictFormat;
    do {
      iVar1 = *(int *)puVar2;
      puVar2 = (ulong *)((int)puVar2 + 4);
      mipmap = mipmap + -1;
      pvVar3 = (void *)((int)pvVar3 + iVar1);
    } while (mipmap != 0);
  }
  return pvVar3;
}

void* Tim2GetClut(TIM2_PICTUREHEADER *ph) {
	void *pClut;
	
  void *pvVar1;
  
  pvVar1 = (void *)0x0;
  if (ph->ClutColors != 0) {
    pvVar1 = (void *)((int)&ph->TotalSize + ph->ImageSize + (uint)(ushort)ph->HeaderSize);
  }
  return pvVar1;
}

u_int Tim2GetClutColor(TIM2_PICTUREHEADER *ph, int clut, int no) {
	unsigned char *pClut;
	int n;
	unsigned char r;
	unsigned char g;
	unsigned char b;
	unsigned char a;
	
  uchar uVar1;
  ushort uVar2;
  byte bVar3;
  void *pvVar4;
  int iVar5;
  byte *pbVar6;
  ushort *puVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  
  pvVar4 = Tim2GetClut__FP18TIM2_PICTUREHEADER(ph);
  if (pvVar4 == (void *)0x0) {
    return 0;
  }
  uVar1 = ph->ImageType;
  iVar5 = clut << 4;
  if (uVar1 != '\x04') {
    if (uVar1 != '\x05') {
      return 0;
    }
    iVar5 = clut << 8;
  }
  uVar9 = iVar5 + no;
  if ((int)(uint)(ushort)ph->ClutColors < (int)uVar9) {
    return 0;
  }
  uVar2 = CONCAT11(ph->ClutType,uVar1);
  if (uVar2 == 0x305) {
LAB_00266ef4:
    uVar8 = uVar9 & 0x1f;
    if (uVar8 < 8) {
      bVar3 = ph->ClutType;
    }
    else {
      if (uVar8 < 0x10) {
        uVar9 = uVar9 + 8;
      }
      else if (uVar8 < 0x18) {
        uVar9 = uVar9 - 8;
      }
      bVar3 = ph->ClutType;
    }
  }
  else {
    if (uVar2 < 0x306) {
      if ((uVar2 != 0x105) && (uVar2 != 0x205)) {
        bVar3 = ph->ClutType;
        goto LAB_00266f24;
      }
      goto LAB_00266ef4;
    }
    if (uVar2 == 0x4204) goto LAB_00266ef4;
    if (uVar2 < 0x4205) {
      if (uVar2 == 0x4104) goto LAB_00266ef4;
      bVar3 = ph->ClutType;
    }
    else {
      if (uVar2 == 0x4304) goto LAB_00266ef4;
      bVar3 = ph->ClutType;
    }
  }
LAB_00266f24:
  bVar3 = bVar3 & 0x3f;
  if (bVar3 == 2) {
    uVar8 = 0x80;
    pbVar6 = (byte *)(uVar9 * 3 + (int)pvVar4);
    uVar10 = (uint)pbVar6[2];
    uVar11 = (uint)*pbVar6;
    uVar9 = (uint)pbVar6[1];
  }
  else {
    if (bVar3 < 3) {
      if (bVar3 == 1) {
        puVar7 = (ushort *)(uVar9 * 2 + (int)pvVar4);
        uVar10 = (uint)*puVar7;
        uVar11 = (*(byte *)puVar7 & 0x1f) << 3;
        uVar8 = (int)uVar10 >> 8 & 0x80;
        uVar9 = (int)uVar10 >> 2 & 0xf8;
        uVar10 = (int)uVar10 >> 7 & 0xf8;
        goto LAB_00266fe4;
      }
    }
    else if (bVar3 == 3) {
      pbVar6 = (byte *)(uVar9 * 4 + (int)pvVar4);
      uVar8 = (uint)pbVar6[3];
      uVar11 = (uint)*pbVar6;
      uVar9 = (uint)pbVar6[1];
      uVar10 = (uint)pbVar6[2];
      goto LAB_00266fe4;
    }
    uVar11 = 0;
    uVar9 = 0;
    uVar10 = 0;
    uVar8 = 0;
  }
LAB_00266fe4:
  return uVar8 << 0x18 | uVar11 | uVar10 << 8 | uVar9 << 0x10;
}

u_int Tim2SetClutColor(TIM2_PICTUREHEADER *ph, int clut, int no, u_int newcolor) {
	unsigned char *pClut;
	unsigned char r;
	unsigned char g;
	unsigned char b;
	unsigned char a;
	int n;
	
  uchar uVar1;
  ushort uVar2;
  byte bVar3;
  void *pvVar4;
  int iVar5;
  byte *pbVar6;
  byte bVar7;
  uint uVar8;
  byte bVar9;
  ushort *puVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  
  pvVar4 = Tim2GetClut__FP18TIM2_PICTUREHEADER(ph);
  if (pvVar4 == (void *)0x0) {
    return 0;
  }
  uVar1 = ph->ImageType;
  iVar5 = clut << 4;
  if (uVar1 != '\x04') {
    if (uVar1 != '\x05') {
      return 0;
    }
    iVar5 = clut << 8;
  }
  uVar8 = iVar5 + no;
  if ((int)(uint)(ushort)ph->ClutColors < (int)uVar8) {
    return 0;
  }
  uVar2 = CONCAT11(ph->ClutType,uVar1);
  if (uVar2 == 0x305) {
LAB_002670fc:
    uVar11 = uVar8 & 0x1f;
    if (uVar11 < 8) {
      bVar3 = ph->ClutType;
    }
    else {
      if (uVar11 < 0x10) {
        uVar8 = uVar8 + 8;
      }
      else if (uVar11 < 0x18) {
        uVar8 = uVar8 - 8;
      }
      bVar3 = ph->ClutType;
    }
  }
  else {
    if (uVar2 < 0x306) {
      if ((uVar2 != 0x105) && (uVar2 != 0x205)) {
        bVar3 = ph->ClutType;
        goto LAB_0026712c;
      }
      goto LAB_002670fc;
    }
    if (uVar2 == 0x4204) goto LAB_002670fc;
    if (uVar2 < 0x4205) {
      if (uVar2 == 0x4104) goto LAB_002670fc;
      bVar3 = ph->ClutType;
    }
    else {
      if (uVar2 == 0x4304) goto LAB_002670fc;
      bVar3 = ph->ClutType;
    }
  }
LAB_0026712c:
  bVar3 = bVar3 & 0x3f;
  bVar7 = (byte)(newcolor >> 8);
  bVar9 = (byte)(newcolor >> 0x10);
  if (bVar3 == 2) {
    pbVar6 = (byte *)(uVar8 * 3 + (int)pvVar4);
    uVar11 = 0x80;
    uVar13 = (uint)*pbVar6;
    uVar12 = (uint)pbVar6[1];
    uVar8 = (uint)pbVar6[2];
    *pbVar6 = (byte)newcolor;
    pbVar6[1] = bVar7;
    pbVar6[2] = bVar9;
  }
  else {
    if (bVar3 < 3) {
      if (bVar3 == 1) {
        puVar10 = (ushort *)(uVar8 * 2 + (int)pvVar4);
        uVar11 = newcolor >> 6 & 0x3e0;
        uVar12 = (uint)*puVar10;
        bVar3 = *(byte *)puVar10;
        *(byte *)puVar10 = (byte)(newcolor >> 3) & 0x1f | (byte)uVar11;
        uVar8 = (int)uVar12 >> 7 & 0xf8;
        *(byte *)((int)puVar10 + 1) =
             (byte)(((uint)((int)newcolor < 0) << 0xf) >> 8) |
             (byte)(uVar11 >> 8) | (byte)((newcolor >> 9) >> 8) & 0x7c;
        uVar11 = (int)uVar12 >> 8 & 0x80;
        uVar13 = (bVar3 & 0x1f) << 3;
        uVar12 = (int)uVar12 >> 2 & 0xf8;
        goto LAB_00267274;
      }
    }
    else if (bVar3 == 3) {
      pbVar6 = (byte *)(uVar8 * 4 + (int)pvVar4);
      uVar13 = (uint)*pbVar6;
      uVar12 = (uint)pbVar6[1];
      uVar8 = (uint)pbVar6[2];
      uVar11 = (uint)pbVar6[3];
      *pbVar6 = (byte)newcolor;
      pbVar6[1] = bVar7;
      pbVar6[2] = bVar9;
      pbVar6[3] = (byte)(newcolor >> 0x18);
      goto LAB_00267274;
    }
    uVar13 = 0;
    uVar12 = 0;
    uVar8 = 0;
    uVar11 = 0;
  }
LAB_00267274:
  return uVar11 << 0x18 | uVar13 | uVar8 << 8 | uVar12 << 0x10;
}

u_int Tim2GetTexel(TIM2_PICTUREHEADER *ph, int mipmap, int x, int y) {
	unsigned char *pImage;
	int t;
	int w;
	int h;
	
  void *pvVar1;
  void *pvVar2;
  byte *pbVar3;
  int iVar4;
  int w;
  int h;
  
  pvVar1 = Tim2GetImage__FP18TIM2_PICTUREHEADERi(ph,mipmap);
  pvVar2 = pvVar1;
  if (pvVar1 != (void *)0x0) {
    Tim2GetMipMapPictureSize__FP18TIM2_PICTUREHEADERiPiT2(ph,mipmap,&w,&h);
    pvVar2 = (void *)0x0;
    if ((x <= w) && (pvVar2 = (void *)0x0, y <= h)) {
      iVar4 = y * w + x;
      pvVar2 = (void *)0x0;
      switch(ph->ImageType) {
      case '\x01':
        pvVar2 = (void *)(uint)*(ushort *)(iVar4 * 2 + (int)pvVar1);
        break;
      case '\x02':
        pbVar3 = (byte *)(iVar4 * 3 + (int)pvVar1);
        pvVar2 = (void *)((uint)pbVar3[2] << 0x10 | (uint)pbVar3[1] << 8 | (uint)*pbVar3);
        break;
      case '\x03':
        pbVar3 = (byte *)(iVar4 * 4 + (int)pvVar1);
        pvVar2 = (void *)((uint)pbVar3[3] << 0x18 | (uint)*pbVar3 |
                         (uint)pbVar3[1] << 8 | (uint)pbVar3[2] << 0x10);
        break;
      case '\x04':
        if ((x & 1U) == 0) {
          pvVar2 = (void *)(*(byte *)((int)pvVar1 + iVar4 / 2) & 0xf);
        }
        else {
          pvVar2 = (void *)(uint)(*(byte *)((int)pvVar1 + iVar4 / 2) >> 4);
        }
        break;
      case '\x05':
        pvVar2 = (void *)(uint)*(byte *)((int)pvVar1 + iVar4);
      }
    }
  }
  return (uint)pvVar2;
}

u_int Tim2SetTexel(TIM2_PICTUREHEADER *ph, int mipmap, int x, int y, u_int newtexel) {
	unsigned char *pImage;
	int t;
	int w;
	int h;
	u_int oldtexel;
	
  byte bVar1;
  byte bVar2;
  ushort uVar3;
  void *pvVar4;
  byte *pbVar5;
  ushort *puVar6;
  void *pvVar7;
  byte bVar8;
  int iVar9;
  byte bVar10;
  byte bVar11;
  int w;
  int h;
  
  pvVar4 = Tim2GetImage__FP18TIM2_PICTUREHEADERi(ph,mipmap);
  pvVar7 = pvVar4;
  if (pvVar4 != (void *)0x0) {
    Tim2GetMipMapPictureSize__FP18TIM2_PICTUREHEADERiPiT2(ph,mipmap,&w,&h);
    pvVar7 = (void *)0x0;
    if ((x <= w) && (pvVar7 = (void *)0x0, y <= h)) {
      iVar9 = y * w + x;
      pvVar7 = (void *)0x0;
      if (ph->ImageType - 1 < 5) {
        bVar11 = (byte)newtexel;
        bVar8 = (byte)(newtexel >> 8);
        bVar10 = (byte)(newtexel >> 0x10);
        switch(ph->ImageType) {
        case '\x01':
          puVar6 = (ushort *)(iVar9 * 2 + (int)pvVar4);
          uVar3 = *puVar6;
          *(byte *)puVar6 = bVar11;
          *(byte *)((int)puVar6 + 1) = bVar8;
          pvVar7 = (void *)(uint)uVar3;
          break;
        case '\x02':
          pbVar5 = (byte *)(iVar9 * 3 + (int)pvVar4);
          bVar1 = pbVar5[1];
          bVar2 = *pbVar5;
          *pbVar5 = bVar11;
          pbVar5[1] = bVar8;
          pvVar7 = (void *)((uint)pbVar5[2] << 0x10 | (uint)bVar1 << 8 | (uint)bVar2);
          pbVar5[2] = bVar10;
          break;
        case '\x03':
          pbVar5 = (byte *)(iVar9 * 4 + (int)pvVar4);
          bVar1 = pbVar5[1];
          bVar2 = *pbVar5;
          *pbVar5 = bVar11;
          pbVar5[1] = bVar8;
          pvVar7 = (void *)((uint)pbVar5[3] << 0x18 | (uint)bVar2 |
                           (uint)bVar1 << 8 | (uint)pbVar5[2] << 0x10);
          pbVar5[2] = bVar10;
          pbVar5[3] = (byte)(newtexel >> 0x18);
          break;
        case '\x04':
          if ((x & 1U) == 0) {
            pbVar5 = (byte *)((int)pvVar4 + iVar9 / 2);
            pvVar7 = (void *)(*pbVar5 & 0xf);
            *pbVar5 = (byte)((int)pvVar7 << 4) | bVar11;
          }
          else {
            pbVar5 = (byte *)((int)pvVar4 + iVar9 / 2);
            bVar8 = *pbVar5 >> 4;
            pvVar7 = (void *)(uint)bVar8;
            *pbVar5 = (byte)(newtexel << 4) | bVar8;
          }
          break;
        case '\x05':
          pvVar7 = (void *)(uint)*(byte *)((int)pvVar4 + iVar9);
          *(byte *)((int)pvVar4 + iVar9) = bVar11;
        }
      }
    }
  }
  return (uint)pvVar7;
}

u_int Tim2GetTextureColor(TIM2_PICTUREHEADER *ph, int mipmap, int clut, int x, int y) {
	u_int t;
	
  void *no;
  uint uVar1;
  
  no = Tim2GetImage__FP18TIM2_PICTUREHEADERi(ph,mipmap);
  if (no != (void *)0x0) {
    no = (void *)Tim2GetTexel__FP18TIM2_PICTUREHEADERiii
                           (ph,mipmap,x >> (mipmap & 0x1fU),y >> (mipmap & 0x1fU));
    switch(ph->ImageType) {
    case '\x01':
      no = (void *)(((uint)no >> 8 & 0x80) << 0x18 | ((uint)no & 0x1f) << 3 |
                   ((uint)no & 0x7c00) << 1 | ((uint)no >> 2 & 0xf8) << 0x10);
      break;
    case '\x02':
      no = (void *)((uint)no & 0xffffff | 0x80000000);
      break;
    case '\x03':
      break;
    case '\x04':
    case '\x05':
      uVar1 = Tim2GetClutColor__FP18TIM2_PICTUREHEADERii(ph,clut,(int)no);
      return uVar1;
    default:
      no = (void *)0x0;
    }
  }
  return (uint)no;
}

u_int Tim2LoadPicture2(TIM2_PICTUREHEADER *ph, u_int tbp, u_int cbp, u_int offset) {
  uint uVar1;
  
  uVar1 = Tim2LoadImage2__FP18TIM2_PICTUREHEADERUiUi(ph,tbp,offset);
  Tim2LoadClut2__FP18TIM2_PICTUREHEADERUiUi(ph,cbp,offset);
  return uVar1;
}

u_int Tim2LoadPicture(TIM2_PICTUREHEADER *ph, u_int tbp, u_int cbp) {
  uint uVar1;
  
  uVar1 = Tim2LoadPicture2__FP18TIM2_PICTUREHEADERUiUiUi(ph,tbp,cbp,0);
  return uVar1;
}

u_int Tim2LoadImage2(TIM2_PICTUREHEADER *ph, u_int tbp, u_int offset) {
	int i;
	int psm;
	u_long128 *pImage;
	int w;
	int h;
	int tbw;
	TIM2_MIPMAPHEADER *pm;
	int miptbp;
	
  ushort uVar1;
  ushort uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  int iVar6;
  uint psm;
  int iVar7;
  byte bVar8;
  uint tbp_00;
  uint w;
  int iVar10;
  TIM2_PICTUREHEADER *pTVar11;
  uint h;
  uint16 *puVar12;
  int iVar13;
  ulong *local_60;
  ulong uVar9;
  
  uVar9 = (ulong)(int)tbp;
  bVar8 = ph->MipMapTextures;
  if (bVar8 != 0) {
    uVar1 = ph->ImageWidth;
    w = (uint)uVar1;
    psm = (uint)(ph->GsTex0 >> 0x14) & 0x3f;
    puVar12 = (uint16 *)((int)&ph->TotalSize + (uint)(ushort)ph->HeaderSize);
    uVar2 = ph->ImageHeight;
    h = (uint)uVar2;
    if (uVar9 == 0xffffffffffffffff) {
      tbp_00 = (*(ushort *)&ph->GsTex0 & 0x3fff) + offset;
      uVar9 = (ulong)(int)tbp_00;
      if (ph->ImageSize != 0) {
        Tim2LoadTexture__FiUiiiiPUI80
                  (psm,tbp_00,(uint)(ph->GsTex0 >> 0xe) & 0x3f,(uint)uVar1,(uint)uVar2,puVar12);
        bVar8 = ph->MipMapTextures;
      }
    }
    else {
      iVar13 = Tim2CalcBufWidth__Fii(psm,(uint)uVar1);
      ph->GsTex0 = ph->GsTex0 & 0xfffffffffff00000 | (long)(int)(tbp + offset) & 0x3fffU |
                   ((long)iVar13 & 0x3fU) << 0xe;
      Tim2LoadTexture__FiUiiiiPUI80(psm,tbp,iVar13,(uint)uVar1,(uint)uVar2,puVar12);
      iVar13 = Tim2CalcBufSize__Fiii(psm,(uint)uVar1,(uint)uVar2);
      bVar8 = ph->MipMapTextures;
      uVar9 = (ulong)(int)(tbp + iVar13);
    }
    if (1 < bVar8) {
      pTVar11 = ph + 1;
      if (uVar9 != 0xffffffffffffffff) {
        pTVar11->TotalSize = 0;
        pTVar11->ClutSize = 0;
        ph[1].ImageSize = 0;
        ph[1].HeaderSize = 0;
        ph[1].ClutColors = 0;
      }
      iVar13 = 1;
      puVar12 = (uint16 *)((int)&ph->TotalSize + (uint)(ushort)ph->HeaderSize);
      if (1 < ph->MipMapTextures) {
        local_60 = (ulong *)&ph[1].PictFormat;
        iVar10 = 0x14;
        do {
          iVar6 = *(int *)local_60;
          local_60 = (ulong *)((int)local_60 + 4);
          w = (int)w / 2;
          h = (int)h / 2;
          puVar12 = (uint16 *)((int)puVar12 + iVar6);
          if (uVar9 == 0xffffffffffffffff) {
            if (iVar13 < 4) {
              uVar3._0_4_ = pTVar11->TotalSize;
              uVar3._4_4_ = pTVar11->ClutSize;
              iVar7 = iVar10 + -0x14;
              iVar6 = iVar10 + -6;
            }
            else {
              uVar3._0_4_ = ph[1].ImageSize;
              uVar3._4_2_ = ph[1].HeaderSize;
              uVar3._6_2_ = ph[1].ClutColors;
              iVar7 = iVar10 + -0x50;
              iVar6 = iVar10 + -0x42;
            }
            Tim2LoadTexture__FiUiiiiPUI80
                      (psm,(uint)(uVar3 >> (long)iVar7) & 0x3fff,(uint)(uVar3 >> (long)iVar6) & 0x3f
                       ,w,h,puVar12);
            bVar8 = ph->MipMapTextures;
          }
          else {
            iVar6 = Tim2CalcBufWidth__Fii(psm,w);
            if (iVar13 < 4) {
              uVar4._0_4_ = pTVar11->TotalSize;
              uVar4._4_4_ = pTVar11->ClutSize;
              uVar5 = uVar4 | (uVar9 & 0xffffffff) << (long)(iVar10 + -0x14) |
                      (long)iVar6 << (long)(iVar10 + -6);
              pTVar11->TotalSize = (int)uVar5;
              pTVar11->ClutSize = (int)(uVar5 >> 0x20);
            }
            else {
              uVar5._0_4_ = ph[1].ImageSize;
              uVar5._4_2_ = ph[1].HeaderSize;
              uVar5._6_2_ = ph[1].ClutColors;
              uVar5 = uVar5 | (uVar9 & 0xffffffff) << (long)(iVar10 + -0x50) |
                      (long)iVar6 << (long)(iVar10 + -0x42);
              ph[1].ImageSize = (int)uVar5;
              ph[1].HeaderSize = (short)(uVar5 >> 0x20);
              ph[1].ClutColors = (short)(uVar5 >> 0x30);
            }
            Tim2LoadTexture__FiUiiiiPUI80(psm,(uint)uVar9,iVar6,w,h,puVar12);
            iVar6 = Tim2CalcBufSize__Fiii(psm,w,h);
            uVar9 = (ulong)(int)((uint)uVar9 + iVar6);
            bVar8 = ph->MipMapTextures;
          }
          iVar13 = iVar13 + 1;
          iVar10 = iVar10 + 0x14;
        } while (iVar13 < (int)(uint)bVar8);
      }
    }
  }
  return (uint)uVar9;
}

u_int Tim2LoadImage(TIM2_PICTUREHEADER *ph, u_int tbp) {
  uint uVar1;
  
  uVar1 = Tim2LoadImage2__FP18TIM2_PICTUREHEADERUiUi(ph,tbp,0);
  return uVar1;
}

u_int Tim2LoadClut2(TIM2_PICTUREHEADER *ph, u_int cbp, u_int offset) {
	int i;
	sceGsLoadImage li;
	u_long128 *pClut;
	int cpsm;
	
  ushort uVar1;
  ushort uVar2;
  ulong uVar3;
  byte bVar4;
  uint16 *puVar5;
  uint16 *puVar6;
  ulong uVar7;
  uint uVar8;
  int iVar9;
  ulong uVar10;
  uint16 *pImage;
  uint uVar11;
  undefined local_a0 [96];
  
  if (ph->ClutType == 0) {
    return 1;
  }
  bVar4 = ph->ClutType & 0x3f;
  uVar10 = 2;
  if (bVar4 != 1) {
    uVar10 = (ulong)(bVar4 == 2);
  }
  uVar3 = ph->GsTex0;
  uVar7 = uVar3 & 0x7ffffffffffff | uVar10 << 0x33 | 0x2000000000000000;
  ph->GsTex0 = uVar7;
  if (cbp == 0xffffffff) {
    cbp = ((uint)(uVar7 >> 0x25) & 0x3fff) + offset;
  }
  else {
    ph->GsTex0 = uVar3 & 0x1fffffffff | uVar10 << 0x33 | 0x2000000000000000 |
                 ((long)(int)(cbp + offset) & 0x3fffU) << 0x25;
  }
  uVar1 = CONCAT11(ph->ClutType,ph->ImageType);
  pImage = (uint16 *)((int)&ph->TotalSize + ph->ImageSize + (uint)(ushort)ph->HeaderSize);
  if (uVar1 == 0x4204) goto LAB_00267d38;
  if (uVar1 < 0x4205) {
    if (uVar1 == 0x205) goto LAB_00267d38;
    if (uVar1 < 0x206) {
      if (uVar1 == 0x105) goto LAB_00267d38;
      if (uVar1 < 0x106) {
        if (uVar1 != 0x104) goto LAB_00267e14;
      }
      else if (uVar1 != 0x204) goto LAB_00267e14;
    }
    else {
      if (uVar1 == 0x305) {
LAB_00267d38:
        Tim2LoadTexture__FiUiiiiPUI80
                  ((int)uVar10,cbp,1,0x10,(uint)((ushort)ph->ClutColors >> 4),pImage);
        return 1;
      }
      if (0x305 < uVar1) {
        if (uVar1 != 0x4104) goto LAB_00267e14;
        goto LAB_00267d38;
      }
      if (uVar1 != 0x304) goto LAB_00267e14;
    }
    uVar8 = (uint)(ushort)ph->ClutColors;
  }
  else {
    if (uVar1 < 0x8206) {
      if (0x8203 < uVar1) {
        uVar8 = (uint)(ushort)ph->ClutColors;
        goto LAB_00267d64;
      }
      if (uVar1 == 0x4304) goto LAB_00267d38;
      if ((uVar1 < 0x4304) || (0x8105 < uVar1)) goto LAB_00267e14;
      uVar2 = 0x8104;
    }
    else {
      if (0x8305 < uVar1) goto LAB_00267e14;
      uVar2 = 0x8304;
    }
    if (uVar1 < uVar2) {
LAB_00267e14:
      printf("Illegal clut and texture combination. ($%02X,$%02X)\n");
      return 0;
    }
    uVar8 = (uint)(ushort)ph->ClutColors;
  }
LAB_00267d64:
  uVar11 = 0;
  if (uVar8 >> 4 != 0) {
    iVar9 = 0;
    do {
      uVar8 = uVar11 & 1;
      uVar11 = uVar11 + 1;
      sceGsSetDefLoadImage
                (local_a0,(short)cbp,1,(short)uVar10,uVar8 << 3,(iVar9 << 0x11) >> 0x10,8,2);
      FlushCache(0);
      sceGsExecLoadImage(local_a0,pImage);
      sceGsSyncPath(0,0);
      puVar6 = pImage + 3;
      puVar5 = pImage + 4;
      bVar4 = ph->ClutType & 0x3f;
      pImage = pImage + 2;
      if ((bVar4 != 1) && (pImage = puVar6, bVar4 != 2)) {
        pImage = puVar5;
      }
      iVar9 = (int)uVar11 >> 1;
    } while ((int)uVar11 < (int)(uint)((ushort)ph->ClutColors >> 4));
    return 1;
  }
  return 1;
}

u_int Tim2LoadClut(TIM2_PICTUREHEADER *ph, u_int cbp) {
  uint uVar1;
  
  uVar1 = Tim2LoadClut2__FP18TIM2_PICTUREHEADERUiUi(ph,cbp,0);
  return uVar1;
}

void Tim2LoadTexture(int psm, u_int tbp, int tbw, int w, int h, u_long128 *pImage) {
	sceGsLoadImage li;
	int i;
	int l;
	int n;
	u_long128 *p;
	
  int iVar1;
  int iVar2;
  undefined2 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined local_c0 [96];
  int local_60;
  
  switch(psm) {
  case 0:
  case 0x30:
    ResetPIXELAlpha__FPUci((uchar *)pImage,w * h);
    iVar6 = w << 2;
    break;
  case 1:
  case 0x31:
    iVar6 = w * 3;
    break;
  case 2:
  case 10:
  case 0x32:
  case 0x3a:
    iVar6 = w << 1;
    break;
  default:
    goto switchD_00267ec4_caseD_3;
  case 0x13:
  case 0x1b:
    iVar6 = w;
    break;
  case 0x14:
  case 0x24:
  case 0x2c:
    iVar6 = w / 2;
  }
  if (iVar6 == 0) {
    trap(7);
  }
  iVar5 = 0;
  iVar2 = 0x7ffc0 / iVar6;
  if (0 < h) {
    local_60 = tbp << 0x10;
    iVar4 = iVar2;
    do {
      iVar1 = iVar6 * iVar5;
      if (h < iVar2) {
        iVar4 = h - iVar5;
      }
      uVar3 = (undefined2)iVar5;
      iVar5 = iVar5 + iVar4;
      sceGsSetDefLoadImage
                (local_c0,local_60 >> 0x10,(short)tbw,(short)psm,0,uVar3,(short)w,(short)iVar4);
      FlushCache(0);
      sceGsExecLoadImage(local_c0,(uint16 *)(iVar1 + (int)pImage));
      sceGsSyncPath(0,0);
      iVar2 = iVar5 + iVar4;
    } while (iVar5 < h);
  }
switchD_00267ec4_caseD_3:
  return;
}

int Tim2CalcBufWidth(int psm, int w) {
  int iVar1;
  
  if ((uint)psm < 0x3b) {
                    /* WARNING: Could not recover jumptable at 0x0026801c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = (*(code *)(&PTR_LAB_003e6550)[psm])(psm,w);
    return iVar1;
  }
  return 0;
}

static int Tim2CalcBufSize(int psm, int w, int h) {
  int iVar1;
  
  iVar1 = w * h;
  if (iVar1 < 0) {
    iVar1 = iVar1 + 0x3f;
  }
  return iVar1 >> 6;
}

u_long GetTex0RegPK(u_int addr, int no, u_int offset) {
  ulong uVar1;
  
  uVar1 = GetTex0RegTM__FUiUi(addr + *(int *)(addr + no * 4 + 0x10),offset);
  return uVar1;
}

u_long GetTex0RegTM(u_int addr, u_int offset) {
	u_long ret;
	sceGsTex0 tex0;
	TIM2_PICTUREHEADER *ph;
	
  TIM2_PICTUREHEADER *pTVar1;
  ulong uVar2;
  sceGsTex0 tex0;
  
  pTVar1 = Tim2GetPictureHeader__FPvi((void *)addr,0);
  uVar2 = 0;
  if (pTVar1 != (TIM2_PICTUREHEADER *)0x0) {
    uVar2 = pTVar1->GsTex0;
    uVar2 = uVar2 & 0xfff8001fffffc000 | (uVar2 & 0x3fff) + (ulong)offset & 0x3fff |
            (((uVar2 & 0x7ffe000000000) >> 0x25) + (ulong)offset & 0x3fff) << 0x25;
  }
  return uVar2;
}

void MakeTim2Direct(u_int *tim2_addr, int tbp, int offset) {
	static char __FUNCTION__[15] = {
		/* [0] = */ 77,
		/* [1] = */ 97,
		/* [2] = */ 107,
		/* [3] = */ 101,
		/* [4] = */ 84,
		/* [5] = */ 105,
		/* [6] = */ 109,
		/* [7] = */ 50,
		/* [8] = */ 68,
		/* [9] = */ 105,
		/* [10] = */ 114,
		/* [11] = */ 101,
		/* [12] = */ 99,
		/* [13] = */ 116,
		/* [14] = */ 0
	};
	TIM2_PICTUREHEADER *tph;
	u_int *img_addr;
	u_int psm;
	u_int tbp0;
	u_int tbw;
	u_int nloop;
	sceGsTex0 sgtx0;
	Q_WORDDATA *pbuf;
	
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  uint uVar4;
  Q_WORDDATA *pQVar5;
  ulong uVar6;
  uint *puVar7;
  long lVar8;
  sceGsTex0 sgtx0;
  
  lVar8 = (long)tbp;
  puVar7 = tim2_addr + 4;
  if (*(char *)((int)tim2_addr + 5) != '\0') {
    puVar7 = (uint *)0x0;
    if (*(char *)((int)tim2_addr + 5) == '\x01') {
      puVar7 = tim2_addr + 0x20;
    }
  }
  if (puVar7 == (uint *)0x0) {
    SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
    PrintAssertReal("MakeTim2Direct Illegal");
  }
  else {
    uVar4 = puVar7[2];
    if (uVar4 == 0) {
      printf("MakeTim2Direct Size Is 0\n");
    }
    else {
      uVar6 = *(ulong *)(puVar7 + 6);
      uVar1 = *(ushort *)(puVar7 + 3);
      if (lVar8 < 0) {
        sgtx0._0_2_ = (undefined2)uVar6;
        lVar8 = (long)(int)(((ushort)sgtx0._0_2_ & 0x3fff) + offset);
      }
      pQVar5 = GetPK2Dbuf__Fv();
      pQVar5->ul64[0] = 0x1000000000008005;
      pQVar5->ul64[1] = 0xe;
      *(undefined8 *)((int)pQVar5 + 0x18) = 0x3f;
      pQVar5[1].ul64[0] = 0;
      pQVar5[2].ul64[0] =
           lVar8 << 0x20 | (long)(int)((uint)(uVar6 >> 0xe) & 0x3f) << 0x30 |
           (long)(int)((uint)(uVar6 >> 0x14) & 0x3f) << 0x38;
      *(undefined8 *)((int)pQVar5 + 0x28) = 0x50;
      *(undefined8 *)((int)pQVar5 + 0x38) = 0x51;
      pQVar5[3].ul64[0] = 0;
      uVar2 = *(ushort *)((int)puVar7 + 0x16);
      uVar3 = *(ushort *)(puVar7 + 5);
      *(undefined8 *)((int)pQVar5 + 0x48) = 0x52;
      pQVar5[4].ul64[0] = (ulong)uVar3 | (ulong)uVar2 << 0x20;
      *(undefined8 *)((int)pQVar5 + 0x58) = 0x53;
      pQVar5[5].ul64[0] = 0;
      EndPK2Dbuf__FP10Q_WORDDATA(pQVar5 + 6);
      SetPK2DImageTrans__FUii((int)puVar7 + (uint)uVar1,uVar4 >> 4);
    }
  }
  return;
}

void MakeClutDirect(u_int *tim2_addr, int cbp, int offset) {
	static char __FUNCTION__[15] = {
		/* [0] = */ 77,
		/* [1] = */ 97,
		/* [2] = */ 107,
		/* [3] = */ 101,
		/* [4] = */ 67,
		/* [5] = */ 108,
		/* [6] = */ 117,
		/* [7] = */ 116,
		/* [8] = */ 68,
		/* [9] = */ 105,
		/* [10] = */ 114,
		/* [11] = */ 101,
		/* [12] = */ 99,
		/* [13] = */ 116,
		/* [14] = */ 0
	};
	TIM2_PICTUREHEADER *tph;
	u_int *img_addr;
	u_int nloop;
	u_int cbp0;
	sceGsTex0 sgtx0;
	Q_WORDDATA *pbuf;
	int n;
	
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  Q_WORDDATA *pQVar4;
  ulong uVar5;
  uint *puVar6;
  long lVar7;
  sceGsTex0 sgtx0;
  
  lVar7 = (long)cbp;
  puVar6 = tim2_addr + 4;
  if (*(char *)((int)tim2_addr + 5) != '\0') {
    puVar6 = (uint *)0x0;
    if (*(char *)((int)tim2_addr + 5) == '\x01') {
      puVar6 = tim2_addr + 0x20;
    }
  }
  if (puVar6 == (uint *)0x0) {
    SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
    PrintAssertReal("MakeClutDirect Illegal");
  }
  else {
    uVar2 = puVar6[1];
    if (uVar2 != 0) {
      uVar1 = *(ushort *)(puVar6 + 3);
      uVar3 = puVar6[2];
      if (lVar7 < 0) {
        lVar7 = (long)(int)(((uint)((ulong)*(undefined8 *)(puVar6 + 6) >> 0x25) & 0x3fff) + offset);
      }
      pQVar4 = GetPK2Dbuf__Fv();
      pQVar4->ul64[0] = 0x1000000000008005;
      pQVar4->ul64[1] = 0xe;
      *(undefined8 *)((int)pQVar4 + 0x18) = 0x3f;
      pQVar4[1].ul64[0] = 0;
      *(undefined8 *)((int)pQVar4 + 0x28) = 0x50;
      pQVar4[2].ul64[0] = lVar7 << 0x20 | 0x1000000000000;
      *(undefined8 *)((int)pQVar4 + 0x38) = 0x51;
      pQVar4[3].ul64[0] = 0;
      if (*(ushort *)((int)puVar6 + 0xe) == 0x10) {
        uVar5 = 0x200000008;
      }
      else {
        uVar5 = (ulong)(*(ushort *)((int)puVar6 + 0xe) >> 4) << 0x20 | 0x10;
      }
      pQVar4[4].ul64[0] = uVar5;
      *(undefined8 *)((int)pQVar4 + 0x48) = 0x52;
      *(undefined8 *)((int)pQVar4 + 0x58) = 0x53;
      pQVar4[5].ul64[0] = 0;
      EndPK2Dbuf__FP10Q_WORDDATA(pQVar4 + 6);
      SetPK2DImageTrans__FUii((int)puVar6 + uVar1 + uVar3,uVar2 >> 4);
    }
  }
  return;
}

void MakeClutDirect_ChrMono(u_int *tim2_addr, int cbp, int offset, u_int *mono_addr) {
	TIM2_PICTUREHEADER *tph;
	TIM2_PICTUREHEADER *tph_mono;
	u_int *img_addr;
	u_int nloop;
	u_int cbp0;
	sceGsTex0 sgtx0;
	Q_WORDDATA *pbuf;
	int n;
	
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  Q_WORDDATA *pQVar4;
  ulong uVar5;
  uint *puVar6;
  long lVar7;
  uint *puVar8;
  sceGsTex0 sgtx0;
  
  lVar7 = (long)cbp;
  puVar8 = tim2_addr + 4;
  if (*(char *)((int)tim2_addr + 5) != '\0') {
    puVar8 = (uint *)0x0;
    if (*(char *)((int)tim2_addr + 5) == '\x01') {
      puVar8 = tim2_addr + 0x20;
    }
  }
  puVar6 = mono_addr + 4;
  if (*(char *)((int)mono_addr + 5) != '\0') {
    puVar6 = (uint *)0x0;
    if (*(char *)((int)mono_addr + 5) == '\x01') {
      puVar6 = mono_addr + 0x20;
    }
  }
  if (puVar6[1] != 0) {
    uVar2 = puVar8[1];
    uVar1 = *(ushort *)(puVar6 + 3);
    uVar3 = puVar6[2];
    if (lVar7 < 0) {
      lVar7 = (long)(int)(((uint)((ulong)*(undefined8 *)(puVar8 + 6) >> 0x25) & 0x3fff) + offset);
    }
    pQVar4 = GetPK2Dbuf__Fv();
    pQVar4->ul64[0] = 0x1000000000008005;
    pQVar4->ul64[1] = 0xe;
    *(undefined8 *)((int)pQVar4 + 0x18) = 0x3f;
    pQVar4[1].ul64[0] = 0;
    *(undefined8 *)((int)pQVar4 + 0x28) = 0x50;
    pQVar4[2].ul64[0] = lVar7 << 0x20 | 0x1000000000000;
    *(undefined8 *)((int)pQVar4 + 0x38) = 0x51;
    pQVar4[3].ul64[0] = 0;
    if (*(ushort *)((int)puVar8 + 0xe) == 0x10) {
      uVar5 = 0x200000008;
    }
    else {
      uVar5 = (ulong)(*(ushort *)((int)puVar8 + 0xe) >> 4) << 0x20 | 0x10;
    }
    pQVar4[4].ul64[0] = uVar5;
    *(undefined8 *)((int)pQVar4 + 0x48) = 0x52;
    *(undefined8 *)((int)pQVar4 + 0x58) = 0x53;
    pQVar4[5].ul64[0] = 0;
    EndPK2Dbuf__FP10Q_WORDDATA(pQVar4 + 6);
    SetPK2DImageTrans__FUii((int)puVar6 + uVar1 + uVar3,uVar2 >> 4);
  }
  return;
}

void PK2SendVram(u_int tm2_addr, int tbp, int cbp, int offset) {
	int i;
	int texnum;
	int *offtop;
	
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)tm2_addr;
  piVar1 = (int *)(tm2_addr + 0x10);
  if (0 < iVar3) {
    iVar2 = *piVar1;
    while( true ) {
      iVar3 = iVar3 + -1;
      MakeTim2Direct__FPUiii((uint *)(tm2_addr + iVar2),tbp,offset);
      iVar2 = *piVar1;
      piVar1 = piVar1 + 1;
      MakeClutDirect__FPUiii((uint *)(tm2_addr + iVar2),cbp,offset);
      if (iVar3 == 0) break;
      iVar2 = *piVar1;
    }
  }
  return;
}

void PK2SendVramOne(u_int tm2_addr, int num, int tbp, int cbp, int offset) {
	int texnum;
	int *offtop;
	
  int *piVar1;
  
  if ((-1 < num) && (num < *(int *)tm2_addr)) {
    piVar1 = (int *)(num * 4 + tm2_addr + 0x10);
    MakeTim2Direct__FPUiii((uint *)(tm2_addr + *piVar1),tbp,offset);
    MakeClutDirect__FPUiii((uint *)(tm2_addr + *piVar1),cbp,offset);
  }
  return;
}

void MakeTim2SendPacket(u_int tm2_addr, int offset) {
  MakeTim2Direct__FPUiii((uint *)tm2_addr,-1,offset);
  MakeClutDirect__FPUiii((uint *)tm2_addr,-1,offset);
  return;
}

void MakeTim2SendPacket_3Dpkt(u_int tm2_addr, int offset) {
  MakeTim2Direct__FPUiii((uint *)tm2_addr,-1,offset);
  MakeClutDirect__FPUiii((uint *)tm2_addr,-1,offset);
  return;
}

void MakeTim2SendPacket_Mono(u_int tm2_addr, int offset, u_int mono_addr) {
  MakeTim2Direct__FPUiii((uint *)tm2_addr,-1,offset);
  MakeClutDirect_ChrMono__FPUiiiT0((uint *)tm2_addr,-1,offset,(uint *)mono_addr);
  return;
}

void SetSprFile(u_int addr) {
  SetSprFile2__FUiUi(addr,0);
  return;
}

void SetSprFile2(u_int addr, u_int offset) {
  PK2SendVram__FUiiii(addr,-1,-1,offset);
  return;
}
