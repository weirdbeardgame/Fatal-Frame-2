// STATUS: NOT STARTED

#include "savepoint_disp.h"

void SavePoint_MenuWinDisp(int off_x, int off_y, u_char alpha) {
  float size;
  
  size = 296.0;
  DrawCmnWindow__FUiffffUcUc(0,171.0,93.0,296.0,160.0,alpha,'Y');
  DrawCmnLine__FfffUcUcUi(171.0,137.0,size,'\x01',alpha,0xa0);
  return;
}

void SavePoint_MenuConfWinDisp(int cursor, int off_x, int off_y, u_char alpha) {
	static char __FUNCTION__[26] = {
		/* [0] = */ 83,
		/* [1] = */ 97,
		/* [2] = */ 118,
		/* [3] = */ 101,
		/* [4] = */ 80,
		/* [5] = */ 111,
		/* [6] = */ 105,
		/* [7] = */ 110,
		/* [8] = */ 116,
		/* [9] = */ 95,
		/* [10] = */ 77,
		/* [11] = */ 101,
		/* [12] = */ 110,
		/* [13] = */ 117,
		/* [14] = */ 67,
		/* [15] = */ 111,
		/* [16] = */ 110,
		/* [17] = */ 102,
		/* [18] = */ 87,
		/* [19] = */ 105,
		/* [20] = */ 110,
		/* [21] = */ 68,
		/* [22] = */ 105,
		/* [23] = */ 115,
		/* [24] = */ 112,
		/* [25] = */ 0
	};
	
  if (1 < (uint)cursor) {
    SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
    PrintAssertReal("Error! %s");
  }
  DrawCmnTwoLineWindow__FUiffffUcUc(0,40.0,DAT_003ee820,560.0,118.0,alpha,'Y');
  DrawCmnYesNoSel__FifUcUi(cursor,(float)(off_y + 0x16b),alpha,0);
  return;
}

