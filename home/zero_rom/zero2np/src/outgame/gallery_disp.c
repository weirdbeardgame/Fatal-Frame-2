// STATUS: NOT STARTED

#include "gallery_disp.h"

static void _fixed_array_assert(char *strType, size_t v0, size_t v1) {
	static char *str = 0x3b3348;
	
  g3ddbgAssert__FbPCce(false,str_849);
  return;
}

static void** void * * _fixed_array_verifyrange<void *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_assert__FPCcUiUi(s_void__003f0e28,_max,v);
  }
  return (void **)0x0;
}

static char** char * * _fixed_array_verifyrange<char *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_assert__FPCcUiUi(s_char__003f0e30,_max,v);
  }
  return (char **)0x0;
}

static unsigned int** unsigned int * * _fixed_array_verifyrange<unsigned int *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_assert__FPCcUiUi("unsigned int*",_max,v);
  }
  return (uint **)0x0;
}

int GalAnimation() {
	int ret;
	
  GAL_CTRL *pGVar1;
  int iVar2;
  
  pGVar1 = gc;
  iVar2 = gc->anm_step;
  if (iVar2 == 1) {
    if (0x7f < gc->anm_alpha) {
      return 0;
    }
    iVar2 = gc->anm_alpha + 0xc;
    gc->anm_alpha = iVar2;
    if (iVar2 < 0x80) {
      return 0;
    }
    pGVar1->anm_step = 0;
  }
  else {
    if (1 < iVar2) {
      if (iVar2 != 2) {
        return 0;
      }
      if (gc->anm_alpha < 1) {
        return 0;
      }
      iVar2 = gc->anm_alpha + -0xc;
      gc->anm_alpha = iVar2;
      if (0 < iVar2) {
        return 0;
      }
      pGVar1->anm_alpha = 0;
      pGVar1->anm_step = 1;
      if (pGVar1->next_place == 3) {
        return 1;
      }
      if (pGVar1->next_place == 2) {
        InitMovieWithTitle__Fii(pGVar1->movie_no,1);
        SetTitleBgSendLock__FUc('\x01');
      }
      else if (pGVar1->now_place == 1) {
        GalPictureMemFree__Fv();
      }
      gc->now_place = gc->next_place;
      return 0;
    }
    if (iVar2 != 0) {
      return 0;
    }
  }
  pGVar1->anm_alpha = 0x80;
  return 0;
}

