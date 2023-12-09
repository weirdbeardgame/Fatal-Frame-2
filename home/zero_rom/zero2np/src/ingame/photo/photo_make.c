// STATUS: NOT STARTED

#include "photo_make.h"

static SPRT_DAT photo_frame[14] = {
	/* [0] = */ {
		/* .tex0 = */ 0,
		/* .u = */ 1,
		/* .v = */ 49,
		/* .w = */ 14,
		/* .h = */ 14,
		/* .x = */ -2,
		/* .y = */ -4,
		/* .pri = */ 0,
		/* .alpha = */ 128,
		/* .flip = */ 0,
		/* .bln = */ 1
	},
	/* [1] = */ {
		/* .tex0 = */ 0,
		/* .u = */ 17,
		/* .v = */ 49,
		/* .w = */ 14,
		/* .h = */ 14,
		/* .x = */ -2,
		/* .y = */ 246,
		/* .pri = */ 0,
		/* .alpha = */ 128,
		/* .flip = */ 0,
		/* .bln = */ 1
	},
	/* [2] = */ {
		/* .tex0 = */ 0,
		/* .u = */ 33,
		/* .v = */ 49,
		/* .w = */ 14,
		/* .h = */ 14,
		/* .x = */ 372,
		/* .y = */ -4,
		/* .pri = */ 0,
		/* .alpha = */ 128,
		/* .flip = */ 0,
		/* .bln = */ 1
	},
	/* [3] = */ {
		/* .tex0 = */ 0,
		/* .u = */ 49,
		/* .v = */ 49,
		/* .w = */ 14,
		/* .h = */ 14,
		/* .x = */ 372,
		/* .y = */ 246,
		/* .pri = */ 0,
		/* .alpha = */ 128,
		/* .flip = */ 0,
		/* .bln = */ 1
	},
	/* [4] = */ {
		/* .tex0 = */ 0,
		/* .u = */ 1,
		/* .v = */ 1,
		/* .w = */ 124,
		/* .h = */ 14,
		/* .x = */ 12,
		/* .y = */ -4,
		/* .pri = */ 0,
		/* .alpha = */ 128,
		/* .flip = */ 0,
		/* .bln = */ 1
	},
	/* [5] = */ {
		/* .tex0 = */ 0,
		/* .u = */ 1,
		/* .v = */ 17,
		/* .w = */ 112,
		/* .h = */ 14,
		/* .x = */ 136,
		/* .y = */ -4,
		/* .pri = */ 0,
		/* .alpha = */ 128,
		/* .flip = */ 0,
		/* .bln = */ 1
	},
	/* [6] = */ {
		/* .tex0 = */ 0,
		/* .u = */ 1,
		/* .v = */ 1,
		/* .w = */ 124,
		/* .h = */ 14,
		/* .x = */ 372,
		/* .y = */ 260,
		/* .pri = */ 0,
		/* .alpha = */ 128,
		/* .flip = */ 0,
		/* .bln = */ 1
	},
	/* [7] = */ {
		/* .tex0 = */ 0,
		/* .u = */ 1,
		/* .v = */ 17,
		/* .w = */ 112,
		/* .h = */ 14,
		/* .x = */ 248,
		/* .y = */ 260,
		/* .pri = */ 0,
		/* .alpha = */ 128,
		/* .flip = */ 0,
		/* .bln = */ 1
	},
	/* [8] = */ {
		/* .tex0 = */ 0,
		/* .u = */ 1,
		/* .v = */ 33,
		/* .w = */ 124,
		/* .h = */ 14,
		/* .x = */ 248,
		/* .y = */ -4,
		/* .pri = */ 0,
		/* .alpha = */ 128,
		/* .flip = */ 0,
		/* .bln = */ 1
	},
	/* [9] = */ {
		/* .tex0 = */ 0,
		/* .u = */ 1,
		/* .v = */ 33,
		/* .w = */ 124,
		/* .h = */ 14,
		/* .x = */ 136,
		/* .y = */ 260,
		/* .pri = */ 0,
		/* .alpha = */ 128,
		/* .flip = */ 0,
		/* .bln = */ 1
	},
	/* [10] = */ {
		/* .tex0 = */ 0,
		/* .u = */ 1,
		/* .v = */ 1,
		/* .w = */ 124,
		/* .h = */ 14,
		/* .x = */ -2,
		/* .y = */ 246,
		/* .pri = */ 0,
		/* .alpha = */ 128,
		/* .flip = */ 0,
		/* .bln = */ 1
	},
	/* [11] = */ {
		/* .tex0 = */ 0,
		/* .u = */ 1,
		/* .v = */ 17,
		/* .w = */ 112,
		/* .h = */ 14,
		/* .x = */ -2,
		/* .y = */ 122,
		/* .pri = */ 0,
		/* .alpha = */ 128,
		/* .flip = */ 0,
		/* .bln = */ 1
	},
	/* [12] = */ {
		/* .tex0 = */ 0,
		/* .u = */ 1,
		/* .v = */ 1,
		/* .w = */ 124,
		/* .h = */ 14,
		/* .x = */ 386,
		/* .y = */ 10,
		/* .pri = */ 0,
		/* .alpha = */ 128,
		/* .flip = */ 0,
		/* .bln = */ 1
	},
	/* [13] = */ {
		/* .tex0 = */ 0,
		/* .u = */ 1,
		/* .v = */ 17,
		/* .w = */ 112,
		/* .h = */ 14,
		/* .x = */ 386,
		/* .y = */ 134,
		/* .pri = */ 0,
		/* .alpha = */ 128,
		/* .flip = */ 0,
		/* .bln = */ 1
	}
};

static void _fixed_array_assert(char *strType, size_t v0, size_t v1) {
	static char *str = 0x3c3280;
	
  g3ddbgAssert__FbPCce(false,str_849);
  return;
}

static void** void * * _fixed_array_verifyrange<void *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_assert__FPCcUiUi(s_void__003f38c0,_max,v);
  }
  return (void **)0x0;
}

static char** char * * _fixed_array_verifyrange<char *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_assert__FPCcUiUi(s_char__003f38c8,_max,v);
  }
  return (char **)0x0;
}

static unsigned int** unsigned int * * _fixed_array_verifyrange<unsigned int *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_assert__FPCcUiUi("unsigned int*",_max,v);
  }
  return (uint **)0x0;
}

