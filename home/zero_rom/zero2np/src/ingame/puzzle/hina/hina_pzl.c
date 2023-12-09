// STATUS: NOT STARTED

#include "hina_pzl.h"

typedef struct {
	char step;
	char sub_step;
	char next_sub_step;
	char csr_tate;
	char csr_yoko;
	char clear_flg;
	char exit_csr;
	int timer;
	int hina_pos[4][4];
	char in_anim_flg;
	int snd_id;
} HINA_PZL_CTRL;

typedef struct {
	char anim_step;
	short int anim_timer;
	char sub_anim_step;
	short int sub_anim_timer;
	short int csr_anim_timer;
	short int smoke_anim_timer;
	short int stand_anim_timer;
} HINA_PZL_DISP;

typedef struct {
	short int anim_timer;
} HINA_PZL_CROSS_DISP;

static void (*hina_pad_func[4])(/* parameters unknown */) = {
	/* [0] = */ HinaPuzzleDollSelPad,
	/* [1] = */ HinaPuzzleExitSelPad,
	/* [2] = */ HinaPuzzleClearPad,
	/* [3] = */ HinaPuzzleClearPad
};

static void (*hina_disp_func[4])(/* parameters unknown */) = {
	/* [0] = */ HinaPuzzleDollSelDisp,
	/* [1] = */ HinaPuzzleExitSelDisp,
	/* [2] = */ HinaPuzzleClearDisp,
	/* [3] = */ HinaPuzzleTimeOverDisp
};

static HINA_PZL_CTRL hina_pzl_ctrl;
static HINA_PZL_DISP hina_pzl_disp;
static HINA_PZL_CROSS_DISP hina_pzl_cross_disp;

static void _fixed_array_assert(char *strType, size_t v0, size_t v1) {
	static char *str = 0x3b8e08;
	
  g3ddbgAssert__FbPCce(false,str_646);
  return;
}

static void** void * * _fixed_array_verifyrange<void *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_assert__FPCcUiUi(s_void__003f14b8,_max,v);
  }
  return (void **)0x0;
}

static char** char * * _fixed_array_verifyrange<char *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_assert__FPCcUiUi(s_char__003f14c0,_max,v);
  }
  return (char **)0x0;
}

static unsigned int** unsigned int * * _fixed_array_verifyrange<unsigned int *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_assert__FPCcUiUi("unsigned int*",_max,v);
  }
  return (uint **)0x0;
}

void HinaPuzzleExeInit() {
  HinaPuzzleCtrlInit__Fv();
  return;
}

void HinaPuzzleCrossDispInit() {
  hina_pzl_cross_disp.anim_timer = 0;
  return;
}

static void HinaPuzzleCtrlInit() {
	int i;
	int j;
	
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  hina_pzl_ctrl.step = '\0';
  hina_pzl_ctrl.sub_step = '\0';
  hina_pzl_ctrl.next_sub_step = '\0';
  iVar1 = GetPALMode__Fv();
  hina_pzl_ctrl.timer = 0x5dc;
  if (iVar1 == 0) {
    hina_pzl_ctrl.timer = 0x708;
  }
  iVar6 = 0;
  iVar1 = 0;
  do {
    iVar4 = iVar1 << 2;
    iVar5 = 3;
    do {
      puVar2 = (undefined4 *)((int)hina_first_pos + iVar4);
      puVar3 = (undefined4 *)((int)hina_pzl_ctrl.hina_pos + iVar4);
      iVar5 = iVar5 + -1;
      iVar4 = iVar4 + 4;
      *puVar3 = *puVar2;
    } while (-1 < iVar5);
    iVar6 = iVar6 + 1;
    iVar1 = iVar1 + 4;
  } while (iVar6 < 4);
  hina_pzl_ctrl.exit_csr = '\x01';
  hina_pzl_ctrl.csr_tate = '\x02';
  hina_pzl_ctrl.in_anim_flg = '\0';
  hina_pzl_ctrl.csr_yoko = '\x01';
  hina_pzl_ctrl.clear_flg = '\0';
  return;
}

int HinaPuzzleMain() {
	int res;
	
  int iVar1;
  
  if (hina_pzl_ctrl.step == '\0') {
    SubTitleReq__Fi(0x1a);
    HinaPuzzleDispInit__Fv();
    hina_pzl_ctrl.step = '\x01';
  }
  if (hina_pzl_ctrl.step == '\x01') {
    HinaPuzzleSubOutAnimCheck__Fv();
    if ((hina_pzl_disp.sub_anim_step == '\x02') &&
       ((code *)hina_pad_func[hina_pzl_ctrl.sub_step] != (code *)0x0)) {
      (*(code *)hina_pad_func[hina_pzl_ctrl.sub_step])();
    }
    if ((hina_pzl_ctrl.sub_step == '\0') && (0 < hina_pzl_ctrl.timer)) {
      HinaPuzzleTimer__Fv();
    }
  }
  if (((hina_pzl_ctrl.step == '\x02') && (hina_pzl_disp.anim_step == '\x04')) &&
     (iVar1 = SndBufIsPlaying(hina_pzl_ctrl.snd_id), iVar1 == 0)) {
    SubTitleStop__Fv();
    iVar1 = GetPzlSndBankID__Fv();
    SndBankRelease(iVar1);
    FinderBankSetup__Fv();
    hina_pzl_ctrl.step = '\x03';
  }
  if ((hina_pzl_ctrl.step == '\x03') && (iVar1 = FinderBankIsReady__Fv(), iVar1 != 0)) {
    SetNextGPhase__F14GPHASE_ID_ENUM(GID_STORY_NORMAL);
  }
  return 1;
}

static void HinaPuzzleSubOutAnimCheck() {
  if (hina_pzl_disp.sub_anim_step == '\x04') {
    hina_pzl_disp.sub_anim_step = '\0';
    hina_pzl_ctrl.sub_step = hina_pzl_ctrl.next_sub_step;
  }
  return;
}

static void HinaPuzzleReqNextSubStep(char next_step) {
  hina_pzl_ctrl.next_sub_step = next_step;
  hina_pzl_disp.sub_anim_step = '\x03';
  hina_pzl_disp.sub_anim_timer = 0;
  return;
}

static int HinaPuzzleClearCheck() {
	int res;
	
  int iVar1;
  
  iVar1 = 0;
  if ((hina_pzl_ctrl.hina_pos[0][1] == 8) && (hina_pzl_ctrl.hina_pos[0][2] == 8)) {
    hina_pzl_ctrl.clear_flg = '\x01';
    PuzzleClear__Fi(0);
    HinaPuzzleReqNextSubStep__Fc('\x02');
    iVar1 = 1;
  }
  return iVar1;
}