void GalleryDispTop() {
	SQAR_DAT SqarDat;
	DISP_SQAR DispSqar;
	DISP_SPRT spr;
	int i;
	int alpha;
	
  undefined *puVar1;
  int alp;
  ulong *puVar2;
  uchar *puVar3;
  float fVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  SPRT_DAT *pSVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  SQAR_DAT SqarDat;
  DISP_SQAR DispSqar;
  DISP_SPRT spr;
  
  iVar7 = 0x10;
  puVar1 = (undefined *)((int)&SqarDat.h + 3);
  uVar5 = (uint)puVar1 & 7;
  puVar2 = (ulong *)(puVar1 + -uVar5);
  *puVar2 = *puVar2 & -1L << (uVar5 + 1) * 8 | DAT_003b33a0 >> (7 - uVar5) * 8;
  SqarDat._0_8_ = DAT_003b33a0;
  puVar1 = (undefined *)((int)&SqarDat.y + 3);
  uVar5 = (uint)puVar1 & 7;
  puVar2 = (ulong *)(puVar1 + -uVar5);
  *puVar2 = *puVar2 & -1L << (uVar5 + 1) * 8 | DAT_003b33a8 >> (7 - uVar5) * 8;
  SqarDat._8_8_ = DAT_003b33a8;
  uVar5 = (uint)&SqarDat.alpha & 7;
  puVar3 = &SqarDat.alpha + -uVar5;
  *(ulong *)puVar3 = *(ulong *)puVar3 & -1L << (uVar5 + 1) * 8 | DAT_003b33b0 >> (7 - uVar5) * 8;
  SqarDat._16_8_ = DAT_003b33b0;
  alp = gc->anm_alpha;
  fVar11 = (float)alp;
  fVar13 = DAT_003ee380;
  GalDispBgMask__Fi(alp);
  fVar9 = DAT_003ee384;
  GalPK2SendVram__FiPv(1,gal_top_tex_addr);
  fVar4 = DAT_003ee388;
  fVar12 = 270.0;
  pSVar8 = gallery_tex + 0x10;
  do {
    CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&spr,pSVar8);
    fVar10 = fVar11 * fVar4;
    uVar5 = iVar7 - 0x14;
    uVar6 = iVar7 - 0x16;
    iVar7 = iVar7 + 1;
    pSVar8 = pSVar8 + 1;
    if (uVar5 < 2) {
      spr.sch = 1.0;
      spr.csx = spr.x;
      spr.csy = spr.y;
      spr.scw = fVar13;
    }
    if (uVar6 < 2) {
      spr.scw = fVar9;
      spr.sch = 1.0;
      spr.crx = spr.x;
      spr.cry = spr.y;
      spr.csx = spr.x;
      spr.csy = spr.y;
      spr.rot = fVar12;
    }
    spr.alpha = (uchar)(int)fVar10;
    if (2.147484e+09 <= fVar10) {
      spr.alpha = (uchar)(int)(fVar10 - 2.147484e+09);
    }
    DispSprD__FP9DISP_SPRT(&spr);
  } while (iVar7 < 0x18);
  CopySqrDToSqr__FP9DISP_SQARP8SQAR_DAT(&DispSqar,&SqarDat);
  iVar7 = 0x18;
  DispSqar.alpha = (uchar)(int)(fVar11 * DAT_003ee38c);
  DispSqrD__FP9DISP_SQAR(&DispSqar);
  pSVar8 = gallery_tex + 0x18;
  do {
    CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&spr,pSVar8);
    fVar9 = DAT_003ee390;
    if ((((iVar7 == 0x19) || (fVar9 = DAT_003ee394, iVar7 == 0x1c)) ||
        (fVar9 = DAT_003ee398, iVar7 == 0x1f)) || (fVar9 = DAT_003ee39c, iVar7 == 0x22)) {
      spr.csx = spr.x;
      spr.csy = spr.y;
      spr.sch = 1.0;
      spr.scw = fVar9;
    }
    if (0x1d < iVar7) {
      spr.rot = 270.0;
      spr.crx = spr.x;
      spr.cry = spr.y;
    }
    iVar7 = iVar7 + 1;
    spr.alpha = (uchar)alp;
    DispSprD__FP9DISP_SPRT(&spr);
    pSVar8 = pSVar8 + 1;
  } while (iVar7 < 0x24);
  iVar7 = 0x2b;
  pSVar8 = gallery_tex + 0x2b;
  do {
    CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&spr,pSVar8);
    pSVar8 = pSVar8 + 1;
    if (((iVar7 == 0x2c) || (iVar7 == 0x2e)) || (iVar7 == 0x2f)) {
      spr.crx = spr.x;
      spr.cry = spr.y;
      spr.rot = 270.0;
    }
    iVar7 = iVar7 + 1;
    spr.alpha = (uchar)alp;
    DispSprD__FP9DISP_SPRT(&spr);
  } while (iVar7 < 0x30);
  GalDispMenuCsr__Fii(gc->cursor,alp);
  GalDispTitle__Fiiii(gc->now_place,0,0,alp);
  GalDispCaption__Fii(gc->now_place,alp);
  GalDispWinMsg__Fii(gc->cursor,alp);
  return;
}

