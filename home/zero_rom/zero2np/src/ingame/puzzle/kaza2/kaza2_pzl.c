// STATUS: NOT STARTED

#include "kaza2_pzl.h"

static void (*kaza_pzl_pad_func[6])(/* parameters unknown */) = {
	/* [0] = */ KazaPuzzle2StartMsgPad,
	/* [1] = */ KazaPuzzle2PinWheelSelPad,
	/* [2] = */ KazaPuzzle2ExitPad,
	/* [3] = */ KazaPuzzle2ClearPad,
	/* [4] = */ KazaPuzzle2ClearPad,
	/* [5] = */ KazaPuzzle2CondErrorPad
};

static void (*kaza_pzl_disp_func[6])(/* parameters unknown */) = {
	/* [0] = */ KazaPuzzle2StartMsgDisp,
	/* [1] = */ KazaPuzzle2PinWheelSelDisp,
	/* [2] = */ KazaPuzzle2ExitSelDisp,
	/* [3] = */ KazaPuzzle2ClearDisp,
	/* [4] = */ KazaPuzzle2FailureDisp,
	/* [5] = */ KazaPuzzle2CondErrorDisp
};

static KAZA_PZL_CTRL kaza_pzl_ctrl;
static KAZA_PZL_DISP kaza_pzl_disp;
static int *kaza2_panel_color[5];

static int kaza2_panel_label_tbl[2][2] = {
	/* [0] = */ {
		/* [0] = */ 3,
		/* [1] = */ 1
	},
	/* [1] = */ {
		/* [0] = */ 4,
		/* [1] = */ 2
	}
};

static void _fixed_array_assert(char *strType, size_t v0, size_t v1) {
	static char *str = 0x3b9968;
	
  g3ddbgAssert__FbPCce(false,str_646);
  return (float *)v;
}

static void** void * * _fixed_array_verifyrange<void *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_verifyrange__H1Zf_UiUi_PX01(0x3f1700,_max);
  }
  return (void **)0x0;
}

static char** char * * _fixed_array_verifyrange<char *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_verifyrange__H1Zf_UiUi_PX01(0x3f1708,_max);
  }
  return (char **)0x0;
}

static unsigned int** unsigned int * * _fixed_array_verifyrange<unsigned int *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_verifyrange__H1Zf_UiUi_PX01(0x3b99b0,_max);
  }
  return (uint **)0x0;
}

void KazaPuzzle2ExeInit() {
  KazaPuzzle2CtrlInit__Fv();
  KazaPuzzle2DispInit__Fv();
  return;
}

static void KazaPuzzle2CtrlInit() {
  int iVar1;
  
  kaza_pzl_ctrl.step = '\0';
  iVar1 = KazaPuzzle2CondCheck__Fv();
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  if (iVar1 == 0) {
    kaza_pzl_ctrl.next_mode = '\x05';
    kaza_pzl_ctrl.mode = '\x05';
  }
  else {
    kaza_pzl_ctrl.next_mode = '\0';
    kaza_pzl_ctrl.mode = '\0';
  }
  kaza_pzl_ctrl.clear_flg = '\0';
  kaza_pzl_ctrl.exit_csr = '\x01';
  kaza_pzl_ctrl.remainder_frequency = '\x06';
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  kaza_pzl_ctrl.csr_yoko = '\0';
  kaza_pzl_ctrl.csr_tate = '\0';
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  kaza_pzl_ctrl.rot_anim_flg = '\0';
  _fixed_array_verifyrange__H1Zi_UiUi_PX01(0,5);
  kaza_pzl_ctrl.rot_num.field0_0x0.m_aData[0] = 2;
  _fixed_array_verifyrange__H1Zi_UiUi_PX01(1,5);
  kaza_pzl_ctrl.rot_num.field0_0x0.m_aData[1] = 3;
  _fixed_array_verifyrange__H1Zi_UiUi_PX01(2,5);
  kaza_pzl_ctrl.rot_num.field0_0x0.m_aData[2] = 0;
  _fixed_array_verifyrange__H1Zi_UiUi_PX01(3,5);
  kaza_pzl_ctrl.rot_num.field0_0x0.m_aData[3] = 0;
  _fixed_array_verifyrange__H1Zi_UiUi_PX01(4,5);
  kaza_pzl_ctrl.rot_num.field0_0x0.m_aData[4] = 3;
  return;
}

static int KazaPuzzle2CondCheck() {
	static int panel_item_tbl[5] = {
		/* [0] = */ -1,
		/* [1] = */ 49,
		/* [2] = */ 47,
		/* [3] = */ 46,
		/* [4] = */ 48
	};
	int i;
	
  undefined *item_id;
  bool bVar1;
  int iVar2;
  undefined **ppuVar3;
  int iVar4;
  
  ppuVar3 = &panel_item_tbl_979;
  iVar4 = 0;
  do {
    bVar1 = iVar4 < 5;
    iVar4 = iVar4 + 1;
    if (!bVar1) break;
    item_id = *ppuVar3;
    ppuVar3 = ppuVar3 + 1;
  } while ((item_id == (undefined *)0xffffffff) ||
          (iVar2 = GetPlyrItemHaveNum__Fi((int)item_id), 0 < iVar2));
  return bVar1 ^ 1;
}

int KazaPuzzle2Main() {
	int res;
	
  int iVar1;
  
  if (kaza_pzl_ctrl.step == '\0') {
    KazaPuzzle2DispInit__Fv();
    kaza_pzl_ctrl.step = '\x01';
  }
  if (kaza_pzl_ctrl.step == '\x01') {
    KazaPuzzle2Mode__Fv();
  }
  if (((kaza_pzl_ctrl.step == '\x02') && (kaza_pzl_disp.anim_step == '\x04')) &&
     (iVar1 = SndBufIsPlaying(kaza_pzl_ctrl.snd_id), iVar1 == 0)) {
    iVar1 = GetPzlSndBankID__Fv();
    SndBankRelease(iVar1);
    FinderBankSetup__Fv();
    kaza_pzl_ctrl.step = '\x03';
  }
  if ((kaza_pzl_ctrl.step == '\x03') && (iVar1 = FinderBankIsReady__Fv(), iVar1 != 0)) {
    SetNextGPhase__F14GPHASE_ID_ENUM(GID_STORY_NORMAL);
  }
  return 1;
}

static void KazaPuzzle2Mode() {
  KazaPuzzle2SubOutAnimCheck__Fv();
  if (kaza_pzl_disp.sub_anim_step == '\x02') {
    if (kaza_pzl_ctrl.rot_anim_flg == '\0') {
      if ((code *)kaza_pzl_pad_func[kaza_pzl_ctrl.mode] != (code *)0x0) {
        (*(code *)kaza_pzl_pad_func[kaza_pzl_ctrl.mode])();
      }
    }
    else {
      KazaPuzzle2RotAnimExe__Fv();
    }
  }
  return;
}

