// STATUS: NOT STARTED

#include "roku_pzl.h"

typedef struct {
	char step;
	char sub_step;
	char next_sub_step;
	char clear_flg;
	char book_sel_csr;
	char next_book_csr;
	char book_shelf_csr;
	char exit_csr;
	int snd_id;
	fixed_array<int,5> have_book;
	fixed_array<int,5> book_shelf;
	fixed_array<int,5> order_enter_book;
} SIX_PZL_CTRL;

typedef struct {
	char anim_step;
	char sub_anim_step;
	short int anim_timer;
	short int sub_anim_timer;
	char move_anim_step;
	char move_rot;
	char msg_anim_step;
	char cap_win_anim_flg;
	short int move_anim_timer;
	short int msg_anim_timer;
	short int shelf_anim_timer;
} SIX_PZL_DISP;

static void (*six_pzl_pad_func[7])(/* parameters unknown */) = {
	/* [0] = */ SixPuzzleBookSelPad,
	/* [1] = */ SixPuzzleBookShelfPad,
	/* [2] = */ SixPuzzleBookReadPad,
	/* [3] = */ SixPuzzleMsgReadPad,
	/* [4] = */ SixPuzzleExitPad,
	/* [5] = */ SixPuzzleClearPad,
	/* [6] = */ SixPuzzleFailurePad
};

static SIX_PZL_CTRL six_pzl_ctrl;
static SIX_PZL_DISP six_pzl_disp;

static void _fixed_array_assert(char *strType, size_t v0, size_t v1) {
	static char *str = 0x3c4720;
	
  g3ddbgAssert__FbPCce(false,str_646);
  return (int *)v;
}

static void** void * * _fixed_array_verifyrange<void *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_verifyrange__H1Zi_UiUi_PX01(0x3f3b98,_max);
  }
  return (void **)0x0;
}

static char** char * * _fixed_array_verifyrange<char *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_verifyrange__H1Zi_UiUi_PX01(0x3f3ba0,_max);
  }
  return (char **)0x0;
}

static unsigned int** unsigned int * * _fixed_array_verifyrange<unsigned int *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_verifyrange__H1Zi_UiUi_PX01(0x3c4768,_max);
  }
  return (uint **)0x0;
}

void SixPuzzleExeInit() {
  SixPuzzleCtrlInit__Fv();
  SixPuzzleDispInit__Fv();
  return;
}

static void SixPuzzleCtrlInit() {
	int i;
	
  int iVar1;
  int iVar2;
  fixed_array<int,5> *pfVar3;
  
  pfVar3 = &six_pzl_ctrl.have_book;
  six_pzl_ctrl.exit_csr = '\x01';
  six_pzl_ctrl.step = '\0';
  six_pzl_ctrl.sub_step = '\x01';
  six_pzl_ctrl.next_sub_step = '\x01';
  six_pzl_ctrl.clear_flg = '\0';
  six_pzl_ctrl.book_sel_csr = '\0';
  six_pzl_ctrl.next_book_csr = '\0';
  six_pzl_ctrl.book_shelf_csr = '\0';
  iVar1 = 0;
  do {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Zi_UiUi_PX01(iVar1,5);
    (pfVar3->field0_0x0).m_aData[0] = 1;
    _fixed_array_verifyrange__H1Zi_UiUi_PX01(iVar1,5);
    pfVar3[1].field0_0x0.m_aData[0] = -1;
                    /* end of inlined section */
    iVar2 = iVar1 + 1;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Zi_UiUi_PX01(iVar1,5);
    pfVar3[2].field0_0x0.m_aData[0] = -1;
                    /* end of inlined section */
    pfVar3 = (fixed_array<int,5> *)((pfVar3->field0_0x0).m_aData + 1);
    iVar1 = iVar2;
  } while (iVar2 < 5);
  return;
}

int SixPuzzleMain() {
	int res;
	
  int iVar1;
  
  if (six_pzl_ctrl.step == '\0') {
    SixPuzzleDispInit__Fv();
    six_pzl_ctrl.step = '\x01';
  }
  if (((six_pzl_ctrl.step == '\x01') &&
      (SixPuzzleSubOutAnimCheck__Fv(), six_pzl_disp.sub_anim_step == '\x02')) &&
     ((code *)six_pzl_pad_func[six_pzl_ctrl.sub_step] != (code *)0x0)) {
    (*(code *)six_pzl_pad_func[six_pzl_ctrl.sub_step])();
  }
  if (((six_pzl_ctrl.step == '\x02') && (six_pzl_disp.anim_step == '\x04')) &&
     (iVar1 = SndBufIsPlaying(six_pzl_ctrl.snd_id), iVar1 == 0)) {
    iVar1 = GetPzlSndBankID__Fv();
    SndBankRelease(iVar1);
    FinderBankSetup__Fv();
    six_pzl_ctrl.step = '\x03';
  }
  if ((six_pzl_ctrl.step == '\x03') && (iVar1 = FinderBankIsReady__Fv(), iVar1 != 0)) {
    SetMsgFirstPage__Fv();
    SetNextGPhase__F14GPHASE_ID_ENUM(GID_STORY_NORMAL);
  }
  return 1;
}

static void SixPuzzleReqNextSubStep(char next_step) {
  six_pzl_ctrl.next_sub_step = next_step;
  six_pzl_disp.sub_anim_step = '\x03';
  six_pzl_disp.sub_anim_timer = 0;
  return;
}

static void SixPuzzleSubOutAnimCheck() {
  int iVar1;
  
  if (six_pzl_disp.sub_anim_step == '\x04') {
    six_pzl_disp.sub_anim_step = '\0';
    six_pzl_ctrl.sub_step = six_pzl_ctrl.next_sub_step;
    SetMsgFirstPage__Fv();
    iVar1 = SixPuzzleClearCheck__Fv();
    if (iVar1 != 0) {
      iVar1 = GetPzlSndBankID__Fv();
      six_pzl_ctrl.snd_id = SndBankPlay(iVar1,3,0,0,0x3200,0x1000,0,(_SND_3D_SET *)0x0);
    }
  }
  return;
}

static int SixPuzzleClearCheck() {
	int i;
	int res;
	
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 0;
  do {
    if (4 < iVar3) {
      PuzzleClear__Fi(1);
      return 1;
    }
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Zi_UiUi_PX01(iVar3,5);
    piVar2 = (int *)((int)six_puzzle_answer.field0_0x0.m_aData + iVar3 * 4);
    piVar1 = six_pzl_ctrl.book_shelf.field0_0x0.m_aData + iVar3;
    _fixed_array_verifyrange__H1Zi_UiUi_PX01(iVar3,5);
    iVar3 = iVar3 + 1;
  } while (*piVar2 == *piVar1);
  return 0;
}

