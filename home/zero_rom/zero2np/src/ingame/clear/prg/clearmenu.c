// STATUS: NOT STARTED

#include "clearmenu.h"

typedef struct {
	char step;
	int stream_id;
} CLEAR_MENU_CTRL;

typedef struct {
	int fade_timer;
	int bg_anim_timer;
	int moyou1_anim_timer;
	int moyou2_anim_timer;
} CLEAR_MENU_DISP;

static void *clear_bg_tex_addr = NULL;
static CLEAR_MENU_CTRL clear_menu_ctrl;
static CLEAR_MENU_DISP clear_menu_disp;

static void _fixed_array_assert(char *strType, size_t v0, size_t v1) {
	static char *str = 0x3a33d0;
	
  g3ddbgAssert__FbPCce(false,str_849);
  return;
}

static void** void * * _fixed_array_verifyrange<void *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_assert__FPCcUiUi(s_void__003ef840,_max,v);
  }
  return (void **)0x0;
}

static char** char * * _fixed_array_verifyrange<char *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_assert__FPCcUiUi(s_char__003ef848,_max,v);
  }
  return (char **)0x0;
}

static unsigned int** unsigned int * * _fixed_array_verifyrange<unsigned int *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_assert__FPCcUiUi("unsigned int*",_max,v);
  }
  return (uint **)0x0;
}

static void ClearMenuInit() {
  ClearMenuCtrlInit__Fv();
  ClearMenuDispInit__Fv();
  return;
}

static void ClearMenuCtrlInit() {
  clear_menu_ctrl.step = '\0';
  return;
}

static void ClearMenuBackGroundLoadReq() {
  if (clear_bg_tex_addr != (void *)0x0) {
    LiberateClearMenuTexMem__FPPv(&clear_bg_tex_addr);
  }
  GetClearMenuTexMem__FPPvi(&clear_bg_tex_addr,0x1171);
  ClearMenuTexLoadReq__FPvi(clear_bg_tex_addr,0x1171);
  return;
}

void GetClearMenuTexMem(void **tex_addr, int data_label) {
  uint file_size;
  void *pvVar1;
  
  if (*tex_addr != (void *)0x0) {
    LiberateClearMenuTexMem__FPPv(tex_addr);
  }
  file_size = GetFileSize(data_label);
  pvVar1 = ol_loadGetHeap__Fi(file_size);
  *tex_addr = pvVar1;
  return;
}

void ClearMenuTexLoadReq(void *tex_addr, int data_label) {
  FileLoadReqEE(data_label,tex_addr,6,(undefined1 *)0x0,(void *)0x0);
  return;
}

static int ClearMenuTexLoadWait() {
  int iVar1;
  
  iVar1 = FileLoadIsEnd2(0x1171,clear_bg_tex_addr);
  return (int)(iVar1 != 0);
}

static void ClearMenuMain() {
	static char __FUNCTION__[14] = {
		/* [0] = */ 67,
		/* [1] = */ 108,
		/* [2] = */ 101,
		/* [3] = */ 97,
		/* [4] = */ 114,
		/* [5] = */ 77,
		/* [6] = */ 101,
		/* [7] = */ 110,
		/* [8] = */ 117,
		/* [9] = */ 77,
		/* [10] = */ 97,
		/* [11] = */ 105,
		/* [12] = */ 110,
		/* [13] = */ 0
	};
	
  int iVar1;
  
  switch(clear_menu_ctrl.step) {
  case '\0':
    clear_menu_ctrl.step = '\x01';
    break;
  case '\x01':
    iVar1 = ClearMenuTexLoadWait__Fv();
    if (iVar1 != 0) {
      clear_menu_ctrl.step = '\x02';
    }
    break;
  case '\x02':
    if (0x13 < clear_menu_disp.fade_timer) {
      clear_menu_ctrl.step = '\x03';
    }
    break;
  case '\x03':
    break;
  case '\x04':
    if (0x13 < clear_menu_disp.fade_timer) {
      SetNextGPhase__F14GPHASE_ID_ENUM(GID_TITLE_TOP);
      return;
    }
    break;
  default:
    SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
    PrintAssertReal("Error! %s");
  }
  return;
}

void ClearMenuFadeOutReq() {
  clear_menu_ctrl.step = '\x04';
  clear_menu_disp.fade_timer = 0;
  StreamAutoFadeOut(clear_menu_ctrl.stream_id,0x14);
  return;
}

void SetClearMenuStreamID(int stream_id) {
  clear_menu_ctrl.stream_id = stream_id;
  return;
}

static void ClearMenuMemFree() {
  LiberateClearMenuTexMem__FPPv(&clear_bg_tex_addr);
  return;
}

void LiberateClearMenuTexMem(void **tex_addr) {
  if (*tex_addr != (void *)0x0) {
    ol_loadFreeHeap__FPv(*tex_addr);
    *tex_addr = (void *)0x0;
  }
  return;
}

static void ClearMenuDispInit() {
  clear_menu_disp.moyou2_anim_timer = 0;
  clear_menu_disp.fade_timer = 0;
  clear_menu_disp.bg_anim_timer = 0;
  clear_menu_disp.moyou1_anim_timer = 0;
  return;
}