static void HinaPuzzleDollSelPad() {
	int i;
	char before_csr;
	
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  
  if (((pad[0].rpt & 0x1000U) == 0) && (iVar3 = GetPadAnalogRpt__Fi(0), iVar3 == 0)) {
    if (((pad[0].rpt & 0x4000U) == 0) && (iVar3 = GetPadAnalogRpt__Fi(1), iVar3 == 0)) {
      if (((pad[0].rpt & 0x8000U) == 0) && (iVar3 = GetPadAnalogRpt__Fi(2), iVar3 == 0)) {
        if (((pad[0].rpt & 0x2000U) == 0) && (iVar3 = GetPadAnalogRpt__Fi(3), iVar3 == 0)) {
          if (**paddat == 1) {
            HinaPuzzleDollPosChange__Fv();
            return;
          }
          if (*paddat[1] != 1) {
            return;
          }
          iVar3 = GetPzlSndBankID__Fv();
          hina_pzl_ctrl.snd_id = SndBankPlay(iVar3,3,0,0,0x3200,0x1000,0,(_SND_3D_SET *)0x0);
          HinaPuzzleReqNextSubStep__Fc('\x01');
          return;
        }
        cVar2 = hina_pzl_ctrl.csr_yoko;
        if ('\x03' < hina_pzl_ctrl.csr_yoko) {
          return;
        }
        do {
          hina_pzl_ctrl.csr_yoko = hina_pzl_ctrl.csr_yoko + '\x01';
          if (3 < hina_pzl_ctrl.csr_yoko) {
            hina_pzl_ctrl.csr_yoko = cVar2;
            iVar3 = GetPzlSndBankID__Fv();
            iVar4 = 3;
            goto LAB_001c56c4;
          }
          iVar3 = hina_pzl_ctrl.hina_pos[hina_pzl_ctrl.csr_tate][hina_pzl_ctrl.csr_yoko];
          if (iVar3 == -1) {
            hina_pzl_ctrl.csr_yoko = cVar2;
            iVar3 = GetPzlSndBankID__Fv();
            iVar4 = 3;
            goto LAB_001c56c4;
          }
        } while (iVar3 == -2);
        piVar5 = no_move_hina;
        iVar4 = 0;
        iVar3 = no_move_hina[0];
        while (piVar5 = piVar5 + 1,
              hina_pzl_ctrl.hina_pos[hina_pzl_ctrl.csr_tate][hina_pzl_ctrl.csr_yoko] != iVar3) {
          iVar4 = iVar4 + 1;
          bVar1 = iVar4 < 2;
          if (!bVar1) goto LAB_001c55f4;
          iVar3 = *piVar5;
        }
        bVar1 = iVar4 < 2;
LAB_001c55f4:
        if (bVar1) {
          hina_pzl_ctrl.csr_yoko = cVar2;
          iVar3 = GetPzlSndBankID__Fv();
          iVar4 = 3;
          goto LAB_001c56c4;
        }
      }
      else {
        cVar2 = hina_pzl_ctrl.csr_yoko;
        if (hina_pzl_ctrl.csr_yoko < '\0') {
          return;
        }
        do {
          hina_pzl_ctrl.csr_yoko = hina_pzl_ctrl.csr_yoko + -1;
          if (hina_pzl_ctrl.csr_yoko < 0) {
            hina_pzl_ctrl.csr_yoko = cVar2;
            iVar3 = GetPzlSndBankID__Fv();
            iVar4 = 3;
            goto LAB_001c56c4;
          }
          iVar3 = hina_pzl_ctrl.hina_pos[hina_pzl_ctrl.csr_tate][hina_pzl_ctrl.csr_yoko];
          if (iVar3 == -1) {
            hina_pzl_ctrl.csr_yoko = cVar2;
            iVar3 = GetPzlSndBankID__Fv();
            iVar4 = 3;
            goto LAB_001c56c4;
          }
        } while (iVar3 == -2);
        piVar5 = no_move_hina;
        iVar4 = 0;
        iVar3 = no_move_hina[0];
        while (piVar5 = piVar5 + 1,
              hina_pzl_ctrl.hina_pos[hina_pzl_ctrl.csr_tate][hina_pzl_ctrl.csr_yoko] != iVar3) {
          iVar4 = iVar4 + 1;
          bVar1 = iVar4 < 2;
          if (!bVar1) goto LAB_001c54ec;
          iVar3 = *piVar5;
        }
        bVar1 = iVar4 < 2;
LAB_001c54ec:
        if (bVar1) {
          hina_pzl_ctrl.csr_yoko = cVar2;
          iVar3 = GetPzlSndBankID__Fv();
          iVar4 = 3;
          goto LAB_001c56c4;
        }
      }
    }
    else {
      cVar2 = hina_pzl_ctrl.csr_tate;
      if ('\x03' < hina_pzl_ctrl.csr_tate) {
        return;
      }
      do {
        hina_pzl_ctrl.csr_tate = hina_pzl_ctrl.csr_tate + '\x01';
        if (3 < hina_pzl_ctrl.csr_tate) {
          hina_pzl_ctrl.csr_tate = cVar2;
          iVar3 = GetPzlSndBankID__Fv();
          iVar4 = 3;
          goto LAB_001c56c4;
        }
        iVar3 = hina_pzl_ctrl.hina_pos[hina_pzl_ctrl.csr_tate][hina_pzl_ctrl.csr_yoko];
        if (iVar3 == -1) {
          hina_pzl_ctrl.csr_tate = cVar2;
          iVar3 = GetPzlSndBankID__Fv();
          iVar4 = 3;
          goto LAB_001c56c4;
        }
      } while (iVar3 == -2);
      piVar5 = no_move_hina;
      iVar4 = 0;
      iVar3 = no_move_hina[0];
      while (piVar5 = piVar5 + 1,
            hina_pzl_ctrl.hina_pos[hina_pzl_ctrl.csr_tate][hina_pzl_ctrl.csr_yoko] != iVar3) {
        iVar4 = iVar4 + 1;
        bVar1 = iVar4 < 2;
        if (!bVar1) goto LAB_001c53ec;
        iVar3 = *piVar5;
      }
      bVar1 = iVar4 < 2;
LAB_001c53ec:
      if (bVar1) {
        hina_pzl_ctrl.csr_tate = cVar2;
        iVar3 = GetPzlSndBankID__Fv();
        iVar4 = 3;
        goto LAB_001c56c4;
      }
    }
  }
  else {
    cVar2 = hina_pzl_ctrl.csr_tate;
    if (hina_pzl_ctrl.csr_tate < '\0') {
      return;
    }
    do {
      hina_pzl_ctrl.csr_tate = hina_pzl_ctrl.csr_tate + -1;
      if (hina_pzl_ctrl.csr_tate < 0) {
        hina_pzl_ctrl.csr_tate = cVar2;
        iVar3 = GetPzlSndBankID__Fv();
        iVar4 = 3;
        goto LAB_001c56c4;
      }
      iVar3 = hina_pzl_ctrl.hina_pos[hina_pzl_ctrl.csr_tate][hina_pzl_ctrl.csr_yoko];
      if (iVar3 == -1) {
        hina_pzl_ctrl.csr_tate = cVar2;
        iVar3 = GetPzlSndBankID__Fv();
        iVar4 = 3;
        goto LAB_001c56c4;
      }
    } while (iVar3 == -2);
    piVar5 = no_move_hina;
    iVar4 = 0;
    iVar3 = no_move_hina[0];
    while (piVar5 = piVar5 + 1,
          hina_pzl_ctrl.hina_pos[hina_pzl_ctrl.csr_tate][hina_pzl_ctrl.csr_yoko] != iVar3) {
      iVar4 = iVar4 + 1;
      bVar1 = iVar4 < 2;
      if (!bVar1) goto LAB_001c52e4;
      iVar3 = *piVar5;
    }
    bVar1 = iVar4 < 2;
LAB_001c52e4:
    if (bVar1) {
      hina_pzl_ctrl.csr_tate = cVar2;
      iVar3 = GetPzlSndBankID__Fv();
      iVar4 = 3;
      goto LAB_001c56c4;
    }
  }
  iVar3 = GetPzlSndBankID__Fv();
  iVar4 = 0;
LAB_001c56c4:
  hina_pzl_ctrl.snd_id = SndBankPlay(iVar3,iVar4,0,0,0x3200,0x1000,0,(_SND_3D_SET *)0x0);
  return;
}