void DrawPhotoBuffer(u_int pri, int addr, int szfl, int x, int y, int szw, int szh, int mszw, int mszh, int ftype, int alp, int ztype) {
	int mszh;
	int ftype;
	u_char alp;
	int dbw;
	float fh;
	float xx;
	float yy;
	u_long zbuf;
	u_long test;
	int nloop;
	int bline;
	int rline;
	int oline;
	int bw;
	Q_WORDDATA *pbuf;
	SPRT_DAT2 sd;
	DISP_SPRT2 ds;
	
  Q_WORDDATA *pQVar1;
  uint uVar2;
  uchar a;
  int iVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  int iVar7;
  uint uVar8;
  long lVar9;
  float fVar10;
  float fVar11;
  float y_00;
  float fVar12;
  float x2;
  float x1;
  float y2;
  float fVar13;
  float fVar14;
  float x_00;
  SPRT_DAT2 sd;
  DISP_SPRT2 ds;
  
  iVar3 = mszw + -1;
  if (mszw + -1 < 0) {
    iVar3 = mszw + 0x3e;
  }
  lVar9 = (long)mszh;
  iVar3 = (iVar3 >> 6) + 1;
  if (0x80000 < iVar3 * mszh * 0x80) {
    printf("warning!\n");
  }
  uVar8 = iVar3 * 0x40;
  if (0 < lVar9) {
    do {
      lVar6 = 100;
      if (lVar9 < 0x65) {
        lVar6 = lVar9;
      }
      iVar4 = mszh - (int)lVar9;
      iVar7 = uVar8 * (int)lVar6;
      lVar9 = (long)((int)lVar9 - (int)lVar6);
      if (iVar7 < 0) {
        iVar7 = iVar7 + 3;
      }
      pQVar1 = GetPK2Dbuf__Fv();
      pQVar1->ul64[0] = 0x1000000000008004;
      pQVar1->ul64[1] = 0xe;
      *(undefined8 *)((int)pQVar1 + 0x18) = 0x50;
      iVar5 = uVar8 * iVar4;
      pQVar1[1].ul64[0] = (long)iVar3 << 0x30 | 0x2bc000000000;
      pQVar1[2].ul64[0] = (long)iVar4 << 0x30;
      *(undefined8 *)((int)pQVar1 + 0x28) = 0x51;
      *(undefined8 *)((int)pQVar1 + 0x38) = 0x52;
      pQVar1[3].ul64[0] = (long)(int)uVar8 | lVar6 << 0x20;
      *(undefined8 *)((int)pQVar1 + 0x48) = 0x53;
      pQVar1[4].ul64[0] = 0;
      EndPK2Dbuf__FP10Q_WORDDATA(pQVar1 + 5);
      if (iVar5 < 0) {
        iVar5 = iVar5 + 3;
      }
      SetPK2DImageTrans__FUii(addr + (iVar5 >> 2) * 0x10,iVar7 >> 2);
    } while (0 < lVar9);
  }
  x_00 = (((float)x - 320.0) - 1.0) + 320.0;
  y_00 = (((float)y - 224.0) - 1.0) + 224.0;
  CopySprDToSpr2__FP10DISP_SPRT2P9SPRT_DAT2(&ds,&sd);
  uVar8 = log_2__FUi(uVar8);
  uVar2 = log_2__FUi(mszh);
  ds.tex0 = (ulong)((long)(int)uVar8 << 0x20) >> 6 | 0x2000000000102bc0 |
            (long)iVar3 << 0xe | (ulong)((long)(int)uVar2 << 0x20) >> 2;
  if (ftype == 1) {
    ds.v1 = 0x80;
    ds.u1 = 0x80;
    fVar10 = ((float)mszw - 8.0) * 16.0;
    ds.u2 = (short)(int)fVar10;
    if (2.147484e+09 <= fVar10) {
      ds.u2 = (short)(int)(fVar10 - 2.147484e+09);
    }
    fVar10 = ((float)mszh - 8.0) * 16.0;
    ds.v2 = (short)(int)fVar10;
    if (2.147484e+09 <= fVar10) {
      ds.v2 = (short)(int)(fVar10 - 2.147484e+09);
    }
  }
  else {
    ds.u1 = 0;
    fVar10 = (float)mszw * 16.0;
    ds.u2 = (short)(int)fVar10;
    ds.v1 = 0;
    if (2.147484e+09 <= fVar10) {
      ds.u2 = (short)(int)(fVar10 - 2.147484e+09);
    }
    fVar10 = (float)mszh * 16.0;
    ds.v2 = (short)(int)fVar10;
    if (2.147484e+09 <= fVar10) {
      ds.v2 = (short)(int)(fVar10 - 2.147484e+09);
    }
  }
  fVar10 = (float)szw;
  fVar14 = (float)szh;
  ds.alpreg = 0x8000000064;
  ds.zbuf = 0x10a000118;
  ds.test = 0x30003;
  ds.z = 0xfff00;
  ds.b = 0x80;
  ds.r = 0x80;
  ds.g = 0x80;
  a = (uchar)alp;
  ds.w = fVar10;
  ds.h = fVar14;
  ds.x = x_00;
  ds.y = y_00;
  ds.alp = a;
  DispSprD2__FP10DISP_SPRT2(&ds);
  if (ftype == 2) {
    fVar13 = (fVar10 - 48.0) / 84.0 + 2.0;
    fVar12 = 2.0;
    if (2.0 <= fVar13) {
      fVar12 = fVar13;
    }
    fVar11 = 2.0;
    if (2.0 <= fVar13) {
      fVar11 = fVar13;
    }
    fVar13 = 1.0;
    y2 = y_00 + 1.0;
    x1 = (x_00 - fVar12) + 2.0;
    x2 = (x_00 + fVar10 + fVar12) - 2.0;
    SetPanel__FUiffffUcUcUcUc(pri,x1,(y_00 - fVar11) + 1.0,x2,y2,0xcf,0xbd,0xa1,a);
    fVar12 = (y_00 + fVar14) - fVar13;
    SetPanel__FUiffffUcUcUcUc(pri,x1,fVar12,x2,(y_00 + fVar14 + fVar11) - fVar13,0xcf,0xbd,0xa1,a);
    SetPanel__FUiffffUcUcUcUc(pri,x1,y2,x_00 + 2.0,fVar12,0xcf,0xbd,0xa1,a);
    SetPanel__FUiffffUcUcUcUc(pri,(x_00 + fVar10) - 2.0,y2,x2,fVar12,0xcf,0xbd,0xa1,a);
  }
  else if ((2 < ftype) && (ftype == 3)) {
    DrawPhotoFrame__Fff(x_00,y_00);
  }
  return;
}

