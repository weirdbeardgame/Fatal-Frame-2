// STATUS: NOT STARTED

#include "album_disp.h"

unsigned char ALBUM_INFO type_info node[8];

static void _fixed_array_assert(char *strType, size_t v0, size_t v1) {
	static char *str = 0x3a03e0;
	
  g3ddbgAssert__FbPCce(false,str_646);
  return (type_info *)v;
}

static void** void * * _fixed_array_verifyrange<void *>(size_t v, size_t _max) {
  if (_max <= v) {
    __tf10ALBUM_INFO(0x3ef310,_max);
  }
  return (void **)0x0;
}

static char** char * * _fixed_array_verifyrange<char *>(size_t v, size_t _max) {
  if (_max <= v) {
    __tf10ALBUM_INFO(0x3ef318,_max);
  }
  return (char **)0x0;
}

static unsigned int** unsigned int * * _fixed_array_verifyrange<unsigned int *>(size_t v, size_t _max) {
  if (_max <= v) {
    __tf10ALBUM_INFO(0x3a0428,_max);
  }
  return (uint **)0x0;
}

void AlbumInOutAnimCtrl(char *anim_step, char *anim_timer, u_char *alpha) {
  uchar uVar1;
  
  uVar1 = Zero2Anim2D_InOutAnimCtrl__FPcT0ss(anim_step,anim_timer,10,5);
  *alpha = uVar1;
  return;
}

void AlbumEditMenuAnimCtrl(char *anim_step, char *anim_timer, u_char *alpha, float *sel_scl, float *non_sel_scl) {
	static SCL_ANIM_TBL sel_scl_tbl[2] = {
		/* [0] = */ {
			/* .start_scl = */ 0.f,
			/* .end_scl = */ 1.3f,
			/* .start_time = */ 0,
			/* .end_time = */ 5
		},
		/* [1] = */ {
			/* .start_scl = */ -1.f,
			/* .end_scl = */ -1.f,
			/* .start_time = */ -1,
			/* .end_time = */ -1
		}
	};
	static SCL_ANIM_TBL non_sel_scl_tbl[2] = {
		/* [0] = */ {
			/* .start_scl = */ 0.f,
			/* .end_scl = */ 1.f,
			/* .start_time = */ 0,
			/* .end_time = */ 5
		},
		/* [1] = */ {
			/* .start_scl = */ -1.f,
			/* .end_scl = */ -1.f,
			/* .start_time = */ -1,
			/* .end_time = */ -1
		}
	};
	static ALPHA_ANIM_TBL in_alpha_tbl[2] = {
		/* [0] = */ {
			/* .start_alpha = */ 0,
			/* .end_alpha = */ 128,
			/* .start_time = */ 0,
			/* .end_time = */ 5
		},
		/* [1] = */ {
			/* .start_alpha = */ -1,
			/* .end_alpha = */ -1,
			/* .start_time = */ -1,
			/* .end_time = */ -1
		}
	};
	static ALPHA_ANIM_TBL out_alpha_tbl[2] = {
		/* [0] = */ {
			/* .start_alpha = */ 128,
			/* .end_alpha = */ 0,
			/* .start_time = */ 0,
			/* .end_time = */ 5
		},
		/* [1] = */ {
			/* .start_alpha = */ -1,
			/* .end_alpha = */ -1,
			/* .start_time = */ -1,
			/* .end_time = */ -1
		}
	};
	
  uchar uVar1;
  char cVar2;
  float fVar3;
  
  fVar3 = DAT_003ed8f4;
  *alpha = 0x80;
  *sel_scl = fVar3;
  *non_sel_scl = 1.0;
  cVar2 = *anim_step;
  if (*anim_step == '\0') {
    *anim_timer = '\0';
    *anim_step = '\x01';
    cVar2 = '\x01';
  }
  if (cVar2 == '\x01') {
    fVar3 = Anim2D_CalcNowScale__FPC12SCL_ANIM_TBLi
                      ((SCL_ANIM_TBL *)sel_scl_tbl_970,(int)*anim_timer);
    *sel_scl = fVar3;
    fVar3 = Anim2D_CalcNowScale__FPC12SCL_ANIM_TBLi
                      ((SCL_ANIM_TBL *)non_sel_scl_tbl_971,(int)*anim_timer);
    *non_sel_scl = fVar3;
    uVar1 = Anim2D_CalcNowAlpha__FPC14ALPHA_ANIM_TBLi
                      ((ALPHA_ANIM_TBL *)in_alpha_tbl_972,(int)*anim_timer);
    *alpha = uVar1;
    cVar2 = *anim_timer;
    *anim_timer = cVar2 + '\x01';
    if ((char)(cVar2 + '\x01') < '\x05') {
      return;
    }
    cVar2 = '\x02';
  }
  else {
    if (cVar2 != '\x03') {
      if (cVar2 != '\x04') {
        return;
      }
      *alpha = '\0';
      return;
    }
    uVar1 = Anim2D_CalcNowAlpha__FPC14ALPHA_ANIM_TBLi
                      ((ALPHA_ANIM_TBL *)out_alpha_tbl_973,(int)*anim_timer);
    *alpha = uVar1;
    cVar2 = *anim_timer;
    *anim_timer = cVar2 + '\x01';
    if ((char)(cVar2 + '\x01') < '\x05') {
      return;
    }
    cVar2 = '\x04';
  }
  *anim_step = cVar2;
  *anim_timer = '\0';
  return;
}

void AlbumEditFrameDisp(int off_x, int off_y, u_char alpha) {
  AlbumBaseFrameDisp__FiiUc(0,0,alpha);
  AlbumA_FrameDisp__FiiUc(0,0,alpha);
  AlbumA_ThumbnailFrameDisp__FiiUc(0,0,alpha);
  AlbumB_FrameDisp__FiiUc(0,0,alpha);
  AlbumB_ThumbnailFrameDisp__FiiUc(0,0,alpha);
  AlbumAPhotoNumDisp__FiiUc(0,0,alpha);
  AlbumBPhotoNumDisp__FiiUc(0,0,alpha);
  return;
}

void AlbumBlackBgDisp(int off_x, int off_y, u_char alpha, u_char max_alpha) {
	DISP_SQAR dsq;
	SQAR_DAT cursor_base;
	
  undefined *puVar1;
  uint uVar2;
  ulong *puVar3;
  uchar *puVar4;
  DISP_SQAR dsq;
  SQAR_DAT cursor_base;
  
  puVar1 = (undefined *)((int)&cursor_base.h + 3);
  uVar2 = (uint)puVar1 & 7;
  puVar3 = (ulong *)(puVar1 + -uVar2);
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | DAT_003a0488 >> (7 - uVar2) * 8;
  cursor_base._0_8_ = DAT_003a0488;
  puVar1 = (undefined *)((int)&cursor_base.y + 3);
  uVar2 = (uint)puVar1 & 7;
  puVar3 = (ulong *)(puVar1 + -uVar2);
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | DAT_003a0490 >> (7 - uVar2) * 8;
  cursor_base._8_8_ = DAT_003a0490;
  uVar2 = (uint)&cursor_base.alpha & 7;
  puVar4 = &cursor_base.alpha + -uVar2;
  *(ulong *)puVar4 = *(ulong *)puVar4 & -1L << (uVar2 + 1) * 8 | DAT_003a0498 >> (7 - uVar2) * 8;
  cursor_base._16_8_ = DAT_003a0498;
  CopySqrDToSqr__FP9DISP_SQARP8SQAR_DAT(&dsq,&cursor_base);
  dsq.alpha = (uchar)((int)((uint)max_alpha * (uint)alpha) >> 7);
  DispSqrD__FP9DISP_SQAR(&dsq);
  return;
}

void AlbumTitleFrameDisp(int off_x, int off_y, u_char alpha) {
	int i;
	DISP_SPRT title_ds;
	
  int iVar1;
  SPRT_DAT *d;
  float fVar2;
  DISP_SPRT title_ds;
  
  fVar2 = (float)off_x;
  iVar1 = 1;
  d = album_tex;
  do {
    CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&title_ds,d);
    iVar1 = iVar1 + -1;
    d = d + 1;
    title_ds.x = title_ds.x + fVar2;
    title_ds.y = title_ds.y + (float)off_y;
    title_ds.alpha = (uchar)((int)((uint)title_ds.alpha * (uint)alpha) >> 7);
    DispSprD__FP9DISP_SPRT(&title_ds);
  } while (-1 < iVar1);
  return;
}

void AlbumTitleDisp(int off_x, int off_y, u_char alpha) {
	DISP_SPRT title_ds;
	
  DISP_SPRT title_ds;
  
  CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&title_ds,album_tex + 2);
  title_ds.x = title_ds.x + (float)off_x;
  title_ds.y = title_ds.y + (float)off_y;
  title_ds.alpha = (uchar)((int)((uint)title_ds.alpha * (uint)alpha) >> 7);
  DispSprD__FP9DISP_SPRT(&title_ds);
  return;
}

static void AlbumBaseFrameDisp(int off_x, int off_y, u_char alpha) {
	int i;
	DISP_SPRT base_ds;
	
  int iVar1;
  SPRT_DAT *pSVar2;
  float fVar3;
  DISP_SPRT base_ds;
  
  fVar3 = (float)off_x;
  iVar1 = 5;
  pSVar2 = album_tex + 3;
  do {
    CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&base_ds,pSVar2);
    iVar1 = iVar1 + -1;
    pSVar2 = pSVar2 + 1;
    base_ds.x = base_ds.x + fVar3;
    base_ds.y = base_ds.y + (float)off_y;
    base_ds.alpha = (uchar)((int)((uint)base_ds.alpha * (uint)alpha) >> 7);
    DispSprD__FP9DISP_SPRT(&base_ds);
  } while (-1 < iVar1);
  iVar1 = 5;
  pSVar2 = album_tex + 0x15;
  do {
    CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&base_ds,pSVar2);
    iVar1 = iVar1 + -1;
    pSVar2 = pSVar2 + 1;
    base_ds.x = base_ds.x + fVar3;
    base_ds.y = base_ds.y + (float)off_y;
    base_ds.alpha = (uchar)((int)((uint)base_ds.alpha * (uint)alpha) >> 7);
    DispSprD__FP9DISP_SPRT(&base_ds);
  } while (-1 < iVar1);
  return;
}

