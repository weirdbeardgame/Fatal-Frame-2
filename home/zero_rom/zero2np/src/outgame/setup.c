// STATUS: NOT STARTED

#include "setup.h"

typedef struct {
	char step;
	int stream_id;
} SETUP_CTRL;

typedef struct {
	char anim_step;
	char anim_timer;
} SETUP_DISP_CTRL;

static void *setup_bg_tex_addr = NULL;
static void *setup_font_tex_addr = NULL;
static void *mission_sel_tex_addr = NULL;
static SETUP_CTRL setup_ctrl;
static SETUP_DISP_CTRL setup_disp_ctrl;

static void _fixed_array_assert(char *strType, size_t v0, size_t v1) {
	static char *str = 0x3c6b30;
	
  g3ddbgAssert__FbPCce(false,str_646);
  return;
}

static void** void * * _fixed_array_verifyrange<void *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_assert__FPCcUiUi(s_void__003f4248,_max,v);
  }
  return (void **)0x0;
}

static char** char * * _fixed_array_verifyrange<char *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_assert__FPCcUiUi(s_char__003f4250,_max,v);
  }
  return (char **)0x0;
}

static unsigned int** unsigned int * * _fixed_array_verifyrange<unsigned int *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_assert__FPCcUiUi("unsigned int*",_max,v);
  }
  return (uint **)0x0;
}

void SetupInit() {
  setup_ctrl.step = '\0';
  return;
}

void SetupBackGroundLoadReq() {
  uchar uVar1;
  
  if (setup_bg_tex_addr != (void *)0x0) {
    LiberateSetupTexMem__FPPv(&setup_bg_tex_addr);
  }
  if (setup_font_tex_addr != (void *)0x0) {
    LiberateSetupTexMem__FPPv(&setup_font_tex_addr);
  }
  if (mission_sel_tex_addr != (void *)0x0) {
    LiberateSetupTexMem__FPPv(&mission_sel_tex_addr);
  }
  uVar1 = GetLanguage__Fv();
  GetSetupTexMem__FPPvi(&setup_bg_tex_addr,(char)uVar1 + 0x1106);
  uVar1 = GetLanguage__Fv();
  GetSetupTexMem__FPPvi(&setup_font_tex_addr,(char)uVar1 + 0x110b);
  uVar1 = GetLanguage__Fv();
  GetSetupTexMem__FPPvi(&mission_sel_tex_addr,(char)uVar1 + 0x111b);
  uVar1 = GetLanguage__Fv();
  SetupTexLoadReq__FPvi(setup_bg_tex_addr,(char)uVar1 + 0x1106);
  uVar1 = GetLanguage__Fv();
  SetupTexLoadReq__FPvi(setup_font_tex_addr,(char)uVar1 + 0x110b);
  uVar1 = GetLanguage__Fv();
  SetupTexLoadReq__FPvi(mission_sel_tex_addr,(char)uVar1 + 0x111b);
  return;
}

static void GetSetupTexMem(void **tex_addr, int data_label) {
  uint file_size;
  void *pvVar1;
  
  if (*tex_addr != (void *)0x0) {
    LiberateSetupTexMem__FPPv(tex_addr);
  }
  file_size = GetFileSize(data_label);
  pvVar1 = ol_loadGetHeap__Fi(file_size);
  *tex_addr = pvVar1;
  return;
}

static void SetupTexLoadReq(void *tex_addr, int data_label) {
  FileLoadReqEE(data_label,tex_addr,5,(undefined1 *)0x0,(void *)0x0);
  return;
}

static int SetupTexLoadWait() {
	int res;
	
  uchar uVar1;
  int iVar2;
  uint uVar3;
  
  uVar1 = GetLanguage__Fv();
  iVar2 = FileLoadIsEnd2((char)uVar1 + 0x1106,setup_bg_tex_addr);
  if (iVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar1 = GetLanguage__Fv();
    iVar2 = FileLoadIsEnd2((char)uVar1 + 0x110b,setup_font_tex_addr);
    uVar3 = (uint)(iVar2 != 0);
  }
  return uVar3;
}

void SetupMain() {
  int iVar1;
  
  if (setup_ctrl.step == '\0') {
    SetupDispInit__Fv();
    setup_ctrl.step = '\x01';
  }
  if ((setup_ctrl.step == '\x01') && (iVar1 = SetupTexLoadWait__Fv(), iVar1 != 0)) {
    setup_ctrl.step = '\x02';
  }
  if ((setup_ctrl.step == '\x03') && (setup_disp_ctrl.anim_step == '\x04')) {
    iVar1 = StreamAutoPlay(0x8be,0x8bd,0xc,0,0,0x3200,0,(_SND_3D_SET *)0x0);
    SetTitleStreamID__Fi(iVar1);
    SetNextGPhase__F14GPHASE_ID_ENUM(GID_TITLE_MENU);
  }
  return;
}

