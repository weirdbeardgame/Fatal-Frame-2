// STATUS: NOT STARTED

#include "title_disp.h"

void DispTitleCursorL(float x, float y, u_char alpha, u_char rgb) {
	DISP_SPRT ds;
	
  void *tm2_addr;
  DISP_SPRT ds;
  
  tm2_addr = GetTitleLogoTexAddr__Fv();
  PK2SendVram__FUiiii((uint)tm2_addr,-1,-1,0);
  CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&ds,title_top + 0x15);
  ds.alphar = 0x48;
  ds.alpha = (uchar)((int)((uint)ds.alpha * (uint)alpha) >> 7);
  ds.x = x;
  ds.y = y;
  ds.r = rgb;
  ds.g = rgb;
  ds.b = rgb;
  DispSprD__FP9DISP_SPRT(&ds);
  return;
}

void DispTitleCursorR(float x, float y, u_char alpha, u_char rgb) {
	DISP_SPRT ds;
	
  void *tm2_addr;
  DISP_SPRT ds;
  
  tm2_addr = GetTitleLogoTexAddr__Fv();
  PK2SendVram__FUiiii((uint)tm2_addr,-1,-1,0);
  CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&ds,title_top + 0x16);
  ds.alphar = 0x48;
  ds.alpha = (uchar)((int)((uint)ds.alpha * (uint)alpha) >> 7);
  ds.x = x;
  ds.y = y;
  ds.r = rgb;
  ds.g = rgb;
  ds.b = rgb;
  DispSprD__FP9DISP_SPRT(&ds);
  return;
}

void DispTitleZeroLogo(int off_x, int off_y, u_char alpha) {
	DISP_SPRT ds;
	int i;
	
  void *tm2_addr;
  SPRT_DAT *d;
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  DISP_SPRT ds;
  
  fVar3 = (float)off_y;
  fVar4 = (float)off_x;
  tm2_addr = GetTitleLogoTexAddr__Fv();
  PK2SendVram__FUiiii((uint)tm2_addr,-1,-1,0);
  iVar1 = 3;
  d = title_top + 6;
  do {
    CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&ds,d);
    iVar1 = iVar1 + -1;
    d = d + 1;
    ds.x = ds.x + fVar4;
    ds.y = ds.y + fVar3;
    ds.alpha = (uchar)((int)((uint)ds.alpha * (uint)alpha) >> 7);
    DispSprD__FP9DISP_SPRT(&ds);
  } while (-1 < iVar1);
  CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&ds,title_top + 10);
  ds.crx = ds.x + fVar4;
  if ((int)ds.w < 0) {
    fVar2 = (float)(ds.w & 1 | ds.w >> 1);
    fVar2 = fVar2 + fVar2;
  }
  else {
    fVar2 = (float)ds.w;
  }
  ds.rot = 270.0;
  ds.cry = ds.y + fVar2 + fVar3;
  ds.alpha = (uchar)((int)((uint)ds.alpha * (uint)alpha) >> 7);
  ds.x = ds.crx;
  ds.y = ds.cry;
  DispSprD__FP9DISP_SPRT(&ds);
  CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&ds,title_top + 0xb);
  ds.crx = ds.x + fVar4;
  if ((int)ds.w < 0) {
    fVar4 = (float)(ds.w & 1 | ds.w >> 1);
    fVar4 = fVar4 + fVar4;
  }
  else {
    fVar4 = (float)ds.w;
  }
  ds.rot = 270.0;
  ds.cry = ds.y + fVar4 + fVar3;
  ds.alpha = (uchar)((int)((uint)ds.alpha * (uint)alpha) >> 7);
  ds.x = ds.crx;
  ds.y = ds.cry;
  DispSprD__FP9DISP_SPRT(&ds);
  return;
}