void GalleryDispView() {
	DISP_SPRT spr;
	int i;
	int alpha;
	
  int alp;
  uint uVar1;
  int iVar2;
  SPRT_DAT *d;
  DISP_SPRT spr;
  
  iVar2 = 0x5e;
  alp = gc->anm_alpha;
  GalDispBgMask__Fi(alp);
  GalPK2SendVram__FiPv(3,gal_view_tex_addr);
  d = gallery_tex + 0x5e;
  do {
    CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&spr,d);
    uVar1 = iVar2 - 0x60;
    iVar2 = iVar2 + 1;
    if (uVar1 < 2) {
      spr.alphar = 0x48;
    }
    spr.alpha = (uchar)alp;
    DispSprD__FP9DISP_SPRT(&spr);
    d = d + 1;
  } while (iVar2 < 100);
  GalDispViewPage__Fi(alp);
  GalDispPicture__Fi(alp);
  GalDispTitle__Fiiii(gc->now_place,0,0,alp);
  GalDispCaption__Fii(gc->now_place,alp);
  return;
}

static void GalDispPicture(int alp) {
	DISP_SPRT spr;
	
  int iVar1;
  uchar uVar2;
  SPRT_DAT *d;
  DISP_SPRT spr;
  
  uVar2 = (uchar)alp;
  if (gc->anm_step == 0) {
    uVar2 = (uchar)gc->pic_anm_alpha;
  }
  if ((uint)gc->pic_step < 2) {
    return;
  }
  GalPK2SendVram__FiPv(4,gal_pic_tex_addr);
  iVar1 = gc->pic_mode;
  spr.alpha = uVar2;
  if (iVar1 == 0) {
    iVar1 = gc->pic_no;
    if (iVar1 == 1) {
      d = gallery_tex + 0x73;
    }
    else {
      if (1 < iVar1) {
        if (iVar1 != 2) {
          return;
        }
        CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&spr,gallery_tex + 0x74);
        DispSprD__FP9DISP_SPRT(&spr);
        CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&spr,gallery_tex + 0x75);
        spr.rot = 270.0;
        spr.crx = spr.x;
        spr.cry = spr.y;
        goto LAB_001a72e8;
      }
      if (iVar1 != 0) {
        return;
      }
      d = gallery_tex + 0x72;
    }
  }
  else {
    if (iVar1 != 1) {
      if (iVar1 != 2) {
        return;
      }
      if (gc->pic_no == 0x10) {
        CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&spr,gallery_tex + 0x70);
      }
      else {
        CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&spr,gallery_tex + 0x6f);
      }
      DispSprD__FP9DISP_SPRT(&spr);
      return;
    }
    d = gallery_tex + 0x71;
  }
  CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&spr,d);
LAB_001a72e8:
  spr.alpha = uVar2;
  DispSprD__FP9DISP_SPRT(&spr);
  return;
}

static void GalDispViewPage(int alp) {
	DISP_SPRT spr;
	
  int iVar1;
  uchar uVar2;
  DISP_SPRT spr;
  
  iVar1 = gc->pic_no + 1;
  uVar2 = (uchar)alp;
  if (9 < iVar1) {
    CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&spr,gallery_tex + iVar1 / 10 + 100);
    spr.x = 284.0;
    spr.y = 28.0;
    spr.alpha = uVar2;
    DispSprD__FP9DISP_SPRT(&spr);
  }
  CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&spr,gallery_tex + (gc->pic_no + 1) % 10 + 100);
  spr.y = 28.0;
  spr.x = 298.0;
  spr.alpha = uVar2;
  DispSprD__FP9DISP_SPRT(&spr);
  CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&spr,gallery_tex + 0x6e);
  spr.alpha = uVar2;
  DispSprD__FP9DISP_SPRT(&spr);
  if (9 < gc->pic_max) {
    CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&spr,gallery_tex + gc->pic_max / 10 + 100);
    spr.y = 28.0;
    spr.x = 326.0;
    spr.alpha = uVar2;
    DispSprD__FP9DISP_SPRT(&spr);
  }
  CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&spr,gallery_tex + gc->pic_max % 10 + 100);
  spr.y = 28.0;
  spr.x = 340.0;
  spr.alpha = uVar2;
  DispSprD__FP9DISP_SPRT(&spr);
  return;
}

void GalleryDispMovie() {
  return;
}

