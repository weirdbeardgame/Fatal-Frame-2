// STATUS: NOT STARTED

#include "save_load_disp.h"

void SaveLoadCmnBaseDisp(int off_x, int off_y, u_char alpha, void *pk2_addr, int disp_slot) {
	DISP_SQAR dsq;
	SQAR_DAT win_bg[4];
	int i;
	
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined uVar6;
  undefined uVar7;
  undefined uVar8;
  undefined uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined8 *puVar12;
  SQAR_DAT *pSVar13;
  int iVar14;
  int iVar15;
  SQAR_DAT *d;
  DISP_SQAR dsq;
  SQAR_DAT win_bg [4];
  
  puVar12 = &DAT_003c4a40;
  d = win_bg;
  pSVar13 = d;
  do {
    uVar2 = *(undefined4 *)((int)puVar12 + 4);
    uVar3 = *(undefined4 *)(puVar12 + 1);
    uVar4 = *(undefined4 *)((int)(puVar12 + 1) + 4);
    puVar1 = puVar12 + 2;
    uVar5 = *(undefined4 *)puVar1;
    uVar6 = *(undefined *)((int)puVar1 + 4);
    uVar7 = *(undefined *)((int)puVar1 + 5);
    uVar8 = *(undefined *)((int)puVar1 + 6);
    uVar9 = *(undefined *)((int)puVar1 + 7);
    uVar10 = *(undefined4 *)(puVar12 + 3);
    uVar11 = *(undefined4 *)((int)(puVar12 + 3) + 4);
    pSVar13->w = *(undefined4 *)puVar12;
    pSVar13->h = uVar2;
    pSVar13->x = uVar3;
    pSVar13->y = uVar4;
    pSVar13->pri = uVar5;
    pSVar13->r = uVar6;
    pSVar13->g = uVar7;
    pSVar13->b = uVar8;
    pSVar13->alpha = uVar9;
    pSVar13[1].w = uVar10;
    pSVar13[1].h = uVar11;
    puVar12 = puVar12 + 4;
    pSVar13 = (SQAR_DAT *)&pSVar13[1].x;
  } while (puVar12 != &DAT_003c4aa0);
  iVar14 = 3;
  do {
    CopySqrDToSqr__FP9DISP_SQARP8SQAR_DAT(&dsq,d);
    iVar14 = iVar14 + -1;
    d = d + 1;
    dsq.alpha = (uchar)((int)((uint)dsq.alpha * (uint)alpha) >> 7);
    DispSqrD__FP9DISP_SQAR(&dsq);
  } while (-1 < iVar14);
  SaveLoadFrameDisp__FiiUcPv(off_x,off_y,alpha,pk2_addr);
  SaveLoadMemoryCardSlotDisp__FiiUcPvi(off_x,off_y,alpha,pk2_addr,disp_slot);
  SaveLoadCaptionDisp__FiiUc(off_x,off_y,alpha);
  iVar14 = 0;
  do {
    iVar15 = iVar14 + 1;
    SaveLoadClearFrameDisp__FiiUcPvi(off_x,off_y,alpha,pk2_addr,iVar14);
    iVar14 = iVar15;
  } while (iVar15 < 5);
  return;
}

void SaveLoadMcCheckDisp(int off_x, int off_y, u_char alpha, void *pk2_addr) {
	int i;
	
  int disp_label;
  int iVar1;
  
  disp_label = 0;
  do {
    SaveLoadSnapShadowDisp__FiiUcPvi(off_x,off_y,alpha,pk2_addr,disp_label);
    SaveLoadNonClearMaskDisp__FiiUcPvi(off_x,off_y,alpha,pk2_addr,disp_label);
    iVar1 = disp_label + 1;
    SaveLoadNonSelLineDisp__FiiUcPvi(off_x,off_y,alpha,pk2_addr,disp_label);
    disp_label = iVar1;
  } while (iVar1 < 5);
  return;
}