void CopyScreenToBuffer2(int addr_i, int addr_o, int szfl, int mx, int my, int mw, int mh) {
	int x;
	int y;
	int oneli;
	int onelo;
	int myy;
	
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar2 = mw + -1;
  if (mw + -1 < 0) {
    iVar2 = mw + 0x3e;
  }
  PK2DKick__Fv();
  LocalCopyLtoB__Fiii(3,1,addr_i);
  iVar6 = 0;
  if (0 < mh) {
    iVar7 = 0;
    do {
      if (0 < mw) {
        puVar3 = (undefined4 *)(iVar7 * 4 + addr_o);
        puVar4 = (undefined4 *)(((my / 2 + iVar6) * 0x280 + mx) * 4 + 0x1f05b00);
        iVar5 = mw;
        do {
          uVar1 = *puVar4;
          puVar4 = puVar4 + 1;
          iVar5 = iVar5 + -1;
          *puVar3 = uVar1;
          puVar3 = puVar3 + 1;
        } while (iVar5 != 0);
      }
      iVar6 = iVar6 + 1;
      iVar7 = iVar7 + (iVar2 >> 6) * 0x40 + 0x40;
    } while (iVar6 < mh);
  }
  return;
}

void MakeSmallPhotoV(float x, float y) {
	Q_WORDDATA *ppbuf;
	
  undefined8 uVar1;
  void *pvVar2;
  Q_WORDDATA *pQVar3;
  ulong uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  _DRAW_ENV_5 local_c0;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  ulong local_70;
  
  local_90 = 0x44;
  local_88 = 0x100000161;
  local_78 = 0x31003;
  local_80 = 0;
  local_c0.alpha = 0x44;
  local_c0.tex1 = 0x100000161;
  local_c0.zbuf = *(ulong *)((int)pdrawenv + 0x10) & 0xf0001ff | 0x100000000;
  local_c0.test = 0x31003;
  local_c0.clamp = 0;
  local_70 = local_c0.zbuf;
  SetDrawEnv__FiPC11_DRAW_ENV_5(0,&local_c0);
  pQVar3 = GetPK2Dbuf__Fv();
  pQVar3->ul64[0] = 0x1000000000008004;
  pQVar3->ul64[1] = 0xe;
  *(undefined8 *)((int)pQVar3 + 0x18) = 0x3f;
  pQVar3[1].ul64[0] = 0;
  *(undefined8 *)((int)pQVar3 + 0x28) = 0x4c;
  pQVar3[2].ul64[0] = 0x106015e;
  *(undefined8 *)((int)pQVar3 + 0x38) = 0x18;
  pQVar3[3].ul64[0] = 0x790800006c08;
  uVar4 = sys_wrk.count + 1;
  *(undefined8 *)((int)pQVar3 + 0x48) = 6;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/g3dxVu0.h */
                    /* end of inlined section */
  pQVar3[4].ul64[0] = (uVar4 & 1) * 0x1180 | 0xe68128000;
  pvVar2 = pdrawenv;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/g3dxVu0.h */
                    /* end of inlined section */
  *(undefined8 *)((int)pQVar3 + 0x58) = 0x4343;
  pQVar3[5].ul64[0] = 0x408b400000008001;
  *(int *)((int)pQVar3 + 100) = (int)y * 0x10 + 8;
  pQVar3[6].ui32[0] = (int)x * 0x10 + 8;
  pQVar3[7].fl32[0] = 3.87431e-41;
  *(undefined4 *)((int)pQVar3 + 0x74) = 0x7900;
  *(undefined8 *)((int)pQVar3 + 0x78) = 0;
  *(int *)((int)pQVar3 + 0x84) = (int)y * 0x10 + 0xff8;
  pQVar3[8].ui32[0] = (int)x * 0x10 + 0x17f8;
  pQVar3[9].fl32[0] = 3.975203e-41;
  *(undefined4 *)((int)pQVar3 + 0x94) = 0x79f0;
  *(undefined8 *)((int)pQVar3 + 0x98) = 0;
  *(undefined8 *)((int)pQVar3 + 0xa8) = 0xe;
  pQVar3[10].ul64[0] = 0x1000000000008003;
  uVar1 = *pvVar2;
                    /* WARNING: Load size is inaccurate */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/g3dxVu0.h */
  uVar5 = *(undefined4 *)((int)pvVar2 + 8);
  uVar6 = *(undefined4 *)((int)pvVar2 + 0xc);
  pQVar3[0xb].ui32[0] = (uint)uVar1;
  *(int *)((int)pQVar3 + 0xb4) = (int)((ulong)uVar1 >> 0x20);
  *(undefined4 *)((int)pQVar3 + 0xb8) = uVar5;
  *(undefined4 *)((int)pQVar3 + 0xbc) = uVar6;
  uVar1 = *(undefined8 *)((int)pdrawenv + 0x10);
  uVar5 = *(undefined4 *)((int)pdrawenv + 0x18);
  uVar6 = *(undefined4 *)((int)pdrawenv + 0x1c);
  pQVar3[0xc].ui32[0] = (uint)uVar1;
  *(int *)((int)pQVar3 + 0xc4) = (int)((ulong)uVar1 >> 0x20);
  *(undefined4 *)((int)pQVar3 + 200) = uVar5;
  *(undefined4 *)((int)pQVar3 + 0xcc) = uVar6;
  uVar1 = *(undefined8 *)((int)pdrawenv + 0x20);
  uVar5 = *(undefined4 *)((int)pdrawenv + 0x28);
  uVar6 = *(undefined4 *)((int)pdrawenv + 0x2c);
  pQVar3[0xd].ui32[0] = (uint)uVar1;
  *(int *)((int)pQVar3 + 0xd4) = (int)((ulong)uVar1 >> 0x20);
  *(undefined4 *)((int)pQVar3 + 0xd8) = uVar5;
  *(undefined4 *)((int)pQVar3 + 0xdc) = uVar6;
                    /* end of inlined section */
  EndPK2Dbuf__FP10Q_WORDDATA(pQVar3 + 0xe);
  return;
}

void DrawSPhotoFromSmallPhotoArea(int n, int pri, int ftype, int x, int y, u_char alp) {
  DrawPhotoBuffer__FUiiiiiiiiiiUci
            (pri,n * 0x1000 + 0x19a9b00,0,x,y,0x2d,0x1e,0x2d,0xf,ftype,(uint)alp,0);
  return;
}

void DrawSPhotoFromSmallPhotoAreaAddr(int addr, int n, int pri, int ftype, int x, int y, u_char alp) {
	int addr2;
	
  DrawPhotoBuffer__FUiiiiiiiiiiUci(pri,addr + n * 0x1000,0,x,y,0x2d,0x1e,0x2d,0xf,ftype,(uint)alp,0)
  ;
  return;
}