void SetupReturnTitleReq() {
  setup_disp_ctrl.anim_step = '\x03';
  setup_disp_ctrl.anim_timer = '\0';
  setup_ctrl.step = '\x03';
  return;
}

void* GetSetupBgPk2Addr() {
  return setup_bg_tex_addr;
}

void* GetSetupFontPk2Addr() {
  return setup_font_tex_addr;
}

void* GetSetupMsnslPk2Addr() {
  return mission_sel_tex_addr;
}

void SetupMemFree() {
  uchar uVar1;
  
  uVar1 = GetLanguage__Fv();
  SetupTexLoadCancel__FPvi(setup_bg_tex_addr,(char)uVar1 + 0x1106);
  uVar1 = GetLanguage__Fv();
  SetupTexLoadCancel__FPvi(setup_font_tex_addr,(char)uVar1 + 0x110b);
  uVar1 = GetLanguage__Fv();
  SetupTexLoadCancel__FPvi(mission_sel_tex_addr,(char)uVar1 + 0x111b);
  LiberateSetupTexMem__FPPv(&setup_bg_tex_addr);
  LiberateSetupTexMem__FPPv(&setup_font_tex_addr);
  LiberateSetupTexMem__FPPv(&mission_sel_tex_addr);
  return;
}

static void LiberateSetupTexMem(void **tex_addr) {
  if (*tex_addr != (void *)0x0) {
    ol_loadFreeHeap__FPv(*tex_addr);
    *tex_addr = (void *)0x0;
  }
  return;
}

static void SetupTexLoadCancel(void *tex_addr, int data_label) {
  int iVar1;
  
  if ((tex_addr != (void *)0x0) && (iVar1 = FileLoadIsEnd2(data_label,tex_addr), iVar1 == 0)) {
    FileLoadCancel2(data_label,tex_addr,(undefined1 *)0x0,(void *)0x0);
  }
  return;
}

static void SetupDispInit() {
  setup_disp_ctrl.anim_timer = '\0';
  setup_disp_ctrl.anim_step = '\0';
  return;
}

void SetupDispMain() {
  uchar alpha;
  
  if (((byte)setup_ctrl.step - 2 < 2) &&
     (alpha = Zero2Anim2D_InOutAnimCtrl__FPcT0ss
                        (&setup_disp_ctrl.anim_step,&setup_disp_ctrl.anim_timer,10,5),
     setup_disp_ctrl.anim_step != '\x04')) {
    SetupBgDisp__FiiUcPv(0,0,alpha,setup_bg_tex_addr);
  }
  return;
}

static void SetupBgDisp(int off_x, int off_y, u_char alpha, void *pk2_addr) {
	int i;
	DISP_SPRT bg_ds;
	
  int iVar1;
  SPRT_DAT *pSVar2;
  float fVar3;
  float fVar4;
  DISP_SPRT bg_ds;
  
  fVar4 = (float)off_x;
  iVar1 = 3;
  PK2SendVram__FUiiii((uint)pk2_addr,-1,-1,0);
  pSVar2 = setup_tex;
  do {
    CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&bg_ds,pSVar2);
    iVar1 = iVar1 + -1;
    pSVar2 = pSVar2 + 1;
    bg_ds.x = bg_ds.x + fVar4;
    bg_ds.y = bg_ds.y + (float)off_y;
    bg_ds.alpha = (uchar)((int)((uint)bg_ds.alpha * (uint)alpha) >> 7);
    DispSprD__FP9DISP_SPRT(&bg_ds);
  } while (-1 < iVar1);
  iVar1 = 1;
  pSVar2 = setup_tex + 4;
  do {
    CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&bg_ds,pSVar2);
    bg_ds.crx = bg_ds.x + fVar4;
    if ((int)bg_ds.w < 0) {
      fVar3 = (float)(bg_ds.w & 1 | bg_ds.w >> 1);
      fVar3 = fVar3 + fVar3;
    }
    else {
      fVar3 = (float)bg_ds.w;
    }
    bg_ds.cry = bg_ds.y + (float)off_y + fVar3;
    iVar1 = iVar1 + -1;
    bg_ds.rot = 270.0;
    bg_ds.alpha = (uchar)((int)((uint)bg_ds.alpha * (uint)alpha) >> 7);
    bg_ds.x = bg_ds.crx;
    bg_ds.y = bg_ds.cry;
    DispSprD__FP9DISP_SPRT(&bg_ds);
    pSVar2 = pSVar2 + 1;
  } while (-1 < iVar1);
  SetupBlackBgDisp__FiiUc(off_x,off_y,'&');
  return;
}