void SaveLoadTitleFrameDisp(int off_x, int off_y, u_char alpha, void *pk2_addr) {
	int i;
	DISP_SPRT title_ds;
	
  SPRT_DAT *d;
  int iVar1;
  float fVar2;
  DISP_SPRT title_ds;
  
  fVar2 = (float)off_x;
  iVar1 = 1;
  PK2SendVram__FUiiii((uint)pk2_addr,-1,-1,0);
  d = out_game_tex;
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

void SaveLoadTitleSaveDisp(int off_x, int off_y, u_char alpha, void *pk2_addr) {
	int i;
	DISP_SPRT title_ds;
	
  SPRT_DAT *d;
  int iVar1;
  float fVar2;
  DISP_SPRT title_ds;
  
  fVar2 = (float)off_x;
  iVar1 = 1;
  PK2SendVram__FUiiii((uint)pk2_addr,-1,-1,0);
  d = save_load_tex + 0x37;
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

void SaveLoadTitleLoadDisp(int off_x, int off_y, u_char alpha, void *pk2_addr) {
	int i;
	DISP_SPRT title_ds;
	
  SPRT_DAT *d;
  int iVar1;
  float fVar2;
  DISP_SPRT title_ds;
  
  fVar2 = (float)off_x;
  iVar1 = 1;
  PK2SendVram__FUiiii((uint)pk2_addr,-1,-1,0);
  d = save_load_tex + 0x39;
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

void SaveLoadFrameDisp(int off_x, int off_y, u_char alpha, void *pk2_addr) {
	int i;
	DISP_SPRT frame_ds;
	
  uint uVar1;
  int iVar2;
  SPRT_DAT *d;
  float fVar3;
  float fVar4;
  float fVar5;
  DISP_SPRT frame_ds;
  
  fVar4 = (float)off_x;
  fVar5 = (float)off_y;
  iVar2 = 0xc;
  PK2SendVram__FUiiii((uint)pk2_addr,-1,-1,0);
  d = save_load_tex;
  do {
    CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&frame_ds,d);
    iVar2 = iVar2 + -1;
    d = d + 1;
    frame_ds.x = frame_ds.x + fVar4;
    frame_ds.y = frame_ds.y + fVar5;
    frame_ds.alpha = (uchar)((int)((uint)frame_ds.alpha * (uint)alpha) >> 7);
    DispSprD__FP9DISP_SPRT(&frame_ds);
  } while (-1 < iVar2);
  iVar2 = 0;
  CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&frame_ds,save_load_tex + 0xd);
  frame_ds.x = frame_ds.x + fVar4;
  frame_ds.y = frame_ds.y + fVar5;
  frame_ds.alpha = (uchar)((int)((uint)frame_ds.alpha * (uint)alpha) >> 7);
  DispSprD__FP9DISP_SPRT(&frame_ds);
  do {
    CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&frame_ds,save_load_tex + 0xe);
    uVar1 = iVar2 * frame_ds.w;
    iVar2 = iVar2 + 1;
    if ((int)uVar1 < 0) {
      fVar3 = (float)(uVar1 & 1 | uVar1 >> 1);
      fVar3 = fVar3 + fVar3;
    }
    else {
      fVar3 = (float)uVar1;
    }
    frame_ds.y = frame_ds.y + fVar5;
    frame_ds.x = frame_ds.x + fVar3 + fVar4;
    frame_ds.alpha = (uchar)((int)((uint)frame_ds.alpha * (uint)alpha) >> 7);
    DispSprD__FP9DISP_SPRT(&frame_ds);
  } while (iVar2 < 8);
  CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&frame_ds,save_load_tex + 0xf);
  frame_ds.x = frame_ds.x + fVar4;
  frame_ds.y = frame_ds.y + fVar5;
  frame_ds.alpha = (uchar)((int)((uint)frame_ds.alpha * (uint)alpha) >> 7);
  DispSprD__FP9DISP_SPRT(&frame_ds);
  return;
}