static void GalDispMenuCsr(int csr, int alp) {
	int pic_menu_sp_no[3];
	int mov_menu_sp_no[5];
	int csr_pos_left[8];
	int csr_pos_right[8][5];
	int csr_pos_y[8];
	SPRT_DAT *spp;
	DISP_SPRT spr;
	int i;
	
  uint uVar1;
  ulong *puVar2;
  uchar uVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  SPRT_DAT *d;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  SPRT_DAT *pSVar11;
  int *piVar12;
  int iVar13;
  uchar uVar14;
  int pic_menu_sp_no [3];
  int mov_menu_sp_no [5];
  int csr_pos_left [8];
  int csr_pos_right [8] [5];
  int csr_pos_y [8];
  DISP_SPRT spr;
  
  piVar12 = pic_menu_sp_no;
  puVar9 = &DAT_003b3400;
  uVar1 = (int)pic_menu_sp_no + 7U & 7;
  puVar2 = (ulong *)(((int)pic_menu_sp_no + 7U) - uVar1);
  *puVar2 = *puVar2 & -1L << (uVar1 + 1) * 8 | DAT_003b33b8 >> (7 - uVar1) * 8;
  pic_menu_sp_no._0_8_ = DAT_003b33b8;
  pic_menu_sp_no[2] = DAT_003b33c0;
  uVar1 = (int)mov_menu_sp_no + 7U & 7;
  puVar2 = (ulong *)(((int)mov_menu_sp_no + 7U) - uVar1);
  *puVar2 = *puVar2 & -1L << (uVar1 + 1) * 8 | DAT_003b33c8 >> (7 - uVar1) * 8;
  mov_menu_sp_no._0_8_ = DAT_003b33c8;
  uVar1 = (int)mov_menu_sp_no + 0xfU & 7;
  puVar2 = (ulong *)(((int)mov_menu_sp_no + 0xfU) - uVar1);
  *puVar2 = *puVar2 & -1L << (uVar1 + 1) * 8 | DAT_003b33d0 >> (7 - uVar1) * 8;
  mov_menu_sp_no._8_8_ = DAT_003b33d0;
  mov_menu_sp_no[4] = DAT_003b33d8;
  piVar4 = (int *)csr_pos_right;
  uVar1 = (int)csr_pos_left + 7U & 7;
  puVar2 = (ulong *)(((int)csr_pos_left + 7U) - uVar1);
  *puVar2 = *puVar2 & -1L << (uVar1 + 1) * 8 | DAT_003b33e0 >> (7 - uVar1) * 8;
  csr_pos_left._0_8_ = DAT_003b33e0;
  uVar1 = (int)csr_pos_left + 0xfU & 7;
  puVar2 = (ulong *)(((int)csr_pos_left + 0xfU) - uVar1);
  *puVar2 = *puVar2 & -1L << (uVar1 + 1) * 8 | DAT_003b33e8 >> (7 - uVar1) * 8;
  csr_pos_left._8_8_ = DAT_003b33e8;
  uVar1 = (int)csr_pos_left + 0x17U & 7;
  puVar2 = (ulong *)(((int)csr_pos_left + 0x17U) - uVar1);
  *puVar2 = *puVar2 & -1L << (uVar1 + 1) * 8 | DAT_003b33f0 >> (7 - uVar1) * 8;
  csr_pos_left._16_8_ = DAT_003b33f0;
  uVar1 = (int)csr_pos_left + 0x1fU & 7;
  puVar2 = (ulong *)(((int)csr_pos_left + 0x1fU) - uVar1);
  *puVar2 = *puVar2 & -1L << (uVar1 + 1) * 8 | DAT_003b33f8 >> (7 - uVar1) * 8;
  csr_pos_left._24_8_ = DAT_003b33f8;
  do {
    uVar7 = puVar9[1];
    uVar8 = puVar9[2];
    uVar10 = puVar9[3];
    *(undefined8 *)piVar4 = *puVar9;
    *(undefined8 *)(piVar4 + 2) = uVar7;
    *(undefined8 *)(piVar4 + 4) = uVar8;
    *(undefined8 *)(piVar4 + 6) = uVar10;
    puVar9 = puVar9 + 4;
    piVar4 = piVar4 + 8;
  } while (puVar9 != &DAT_003b34a0);
  uVar1 = (int)csr_pos_y + 7U & 7;
  puVar2 = (ulong *)(((int)csr_pos_y + 7U) - uVar1);
  *puVar2 = *puVar2 & -1L << (uVar1 + 1) * 8 | DAT_003b34a0 >> (7 - uVar1) * 8;
  csr_pos_y._0_8_ = DAT_003b34a0;
  uVar1 = (int)csr_pos_y + 0xfU & 7;
  puVar2 = (ulong *)(((int)csr_pos_y + 0xfU) - uVar1);
  *puVar2 = *puVar2 & -1L << (uVar1 + 1) * 8 | DAT_003b34a8 >> (7 - uVar1) * 8;
  csr_pos_y._8_8_ = DAT_003b34a8;
  uVar1 = (int)csr_pos_y + 0x17U & 7;
  puVar2 = (ulong *)(((int)csr_pos_y + 0x17U) - uVar1);
  *puVar2 = *puVar2 & -1L << (uVar1 + 1) * 8 | DAT_003b34b0 >> (7 - uVar1) * 8;
  csr_pos_y._16_8_ = DAT_003b34b0;
  uVar1 = (int)csr_pos_y + 0x1fU & 7;
  puVar2 = (ulong *)(((int)csr_pos_y + 0x1fU) - uVar1);
  *puVar2 = *puVar2 & -1L << (uVar1 + 1) * 8 | DAT_003b34b8 >> (7 - uVar1) * 8;
  csr_pos_y._24_8_ = DAT_003b34b8;
  if (gc->game_clear_flg == 0) {
    pic_menu_sp_no[0] = 0x4c;
    pic_menu_sp_no[1] = 0x4d;
    iVar5 = gc->setup_pic_flg;
  }
  else {
    iVar5 = gc->setup_pic_flg;
  }
  if (iVar5 == 0) {
    pic_menu_sp_no[2] = 0x4e;
    iVar5 = gc->ending1_mov_flg;
  }
  else {
    iVar5 = gc->ending1_mov_flg;
  }
  if (iVar5 == 0) {
    mov_menu_sp_no[2] = (int)DAT_003b33d0;
    mov_menu_sp_no[3] = 0x4f;
    iVar5 = gc->ending2_mov_flg;
  }
  else {
    iVar5 = gc->ending2_mov_flg;
  }
  if (iVar5 == 0) {
    mov_menu_sp_no[4] = 0x51;
  }
  iVar5 = pic_menu_sp_no[0];
  iVar13 = 0;
  do {
    if (iVar5 == 0x30) {
      pSVar11 = gallery_tex + 0x30;
      if (gc->setup_pic_flg != 1) {
        iVar5 = *piVar12;
        goto LAB_001a777c;
      }
    }
    else {
LAB_001a777c:
      pSVar11 = gallery_tex + iVar5;
    }
    d = pSVar11 + 0xd;
    if (iVar13 != csr) {
      d = pSVar11;
    }
    piVar12 = piVar12 + 1;
    CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&spr,d);
    uVar14 = (uchar)alp;
    spr.alpha = uVar14;
    DispSprD__FP9DISP_SPRT(&spr);
    if (2 < iVar13 + 1) {
      piVar4 = mov_menu_sp_no;
      iVar13 = 0;
      iVar5 = mov_menu_sp_no[0];
      while( true ) {
        piVar4 = piVar4 + 1;
        iVar6 = iVar13 + 3;
        iVar13 = iVar13 + 1;
        pSVar11 = gallery_tex + iVar5;
        if (iVar6 == csr) {
          pSVar11 = gallery_tex + iVar5 + 0xd;
        }
        CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&spr,pSVar11);
        spr.alpha = uVar14;
        DispSprD__FP9DISP_SPRT(&spr);
        CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&spr,pSVar11 + 1);
        spr.alpha = uVar14;
        DispSprD__FP9DISP_SPRT(&spr);
        if (4 < iVar13) break;
        iVar5 = *piVar4;
      }
      CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&spr,gallery_tex + 0x4a);
      spr.y = (float)csr_pos_y[csr];
      spr.x = (float)csr_pos_left[csr];
      spr.alpha = uVar14;
      DispSprD__FP9DISP_SPRT(&spr);
      CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&spr,gallery_tex + 0x4b);
      uVar3 = GetLanguage__Fv();
      spr.y = (float)csr_pos_y[csr];
      spr.x = (float)csr_pos_right[csr][(char)uVar3];
      spr.alpha = uVar14;
      DispSprD__FP9DISP_SPRT(&spr);
      return;
    }
    iVar5 = *piVar12;
    iVar13 = iVar13 + 1;
  } while( true );
}