void DispTitleTecmoLogo(int off_x, int off_y, u_char alpha) {
	DISP_SPRT ds;
	
  void *tm2_addr;
  float fVar1;
  DISP_SPRT ds;
  
  fVar1 = (float)off_x;
  tm2_addr = GetTitleLogoTexAddr__Fv();
  PK2SendVram__FUiiii((uint)tm2_addr,-1,-1,0);
  CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&ds,title_top + 0xc);
  ds.x = ds.x + fVar1;
  ds.y = ds.y + (float)off_y;
  ds.alpha = (uchar)((int)((uint)ds.alpha * (uint)alpha) >> 7);
  DispSprD__FP9DISP_SPRT(&ds);
  CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&ds,title_top + 0xd);
  ds.x = ds.x + fVar1;
  ds.y = ds.y + (float)off_y;
  ds.alpha = (uchar)((int)((uint)ds.alpha * (uint)alpha) >> 7);
  DispSprD__FP9DISP_SPRT(&ds);
  return;
}

void DispTitleBack(int *timer, void *tex_addr) {
	u_char kumo_alpha;
	u_char bokasi_alpha;
	u_char moyou_alpha;
	u_char moyou2_alpha;
	float moyou1_x;
	float moyou2_x;
	float bokasi1_x;
	float bokasi2_x;
	float kumo1_x;
	float kumo2_x;
	static ALPHA_ANIM_TBL kumo_alpha_tbl[6] = {
		/* [0] = */ {
			/* .start_alpha = */ 0,
			/* .end_alpha = */ 38,
			/* .start_time = */ 0,
			/* .end_time = */ 60
		},
		/* [1] = */ {
			/* .start_alpha = */ 38,
			/* .end_alpha = */ 128,
			/* .start_time = */ 60,
			/* .end_time = */ 420
		},
		/* [2] = */ {
			/* .start_alpha = */ 128,
			/* .end_alpha = */ 128,
			/* .start_time = */ 420,
			/* .end_time = */ 780
		},
		/* [3] = */ {
			/* .start_alpha = */ 128,
			/* .end_alpha = */ 38,
			/* .start_time = */ 780,
			/* .end_time = */ 1140
		},
		/* [4] = */ {
			/* .start_alpha = */ 38,
			/* .end_alpha = */ 0,
			/* .start_time = */ 1140,
			/* .end_time = */ 1200
		},
		/* [5] = */ {
			/* .start_alpha = */ -1,
			/* .end_alpha = */ -1,
			/* .start_time = */ -1,
			/* .end_time = */ -1
		}
	};
	static ALPHA_ANIM_TBL moyou_alpha_tbl[8] = {
		/* [0] = */ {
			/* .start_alpha = */ 0,
			/* .end_alpha = */ 25,
			/* .start_time = */ 0,
			/* .end_time = */ 30
		},
		/* [1] = */ {
			/* .start_alpha = */ 25,
			/* .end_alpha = */ 38,
			/* .start_time = */ 30,
			/* .end_time = */ 360
		},
		/* [2] = */ {
			/* .start_alpha = */ 38,
			/* .end_alpha = */ 64,
			/* .start_time = */ 360,
			/* .end_time = */ 480
		},
		/* [3] = */ {
			/* .start_alpha = */ 64,
			/* .end_alpha = */ 64,
			/* .start_time = */ 480,
			/* .end_time = */ 720
		},
		/* [4] = */ {
			/* .start_alpha = */ 64,
			/* .end_alpha = */ 38,
			/* .start_time = */ 720,
			/* .end_time = */ 840
		},
		/* [5] = */ {
			/* .start_alpha = */ 38,
			/* .end_alpha = */ 25,
			/* .start_time = */ 840,
			/* .end_time = */ 1170
		},
		/* [6] = */ {
			/* .start_alpha = */ 25,
			/* .end_alpha = */ 0,
			/* .start_time = */ 1170,
			/* .end_time = */ 1200
		},
		/* [7] = */ {
			/* .start_alpha = */ -1,
			/* .end_alpha = */ -1,
			/* .start_time = */ -1,
			/* .end_time = */ -1
		}
	};
	static ALPHA_ANIM_TBL moyou2_alpha_tbl[8] = {
		/* [0] = */ {
			/* .start_alpha = */ 0,
			/* .end_alpha = */ 12,
			/* .start_time = */ 0,
			/* .end_time = */ 30
		},
		/* [1] = */ {
			/* .start_alpha = */ 12,
			/* .end_alpha = */ 38,
			/* .start_time = */ 30,
			/* .end_time = */ 360
		},
		/* [2] = */ {
			/* .start_alpha = */ 38,
			/* .end_alpha = */ 38,
			/* .start_time = */ 360,
			/* .end_time = */ 480
		},
		/* [3] = */ {
			/* .start_alpha = */ 38,
			/* .end_alpha = */ 38,
			/* .start_time = */ 480,
			/* .end_time = */ 720
		},
		/* [4] = */ {
			/* .start_alpha = */ 38,
			/* .end_alpha = */ 25,
			/* .start_time = */ 720,
			/* .end_time = */ 840
		},
		/* [5] = */ {
			/* .start_alpha = */ 25,
			/* .end_alpha = */ 12,
			/* .start_time = */ 840,
			/* .end_time = */ 1170
		},
		/* [6] = */ {
			/* .start_alpha = */ 12,
			/* .end_alpha = */ 0,
			/* .start_time = */ 1170,
			/* .end_time = */ 1200
		},
		/* [7] = */ {
			/* .start_alpha = */ -1,
			/* .end_alpha = */ -1,
			/* .start_time = */ -1,
			/* .end_time = */ -1
		}
	};
	static ALPHA_ANIM_TBL bokasi_alpha_tbl[6] = {
		/* [0] = */ {
			/* .start_alpha = */ 25,
			/* .end_alpha = */ 38,
			/* .start_time = */ 0,
			/* .end_time = */ 420
		},
		/* [1] = */ {
			/* .start_alpha = */ 38,
			/* .end_alpha = */ 38,
			/* .start_time = */ 420,
			/* .end_time = */ 780
		},
		/* [2] = */ {
			/* .start_alpha = */ 38,
			/* .end_alpha = */ 25,
			/* .start_time = */ 780,
			/* .end_time = */ 1170
		},
		/* [3] = */ {
			/* .start_alpha = */ 25,
			/* .end_alpha = */ 25,
			/* .start_time = */ 1170,
			/* .end_time = */ 1200
		},
		/* [4] = */ {
			/* .start_alpha = */ -1,
			/* .end_alpha = */ -1,
			/* .start_time = */ -1,
			/* .end_time = */ -1
		},
		/* [5] = */ {
			/* .start_alpha = */ 0,
			/* .end_alpha = */ 0,
			/* .start_time = */ 0,
			/* .end_time = */ 0
		}
	};
	static POS_ANIM_TBL moyou_x_tbl[2] = {
		/* [0] = */ {
			/* .start_pos = */ 0.f,
			/* .end_pos = */ 640.f,
			/* .start_time = */ 0,
			/* .end_time = */ 1200,
			/* .anim_label = */ 0
		},
		/* [1] = */ {
			/* .start_pos = */ -1.f,
			/* .end_pos = */ -1.f,
			/* .start_time = */ -1,
			/* .end_time = */ -1,
			/* .anim_label = */ -1
		}
	};
	static POS_ANIM_TBL moyou2_x_tbl[2] = {
		/* [0] = */ {
			/* .start_pos = */ 0.f,
			/* .end_pos = */ 640.f,
			/* .start_time = */ 0,
			/* .end_time = */ 7200,
			/* .anim_label = */ 0
		},
		/* [1] = */ {
			/* .start_pos = */ -1.f,
			/* .end_pos = */ -1.f,
			/* .start_time = */ -1,
			/* .end_time = */ -1,
			/* .anim_label = */ -1
		}
	};
	static POS_ANIM_TBL kumo_x_tbl[2] = {
		/* [0] = */ {
			/* .start_pos = */ 0.f,
			/* .end_pos = */ 1280.f,
			/* .start_time = */ 0,
			/* .end_time = */ 1200,
			/* .anim_label = */ 0
		},
		/* [1] = */ {
			/* .start_pos = */ -1.f,
			/* .end_pos = */ -1.f,
			/* .start_time = */ -1,
			/* .end_time = */ -1,
			/* .anim_label = */ -1
		}
	};
	static POS_ANIM_TBL bokasi_x_tbl[2] = {
		/* [0] = */ {
			/* .start_pos = */ 0.f,
			/* .end_pos = */ 640.f,
			/* .start_time = */ 0,
			/* .end_time = */ 300,
			/* .anim_label = */ 0
		},
		/* [1] = */ {
			/* .start_pos = */ -1.f,
			/* .end_pos = */ -1.f,
			/* .start_time = */ -1,
			/* .end_time = */ -1,
			/* .anim_label = */ -1
		}
	};
	static POS_ANIM_TBL bokasi2_x_tbl[2] = {
		/* [0] = */ {
			/* .start_pos = */ 0.f,
			/* .end_pos = */ 640.f,
			/* .start_time = */ 0,
			/* .end_time = */ 300,
			/* .anim_label = */ 0
		},
		/* [1] = */ {
			/* .start_pos = */ -1.f,
			/* .end_pos = */ -1.f,
			/* .start_time = */ -1,
			/* .end_time = */ -1,
			/* .anim_label = */ -1
		}
	};
	
  uchar alpha;
  uchar alpha_00;
  uchar alpha_01;
  uchar alpha_02;
  int iVar1;
  float off_x;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  iVar1 = *timer;
  if (0x1c1f < iVar1) {
    *timer = 0;
    iVar1 = 0;
  }
  fVar6 = 640.0;
  alpha = Anim2D_CalcNowAlpha__FPC14ALPHA_ANIM_TBLi
                    ((ALPHA_ANIM_TBL *)moyou_alpha_tbl_97,iVar1 % 0x4b0);
  alpha_00 = Anim2D_CalcNowAlpha__FPC14ALPHA_ANIM_TBLi
                       ((ALPHA_ANIM_TBL *)moyou2_alpha_tbl_98,*timer % 0x4b0);
  alpha_01 = Anim2D_CalcNowAlpha__FPC14ALPHA_ANIM_TBLi
                       ((ALPHA_ANIM_TBL *)kumo_alpha_tbl_96,*timer % 0x4b0);
  alpha_02 = Anim2D_CalcNowAlpha__FPC14ALPHA_ANIM_TBLi
                       ((ALPHA_ANIM_TBL *)bokasi_alpha_tbl_99,*timer % 0x4b0);
  off_x = Anim2D_CalcNowPos__FPC12POS_ANIM_TBLi((POS_ANIM_TBL *)moyou_x_tbl_100,*timer % 0x4b0);
  fVar2 = Anim2D_CalcNowPos__FPC12POS_ANIM_TBLi((POS_ANIM_TBL *)moyou2_x_tbl_101,*timer % 0x1c20);
  fVar2 = -fVar2;
  fVar3 = Anim2D_CalcNowPos__FPC12POS_ANIM_TBLi((POS_ANIM_TBL *)kumo_x_tbl_102,*timer % 0x4b0);
  fVar3 = fVar3 - fVar6;
  fVar4 = Anim2D_CalcNowPos__FPC12POS_ANIM_TBLi((POS_ANIM_TBL *)kumo_x_tbl_102,*timer % 0x4b0);
  fVar6 = fVar6 - fVar4;
  fVar4 = Anim2D_CalcNowPos__FPC12POS_ANIM_TBLi((POS_ANIM_TBL *)bokasi_x_tbl_103,*timer % 300);
  fVar5 = Anim2D_CalcNowPos__FPC12POS_ANIM_TBLi((POS_ANIM_TBL *)bokasi2_x_tbl_104,*timer % 300);
  PK2SendVram__FUiiii((uint)tex_addr,-1,-1,0);
  DispTitleBlackBg__FiiUc(0,0,0x80);
  DispTitleBgPattern1__FffUc(off_x,0.0,alpha);
  DispTitleBgPattern2__FffUc(fVar2,0.0,alpha_00);
  DispTitleBgCloud1__FffUc(fVar3,2.0,alpha_01);
  DispTitleBgCloud2__FffUc(fVar6,0.0,alpha_01);
  DispTitleBgShadeingOffFlea2__FffUc(-fVar5,0.0,alpha_02);
  DispTitleBgShadeingOffFlea1__FffUc(fVar4,0.0,alpha_02);
  iVar1 = *timer;
  *timer = iVar1 + 1;
  if (0x1c1f < iVar1 + 1) {
    *timer = 0;
  }
  return;
}

