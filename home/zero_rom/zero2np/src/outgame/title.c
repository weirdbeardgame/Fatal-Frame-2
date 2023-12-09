// STATUS: NOT STARTED

#include "title.h"

typedef struct {
	u_char title_step;
	u_char wait_timer;
	int stream_id;
	int snd_id;
	int snd_bank_id;
	int iOriginSndBankLoadPriority;
} TITLE_WRK;

typedef struct {
	u_char rgb;
	char start_timer;
	int timer;
} TITLE_DISP_CTRL;

static void *title_bg_addr = NULL;
static void *title_logo_addr = NULL;
static void *outgame_cmn_tex_addr = NULL;
static u_char title_bg_send_lock = 0;
static u_char title_move_movie_timer = 0;
static TITLE_WRK title_wrk;
static TITLE_DISP_CTRL title_disp_ctrl;
static char title_load_end;

static void _fixed_array_assert(char *strType, size_t v0, size_t v1) {
	static char *str = 0x3e66e0;
	
  g3ddbgAssert__FbPCce(false,str_646);
  return;
}

static void** void * * _fixed_array_verifyrange<void *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_assert__FPCcUiUi(s_void__003f4738,_max,v);
  }
  return (void **)0x0;
}

static char** char * * _fixed_array_verifyrange<char *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_assert__FPCcUiUi(s_char__003f4740,_max,v);
  }
  return (char **)0x0;
}

static unsigned int** unsigned int * * _fixed_array_verifyrange<unsigned int *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_assert__FPCcUiUi("unsigned int*",_max,v);
  }
  return (uint **)0x0;
}

void TitleInit() {
  title_bg_addr = (void *)0x0;
  title_logo_addr = (void *)0x0;
  outgame_cmn_tex_addr = (void *)0x0;
  title_load_end = '\0';
  title_bg_send_lock = '\0';
  return;
}

static void TitleWrkInit() {
  title_wrk.title_step = title_load_end != '\0';
  title_wrk.stream_id = -1;
  title_wrk.snd_id = 0;
  title_wrk.snd_bank_id = 0;
  title_wrk.wait_timer = '\0';
  title_wrk.iOriginSndBankLoadPriority = SndBankGetLoadPriority();
  return;
}

void TitleTexBackGroundLoadReq() {
  uchar uVar1;
  
  if (title_bg_addr != (void *)0x0) {
    LiberateTitleTexMem__FPPv(&title_bg_addr);
  }
  if (title_logo_addr != (void *)0x0) {
    LiberateTitleTexMem__FPPv(&title_logo_addr);
  }
  if (outgame_cmn_tex_addr != (void *)0x0) {
    LiberateTitleTexMem__FPPv(&outgame_cmn_tex_addr);
  }
  GetTitleTexMem__FPPvi(&title_bg_addr,0xd3d);
  uVar1 = GetLanguage__Fv();
  GetTitleTexMem__FPPvi(&title_logo_addr,(char)uVar1 + 0xd3e);
  GetTitleTexMem__FPPvi(&outgame_cmn_tex_addr,0x13);
  TitleTexLoadReq__FPvi(title_bg_addr,0xd3d);
  uVar1 = GetLanguage__Fv();
  TitleTexLoadReq__FPvi(title_logo_addr,(char)uVar1 + 0xd3e);
  TitleTexLoadReq__FPvi(outgame_cmn_tex_addr,0x13);
  SetTitleLoadFlg__Fc('\x01');
  return;
}

void GetTitleTexMem(void **tex_addr, int data_label) {
  uint file_size;
  void *pvVar1;
  
  if (*tex_addr != (void *)0x0) {
    LiberateTitleTexMem__FPPv(tex_addr);
  }
  file_size = GetFileSize(data_label);
  pvVar1 = ol_loadGetHeap__Fi(file_size);
  *tex_addr = pvVar1;
  return;
}

void TitleTexLoadReq(void *tex_addr, int data_label) {
  FileLoadReqEE(data_label,tex_addr,5,(undefined1 *)0x0,(void *)0x0);
  return;
}

static int TitleLoadWait() {
	int res;
	
  uchar uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar2 = FileLoadIsEnd2(0xd3d,title_bg_addr);
  if (iVar2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = GetLanguage__Fv();
    iVar2 = FileLoadIsEnd2((char)uVar1 + 0xd3e,title_logo_addr);
    if ((iVar2 != 0) && (iVar2 = FileLoadIsEnd2(0x13,outgame_cmn_tex_addr), iVar2 != 0)) {
      iVar2 = SndBankIsReady(title_wrk.snd_bank_id);
      if (iVar2 == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = 1;
        SndBankSetLoadPriority(title_wrk.iOriginSndBankLoadPriority);
      }
    }
  }
  return iVar3;
}

