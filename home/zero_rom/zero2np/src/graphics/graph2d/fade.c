// STATUS: NOT STARTED

#include "fade.h"

typedef struct {
	u_char fade_state;
	u_char alpha;
	u_char change_alp;
	u_char r;
	u_char g;
	u_char b;
	int timer;
} FADE_MODE_CTRL;

FADE_MODE_CTRL fade_ctrl = {
	/* .fade_state = */ 0,
	/* .alpha = */ 0,
	/* .change_alp = */ 0,
	/* .r = */ 0,
	/* .g = */ 0,
	/* .b = */ 0,
	/* .timer = */ 0
};

void FadeCtrlInit() {
  memset(&fade_ctrl,0,0xc);
  fade_ctrl.alpha = 0x80;
  return;
}

void FadeMain() {
	DISP_SQAR dsq;
	SQAR_DAT fade_bg;
	
  undefined *puVar1;
  uint uVar2;
  ulong *puVar3;
  uchar *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  DISP_SQAR dsq;
  SQAR_DAT fade_bg;
  
  fade_bg.w = 0x280;
  fade_bg.h = 0x1c0;
  uVar5._0_4_ = 0;
  uVar5._4_4_ = 0;
  uVar6 = (ulong)CONCAT13(fade_ctrl.alpha,CONCAT12(fade_ctrl.b,CONCAT11(fade_ctrl.g,fade_ctrl.r)))
          << 0x20;
  puVar1 = (undefined *)((int)&fade_bg.h + 3);
  uVar2 = (uint)puVar1 & 7;
  puVar3 = (ulong *)(puVar1 + -uVar2);
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | 0x1c000000280U >> (7 - uVar2) * 8;
  puVar1 = (undefined *)((int)&fade_bg.y + 3);
  uVar2 = (uint)puVar1 & 7;
  puVar3 = (ulong *)(puVar1 + -uVar2);
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | 0UL >> (7 - uVar2) * 8;
  uVar2 = (uint)&fade_bg.alpha & 7;
  puVar4 = &fade_bg.alpha + -uVar2;
  *(ulong *)puVar4 = *(ulong *)puVar4 & -1L << (uVar2 + 1) * 8 | uVar6 >> (7 - uVar2) * 8;
  fade_bg._8_8_ = uVar5;
  fade_bg._16_8_ = uVar6;
  CopySqrDToSqr__FP9DISP_SQARP8SQAR_DAT(&dsq,&fade_bg);
  switch(fade_ctrl.fade_state) {
  case '\0':
  case '\x06':
  case '\a':
    break;
  case '\x01':
    fade_ctrl.alpha = fade_ctrl.alpha - fade_ctrl.change_alp;
    if ((int)((uint)fade_ctrl.alpha - (uint)fade_ctrl.change_alp) < 1) {
      fade_ctrl.fade_state = '\0';
      fade_ctrl.alpha = '\0';
    }
    break;
  case '\x02':
  case '\x04':
  case '\x05':
  default:
    printf("ERROR!! FadeMain()\n");
    break;
  case '\x03':
    fade_ctrl.alpha = fade_ctrl.alpha + fade_ctrl.change_alp;
    if ((int)((uint)fade_ctrl.alpha << 0x18) < 0) {
      fade_ctrl.fade_state = '\0';
      fade_ctrl.alpha = 0x80;
    }
  }
  if (fade_ctrl.alpha != '\0') {
    DispSqrD__FP9DISP_SQAR(&dsq);
  }
  return;
}

int GetFadeState() {
  return (int)(fade_ctrl.fade_state == '\0');
}

void FadeInReq(u_char r, u_char g, u_char b, u_int fade_in_time) {
  fade_ctrl.alpha = 0x80;
  fade_ctrl.r = r;
  fade_ctrl.g = g;
  fade_ctrl.b = b;
  fade_ctrl.fade_state = '\x01';
  if (fade_in_time == 0) {
    fade_ctrl.alpha = '\0';
    fade_ctrl.fade_state = '\0';
    fade_ctrl.change_alp = '\0';
    return;
  }
  if (0x80 < fade_in_time) {
    fade_ctrl.change_alp = '\x01';
    return;
  }
  if (fade_in_time == 0) {
    trap(7);
  }
  fade_ctrl.change_alp = (uchar)(0x80 / (int)fade_in_time);
  return;
}

void FadeOutReq(u_char r, u_char g, u_char b, u_int fade_out_time) {
  fade_ctrl.fade_state = '\x03';
  fade_ctrl.r = r;
  fade_ctrl.g = g;
  fade_ctrl.b = b;
  fade_ctrl.alpha = '\0';
  if (fade_out_time == 0) {
    fade_ctrl.fade_state = '\0';
    fade_ctrl.change_alp = '\0';
    fade_ctrl.alpha = 0x80;
    return;
  }
  if (0x80 < fade_out_time) {
    fade_ctrl.change_alp = '\x01';
    return;
  }
  if (fade_out_time == 0) {
    trap(7);
  }
  fade_ctrl.change_alp = (uchar)(0x80 / (int)fade_out_time);
  fade_ctrl.alpha = (uchar)(0x80 % (int)fade_out_time);
  return;
}
