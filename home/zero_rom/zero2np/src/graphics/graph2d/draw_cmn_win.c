// STATUS: NOT STARTED

#include "draw_cmn_win.h"

void DrawCmnWindow(u_int pri, float x, float y, float sizew, float sizeh, u_char alpha, u_char max_alpha) {
	float line_yoko;
	DISP_SQAR dsq;
	SQAR_DAT msg_bg;
	
  int iVar1;
  uchar uVar2;
  float fVar3;
  DISP_SQAR dsq;
  SQAR_DAT msg_bg;
  
  memset(&msg_bg,0,0x18);
  fVar3 = sizew - 32.0;
  msg_bg.w = (uint)fVar3;
  if (2.147484e+09 <= fVar3) {
    msg_bg.w = (int)(fVar3 - 2.147484e+09) | 0x80000000;
  }
  fVar3 = sizeh - 26.0;
  msg_bg.x = (int)(x + 16.0);
  msg_bg.y = (int)(y + 13.0);
  msg_bg.h = (uint)fVar3;
  if (2.147484e+09 <= fVar3) {
    msg_bg.h = (int)(fVar3 - 2.147484e+09) | 0x80000000;
  }
  uVar2 = (uchar)((int)((uint)max_alpha * (uint)alpha) >> 7);
  msg_bg.pri = pri;
  msg_bg.alpha = uVar2;
  CopySqrDToSqr__FP9DISP_SQARP8SQAR_DAT(&dsq,&msg_bg);
  dsq.zbuf = 0xa000118;
  dsq.test = 0x30003;
  dsq.alpha = uVar2;
  DispSqrD__FP9DISP_SQAR(&dsq);
  iVar1 = (((uint)alpha * 4 + (uint)alpha) * 4 - (uint)alpha) * 4;
  if (iVar1 < 0) {
    iVar1 = iVar1 + 0x7f;
  }
  uVar2 = (uchar)(iVar1 >> 7);
  DrawCmnLine__FfffUcUcUi(x,y + 10.0,sizew,'\x01',uVar2,pri);
  DrawCmnLine__FfffUcUcUi
            (x,(y + sizeh) - (float)((ushort)msg_box_tex[6].h + 0xd),sizew,'\x01',uVar2,pri);
  DrawCmnLine__FfffUcUcUi(x + 13.0,y,sizeh,'\0',uVar2,pri);
  DrawCmnLine__FfffUcUcUi
            ((x + (sizew - 92.0) + 92.0) - (float)((ushort)msg_box_tex[1].w + 0xd),y,sizeh,'\0',
             uVar2,pri);
  return;
}

void DrawCmnTwoLineWindow(u_int pri, float x, float y, float sizew, float sizeh, u_char alpha, u_char max_alpha) {
	float size_ita_h;
	float line_yoko;
	DISP_SPRT ds;
	DISP_SQAR dsq;
	SQAR_DAT msg_bg;
	
  int iVar1;
  uchar uVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  DISP_SPRT ds;
  DISP_SQAR dsq;
  SQAR_DAT msg_bg;
  
  memset(&msg_bg,0,0x18);
  fVar4 = sizew - 92.0;
  msg_bg.w = (uint)fVar4;
  fVar6 = (sizeh - 26.0) / (float)(uint)(ushort)msg_box_tex[10].h;
  if (2.147484e+09 <= fVar4) {
    msg_bg.w = (int)(fVar4 - 2.147484e+09) | 0x80000000;
  }
  fVar4 = sizeh - 26.0;
  msg_bg.x = (int)(x + 46.0);
  msg_bg.y = (int)(y + 13.0);
  msg_bg.h = (uint)fVar4;
  if (2.147484e+09 <= fVar4) {
    msg_bg.h = (int)(fVar4 - 2.147484e+09) | 0x80000000;
  }
  msg_bg.alpha = (uchar)((int)((uint)max_alpha * (uint)alpha) >> 7);
  msg_bg.pri = pri;
  CopySqrDToSqr__FP9DISP_SQARP8SQAR_DAT(&dsq,&msg_bg);
  CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&ds,msg_box_tex + 10);
  ds.csx = x + 16.0;
  fVar5 = y + 13.0;
  fVar4 = 1.0;
  uVar3 = 0xfffff - (pri & 0xfffff);
  uVar2 = (uchar)((uint)alpha * 0x33 >> 6);
  ds.scw = 1.0;
  ds.test = 0x30003;
  ds.zbuf = 0xa000118;
  ds.csy = fVar5;
  ds.x = ds.csx;
  ds.y = fVar5;
  ds.z = uVar3;
  ds.sch = fVar6;
  ds.pri = pri;
  ds.alpha = uVar2;
  DispSprD__FP9DISP_SPRT(&ds);
  CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&ds,msg_box_tex + 0xb);
  ds.csx = (x + sizew) - (float)((ushort)msg_box_tex[11].w + 0x10);
  ds.test = 0x30003;
  ds.zbuf = 0xa000118;
  ds.csy = fVar5;
  ds.x = ds.csx;
  ds.y = fVar5;
  ds.z = uVar3;
  ds.scw = fVar4;
  ds.sch = fVar6;
  ds.pri = pri;
  ds.alpha = uVar2;
  DispSprD__FP9DISP_SPRT(&ds);
  dsq.zbuf = 0xa000118;
  dsq.test = 0x30003;
  dsq.alpha = uVar2;
  DispSqrD__FP9DISP_SQAR(&dsq);
  iVar1 = ((uint)alpha * 0x14 - (uint)alpha) * 4;
  if (iVar1 < 0) {
    iVar1 = iVar1 + 0x7f;
  }
  uVar2 = (uchar)(iVar1 >> 7);
  DrawCmnLine__FfffUcUcUi(x,y + 10.0,sizew,'\x01',uVar2,pri);
  DrawCmnLine__FfffUcUcUi
            (x,(y + sizeh) - (float)((ushort)msg_box_tex[6].h + 0xd),sizew,'\x01',uVar2,pri);
  return;
}