void DrawSPhotoFromSmallPhotoArea2(int n, int pri, int ftype, int x, int y, int szw, int szh, u_char alp) {
  DrawPhotoBuffer__FUiiiiiiiiiiUci
            (pri,n * 0x1000 + 0x19a9b00,0,x,y,szw,szh,0x2d,0xf,ftype,(uint)alp,0);
  return;
}

void DrawSPhotoFromSmallPhotoAreaAddr2(int addr, int n, int pri, int ftype, int x, int y, int szw, int szh, int alp) {
	int addr2;
	
  DrawPhotoBuffer__FUiiiiiiiiiiUci(pri,addr + n * 0x1000,0,x,y,szw,szh,0x2d,0xf,ftype,alp & 0xff,0);
  return;
}

void CompressData(int addri, int addro, int n) {
	float rate;
	int one_size;
	u_int quality;
	
  uint uVar1;
  float fVar2;
  
  printf("kagyaku compress\n");
  fVar2 = SlideEncodeHeader__FPUcT0i((uchar *)addri,(uchar *)(addri + 0x30000),0x30000);
  printf("kagayku_rate == %f\n");
  if (DAT_003ee6a8 < fVar2) {
    uVar1 = 1;
    while( true ) {
      printf("hikagyaku compress\n");
      memset((char *)(addri + 0x30000),0xff,0x30020);
      fVar2 = CompressFile__FPUiPcUic((uint *)addri,(char *)(addri + 0x30000),0x30020,(char)uVar1);
      if (fVar2 < DAT_003ee6ac) break;
      if (4 < uVar1 + 1) {
        printf(&DAT_003c3330);
        printf("Out/In : %f\n");
        *(undefined4 *)(addri + 0x30004) = 2;
        break;
      }
      printf("Out/In  : %f\n");
      printf("Warning : quality down !!!\n");
      uVar1 = uVar1 + 1;
    }
  }
  memcpy((void *)(n * 0xd360 + addro),(void *)(addri + 0x30000),0xd360);
  printf("compress end\n");
  return;
}

void UncompressData(int addri, int n, int addro) {
	int one_size;
	u_int i;
	u_int type;
	u_int no;
	
  int iVar1;
  uchar uVar2;
  uchar *base;
  uint uVar3;
  
  if (n == 0xff) {
    uVar2 = GetPhotoExpandNo__Fv();
    n = (int)(char)uVar2;
  }
  base = (uchar *)(addri + n * 0xd360);
  iVar1 = *(int *)(base + 4);
  if (iVar1 == 1) {
    uVar3 = 0;
    do {
      uVar3 = uVar3 + 1;
      ExpandFile__FPcPUi((char *)(addri + n * 0xd360),(uint *)addro);
    } while (uVar3 < 0x1e);
  }
  else {
    if (iVar1 == 0) {
      SlideDecodeHeader__FPUcT0(base,(uchar *)addro);
    }
    else {
      if (iVar1 != 2) {
        return;
      }
      memset((void *)addro,0,0x30020);
    }
    photo_expand.cnt = '\0';
    photo_expand.sta = '\x02';
  }
  return;
}

void CompPhotoFromWorkArea(int n) {
  CompressData__Fiii(0x1e79b00,0x19b9b00,n);
  return;
}

void UncompressPhoto(int n) {
  ReqPhotoExpand__FUc((uchar)n);
  return;
}

void DrawPhotoFromWorkArea(int pri, int ftype, int x, int y, int szw, int szh, u_char alp) {
  char cVar1;
  uchar uVar2;
  
  cVar1 = CheckPhotoExpandEnd__Fv();
  if (cVar1 == '\0') {
    uVar2 = GetPhotoExpand__Fv();
    if (uVar2 == '\x01') {
      UncompressData__Fiii(0x19b9b00,0xff,0x1e79b00);
    }
  }
  else {
    DrawPhotoBuffer__FUiiiiiiiiiiUci(pri,0x1e79b00,0,x,y,szw,szh,0x180,0x80,ftype,(uint)alp,0);
  }
  return;
}

void DrawPhotoFromWorkAreaAddr(int addr, int pri, int ftype, int x, int y, int szw, int szh, u_char alp) {
	int addr2;
	
  char cVar1;
  uchar uVar2;
  
  cVar1 = CheckPhotoExpandEnd__Fv();
  if (cVar1 == '\0') {
    uVar2 = GetPhotoExpand__Fv();
    if (uVar2 == '\x01') {
      UncompressData__Fiii(addr + 0x10000,0xff,0x1e79b00);
    }
  }
  else {
    DrawPhotoBuffer__FUiiiiiiiiiiUci(pri,0x1e79b00,0,x,y,szw,szh,0x180,0x80,ftype,(uint)alp,0);
  }
  return;
}

float SlideEncodeHeader(unsigned char *base, unsigned char *addrs, int max_size) {
  int iVar1;
  
  *(undefined4 *)(addrs + 4) = 0;
  iVar1 = SlideEncode(base,addrs + 0x20,max_size);
  *(int *)addrs = iVar1;
  return (float)iVar1 / (float)max_size;
}

void SlideDecodeHeader(unsigned char *base, unsigned char *addrs) {
  SlideDecode(base + 0x20,addrs,*(int *)base);
  return;
}