static void KazaPuzzle2RotAnimExe() {
	int sel_panel;
	
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float *pfVar5;
  int *piVar6;
  float fVar7;
  
  iVar2 = kaza2_panel_label_tbl[kaza_pzl_ctrl.csr_tate][kaza_pzl_ctrl.csr_yoko];
  if ((kaza_pzl_ctrl.rot_anim_flg != '\0') &&
     (kaza_pzl_disp.rot_anim_timer = kaza_pzl_disp.rot_anim_timer + 1,
     0x13 < (short)kaza_pzl_disp.rot_anim_timer)) {
                    /* end of inlined section */
    kaza_pzl_ctrl.rot_anim_flg = '\0';
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
    kaza_pzl_disp.rot_anim_step = '\0';
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
    kaza_pzl_disp.rot_anim_timer = 0;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    fVar7 = 90.0;
    _fixed_array_verifyrange__H1Zi_UiUi_PX01(0,5);
    _fixed_array_verifyrange__H1Zi_UiUi_PX01(0,5);
    iVar3 = kaza_pzl_ctrl.rot_num.field0_0x0.m_aData[0] + 1;
    iVar1 = iVar3;
    if (iVar3 < 0) {
      iVar1 = kaza_pzl_ctrl.rot_num.field0_0x0.m_aData[0] + 4;
    }
    kaza_pzl_ctrl.rot_num.field0_0x0.m_aData[0] = iVar3 + (iVar1 >> 2) * -4;
    _fixed_array_verifyrange__H1Zf_UiUi_PX01(0,5);
    _fixed_array_verifyrange__H1Zf_UiUi_PX01(0,5);
    kaza_pzl_disp.panel_rot.field0_0x0.m_aData[0] =
         kaza_pzl_disp.panel_rot.field0_0x0.m_aData[0] - fVar7;
    _fixed_array_verifyrange__H1Zf_UiUi_PX01(0,5);
    if (kaza_pzl_disp.panel_rot.field0_0x0.m_aData[0] < 0.0) {
      _fixed_array_verifyrange__H1Zf_UiUi_PX01(0,5);
      kaza_pzl_disp.panel_rot.field0_0x0.m_aData[0] =
           kaza_pzl_disp.panel_rot.field0_0x0.m_aData[0] + 360.0;
    }
    _fixed_array_verifyrange__H1Zi_UiUi_PX01(iVar2,5);
    piVar6 = kaza_pzl_ctrl.rot_num.field0_0x0.m_aData + iVar2;
    pfVar5 = kaza_pzl_disp.panel_rot.field0_0x0.m_aData + iVar2;
    _fixed_array_verifyrange__H1Zi_UiUi_PX01(iVar2,5);
    iVar1 = *piVar6;
    iVar4 = iVar1 + 1;
    iVar3 = iVar4;
    if (iVar4 < 0) {
      iVar3 = iVar1 + 4;
    }
    *piVar6 = iVar4 + (iVar3 >> 2) * -4;
    _fixed_array_verifyrange__H1Zf_UiUi_PX01(iVar2,5);
    _fixed_array_verifyrange__H1Zf_UiUi_PX01(iVar2,5);
    *pfVar5 = *pfVar5 + fVar7;
    _fixed_array_verifyrange__H1Zf_UiUi_PX01(iVar2,5);
    if (360.0 <= *pfVar5) {
      _fixed_array_verifyrange__H1Zf_UiUi_PX01(iVar2,5);
      *pfVar5 = *pfVar5 - 360.0;
                    /* end of inlined section */
    }
    kaza_pzl_ctrl.remainder_frequency = kaza_pzl_ctrl.remainder_frequency + -1;
    iVar2 = KazaPuzzle2ClearCheck__Fv();
    if (iVar2 != 0) {
      iVar2 = GetPzlSndBankID__Fv();
      kaza_pzl_ctrl.snd_id = SndBankPlay(iVar2,2,0,0,0x3200,0x1000,0,(_SND_3D_SET *)0x0);
      KazaPuzzle2ReqNextSubStep__Fc('\x03');
      PuzzleClear__Fi(3);
      return;
    }
    if (kaza_pzl_ctrl.remainder_frequency < '\x01') {
      KazaPuzzle2ReqNextSubStep__Fc('\x04');
    }
  }
  return;
}

static void KazaPuzzle2ReqNextSubStep(char next_step) {
  kaza_pzl_ctrl.next_mode = next_step;
  kaza_pzl_disp.sub_anim_step = '\x03';
  kaza_pzl_disp.sub_anim_timer = 0;
  return;
}

static void KazaPuzzle2SubOutAnimCheck() {
  if (kaza_pzl_disp.sub_anim_step == '\x04') {
    kaza_pzl_disp.sub_anim_step = '\0';
    kaza_pzl_ctrl.mode = kaza_pzl_ctrl.next_mode;
  }
  return;
}

static int KazaPuzzle2ClearCheck() {
	int res;
	
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar1 = GetKazaPuzzle2PinWheelWingColor__Fii(0,0);
  iVar2 = GetKazaPuzzle2PinWheelWingColor__Fii(3,2);
  if (iVar1 == iVar2) {
    iVar1 = GetKazaPuzzle2PinWheelWingColor__Fii(0,1);
    iVar2 = GetKazaPuzzle2PinWheelWingColor__Fii(1,3);
    if (iVar1 == iVar2) {
      iVar1 = GetKazaPuzzle2PinWheelWingColor__Fii(0,3);
      iVar2 = GetKazaPuzzle2PinWheelWingColor__Fii(4,1);
      if (iVar1 == iVar2) {
        iVar1 = GetKazaPuzzle2PinWheelWingColor__Fii(0,2);
        iVar2 = GetKazaPuzzle2PinWheelWingColor__Fii(2,0);
        if (iVar1 == iVar2) {
          iVar3 = 1;
          printf("Kaza Puzzle Clear!!\n");
        }
      }
    }
  }
  return iVar3;
}

static int GetKazaPuzzle2PinWheelWingColor(int pinwheel_label, int wing_label) {
	static char __FUNCTION__[32] = {
		/* [0] = */ 71,
		/* [1] = */ 101,
		/* [2] = */ 116,
		/* [3] = */ 75,
		/* [4] = */ 97,
		/* [5] = */ 122,
		/* [6] = */ 97,
		/* [7] = */ 80,
		/* [8] = */ 117,
		/* [9] = */ 122,
		/* [10] = */ 122,
		/* [11] = */ 108,
		/* [12] = */ 101,
		/* [13] = */ 50,
		/* [14] = */ 80,
		/* [15] = */ 105,
		/* [16] = */ 110,
		/* [17] = */ 87,
		/* [18] = */ 104,
		/* [19] = */ 101,
		/* [20] = */ 101,
		/* [21] = */ 108,
		/* [22] = */ 87,
		/* [23] = */ 105,
		/* [24] = */ 110,
		/* [25] = */ 103,
		/* [26] = */ 67,
		/* [27] = */ 111,
		/* [28] = */ 108,
		/* [29] = */ 111,
		/* [30] = */ 114,
		/* [31] = */ 0
	};
	int now_pos;
	
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (4 < pinwheel_label) {
    SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
    PrintAssertReal("Error! GetKazaPuzzle2PinWheelWingColor");
  }
  if (3 < wing_label) {
    SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
    PrintAssertReal("Error! GetKazaPuzzle2PinWheelWingColor");
  }
  if (pinwheel_label == 0) {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Zi_UiUi_PX01(0,5);
    iVar4 = 0;
    iVar3 = wing_label + kaza_pzl_ctrl.rot_num.field0_0x0.m_aData[0];
    iVar1 = iVar3;
    if (iVar3 < 0) {
      iVar1 = iVar3 + 3;
    }
  }
  else {
    _fixed_array_verifyrange__H1Zi_UiUi_PX01(pinwheel_label,5);
    iVar4 = pinwheel_label * 4;
    iVar2 = wing_label - kaza_pzl_ctrl.rot_num.field0_0x0.m_aData[pinwheel_label];
    iVar3 = iVar2 + 4;
    iVar1 = iVar3;
    if (iVar3 < 0) {
      iVar1 = iVar2 + 7;
    }
  }
                    /* end of inlined section */
  return *(int *)((iVar3 + (iVar1 >> 2) * -4) * 4 + *(int *)((int)kaza2_panel_color + iVar4));
}

static void KazaPuzzle2StartMsgPad() {
  if (**paddat != 1) {
    if (*paddat[1] == 1) {
      KazaPuzzle2ReqNextSubStep__Fc('\x01');
    }
    return;
  }
  KazaPuzzle2ReqNextSubStep__Fc('\x01');
  return;
}

