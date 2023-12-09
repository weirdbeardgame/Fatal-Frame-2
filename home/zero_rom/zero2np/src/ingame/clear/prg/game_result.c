// STATUS: NOT STARTED

#include "game_result.h"

typedef struct {
	int anim_timer;
	char step;
} GAME_RESULT_CTRL;

static void *clear_bg_tex_addr = NULL;
static void *clear_char_tex_addr = NULL;
static GAME_RESULT_CTRL game_result_ctrl;

static void _fixed_array_assert(char *strType, size_t v0, size_t v1) {
	static char *str = 0x3b38c0;
	
  g3ddbgAssert__FbPCce(false,str_849);
  return;
}

static void** void * * _fixed_array_verifyrange<void *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_assert__FPCcUiUi(s_void__003f0ec8,_max,v);
  }
  return (void **)0x0;
}

static char** char * * _fixed_array_verifyrange<char *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_assert__FPCcUiUi(s_char__003f0ed0,_max,v);
  }
  return (char **)0x0;
}

static unsigned int** unsigned int * * _fixed_array_verifyrange<unsigned int *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_assert__FPCcUiUi("unsigned int*",_max,v);
  }
  return (uint **)0x0;
}

static void GameResultInit() {
  GameResultCtrlInit__Fv();
  return;
}

static void GameResultCtrlInit() {
  game_result_ctrl.anim_timer = 0;
  game_result_ctrl.step = '\0';
  return;
}

static void GameResultBackGroundLoadReq() {
	static char __FUNCTION__[28] = {
		/* [0] = */ 71,
		/* [1] = */ 97,
		/* [2] = */ 109,
		/* [3] = */ 101,
		/* [4] = */ 82,
		/* [5] = */ 101,
		/* [6] = */ 115,
		/* [7] = */ 117,
		/* [8] = */ 108,
		/* [9] = */ 116,
		/* [10] = */ 66,
		/* [11] = */ 97,
		/* [12] = */ 99,
		/* [13] = */ 107,
		/* [14] = */ 71,
		/* [15] = */ 114,
		/* [16] = */ 111,
		/* [17] = */ 117,
		/* [18] = */ 110,
		/* [19] = */ 100,
		/* [20] = */ 76,
		/* [21] = */ 111,
		/* [22] = */ 97,
		/* [23] = */ 100,
		/* [24] = */ 82,
		/* [25] = */ 101,
		/* [26] = */ 113,
		/* [27] = */ 0
	};
	
  uchar uVar1;
  
  if (clear_bg_tex_addr != (void *)0x0) {
    LiberateGameResultTexMem__FPPv(&clear_bg_tex_addr);
  }
  if (clear_char_tex_addr != (void *)0x0) {
    LiberateGameResultTexMem__FPPv(&clear_char_tex_addr);
  }
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
  if (-1 < ingame_wrk.mDifficulty.mValue) {
    if (ingame_wrk.mDifficulty.mValue < '\x02') {
      GetGameResultTexMem__FPPvi(&clear_bg_tex_addr,0x1156);
      GameResultTexLoadReq__FPvi(clear_bg_tex_addr,0x1156);
      goto LAB_001aa8d4;
    }
    if (ingame_wrk.mDifficulty.mValue < '\x04') {
                    /* end of inlined section */
      GetGameResultTexMem__FPPvi(&clear_bg_tex_addr,0x1157);
      GameResultTexLoadReq__FPvi(clear_bg_tex_addr,0x1157);
      goto LAB_001aa8d4;
    }
  }
  SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
  PrintAssertReal("Error! %s");
LAB_001aa8d4:
  uVar1 = GetLanguage__Fv();
  GetGameResultTexMem__FPPvi(&clear_char_tex_addr,(char)uVar1 + 0x1158);
  uVar1 = GetLanguage__Fv();
  GameResultTexLoadReq__FPvi(clear_char_tex_addr,(char)uVar1 + 0x1158);
  return;
}

static void GetGameResultTexMem(void **tex_addr, int data_label) {
  uint file_size;
  void *pvVar1;
  
  if (*tex_addr != (void *)0x0) {
    LiberateGameResultTexMem__FPPv(tex_addr);
  }
  file_size = GetFileSize(data_label);
  pvVar1 = ol_loadGetHeap__Fi(file_size);
  *tex_addr = pvVar1;
  return;
}

static void GameResultTexLoadReq(void *tex_addr, int data_label) {
  FileLoadReqEE(data_label,tex_addr,6,(undefined1 *)0x0,(void *)0x0);
  return;
}