void DispPhotoFrame1(int fl, float x, float y, int iPercent) {
	static int cnt = 0;
	static u_char alp1 = 0;
	static u_char alp2 = 0;
	static int flash_fr = 0;
	static int fl_cnt = 0;
	int rgb;
	int i;
	int j;
	DISP_SPRT ds;
	SPRT_DAT sd;
	SQAR_DAT sq;
	DISP_SQAR dq;
	int i;
	DISP_SPRT ds;
	SPRT_DAT sd;
	SQAR_DAT sq;
	DISP_SQAR dq;
	int i;
	
  undefined *puVar1;
  uint uVar2;
  ulong *puVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  uchar *puVar7;
  int iVar8;
  uchar uVar9;
  float fVar10;
  float fVar11;
  DISP_SPRT DStack_450;
  SPRT_DAT local_3c0;
  undefined auStack_3a0 [7];
  undefined auStack_399 [8];
  undefined auStack_391 [8];
  ulong uStack_389;
  DISP_SQAR DStack_380;
  DISP_SPRT DStack_300;
  undefined local_270 [32];
  DISP_SPRT ds;
  SPRT_DAT sd;
  DISP_SPRT DStack_1a0;
  undefined local_110 [32];
  SQAR_DAT sq;
  DISP_SQAR dq;
  
  if (fl == 0) {
    flash_fr_1021 = 0x13;
    cnt_1018 = 0;
    alp1_1019 = 0x80;
    if ((plyr_wrk.cmn_wrk.st.sta & 0x20) == 0) {
      flash_fr_1021 = 0x3b;
    }
    alp2_1020 = 0;
    fl_cnt_1022 = flash_fr_1021;
  }
  uVar9 = (char)((iPercent * 0xbf) / 100) + '@';
  if (fl == 3) {
    local_3c0.tex0 = DAT_003c33a8;
    local_3c0._8_8_ = DAT_003c33b0;
    local_3c0._16_8_ = DAT_003c33b8;
    cVar5 = alp2_1020 * -4;
    local_3c0._24_8_ = DAT_003c33c0;
    CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&DStack_450,&local_3c0);
    DStack_450.tex0 = (sys_wrk.count + 1 & 1) * 0x1180 | 0x2000000268128000;
    DStack_450.zbuf = 0xa000118;
    DStack_450.test = 0x50003;
    DStack_450.alphar = 0x44;
    DStack_450.tex1 = 0x161;
    DStack_450.x = -0.5;
    DStack_450.y = -1.0;
    DStack_450.b = 0x80;
    DStack_450.z = 0xffff0;
    DStack_450.r = 0x80;
    DStack_450.g = 0x80;
    DStack_450.alpha = cVar5 + 0x80;
    DispSprD__FP9DISP_SPRT(&DStack_450);
    bVar4 = 0x1f < alp2_1020;
    alp2_1020 = alp2_1020 + 1;
    if (bVar4) {
      alp2_1020 = 0x20;
    }
  }
  else {
    puVar1 = auStack_3a0 + 7;
    uVar2 = (uint)puVar1 & 7;
    *(ulong *)(puVar1 + -uVar2) =
         *(ulong *)(puVar1 + -uVar2) & -1L << (uVar2 + 1) * 8 | DAT_003c33c8 >> (7 - uVar2) * 8;
    _auStack_3a0 = DAT_003c33c8;
    uVar2 = (uint)auStack_391 & 7;
    puVar3 = (ulong *)(auStack_391 + -uVar2);
    *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | DAT_003c33d0 >> (7 - uVar2) * 8;
    stack0xfffffc68 = DAT_003c33d0;
    uVar2 = (uint)&uStack_389 & 7;
    puVar3 = (ulong *)((int)&uStack_389 - uVar2);
    *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | DAT_003c33d8 >> (7 - uVar2) * 8;
    stack0xfffffc70 = DAT_003c33d8;
    CopySqrDToSqr__FP9DISP_SQARP8SQAR_DAT(&DStack_380,(SQAR_DAT *)auStack_3a0);
    DStack_380.x[0] = (int)x;
    DStack_380.y[0] = (int)y;
    DStack_380.pri = 0xb0;
    DStack_380.z = 0xfff4f;
    DStack_380.x[1] = DStack_380.x[0] + 0x180;
    DStack_380.y[2] = DStack_380.y[0] + 0x100;
    DStack_380.zbuf = 0xa000118;
    puVar7 = DStack_380.r;
    DStack_380.test = 0x30003;
    iVar6 = 0;
    do {
      iVar8 = iVar6 + 1;
      *puVar7 = '\0';
      DStack_380.g[iVar6] = '\0';
      puVar7 = puVar7 + 1;
      DStack_380.b[iVar6] = '\0';
      iVar6 = iVar8;
    } while (iVar8 < 4);
    DStack_380.alpha = 0x80;
    DStack_380.x[2] = DStack_380.x[0];
    DStack_380.x[3] = DStack_380.x[1];
    DStack_380.y[1] = DStack_380.y[0];
    DStack_380.y[3] = DStack_380.y[2];
    DispSqrD__FP9DISP_SQAR(&DStack_380);
    local_270._0_8_ = DAT_003c33e0;
    local_270._8_2_ = (short)DAT_003c33e8;
    local_270._10_2_ = DAT_003c33e8._2_2_;
    local_270._12_2_ = DAT_003c33e8._4_2_;
    local_270._14_2_ = DAT_003c33e8._6_2_;
    local_270._16_4_ = (int)DAT_003c33f0;
    local_270._20_4_ = DAT_003c33f0._4_4_;
    local_270._24_4_ = (int)DAT_003c33f8;
    local_270[28] = DAT_003c33f8._4_1_;
    local_270[29] = DAT_003c33f8._5_1_;
    local_270[30] = DAT_003c33f8._6_1_;
    local_270[31] = DAT_003c33f8._7_1_;
    CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&DStack_300,(SPRT_DAT *)local_270);
    DStack_300.z = 0xfffef;
    DStack_300.tex0 = 0x2000000264116bc0;
    DStack_300.zbuf = 0x10a000118;
    DStack_300.test = 0x30003;
    DStack_300.alphar = 0x44;
    DStack_300.pri = 0x10;
    DStack_300.scw = 2.0;
    DStack_300.csx = -0.5;
    DStack_300.csy = -1.0;
    DStack_300.x = -0.5;
    DStack_300.y = -1.0;
    DStack_300.sch = 1.0;
    DStack_300.r = uVar9;
    DStack_300.g = uVar9;
    DStack_300.b = uVar9;
    DispSprD__FP9DISP_SPRT(&DStack_300);
    if ((fl == 1) && (0 < fl_cnt_1022)) {
      if (flash_fr_1021 == 0) {
        trap(7);
      }
      fVar11 = DAT_003ee6b0;
      fVar10 = sinf(((float)((fl_cnt_1022 * 0x5a) / flash_fr_1021) * DAT_003ee6b0) / 180.0);
      if (flash_fr_1021 == 0) {
        trap(7);
      }
      fVar11 = sinf(((float)((fl_cnt_1022 * 0x5a) / flash_fr_1021) * fVar11) / 180.0);
      SubBlur__FiUcffffi(1,(uchar)(int)(fVar11 * 80.0),1.0,180.0,320.0,112.0,1);
      uVar9 = (uchar)(int)(fVar10 * 160.0);
      SubContrast2__FUcUc(uVar9,uVar9);
      fl_cnt_1022 = fl_cnt_1022 + -1;
    }
    iVar6 = FurnPhotoFlgIsUp__Fv();
    if (iVar6 != 0) {
      sd.tex0 = DAT_003c3400;
      sd.u = (short)DAT_003c3408;
      sd.v = DAT_003c3408._2_2_;
      sd.w = DAT_003c3408._4_2_;
      sd.h = DAT_003c3408._6_2_;
      sd.x = (int)DAT_003c3410;
      sd.y = DAT_003c3410._4_4_;
      sd.pri = (int)DAT_003c3418;
      sd.alpha = DAT_003c3418._4_1_;
      sd.flip = DAT_003c3418._5_1_;
      sd.bln = DAT_003c3418._6_1_;
      sd._31_1_ = DAT_003c3418._7_1_;
      CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&ds,&sd);
      ds.csy = y - 1.0;
      ds.csx = x - 0.5;
      ds.z = 0xfff9f;
      ds.tex0 = 0x20000001e401baa0;
      ds.zbuf = 0x10a000118;
      ds.test = 0x30003;
      ds.alphar = 0x44;
      ds.pri = 0x60;
      ds.scw = 1.0;
      ds.sch = 2.0;
      ds.alpha = alp1_1019;
      ds.x = ds.csx;
      ds.y = ds.csy;
      DispSprD__FP9DISP_SPRT(&ds);
      if (fl == 2) {
        iVar6 = alp1_1019 - 4;
        if (iVar6 < 0) {
          iVar6 = 0;
        }
        alp1_1019 = (byte)iVar6;
      }
    }
    local_110._24_4_ = (int)DAT_003c33c0;
    local_110[28] = DAT_003c33c0._4_1_;
    local_110[29] = DAT_003c33c0._5_1_;
    local_110[30] = DAT_003c33c0._6_1_;
    local_110[31] = DAT_003c33c0._7_1_;
    local_110._0_8_ = DAT_003c33a8;
    local_110._8_2_ = (short)DAT_003c33b0;
    local_110._10_2_ = DAT_003c33b0._2_2_;
    local_110._12_2_ = DAT_003c33b0._4_2_;
    local_110._14_2_ = DAT_003c33b0._6_2_;
    local_110._16_4_ = (int)DAT_003c33b8;
    local_110._20_4_ = DAT_003c33b8._4_4_;
    CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&DStack_1a0,(SPRT_DAT *)local_110);
    DStack_1a0.alphar = 0x44;
    DStack_1a0.z = 0xfff2f;
    DStack_1a0.b = '@';
    DStack_1a0.r = '@';
    DStack_1a0.g = '@';
    DStack_1a0.tex0 = 0x2000000264116bc0;
    DStack_1a0.pri = 0xd0;
    DStack_1a0.scw = 2.0;
    DStack_1a0.sch = 1.0;
    DStack_1a0.csx = -0.5;
    DStack_1a0.csy = -1.0;
    DStack_1a0.zbuf = 0xa000118;
    DStack_1a0.test = 0x5000d;
    DStack_1a0.x = -0.5;
    DStack_1a0.y = -1.0;
    DispSprD__FP9DISP_SPRT(&DStack_1a0);
    puVar1 = (undefined *)((int)&sq.h + 3);
    uVar2 = (uint)puVar1 & 7;
    puVar3 = (ulong *)(puVar1 + -uVar2);
    *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | DAT_003c33c8 >> (7 - uVar2) * 8;
    sq.w = (undefined4)DAT_003c33c8;
    sq.h = DAT_003c33c8._4_4_;
    puVar1 = (undefined *)((int)&sq.y + 3);
    uVar2 = (uint)puVar1 & 7;
    puVar3 = (ulong *)(puVar1 + -uVar2);
    *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | DAT_003c33d0 >> (7 - uVar2) * 8;
    sq.x = (undefined4)DAT_003c33d0;
    sq.y = DAT_003c33d0._4_4_;
    uVar2 = (uint)&sq.alpha & 7;
    puVar7 = &sq.alpha + -uVar2;
    *(ulong *)puVar7 = *(ulong *)puVar7 & -1L << (uVar2 + 1) * 8 | DAT_003c33d8 >> (7 - uVar2) * 8;
    sq.pri = (undefined4)DAT_003c33d8;
    sq.r = DAT_003c33d8._4_1_;
    sq.g = DAT_003c33d8._5_1_;
    sq.b = DAT_003c33d8._6_1_;
    sq.alpha = DAT_003c33d8._7_1_;
    CopySqrDToSqr__FP9DISP_SQARP8SQAR_DAT(&dq,&sq);
    dq.zbuf = 0xa000118;
    dq.test = 0x5000d;
    dq.alphar = 0x84;
    dq.pri = 0xc0;
    dq.z = 0xfff3f;
    puVar7 = dq.r;
    iVar6 = 0;
    do {
      iVar8 = iVar6 + 1;
      *puVar7 = '0';
      dq.g[iVar6] = '0';
      puVar7 = puVar7 + 1;
      dq.b[iVar6] = '0';
      iVar6 = iVar8;
    } while (iVar8 < 4);
    dq.alpha = 200;
    DispSqrD__FP9DISP_SQAR(&dq);
    SubFadeFrame__FUcUi('`',0x90);
  }
  return;
}

