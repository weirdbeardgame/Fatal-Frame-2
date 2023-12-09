// STATUS: NOT STARTED

#include "gameover.h"

typedef struct {
	short int fade_timer;
} GAMEOVER_FADE_CTRL;

static GAMEOVER_FADE_CTRL gameover_fade_ctrl;

static void _fixed_array_assert(char *strType, size_t v0, size_t v1) {
	static char *str = 0x3b3c18;
	
  g3ddbgAssert__FbPCce(false,str_849);
  return;
}

static void** void * * _fixed_array_verifyrange<void *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_assert__FPCcUiUi(s_void__003f0f60,_max,v);
  }
  return (void **)0x0;
}

static char** char * * _fixed_array_verifyrange<char *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_assert__FPCcUiUi(s_char__003f0f68,_max,v);
  }
  return (char **)0x0;
}

static unsigned int** unsigned int * * _fixed_array_verifyrange<unsigned int *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_assert__FPCcUiUi("unsigned int*",_max,v);
  }
  return (uint **)0x0;
}

static void GameOverFadeCtrlInit() {
  gameover_fade_ctrl.fade_timer = 0;
  return;
}

static void GameOverFadeMain() {
  gameover_fade_ctrl.fade_timer = gameover_fade_ctrl.fade_timer + 1;
  if (0x1d < (short)gameover_fade_ctrl.fade_timer) {
    SetNextGPhase__F14GPHASE_ID_ENUM(GID_STORY_GAMEOVER_MOVIE);
  }
  return;
}

static void GameOverFadeDispMain() {
  uchar alpha;
  
  alpha = GameOverFadeAnimCtrl__Fs(gameover_fade_ctrl.fade_timer);
  GameOverScreenBgDisp__FUcUcUcUcUi(alpha,'\0','\0','\0',0xa0);
  return;
}

static u_char GameOverFadeAnimCtrl(short int timer) {
	static ALPHA_ANIM_TBL fade_alpha_tbl[2] = {
		/* [0] = */ {
			/* .start_alpha = */ 0,
			/* .end_alpha = */ 128,
			/* .start_time = */ 0,
			/* .end_time = */ 30
		},
		/* [1] = */ {
			/* .start_alpha = */ -1,
			/* .end_alpha = */ -1,
			/* .start_time = */ -1,
			/* .end_time = */ -1
		}
	};
	u_char alpha;
	
  uchar uVar1;
  
  uVar1 = 0x80;
  if ((short)timer < 0x1e) {
    uVar1 = Anim2D_CalcNowAlpha__FPC14ALPHA_ANIM_TBLi
                      ((ALPHA_ANIM_TBL *)fade_alpha_tbl_988,(int)(short)timer);
  }
  return uVar1;
}

void GameOverScreenBgDisp(u_char alpha, u_char r, u_char g, u_char b, u_int pri) {
	DISP_SQAR dsq;
	SQAR_DAT gameover_bg;
	int i;
	
  undefined *puVar1;
  uint uVar2;
  ulong *puVar3;
  int iVar4;
  int iVar5;
  uchar *puVar6;
  DISP_SQAR dsq;
  SQAR_DAT gameover_bg;
  
  puVar1 = (undefined *)((int)&gameover_bg.h + 3);
  uVar2 = (uint)puVar1 & 7;
  puVar3 = (ulong *)(puVar1 + -uVar2);
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | DAT_003b3c80 >> (7 - uVar2) * 8;
  gameover_bg._0_8_ = DAT_003b3c80;
  puVar1 = (undefined *)((int)&gameover_bg.y + 3);
  uVar2 = (uint)puVar1 & 7;
  puVar3 = (ulong *)(puVar1 + -uVar2);
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | DAT_003b3c88 >> (7 - uVar2) * 8;
  gameover_bg._8_8_ = DAT_003b3c88;
  uVar2 = (uint)&gameover_bg.alpha & 7;
  puVar6 = &gameover_bg.alpha + -uVar2;
  *(ulong *)puVar6 = *(ulong *)puVar6 & -1L << (uVar2 + 1) * 8 | DAT_003b3c90 >> (7 - uVar2) * 8;
  gameover_bg._16_8_ = DAT_003b3c90;
  CopySqrDToSqr__FP9DISP_SQARP8SQAR_DAT(&dsq,&gameover_bg);
  puVar6 = dsq.r;
  iVar4 = 0;
  dsq.alpha = alpha;
  do {
    iVar5 = iVar4 + 1;
    *puVar6 = r;
    dsq.g[iVar4] = g;
    puVar6 = puVar6 + 1;
    dsq.b[iVar4] = b;
    iVar4 = iVar5;
  } while (iVar5 < 4);
  dsq.z = 0xfffff - (pri & 0xfffff);
  dsq.pri = pri;
  DispSqrD__FP9DISP_SQAR(&dsq);
  return;
}