static void HinaPuzzleDollPosChange() {
	char blank_tate;
	char blank_yoko;
	
  int iVar1;
  int no;
  char blank_tate;
  char blank_yoko;
  
  HinaPuzzleGetBlankPos__FPcT0(&blank_tate,&blank_yoko);
  iVar1 = HinaPuzzleChangeCheck__Fii((int)hina_pzl_ctrl.csr_tate,(int)hina_pzl_ctrl.csr_yoko);
  if (iVar1 == 0) {
    iVar1 = GetPzlSndBankID__Fv();
    no = 3;
  }
  else {
    HinaPuzzleChangeDataPos__Fiiii
              ((int)hina_pzl_ctrl.csr_tate,(int)hina_pzl_ctrl.csr_yoko,(int)blank_tate,
               (int)blank_yoko);
    hina_pzl_ctrl.csr_tate = blank_tate;
    hina_pzl_ctrl.csr_yoko = blank_yoko;
    iVar1 = HinaPuzzleClearCheck__Fv();
    if (iVar1 == 0) {
      iVar1 = GetPzlSndBankID__Fv();
      no = 1;
    }
    else {
      iVar1 = GetPzlSndBankID__Fv();
      no = 4;
    }
  }
  hina_pzl_ctrl.snd_id = SndBankPlay(iVar1,no,0,0,0x3200,0x1000,0,(_SND_3D_SET *)0x0);
  return;
}

static int HinaPuzzleChangeCheck(int csr_tate, int csr_yoko) {
	int res;
	char blank_tate;
	char blank_yoko;
	
  long lVar1;
  long lVar2;
  char blank_tate;
  char blank_yoko;
  
  lVar2 = (long)csr_yoko;
  lVar1 = (long)csr_tate;
  HinaPuzzleGetBlankPos__FPcT0(&blank_tate,&blank_yoko);
  if (blank_tate == lVar1) {
    if (blank_yoko + -1 != lVar2) {
      if (blank_yoko + 1 != lVar2) {
        return 0;
      }
      return 1;
    }
  }
  else {
    if (blank_yoko != lVar2) {
      return 0;
    }
    if ((blank_tate + -1 != lVar1) && (blank_tate + 1 != lVar1)) {
      return 0;
    }
  }
  return 1;
}

static void HinaPuzzleGetBlankPos(char *tate, char *yoko) {
	int i;
	int j;
	char found_flg;
	
  bool bVar1;
  int iVar2;
  int iVar3;
  int (*paiVar4) [4];
  
  bVar1 = false;
  iVar3 = 0;
  paiVar4 = hina_pzl_ctrl.hina_pos;
  do {
    if ((*paiVar4)[0] == -2) {
      *tate = (char)iVar3;
      bVar1 = true;
      *yoko = '\0';
    }
    else {
      for (iVar2 = 1; iVar2 < 4; iVar2 = iVar2 + 1) {
        if (hina_pzl_ctrl.hina_pos[iVar3][iVar2] == -2) {
          *tate = (char)iVar3;
          bVar1 = true;
          *yoko = (char)iVar2;
          break;
        }
      }
    }
    if (bVar1) {
      return;
    }
    iVar3 = iVar3 + 1;
    paiVar4 = paiVar4[1];
    if (3 < iVar3) {
      return;
    }
  } while( true );
}

static void HinaPuzzleChangeDataPos(int tate_a, int yoko_a, int tate_b, int yoko_b) {
	static char __FUNCTION__[24] = {
		/* [0] = */ 72,
		/* [1] = */ 105,
		/* [2] = */ 110,
		/* [3] = */ 97,
		/* [4] = */ 80,
		/* [5] = */ 117,
		/* [6] = */ 122,
		/* [7] = */ 122,
		/* [8] = */ 108,
		/* [9] = */ 101,
		/* [10] = */ 67,
		/* [11] = */ 104,
		/* [12] = */ 97,
		/* [13] = */ 110,
		/* [14] = */ 103,
		/* [15] = */ 101,
		/* [16] = */ 68,
		/* [17] = */ 97,
		/* [18] = */ 116,
		/* [19] = */ 97,
		/* [20] = */ 80,
		/* [21] = */ 111,
		/* [22] = */ 115,
		/* [23] = */ 0
	};
	int tmp;
	
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  if ((((3 < (uint)tate_a) || (3 < (uint)yoko_a)) || (3 < (uint)tate_b)) || (3 < (uint)yoko_b)) {
    SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
    PrintAssertReal("Error! HinaPuzzleChangeDataPos");
  }
  piVar2 = hina_pzl_ctrl.hina_pos[tate_a] + yoko_a;
  piVar3 = hina_pzl_ctrl.hina_pos[tate_b] + yoko_b;
  iVar1 = *piVar2;
  *piVar2 = *piVar3;
  *piVar3 = iVar1;
  return;
}

static void HinaPuzzleExitSelPad() {
  int iVar1;
  
  if (((((pad[0].rpt & 0x8000U) == 0) && (iVar1 = GetPadAnalogRpt__Fi(2), iVar1 == 0)) &&
      ((pad[0].rpt & 0x2000U) == 0)) && (iVar1 = GetPadAnalogRpt__Fi(3), iVar1 == 0)) {
    if (**paddat == 1) {
      if (hina_pzl_ctrl.exit_csr != '\0') {
        HinaPuzzleReqNextSubStep__Fc('\0');
        return;
      }
      HinaPuzzleExitReq__Fv();
      return;
    }
    if (*paddat[1] == 1) {
      iVar1 = GetPzlSndBankID__Fv();
      hina_pzl_ctrl.snd_id = SndBankPlay(iVar1,3,0,0,0x3200,0x1000,0,(_SND_3D_SET *)0x0);
      HinaPuzzleReqNextSubStep__Fc('\0');
    }
  }
  else {
    iVar1 = GetPzlSndBankID__Fv();
    hina_pzl_ctrl.snd_id = SndBankPlay(iVar1,0,0,0,0x3200,0x1000,0,(_SND_3D_SET *)0x0);
    hina_pzl_ctrl.exit_csr = hina_pzl_ctrl.exit_csr ^ 1;
  }
  return;
}

static void HinaPuzzleClearPad() {
  if (**paddat != 1) {
    if (*paddat[1] == 1) {
      HinaPuzzleExitReq__Fv();
    }
    return;
  }
  HinaPuzzleExitReq__Fv();
  return;
}

static void HinaPuzzleTimer() {
  if ((hina_pzl_ctrl.clear_flg == '\0') &&
     (hina_pzl_ctrl.timer = hina_pzl_ctrl.timer + -1, hina_pzl_ctrl.timer < 1)) {
    hina_pzl_ctrl.timer = 0;
    HinaPuzzleReqNextSubStep__Fc('\x03');
  }
  return;
}

static void HinaPuzzleExitReq() {
  hina_pzl_ctrl.step = '\x02';
  hina_pzl_disp.anim_step = '\x03';
  hina_pzl_disp.anim_timer = 0;
  return;
}

static void HinaPuzzleDispInit() {
  hina_pzl_disp.smoke_anim_timer = hina_pzl_cross_disp.anim_timer;
  hina_pzl_disp.stand_anim_timer = 0;
  hina_pzl_disp.anim_step = '\0';
  hina_pzl_disp.anim_timer = 0;
  hina_pzl_disp.sub_anim_step = '\0';
  hina_pzl_disp.sub_anim_timer = 0;
  hina_pzl_disp.csr_anim_timer = 0;
  return;
}