static void GalDispTitle(int place, int mx, int my, int alp) {
	DISP_SPRT spr;
	int i;
	
  int iVar1;
  SPRT_DAT *pSVar2;
  DISP_SPRT spr;
  
  iVar1 = 1;
  GalPK2SendVram__FiPv(0,gal_og_tex_addr);
  pSVar2 = gallery_tex;
  do {
    CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&spr,pSVar2);
    iVar1 = iVar1 + -1;
    pSVar2 = pSVar2 + 1;
    spr.alpha = (uchar)alp;
    DispSprD__FP9DISP_SPRT(&spr);
  } while (-1 < iVar1);
  iVar1 = 1;
  GalPK2SendVram__FiPv(2,gal_cmn_tex_addr);
  pSVar2 = gallery_tex + 2;
  do {
    CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&spr,pSVar2);
    iVar1 = iVar1 + -1;
    pSVar2 = pSVar2 + 1;
    spr.alpha = (uchar)alp;
    DispSprD__FP9DISP_SPRT(&spr);
  } while (-1 < iVar1);
  return;
}

static void GalDispCaption(int place, int alp) {
  if (place == 0) {
    DrawCmnCapGroup_W__FiiUcUi(0,0,(uchar)alp,0);
    return;
  }
  DrawCmnCapGroup_W__FiiUcUi(0xc,0xc,(uchar)alp,0);
  return;
}

