// STATUS: NOT STARTED

#include "setup_menu.h"

typedef struct {
	char step;
	char mode;
	char conf_csr;
	char menu_csr;
	char setup_csr;
	char costume_csr;
	char mio_csr;
	char mayu_csr;
	char difficulty_csr;
	char next_place;
	int stream_id;
} SETUP_MENU_CTRL;

typedef struct {
	char anim_step;
	char anim_timer;
	char csr_timer;
	char menu_csr_timer;
	char sel_anim_timer;
	int fade_anim_timer;
} SETUP_MENU_DISP;

struct _COSTUME_TWIN_TBL {
	short int mMioMdl;
	short int mMayuMdl;
	short int mMioAcsMdl;
	short int mMayuAcsMdl;
};

typedef _COSTUME_TWIN_TBL COSTUME_TWIN_TBL;

static void (*setup_menu_pad_func[3])(/* parameters unknown */) = {
	/* [0] = */ SetupMenuPad,
	/* [1] = */ SetupMenuSetupSelPad,
	/* [2] = */ SetupMenuExitConfPad
};

static void (*setup_menu_disp_func[3])(/* parameters unknown */) = {
	/* [0] = */ SetupMenuSelMenuDisp,
	/* [1] = */ SetupMenuSelSetupDisp,
	/* [2] = */ SetupMenuExitConfDisp
};

static void (*setup_on_off_disp_func[2])(/* parameters unknown */) = {
	/* [0] = */ SetupMenuOffDisp,
	/* [1] = */ SetupMenuOnDisp
};

static SETUP_MENU_CTRL setup_menu_ctrl;
static SETUP_MENU_DISP setup_menu_disp;

static COSTUME_TWIN_TBL costume_tbl[9] = {
	/* [0] = */ {
		/* .mMioMdl = */ 0,
		/* .mMayuMdl = */ 1,
		/* .mMioAcsMdl = */ 6,
		/* .mMayuAcsMdl = */ 7
	},
	/* [1] = */ {
		/* .mMioMdl = */ 64,
		/* .mMayuMdl = */ 65,
		/* .mMioAcsMdl = */ 6,
		/* .mMayuAcsMdl = */ 7
	},
	/* [2] = */ {
		/* .mMioMdl = */ 66,
		/* .mMayuMdl = */ 67,
		/* .mMioAcsMdl = */ 6,
		/* .mMayuAcsMdl = */ 7
	},
	/* [3] = */ {
		/* .mMioMdl = */ 68,
		/* .mMayuMdl = */ 69,
		/* .mMioAcsMdl = */ 6,
		/* .mMayuAcsMdl = */ 7
	},
	/* [4] = */ {
		/* .mMioMdl = */ 70,
		/* .mMayuMdl = */ 71,
		/* .mMioAcsMdl = */ 6,
		/* .mMayuAcsMdl = */ 7
	},
	/* [5] = */ {
		/* .mMioMdl = */ 72,
		/* .mMayuMdl = */ 73,
		/* .mMioAcsMdl = */ 6,
		/* .mMayuAcsMdl = */ 7
	},
	/* [6] = */ {
		/* .mMioMdl = */ 74,
		/* .mMayuMdl = */ 75,
		/* .mMioAcsMdl = */ 6,
		/* .mMayuAcsMdl = */ 7
	},
	/* [7] = */ {
		/* .mMioMdl = */ 62,
		/* .mMayuMdl = */ 63,
		/* .mMioAcsMdl = */ 6,
		/* .mMayuAcsMdl = */ 7
	},
	/* [8] = */ {
		/* .mMioMdl = */ 76,
		/* .mMayuMdl = */ 77,
		/* .mMioAcsMdl = */ 6,
		/* .mMayuAcsMdl = */ 7
	}
};

static void _fixed_array_assert(char *strType, size_t v0, size_t v1) {
	static char *str = 0x3c6ba0;
	
  g3ddbgAssert__FbPCce(false,str_849);
  return;
}

static void** void * * _fixed_array_verifyrange<void *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_assert__FPCcUiUi(s_void__003f42c0,_max,v);
  }
  return (void **)0x0;
}

static char** char * * _fixed_array_verifyrange<char *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_assert__FPCcUiUi(s_char__003f42c8,_max,v);
  }
  return (char **)0x0;
}

static unsigned int** unsigned int * * _fixed_array_verifyrange<unsigned int *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_assert__FPCcUiUi("unsigned int*",_max,v);
  }
  return (uint **)0x0;
}

void SetupMenuInit() {
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
                    /* end of inlined section */
  setup_menu_ctrl.stream_id = -1;
  setup_menu_ctrl.conf_csr = '\x01';
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
  setup_menu_ctrl.difficulty_csr = ingame_wrk.mDifficulty.mValue;
                    /* end of inlined section */
  setup_menu_ctrl.step = '\0';
  setup_menu_ctrl.mode = '\0';
  setup_menu_ctrl.menu_csr = '\0';
  setup_menu_ctrl.setup_csr = '\0';
  setup_menu_ctrl.costume_csr = '\0';
  setup_menu_ctrl.mio_csr = '\0';
  setup_menu_ctrl.mayu_csr = '\0';
  setup_menu_ctrl.next_place = '\0';
  return;
}

void SetupMenuMain() {
	static char __FUNCTION__[14] = {
		/* [0] = */ 83,
		/* [1] = */ 101,
		/* [2] = */ 116,
		/* [3] = */ 117,
		/* [4] = */ 112,
		/* [5] = */ 77,
		/* [6] = */ 101,
		/* [7] = */ 110,
		/* [8] = */ 117,
		/* [9] = */ 77,
		/* [10] = */ 97,
		/* [11] = */ 105,
		/* [12] = */ 110,
		/* [13] = */ 0
	};
	
  if (setup_menu_ctrl.step == '\0') {
    SetupMenuDispInit__Fv();
    setup_menu_ctrl.stream_id = StreamAutoPlay(0xa13,0xa12,0xb,0,1,0x3200,0,(_SND_3D_SET *)0x0);
    setup_menu_ctrl.step = '\x01';
  }
  if ((setup_menu_ctrl.step == '\x01') && (setup_menu_disp.anim_step == '\x02')) {
    (*(code *)setup_menu_pad_func[setup_menu_ctrl.mode])();
  }
  if (setup_menu_ctrl.step == '\x02') {
    if (setup_menu_ctrl.next_place == '\x01') {
      if (0x1d < setup_menu_disp.fade_anim_timer) {
        SetTitleLoadFlg__Fc('\0');
        SetNextGPhase__F14GPHASE_ID_ENUM(GID_STORY_LOAD_MISSION_SAVE);
        return;
      }
    }
    else {
      if (setup_menu_ctrl.next_place < '\x02') {
        if (setup_menu_ctrl.next_place == '\0') {
          return;
        }
      }
      else if (setup_menu_ctrl.next_place == '\x02') {
        if (setup_menu_disp.anim_step != '\x04') {
          return;
        }
        SetNextGPhase__F14GPHASE_ID_ENUM(GID_MISSION_SEL);
        return;
      }
      SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
      PrintAssertReal("Error! %s");
    }
  }
  return;
}

