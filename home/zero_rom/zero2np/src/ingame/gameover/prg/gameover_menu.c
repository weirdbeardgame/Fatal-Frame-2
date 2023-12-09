// STATUS: NOT STARTED

#include "gameover_menu.h"

typedef struct {
	int stream_id;
	char step;
} GAMEOVER_MENU_CTRL;

typedef struct {
	int fade_timer;
	int bg_anim_timer;
	int moyou1_anim_timer;
	int moyou2_anim_timer;
} GAMEOVER_MENU_DISP;

static void *gameover_bg_tex_addr = NULL;
static GAMEOVER_MENU_CTRL gameover_menu_ctrl;
static GAMEOVER_MENU_DISP gameover_menu_disp;

static void _fixed_array_assert(char *strType, size_t v0, size_t v1) {
	static char *str = 0x3b3ca0;
	
  g3ddbgAssert__FbPCce(false,str_646);
  return;
}

static void** void * * _fixed_array_verifyrange<void *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_assert__FPCcUiUi(s_void__003f0f78,_max,v);
  }
  return (void **)0x0;
}

static char** char * * _fixed_array_verifyrange<char *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_assert__FPCcUiUi(s_char__003f0f80,_max,v);
  }
  return (char **)0x0;
}

static unsigned int** unsigned int * * _fixed_array_verifyrange<unsigned int *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_assert__FPCcUiUi("unsigned int*",_max,v);
  }
  return (uint **)0x0;
}

static void GameOverMenuInit() {
  GameOverMenuCtrlInit__Fv();
  GameOverMenuDispInit__Fv();
  return;
}

static void GameOverMenuCtrlInit() {
  gameover_menu_ctrl.step = '\0';
  return;
}

static void GameOverMenuTexBackGroundLoadReq() {
  if (gameover_bg_tex_addr != (void *)0x0) {
    LiberateGameOverMenuTexMem__FPPv(&gameover_bg_tex_addr);
  }
  GetGameOverMenuTexMem__FPPvi(&gameover_bg_tex_addr,0x1171);
  GameOverMenuTexLoadReq__FPvi(gameover_bg_tex_addr,0x1171);
  return;
}

void GetGameOverMenuTexMem(void **tex_addr, int data_label) {
  uint file_size;
  void *pvVar1;
  
  if (*tex_addr != (void *)0x0) {
    LiberateGameOverMenuTexMem__FPPv(tex_addr);
  }
  file_size = GetFileSize(data_label);
  pvVar1 = ol_loadGetHeap__Fi(file_size);
  *tex_addr = pvVar1;
  return;
}

void GameOverMenuTexLoadReq(void *tex_addr, int data_label) {
  FileLoadReqEE(data_label,tex_addr,2,(undefined1 *)0x0,(void *)0x0);
  return;
}

static int GameOverMenuTexLoadWait() {
  int iVar1;
  
  iVar1 = FileLoadIsEnd2(0x1171,gameover_bg_tex_addr);
  return (int)(iVar1 != 0);
}