static void GalDispWinMsg(int csr, int alp) {
	int msg_id[10];
	SPRT_DAT *spp;
	DISP_SPRT spr;
	int i;
	
  uint uVar1;
  ulong *puVar2;
  SPRT_DAT *d;
  int iVar3;
  int msg_id [10];
  DISP_SPRT spr;
  
  uVar1 = (int)msg_id + 7U & 7;
  puVar2 = (ulong *)(((int)msg_id + 7U) - uVar1);
  *puVar2 = *puVar2 & -1L << (uVar1 + 1) * 8 | DAT_003b34c0 >> (7 - uVar1) * 8;
  msg_id._0_8_ = DAT_003b34c0;
  uVar1 = (int)msg_id + 0xfU & 7;
  puVar2 = (ulong *)(((int)msg_id + 0xfU) - uVar1);
  *puVar2 = *puVar2 & -1L << (uVar1 + 1) * 8 | DAT_003b34c8 >> (7 - uVar1) * 8;
  msg_id._8_8_ = DAT_003b34c8;
  uVar1 = (int)msg_id + 0x17U & 7;
  puVar2 = (ulong *)(((int)msg_id + 0x17U) - uVar1);
  *puVar2 = *puVar2 & -1L << (uVar1 + 1) * 8 | DAT_003b34d0 >> (7 - uVar1) * 8;
  msg_id._16_8_ = DAT_003b34d0;
  uVar1 = (int)msg_id + 0x1fU & 7;
  puVar2 = (ulong *)(((int)msg_id + 0x1fU) - uVar1);
  *puVar2 = *puVar2 & -1L << (uVar1 + 1) * 8 | DAT_003b34d8 >> (7 - uVar1) * 8;
  msg_id._24_8_ = DAT_003b34d8;
  uVar1 = (int)msg_id + 0x27U & 7;
  puVar2 = (ulong *)(((int)msg_id + 0x27U) - uVar1);
  *puVar2 = *puVar2 & -1L << (uVar1 + 1) * 8 | DAT_003b34e0 >> (7 - uVar1) * 8;
  msg_id._32_8_ = DAT_003b34e0;
  DrawCmnWindow__FUiffffUcUc(0,15.0,324.0,DAT_003ee3a0,120.0,'X',(uchar)alp);
  d = gallery_tex + 0x58;
  if (csr != 4) {
    if (csr < 5) {
      d = gallery_tex + 0x55;
      if (csr != 3) {
        d = (SPRT_DAT *)0x0;
      }
    }
    else if (csr == 5) {
      d = gallery_tex + 0x5b;
    }
    else {
      d = (SPRT_DAT *)0x0;
    }
  }
  if (d != (SPRT_DAT *)0x0) {
    iVar3 = 2;
    GalPK2SendVram__FiPv(1,gal_top_tex_addr);
    do {
      iVar3 = iVar3 + -1;
      CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&spr,d);
      spr.alpha = (uchar)alp;
      DispSprD__FP9DISP_SPRT(&spr);
      d = d + 1;
    } while (-1 < iVar3);
  }
  PrintMsg__Fiiiiiii(0x22,msg_id[csr],0x28,0x15c,1,alp,0);
  return;
}

