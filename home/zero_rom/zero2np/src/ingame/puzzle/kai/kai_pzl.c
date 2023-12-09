// STATUS: NOT STARTED

#include "kai_pzl.h"

typedef struct {
	int mode;
	int (*func)(/* parameters unknown */);
} KAIPZL_MODE;

typedef struct {
	int iInit;
	int iRotL;
	int iRotR;
	int iClear;
} KAIPZL_ROT;

static int KaiPzlGameMode = 0;
static int KaiPzlKaiCsl = 0;
static int KaiPzlKaiYesNo = 0;
static int KaiPzlAnimTime = 0;
static int KaiPzlCnt = 0;
static int KaiPzlMsgNo = 0;
static int KaiPzlState = 0;
static int KaiPzlEneType = 0;
static KAIPZL_MODE *KapPzlModeNowPtr = NULL;

static KAIPZL_MODE KaiPzlModeList[9] = {
	/* [0] = */ {
		/* .mode = */ 0,
		/* .func = */ NULL
	},
	/* [1] = */ {
		/* .mode = */ 1,
		/* .func = */ KaiPzlProc
	},
	/* [2] = */ {
		/* .mode = */ 2,
		/* .func = */ KaiPzlAnim
	},
	/* [3] = */ {
		/* .mode = */ 3,
		/* .func = */ KaiPzlCancel
	},
	/* [4] = */ {
		/* .mode = */ 6,
		/* .func = */ KaiPzlRelease
	},
	/* [5] = */ {
		/* .mode = */ 5,
		/* .func = */ KaiPzlDrawMsg
	},
	/* [6] = */ {
		/* .mode = */ 7,
		/* .func = */ KaiPzlTerm
	},
	/* [7] = */ {
		/* .mode = */ 8,
		/* .func = */ KaiPzlTerm2
	},
	/* [8] = */ {
		/* .mode = */ 4,
		/* .func = */ KaiPzlClear
	}
};

static KAIPZL_ROT KaiPzlRotDat[2][2] = {
	/* [0] = */ {
		/* [0] = */ {
			/* .iInit = */ 0,
			/* .iRotL = */ -45,
			/* .iRotR = */ 45,
			/* .iClear = */ 90
		},
		/* [1] = */ {
			/* .iInit = */ 0,
			/* .iRotL = */ -45,
			/* .iRotR = */ 90,
			/* .iClear = */ 270
		}
	},
	/* [1] = */ {
		/* [0] = */ {
			/* .iInit = */ 0,
			/* .iRotL = */ -30,
			/* .iRotR = */ 60,
			/* .iClear = */ 90
		},
		/* [1] = */ {
			/* .iInit = */ 0,
			/* .iRotL = */ -45,
			/* .iRotR = */ 135,
			/* .iClear = */ 270
		}
	}
};

static int KapPzlFadeNext = -1;
static int KaiPzlEnemID[2];
static int KaiPzlRotY[2];
static int KaiPzlFadeSt[5];

static void _fixed_array_assert(char *strType, size_t v0, size_t v1) {
	static char *str = 0x3b98a8;
	
  g3ddbgAssert__FbPCce(false,str_646);
  return;
}

static void** void * * _fixed_array_verifyrange<void *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_assert__FPCcUiUi(s_void__003f1688,_max,v);
  }
  return (void **)0x0;
}

static char** char * * _fixed_array_verifyrange<char *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_assert__FPCcUiUi(s_char__003f1690,_max,v);
  }
  return (char **)0x0;
}

static unsigned int** unsigned int * * _fixed_array_verifyrange<unsigned int *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_assert__FPCcUiUi("unsigned int*",_max,v);
  }
  return (uint **)0x0;
}

static void KaiPzlDrawCap() {
  if (KapPzlModeNowPtr->mode != 8) {
    DrawCmnCapGroup_W__FiiUcUi(0,0,0x80,0);
  }
  return;
}