static int GameResultTexLoadWait() {
	static char __FUNCTION__[22] = {
		/* [0] = */ 71,
		/* [1] = */ 97,
		/* [2] = */ 109,
		/* [3] = */ 101,
		/* [4] = */ 82,
		/* [5] = */ 101,
		/* [6] = */ 115,
		/* [7] = */ 117,
		/* [8] = */ 108,
		/* [9] = */ 116,
		/* [10] = */ 84,
		/* [11] = */ 101,
		/* [12] = */ 120,
		/* [13] = */ 76,
		/* [14] = */ 111,
		/* [15] = */ 97,
		/* [16] = */ 100,
		/* [17] = */ 87,
		/* [18] = */ 97,
		/* [19] = */ 105,
		/* [20] = */ 116,
		/* [21] = */ 0
	};
	int res;
	
  uchar uVar1;
  int iVar2;
  
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
                    /* end of inlined section */
  iVar2 = 0;
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
  if (ingame_wrk.mDifficulty.mValue < '\0') {
LAB_001aaa0c:
    SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
    PrintAssertReal("Error! %s");
  }
  else {
    if (ingame_wrk.mDifficulty.mValue < '\x02') {
                    /* end of inlined section */
      iVar2 = 0x1156;
    }
    else {
      if ('\x03' < ingame_wrk.mDifficulty.mValue) goto LAB_001aaa0c;
      iVar2 = 0x1157;
    }
    iVar2 = FileLoadIsEnd2(iVar2,clear_bg_tex_addr);
    if (iVar2 == 0) {
      iVar2 = 0;
    }
    else {
      uVar1 = GetLanguage__Fv();
      iVar2 = FileLoadIsEnd2((char)uVar1 + 0x1158,clear_char_tex_addr);
      if (iVar2 == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = 1;
      }
    }
  }
  return iVar2;
}

static void GameResultMain() {
	static char __FUNCTION__[15] = {
		/* [0] = */ 71,
		/* [1] = */ 97,
		/* [2] = */ 109,
		/* [3] = */ 101,
		/* [4] = */ 82,
		/* [5] = */ 101,
		/* [6] = */ 115,
		/* [7] = */ 117,
		/* [8] = */ 108,
		/* [9] = */ 116,
		/* [10] = */ 77,
		/* [11] = */ 97,
		/* [12] = */ 105,
		/* [13] = */ 110,
		/* [14] = */ 0
	};
	
  int iVar1;
  
  switch(game_result_ctrl.step) {
  case '\0':
    game_result_ctrl.step = '\x01';
    break;
  case '\x01':
    iVar1 = GameResultTexLoadWait__Fv();
    if (iVar1 != 0) {
      game_result_ctrl.anim_timer = 0;
      game_result_ctrl.step = '\x02';
    }
    break;
  case '\x02':
    if (0x13 < game_result_ctrl.anim_timer) {
      game_result_ctrl.step = '\x03';
    }
    break;
  case '\x03':
    break;
  case '\x04':
    if (0x13 < game_result_ctrl.anim_timer) {
      SetNextGPhase__F14GPHASE_ID_ENUM(GID_CLEARMENU_TOP);
      return;
    }
    break;
  default:
    SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
    PrintAssertReal("Error! %s");
  }
  return;
}

void GameResultFadeOutReq() {
  game_result_ctrl.step = '\x04';
  game_result_ctrl.anim_timer = 0;
  return;
}

void* GetGameResultCharPk2Addr() {
  return clear_char_tex_addr;
}

static void GameResultMemFree() {
  LiberateGameResultTexMem__FPPv(&clear_bg_tex_addr);
  LiberateGameResultTexMem__FPPv(&clear_char_tex_addr);
  return;
}

static void LiberateGameResultTexMem(void **tex_addr) {
  if (*tex_addr != (void *)0x0) {
    ol_loadFreeHeap__FPv(*tex_addr);
    *tex_addr = (void *)0x0;
  }
  return;
}

static void GameResultDisp() {
  if ('\x01' < game_result_ctrl.step) {
    GameResultBgDisp__FiiUc(0,0,0x80);
  }
  return;
}

