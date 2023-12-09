// STATUS: NOT STARTED

#include "newgame.h"

typedef struct {
	char mode;
	char cursor;
	short int wait_timer;
} NEW_GAME_CTRL;

static NEW_GAME_CTRL new_game_ctrl;

static void _fixed_array_assert(char *strType, size_t v0, size_t v1) {
	static char *str = 0x3c2088;
	
  g3ddbgAssert__FbPCce(false,str_849);
  return;
}

static void** void * * _fixed_array_verifyrange<void *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_assert__FPCcUiUi(s_void__003f35a0,_max,v);
  }
  return (void **)0x0;
}

static char** char * * _fixed_array_verifyrange<char *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_assert__FPCcUiUi(s_char__003f35a8,_max,v);
  }
  return (char **)0x0;
}

static unsigned int** unsigned int * * _fixed_array_verifyrange<unsigned int *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_assert__FPCcUiUi("unsigned int*",_max,v);
  }
  return (uint **)0x0;
}

void NewGameCtrlInit() {
  new_game_ctrl.cursor = '\x01';
  new_game_ctrl.mode = '\0';
  new_game_ctrl.wait_timer = 0;
  return;
}

void NewGameMain() {
	static char __FUNCTION__[12] = {
		/* [0] = */ 78,
		/* [1] = */ 101,
		/* [2] = */ 119,
		/* [3] = */ 71,
		/* [4] = */ 97,
		/* [5] = */ 109,
		/* [6] = */ 101,
		/* [7] = */ 77,
		/* [8] = */ 97,
		/* [9] = */ 105,
		/* [10] = */ 110,
		/* [11] = */ 0
	};
	
  int iVar1;
  
  if (new_game_ctrl.mode != '\0') {
    if (((new_game_ctrl.mode == '\x01') &&
        (new_game_ctrl.wait_timer = new_game_ctrl.wait_timer + 1,
        0x1d < (short)new_game_ctrl.wait_timer)) && (iVar1 = LoadingTexLoadWait__Fv(), iVar1 != 0))
    {
      iVar1 = GetTitleSoundID__Fv();
      iVar1 = SndBufIsPlaying(iVar1);
      if (iVar1 == 0) {
        if (new_game_ctrl.cursor == '\0') {
          InitCostume__Fv();
          MissionSelTblInit__Fv();
          IngameWrkInit__Fii(0,0);
        }
        else if (new_game_ctrl.cursor == '\x01') {
          InitCostume__Fv();
          MissionSelTblInit__Fv();
          IngameWrkInit__Fii(0,1);
        }
        else {
          SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
          PrintAssertReal("Error! NewGameMain");
        }
        SetTitleLoadFlg__Fc('\0');
        EventDataLoadReq__Fv();
        SetNextGPhase__F14GPHASE_ID_ENUM(GID_STORY_LOAD_MISSION);
      }
    }
    return;
  }
  NewGameDifficultySelPad__Fv();
  return;
}