void SaveLoadClearFrameDisp(int off_x, int off_y, u_char alpha, void *pk2_addr, int disp_label) {
	DISP_SPRT frame_ds;
	
  DISP_SPRT frame_ds;
  
  PK2SendVram__FUiiii((uint)pk2_addr,-1,-1,0);
  CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&frame_ds,save_load_tex + 0x27);
  frame_ds.y = frame_ds.y + (float)off_y;
  frame_ds.alpha = (uchar)((int)((uint)frame_ds.alpha * (uint)alpha) >> 7);
  frame_ds.x = frame_ds.x + (float)(disp_label * 0x76) + (float)off_x;
  DispSprD__FP9DISP_SPRT(&frame_ds);
  return;
}

void SaveLoadCursorDisp(int off_x, int off_y, u_char alpha, u_char rgb, void *pk2_addr, int disp_label) {
	DISP_SPRT csr_ds;
	
  float fVar1;
  DISP_SPRT csr_ds;
  
  fVar1 = (float)off_y;
  PK2SendVram__FUiiii((uint)pk2_addr,-1,-1,0);
  CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&csr_ds,save_load_tex + 0x10);
  csr_ds.y = csr_ds.y + fVar1;
  csr_ds.alpha = (uchar)((int)((uint)csr_ds.alpha * (uint)alpha) >> 7);
  csr_ds.x = csr_ds.x + (float)(disp_label * 0x76) + (float)off_x;
  csr_ds.r = rgb;
  csr_ds.g = rgb;
  csr_ds.b = rgb;
  DispSprD__FP9DISP_SPRT(&csr_ds);
  CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&csr_ds,save_load_tex + 0x11);
  csr_ds.y = csr_ds.y + fVar1;
  csr_ds.x = csr_ds.x + (float)(disp_label * 0x76) + (float)off_x;
  csr_ds.alpha = (uchar)((int)((uint)csr_ds.alpha * (uint)alpha) >> 7);
  csr_ds.r = rgb;
  csr_ds.g = rgb;
  csr_ds.b = rgb;
  DispSprD__FP9DISP_SPRT(&csr_ds);
  return;
}

void SaveLoadSelFlareDisp(int off_x, int off_y, u_char alpha, void *pk2_addr, int disp_label) {
	DISP_SPRT flare_ds;
	
  float fVar1;
  DISP_SPRT flare_ds;
  
  fVar1 = (float)off_y;
  PK2SendVram__FUiiii((uint)pk2_addr,-1,-1,0);
  CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&flare_ds,save_load_tex + 0x12);
  flare_ds.y = flare_ds.y + fVar1;
  flare_ds.alphar = 0x48;
  flare_ds.alpha = (uchar)((int)((uint)flare_ds.alpha * (uint)alpha) >> 7);
  flare_ds.x = flare_ds.x + (float)(disp_label * 0x76) + (float)off_x;
  DispSprD__FP9DISP_SPRT(&flare_ds);
  CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&flare_ds,save_load_tex + 0x13);
  flare_ds.alphar = 0x48;
  flare_ds.y = flare_ds.y + fVar1;
  flare_ds.x = flare_ds.x + (float)(disp_label * 0x76) + (float)off_x;
  flare_ds.alpha = (uchar)((int)((uint)flare_ds.alpha * (uint)alpha) >> 7);
  DispSprD__FP9DISP_SPRT(&flare_ds);
  return;
}

void SaveLoadSnapShadowDisp(int off_x, int off_y, u_char alpha, void *pk2_addr, int disp_label) {
	DISP_SPRT shadow_ds;
	
  DISP_SPRT shadow_ds;
  
  PK2SendVram__FUiiii((uint)pk2_addr,-1,-1,0);
  CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&shadow_ds,save_load_tex + 0x14);
  shadow_ds.y = shadow_ds.y + (float)off_y;
  shadow_ds.alpha = (uchar)((int)((uint)shadow_ds.alpha * (uint)alpha) >> 7);
  shadow_ds.x = shadow_ds.x + (float)(disp_label * 0x76) + (float)off_x;
  DispSprD__FP9DISP_SPRT(&shadow_ds);
  return;
}