static void GameResultBgDisp(int off_x, int off_y, u_char alpha) {
	static char __FUNCTION__[17] = {
		/* [0] = */ 71,
		/* [1] = */ 97,
		/* [2] = */ 109,
		/* [3] = */ 101,
		/* [4] = */ 82,
		/* [5] = */ 101,
		/* [6] = */ 115,
		/* [7] = */ 117,
		/* [8] = */ 108,
		/* [9] = */ 116,
		/* [10] = */ 66,
		/* [11] = */ 103,
		/* [12] = */ 68,
		/* [13] = */ 105,
		/* [14] = */ 115,
		/* [15] = */ 112,
		/* [16] = */ 0
	};
	DISP_SPRT bg_ds;
	int i;
	
  int iVar1;
  SPRT_DAT *pSVar2;
  float fVar3;
  float fVar4;
  DISP_SPRT bg_ds;
  
  PK2SendVram__FUiiii((uint)clear_bg_tex_addr,-1,-1,0);
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
  if (-1 < ingame_wrk.mDifficulty.mValue) {
    if (ingame_wrk.mDifficulty.mValue < '\x02') {
      fVar4 = (float)off_x;
      pSVar2 = gameclear_tex;
      iVar1 = 3;
      do {
        CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&bg_ds,pSVar2);
        iVar1 = iVar1 + -1;
        pSVar2 = pSVar2 + 1;
        bg_ds.x = bg_ds.x + fVar4;
        bg_ds.y = bg_ds.y + (float)off_y;
        bg_ds.alpha = (uchar)((int)((uint)bg_ds.alpha * (uint)alpha) >> 7);
        DispSprD__FP9DISP_SPRT(&bg_ds);
      } while (-1 < iVar1);
      iVar1 = 4;
      pSVar2 = gameclear_tex + 4;
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
        iVar1 = iVar1 + 1;
        bg_ds.rot = 270.0;
        bg_ds.cry = bg_ds.y + fVar3 + (float)off_y;
        bg_ds.alpha = (uchar)((int)((uint)bg_ds.alpha * (uint)alpha) >> 7);
        bg_ds.x = bg_ds.crx;
        bg_ds.y = bg_ds.cry;
        DispSprD__FP9DISP_SPRT(&bg_ds);
        pSVar2 = pSVar2 + 1;
      } while (iVar1 < 6);
      return;
    }
    if (ingame_wrk.mDifficulty.mValue < '\x04') {
                    /* end of inlined section */
      fVar4 = (float)off_x;
      for (iVar1 = 6; iVar1 < 10; iVar1 = iVar1 + 1) {
        CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&bg_ds,gameclear_tex + iVar1);
        bg_ds.x = bg_ds.x + fVar4;
        bg_ds.y = bg_ds.y + (float)off_y;
        bg_ds.alpha = (uchar)((int)((uint)bg_ds.alpha * (uint)alpha) >> 7);
        DispSprD__FP9DISP_SPRT(&bg_ds);
      }
      iVar1 = 10;
      pSVar2 = gameclear_tex + 10;
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
        iVar1 = iVar1 + 1;
        bg_ds.rot = 270.0;
        bg_ds.cry = bg_ds.y + fVar3 + (float)off_y;
        bg_ds.alpha = (uchar)((int)((uint)bg_ds.alpha * (uint)alpha) >> 7);
        bg_ds.x = bg_ds.crx;
        bg_ds.y = bg_ds.cry;
        DispSprD__FP9DISP_SPRT(&bg_ds);
        pSVar2 = pSVar2 + 1;
      } while (iVar1 < 0xc);
      return;
    }
  }
  SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
  PrintAssertReal("Error! %s");
  return;
}

static void GameResultFadeBlackBgDisp(int off_x, int off_y, u_char alpha) {
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
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | DAT_003b39e0 >> (7 - uVar2) * 8;
  black_bg._0_8_ = DAT_003b39e0;
  puVar1 = (undefined *)((int)&black_bg.y + 3);
  uVar2 = (uint)puVar1 & 7;
  puVar3 = (ulong *)(puVar1 + -uVar2);
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | DAT_003b39e8 >> (7 - uVar2) * 8;
  black_bg._8_8_ = DAT_003b39e8;
  uVar2 = (uint)&black_bg.alpha & 7;
  puVar4 = &black_bg.alpha + -uVar2;
  *(ulong *)puVar4 = *(ulong *)puVar4 & -1L << (uVar2 + 1) * 8 | DAT_003b39f0 >> (7 - uVar2) * 8;
  black_bg._16_8_ = DAT_003b39f0;
  CopySqrDToSqr__FP9DISP_SQARP8SQAR_DAT(&dsq,&black_bg);
  dsq.alpha = (uchar)((int)((uint)dsq.alpha * (uint)alpha) >> 7);
  DispSqrD__FP9DISP_SQAR(&dsq);
  return;
}

void init_GameResult() {
  int stream_id;
  
  GameResultInit__Fv();
  GameResultBackGroundLoadReq__Fv();
  stream_id = StreamAutoPlay(0x9d5,0x9d4,0x11,0,1,0x3200,0,(_SND_3D_SET *)0x0);
  SetClearMenuStreamID__Fi(stream_id);
  return;
}

GPHASE_ENUM pre_GameResult(GPHASE_ENUM dummy) {
  GameResultMain__Fv();
  GameResultDisp__Fv();
  return GPHASE_CONTINUE;
}

GPHASE_ENUM after_GameResult(GPHASE_ENUM result) {
  uchar uVar1;
  
  if (game_result_ctrl.step == '\x02') {
    uVar1 = Zero2Anim2D_FadeOutAnimCtrl__FPis(&game_result_ctrl.anim_timer,0x14);
    GameResultFadeBlackBgDisp__FiiUc(0,0,uVar1);
  }
  else if (game_result_ctrl.step == '\x04') {
    uVar1 = Zero2Anim2D_FadeInAnimCtrl__FPis(&game_result_ctrl.anim_timer,0x14);
    GameResultFadeBlackBgDisp__FiiUc(0,0,uVar1);
  }
  return GPHASE_CONTINUE;
}

void end_GameResult() {
  GameResultMemFree__Fv();
  return;
}

void init_GameResult_Top() {
  GameResultTopInit__Fv();
  return;
}

GPHASE_ENUM one_GameResult_Top(GPHASE_ENUM dummy) {
  if ('\x01' < game_result_ctrl.step) {
    if (game_result_ctrl.step == '\x03') {
      GameResultTopMain__Fv();
    }
    GameResultTopDisp__Fv();
  }
  return GPHASE_CONTINUE;
}

void end_GameResult_Top() {
  return;
}