static void SixPuzzleBookSelPad() {
	int i;
	
  int iVar1;
  int iVar2;
  
  if (((pad[0].rpt & 0x8000U) == 0) && (iVar2 = GetPadAnalogRpt__Fi(2), iVar2 == 0)) {
    if (((pad[0].rpt & 0x2000U) == 0) && (iVar2 = GetPadAnalogRpt__Fi(3), iVar2 == 0)) {
      if (**paddat == 1) {
        iVar2 = GetPzlSndBankID__Fv();
        six_pzl_ctrl.snd_id = SndBankPlay(iVar2,1,0,0,0x3200,0x1000,0,(_SND_3D_SET *)0x0);
        six_pzl_disp.move_anim_step = '\x02';
        SixPuzzleEnterBook__Fv();
        return;
      }
      if (*paddat[1] == 1) {
        iVar2 = GetPzlSndBankID__Fv();
        six_pzl_ctrl.snd_id = SndBankPlay(iVar2,5,0,0,0x3200,0x1000,0,(_SND_3D_SET *)0x0);
        six_pzl_ctrl.book_sel_csr = six_pzl_ctrl.next_book_csr;
        six_pzl_disp.shelf_anim_timer = 0;
        six_pzl_disp.move_anim_step = '\x02';
        six_pzl_disp.cap_win_anim_flg = '\0';
        SixPuzzleReqNextSubStep__Fc('\x01');
        return;
      }
      if ((pad[0].one & 0x20U) != 0) {
        iVar2 = GetPzlSndBankID__Fv();
        six_pzl_ctrl.snd_id = SndBankPlay(iVar2,0,0,0,0x3200,0x1000,0,(_SND_3D_SET *)0x0);
        six_pzl_ctrl.book_sel_csr = six_pzl_ctrl.next_book_csr;
        six_pzl_disp.cap_win_anim_flg = '\x01';
        six_pzl_disp.move_anim_step = '\x02';
        SixPuzzleReqNextSubStep__Fc('\x02');
      }
    }
    else if (six_pzl_disp.move_anim_step == '\x02') {
      iVar2 = 1;
      do {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
        iVar1 = (six_pzl_ctrl.book_sel_csr + iVar2) % 5;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
        six_pzl_ctrl.next_book_csr = (char)iVar1;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
        _fixed_array_verifyrange__H1Zi_UiUi_PX01(iVar1,5);
        if (six_pzl_ctrl.have_book.field0_0x0.m_aData[iVar1] == 1) break;
                    /* end of inlined section */
        iVar2 = iVar2 + 1;
      } while (iVar2 < 6);
      if (iVar2 != 5) {
        iVar2 = GetPzlSndBankID__Fv();
        six_pzl_ctrl.snd_id = SndBankPlay(iVar2,4,0,0,0x3200,0x1000,0,(_SND_3D_SET *)0x0);
        six_pzl_disp.move_rot = '\0';
        six_pzl_disp.move_anim_step = '\0';
      }
    }
  }
  else if (six_pzl_disp.move_anim_step == '\x02') {
    iVar2 = 1;
    do {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
      iVar1 = ((six_pzl_ctrl.book_sel_csr - iVar2) + 5) % 5;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
      six_pzl_ctrl.next_book_csr = (char)iVar1;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
      _fixed_array_verifyrange__H1Zi_UiUi_PX01(iVar1,5);
      if (six_pzl_ctrl.have_book.field0_0x0.m_aData[iVar1] == 1) break;
                    /* end of inlined section */
      iVar2 = iVar2 + 1;
    } while (iVar2 < 6);
    if (iVar2 != 5) {
      iVar2 = GetPzlSndBankID__Fv();
      six_pzl_ctrl.snd_id = SndBankPlay(iVar2,4,0,0,0x3200,0x1000,0,(_SND_3D_SET *)0x0);
      six_pzl_disp.move_rot = '\x01';
      six_pzl_disp.move_anim_step = '\0';
    }
  }
  return;
}

static void SixPuzzleBookShelfPad() {
	int i;
	int j;
	
  fixed_array_base<int,5,int[5]> *pfVar1;
  int iVar2;
  int iVar3;
  fixed_array<int,5> *pfVar4;
  int *piVar5;
  
  if (((pad[0].rpt & 0x8000U) == 0) && (iVar2 = GetPadAnalogRpt__Fi(2), iVar2 == 0)) {
    if (((pad[0].rpt & 0x2000U) == 0) && (iVar2 = GetPadAnalogRpt__Fi(3), iVar2 == 0)) {
      if (**paddat == 1) {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
        iVar2 = (int)six_pzl_ctrl.book_shelf_csr;
        _fixed_array_verifyrange__H1Zi_UiUi_PX01(six_pzl_ctrl.book_shelf_csr,5);
        if (six_pzl_ctrl.book_shelf.field0_0x0.m_aData[iVar2] != -1) {
          return;
        }
                    /* end of inlined section */
        iVar2 = GetPzlSndBankID__Fv();
        six_pzl_ctrl.snd_id = SndBankPlay(iVar2,1,0,0,0x3200,0x1000,0,(_SND_3D_SET *)0x0);
        iVar2 = 0;
        pfVar4 = &six_pzl_ctrl.have_book;
        do {
          if (4 < iVar2) {
LAB_002429e4:
            six_pzl_disp.cap_win_anim_flg = '\0';
            SixPuzzleReqNextSubStep__Fc('\0');
            return;
          }
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
          _fixed_array_verifyrange__H1Zi_UiUi_PX01(iVar2,5);
          pfVar1 = &pfVar4->field0_0x0;
          pfVar4 = (fixed_array<int,5> *)((pfVar4->field0_0x0).m_aData + 1);
          if (pfVar1->m_aData[0] == 1) {
                    /* end of inlined section */
            six_pzl_ctrl.book_sel_csr = (char)iVar2;
            six_pzl_ctrl.next_book_csr = six_pzl_ctrl.book_sel_csr;
            goto LAB_002429e4;
          }
          iVar2 = iVar2 + 1;
        } while( true );
      }
      if (*paddat[1] != 1) {
        if ((pad[0].one & 0x20U) == 0) {
          return;
        }
        iVar2 = GetPzlSndBankID__Fv();
        six_pzl_ctrl.snd_id = SndBankPlay(iVar2,0,0,0,0x3200,0x1000,0,(_SND_3D_SET *)0x0);
        six_pzl_disp.cap_win_anim_flg = '\x01';
        six_pzl_disp.msg_anim_timer = 0;
        SixPuzzleReqNextSubStep__Fc('\x03');
        return;
      }
      iVar2 = 4;
      piVar5 = six_pzl_ctrl.order_enter_book.field0_0x0.m_aData + 4;
      do {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
        _fixed_array_verifyrange__H1Zi_UiUi_PX01(iVar2,5);
        if (*piVar5 != -1) {
                    /* end of inlined section */
          iVar3 = GetPzlSndBankID__Fv();
          six_pzl_ctrl.snd_id = SndBankPlay(iVar3,0,0,0,0x3200,0x1000,0,(_SND_3D_SET *)0x0);
          pfVar4 = &six_pzl_ctrl.book_shelf;
          iVar3 = 0;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
          goto LAB_00242ab0;
        }
        iVar2 = iVar2 + -1;
        piVar5 = piVar5 + -1;
      } while (-1 < iVar2);
      goto LAB_00242b54;
    }
    iVar2 = GetPzlSndBankID__Fv();
    six_pzl_ctrl.snd_id = SndBankPlay(iVar2,4,0,0,0x3200,0x1000,0,(_SND_3D_SET *)0x0);
    iVar2 = six_pzl_ctrl.book_shelf_csr + 1;
  }
  else {
    iVar2 = GetPzlSndBankID__Fv();
    six_pzl_ctrl.snd_id = SndBankPlay(iVar2,4,0,0,0x3200,0x1000,0,(_SND_3D_SET *)0x0);
    iVar2 = six_pzl_ctrl.book_shelf_csr + 4;
  }
  six_pzl_ctrl.book_shelf_csr = (char)(iVar2 % 5);
  six_pzl_disp.shelf_anim_timer = 0;
  return;
                    /* end of inlined section */
  while (iVar3 = iVar3 + 1, iVar3 < 5) {
LAB_00242ab0:
    _fixed_array_verifyrange__H1Zi_UiUi_PX01(iVar3,5);
    _fixed_array_verifyrange__H1Zi_UiUi_PX01(iVar2,5);
    pfVar1 = &pfVar4->field0_0x0;
    pfVar4 = (fixed_array<int,5> *)((pfVar4->field0_0x0).m_aData + 1);
    if (pfVar1->m_aData[0] == six_pzl_ctrl.order_enter_book.field0_0x0.m_aData[iVar2]) {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
      _fixed_array_verifyrange__H1Zi_UiUi_PX01(iVar3,5);
                    /* end of inlined section */
      six_pzl_ctrl.book_shelf.field0_0x0.m_aData[iVar3] = -1;
      break;
    }
  }
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  _fixed_array_verifyrange__H1Zi_UiUi_PX01(iVar2,5);
  iVar3 = *piVar5;
  _fixed_array_verifyrange__H1Zi_UiUi_PX01(iVar3 + -8,5);
  *(undefined4 *)((int)&six_pzl_ctrl + (iVar3 + -8) * 4 + 0xc) = 1;
  _fixed_array_verifyrange__H1Zi_UiUi_PX01(iVar2,5);
                    /* end of inlined section */
  *piVar5 = -1;
LAB_00242b54:
  if (iVar2 < 0) {
    iVar2 = GetPzlSndBankID__Fv();
    six_pzl_ctrl.snd_id = SndBankPlay(iVar2,5,0,0,0x3200,0x1000,0,(_SND_3D_SET *)0x0);
    six_pzl_disp.cap_win_anim_flg = '\x01';
    SixPuzzleReqNextSubStep__Fc('\x04');
    six_pzl_ctrl.exit_csr = '\x01';
  }
  return;
}