static void DispTitleBlackBg(int off_x, int off_y, u_char alpha) {
	DISP_SQAR dsq;
	SQAR_DAT title_bg;
	
  undefined *puVar1;
  uint uVar2;
  ulong *puVar3;
  uchar *puVar4;
  DISP_SQAR dsq;
  SQAR_DAT title_bg;
  
  puVar1 = (undefined *)((int)&title_bg.h + 3);
  uVar2 = (uint)puVar1 & 7;
  puVar3 = (ulong *)(puVar1 + -uVar2);
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | DAT_003e6aa0 >> (7 - uVar2) * 8;
  title_bg._0_8_ = DAT_003e6aa0;
  puVar1 = (undefined *)((int)&title_bg.y + 3);
  uVar2 = (uint)puVar1 & 7;
  puVar3 = (ulong *)(puVar1 + -uVar2);
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | DAT_003e6aa8 >> (7 - uVar2) * 8;
  title_bg._8_8_ = DAT_003e6aa8;
  uVar2 = (uint)&title_bg.alpha & 7;
  puVar4 = &title_bg.alpha + -uVar2;
  *(ulong *)puVar4 = *(ulong *)puVar4 & -1L << (uVar2 + 1) * 8 | DAT_003e6ab0 >> (7 - uVar2) * 8;
  title_bg._16_8_ = DAT_003e6ab0;
  CopySqrDToSqr__FP9DISP_SQARP8SQAR_DAT(&dsq,&title_bg);
  DispSqrD__FP9DISP_SQAR(&dsq);
  return;
}