static void KazaPuzzle2PinWheelSelPad() {
  int iVar1;
  
  if (((((pad[0].rpt & 0x8000U) == 0) && (iVar1 = GetPadAnalogRpt__Fi(2), iVar1 == 0)) &&
      ((pad[0].rpt & 0x2000U) == 0)) && (iVar1 = GetPadAnalogRpt__Fi(3), iVar1 == 0)) {
    if ((((pad[0].rpt & 0x1000U) == 0) && (iVar1 = GetPadAnalogRpt__Fi(0), iVar1 == 0)) &&
       (((pad[0].rpt & 0x4000U) == 0 && (iVar1 = GetPadAnalogRpt__Fi(1), iVar1 == 0)))) {
      if (**paddat == 1) {
        iVar1 = GetPzlSndBankID__Fv();
        kaza_pzl_ctrl.snd_id = SndBankPlay(iVar1,1,0,0,0x3200,0x1000,0,(_SND_3D_SET *)0x0);
        KazaPuzzle2RotAnimStart__Fv();
        return;
      }
      if (*paddat[1] == 1) {
        iVar1 = GetPzlSndBankID__Fv();
        kaza_pzl_ctrl.snd_id = SndBankPlay(iVar1,3,0,0,0x3200,0x1000,0,(_SND_3D_SET *)0x0);
        KazaPuzzle2ReqNextSubStep__Fc('\x02');
      }
    }
    else {
      iVar1 = GetPzlSndBankID__Fv();
      kaza_pzl_ctrl.snd_id = SndBankPlay(iVar1,0,0,0,0x3200,0x1000,0,(_SND_3D_SET *)0x0);
      kaza_pzl_ctrl.csr_tate = kaza_pzl_ctrl.csr_tate ^ 1;
    }
  }
  else {
    iVar1 = GetPzlSndBankID__Fv();
    kaza_pzl_ctrl.snd_id = SndBankPlay(iVar1,0,0,0,0x3200,0x1000,0,(_SND_3D_SET *)0x0);
    kaza_pzl_ctrl.csr_yoko = kaza_pzl_ctrl.csr_yoko ^ 1;
  }
  return;
}

static void KazaPuzzle2RotAnimStart() {
  kaza_pzl_ctrl.rot_anim_flg = '\x01';
  kaza_pzl_disp.rot_anim_timer = 0;
  kaza_pzl_disp.rot_anim_step = '\0';
  return;
}

static void KazaPuzzle2ExitPad() {
  int iVar1;
  
  if (((((pad[0].rpt & 0x8000U) == 0) && (iVar1 = GetPadAnalogRpt__Fi(2), iVar1 == 0)) &&
      ((pad[0].rpt & 0x2000U) == 0)) && (iVar1 = GetPadAnalogRpt__Fi(3), iVar1 == 0)) {
    if (**paddat == 1) {
      if (kaza_pzl_ctrl.exit_csr != '\0') {
        KazaPuzzle2ReqNextSubStep__Fc('\x01');
        return;
      }
      KazaPuzzle2ExitReq__Fv();
      return;
    }
    if (*paddat[1] == 1) {
      iVar1 = GetPzlSndBankID__Fv();
      kaza_pzl_ctrl.snd_id = SndBankPlay(iVar1,3,0,0,0x3200,0x1000,0,(_SND_3D_SET *)0x0);
      KazaPuzzle2ReqNextSubStep__Fc('\x01');
    }
  }
  else {
    iVar1 = GetPzlSndBankID__Fv();
    kaza_pzl_ctrl.snd_id = SndBankPlay(iVar1,0,0,0,0x3200,0x1000,0,(_SND_3D_SET *)0x0);
    kaza_pzl_ctrl.exit_csr = kaza_pzl_ctrl.exit_csr ^ 1;
  }
  return;
}

static void KazaPuzzle2ExitReq() {
  kaza_pzl_ctrl.step = '\x02';
  kaza_pzl_disp.anim_step = '\x03';
  kaza_pzl_disp.anim_timer = 0;
  return;
}

static void KazaPuzzle2ClearPad() {
  int bank_no;
  
  if (**paddat != 1) {
    if (*paddat[1] == 1) {
      bank_no = GetPzlSndBankID__Fv();
      kaza_pzl_ctrl.snd_id = SndBankPlay(bank_no,3,0,0,0x3200,0x1000,0,(_SND_3D_SET *)0x0);
      KazaPuzzle2ExitReq__Fv();
    }
    return;
  }
  KazaPuzzle2ExitReq__Fv();
  return;
}

static void KazaPuzzle2CondErrorPad() {
	int msg_state;
	
  int iVar1;
  int iVar2;
  
  iVar1 = MesStatusCheck__Fv();
  if (iVar1 != 0) {
    if (iVar1 == 1) {
      if (**paddat == 1) {
        MesSetNextPage__Fv();
      }
      else if (*paddat[1] == 1) {
        MesSetNextPage__Fv();
      }
      iVar1 = GetNowMsgPageNum__Fv();
      iVar2 = GetMsgPageNum__Fii(0x45,0);
      if (iVar2 <= iVar1) {
        iVar1 = GetMsgPageNum__Fii(0x45,0);
        SetMsgPage__Fc((char)((uint)((iVar1 + -1) * 0x1000000) >> 0x18));
        KazaPuzzle2ExitReq__Fv();
      }
    }
    return;
  }
  iVar1 = GetMsgPageNum__Fii(0x45,0);
  SetMsgPage__Fc((char)((uint)((iVar1 + -1) * 0x1000000) >> 0x18));
  KazaPuzzle2ExitReq__Fv();
  return;
}

static void KazaPuzzle2DispInit() {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  kaza_pzl_disp.anim_step = '\0';
  kaza_pzl_disp.anim_timer = 0;
  kaza_pzl_disp.sub_anim_step = '\0';
  kaza_pzl_disp.sub_anim_timer = 0;
  kaza_pzl_disp.rot_anim_step = '\0';
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  kaza_pzl_disp.rot_anim_timer = 0;
  _fixed_array_verifyrange__H1Zf_UiUi_PX01(0,5);
  kaza_pzl_disp.panel_rot.field0_0x0.m_aData[0] = 180.0;
  _fixed_array_verifyrange__H1Zf_UiUi_PX01(1,5);
  kaza_pzl_disp.panel_rot.field0_0x0.m_aData[1] = 270.0;
  _fixed_array_verifyrange__H1Zf_UiUi_PX01(2,5);
  kaza_pzl_disp.panel_rot.field0_0x0.m_aData[2] = 0.0;
  _fixed_array_verifyrange__H1Zf_UiUi_PX01(3,5);
  kaza_pzl_disp.panel_rot.field0_0x0.m_aData[3] = 0.0;
  _fixed_array_verifyrange__H1Zf_UiUi_PX01(4,5);
  kaza_pzl_disp.panel_rot.field0_0x0.m_aData[4] = 270.0;
  return;
}

void KazaPuzzle2DispMain() {
	u_char fade_alpha;
	
  uchar fade_alpha;
  
  fade_alpha = 0x80;
  if ((byte)kaza_pzl_ctrl.step - 1 < 2) {
    KazaPuzzle2Anim__FPcPsPUc(&kaza_pzl_disp.anim_step,&kaza_pzl_disp.anim_timer,&fade_alpha);
    if (kaza_pzl_disp.anim_step != '\x04') {
      KazaPuzzle2BgDisp__FiiUc(0,0,0x80);
      if ((code *)kaza_pzl_disp_func[kaza_pzl_ctrl.mode] != (code *)0x0) {
        (*(code *)kaza_pzl_disp_func[kaza_pzl_ctrl.mode])(0,0,0x80);
      }
    }
    KazaPuzzle2BlackBgDisp__FiiUc(0,0,fade_alpha);
  }
  return;
}