static void NewGameDifficultySelPad() {
  int iVar1;
  
  if (((((pad[0].rpt & 0x8000U) == 0) && (iVar1 = GetPadAnalogRpt__Fi(2), iVar1 == 0)) &&
      ((pad[0].rpt & 0x2000U) == 0)) && (iVar1 = GetPadAnalogRpt__Fi(3), iVar1 == 0)) {
    if (**paddat == 1) {
      iVar1 = GetTitleSoundBankID__Fv();
      iVar1 = SndBankPlay(iVar1,0,0,0,0x3200,0x1000,0,(_SND_3D_SET *)0x0);
      SetTitleSoundID__Fi(iVar1);
      new_game_ctrl.mode = '\x01';
      new_game_ctrl.wait_timer = 0;
    }
    else if (*paddat[1] == 1) {
      SystemBankPlay__FiiiiP11_SND_3D_SETii(1,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
      SetNextGPhase__F14GPHASE_ID_ENUM(GID_TITLE_MENU);
    }
  }
  else {
    SystemBankPlay__FiiiiP11_SND_3D_SETii(0,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
    new_game_ctrl.cursor =
         (char)(new_game_ctrl.cursor + 1) + (char)((new_game_ctrl.cursor + 1) / 2) * -2;
  }
  return;
}

void NewGameDispMain() {
  uchar alpha;
  
  DispTitleZeroLogo__FiiUc(0,0,0x80);
  NewGameItemDisp__FiiUc(0,0,0x80);
  NewGameDifficultyDisp__FiiUc(0,0,0x80);
  NewGameCursorDisp__FiiUc(0,0,0x80);
  TitleCaptionDisp__FiiUc(0,0,0x80);
  if (new_game_ctrl.mode == '\x01') {
    alpha = NewGameBlackOutAnimCtrl__Fi((int)(short)new_game_ctrl.wait_timer);
    NewGameBlackBgDisp__FiiUc(0,0,alpha);
  }
  return;
}

static void NewGameItemDisp(int off_x, int off_y, u_char alpha) {
	DISP_SPRT ds;
	
  void *tm2_addr;
  DISP_SPRT ds;
  
  tm2_addr = GetTitleLogoTexAddr__Fv();
  PK2SendVram__FUiiii((uint)tm2_addr,-1,-1,0);
  CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&ds,title_top + 0x10);
  ds.alphar = 0x48;
  DispSprD__FP9DISP_SPRT(&ds);
  return;
}

static void NewGameDifficultyDisp(int off_x, int off_y, u_char alpha) {
	int i;
	DISP_SPRT dif_ds;
	static int dif_tex_tbl[2] = {
		/* [0] = */ 23,
		/* [1] = */ 24
	};
	
  byte bVar1;
  void *tm2_addr;
  int iVar2;
  long lVar3;
  int *piVar4;
  float fVar5;
  DISP_SPRT dif_ds;
  
  lVar3 = 0;
  piVar4 = &dif_tex_tbl_985;
  fVar5 = (float)off_x;
  tm2_addr = GetTitleLogoTexAddr__Fv();
  PK2SendVram__FUiiii((uint)tm2_addr,-1,-1,0);
  iVar2 = dif_tex_tbl_985;
  while( true ) {
    piVar4 = piVar4 + 1;
    CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&dif_ds,title_top + iVar2);
    dif_ds.x = dif_ds.x + fVar5;
    dif_ds.alphar = 0x48;
    dif_ds.y = dif_ds.y + (float)off_y;
    bVar1 = alpha >> 1;
    if (lVar3 == new_game_ctrl.cursor) {
      bVar1 = (uchar)((int)((uint)dif_ds.alpha * (uint)alpha) >> 7);
    }
    dif_ds.alpha = bVar1;
    lVar3 = (long)((int)lVar3 + 1);
    DispSprD__FP9DISP_SPRT(&dif_ds);
    if (1 < lVar3) break;
    iVar2 = *piVar4;
  }
  return;
}

static void NewGameCursorDisp(int off_x, int off_y, u_char alpha) {
  uchar uVar1;
  float y;
  int iVar2;
  
  uVar1 = GetLanguage__Fv();
  iVar2 = newgame_left_x_tbl[new_game_ctrl.cursor][(char)uVar1];
  y = DAT_003ee640;
  uVar1 = GetTitleAnimRGB__Fv();
  DispTitleCursorL__FffUcUc((float)iVar2,y,0x80,uVar1);
  uVar1 = GetLanguage__Fv();
  iVar2 = newgame_right_x_tbl[new_game_ctrl.cursor][(char)uVar1];
  uVar1 = GetTitleAnimRGB__Fv();
  DispTitleCursorR__FffUcUc((float)iVar2,y,0x80,uVar1);
  return;
}

static void NewGameBlackBgDisp(int off_x, int off_y, u_char alpha) {
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
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | DAT_003c2148 >> (7 - uVar2) * 8;
  black_bg._0_8_ = DAT_003c2148;
  puVar1 = (undefined *)((int)&black_bg.y + 3);
  uVar2 = (uint)puVar1 & 7;
  puVar3 = (ulong *)(puVar1 + -uVar2);
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | DAT_003c2150 >> (7 - uVar2) * 8;
  black_bg._8_8_ = DAT_003c2150;
  uVar2 = (uint)&black_bg.alpha & 7;
  puVar4 = &black_bg.alpha + -uVar2;
  *(ulong *)puVar4 = *(ulong *)puVar4 & -1L << (uVar2 + 1) * 8 | DAT_003c2158 >> (7 - uVar2) * 8;
  black_bg._16_8_ = DAT_003c2158;
  CopySqrDToSqr__FP9DISP_SQARP8SQAR_DAT(&dsq,&black_bg);
  dsq.alpha = alpha;
  DispSqrD__FP9DISP_SQAR(&dsq);
  return;
}

static u_char NewGameBlackOutAnimCtrl(int timer) {
	u_char alpha;
	static ALPHA_ANIM_TBL alpha_tbl[2] = {
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
	
  uchar uVar1;
  
  if (timer < 0x1e) {
    uVar1 = Anim2D_CalcNowAlpha__FPC14ALPHA_ANIM_TBLi((ALPHA_ANIM_TBL *)alpha_tbl_995,timer);
  }
  else {
    uVar1 = 0x80;
  }
  return uVar1;
}