void SaveLoadSnapShotDisp(int off_x, int off_y, u_char alpha, void *pk2_addr, int disp_label) {
	DISP_SPRT snap_ds;
	
  DISP_SPRT snap_ds;
  
  PK2SendVram__FUiiii((uint)pk2_addr,-1,-1,0);
  CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&snap_ds,save_load_tex + 0x3b);
  snap_ds.y = snap_ds.y + (float)off_y;
  snap_ds.alpha = (uchar)((int)((uint)snap_ds.alpha * (uint)alpha) >> 7);
  snap_ds.x = snap_ds.x + (float)(disp_label * 0x76) + (float)off_x;
  DispSprD__FP9DISP_SPRT(&snap_ds);
  return;
}

void SaveLoadNonSelNoDisp(int off_x, int off_y, u_char alpha, void *pk2_addr, int disp_label) {
	DISP_SPRT no_ds;
	
  DISP_SPRT no_ds;
  
  PK2SendVram__FUiiii((uint)pk2_addr,-1,-1,0);
  CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&no_ds,save_load_tex + 0x15);
  no_ds.y = no_ds.y + (float)off_y;
  no_ds.alpha = (uchar)((int)((uint)no_ds.alpha * (uint)alpha) >> 7);
  no_ds.x = no_ds.x + (float)(disp_label * 0x76) + (float)off_x;
  DispSprD__FP9DISP_SPRT(&no_ds);
  return;
}

void SaveLoadNonSelDataNumDisp(int off_x, int off_y, u_char alpha, void *pk2_addr, int disp_label) {
	DISP_SPRT num_ds;
	
  DISP_SPRT num_ds;
  
  PK2SendVram__FUiiii((uint)pk2_addr,-1,-1,0);
  CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&num_ds,save_load_tex + disp_label + 0x16);
  num_ds.x = num_ds.x + (float)off_x;
  num_ds.y = num_ds.y + (float)off_y;
  num_ds.alpha = (uchar)((int)((uint)num_ds.alpha * (uint)alpha) >> 7);
  DispSprD__FP9DISP_SPRT(&num_ds);
  return;
}

void SaveLoadNonSelLineDisp(int off_x, int off_y, u_char alpha, void *pk2_addr, int disp_label) {
	DISP_SPRT line_ds;
	
  DISP_SPRT line_ds;
  
  PK2SendVram__FUiiii((uint)pk2_addr,-1,-1,0);
  CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&line_ds,save_load_tex + 0x1b);
  line_ds.y = line_ds.y + (float)off_y;
  line_ds.alpha = (uchar)((int)((uint)line_ds.alpha * (uint)alpha) >> 7);
  line_ds.x = line_ds.x + (float)(disp_label * 0x76) + (float)off_x;
  DispSprD__FP9DISP_SPRT(&line_ds);
  return;
}

void SaveLoadSelNoDisp(int off_x, int off_y, u_char alpha, void *pk2_addr, int disp_label) {
	DISP_SPRT no_ds;
	
  DISP_SPRT no_ds;
  
  PK2SendVram__FUiiii((uint)pk2_addr,-1,-1,0);
  CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&no_ds,save_load_tex + 0x1c);
  no_ds.y = no_ds.y + (float)off_y;
  no_ds.alpha = (uchar)((int)((uint)no_ds.alpha * (uint)alpha) >> 7);
  no_ds.x = no_ds.x + (float)(disp_label * 0x76) + (float)off_x;
  DispSprD__FP9DISP_SPRT(&no_ds);
  return;
}