static void DispTitleBgPattern1(float off_x, float off_y, u_char alpha) {
	DISP_SPRT ds;
	int i;
	
  int iVar1;
  float fVar2;
  DISP_SPRT ds;
  
  iVar1 = 0;
  do {
    CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&ds,title_top + 4);
    fVar2 = (float)iVar1;
    iVar1 = iVar1 + 1;
    ds.csx = off_x - fVar2 * 640.0;
    if ((int)ds.w < 0) {
      fVar2 = (float)(ds.w & 1 | ds.w >> 1);
      fVar2 = fVar2 + fVar2;
    }
    else {
      fVar2 = (float)ds.w;
    }
    ds.scw = 640.0 / fVar2;
    ds.sch = 1.0;
    ds.alphar = 0x48;
    ds.csy = ds.y;
    ds.x = ds.csx;
    ds.alpha = alpha;
    DispSprD__FP9DISP_SPRT(&ds);
  } while (iVar1 < 2);
  return;
}

static void DispTitleBgPattern2(float off_x, float off_y, u_char alpha) {
	DISP_SPRT ds;
	int i;
	
  uint uVar1;
  int iVar2;
  float fVar3;
  DISP_SPRT ds;
  
  iVar2 = 0;
  do {
    CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&ds,title_top + 5);
    fVar3 = (float)iVar2;
    iVar2 = iVar2 + 1;
    uVar1 = ds.w & 1 | ds.w >> 1;
    ds.csx = off_x + fVar3 * 640.0;
    if ((int)ds.w < 0) {
      fVar3 = (float)uVar1;
      fVar3 = fVar3 + fVar3;
    }
    else {
      fVar3 = (float)ds.w;
    }
    ds.scw = 640.0 / fVar3;
    if ((int)ds.w < 0) {
      fVar3 = (float)uVar1;
      fVar3 = fVar3 + fVar3;
    }
    else {
      fVar3 = (float)ds.w;
    }
    ds.sch = 448.0 / fVar3;
    ds.alphar = 0x48;
    ds.csy = ds.y;
    ds.x = ds.csx;
    ds.alpha = alpha;
    DispSprD__FP9DISP_SPRT(&ds);
  } while (iVar2 < 2);
  return;
}