static void SixPuzzleBookReadPad() {
  int bank_no;
  
  if (**paddat != 1) {
    if (*paddat[1] == 1) {
      bank_no = GetPzlSndBankID__Fv();
      six_pzl_ctrl.snd_id = SndBankPlay(bank_no,5,0,0,0x3200,0x1000,0,(_SND_3D_SET *)0x0);
      SixPuzzleReqNextSubStep__Fc('\0');
    }
    return;
  }
  MesSetNextPage__Fv();
  return;
}

static void SixPuzzleMsgReadPad() {
  int bank_no;
  
  if (**paddat != 1) {
    if (*paddat[1] != 1) {
      return;
    }
    bank_no = GetPzlSndBankID__Fv();
    six_pzl_ctrl.snd_id = SndBankPlay(bank_no,5,0,0,0x3200,0x1000,0,(_SND_3D_SET *)0x0);
  }
  SixPuzzleReqNextSubStep__Fc('\x01');
  six_pzl_disp.shelf_anim_timer = 0;
  return;
}

static void SixPuzzleClearPad() {
  if (**paddat != 1) {
    if (*paddat[1] == 1) {
      SixPuzzleExitReq__Fv();
    }
    return;
  }
  SixPuzzleExitReq__Fv();
  return;
}

static void SixPuzzleFailurePad() {
  if ((**paddat == 1) || (*paddat[1] == 1)) {
    SixPuzzleReturnFirstState__Fv();
    SixPuzzleReqNextSubStep__Fc('\x01');
    six_pzl_disp.shelf_anim_timer = 0;
  }
  return;
}

static void SixPuzzleExitPad() {
  int iVar1;
  
  if (((((pad[0].rpt & 0x8000U) == 0) && (iVar1 = GetPadAnalogRpt__Fi(2), iVar1 == 0)) &&
      ((pad[0].rpt & 0x2000U) == 0)) && (iVar1 = GetPadAnalogRpt__Fi(3), iVar1 == 0)) {
    if (**paddat == 1) {
      if (six_pzl_ctrl.exit_csr == '\0') {
        SixPuzzleExitReq__Fv();
        return;
      }
    }
    else {
      if (*paddat[1] != 1) {
        return;
      }
      iVar1 = GetPzlSndBankID__Fv();
      six_pzl_ctrl.snd_id = SndBankPlay(iVar1,5,0,0,0x3200,0x1000,0,(_SND_3D_SET *)0x0);
    }
    SixPuzzleReqNextSubStep__Fc('\x01');
    six_pzl_disp.shelf_anim_timer = 0;
  }
  else {
    iVar1 = GetPzlSndBankID__Fv();
    six_pzl_ctrl.snd_id = SndBankPlay(iVar1,4,0,0,0x3200,0x1000,0,(_SND_3D_SET *)0x0);
    six_pzl_ctrl.exit_csr = six_pzl_ctrl.exit_csr ^ 1;
  }
  return;
}

static void SixPuzzleEnterBook() {
	int i;
	
  fixed_array_base<int,5,int[5]> *pfVar1;
  int iVar2;
  int iVar3;
  fixed_array<int,5> *pfVar4;
  
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  iVar3 = 0;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  pfVar4 = &six_pzl_ctrl.order_enter_book;
  iVar2 = (int)six_pzl_ctrl.book_shelf_csr;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  _fixed_array_verifyrange__H1Zi_UiUi_PX01(six_pzl_ctrl.book_shelf_csr,5);
  six_pzl_ctrl.book_shelf.field0_0x0.m_aData[iVar2] = six_pzl_ctrl.book_sel_csr + 8;
  iVar2 = (int)six_pzl_ctrl.book_sel_csr;
  _fixed_array_verifyrange__H1Zi_UiUi_PX01(six_pzl_ctrl.book_sel_csr,5);
  six_pzl_ctrl.have_book.field0_0x0.m_aData[iVar2] = 0;
  do {
    _fixed_array_verifyrange__H1Zi_UiUi_PX01(iVar3,5);
    pfVar1 = &pfVar4->field0_0x0;
                    /* end of inlined section */
    pfVar4 = (fixed_array<int,5> *)((pfVar4->field0_0x0).m_aData + 1);
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    if (pfVar1->m_aData[0] == -1) {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
      _fixed_array_verifyrange__H1Zi_UiUi_PX01(iVar3,5);
                    /* end of inlined section */
      six_pzl_ctrl.order_enter_book.field0_0x0.m_aData[iVar3] = six_pzl_ctrl.book_sel_csr + 8;
      break;
    }
                    /* end of inlined section */
    iVar3 = iVar3 + 1;
  } while (iVar3 < 5);
  pfVar4 = &six_pzl_ctrl.book_shelf;
  iVar2 = 0;
  do {
    if (4 < iVar2) {
      iVar2 = SixPuzzleClearCheck__Fv();
      if (iVar2 != 0) {
        six_pzl_disp.cap_win_anim_flg = '\x01';
        SixPuzzleReqNextSubStep__Fc('\x05');
        return;
      }
      six_pzl_disp.cap_win_anim_flg = '\x01';
      SixPuzzleReqNextSubStep__Fc('\x06');
      return;
    }
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Zi_UiUi_PX01(iVar2,5);
    pfVar1 = &pfVar4->field0_0x0;
    pfVar4 = (fixed_array<int,5> *)((pfVar4->field0_0x0).m_aData + 1);
    iVar2 = iVar2 + 1;
  } while (pfVar1->m_aData[0] != -1);
                    /* end of inlined section */
  six_pzl_disp.cap_win_anim_flg = '\0';
  SixPuzzleReqNextSubStep__Fc('\x01');
  return;
}

static void SixPuzzleReturnFirstState() {
	int i;
	
  int iVar1;
  int iVar2;
  fixed_array<int,5> *pfVar3;
  
  pfVar3 = &six_pzl_ctrl.book_shelf;
  iVar1 = 0;
  do {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Zi_UiUi_PX01(iVar1,5);
    (pfVar3->field0_0x0).m_aData[0] = -1;
    _fixed_array_verifyrange__H1Zi_UiUi_PX01(iVar1,5);
    pfVar3[-1].field0_0x0.m_aData[0] = 1;
                    /* end of inlined section */
    iVar2 = iVar1 + 1;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Zi_UiUi_PX01(iVar1,5);
    pfVar3[1].field0_0x0.m_aData[0] = -1;
                    /* end of inlined section */
    pfVar3 = (fixed_array<int,5> *)((pfVar3->field0_0x0).m_aData + 1);
    iVar1 = iVar2;
  } while (iVar2 < 5);
  return;
}

static void SixPuzzleExitReq() {
  six_pzl_ctrl.step = '\x02';
  six_pzl_disp.anim_step = '\x03';
  six_pzl_disp.anim_timer = 0;
  return;
}

static void SixPuzzleDispInit() {
  six_pzl_disp.cap_win_anim_flg = '\x01';
  six_pzl_disp.move_anim_step = '\x02';
  six_pzl_disp.anim_step = '\0';
  six_pzl_disp.anim_timer = 0;
  six_pzl_disp.sub_anim_step = '\0';
  six_pzl_disp.sub_anim_timer = 0;
  six_pzl_disp.move_anim_timer = 0;
  six_pzl_disp.move_rot = '\0';
  six_pzl_disp.msg_anim_timer = 0;
  six_pzl_disp.shelf_anim_timer = 0;
  return;
}

void SixPuzzleDispMain() {
	u_char alpha;
	u_char fade_alpha;
	
  uchar alpha;
  uchar fade_alpha;
  
  alpha = 0x80;
  fade_alpha = 0x80;
  if ((byte)six_pzl_ctrl.step - 1 < 2) {
    SixPuzzleAnim__FPcPsPUc(&six_pzl_disp.anim_step,&six_pzl_disp.anim_timer,&fade_alpha);
    if (six_pzl_disp.anim_step != '\x04') {
      SixPuzzleBgDisp__FiiUc(0,0,0x80);
      SixPuzzleShelfBookDisp__FiiUc(0,0,0x80);
      if (six_pzl_ctrl.step == '\x01') {
        alpha = SixPuzzleModeAnimCtrl__Fv();
      }
      switch(six_pzl_ctrl.sub_step) {
      case '\0':
        SixPuzzleBookSelDisp__FiiUc(0,0,alpha);
        break;
      case '\x01':
        SixPuzzleBookShelfSelDisp__FiiUc(0,0,alpha);
        break;
      case '\x02':
        SixPuzzleBookReadDisp__FiiUc(0,0,alpha);
        break;
      case '\x03':
        SixPuzzleMsgReadDisp__FiiUc(0,0,alpha);
        break;
      case '\x04':
        SixPuzzleExitSelDisp__FiiUc(0,0,alpha);
        break;
      case '\x05':
        SixPuzzleClearDisp__FiiUc(0,0,alpha);
        break;
      case '\x06':
        SixPuzzleFailureDisp__FiiUc(0,0,alpha);
      }
    }
    SixPuzzleBlackBgDisp__FiiUc(0,0,fade_alpha);
  }
  return;
}