void DrawPhotoFilterPK2(u_int sw, float x, float y, SPRT_DAT *dat, int photo_cnt, void *tex_adrs, int bGradual) {
	DISP_SPRT ds;
	int alp;
	int time;
	
  float fVar1;
  uint uVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  DISP_SPRT ds;
  
  uVar3 = 0;
  if (sw == 1) {
    uVar3 = (uint)dat->alpha;
  }
  else if (sw == 0) {
    if (photo_cnt < 0x33) {
      uVar3 = (int)((uint)dat->alpha * (0x32 - photo_cnt)) / 0x32;
    }
    else {
      uVar3 = (uint)dat->alpha;
    }
  }
  else if (sw == 2) {
    if (photo_cnt < 0x33) {
      uVar3 = (int)((uint)dat->alpha * photo_cnt) / 0x32;
    }
    else {
      uVar3 = (uint)dat->alpha;
    }
  }
  if (tex_adrs != (void *)0x0) {
    PK2SendVram__FUiiii((uint)tex_adrs,-1,-1,0);
  }
  ds.csx = x;
  if (bGradual == 0) {
    CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&ds,dat);
    ds.tex1 = 0x161;
    ds.zbuf = 0x10a000118;
    ds.scw = 384.0 / (float)(uint)(ushort)dat->w;
    ds.test = 0x30003;
    if (dat->h == 0) {
      trap(7);
    }
    ds.alphar = 0x48;
    ds.alpha = (uchar)uVar3;
    ds.sch = (float)(0x100 / (ushort)dat->h);
    ds.csy = y;
    ds.x = x;
    ds.y = y;
    DispSprD__FP9DISP_SPRT(&ds);
  }
  else {
    uVar2 = uVar3 + 3;
    if (-1 < (int)uVar3) {
      uVar2 = uVar3;
    }
    fVar5 = (1.0 - (float)uVar3 / (float)(uint)dat->alpha) * 3.0;
    CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&ds,dat);
    ds.y = y - fVar5;
    fVar4 = y + fVar5;
    ds.scw = 384.0 / (float)(uint)(ushort)dat->w;
    ds.tex1 = 0x161;
    ds.zbuf = 0x10a000118;
    ds.test = 0x30003;
    if (dat->h == 0) {
      trap(7);
    }
    ds.alphar = 0x48;
    ds.alpha = (uchar)((int)uVar2 >> 2);
    ds.sch = (float)(0x100 / (ushort)dat->h);
    ds.csy = y;
    ds.x = x - fVar5;
    DispSprD__FP9DISP_SPRT(&ds);
    ds.x = x + fVar5;
    fVar1 = ds.y;
    ds.y = fVar4;
    DispSprD__FP9DISP_SPRT(&ds);
    ds.x = x - fVar5;
    fVar1 = ds.y;
    ds.y = fVar4;
    DispSprD__FP9DISP_SPRT(&ds);
    ds.x = x + fVar5;
    DispSprD__FP9DISP_SPRT(&ds);
  }
  return;
}