void SaveLoadSelDataNumDisp(int off_x, int off_y, u_char alpha, void *pk2_addr, int disp_label) {
	DISP_SPRT num_ds;
	
  DISP_SPRT num_ds;
  
  PK2SendVram__FUiiii((uint)pk2_addr,-1,-1,0);
  CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&num_ds,save_load_tex + disp_label + 0x1d);
  num_ds.x = num_ds.x + (float)off_x;
  num_ds.y = num_ds.y + (float)off_y;
  num_ds.alpha = (uchar)((int)((uint)num_ds.alpha * (uint)alpha) >> 7);
  DispSprD__FP9DISP_SPRT(&num_ds);
  return;
}

void SaveLoadSelLineDisp(int off_x, int off_y, u_char alpha, void *pk2_addr, int disp_label) {
	DISP_SPRT line_ds;
	
  DISP_SPRT line_ds;
  
  PK2SendVram__FUiiii((uint)pk2_addr,-1,-1,0);
  CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&line_ds,save_load_tex + 0x22);
  line_ds.y = line_ds.y + (float)off_y;
  line_ds.alpha = (uchar)((int)((uint)line_ds.alpha * (uint)alpha) >> 7);
  line_ds.x = line_ds.x + (float)(disp_label * 0x76) + (float)off_x;
  DispSprD__FP9DISP_SPRT(&line_ds);
  return;
}

void SaveLoadClearFlareDisp(int off_x, int off_y, u_char alpha, void *pk2_addr, int disp_label) {
	int i;
	DISP_SPRT flare_ds;
	
  int iVar1;
  SPRT_DAT *d;
  float fVar2;
  DISP_SPRT flare_ds;
  
  fVar2 = (float)off_x;
  PK2SendVram__FUiiii((uint)pk2_addr,-1,-1,0);
  d = save_load_tex + 0x23;
  iVar1 = 3;
  do {
    CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&flare_ds,d);
    iVar1 = iVar1 + -1;
    d = d + 1;
    flare_ds.y = flare_ds.y + (float)off_y;
    flare_ds.x = flare_ds.x + (float)(disp_label * 0x76) + fVar2;
    flare_ds.alpha = (uchar)((int)((uint)flare_ds.alpha * (uint)alpha) >> 7);
    DispSprD__FP9DISP_SPRT(&flare_ds);
  } while (-1 < iVar1);
  return;
}

void SaveLoadNonClearMaskDisp(int off_x, int off_y, u_char alpha, void *pk2_addr, int disp_label) {
	DISP_SPRT mask_ds;
	
  DISP_SPRT mask_ds;
  
  PK2SendVram__FUiiii((uint)pk2_addr,-1,-1,0);
  CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&mask_ds,save_load_tex + 0x28);
  mask_ds.y = mask_ds.y + (float)off_y;
  mask_ds.alpha = (uchar)((int)((uint)mask_ds.alpha * (uint)alpha) >> 7);
  mask_ds.x = mask_ds.x + (float)(disp_label * 0x76) + (float)off_x;
  DispSprD__FP9DISP_SPRT(&mask_ds);
  return;
}

void SaveLoadMemoryCardSlotDisp(int off_x, int off_y, u_char alpha, void *pk2_addr, int slot_label) {
	DISP_SPRT slot_ds;
	
  float fVar1;
  float fVar2;
  DISP_SPRT slot_ds;
  
  fVar1 = (float)off_x;
  PK2SendVram__FUiiii((uint)pk2_addr,-1,-1,0);
  CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&slot_ds,save_load_tex + 0x33);
  fVar2 = (float)off_y;
  slot_ds.x = slot_ds.x + fVar1;
  slot_ds.y = slot_ds.y + fVar2;
  slot_ds.alpha = (uchar)((int)((uint)slot_ds.alpha * (uint)alpha) >> 7);
  DispSprD__FP9DISP_SPRT(&slot_ds);
  CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&slot_ds,save_load_tex + 0x34);
  slot_ds.x = slot_ds.x + fVar1;
  slot_ds.y = slot_ds.y + fVar2;
  slot_ds.alpha = (uchar)((int)((uint)slot_ds.alpha * (uint)alpha) >> 7);
  DispSprD__FP9DISP_SPRT(&slot_ds);
  CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&slot_ds,save_load_tex + slot_label + 0x35);
  slot_ds.x = slot_ds.x + fVar1;
  slot_ds.y = slot_ds.y + fVar2;
  slot_ds.alpha = (uchar)((int)((uint)slot_ds.alpha * (uint)alpha) >> 7);
  DispSprD__FP9DISP_SPRT(&slot_ds);
  return;
}