void SavePoint_BgDisp(int *bg_anim_timer, int *moyou1_anim_timer, int *moyou2_anim_timer, void *pk2_addr) {
	float moyou1_off_x;
	float moyou2_off_x;
	static ALPHA_ANIM_TBL moyou1_alpha_tbl[7] = {
		/* [0] = */ {
			/* .start_alpha = */ 19,
			/* .end_alpha = */ 51,
			/* .start_time = */ 0,
			/* .end_time = */ 150
		},
		/* [1] = */ {
			/* .start_alpha = */ 51,
			/* .end_alpha = */ 12,
			/* .start_time = */ 150,
			/* .end_time = */ 250
		},
		/* [2] = */ {
			/* .start_alpha = */ 12,
			/* .end_alpha = */ 57,
			/* .start_time = */ 250,
			/* .end_time = */ 440
		},
		/* [3] = */ {
			/* .start_alpha = */ 57,
			/* .end_alpha = */ 12,
			/* .start_time = */ 440,
			/* .end_time = */ 720
		},
		/* [4] = */ {
			/* .start_alpha = */ 12,
			/* .end_alpha = */ 25,
			/* .start_time = */ 720,
			/* .end_time = */ 850
		},
		/* [5] = */ {
			/* .start_alpha = */ 25,
			/* .end_alpha = */ 19,
			/* .start_time = */ 850,
			/* .end_time = */ 900
		},
		/* [6] = */ {
			/* .start_alpha = */ -1,
			/* .end_alpha = */ -1,
			/* .start_time = */ -1,
			/* .end_time = */ -1
		}
	};
	static ALPHA_ANIM_TBL moyou2_alpha_tbl[8] = {
		/* [0] = */ {
			/* .start_alpha = */ 38,
			/* .end_alpha = */ 64,
			/* .start_time = */ 0,
			/* .end_time = */ 120
		},
		/* [1] = */ {
			/* .start_alpha = */ 64,
			/* .end_alpha = */ 12,
			/* .start_time = */ 120,
			/* .end_time = */ 190
		},
		/* [2] = */ {
			/* .start_alpha = */ 12,
			/* .end_alpha = */ 38,
			/* .start_time = */ 190,
			/* .end_time = */ 360
		},
		/* [3] = */ {
			/* .start_alpha = */ 38,
			/* .end_alpha = */ 83,
			/* .start_time = */ 360,
			/* .end_time = */ 480
		},
		/* [4] = */ {
			/* .start_alpha = */ 83,
			/* .end_alpha = */ 6,
			/* .start_time = */ 480,
			/* .end_time = */ 700
		},
		/* [5] = */ {
			/* .start_alpha = */ 6,
			/* .end_alpha = */ 51,
			/* .start_time = */ 700,
			/* .end_time = */ 875
		},
		/* [6] = */ {
			/* .start_alpha = */ 51,
			/* .end_alpha = */ 38,
			/* .start_time = */ 875,
			/* .end_time = */ 900
		},
		/* [7] = */ {
			/* .start_alpha = */ -1,
			/* .end_alpha = */ -1,
			/* .start_time = */ -1,
			/* .end_time = */ -1
		}
	};
	static ALPHA_ANIM_TBL bg_flea_alpha_tbl[6] = {
		/* [0] = */ {
			/* .start_alpha = */ 19,
			/* .end_alpha = */ 0,
			/* .start_time = */ 0,
			/* .end_time = */ 230
		},
		/* [1] = */ {
			/* .start_alpha = */ 0,
			/* .end_alpha = */ 12,
			/* .start_time = */ 230,
			/* .end_time = */ 320
		},
		/* [2] = */ {
			/* .start_alpha = */ 12,
			/* .end_alpha = */ 76,
			/* .start_time = */ 320,
			/* .end_time = */ 420
		},
		/* [3] = */ {
			/* .start_alpha = */ 76,
			/* .end_alpha = */ 6,
			/* .start_time = */ 420,
			/* .end_time = */ 615
		},
		/* [4] = */ {
			/* .start_alpha = */ 6,
			/* .end_alpha = */ 19,
			/* .start_time = */ 615,
			/* .end_time = */ 900
		},
		/* [5] = */ {
			/* .start_alpha = */ -1,
			/* .end_alpha = */ -1,
			/* .start_time = */ -1,
			/* .end_time = */ -1
		}
	};
	static POS_ANIM_TBL moyou1_x_tbl[2] = {
		/* [0] = */ {
			/* .start_pos = */ 0.f,
			/* .end_pos = */ 640.f,
			/* .start_time = */ 0,
			/* .end_time = */ 900,
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
			/* .end_time = */ 600,
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
	
  int iVar1;
  uchar alpha;
  uchar alpha_00;
  uchar alpha_01;
  float off_x;
  float off_x_00;
  
  alpha = Anim2D_CalcNowAlpha__FPC14ALPHA_ANIM_TBLi
                    ((ALPHA_ANIM_TBL *)moyou1_alpha_tbl_90,*bg_anim_timer);
  alpha_00 = Anim2D_CalcNowAlpha__FPC14ALPHA_ANIM_TBLi
                       ((ALPHA_ANIM_TBL *)moyou2_alpha_tbl_91,*bg_anim_timer);
  alpha_01 = Anim2D_CalcNowAlpha__FPC14ALPHA_ANIM_TBLi
                       ((ALPHA_ANIM_TBL *)bg_flea_alpha_tbl_92,*bg_anim_timer);
  off_x = Anim2D_CalcNowPos__FPC12POS_ANIM_TBLi((POS_ANIM_TBL *)moyou1_x_tbl_93,*moyou1_anim_timer);
  off_x_00 = Anim2D_CalcNowPos__FPC12POS_ANIM_TBLi
                       ((POS_ANIM_TBL *)moyou2_x_tbl_94,*moyou2_anim_timer);
  PK2SendVram__FUiiii((uint)pk2_addr,-1,-1,0);
  SavePoint_BlackBgDisp__FUc(0x80);
  SavePoint_BgPattern1Disp__FffUc(off_x,0.0,alpha);
  SavePoint_BgPattern2Disp__FffUc(off_x_00,0.0,alpha_00);
  SavePoint_BgFleaDisp__FiiUc(0,0,alpha_01);
  SavePoint_FleaDisp__FiiUc(0,0,'&');
  SavePoint_ShadowDisp__FiiUc(0,0,0x80);
  iVar1 = *bg_anim_timer;
  *bg_anim_timer = iVar1 + 1;
  if (899 < iVar1 + 1) {
    *bg_anim_timer = 0;
  }
  iVar1 = *moyou1_anim_timer;
  *moyou1_anim_timer = iVar1 + 1;
  if (899 < iVar1 + 1) {
    *moyou1_anim_timer = 0;
  }
  iVar1 = *moyou2_anim_timer;
  *moyou2_anim_timer = iVar1 + 1;
  if (599 < iVar1 + 1) {
    *moyou2_anim_timer = 0;
  }
  return;
}

void SavePoint_BlackBgDisp(u_char alpha) {
	DISP_SQAR dsq;
	SQAR_DAT save_point_bg;
	
  undefined *puVar1;
  uint uVar2;
  ulong *puVar3;
  uchar *puVar4;
  DISP_SQAR dsq;
  SQAR_DAT save_point_bg;
  
  puVar1 = (undefined *)((int)&save_point_bg.h + 3);
  uVar2 = (uint)puVar1 & 7;
  puVar3 = (ulong *)(puVar1 + -uVar2);
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | DAT_003c4d60 >> (7 - uVar2) * 8;
  save_point_bg._0_8_ = DAT_003c4d60;
  puVar1 = (undefined *)((int)&save_point_bg.y + 3);
  uVar2 = (uint)puVar1 & 7;
  puVar3 = (ulong *)(puVar1 + -uVar2);
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | DAT_003c4d68 >> (7 - uVar2) * 8;
  save_point_bg._8_8_ = DAT_003c4d68;
  uVar2 = (uint)&save_point_bg.alpha & 7;
  puVar4 = &save_point_bg.alpha + -uVar2;
  *(ulong *)puVar4 = *(ulong *)puVar4 & -1L << (uVar2 + 1) * 8 | DAT_003c4d70 >> (7 - uVar2) * 8;
  save_point_bg._16_8_ = DAT_003c4d70;
  CopySqrDToSqr__FP9DISP_SQARP8SQAR_DAT(&dsq,&save_point_bg);
  dsq.alpha = alpha;
  DispSqrD__FP9DISP_SQAR(&dsq);
  return;
}

static void SavePoint_BgPattern1Disp(float off_x, float off_y, u_char alpha) {
	DISP_SPRT pattern_ds;
	int i;
	
  int iVar1;
  float fVar2;
  float fVar3;
  DISP_SPRT pattern_ds;
  
  fVar3 = 448.0;
  iVar1 = 0;
  do {
    CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&pattern_ds,savepoint_tex);
    fVar2 = (float)iVar1;
    iVar1 = iVar1 + 1;
    pattern_ds.csy = pattern_ds.y + off_y;
    pattern_ds.csx = (pattern_ds.x + off_x) - fVar2 * 640.0;
    if ((int)pattern_ds.w < 0) {
      fVar2 = (float)(pattern_ds.w & 1 | pattern_ds.w >> 1);
      fVar2 = fVar2 + fVar2;
    }
    else {
      fVar2 = (float)pattern_ds.w;
    }
    pattern_ds.scw = 640.0 / fVar2;
    if ((int)pattern_ds.h < 0) {
      fVar2 = (float)(pattern_ds.h & 1 | pattern_ds.h >> 1);
      fVar2 = fVar2 + fVar2;
    }
    else {
      fVar2 = (float)pattern_ds.h;
    }
    pattern_ds.sch = fVar3 / fVar2;
    pattern_ds.alphar = 0x48;
    pattern_ds.alpha = (uchar)((int)((uint)pattern_ds.alpha * (uint)alpha) >> 7);
    pattern_ds.x = pattern_ds.csx;
    pattern_ds.y = pattern_ds.csy;
    DispSprD__FP9DISP_SPRT(&pattern_ds);
  } while (iVar1 < 2);
  return;
}

static void SavePoint_BgPattern2Disp(float off_x, float off_y, u_char alpha) {
	DISP_SPRT pattern_ds;
	int i;
	
  int iVar1;
  float fVar2;
  float fVar3;
  DISP_SPRT pattern_ds;
  
  fVar3 = 448.0;
  iVar1 = 0;
  do {
    CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&pattern_ds,savepoint_tex + 1);
    fVar2 = (float)iVar1;
    iVar1 = iVar1 + 1;
    pattern_ds.csy = pattern_ds.y + off_y;
    pattern_ds.csx = (pattern_ds.x + off_x) - fVar2 * 640.0;
    if ((int)pattern_ds.w < 0) {
      fVar2 = (float)(pattern_ds.w & 1 | pattern_ds.w >> 1);
      fVar2 = fVar2 + fVar2;
    }
    else {
      fVar2 = (float)pattern_ds.w;
    }
    pattern_ds.scw = 640.0 / fVar2;
    if ((int)pattern_ds.h < 0) {
      fVar2 = (float)(pattern_ds.h & 1 | pattern_ds.h >> 1);
      fVar2 = fVar2 + fVar2;
    }
    else {
      fVar2 = (float)pattern_ds.h;
    }
    pattern_ds.sch = fVar3 / fVar2;
    pattern_ds.alphar = 0x48;
    pattern_ds.alpha = (uchar)((int)((uint)pattern_ds.alpha * (uint)alpha) >> 7);
    pattern_ds.x = pattern_ds.csx;
    pattern_ds.y = pattern_ds.csy;
    DispSprD__FP9DISP_SPRT(&pattern_ds);
  } while (iVar1 < 2);
  return;
}