void init_Story_GameOver_Eff() {
  return;
}

GPHASE_ENUM one_Story_GameOver_Eff(GPHASE_ENUM dummy) {
  int iVar1;
  
  PlayerMainCmn__Fi(1);
  SisterMain__Fv();
  AutoEnemyMain__Fv();
  map_bgmMain__Fv();
  iVar1 = GetPlyrAreaNo__Fv();
  MhCtlMain__Fi(iVar1);
  IngameCameraMain__Fv();
  PlayData_PlayTimeCount__Fv();
  EnemyMotionWork__Fv();
  sis_mdlMotionWork__Fv();
  iVar1 = GetPlyrAreaNo__Fv();
  MapFogProc__FiiPf(iVar1,(int)(short)plyr_wrk.cmn_wrk.floor,plyr_wrk.cmn_wrk.mbox.pos);
  gra3dDraw__Fv();
  InitEffectsEF__Fv();
  EffectControl__Fi(5);
  BrightnessAdjustmentFilterDraw__Fv();
  Graph2dMain__Fv();
  SetNextGPhase__F14GPHASE_ID_ENUM(GID_STORY_GAMEOVER_FADE);
  return GPHASE_CONTINUE;
}

void end_Story_GameOver_Eff() {
  return;
}

void init_Story_GameOver_Fade() {
  GameOverFadeCtrlInit__Fv();
  return;
}

GPHASE_ENUM one_Story_GameOver_Fade(GPHASE_ENUM dummy) {
  int iVar1;
  
  PlayerMainCmn__Fi(1);
  SisterMain__Fv();
  AutoEnemyMain__Fv();
  map_bgmMain__Fv();
  iVar1 = GetPlyrAreaNo__Fv();
  MhCtlMain__Fi(iVar1);
  IngameCameraMain__Fv();
  PlayData_PlayTimeCount__Fv();
  EnemyMotionWork__Fv();
  sis_mdlMotionWork__Fv();
  iVar1 = GetPlyrAreaNo__Fv();
  MapFogProc__FiiPf(iVar1,(int)(short)plyr_wrk.cmn_wrk.floor,plyr_wrk.cmn_wrk.mbox.pos);
  gra3dDraw__Fv();
  InitEffectsEF__Fv();
  EffectControl__Fi(5);
  BrightnessAdjustmentFilterDraw__Fv();
  Graph2dMain__Fv();
  GameOverFadeMain__Fv();
  GameOverFadeDispMain__Fv();
  return GPHASE_CONTINUE;
}

void end_Story_GameOver_Fade() {
  return;
}

void init_Story_GameOver_Movie() {
  StreamAutoAllStop();
  InitMovieWithTitle__Fii(0x45,1);
  return;
}

GPHASE_ENUM one_Story_GameOver_Movie(GPHASE_ENUM dummy) {
  int iVar1;
  
  iVar1 = PlayMovieWithTitle__Fv();
  if (iVar1 != 0) {
    SetNextGPhase__F14GPHASE_ID_ENUM(GID_GAMEOVER_MENU_TOP);
  }
  return GPHASE_CONTINUE;
}

void end_Story_GameOver_Movie() {
  EndMovieWithTitle__Fv();
  return;
}