void SaveLoadCaptionDisp(int off_x, int off_y, u_char alpha) {
  DrawCmnCapGroup_W__FiiUcUi(0,0,alpha,0);
  return;
}

void SaveLoadMcPlayDataInfoDisp(int off_x, int off_y, u_char alpha, int chapter, int room, TIME_INFO play_time) {
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  ulong in_v1;
  int y;
  undefined local_40 [8];
  int local_38;
  
  puVar1 = (undefined *)((int)&play_time->min + 3);
  uVar2 = (uint)puVar1 & 7;
  uVar3 = (uint)play_time & 7;
  local_40 = (undefined  [8])
             ((*(long *)(puVar1 + -uVar2) << (7 - uVar2) * 8 |
              in_v1 & 0xffffffffffffffffU >> (uVar2 + 1) * 8) & -1L << (8 - uVar3) * 8 |
             *(ulong *)((int)play_time - uVar3) >> uVar3 * 8);
  iVar4 = play_time->sec;
  puVar1 = local_40 + 7;
  uVar2 = (uint)puVar1 & 7;
  *(ulong *)(puVar1 + -uVar2) =
       *(ulong *)(puVar1 + -uVar2) & -1L << (uVar2 + 1) * 8 | (ulong)local_40 >> (7 - uVar2) * 8;
  y = off_y + 0x12f;
  local_38 = iVar4;
  if ((uint)chapter < 0xb) {
    PrintMsg__Fiiiiiii(3,chapter,0x6e,0xf0,0xd,(uint)alpha,0);
  }
  if ((uint)room < 0xf0) {
    iVar4 = GetMapLabelToRoomLabel__Fi(room);
    PrintMsg__Fiiiiiii(0x51,iVar4,0x6e,0x10b,0xe,(uint)alpha,0);
  }
  else {
  }
  PrintNumber_N__FiiiiUcUciUcUc(local_40._0_4_,3,off_x + 0x19a,y,'\x0f',alpha,0,'\x01',1);
  PrintMsg__Fiiiiiii(8,0,off_x + 0x1c4,y,0xf,(uint)alpha,0xa0);
  PrintNumber_N__FiiiiUcUciUcUc(local_40._4_4_,2,off_x + 0x1d3,y,'\x0f',alpha,0,'\x01',1);
  PrintMsg__Fiiiiiii(8,0,off_x + 499,y,0xf,(uint)alpha,0xa0);
  PrintNumber_N__FiiiiUcUciUcUc(local_38,2,off_x + 0x202,y,'\x0f',alpha,0,'\x01',1);
  return;
}