static void DispTitleBgCloud1(float off_x, float off_y, u_char alpha) {
	DISP_SPRT ds;
	
  float fVar1;
  DISP_SPRT ds;
  
  CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&ds,title_top + 2);
  ds.csy = ds.y + off_y;
  if ((int)ds.w < 0) {
    fVar1 = (float)(ds.w & 1 | ds.w >> 1);
    fVar1 = fVar1 + fVar1;
  }
  else {
    fVar1 = (float)ds.w;
  }
  ds.scw = 640.0 / fVar1;
  if ((int)ds.h < 0) {
    fVar1 = (float)(ds.h & 1 | ds.h >> 1);
    fVar1 = fVar1 + fVar1;
  }
  else {
    fVar1 = (float)ds.h;
  }
  ds.sch = 448.0 / fVar1;
  ds.alphar = 0x48;
  ds.csx = off_x;
  ds.x = off_x;
  ds.y = ds.csy;
  ds.alpha = alpha;
  DispSprD__FP9DISP_SPRT(&ds);
  return;
}

static void DispTitleBgCloud2(float off_x, float off_y, u_char alpha) {
	DISP_SPRT ds;
	
  float fVar1;
  DISP_SPRT ds;
  
  CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&ds,title_top + 3);
  if ((int)ds.w < 0) {
    fVar1 = (float)(ds.w & 1 | ds.w >> 1);
    fVar1 = fVar1 + fVar1;
  }
  else {
    fVar1 = (float)ds.w;
  }
  ds.scw = 640.0 / fVar1;
  if ((int)ds.h < 0) {
    fVar1 = (float)(ds.h & 1 | ds.h >> 1);
    fVar1 = fVar1 + fVar1;
  }
  else {
    fVar1 = (float)ds.h;
  }
  ds.sch = 448.0 / fVar1;
  ds.alphar = 0x48;
  ds.csy = ds.y;
  ds.csx = off_x;
  ds.x = off_x;
  ds.alpha = alpha;
  DispSprD__FP9DISP_SPRT(&ds);
  return;
}