static void GalDispBgMask(int alp) {
	DISP_SQAR DispSqar;
	SQAR_DAT SqarDat;
	DISP_SPRT spr;
	int i;
	
  SPRT_DAT *pSVar1;
  int iVar2;
  uchar uVar3;
  DISP_SQAR DispSqar;
  SQAR_DAT SqarDat;
  DISP_SPRT spr;
  
  iVar2 = 7;
  memset(&SqarDat,0,0x18);
  SqarDat.w = 0x280;
  SqarDat.h = 0x1c0;
  CopySqrDToSqr__FP9DISP_SQARP8SQAR_DAT(&DispSqar,&SqarDat);
  DispSqar.alpha = (uchar)(int)((float)alp * DAT_003ee3a4);
  DispSqrD__FP9DISP_SQAR(&DispSqar);
  GalPK2SendVram__FiPv(2,gal_cmn_tex_addr);
  pSVar1 = gallery_tex + 4;
  do {
    iVar2 = iVar2 + -1;
    CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&spr,pSVar1);
    uVar3 = (uchar)alp;
    spr.alpha = uVar3;
    DispSprD__FP9DISP_SPRT(&spr);
    pSVar1 = pSVar1 + 1;
  } while (-1 < iVar2);
  if (gc->now_place == 0) {
    iVar2 = 0x24;
    GalPK2SendVram__FiPv(1,gal_top_tex_addr);
    pSVar1 = gallery_tex + 0x24;
    do {
      CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&spr,pSVar1);
      pSVar1 = pSVar1 + 1;
      if ((iVar2 == 0x27) || (iVar2 == 0x29)) {
        spr.crx = spr.x;
        spr.cry = spr.y;
        spr.rot = 270.0;
      }
      iVar2 = iVar2 + 1;
      spr.alpha = uVar3;
      DispSprD__FP9DISP_SPRT(&spr);
    } while (iVar2 < 0x2b);
  }
  iVar2 = 3;
  GalPK2SendVram__FiPv(2,gal_cmn_tex_addr);
  pSVar1 = gallery_tex + 0xc;
  do {
    iVar2 = iVar2 + -1;
    CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&spr,pSVar1);
    spr.alpha = uVar3;
    DispSprD__FP9DISP_SPRT(&spr);
    pSVar1 = pSVar1 + 1;
  } while (-1 < iVar2);
  return;
}
