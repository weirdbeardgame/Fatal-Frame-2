// STATUS: NOT STARTED

#include "savepoint_main.h"

typedef struct {
	int stream_id;
	char step;
} SAVEPOINT_MAIN_CTRL;

typedef struct {
	int fade_timer;
	int bg_anim_timer;
	int moyou1_anim_timer;
	int moyou2_anim_timer;
} SAVEPOINT_MAIN_DISP;

static void *savepoint_bg_tex_addr = NULL;
static SAVEPOINT_MAIN_CTRL savepoint_main_ctrl;
static SAVEPOINT_MAIN_DISP savepoint_main_disp;

static void _fixed_array_assert(char *strType, size_t v0, size_t v1) {
	static char *str = 0x3c4e40;
	
  g3ddbgAssert__FbPCce(false,str_849);
  return;
}

static void** void * * _fixed_array_verifyrange<void *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_assert__FPCcUiUi(s_void__003f3cd0,_max,v);
  }
  return (void **)0x0;
}

static char** char * * _fixed_array_verifyrange<char *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_assert__FPCcUiUi(s_char__003f3cd8,_max,v);
  }
  return (char **)0x0;
}

static unsigned int** unsigned int * * _fixed_array_verifyrange<unsigned int *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_assert__FPCcUiUi("unsigned int*",_max,v);
  }
  return (uint **)0x0;
}

static void SavePointMainInit() {
  SavePointMainCtrlInit__Fv();
  SavePointMainDispInit__Fv();
  return;
}

static void SavePointMainCtrlInit() {
  savepoint_main_ctrl.step = '\0';
  return;
}

void SavePointMainBackGroundLoadReq() {
  if (savepoint_bg_tex_addr != (void *)0x0) {
    LiberateSavePointMainTexMem__FPPv(&savepoint_bg_tex_addr);
  }
  GetSavePointMainTexMem__FPPvi(&savepoint_bg_tex_addr,0x1171);
  SavePointMainTexLoadReq__FPvi(savepoint_bg_tex_addr,0x1171);
  return;
}

void GetSavePointMainTexMem(void **tex_addr, int data_label) {
  uint size;
  void *pvVar1;
  
  if (*tex_addr != (void *)0x0) {
    LiberateSavePointMainTexMem__FPPv(tex_addr);
  }
  size = GetFileSize(data_label);
  pvVar1 = mem_utilGetMem__Fi(size);
  *tex_addr = pvVar1;
  return;
}

void SavePointMainTexLoadReq(void *tex_addr, int data_label) {
  FileLoadReqEE(data_label,tex_addr,2,(undefined1 *)0x0,(void *)0x0);
  return;
}

static int SavePointMainTexLoadWait() {
  int iVar1;
  
  iVar1 = FileLoadIsEnd2(0x1171,savepoint_bg_tex_addr);
  return (int)(iVar1 != 0);
}

static void SavePointMain() {
	static char __FUNCTION__[14] = {
		/* [0] = */ 83,
		/* [1] = */ 97,
		/* [2] = */ 118,
		/* [3] = */ 101,
		/* [4] = */ 80,
		/* [5] = */ 111,
		/* [6] = */ 105,
		/* [7] = */ 110,
		/* [8] = */ 116,
		/* [9] = */ 77,
		/* [10] = */ 97,
		/* [11] = */ 105,
		/* [12] = */ 110,
		/* [13] = */ 0
	};
	
  int iVar1;
  
  switch(savepoint_main_ctrl.step) {
  case '\0':
    savepoint_main_ctrl.step = '\x01';
    break;
  case '\x01':
    iVar1 = SavePointMainTexLoadWait__Fv();
    if (iVar1 != 0) {
      savepoint_main_ctrl.step = '\x02';
    }
    break;
  case '\x02':
    if (0x1d < savepoint_main_disp.fade_timer) {
      savepoint_main_ctrl.step = '\x03';
    }
    break;
  case '\x03':
    break;
  case '\x04':
    if (0x1d < savepoint_main_disp.fade_timer) {
      SetNextGPhase__F14GPHASE_ID_ENUM(GID_SAVEPOINT_FADEOUT);
      return;
    }
    break;
  default:
    SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
    PrintAssertReal("Error! %s");
  }
  return;
}

void SavePointMainFadeOutReq() {
  savepoint_main_ctrl.step = '\x04';
  savepoint_main_disp.fade_timer = 0;
  StreamAutoFadeOut(savepoint_main_ctrl.stream_id,0x1e);
  return;
}