static int KaiPzlCheckClear() {
	int i;
	
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  
  iVar5 = 0;
  piVar4 = KaiPzlRotY;
  piVar3 = &KaiPzlRotDat[KaiPzlGameMode][0].iClear;
  iVar2 = *piVar3;
  while( true ) {
    piVar3 = piVar3 + 4;
    iVar1 = *piVar4;
    piVar4 = piVar4 + 1;
    if (iVar2 != iVar1) {
      return 0;
    }
    iVar5 = iVar5 + 1;
    if (1 < iVar5) break;
    iVar2 = *piVar3;
  }
  return 1;
}

static int KaiPzlGetCen(int label, int x) {
  int iVar1;
  uchar *local_60 [16];
  
  memset(local_60,0,0x38);
  local_60[0] = GetMsgDataAddr__Fii(0x43,label);
  iVar1 = GetMsgLineLength__FPUcPPUc(local_60[0],(uchar **)0x0);
  return x - iVar1 / 2;
}

static void KaiPuzzleSetMode(int mode) {
	int i;
	
  int iVar1;
  
  iVar1 = 0;
  KapPzlModeNowPtr = KaiPzlModeList;
  do {
    if (KapPzlModeNowPtr->mode == mode) {
      return;
    }
    iVar1 = iVar1 + 1;
    KapPzlModeNowPtr = KapPzlModeNowPtr + 1;
  } while (iVar1 < 9);
  KapPzlModeNowPtr = (KAIPZL_MODE *)0x0;
  return;
}

void KaiPuzzleSetFadeCmn(int frame, int alpha) {
  KaiPzlFadeSt[3] = alpha;
  KaiPzlFadeSt[1] = frame;
  KaiPzlFadeSt[2] = KaiPzlFadeSt[4];
  KaiPzlFadeSt[0] = 0;
  return;
}

void KaiPuzzleSetFade(int frame, int alpha, int flg) {
  KaiPzlState = KaiPzlState & 0xfffffffcU | flg;
  KaiPuzzleSetFadeCmn__Fii(frame,alpha);
  return;
}

void KaiPuzzleSetFade2(int frame, int alpha_st, int alpha_en, int flg) {
  KaiPzlFadeSt[4] = alpha_st;
  KaiPuzzleSetFade__Fiii(frame,alpha_en,flg);
  return;
}

void KaiPuzzleSetFadeNextMode(int mode, int frame) {
  KaiPuzzleSetFade__Fiii(frame,0,3);
  KapPzlFadeNext = mode;
  return;
}

void KaiPuzzleFadeProc() {
	int f_alpha;
	
  int iVar1;
  uint uVar2;
  
  if ((KaiPzlState & 3U) != 0) {
    iVar1 = (KaiPzlFadeSt[3] - KaiPzlFadeSt[2]) * KaiPzlFadeSt[0];
    KaiPzlFadeSt[0] = KaiPzlFadeSt[0] + 1;
    if (KaiPzlFadeSt[1] == 0) {
      trap(7);
    }
    KaiPzlFadeSt[4] = iVar1 / KaiPzlFadeSt[1] + KaiPzlFadeSt[2];
    if (KaiPzlFadeSt[1] <= KaiPzlFadeSt[0]) {
      KaiPzlFadeSt[4] = KaiPzlFadeSt[3];
      if ((KaiPzlState & 2U) == 0) {
        KaiPzlState = KaiPzlState & 0xfffffffe;
      }
      else {
        uVar2 = KaiPzlState & 1;
        KaiPzlState = KaiPzlState & 0xfffffffd;
        if (uVar2 != 0) {
          KaiPuzzleSetFadeCmn__Fii(6,0x80);
        }
        KaiPuzzleSetMode__Fi(KapPzlFadeNext);
      }
    }
  }
  return;
}