static int TitleMain() {
  int iVar1;
  
  if (title_wrk.title_step == '\0') {
    TitleMemFree__Fv();
    TitleTexBackGroundLoadReq__Fv();
    ReleaseLoadGameTexMem__Fv();
    GetLoadGameTexMem__Fv();
    LoadGameDataLoadReq__Fv();
    SetupBackGroundLoadReq__Fv();
    OptionBackGroundLoadReq__Fv();
    GalleryBackGroundLoadReq__Fv();
    GameDataSaveTexMemFree__Fv();
    AlbumEnd__Fv();
    MenuCamMainMemFree__Fv();
    GameDataSaveBackGroundLoadReq__FPFi_PvPFPv_v(ol_loadGetHeap__Fi,ol_loadFreeHeap__FPv);
    AlbumBackGroundLoadReq__FPFi_PvPFPv_v(ol_loadGetHeap__Fi,ol_loadFreeHeap__FPv);
    MenuCamMainBackGroundLoadReq__FPFi_PvPFPv_v(ol_loadGetHeap__Fi,ol_loadFreeHeap__FPv);
    BackGroundLoadReq__Fv();
    title_wrk.title_step = '\x01';
  }
  if (((title_wrk.title_step == '\x01') && (iVar1 = TitleLoadWait__Fv(), iVar1 != 0)) &&
     (iVar1 = LoadGameDataLoadWait__Fv(), iVar1 != 0)) {
    title_wrk.title_step = '\x02';
  }
  return 1;
}

void SetTitleStreamID(int stream_id) {
  title_wrk.stream_id = stream_id;
  return;
}

void SetTitleSoundID(int sound_id) {
  title_wrk.snd_id = sound_id;
  return;
}

void SetTitleLoadFlg(char flg) {
  title_load_end = flg;
  return;
}

void SetTitleBgSendLock(u_char flg) {
  title_bg_send_lock = flg;
  return;
}

void* GetTitleBgTexAddr() {
  return title_bg_addr;
}

void* GetTitleLogoTexAddr() {
  return title_logo_addr;
}

int GetTitleStreamID() {
  return title_wrk.stream_id;
}

int GetTitleSoundBankID() {
  return title_wrk.snd_bank_id;
}

int GetTitleSoundID() {
  return title_wrk.snd_id;
}

u_char GetTitleAnimRGB() {
  return title_disp_ctrl.rgb;
}

void* GetOutGameCmnTexAddr() {
  return outgame_cmn_tex_addr;
}

void TitleEndReq() {
  title_wrk.title_step = '\x03';
  title_wrk.wait_timer = '\0';
  return;
}

void TitleMemFree() {
  uchar uVar1;
  
  TitleTexLoadCancel__FPvi(title_bg_addr,0xd3d);
  uVar1 = GetLanguage__Fv();
  TitleTexLoadCancel__FPvi(title_logo_addr,(char)uVar1 + 0xd3e);
  TitleTexLoadCancel__FPvi(outgame_cmn_tex_addr,0x13);
  LiberateTitleTexMem__FPPv(&title_bg_addr);
  LiberateTitleTexMem__FPPv(&title_logo_addr);
  LiberateTitleTexMem__FPPv(&outgame_cmn_tex_addr);
  return;
}

void LiberateTitleTexMem(void **tex_addr) {
  if (*tex_addr != (void *)0x0) {
    ol_loadFreeHeap__FPv(*tex_addr);
    *tex_addr = (void *)0x0;
  }
  return;
}

static void TitleTexLoadCancel(void *tex_addr, int data_label) {
  int iVar1;
  
  if ((tex_addr != (void *)0x0) && (iVar1 = FileLoadIsEnd2(data_label,tex_addr), iVar1 == 0)) {
    FileLoadCancel2(data_label,tex_addr,(undefined1 *)0x0,(void *)0x0);
  }
  return;
}

static void TitleDispCtrlInit() {
  title_disp_ctrl.rgb = '@';
  title_disp_ctrl.timer = 0;
  title_disp_ctrl.start_timer = '\0';
  return;
}

void init_Title_Mode() {
  TitleWrkInit__Fv();
  TitleDispCtrlInit__Fv();
  TitleMenuCtrlInit__Fv();
  title_wrk.stream_id = StreamAutoPlay(0x8be,0x8bd,0xc,0,0,0x3200,0,(_SND_3D_SET *)0x0);
  SndBankSetLoadPriority(5);
  title_wrk.snd_bank_id = SndBankNew(0xc1d,0xc1c,-1);
  return;
}