void SetupBlackBgDisp(int off_x, int off_y, u_char alpha) {
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
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | DAT_003c6b88 >> (7 - uVar2) * 8;
  black_bg._0_8_ = DAT_003c6b88;
  puVar1 = (undefined *)((int)&black_bg.y + 3);
  uVar2 = (uint)puVar1 & 7;
  puVar3 = (ulong *)(puVar1 + -uVar2);
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | DAT_003c6b90 >> (7 - uVar2) * 8;
  black_bg._8_8_ = DAT_003c6b90;
  uVar2 = (uint)&black_bg.alpha & 7;
  puVar4 = &black_bg.alpha + -uVar2;
  *(ulong *)puVar4 = *(ulong *)puVar4 & -1L << (uVar2 + 1) * 8 | _DAT_003c6b98 >> (7 - uVar2) * 8;
  black_bg._16_8_ = _DAT_003c6b98;
  CopySqrDToSqr__FP9DISP_SQARP8SQAR_DAT(&dsq,&black_bg);
  dsq.alpha = alpha;
  DispSqrD__FP9DISP_SQAR(&dsq);
  return;
}

void init_Title_SetupMenu() {
  SetupMenuInit__Fv();
  return;
}

GPHASE_ENUM one_Title_SetupMenu(GPHASE_ENUM dummy) {
  if ((byte)setup_ctrl.step - 2 < 2) {
    SetupMenuMain__Fv();
    SetupMenuDispMain__Fv();
  }
  return GPHASE_CONTINUE;
}

void end_Title_SetupMenu() {
  return;
}

void init_Title_Mission() {
  PlayMissionSelBGM__Fv();
  return;
}

GPHASE_ENUM pre_Title_Mission(GPHASE_ENUM dummy) {
  return GPHASE_CONTINUE;
}

GPHASE_ENUM after_Title_Mission(GPHASE_ENUM result) {
  return GPHASE_CONTINUE;
}

void end_Title_Mission() {
  return;
}

void init_Mission_Sel() {
  MissionSelInit__Fv();
  return;
}

GPHASE_ENUM one_Mission_Sel(GPHASE_ENUM dummy) {
  if ((byte)setup_ctrl.step - 2 < 2) {
    MissionSelMain__Fv();
    MissionSelDisp__Fv();
  }
  return GPHASE_CONTINUE;
}

void end_Mission_Sel() {
  MissionSelEnd__Fv();
  return;
}

void init_Mission_Cam() {
  MenuCamMainInit__Fc('\x01');
  return;
}

GPHASE_ENUM one_Mission_Cam(GPHASE_ENUM dummy) {
  int iVar1;
  
  iVar1 = MenuCamMain__Fv();
  if (iVar1 == 0) {
    MenuCamMainDisp__Fv();
  }
  else {
    SetNextGPhase__F14GPHASE_ID_ENUM(GID_MISSION_SEL);
  }
  return GPHASE_CONTINUE;
}

void end_Mission_Cam() {
  return;
}

void init_Mission_Album() {
  AlbumInit__Fi(0);
  return;
}

GPHASE_ENUM one_Mission_Album(GPHASE_ENUM dummy) {
  int iVar1;
  
  iVar1 = AlbumMain__Fv();
  if (iVar1 != 0) {
    SetNextGPhase__F14GPHASE_ID_ENUM(GID_MISSION_SEL);
  }
  AlbumDispMain__Fv();
  return GPHASE_CONTINUE;
}

void end_Mission_Album() {
  return;
}

void init_Mission_Save() {
  GameDataSaveInit__Fc('\x02');
  return;
}

GPHASE_ENUM one_Mission_Save(GPHASE_ENUM dummy) {
  int iVar1;
  
  iVar1 = GameDataSaveMain__Fv();
  if (iVar1 == 0) {
    GameDataSaveDispMain__Fv();
  }
  else {
    SetNextGPhase__F14GPHASE_ID_ENUM(GID_MISSION_SEL);
  }
  return GPHASE_CONTINUE;
}

void end_Mission_Save() {
  GameDataSaveEnd__Fv();
  return;
}