void KaiPuzzleExeInit(int mode) {
	int i;
	
  int *piVar1;
  int iVar2;
  
  if (mode != 4) {
    KaiPzlEnemID[1] = 0x6a;
    KaiPzlEneType = 2;
    KaiPzlEnemID[0] = 0x69;
  }
  else {
    KaiPzlEnemID[0] = 3;
    KaiPzlEneType = 0;
    KaiPzlEnemID[1] = 4;
  }
  KaiPzlGameMode = (int)(mode != 4);
  KaiPzlRotY[0] = KaiPzlRotDat[KaiPzlGameMode][0].iInit;
  piVar1 = KaiPzlFadeSt + 4;
  KaiPzlRotY[1] = KaiPzlRotDat[KaiPzlGameMode][1].iInit;
  KaiPzlKaiCsl = 2;
  iVar2 = 4;
  KaiPzlCnt = 0;
  do {
    iVar2 = iVar2 + -1;
    *piVar1 = 0;
    piVar1 = piVar1 + -1;
  } while (-1 < iVar2);
  KapPzlFadeNext = -1;
  KaiPzlState = 1;
  KaiPuzzleSetMode__Fi(1);
  KaiPuzzleSetFade__Fiii(6,0x80,1);
  return;
}

static void KaiPzlPrintCen(int label, int x, int y, u_char alpha) {
  int x_00;
  
  x_00 = KaiPzlGetCen__Fii(label,x);
  PrintMsg__Fiiiiiii(0x43,label,x_00,y,1,(uint)alpha,0);
  return;
}

static int KaiPuzzleDrawMsg(int csr, float off_x, u_char alpha) {
	MSG_WIN_DAT win_dat;
	DISP_STR ds;
	int cx;
	int cy;
	int ret;
	float c_size;
	int cen;
	
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int x;
  float w;
  MSG_WIN_DAT win_dat;
  DISP_STR ds;
  uchar *local_c0 [16];
  uchar *local_80 [16];
  
  SetMsgWinDefData__FP11MSG_WIN_DATi(&win_dat,0x43);
  DrawCmnWindow__FUiffffUcUc(0,win_dat.x,win_dat.y,win_dat.w,win_dat.h,alpha,0x80);
  SetMsgDefData__FP8DISP_STRi(&ds,0x43);
  x = (int)(win_dat.x + win_dat.w * 0.5);
  if ((KaiPzlKaiCsl & 4U) == 0) {
    w = 0.0;
    iVar4 = ds.pos_y + 0x17;
    if ((KaiPzlKaiCsl & 1U) == 0) {
      iVar1 = KaiPzlGetCen__Fii(1,x);
      iVar3 = 1;
    }
    else {
      iVar1 = KaiPzlGetCen__Fii(1,x);
      memset(local_80,0,0x38);
      local_80[0] = GetMsgDataAddr__Fii(0x43,1);
      iVar2 = GetMsgLineLength__FPUcPPUc(local_80[0],(uchar **)0x0);
      iVar3 = 0;
      iVar1 = iVar1 + iVar2 + -0x78;
    }
  }
  else {
    iVar1 = KaiPzlGetCen__Fii(2,x);
    iVar4 = ds.pos_y + 0x2e;
    memset(local_c0,0,0x38);
    local_c0[0] = GetMsgDataAddr__Fii(0x43,2);
    iVar2 = GetMsgLineLength__FPUcPPUc(local_c0[0],(uchar **)0x0);
    iVar3 = 2;
    w = (float)iVar2 + 2.0;
  }
  DrawCmnSelCsr__FUiffUcfUc(0,(float)iVar1,(float)iVar4,alpha,w,'\0');
  PrintMsg__Fiiiiiii(0x43,0,ds.pos_x,ds.pos_y,1,(uint)alpha,0);
  ds.pos_y = ds.pos_y + 0x17;
  KaiPzlPrintCen__FiiiUc(1,x,ds.pos_y,alpha);
  ds.pos_y = ds.pos_y + 0x17;
  KaiPzlPrintCen__FiiiUc(2,x,ds.pos_y,alpha);
  return iVar3;
}