static void ClearMenuDisp() {
  if ('\x01' < clear_menu_ctrl.step) {
    SavePoint_BgDisp__FPiN20Pv
              (&clear_menu_disp.bg_anim_timer,&clear_menu_disp.moyou1_anim_timer,
               &clear_menu_disp.moyou2_anim_timer,clear_bg_tex_addr);
  }
  return;
}

static void ClearMenuFadeBlackBgDisp(int off_x, int off_y, u_char alpha) {
	DISP_SQAR dsq;
	SQAR_DAT black_bg;
	
  undefined *puVar1;
  uint uVar2;
  ulong *puVar3;
  uchar *puVar4;
  DISP_SQAR dsq;
  SQAR_DAT black_bg;
  
  puVar1 = (undefined *)((int)&black_bg.h + 3);
  uVar2 = (uint)puVar1 & 7;
  puVar3 = (ulong *)(puVar1 + -uVar2);
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | DAT_003a34a8 >> (7 - uVar2) * 8;
  black_bg._0_8_ = DAT_003a34a8;
  puVar1 = (undefined *)((int)&black_bg.y + 3);
  uVar2 = (uint)puVar1 & 7;
  puVar3 = (ulong *)(puVar1 + -uVar2);
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | DAT_003a34b0 >> (7 - uVar2) * 8;
  black_bg._8_8_ = DAT_003a34b0;
  uVar2 = (uint)&black_bg.alpha & 7;
  puVar4 = &black_bg.alpha + -uVar2;
  *(ulong *)puVar4 = *(ulong *)puVar4 & -1L << (uVar2 + 1) * 8 | DAT_003a34b8 >> (7 - uVar2) * 8;
  black_bg._16_8_ = DAT_003a34b8;
  CopySqrDToSqr__FP9DISP_SQARP8SQAR_DAT(&dsq,&black_bg);
  dsq.alpha = (uchar)((int)((uint)dsq.alpha * (uint)alpha) >> 7);
  DispSqrD__FP9DISP_SQAR(&dsq);
  return;
}

void init_ClearMenu() {
  ClearMenuInit__Fv();
  ClearMenuTopFirstInit__Fv();
  ClearMenuBackGroundLoadReq__Fv();
  ClearMenuTopBackGroundLoadReq__Fv();
  GameDataSaveBackGroundLoadReq__FPFi_PvPFPv_v(ol_loadGetHeap__Fi,ol_loadFreeHeap__FPv);
  AlbumBackGroundLoadReq__FPFi_PvPFPv_v(ol_loadGetHeap__Fi,ol_loadFreeHeap__FPv);
  return;
}

GPHASE_ENUM pre_ClearMenu(GPHASE_ENUM dummy) {
  ClearMenuMain__Fv();
  ClearMenuDisp__Fv();
  return GPHASE_CONTINUE;
}

GPHASE_ENUM after_ClearMenu(GPHASE_ENUM result) {
  uchar uVar1;
  
  if (clear_menu_ctrl.step == '\x02') {
    uVar1 = Zero2Anim2D_FadeOutAnimCtrl__FPis(&clear_menu_disp.fade_timer,0x14);
    ClearMenuFadeBlackBgDisp__FiiUc(0,0,uVar1);
  }
  else if (clear_menu_ctrl.step == '\x04') {
    uVar1 = Zero2Anim2D_FadeInAnimCtrl__FPis(&clear_menu_disp.fade_timer,0x14);
    ClearMenuFadeBlackBgDisp__FiiUc(0,0,uVar1);
  }
  return GPHASE_CONTINUE;
}

void end_ClearMenu() {
  ClearMenuMemFree__Fv();
  ClearMenuTopMemFree__Fv();
  GameDataSaveTexMemFree__Fv();
  AlbumEnd__Fv();
  return;
}

void init_ClearMenu_Top() {
  ClearMenuTopInit__Fv();
  return;
}

GPHASE_ENUM one_ClearMenu_Top(GPHASE_ENUM dummy) {
  if ('\x01' < clear_menu_ctrl.step) {
    if (clear_menu_ctrl.step < '\x04') {
      ClearMenuTopMain__Fv();
    }
    ClearMenuTopDisp__Fv();
  }
  return GPHASE_CONTINUE;
}

void end_ClearMenu_Top() {
  return;
}

void init_ClearMenu_Save() {
  GameDataSaveInit__Fc('\x01');
  return;
}

GPHASE_ENUM one_ClearMenu_Save(GPHASE_ENUM dummy) {
  int iVar1;
  
  iVar1 = GameDataSaveMain__Fv();
  if (iVar1 == 0) {
    GameDataSaveDispMain__Fv();
  }
  else {
    SetNextGPhase__F14GPHASE_ID_ENUM(GID_CLEARMENU_TOP);
  }
  return GPHASE_CONTINUE;
}

void end_ClearMenu_Save() {
  GameDataSaveEnd__Fv();
  return;
}

void init_ClearMenu_Album() {
  AlbumInit__Fi(0);
  return;
}

GPHASE_ENUM one_ClearMenu_Album(GPHASE_ENUM dummy) {
  int iVar1;
  
  iVar1 = AlbumMain__Fv();
  if (iVar1 != 0) {
    SetNextGPhase__F14GPHASE_ID_ENUM(GID_CLEARMENU_TOP);
  }
  AlbumDispMain__Fv();
  return GPHASE_CONTINUE;
}

void end_ClearMenu_Album() {
  return;
}