void DrawCmnFileWindow(int file_type, int file_id, u_int pri, u_char alpha, u_char max_alpha) {
	int msg_type_tbl[5];
	int msg_length;
	
  uint uVar1;
  ulong *puVar2;
  uchar *msg_addr;
  int iVar3;
  int iVar4;
  int *piVar5;
  int msg_type_tbl [5];
  
  iVar4 = file_id * 3;
  uVar1 = (int)msg_type_tbl + 7U & 7;
  puVar2 = (ulong *)(((int)msg_type_tbl + 7U) - uVar1);
  *puVar2 = *puVar2 & -1L << (uVar1 + 1) * 8 | DAT_003a51d8 >> (7 - uVar1) * 8;
  msg_type_tbl._0_8_ = DAT_003a51d8;
  uVar1 = (int)msg_type_tbl + 0xfU & 7;
  puVar2 = (ulong *)(((int)msg_type_tbl + 0xfU) - uVar1);
  *puVar2 = *puVar2 & -1L << (uVar1 + 1) * 8 | DAT_003a51e0 >> (7 - uVar1) * 8;
  msg_type_tbl._8_8_ = DAT_003a51e0;
  msg_type_tbl[4] = DAT_003a51e8;
  piVar5 = msg_type_tbl + file_type;
  msg_addr = GetMsgDataAddr__Fii(*piVar5,iVar4);
  iVar3 = GetMsgLineLength__FPUcPPUc(msg_addr,(uchar **)0x0);
  DrawCmnWindow__FUiffffUcUc(pri,36.0,42.0,572.0,DAT_003ed93c,alpha,max_alpha);
  PrintMsg__Fiiiiiii(8,3,0x132 - iVar3 / 2,0x46,1,(uint)alpha,pri);
  PrintMsg__Fiiiiiii(8,3,iVar3 / 2 + 0x140,0x46,1,(uint)alpha,pri);
  PrintMsg_Arrange__Fiiiiiiiiii(*piVar5,iVar4,0x13f,0x46,1,(uint)alpha,pri,0,0,2);
  PrintMsg_P__Fiiiiiiiii(*piVar5,iVar4 + 2,0x50,0x6c,1,(uint)alpha,pri,0,0);
  PrintMsg__Fiiiiiii(8,3,0x118,0x165,1,(uint)alpha,pri);
  PrintMsg__Fiiiiiii(8,1,0x138,0x166,1,(uint)alpha,pri);
  PrintMsg__Fiiiiiii(8,3,0x158,0x165,1,(uint)alpha,pri);
  iVar3 = GetNowMsgPageNum__Fv();
  PrintNumber_N__FiiiiUcUciUcUc(iVar3 + 1,1,0x126,0x166,'\x01',alpha,0,'\x01',1);
  iVar4 = GetMsgPageNum__Fii(*piVar5,iVar4 + 2);
  PrintNumber_N__FiiiiUcUciUcUc(iVar4,1,0x146,0x166,'\x01',alpha,0,'\x01',1);
  return;
}

void DrawCmnYesNoSel(int cursor, float y, u_char alpha, u_int pri) {
  DrawCmnSelCsr__FUiffUcfUc(pri,(float)cursor * 206.0 + 156.0,y - 2.0,alpha,0.0,'\0');
  DrawCmnSelYes__FUiffUc(pri,154.0,y,alpha);
  DrawCmnSelNo__FUiffUc(pri,360.0,y,alpha);
  return;
}