GPHASE_ENUM pre_Title_Mode(GPHASE_ENUM dummy) {
  void *tex_addr;
  
  TitleMain__Fv();
  if (((byte)(title_wrk.title_step - 2) < 2) &&
     (Zero2Anim2D_CsrAnimCtrl__FPcPUc(&title_disp_ctrl.start_timer,&title_disp_ctrl.rgb),
     title_bg_send_lock == '\0')) {
    tex_addr = GetTitleBgTexAddr__Fv();
    DispTitleBack__FPiPv(&title_disp_ctrl.timer,tex_addr);
  }
  return GPHASE_CONTINUE;
}

GPHASE_ENUM after_Title_Mode(GPHASE_ENUM result) {
  return GPHASE_CONTINUE;
}

void end_Title_Mode() {
  StreamAutoFadeOut(title_wrk.stream_id,3);
  SndBankRelease(title_wrk.snd_bank_id);
  return;
}

void init_Title_Top() {
  UnlockMoveTitleMovie__Fv();
  return;
}

GPHASE_ENUM one_Title_Top(GPHASE_ENUM dummy) {
  int iVar1;
  
  if (title_wrk.title_step == '\x02') {
    TitleTopMain__Fv();
  }
  else if (title_wrk.title_step != '\x03') goto LAB_00269050;
  TitleTopDispMain__FiiUc(0,0,0x80);
LAB_00269050:
  iVar1 = CheckMoveTitleMovie__Fv();
  if (iVar1 != 0) {
    SetNextGPhase__F14GPHASE_ID_ENUM(GID_TITLE_MOVE_MOVIE);
  }
  if ((pad[0].one & 0x400U) != 0) {
    StreamAutoFadeOut(title_wrk.stream_id,0);
    SetNextGPhase__F14GPHASE_ID_ENUM(GID_TITLE_MOVE_MOVIE);
  }
  return GPHASE_CONTINUE;
}

void end_Title_Top() {
  return;
}

void init_Title_Menu() {
  LockMoveTitleMovie__Fv();
  return;
}

GPHASE_ENUM one_Title_Menu(GPHASE_ENUM dummy) {
  int iVar1;
  
  if (title_wrk.title_step == '\x02') {
    TitleMenuMain__Fv();
  }
  else if (title_wrk.title_step != '\x03') goto LAB_00269118;
  TitleMenuDispMain__FiiUc(0,0,0x80);
LAB_00269118:
  iVar1 = GetTitleStreamID__Fv();
  iVar1 = StreamAutoIsPlaying(iVar1);
  if (iVar1 == 0) {
    iVar1 = StreamAutoPlay(0x8be,0x8bd,0xc,0,0,0x3200,0,(_SND_3D_SET *)0x0);
    SetTitleStreamID__Fi(iVar1);
  }
  return GPHASE_CONTINUE;
}

void end_Title_Menu() {
  UnlockMoveTitleMovie__Fv();
  return;
}

void init_Title_NewGame() {
  LockMoveTitleMovie__Fv();
  NewGameCtrlInit__Fv();
  return;
}

GPHASE_ENUM one_Title_NewGame(GPHASE_ENUM dummy) {
  int iVar1;
  
  iVar1 = GetTitleStreamID__Fv();
  iVar1 = StreamAutoIsPlaying(iVar1);
  if (iVar1 == 0) {
    iVar1 = StreamAutoPlay(0x8be,0x8bd,0xc,0,0,0x3200,0,(_SND_3D_SET *)0x0);
    SetTitleStreamID__Fi(iVar1);
  }
  NewGameMain__Fv();
  NewGameDispMain__Fv();
  return GPHASE_CONTINUE;
}

void end_Title_NewGame() {
  UnlockMoveTitleMovie__Fv();
  return;
}

void init_Title_LoadGame() {
  LockMoveTitleMovie__Fv();
  LoadGameInit__Fv();
  return;
}

GPHASE_ENUM one_Title_LoadGame(GPHASE_ENUM dummy) {
  int iVar1;
  
  iVar1 = GetTitleStreamID__Fv();
  iVar1 = StreamAutoIsPlaying(iVar1);
  if (iVar1 == 0) {
    iVar1 = StreamAutoPlay(0x8be,0x8bd,0xc,0,0,0x3200,0,(_SND_3D_SET *)0x0);
    SetTitleStreamID__Fi(iVar1);
  }
  LoadGameMain__Fv();
  LoadGameDispMain__Fv();
  return GPHASE_CONTINUE;
}

void end_Title_LoadGame() {
  UnlockMoveTitleMovie__Fv();
  LoadGameEnd__Fv();
  return;
}

void init_Title_Setup() {
  int id;
  
  id = GetTitleStreamID__Fv();
  StreamAutoFadeOut(id,2);
  LockMoveTitleMovie__Fv();
  SetupInit__Fv();
  return;
}

GPHASE_ENUM pre_Title_Setup(GPHASE_ENUM dummy) {
  if (title_wrk.title_step == '\x02') {
    SetupMain__Fv();
    SetupDispMain__Fv();
  }
  return GPHASE_CONTINUE;
}