static void KazaPuzzle2Anim(char *anim_step, short int *anim_timer, u_char *alpha) {
	static ALPHA_ANIM_TBL kaza_out_alpha[2] = {
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
    PrintWarningReal("Warning!! KazaPuzzle2Anim()");
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
                      ((ALPHA_ANIM_TBL *)kaza_out_alpha_1034,(int)(short)*anim_timer);
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

static void KazaPuzzle2StartMsgDisp(int off_x, int off_y, u_char alpha) {
	u_char mode_alpha;
	
  uchar alpha_00;
  
  alpha_00 = alpha;
  if (kaza_pzl_ctrl.step == '\x01') {
    alpha_00 = KazaPuzzle2ModeAnimCtrl__Fv();
  }
  KazaPuzzle2PanelAllShadowDisp__FiiUc(0,0,alpha);
  KazaPuzzle2PanelAllDisp__FiiUc(0,0,alpha);
  KazaPuzzle2PanelAllEmbossShadowDisp__FiiUc(0,0,alpha);
  KazaPuzzle2PanelAllEmbossHighLightDisp__FiiUc(0,0,alpha);
  KazaPuzzle2ScreenMask__FiiUc(0,0,alpha);
  KazaPuzzle2StartMsgWinDisp__FiiUc(0,0,alpha_00);
  return;
}

static void KazaPuzzle2PinWheelSelDisp(int off_x, int off_y, u_char alpha) {
	u_char mode_alpha;
	
  uchar alpha_00;
  
  alpha_00 = alpha;
  if (kaza_pzl_ctrl.step == '\x01') {
    alpha_00 = KazaPuzzle2ModeAnimCtrl__Fv();
  }
  KazaPuzzle2PanelAllShadowDisp__FiiUc(0,0,alpha);
  KazaPuzzle2PanelAllDisp__FiiUc(0,0,alpha);
  KazaPuzzle2PanelAllEmbossShadowDisp__FiiUc(0,0,alpha);
  KazaPuzzle2PanelAllEmbossHighLightDisp__FiiUc(0,0,alpha);
  KazaPuzzle2PanelFlareDisp__FiiUc(0,0,alpha_00);
  KazaPuzzle2ScreenMask__FiiUc(0,0,alpha);
  KazaPuzzle2CapBaseDisp__FiiUc(0,0,alpha_00);
  KazaPuzzle2CapDisp__FiiUc(0,0,alpha_00);
  KazaPuzzle2RemainderFrequency__FiiUc(0,0,alpha_00);
  return;
}

static u_char KazaPuzzle2ModeAnimCtrl() {
	static char __FUNCTION__[24] = {
		/* [0] = */ 75,
		/* [1] = */ 97,
		/* [2] = */ 122,
		/* [3] = */ 97,
		/* [4] = */ 80,
		/* [5] = */ 117,
		/* [6] = */ 122,
		/* [7] = */ 122,
		/* [8] = */ 108,
		/* [9] = */ 101,
		/* [10] = */ 50,
		/* [11] = */ 77,
		/* [12] = */ 111,
		/* [13] = */ 100,
		/* [14] = */ 101,
		/* [15] = */ 65,
		/* [16] = */ 110,
		/* [17] = */ 105,
		/* [18] = */ 109,
		/* [19] = */ 67,
		/* [20] = */ 116,
		/* [21] = */ 114,
		/* [22] = */ 108,
		/* [23] = */ 0
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
  
  if (kaza_pzl_disp.sub_anim_step == '\0') {
    kaza_pzl_disp.sub_anim_timer = 0;
    kaza_pzl_disp.sub_anim_step = '\x01';
  }
  if (kaza_pzl_disp.sub_anim_step == '\x02') {
    return 0x80;
  }
  if (kaza_pzl_disp.sub_anim_step < '\x03') {
    if (kaza_pzl_disp.sub_anim_step == '\x01') {
      uVar1 = Anim2D_CalcNowAlpha__FPC14ALPHA_ANIM_TBLi
                        ((ALPHA_ANIM_TBL *)in_alpha_tbl_1044,
                         (int)(short)kaza_pzl_disp.sub_anim_timer);
      if ((short)(kaza_pzl_disp.sub_anim_timer + 1) < 7) {
        kaza_pzl_disp.sub_anim_timer = kaza_pzl_disp.sub_anim_timer + 1;
        return uVar1;
      }
      kaza_pzl_disp.sub_anim_step = '\x02';
      kaza_pzl_disp.sub_anim_timer = 0;
      return uVar1;
    }
  }
  else {
    if (kaza_pzl_disp.sub_anim_step == '\x03') {
      uVar1 = Anim2D_CalcNowAlpha__FPC14ALPHA_ANIM_TBLi
                        ((ALPHA_ANIM_TBL *)out_alpha_tbl_1045,
                         (int)(short)kaza_pzl_disp.sub_anim_timer);
      if ((short)(kaza_pzl_disp.sub_anim_timer + 1) < 5) {
        kaza_pzl_disp.sub_anim_timer = kaza_pzl_disp.sub_anim_timer + 1;
        return uVar1;
      }
      kaza_pzl_disp.sub_anim_step = '\x04';
      kaza_pzl_disp.sub_anim_timer = 0;
      return uVar1;
    }
    if (kaza_pzl_disp.sub_anim_step == '\x04') {
      return '\0';
    }
  }
  SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
  PrintAssertReal("Error! KazaPuzzle2ModeAnimCtrl");
  return 0x80;
}

static void KazaPuzzle2ExitSelDisp(int off_x, int off_y, u_char alpha) {
	u_char mode_alpha;
	
  uchar alpha_00;
  
  alpha_00 = alpha;
  if (kaza_pzl_ctrl.step == '\x01') {
    alpha_00 = KazaPuzzle2ModeAnimCtrl__Fv();
  }
  KazaPuzzle2PanelAllShadowDisp__FiiUc(0,0,alpha);
  KazaPuzzle2PanelAllDisp__FiiUc(0,0,alpha);
  KazaPuzzle2PanelAllEmbossShadowDisp__FiiUc(0,0,alpha);
  KazaPuzzle2PanelAllEmbossHighLightDisp__FiiUc(0,0,alpha);
  KazaPuzzle2ScreenMask__FiiUc(0,0,alpha);
  KazaPuzzle2ExitConfWinDisp__FiiUc(0,0,alpha_00);
  return;
}

static void KazaPuzzle2ClearDisp(int off_x, int off_y, u_char alpha) {
	u_char mode_alpha;
	
  uchar alpha_00;
  
  alpha_00 = alpha;
  if (kaza_pzl_ctrl.step == '\x01') {
    alpha_00 = KazaPuzzle2ModeAnimCtrl__Fv();
  }
  KazaPuzzle2PanelAllShadowDisp__FiiUc(0,0,alpha);
  KazaPuzzle2PanelAllDisp__FiiUc(0,0,alpha);
  KazaPuzzle2PanelAllEmbossShadowDisp__FiiUc(0,0,alpha);
  KazaPuzzle2PanelAllEmbossHighLightDisp__FiiUc(0,0,alpha);
  KazaPuzzle2ScreenMask__FiiUc(0,0,alpha);
  KazaPuzzle2ClearWinDisp__FiiUc(0,0,alpha_00);
  return;
}

static void KazaPuzzle2FailureDisp(int off_x, int off_y, u_char alpha) {
	u_char mode_alpha;
	
  uchar alpha_00;
  
  alpha_00 = alpha;
  if (kaza_pzl_ctrl.step == '\x01') {
    alpha_00 = KazaPuzzle2ModeAnimCtrl__Fv();
  }
  KazaPuzzle2PanelAllShadowDisp__FiiUc(0,0,alpha);
  KazaPuzzle2PanelAllDisp__FiiUc(0,0,alpha);
  KazaPuzzle2PanelAllEmbossShadowDisp__FiiUc(0,0,alpha);
  KazaPuzzle2PanelAllEmbossHighLightDisp__FiiUc(0,0,alpha);
  KazaPuzzle2ScreenMask__FiiUc(0,0,alpha);
  KazaPuzzle2FailureWinDisp__FiiUc(0,0,alpha_00);
  return;
}

static void KazaPuzzle2CondErrorDisp(int off_x, int off_y, u_char alpha) {
	u_char mode_alpha;
	
  uchar alpha_00;
  
  alpha_00 = alpha;
  if (kaza_pzl_ctrl.step == '\x01') {
    alpha_00 = KazaPuzzle2ModeAnimCtrl__Fv();
  }
  KazaPuzzle2PanelShadowDisp__FiiiUc(0,0,0,alpha);
  KazaPuzzle2PanelDisp__FiiiUcf(0,0,0,alpha,0.0);
  KazaPuzzle2PanelEmbossShadowDisp__FiiiUc(0,0,0,alpha);
  KazaPuzzle2PanelEmbossHighLightDisp__FiiiUc(0,0,0,alpha);
  KazaPuzzle2ScreenMask__FiiUc(0,0,alpha);
  KazaPuzzle2CondErrorWinDisp__FiiUc(0,0,alpha_00);
  return;
}

static void KazaPuzzle2BgDisp(int off_x, int off_y, u_char alpha) {
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
  d = puzzle_kaza_tex;
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

static void KazaPuzzle2PanelAllShadowDisp(int off_x, int off_y, u_char alpha) {
	int i;
	
  int iVar1;
  int panel_label;
  
  panel_label = 0;
  do {
    iVar1 = panel_label + 1;
    KazaPuzzle2PanelShadowDisp__FiiiUc(panel_label,off_x,off_y,alpha);
    panel_label = iVar1;
  } while (iVar1 < 5);
  return;
}

static void KazaPuzzle2PanelShadowDisp(int panel_label, int off_x, int off_y, u_char alpha) {
	static char __FUNCTION__[27] = {
		/* [0] = */ 75,
		/* [1] = */ 97,
		/* [2] = */ 122,
		/* [3] = */ 97,
		/* [4] = */ 80,
		/* [5] = */ 117,
		/* [6] = */ 122,
		/* [7] = */ 122,
		/* [8] = */ 108,
		/* [9] = */ 101,
		/* [10] = */ 50,
		/* [11] = */ 80,
		/* [12] = */ 97,
		/* [13] = */ 110,
		/* [14] = */ 101,
		/* [15] = */ 108,
		/* [16] = */ 83,
		/* [17] = */ 104,
		/* [18] = */ 97,
		/* [19] = */ 100,
		/* [20] = */ 111,
		/* [21] = */ 119,
		/* [22] = */ 68,
		/* [23] = */ 105,
		/* [24] = */ 115,
		/* [25] = */ 112,
		/* [26] = */ 0
	};
	DISP_SPRT shadow_ds;
	static int shadow_tex_tbl[5] = {
		/* [0] = */ 16,
		/* [1] = */ 14,
		/* [2] = */ 15,
		/* [3] = */ 12,
		/* [4] = */ 13
	};
	
  void *tm2_addr;
  DISP_SPRT shadow_ds;
  
  if (4 < panel_label) {
    SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
    PrintAssertReal("Error! KazaPuzzle2PanelShadowDisp");
  }
  tm2_addr = GetPzlTexDataAddr__Fv();
  PK2SendVram__FUiiii((uint)tm2_addr,-1,-1,0);
  CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT
            (&shadow_ds,puzzle_kaza_tex + *(int *)(shadow_tex_tbl_1067 + panel_label * 4));
  shadow_ds.x = shadow_ds.x + (float)off_x;
  shadow_ds.y = shadow_ds.y + (float)off_y;
  shadow_ds.alphar = 0x46;
  shadow_ds.alpha = (uchar)((int)((uint)shadow_ds.alpha * (uint)alpha) >> 7);
  DispSprD__FP9DISP_SPRT(&shadow_ds);
  return;
}

static void KazaPuzzle2PanelAllDisp(int off_x, int off_y, u_char alpha) {
	int i;
	int sel_panel;
	float anim_rot;
	float rot;
	
  int iVar1;
  void *tm2_addr;
  int panel_label;
  int iVar2;
  fixed_array<float,5> *pfVar3;
  float fVar4;
  float rot;
  float fVar5;
  
  if (kaza_pzl_ctrl.rot_anim_flg == '\0') {
    fVar4 = 0.0;
  }
  else {
    fVar4 = KazaPuzzle2RotAnim__Fv();
  }
  fVar5 = 360.0;
  iVar1 = kaza2_panel_label_tbl[kaza_pzl_ctrl.csr_tate][kaza_pzl_ctrl.csr_yoko];
  pfVar3 = &kaza_pzl_disp.panel_rot;
  tm2_addr = GetPzlTexDataAddr__Fv();
  PK2SendVram__FUiiii((uint)tm2_addr,-1,-1,0);
  panel_label = 0;
  do {
    if (kaza_pzl_ctrl.rot_anim_flg == '\0') {
LAB_001d03a8:
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
      _fixed_array_verifyrange__H1Zf_UiUi_PX01(panel_label,5);
      rot = (pfVar3->field0_0x0).m_aData[0];
    }
    else if (panel_label == 0) {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
      _fixed_array_verifyrange__H1Zf_UiUi_PX01(0,5);
      rot = kaza_pzl_disp.panel_rot.field0_0x0.m_aData[0] - fVar4;
                    /* end of inlined section */
      if (rot < 0.0) {
        rot = rot + fVar5;
      }
    }
    else {
      if (panel_label != iVar1) goto LAB_001d03a8;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
      _fixed_array_verifyrange__H1Zf_UiUi_PX01(panel_label,5);
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
      rot = (pfVar3->field0_0x0).m_aData[0] + fVar4;
                    /* end of inlined section */
      if (360.0 <= rot) {
        rot = rot - 360.0;
      }
    }
    iVar2 = panel_label + 1;
    pfVar3 = (fixed_array<float,5> *)((pfVar3->field0_0x0).m_aData + 1);
    KazaPuzzle2PanelDisp__FiiiUcf(panel_label,off_x,off_y,alpha,rot);
    panel_label = iVar2;
    if (4 < iVar2) {
      return;
    }
  } while( true );
}

static float KazaPuzzle2RotAnim() {
	static ROT_ANIM_TBL rot_anim_tbl[2] = {
		/* [0] = */ {
			/* .start_rot = */ 0.f,
			/* .end_rot = */ 90.f,
			/* .start_time = */ 0,
			/* .end_time = */ 20
		},
		/* [1] = */ {
			/* .start_rot = */ -1.f,
			/* .end_rot = */ -1.f,
			/* .start_time = */ -1,
			/* .end_time = */ -1
		}
	};
	float rot;
	
  float fVar1;
  
  fVar1 = 0.0;
  if (kaza_pzl_disp.rot_anim_step == '\0') {
    kaza_pzl_disp.rot_anim_timer = 0;
    kaza_pzl_disp.rot_anim_step = '\x02';
  }
  if (kaza_pzl_disp.rot_anim_step == '\x02') {
    fVar1 = Anim2D_CalcNowRot__FPC12ROT_ANIM_TBLi
                      ((ROT_ANIM_TBL *)rot_anim_tbl_1074,(int)(short)kaza_pzl_disp.rot_anim_timer);
  }
  return fVar1;
}

static void KazaPuzzle2PanelDisp(int panel_label, int off_x, int off_y, u_char alpha, float rot) {
	static char __FUNCTION__[21] = {
		/* [0] = */ 75,
		/* [1] = */ 97,
		/* [2] = */ 122,
		/* [3] = */ 97,
		/* [4] = */ 80,
		/* [5] = */ 117,
		/* [6] = */ 122,
		/* [7] = */ 122,
		/* [8] = */ 108,
		/* [9] = */ 101,
		/* [10] = */ 50,
		/* [11] = */ 80,
		/* [12] = */ 97,
		/* [13] = */ 110,
		/* [14] = */ 101,
		/* [15] = */ 108,
		/* [16] = */ 68,
		/* [17] = */ 105,
		/* [18] = */ 115,
		/* [19] = */ 112,
		/* [20] = */ 0
	};
	DISP_SPRT panel_ds;
	static int panel_tex_tbl[5] = {
		/* [0] = */ 53,
		/* [1] = */ 54,
		/* [2] = */ 55,
		/* [3] = */ 56,
		/* [4] = */ 57
	};
	
  void *tm2_addr;
  float fVar1;
  DISP_SPRT panel_ds;
  
  if (4 < panel_label) {
    SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
    PrintAssertReal("Error! KazaPuzzle2PanelDisp");
  }
  tm2_addr = GetPzlTexDataAddr__Fv();
  PK2SendVram__FUiiii((uint)tm2_addr,-1,-1,0);
  CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT
            (&panel_ds,puzzle_kaza_tex + *(int *)(panel_tex_tbl_1078 + panel_label * 4));
  panel_ds.x = panel_ds.x + (float)off_x;
  panel_ds.y = panel_ds.y + (float)off_y;
  panel_ds.alpha = (uchar)((int)((uint)panel_ds.alpha * (uint)alpha) >> 7);
  if ((int)panel_ds.w < 0) {
    fVar1 = (float)(panel_ds.w & 1 | panel_ds.w >> 1);
    fVar1 = fVar1 + fVar1;
  }
  else {
    fVar1 = (float)panel_ds.w;
  }
  panel_ds.crx = panel_ds.x + fVar1 * 0.5;
  if ((int)panel_ds.h < 0) {
    fVar1 = (float)(panel_ds.h & 1 | panel_ds.h >> 1);
    fVar1 = fVar1 + fVar1;
  }
  else {
    fVar1 = (float)panel_ds.h;
  }
  panel_ds.cry = panel_ds.y + fVar1 * 0.5;
  panel_ds.rot = rot;
  DispSprD__FP9DISP_SPRT(&panel_ds);
  return;
}

static void KazaPuzzle2PanelAllEmbossShadowDisp(int off_x, int off_y, u_char alpha) {
	int i;
	
  int iVar1;
  int panel_label;
  
  panel_label = 0;
  do {
    iVar1 = panel_label + 1;
    KazaPuzzle2PanelEmbossShadowDisp__FiiiUc(panel_label,off_x,off_y,alpha);
    panel_label = iVar1;
  } while (iVar1 < 5);
  return;
}

static void KazaPuzzle2PanelEmbossShadowDisp(int panel_label, int off_x, int off_y, u_char alpha) {
	static char __FUNCTION__[33] = {
		/* [0] = */ 75,
		/* [1] = */ 97,
		/* [2] = */ 122,
		/* [3] = */ 97,
		/* [4] = */ 80,
		/* [5] = */ 117,
		/* [6] = */ 122,
		/* [7] = */ 122,
		/* [8] = */ 108,
		/* [9] = */ 101,
		/* [10] = */ 50,
		/* [11] = */ 80,
		/* [12] = */ 97,
		/* [13] = */ 110,
		/* [14] = */ 101,
		/* [15] = */ 108,
		/* [16] = */ 69,
		/* [17] = */ 109,
		/* [18] = */ 98,
		/* [19] = */ 111,
		/* [20] = */ 115,
		/* [21] = */ 115,
		/* [22] = */ 83,
		/* [23] = */ 104,
		/* [24] = */ 97,
		/* [25] = */ 100,
		/* [26] = */ 111,
		/* [27] = */ 119,
		/* [28] = */ 68,
		/* [29] = */ 105,
		/* [30] = */ 115,
		/* [31] = */ 112,
		/* [32] = */ 0
	};
	DISP_SPRT emboss_ds;
	static int emboss_tbl[5] = {
		/* [0] = */ 11,
		/* [1] = */ 9,
		/* [2] = */ 10,
		/* [3] = */ 7,
		/* [4] = */ 8
	};
	
  void *tm2_addr;
  DISP_SPRT emboss_ds;
  
  if (4 < panel_label) {
    SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
    PrintAssertReal("Error! KazaPuzzle2PanelEmbossShadowDisp");
  }
  tm2_addr = GetPzlTexDataAddr__Fv();
  PK2SendVram__FUiiii((uint)tm2_addr,-1,-1,0);
  CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT
            (&emboss_ds,puzzle_kaza_tex + *(int *)(emboss_tbl_1085 + panel_label * 4));
  emboss_ds.x = emboss_ds.x + (float)off_x;
  emboss_ds.y = emboss_ds.y + (float)off_y;
  emboss_ds.alpha = (uchar)((int)((uint)emboss_ds.alpha * (uint)alpha) >> 7);
  DispSprD__FP9DISP_SPRT(&emboss_ds);
  return;
}

static void KazaPuzzle2PanelAllEmbossHighLightDisp(int off_x, int off_y, u_char alpha) {
	int i;
	
  int iVar1;
  int panel_label;
  
  panel_label = 0;
  do {
    iVar1 = panel_label + 1;
    KazaPuzzle2PanelEmbossHighLightDisp__FiiiUc(panel_label,off_x,off_y,alpha);
    panel_label = iVar1;
  } while (iVar1 < 5);
  return;
}

static void KazaPuzzle2PanelEmbossHighLightDisp(int panel_label, int off_x, int off_y, u_char alpha) {
	DISP_SPRT emboss_ds;
	static int emboss_tbl[5] = {
		/* [0] = */ 6,
		/* [1] = */ 4,
		/* [2] = */ 5,
		/* [3] = */ 2,
		/* [4] = */ 3
	};
	
  void *tm2_addr;
  DISP_SPRT emboss_ds;
  
  tm2_addr = GetPzlTexDataAddr__Fv();
  PK2SendVram__FUiiii((uint)tm2_addr,-1,-1,0);
  CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT
            (&emboss_ds,puzzle_kaza_tex + *(int *)(emboss_tbl_1092 + panel_label * 4));
  emboss_ds.x = emboss_ds.x + (float)off_x;
  emboss_ds.y = emboss_ds.y + (float)off_y;
  emboss_ds.alpha = (uchar)((int)((uint)emboss_ds.alpha * (uint)alpha) >> 7);
  DispSprD__FP9DISP_SPRT(&emboss_ds);
  return;
}

static void KazaPuzzle2PanelFlareDisp(int off_x, int off_y, u_char alpha) {
	DISP_SPRT flare_ds;
	static int flare_tex_tbl[2][2] = {
		/* [0] = */ {
			/* [0] = */ 17,
			/* [1] = */ 19
		},
		/* [1] = */ {
			/* [0] = */ 18,
			/* [1] = */ 20
		}
	};
	
  uchar uVar1;
  void *tm2_addr;
  DISP_SPRT flare_ds;
  
  uVar1 = KazaPuzzle2FlareAnim__Fv();
  tm2_addr = GetPzlTexDataAddr__Fv();
  PK2SendVram__FUiiii((uint)tm2_addr,-1,-1,0);
  CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT
            (&flare_ds,
             puzzle_kaza_tex +
             *(int *)(flare_tex_tbl_1096 +
                     (kaza_pzl_ctrl.csr_tate * 2 + (int)kaza_pzl_ctrl.csr_yoko) * 4));
  flare_ds.x = flare_ds.x + (float)off_x;
  flare_ds.y = flare_ds.y + (float)off_y;
  flare_ds.alphar = 0x48;
  flare_ds.alpha = (uchar)((int)((uint)flare_ds.alpha * (uint)alpha) >> 7);
  flare_ds.r = uVar1;
  flare_ds.g = uVar1;
  flare_ds.b = uVar1;
  DispSprD__FP9DISP_SPRT(&flare_ds);
  return;
}

static u_char KazaPuzzle2FlareAnim() {
	static RGB_ANIM_TBL flare_rgb_tbl[3] = {
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
                    ((RGB_ANIM_TBL *)flare_rgb_tbl_1100,(int)(short)kaza_pzl_disp.flare_anim_timer);
  kaza_pzl_disp.flare_anim_timer = kaza_pzl_disp.flare_anim_timer + 1;
  if (0x3b < (short)kaza_pzl_disp.flare_anim_timer) {
    kaza_pzl_disp.flare_anim_timer = 0;
  }
  return uVar1;
}

static void KazaPuzzle2CapBaseDisp(int off_x, int off_y, u_char alpha) {
	DISP_SPRT base_ds;
	
  void *tm2_addr;
  DISP_SPRT base_ds;
  
  tm2_addr = GetPzlTexDataAddr__Fv();
  PK2SendVram__FUiiii((uint)tm2_addr,-1,-1,0);
  CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&base_ds,puzzle_kaza_tex + 0x1c);
  base_ds.x = base_ds.x + (float)off_x;
  base_ds.y = base_ds.y + (float)off_y;
  base_ds.alphar = 0x46;
  base_ds.alpha = (uchar)((int)((uint)base_ds.alpha * (uint)alpha) >> 7);
  DispSprD__FP9DISP_SPRT(&base_ds);
  return;
}

static void KazaPuzzle2CapDisp(int off_x, int off_y, u_char alpha) {
	DISP_SPRT base_ds;
	
  void *tm2_addr;
  DISP_SPRT base_ds;
  
  tm2_addr = GetPzlTexDataAddr__Fv();
  PK2SendVram__FUiiii((uint)tm2_addr,-1,-1,0);
  CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&base_ds,puzzle_kaza_tex + 0x1b);
  base_ds.x = base_ds.x + (float)off_x;
  base_ds.y = base_ds.y + (float)off_y;
  base_ds.alpha = (uchar)((int)((uint)base_ds.alpha * (uint)alpha) >> 7);
  DispSprD__FP9DISP_SPRT(&base_ds);
  return;
}

static void KazaPuzzle2RemainderFrequency(int off_x, int off_y, u_char alpha) {
	static char __FUNCTION__[30] = {
		/* [0] = */ 75,
		/* [1] = */ 97,
		/* [2] = */ 122,
		/* [3] = */ 97,
		/* [4] = */ 80,
		/* [5] = */ 117,
		/* [6] = */ 122,
		/* [7] = */ 122,
		/* [8] = */ 108,
		/* [9] = */ 101,
		/* [10] = */ 50,
		/* [11] = */ 82,
		/* [12] = */ 101,
		/* [13] = */ 109,
		/* [14] = */ 97,
		/* [15] = */ 105,
		/* [16] = */ 110,
		/* [17] = */ 100,
		/* [18] = */ 101,
		/* [19] = */ 114,
		/* [20] = */ 70,
		/* [21] = */ 114,
		/* [22] = */ 101,
		/* [23] = */ 113,
		/* [24] = */ 117,
		/* [25] = */ 101,
		/* [26] = */ 110,
		/* [27] = */ 99,
		/* [28] = */ 121,
		/* [29] = */ 0
	};
	DISP_SPRT ds;
	static int num_tex_tbl[10] = {
		/* [0] = */ 30,
		/* [1] = */ 30,
		/* [2] = */ 31,
		/* [3] = */ 32,
		/* [4] = */ 33,
		/* [5] = */ 34,
		/* [6] = */ 35,
		/* [7] = */ 36,
		/* [8] = */ 37,
		/* [9] = */ 38
	};
	static int num_tex_tbl_s[10] = {
		/* [0] = */ 42,
		/* [1] = */ 42,
		/* [2] = */ 43,
		/* [3] = */ 44,
		/* [4] = */ 45,
		/* [5] = */ 46,
		/* [6] = */ 47,
		/* [7] = */ 48,
		/* [8] = */ 49,
		/* [9] = */ 50
	};
	
  uchar uVar1;
  void *tm2_addr;
  float fVar2;
  float fVar3;
  DISP_SPRT ds;
  
  if ('\t' < kaza_pzl_ctrl.remainder_frequency) {
    SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
    PrintAssertReal("Error! KazaPuzzle2RemainderFrequency");
  }
  tm2_addr = GetPzlTexDataAddr__Fv();
  fVar2 = (float)off_x;
  PK2SendVram__FUiiii((uint)tm2_addr,-1,-1,0);
  fVar3 = (float)off_y;
  CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&ds,puzzle_kaza_tex + 0x27);
  ds.x = ds.x + fVar2;
  ds.alphar = 0x46;
  ds.y = ds.y + fVar3;
  ds.alpha = (uchar)((int)((uint)ds.alpha * (uint)alpha) >> 7);
  DispSprD__FP9DISP_SPRT(&ds);
  uVar1 = GetLanguage__Fv();
  if (uVar1 == '\x03') {
    if (*(int *)(num_tex_tbl_s_1111 + kaza_pzl_ctrl.remainder_frequency * 4) != -1) {
      CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT
                (&ds,puzzle_kaza_tex +
                     *(int *)(num_tex_tbl_s_1111 + kaza_pzl_ctrl.remainder_frequency * 4));
      ds.x = ds.x + fVar2;
      ds.y = ds.y + fVar3;
      ds.alpha = (uchar)((int)((uint)ds.alpha * (uint)alpha) >> 7);
      DispSprD__FP9DISP_SPRT(&ds);
    }
  }
  else if (*(int *)(num_tex_tbl_1110 + kaza_pzl_ctrl.remainder_frequency * 4) != -1) {
    CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT
              (&ds,puzzle_kaza_tex +
                   *(int *)(num_tex_tbl_1110 + kaza_pzl_ctrl.remainder_frequency * 4));
    ds.x = ds.x + fVar2;
    ds.y = ds.y + fVar3;
    ds.alpha = (uchar)((int)((uint)ds.alpha * (uint)alpha) >> 7);
    DispSprD__FP9DISP_SPRT(&ds);
  }
  uVar1 = GetLanguage__Fv();
  if (uVar1 == '\x03') {
    CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&ds,puzzle_kaza_tex + 0x29);
  }
  else {
    CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&ds,puzzle_kaza_tex + 0x1d);
  }
  ds.x = ds.x + fVar2;
  ds.y = ds.y + fVar3;
  ds.alpha = (uchar)((int)((uint)ds.alpha * (uint)alpha) >> 7);
  DispSprD__FP9DISP_SPRT(&ds);
  return;
}