static void SixPuzzleAnim(char *anim_step, short int *anim_timer, u_char *alpha) {
	static ALPHA_ANIM_TBL six_out_alpha[2] = {
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
    PrintWarningReal("Warning!! SixPuzzleAnim()");
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
                      ((ALPHA_ANIM_TBL *)six_out_alpha_1027,(int)(short)*anim_timer);
    *alpha = uVar3;
    uVar2 = *anim_timer;
    *anim_timer = uVar2 + 1;
    if (0x1d < (short)(uVar2 + 1)) {
      *anim_step = '\x04';
    }
  }
  else if (cVar1 == '\x04') {
    *alpha = 0x80;
  }
  return;
}

static u_char SixPuzzleModeAnimCtrl() {
	static char __FUNCTION__[22] = {
		/* [0] = */ 83,
		/* [1] = */ 105,
		/* [2] = */ 120,
		/* [3] = */ 80,
		/* [4] = */ 117,
		/* [5] = */ 122,
		/* [6] = */ 122,
		/* [7] = */ 108,
		/* [8] = */ 101,
		/* [9] = */ 77,
		/* [10] = */ 111,
		/* [11] = */ 100,
		/* [12] = */ 101,
		/* [13] = */ 65,
		/* [14] = */ 110,
		/* [15] = */ 105,
		/* [16] = */ 109,
		/* [17] = */ 67,
		/* [18] = */ 116,
		/* [19] = */ 114,
		/* [20] = */ 108,
		/* [21] = */ 0
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
  
  if (six_pzl_disp.sub_anim_step == '\0') {
    six_pzl_disp.sub_anim_timer = 0;
    six_pzl_disp.sub_anim_step = '\x01';
  }
  if (six_pzl_disp.sub_anim_step == '\x02') {
    return 0x80;
  }
  if (six_pzl_disp.sub_anim_step < '\x03') {
    if (six_pzl_disp.sub_anim_step == '\x01') {
      uVar1 = Anim2D_CalcNowAlpha__FPC14ALPHA_ANIM_TBLi
                        ((ALPHA_ANIM_TBL *)in_alpha_tbl_1031,(int)(short)six_pzl_disp.sub_anim_timer
                        );
      if ((short)(six_pzl_disp.sub_anim_timer + 1) < 7) {
        six_pzl_disp.sub_anim_timer = six_pzl_disp.sub_anim_timer + 1;
        return uVar1;
      }
      six_pzl_disp.sub_anim_step = '\x02';
      six_pzl_disp.sub_anim_timer = 0;
      return uVar1;
    }
  }
  else {
    if (six_pzl_disp.sub_anim_step == '\x03') {
      uVar1 = Anim2D_CalcNowAlpha__FPC14ALPHA_ANIM_TBLi
                        ((ALPHA_ANIM_TBL *)out_alpha_tbl_1032,
                         (int)(short)six_pzl_disp.sub_anim_timer);
      if ((short)(six_pzl_disp.sub_anim_timer + 1) < 5) {
        six_pzl_disp.sub_anim_timer = six_pzl_disp.sub_anim_timer + 1;
        return uVar1;
      }
      six_pzl_disp.sub_anim_step = '\x04';
      six_pzl_disp.sub_anim_timer = 0;
      return uVar1;
    }
    if (six_pzl_disp.sub_anim_step == '\x04') {
      return '\0';
    }
  }
  SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
  PrintAssertReal("Error! SixPuzzleModeAnimCtrl");
  return 0x80;
}

static void SixPuzzleBookSelDisp(int off_x, int off_y, u_char alpha) {
  SixPuzzleBookSelAnimCtrl__FPcPs(&six_pzl_disp.move_anim_step,&six_pzl_disp.move_anim_timer);
  SixPuzzleBookReadBgDisp__FiiUc(off_x,off_y,alpha);
  SixPuzzleBookSelWinDisp__FiiUc(off_x,off_y,alpha);
  SixPuzzleBookDisp__FiiUc(off_x,off_y,alpha);
  SixPuzzleBookTitleWinDisp__FiiUc(off_x,off_y,alpha);
  SixPuzzleBookSelArrowDisp__FiiUc(off_x,off_y,alpha);
  if (six_pzl_disp.cap_win_anim_flg == '\0') {
    SixPuzzleCapWinDisp__FiiUc(off_x,off_y,0x80);
  }
  else {
    SixPuzzleCapWinDisp__FiiUc(off_x,off_y,alpha);
  }
  SixPuzzleBookSelCapDisp__FiiUc(off_x,off_y,alpha);
  SixPuzzleBookMsgWinDisp__FiiUc(off_x,off_y,alpha);
  return;
}

static void SixPuzzleBookSelAnimCtrl(char *anim_step, short int *anim_timer) {
  ushort uVar1;
  char cVar2;
  
  cVar2 = *anim_step;
  if (*anim_step == '\0') {
    *anim_timer = 0;
    *anim_step = '\x01';
    cVar2 = '\x01';
  }
  if ((cVar2 == '\x01') && (uVar1 = *anim_timer, *anim_timer = uVar1 + 1, 7 < (short)(uVar1 + 1))) {
    *anim_step = '\x02';
    six_pzl_ctrl.book_sel_csr = six_pzl_ctrl.next_book_csr;
  }
  return;
}

static void SixPuzzleBookShelfSelDisp(int off_x, int off_y, u_char alpha) {
  SixPuzzleShelfCsrDisp__FiiUc(off_x,off_y,alpha);
  if (six_pzl_ctrl.step == '\x01') {
    SixPuzzleShelfBookDisp__FiiUc(off_x,off_y,0x80);
  }
  else {
    SixPuzzleShelfBookDisp__FiiUc(off_x,off_y,alpha);
  }
  if (six_pzl_disp.cap_win_anim_flg == '\0') {
    SixPuzzleCapWinDisp__FiiUc(off_x,off_y,0x80);
  }
  else {
    SixPuzzleCapWinDisp__FiiUc(off_x,off_y,alpha);
  }
  SixPuzzleShelfSelCapDisp__FiiUc(off_x,off_y,alpha);
  SixPuzzleShelfMsgWinDisp__FiiUc(off_x,off_y,alpha);
  return;
}

static void SixPuzzleBookReadDisp(int off_x, int off_y, u_char alpha) {
  SixPuzzleBookReadBgDisp__FiiUc(off_x,off_y,alpha);
  SixPuzzleBookReadWinDisp__FiiUc(off_x,off_y,alpha);
  SixPuzzleBookReadCaptionDisp__FiiUc(off_x,off_y,alpha);
  return;
}

static void SixPuzzleMsgReadDisp(int off_x, int off_y, u_char alpha) {
  SixPuzzleMsgReadFleaDisp__FiiUc(off_x,off_y,alpha);
  SixPuzzleMsgReadWinDisp__FiiUc(off_x,off_y,alpha);
  return;
}

static void SixPuzzleClearDisp(int off_x, int off_y, u_char alpha) {
  SixPuzzleClearWinDisp__FiiUc(off_x,off_y,alpha);
  return;
}

static void SixPuzzleFailureDisp(int off_x, int off_y, u_char alpha) {
  SixPuzzleFailureWinDisp__FiiUc(off_x,off_y,alpha);
  return;
}

static void SixPuzzleExitSelDisp(int off_x, int off_y, u_char alpha) {
  SixPuzzleExitConfWinDisp__FiiUc(off_x,off_y,alpha);
  return;
}

static void SixPuzzleBgDisp(int off_x, int off_y, u_char alpha) {
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
  d = puzzle_roku_tex;
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

static void SixPuzzleShelfBookDisp(int off_x, int off_y, u_char alpha) {
	int i;
	DISP_SPRT book_ds;
	
  void *tm2_addr;
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  DISP_SPRT book_ds;
  
  tm2_addr = GetPzlTexDataAddr__Fv();
  PK2SendVram__FUiiii((uint)tm2_addr,-1,-1,0);
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  iVar2 = 0;
  iVar3 = 0;
  do {
    piVar1 = (int *)((int)six_pzl_ctrl.book_shelf.field0_0x0.m_aData + iVar2);
    _fixed_array_verifyrange__H1Zi_UiUi_PX01(iVar3,5);
    iVar4 = iVar3 + 1;
    if (*piVar1 != -1) {
      _fixed_array_verifyrange__H1Zi_UiUi_PX01(iVar3,5);
      CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&book_ds,puzzle_roku_tex + *piVar1);
                    /* end of inlined section */
      book_ds.y = 174.0;
      book_ds.x = *(float *)((int)shelf_book_x + iVar2) + (float)off_x;
      book_ds.alpha = (uchar)((int)((uint)book_ds.alpha * (uint)alpha) >> 7);
      DispSprD__FP9DISP_SPRT(&book_ds);
    }
    iVar2 = iVar4 * 4;
    iVar3 = iVar4;
  } while (iVar4 < 5);
  return;
}

static void SixPuzzleBookSelWinDisp(int off_x, int off_y, u_char alpha) {
	DISP_SPRT win_ds;
	DISP_SQAR dsq;
	SQAR_DAT win_bg;
	
  undefined *puVar1;
  uint uVar2;
  ulong *puVar3;
  uchar *puVar4;
  void *tm2_addr;
  DISP_SPRT win_ds;
  DISP_SQAR dsq;
  SQAR_DAT win_bg;
  
  puVar1 = (undefined *)((int)&win_bg.h + 3);
  uVar2 = (uint)puVar1 & 7;
  puVar3 = (ulong *)(puVar1 + -uVar2);
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | DAT_003c4898 >> (7 - uVar2) * 8;
  win_bg._0_8_ = DAT_003c4898;
  puVar1 = (undefined *)((int)&win_bg.y + 3);
  uVar2 = (uint)puVar1 & 7;
  puVar3 = (ulong *)(puVar1 + -uVar2);
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | DAT_003c48a0 >> (7 - uVar2) * 8;
  win_bg._8_8_ = DAT_003c48a0;
  uVar2 = (uint)&win_bg.alpha & 7;
  puVar4 = &win_bg.alpha + -uVar2;
  *(ulong *)puVar4 = *(ulong *)puVar4 & -1L << (uVar2 + 1) * 8 | DAT_003c48a8 >> (7 - uVar2) * 8;
  win_bg._16_8_ = DAT_003c48a8;
  tm2_addr = GetPzlTexDataAddr__Fv();
  PK2SendVram__FUiiii((uint)tm2_addr,-1,-1,0);
  CopySqrDToSqr__FP9DISP_SQARP8SQAR_DAT(&dsq,&win_bg);
  dsq.alpha = (uchar)((int)((uint)dsq.alpha * (uint)alpha) >> 7);
  DispSqrD__FP9DISP_SQAR(&dsq);
  CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&win_ds,puzzle_roku_tex + 0xd);
  win_ds.x = win_ds.x + (float)off_x;
  win_ds.y = win_ds.y + (float)off_y;
  win_ds.alpha = (uchar)((int)((uint)win_ds.alpha * (uint)alpha) >> 7);
  DispSprD__FP9DISP_SPRT(&win_ds);
  return;
}