void SavePointMainMemFree() {
  LiberateSavePointMainTexMem__FPPv(&savepoint_bg_tex_addr);
  return;
}

void LiberateSavePointMainTexMem(void **tex_addr) {
  if (*tex_addr != (void *)0x0) {
    mem_utilFreeMem__FPv(*tex_addr);
    *tex_addr = (void *)0x0;
  }
  return;
}

static void SavePointMainDispInit() {
  savepoint_main_disp.moyou2_anim_timer = 0;
  savepoint_main_disp.fade_timer = 0;
  savepoint_main_disp.bg_anim_timer = 0;
  savepoint_main_disp.moyou1_anim_timer = 0;
  return;
}

static void SavePointMainDisp() {
  if ('\x01' < savepoint_main_ctrl.step) {
    SavePoint_BgDisp__FPiN20Pv
              (&savepoint_main_disp.bg_anim_timer,&savepoint_main_disp.moyou1_anim_timer,
               &savepoint_main_disp.moyou2_anim_timer,savepoint_bg_tex_addr);
  }
  return;
}

void init_SavePoint_Main() {
  IngameLoopSEPause__Fv();
  SisterUnlock__Fv();
  SavePointMainInit__Fv();
  SavePointTopFirstInit__Fv();
  StreamAutoSetExclusiveMode(1,0x1e);
  savepoint_main_ctrl.stream_id = StreamAutoPlay(0x8bc,0x8bb,0x14,0,1,0x3200,0,(_SND_3D_SET *)0x0);
  return;
}

GPHASE_ENUM pre_SavePoint_Main(GPHASE_ENUM dummy) {
  SavePointMain__Fv();
  SavePointMainDisp__Fv();
  return GPHASE_CONTINUE;
}

GPHASE_ENUM after_SavePoint_Main(GPHASE_ENUM result) {
  uchar uVar1;
  
  if (savepoint_main_ctrl.step == '\x02') {
    uVar1 = Zero2Anim2D_FadeOutAnimCtrl__FPis(&savepoint_main_disp.fade_timer,0x1e);
    SavePoint_BlackBgDisp__FUc(uVar1);
  }
  else if (savepoint_main_ctrl.step == '\x04') {
    uVar1 = Zero2Anim2D_FadeInAnimCtrl__FPis(&savepoint_main_disp.fade_timer,0x1e);
    SavePoint_BlackBgDisp__FUc(uVar1);
  }
  return GPHASE_CONTINUE;
}

void end_SavePoint_Main() {
  StreamAutoSetExclusiveMode(0,4);
  IngameLoopSERestart__Fv();
  return;
}

void init_SavePoint_Top() {
  SavePointTopInit__Fv();
  return;
}

GPHASE_ENUM one_SavePoint_Top(GPHASE_ENUM dummy) {
  if ('\x01' < savepoint_main_ctrl.step) {
    if (savepoint_main_ctrl.step < '\x04') {
      SavePointTopMain__Fv();
    }
    SavePointTopDisp__Fv();
  }
  return GPHASE_CONTINUE;
}

void end_SavePoint_Top() {
  return;
}

void init_SavePoint_Save() {
  GameDataSaveInit__Fc('\0');
  return;
}

GPHASE_ENUM one_SavePoint_Save(GPHASE_ENUM dummy) {
  int iVar1;
  
  iVar1 = GameDataSaveMain__Fv();
  if (iVar1 == 0) {
    GameDataSaveDispMain__Fv();
  }
  else {
    SetNextGPhase__F14GPHASE_ID_ENUM(GID_SAVEPOINT_TOP);
  }
  return GPHASE_CONTINUE;
}

void end_SavePoint_Save() {
  GameDataSaveEnd__Fv();
  return;
}

void init_SavePoint_Album() {
  AlbumInit__Fi(0);
  return;
}

GPHASE_ENUM one_SavePoint_Album(GPHASE_ENUM dummy) {
  int iVar1;
  
  iVar1 = AlbumMain__Fv();
  if (iVar1 != 0) {
    SetNextGPhase__F14GPHASE_ID_ENUM(GID_SAVEPOINT_TOP);
  }
  AlbumDispMain__Fv();
  return GPHASE_CONTINUE;
}

void end_SavePoint_Album() {
  return;
}