static void AlbumA_FrameDisp(int off_x, int off_y, u_char alpha) {
	int i;
	DISP_SPRT frame_ds;
	
  int iVar1;
  SPRT_DAT *d;
  float fVar2;
  DISP_SPRT frame_ds;
  
  fVar2 = (float)off_x;
  iVar1 = 3;
  d = album_tex + 9;
  do {
    CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&frame_ds,d);
    iVar1 = iVar1 + -1;
    d = d + 1;
    frame_ds.x = frame_ds.x + fVar2;
    frame_ds.y = frame_ds.y + (float)off_y;
    frame_ds.alpha = (uchar)((int)((uint)frame_ds.alpha * (uint)alpha) >> 7);
    DispSprD__FP9DISP_SPRT(&frame_ds);
  } while (-1 < iVar1);
  return;
}

static void AlbumA_ThumbnailFrameDisp(int off_x, int off_y, u_char alpha) {
	int i;
	DISP_SPRT frame_ds;
	
  int iVar1;
  SPRT_DAT *d;
  float fVar2;
  DISP_SPRT frame_ds;
  
  fVar2 = (float)off_x;
  iVar1 = 7;
  d = album_tex + 0xd;
  do {
    CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&frame_ds,d);
    iVar1 = iVar1 + -1;
    d = d + 1;
    frame_ds.x = frame_ds.x + fVar2;
    frame_ds.y = frame_ds.y + (float)off_y;
    frame_ds.alpha = (uchar)((int)((uint)frame_ds.alpha * (uint)alpha) >> 7);
    DispSprD__FP9DISP_SPRT(&frame_ds);
  } while (-1 < iVar1);
  return;
}

void AlbumA_CurrentFrameFlareDisp(int off_x, int off_y, u_char alpha, u_char rgb) {
	int i;
	DISP_SPRT frame_ds;
	
  int iVar1;
  int iVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  DISP_SPRT frame_ds;
  
  fVar6 = (float)off_x;
  fVar5 = (float)off_y;
  CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&frame_ds,album_tex + 0xb5);
  frame_ds.x = frame_ds.x + fVar6;
  frame_ds.alphar = 0x48;
  frame_ds.y = frame_ds.y + fVar5;
  frame_ds.alpha = (uchar)((int)((uint)frame_ds.alpha * (uint)alpha) >> 7);
  frame_ds.r = rgb;
  frame_ds.g = rgb;
  frame_ds.b = rgb;
  DispSprD__FP9DISP_SPRT(&frame_ds);
  CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&frame_ds,album_tex + 0xb6);
  frame_ds.crx = frame_ds.x + fVar6;
  if ((int)frame_ds.w < 0) {
    fVar4 = (float)(frame_ds.w & 1 | frame_ds.w >> 1);
    fVar4 = fVar4 + fVar4;
  }
  else {
    fVar4 = (float)frame_ds.w;
  }
  frame_ds.rot = 270.0;
  frame_ds.cry = frame_ds.y + fVar4 + fVar5;
  frame_ds.alphar = 0x48;
  frame_ds.alpha = (uchar)((int)((uint)frame_ds.alpha * (uint)alpha) >> 7);
  iVar2 = 0;
  iVar1 = 7;
  frame_ds.x = frame_ds.crx;
  frame_ds.y = frame_ds.cry;
  frame_ds.r = rgb;
  frame_ds.g = rgb;
  frame_ds.b = rgb;
  DispSprD__FP9DISP_SPRT(&frame_ds);
  do {
    CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&frame_ds,album_tex + 0xb7);
    fVar4 = (float)iVar2;
    iVar1 = iVar1 + -1;
    uVar3 = (uint)alpha;
    frame_ds.alphar = 0x48;
    frame_ds.y = frame_ds.y + fVar5;
    iVar2 = iVar2 + 0x32;
    frame_ds.x = frame_ds.x + fVar6 + fVar4;
    frame_ds.alpha = (uchar)((int)(frame_ds.alpha * uVar3) >> 7);
    frame_ds.r = rgb;
    frame_ds.g = rgb;
    frame_ds.b = rgb;
    DispSprD__FP9DISP_SPRT(&frame_ds);
  } while (-1 < iVar1);
  iVar2 = 0;
  iVar1 = 6;
  do {
    CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&frame_ds,album_tex + 0xb8);
    fVar4 = (float)iVar2;
    iVar2 = iVar2 + 0x32;
    frame_ds.crx = frame_ds.x + fVar6 + fVar4;
    if ((int)frame_ds.w < 0) {
      fVar4 = (float)(frame_ds.w & 1 | frame_ds.w >> 1);
      fVar4 = fVar4 + fVar4;
    }
    else {
      fVar4 = (float)frame_ds.w;
    }
    iVar1 = iVar1 + -1;
    frame_ds.rot = 270.0;
    frame_ds.alphar = 0x48;
    frame_ds.cry = frame_ds.y + fVar4 + fVar5;
    frame_ds.alpha = (uchar)((int)(frame_ds.alpha * uVar3) >> 7);
    frame_ds.x = frame_ds.crx;
    frame_ds.y = frame_ds.cry;
    frame_ds.r = rgb;
    frame_ds.g = rgb;
    frame_ds.b = rgb;
    DispSprD__FP9DISP_SPRT(&frame_ds);
  } while (-1 < iVar1);
  CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&frame_ds,album_tex + 0xb9);
  frame_ds.x = frame_ds.x + fVar6;
  frame_ds.y = frame_ds.y + fVar5;
  frame_ds.alphar = 0x48;
  frame_ds.alpha = (uchar)((int)(frame_ds.alpha * uVar3) >> 7);
  frame_ds.r = rgb;
  frame_ds.g = rgb;
  frame_ds.b = rgb;
  DispSprD__FP9DISP_SPRT(&frame_ds);
  return;
}

static void AlbumB_FrameDisp(int off_x, int off_y, u_char alpha) {
	int i;
	DISP_SPRT frame_ds;
	
  int iVar1;
  SPRT_DAT *d;
  float fVar2;
  DISP_SPRT frame_ds;
  
  fVar2 = (float)off_x;
  iVar1 = 3;
  d = album_tex + 0x23;
  do {
    CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&frame_ds,d);
    iVar1 = iVar1 + -1;
    d = d + 1;
    frame_ds.x = frame_ds.x + fVar2;
    frame_ds.y = frame_ds.y + (float)off_y;
    frame_ds.alpha = (uchar)((int)((uint)frame_ds.alpha * (uint)alpha) >> 7);
    DispSprD__FP9DISP_SPRT(&frame_ds);
  } while (-1 < iVar1);
  return;
}

static void AlbumB_ThumbnailFrameDisp(int off_x, int off_y, u_char alpha) {
	int i;
	DISP_SPRT frame_ds;
	
  int iVar1;
  SPRT_DAT *d;
  float fVar2;
  DISP_SPRT frame_ds;
  
  fVar2 = (float)off_x;
  iVar1 = 7;
  d = album_tex + 0x1b;
  do {
    CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&frame_ds,d);
    iVar1 = iVar1 + -1;
    d = d + 1;
    frame_ds.x = frame_ds.x + fVar2;
    frame_ds.y = frame_ds.y + (float)off_y;
    frame_ds.alpha = (uchar)((int)((uint)frame_ds.alpha * (uint)alpha) >> 7);
    DispSprD__FP9DISP_SPRT(&frame_ds);
  } while (-1 < iVar1);
  return;
}