static void SixPuzzleBookDisp(int off_x, int off_y, u_char alpha) {
	DISP_SPRT win_ds;
	long int scissor_backup;
	float anim_off_x;
	u_char book_alpha;
	u_char next_alpha;
	static ALPHA_ANIM_TBL move_alpha_tbl1[5] = {
		/* [0] = */ {
			/* .start_alpha = */ 0,
			/* .end_alpha = */ 6,
			/* .start_time = */ 0,
			/* .end_time = */ 2
		},
		/* [1] = */ {
			/* .start_alpha = */ 6,
			/* .end_alpha = */ 25,
			/* .start_time = */ 2,
			/* .end_time = */ 4
		},
		/* [2] = */ {
			/* .start_alpha = */ 25,
			/* .end_alpha = */ 64,
			/* .start_time = */ 4,
			/* .end_time = */ 6
		},
		/* [3] = */ {
			/* .start_alpha = */ 64,
			/* .end_alpha = */ 128,
			/* .start_time = */ 6,
			/* .end_time = */ 8
		},
		/* [4] = */ {
			/* .start_alpha = */ -1,
			/* .end_alpha = */ -1,
			/* .start_time = */ -1,
			/* .end_time = */ -1
		}
	};
	static ALPHA_ANIM_TBL move_alpha_tbl2[5] = {
		/* [0] = */ {
			/* .start_alpha = */ 128,
			/* .end_alpha = */ 64,
			/* .start_time = */ 0,
			/* .end_time = */ 2
		},
		/* [1] = */ {
			/* .start_alpha = */ 64,
			/* .end_alpha = */ 25,
			/* .start_time = */ 2,
			/* .end_time = */ 4
		},
		/* [2] = */ {
			/* .start_alpha = */ 25,
			/* .end_alpha = */ 6,
			/* .start_time = */ 4,
			/* .end_time = */ 6
		},
		/* [3] = */ {
			/* .start_alpha = */ 6,
			/* .end_alpha = */ 0,
			/* .start_time = */ 6,
			/* .end_time = */ 8
		},
		/* [4] = */ {
			/* .start_alpha = */ -1,
			/* .end_alpha = */ -1,
			/* .start_time = */ -1,
			/* .end_time = */ -1
		}
	};
	
  uchar uVar1;
  uchar uVar2;
  void *tm2_addr;
  long scissor;
  float fVar3;
  DISP_SPRT win_ds;
  float anim_off_x;
  
  anim_off_x = 0.0;
  scissor = GET_SCISSOR_REGISTER__Fi(0);
  SetScissorRegister__Fil(0,0xfb004b01a200df);
  tm2_addr = GetPzlTexDataAddr__Fv();
  PK2SendVram__FUiiii((uint)tm2_addr,-1,-1,0);
  if ((byte)six_pzl_disp.move_anim_step < 2) {
    SixPuzzleBookAnim__FPcPsPf
              (&six_pzl_disp.move_anim_step,&six_pzl_disp.move_anim_timer,&anim_off_x);
    uVar1 = Anim2D_CalcNowAlpha__FPC14ALPHA_ANIM_TBLi
                      ((ALPHA_ANIM_TBL *)move_alpha_tbl1_1069,
                       (int)(short)six_pzl_disp.move_anim_timer);
    uVar2 = Anim2D_CalcNowAlpha__FPC14ALPHA_ANIM_TBLi
                      ((ALPHA_ANIM_TBL *)move_alpha_tbl2_1070,
                       (int)(short)six_pzl_disp.move_anim_timer);
    win_ds.alpha = uVar2;
    if (six_pzl_disp.move_rot == '\0') {
      fVar3 = (float)off_y;
      CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT
                (&win_ds,puzzle_roku_tex + six_pzl_ctrl.book_sel_csr + 0xe);
      win_ds.y = win_ds.y + fVar3;
      win_ds.x = (win_ds.x + (float)off_x) - anim_off_x;
      DispSprD__FP9DISP_SPRT(&win_ds);
      CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT
                (&win_ds,puzzle_roku_tex + six_pzl_ctrl.next_book_csr + 0xe);
      win_ds.y = win_ds.y + fVar3;
      win_ds.x = win_ds.x + (float)off_x + (209.0 - anim_off_x);
      win_ds.alpha = uVar1;
      DispSprD__FP9DISP_SPRT(&win_ds);
    }
    else {
      fVar3 = (float)off_y;
      CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT
                (&win_ds,puzzle_roku_tex + six_pzl_ctrl.book_sel_csr + 0xe);
      win_ds.y = win_ds.y + fVar3;
      win_ds.x = win_ds.x + (float)off_x + anim_off_x;
      DispSprD__FP9DISP_SPRT(&win_ds);
      CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT
                (&win_ds,puzzle_roku_tex + six_pzl_ctrl.next_book_csr + 0xe);
      win_ds.y = win_ds.y + fVar3;
      win_ds.x = ((win_ds.x + (float)off_x) - 209.0) + anim_off_x;
      win_ds.alpha = uVar1;
      DispSprD__FP9DISP_SPRT(&win_ds);
    }
  }
  if (six_pzl_disp.move_anim_step == '\x02') {
    CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&win_ds,puzzle_roku_tex + six_pzl_ctrl.book_sel_csr + 0xe)
    ;
    win_ds.x = win_ds.x + (float)off_x;
    win_ds.y = win_ds.y + (float)off_y;
    win_ds.alpha = (uchar)((int)((uint)win_ds.alpha * (uint)alpha) >> 7);
    DispSprD__FP9DISP_SPRT(&win_ds);
  }
  SetScissorRegister__Fil(0,scissor);
  return;
}

