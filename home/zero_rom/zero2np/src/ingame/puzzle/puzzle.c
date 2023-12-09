// STATUS: NOT STARTED

#include "puzzle.h"

typedef struct {
	char step;
	char conf_csr;
	short int fade_timer;
	int puzzle_id;
	int con_color;
	int con_alpha;
	int snd_id;
	int snd_bank_id;
} PZL_EXE_CTRL;

static fixed_array<unsigned char,6> clear_puzzle;
static PZL_EXE_CTRL pzl_exe_ctrl;
static void *pzl_tex_addr;

static void _fixed_array_assert(char *strType, size_t v0, size_t v1) {
	static char *str = 0x3c4250;
	
  g3ddbgAssert__FbPCce(false,str_849);
  return (uchar *)v;
}

static void** void * * _fixed_array_verifyrange<void *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_verifyrange__H1ZUc_UiUi_PX01(0x3f3ae8,_max);
  }
  return (void **)0x0;
}

static char** char * * _fixed_array_verifyrange<char *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_verifyrange__H1ZUc_UiUi_PX01(0x3f3af0,_max);
  }
  return (char **)0x0;
}

static unsigned int** unsigned int * * _fixed_array_verifyrange<unsigned int *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_verifyrange__H1ZUc_UiUi_PX01(0x3c4298,_max);
  }
  return (uint **)0x0;
}

void PuzzleInit() {
	int i;
	
  int iVar1;
  int iVar2;
  fixed_array<unsigned_char,6> *pfVar3;
  
  pzl_tex_addr = (void *)0x0;
  pfVar3 = &clear_puzzle;
  iVar1 = 0;
  do {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
    iVar2 = iVar1 + 1;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1ZUc_UiUi_PX01(iVar1,6);
    *(uchar *)pfVar3 = '\0';
                    /* end of inlined section */
    pfVar3 = (fixed_array<unsigned_char,6> *)((int)pfVar3 + 1);
    iVar1 = iVar2;
  } while (iVar2 < 6);
  return;
}

void PuzzleStartReq(int puzzle_id) {
	static char __FUNCTION__[15] = {
		/* [0] = */ 80,
		/* [1] = */ 117,
		/* [2] = */ 122,
		/* [3] = */ 122,
		/* [4] = */ 108,
		/* [5] = */ 101,
		/* [6] = */ 83,
		/* [7] = */ 116,
		/* [8] = */ 97,
		/* [9] = */ 114,
		/* [10] = */ 116,
		/* [11] = */ 82,
		/* [12] = */ 101,
		/* [13] = */ 113,
		/* [14] = */ 0
	};
	
  if (5 < (uint)puzzle_id) {
    SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
    PrintAssertReal("Error! PuzzleStartReq puzzle_id %d");
  }
  PzlExeCtrlInit__Fi(puzzle_id);
  SetNextGPhase__F14GPHASE_ID_ENUM(GID_PUZZLE_INCONF);
  return;
}

static void PzlExeCtrlInit(int puzzle_id) {
	static char __FUNCTION__[15] = {
		/* [0] = */ 80,
		/* [1] = */ 122,
		/* [2] = */ 108,
		/* [3] = */ 69,
		/* [4] = */ 120,
		/* [5] = */ 101,
		/* [6] = */ 67,
		/* [7] = */ 116,
		/* [8] = */ 114,
		/* [9] = */ 108,
		/* [10] = */ 73,
		/* [11] = */ 110,
		/* [12] = */ 105,
		/* [13] = */ 116,
		/* [14] = */ 0
	};
	
  switch(puzzle_id) {
  case 0:
  case 1:
    pzl_exe_ctrl.step = '\0';
    break;
  case 2:
  case 3:
  case 4:
  case 5:
    pzl_exe_ctrl.step = '\x02';
    break;
  default:
    SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
    PrintAssertReal("Error! PzlExeCtrlInit puzzle_id %d");
    SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
    PrintAssertReal("Error! PzlExeCtrlInit");
  }
  pzl_exe_ctrl.conf_csr = '\x01';
  pzl_exe_ctrl.fade_timer = 0;
  pzl_exe_ctrl.puzzle_id = puzzle_id;
  pzl_exe_ctrl.con_color = IgEffectStoryMainContrastColorGet__Fv();
  pzl_exe_ctrl.con_alpha = IgEffectStoryMainContrastAlphaGet__Fv();
  return;
}

