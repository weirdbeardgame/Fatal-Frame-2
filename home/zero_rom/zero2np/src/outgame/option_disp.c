// STATUS: NOT STARTED

#include "option_disp.h"

static void _fixed_array_assert(char *strType, size_t v0, size_t v1) {
	static char *str = 0x3c23f0;
	
  g3ddbgAssert__FbPCce(false,str_849);
  return;
}

static void** void * * _fixed_array_verifyrange<void *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_assert__FPCcUiUi(s_void__003f3680,_max,v);
  }
  return (void **)0x0;
}

static char** char * * _fixed_array_verifyrange<char *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_assert__FPCcUiUi(s_char__003f3688,_max,v);
  }
  return (char **)0x0;
}

static unsigned int** unsigned int * * _fixed_array_verifyrange<unsigned int *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_assert__FPCcUiUi("unsigned int*",_max,v);
  }
  return (uint **)0x0;
}

int OptAnimation() {
	int ret;
	
  OPT_CTRL *pOVar1;
  int iVar2;
  
  pOVar1 = oc;
  iVar2 = oc->anm_step;
  if (iVar2 == 1) {
    if (0x7f < oc->anm_alpha) {
      return 0;
    }
    iVar2 = oc->anm_alpha + 0xc;
    oc->anm_alpha = iVar2;
    if (iVar2 < 0x80) {
      return 0;
    }
    pOVar1->anm_step = 0;
  }
  else {
    if (1 < iVar2) {
      if (iVar2 != 2) {
        return 0;
      }
      if (oc->anm_alpha < 1) {
        return 0;
      }
      iVar2 = oc->anm_alpha + -0xc;
      oc->anm_alpha = iVar2;
      if (0 < iVar2) {
        return 0;
      }
      pOVar1->anm_step = 1;
      pOVar1->anm_alpha = 0;
      if (pOVar1->next_place == 4) {
        return 1;
      }
      pOVar1->now_place = pOVar1->next_place;
      pOVar1->cursor = pOVar1->next_csr;
      return 0;
    }
    if (iVar2 != 0) {
      return 0;
    }
  }
  pOVar1->anm_alpha = 0x80;
  return 0;
}

void OptionMainDisp() {
	DISP_SPRT spr;
	DISP_SQAR sqr;
	int i;
	float snd_pos;
	int alpha;
	
  int alp;
  float fVar1;
  float fVar2;
  int iVar3;
  SPRT_DAT *d;
  SQAR_DAT *d_00;
  uchar uVar4;
  float fVar5;
  float fVar6;
  DISP_SPRT spr;
  DISP_SQAR sqr;
  
  iVar3 = 0xb;
  alp = oc->anm_alpha;
  fVar6 = DAT_003ee644;
  OptDispTitle__Fiiii(oc->now_place,0,0,alp);
  fVar1 = DAT_003ee648;
  OptPK2SendVram__FiPv(1,opt_top_tex_addr);
  d = option_tex + 0xb;
  fVar5 = DAT_003ee64c;
  do {
    CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&spr,d);
    fVar2 = fVar6;
    if (((iVar3 == 0xc) || (iVar3 == 0x12)) || (iVar3 == 0x18)) {
LAB_00229714:
      spr.scw = fVar2;
      spr.sch = 1.0;
    }
    else {
      if (((iVar3 == 0xf) || (iVar3 == 0x15)) || (iVar3 == 0x1a)) {
        spr.scw = fVar1;
        fVar2 = spr.scw;
        goto LAB_00229714;
      }
      fVar2 = fVar5;
      if (iVar3 == 0x1d) goto LAB_00229714;
    }
    iVar3 = iVar3 + 1;
    uVar4 = (uchar)alp;
    spr.alpha = uVar4;
    DispSprD__FP9DISP_SPRT(&spr);
    d = d + 1;
    if (0x1e < iVar3) {
      iVar3 = 10;
      OptDispBracket__Fiii(oc->now_place,oc->cursor,alp);
      d_00 = option_sqr;
      do {
        iVar3 = iVar3 + -1;
        CopySqrDToSqr__FP9DISP_SQARP8SQAR_DAT(&sqr,d_00);
        DispSqrD__FP9DISP_SQAR(&sqr);
        d_00 = d_00 + 1;
      } while (-1 < iVar3);
      OptDispIcon__Fiii(oc->now_place,oc->cursor,alp);
      OptPK2SendVram__FiPv(1,opt_top_tex_addr);
      CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&spr,option_tex + 0x25);
      spr.alphar = 0x48;
      spr.alpha = uVar4;
      DispSprD__FP9DISP_SPRT(&spr);
      CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&spr,option_tex + 0x26);
      spr.x = spr.x + (float)(int)((float)optm.snd_volume * 0.5 * 1.359375);
      spr.alpha = uVar4;
      DispSprD__FP9DISP_SPRT(&spr);
      OptDispCursor__Fiii(oc->now_place,oc->cursor,alp);
      OptPK2SendVram__FiPv(1,opt_top_tex_addr);
      OptDispCaption__Fiii(oc->now_place,oc->cursor,alp);
      OptDispAHeadText__Fiii(oc->now_place,oc->cursor,alp);
      OptDispWinMsg__Fiii(oc->now_place,oc->cursor,alp);
      return;
    }
  } while( true );
}

void OptionOperateDisp() {
	DISP_SPRT spr;
	DISP_SQAR sqr;
	int i;
	int alpha;
	
  int alp;
  float fVar1;
  float fVar2;
  int iVar3;
  SPRT_DAT *d;
  SQAR_DAT *d_00;
  float fVar4;
  float fVar5;
  DISP_SPRT spr;
  DISP_SQAR sqr;
  
  iVar3 = 0x53;
  alp = oc->anm_alpha;
  fVar5 = DAT_003ee650;
  OptDispTitle__Fiiii(oc->now_place,0,0,alp);
  fVar1 = DAT_003ee654;
  OptPK2SendVram__FiPv(1,opt_top_tex_addr);
  d = option_tex + 0x53;
  fVar4 = DAT_003ee658;
  do {
    CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&spr,d);
    fVar2 = fVar5;
    if (((iVar3 == 0x54) || (iVar3 == 0x5a)) || (iVar3 == 0x60)) {
LAB_002299ec:
      spr.scw = fVar2;
      spr.sch = 1.0;
    }
    else {
      if (((iVar3 == 0x57) || (iVar3 == 0x5d)) || (iVar3 == 99)) {
        spr.scw = fVar1;
        fVar2 = spr.scw;
        goto LAB_002299ec;
      }
      fVar2 = fVar4;
      if (iVar3 == 0x66) goto LAB_002299ec;
    }
    iVar3 = iVar3 + 1;
    spr.alpha = (uchar)alp;
    DispSprD__FP9DISP_SPRT(&spr);
    d = d + 1;
    if (0x67 < iVar3) {
      iVar3 = 9;
      d_00 = option_sqr + 0xb;
      do {
        iVar3 = iVar3 + -1;
        CopySqrDToSqr__FP9DISP_SQARP8SQAR_DAT(&sqr,d_00);
        DispSqrD__FP9DISP_SQAR(&sqr);
        d_00 = d_00 + 1;
      } while (-1 < iVar3);
      OptDispBracket__Fiii(oc->now_place,oc->cursor,alp);
      OptDispIcon__Fiii(oc->now_place,oc->cursor,alp);
      OptDispCursor__Fiii(oc->now_place,oc->cursor,alp);
      OptDispCaption__Fiii(oc->now_place,oc->cursor,alp);
      OptDispAHeadText__Fiii(oc->now_place,oc->cursor,alp);
      OptDispWinMsg__Fiii(oc->now_place,oc->cursor,alp);
      return;
    }
  } while( true );
}