void HinaPuzzleDispMain() {
  uchar uVar1;
  
  if ((byte)hina_pzl_ctrl.step - 1 < 2) {
    if (hina_pzl_disp.anim_step != '\x04') {
      HinaPuzzleBgDisp__FiiUc(0,0,0x80);
      uVar1 = HinaPuzzleSmokeScreenAnim__FPs(&hina_pzl_disp.smoke_anim_timer);
      HinaPuzzleSmokeScreenDisp__FiiUc(0,0,uVar1);
      HinaPuzzleStandFleaDisp__FiiUc(0,0,0x80);
      HinaPuzzleDollsDisp__FiiUc(0,0,0x80);
      uVar1 = HinaPuzzleModeAnimCtrl__Fv();
      HinaPuzzleRemainderTimeDisp__FiiUc(0,0,uVar1);
      SubTitleMain__Fi(1);
      if ((code *)hina_disp_func[hina_pzl_ctrl.sub_step] != (code *)0x0) {
        (*(code *)hina_disp_func[hina_pzl_ctrl.sub_step])(0,0,uVar1);
      }
    }
    HinaPuzzleBlackBgDisp__Fv();
  }
  return;
}

static u_char HinaPuzzleModeAnimCtrl() {
	static char __FUNCTION__[23] = {
		/* [0] = */ 72,
		/* [1] = */ 105,
		/* [2] = */ 110,
		/* [3] = */ 97,
		/* [4] = */ 80,
		/* [5] = */ 117,
		/* [6] = */ 122,
		/* [7] = */ 122,
		/* [8] = */ 108,
		/* [9] = */ 101,
		/* [10] = */ 77,
		/* [11] = */ 111,
		/* [12] = */ 100,
		/* [13] = */ 101,
		/* [14] = */ 65,
		/* [15] = */ 110,
		/* [16] = */ 105,
		/* [17] = */ 109,
		/* [18] = */ 67,
		/* [19] = */ 116,
		/* [20] = */ 114,
		/* [21] = */ 108,
		/* [22] = */ 0
	};
	u_char alpha;
	static ALPHA_ANIM_TBL in_alpha_tbl[2] = {
		/* [0] = */ {
			/* .start_alpha = */ 0,
			/* .end_alpha = */ 128,
			/* .start_time = */ 0,
			/* .end_time = */ 7
		},
		/* [1] = */ {
			/* .start_alpha = */ -1,
			/* .end_alpha = */ -1,
			/* .start_time = */ -1,
			/* .end_time = */ -1
		}
	};
	static ALPHA_ANIM_TBL out_alpha_tbl[2] = {
		/* [0] = */ {
			/* .start_alpha = */ 128,
			/* .end_alpha = */ 0,
			/* .start_time = */ 0,
			/* .end_time = */ 5
		},
		/* [1] = */ {
			/* .start_alpha = */ -1,
			/* .end_alpha = */ -1,
			/* .start_time = */ -1,
			/* .end_time = */ -1
		}
	};
	
  uchar uVar1;
  
  if (hina_pzl_disp.sub_anim_step == '\0') {
    hina_pzl_disp.sub_anim_timer = 0;
    hina_pzl_disp.sub_anim_step = '\x01';
  }
  if (hina_pzl_disp.sub_anim_step == '\x02') {
    hina_pzl_ctrl.in_anim_flg = '\x01';
    return 0x80;
  }
  if (hina_pzl_disp.sub_anim_step < '\x03') {
    if (hina_pzl_disp.sub_anim_step == '\x01') {
      uVar1 = Anim2D_CalcNowAlpha__FPC14ALPHA_ANIM_TBLi
                        ((ALPHA_ANIM_TBL *)in_alpha_tbl_1024,
                         (int)(short)hina_pzl_disp.sub_anim_timer);
      if ((short)(hina_pzl_disp.sub_anim_timer + 1) < 7) {
        hina_pzl_disp.sub_anim_timer = hina_pzl_disp.sub_anim_timer + 1;
        return uVar1;
      }
      hina_pzl_disp.sub_anim_step = '\x02';
      hina_pzl_disp.sub_anim_timer = 0;
      return uVar1;
    }
  }
  else {
    if (hina_pzl_disp.sub_anim_step == '\x03') {
      uVar1 = Anim2D_CalcNowAlpha__FPC14ALPHA_ANIM_TBLi
                        ((ALPHA_ANIM_TBL *)out_alpha_tbl_1025,
                         (int)(short)hina_pzl_disp.sub_anim_timer);
      if ((short)(hina_pzl_disp.sub_anim_timer + 1) < 5) {
        hina_pzl_disp.sub_anim_timer = hina_pzl_disp.sub_anim_timer + 1;
        return uVar1;
      }
      hina_pzl_disp.sub_anim_step = '\x04';
      hina_pzl_disp.sub_anim_timer = 0;
      return uVar1;
    }
    if (hina_pzl_disp.sub_anim_step == '\x04') {
      return '\0';
    }
  }
  SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
  PrintAssertReal("Error! HinaPuzzleModeAnimCtrl");
  return 0x80;
}

static void HinaPuzzleDollSelDisp(int off_x, int off_y, u_char alpha) {
  HinaPuzzleCaptionDisp__FiiUc(0,0,alpha);
  return;
}

static void HinaPuzzleExitSelDisp(int off_x, int off_y, u_char alpha) {
  HinaPuzzleExitConfWinDisp__FiiUc(off_x,off_y,alpha);
  return;
}

static void HinaPuzzleClearDisp(int off_x, int off_y, u_char alpha) {
  HinaPuzzleClearWinDisp__FiiUc(off_x,off_y,alpha);
  return;
}

static void HinaPuzzleTimeOverDisp(int off_x, int off_y, u_char alpha) {
  HinaPuzzleTimeOverWinDisp__FiiUc(off_x,off_y,alpha);
  return;
}

static void HinaPuzzleBgDisp(int off_x, int off_y, u_char alpha) {
	DISP_SPRT bg_ds;
	int i;
	
  void *tm2_addr;
  SPRT_DAT *d;
  int iVar1;
  float fVar2;
  DISP_SPRT bg_ds;
  
  iVar1 = 1;
  fVar2 = (float)off_x;
  tm2_addr = GetPzlTexDataAddr__Fv();
  PK2SendVram__FUiiii((uint)tm2_addr,-1,-1,0);
  d = puzzle_hina_tex;
  do {
    CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&bg_ds,d);
    iVar1 = iVar1 + -1;
    d = d + 1;
    bg_ds.x = bg_ds.x + fVar2;
    bg_ds.y = bg_ds.y + (float)off_y;
    bg_ds.alpha = (uchar)((int)((uint)bg_ds.alpha * (uint)alpha) >> 7);
    DispSprD__FP9DISP_SPRT(&bg_ds);
  } while (-1 < iVar1);
  return;
}

static void HinaPuzzleStandFleaDisp(int off_x, int off_y, u_char alpha) {
	DISP_SPRT stand_ds;
	u_char rgb;
	int i;
	
  uchar uVar1;
  void *tm2_addr;
  int iVar2;
  SPRT_DAT *d;
  float fVar3;
  DISP_SPRT stand_ds;
  
  tm2_addr = GetPzlTexDataAddr__Fv();
  PK2SendVram__FUiiii((uint)tm2_addr,-1,-1,0);
  uVar1 = HinaPuzzleStandFleaAnim__Fv();
  if (0 < hina_pzl_ctrl.timer) {
    fVar3 = (float)off_x;
    iVar2 = 1;
    d = puzzle_hina_tex + 0x2b;
    do {
      CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&stand_ds,d);
      iVar2 = iVar2 + -1;
      d = d + 1;
      stand_ds.x = stand_ds.x + fVar3;
      stand_ds.y = stand_ds.y + (float)off_y;
      stand_ds.alpha = (uchar)((int)((uint)stand_ds.alpha * (uint)alpha) >> 7);
      stand_ds.r = uVar1;
      stand_ds.g = uVar1;
      stand_ds.b = uVar1;
      DispSprD__FP9DISP_SPRT(&stand_ds);
    } while (-1 < iVar2);
  }
  return;
}