static void PzlTexDataLoadReq(int puzzle_id) {
	static char __FUNCTION__[18] = {
		/* [0] = */ 80,
		/* [1] = */ 122,
		/* [2] = */ 108,
		/* [3] = */ 84,
		/* [4] = */ 101,
		/* [5] = */ 120,
		/* [6] = */ 68,
		/* [7] = */ 97,
		/* [8] = */ 116,
		/* [9] = */ 97,
		/* [10] = */ 76,
		/* [11] = */ 111,
		/* [12] = */ 97,
		/* [13] = */ 100,
		/* [14] = */ 82,
		/* [15] = */ 101,
		/* [16] = */ 113,
		/* [17] = */ 0
	};
	static int tex_data_tbl[6] = {
		/* [0] = */ 4292,
		/* [1] = */ 4297,
		/* [2] = */ 4307,
		/* [3] = */ 4302,
		/* [4] = */ 4302,
		/* [5] = */ 4302
	};
	
  int iVar1;
  uchar uVar2;
  uint size;
  
  if (5 < (uint)puzzle_id) {
    SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
    PrintAssertReal("Error! PzlTexDataLoadReq puzzle_id %d");
  }
  if (pzl_tex_addr == (void *)0x0) {
    uVar2 = GetLanguage__Fv();
    iVar1 = *(int *)(tex_data_tbl_991 + puzzle_id * 4);
    size = GetFileSize(iVar1 + (char)uVar2);
    pzl_tex_addr = mem_utilGetMem__Fi(size);
    uVar2 = GetLanguage__Fv();
    LoadReq__FiUi(iVar1 + (char)uVar2,(uint)pzl_tex_addr);
  }
  return;
}

static int PzlExeConfMain() {
	int res;
	
  int iVar1;
  
  iVar1 = 1;
  if (pzl_exe_ctrl.step == '\0') {
    PzlExeSelPad__Fv();
  }
  else if (pzl_exe_ctrl.step == '\x01') {
    PzlExeConfMsgDispPad__Fv();
  }
  else if (pzl_exe_ctrl.step == '\x02') {
    iVar1 = PzlExePuzzleLoadWait__Fv();
  }
  else {
    iVar1 = 1;
  }
  return iVar1;
}