static void KazaPuzzle2ScreenMask(int off_x, int off_y, u_char alpha) {
	DISP_SPRT ds;
	
  void *tm2_addr;
  float fVar1;
  DISP_SPRT ds;
  
  tm2_addr = GetPzlTexDataAddr__Fv();
  PK2SendVram__FUiiii((uint)tm2_addr,-1,-1,0);
  CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&ds,puzzle_kaza_tex + 0x28);
  ds.csx = ds.x + (float)off_x;
  ds.csy = ds.y + (float)off_y;
  if ((int)ds.w < 0) {
    fVar1 = (float)(ds.w & 1 | ds.w >> 1);
    fVar1 = fVar1 + fVar1;
  }
  else {
    fVar1 = (float)ds.w;
  }
  ds.scw = 640.0 / fVar1;
  if ((int)ds.h < 0) {
    fVar1 = (float)(ds.h & 1 | ds.h >> 1);
    fVar1 = fVar1 + fVar1;
  }
  else {
    fVar1 = (float)ds.h;
  }
  ds.sch = 448.0 / fVar1;
  ds.alphar = 0x46;
  ds.alpha = (uchar)((int)((uint)ds.alpha * (uint)alpha) >> 7);
  ds.x = ds.csx;
  ds.y = ds.csy;
  DispSprD__FP9DISP_SPRT(&ds);
  return;
}