static u_char HinaPuzzleStandFleaAnim() {
	static RGB_ANIM_TBL flea_rgb_tbl[3] = {
		/* [0] = */ {
			/* .start_rgb = */ 44,
			/* .end_rgb = */ 128,
			/* .start_time = */ 0,
			/* .end_time = */ 40
		},
		/* [1] = */ {
			/* .start_rgb = */ 128,
			/* .end_rgb = */ 44,
			/* .start_time = */ 40,
			/* .end_time = */ 80
		},
		/* [2] = */ {
			/* .start_rgb = */ -1,
			/* .end_rgb = */ -1,
			/* .start_time = */ -1,
			/* .end_time = */ -1
		}
	};
	
  uchar uVar1;
  
  uVar1 = Anim2D_CalcNowRGB__FPC12RGB_ANIM_TBLi
                    ((RGB_ANIM_TBL *)flea_rgb_tbl_1047,(int)(short)hina_pzl_disp.stand_anim_timer);
  hina_pzl_disp.stand_anim_timer = hina_pzl_disp.stand_anim_timer + 1;
  if (0x4f < (short)hina_pzl_disp.stand_anim_timer) {
    hina_pzl_disp.stand_anim_timer = 0;
  }
  return uVar1;
}

static void HinaPuzzleDollsFleaDisp(int off_x, int off_y, u_char alpha) {
	DISP_SPRT flea_ds;
	u_char rgb;
	int i;
	static float scale_tbl[4] = {
		/* [0] = */ 0.929999948f,
		/* [1] = */ 0.96f,
		/* [2] = */ 1.f,
		/* [3] = */ 1.03f
	};
	
  bool bVar1;
  void *tm2_addr;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  float fVar6;
  DISP_SPRT flea_ds;
  
  tm2_addr = GetPzlTexDataAddr__Fv();
  PK2SendVram__FUiiii((uint)tm2_addr,-1,-1,0);
  flea_ds.r = HinaPuzzleDollsFleaAnim__Fv();
  iVar3 = hina_pzl_ctrl.hina_pos[hina_pzl_ctrl.csr_tate][hina_pzl_ctrl.csr_yoko];
  if (1 < iVar3 + 2U) {
    piVar5 = no_move_hina;
    iVar4 = 0;
    iVar2 = no_move_hina[0];
    while (piVar5 = piVar5 + 1, iVar3 != iVar2) {
      iVar4 = iVar4 + 1;
      bVar1 = iVar4 < 2;
      if (!bVar1) goto LAB_001c61e4;
      iVar2 = *piVar5;
    }
    bVar1 = iVar4 < 2;
LAB_001c61e4:
    if (!bVar1) {
      CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&flea_ds,puzzle_hina_tex + iVar3 + 9);
      iVar3 = (int)hina_pzl_ctrl.csr_tate;
      flea_ds.scw = *(float *)(scale_tbl_1051 + iVar3 * 4);
      flea_ds.y = hina_flea_pos_y[iVar3][hina_pzl_ctrl.csr_yoko] + (float)off_y;
      flea_ds.x = hina_flea_pos_x[iVar3][hina_pzl_ctrl.csr_yoko] + (float)off_x;
      flea_ds.alphar = 0x48;
      flea_ds.alpha = (uchar)((int)((uint)flea_ds.alpha * (uint)alpha) >> 7);
      if ((int)flea_ds.w < 0) {
        fVar6 = (float)(flea_ds.w & 1 | flea_ds.w >> 1);
        fVar6 = fVar6 + fVar6;
      }
      else {
        fVar6 = (float)flea_ds.w;
      }
      flea_ds.csx = flea_ds.x + fVar6 * 0.5;
      if ((int)flea_ds.h < 0) {
        fVar6 = (float)(flea_ds.h & 1 | flea_ds.h >> 1);
        fVar6 = fVar6 + fVar6;
      }
      else {
        fVar6 = (float)flea_ds.h;
      }
      flea_ds.csy = flea_ds.y + fVar6 * 0.5;
      flea_ds.sch = flea_ds.scw;
      flea_ds.g = flea_ds.r;
      flea_ds.b = flea_ds.r;
      DispSprD__FP9DISP_SPRT(&flea_ds);
    }
  }
  return;
}

static u_char HinaPuzzleDollsFleaAnim() {
	static RGB_ANIM_TBL flea_rgb_tbl[3] = {
		/* [0] = */ {
			/* .start_rgb = */ 64,
			/* .end_rgb = */ 115,
			/* .start_time = */ 0,
			/* .end_time = */ 30
		},
		/* [1] = */ {
			/* .start_rgb = */ 115,
			/* .end_rgb = */ 64,
			/* .start_time = */ 30,
			/* .end_time = */ 60
		},
		/* [2] = */ {
			/* .start_rgb = */ -1,
			/* .end_rgb = */ -1,
			/* .start_time = */ -1,
			/* .end_time = */ -1
		}
	};
	
  uchar uVar1;
  
  uVar1 = Anim2D_CalcNowRGB__FPC12RGB_ANIM_TBLi
                    ((RGB_ANIM_TBL *)flea_rgb_tbl_1055,(int)(short)hina_pzl_disp.csr_anim_timer);
  hina_pzl_disp.csr_anim_timer = hina_pzl_disp.csr_anim_timer + 1;
  if (0x3b < (short)hina_pzl_disp.csr_anim_timer) {
    hina_pzl_disp.csr_anim_timer = 0;
  }
  return uVar1;
}

static void HinaPuzzleDollsDisp(int off_x, int off_y, u_char alpha) {
	DISP_SPRT doll_ds;
	int i;
	int j;
	static float scale_tbl[4] = {
		/* [0] = */ 0.929999948f,
		/* [1] = */ 0.96f,
		/* [2] = */ 1.f,
		/* [3] = */ 1.03f
	};
	
  void *tm2_addr;
  int iVar1;
  int (*paiVar2) [4];
  long lVar3;
  int iVar4;
  long lVar5;
  float fVar6;
  DISP_SPRT doll_ds;
  HINA_PZL_CTRL *local_70;
  
  lVar5 = 0;
  tm2_addr = GetPzlTexDataAddr__Fv();
  PK2SendVram__FUiiii((uint)tm2_addr,-1,-1,0);
  local_70 = &hina_pzl_ctrl;
  do {
    iVar4 = (int)lVar5;
    lVar3 = 0;
    iVar1 = iVar4 << 4;
    paiVar2 = local_70->hina_pos;
    do {
      if (1 < (*paiVar2)[0] + 2U) {
        if (((hina_pzl_ctrl.csr_tate == lVar5) && (hina_pzl_ctrl.csr_yoko == lVar3)) &&
           (0 < hina_pzl_ctrl.timer)) {
          HinaPuzzleDollsFleaDisp__FiiUc(off_x,off_y,alpha);
        }
        CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT
                  (&doll_ds,puzzle_hina_tex + *(int *)((int)hina_pzl_ctrl.hina_pos + iVar1));
        doll_ds.x = *(float *)((int)hina_pos_x + iVar1) + (float)off_x;
        doll_ds.scw = (float)(&scale_tbl_1059)[iVar4];
        doll_ds.y = *(float *)((int)hina_pos_y + iVar1) + (float)off_y;
        doll_ds.alpha = (uchar)((int)((uint)doll_ds.alpha * (uint)alpha) >> 7);
        if ((int)doll_ds.w < 0) {
          fVar6 = (float)(doll_ds.w & 1 | doll_ds.w >> 1);
          fVar6 = fVar6 + fVar6;
        }
        else {
          fVar6 = (float)doll_ds.w;
        }
        doll_ds.csx = doll_ds.x + fVar6 * 0.5;
        if ((int)doll_ds.h < 0) {
          fVar6 = (float)(doll_ds.h & 1 | doll_ds.h >> 1);
          fVar6 = fVar6 + fVar6;
        }
        else {
          fVar6 = (float)doll_ds.h;
        }
        doll_ds.csy = doll_ds.y + fVar6 * 0.5;
        doll_ds.sch = doll_ds.scw;
        DispSprD__FP9DISP_SPRT(&doll_ds);
      }
      lVar3 = (long)((int)lVar3 + 1);
      iVar1 = iVar1 + 4;
      paiVar2 = (int (*) [4])(*paiVar2 + 1);
    } while (lVar3 < 4);
    lVar5 = (long)(iVar4 + 1);
    local_70 = (HINA_PZL_CTRL *)(local_70->hina_pos + 1);
  } while (lVar5 < 4);
  return;
}