void AlbumB_CurrentFrameFlareDisp(int off_x, int off_y, u_char alpha, u_char rgb) {
	int i;
	DISP_SPRT frame_ds;
	
  int iVar1;
  int iVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  DISP_SPRT frame_ds;
  
  fVar5 = (float)off_y;
  fVar6 = (float)off_x;
  iVar2 = 0;
  CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&frame_ds,album_tex + 0xba);
  frame_ds.x = frame_ds.x + fVar6;
  frame_ds.alphar = 0x48;
  frame_ds.y = frame_ds.y + fVar5;
  iVar1 = 7;
  frame_ds.alpha = (uchar)((int)((uint)frame_ds.alpha * (uint)alpha) >> 7);
  frame_ds.r = rgb;
  frame_ds.g = rgb;
  frame_ds.b = rgb;
  DispSprD__FP9DISP_SPRT(&frame_ds);
  do {
    CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&frame_ds,album_tex + 0xbb);
    fVar4 = (float)iVar2;
    iVar1 = iVar1 + -1;
    frame_ds.alphar = 0x48;
    frame_ds.y = frame_ds.y + fVar5;
    iVar2 = iVar2 + 0x32;
    frame_ds.x = frame_ds.x + fVar6 + fVar4;
    frame_ds.alpha = (uchar)((int)((uint)frame_ds.alpha * (uint)alpha) >> 7);
    frame_ds.r = rgb;
    frame_ds.g = rgb;
    frame_ds.b = rgb;
    DispSprD__FP9DISP_SPRT(&frame_ds);
  } while (-1 < iVar1);
  iVar2 = 0;
  iVar1 = 6;
  do {
    CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&frame_ds,album_tex + 0xbc);
    fVar4 = (float)iVar2;
    iVar2 = iVar2 + 0x32;
    frame_ds.crx = frame_ds.x + fVar6 + fVar4;
    if ((int)frame_ds.w < 0) {
      fVar4 = (float)(frame_ds.w & 1 | frame_ds.w >> 1);
      fVar4 = fVar4 + fVar4;
    }
    else {
      fVar4 = (float)frame_ds.w;
    }
    iVar1 = iVar1 + -1;
    uVar3 = (uint)alpha;
    frame_ds.rot = 270.0;
    frame_ds.alphar = 0x48;
    frame_ds.cry = frame_ds.y + fVar4 + fVar5;
    frame_ds.alpha = (uchar)((int)(frame_ds.alpha * uVar3) >> 7);
    frame_ds.x = frame_ds.crx;
    frame_ds.y = frame_ds.cry;
    frame_ds.r = rgb;
    frame_ds.g = rgb;
    frame_ds.b = rgb;
    DispSprD__FP9DISP_SPRT(&frame_ds);
  } while (-1 < iVar1);
  CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&frame_ds,album_tex + 0xbd);
  frame_ds.crx = frame_ds.x + fVar6;
  if ((int)frame_ds.w < 0) {
    fVar4 = (float)(frame_ds.w & 1 | frame_ds.w >> 1);
    fVar4 = fVar4 + fVar4;
  }
  else {
    fVar4 = (float)frame_ds.w;
  }
  frame_ds.rot = 270.0;
  frame_ds.alphar = 0x48;
  frame_ds.cry = frame_ds.y + fVar4 + fVar5;
  frame_ds.alpha = (uchar)((int)(frame_ds.alpha * uVar3) >> 7);
  frame_ds.x = frame_ds.crx;
  frame_ds.y = frame_ds.cry;
  frame_ds.r = rgb;
  frame_ds.g = rgb;
  frame_ds.b = rgb;
  DispSprD__FP9DISP_SPRT(&frame_ds);
  CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&frame_ds,album_tex + 0xbe);
  frame_ds.x = frame_ds.x + fVar6;
  frame_ds.alphar = 0x48;
  frame_ds.y = frame_ds.y + fVar5;
  frame_ds.alpha = (uchar)((int)(frame_ds.alpha * uVar3) >> 7);
  frame_ds.r = rgb;
  frame_ds.g = rgb;
  frame_ds.b = rgb;
  DispSprD__FP9DISP_SPRT(&frame_ds);
  return;
}

static void AlbumAPhotoNumDisp(int off_x, int off_y, u_char alpha) {
	DISP_SPRT num_ds;
	
  float fVar1;
  DISP_SPRT num_ds;
  
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  fVar1 = (float)off_x;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  _fixed_array_verifyrange__H1Z10ALBUM_INFO_UiUi_PX01(0,2);
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  DrawCmnNumberTex__FiiP8SPRT_DATiiUciUc
            ((uint)album_info.field0_0x0.m_aData[0].album_info.pic_num,2,album_tex + 0x95,0x24,0x3b,
             alpha,0,'\0');
                    /* end of inlined section */
  CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&num_ds,album_tex + 0x9f);
  num_ds.x = num_ds.x + fVar1;
  num_ds.y = num_ds.y + (float)off_y;
  num_ds.alpha = (uchar)((int)((uint)num_ds.alpha * (uint)alpha) >> 7);
  DispSprD__FP9DISP_SPRT(&num_ds);
  DrawCmnNumberTex__FiiP8SPRT_DATiiUciUc(0x10,2,album_tex + 0x95,0x52,0x3b,alpha,0,'\0');
  CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&num_ds,album_tex + 0xa1);
  num_ds.x = num_ds.x + fVar1;
  num_ds.y = num_ds.y + (float)off_y;
  num_ds.alpha = (uchar)((int)((uint)num_ds.alpha * (uint)alpha) >> 7);
  DispSprD__FP9DISP_SPRT(&num_ds);
  return;
}

static void AlbumBPhotoNumDisp(int off_x, int off_y, u_char alpha) {
	DISP_SPRT num_ds;
	
  float fVar1;
  DISP_SPRT num_ds;
  
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  fVar1 = (float)off_x;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  _fixed_array_verifyrange__H1Z10ALBUM_INFO_UiUi_PX01(1,2);
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  DrawCmnNumberTex__FiiP8SPRT_DATiiUciUc
            ((uint)album_info.field0_0x0.m_aData[1].album_info.pic_num,2,album_tex + 0x95,0x1f7,
             0x196,alpha,0,'\0');
                    /* end of inlined section */
  CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&num_ds,album_tex + 0xa0);
  num_ds.x = num_ds.x + fVar1;
  num_ds.y = num_ds.y + (float)off_y;
  num_ds.alpha = (uchar)((int)((uint)num_ds.alpha * (uint)alpha) >> 7);
  DispSprD__FP9DISP_SPRT(&num_ds);
  DrawCmnNumberTex__FiiP8SPRT_DATiiUciUc(0x10,2,album_tex + 0x95,0x225,0x196,alpha,0,'\0');
  CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&num_ds,album_tex + 0xa2);
  num_ds.x = num_ds.x + fVar1;
  num_ds.y = num_ds.y + (float)off_y;
  num_ds.alpha = (uchar)((int)((uint)num_ds.alpha * (uint)alpha) >> 7);
  DispSprD__FP9DISP_SPRT(&num_ds);
  return;
}

void AlbumThumbnailBaseDisp(int data_label, int off_x, int off_y, u_char alpha) {
	int i;
	int j;
	DISP_SPRT frame_ds;
	static int thumbnail_base_x[2] = {
		/* [0] = */ 207,
		/* [1] = */ 36
	};
	static int thumbnail_base_y[2] = {
		/* [0] = */ 80,
		/* [1] = */ 338
	};
	
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  DISP_SPRT frame_ds;
  
  iVar3 = 0;
  iVar4 = 0;
  do {
    iVar2 = 0;
    iVar1 = 7;
    do {
      CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&frame_ds,album_tex + 0x94);
      iVar1 = iVar1 + -1;
      frame_ds.x = (float)(*(int *)((int)&thumbnail_base_x_1019 + data_label * 4) + off_x + iVar2);
      frame_ds.y = (float)(*(int *)((int)&thumbnail_base_y_1020 + data_label * 4) + off_y + iVar3);
      iVar2 = iVar2 + 0x32;
      frame_ds.alpha = (uchar)((int)((uint)frame_ds.alpha * (uint)alpha) >> 7);
      DispSprD__FP9DISP_SPRT(&frame_ds);
    } while (-1 < iVar1);
    iVar4 = iVar4 + 1;
    iVar3 = iVar3 + 0x23;
  } while (iVar4 < 2);
  return;
}

void AlbumThumbnailBaseNumberDisp(int data_label, int off_x, int off_y, u_char alpha) {
	int i;
	int j;
	DISP_SPRT frame_ds;
	static int thumbnail_base_x_tbl[2] = {
		/* [0] = */ 207,
		/* [1] = */ 36
	};
	static int thumbnail_num_y_tbl[2] = {
		/* [0] = */ 84,
		/* [1] = */ 343
	};
	float num_x;
	float thumbnail_base_x;
	float thumbnail_base_half;
	float num_w;
	int disp_number;
	
  int iVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  float fVar11;
  float fVar12;
  DISP_SPRT frame_ds;
  int i;
  
  iVar5 = 1;
  iVar6 = data_label * 4;
  iVar10 = 0;
  i = 0;
  uVar4 = (uint)(ushort)album_tex[148].w;
  do {
    iVar9 = 0;
    iVar8 = 7;
    do {
      iVar1 = iVar5 % 10;
      bVar2 = iVar5 < 10;
      iVar3 = *(int *)((int)&thumbnail_base_x_tbl_1024 + iVar6) + iVar9;
      iVar9 = iVar9 + 0x32;
      iVar5 = iVar5 + 1;
      fVar11 = (float)(uint)(ushort)album_tex[iVar1 + 0x8a].w;
      if (!bVar2) {
        fVar11 = fVar11 + (float)(uint)(ushort)album_tex[139].w;
      }
      fVar11 = ((float)iVar3 + (float)uVar4 * 0.5) - fVar11 * 0.5;
      uVar7 = (uint)alpha;
      if (bVar2) {
        CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&frame_ds,album_tex + iVar1 + 0x8a);
        frame_ds.y = (float)(*(int *)((int)&thumbnail_num_y_tbl_1025 + iVar6) + iVar10);
        frame_ds.alpha = (uchar)((int)(frame_ds.alpha * uVar7) >> 7);
        frame_ds.x = fVar11;
        DispSprD__FP9DISP_SPRT(&frame_ds);
      }
      else {
        CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&frame_ds,album_tex + 0x8b);
        fVar12 = (float)(*(int *)((int)&thumbnail_num_y_tbl_1025 + iVar6) + iVar10);
        frame_ds.alpha = (uchar)((int)(frame_ds.alpha * uVar7) >> 7);
        frame_ds.x = fVar11;
        frame_ds.y = fVar12;
        DispSprD__FP9DISP_SPRT(&frame_ds);
        fVar11 = fVar11 + (float)(uint)(ushort)album_tex[139].w;
        CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&frame_ds,album_tex + iVar1 + 0x8a);
        frame_ds.alpha = (uchar)((int)(frame_ds.alpha * uVar7) >> 7);
        frame_ds.x = fVar11;
        frame_ds.y = fVar12;
        DispSprD__FP9DISP_SPRT(&frame_ds);
      }
      iVar8 = iVar8 + -1;
    } while (-1 < iVar8);
    i = i + 1;
    iVar10 = iVar10 + 0x23;
  } while (i < 2);
  return;
}