static void KazaPuzzle2CmnWinDisp(int off_x, int off_y, u_char alpha) {
	MSG_WIN_DAT win_dat;
	
  MSG_WIN_DAT win_dat;
  
  SetMsgWinDefData__FP11MSG_WIN_DATi(&win_dat,0x45);
  DrawCmnWindow__FUiffffUcUc(0,win_dat.x,win_dat.y,win_dat.w,win_dat.h,alpha,0x80);
  return;
}

static void KazaPuzzle2StartMsgWinDisp(int off_x, int off_y, u_char alpha) {
	DISP_STR ds;
	
  DISP_STR ds;
  
  SetMsgDefData__FP8DISP_STRi(&ds,0x45);
  KazaPuzzle2CmnWinDisp__FiiUc(off_x,off_y,alpha);
  PrintMsg__Fiiiiiii(0x45,1,ds.pos_x,ds.pos_y,1,(uint)alpha,0);
  return;
}

static void KazaPuzzle2ExitConfWinDisp(int off_x, int off_y, u_char alpha) {
	DISP_STR ds;
	
  DISP_STR ds;
  
  SetMsgDefData__FP8DISP_STRi(&ds,0x45);
  KazaPuzzle2CmnWinDisp__FiiUc(off_x,off_y,alpha);
  DrawCmnSelCsr__FUiffUcfUc
            (0,(float)(kaza_pzl_ctrl.exit_csr * 0xcf + off_x + 0x9b),(float)(off_y + 0x184),alpha,
             0.0,'\0');
  DrawCmnSelYes__FUiffUc(0,(float)(off_x + 0x99),(float)(off_y + 0x186),alpha);
  DrawCmnSelNo__FUiffUc(0,(float)(off_x + 0x169),(float)(off_y + 0x186),alpha);
  PrintMsg__Fiiiiiii(0x45,4,ds.pos_x,ds.pos_y,1,(uint)alpha,0);
  return;
}