void DrawPhotoHinttex(u_int sw, float x, float y, int photo_cnt, int photo_spno, u_int *tex_adrs) {
	DISP_SPRT ds;
	SPRT_DAT *sd;
	u_char alp;
	u_char alp2;
	int time;
	int max;
	float f;
	float pos;
	SQAR_DAT sq;
	DISP_SQAR dq;
	int i;
	
  undefined *puVar1;
  uint uVar2;
  ulong *puVar3;
  int iVar4;
  int iVar5;
  uchar *puVar6;
  uint uVar7;
  float fVar8;
  DISP_SPRT ds;
  SQAR_DAT sq;
  DISP_SQAR dq;
  
  uVar7 = 0;
  if (sw == 1) {
    uVar7 = (uint)hint_dat[photo_spno].alpha;
LAB_00234bcc:
    uVar7 = uVar7 >> 2;
  }
  else {
    if (sw == 0) {
      if (0x32 < photo_cnt) {
        uVar7 = (uint)hint_dat[photo_spno].alpha;
        goto LAB_00234bcc;
      }
      fVar8 = (float)(uint)hint_dat[photo_spno].alpha * 0.25 * (float)(0x32 - photo_cnt);
    }
    else {
      if (sw != 2) goto LAB_00234bd8;
      uVar7 = (uint)hint_dat[photo_spno].alpha;
      if (0x32 < photo_cnt) goto LAB_00234bcc;
      fVar8 = (float)(uint)hint_dat[photo_spno].alpha * 0.25 * (float)photo_cnt;
    }
    fVar8 = fVar8 / 50.0;
    if (2.147484e+09 <= fVar8) {
      fVar8 = fVar8 - 2.147484e+09;
    }
    uVar7 = (int)fVar8 & 0xff;
  }
LAB_00234bd8:
  puVar1 = (undefined *)((int)&sq.h + 3);
  uVar2 = (uint)puVar1 & 7;
  puVar3 = (ulong *)(puVar1 + -uVar2);
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | DAT_003c33c8 >> (7 - uVar2) * 8;
  sq._0_8_ = DAT_003c33c8;
  puVar1 = (undefined *)((int)&sq.y + 3);
  uVar2 = (uint)puVar1 & 7;
  puVar3 = (ulong *)(puVar1 + -uVar2);
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | DAT_003c33d0 >> (7 - uVar2) * 8;
  sq._8_8_ = DAT_003c33d0;
  uVar2 = (uint)&sq.alpha & 7;
  puVar6 = &sq.alpha + -uVar2;
  *(ulong *)puVar6 = *(ulong *)puVar6 & -1L << (uVar2 + 1) * 8 | DAT_003c33d8 >> (7 - uVar2) * 8;
  sq._16_8_ = DAT_003c33d8;
  CopySqrDToSqr__FP9DISP_SQARP8SQAR_DAT(&dq,&sq);
  dq.x[0] = (int)x;
  dq.y[0] = (int)y;
  dq.pri = 0x10;
  dq.x[1] = dq.x[0] + 0x180;
  dq.z = 0xfffef;
  dq.y[2] = dq.y[0] + 0x100;
  dq.zbuf = 0x10a000118;
  dq.test = 0x30003;
  puVar6 = dq.r;
  dq.alphar = 0x44;
  iVar4 = 0;
  do {
    iVar5 = iVar4 + 1;
    *puVar6 = '\0';
    dq.g[iVar4] = '\0';
    puVar6 = puVar6 + 1;
    dq.b[iVar4] = '\0';
    iVar4 = iVar5;
  } while (iVar5 < 4);
  dq.alpha = '\0';
  dq.x[2] = dq.x[0];
  dq.x[3] = dq.x[1];
  dq.y[1] = dq.y[0];
  dq.y[3] = dq.y[2];
  DispSqrD__FP9DISP_SQAR(&dq);
  fVar8 = (float)(uint)hint_dat[photo_spno].alpha * 0.25;
  fVar8 = ((fVar8 - (float)uVar7) * 4.0) / fVar8;
  if (tex_adrs != (uint *)0x0) {
    MakeTim2SendPacket__FUii((uint)tex_adrs,0);
  }
  CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&ds,hint_dat + photo_spno);
  ds.zbuf = 0x10a000118;
  ds.test = 0x5000d;
  ds.pri = 0x10;
  ds.z = 0xfffef;
  ds.alpha = (uchar)uVar7;
  ds.x = (x + (float)((int)(0x180 - (uint)(ushort)hint_dat[photo_spno].w) / 2)) - fVar8;
  ds.tex1 = 0x161;
  ds.y = (y + (float)((int)(0x100 - (uint)(ushort)hint_dat[photo_spno].h) / 2)) - fVar8;
  DispSprD__FP9DISP_SPRT(&ds);
  ds.x = (x + (float)((int)(0x180 - (uint)(ushort)hint_dat[photo_spno].w) / 2)) - fVar8;
  ds.y = y + (float)((int)(0x100 - (uint)(ushort)hint_dat[photo_spno].h) / 2) + fVar8;
  DispSprD__FP9DISP_SPRT(&ds);
  ds.x = x + (float)((int)(0x180 - (uint)(ushort)hint_dat[photo_spno].w) / 2) + fVar8;
  ds.y = (y + (float)((int)(0x100 - (uint)(ushort)hint_dat[photo_spno].h) / 2)) - fVar8;
  DispSprD__FP9DISP_SPRT(&ds);
  ds.y = y + (float)((int)(0x100 - (uint)(ushort)hint_dat[photo_spno].h) / 2) + fVar8;
  ds.x = x + (float)((int)(0x180 - (uint)(ushort)hint_dat[photo_spno].w) / 2) + fVar8;
  DispSprD__FP9DISP_SPRT(&ds);
  return;
}