void AlbumEditAlbumACursorDisp(int photo_no, int off_x, int off_y, u_char alpha, u_char rgb) {
	DISP_SPRT cursor_ds;
	int csr_tate;
	int csr_yoko;
	
  int iVar1;
  int iVar2;
  DISP_SPRT cursor_ds;
  
  iVar2 = photo_no;
  if (photo_no < 0) {
    iVar2 = photo_no + 7;
  }
  CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&cursor_ds,album_tex + 0xa4);
  iVar1 = (photo_no + (iVar2 >> 3) * -8) * 0x32 + off_x;
  iVar2 = (iVar2 >> 3) * 0x23 + off_y;
  cursor_ds.y = (float)(iVar2 + 0x50);
  cursor_ds.x = (float)(iVar1 + 0xcf);
  cursor_ds.alphar = 0x48;
  cursor_ds.alpha = (uchar)((int)((uint)cursor_ds.alpha * (uint)alpha) >> 7);
  cursor_ds.r = rgb;
  cursor_ds.g = rgb;
  cursor_ds.b = rgb;
  DispSprD__FP9DISP_SPRT(&cursor_ds);
  CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&cursor_ds,album_tex + 0xa3);
  cursor_ds.x = (float)(iVar1 + 0xca);
  cursor_ds.y = (float)(iVar2 + 0x4a);
  cursor_ds.alpha = (uchar)((int)((uint)cursor_ds.alpha * (uint)alpha) >> 7);
  cursor_ds.r = rgb;
  cursor_ds.g = rgb;
  cursor_ds.b = rgb;
  DispSprD__FP9DISP_SPRT(&cursor_ds);
  return;
}

void AlbumEditAlbumBCursorDisp(int photo_no, int off_x, int off_y, u_char alpha, u_char rgb) {
	DISP_SPRT cursor_ds;
	int csr_tate;
	int csr_yoko;
	
  int iVar1;
  int iVar2;
  DISP_SPRT cursor_ds;
  
  iVar2 = photo_no;
  if (photo_no < 0) {
    iVar2 = photo_no + 7;
  }
  CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&cursor_ds,album_tex + 0xa6);
  iVar1 = (photo_no + (iVar2 >> 3) * -8) * 0x32 + off_x;
  iVar2 = (iVar2 >> 3) * 0x23 + off_y;
  cursor_ds.y = (float)(iVar2 + 0x152);
  cursor_ds.x = (float)(iVar1 + 0x24);
  cursor_ds.alphar = 0x48;
  cursor_ds.alpha = (uchar)((int)((uint)cursor_ds.alpha * (uint)alpha) >> 7);
  cursor_ds.r = rgb;
  cursor_ds.g = rgb;
  cursor_ds.b = rgb;
  DispSprD__FP9DISP_SPRT(&cursor_ds);
  CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&cursor_ds,album_tex + 0xa5);
  cursor_ds.x = (float)(iVar1 + 0x1f);
  cursor_ds.y = (float)(iVar2 + 0x14c);
  cursor_ds.alpha = (uchar)((int)((uint)cursor_ds.alpha * (uint)alpha) >> 7);
  cursor_ds.r = rgb;
  cursor_ds.g = rgb;
  cursor_ds.b = rgb;
  DispSprD__FP9DISP_SPRT(&cursor_ds);
  return;
}

void AlbumEditAlbumDisp(int data_label, int album_type, int off_x, int off_y, u_char alpha) {
	int i;
	DISP_SPRT album_ds;
	static int album_x_tbl[2][2] = {
		/* [0] = */ {
			/* [0] = */ 45,
			/* [1] = */ 171
		},
		/* [1] = */ {
			/* [0] = */ 444,
			/* [1] = */ 570
		}
	};
	static int album_y_tbl[2][2] = {
		/* [0] = */ {
			/* [0] = */ 80,
			/* [1] = */ 83
		},
		/* [1] = */ {
			/* [0] = */ 338,
			/* [1] = */ 341
		}
	};
	static int album_disp_tbl[7][2] = {
		/* [0] = */ {
			/* [0] = */ 169,
			/* [1] = */ 170
		},
		/* [1] = */ {
			/* [0] = */ 171,
			/* [1] = */ 172
		},
		/* [2] = */ {
			/* [0] = */ 173,
			/* [1] = */ 174
		},
		/* [3] = */ {
			/* [0] = */ 175,
			/* [1] = */ 176
		},
		/* [4] = */ {
			/* [0] = */ 177,
			/* [1] = */ 178
		},
		/* [5] = */ {
			/* [0] = */ 167,
			/* [1] = */ 168
		},
		/* [6] = */ {
			/* [0] = */ 179,
			/* [1] = */ 180
		}
	};
	
  int *piVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  DISP_SPRT album_ds;
  
  iVar4 = data_label << 3;
  piVar5 = (int *)(album_disp_tbl_1037 + album_type * 8);
  iVar6 = 1;
  iVar2 = *piVar5;
  while( true ) {
    piVar5 = piVar5 + 1;
    iVar6 = iVar6 + -1;
    CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&album_ds,album_tex + iVar2);
    piVar1 = (int *)(album_x_tbl_1035 + iVar4);
    piVar3 = (int *)(album_y_tbl_1036 + iVar4);
    iVar4 = iVar4 + 4;
    album_ds.x = (float)(*piVar1 + off_x);
    album_ds.y = (float)(*piVar3 + off_y);
    album_ds.alpha = (uchar)((int)((uint)album_ds.alpha * (uint)alpha) >> 7);
    DispSprD__FP9DISP_SPRT(&album_ds);
    if (iVar6 < 0) break;
    iVar2 = *piVar5;
  }
  return;
}

void AlbumEditAlbumInfoWinDisp(int album_type, int off_x, int off_y, u_char alpha) {
	static char __FUNCTION__[26] = {
		/* [0] = */ 65,
		/* [1] = */ 108,
		/* [2] = */ 98,
		/* [3] = */ 117,
		/* [4] = */ 109,
		/* [5] = */ 69,
		/* [6] = */ 100,
		/* [7] = */ 105,
		/* [8] = */ 116,
		/* [9] = */ 65,
		/* [10] = */ 108,
		/* [11] = */ 98,
		/* [12] = */ 117,
		/* [13] = */ 109,
		/* [14] = */ 73,
		/* [15] = */ 110,
		/* [16] = */ 102,
		/* [17] = */ 111,
		/* [18] = */ 87,
		/* [19] = */ 105,
		/* [20] = */ 110,
		/* [21] = */ 68,
		/* [22] = */ 105,
		/* [23] = */ 115,
		/* [24] = */ 112,
		/* [25] = */ 0
	};
	int i;
	DISP_SPRT info_ds;
	static int album_info_tex_tbl[7][2] = {
		/* [0] = */ {
			/* [0] = */ 195,
			/* [1] = */ 198
		},
		/* [1] = */ {
			/* [0] = */ 199,
			/* [1] = */ 202
		},
		/* [2] = */ {
			/* [0] = */ 203,
			/* [1] = */ 206
		},
		/* [3] = */ {
			/* [0] = */ 207,
			/* [1] = */ 210
		},
		/* [4] = */ {
			/* [0] = */ 211,
			/* [1] = */ 214
		},
		/* [5] = */ {
			/* [0] = */ 191,
			/* [1] = */ 194
		},
		/* [6] = */ {
			/* [0] = */ 191,
			/* [1] = */ 194
		}
	};
	static int album_info_name_tbl[7] = {
		/* [0] = */ 217,
		/* [1] = */ 218,
		/* [2] = */ 219,
		/* [3] = */ 220,
		/* [4] = */ 221,
		/* [5] = */ -1,
		/* [6] = */ -1
	};
	
  int iVar1;
  int iVar2;
  SPRT_DAT *pSVar3;
  float fVar4;
  DISP_SPRT info_ds;
  
  iVar2 = *(int *)(album_info_tex_tbl_1041 + album_type * 8);
  iVar1 = *(int *)(album_info_tex_tbl_1041 + album_type * 8 + 4);
  if (iVar2 <= iVar1) {
    fVar4 = (float)off_x;
    pSVar3 = album_tex + iVar2;
    do {
      CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&info_ds,pSVar3);
      iVar2 = iVar2 + 1;
      pSVar3 = pSVar3 + 1;
      info_ds.x = info_ds.x + fVar4;
      info_ds.y = info_ds.y + (float)off_y;
      info_ds.alpha = (uchar)((int)((uint)info_ds.alpha * (uint)alpha) >> 7);
      DispSprD__FP9DISP_SPRT(&info_ds);
    } while (iVar2 <= iVar1);
  }
  if (album_type == 5) {
    pSVar3 = album_tex + 0xd7;
  }
  else if (album_type == 6) {
    pSVar3 = album_tex + 0xd8;
  }
  else {
    if (*(int *)(album_info_name_tbl_1042 + album_type * 4) == -1) {
      SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
      PrintAssertReal("Error! %s");
      return;
    }
    pSVar3 = album_tex + *(int *)(album_info_name_tbl_1042 + album_type * 4);
  }
  CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&info_ds,pSVar3);
  info_ds.x = info_ds.x + (float)off_x;
  info_ds.y = info_ds.y + (float)off_y;
  info_ds.alpha = (uchar)((int)((uint)info_ds.alpha * (uint)alpha) >> 7);
  DispSprD__FP9DISP_SPRT(&info_ds);
  return;
}

void AlbumEditInfoNoDisp(int album_type, int off_x, int off_y, u_char alpha) {
	static int no_tex_tbl[7] = {
		/* [0] = */ 261,
		/* [1] = */ 262,
		/* [2] = */ 263,
		/* [3] = */ 264,
		/* [4] = */ 265,
		/* [5] = */ 260,
		/* [6] = */ 260
	};
	DISP_SPRT no_ds;
	
  DISP_SPRT no_ds;
  
  CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT
            (&no_ds,album_tex + *(int *)(no_tex_tbl_1046 + album_type * 4));
  no_ds.x = no_ds.x + (float)off_x;
  no_ds.y = no_ds.y + (float)off_y;
  no_ds.alpha = (uchar)((int)((uint)no_ds.alpha * (uint)alpha) >> 7);
  DispSprD__FP9DISP_SPRT(&no_ds);
  return;
}