static void KaiPuzzleDrawMsgOne(u_char alpha, int label, DISP_STR *ret) {
	MSG_WIN_DAT win_dat;
	DISP_STR *ds;
	DISP_STR work;
	
  DISP_STR *msg_data;
  MSG_WIN_DAT win_dat;
  DISP_STR work;
  
  msg_data = &work;
  if (ret != (DISP_STR *)0x0) {
    msg_data = ret;
  }
  SetMsgWinDefData__FP11MSG_WIN_DATi(&win_dat,0x43);
  DrawCmnWindow__FUiffffUcUc(0,win_dat.x,win_dat.y,win_dat.w,win_dat.h,alpha,0x80);
  SetMsgDefData__FP8DISP_STRi(msg_data,0x43);
  PrintMsg__Fiiiiiii(0x43,label,msg_data->pos_x,msg_data->pos_y,1,(uint)alpha,0);
  return;
}

static void KaiPuzzleBlackBgDisp(int off_x, int off_y, u_char alpha) {
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
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | DAT_003b9900 >> (7 - uVar2) * 8;
  black_bg._0_8_ = DAT_003b9900;
  puVar1 = (undefined *)((int)&black_bg.y + 3);
  uVar2 = (uint)puVar1 & 7;
  puVar3 = (ulong *)(puVar1 + -uVar2);
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | DAT_003b9908 >> (7 - uVar2) * 8;
  black_bg._8_8_ = DAT_003b9908;
  uVar2 = (uint)&black_bg.alpha & 7;
  puVar4 = &black_bg.alpha + -uVar2;
  *(ulong *)puVar4 = *(ulong *)puVar4 & -1L << (uVar2 + 1) * 8 | DAT_003b9910 >> (7 - uVar2) * 8;
  black_bg._16_8_ = DAT_003b9910;
  CopySqrDToSqr__FP9DISP_SQARP8SQAR_DAT(&dsq,&black_bg);
  dsq.alpha = (uchar)((int)((uint)dsq.alpha * (uint)alpha) >> 7);
  DispSqrD__FP9DISP_SQAR(&dsq);
  return;
}

void KaiPzlDrawCancelWindow(u_char alpha) {
	static int pos_x[2] = {
		/* [0] = */ 155,
		/* [1] = */ 362
	};
	
  KaiPuzzleDrawMsgOne__FUciP8DISP_STR(alpha,6,(DISP_STR *)0x0);
  DrawCmnSelCsr__FUiffUcfUc
            (0,(float)*(int *)((int)&pos_x_1033 + KaiPzlKaiYesNo * 4),388.0,alpha,0.0,'\0');
  DrawCmnSelYes__FUiffUc(0,153.0,390.0,alpha);
  DrawCmnSelNo__FUiffUc(0,DAT_003ee490,390.0,alpha);
  return;
}

static void KaiPuzzleDraw4Stat() {
  if ((KaiPzlState & 0x10U) != 0) {
    KaiPzlDrawCancelWindow__FUc(0x80);
    return;
  }
  if ((KaiPzlState & 0x20U) != 0) {
    KaiPuzzleDrawMsgOne__FUciP8DISP_STR(0x80,KaiPzlMsgNo,(DISP_STR *)0x0);
  }
  return;
}

static void KaiPzlCheckKai(int id, int kai_lr) {
  int iVar1;
  int iVar2;
  int *piVar3;
  
  if (kai_lr == 1) {
    piVar3 = KaiPzlRotY + id;
    iVar2 = KaiPzlRotDat[KaiPzlGameMode][id].iRotR;
    iVar1 = *piVar3;
  }
  else {
    if (kai_lr != 2) goto LAB_001ce104;
    piVar3 = KaiPzlRotY + id;
    iVar1 = *piVar3;
    iVar2 = KaiPzlRotDat[KaiPzlGameMode][id].iRotL;
  }
  *piVar3 = iVar1 + iVar2;
LAB_001ce104:
  piVar3 = KaiPzlRotY + id;
  iVar2 = *piVar3 % 0x168;
  *piVar3 = iVar2;
  if (iVar2 < 0) {
    *piVar3 = iVar2 + 0x168;
  }
  return;
}