static void SavePoint_BgFleaDisp(int off_x, int off_y, u_char alpha) {
	DISP_SPRT flea_ds;
	int i;
	
  float fVar1;
  int iVar2;
  SPRT_DAT *d;
  float fVar3;
  DISP_SPRT flea_ds;
  
  fVar1 = DAT_003ee824;
  fVar3 = (float)off_y;
  iVar2 = 3;
  d = savepoint_tex + 2;
  do {
    CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&flea_ds,d);
    iVar2 = iVar2 + -1;
    d = d + 1;
    flea_ds.csx = flea_ds.x + (float)off_x;
    flea_ds.scw = fVar1;
    flea_ds.csy = flea_ds.y + fVar3;
    flea_ds.sch = fVar1;
    flea_ds.alphar = 0x48;
    flea_ds.r = 0xff;
    flea_ds.alpha = (uchar)((int)((uint)flea_ds.alpha * (uint)alpha) >> 7);
    flea_ds.g = 200;
    flea_ds.b = '`';
    flea_ds.x = flea_ds.csx;
    flea_ds.y = flea_ds.csy;
    DispSprD__FP9DISP_SPRT(&flea_ds);
  } while (-1 < iVar2);
  return;
}

static void SavePoint_FleaDisp(int off_x, int off_y, u_char alpha) {
	DISP_SPRT flea_ds;
	int i;
	
  int iVar1;
  SPRT_DAT *d;
  float fVar2;
  DISP_SPRT flea_ds;
  
  fVar2 = (float)off_y;
  iVar1 = 3;
  d = savepoint_tex + 6;
  do {
    CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&flea_ds,d);
    iVar1 = iVar1 + -1;
    d = d + 1;
    flea_ds.csx = flea_ds.x + (float)off_x;
    flea_ds.scw = 3.0;
    flea_ds.csy = flea_ds.y + fVar2;
    flea_ds.sch = 3.0;
    flea_ds.alphar = 0x48;
    flea_ds.alpha = (uchar)((int)((uint)flea_ds.alpha * (uint)alpha) >> 7);
    flea_ds.x = flea_ds.csx;
    flea_ds.y = flea_ds.csy;
    DispSprD__FP9DISP_SPRT(&flea_ds);
  } while (-1 < iVar1);
  return;
}