GPHASE_ENUM after_Title_Setup(GPHASE_ENUM result) {
  return GPHASE_CONTINUE;
}

void end_Title_Setup() {
  UnlockMoveTitleMovie__Fv();
  return;
}

void init_Title_Album() {
  int iVar1;
  
  iVar1 = GetTitleStreamID__Fv();
  StreamAutoFadeOut(iVar1,2);
  iVar1 = StreamAutoPlay(0x8bc,0x8bb,0xc,0,1,0x3200,0,(_SND_3D_SET *)0x0);
  SetTitleStreamID__Fi(iVar1);
  LockMoveTitleMovie__Fv();
  TitleAlbumInit__Fv();
  return;
}

GPHASE_ENUM one_Title_Album(GPHASE_ENUM dummy) {
  TitleAlbumMain__Fv();
  TitleAlbumDispMain__Fv();
  return GPHASE_CONTINUE;
}

void end_Title_Album() {
  int iVar1;
  
  iVar1 = GetTitleStreamID__Fv();
  StreamAutoFadeOut(iVar1,2);
  iVar1 = StreamAutoPlay(0x8be,0x8bd,0xc,0,0,0x3200,0,(_SND_3D_SET *)0x0);
  SetTitleStreamID__Fi(iVar1);
  UnlockMoveTitleMovie__Fv();
  return;
}

void init_Title_Gallery() {
  int iVar1;
  
  iVar1 = GetTitleStreamID__Fv();
  StreamAutoFadeOut(iVar1,2);
  iVar1 = StreamAutoPlay(0xa13,0xa12,0xc,0,1,0x3200,0,(_SND_3D_SET *)0x0);
  SetTitleStreamID__Fi(iVar1);
  LockMoveTitleMovie__Fv();
  GalleryInit__Fv();
  return;
}

GPHASE_ENUM one_Title_Gallery(GPHASE_ENUM dummy) {
  GalleryMain__Fv();
  return GPHASE_CONTINUE;
}

void end_Title_Gallery() {
  int iVar1;
  
  GalleryEnd__Fv();
  iVar1 = GetTitleStreamID__Fv();
  StreamAutoFadeOut(iVar1,2);
  iVar1 = StreamAutoPlay(0x8be,0x8bd,0xc,0,0,0x3200,0,(_SND_3D_SET *)0x0);
  SetTitleStreamID__Fi(iVar1);
  UnlockMoveTitleMovie__Fv();
  return;
}

void init_Title_Option() {
  LockMoveTitleMovie__Fv();
  OptionInit__Fi(0);
  return;
}

GPHASE_ENUM one_Title_Option(GPHASE_ENUM dummy) {
  int iVar1;
  
  iVar1 = GetTitleStreamID__Fv();
  iVar1 = StreamAutoIsPlaying(iVar1);
  if (iVar1 == 0) {
    iVar1 = StreamAutoPlay(0x8be,0x8bd,0xc,0,0,0x3200,0,(_SND_3D_SET *)0x0);
    SetTitleStreamID__Fi(iVar1);
  }
  OptionMain__Fv();
  return GPHASE_CONTINUE;
}

void end_Title_Option() {
  OptionEnd__Fv();
  UnlockMoveTitleMovie__Fv();
  return;
}

void init_Title_FrameRate_Sel() {
  LockMoveTitleMovie__Fv();
  return;
}

GPHASE_ENUM one_Title_FrameRate_Sel(GPHASE_ENUM dummy) {
  FrameRateSelMain__Fv();
  FrameRateSelDispMain__Fv();
  return GPHASE_CONTINUE;
}

void end_Title_FrameRate_Sel() {
  UnlockMoveTitleMovie__Fv();
  return;
}

void init_Title_Chapter_Sel() {
  ChapterSelCtrlInit__Fv();
  return;
}

GPHASE_ENUM one_Title_Chapter_Sel(GPHASE_ENUM dummy) {
  ChapterSelMain__Fv();
  ChapterSelDispMain__Fv();
  return GPHASE_CONTINUE;
}

void end_Title_Chapter_Sel() {
  return;
}

void init_Title_Move_Movie() {
  StreamAutoFadeOut(title_wrk.stream_id,3);
  title_move_movie_timer = '\0';
  return;
}

GPHASE_ENUM one_Title_Move_Movie(GPHASE_ENUM dummy) {
  title_move_movie_timer = title_move_movie_timer + '\x01';
  TitleTopDispMain__FiiUc(0,0,0x80);
  if (3 < title_move_movie_timer) {
    SetNextGPhase__F14GPHASE_ID_ENUM(GID_TITLE_MOVIE_MODE);
  }
  return GPHASE_CONTINUE;
}

void end_Title_Move_Movie() {
  return;
}