void SaveLoadMcClearPlayDataInfoDisp(int off_x, int off_y, u_char alpha, TIME_INFO play_time) {
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  ulong in_v0;
  int y;
  undefined local_40 [8];
  int local_38;
  
  puVar1 = (undefined *)((int)&play_time->min + 3);
  uVar2 = (uint)puVar1 & 7;
  uVar3 = (uint)play_time & 7;
  local_40 = (undefined  [8])
             ((*(long *)(puVar1 + -uVar2) << (7 - uVar2) * 8 |
              in_v0 & 0xffffffffffffffffU >> (uVar2 + 1) * 8) & -1L << (8 - uVar3) * 8 |
             *(ulong *)((int)play_time - uVar3) >> uVar3 * 8);
  iVar4 = play_time->sec;
  puVar1 = local_40 + 7;
  uVar2 = (uint)puVar1 & 7;
  *(ulong *)(puVar1 + -uVar2) =
       *(ulong *)(puVar1 + -uVar2) & -1L << (uVar2 + 1) * 8 | (ulong)local_40 >> (7 - uVar2) * 8;
  y = off_y + 0x12f;
  local_38 = iVar4;
  PrintMsg__Fiiiiiii(0x50,0x32,0x6e,0xf0,0xd,(uint)alpha,0);
  PrintNumber_N__FiiiiUcUciUcUc(local_40._0_4_,3,off_x + 0x19a,y,'\x0f',alpha,0,'\x01',1);
  PrintMsg__Fiiiiiii(8,0,off_x + 0x1c4,y,0xf,(uint)alpha,0xa0);
  PrintNumber_N__FiiiiUcUciUcUc(local_40._4_4_,2,off_x + 0x1d3,y,'\x0f',alpha,0,'\x01',1);
  PrintMsg__Fiiiiiii(8,0,off_x + 499,y,0xf,(uint)alpha,0xa0);
  PrintNumber_N__FiiiiUcUciUcUc(local_38,2,off_x + 0x202,y,'\x0f',alpha,0,'\x01',1);
  return;
}

void SaveLoadMcStateMsgWinDisp(int off_x, int off_y, u_char alpha) {
	DISP_SQAR dsq;
	SQAR_DAT win_bg;
	
  undefined *puVar1;
  uint uVar2;
  ulong *puVar3;
  uchar *puVar4;
  DISP_SQAR dsq;
  SQAR_DAT win_bg;
  
  puVar1 = (undefined *)((int)&win_bg.h + 3);
  uVar2 = (uint)puVar1 & 7;
  puVar3 = (ulong *)(puVar1 + -uVar2);
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | DAT_003c4aa0 >> (7 - uVar2) * 8;
  win_bg._0_8_ = DAT_003c4aa0;
  puVar1 = (undefined *)((int)&win_bg.y + 3);
  uVar2 = (uint)puVar1 & 7;
  puVar3 = (ulong *)(puVar1 + -uVar2);
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | DAT_003c4aa8 >> (7 - uVar2) * 8;
  win_bg._8_8_ = DAT_003c4aa8;
  uVar2 = (uint)&win_bg.alpha & 7;
  puVar4 = &win_bg.alpha + -uVar2;
  *(ulong *)puVar4 = *(ulong *)puVar4 & -1L << (uVar2 + 1) * 8 | _DAT_003c4ab0 >> (7 - uVar2) * 8;
  win_bg._16_8_ = _DAT_003c4ab0;
  CopySqrDToSqr__FP9DISP_SQARP8SQAR_DAT(&dsq,&win_bg);
  dsq.alpha = (uchar)((int)((uint)dsq.alpha * (uint)alpha) >> 7);
  DispSqrD__FP9DISP_SQAR(&dsq);
  DrawCmnWindow__FUiffffUcUc
            (0,(float)(off_x + 0x2d),(float)(off_y + 0x7e),DAT_003ee81c,216.0,alpha,'Y');
  return;
}

void SaveLoadMcSelYesNoWinDisp(int off_x, int off_y, u_char alpha, int csr) {
  SaveLoadMcStateMsgWinDisp__FiiUc(off_x,off_y,alpha);
  DrawCmnYesNoSel__FifUcUi(csr,(float)(off_y + 0x127),alpha,0);
  return;
}

void SaveLoadFileSelMsgWinDisp(int off_x, int off_y, u_char alpha) {
  DrawCmnTwoLineWindow__FUiffffUcUc
            (0,(float)(off_x + 0x1e),(float)(off_y + 0x154),580.0,98.0,alpha,'Y');
  return;
}

