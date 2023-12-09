// STATUS: NOT STARTED

#include "savepoint_fade_in.h"

typedef struct {
	char step;
	int fade_timer;
} SAVE_POINT_FADE_IN_CTRL;

static SAVE_POINT_FADE_IN_CTRL save_point_fade_ctrl;

static void _fixed_array_assert(char *strType, size_t v0, size_t v1) {
	static char *str = 0x3c4d78;
	
  g3ddbgAssert__FbPCce(false,str_849);
  return;
}

static void** void * * _fixed_array_verifyrange<void *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_assert__FPCcUiUi(s_void__003f3c88,_max,v);
  }
  return (void **)0x0;
}

static char** char * * _fixed_array_verifyrange<char *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_assert__FPCcUiUi(s_char__003f3c90,_max,v);
  }
  return (char **)0x0;
}

static unsigned int** unsigned int * * _fixed_array_verifyrange<unsigned int *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_assert__FPCcUiUi("unsigned int*",_max,v);
  }
  return (uint **)0x0;
}

void SavePointFadeInCtrlInit() {
  save_point_fade_ctrl.fade_timer = 0;
  save_point_fade_ctrl.step = '\0';
  return;
}

void SavePointFadeInMain() {
	static char __FUNCTION__[20] = {
		/* [0] = */ 83,
		/* [1] = */ 97,
		/* [2] = */ 118,
		/* [3] = */ 101,
		/* [4] = */ 80,
		/* [5] = */ 111,
		/* [6] = */ 105,
		/* [7] = */ 110,
		/* [8] = */ 116,
		/* [9] = */ 70,
		/* [10] = */ 97,
		/* [11] = */ 100,
		/* [12] = */ 101,
		/* [13] = */ 73,
		/* [14] = */ 110,
		/* [15] = */ 77,
		/* [16] = */ 97,
		/* [17] = */ 105,
		/* [18] = */ 110,
		/* [19] = */ 0
	};
	
  if (save_point_fade_ctrl.step == '\0') {
    SavePointFadeInMsgDispPad__Fv();
    return;
  }
  if (save_point_fade_ctrl.step == '\x01') {
    if (0x1d < save_point_fade_ctrl.fade_timer) {
      SetNextGPhase__F14GPHASE_ID_ENUM(GID_SAVEPOINT_TOP);
      return;
    }
  }
  else {
    SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
    PrintAssertReal("Error! %s");
  }
  return;
}

static void SavePointFadeInMsgDispPad() {
  if (*paddat[3] == 1) {
    SystemBankPlay__FiiiiP11_SND_3D_SETii(3,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
    save_point_fade_ctrl.fade_timer = 0;
    save_point_fade_ctrl.step = '\x01';
  }
  return;
}

void SavePointFadeInDispMain() {
  uchar alpha;
  
  SavePointFadeInMsgWinDisp__FiiUc(0,0,0x80);
  if (save_point_fade_ctrl.step == '\x01') {
    alpha = Zero2Anim2D_FadeInAnimCtrl__FPis(&save_point_fade_ctrl.fade_timer,0x1e);
    SavePoint_BlackBgDisp__FUc(alpha);
  }
  return;
}

static void SavePointFadeInMsgWinDisp(int off_x, int off_y, u_char alpha) {
	DISP_STR ds;
	MSG_WIN_DAT win_dat;
	
  DISP_STR ds;
  MSG_WIN_DAT win_dat;
  
  SetMsgDefData__FP8DISP_STRi(&ds,0x4b);
  SetMsgWinDefData__FP11MSG_WIN_DATi(&win_dat,0x4b);
  DrawCmnWindow__FUiffffUcUc(0,win_dat.x,win_dat.y,win_dat.w,win_dat.h,alpha,0x80);
  PrintMsg__Fiiiiiii(0x4b,6,ds.pos_x,ds.pos_y,1,(uint)alpha,0);
  return;
}
