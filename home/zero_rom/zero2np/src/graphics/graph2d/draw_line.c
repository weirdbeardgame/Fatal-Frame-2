// STATUS: NOT STARTED

#include "draw_line.h"

void DrawCmnLine(float x, float y, float size, u_char type, u_char alp, u_int pri) {
  if (type == '\0') {
    DrawCmnLineTate__FfffUcUi(x,y,size,alp,pri);
    return;
  }
  if (type == '\x01') {
    DrawCmnLineYoko__FfffUcUi(x,y,size,alp,pri);
    return;
  }
  printf("Error!! DrawCmnLine()\n");
  return;
}

static void DrawCmnLineTate(float x, float y, float h, u_char alp, u_int pri) {
	DISP_SPRT ds;
	float line_h;
	float line_scr;
	
  uint uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  DISP_SPRT ds;
  
  fVar2 = h - 90.0;
  fVar4 = 1.0;
  if (fVar2 < 0.0) {
    fVar2 = 0.0;
  }
  else {
    fVar4 = fVar2 / (float)(uint)(ushort)msg_box_tex[9].h;
  }
  fVar3 = 45.0;
  CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&ds,msg_box_tex);
  uVar1 = 0xfffff - (pri & 0xfffff);
  ds.x = x;
  ds.y = y;
  ds.z = uVar1;
  ds.pri = pri;
  ds.alpha = alp;
  DispSprD__FP9DISP_SPRT(&ds);
  CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&ds,msg_box_tex + 2);
  ds.y = y + fVar2 + fVar3;
  ds.x = x;
  ds.z = uVar1;
  ds.pri = pri;
  ds.alpha = alp;
  DispSprD__FP9DISP_SPRT(&ds);
  if (0.0 < fVar2) {
    CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&ds,msg_box_tex + 9);
    ds.csy = y + fVar3;
    ds.scw = 1.0;
    ds.csx = x;
    ds.x = x;
    ds.y = ds.csy;
    ds.z = uVar1;
    ds.sch = fVar4;
    ds.pri = pri;
    ds.alpha = alp;
    DispSprD__FP9DISP_SPRT(&ds);
  }
  return;
}

static void DrawCmnLineYoko(float x, float y, float w, u_char alp, u_int pri) {
	DISP_SPRT ds;
	float line_w;
	float line_scr;
	
  uint uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  DISP_SPRT ds;
  
  fVar2 = w - 92.0;
  fVar4 = 1.0;
  if (fVar2 < 0.0) {
    fVar2 = 0.0;
  }
  else {
    fVar4 = fVar2 / (float)(uint)(ushort)msg_box_tex[8].w;
  }
  fVar3 = 46.0;
  CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&ds,msg_box_tex + 4);
  uVar1 = 0xfffff - (pri & 0xfffff);
  ds.x = x;
  ds.y = y;
  ds.z = uVar1;
  ds.pri = pri;
  ds.alpha = alp;
  DispSprD__FP9DISP_SPRT(&ds);
  CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&ds,msg_box_tex + 5);
  ds.x = x + fVar2 + fVar3;
  ds.y = y;
  ds.z = uVar1;
  ds.pri = pri;
  ds.alpha = alp;
  DispSprD__FP9DISP_SPRT(&ds);
  if (0.0 < fVar2) {
    CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&ds,msg_box_tex + 8);
    ds.csx = x + fVar3;
    ds.sch = 1.0;
    ds.csy = y;
    ds.x = ds.csx;
    ds.y = y;
    ds.z = uVar1;
    ds.scw = fVar4;
    ds.pri = pri;
    ds.alpha = alp;
    DispSprD__FP9DISP_SPRT(&ds);
  }
  return;
}