void OptionBrightnessDisp() {
	DISP_SPRT spr;
	int i;
	int alpha;
	float bar_pos;
	
  int alp;
  uint uVar1;
  uint uVar2;
  SPRT_DAT *pSVar3;
  int iVar4;
  uchar uVar5;
  float fVar6;
  DISP_SPRT spr;
  
  iVar4 = 0xd8;
  alp = oc->anm_alpha;
  OptPK2SendVram__FiPv(2,opt_brn_tex_addr);
  fVar6 = 1.0;
  CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&spr,option_tex + 0xd7);
  uVar5 = (uchar)alp;
  spr.alpha = uVar5;
  DispSprD__FP9DISP_SPRT(&spr);
  OptBrightnessAdjustmentFilterDraw__Fi(alp);
  pSVar3 = option_tex + 0xd8;
  OptDispTitle__Fiiii(oc->now_place,0,0,alp);
  OptPK2SendVram__FiPv(2,opt_brn_tex_addr);
  do {
    CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&spr,pSVar3);
    uVar1 = iVar4 - 0xde;
    iVar4 = iVar4 + 1;
    pSVar3 = pSVar3 + 1;
    if (uVar1 < 2) {
      spr.sch = 4.0;
      spr.csx = spr.x;
      spr.csy = spr.y;
      spr.scw = fVar6;
    }
    spr.alpha = uVar5;
    DispSprD__FP9DISP_SPRT(&spr);
  } while (iVar4 < 0xe0);
  iVar4 = 0xe0;
  pSVar3 = option_tex + 0xe0;
  do {
    CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&spr,pSVar3);
    uVar1 = iVar4 - 0xe4;
    uVar2 = iVar4 - 0xe0;
    iVar4 = iVar4 + 1;
    pSVar3 = pSVar3 + 1;
    if (uVar2 < 2) {
      spr.rot = 270.0;
      spr.crx = spr.x;
      spr.cry = spr.y;
    }
    else if (uVar1 < 2) {
      spr.alphar = 0x48;
    }
    spr.alpha = uVar5;
    DispSprD__FP9DISP_SPRT(&spr);
  } while (iVar4 < 0xe6);
  CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&spr,option_tex + 0xe6);
  spr.x = spr.x + (float)(int)((float)(optm.brightness + -0x10) * 2.96875);
  spr.alpha = uVar5;
  DispSprD__FP9DISP_SPRT(&spr);
  OptDispCaption__Fiii(oc->now_place,oc->cursor,alp);
  OptDispWinMsg__Fiii(oc->now_place,oc->cursor,alp);
  return;
}

void OptionButtonSetupDisp() {
	DISP_SPRT spr;
	float *scl_p;
	float scl[35][2];
	int i;
	int alpha;
	
  undefined *puVar1;
  int alp;
  uint uVar2;
  ulong *puVar3;
  float (*pafVar4) [2];
  float (*pafVar5) [2];
  float (*pafVar6) [2];
  float (*pafVar7) [2];
  float afVar8 [2];
  float afVar9 [2];
  float afVar10 [2];
  SPRT_DAT *pSVar11;
  float (*pafVar12) [2];
  int iVar13;
  uchar uVar14;
  DISP_SPRT spr;
  float scl [35] [2];
  
  pafVar12 = scl;
  pafVar4 = pafVar12;
  pafVar5 = (float (*) [2])&DAT_003c2448;
  do {
    pafVar6 = pafVar5;
    pafVar7 = pafVar4;
    afVar8 = pafVar6[1];
    afVar9 = pafVar6[2];
    afVar10 = pafVar6[3];
    *pafVar7 = *pafVar6;
    pafVar7[1] = afVar8;
    pafVar7[2] = afVar9;
    pafVar7[3] = afVar10;
    pafVar4 = pafVar7[4];
    pafVar5 = pafVar6[4];
  } while (pafVar6[4] != (float (*) [2])&UNK_003c2548);
  afVar8 = pafVar6[5];
  afVar9 = pafVar6[6];
  puVar1 = (undefined *)((int)pafVar7[4] + 7);
  uVar2 = (uint)puVar1 & 7;
  puVar3 = (ulong *)(puVar1 + -uVar2);
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | (ulong)_UNK_003c2548 >> (7 - uVar2) * 8;
  pafVar7[4] = _UNK_003c2548;
  puVar1 = (undefined *)((int)pafVar7[5] + 7);
  uVar2 = (uint)puVar1 & 7;
  puVar3 = (ulong *)(puVar1 + -uVar2);
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | (ulong)afVar8 >> (7 - uVar2) * 8;
  pafVar7[5] = afVar8;
  puVar1 = (undefined *)((int)pafVar7[6] + 7);
  uVar2 = (uint)puVar1 & 7;
  puVar3 = (ulong *)(puVar1 + -uVar2);
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | (ulong)afVar9 >> (7 - uVar2) * 8;
  iVar13 = 0x9e;
  pafVar7[6] = afVar9;
  alp = oc->anm_alpha;
  OptDispTitle__Fiiii(oc->now_place,0,0,alp);
  OptPK2SendVram__FiPv(3,opt_key_tex_addr);
  pSVar11 = option_tex + 0x9e;
  do {
    CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&spr,pSVar11);
    pSVar11 = pSVar11 + 1;
    if (iVar13 == 0x9f) {
      spr.rot = 270.0;
      spr.crx = spr.x;
      spr.cry = spr.y;
    }
    else if (iVar13 - 0xacU < 2) {
      spr.alphar = 0x48;
    }
    iVar13 = iVar13 + 1;
    uVar14 = (uchar)alp;
    spr.alpha = uVar14;
    DispSprD__FP9DISP_SPRT(&spr);
  } while (iVar13 < 0xb0);
  pSVar11 = option_tex + 0xb3;
  iVar13 = 0x22;
  CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&spr,option_tex + optm.pad_type + 0xb0);
  spr.alpha = uVar14;
  DispSprD__FP9DISP_SPRT(&spr);
  do {
    CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&spr,pSVar11);
    spr.scw = (*pafVar12)[0];
    iVar13 = iVar13 + -1;
    pSVar11 = pSVar11 + 1;
    spr.sch = (*pafVar12)[1];
    pafVar12 = pafVar12[1];
    spr.csx = spr.x;
    spr.csy = spr.y;
    spr.alpha = uVar14;
    DispSprD__FP9DISP_SPRT(&spr);
  } while (-1 < iVar13);
  OptDispButtonSetupText__Fi(alp);
  OptDispCaption__Fiii(oc->now_place,oc->cursor,alp);
  return;
}