void AlbumEditInfoPhotoNoDisp(int album_type, int csr_num, int off_x, int off_y, u_char alpha) {
	static int num_tex_tbl[7] = {
		/* [0] = */ 49,
		/* [1] = */ 59,
		/* [2] = */ 69,
		/* [3] = */ 79,
		/* [4] = */ 89,
		/* [5] = */ 39,
		/* [6] = */ 99
	};
	
  DrawCmnNumberTex__FiiP8SPRT_DATiiUciUc
            (csr_num + 1,2,album_tex + *(int *)(num_tex_tbl_1050 + album_type * 4),0xdb,0x9c,alpha,0
             ,'\0');
  return;
}

void AlbumEditAlbumInfoWinItemDisp(int album_type, int off_x, int off_y, u_char alpha) {
	int i;
	DISP_SPRT info_ds;
	static int item_tex_tbl[7][2] = {
		/* [0] = */ {
			/* [0] = */ 225,
			/* [1] = */ 227
		},
		/* [1] = */ {
			/* [0] = */ 228,
			/* [1] = */ 230
		},
		/* [2] = */ {
			/* [0] = */ 231,
			/* [1] = */ 233
		},
		/* [3] = */ {
			/* [0] = */ 234,
			/* [1] = */ 236
		},
		/* [4] = */ {
			/* [0] = */ 237,
			/* [1] = */ 239
		},
		/* [5] = */ {
			/* [0] = */ 222,
			/* [1] = */ 224
		},
		/* [6] = */ {
			/* [0] = */ 222,
			/* [1] = */ 224
		}
	};
	
  int iVar1;
  int iVar2;
  SPRT_DAT *d;
  float fVar3;
  DISP_SPRT info_ds;
  
  iVar2 = *(int *)(item_tex_tbl_1054 + album_type * 8);
  iVar1 = *(int *)(item_tex_tbl_1054 + album_type * 8 + 4);
  if (iVar2 <= iVar1) {
    fVar3 = (float)off_x;
    d = album_tex + iVar2;
    do {
      CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&info_ds,d);
      iVar2 = iVar2 + 1;
      d = d + 1;
      info_ds.x = info_ds.x + fVar3;
      info_ds.y = info_ds.y + (float)off_y;
      info_ds.alpha = (uchar)((int)((uint)info_ds.alpha * (uint)alpha) >> 7);
      DispSprD__FP9DISP_SPRT(&info_ds);
    } while (iVar2 <= iVar1);
  }
  return;
}

void AlbumEditPhotoFrameDisp(int off_x, int off_y, u_char alpha, void *pk2_addr) {
	int i;
	DISP_SPRT photo_ds;
	
  uint uVar1;
  int iVar2;
  SPRT_DAT *d;
  uint uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  DISP_SPRT photo_ds;
  
  fVar5 = (float)off_x;
  fVar6 = (float)off_y;
  iVar2 = 3;
  PK2SendVram__FUiiii((uint)pk2_addr,-1,-1,0);
  d = album_tex + 0xf8;
  do {
    CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&photo_ds,d);
    iVar2 = iVar2 + -1;
    d = d + 1;
    photo_ds.x = photo_ds.x + fVar5;
    photo_ds.y = photo_ds.y + fVar6;
    photo_ds.alpha = (uchar)((int)((uint)photo_ds.alpha * (uint)alpha) >> 7);
    DispSprD__FP9DISP_SPRT(&photo_ds);
  } while (-1 < iVar2);
  iVar2 = 0;
  do {
    CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&photo_ds,album_tex + 0xfc);
    uVar3 = photo_ds.h * iVar2;
    iVar2 = iVar2 + 1;
    photo_ds.x = photo_ds.x + fVar5;
    if ((int)uVar3 < 0) {
      fVar4 = (float)(uVar3 & 1 | uVar3 >> 1);
      fVar4 = fVar4 + fVar4;
    }
    else {
      fVar4 = (float)uVar3;
    }
    photo_ds.y = photo_ds.y + fVar4 + fVar6;
    photo_ds.alpha = (uchar)((int)((uint)photo_ds.alpha * (uint)alpha) >> 7);
    DispSprD__FP9DISP_SPRT(&photo_ds);
  } while (iVar2 < 6);
  iVar2 = 0;
  CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&photo_ds,album_tex + 0xfd);
  uVar3 = (uint)alpha;
  photo_ds.x = photo_ds.x + fVar5;
  photo_ds.y = photo_ds.y + fVar6;
  photo_ds.alpha = (uchar)((int)(photo_ds.alpha * uVar3) >> 7);
  DispSprD__FP9DISP_SPRT(&photo_ds);
  do {
    CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&photo_ds,album_tex + 0xfe);
    uVar1 = photo_ds.h * iVar2;
    iVar2 = iVar2 + 1;
    photo_ds.x = photo_ds.x + fVar5;
    if ((int)uVar1 < 0) {
      fVar4 = (float)(uVar1 & 1 | uVar1 >> 1);
      fVar4 = fVar4 + fVar4;
    }
    else {
      fVar4 = (float)uVar1;
    }
    photo_ds.y = photo_ds.y + fVar4 + fVar6;
    photo_ds.alpha = (uchar)((int)(photo_ds.alpha * uVar3) >> 7);
    DispSprD__FP9DISP_SPRT(&photo_ds);
  } while (iVar2 < 6);
  iVar2 = 0;
  CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&photo_ds,album_tex + 0xff);
  photo_ds.x = photo_ds.x + fVar5;
  photo_ds.y = photo_ds.y + fVar6;
  photo_ds.alpha = (uchar)((int)(photo_ds.alpha * uVar3) >> 7);
  DispSprD__FP9DISP_SPRT(&photo_ds);
  do {
    CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&photo_ds,album_tex + 0x100);
    uVar1 = photo_ds.w * iVar2;
    iVar2 = iVar2 + 1;
    if ((int)uVar1 < 0) {
      fVar4 = (float)(uVar1 & 1 | uVar1 >> 1);
      fVar4 = fVar4 + fVar4;
    }
    else {
      fVar4 = (float)uVar1;
    }
    photo_ds.y = photo_ds.y + fVar6;
    photo_ds.x = photo_ds.x + fVar4 + fVar5;
    photo_ds.alpha = (uchar)((int)(photo_ds.alpha * uVar3) >> 7);
    DispSprD__FP9DISP_SPRT(&photo_ds);
  } while (iVar2 < 0x13);
  iVar2 = 0;
  CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&photo_ds,album_tex + 0x101);
  uVar3 = (uint)alpha;
  photo_ds.x = photo_ds.x + fVar5;
  photo_ds.y = photo_ds.y + fVar6;
  photo_ds.alpha = (uchar)((int)(photo_ds.alpha * uVar3) >> 7);
  DispSprD__FP9DISP_SPRT(&photo_ds);
  do {
    CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&photo_ds,album_tex + 0x102);
    uVar1 = photo_ds.w * iVar2;
    iVar2 = iVar2 + 1;
    if ((int)uVar1 < 0) {
      fVar4 = (float)(uVar1 & 1 | uVar1 >> 1);
      fVar4 = fVar4 + fVar4;
    }
    else {
      fVar4 = (float)uVar1;
    }
    photo_ds.y = photo_ds.y + fVar6;
    photo_ds.x = photo_ds.x + fVar4 + fVar5;
    photo_ds.alpha = (uchar)((int)(photo_ds.alpha * uVar3) >> 7);
    DispSprD__FP9DISP_SPRT(&photo_ds);
  } while (iVar2 < 0x13);
  CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&photo_ds,album_tex + 0x103);
  photo_ds.x = photo_ds.x + fVar5;
  photo_ds.y = photo_ds.y + fVar6;
  photo_ds.alpha = (uchar)((int)(photo_ds.alpha * uVar3) >> 7);
  DispSprD__FP9DISP_SPRT(&photo_ds);
  return;
}

void AlbumEditPhotoProtectionFrameDisp(int off_x, int off_y, u_char alpha) {
	int i;
	DISP_SPRT photo_ds;
	
  int iVar1;
  SPRT_DAT *d;
  float fVar2;
  DISP_SPRT photo_ds;
  
  fVar2 = (float)off_x;
  iVar1 = 3;
  d = album_tex + 0x82;
  do {
    CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&photo_ds,d);
    iVar1 = iVar1 + -1;
    d = d + 1;
    photo_ds.x = photo_ds.x + fVar2;
    photo_ds.y = photo_ds.y + (float)off_y;
    photo_ds.alpha = (uchar)((int)((uint)photo_ds.alpha * (uint)alpha) >> 7);
    DispSprD__FP9DISP_SPRT(&photo_ds);
  } while (-1 < iVar1);
  return;
}