static void SavePoint_ShadowDisp(int off_x, int off_y, u_char alpha) {
	DISP_SPRT shadow_ds;
	int i;
	
  int iVar1;
  SPRT_DAT *d;
  float fVar2;
  float fVar3;
  float fVar4;
  DISP_SPRT shadow_ds;
  
  fVar3 = (float)off_x;
  fVar4 = 320.0;
  iVar1 = 3;
  d = savepoint_tex + 10;
  do {
    CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&shadow_ds,d);
    shadow_ds.csx = shadow_ds.x + fVar3;
    shadow_ds.csy = shadow_ds.y + (float)off_y;
    if ((int)shadow_ds.w < 0) {
      fVar2 = (float)(shadow_ds.w & 1 | shadow_ds.w >> 1);
      fVar2 = fVar2 + fVar2;
    }
    else {
      fVar2 = (float)shadow_ds.w;
    }
    shadow_ds.scw = fVar4 / fVar2;
    if ((int)shadow_ds.h < 0) {
      fVar2 = (float)(shadow_ds.h & 1 | shadow_ds.h >> 1);
      fVar2 = fVar2 + fVar2;
    }
    else {
      fVar2 = (float)shadow_ds.h;
    }
    shadow_ds.sch = 224.0 / fVar2;
    iVar1 = iVar1 + -1;
    shadow_ds.alpha = (uchar)((int)((uint)shadow_ds.alpha * (uint)alpha) >> 7);
    shadow_ds.x = shadow_ds.csx;
    shadow_ds.y = shadow_ds.csy;
    DispSprD__FP9DISP_SPRT(&shadow_ds);
    d = d + 1;
  } while (-1 < iVar1);
  return;
}

void SavePointTopCaptionDisp(int off_x, int off_y, u_char alpha) {
  DrawCmnCapGroup_W__FiiUcUi(0,0,alpha,0);
  return;
}