static void OptDispButtonSetupText(int alp) {
	int btn_txt[3][15][2];
	int txt_pos[15][2];
	int i;
	int col;
	
  undefined *puVar1;
  int iVar2;
  uint uVar3;
  int (*paiVar4) [2];
  int (*paiVar5) [2];
  int (*paaiVar6) [15] [2];
  int (*paiVar7) [2];
  ulong uVar8;
  ulong *puVar9;
  int (*paiVar10) [2];
  ulong uVar11;
  ulong *puVar12;
  int aiVar13 [2];
  int col;
  ulong uVar14;
  int aiVar15 [2];
  int aiVar16 [2];
  int (*paiVar17) [2];
  int iVar18;
  int btn_txt [3] [15] [2];
  int txt_pos [15] [2];
  
  puVar9 = &DAT_003c2560;
  paaiVar6 = btn_txt;
  do {
    puVar12 = (ulong *)paaiVar6;
    uVar8 = puVar9[1];
    uVar11 = puVar9[2];
    uVar14 = puVar9[3];
    *puVar12 = *puVar9;
    puVar12[1] = uVar8;
    puVar12[2] = uVar11;
    puVar12[3] = uVar14;
    puVar9 = puVar9 + 4;
    paaiVar6 = (int (*) [15] [2])(puVar12 + 4);
  } while (puVar9 != (ulong *)&UNK_003c26c0);
  paiVar17 = txt_pos;
  uVar3 = (int)puVar12 + 0x27U & 7;
  puVar9 = (ulong *)(((int)puVar12 + 0x27U) - uVar3);
  *puVar9 = *puVar9 & -1L << (uVar3 + 1) * 8 | _UNK_003c26c0 >> (7 - uVar3) * 8;
  puVar12[4] = _UNK_003c26c0;
  paiVar4 = paiVar17;
  paiVar5 = (int (*) [2])&DAT_003c26c8;
  do {
    paiVar7 = paiVar5;
    paiVar10 = paiVar4;
    aiVar16 = paiVar7[1];
    aiVar13 = paiVar7[2];
    aiVar15 = paiVar7[3];
    *paiVar10 = *paiVar7;
    paiVar10[1] = aiVar16;
    paiVar10[2] = aiVar13;
    paiVar10[3] = aiVar15;
    paiVar4 = paiVar10[4];
    paiVar5 = paiVar7[4];
  } while (paiVar7[4] != (int (*) [2])&UNK_003c2728);
  aiVar13 = paiVar7[5];
  aiVar15 = paiVar7[6];
  puVar1 = (undefined *)((int)paiVar10[4] + 7);
  uVar3 = (uint)puVar1 & 7;
  puVar9 = (ulong *)(puVar1 + -uVar3);
  *puVar9 = *puVar9 & -1L << (uVar3 + 1) * 8 | (ulong)_UNK_003c2728 >> (7 - uVar3) * 8;
  paiVar10[4] = _UNK_003c2728;
  puVar1 = (undefined *)((int)paiVar10[5] + 7);
  uVar3 = (uint)puVar1 & 7;
  puVar9 = (ulong *)(puVar1 + -uVar3);
  *puVar9 = *puVar9 & -1L << (uVar3 + 1) * 8 | (ulong)aiVar13 >> (7 - uVar3) * 8;
  paiVar10[5] = aiVar13;
  puVar1 = (undefined *)((int)paiVar10[6] + 7);
  uVar3 = (uint)puVar1 & 7;
  puVar9 = (ulong *)(puVar1 + -uVar3);
  *puVar9 = *puVar9 & -1L << (uVar3 + 1) * 8 | (ulong)aiVar15 >> (7 - uVar3) * 8;
  iVar18 = 0;
  paiVar10[6] = aiVar15;
  do {
    if (btn_txt[optm.pad_type][iVar18][1] != 0x38) {
      iVar2 = btn_txt[optm.pad_type][iVar18][0];
      col = 0x1b;
      if ((iVar2 != 1) && (col = 0x2c, iVar2 != 2)) {
        col = 0x1c;
      }
      if (iVar18 < 4) {
        OptPrintMsgShdw__Fiiiiiii
                  (btn_txt[optm.pad_type][iVar18][1],(*paiVar17)[0],(*paiVar17)[1],col,alp,0,0);
      }
      else {
        OptPrintMsgShdw__Fiiiiiii
                  (btn_txt[optm.pad_type][iVar18][1],(*paiVar17)[0],(*paiVar17)[1],col,alp,0,1);
      }
    }
    iVar18 = iVar18 + 1;
    paiVar17 = paiVar17[1];
  } while (iVar18 < 0xf);
  OptPrintMsgShdw__Fiiiiiii(0x34,0x18,0x175,0x2c,alp,0,0);
  OptPrintMsgShdw__Fiiiiiii(0x1e,0x18,400,0x1b,alp,0,0);
  return;
}

void OptionInitialyzeDisp() {
  OptDispCautionMsg__Fii(0x31,0x80);
  DrawCmnYesNoSel__FifUcUi(oc->yn_csr,220.0,0x80,0);
  return;
}