static void HinaPuzzleSmokeScreenDisp(int off_x, int off_y, u_char alpha) {
	DISP_SPRT smoke_ds;
	
  void *tm2_addr;
  float fVar1;
  DISP_SPRT smoke_ds;
  
  tm2_addr = GetPzlTexDataAddr__Fv();
  PK2SendVram__FUiiii((uint)tm2_addr,-1,-1,0);
  CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&smoke_ds,puzzle_hina_tex + 0x2a);
  smoke_ds.csx = smoke_ds.x + (float)off_x;
  smoke_ds.csy = smoke_ds.y + (float)off_y;
  if ((int)smoke_ds.w < 0) {
    fVar1 = (float)(smoke_ds.w & 1 | smoke_ds.w >> 1);
    fVar1 = fVar1 + fVar1;
  }
  else {
    fVar1 = (float)smoke_ds.w;
  }
  smoke_ds.scw = 640.0 / fVar1;
  if ((int)smoke_ds.h < 0) {
    fVar1 = (float)(smoke_ds.h & 1 | smoke_ds.h >> 1);
    fVar1 = fVar1 + fVar1;
  }
  else {
    fVar1 = (float)smoke_ds.h;
  }
  smoke_ds.sch = 448.0 / fVar1;
  smoke_ds.alphar = 0x46;
  smoke_ds.x = smoke_ds.csx;
  smoke_ds.y = smoke_ds.csy;
  smoke_ds.alpha = alpha;
  DispSprD__FP9DISP_SPRT(&smoke_ds);
  return;
}

static u_char HinaPuzzleSmokeScreenAnim(short int *timer) {
	u_char alpha;
	static ALPHA_ANIM_TBL smoke_alpha_tbl[3] = {
		/* [0] = */ {
			/* .start_alpha = */ 0,
			/* .end_alpha = */ 38,
			/* .start_time = */ 0,
			/* .end_time = */ 60
		},
		/* [1] = */ {
			/* .start_alpha = */ 38,
			/* .end_alpha = */ 0,
			/* .start_time = */ 60,
			/* .end_time = */ 120
		},
		/* [2] = */ {
			/* .start_alpha = */ -1,
			/* .end_alpha = */ -1,
			/* .start_time = */ -1,
			/* .end_time = */ -1
		}
	};
	
  ushort uVar1;
  uchar uVar2;
  
  uVar2 = Anim2D_CalcNowAlpha__FPC14ALPHA_ANIM_TBLi
                    ((ALPHA_ANIM_TBL *)smoke_alpha_tbl_1066,(int)(short)*timer);
  uVar1 = *timer;
  *timer = uVar1 + 1;
  if (0x77 < (short)(uVar1 + 1)) {
    *timer = 0;
  }
  return uVar2 + 'f';
}

static void HinaPuzzleRemainderTimeDisp(int off_x, int off_y, u_char alpha) {
	DISP_SPRT time_ds;
	u_char num_alpha;
	
  void *tm2_addr;
  int iVar1;
  uint uVar2;
  float fVar3;
  DISP_SPRT time_ds;
  
  fVar3 = (float)off_y;
  uVar2 = 0x80;
  if (hina_pzl_ctrl.in_anim_flg == '\0') {
    uVar2 = (uint)alpha;
  }
  tm2_addr = GetPzlTexDataAddr__Fv();
  PK2SendVram__FUiiii((uint)tm2_addr,-1,-1,0);
  CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&time_ds,puzzle_hina_tex + 0x12);
  time_ds.x = time_ds.x + (float)off_x;
  time_ds.y = time_ds.y + fVar3;
  time_ds.alpha = (uchar)((int)(time_ds.alpha * uVar2) >> 7);
  DispSprD__FP9DISP_SPRT(&time_ds);
  CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&time_ds,puzzle_hina_tex + 0x13);
  time_ds.x = time_ds.x + (float)off_x;
  time_ds.y = time_ds.y + fVar3;
  time_ds.alpha = (uchar)((int)(time_ds.alpha * uVar2) >> 7);
  DispSprD__FP9DISP_SPRT(&time_ds);
  iVar1 = GetPALMode__Fv();
  if (iVar1 == 0) {
    if (hina_pzl_ctrl.timer < 0x12d) {
      alpha = HinaPuzzleWarningTimeAnim__Fi(hina_pzl_ctrl.timer);
    }
    HinaPuzzleNumberDisp__FiiffUciUc(hina_pzl_ctrl.timer / 0x708,2,486.0,33.0,alpha,0xa0,'\x01');
    HinaPuzzleNumberDisp__FiiffUciUc
              ((hina_pzl_ctrl.timer % 0x708) / 0x1e,2,DAT_003ee424,33.0,alpha,0xa0,'\x01');
  }
  else {
    if (hina_pzl_ctrl.timer < 0xfb) {
      alpha = HinaPuzzleWarningTimeAnim__Fi(hina_pzl_ctrl.timer);
    }
    HinaPuzzleNumberDisp__FiiffUciUc(hina_pzl_ctrl.timer / 0x5dc,2,486.0,33.0,alpha,0xa0,'\x01');
    HinaPuzzleNumberDisp__FiiffUciUc
              ((hina_pzl_ctrl.timer % 0x5dc) / 0x19,2,DAT_003ee420,33.0,alpha,0xa0,'\x01');
  }
  return;
}

static void HinaPuzzleCaptionDisp(int off_x, int off_y, u_char alpha) {
	DISP_SPRT time_ds;
	
  void *tm2_addr;
  float fVar1;
  DISP_SPRT time_ds;
  
  fVar1 = (float)off_x;
  tm2_addr = GetPzlTexDataAddr__Fv();
  PK2SendVram__FUiiii((uint)tm2_addr,-1,-1,0);
  CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&time_ds,puzzle_hina_tex + 0x28);
  time_ds.x = time_ds.x + fVar1;
  time_ds.y = time_ds.y + (float)off_y;
  time_ds.alpha = (uchar)((int)((uint)time_ds.alpha * (uint)alpha) >> 7);
  DispSprD__FP9DISP_SPRT(&time_ds);
  CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&time_ds,puzzle_hina_tex + 0x29);
  time_ds.x = time_ds.x + fVar1;
  time_ds.y = time_ds.y + (float)off_y;
  time_ds.alpha = (uchar)((int)((uint)time_ds.alpha * (uint)alpha) >> 7);
  DispSprD__FP9DISP_SPRT(&time_ds);
  return;
}