static void SixPuzzleBookAnim(char *anim_step, short int *anim_timer, float *pos) {
	static POS_ANIM_TBL move_pos_tbl[2] = {
		/* [0] = */ {
			/* .start_pos = */ 0.f,
			/* .end_pos = */ 209.f,
			/* .start_time = */ 0,
			/* .end_time = */ 8,
			/* .anim_label = */ 0
		},
		/* [1] = */ {
			/* .start_pos = */ -1.f,
			/* .end_pos = */ -1.f,
			/* .start_time = */ -1,
			/* .end_time = */ -1,
			/* .anim_label = */ 0
		}
	};
	
  float fVar1;
  
  if ((short)*anim_timer < 0) {
    printf("<<<<<<<<<WARNING FILE[%s] LINE[%d]>>>>>>>>>>\n");
    PrintWarningReal("Warning!! SixPuzzleBookAnim");
  }
  if (*anim_step == '\x01') {
    fVar1 = Anim2D_CalcNowPos__FPC12POS_ANIM_TBLi
                      ((POS_ANIM_TBL *)move_pos_tbl_1074,(int)(short)*anim_timer);
    *pos = fVar1;
  }
  else if (*anim_step == '\x02') {
    *pos = 0.0;
  }
  return;
}

static void SixPuzzleBookTitleWinDisp(int off_x, int off_y, u_char alpha) {
	DISP_SPRT win_ds;
	DISP_SQAR dsq;
	SQAR_DAT title_bg;
	static int msg_type_tbl[5] = {
		/* [0] = */ 30,
		/* [1] = */ 32,
		/* [2] = */ 29,
		/* [3] = */ 31,
		/* [4] = */ 27
	};
	
  undefined *puVar1;
  uint uVar2;
  ulong *puVar3;
  uchar *puVar4;
  void *tm2_addr;
  DISP_SPRT win_ds;
  DISP_SQAR dsq;
  SQAR_DAT title_bg;
  
  puVar1 = (undefined *)((int)&title_bg.h + 3);
  uVar2 = (uint)puVar1 & 7;
  puVar3 = (ulong *)(puVar1 + -uVar2);
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | DAT_003c4940 >> (7 - uVar2) * 8;
  title_bg._0_8_ = DAT_003c4940;
  puVar1 = (undefined *)((int)&title_bg.y + 3);
  uVar2 = (uint)puVar1 & 7;
  puVar3 = (ulong *)(puVar1 + -uVar2);
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | DAT_003c4948 >> (7 - uVar2) * 8;
  title_bg._8_8_ = DAT_003c4948;
  uVar2 = (uint)&title_bg.alpha & 7;
  puVar4 = &title_bg.alpha + -uVar2;
  *(ulong *)puVar4 = *(ulong *)puVar4 & -1L << (uVar2 + 1) * 8 | DAT_003c4950 >> (7 - uVar2) * 8;
  title_bg._16_8_ = DAT_003c4950;
  tm2_addr = GetPzlTexDataAddr__Fv();
  PK2SendVram__FUiiii((uint)tm2_addr,-1,-1,0);
  CopySqrDToSqr__FP9DISP_SQARP8SQAR_DAT(&dsq,&title_bg);
  dsq.alpha = (uchar)((int)((uint)dsq.alpha * (uint)alpha) >> 7);
  DispSqrD__FP9DISP_SQAR(&dsq);
  CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&win_ds,puzzle_roku_tex + 0x17);
  win_ds.x = win_ds.x + (float)off_x;
  win_ds.y = win_ds.y + (float)off_y;
  win_ds.alpha = (uchar)((int)((uint)win_ds.alpha * (uint)alpha) >> 7);
  DispSprD__FP9DISP_SPRT(&win_ds);
  PrintMsg_Arrange__Fiiiiiiiiii
            (*(int *)(msg_type_tbl_1078 + six_pzl_book_label[six_pzl_ctrl.book_sel_csr][0] * 4),
             six_pzl_book_label[six_pzl_ctrl.book_sel_csr][1] * 3,0x148,0x120,1,(uint)alpha,0,0,0,2)
  ;
  return;
}

static void SixPuzzleBookSelArrowDisp(int off_x, int off_y, u_char alpha) {
	DISP_SPRT arrow_ds;
	int i;
	u_char flea_alpha;
	
  void *tm2_addr;
  SPRT_DAT *d;
  int iVar1;
  float fVar2;
  DISP_SPRT arrow_ds;
  uchar flea_alpha;
  
  flea_alpha = '\0';
  tm2_addr = GetPzlTexDataAddr__Fv();
  PK2SendVram__FUiiii((uint)tm2_addr,-1,-1,0);
  if (six_pzl_disp.move_anim_step == '\x02') {
    fVar2 = (float)off_x;
  }
  else {
    SixPuzzleBookSelArrowAnim__FPcPsPUc
              (&six_pzl_disp.move_anim_step,&six_pzl_disp.move_anim_timer,&flea_alpha);
    if (six_pzl_disp.move_rot == '\x01') {
      fVar2 = (float)off_x;
      CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&arrow_ds,puzzle_roku_tex + 0x13);
      arrow_ds.x = arrow_ds.x + fVar2;
      arrow_ds.y = arrow_ds.y + (float)off_y;
      arrow_ds.alpha = flea_alpha;
      DispSprD__FP9DISP_SPRT(&arrow_ds);
    }
    else {
      fVar2 = (float)off_x;
      CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&arrow_ds,puzzle_roku_tex + 0x14);
      arrow_ds.x = arrow_ds.x + fVar2;
      arrow_ds.y = arrow_ds.y + (float)off_y;
      arrow_ds.alpha = flea_alpha;
      DispSprD__FP9DISP_SPRT(&arrow_ds);
    }
  }
  iVar1 = 1;
  d = puzzle_roku_tex + 0x15;
  do {
    CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&arrow_ds,d);
    iVar1 = iVar1 + -1;
    d = d + 1;
    arrow_ds.x = arrow_ds.x + fVar2;
    arrow_ds.y = arrow_ds.y + (float)off_y;
    arrow_ds.alpha = (uchar)((int)((uint)arrow_ds.alpha * (uint)alpha) >> 7);
    DispSprD__FP9DISP_SPRT(&arrow_ds);
  } while (-1 < iVar1);
  return;
}

static void SixPuzzleBookSelArrowAnim(char *anim_step, short int *anim_timer, u_char *alpha) {
	static ALPHA_ANIM_TBL move_alpha_tbl[3] = {
		/* [0] = */ {
			/* .start_alpha = */ 128,
			/* .end_alpha = */ 128,
			/* .start_time = */ 0,
			/* .end_time = */ 4
		},
		/* [1] = */ {
			/* .start_alpha = */ 128,
			/* .end_alpha = */ 0,
			/* .start_time = */ 4,
			/* .end_time = */ 8
		},
		/* [2] = */ {
			/* .start_alpha = */ -1,
			/* .end_alpha = */ -1,
			/* .start_time = */ -1,
			/* .end_time = */ -1
		}
	};
	
  uchar uVar1;
  
  if (*anim_step == '\x01') {
    uVar1 = Anim2D_CalcNowAlpha__FPC14ALPHA_ANIM_TBLi
                      ((ALPHA_ANIM_TBL *)move_alpha_tbl_1085,(int)(short)*anim_timer);
    *alpha = uVar1;
  }
  else if (*anim_step == '\x02') {
    *alpha = '\0';
  }
  return;
}