static void OptDispCursor(int place, int csr, int alp) {
	SPRT_DAT *tri_sp_dat;
	DISP_SPRT spr;
	int i;
	int csr_y;
	int csr_type;
	
  bool bVar1;
  bool bVar2;
  int iVar3;
  float fVar4;
  int iVar5;
  SPRT_DAT *pSVar6;
  int iVar7;
  uchar uVar8;
  float fVar9;
  float fVar10;
  DISP_SPRT spr;
  
  iVar7 = 0x42;
  bVar2 = false;
  uVar8 = (uchar)alp;
  if (place == 0) {
    pSVar6 = (SPRT_DAT *)0x0;
    OptPK2SendVram__FiPv(1,opt_top_tex_addr);
    switch(csr) {
    case 0:
      bVar2 = false;
      iVar7 = 0x42;
      break;
    case 1:
      bVar2 = true;
      pSVar6 = option_tex + 0x33;
      iVar7 = 99;
      break;
    case 2:
      bVar2 = false;
      iVar7 = 0x8d;
      break;
    case 3:
      bVar2 = true;
      pSVar6 = option_tex + 0x37;
      iVar7 = 0xae;
      break;
    case 4:
      bVar2 = true;
      pSVar6 = option_tex + 0x3b;
      iVar7 = 0xd8;
      break;
    case 5:
      bVar2 = true;
      pSVar6 = option_tex + 0x3f;
      iVar7 = 0xf9;
      break;
    case 6:
      bVar2 = false;
      iVar7 = 0x124;
    }
    iVar5 = 0;
    if (pSVar6 != (SPRT_DAT *)0x0) {
      do {
        CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&spr,pSVar6);
        bVar1 = 1 < iVar5;
        iVar5 = iVar5 + 1;
        if (bVar1) {
          spr.alphar = 0x48;
        }
        pSVar6 = pSVar6 + 1;
        spr.alpha = uVar8;
        DispSprD__FP9DISP_SPRT(&spr);
      } while (iVar5 < 4);
    }
    fVar9 = DAT_003ee660;
    fVar10 = DAT_003ee65c;
    if (bVar2) {
      fVar10 = 1.0;
      pSVar6 = option_tex + 0x46;
      iVar5 = 0x46;
      do {
        CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&spr,pSVar6);
        if ((iVar5 == 0x47) || (iVar5 == 0x4a)) {
          spr.scw = fVar9;
          spr.csx = spr.x;
          spr.csy = (float)iVar7;
          spr.sch = fVar10;
        }
        iVar5 = iVar5 + 1;
        spr.alphar = 0x48;
        pSVar6 = pSVar6 + 1;
        spr.y = (float)iVar7;
        spr.alpha = uVar8;
        DispSprD__FP9DISP_SPRT(&spr);
      } while (iVar5 < 0x4c);
    }
    else {
      fVar9 = 1.0;
      pSVar6 = option_tex + 0x43;
      iVar5 = 0x43;
      do {
        CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&spr,pSVar6);
        if (iVar5 == 0x44) {
          spr.scw = fVar10;
          spr.csx = spr.x;
          spr.csy = (float)iVar7;
          spr.sch = fVar9;
        }
        iVar5 = iVar5 + 1;
        spr.alphar = 0x48;
        pSVar6 = pSVar6 + 1;
        spr.y = (float)iVar7;
        spr.alpha = uVar8;
        DispSprD__FP9DISP_SPRT(&spr);
      } while (iVar5 < 0x46);
    }
  }
  else if (place == 1) {
    bVar2 = false;
    OptPK2SendVram__FiPv(1,opt_top_tex_addr);
    fVar9 = DAT_003ee668;
    fVar10 = DAT_003ee664;
    if (csr == 1) {
      iVar7 = 0x8d;
    }
    else if (csr < 2) {
      if (csr == 0) {
        iVar7 = 0x42;
      }
    }
    else if (csr == 2) {
      iVar7 = 0xd8;
    }
    else if (csr == 3) {
      bVar2 = true;
      iVar7 = 0x124;
    }
    if (bVar2) {
      fVar9 = 1.0;
      pSVar6 = option_tex + 0x94;
      iVar5 = 0x94;
      do {
        CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&spr,pSVar6);
        if (iVar5 == 0x95) {
          spr.scw = fVar10;
          spr.csx = spr.x;
          spr.csy = (float)iVar7;
          spr.sch = fVar9;
        }
        iVar5 = iVar5 + 1;
        spr.alphar = 0x48;
        pSVar6 = pSVar6 + 1;
        spr.y = (float)iVar7;
        spr.alpha = uVar8;
        DispSprD__FP9DISP_SPRT(&spr);
      } while (iVar5 < 0x97);
    }
    else {
      pSVar6 = option_tex + 0x94;
      iVar5 = 0x94;
      fVar10 = DAT_003ee66c;
      do {
        CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&spr,pSVar6);
        iVar3 = iVar7;
        if (0x96 < iVar5) {
          iVar3 = iVar7 + 0x21;
        }
        spr.y = (float)iVar3;
        if (iVar5 == 0x95) {
          spr.scw = fVar9;
          fVar4 = spr.scw;
LAB_0022a6dc:
          spr.scw = fVar4;
          spr.csy = spr.y;
          spr.sch = 1.0;
        }
        else {
          fVar4 = fVar10;
          if ((iVar5 == 0x98) || (iVar5 == 0x9b)) goto LAB_0022a6dc;
        }
        iVar5 = iVar5 + 1;
        spr.alphar = 0x48;
        pSVar6 = pSVar6 + 1;
        spr.alpha = uVar8;
        DispSprD__FP9DISP_SPRT(&spr);
      } while (iVar5 < 0x9d);
    }
  }
  return;
}

