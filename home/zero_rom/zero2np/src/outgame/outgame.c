// STATUS: NOT STARTED

#include "outgame.h"

static int mFlgOnce = 0;
unsigned char CVariable<char, 0, 9> type_info node[8];
unsigned char CVariable<char, 0, 3> type_info node[8];

static void _fixed_array_assert(char *strType, size_t v0, size_t v1) {
	static char *str = 0x3c2960;
	
  g3ddbgAssert__FbPCce(false,str_646);
  return;
}

static void** void * * _fixed_array_verifyrange<void *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_assert__FPCcUiUi(s_void__003f3698,_max,v);
  }
  return (void **)0x0;
}

static char** char * * _fixed_array_verifyrange<char *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_assert__FPCcUiUi(s_char__003f36a0,_max,v);
  }
  return (char **)0x0;
}

static unsigned int** unsigned int * * _fixed_array_verifyrange<unsigned int *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_assert__FPCcUiUi("unsigned int*",_max,v);
  }
  return (uint **)0x0;
}

void init_OutGame_Main() {
  StreamAutoAllStop();
  SndBufAllStopLoopSnd();
  SndSetEffect(0,0x2fff,3);
  FileLoadCancelAll();
  ReleaseLoadingTexMem__Fv();
  ol_loadHeapReset__FPvUi((void *)0x5a6c00,0x7a8000);
  TitleMovieInit__Fv();
  GetTecmoLogoTexMem__Fv();
  GetProjectLogoTexMem__Fv();
  TecmoLogoTexLoadReq__Fv();
  ProjectLogoTexLoadReq__Fv();
  TitleTexBackGroundLoadReq__Fv();
  GetLoadGameTexMem__Fv();
  LoadGameDataLoadReq__Fv();
  SetupBackGroundLoadReq__Fv();
  OptionBackGroundLoadReq__Fv();
  GalleryBackGroundLoadReq__Fv();
  GameDataSaveBackGroundLoadReq__FPFi_PvPFPv_v(ol_loadGetHeap__Fi,ol_loadFreeHeap__FPv);
  AlbumBackGroundLoadReq__FPFi_PvPFPv_v(ol_loadGetHeap__Fi,ol_loadFreeHeap__FPv);
  MenuCamMainBackGroundLoadReq__FPFi_PvPFPv_v(ol_loadGetHeap__Fi,ol_loadFreeHeap__FPv);
  SetTitleLoadFlg__Fc('\x01');
  BackGroundLoadReq__Fv();
  return;
}

GPHASE_ENUM pre_OutGame_Main(GPHASE_ENUM dummy) {
  return GPHASE_CONTINUE;
}

GPHASE_ENUM after_OutGame_Main(GPHASE_ENUM result) {
  return GPHASE_CONTINUE;
}

void end_OutGame_Main() {
  TitleMemFree__Fv();
  ReleaseLoadGameTexMem__Fv();
  SetupMemFree__Fv();
  OptionMemFree__Fv();
  GalleryMemFree__Fv();
  GameDataSaveTexMemFree__Fv();
  AlbumEnd__Fv();
  MenuCamMainMemFree__Fv();
  ReleaseTecmoLogoTexMem__Fv();
  ReleaseProjectLogoTexMem__Fv();
  return;
}

void init_UBI_Mode() {
  StreamAutoAllStop();
  SndBufAllStopLoopSnd();
  SndSetEffect(0,0x2fff,3);
  FileLoadCancelAll();
  ReleaseLoadingTexMem__Fv();
  ol_loadHeapReset__FPvUi((void *)0x5a6c00,0x7a8000);
  SoftResetLock__Fv();
  InitMovieWithTitle__Fii(0x46,1);
  return;
}

GPHASE_ENUM one_UBI_Mode(GPHASE_ENUM dummy) {
  int iVar1;
  
  iVar1 = PlayMovieWithTitle__Fv();
  if (iVar1 != 0) {
    SetNextGPhase__F14GPHASE_ID_ENUM(GID_TECMO_MODE);
  }
  return GPHASE_CONTINUE;
}

void end_UBI_Mode() {
  EndMovieWithTitle__Fv();
  SoftResetUnlock__Fv();
  printf("UBI End\n");
  return;
}

void init_Tecmo_Mode() {
  InitLogoCtrl__Fv();
  SoftResetLock__Fv();
  return;
}

GPHASE_ENUM one_Tecmo_Mode(GPHASE_ENUM dummy) {
  int iVar1;
  
  iVar1 = LogoMain__Fiiii(0,0x1e,0x5a,0x1e);
  if (iVar1 != 0) {
    SetNextGPhase__F14GPHASE_ID_ENUM(GID_PROJECT_MODE);
  }
  if (**paddat == 1) {
    SetNextGPhase__F14GPHASE_ID_ENUM(GID_PROJECT_MODE);
  }
  return GPHASE_CONTINUE;
}

void end_Tecmo_Mode() {
  SoftResetUnlock__Fv();
  printf("tecmo_end\n");
  return;
}

void init_Project_Mode() {
  InitLogoCtrl__Fv();
  SoftResetLock__Fv();
  return;
}

GPHASE_ENUM one_Project_Mode(GPHASE_ENUM dummy) {
  int iVar1;
  
  iVar1 = LogoMain__Fiiii(1,0x1e,0x5a,0x1e);
  if (iVar1 != 0) {
    SetNextGPhase__F14GPHASE_ID_ENUM(GID_TITLE_TOP);
  }
  if (**paddat == 1) {
    SetNextGPhase__F14GPHASE_ID_ENUM(GID_TITLE_TOP);
  }
  return GPHASE_CONTINUE;
}

void end_Project_Mode() {
  SoftResetUnlock__Fv();
  return;
}

void BackGroundLoadReq() {
  GetLoadingTexMem__Fv();
  LoadingTexLoadReq__Fv();
  if (mFlgOnce == 0) {
    IngameLoadOnce__Fv();
    mFlgOnce = 1;
  }
  return;
}

static void IngameLoadOnce() {
  uchar uVar1;
  
  uVar1 = GetLanguage__Fv();
  LoadReq__FiUi((char)uVar1 + 0x1b,0x19368c0);
  LoadReq__FiUi(0x2a,0x1950ec0);
  uVar1 = GetLanguage__Fv();
  LoadReq__FiUi((char)uVar1 + 0x20,0x1973cc0);
  uVar1 = GetLanguage__Fv();
  LoadReq__FiUi((char)uVar1 + 0x25,0x19981c0);
  SetUp__12CNPlyrCamera(&m_plyr_camera);
  LoadReq__FiUi(0xe27,0x59ec00);
  return;
}