static void DispTitleBgShadeingOffFlea2(float off_x, float off_y, u_char alpha) {
	DISP_SPRT ds;
	int i;
	
  int iVar1;
  float fVar2;
  DISP_SPRT ds;
  
  iVar1 = 0;
  do {
    CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&ds,title_top + 1);
    fVar2 = (float)iVar1;
    iVar1 = iVar1 + 1;
    ds.csx = off_x + fVar2 * 640.0;
    if ((int)ds.w < 0) {
      fVar2 = (float)(ds.w & 1 | ds.w >> 1);
      fVar2 = fVar2 + fVar2;
    }
    else {
      fVar2 = (float)ds.w;
    }
    ds.scw = 640.0 / fVar2;
    if ((int)ds.h < 0) {
      fVar2 = (float)(ds.h & 1 | ds.h >> 1);
      fVar2 = fVar2 + fVar2;
    }
    else {
      fVar2 = (float)ds.h;
    }
    ds.sch = 448.0 / fVar2;
    ds.csy = ds.y;
    ds.x = ds.csx;
    ds.alpha = alpha;
    DispSprD__FP9DISP_SPRT(&ds);
  } while (iVar1 < 3);
  return;
}

static void DispTitleBgShadeingOffFlea1(float off_x, float off_y, u_char alpha) {
	DISP_SPRT ds;
	int i;
	
  int iVar1;
  float fVar2;
  DISP_SPRT ds;
  
  iVar1 = 0;
  do {
    CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&ds,title_top);
    fVar2 = (float)iVar1;
    iVar1 = iVar1 + 1;
    ds.csx = off_x - fVar2 * 640.0;
    if ((int)ds.w < 0) {
      fVar2 = (float)(ds.w & 1 | ds.w >> 1);
      fVar2 = fVar2 + fVar2;
    }
    else {
      fVar2 = (float)ds.w;
    }
    ds.scw = 640.0 / fVar2;
    if ((int)ds.h < 0) {
      fVar2 = (float)(ds.h & 1 | ds.h >> 1);
      fVar2 = fVar2 + fVar2;
    }
    else {
      fVar2 = (float)ds.h;
    }
    ds.sch = 448.0 / fVar2;
    ds.csy = ds.y;
    ds.x = ds.csx;
    ds.alpha = alpha;
    DispSprD__FP9DISP_SPRT(&ds);
  } while (iVar1 < 3);
  return;
}

void TitleCaptionDisp(int off_x, int off_y, u_char alpha) {
  DrawCmnCapGroup_W__FiiUcUi(0xe,0xe,alpha,0);
  return;
}