static void OptDispAHeadText(int place, int csr, int alp) {
	int text_dat[26][3];
	int i;
	int col;
	int *txp;
	
  int *piVar1;
  int *piVar2;
  ulong *puVar3;
  int *piVar4;
  ulong *puVar5;
  ulong *puVar6;
  int col;
  int iVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  uint uVar11;
  uint uVar12;
  int (*paiVar13) [3];
  int (*paiVar14) [3];
  int text_dat [26] [3];
  
  paiVar13 = text_dat;
  paiVar14 = text_dat;
  puVar3 = &DAT_003c2760;
  do {
    puVar5 = puVar3;
    puVar6 = (ulong *)paiVar14;
    uVar8 = puVar5[1];
    uVar9 = puVar5[2];
    uVar10 = puVar5[3];
    *puVar6 = *puVar5;
    puVar6[1] = uVar8;
    puVar6[2] = uVar9;
    puVar6[3] = uVar10;
    paiVar14 = (int (*) [3])(puVar6 + 4);
    puVar3 = puVar5 + 4;
  } while (puVar5 + 4 != (ulong *)&UNK_003c2880);
  uVar8 = puVar5[5];
  uVar9 = puVar5[6];
  uVar12 = (int)puVar6 + 0x27U & 7;
  puVar3 = (ulong *)(((int)puVar6 + 0x27U) - uVar12);
  *puVar3 = *puVar3 & -1L << (uVar12 + 1) * 8 | _UNK_003c2880 >> (7 - uVar12) * 8;
  puVar6[4] = _UNK_003c2880;
  uVar12 = (int)puVar6 + 0x2fU & 7;
  puVar3 = (ulong *)(((int)puVar6 + 0x2fU) - uVar12);
  *puVar3 = *puVar3 & -1L << (uVar12 + 1) * 8 | uVar8 >> (7 - uVar12) * 8;
  puVar6[5] = uVar8;
  uVar12 = (int)puVar6 + 0x37U & 7;
  puVar3 = (ulong *)(((int)puVar6 + 0x37U) - uVar12);
  *puVar3 = *puVar3 & -1L << (uVar12 + 1) * 8 | uVar9 >> (7 - uVar12) * 8;
  puVar6[6] = uVar9;
  if (place == 0) {
    uVar11 = 0;
    OptPK2SendVram__FiPv(1,opt_top_tex_addr);
    uVar12 = csr;
    do {
      uVar11 = uVar11 + 1;
      iVar7 = *(int *)paiVar13;
      col = 0x1d;
      piVar1 = (int *)((int)paiVar13 + 4);
      if (uVar12 != 0) {
        col = 0x19;
      }
      piVar2 = (int *)((int)paiVar13 + 8);
      paiVar13 = (int (*) [3])((int)paiVar13 + 0xc);
      OptPrintMsgShdw__Fiiiiiii(iVar7,*piVar1,*piVar2,col,alp,0,2);
      uVar12 = csr ^ uVar11;
    } while ((int)uVar11 < 7);
    iVar7 = 0x1f;
    if (csr != 1) {
      iVar7 = 0x19;
    }
    uVar12 = (uint)optm.pad_vib;
    OptPrintMsgShdw__Fiiiiiii
              (text_dat[uVar12 + 7][0],text_dat[uVar12 + 7][1],text_dat[uVar12 + 7][2],iVar7,alp,0,2
              );
    iVar7 = 0x1f;
    uVar12 = (uint)optm.credits;
    if (csr != 3) {
      iVar7 = 0x19;
    }
    OptPrintMsgShdw__Fiiiiiii
              (text_dat[uVar12 + 9][0],text_dat[uVar12 + 9][1],text_dat[uVar12 + 9][2],iVar7,alp,0,2
              );
    iVar7 = 0x1f;
    uVar12 = (uint)optm.snd_output;
    if (csr != 4) {
      iVar7 = 0x19;
    }
    OptPrintMsgShdw__Fiiiiiii
              (text_dat[uVar12 + 0xb][0],text_dat[uVar12 + 0xb][1],text_dat[uVar12 + 0xb][2],iVar7,
               alp,0,2);
  }
  else if (place == 1) {
    uVar11 = 0;
    OptPK2SendVram__FiPv(1,opt_top_tex_addr);
    paiVar14 = text_dat[0xd];
    uVar12 = csr;
    do {
      uVar11 = uVar11 + 1;
      piVar1 = *paiVar14;
      iVar7 = 0x1f;
      piVar2 = *paiVar14;
      if (uVar12 != 0) {
        iVar7 = 0x19;
      }
      piVar4 = *paiVar14;
      paiVar14 = paiVar14[1];
      OptPrintMsgShdw__Fiiiiiii(*piVar1,piVar2[1],piVar4[2],iVar7,alp,0,2);
      uVar12 = csr ^ uVar11;
    } while ((int)uVar11 < 4);
    uVar12 = 0;
    do {
      iVar7 = 0x19;
      if ((csr == 0) && (iVar7 = 0x1f, uVar12 != optm.move_operate)) {
        iVar7 = 0x19;
      }
      piVar1 = *paiVar14;
      piVar2 = *paiVar14;
      piVar4 = *paiVar14;
      paiVar14 = paiVar14[1];
      uVar12 = uVar12 + 1;
      OptPrintMsgShdw__Fiiiiiii(*piVar1,piVar2[1],piVar4[2],iVar7,alp,0,2);
    } while ((int)uVar12 < 2);
    uVar12 = 0;
    do {
      iVar7 = 0x19;
      if ((csr == 1) && (iVar7 = 0x1f, uVar12 != optm.view_vertical)) {
        iVar7 = 0x19;
      }
      piVar1 = *paiVar14;
      piVar2 = *paiVar14;
      piVar4 = *paiVar14;
      paiVar14 = paiVar14[1];
      uVar12 = uVar12 + 1;
      OptPrintMsgShdw__Fiiiiiii(*piVar1,piVar2[1],piVar4[2],iVar7,alp,0,2);
    } while ((int)uVar12 < 2);
    uVar12 = 0;
    do {
      iVar7 = 0x19;
      if ((csr == 2) && (iVar7 = 0x1f, uVar12 != optm.ana_replace)) {
        iVar7 = 0x19;
      }
      piVar1 = *paiVar14;
      piVar2 = *paiVar14;
      piVar4 = *paiVar14;
      paiVar14 = paiVar14[1];
      uVar12 = uVar12 + 1;
      OptPrintMsgShdw__Fiiiiiii(*piVar1,piVar2[1],piVar4[2],iVar7,alp,0,2);
    } while ((int)uVar12 < 2);
    iVar7 = 0x1f;
    uVar12 = (uint)optm.pad_type;
    if (csr != 3) {
      iVar7 = 0x19;
    }
    OptPrintMsgShdw__Fiiiiiii
              (text_dat[uVar12 + 0x17][0],text_dat[uVar12 + 0x17][1],text_dat[uVar12 + 0x17][2],
               iVar7,alp,0,2);
  }
  return;
}