void AlbumMenuSelFrameDisp(int data_label, int x, int y, u_char alpha, float scl, u_char rgb) {
	DISP_SPRT sel_frame_ds;
	static int album_frame_tbl[2][2] = {
		/* [0] = */ {
			/* [0] = */ 117,
			/* [1] = */ 118
		},
		/* [1] = */ {
			/* [0] = */ 121,
			/* [1] = */ 122
		}
	};
	
  int iVar1;
  float fVar2;
  float fVar3;
  DISP_SPRT sel_frame_ds;
  
  iVar1 = data_label * 8;
  fVar3 = (float)y;
  CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT
            (&sel_frame_ds,album_tex + *(int *)(album_frame_tbl_1064 + iVar1));
  sel_frame_ds.x = (float)x;
  sel_frame_ds.sch = 1.0;
  sel_frame_ds.alpha = (uchar)((int)((uint)sel_frame_ds.alpha * (uint)alpha) >> 7);
  if ((int)sel_frame_ds.w < 0) {
    fVar2 = (float)(sel_frame_ds.w & 1 | sel_frame_ds.w >> 1);
    fVar2 = fVar2 + fVar2;
  }
  else {
    fVar2 = (float)sel_frame_ds.w;
  }
  sel_frame_ds.csx = sel_frame_ds.x + fVar2;
  sel_frame_ds.csy = fVar3;
  sel_frame_ds.y = fVar3;
  sel_frame_ds.scw = scl;
  sel_frame_ds.r = rgb;
  sel_frame_ds.g = rgb;
  sel_frame_ds.b = rgb;
  DispSprD__FP9DISP_SPRT(&sel_frame_ds);
  CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT
            (&sel_frame_ds,album_tex + *(int *)(album_frame_tbl_1064 + iVar1 + 4));
  sel_frame_ds.csx = (float)(x + (uint)(ushort)album_tex[*(int *)(album_frame_tbl_1064 + iVar1)].w);
  sel_frame_ds.alpha = (uchar)((int)((uint)sel_frame_ds.alpha * (uint)alpha) >> 7);
  sel_frame_ds.sch = 1.0;
  sel_frame_ds.csy = fVar3;
  sel_frame_ds.x = sel_frame_ds.csx;
  sel_frame_ds.y = fVar3;
  sel_frame_ds.scw = scl;
  sel_frame_ds.r = rgb;
  sel_frame_ds.g = rgb;
  sel_frame_ds.b = rgb;
  DispSprD__FP9DISP_SPRT(&sel_frame_ds);
  return;
}

void AlbumMenuNonSelFrameDisp(int data_label, int x, int y, u_char alpha, float scl) {
	DISP_SPRT sel_frame_ds;
	static int album_frame_tbl[2][2] = {
		/* [0] = */ {
			/* [0] = */ 119,
			/* [1] = */ 120
		},
		/* [1] = */ {
			/* [0] = */ 123,
			/* [1] = */ 124
		}
	};
	
  int iVar1;
  float fVar2;
  float fVar3;
  DISP_SPRT sel_frame_ds;
  
  iVar1 = data_label * 8;
  fVar3 = (float)y;
  CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT
            (&sel_frame_ds,album_tex + *(int *)(album_frame_tbl_1068 + iVar1));
  sel_frame_ds.x = (float)x;
  sel_frame_ds.alpha = (uchar)((int)((uint)sel_frame_ds.alpha * (uint)alpha) >> 7);
  sel_frame_ds.sch = 1.0;
  if ((int)sel_frame_ds.w < 0) {
    fVar2 = (float)(sel_frame_ds.w & 1 | sel_frame_ds.w >> 1);
    fVar2 = fVar2 + fVar2;
  }
  else {
    fVar2 = (float)sel_frame_ds.w;
  }
  sel_frame_ds.csx = sel_frame_ds.x + fVar2;
  sel_frame_ds.csy = fVar3;
  sel_frame_ds.y = fVar3;
  sel_frame_ds.scw = scl;
  DispSprD__FP9DISP_SPRT(&sel_frame_ds);
  CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT
            (&sel_frame_ds,album_tex + *(int *)(album_frame_tbl_1068 + iVar1 + 4));
  sel_frame_ds.csx = (float)(x + (uint)(ushort)album_tex[*(int *)(album_frame_tbl_1068 + iVar1)].w);
  sel_frame_ds.sch = 1.0;
  sel_frame_ds.alpha = (uchar)((int)((uint)sel_frame_ds.alpha * (uint)alpha) >> 7);
  sel_frame_ds.csy = fVar3;
  sel_frame_ds.x = sel_frame_ds.csx;
  sel_frame_ds.y = fVar3;
  sel_frame_ds.scw = scl;
  DispSprD__FP9DISP_SPRT(&sel_frame_ds);
  return;
}

void AlbumConfYesNoDisp(int conf_csr, int off_x, int off_y, u_char alpha, u_char rgb) {
	DISP_SPRT conf_ds;
	int i;
	static int conf_tex_tbl[2][2] = {
		/* [0] = */ {
			/* [0] = */ 240,
			/* [1] = */ 243
		},
		/* [1] = */ {
			/* [0] = */ 241,
			/* [1] = */ 242
		}
	};
	static int csr_x_tbl[2][2] = {
		/* [0] = */ {
			/* [0] = */ 304,
			/* [1] = */ 396
		},
		/* [1] = */ {
			/* [0] = */ 436,
			/* [1] = */ 529
		}
	};
	static int flare_x_tbl[2][2] = {
		/* [0] = */ {
			/* [0] = */ 301,
			/* [1] = */ 393
		},
		/* [1] = */ {
			/* [0] = */ 433,
			/* [1] = */ 526
		}
	};
	
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  float fVar5;
  float fVar6;
  DISP_SPRT conf_ds;
  
  fVar5 = (float)off_x;
  fVar6 = (float)off_y;
  piVar1 = (int *)(conf_tex_tbl_1072 + conf_csr * 8);
  iVar3 = 1;
  iVar2 = *piVar1;
  while( true ) {
    piVar1 = piVar1 + 1;
    iVar3 = iVar3 + -1;
    CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&conf_ds,album_tex + iVar2);
    conf_ds.x = conf_ds.x + fVar5;
    conf_ds.y = conf_ds.y + fVar6;
    conf_ds.alpha = (uchar)((int)((uint)conf_ds.alpha * (uint)alpha) >> 7);
    DispSprD__FP9DISP_SPRT(&conf_ds);
    if (iVar3 < 0) break;
    iVar2 = *piVar1;
  }
  iVar2 = conf_csr * 8;
  CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&conf_ds,album_tex + 0xf4);
  conf_ds.y = conf_ds.y + fVar6;
  conf_ds.x = (float)(*(int *)(flare_x_tbl_1074 + iVar2) + off_x);
  conf_ds.alpha = (uchar)((int)((uint)conf_ds.alpha * (uint)alpha) >> 7);
  conf_ds.r = rgb;
  conf_ds.g = rgb;
  conf_ds.b = rgb;
  DispSprD__FP9DISP_SPRT(&conf_ds);
  CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&conf_ds,album_tex + 0xf5);
  uVar4 = (uint)alpha;
  conf_ds.x = (float)(*(int *)(flare_x_tbl_1074 + iVar2 + 4) + off_x);
  conf_ds.y = conf_ds.y + fVar6;
  conf_ds.alpha = (uchar)((int)(conf_ds.alpha * uVar4) >> 7);
  conf_ds.r = rgb;
  conf_ds.g = rgb;
  conf_ds.b = rgb;
  DispSprD__FP9DISP_SPRT(&conf_ds);
  CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&conf_ds,album_tex + 0xf6);
  conf_ds.x = (float)(*(int *)(csr_x_tbl_1073 + iVar2) + off_x);
  conf_ds.y = conf_ds.y + fVar6;
  conf_ds.alpha = (uchar)((int)(conf_ds.alpha * uVar4) >> 7);
  DispSprD__FP9DISP_SPRT(&conf_ds);
  CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&conf_ds,album_tex + 0xf7);
  conf_ds.x = (float)(*(int *)(csr_x_tbl_1073 + iVar2 + 4) + off_x);
  conf_ds.y = conf_ds.y + fVar6;
  conf_ds.alpha = (uchar)((int)(conf_ds.alpha * uVar4) >> 7);
  DispSprD__FP9DISP_SPRT(&conf_ds);
  return;
}

void AlbumMenuItemDisp(int menu_label, int x, int y, u_char alpha) {
	DISP_SPRT menu_ds;
	static int menu_item_tbl[5] = {
		/* [0] = */ 116,
		/* [1] = */ 110,
		/* [2] = */ 111,
		/* [3] = */ 112,
		/* [4] = */ 113
	};
	
  DISP_SPRT menu_ds;
  
  CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT
            (&menu_ds,album_tex + *(int *)(menu_item_tbl_1078 + menu_label * 4));
  menu_ds.x = (float)x;
  menu_ds.y = (float)y;
  menu_ds.alpha = (uchar)((int)((uint)menu_ds.alpha * (uint)alpha) >> 7);
  DispSprD__FP9DISP_SPRT(&menu_ds);
  return;
}

void AlbumEditCaptionDisp(int off_x, int off_y, u_char alpha) {
  DrawCmnCapGroup_W__FiiUcUi(10,10,alpha,0);
  return;
}

void AlbumSlotSelWinDisp(int cursor, int off_x, int off_y, u_char alpha) {
	int i;
	static int msg_id_tbl[2] = {
		/* [0] = */ 0,
		/* [1] = */ 1
	};
	static int msg_y_tbl[2] = {
		/* [0] = */ 186,
		/* [1] = */ 224
	};
	
  int *piVar1;
  int *piVar2;
  int col_label;
  int iVar3;
  int iVar4;
  float x;
  
  x = 141.0;
  DrawCmnWindow__FUiffffUcUc(0,141.0,119.0,356.0,160.0,alpha,'Y');
  DrawCmnLine__FfffUcUcUi(x,160.0,356.0,'\x01',alpha,0);
  AlbumSlotSelectDisp__FiiUc(off_x,off_y,alpha);
  iVar4 = 0;
  iVar3 = 0;
  do {
    piVar1 = (int *)((int)&msg_y_tbl_1086 + iVar3);
    piVar2 = (int *)((int)&msg_id_tbl_1085 + iVar3);
    iVar3 = iVar3 + 4;
    col_label = 7;
    if (cursor != iVar4) {
      col_label = 1;
    }
    iVar4 = iVar4 + 1;
    PrintMsg_Arrange__Fiiiiiiiiii
              (0,*piVar2,off_x + 0x140,*piVar1 + off_y,col_label,(uint)alpha,0,0,0,2);
  } while (iVar4 < 2);
  DrawCmnSelCsr__FUiffUcfUc(0,160.0,(float)(cursor * 0x26 + 0xb6),alpha,320.0,'\x01');
  return;
}