static void SetupMenuPad() {
  int iVar1;
  
  if (((pad[0].rpt & 0x1000U) == 0) && (iVar1 = GetPadAnalogRpt__Fi(0), iVar1 == 0)) {
    if (((pad[0].rpt & 0x4000U) == 0) && (iVar1 = GetPadAnalogRpt__Fi(1), iVar1 == 0)) {
      if (**paddat == 1) {
        SystemBankPlay__FiiiiP11_SND_3D_SETii(3,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
        if (setup_menu_ctrl.menu_csr != '\x02') {
          setup_menu_ctrl.mode = '\x01';
          setup_menu_ctrl.setup_csr = '\0';
          return;
        }
        setup_menu_ctrl.mode = setup_menu_ctrl.menu_csr;
        setup_menu_ctrl.conf_csr = '\x01';
        return;
      }
      if (*paddat[1] != 1) {
        return;
      }
      SystemBankPlay__FiiiiP11_SND_3D_SETii(1,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
      setup_menu_ctrl.menu_csr = '\x02';
      return;
    }
    SystemBankPlay__FiiiiP11_SND_3D_SETii(0,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
    iVar1 = setup_menu_ctrl.menu_csr + 1;
  }
  else {
    SystemBankPlay__FiiiiP11_SND_3D_SETii(0,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
    iVar1 = setup_menu_ctrl.menu_csr + 2;
  }
  setup_menu_ctrl.menu_csr = (char)(iVar1 % 3);
  return;
}

static void SetupMenuExitReq() {
  setup_menu_ctrl.step = '\x02';
  setup_menu_disp.anim_step = '\x03';
  setup_menu_disp.anim_timer = '\0';
  setup_menu_ctrl.next_place = '\0';
  StreamAutoFadeOut(setup_menu_ctrl.stream_id,5);
  SetupReturnTitleReq__Fv();
  return;
}

static void SetupMenuSetupSelPad() {
	static char __FUNCTION__[21] = {
		/* [0] = */ 83,
		/* [1] = */ 101,
		/* [2] = */ 116,
		/* [3] = */ 117,
		/* [4] = */ 112,
		/* [5] = */ 77,
		/* [6] = */ 101,
		/* [7] = */ 110,
		/* [8] = */ 117,
		/* [9] = */ 83,
		/* [10] = */ 101,
		/* [11] = */ 116,
		/* [12] = */ 117,
		/* [13] = */ 112,
		/* [14] = */ 83,
		/* [15] = */ 101,
		/* [16] = */ 108,
		/* [17] = */ 80,
		/* [18] = */ 97,
		/* [19] = */ 100,
		/* [20] = */ 0
	};
	int i;
	int csr_back_up;
	int no;
	int idx;
	int bit;
	int no;
	int idx;
	int bit;
	int no;
	int idx;
	int bit;
	int no;
	int idx;
	int bit;
	char iValue;
	
  char cVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  
  if (((pad[0].rpt & 0x1000U) == 0) && (iVar5 = GetPadAnalogRpt__Fi(0), iVar5 == 0)) {
    if (((pad[0].rpt & 0x4000U) == 0) && (iVar5 = GetPadAnalogRpt__Fi(1), iVar5 == 0)) {
      if (((pad[0].rpt & 0x8000U) == 0) && (iVar5 = GetPadAnalogRpt__Fi(2), iVar5 == 0)) {
        if (((pad[0].rpt & 0x2000U) == 0) && (iVar5 = GetPadAnalogRpt__Fi(3), iVar5 == 0)) {
          if (**paddat == 1) {
            if (setup_menu_ctrl.setup_csr == '\x04') {
              SystemBankPlay__FiiiiP11_SND_3D_SETii(3,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
              if (setup_menu_ctrl.menu_csr == '\0') {
                SetupMenuGoToGame__Fv();
              }
              else if (setup_menu_ctrl.menu_csr == '\x01') {
                SetupMenuGotoMission__Fv();
              }
              else {
                SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
                PrintAssertReal("Error! %s");
              }
              SetPlyrMdlNo__Fi((int)(short)costume_tbl[setup_menu_ctrl.costume_csr].mMioMdl);
              SetSisterMdlNo__Fi((int)(short)costume_tbl[setup_menu_ctrl.costume_csr].mMayuMdl);
              if (setup_menu_ctrl.mio_csr == '\x01') {
                SetPlyrAcsNo__Fi((int)(short)costume_tbl[setup_menu_ctrl.costume_csr].mMioAcsMdl);
              }
              else {
                SetPlyrAcsNo__Fi(-1);
              }
              if (setup_menu_ctrl.mayu_csr == '\x01') {
                SetSisterAcsNo__Fi((int)(short)costume_tbl[setup_menu_ctrl.costume_csr].mMayuAcsMdl)
                ;
              }
              else {
                SetSisterAcsNo__Fi(-1);
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
              }
              cVar1 = setup_menu_ctrl.difficulty_csr;
              if (setup_menu_ctrl.difficulty_csr < '\x04') {
                if (setup_menu_ctrl.difficulty_csr < '\0') {
                  SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
                  PrintAssertReal("Set Value is Illegal");
                }
              }
              else {
                SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
                PrintAssertReal("Set Value is Illegal");
              }
              ingame_wrk.mDifficulty.mValue = cVar1;
            }
          }
          else {
                    /* end of inlined section */
            if (*paddat[1] == 1) {
              SystemBankPlay__FiiiiP11_SND_3D_SETii(1,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
              setup_menu_ctrl.mode = '\0';
            }
          }
        }
        else {
          cVar4 = setup_menu_ctrl.difficulty_csr;
          cVar3 = setup_menu_ctrl.mayu_csr;
          cVar2 = setup_menu_ctrl.mio_csr;
          cVar1 = setup_menu_ctrl.costume_csr;
          iVar5 = (int)((uint)(byte)setup_menu_ctrl.setup_csr << 0x18) >> 0x18;
          if (iVar5 != 4) {
            iVar6 = (int)((uint)(byte)setup_menu_ctrl.setup_csr << 0x18) >> 0x1d;
            if (iVar5 == 1) {
              setup_menu_ctrl.mio_csr = setup_menu_ctrl.mio_csr ^ 1;
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
              if ((setup_menu_ctrl.mio_csr == 1) &&
                 (((&clear_flg_ctrl.accessory_flg)[iVar6].flag_32[0] & 2U) == 0)) {
                setup_menu_ctrl.mio_csr = '\0';
              }
                    /* end of inlined section */
              if (cVar2 == setup_menu_ctrl.mio_csr) {
                SystemBankPlay__FiiiiP11_SND_3D_SETii(2,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
                return;
              }
              SystemBankPlay__FiiiiP11_SND_3D_SETii(0,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
              return;
            }
            if (iVar5 < 2) {
              if (iVar5 == 0) {
                iVar5 = 0;
                do {
                  iVar6 = (setup_menu_ctrl.costume_csr + 1) % 9;
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
                  iVar7 = iVar6 << 0x18;
                    /* end of inlined section */
                  setup_menu_ctrl.costume_csr = (char)iVar6;
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
                  uVar8 = iVar7 >> 0x18;
                  if (8 < (int)uVar8) {
                    SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
                    PrintAssertReal("IsUp Illegal Access %d MAX %d");
                  }
                } while ((((&clear_flg_ctrl.costume_flg)[iVar7 >> 0x1d].flag_32[0] &
                          1 << (uVar8 & 0x1f)) == 0) &&
                        (iVar5 = iVar5 + 1, iVar5 < 9
                    /* end of inlined section */));
                if (cVar1 == setup_menu_ctrl.costume_csr) {
                  SystemBankPlay__FiiiiP11_SND_3D_SETii(2,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
                  return;
                }
                SystemBankPlay__FiiiiP11_SND_3D_SETii(0,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
                return;
              }
            }
            else {
              if (iVar5 == 2) {
                setup_menu_ctrl.mayu_csr = setup_menu_ctrl.mayu_csr ^ 1;
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
                if ((setup_menu_ctrl.mayu_csr == 1) &&
                   (((&clear_flg_ctrl.accessory_flg)[iVar6].flag_32[0] & 4U) == 0)) {
                  setup_menu_ctrl.mayu_csr = '\0';
                }
                    /* end of inlined section */
                if (cVar3 == setup_menu_ctrl.mayu_csr) {
                  SystemBankPlay__FiiiiP11_SND_3D_SETii(2,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
                  return;
                }
                SystemBankPlay__FiiiiP11_SND_3D_SETii(0,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
                return;
              }
              if (iVar5 == 3) {
                iVar5 = 0;
                do {
                  iVar7 = setup_menu_ctrl.difficulty_csr + 1;
                  iVar6 = iVar7;
                  if (iVar7 < 0) {
                    iVar6 = setup_menu_ctrl.difficulty_csr + 4;
                  }
                  iVar7 = iVar7 + (iVar6 >> 2) * -4;
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
                  iVar6 = iVar7 * 0x1000000;
                    /* end of inlined section */
                  setup_menu_ctrl.difficulty_csr = (char)iVar7;
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
                  uVar8 = iVar6 >> 0x18;
                  if (3 < (int)uVar8) {
                    SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
                    PrintAssertReal("IsUp Illegal Access %d MAX %d");
                  }
                } while ((((&clear_flg_ctrl.difficulty_flg)[iVar6 >> 0x1d].flag_32[0] &
                          1 << (uVar8 & 0x1f)) == 0) &&
                        (iVar5 = iVar5 + 1, iVar5 < 4
                    /* end of inlined section */));
                if (cVar4 == setup_menu_ctrl.difficulty_csr) {
                  SystemBankPlay__FiiiiP11_SND_3D_SETii(2,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
                  return;
                }
                SystemBankPlay__FiiiiP11_SND_3D_SETii(0,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
                return;
              }
            }
            SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
            PrintAssertReal("Error! %s");
            return;
          }
        }
      }
      else {
        cVar4 = setup_menu_ctrl.difficulty_csr;
        cVar3 = setup_menu_ctrl.mayu_csr;
        cVar2 = setup_menu_ctrl.mio_csr;
        cVar1 = setup_menu_ctrl.costume_csr;
        iVar5 = (int)((uint)(byte)setup_menu_ctrl.setup_csr << 0x18) >> 0x18;
        if (iVar5 != 4) {
          iVar6 = (int)((uint)(byte)setup_menu_ctrl.setup_csr << 0x18) >> 0x1d;
          if (iVar5 == 1) {
            setup_menu_ctrl.mio_csr = setup_menu_ctrl.mio_csr ^ 1;
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
            if ((setup_menu_ctrl.mio_csr == 1) &&
               (((&clear_flg_ctrl.accessory_flg)[iVar6].flag_32[0] & 2U) == 0)) {
              setup_menu_ctrl.mio_csr = '\0';
            }
                    /* end of inlined section */
            if (cVar2 == setup_menu_ctrl.mio_csr) {
              SystemBankPlay__FiiiiP11_SND_3D_SETii(2,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
              return;
            }
            SystemBankPlay__FiiiiP11_SND_3D_SETii(0,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
            return;
          }
          if (iVar5 < 2) {
            if (iVar5 == 0) {
              iVar5 = 0;
              do {
                iVar6 = (setup_menu_ctrl.costume_csr + 8) % 9;
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
                iVar7 = iVar6 << 0x18;
                    /* end of inlined section */
                setup_menu_ctrl.costume_csr = (char)iVar6;
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
                uVar8 = iVar7 >> 0x18;
                if (8 < (int)uVar8) {
                  SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
                  PrintAssertReal("IsUp Illegal Access %d MAX %d");
                }
              } while ((((&clear_flg_ctrl.costume_flg)[iVar7 >> 0x1d].flag_32[0] &
                        1 << (uVar8 & 0x1f)) == 0) &&
                      (iVar5 = iVar5 + 1, iVar5 < 9
                    /* end of inlined section */));
              if (cVar1 == setup_menu_ctrl.costume_csr) {
                SystemBankPlay__FiiiiP11_SND_3D_SETii(2,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
                return;
              }
              SystemBankPlay__FiiiiP11_SND_3D_SETii(0,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
              return;
            }
          }
          else {
            if (iVar5 == 2) {
              setup_menu_ctrl.mayu_csr = setup_menu_ctrl.mayu_csr ^ 1;
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
              if ((setup_menu_ctrl.mayu_csr == 1) &&
                 (((&clear_flg_ctrl.accessory_flg)[iVar6].flag_32[0] & 4U) == 0)) {
                setup_menu_ctrl.mayu_csr = '\0';
              }
                    /* end of inlined section */
              if (cVar3 == setup_menu_ctrl.mayu_csr) {
                SystemBankPlay__FiiiiP11_SND_3D_SETii(2,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
                return;
              }
              SystemBankPlay__FiiiiP11_SND_3D_SETii(0,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
              return;
            }
            if (iVar5 == 3) {
              iVar5 = 0;
              do {
                iVar7 = setup_menu_ctrl.difficulty_csr + 3;
                iVar6 = iVar7;
                if (iVar7 < 0) {
                  iVar6 = setup_menu_ctrl.difficulty_csr + 6;
                }
                iVar7 = iVar7 + (iVar6 >> 2) * -4;
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
                iVar6 = iVar7 * 0x1000000;
                    /* end of inlined section */
                setup_menu_ctrl.difficulty_csr = (char)iVar7;
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
                uVar8 = iVar6 >> 0x18;
                if (3 < (int)uVar8) {
                  SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
                  PrintAssertReal("IsUp Illegal Access %d MAX %d");
                }
              } while ((((&clear_flg_ctrl.difficulty_flg)[iVar6 >> 0x1d].flag_32[0] &
                        1 << (uVar8 & 0x1f)) == 0) &&
                      (iVar5 = iVar5 + 1, iVar5 < 4
                    /* end of inlined section */));
              if (cVar4 == setup_menu_ctrl.difficulty_csr) {
                SystemBankPlay__FiiiiP11_SND_3D_SETii(2,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
                return;
              }
              SystemBankPlay__FiiiiP11_SND_3D_SETii(0,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
              return;
            }
          }
          SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
          PrintAssertReal("Error! %s");
          return;
        }
      }
    }
    else {
      SystemBankPlay__FiiiiP11_SND_3D_SETii(0,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
      iVar5 = (setup_menu_ctrl.setup_csr + 1) % 5;
      setup_menu_ctrl.setup_csr = (char)iVar5;
      if (((setup_menu_ctrl.menu_csr == '\x01') || (ingame_wrk.clear_save_flg == '\0')) &&
         (iVar5 == 3)) {
        setup_menu_ctrl.setup_csr = '\x04';
      }
    }
  }
  else {
    SystemBankPlay__FiiiiP11_SND_3D_SETii(0,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
    iVar5 = (setup_menu_ctrl.setup_csr + 4) % 5;
    setup_menu_ctrl.setup_csr = (char)iVar5;
    if (((setup_menu_ctrl.menu_csr == '\x01') || (ingame_wrk.clear_save_flg == '\0')) &&
       (iVar5 == 3)) {
      setup_menu_ctrl.setup_csr = '\x02';
    }
  }
  return;
}

static void SetupMenuExitConfPad() {
  int iVar1;
  
  if (((((pad[0].rpt & 0x8000U) == 0) && (iVar1 = GetPadAnalogRpt__Fi(2), iVar1 == 0)) &&
      ((pad[0].rpt & 0x2000U) == 0)) && (iVar1 = GetPadAnalogRpt__Fi(3), iVar1 == 0)) {
    if (**paddat == 1) {
      SystemBankPlay__FiiiiP11_SND_3D_SETii(3,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
      if (setup_menu_ctrl.conf_csr == '\0') {
        SetupMenuExitReq__Fv();
        return;
      }
      setup_menu_ctrl.mode = '\0';
    }
    else if (*paddat[1] == 1) {
      SystemBankPlay__FiiiiP11_SND_3D_SETii(1,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
      setup_menu_ctrl.mode = '\0';
    }
  }
  else {
    SystemBankPlay__FiiiiP11_SND_3D_SETii(0,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
    setup_menu_ctrl.conf_csr = setup_menu_ctrl.conf_csr ^ 1;
  }
  return;
}

static void SetupMenuGoToGame() {
  setup_menu_ctrl.step = '\x02';
  setup_menu_ctrl.next_place = '\x01';
  setup_menu_disp.fade_anim_timer = 0;
  StreamAutoFadeOut(setup_menu_ctrl.stream_id,5);
  return;
}

static void SetupMenuGotoMission() {
  setup_menu_ctrl.next_place = '\x02';
  setup_menu_disp.anim_step = '\x03';
  setup_menu_disp.anim_timer = '\0';
  setup_menu_ctrl.step = '\x02';
  StreamAutoFadeOut(setup_menu_ctrl.stream_id,5);
  return;
}

static void SetupMenuDispInit() {
  setup_menu_disp.fade_anim_timer = 0;
  setup_menu_disp.anim_step = '\0';
  setup_menu_disp.anim_timer = '\0';
  setup_menu_disp.csr_timer = '\0';
  setup_menu_disp.menu_csr_timer = '\0';
  setup_menu_disp.sel_anim_timer = '\0';
  return;
}

void SetupMenuDispMain() {
	u_char alpha;
	
  uchar uVar1;
  void *pvVar2;
  
  if ((byte)setup_menu_ctrl.step - 1 < 2) {
    uVar1 = Zero2Anim2D_InOutAnimCtrl__FPcT0ss
                      (&setup_menu_disp.anim_step,&setup_menu_disp.anim_timer,10,5);
    if (setup_menu_disp.anim_step != '\x04') {
      pvVar2 = GetOutGameCmnTexAddr__Fv();
      SetupMenuTitleFrameDisp__FiiUcPv(0,0,uVar1,pvVar2);
      pvVar2 = GetSetupBgPk2Addr__Fv();
      SetupMenuTitleDisp__FiiUcPv(0,0,uVar1,pvVar2);
      (*(code *)setup_menu_disp_func[setup_menu_ctrl.mode])(0,0,uVar1);
      SetupMenuCaptionDisp__FiiUc(0,0,uVar1);
    }
    if ((setup_menu_ctrl.step == '\x02') && (setup_menu_ctrl.next_place == '\x01')) {
      uVar1 = Zero2Anim2D_FadeInAnimCtrl__FPis(&setup_menu_disp.fade_anim_timer,0x1e);
      SetupBlackBgDisp__FiiUc(0,0,uVar1);
    }
  }
  return;
}

static void SetupMenuSelMenuDisp(int off_x, int off_y, u_char alpha) {
	int i;
	u_char non_sel_alpha;
	u_char setup_alpha;
	u_char rgb;
	static int msg_id_tbl[3] = {
		/* [0] = */ 0,
		/* [1] = */ 1,
		/* [2] = */ 2
	};
	
  int iVar1;
  void *tm2_addr;
  uchar alpha_00;
  int iVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  uchar rgb;
  
  uVar5 = (uint)alpha;
  iVar1 = (((uint)alpha * 4 + uVar5) * 4 - uVar5) * 2;
  rgb = 0x80;
  if (iVar1 < 0) {
    iVar1 = iVar1 + 0x7f;
  }
  uVar4 = iVar1 >> 7 & 0xff;
  tm2_addr = GetSetupFontPk2Addr__Fv();
  lVar3 = 0;
  PK2SendVram__FUiiii((uint)tm2_addr,-1,-1,0);
  do {
    iVar2 = (int)lVar3;
    if (setup_menu_ctrl.menu_csr == lVar3) {
      SetupMenuSelMenuItemDisp__FiiiUcUc(iVar2,off_x,off_y,alpha,0x80);
    }
    else {
      SetupMenuSelMenuItemDisp__FiiiUcUc
                (iVar2,off_x,off_y,(uchar)(((uint)alpha * 2 + uVar5) * 0x11 >> 7),0x80);
    }
    lVar3 = (long)(iVar2 + 1);
  } while (lVar3 < 3);
  alpha_00 = (uchar)(iVar1 >> 7);
  SetupMenuCostumeDisp__FiiUcUcUc(off_x,off_y,alpha_00,0x80,'\0');
  SetupMenuCostumeTypeDisp__FiiiUcUcUc((int)setup_menu_ctrl.costume_csr,0,0,alpha_00,0x80,'\0');
  SetupMenuAccessoryDisp__FiiUcUcUc(off_x,off_y,alpha_00,0x80,'\0');
  SetupMenuMioDisp__FiiUcUcUc(off_x,off_y,alpha_00,0x80,'\0');
  SetupMenuMayuDisp__FiiUcUcUc(off_x,off_y,alpha_00,0x80,'\0');
  (*(code *)setup_on_off_disp_func[setup_menu_ctrl.mio_csr])
            (off_x + 0x1bc,off_y + 0xd3,uVar4,0x80,0);
  (*(code *)setup_on_off_disp_func[setup_menu_ctrl.mayu_csr])
            (off_x + 0x1bc,off_y + 0xf1,uVar4,0x80,0);
  if (setup_menu_ctrl.menu_csr == '\0') {
    SetupMenuDifficultyDisp__FiiiUcUcUc
              ((int)setup_menu_ctrl.difficulty_csr,off_x,off_y,alpha_00,0x80,'\0');
  }
  iVar2 = 1;
  iVar1 = off_y;
  do {
    iVar2 = iVar2 + -1;
    SetupMenuLineDisp__FiiUcUc(off_x,iVar1,alpha_00,0x80);
    iVar1 = iVar1 + 0xab;
  } while (-1 < iVar2);
  SetupMenuTopCursorFrameDisp__FiiUcUc(off_x,off_y,alpha,0x80);
  Zero2Anim2D_CsrAnimCtrl__FPcPUc(&setup_menu_disp.menu_csr_timer,&rgb);
  SetupMenuTopCursorDisp__FiiUcUc(0,0,alpha,rgb);
  SetupMenuMsgWinDisp__FiiUc(off_x,off_y,alpha);
  PrintMsg__Fiiiiiii(0x4c,*(int *)(msg_id_tbl_1018 + setup_menu_ctrl.menu_csr * 4),0x44,0x171,1,
                     (uint)alpha,0);
  return;
}

static void SetupMenuSelSetupDisp(int off_x, int off_y, u_char alpha) {
	int i;
	u_char menu_sel_alpha;
	u_char menu_non_sel_alpha;
	u_char non_sel_alpha;
	u_char line_alpha;
	static int msg_id_tbl[5] = {
		/* [0] = */ 3,
		/* [1] = */ 4,
		/* [2] = */ 4,
		/* [3] = */ 5,
		/* [4] = */ 6
	};
	
  byte alpha_00;
  uchar alpha_01;
  int iVar1;
  void *tm2_addr;
  int iVar2;
  int iVar3;
  long lVar4;
  uint uVar5;
  uchar line_alpha;
  
  alpha_01 = alpha;
  if (setup_menu_disp.anim_step == '\x02') {
    alpha_01 = Zero2Anim2D_SelAnimCtrl__FPc(&setup_menu_disp.sel_anim_timer);
  }
  uVar5 = (uint)alpha;
  iVar1 = (((uint)alpha * 4 + uVar5) * 4 - uVar5) * 4;
  if (iVar1 < 0) {
    iVar1 = iVar1 + 0x7f;
  }
  alpha_00 = alpha >> 1;
  lVar4 = 0;
  tm2_addr = GetSetupFontPk2Addr__Fv();
  PK2SendVram__FUiiii((uint)tm2_addr,-1,-1,0);
  do {
    iVar2 = (int)lVar4;
    if (setup_menu_ctrl.menu_csr == lVar4) {
      SetupMenuSelMenuItemDisp__FiiiUcUc(iVar2,off_x,off_y,alpha_01,0x80);
    }
    else {
      SetupMenuSelMenuItemDisp__FiiiUcUc
                (iVar2,off_x,off_y,(uchar)(((uint)alpha * 2 + uVar5) * 0x11 >> 7),0x80);
    }
    lVar4 = (long)(iVar2 + 1);
  } while (lVar4 < 3);
  SetupMenuTopCursorFrameDisp__FiiUcUc(off_x,off_y,alpha,0x80);
  if (setup_menu_ctrl.setup_csr == '\0') {
    SetupMenuCostumeDisp__FiiUcUcUc(0,0,alpha,0x80,'\x01');
    SetupMenuCostumeTypeDisp__FiiiUcUcUc((int)setup_menu_ctrl.costume_csr,0,0,alpha,0x80,'\x01');
  }
  else {
    SetupMenuCostumeDisp__FiiUcUcUc(0,0,alpha_00,0x80,'\0');
    SetupMenuCostumeTypeDisp__FiiiUcUcUc((int)setup_menu_ctrl.costume_csr,0,0,alpha_00,0x80,'\0');
  }
  if (setup_menu_ctrl.setup_csr == '\x01') {
    SetupMenuAccessoryDisp__FiiUcUcUc(0,0,alpha,0x80,'\x01');
    SetupMenuMioDisp__FiiUcUcUc(0,0,alpha,0x80,'\x01');
    SetupMenuMayuDisp__FiiUcUcUc(0,0,alpha_00,0x80,'\0');
  }
  else if (setup_menu_ctrl.setup_csr == '\x02') {
    SetupMenuAccessoryDisp__FiiUcUcUc(0,0,alpha,0x80,'\x01');
    SetupMenuMioDisp__FiiUcUcUc(0,0,alpha_00,0x80,'\0');
    SetupMenuMayuDisp__FiiUcUcUc(0,0,alpha,0x80,'\x01');
  }
  else {
    SetupMenuAccessoryDisp__FiiUcUcUc(0,0,alpha_00,0x80,'\0');
    SetupMenuMioDisp__FiiUcUcUc(0,0,alpha_00,0x80,'\0');
    SetupMenuMayuDisp__FiiUcUcUc(0,0,alpha_00,0x80,'\0');
  }
  if (setup_menu_ctrl.menu_csr == '\0') {
    if (setup_menu_ctrl.setup_csr == '\x03') {
      SetupMenuDifficultyDisp__FiiiUcUcUc((int)setup_menu_ctrl.difficulty_csr,0,0,alpha,0x80,'\x01')
      ;
    }
    else {
      SetupMenuDifficultyDisp__FiiiUcUcUc
                ((int)setup_menu_ctrl.difficulty_csr,0,0,alpha_00,0x80,'\0');
    }
  }
  if (setup_menu_ctrl.setup_csr == '\x01') {
    (*(code *)setup_on_off_disp_func[setup_menu_ctrl.mio_csr])
              (off_x + 0x1bc,off_y + 0xd3,alpha,0x80,1);
  }
  else {
    (*(code *)setup_on_off_disp_func[setup_menu_ctrl.mio_csr])
              (off_x + 0x1bc,off_y + 0xd3,alpha_00,0x80,0);
  }
  if (setup_menu_ctrl.setup_csr == '\x02') {
    (*(code *)setup_on_off_disp_func[setup_menu_ctrl.mayu_csr])
              (off_x + 0x1bc,off_y + 0xf1,alpha,0x80,1);
  }
  else {
    (*(code *)setup_on_off_disp_func[setup_menu_ctrl.mayu_csr])
              (off_x + 0x1bc,off_y + 0xf1,alpha_00,0x80,0);
  }
  if (setup_menu_ctrl.setup_csr == '\x04') {
    if (setup_menu_ctrl.menu_csr == '\0') {
      SetupMenuGameStartDisp__FiiUcUcUc(off_x,off_y,alpha,0x80,'\x01');
    }
    else {
      SetupMenuMissionSelectDisp__FiiUcUcUc(off_x,off_y,alpha,0x80,'\x01');
    }
  }
  else if (setup_menu_ctrl.menu_csr == '\0') {
    SetupMenuGameStartDisp__FiiUcUcUc(off_x,off_y,alpha_00,0x80,'\0');
  }
  else {
    SetupMenuMissionSelectDisp__FiiUcUcUc(off_x,off_y,alpha_00,0x80,'\0');
  }
  SetupMenuCursorDisp__FiiUcUc(off_x,off_y,alpha,0x80);
  iVar3 = 1;
  iVar2 = off_y;
  do {
    iVar3 = iVar3 + -1;
    SetupMenuLineDisp__FiiUcUc(off_x,iVar2,(uchar)(iVar1 >> 7),0x80);
    iVar2 = iVar2 + 0xab;
  } while (-1 < iVar3);
  SetupMenuMsgWinDisp__FiiUc(off_x,off_y,alpha);
  if (setup_menu_ctrl.menu_csr == '\x01') {
    if (setup_menu_ctrl.setup_csr == '\x04') {
      PrintMsg__Fiiiiiii(0x4c,7,0x44,0x171,1,(uint)alpha,0);
      return;
    }
    PrintMsg__Fiiiiiii(0x4c,*(int *)(msg_id_tbl_1022 + setup_menu_ctrl.setup_csr * 4),0x44,0x171,1,
                       (uint)alpha,0);
    return;
  }
  PrintMsg__Fiiiiiii(0x4c,*(int *)(msg_id_tbl_1022 + setup_menu_ctrl.setup_csr * 4),0x44,0x171,1,
                     (uint)alpha,0);
  return;
}

static void SetupMenuExitConfDisp(int off_x, int off_y, u_char alpha) {
	int i;
	u_char sel_alpha;
	u_char non_sel_alpha;
	u_char setup_alpha;
	
  uchar uVar1;
  int iVar2;
  void *tm2_addr;
  int iVar3;
  long lVar4;
  uint uVar5;
  uint uVar6;
  
  uVar1 = alpha;
  if (setup_menu_disp.anim_step == '\x02') {
    uVar1 = Zero2Anim2D_SelAnimCtrl__FPc(&setup_menu_disp.sel_anim_timer);
  }
  uVar6 = (uint)alpha;
  iVar2 = (((uint)alpha * 4 + uVar6) * 4 - uVar6) * 2;
  if (iVar2 < 0) {
    iVar2 = iVar2 + 0x7f;
  }
  lVar4 = 0;
  uVar5 = iVar2 >> 7 & 0xff;
  tm2_addr = GetSetupFontPk2Addr__Fv();
  PK2SendVram__FUiiii((uint)tm2_addr,-1,-1,0);
  do {
    iVar3 = (int)lVar4;
    if (setup_menu_ctrl.menu_csr == lVar4) {
      SetupMenuSelMenuItemDisp__FiiiUcUc(iVar3,off_x,off_y,uVar1,0x80);
    }
    else {
      SetupMenuSelMenuItemDisp__FiiiUcUc
                (iVar3,off_x,off_y,(uchar)(((uint)alpha * 2 + uVar6) * 0x11 >> 7),0x80);
    }
    lVar4 = (long)(iVar3 + 1);
  } while (lVar4 < 3);
  uVar1 = (uchar)(iVar2 >> 7);
  SetupMenuCostumeDisp__FiiUcUcUc(off_x,off_y,uVar1,0x80,'\0');
  SetupMenuCostumeTypeDisp__FiiiUcUcUc((int)setup_menu_ctrl.costume_csr,0,0,uVar1,0x80,'\0');
  SetupMenuAccessoryDisp__FiiUcUcUc(off_x,off_y,uVar1,0x80,'\0');
  SetupMenuMioDisp__FiiUcUcUc(off_x,off_y,uVar1,0x80,'\0');
  SetupMenuMayuDisp__FiiUcUcUc(off_x,off_y,uVar1,0x80,'\0');
  (*(code *)setup_on_off_disp_func[setup_menu_ctrl.mio_csr])
            (off_x + 0x1bc,off_y + 0xd3,uVar5,0x80,0);
  iVar3 = 1;
  (*(code *)setup_on_off_disp_func[setup_menu_ctrl.mayu_csr])
            (off_x + 0x1bc,off_y + 0xf1,uVar5,0x80,0);
  iVar2 = off_y;
  do {
    iVar3 = iVar3 + -1;
    SetupMenuLineDisp__FiiUcUc(off_x,iVar2,uVar1,0x80);
    iVar2 = iVar2 + 0xab;
  } while (-1 < iVar3);
  SetupMenuTopCursorFrameDisp__FiiUcUc(off_x,off_y,alpha,0x80);
  SetupMenuMsgWinDisp__FiiUc(off_x,off_y,alpha);
  PrintMsg__Fiiiiiii(0x4c,8,0x44,0x171,1,(uint)alpha,0);
  DrawCmnYesNoSel__FifUcUi((int)setup_menu_ctrl.conf_csr,396.0,alpha,0);
  return;
}

static void SetupMenuTitleFrameDisp(int off_x, int off_y, u_char alpha, void *pk2_addr) {
	int i;
	DISP_SPRT frame_ds;
	
  SPRT_DAT *d;
  int iVar1;
  float fVar2;
  DISP_SPRT frame_ds;
  
  fVar2 = (float)off_x;
  iVar1 = 1;
  PK2SendVram__FUiiii((uint)pk2_addr,-1,-1,0);
  d = setup_tex + 6;
  do {
    CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&frame_ds,d);
    iVar1 = iVar1 + -1;
    d = d + 1;
    frame_ds.x = frame_ds.x + fVar2;
    frame_ds.y = frame_ds.y + (float)off_y;
    frame_ds.alpha = (uchar)((int)((uint)frame_ds.alpha * (uint)alpha) >> 7);
    DispSprD__FP9DISP_SPRT(&frame_ds);
  } while (-1 < iVar1);
  return;
}

static void SetupMenuTitleDisp(int off_x, int off_y, u_char alpha, void *pk2_addr) {
	DISP_SPRT title_ds;
	
  DISP_SPRT title_ds;
  
  PK2SendVram__FUiiii((uint)pk2_addr,-1,-1,0);
  CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&title_ds,setup_tex + 8);
  title_ds.x = title_ds.x + (float)off_x;
  title_ds.y = title_ds.y + (float)off_y;
  title_ds.alpha = (uchar)((int)((uint)title_ds.alpha * (uint)alpha) >> 7);
  DispSprD__FP9DISP_SPRT(&title_ds);
  return;
}

static void SetupMenuSelMenuItemDisp(int menu_label, int off_x, int off_y, u_char alpha, u_char rgb) {
	static char __FUNCTION__[25] = {
		/* [0] = */ 83,
		/* [1] = */ 101,
		/* [2] = */ 116,
		/* [3] = */ 117,
		/* [4] = */ 112,
		/* [5] = */ 77,
		/* [6] = */ 101,
		/* [7] = */ 110,
		/* [8] = */ 117,
		/* [9] = */ 83,
		/* [10] = */ 101,
		/* [11] = */ 108,
		/* [12] = */ 77,
		/* [13] = */ 101,
		/* [14] = */ 110,
		/* [15] = */ 117,
		/* [16] = */ 73,
		/* [17] = */ 116,
		/* [18] = */ 101,
		/* [19] = */ 109,
		/* [20] = */ 68,
		/* [21] = */ 105,
		/* [22] = */ 115,
		/* [23] = */ 112,
		/* [24] = */ 0
	};
	int i;
	DISP_SPRT menu_ds;
	static int menu_tex_tbl[3][2] = {
		/* [0] = */ {
			/* [0] = */ 12,
			/* [1] = */ -1
		},
		/* [1] = */ {
			/* [0] = */ 11,
			/* [1] = */ -1
		},
		/* [2] = */ {
			/* [0] = */ 9,
			/* [1] = */ 10
		}
	};
	
  int iVar1;
  int *piVar2;
  int iVar3;
  DISP_SPRT menu_ds;
  
  if (2 < (ulong)(long)menu_label) {
    SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
    PrintAssertReal("Error! %s");
  }
  piVar2 = (int *)(menu_tex_tbl_1035 + menu_label * 8);
  iVar3 = 1;
  iVar1 = *piVar2;
  while( true ) {
    piVar2 = piVar2 + 1;
    if (iVar1 != -1) {
      CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&menu_ds,setup_tex + iVar1);
      menu_ds.x = menu_ds.x + (float)off_x;
      menu_ds.y = menu_ds.y + (float)off_y;
      if ((long)setup_menu_ctrl.menu_csr == (long)menu_label) {
        menu_ds.alphar = 0x48;
      }
      menu_ds.alpha = (uchar)((int)((uint)menu_ds.alpha * (uint)alpha) >> 7);
      menu_ds.r = rgb;
      menu_ds.g = rgb;
      menu_ds.b = rgb;
      DispSprD__FP9DISP_SPRT(&menu_ds);
    }
    iVar3 = iVar3 + -1;
    if (iVar3 < 0) break;
    iVar1 = *piVar2;
  }
  return;
}

static void SetupMenuTopCursorFrameDisp(int off_x, int off_y, u_char alpha, u_char rgb) {
	int i;
	DISP_SPRT csr_ds;
	
  int iVar1;
  SPRT_DAT *d;
  float fVar2;
  DISP_SPRT csr_ds;
  
  fVar2 = (float)off_x;
  iVar1 = 3;
  d = setup_tex + 0x2f;
  do {
    iVar1 = iVar1 + -1;
    CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&csr_ds,d);
    csr_ds.x = csr_ds.x + fVar2;
    csr_ds.y = csr_ds.y + (float)off_y + (float)(setup_menu_ctrl.menu_csr * 0x28);
    csr_ds.alpha = (uchar)((int)((uint)csr_ds.alpha * (uint)alpha) >> 7);
    csr_ds.alphar = 0x48;
    csr_ds.r = rgb;
    csr_ds.g = rgb;
    csr_ds.b = rgb;
    DispSprD__FP9DISP_SPRT(&csr_ds);
    d = d + 1;
  } while (-1 < iVar1);
  return;
}

static void SetupMenuTopCursorDisp(int off_x, int off_y, u_char alpha, u_char rgb) {
	int i;
	DISP_SPRT csr_ds;
	static int csr_tex_tbl[2] = {
		/* [0] = */ 51,
		/* [1] = */ 52
	};
	static int csr_flare_tex_tbl[2] = {
		/* [0] = */ 53,
		/* [1] = */ 54
	};
	
  int *piVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  DISP_SPRT csr_ds;
  
  fVar5 = (float)off_x;
  iVar2 = 0;
  iVar3 = 1;
  do {
    CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT
              (&csr_ds,setup_tex + *(int *)((int)&csr_flare_tex_tbl_1043 + iVar2));
    csr_ds.crx = csr_ds.x + fVar5;
    if ((int)csr_ds.w < 0) {
      fVar4 = (float)(csr_ds.w & 1 | csr_ds.w >> 1);
      fVar4 = fVar4 + fVar4;
    }
    else {
      fVar4 = (float)csr_ds.w;
    }
    csr_ds.alphar = 0x48;
    csr_ds.rot = 270.0;
    csr_ds.alpha = (uchar)((int)((uint)csr_ds.alpha * (uint)alpha) >> 7);
    csr_ds.cry = csr_ds.y + fVar4 + (float)off_y + (float)(setup_menu_ctrl.menu_csr * 0x28);
    csr_ds.x = csr_ds.crx;
    csr_ds.y = csr_ds.cry;
    csr_ds.r = rgb;
    csr_ds.g = rgb;
    csr_ds.b = rgb;
    DispSprD__FP9DISP_SPRT(&csr_ds);
    piVar1 = (int *)((int)&csr_tex_tbl_1042 + iVar2);
    iVar2 = iVar2 + 4;
    CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&csr_ds,setup_tex + *piVar1);
    csr_ds.crx = csr_ds.x + fVar5;
    if ((int)csr_ds.w < 0) {
      fVar4 = (float)(csr_ds.w & 1 | csr_ds.w >> 1);
      fVar4 = fVar4 + fVar4;
    }
    else {
      fVar4 = (float)csr_ds.w;
    }
    iVar3 = iVar3 + -1;
    csr_ds.rot = 270.0;
    csr_ds.alpha = (uchar)((int)((uint)csr_ds.alpha * (uint)alpha) >> 7);
    csr_ds.cry = csr_ds.y + fVar4 + (float)off_y + (float)(setup_menu_ctrl.menu_csr * 0x28);
    csr_ds.x = csr_ds.crx;
    csr_ds.y = csr_ds.cry;
    DispSprD__FP9DISP_SPRT(&csr_ds);
  } while (-1 < iVar3);
  return;
}

static void SetupMenuCostumeDisp(int off_x, int off_y, u_char alpha, u_char rgb, u_char flg) {
	DISP_SPRT costume_ds;
	
  DISP_SPRT costume_ds;
  
  CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&costume_ds,setup_tex + 0xd);
  costume_ds.x = costume_ds.x + (float)off_x;
  costume_ds.y = costume_ds.y + (float)off_y;
  costume_ds.alpha = (uchar)((int)((uint)costume_ds.alpha * (uint)alpha) >> 7);
  if (flg == '\x01') {
    costume_ds.alphar = 0x48;
  }
  costume_ds.r = rgb;
  costume_ds.g = rgb;
  costume_ds.b = rgb;
  DispSprD__FP9DISP_SPRT(&costume_ds);
  return;
}

static void SetupMenuCostumeTypeDisp(int costume_type, int off_x, int off_y, u_char alpha, u_char rgb, u_char flg) {
	static char __FUNCTION__[25] = {
		/* [0] = */ 83,
		/* [1] = */ 101,
		/* [2] = */ 116,
		/* [3] = */ 117,
		/* [4] = */ 112,
		/* [5] = */ 77,
		/* [6] = */ 101,
		/* [7] = */ 110,
		/* [8] = */ 117,
		/* [9] = */ 67,
		/* [10] = */ 111,
		/* [11] = */ 115,
		/* [12] = */ 116,
		/* [13] = */ 117,
		/* [14] = */ 109,
		/* [15] = */ 101,
		/* [16] = */ 84,
		/* [17] = */ 121,
		/* [18] = */ 112,
		/* [19] = */ 101,
		/* [20] = */ 68,
		/* [21] = */ 105,
		/* [22] = */ 115,
		/* [23] = */ 112,
		/* [24] = */ 0
	};
	int i;
	DISP_SPRT costume_ds;
	static int costume_type_tbl[9][2] = {
		/* [0] = */ {
			/* [0] = */ 14,
			/* [1] = */ -1
		},
		/* [1] = */ {
			/* [0] = */ 15,
			/* [1] = */ 16
		},
		/* [2] = */ {
			/* [0] = */ 15,
			/* [1] = */ 17
		},
		/* [3] = */ {
			/* [0] = */ 15,
			/* [1] = */ 18
		},
		/* [4] = */ {
			/* [0] = */ 15,
			/* [1] = */ 19
		},
		/* [5] = */ {
			/* [0] = */ 15,
			/* [1] = */ 20
		},
		/* [6] = */ {
			/* [0] = */ 15,
			/* [1] = */ 21
		},
		/* [7] = */ {
			/* [0] = */ 15,
			/* [1] = */ 22
		},
		/* [8] = */ {
			/* [0] = */ 15,
			/* [1] = */ 23
		}
	};
	
  int iVar1;
  int *piVar2;
  int iVar3;
  DISP_SPRT costume_ds;
  
  if (8 < (uint)costume_type) {
    SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
    PrintAssertReal("Error! %s");
  }
  iVar3 = 1;
  piVar2 = (int *)(costume_type_tbl_1050 + costume_type * 8);
  iVar1 = *piVar2;
  while( true ) {
    piVar2 = piVar2 + 1;
    if (iVar1 != -1) {
      CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&costume_ds,setup_tex + iVar1);
      costume_ds.x = costume_ds.x + (float)off_x;
      costume_ds.y = costume_ds.y + (float)off_y;
      if (flg == '\x01') {
        costume_ds.alphar = 0x48;
      }
      costume_ds.alpha = (uchar)((int)((uint)costume_ds.alpha * (uint)alpha) >> 7);
      costume_ds.r = rgb;
      costume_ds.g = rgb;
      costume_ds.b = rgb;
      DispSprD__FP9DISP_SPRT(&costume_ds);
    }
    iVar3 = iVar3 + -1;
    if (iVar3 < 0) break;
    iVar1 = *piVar2;
  }
  return;
}

static void SetupMenuAccessoryDisp(int off_x, int off_y, u_char alpha, u_char rgb, u_char flg) {
	DISP_SPRT accessory_ds;
	
  DISP_SPRT accessory_ds;
  
  CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&accessory_ds,setup_tex + 0x18);
  accessory_ds.x = accessory_ds.x + (float)off_x;
  accessory_ds.y = accessory_ds.y + (float)off_y;
  accessory_ds.alpha = (uchar)((int)((uint)accessory_ds.alpha * (uint)alpha) >> 7);
  if (flg == '\x01') {
    accessory_ds.alphar = 0x48;
  }
  accessory_ds.r = rgb;
  accessory_ds.g = rgb;
  accessory_ds.b = rgb;
  DispSprD__FP9DISP_SPRT(&accessory_ds);
  return;
}

static void SetupMenuMioDisp(int off_x, int off_y, u_char alpha, u_char rgb, u_char flg) {
	DISP_SPRT mio_ds;
	
  DISP_SPRT mio_ds;
  
  CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&mio_ds,setup_tex + 0x19);
  mio_ds.x = mio_ds.x + (float)off_x;
  mio_ds.y = mio_ds.y + (float)off_y;
  mio_ds.alpha = (uchar)((int)((uint)mio_ds.alpha * (uint)alpha) >> 7);
  if (flg == '\x01') {
    mio_ds.alphar = 0x48;
  }
  mio_ds.r = rgb;
  mio_ds.g = rgb;
  mio_ds.b = rgb;
  DispSprD__FP9DISP_SPRT(&mio_ds);
  return;
}

static void SetupMenuMayuDisp(int off_x, int off_y, u_char alpha, u_char rgb, u_char flg) {
	DISP_SPRT mayu_ds;
	
  DISP_SPRT mayu_ds;
  
  CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&mayu_ds,setup_tex + 0x1a);
  mayu_ds.x = mayu_ds.x + (float)off_x;
  mayu_ds.y = mayu_ds.y + (float)off_y;
  mayu_ds.alpha = (uchar)((int)((uint)mayu_ds.alpha * (uint)alpha) >> 7);
  if (flg == '\x01') {
    mayu_ds.alphar = 0x48;
  }
  mayu_ds.r = rgb;
  mayu_ds.g = rgb;
  mayu_ds.b = rgb;
  DispSprD__FP9DISP_SPRT(&mayu_ds);
  return;
}

static void SetupMenuDifficultyDisp(int difficulty_label, int off_x, int off_y, u_char alpha, u_char rgb, u_char flg) {
	static char __FUNCTION__[24] = {
		/* [0] = */ 83,
		/* [1] = */ 101,
		/* [2] = */ 116,
		/* [3] = */ 117,
		/* [4] = */ 112,
		/* [5] = */ 77,
		/* [6] = */ 101,
		/* [7] = */ 110,
		/* [8] = */ 117,
		/* [9] = */ 68,
		/* [10] = */ 105,
		/* [11] = */ 102,
		/* [12] = */ 102,
		/* [13] = */ 105,
		/* [14] = */ 99,
		/* [15] = */ 117,
		/* [16] = */ 108,
		/* [17] = */ 116,
		/* [18] = */ 121,
		/* [19] = */ 68,
		/* [20] = */ 105,
		/* [21] = */ 115,
		/* [22] = */ 112,
		/* [23] = */ 0
	};
	int i;
	DISP_SPRT difficulty_ds;
	static int difficulty_tex_tbl[4][2] = {
		/* [0] = */ {
			/* [0] = */ 30,
			/* [1] = */ -1
		},
		/* [1] = */ {
			/* [0] = */ 31,
			/* [1] = */ -1
		},
		/* [2] = */ {
			/* [0] = */ 32,
			/* [1] = */ 33
		},
		/* [3] = */ {
			/* [0] = */ 34,
			/* [1] = */ -1
		}
	};
	
  int iVar1;
  int *piVar2;
  int iVar3;
  float fVar4;
  DISP_SPRT difficulty_ds;
  
  if (3 < (uint)difficulty_label) {
    SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
    PrintAssertReal("Error! %s");
  }
  fVar4 = (float)off_x;
  CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&difficulty_ds,setup_tex + 0x1d);
  difficulty_ds.x = difficulty_ds.x + fVar4;
  difficulty_ds.y = difficulty_ds.y + (float)off_y;
  difficulty_ds.alpha = (uchar)((int)((uint)difficulty_ds.alpha * (uint)alpha) >> 7);
  if (flg == '\x01') {
    difficulty_ds.alphar = 0x48;
  }
  difficulty_ds.r = rgb;
  difficulty_ds.g = rgb;
  difficulty_ds.b = rgb;
  DispSprD__FP9DISP_SPRT(&difficulty_ds);
  piVar2 = (int *)(difficulty_tex_tbl_1063 + difficulty_label * 8);
  iVar3 = 1;
  iVar1 = *piVar2;
  while( true ) {
    piVar2 = piVar2 + 1;
    if (iVar1 != -1) {
      CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&difficulty_ds,setup_tex + iVar1);
      difficulty_ds.x = difficulty_ds.x + fVar4;
      difficulty_ds.y = difficulty_ds.y + (float)off_y;
      if (flg == '\x01') {
        difficulty_ds.alphar = 0x48;
      }
      difficulty_ds.alpha = (uchar)((int)((uint)difficulty_ds.alpha * (uint)alpha) >> 7);
      difficulty_ds.r = rgb;
      difficulty_ds.g = rgb;
      difficulty_ds.b = rgb;
      DispSprD__FP9DISP_SPRT(&difficulty_ds);
    }
    iVar3 = iVar3 + -1;
    if (iVar3 < 0) break;
    iVar1 = *piVar2;
  }
  return;
}

static void SetupMenuGameStartDisp(int off_x, int off_y, u_char alpha, u_char rgb, u_char flg) {
	DISP_SPRT gamestart_ds;
	int i;
	
  int iVar1;
  SPRT_DAT *d;
  float fVar2;
  DISP_SPRT gamestart_ds;
  
  fVar2 = (float)off_x;
  iVar1 = 1;
  d = setup_tex + 0x25;
  do {
    iVar1 = iVar1 + -1;
    CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&gamestart_ds,d);
    gamestart_ds.x = gamestart_ds.x + fVar2;
    gamestart_ds.y = gamestart_ds.y + (float)off_y;
    if (flg == '\x01') {
      gamestart_ds.alphar = 0x48;
    }
    gamestart_ds.alpha = (uchar)((int)((uint)gamestart_ds.alpha * (uint)alpha) >> 7);
    gamestart_ds.r = rgb;
    gamestart_ds.g = rgb;
    gamestart_ds.b = rgb;
    DispSprD__FP9DISP_SPRT(&gamestart_ds);
    d = d + 1;
  } while (-1 < iVar1);
  return;
}

static void SetupMenuMissionSelectDisp(int off_x, int off_y, u_char alpha, u_char rgb, u_char flg) {
	int i;
	DISP_SPRT mission_ds;
	
  int iVar1;
  SPRT_DAT *d;
  float fVar2;
  DISP_SPRT mission_ds;
  
  fVar2 = (float)off_x;
  iVar1 = 1;
  d = setup_tex + 0x23;
  do {
    iVar1 = iVar1 + -1;
    CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&mission_ds,d);
    mission_ds.x = mission_ds.x + fVar2;
    mission_ds.y = mission_ds.y + (float)off_y;
    if (flg == '\x01') {
      mission_ds.alphar = 0x48;
    }
    mission_ds.alpha = (uchar)((int)((uint)mission_ds.alpha * (uint)alpha) >> 7);
    mission_ds.r = rgb;
    mission_ds.g = rgb;
    mission_ds.b = rgb;
    DispSprD__FP9DISP_SPRT(&mission_ds);
    d = d + 1;
  } while (-1 < iVar1);
  return;
}

static void SetupMenuCursorDisp(int off_x, int off_y, u_char alpha, u_char rgb) {
	u_char flare_rgb;
	static int csr_right_x_tbl[3] = {
		/* [0] = */ 485,
		/* [1] = */ 540,
		/* [2] = */ 540
	};
	static int difficulty_csr_right_x_tbl[4] = {
		/* [0] = */ 444,
		/* [1] = */ 485,
		/* [2] = */ 475,
		/* [3] = */ 550
	};
	static int flare_right_x_tbl[3] = {
		/* [0] = */ 482,
		/* [1] = */ 537,
		/* [2] = */ 537
	};
	static int difficulty_flare_right_x_tbl[4] = {
		/* [0] = */ 441,
		/* [1] = */ 482,
		/* [2] = */ 472,
		/* [3] = */ 547
	};
	
  uchar flare_rgb;
  
  Zero2Anim2D_CsrAnimCtrl__FPcPUc(&setup_menu_disp.csr_timer,&flare_rgb);
  if (setup_menu_ctrl.setup_csr != '\x04') {
    SetupMenuCsrLDisp__FiiUcUc
              (off_x + 0x152,setup_menu_ctrl.setup_csr * 0x1e + off_y + 0xbe,alpha,rgb);
    SetupMenuCsrFlareLDisp__FiiUcUc
              (off_x + 0x14e,setup_menu_ctrl.setup_csr * 0x1e + off_y + 0xbb,alpha,flare_rgb);
    if (setup_menu_ctrl.setup_csr == '\x03') {
      SetupMenuCsrRDisp__FiiUcUc
                (*(int *)(difficulty_csr_right_x_tbl_1074 + setup_menu_ctrl.difficulty_csr * 4) +
                 off_x,off_y + 0x118,alpha,rgb);
      SetupMenuCsrFlareRDisp__FiiUcUc
                (*(int *)(difficulty_flare_right_x_tbl_1076 + setup_menu_ctrl.difficulty_csr * 4) +
                 off_x,setup_menu_ctrl.setup_csr * 0x1e + off_y + 0xbb,alpha,flare_rgb);
    }
    else {
      SetupMenuCsrRDisp__FiiUcUc
                (*(int *)(csr_right_x_tbl_1073 + setup_menu_ctrl.setup_csr * 4) + off_x,
                 (setup_menu_ctrl.setup_csr * 0x10 - (int)setup_menu_ctrl.setup_csr) * 2 + off_y +
                 0xbe,alpha,rgb);
      SetupMenuCsrFlareRDisp__FiiUcUc
                (*(int *)(flare_right_x_tbl_1075 + setup_menu_ctrl.setup_csr * 4) + off_x,
                 (setup_menu_ctrl.setup_csr * 0x10 - (int)setup_menu_ctrl.setup_csr) * 2 + off_y +
                 0xbb,alpha,flare_rgb);
    }
  }
  return;
}

static void SetupMenuOnDisp(int x, int y, u_char alpha, u_char rgb, u_char flg) {
	DISP_SPRT on_ds;
	
  DISP_SPRT on_ds;
  
  CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&on_ds,setup_tex + 0x1b);
  on_ds.x = (float)x;
  on_ds.y = (float)y;
  on_ds.alpha = (uchar)((int)((uint)on_ds.alpha * (uint)alpha) >> 7);
  if (flg == '\x01') {
    on_ds.alphar = 0x48;
  }
  on_ds.r = rgb;
  on_ds.g = rgb;
  on_ds.b = rgb;
  DispSprD__FP9DISP_SPRT(&on_ds);
  return;
}

static void SetupMenuOffDisp(int x, int y, u_char alpha, u_char rgb, u_char flg) {
	DISP_SPRT off_ds;
	
  DISP_SPRT off_ds;
  
  CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&off_ds,setup_tex + 0x1c);
  off_ds.x = (float)x;
  off_ds.y = (float)y;
  off_ds.alpha = (uchar)((int)((uint)off_ds.alpha * (uint)alpha) >> 7);
  if (flg == '\x01') {
    off_ds.alphar = 0x48;
  }
  off_ds.r = rgb;
  off_ds.g = rgb;
  off_ds.b = rgb;
  DispSprD__FP9DISP_SPRT(&off_ds);
  return;
}

static void SetupMenuCsrLDisp(int x, int y, u_char alpha, u_char rgb) {
	DISP_SPRT csr_ds;
	
  DISP_SPRT csr_ds;
  
  CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&csr_ds,setup_tex + 0x2b);
  csr_ds.x = (float)x;
  csr_ds.y = (float)y;
  csr_ds.alpha = (uchar)((int)((uint)csr_ds.alpha * (uint)alpha) >> 7);
  csr_ds.r = rgb;
  csr_ds.g = rgb;
  csr_ds.b = rgb;
  DispSprD__FP9DISP_SPRT(&csr_ds);
  return;
}

static void SetupMenuCsrRDisp(int x, int y, u_char alpha, u_char rgb) {
	DISP_SPRT csr_ds;
	
  DISP_SPRT csr_ds;
  
  CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&csr_ds,setup_tex + 0x2c);
  csr_ds.x = (float)x;
  csr_ds.y = (float)y;
  csr_ds.alpha = (uchar)((int)((uint)csr_ds.alpha * (uint)alpha) >> 7);
  csr_ds.r = rgb;
  csr_ds.g = rgb;
  csr_ds.b = rgb;
  DispSprD__FP9DISP_SPRT(&csr_ds);
  return;
}

static void SetupMenuCsrFlareLDisp(int x, int y, u_char alpha, u_char rgb) {
	DISP_SPRT flare_ds;
	
  DISP_SPRT flare_ds;
  
  CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&flare_ds,setup_tex + 0x2d);
  flare_ds.x = (float)x;
  flare_ds.y = (float)y;
  flare_ds.alphar = 0x48;
  flare_ds.alpha = (uchar)((int)((uint)flare_ds.alpha * (uint)alpha) >> 7);
  flare_ds.r = rgb;
  flare_ds.g = rgb;
  flare_ds.b = rgb;
  DispSprD__FP9DISP_SPRT(&flare_ds);
  return;
}

static void SetupMenuCsrFlareRDisp(int x, int y, u_char alpha, u_char rgb) {
	DISP_SPRT flare_ds;
	
  DISP_SPRT flare_ds;
  
  CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&flare_ds,setup_tex + 0x2e);
  flare_ds.x = (float)x;
  flare_ds.y = (float)y;
  flare_ds.alphar = 0x48;
  flare_ds.alpha = (uchar)((int)((uint)flare_ds.alpha * (uint)alpha) >> 7);
  flare_ds.r = rgb;
  flare_ds.g = rgb;
  flare_ds.b = rgb;
  DispSprD__FP9DISP_SPRT(&flare_ds);
  return;
}

static void SetupMenuLineDisp(int off_x, int off_y, u_char alpha, u_char rgb) {
	int i;
	DISP_SPRT line_ds;
	
  int iVar1;
  SPRT_DAT *d;
  float fVar2;
  DISP_SPRT line_ds;
  
  fVar2 = (float)off_x;
  iVar1 = 1;
  d = setup_tex + 0x27;
  do {
    CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&line_ds,d);
    iVar1 = iVar1 + -1;
    d = d + 1;
    line_ds.x = line_ds.x + fVar2;
    line_ds.y = line_ds.y + (float)off_y;
    line_ds.alphar = 0x48;
    line_ds.alpha = (uchar)((int)((uint)line_ds.alpha * (uint)alpha) >> 7);
    line_ds.r = rgb;
    line_ds.g = rgb;
    line_ds.b = rgb;
    DispSprD__FP9DISP_SPRT(&line_ds);
  } while (-1 < iVar1);
  return;
}

static void SetupMenuMsgWinDisp(int off_x, int off_y, u_char alpha) {
  DrawCmnWindow__FUiffffUcUc(0,24.0,DAT_003ee8ac,592.0,100.0,alpha,'@');
  return;
}

static void SetupMenuCaptionDisp(int off_x, int off_y, u_char alpha) {
  DrawCmnCapGroup_W__FiiUcUi(0,0,alpha,0);
  return;
}