static void OptDispBracket(int place, int csr, int alp) {
	SPRT_DAT *bracket_sp[3][2];
	SPRT_DAT *spd;
	DISP_SPRT spr;
	int i;
	int j;
	int bracket_lr[3];
	
  undefined *puVar1;
  uint uVar2;
  ulong *puVar3;
  bool bVar4;
  SPRT_DAT *pSVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int *piVar9;
  uchar uVar10;
  SPRT_DAT *bracket_sp [3] [2];
  DISP_SPRT spr;
  int bracket_lr [3];
  
  piVar9 = bracket_lr;
  puVar1 = (undefined *)((int)bracket_sp + 7);
  uVar2 = (uint)puVar1 & 7;
  puVar3 = (ulong *)(puVar1 + -uVar2);
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | (ulong)DAT_003c2898 >> (7 - uVar2) * 8;
  bracket_sp[0] = DAT_003c2898;
  puVar1 = (undefined *)((int)bracket_sp[1] + 7);
  uVar2 = (uint)puVar1 & 7;
  puVar3 = (ulong *)(puVar1 + -uVar2);
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | (ulong)DAT_003c28a0 >> (7 - uVar2) * 8;
  bracket_sp[1] = DAT_003c28a0;
  puVar1 = (undefined *)((int)bracket_sp[2] + 7);
  uVar2 = (uint)puVar1 & 7;
  puVar3 = (ulong *)(puVar1 + -uVar2);
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | (ulong)DAT_003c28a8 >> (7 - uVar2) * 8;
  bracket_sp[2] = DAT_003c28a8;
  bracket_lr._0_8_ = ZEXT58(CONCAT14(optm.view_vertical,(uint)optm.move_operate));
  uVar2 = (int)bracket_lr + 7U & 7;
  puVar3 = (ulong *)(((int)bracket_lr + 7U) - uVar2);
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 |
            (ulong)(CONCAT14(optm.view_vertical,(uint)optm.move_operate) >> (7 - uVar2) * 8);
  bracket_lr[2] = (uint)optm.ana_replace;
  OptPK2SendVram__FiPv(1,opt_top_tex_addr);
  uVar10 = (uchar)alp;
  if (place == 0) {
    iVar7 = 0x1f;
    pSVar5 = option_tex + 0x1f;
    do {
      iVar7 = iVar7 + 1;
      CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&spr,pSVar5);
      spr.alpha = uVar10;
      DispSprD__FP9DISP_SPRT(&spr);
      pSVar5 = pSVar5 + 1;
    } while (iVar7 < 0x25);
  }
  else if (place == 1) {
    iVar7 = 0;
    piVar8 = piVar9;
    do {
      iVar6 = 1;
      pSVar5 = bracket_sp[iVar7][*piVar8];
      do {
        iVar6 = iVar6 + -1;
        CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&spr,pSVar5);
        spr.alpha = uVar10;
        DispSprD__FP9DISP_SPRT(&spr);
        pSVar5 = pSVar5 + 1;
      } while (-1 < iVar6);
      iVar7 = iVar7 + 1;
      piVar8 = piVar8 + 1;
    } while (iVar7 < 3);
    iVar7 = 0;
    do {
      if (csr == iVar7) {
        iVar6 = 0;
        pSVar5 = option_tex + iVar7 * 8 + 0x7c;
        if (*piVar9 != 0) {
          pSVar5 = option_tex + iVar7 * 8 + 0x80;
        }
        do {
          CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&spr,pSVar5);
          bVar4 = 1 < iVar6;
          iVar6 = iVar6 + 1;
          if (bVar4) {
            spr.alphar = 0x48;
          }
          spr.alpha = uVar10;
          DispSprD__FP9DISP_SPRT(&spr);
          pSVar5 = pSVar5 + 1;
        } while (iVar6 < 4);
      }
      iVar7 = iVar7 + 1;
      piVar9 = piVar9 + 1;
    } while (iVar7 < 3);
  }
  return;
}

static void OptDispIcon(int place, int csr, int alpha) {
	SPRT_DAT *icon[8][2];
	DISP_SPRT spr;
	int alp;
	int i;
	int j;
	int icon_ofs;
	int icon3_id;
	
  undefined *puVar1;
  uint uVar2;
  ulong *puVar3;
  int iVar4;
  int iVar5;
  SPRT_DAT *d;
  int iVar6;
  SPRT_DAT **ppSVar7;
  int iVar8;
  int iVar9;
  uchar uVar10;
  SPRT_DAT *icon [8] [2];
  DISP_SPRT spr;
  int icon_ofs;
  
  iVar6 = 0x31;
  puVar1 = (undefined *)((int)icon + 7);
  uVar2 = (uint)puVar1 & 7;
  puVar3 = (ulong *)(puVar1 + -uVar2);
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | (ulong)DAT_003c28b0 >> (7 - uVar2) * 8;
  icon[0] = DAT_003c28b0;
  puVar1 = (undefined *)((int)icon[1] + 7);
  uVar2 = (uint)puVar1 & 7;
  puVar3 = (ulong *)(puVar1 + -uVar2);
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | (ulong)DAT_003c28b8 >> (7 - uVar2) * 8;
  icon[1] = DAT_003c28b8;
  puVar1 = (undefined *)((int)icon[2] + 7);
  uVar2 = (uint)puVar1 & 7;
  puVar3 = (ulong *)(puVar1 + -uVar2);
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | (ulong)DAT_003c28c0 >> (7 - uVar2) * 8;
  icon[2] = DAT_003c28c0;
  puVar1 = (undefined *)((int)icon[3] + 7);
  uVar2 = (uint)puVar1 & 7;
  puVar3 = (ulong *)(puVar1 + -uVar2);
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | (ulong)DAT_003c28c8 >> (7 - uVar2) * 8;
  icon[3] = DAT_003c28c8;
  puVar1 = (undefined *)((int)icon[4] + 7);
  uVar2 = (uint)puVar1 & 7;
  puVar3 = (ulong *)(puVar1 + -uVar2);
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | (ulong)DAT_003c28d0 >> (7 - uVar2) * 8;
  icon[4] = DAT_003c28d0;
  puVar1 = (undefined *)((int)icon[5] + 7);
  uVar2 = (uint)puVar1 & 7;
  puVar3 = (ulong *)(puVar1 + -uVar2);
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | (ulong)DAT_003c28d8 >> (7 - uVar2) * 8;
  icon[5] = DAT_003c28d8;
  puVar1 = (undefined *)((int)icon[6] + 7);
  uVar2 = (uint)puVar1 & 7;
  puVar3 = (ulong *)(puVar1 + -uVar2);
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | (ulong)DAT_003c28e0 >> (7 - uVar2) * 8;
  icon[6] = DAT_003c28e0;
  puVar1 = (undefined *)((int)icon[7] + 7);
  uVar2 = (uint)puVar1 & 7;
  puVar3 = (ulong *)(puVar1 + -uVar2);
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | (ulong)DAT_003c28e8 >> (7 - uVar2) * 8;
  icon[7] = DAT_003c28e8;
  icon_ofs = 0;
  OptPK2SendVram__FiPv(1,opt_top_tex_addr);
  if (place == 0) {
    switch(csr) {
    case 0:
    case 1:
      csr = 0;
      break;
    case 2:
    case 3:
      csr = 1;
      break;
    case 4:
    case 5:
      csr = 2;
      break;
    case 6:
      csr = 3;
    }
    iVar6 = 0x31;
    icon_ofs = 0;
  }
  else {
    iVar5 = csr << 2;
    if (place != 1) goto LAB_0022aec8;
    iVar6 = 0x6e;
    icon_ofs = 4;
  }
  iVar5 = csr << 2;
LAB_0022aec8:
  iVar9 = 0;
  do {
    if (iVar9 == csr) {
      uVar10 = (uchar)alpha;
      if (iVar9 == 3) {
        CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&spr,option_tex + iVar6);
        spr.alpha = uVar10;
        DispSprD__FP9DISP_SPRT(&spr);
        CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&spr,option_tex + iVar6 + 1);
        spr.alpha = uVar10;
        DispSprD__FP9DISP_SPRT(&spr);
      }
      else {
        iVar8 = 3;
        d = option_tex + 0x2d;
        do {
          iVar8 = iVar8 + -1;
          CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&spr,d);
          spr.y = spr.y + (float)((iVar5 + csr) * 0xf);
          spr.alpha = uVar10;
          DispSprD__FP9DISP_SPRT(&spr);
          d = d + 1;
        } while (-1 < iVar8);
      }
    }
    iVar8 = 1;
    ppSVar7 = (SPRT_DAT **)icon[iVar9 + icon_ofs];
    do {
      if (*ppSVar7 != (SPRT_DAT *)0x0) {
        CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&spr,*ppSVar7);
        iVar4 = alpha;
        if (iVar9 != csr) {
          iVar4 = alpha / 2;
        }
        spr.alpha = (uchar)iVar4;
        spr.alphar = 0x48;
        DispSprD__FP9DISP_SPRT(&spr);
      }
      iVar8 = iVar8 + -1;
      ppSVar7 = ppSVar7 + 1;
    } while (-1 < iVar8);
    iVar9 = iVar9 + 1;
  } while (iVar9 < 4);
  return;
}