static void SixPuzzleBookSelCapDisp(int off_x, int off_y, u_char alpha) {
	DISP_SPRT cap_ds;
	
  void *tm2_addr;
  float fVar1;
  float fVar2;
  DISP_SPRT cap_ds;
  
  fVar1 = (float)off_x;
  tm2_addr = GetPzlTexDataAddr__Fv();
  PK2SendVram__FUiiii((uint)tm2_addr,-1,-1,0);
  fVar2 = (float)off_y;
  CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&cap_ds,puzzle_roku_tex + 0x19);
  cap_ds.x = cap_ds.x + fVar1;
  cap_ds.y = cap_ds.y + fVar2;
  cap_ds.alpha = (uchar)((int)((uint)cap_ds.alpha * (uint)alpha) >> 7);
  DispSprD__FP9DISP_SPRT(&cap_ds);
  CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&cap_ds,puzzle_roku_tex + 0x1c);
  cap_ds.x = cap_ds.x + fVar1;
  cap_ds.y = cap_ds.y + fVar2;
  cap_ds.alpha = (uchar)((int)((uint)cap_ds.alpha * (uint)alpha) >> 7);
  DispSprD__FP9DISP_SPRT(&cap_ds);
  CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&cap_ds,puzzle_roku_tex + 0x1d);
  cap_ds.x = cap_ds.x + fVar1;
  cap_ds.y = cap_ds.y + fVar2;
  cap_ds.alpha = (uchar)((int)((uint)cap_ds.alpha * (uint)alpha) >> 7);
  DispSprD__FP9DISP_SPRT(&cap_ds);
  CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&cap_ds,puzzle_roku_tex + 0x20);
  cap_ds.x = cap_ds.x + fVar1;
  cap_ds.y = cap_ds.y + fVar2;
  cap_ds.alpha = (uchar)((int)((uint)cap_ds.alpha * (uint)alpha) >> 7);
  DispSprD__FP9DISP_SPRT(&cap_ds);
  return;
}

static void SixPuzzleBookMsgWinDisp(int off_x, int off_y, u_char alpha) {
	DISP_STR ds;
	
  DISP_STR ds;
  
  SetMsgDefData__FP8DISP_STRi(&ds,0x47);
  SixPuzzleCmnWinDisp__FiiUc(off_x,off_y,alpha);
  PrintMsg__Fiiiiiii(0x47,3,ds.pos_x,ds.pos_y,1,(uint)alpha,0);
  return;
}

static void SixPuzzleShelfCsrDisp(int off_x, int off_y, u_char alpha) {
	DISP_SPRT shelf_ds;
	u_char csr_alpha;
	static ALPHA_ANIM_TBL csr_alpha_tbl[3] = {
		/* [0] = */ {
			/* .start_alpha = */ 64,
			/* .end_alpha = */ 115,
			/* .start_time = */ 0,
			/* .end_time = */ 20
		},
		/* [1] = */ {
			/* .start_alpha = */ 115,
			/* .end_alpha = */ 64,
			/* .start_time = */ 20,
			/* .end_time = */ 40
		},
		/* [2] = */ {
			/* .start_alpha = */ -1,
			/* .end_alpha = */ -1,
			/* .start_time = */ -1,
			/* .end_time = */ -1
		}
	};
	
  void *tm2_addr;
  DISP_SPRT shelf_ds;
  
  shelf_ds.alpha =
       Anim2D_CalcNowAlpha__FPC14ALPHA_ANIM_TBLi
                 ((ALPHA_ANIM_TBL *)csr_alpha_tbl_1095,(int)(short)six_pzl_disp.shelf_anim_timer);
  six_pzl_disp.shelf_anim_timer = six_pzl_disp.shelf_anim_timer + 1;
  if (0x27 < (short)six_pzl_disp.shelf_anim_timer) {
    six_pzl_disp.shelf_anim_timer = 0;
  }
  tm2_addr = GetPzlTexDataAddr__Fv();
  PK2SendVram__FUiiii((uint)tm2_addr,-1,-1,0);
  CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&shelf_ds,puzzle_roku_tex + six_pzl_ctrl.book_shelf_csr + 3)
  ;
  shelf_ds.x = shelf_ds.x + (float)off_x;
  shelf_ds.y = shelf_ds.y + (float)off_y;
  DispSprD__FP9DISP_SPRT(&shelf_ds);
  return;
}

static void SixPuzzleShelfSelCapDisp(int off_x, int off_y, u_char alpha) {
	DISP_SPRT cap_ds;
	int i;
	
  fixed_array_base<int,5,int[5]> *pfVar1;
  void *tm2_addr;
  fixed_array<int,5> *pfVar2;
  int iVar3;
  uint uVar4;
  float fVar5;
  float fVar6;
  DISP_SPRT cap_ds;
  
  fVar5 = (float)off_x;
  fVar6 = (float)off_y;
  tm2_addr = GetPzlTexDataAddr__Fv();
  PK2SendVram__FUiiii((uint)tm2_addr,-1,-1,0);
  CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&cap_ds,puzzle_roku_tex + 0x1f);
  cap_ds.x = cap_ds.x + fVar5;
  cap_ds.y = cap_ds.y + fVar6;
  cap_ds.alpha = (uchar)((int)((uint)cap_ds.alpha * (uint)alpha) >> 7);
  DispSprD__FP9DISP_SPRT(&cap_ds);
  pfVar2 = &six_pzl_ctrl.book_shelf;
  iVar3 = 0;
  do {
    uVar4 = (uint)alpha;
    if (4 < iVar3) {
      CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&cap_ds,puzzle_roku_tex + 0x1a);
      cap_ds.x = cap_ds.x + fVar5;
      cap_ds.y = cap_ds.y + fVar6;
      cap_ds.alpha = (uchar)((int)(cap_ds.alpha * uVar4) >> 7);
      DispSprD__FP9DISP_SPRT(&cap_ds);
      goto LAB_00244780;
    }
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Zi_UiUi_PX01(iVar3,5);
    pfVar1 = &pfVar2->field0_0x0;
    pfVar2 = (fixed_array<int,5> *)((pfVar2->field0_0x0).m_aData + 1);
    iVar3 = iVar3 + 1;
  } while (pfVar1->m_aData[0] == -1);
  CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&cap_ds,puzzle_roku_tex + 0x1b);
  cap_ds.x = cap_ds.x + fVar5;
  cap_ds.y = cap_ds.y + fVar6;
  cap_ds.alpha = (uchar)((int)((uint)cap_ds.alpha * (uint)alpha) >> 7);
  DispSprD__FP9DISP_SPRT(&cap_ds);
LAB_00244780:
  CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&cap_ds,puzzle_roku_tex + 0x1c);
  cap_ds.x = cap_ds.x + fVar5;
  cap_ds.y = cap_ds.y + fVar6;
  cap_ds.alpha = (uchar)((int)(cap_ds.alpha * uVar4) >> 7);
  DispSprD__FP9DISP_SPRT(&cap_ds);
  CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&cap_ds,puzzle_roku_tex + 0x1e);
  cap_ds.x = cap_ds.x + fVar5;
  cap_ds.y = cap_ds.y + fVar6;
  cap_ds.alpha = (uchar)((int)(cap_ds.alpha * uVar4) >> 7);
  DispSprD__FP9DISP_SPRT(&cap_ds);
  return;
}

static void SixPuzzleShelfMsgWinDisp(int off_x, int off_y, u_char alpha) {
	DISP_STR ds;
	
  DISP_STR ds;
  
  SetMsgDefData__FP8DISP_STRi(&ds,0x47);
  SixPuzzleCmnWinDisp__FiiUc(off_x,off_y,alpha);
  PrintMsg__Fiiiiiii(0x47,2,ds.pos_x,ds.pos_y,1,(uint)alpha,0);
  return;
}

static void SixPuzzleBookReadBgDisp(int off_x, int off_y, u_char alpha) {
	DISP_SQAR dsq;
	SQAR_DAT read_bg;
	
  undefined *puVar1;
  uint uVar2;
  ulong *puVar3;
  uchar *puVar4;
  DISP_SQAR dsq;
  SQAR_DAT read_bg;
  
  puVar1 = (undefined *)((int)&read_bg.h + 3);
  uVar2 = (uint)puVar1 & 7;
  puVar3 = (ulong *)(puVar1 + -uVar2);
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | DAT_003c49a0 >> (7 - uVar2) * 8;
  read_bg._0_8_ = DAT_003c49a0;
  puVar1 = (undefined *)((int)&read_bg.y + 3);
  uVar2 = (uint)puVar1 & 7;
  puVar3 = (ulong *)(puVar1 + -uVar2);
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | DAT_003c49a8 >> (7 - uVar2) * 8;
  read_bg._8_8_ = DAT_003c49a8;
  uVar2 = (uint)&read_bg.alpha & 7;
  puVar4 = &read_bg.alpha + -uVar2;
  *(ulong *)puVar4 = *(ulong *)puVar4 & -1L << (uVar2 + 1) * 8 | DAT_003c49b0 >> (7 - uVar2) * 8;
  read_bg._16_8_ = DAT_003c49b0;
  CopySqrDToSqr__FP9DISP_SQARP8SQAR_DAT(&dsq,&read_bg);
  dsq.alpha = (uchar)((int)((uint)dsq.alpha * (uint)alpha) >> 7);
  DispSqrD__FP9DISP_SQAR(&dsq);
  return;
}