void SaveLoadFileSelYesNoWinDisp(int off_x, int off_y, u_char alpha, int csr) {
  SaveLoadFileSelMsgWinDisp__FiiUc(off_x,off_y,alpha);
  DrawCmnYesNoSel__FifUcUi(csr,(float)(off_y + 0x184),alpha,0);
  return;
}

void SaveLoadMcStateMsgDisp(int off_x, int off_y, u_char alpha, int msg_id) {
  PrintMsg__Fiiiiiii(0x50,msg_id,0x5c,0x8e,1,(uint)alpha,0);
  return;
}

void SaveLoadFileSelMsgDisp(int off_x, int off_y, u_char alpha, int msg_id) {
  PrintMsg__Fiiiiiii(0x50,msg_id,0x41,0x164,1,(uint)alpha,0);
  return;
}

void SaveLoadClearNumberDisp(int data, int off_x, int off_y, u_char alpha, int pri, u_char zero_flg, int disp_label, void *pk2_addr) {
	int i;
	int j;
	int tmp;
	int ten_tmp;
	u_char set_flg;
	
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int x;
  
  if (99 < data) {
    data = 99;
  }
  bVar1 = zero_flg == '\x01';
  x = disp_label * 0x76 + 0x69;
  iVar3 = 2;
  do {
    iVar4 = 1;
    iVar5 = iVar3 + -1;
    iVar2 = iVar5;
    if (0 < iVar5) {
      do {
        iVar2 = iVar2 + -1;
        iVar4 = iVar4 * 10;
      } while (iVar2 != 0);
    }
    if (iVar4 == 0) {
      trap(7);
    }
    if (data / iVar4 != 0) {
      bVar1 = true;
    }
    if (((zero_flg == '\0') && (data == 0)) && (iVar3 == 1)) {
      bVar1 = true;
    }
    iVar2 = data;
    if (iVar3 != 1) {
      iVar2 = data / iVar4;
    }
    if (bVar1) {
      SaveLoadClearNumberDisp_One__FiiiUciPv(iVar2 % 10,x,0x7b,alpha,pri,pk2_addr);
    }
    x = x + 0xd;
    iVar3 = iVar5;
  } while (0 < iVar5);
  return;
}

void SaveLoadClearNumberDisp_One(int data, int x, int y, u_char alpha, int pri, void *pk2_addr) {
	static char __FUNCTION__[28] = {
		/* [0] = */ 83,
		/* [1] = */ 97,
		/* [2] = */ 118,
		/* [3] = */ 101,
		/* [4] = */ 76,
		/* [5] = */ 111,
		/* [6] = */ 97,
		/* [7] = */ 100,
		/* [8] = */ 67,
		/* [9] = */ 108,
		/* [10] = */ 101,
		/* [11] = */ 97,
		/* [12] = */ 114,
		/* [13] = */ 78,
		/* [14] = */ 117,
		/* [15] = */ 109,
		/* [16] = */ 98,
		/* [17] = */ 101,
		/* [18] = */ 114,
		/* [19] = */ 68,
		/* [20] = */ 105,
		/* [21] = */ 115,
		/* [22] = */ 112,
		/* [23] = */ 95,
		/* [24] = */ 79,
		/* [25] = */ 110,
		/* [26] = */ 101,
		/* [27] = */ 0
	};
	DISP_SPRT num_ds;
	
  DISP_SPRT num_ds;
  
  if (9 < data) {
    SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
    PrintAssertReal("Error!! SaveLoadNumberDisp_One");
  }
  PK2SendVram__FUiiii((uint)pk2_addr,-1,-1,0);
  CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&num_ds,save_load_tex + data + 0x29);
  num_ds.x = (float)x;
  num_ds.y = (float)y;
  num_ds.z = 0xfffff - (pri & 0xfffffU);
  num_ds.pri = pri;
  num_ds.alpha = alpha;
  DispSprD__FP9DISP_SPRT(&num_ds);
  return;
}