void AlbumSlotSelCaptionDisp(int off_x, int off_y, u_char alpha) {
  DrawCmnCapGroup_W__FiiUcUi(0,0,alpha,0);
  return;
}

static void AlbumSlotSelectDisp(int off_x, int off_y, u_char alpha) {
	int i;
	DISP_SPRT slot_ds;
	
  int iVar1;
  SPRT_DAT *d;
  float fVar2;
  DISP_SPRT slot_ds;
  
  fVar2 = (float)off_x;
  iVar1 = 1;
  d = album_tex + 0x1b0;
  do {
    CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&slot_ds,d);
    iVar1 = iVar1 + -1;
    d = d + 1;
    slot_ds.x = slot_ds.x + fVar2;
    slot_ds.y = slot_ds.y + (float)off_y;
    slot_ds.alpha = (uchar)((int)((uint)slot_ds.alpha * (uint)alpha) >> 7);
    DispSprD__FP9DISP_SPRT(&slot_ds);
  } while (-1 < iVar1);
  return;
}

void AlbumSaveSelAlbumDisp(int album_type, int off_x, int off_y, u_char alpha) {
	static char __FUNCTION__[22] = {
		/* [0] = */ 65,
		/* [1] = */ 108,
		/* [2] = */ 98,
		/* [3] = */ 117,
		/* [4] = */ 109,
		/* [5] = */ 83,
		/* [6] = */ 97,
		/* [7] = */ 118,
		/* [8] = */ 101,
		/* [9] = */ 83,
		/* [10] = */ 101,
		/* [11] = */ 108,
		/* [12] = */ 65,
		/* [13] = */ 108,
		/* [14] = */ 98,
		/* [15] = */ 117,
		/* [16] = */ 109,
		/* [17] = */ 68,
		/* [18] = */ 105,
		/* [19] = */ 115,
		/* [20] = */ 112,
		/* [21] = */ 0
	};
	DISP_SPRT album_ds;
	static int album_tex_tbl[7] = {
		/* [0] = */ 390,
		/* [1] = */ 391,
		/* [2] = */ 392,
		/* [3] = */ 393,
		/* [4] = */ 394,
		/* [5] = */ -1,
		/* [6] = */ -1
	};
	
  DISP_SPRT album_ds;
  
  if (album_type < 5) {
    CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT
              (&album_ds,album_tex + *(int *)(album_tex_tbl_1096 + album_type * 4));
    album_ds.x = album_ds.x + (float)off_x;
    album_ds.y = album_ds.y + (float)off_y;
    album_ds.alpha = (uchar)((int)((uint)album_ds.alpha * (uint)alpha) >> 7);
    DispSprD__FP9DISP_SPRT(&album_ds);
  }
  else {
    printf("<<<<<<<<<WARNING FILE[%s] LINE[%d]>>>>>>>>>>\n");
    PrintWarningReal("Warning! %s");
  }
  return;
}

void AlbumSaveSelAlbumCsrDisp(int album_type, int off_x, int off_y, u_char alpha, u_char rgb) {
	static char __FUNCTION__[25] = {
		/* [0] = */ 65,
		/* [1] = */ 108,
		/* [2] = */ 98,
		/* [3] = */ 117,
		/* [4] = */ 109,
		/* [5] = */ 83,
		/* [6] = */ 97,
		/* [7] = */ 118,
		/* [8] = */ 101,
		/* [9] = */ 83,
		/* [10] = */ 101,
		/* [11] = */ 108,
		/* [12] = */ 65,
		/* [13] = */ 108,
		/* [14] = */ 98,
		/* [15] = */ 117,
		/* [16] = */ 109,
		/* [17] = */ 67,
		/* [18] = */ 115,
		/* [19] = */ 114,
		/* [20] = */ 68,
		/* [21] = */ 105,
		/* [22] = */ 115,
		/* [23] = */ 112,
		/* [24] = */ 0
	};
	DISP_SPRT album_ds;
	static int album_tex_tbl[7][2] = {
		/* [0] = */ {
			/* [0] = */ 420,
			/* [1] = */ 421
		},
		/* [1] = */ {
			/* [0] = */ 422,
			/* [1] = */ 423
		},
		/* [2] = */ {
			/* [0] = */ 424,
			/* [1] = */ 425
		},
		/* [3] = */ {
			/* [0] = */ 426,
			/* [1] = */ 427
		},
		/* [4] = */ {
			/* [0] = */ 428,
			/* [1] = */ 429
		},
		/* [5] = */ {
			/* [0] = */ -1,
			/* [1] = */ -1
		},
		/* [6] = */ {
			/* [0] = */ -1,
			/* [1] = */ -1
		}
	};
	
  uchar uVar1;
  DISP_SPRT album_ds;
  
  if (album_type < 5) {
    CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT
              (&album_ds,album_tex + *(int *)(album_tex_tbl_1100 + album_type * 8));
    uVar1 = GetLanguage__Fv();
    album_ds.y = album_ds.y + (float)off_y;
    album_ds.x = (float)(album_left_csr_x[album_type][(char)uVar1] + off_x);
    album_ds.alpha = (uchar)((int)((uint)album_ds.alpha * (uint)alpha) >> 7);
    album_ds.alphar = 0x48;
    album_ds.r = rgb;
    album_ds.g = rgb;
    album_ds.b = rgb;
    DispSprD__FP9DISP_SPRT(&album_ds);
    CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT
              (&album_ds,album_tex + *(int *)(album_tex_tbl_1100 + album_type * 8 + 4));
    uVar1 = GetLanguage__Fv();
    album_ds.y = album_ds.y + (float)off_y;
    album_ds.x = (float)(album_right_csr_x[album_type][(char)uVar1] + off_x);
    album_ds.alphar = 0x48;
    album_ds.alpha = (uchar)((int)((uint)album_ds.alpha * (uint)alpha) >> 7);
    album_ds.r = rgb;
    album_ds.g = rgb;
    album_ds.b = rgb;
    DispSprD__FP9DISP_SPRT(&album_ds);
  }
  else {
    printf("<<<<<<<<<WARNING FILE[%s] LINE[%d]>>>>>>>>>>\n");
    PrintWarningReal("Warning! %s");
  }
  return;
}

void AlbumSaveNonSelAlbumCsrDisp(int album_type, int off_x, int off_y, u_char alpha, u_char rgb) {
	static char __FUNCTION__[28] = {
		/* [0] = */ 65,
		/* [1] = */ 108,
		/* [2] = */ 98,
		/* [3] = */ 117,
		/* [4] = */ 109,
		/* [5] = */ 83,
		/* [6] = */ 97,
		/* [7] = */ 118,
		/* [8] = */ 101,
		/* [9] = */ 78,
		/* [10] = */ 111,
		/* [11] = */ 110,
		/* [12] = */ 83,
		/* [13] = */ 101,
		/* [14] = */ 108,
		/* [15] = */ 65,
		/* [16] = */ 108,
		/* [17] = */ 98,
		/* [18] = */ 117,
		/* [19] = */ 109,
		/* [20] = */ 67,
		/* [21] = */ 115,
		/* [22] = */ 114,
		/* [23] = */ 68,
		/* [24] = */ 105,
		/* [25] = */ 115,
		/* [26] = */ 112,
		/* [27] = */ 0
	};
	DISP_SPRT album_ds;
	static int album_tex_tbl[7][2] = {
		/* [0] = */ {
			/* [0] = */ 410,
			/* [1] = */ 411
		},
		/* [1] = */ {
			/* [0] = */ 412,
			/* [1] = */ 413
		},
		/* [2] = */ {
			/* [0] = */ 414,
			/* [1] = */ 415
		},
		/* [3] = */ {
			/* [0] = */ 416,
			/* [1] = */ 417
		},
		/* [4] = */ {
			/* [0] = */ 418,
			/* [1] = */ 419
		},
		/* [5] = */ {
			/* [0] = */ -1,
			/* [1] = */ -1
		},
		/* [6] = */ {
			/* [0] = */ -1,
			/* [1] = */ -1
		}
	};
	
  uchar uVar1;
  DISP_SPRT album_ds;
  
  if (album_type < 5) {
    CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT
              (&album_ds,album_tex + *(int *)(album_tex_tbl_1104 + album_type * 8));
    uVar1 = GetLanguage__Fv();
    album_ds.y = album_ds.y + (float)off_y;
    album_ds.x = (float)(album_left_csr_x[album_type][(char)uVar1] + off_x);
    album_ds.alpha = (uchar)((int)((uint)album_ds.alpha * (uint)alpha) >> 7);
    album_ds.r = rgb;
    album_ds.g = rgb;
    album_ds.b = rgb;
    DispSprD__FP9DISP_SPRT(&album_ds);
    CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT
              (&album_ds,album_tex + *(int *)(album_tex_tbl_1104 + album_type * 8 + 4));
    uVar1 = GetLanguage__Fv();
    album_ds.y = album_ds.y + (float)off_y;
    album_ds.x = (float)(album_right_csr_x[album_type][(char)uVar1] + off_x);
    album_ds.alpha = (uchar)((int)((uint)album_ds.alpha * (uint)alpha) >> 7);
    album_ds.r = rgb;
    album_ds.g = rgb;
    album_ds.b = rgb;
    DispSprD__FP9DISP_SPRT(&album_ds);
  }
  else {
    printf("<<<<<<<<<WARNING FILE[%s] LINE[%d]>>>>>>>>>>\n");
    PrintWarningReal("Warning! %s");
  }
  return;
}