static void SixPuzzleBookReadWinDisp(int off_x, int off_y, u_char alpha) {
  DrawCmnFileWindow__FiiUiUcUc
            (six_pzl_book_label[six_pzl_ctrl.book_sel_csr][0],
             six_pzl_book_label[six_pzl_ctrl.book_sel_csr][1],0,alpha,'f');
  return;
}

static void SixPuzzleBookReadCaptionDisp(int off_x, int off_y, u_char alpha) {
  DrawCmnButton__FUcffUcUi('\0',394.0,350.0,alpha,0);
  DrawCmnButton__FUcffUcUi('\x03',DAT_003ee810,350.0,alpha,0);
  DrawCmnCaption__FUcffUcUi('\v',420.0,DAT_003ee814,alpha,0);
  DrawCmnCaption__FUcffUcUi('\x02',DAT_003ee818,352.0,alpha,0);
  return;
}

static void SixPuzzleMsgReadFleaDisp(int off_x, int off_y, u_char alpha) {
	DISP_SPRT flea_ds;
	u_char flea_alpha;
	static ALPHA_ANIM_TBL flea_alpha_tbl[3] = {
		/* [0] = */ {
			/* .start_alpha = */ 64,
			/* .end_alpha = */ 115,
			/* .start_time = */ 0,
			/* .end_time = */ 20
		},
		/* [1] = */ {
			/* .start_alpha = */ 115,
			/* .end_alpha = */ 64,
			/* .start_time = */ 20,
			/* .end_time = */ 40
		},
		/* [2] = */ {
			/* .start_alpha = */ -1,
			/* .end_alpha = */ -1,
			/* .start_time = */ -1,
			/* .end_time = */ -1
		}
	};
	
  void *tm2_addr;
  DISP_SPRT flea_ds;
  
  flea_ds.alpha =
       Anim2D_CalcNowAlpha__FPC14ALPHA_ANIM_TBLi
                 ((ALPHA_ANIM_TBL *)flea_alpha_tbl_1114,(int)(short)six_pzl_disp.msg_anim_timer);
  six_pzl_disp.msg_anim_timer = six_pzl_disp.msg_anim_timer + 1;
  if (0x27 < (short)six_pzl_disp.msg_anim_timer) {
    six_pzl_disp.msg_anim_timer = 0;
  }
  tm2_addr = GetPzlTexDataAddr__Fv();
  PK2SendVram__FUiiii((uint)tm2_addr,-1,-1,0);
  CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&flea_ds,puzzle_roku_tex + 2);
  flea_ds.x = flea_ds.x + (float)off_x;
  flea_ds.y = flea_ds.y + (float)off_y;
  DispSprD__FP9DISP_SPRT(&flea_ds);
  return;
}

static void SixPuzzleMsgReadWinDisp(int off_x, int off_y, u_char alpha) {
	DISP_STR ds;
	
  DISP_STR ds;
  
  SetMsgDefData__FP8DISP_STRi(&ds,0x47);
  SixPuzzleCmnWinDisp__FiiUc(off_x,off_y,alpha);
  PrintMsg__Fiiiiiii(0x47,7,ds.pos_x,ds.pos_y,1,(uint)alpha,0);
  return;
}

static void SixPuzzleClearWinDisp(int off_x, int off_y, u_char alpha) {
	DISP_STR ds;
	
  DISP_STR ds;
  
  SetMsgDefData__FP8DISP_STRi(&ds,0x47);
  SixPuzzleCmnWinDisp__FiiUc(off_x,off_y,alpha);
  PrintMsg__Fiiiiiii(0x47,6,ds.pos_x,ds.pos_y,1,(uint)alpha,0);
  return;
}

static void SixPuzzleFailureWinDisp(int off_x, int off_y, u_char alpha) {
	DISP_STR ds;
	
  DISP_STR ds;
  
  SetMsgDefData__FP8DISP_STRi(&ds,0x47);
  SixPuzzleCmnWinDisp__FiiUc(off_x,off_y,alpha);
  PrintMsg__Fiiiiiii(0x47,4,ds.pos_x,ds.pos_y,1,(uint)alpha,0);
  return;
}

static void SixPuzzleExitConfWinDisp(int off_x, int off_y, u_char alpha) {
	DISP_STR ds;
	
  DISP_STR ds;
  
  SetMsgDefData__FP8DISP_STRi(&ds,0x47);
  SixPuzzleCmnWinDisp__FiiUc(off_x,off_y,alpha);
  DrawCmnSelCsr__FUiffUcfUc
            (0,(float)(six_pzl_ctrl.exit_csr * 0xcf + off_x + 0x9b),(float)(off_y + 0x184),alpha,0.0
             ,'\0');
  DrawCmnSelYes__FUiffUc(0,(float)(off_x + 0x99),(float)(off_y + 0x186),alpha);
  DrawCmnSelNo__FUiffUc(0,(float)(off_x + 0x169),(float)(off_y + 0x186),alpha);
  PrintMsg__Fiiiiiii(0x47,5,ds.pos_x,ds.pos_y,1,(uint)alpha,0);
  return;
}

static void SixPuzzleCapWinDisp(int off_x, int off_y, u_char alpha) {
	DISP_SPRT cap_ds;
	
  void *tm2_addr;
  DISP_SPRT cap_ds;
  
  tm2_addr = GetPzlTexDataAddr__Fv();
  PK2SendVram__FUiiii((uint)tm2_addr,-1,-1,0);
  CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&cap_ds,puzzle_roku_tex + 0x18);
  cap_ds.x = cap_ds.x + (float)off_x;
  cap_ds.y = cap_ds.y + (float)off_y;
  cap_ds.alpha = (uchar)((int)((uint)cap_ds.alpha * (uint)alpha) >> 7);
  DispSprD__FP9DISP_SPRT(&cap_ds);
  return;
}

static void SixPuzzleCmnWinDisp(int off_x, int off_y, u_char alpha) {
	MSG_WIN_DAT win_dat;
	
  MSG_WIN_DAT win_dat;
  
  SetMsgWinDefData__FP11MSG_WIN_DATi(&win_dat,0x47);
  DrawCmnWindow__FUiffffUcUc(0,win_dat.x,win_dat.y,win_dat.w,win_dat.h,alpha,'3');
  return;
}

void SixPuzzleCrossScreenDisp(int off_x, int off_y, u_char alpha) {
  SixPuzzleBgDisp__FiiUc(0,0,0x80);
  SixPuzzleBlackBgDisp__FiiUc(0,0,alpha);
  return;
}

static void SixPuzzleBlackBgDisp(int off_x, int off_y, u_char alpha) {
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
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | DAT_003c49d0 >> (7 - uVar2) * 8;
  black_bg._0_8_ = DAT_003c49d0;
  puVar1 = (undefined *)((int)&black_bg.y + 3);
  uVar2 = (uint)puVar1 & 7;
  puVar3 = (ulong *)(puVar1 + -uVar2);
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | DAT_003c49d8 >> (7 - uVar2) * 8;
  black_bg._8_8_ = DAT_003c49d8;
  uVar2 = (uint)&black_bg.alpha & 7;
  puVar4 = &black_bg.alpha + -uVar2;
  *(ulong *)puVar4 = *(ulong *)puVar4 & -1L << (uVar2 + 1) * 8 | DAT_003c49e0 >> (7 - uVar2) * 8;
  black_bg._16_8_ = DAT_003c49e0;
  CopySqrDToSqr__FP9DISP_SQARP8SQAR_DAT(&dsq,&black_bg);
  dsq.alpha = (uchar)((int)((uint)dsq.alpha * (uint)alpha) >> 7);
  DispSqrD__FP9DISP_SQAR(&dsq);
  return;
}

int* int * _fixed_array_verifyrange<int>(size_t v, size_t _max) {
  g3ddbgAssert__FbPCce(false,str_646);
  return (int *)v;
}

static void __static_initialization_and_destruction_0(int __initialize_p, int __priority) {
  return;
}

static void global constructors keyed to SixPuzzleExeInit() {
  __static_initialization_and_destruction_0(1,0xffff);
  return;
}