void DrawPhotoFrame(float x, float y) {
	int i;
	u_long tex0;
	DISP_SPRT ds;
	
  ulong uVar1;
  int iVar2;
  SPRT_DAT *d;
  float fVar3;
  DISP_SPRT ds;
  
  uVar1 = effdat[60].tex0;
  fVar3 = 270.0;
  iVar2 = 0;
  d = photo_frame;
  do {
    CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&ds,d);
    ds.x = ds.x + (float)(int)x;
    ds.y = ds.y + (float)(int)y;
    ds.tex0 = uVar1;
    if ((iVar2 - 6U < 2) || (iVar2 == 9)) {
      ds.rot = 180.0;
      ds.crx = ds.x;
      ds.cry = ds.y;
    }
    if (iVar2 - 10U < 2) {
      ds.crx = ds.x;
      ds.cry = ds.y;
      ds.rot = fVar3;
    }
    if (iVar2 - 0xcU < 2) {
      ds.rot = 90.0;
      ds.crx = ds.x;
      ds.cry = ds.y;
    }
    iVar2 = iVar2 + 1;
    DispSprD__FP9DISP_SPRT(&ds);
    d = d + 1;
  } while (iVar2 < 0xe);
  return;
}

void DrawSpecialFurnPhoto(float photo_x, float photo_y) {
	int n;
	Q_WORDDATA *pbuf;
	sceGsDrawEnv1 *pNDrawEnv;
	
  undefined8 uVar1;
  undefined8 *puVar2;
  Q_WORDDATA *pQVar3;
  ulong uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  float fVar7;
  uint uVar8;
  uint uVar9;
  _DRAW_ENV_5 local_90;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  ulong local_40;
  
  puVar2 = (undefined8 *)GetDrawEnv__Fi((int)sys_wrk.count + 1U & 1);
  local_60 = 0x8000000044;
  local_58 = 0x100000161;
  local_50 = 5;
  local_48 = 0x30003;
  local_90.alpha = 0x8000000044;
  local_90.tex1 = 0x100000161;
  local_90.zbuf = puVar2[2] & 0xf0001ff | 0x100000000;
  local_90.clamp = 5;
  local_90.test = 0x30003;
  local_40 = local_90.zbuf;
  SetDrawEnv__FiPC11_DRAW_ENV_5(0,&local_90);
  pQVar3 = GetPK2DbufWait__Fv();
  pQVar3->ul64[0] = 0x1000000000008004;
  pQVar3->ul64[1] = 0xe;
  *(undefined8 *)((int)pQVar3 + 0x18) = 0x3f;
  pQVar3[1].ul64[0] = 0;
  *(undefined8 *)((int)pQVar3 + 0x28) = 0x4c;
  pQVar3[2].ul64[0] = 0x10601d5;
  *(undefined8 *)((int)pQVar3 + 0x38) = 0x18;
  pQVar3[3].ul64[0] = 0x7c0000007400;
  fVar7 = photo_x * 16.0;
  uVar4 = sys_wrk.count & 1;
  *(undefined8 *)((int)pQVar3 + 0x48) = 6;
  uVar8 = (uint)fVar7;
  pQVar3[4].ul64[0] = uVar4 * 0x1180 | 0x268128000;
  *(undefined8 *)((int)pQVar3 + 0x58) = 0x4343;
  pQVar3[5].ul64[0] = 0x408b400000008001;
  if (2.147484e+09 <= fVar7) {
    uVar8 = (int)(fVar7 - 2.147484e+09) | 0x80000000;
  }
  fVar7 = photo_y * 16.0;
  uVar9 = (uint)fVar7;
  pQVar3[6].ui32[0] = uVar8;
  if (2.147484e+09 <= fVar7) {
    uVar9 = (int)(fVar7 - 2.147484e+09) | 0x80000000;
  }
  *(uint *)((int)pQVar3 + 100) = uVar9;
  *(undefined4 *)((int)pQVar3 + 0x74) = 0x7c00;
  fVar7 = (photo_x + 384.0) * 16.0;
  pQVar3[7].fl32[0] = 4.161296e-41;
  *(undefined8 *)((int)pQVar3 + 0x78) = 0;
  uVar8 = (uint)fVar7;
  if (2.147484e+09 <= fVar7) {
    uVar8 = (int)(fVar7 - 2.147484e+09) | 0x80000000;
  }
  fVar7 = (photo_y + 256.0) * 16.0;
  uVar9 = (uint)fVar7;
  pQVar3[8].ui32[0] = uVar8;
  if (2.147484e+09 <= fVar7) {
    uVar9 = (int)(fVar7 - 2.147484e+09) | 0x80000000;
  }
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/g3dxVu0.h */
                    /* end of inlined section */
  *(uint *)((int)pQVar3 + 0x84) = uVar9;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/g3dxVu0.h */
                    /* end of inlined section */
  pQVar3[9].fl32[0] = 5.022254e-41;
  *(undefined4 *)((int)pQVar3 + 0x94) = 0x8400;
  *(undefined8 *)((int)pQVar3 + 0x98) = 0;
  *(undefined8 *)((int)pQVar3 + 0xa8) = 0xe;
  pQVar3[10].ul64[0] = 0x1000000000008002;
  uVar1 = *puVar2;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/g3dxVu0.h */
  uVar5 = *(undefined4 *)(puVar2 + 1);
  uVar6 = *(undefined4 *)((int)puVar2 + 0xc);
  pQVar3[0xb].ui32[0] = (uint)uVar1;
  *(int *)((int)pQVar3 + 0xb4) = (int)((ulong)uVar1 >> 0x20);
  *(undefined4 *)((int)pQVar3 + 0xb8) = uVar5;
  *(undefined4 *)((int)pQVar3 + 0xbc) = uVar6;
  uVar1 = puVar2[4];
  uVar5 = *(undefined4 *)(puVar2 + 5);
  uVar6 = *(undefined4 *)((int)puVar2 + 0x2c);
  pQVar3[0xc].ui32[0] = (uint)uVar1;
  *(int *)((int)pQVar3 + 0xc4) = (int)((ulong)uVar1 >> 0x20);
  *(undefined4 *)((int)pQVar3 + 200) = uVar5;
  *(undefined4 *)((int)pQVar3 + 0xcc) = uVar6;
                    /* end of inlined section */
  EndPK2DbufWait__FP10Q_WORDDATA(pQVar3 + 0xd);
  return;
}