void HinaPuzzleNumberDisp(int data, int num, float x, float y, u_char alpha, int pri, u_char zero_flg) {
	int i;
	int j;
	int tmp;
	int ten_tmp;
	u_char set_flg;
	
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  bVar1 = zero_flg == '\x01';
  if (0 < num) {
    iVar5 = 0;
    do {
      iVar3 = 1;
      iVar4 = num + -1;
      iVar2 = iVar4;
      if (iVar4 < 1) {
        iVar3 = 1;
      }
      else {
        do {
          iVar2 = iVar2 + -1;
          iVar3 = iVar3 * 10;
        } while (iVar2 != 0);
      }
      if (iVar3 == 0) {
        trap(7);
      }
      if (data / iVar3 != 0) {
        bVar1 = true;
      }
      if (((zero_flg == '\0') && (data == 0)) && (num == 1)) {
        bVar1 = true;
      }
      if (num == 1) {
        iVar2 = data % 10;
      }
      else {
        iVar2 = (data / iVar3) % 10;
      }
      if (bVar1) {
        HinaPuzzleNumberDisp_One__FiffUci(iVar2,x + (float)iVar5,y,alpha,pri);
      }
      iVar5 = iVar5 + 0x12;
      num = iVar4;
    } while (0 < iVar4);
  }
  return;
}

void HinaPuzzleNumberDisp_One(int data, float x, float y, u_char alpha, int pri) {
	static char __FUNCTION__[25] = {
		/* [0] = */ 72,
		/* [1] = */ 105,
		/* [2] = */ 110,
		/* [3] = */ 97,
		/* [4] = */ 80,
		/* [5] = */ 117,
		/* [6] = */ 122,
		/* [7] = */ 122,
		/* [8] = */ 108,
		/* [9] = */ 101,
		/* [10] = */ 78,
		/* [11] = */ 117,
		/* [12] = */ 109,
		/* [13] = */ 98,
		/* [14] = */ 101,
		/* [15] = */ 114,
		/* [16] = */ 68,
		/* [17] = */ 105,
		/* [18] = */ 115,
		/* [19] = */ 112,
		/* [20] = */ 95,
		/* [21] = */ 79,
		/* [22] = */ 110,
		/* [23] = */ 101,
		/* [24] = */ 0
	};
	DISP_SPRT num_ds;
	
  void *tm2_addr;
  int iVar1;
  DISP_SPRT num_ds;
  
  if (9 < data) {
    SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
    PrintAssertReal("Error!! HinaPuzzleNumberDisp_One()");
  }
  tm2_addr = GetPzlTexDataAddr__Fv();
  PK2SendVram__FUiiii((uint)tm2_addr,-1,-1,0);
  iVar1 = GetPALMode__Fv();
  if (iVar1 == 0) {
    if (900 < hina_pzl_ctrl.timer) {
      CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&num_ds,puzzle_hina_tex + data + 0x14);
      goto LAB_001c6d18;
    }
  }
  else if (0x2ee < hina_pzl_ctrl.timer) {
    CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&num_ds,puzzle_hina_tex + data + 0x14);
    goto LAB_001c6d18;
  }
  CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&num_ds,puzzle_hina_tex + data + 0x1e);
LAB_001c6d18:
  num_ds.z = 0xfffff - (pri & 0xfffffU);
  num_ds.x = x;
  num_ds.y = y;
  num_ds.pri = pri;
  num_ds.alpha = alpha;
  DispSprD__FP9DISP_SPRT(&num_ds);
  return;
}

static u_char HinaPuzzleWarningTimeAnim(int timer) {
	u_char alpha;
	static ALPHA_ANIM_TBL num_alpha_tbl[3] = {
		/* [0] = */ {
			/* .start_alpha = */ 0,
			/* .end_alpha = */ 128,
			/* .start_time = */ 0,
			/* .end_time = */ 4
		},
		/* [1] = */ {
			/* .start_alpha = */ 128,
			/* .end_alpha = */ 128,
			/* .start_time = */ 4,
			/* .end_time = */ 26
		},
		/* [2] = */ {
			/* .start_alpha = */ 128,
			/* .end_alpha = */ 0,
			/* .start_time = */ 26,
			/* .end_time = */ 30
		}
	};
	static ALPHA_ANIM_TBL num_alpha_tbl_pal[3] = {
		/* [0] = */ {
			/* .start_alpha = */ 0,
			/* .end_alpha = */ 128,
			/* .start_time = */ 0,
			/* .end_time = */ 4
		},
		/* [1] = */ {
			/* .start_alpha = */ 128,
			/* .end_alpha = */ 128,
			/* .start_time = */ 4,
			/* .end_time = */ 21
		},
		/* [2] = */ {
			/* .start_alpha = */ 128,
			/* .end_alpha = */ 0,
			/* .start_time = */ 21,
			/* .end_time = */ 30
		}
	};
	
  uchar uVar1;
  uchar uVar2;
  int iVar3;
  
  iVar3 = GetPALMode__Fv();
  if (iVar3 == 0) {
    uVar2 = Anim2D_CalcNowAlpha__FPC14ALPHA_ANIM_TBLi
                      ((ALPHA_ANIM_TBL *)num_alpha_tbl_1082,timer % 0x1e);
    uVar1 = 0x80;
    if (0x19 < timer) {
      uVar1 = uVar2;
    }
  }
  else {
    uVar1 = Anim2D_CalcNowAlpha__FPC14ALPHA_ANIM_TBLi
                      ((ALPHA_ANIM_TBL *)num_alpha_tbl_pal_1083,timer % 0x19);
    if (timer < 0x15) {
      uVar1 = 0x80;
    }
  }
  return uVar1;
}

static void HinaPuzzleBlackBgDisp() {
	u_char alpha;
	DISP_SQAR dsq;
	SQAR_DAT hina_pzl_bg;
	
  undefined *puVar1;
  uint uVar2;
  ulong *puVar3;
  uchar *puVar4;
  uchar alpha;
  DISP_SQAR dsq;
  SQAR_DAT hina_pzl_bg;
  
  puVar1 = (undefined *)((int)&hina_pzl_bg.h + 3);
  uVar2 = (uint)puVar1 & 7;
  puVar3 = (ulong *)(puVar1 + -uVar2);
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | DAT_003b9010 >> (7 - uVar2) * 8;
  hina_pzl_bg._0_8_ = DAT_003b9010;
  puVar1 = (undefined *)((int)&hina_pzl_bg.y + 3);
  uVar2 = (uint)puVar1 & 7;
  puVar3 = (ulong *)(puVar1 + -uVar2);
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | DAT_003b9018 >> (7 - uVar2) * 8;
  hina_pzl_bg._8_8_ = DAT_003b9018;
  uVar2 = (uint)&hina_pzl_bg.alpha & 7;
  puVar4 = &hina_pzl_bg.alpha + -uVar2;
  *(ulong *)puVar4 = *(ulong *)puVar4 & -1L << (uVar2 + 1) * 8 | DAT_003b9020 >> (7 - uVar2) * 8;
  hina_pzl_bg._16_8_ = DAT_003b9020;
  alpha = '\0';
  HinaPuzzleAnim__FPcPsPUc(&hina_pzl_disp.anim_step,&hina_pzl_disp.anim_timer,&alpha);
  CopySqrDToSqr__FP9DISP_SQARP8SQAR_DAT(&dsq,&hina_pzl_bg);
  dsq.alpha = alpha;
  DispSqrD__FP9DISP_SQAR(&dsq);
  return;
}