static void KazaPuzzle2ClearWinDisp(int off_x, int off_y, u_char alpha) {
	DISP_STR ds;
	
  DISP_STR ds;
  
  SetMsgDefData__FP8DISP_STRi(&ds,0x45);
  KazaPuzzle2CmnWinDisp__FiiUc(off_x,off_y,alpha);
  PrintMsg__Fiiiiiii(0x45,3,ds.pos_x,ds.pos_y,1,(uint)alpha,0);
  return;
}

static void KazaPuzzle2FailureWinDisp(int off_x, int off_y, u_char alpha) {
	DISP_STR ds;
	
  DISP_STR ds;
  
  SetMsgDefData__FP8DISP_STRi(&ds,0x45);
  KazaPuzzle2CmnWinDisp__FiiUc(off_x,off_y,alpha);
  PrintMsg__Fiiiiiii(0x45,7,ds.pos_x,ds.pos_y,1,(uint)alpha,0);
  return;
}

static void KazaPuzzle2CondErrorWinDisp(int off_x, int off_y, u_char alpha) {
	DISP_STR ds;
	
  DISP_STR ds;
  
  SetMsgDefData__FP8DISP_STRi(&ds,0x45);
  KazaPuzzle2CmnWinDisp__FiiUc(off_x,off_y,alpha);
  PrintMsg_P__Fiiiiiiiii(0x45,0,ds.pos_x,ds.pos_y,1,(uint)alpha,0,0,0);
  return;
}