static void GameOverMenuMain() {
	static char __FUNCTION__[17] = {
		/* [0] = */ 71,
		/* [1] = */ 97,
		/* [2] = */ 109,
		/* [3] = */ 101,
		/* [4] = */ 79,
		/* [5] = */ 118,
		/* [6] = */ 101,
		/* [7] = */ 114,
		/* [8] = */ 77,
		/* [9] = */ 101,
		/* [10] = */ 110,
		/* [11] = */ 117,
		/* [12] = */ 77,
		/* [13] = */ 97,
		/* [14] = */ 105,
		/* [15] = */ 110,
		/* [16] = */ 0
	};
	
  int iVar1;
  
  switch(gameover_menu_ctrl.step) {
  case '\0':
    gameover_menu_ctrl.step = '\x01';
    break;
  case '\x01':
    iVar1 = GameOverMenuTexLoadWait__Fv();
    if (iVar1 != 0) {
      gameover_menu_ctrl.step = '\x02';
    }
    break;
  case '\x02':
    if (0x1d < gameover_menu_disp.fade_timer) {
      gameover_menu_ctrl.step = '\x03';
    }
    break;
  case '\x03':
    break;
  case '\x04':
    if (0x1d < gameover_menu_disp.fade_timer) {
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

void GameOverMenuFadeOutReq() {
  gameover_menu_ctrl.step = '\x04';
  gameover_menu_disp.fade_timer = 0;
  StreamAutoFadeOut(gameover_menu_ctrl.stream_id,0x1e);
  return;
}

static void GameOverMenuMemFree() {
  LiberateGameOverMenuTexMem__FPPv(&gameover_bg_tex_addr);
  return;
}

void LiberateGameOverMenuTexMem(void **tex_addr) {
  if (*tex_addr != (void *)0x0) {
    ol_loadFreeHeap__FPv(*tex_addr);
    *tex_addr = (void *)0x0;
  }
  return;
}

static void GameOverMenuDispInit() {
  gameover_menu_disp.moyou2_anim_timer = 0;
  gameover_menu_disp.fade_timer = 0;
  gameover_menu_disp.bg_anim_timer = 0;
  gameover_menu_disp.moyou1_anim_timer = 0;
  return;
}

static void GameOverMenuDispMain() {
  if ('\x01' < gameover_menu_ctrl.step) {
    SavePoint_BgDisp__FPiN20Pv
              (&gameover_menu_disp.bg_anim_timer,&gameover_menu_disp.moyou1_anim_timer,
               &gameover_menu_disp.moyou2_anim_timer,gameover_bg_tex_addr);
  }
  return;
}

void init_GameOver_Menu() {
  GameOverMenuInit__Fv();
  GameOverMenuTexBackGroundLoadReq__Fv();
  GameOverMenuTopFirstInit__Fv();
  GameOverMenuTopBackGroundLoadReq__Fv();
  GetGameOverLoadTexMem__Fv();
  GameOverLoadDataLoadReq__Fv();
  AlbumBackGroundLoadReq__FPFi_PvPFPv_v(ol_loadGetHeap__Fi,ol_loadFreeHeap__FPv);
  gameover_menu_ctrl.stream_id = StreamAutoPlay(0x8bc,0x8bb,0x14,0,1,0x3200,0,(_SND_3D_SET *)0x0);
  return;
}

GPHASE_ENUM pre_GameOver_Menu(GPHASE_ENUM dummy) {
  GameOverMenuMain__Fv();
  GameOverMenuDispMain__Fv();
  return GPHASE_CONTINUE;
}

GPHASE_ENUM after_GameOver_Menu(GPHASE_ENUM result) {
  uchar uVar1;
  
  if (gameover_menu_ctrl.step == '\x02') {
    uVar1 = Zero2Anim2D_FadeOutAnimCtrl__FPis(&gameover_menu_disp.fade_timer,0x1e);
    SavePoint_BlackBgDisp__FUc(uVar1);
  }
  else if (gameover_menu_ctrl.step == '\x04') {
    uVar1 = Zero2Anim2D_FadeInAnimCtrl__FPis(&gameover_menu_disp.fade_timer,0x1e);
    SavePoint_BlackBgDisp__FUc(uVar1);
  }
  return GPHASE_CONTINUE;
}

void end_GameOver_Menu() {
  GameOverMenuMemFree__Fv();
  GameOverMenuTopMemFree__Fv();
  ReleaseGameOverLoadTexMem__Fv();
  AlbumEnd__Fv();
  StreamAutoAllStop();
  return;
}

void init_GameOver_Menu_Top() {
  GameOverMenuTopInit__Fv();
  return;
}

GPHASE_ENUM one_GameOver_Menu_Top(GPHASE_ENUM dummy) {
  if ('\x01' < gameover_menu_ctrl.step) {
    if (gameover_menu_ctrl.step < '\x04') {
      GameOverMenuTopMain__Fv();
    }
    GameOverMenuTopDisp__Fv();
  }
  return GPHASE_CONTINUE;
}

void end_GameOver_Menu_Top() {
  return;
}

void init_GameOver_Menu_Load() {
  GameOverLoadInit__Fv();
  return;
}

GPHASE_ENUM one_GameOver_Menu_Load(GPHASE_ENUM dummy) {
  GameOverLoadMain__Fv();
  GameOverLoadDispMain__Fv();
  return GPHASE_CONTINUE;
}

void end_GameOver_Menu_Load() {
  GameOverLoadEnd__Fv();
  return;
}

void init_GameOver_Menu_Album() {
  AlbumInit__Fi(0);
  return;
}

GPHASE_ENUM one_GameOver_Menu_Album(GPHASE_ENUM dummy) {
  int iVar1;
  
  iVar1 = AlbumMain__Fv();
  if (iVar1 != 0) {
    SetNextGPhase__F14GPHASE_ID_ENUM(GID_GAMEOVER_MENU_TOP);
  }
  AlbumDispMain__Fv();
  return GPHASE_CONTINUE;
}

void end_GameOver_Menu_Album() {
  return;
}