static void HinaPuzzleAnim(char *anim_step, short int *anim_timer, u_char *alpha) {
	static ALPHA_ANIM_TBL hina_out_alpha[2] = {
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
	
  char cVar1;
  ushort uVar2;
  uchar uVar3;
  
  if (*anim_step == '\0') {
    *anim_timer = 0;
    *anim_step = '\x01';
  }
  if ((short)*anim_timer < 0) {
    printf("<<<<<<<<<WARNING FILE[%s] LINE[%d]>>>>>>>>>>\n");
    PrintWarningReal("Warning!! HinaPuzzleAnim()");
    cVar1 = *anim_step;
  }
  else {
    cVar1 = *anim_step;
  }
  if (cVar1 == '\x02') {
    *alpha = '\0';
  }
  else if (cVar1 < '\x03') {
    if (cVar1 == '\x01') {
      *alpha = '\0';
      *anim_step = '\x02';
    }
  }
  else if (cVar1 == '\x03') {
    uVar3 = Anim2D_CalcNowAlpha__FPC14ALPHA_ANIM_TBLi
                      ((ALPHA_ANIM_TBL *)hina_out_alpha_1090,(int)(short)*anim_timer);
    *alpha = uVar3;
    uVar2 = *anim_timer;
    *anim_timer = uVar2 + 1;
    if (0x1d < (short)(uVar2 + 1)) {
      *anim_step = '\x04';
    }
  }
  return;
}

static void HinaPuzzleExitConfWinDisp(int off_x, int off_y, u_char alpha) {
	DISP_STR ds;
	
  DISP_STR ds;
  
  SetMsgDefData__FP8DISP_STRi(&ds,0x44);
  HinaPuzzleCmnWinDisp__FiiUc(off_x,off_y,alpha);
  DrawCmnSelCsr__FUiffUcfUc
            (0,(float)(hina_pzl_ctrl.exit_csr * 0xcf + off_x + 0x9b),(float)(off_y + 0x184),alpha,
             0.0,'\0');
  DrawCmnSelYes__FUiffUc(0,(float)(off_x + 0x99),(float)(off_y + 0x186),alpha);
  DrawCmnSelNo__FUiffUc(0,(float)(off_x + 0x169),(float)(off_y + 0x186),alpha);
  PrintMsg__Fiiiiiii(0x44,4,ds.pos_x,ds.pos_y,1,(uint)alpha,0);
  return;
}

static void HinaPuzzleClearWinDisp(int off_x, int off_y, u_char alpha) {
	DISP_STR ds;
	
  DISP_STR ds;
  
  SetMsgDefData__FP8DISP_STRi(&ds,0x44);
  HinaPuzzleCmnWinDisp__FiiUc(off_x,off_y,alpha);
  PrintMsg__Fiiiiiii(0x44,3,ds.pos_x,ds.pos_y,1,(uint)alpha,0);
  return;
}

static void HinaPuzzleTimeOverWinDisp(int off_x, int off_y, u_char alpha) {
	DISP_STR ds;
	
  DISP_STR ds;
  
  SetMsgDefData__FP8DISP_STRi(&ds,0x44);
  HinaPuzzleCmnWinDisp__FiiUc(off_x,off_y,alpha);
  PrintMsg__Fiiiiiii(0x44,1,ds.pos_x,ds.pos_y,1,(uint)alpha,0);
  return;
}

static void HinaPuzzleCmnWinDisp(int off_x, int off_y, u_char alpha) {
	MSG_WIN_DAT win_dat;
	
  MSG_WIN_DAT win_dat;
  
  SetMsgWinDefData__FP11MSG_WIN_DATi(&win_dat,0x44);
  DrawCmnWindow__FUiffffUcUc(0,win_dat.x,win_dat.y,win_dat.w,win_dat.h,alpha,0x80);
  return;
}

void HinaPuzzleCrossScreenDisp(int off_x, int off_y, u_char alpha) {
	DISP_SQAR dsq;
	SQAR_DAT cross_bg;
	
  undefined *puVar1;
  uint uVar2;
  ulong *puVar3;
  uchar *puVar4;
  uchar alpha_00;
  DISP_SQAR dsq;
  SQAR_DAT cross_bg;
  
  puVar1 = (undefined *)((int)&cross_bg.h + 3);
  uVar2 = (uint)puVar1 & 7;
  puVar3 = (ulong *)(puVar1 + -uVar2);
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | DAT_003b9088 >> (7 - uVar2) * 8;
  cross_bg._0_8_ = DAT_003b9088;
  puVar1 = (undefined *)((int)&cross_bg.y + 3);
  uVar2 = (uint)puVar1 & 7;
  puVar3 = (ulong *)(puVar1 + -uVar2);
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | DAT_003b9090 >> (7 - uVar2) * 8;
  cross_bg._8_8_ = DAT_003b9090;
  uVar2 = (uint)&cross_bg.alpha & 7;
  puVar4 = &cross_bg.alpha + -uVar2;
  *(ulong *)puVar4 = *(ulong *)puVar4 & -1L << (uVar2 + 1) * 8 | DAT_003b9098 >> (7 - uVar2) * 8;
  cross_bg._16_8_ = DAT_003b9098;
  HinaPuzzleBgDisp__FiiUc(off_x,off_y,0x80);
  alpha_00 = HinaPuzzleSmokeScreenAnim__FPs(&hina_pzl_cross_disp.anim_timer);
  HinaPuzzleSmokeScreenDisp__FiiUc(off_x,off_y,alpha_00);
  HinaPuzzleCrossDollsDisp__FiiUc(0,0,0x80);
  CopySqrDToSqr__FP9DISP_SQARP8SQAR_DAT(&dsq,&cross_bg);
  dsq.alpha = (uchar)((int)((uint)dsq.alpha * (uint)alpha) >> 7);
  DispSqrD__FP9DISP_SQAR(&dsq);
  return;
}

static void HinaPuzzleCrossDollsDisp(int off_x, int off_y, u_char alpha) {
	DISP_SPRT doll_ds;
	int i;
	int j;
	static float scale_tbl[4] = {
		/* [0] = */ 0.929999948f,
		/* [1] = */ 0.96f,
		/* [2] = */ 1.f,
		/* [3] = */ 1.03f
	};
	
  int iVar1;
  void *tm2_addr;
  int iVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  DISP_SPRT doll_ds;
  
  iVar4 = 0;
  tm2_addr = GetPzlTexDataAddr__Fv();
  PK2SendVram__FUiiii((uint)tm2_addr,-1,-1,0);
  do {
    iVar2 = iVar4 << 4;
    iVar3 = 3;
    do {
      iVar1 = *(int *)((int)hina_first_pos + iVar2);
      if (1 < iVar1 + 2U) {
        CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&doll_ds,puzzle_hina_tex + iVar1);
        doll_ds.x = *(float *)((int)hina_pos_x + iVar2) + (float)off_x;
        doll_ds.scw = (float)(&scale_tbl_1109)[iVar4];
        doll_ds.y = *(float *)((int)hina_pos_y + iVar2) + (float)off_y;
        doll_ds.alpha = (uchar)((int)((uint)doll_ds.alpha * (uint)alpha) >> 7);
        if ((int)doll_ds.w < 0) {
          fVar5 = (float)(doll_ds.w & 1 | doll_ds.w >> 1);
          fVar5 = fVar5 + fVar5;
        }
        else {
          fVar5 = (float)doll_ds.w;
        }
        doll_ds.csx = doll_ds.x + fVar5 * 0.5;
        if ((int)doll_ds.h < 0) {
          fVar5 = (float)(doll_ds.h & 1 | doll_ds.h >> 1);
          fVar5 = fVar5 + fVar5;
        }
        else {
          fVar5 = (float)doll_ds.h;
        }
        doll_ds.csy = doll_ds.y + fVar5 * 0.5;
        doll_ds.sch = doll_ds.scw;
        DispSprD__FP9DISP_SPRT(&doll_ds);
      }
      iVar3 = iVar3 + -1;
      iVar2 = iVar2 + 4;
    } while (-1 < iVar3);
    iVar4 = iVar4 + 1;
  } while (iVar4 < 4);
  return;
}