void AlbumSaveSelAlbumNameDisp(int album_type, int off_x, int off_y, u_char alpha, int col_label) {
	static char __FUNCTION__[26] = {
		/* [0] = */ 65,
		/* [1] = */ 108,
		/* [2] = */ 98,
		/* [3] = */ 117,
		/* [4] = */ 109,
		/* [5] = */ 83,
		/* [6] = */ 97,
		/* [7] = */ 118,
		/* [8] = */ 101,
		/* [9] = */ 83,
		/* [10] = */ 101,
		/* [11] = */ 108,
		/* [12] = */ 65,
		/* [13] = */ 108,
		/* [14] = */ 98,
		/* [15] = */ 117,
		/* [16] = */ 109,
		/* [17] = */ 78,
		/* [18] = */ 97,
		/* [19] = */ 109,
		/* [20] = */ 101,
		/* [21] = */ 68,
		/* [22] = */ 105,
		/* [23] = */ 115,
		/* [24] = */ 112,
		/* [25] = */ 0
	};
	static int album_msg_tbl[7] = {
		/* [0] = */ 2,
		/* [1] = */ 3,
		/* [2] = */ 4,
		/* [3] = */ 5,
		/* [4] = */ 6,
		/* [5] = */ -1,
		/* [6] = */ -1
	};
	static int msg_y_tbl[7] = {
		/* [0] = */ 79,
		/* [1] = */ 79,
		/* [2] = */ 79,
		/* [3] = */ 310,
		/* [4] = */ 310,
		/* [5] = */ -1,
		/* [6] = */ -1
	};
	
  int msg_id;
  uchar uVar1;
  
  if (album_type < 5) {
    msg_id = *(int *)(album_msg_tbl_1108 + album_type * 4);
    uVar1 = GetLanguage__Fv();
    PrintMsg__Fiiiiiii(0,msg_id,album_name_x_tbl[album_type][(char)uVar1],
                       *(int *)(msg_y_tbl_1109 + album_type * 4),col_label,(uint)alpha,0);
    return;
  }
  printf("<<<<<<<<<WARNING FILE[%s] LINE[%d]>>>>>>>>>>\n");
  PrintWarningReal("Warning! %s");
  return;
}

void AlbumSaveSelSlotDisp(int sel_slot, int off_x, int off_y, u_char alpha, u_char rgb) {
	int i;
	DISP_SPRT album_ds;
	static int msg_id_tbl[2] = {
		/* [0] = */ 11,
		/* [1] = */ 12
	};
	
  int iVar1;
  SPRT_DAT *d;
  float fVar2;
  DISP_SPRT album_ds;
  
  fVar2 = (float)off_x;
  iVar1 = 1;
  d = album_tex + 0x1ae;
  do {
    CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&album_ds,d);
    iVar1 = iVar1 + -1;
    d = d + 1;
    album_ds.x = album_ds.x + fVar2;
    album_ds.y = album_ds.y + (float)off_y;
    album_ds.alphar = 0x48;
    album_ds.alpha = (uchar)((int)((uint)album_ds.alpha * (uint)alpha) >> 7);
    album_ds.r = rgb;
    album_ds.g = rgb;
    album_ds.b = rgb;
    DispSprD__FP9DISP_SPRT(&album_ds);
  } while (-1 < iVar1);
  PrintMsg_Arrange__Fiiiiiiiiii
            (0,*(int *)((int)&msg_id_tbl_1113 + sel_slot * 4),0x139,0x35,0x16,(uint)alpha,0,0,0,2);
  return;
}

void AlbumSaveSelAlbumCsrFlareDisp(int album_type, int off_x, int off_y, u_char alpha, u_char rgb) {
	static char __FUNCTION__[30] = {
		/* [0] = */ 65,
		/* [1] = */ 108,
		/* [2] = */ 98,
		/* [3] = */ 117,
		/* [4] = */ 109,
		/* [5] = */ 83,
		/* [6] = */ 97,
		/* [7] = */ 118,
		/* [8] = */ 101,
		/* [9] = */ 83,
		/* [10] = */ 101,
		/* [11] = */ 108,
		/* [12] = */ 65,
		/* [13] = */ 108,
		/* [14] = */ 98,
		/* [15] = */ 117,
		/* [16] = */ 109,
		/* [17] = */ 67,
		/* [18] = */ 115,
		/* [19] = */ 114,
		/* [20] = */ 70,
		/* [21] = */ 108,
		/* [22] = */ 97,
		/* [23] = */ 114,
		/* [24] = */ 101,
		/* [25] = */ 68,
		/* [26] = */ 105,
		/* [27] = */ 115,
		/* [28] = */ 112,
		/* [29] = */ 0
	};
	DISP_SPRT album_ds;
	static int album_tex_tbl[7] = {
		/* [0] = */ 395,
		/* [1] = */ 396,
		/* [2] = */ 397,
		/* [3] = */ 398,
		/* [4] = */ 399,
		/* [5] = */ -1,
		/* [6] = */ -1
	};
	
  DISP_SPRT album_ds;
  
  if (album_type < 5) {
    CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT
              (&album_ds,album_tex + *(int *)(album_tex_tbl_1117 + album_type * 4));
    album_ds.x = album_ds.x + (float)off_x;
    album_ds.y = album_ds.y + (float)off_y;
    album_ds.alphar = 0x48;
    album_ds.alpha = (uchar)((int)((uint)album_ds.alpha * (uint)alpha) >> 7);
    album_ds.r = rgb;
    album_ds.g = rgb;
    album_ds.b = rgb;
    DispSprD__FP9DISP_SPRT(&album_ds);
  }
  else {
    printf("<<<<<<<<<WARNING FILE[%s] LINE[%d]>>>>>>>>>>\n");
    PrintWarningReal("Warning! %s");
  }
  return;
}

void AlbumSaveAlbumMaskDisp(int album_type, int off_x, int off_y, u_char alpha, u_char rgb) {
	static char __FUNCTION__[23] = {
		/* [0] = */ 65,
		/* [1] = */ 108,
		/* [2] = */ 98,
		/* [3] = */ 117,
		/* [4] = */ 109,
		/* [5] = */ 83,
		/* [6] = */ 97,
		/* [7] = */ 118,
		/* [8] = */ 101,
		/* [9] = */ 65,
		/* [10] = */ 108,
		/* [11] = */ 98,
		/* [12] = */ 117,
		/* [13] = */ 109,
		/* [14] = */ 77,
		/* [15] = */ 97,
		/* [16] = */ 115,
		/* [17] = */ 107,
		/* [18] = */ 68,
		/* [19] = */ 105,
		/* [20] = */ 115,
		/* [21] = */ 112,
		/* [22] = */ 0
	};
	DISP_SPRT album_ds;
	int i;
	static int album_tex_tbl[7][2] = {
		/* [0] = */ {
			/* [0] = */ 400,
			/* [1] = */ 401
		},
		/* [1] = */ {
			/* [0] = */ 402,
			/* [1] = */ 403
		},
		/* [2] = */ {
			/* [0] = */ 404,
			/* [1] = */ 405
		},
		/* [3] = */ {
			/* [0] = */ 406,
			/* [1] = */ 407
		},
		/* [4] = */ {
			/* [0] = */ 408,
			/* [1] = */ 409
		},
		/* [5] = */ {
			/* [0] = */ -1,
			/* [1] = */ -1
		},
		/* [6] = */ {
			/* [0] = */ -1,
			/* [1] = */ -1
		}
	};
	
  int iVar1;
  int *piVar2;
  int iVar3;
  char *pcVar4;
  DISP_SPRT album_ds;
  
  if (album_type < 5) {
    piVar2 = (int *)(album_tex_tbl_1121 + album_type * 8);
    pcVar4 = "10ALBUM_INFO";
    iVar3 = 0;
    do {
      iVar1 = *(int *)pcVar4;
      pcVar4 = (char *)((int)pcVar4 + 4);
      if (iVar1 != -1) {
        CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&album_ds,album_tex + *piVar2);
        album_ds.x = album_ds.x + (float)off_x;
        album_ds.y = album_ds.y + (float)off_y;
        album_ds.alpha = (uchar)((int)((uint)album_ds.alpha * (uint)alpha) >> 7);
        album_ds.r = rgb;
        album_ds.g = rgb;
        album_ds.b = rgb;
        DispSprD__FP9DISP_SPRT(&album_ds);
      }
      iVar3 = iVar3 + 1;
      piVar2 = piVar2 + 1;
    } while (iVar3 < 2);
  }
  else {
    printf("<<<<<<<<<WARNING FILE[%s] LINE[%d]>>>>>>>>>>\n");
    PrintWarningReal("Warning! %s");
  }
  return;
}

void AlbumSaveMsgWinDisp(int off_x, int off_y, u_char alpha) {
  DrawCmnTwoLineWindow__FUiffffUcUc(0,45.0,126.0,DAT_003ed8f8,216.0,alpha,'f');
  return;
}

void AlbumMcMsgWinDisp(int off_x, int off_y, u_char alpha) {
  AlbumBlackBgDisp__FiiUcUc(0,0,alpha,'Q');
  AlbumSaveMsgWinDisp__FiiUc(off_x,off_y,alpha);
  return;
}

ALBUM_INFO* ALBUM_INFO * _fixed_array_verifyrange<ALBUM_INFO>(size_t v, size_t _max) {
  g3ddbgAssert__FbPCce(false,str_646);
  return (type_info *)v;
}

type_info& ALBUM_INFO type_info function() {
  g3ddbgAssert__FbPCce(false,str_646);
  return (type_info *)v;
}