int KaiPzlProc() {
	int csr;
	int kai;
	int flg;
	
  int iVar1;
  uint uVar2;
  uint uVar3;
  int kai_lr;
  
  if ((KaiPzlState & 3U) == 0) {
    if (((pad[0].rpt & 0x8000U) == 0) && (iVar1 = GetPadAnalogRpt__Fi(2), iVar1 == 0)) {
      if (((pad[0].rpt & 0x2000U) == 0) && (iVar1 = GetPadAnalogRpt__Fi(3), iVar1 == 0)) {
        if (((pad[0].rpt & 0x1000U) == 0) && (iVar1 = GetPadAnalogRpt__Fi(0), iVar1 == 0)) {
          if ((((pad[0].rpt & 0x4000U) != 0) || (iVar1 = GetPadAnalogRpt__Fi(1), iVar1 != 0)) &&
             ((KaiPzlKaiCsl & 4U) == 0)) {
            iVar1 = GetPzlSndBankID__Fv();
            SndBankPlay(iVar1,0,0,0,0x3200,0x1000,0,(_SND_3D_SET *)0x0);
            KaiPzlKaiCsl = KaiPzlKaiCsl | 4;
          }
        }
        else if ((KaiPzlKaiCsl & 4U) != 0) {
          iVar1 = GetPzlSndBankID__Fv();
          SndBankPlay(iVar1,0,0,0,0x3200,0x1000,0,(_SND_3D_SET *)0x0);
          KaiPzlKaiCsl = KaiPzlKaiCsl & 0xfffffffb;
        }
      }
      else if (KaiPzlKaiCsl != 1) {
        iVar1 = GetPzlSndBankID__Fv();
        SndBankPlay(iVar1,0,0,0,0x3200,0x1000,0,(_SND_3D_SET *)0x0);
        KaiPzlKaiCsl = 1;
      }
    }
    else if (KaiPzlKaiCsl != 2) {
      iVar1 = GetPzlSndBankID__Fv();
      SndBankPlay(iVar1,0,0,0,0x3200,0x1000,0,(_SND_3D_SET *)0x0);
      KaiPzlKaiCsl = 2;
    }
    iVar1 = KaiPuzzleDrawMsg__FifUc(KaiPzlKaiCsl,0.0,0x80);
    if (**paddat == 1) {
      kai_lr = 2;
      if (iVar1 != 0) {
        if (iVar1 != 1) {
          KaiPzlKaiYesNo = 1;
          SystemBankPlay__FiiiiP11_SND_3D_SETii(3,0,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
          KaiPuzzleSetFadeNextMode__Fii(3,6);
          return 1;
        }
        kai_lr = 1;
      }
      iVar1 = GetPzlSndBankID__Fv();
      SndBankPlay(iVar1,2,0,0,0x3200,0x1000,0,(_SND_3D_SET *)0x0);
      iVar1 = GetPzlSndBankID__Fv();
      SndBankPlay(iVar1,1,0,0,0x3200,0x1000,0,(_SND_3D_SET *)0x0);
      KaiPzlCheckKai__Fii(0,kai_lr);
      KaiPzlCheckKai__Fii(1,kai_lr);
      uVar2 = ChangeEneAlgorithm__Fiii(KaiPzlEneType,KaiPzlEnemID[0],kai_lr);
      uVar3 = ChangeEneAlgorithm__Fiii(KaiPzlEneType,KaiPzlEnemID[1],kai_lr);
      if ((uVar2 & uVar3) == 0) {
        printf("ERR! NO_REQ_MODEL_ANIM\n");
      }
      KaiPzlAnimTime = 0xf;
      KaiPuzzleSetFadeNextMode__Fii(2,6);
    }
    else if ((ushort)*paddat[1] == 1) {
      KaiPzlKaiYesNo = (uint)(ushort)*paddat[1];
      iVar1 = GetPzlSndBankID__Fv();
      SndBankPlay(iVar1,3,0,0,0x3200,0x1000,0,(_SND_3D_SET *)0x0);
      KaiPuzzleSetFadeNextMode__Fii(3,6);
    }
  }
  else {
    KaiPuzzleDrawMsg__FifUc(KaiPzlKaiCsl,0.0,(uchar)KaiPzlFadeSt[4]);
  }
  return 1;
}

int KaiPzlAnim() {
  int iVar1;
  
  KaiPzlAnimTime = KaiPzlAnimTime + -1;
  if ((KaiPzlAnimTime < 1) && ((KaiPzlState & 3U) == 0)) {
    KaiPzlCnt = KaiPzlCnt + 1;
    iVar1 = KaiPzlCheckClear__Fv();
    if (iVar1 == 0) {
      if (KaiPzlCnt < 6) {
        KaiPuzzleSetFadeNextMode__Fii(1,6);
      }
      else {
        KaiPzlMsgNo = 5;
        KaiPuzzleSetFadeNextMode__Fii(5,6);
      }
    }
    else {
      KaiPuzzleSetMode__Fi(4);
    }
  }
  return 1;
}

int KaiPzlClear() {
  int bank_no;
  
  if ((KaiPzlState & 3U) == 0) {
    if (KaiPzlGameMode == 0) {
      PuzzleClear__Fi(4);
      KaiPzlMsgNo = 3;
      ChangeEneAlgorithm__Fiii(KaiPzlEneType,KaiPzlEnemID[0],3);
      ChangeEneAlgorithm__Fiii(KaiPzlEneType,KaiPzlEnemID[1],3);
    }
    else {
      PuzzleClear__Fi(5);
      KaiPzlMsgNo = 4;
    }
    bank_no = GetPzlSndBankID__Fv();
    SndBankPlay(bank_no,4,0,0,0x3200,0x1000,0,(_SND_3D_SET *)0x0);
    KaiPuzzleSetFadeNextMode__Fii(5,6);
  }
  return 1;
}

int KaiPzlDrawMsg() {
  KaiPuzzleDrawMsgOne__FUciP8DISP_STR((uchar)KaiPzlFadeSt[4],KaiPzlMsgNo,(DISP_STR *)0x0);
  if (((KaiPzlState & 3U) == 0) && (**paddat == 1)) {
    SystemBankPlay__FiiiiP11_SND_3D_SETii(3,0,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
    KaiPzlState = KaiPzlState | 0x20;
    KaiPuzzleSetMode__Fi(6);
  }
  return 1;
}

int KaiPzlCancel() {
  int iVar1;
  uchar alpha;
  
  alpha = (uchar)KaiPzlFadeSt[4];
  if ((KaiPzlState & 3U) != 0) goto LAB_001ce7f8;
  if ((((pad[0].rpt & 0xa000U) == 0) && (iVar1 = GetPadAnalogRpt__Fi(2), iVar1 == 0)) &&
     (iVar1 = GetPadAnalogRpt__Fi(3), iVar1 == 0)) {
    if (**paddat == 1) {
      SystemBankPlay__FiiiiP11_SND_3D_SETii(3,0,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
      if (KaiPzlKaiYesNo == 0) {
        KaiPzlState = KaiPzlState | 0x10;
        KaiPuzzleSetMode__Fi(6);
        alpha = 0x80;
      }
      else {
        KaiPuzzleSetFadeNextMode__Fii(1,6);
        alpha = 0x80;
      }
      goto LAB_001ce7f8;
    }
    if (*paddat[1] != 1) {
      alpha = 0x80;
      goto LAB_001ce7f8;
    }
    iVar1 = GetPzlSndBankID__Fv();
    SndBankPlay(iVar1,3,0,0,0x3200,0x1000,0,(_SND_3D_SET *)0x0);
    KaiPuzzleSetFadeNextMode__Fii(1,6);
  }
  else {
    iVar1 = GetPzlSndBankID__Fv();
    SndBankPlay(iVar1,0,0,0,0x3200,0x1000,0,(_SND_3D_SET *)0x0);
    KaiPzlKaiYesNo = KaiPzlKaiYesNo ^ 1;
  }
  alpha = 0x80;
LAB_001ce7f8:
  KaiPzlDrawCancelWindow__FUc(alpha);
  return 1;
}

int KaiPzlRelease() {
  int bank_no;
  
  KaiPuzzleDraw4Stat__Fv();
  bank_no = GetPzlSndBankID__Fv();
  SndBankRelease(bank_no);
  FinderBankSetup__Fv();
  KaiPuzzleSetFade2__Fiiii(0x1e,0,0x80,1);
  KaiPuzzleSetMode__Fi(7);
  return 1;
}

int KaiPzlTerm() {
  int iVar1;
  
  KaiPuzzleDraw4Stat__Fv();
  KaiPuzzleBlackBgDisp__FiiUc(0,0,(uchar)KaiPzlFadeSt[4]);
  iVar1 = 1;
  if ((KaiPzlState & 3U) == 0) {
    if (((KaiPzlState & 0x10U) != 0) || (KaiPzlMsgNo == 5)) {
      ChangeEneAlgorithm__Fiii(KaiPzlEneType,KaiPzlEnemID[0],4);
      ChangeEneAlgorithm__Fiii(KaiPzlEneType,KaiPzlEnemID[1],4);
    }
    KaiPuzzleSetFade2__Fiiii(0x1e,0x80,0,1);
    KaiPuzzleSetMode__Fi(8);
    iVar1 = 0;
  }
  return iVar1;
}

int KaiPzlTerm2() {
  int iVar1;
  
  KaiPuzzleBlackBgDisp__FiiUc(0,0,(uchar)KaiPzlFadeSt[4]);
  iVar1 = 1;
  if ((KaiPzlState & 3U) == 0) {
    iVar1 = FinderBankIsReady__Fv();
    if (iVar1 == 0) {
      iVar1 = 0;
    }
    else {
      SetNextGPhase__F14GPHASE_ID_ENUM(GID_STORY_NORMAL);
      iVar1 = 0;
    }
  }
  return iVar1;
}

int KaiPuzzleMain() {
  int area_no;
  
  SetString__FffPCce(10.0,50.0,s_CSR_d_003f16f0);
  SetString__FffPCce(10.0,70.0,"ROT_Y1 %d");
  SetString__FffPCce(10.0,90.0,"ROT_Y2 %d");
  if (KapPzlModeNowPtr == (KAIPZL_MODE *)0x0) {
    printf("NO_PUZZLE_MODE_PTR\n");
    KaiPuzzleSetMode__Fi(6);
  }
  else {
    PlayerMainCmn__Fi(1);
    EnemyAnimOne__Fi(KaiPzlEnemID[0]);
    EnemyAnimOne__Fi(KaiPzlEnemID[1]);
    area_no = GetPlyrAreaNo__Fv();
    MhCtlMain__Fi(area_no);
    IngameCameraMain__Fv();
    EnemyMotionWork__Fv();
    sis_mdlMotionWork__Fv();
    plyr_mdlMotionWork__Fv();
    IgEffectMain__Fv();
    IngameDrawSub__Fv();
    KaiPzlDrawCap__Fv();
    KaiPuzzleFadeProc__Fv();
    (*(code *)KapPzlModeNowPtr->func)();
  }
  return 1;
}