static void OptDispTitle(int place, int mx, int my, int alp) {
	DISP_SPRT spr;
	int i;
	int ttl_no;
	
  int iVar1;
  SPRT_DAT *d;
  float fVar2;
  DISP_SPRT spr;
  
  iVar1 = 1;
  OptPK2SendVram__FiPv(0,opt_og_tex_addr);
  d = option_tex + 8;
  fVar2 = DAT_003ee670;
  do {
    CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&spr,d);
    iVar1 = iVar1 + -1;
    d = d + 1;
    spr.csx = spr.x;
    spr.csy = spr.y;
    spr.sch = 1.0;
    spr.scw = fVar2;
    spr.alpha = (uchar)alp;
    DispSprD__FP9DISP_SPRT(&spr);
  } while (-1 < iVar1);
  OptPK2SendVram__FiPv(1,opt_top_tex_addr);
  iVar1 = 0x52;
  if (place != 1) {
    if (place < 2) {
      iVar1 = 10;
      if (place != 0) {
        iVar1 = 0x140;
        goto LAB_0022b12c;
      }
    }
    else {
      iVar1 = 0x9d;
      if ((place != 2) && (iVar1 = 0xd6, place != 3)) {
        iVar1 = 10;
      }
    }
  }
  iVar1 = iVar1 << 5;
LAB_0022b12c:
  CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&spr,(SPRT_DAT *)((int)&option_tex[0].tex0 + iVar1));
  spr.alpha = (uchar)alp;
  DispSprD__FP9DISP_SPRT(&spr);
  return;
}

static void OptDispCaption(int place, int csr, int alp) {
	DISP_SPRT cap_ds;
	int i;
	
  int iVar1;
  int iVar2;
  SPRT_DAT *d;
  DISP_SPRT cap_ds;
  
  if (place == 0) {
    if (((csr == 0) || (csr == 2)) || (iVar2 = 0x4c, csr == 6)) {
      iVar2 = 0x4c;
      d = option_tex + 0x4c;
      do {
        CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&cap_ds,d);
        iVar2 = iVar2 + 1;
        d = d + 1;
        iVar1 = (uint)cap_ds.alpha * alp;
        if (iVar1 < 0) {
          iVar1 = iVar1 + 0x7f;
        }
        cap_ds.alpha = (uchar)(iVar1 >> 7);
        DispSprD__FP9DISP_SPRT(&cap_ds);
      } while (iVar2 < 0x52);
    }
    else {
      while (iVar2 < 0x50) {
        CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&cap_ds,option_tex + iVar2);
        iVar1 = (uint)cap_ds.alpha * alp;
        if (iVar1 < 0) {
          iVar1 = iVar1 + 0x7f;
        }
        cap_ds.alpha = (uchar)(iVar1 >> 7);
        DispSprD__FP9DISP_SPRT(&cap_ds);
        iVar2 = iVar2 + 1;
      }
    }
  }
  else if (place == 1) {
    if (csr == 3) {
      iVar2 = 0;
      iVar1 = 0;
    }
    else {
      iVar2 = 0xc;
      iVar1 = 0xc;
    }
    DrawCmnCapGroup_W__FiiUcUi(iVar2,iVar1,(uchar)alp,0);
  }
  else {
    DrawCmnCapGroup_W__FiiUcUi(0xc,0xc,(uchar)alp,0);
  }
  return;
}