static void PzlExeSelPad() {
  int iVar1;
  
  if (((((pad[0].rpt & 0x8000U) == 0) && (iVar1 = GetPadAnalogRpt__Fi(2), iVar1 == 0)) &&
      ((pad[0].rpt & 0x2000U) == 0)) && (iVar1 = GetPadAnalogRpt__Fi(3), iVar1 == 0)) {
    if (**paddat == 1) {
      pzl_exe_ctrl.snd_id =
           SystemBankPlay__FiiiiP11_SND_3D_SETii(3,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
      if (pzl_exe_ctrl.conf_csr == '\0') {
        PzlExeConfDecision__Fv();
        return;
      }
      pzl_exe_ctrl.step = '\x02';
    }
    else if (*paddat[1] == 1) {
      pzl_exe_ctrl.snd_id =
           SystemBankPlay__FiiiiP11_SND_3D_SETii(1,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
      pzl_exe_ctrl.step = '\x02';
      pzl_exe_ctrl.conf_csr = '\x01';
    }
  }
  else {
    pzl_exe_ctrl.snd_id =
         SystemBankPlay__FiiiiP11_SND_3D_SETii(0,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
    pzl_exe_ctrl.conf_csr = pzl_exe_ctrl.conf_csr ^ 1;
  }
  return;
}

static void PzlExeConfDecision() {
	static char next_step_tbl[6] = {
		/* [0] = */ 1,
		/* [1] = */ 2,
		/* [2] = */ 2,
		/* [3] = */ 2,
		/* [4] = */ 2,
		/* [5] = */ 2
	};
	
  pzl_exe_ctrl.step = *(char *)((int)&next_step_tbl_1001 + pzl_exe_ctrl.puzzle_id);
  return;
}

static void PzlExeConfMsgDispPad() {
	int msg_state;
	
  int iVar1;
  
  iVar1 = MesStatusCheck__Fv();
  if (iVar1 == 0) {
    pzl_exe_ctrl.step = '\x02';
  }
  else if ((iVar1 == 1) && (*paddat[3] == 1)) {
    MesSetNextPage__Fv();
  }
  return;
}

static int PzlExePuzzleLoadWait() {
	static char __FUNCTION__[21] = {
		/* [0] = */ 80,
		/* [1] = */ 122,
		/* [2] = */ 108,
		/* [3] = */ 69,
		/* [4] = */ 120,
		/* [5] = */ 101,
		/* [6] = */ 80,
		/* [7] = */ 117,
		/* [8] = */ 122,
		/* [9] = */ 122,
		/* [10] = */ 108,
		/* [11] = */ 101,
		/* [12] = */ 76,
		/* [13] = */ 111,
		/* [14] = */ 97,
		/* [15] = */ 100,
		/* [16] = */ 87,
		/* [17] = */ 97,
		/* [18] = */ 105,
		/* [19] = */ 116,
		/* [20] = */ 0
	};
	
  int iVar1;
  
  iVar1 = IsLoadEndAll__Fv();
  if (iVar1 == 0) {
    return 0;
  }
  if (pzl_exe_ctrl.puzzle_id < 0) {
LAB_002410bc:
    SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
    PrintAssertReal("Error! PzlExePuzzleLoadWait");
  }
  else {
    if (pzl_exe_ctrl.puzzle_id < 2) {
      if (pzl_exe_ctrl.conf_csr != '\0') {
        SetNextGPhase__F14GPHASE_ID_ENUM(GID_STORY_NORMAL);
        PuzzleRelease__Fv();
        return 0;
      }
      iVar1 = SndBufIsPlaying(pzl_exe_ctrl.snd_id);
      if (iVar1 != 0) {
        return 0;
      }
    }
    else if (5 < pzl_exe_ctrl.puzzle_id) goto LAB_002410bc;
    SetNextGPhase__F14GPHASE_ID_ENUM(GID_PUZZLE_CROSSFADE);
  }
  return 0;
}

static void PzlExeConfDispMain() {
  if (pzl_exe_ctrl.step == '\0') {
    PzlExeConfWinDisp__FiiUc(0,0,0x80);
    return;
  }
  if (pzl_exe_ctrl.step == '\x01') {
    PzlExeConfAfterMsgWinDisp__FiiUc(0,0,0x80);
  }
  return;
}

static void PzlExeConfWinDisp(int off_x, int off_y, u_char alpha) {
	DISP_STR ds;
	
  DISP_STR ds;
  
  SetMsgDefData__FP8DISP_STRi(&ds,pzl_conf_msg[pzl_exe_ctrl.puzzle_id][0]);
  PzlExeSelCmnWinDisp__FiiUc(off_x,off_y,alpha);
  DrawCmnSelCsr__FUiffUcfUc
            (0,(float)(pzl_exe_ctrl.conf_csr * 0xcf + off_x + 0x9b),(float)(off_y + 0x184),alpha,0.0
             ,'\0');
  DrawCmnSelYes__FUiffUc(0,(float)(off_x + 0x99),(float)(off_y + 0x186),alpha);
  DrawCmnSelNo__FUiffUc(0,(float)(off_x + 0x169),(float)(off_y + 0x186),alpha);
  PrintMsg__Fiiiiiii(pzl_conf_msg[pzl_exe_ctrl.puzzle_id][0],pzl_conf_msg[pzl_exe_ctrl.puzzle_id][1]
                     ,ds.pos_x,ds.pos_y,1,(uint)alpha,0);
  return;
}

static void PzlExeConfAfterMsgWinDisp(int off_x, int off_y, u_char alpha) {
  PrintMsgDef_W__Fii(0x44,6);
  return;
}

static void PzlExeSelCmnWinDisp(int off_x, int off_y, u_char alpha) {
	MSG_WIN_DAT win_dat;
	
  MSG_WIN_DAT win_dat;
  
  SetMsgWinDefData__FP11MSG_WIN_DATi(&win_dat,pzl_conf_msg[pzl_exe_ctrl.puzzle_id][0]);
  DrawCmnWindow__FUiffffUcUc(0,win_dat.x,win_dat.y,win_dat.w,win_dat.h,alpha,0x80);
  return;
}

static void PzlCrossFadeMain() {
  int iVar1;
  
  PzlCrossFadeDispMain__Fv();
  pzl_exe_ctrl.fade_timer = pzl_exe_ctrl.fade_timer + 1;
  if (0x1d < (short)pzl_exe_ctrl.fade_timer) {
    iVar1 = SndBankIsReady(pzl_exe_ctrl.snd_bank_id);
    if (iVar1 != 0) {
      PzlCrossMovePuzzlePhase__Fv();
      return;
    }
    pzl_exe_ctrl.fade_timer = 0x1e;
  }
  return;
}

static void PzlCrossFadeDispMain() {
	static char __FUNCTION__[21] = {
		/* [0] = */ 80,
		/* [1] = */ 122,
		/* [2] = */ 108,
		/* [3] = */ 67,
		/* [4] = */ 114,
		/* [5] = */ 111,
		/* [6] = */ 115,
		/* [7] = */ 115,
		/* [8] = */ 70,
		/* [9] = */ 97,
		/* [10] = */ 100,
		/* [11] = */ 101,
		/* [12] = */ 68,
		/* [13] = */ 105,
		/* [14] = */ 115,
		/* [15] = */ 112,
		/* [16] = */ 77,
		/* [17] = */ 97,
		/* [18] = */ 105,
		/* [19] = */ 110,
		/* [20] = */ 0
	};
	u_char alpha;
	u_char con_alpha;
	static ALPHA_ANIM_TBL in_alpha_tbl[2] = {
		/* [0] = */ {
			/* .start_alpha = */ 128,
			/* .end_alpha = */ 0,
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
	ALPHA_ANIM_TBL con_alpha_tbl[2];
	
  undefined *puVar1;
  uint uVar2;
  ulong *puVar3;
  uchar alpha;
  int iVar4;
  ALPHA_ANIM_TBL con_alpha_tbl [2];
  
  puVar1 = (undefined *)((int)&con_alpha_tbl[0].end_time + 1);
  uVar2 = (uint)puVar1 & 7;
  puVar3 = (ulong *)(puVar1 + -uVar2);
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | (ulong)DAT_003c4440 >> (7 - uVar2) * 8;
  con_alpha_tbl[0] = DAT_003c4440;
  puVar1 = (undefined *)((int)&con_alpha_tbl[1].end_time + 1);
  uVar2 = (uint)puVar1 & 7;
  puVar3 = (ulong *)(puVar1 + -uVar2);
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | (ulong)_PTR_003c4448 >> (7 - uVar2) * 8;
  con_alpha_tbl[1] = _PTR_003c4448;
  iVar4 = IgEffectStoryMainContrastAlphaGet__Fv();
  con_alpha_tbl[0].start_alpha = (ushort)iVar4;
  alpha = Anim2D_CalcNowAlpha__FPC14ALPHA_ANIM_TBLi
                    ((ALPHA_ANIM_TBL *)in_alpha_tbl_1026,(int)(short)pzl_exe_ctrl.fade_timer);
  Anim2D_CalcNowAlpha__FPC14ALPHA_ANIM_TBLi(con_alpha_tbl,(int)(short)pzl_exe_ctrl.fade_timer);
  switch(pzl_exe_ctrl.puzzle_id) {
  case 0:
    HinaPuzzleCrossScreenDisp__FiiUc(0,0,alpha);
    break;
  case 1:
    SixPuzzleCrossScreenDisp__FiiUc(0,0,alpha);
    break;
  case 2:
    KazaPuzzleCrossScreenDisp__FiiUc(0,0,alpha);
    break;
  case 3:
    KazaPuzzle2CrossScreenDisp__FiiUc(0,0,alpha);
    break;
  case 4:
  case 5:
    break;
  default:
    SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
    PrintAssertReal("Error! PuzzleStartReq");
  }
  if (1 < pzl_exe_ctrl.puzzle_id - 4U) {
    iVar4 = IgEffectStoryMainContrastTypeGet__Fv();
    SetEffects__Fiie(iVar4,1);
  }
  return;
}

static void PzlCrossMovePuzzlePhase() {
	static char __FUNCTION__[24] = {
		/* [0] = */ 80,
		/* [1] = */ 122,
		/* [2] = */ 108,
		/* [3] = */ 67,
		/* [4] = */ 114,
		/* [5] = */ 111,
		/* [6] = */ 115,
		/* [7] = */ 115,
		/* [8] = */ 77,
		/* [9] = */ 111,
		/* [10] = */ 118,
		/* [11] = */ 101,
		/* [12] = */ 80,
		/* [13] = */ 117,
		/* [14] = */ 122,
		/* [15] = */ 122,
		/* [16] = */ 108,
		/* [17] = */ 101,
		/* [18] = */ 80,
		/* [19] = */ 104,
		/* [20] = */ 97,
		/* [21] = */ 115,
		/* [22] = */ 101,
		/* [23] = */ 0
	};
	
  switch(pzl_exe_ctrl.puzzle_id) {
  case 0:
    SetNextGPhase__F14GPHASE_ID_ENUM(GID_PUZZLE_HINA);
    return;
  case 1:
    SetNextGPhase__F14GPHASE_ID_ENUM(GID_PUZZLE_ROKU);
    return;
  case 2:
    SetNextGPhase__F14GPHASE_ID_ENUM(GID_PUZZLE_KAZA);
    return;
  case 3:
    SetNextGPhase__F14GPHASE_ID_ENUM(GID_PUZZLE_KAZA2);
    return;
  case 4:
    SetNextGPhase__F14GPHASE_ID_ENUM(GID_PUZZLE_KAI1);
    return;
  case 5:
    SetNextGPhase__F14GPHASE_ID_ENUM(GID_PUZZLE_KAI2);
    return;
  default:
    SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
    PrintAssertReal("Error! PuzzleStartReq");
    return;
  }
}

static void PuzzleEndCmnExe() {
  int id;
  
  id = IgEffectStoryMainContrastTypeGet__Fv();
  SetEffects__Fiie(id,1);
  EffScreenEffectStatusSet__Fi(0);
  PuzzleRelease__Fv();
  return;
}

void PuzzleRelease() {
  if (pzl_tex_addr != (void *)0x0) {
    mem_utilFreeMem__FPv(pzl_tex_addr);
    pzl_tex_addr = (void *)0x0;
  }
  return;
}

void* GetPzlTexDataAddr() {
  return pzl_tex_addr;
}

int GetPzlSndBankID() {
  return pzl_exe_ctrl.snd_bank_id;
}

void PuzzleClear(int puzzle_id) {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  _fixed_array_verifyrange__H1ZUc_UiUi_PX01(puzzle_id,6);
  clear_puzzle.field0_0x0.m_aData[puzzle_id] = '\x01';
  return;
}

u_char GetPuzzleClearInfo(int puzzle_id) {
	static char __FUNCTION__[19] = {
		/* [0] = */ 71,
		/* [1] = */ 101,
		/* [2] = */ 116,
		/* [3] = */ 80,
		/* [4] = */ 117,
		/* [5] = */ 122,
		/* [6] = */ 122,
		/* [7] = */ 108,
		/* [8] = */ 101,
		/* [9] = */ 67,
		/* [10] = */ 108,
		/* [11] = */ 101,
		/* [12] = */ 97,
		/* [13] = */ 114,
		/* [14] = */ 73,
		/* [15] = */ 110,
		/* [16] = */ 102,
		/* [17] = */ 111,
		/* [18] = */ 0
	};
	
  if (5 < (uint)puzzle_id) {
    SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
    PrintAssertReal("Error! GetPuzzleClearInfo puzzle_id %d");
  }
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  _fixed_array_verifyrange__H1ZUc_UiUi_PX01(puzzle_id,6);
  return clear_puzzle.field0_0x0.m_aData[puzzle_id];
}

void SetSave_ClearPuzzle(MC_SAVE_DATA *data) {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  _fixed_array_verifyrange__H1ZUc_UiUi_PX01(0,6);
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  data->addr = (uchar *)&clear_puzzle;
                    /* end of inlined section */
  data->size = 6;
  return;
}

void init_Puzzle_InConf() {
  PzlTexDataLoadReq__Fi(pzl_exe_ctrl.puzzle_id);
  SetPlyrAnime__FUcUc('\0','\n');
  return;
}

GPHASE_ENUM one_Puzzle_InConf(GPHASE_ENUM dummy) {
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
  EvDispMain__Fv();
  Graph2dMain__Fv();
  iVar1 = PzlExeConfMain__Fv();
  if (iVar1 != 0) {
    PzlExeConfDispMain__Fv();
  }
  return GPHASE_CONTINUE;
}

void end_Puzzle_InConf() {
  return;
}

void init_Puzzle_CrossFade() {
	static int snd_label_tbl[6][2] = {
		/* [0] = */ {
			/* [0] = */ 3263,
			/* [1] = */ 3262
		},
		/* [1] = */ {
			/* [0] = */ 3265,
			/* [1] = */ 3264
		},
		/* [2] = */ {
			/* [0] = */ 3335,
			/* [1] = */ 3334
		},
		/* [3] = */ {
			/* [0] = */ 3335,
			/* [1] = */ 3334
		},
		/* [4] = */ {
			/* [0] = */ 3349,
			/* [1] = */ 3348
		},
		/* [5] = */ {
			/* [0] = */ 3349,
			/* [1] = */ 3348
		}
	};
	
  FilamentDrawLock__Fv();
  if (pzl_exe_ctrl.puzzle_id == 0) {
    HinaPuzzleCrossDispInit__Fv();
  }
  else if (pzl_exe_ctrl.puzzle_id == 3) {
    KazaPuzzle2ExeInit__Fv();
  }
  if (1 < pzl_exe_ctrl.puzzle_id - 4U) {
    EffScreenEffectStatusSet__Fi(2);
  }
  FinderBankRelease__Fv();
  pzl_exe_ctrl.snd_bank_id =
       SndBankNew(*(int *)(snd_label_tbl_1063 + pzl_exe_ctrl.puzzle_id * 8),
                  *(int *)(snd_label_tbl_1063 + pzl_exe_ctrl.puzzle_id * 8 + 4),-1);
  pzl_exe_ctrl.fade_timer = 0;
  SetEffects__Fiie(8,2);
  return;
}

GPHASE_ENUM one_Puzzle_CrossFade(GPHASE_ENUM dummy) {
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
  EvDispMain__Fv();
  PzlCrossFadeMain__Fv();
  Graph2dMain__Fv();
  return GPHASE_CONTINUE;
}

void end_Puzzle_CrossFade() {
  int id;
  
  FilamentDrawUnlock__Fv();
  id = IgEffectStoryMainContrastTypeGet__Fv();
  SetEffects__Fiie(id,1);
  CutEffects__Fi(8);
  return;
}

void init_Puzzle_Hina() {
  HinaPuzzleExeInit__Fv();
  return;
}

GPHASE_ENUM one_Puzzle_Hina(GPHASE_ENUM dummy) {
  int iVar1;
  
  iVar1 = HinaPuzzleMain__Fv();
  if (iVar1 != 0) {
    HinaPuzzleDispMain__Fv();
  }
  PlayData_PlayTimeCount__Fv();
  return GPHASE_CONTINUE;
}

void end_Puzzle_Hina() {
  PuzzleEndCmnExe__Fv();
  FadeOutReq__FUcUcUcUi('\0','\0','\0',0);
  FadeInReq__FUcUcUcUi('\0','\0','\0',0x1e);
  return;
}

void init_Puzzle_Roku() {
  SixPuzzleExeInit__Fv();
  return;
}

GPHASE_ENUM one_Puzzle_Roku(GPHASE_ENUM dummy) {
  int iVar1;
  
  iVar1 = SixPuzzleMain__Fv();
  if (iVar1 != 0) {
    SixPuzzleDispMain__Fv();
  }
  PlayData_PlayTimeCount__Fv();
  return GPHASE_CONTINUE;
}

void end_Puzzle_Roku() {
  PuzzleEndCmnExe__Fv();
  return;
}

void init_Puzzle_Kaza() {
  KazaPuzzleExeInit__Fv();
  return;
}

GPHASE_ENUM one_Puzzle_Kaza(GPHASE_ENUM dummy) {
  int iVar1;
  
  iVar1 = KazaPuzzleMain__Fv();
  if (iVar1 != 0) {
    KazaPuzzleDispMain__Fv();
  }
  PlayData_PlayTimeCount__Fv();
  return GPHASE_CONTINUE;
}

void end_Puzzle_Kaza() {
  PuzzleEndCmnExe__Fv();
  SetMsgFirstPage__Fv();
  return;
}

void init_Puzzle_Kaza2() {
  KazaPuzzle2ExeInit__Fv();
  return;
}

GPHASE_ENUM one_Puzzle_Kaza2(GPHASE_ENUM dummy) {
  int iVar1;
  
  iVar1 = KazaPuzzle2Main__Fv();
  if (iVar1 != 0) {
    KazaPuzzle2DispMain__Fv();
  }
  PlayData_PlayTimeCount__Fv();
  return GPHASE_CONTINUE;
}

void end_Puzzle_Kaza2() {
  PuzzleEndCmnExe__Fv();
  SetMsgFirstPage__Fv();
  return;
}

void init_Puzzle_Kai1() {
  KaiPuzzleExeInit__Fi(4);
  return;
}

GPHASE_ENUM one_Puzzle_Kai1(GPHASE_ENUM dummy) {
  KaiPuzzleMain__Fv();
  PlayData_PlayTimeCount__Fv();
  return GPHASE_CONTINUE;
}

void end_Puzzle_Kai1() {
  PuzzleEndCmnExe__Fv();
  return;
}

void init_Puzzle_Kai2() {
  KaiPuzzleExeInit__Fi(5);
  return;
}

GPHASE_ENUM one_Puzzle_Kai2(GPHASE_ENUM dummy) {
  KaiPuzzleMain__Fv();
  PlayData_PlayTimeCount__Fv();
  return GPHASE_CONTINUE;
}

void end_Puzzle_Kai2() {
  PuzzleEndCmnExe__Fv();
  return;
}

u_char* unsigned char * _fixed_array_verifyrange<unsigned char>(size_t v, size_t _max) {
  g3ddbgAssert__FbPCce(false,str_849);
  return (uchar *)v;
}

static void __static_initialization_and_destruction_0(int __initialize_p, int __priority) {
  return;
}

static void global constructors keyed to PuzzleInit() {
  __static_initialization_and_destruction_0(1,0xffff);
  return;
}