void DrawCmnSelFrame(u_int pri, float x, float y, u_char alpha, float w) {
	DISP_SPRT sel_ds;
	float scr;
	
  float fVar1;
  DISP_SPRT sel_ds;
  
  fVar1 = 1.0;
  if (w != 0.0) {
    fVar1 = w / (float)(uint)(ushort)btn_tex[7].w;
  }
  CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&sel_ds,btn_tex + 7);
  if (w != 0.0) {
    sel_ds.sch = 1.0;
    sel_ds.csx = x;
    sel_ds.csy = y;
    sel_ds.scw = fVar1;
  }
  sel_ds.x = x;
  sel_ds.y = y;
  sel_ds.alpha = alpha;
  DispSprD__FP9DISP_SPRT(&sel_ds);
  CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&sel_ds,btn_tex + 8);
  sel_ds.y = y + 23.0;
  if (w != 0.0) {
    sel_ds.sch = 1.0;
    sel_ds.csx = x;
    sel_ds.csy = sel_ds.y;
    sel_ds.scw = fVar1;
  }
  sel_ds.x = x;
  sel_ds.alpha = alpha;
  DispSprD__FP9DISP_SPRT(&sel_ds);
  return;
}

void DrawCmnSelYes(u_int pri, float x, float y, u_char alpha) {
  DrawCmnSelFrame__FUiffUcf(pri,x,y,alpha,0.0);
  PrintMsg_Arrange__Fiiiiiiiiii
            (7,1,(int)(x + (float)(uint)((ushort)btn_tex[7].w >> 1)),(int)(y + 2.0),0,(uint)alpha,
             pri,0,0,2);
  return;
}

void DrawCmnSelNo(u_int pri, float x, float y, u_char alpha) {
  DrawCmnSelFrame__FUiffUcf(pri,x,y,alpha,0.0);
  PrintMsg_Arrange__Fiiiiiiiiii
            (7,2,(int)(x + (float)(uint)((ushort)btn_tex[7].w >> 1)),(int)(y + 2.0),0,(uint)alpha,
             pri,0,0,2);
  return;
}

void DrawCmnSelCsr(u_int pri, float x, float y, u_char alpha, float w, u_char flg) {
	DISP_SPRT sel_ds;
	float scr;
	
  float fVar1;
  DISP_SPRT sel_ds;
  
  fVar1 = 1.0;
  if (w != 0.0) {
    fVar1 = w / (float)((uint)(ushort)btn_tex[9].w << 1);
  }
  CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&sel_ds,btn_tex + 9);
  if (w != 0.0) {
    sel_ds.sch = 1.0;
    sel_ds.csx = x;
    sel_ds.csy = y;
    sel_ds.scw = fVar1;
  }
  if (flg != '\0') {
    sel_ds.alphar = 0x48;
  }
  sel_ds.x = x;
  sel_ds.y = y;
  sel_ds.alpha = alpha;
  DispSprD__FP9DISP_SPRT(&sel_ds);
  CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&sel_ds,btn_tex + 10);
  sel_ds.x = x + (float)(uint)(ushort)btn_tex[9].w;
  if (w != 0.0) {
    sel_ds.sch = 1.0;
    sel_ds.csx = x + (float)(uint)(ushort)btn_tex[9].w * fVar1;
    sel_ds.csy = y;
    sel_ds.x = sel_ds.csx;
    sel_ds.scw = fVar1;
  }
  if (flg != '\0') {
    sel_ds.alphar = 0x48;
  }
  sel_ds.y = y;
  sel_ds.alpha = alpha;
  DispSprD__FP9DISP_SPRT(&sel_ds);
  return;
}

void DrawCmnTriCsrL(u_int pri, float x, float y, u_char alpha, u_char rgb) {
	DISP_SPRT sel_ds;
	
  DISP_SPRT sel_ds;
  
  CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&sel_ds,btn_tex + 0xc);
  sel_ds.x = x - 3.0;
  sel_ds.y = y - 2.0;
  sel_ds.r = rgb;
  sel_ds.g = rgb;
  sel_ds.b = rgb;
  sel_ds.alpha = alpha;
  DispSprD__FP9DISP_SPRT(&sel_ds);
  CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&sel_ds,btn_tex + 0xb);
  sel_ds.x = x;
  sel_ds.y = y;
  sel_ds.r = rgb;
  sel_ds.g = rgb;
  sel_ds.b = rgb;
  sel_ds.alpha = alpha;
  DispSprD__FP9DISP_SPRT(&sel_ds);
  return;
}

void DrawCmnTriCsrR(u_int pri, float x, float y, u_char alpha, u_char rgb) {
	DISP_SPRT sel_ds;
	
  DISP_SPRT sel_ds;
  
  CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&sel_ds,btn_tex + 0xe);
  sel_ds.x = x - 3.0;
  sel_ds.y = y - 2.0;
  sel_ds.r = rgb;
  sel_ds.g = rgb;
  sel_ds.b = rgb;
  sel_ds.alpha = alpha;
  DispSprD__FP9DISP_SPRT(&sel_ds);
  CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&sel_ds,btn_tex + 0xd);
  sel_ds.x = x;
  sel_ds.y = y;
  sel_ds.r = rgb;
  sel_ds.g = rgb;
  sel_ds.b = rgb;
  sel_ds.alpha = alpha;
  DispSprD__FP9DISP_SPRT(&sel_ds);
  return;
}