static void OptDispWinMsg(int place, int csr, int alp) {
	int msg_id[14];
	int msg_no;
	
  bool bVar1;
  uint uVar2;
  ulong *puVar3;
  int iVar4;
  int msg_id [14];
  
  uVar2 = (int)msg_id + 7U & 7;
  puVar3 = (ulong *)(((int)msg_id + 7U) - uVar2);
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | DAT_003c2910 >> (7 - uVar2) * 8;
  msg_id._0_8_ = DAT_003c2910;
  uVar2 = (int)msg_id + 0xfU & 7;
  puVar3 = (ulong *)(((int)msg_id + 0xfU) - uVar2);
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | DAT_003c2918 >> (7 - uVar2) * 8;
  msg_id._8_8_ = DAT_003c2918;
  uVar2 = (int)msg_id + 0x17U & 7;
  puVar3 = (ulong *)(((int)msg_id + 0x17U) - uVar2);
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | DAT_003c2920 >> (7 - uVar2) * 8;
  msg_id._16_8_ = DAT_003c2920;
  uVar2 = (int)msg_id + 0x1fU & 7;
  puVar3 = (ulong *)(((int)msg_id + 0x1fU) - uVar2);
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | DAT_003c2928 >> (7 - uVar2) * 8;
  msg_id._24_8_ = DAT_003c2928;
  uVar2 = (int)msg_id + 0x27U & 7;
  puVar3 = (ulong *)(((int)msg_id + 0x27U) - uVar2);
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | DAT_003c2930 >> (7 - uVar2) * 8;
  msg_id._32_8_ = DAT_003c2930;
  uVar2 = (int)msg_id + 0x2fU & 7;
  puVar3 = (ulong *)(((int)msg_id + 0x2fU) - uVar2);
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | DAT_003c2938 >> (7 - uVar2) * 8;
  msg_id._40_8_ = DAT_003c2938;
  uVar2 = (int)msg_id + 0x37U & 7;
  puVar3 = (ulong *)(((int)msg_id + 0x37U) - uVar2);
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | DAT_003c2940 >> (7 - uVar2) * 8;
  msg_id._48_8_ = DAT_003c2940;
  DrawCmnWindow__FUiffffUcUc(0,15.0,324.0,DAT_003ee674,118.0,'X',(uchar)alp);
  if (place != 0) {
    if (place == 1) {
      bVar1 = csr == 2;
      csr = csr + 8;
      if (bVar1) {
        if (optm.ana_replace == '\0') {
          iVar4 = csr * 4;
          goto LAB_0022b3dc;
        }
        csr = 0xc;
      }
    }
    else {
      csr = 0xd;
      if (place != 3) {
        csr = 0;
      }
    }
  }
  iVar4 = csr << 2;
LAB_0022b3dc:
  PrintMsg__Fiiiiiii(0x41,*(int *)((int)msg_id + iVar4),0x28,0x15a,1,alp,0);
  return;
}

void OptDispBgMask() {
	DISP_SQAR DispSqar;
	SQAR_DAT SqarDat;
	DISP_SPRT spr;
	int i;
	
  SPRT_DAT *d;
  int iVar1;
  DISP_SQAR DispSqar;
  SQAR_DAT SqarDat;
  DISP_SPRT spr;
  
  memset(&SqarDat,0,0x18);
  SqarDat.w = 0x280;
  SqarDat.h = 0x1c0;
  CopySqrDToSqr__FP9DISP_SQARP8SQAR_DAT(&DispSqar,&SqarDat);
  DispSqar.alpha = '@';
  DispSqrD__FP9DISP_SQAR(&DispSqar);
  if (oc->now_place != 3) {
    iVar1 = 7;
    OptPK2SendVram__FiPv(3,opt_key_tex_addr);
    d = option_tex;
    do {
      iVar1 = iVar1 + -1;
      CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&spr,d);
      DispSprD__FP9DISP_SPRT(&spr);
      d = d + 1;
    } while (-1 < iVar1);
  }
  return;
}

static void OptPrintMsgShdw(int msg_id, int x, int y, int col, int alp, int pri, int mode) {
  PrintMsg_Arrange__Fiiiiiiiiii(0x41,msg_id,x + 2,y + 2,0x1a,alp,pri,0,0,mode);
  PrintMsg_Arrange__Fiiiiiiiiii(0x41,msg_id,x + 1,y + 1,0x1a,alp,pri,0,0,mode);
  PrintMsg_Arrange__Fiiiiiiiiii(0x41,msg_id,x,y,col,alp,pri,0,0,mode);
  return;
}

static void OptDispCautionMsg(int msg_id, int alp) {
	DISP_SQAR DispSqar;
	SQAR_DAT SqarDat;
	
  DISP_SQAR DispSqar;
  SQAR_DAT SqarDat;
  
  memset(&SqarDat,0,0x18);
  SqarDat.w = 0x280;
  SqarDat.h = 0x1c0;
  CopySqrDToSqr__FP9DISP_SQARP8SQAR_DAT(&DispSqar,&SqarDat);
  DispSqar.alpha = (uchar)(int)((float)alp * DAT_003ee678);
  DispSqrD__FP9DISP_SQAR(&DispSqar);
  DrawCmnWindow__FUiffffUcUc(0,70.0,160.0,500.0,112.0,'P',(uchar)alp);
  PrintMsg__Fiiiiiii(0x41,msg_id,100,0xb0,1,alp,0);
  return;
}

static void OptBrightnessAdjustmentFilterDraw(int alp) {
	DISP_SQAR DispSqar;
	SQAR_DAT SqarDat;
	
  undefined *puVar1;
  uint uVar2;
  ulong *puVar3;
  uchar *puVar4;
  float fVar5;
  DISP_SQAR DispSqar;
  SQAR_DAT SqarDat;
  
  puVar1 = (undefined *)((int)&SqarDat.h + 3);
  uVar2 = (uint)puVar1 & 7;
  puVar3 = (ulong *)(puVar1 + -uVar2);
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | DAT_003c2948 >> (7 - uVar2) * 8;
  SqarDat._0_8_ = DAT_003c2948;
  puVar1 = (undefined *)((int)&SqarDat.y + 3);
  uVar2 = (uint)puVar1 & 7;
  puVar3 = (ulong *)(puVar1 + -uVar2);
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | DAT_003c2950 >> (7 - uVar2) * 8;
  SqarDat._8_8_ = DAT_003c2950;
  uVar2 = (uint)&SqarDat.alpha & 7;
  puVar4 = &SqarDat.alpha + -uVar2;
  *(ulong *)puVar4 = *(ulong *)puVar4 & -1L << (uVar2 + 1) * 8 | DAT_003c2958 >> (7 - uVar2) * 8;
  SqarDat._16_8_ = DAT_003c2958;
  CopySqrDToSqr__FP9DISP_SQARP8SQAR_DAT(&DispSqar,&SqarDat);
  DispSqar.alpha = (char)(optm.brightness << 1) + 0xff;
  DispSqar.test = 0x30003;
  if (optm.brightness < 0x81) {
    DispSqar.alpha = 0x80 - (char)optm.brightness;
    DispSqar.alphar = 0x44;
  }
  else {
    DispSqar.alphar = 0x49;
  }
  fVar5 = (float)(uint)DispSqar.alpha * (float)alp * 0.0078125;
  DispSqar.alpha = (uchar)(int)fVar5;
  if (2.147484e+09 <= fVar5) {
    DispSqar.alpha = (uchar)(int)(fVar5 - 2.147484e+09);
  }
  DispSqrD__FP9DISP_SQAR(&DispSqar);
  return;
}