void KazaPuzzle2CrossScreenDisp(int off_x, int off_y, u_char alpha) {
  int iVar1;
  
  KazaPuzzle2BgDisp__FiiUc(0,0,0x80);
  iVar1 = KazaPuzzle2CondCheck__Fv();
  if (iVar1 == 0) {
    KazaPuzzle2PanelShadowDisp__FiiiUc(0,0,0,0x80);
    KazaPuzzle2PanelDisp__FiiiUcf(0,0,0,0x80,0.0);
    KazaPuzzle2PanelEmbossShadowDisp__FiiiUc(0,0,0,0x80);
    KazaPuzzle2PanelEmbossHighLightDisp__FiiiUc(0,0,0,0x80);
  }
  else {
    KazaPuzzle2PanelAllShadowDisp__FiiUc(0,0,0x80);
    KazaPuzzle2PanelAllDisp__FiiUc(0,0,0x80);
    KazaPuzzle2PanelAllEmbossShadowDisp__FiiUc(0,0,0x80);
    KazaPuzzle2PanelAllEmbossHighLightDisp__FiiUc(0,0,0x80);
  }
  KazaPuzzle2ScreenMask__FiiUc(0,0,0x80);
  KazaPuzzle2BlackBgDisp__FiiUc(0,0,alpha);
  return;
}

static void KazaPuzzle2BlackBgDisp(int off_x, int off_y, u_char alpha) {
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
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | DAT_003b9d38 >> (7 - uVar2) * 8;
  black_bg._0_8_ = DAT_003b9d38;
  puVar1 = (undefined *)((int)&black_bg.y + 3);
  uVar2 = (uint)puVar1 & 7;
  puVar3 = (ulong *)(puVar1 + -uVar2);
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | DAT_003b9d40 >> (7 - uVar2) * 8;
  black_bg._8_8_ = DAT_003b9d40;
  uVar2 = (uint)&black_bg.alpha & 7;
  puVar4 = &black_bg.alpha + -uVar2;
  *(ulong *)puVar4 = *(ulong *)puVar4 & -1L << (uVar2 + 1) * 8 | DAT_003b9d48 >> (7 - uVar2) * 8;
  black_bg._16_8_ = DAT_003b9d48;
  CopySqrDToSqr__FP9DISP_SQARP8SQAR_DAT(&dsq,&black_bg);
  dsq.alpha = (uchar)((int)((uint)dsq.alpha * (uint)alpha) >> 7);
  DispSqrD__FP9DISP_SQAR(&dsq);
  return;
}

int* int * _fixed_array_verifyrange<int>(size_t v, size_t _max) {
  g3ddbgAssert__FbPCce(false,str_646);
  return (float *)v;
}

float* float * _fixed_array_verifyrange<float>(size_t v, size_t _max) {
  g3ddbgAssert__FbPCce(false,str_646);
  return (float *)v;
}

static void __static_initialization_and_destruction_0(int __initialize_p, int __priority) {
  if ((__priority == 0xffff) && (__initialize_p == 1)) {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Zi_UiUi_PX01(0,4);
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    kaza2_panel_color[0] = (int *)kaza2_panel_center.field0_0x0.m_aData;
    _fixed_array_verifyrange__H1Zi_UiUi_PX01(0,4);
    kaza2_panel_color[1] = (int *)kaza2_panel_right_up.field0_0x0.m_aData;
    _fixed_array_verifyrange__H1Zi_UiUi_PX01(0,4);
    kaza2_panel_color[2] = (int *)kaza2_panel_right_down.field0_0x0.m_aData;
    _fixed_array_verifyrange__H1Zi_UiUi_PX01(0,4);
    kaza2_panel_color[3] = (int *)kaza2_panel_left_up.field0_0x0.m_aData;
    _fixed_array_verifyrange__H1Zi_UiUi_PX01(0,4);
    kaza2_panel_color[4] = (int *)kaza2_panel_left_down.field0_0x0.m_aData;
  }
  return;
}

static void global constructors keyed to KazaPuzzle2ExeInit() {
  __static_initialization_and_destruction_0(1,0xffff);
  return;
}
