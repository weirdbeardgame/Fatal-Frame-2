// STATUS: NOT STARTED

#include "chapter_sel.h"

typedef struct {
	char step;
	char menu_csr;
	char chapter_csr;
	char costume_csr;
	char mio_csr;
	char mayu_csr;
	char diff_csr;
	char clear_csr;
} CHAPTER_SEL_CTRL;

static CHAPTER_SEL_CTRL chapter_sel_ctrl;

static short int costume_tbl[9][2] = {
	/* [0] = */ {
		/* [0] = */ 0,
		/* [1] = */ 1
	},
	/* [1] = */ {
		/* [0] = */ 64,
		/* [1] = */ 65
	},
	/* [2] = */ {
		/* [0] = */ 66,
		/* [1] = */ 67
	},
	/* [3] = */ {
		/* [0] = */ 68,
		/* [1] = */ 69
	},
	/* [4] = */ {
		/* [0] = */ 70,
		/* [1] = */ 71
	},
	/* [5] = */ {
		/* [0] = */ 72,
		/* [1] = */ 73
	},
	/* [6] = */ {
		/* [0] = */ 74,
		/* [1] = */ 75
	},
	/* [7] = */ {
		/* [0] = */ 62,
		/* [1] = */ 63
	},
	/* [8] = */ {
		/* [0] = */ 76,
		/* [1] = */ 77
	}
};

static void _fixed_array_assert(char *strType, size_t v0, size_t v1) {
	static char *str = 0x3a2030;
	
  g3ddbgAssert__FbPCce(false,str_849);
  return;
}

static void** void * * _fixed_array_verifyrange<void *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_assert__FPCcUiUi(s_void__003ef6b0,_max,v);
  }
  return (void **)0x0;
}

static char** char * * _fixed_array_verifyrange<char *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_assert__FPCcUiUi(s_char__003ef6b8,_max,v);
  }
  return (char **)0x0;
}

static unsigned int** unsigned int * * _fixed_array_verifyrange<unsigned int *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_assert__FPCcUiUi("unsigned int*",_max,v);
  }
  return (uint **)0x0;
}

void ChapterSelCtrlInit() {
  chapter_sel_ctrl.diff_csr = '\x01';
  chapter_sel_ctrl.clear_csr = '\0';
  chapter_sel_ctrl.step = '\0';
  chapter_sel_ctrl.menu_csr = '\0';
  chapter_sel_ctrl.chapter_csr = '\0';
  chapter_sel_ctrl.costume_csr = '\0';
  chapter_sel_ctrl.mio_csr = '\0';
  chapter_sel_ctrl.mayu_csr = '\0';
  return;
}

void ChapterSelMain() {
	char iValue;
	
  char cVar1;
  int iVar2;
  
  if (chapter_sel_ctrl.step == '\0') {
    ChapterSelPad__Fv();
    return;
  }
  if ((chapter_sel_ctrl.step == '\x01') && (iVar2 = LoadingTexLoadWait__Fv(), iVar2 != 0)) {
    iVar2 = GetTitleSoundID__Fv();
    iVar2 = SndBufIsPlaying(iVar2);
    if (iVar2 == 0) {
      InitCostume__Fv();
      SetPlyrMdlNo__Fi((int)(short)costume_tbl[chapter_sel_ctrl.costume_csr][0]);
      SetSisterMdlNo__Fi((int)(short)costume_tbl[chapter_sel_ctrl.costume_csr][1]);
      if (chapter_sel_ctrl.mio_csr == '\x01') {
        SetPlyrAcsNo__Fi(6);
      }
      else {
        SetPlyrAcsNo__Fi(-1);
      }
      if (chapter_sel_ctrl.mayu_csr == '\x01') {
        SetSisterAcsNo__Fi(7);
      }
      else {
        SetSisterAcsNo__Fi(-1);
      }
      IngameWrkInit__Fii((int)chapter_sel_ctrl.chapter_csr,(int)chapter_sel_ctrl.diff_csr);
      cVar1 = chapter_sel_ctrl.clear_csr;
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
      if (chapter_sel_ctrl.clear_csr < 'd') {
        if (chapter_sel_ctrl.clear_csr < '\0') {
          SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
          PrintAssertReal("Set Value is Illegal");
                    /* end of inlined section */
        }
      }
      else {
        SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
        PrintAssertReal("Set Value is Illegal");
      }
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
                    /* end of inlined section */
      ingame_wrk.mClearCnt.mValue = cVar1;
      SetTitleLoadFlg__Fc('\0');
      EventDataLoadReq__Fv();
      SetNextGPhase__F14GPHASE_ID_ENUM(GID_STORY_LOAD_MISSION);
    }
  }
  return;
}

static void ChapterSelPad() {
	static char __FUNCTION__[14] = {
		/* [0] = */ 67,
		/* [1] = */ 104,
		/* [2] = */ 97,
		/* [3] = */ 112,
		/* [4] = */ 116,
		/* [5] = */ 101,
		/* [6] = */ 114,
		/* [7] = */ 83,
		/* [8] = */ 101,
		/* [9] = */ 108,
		/* [10] = */ 80,
		/* [11] = */ 97,
		/* [12] = */ 100,
		/* [13] = */ 0
	};
	
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  char cVar6;
  
  if ((pad[0].rpt & 0x1000U) == 0) {
    if ((pad[0].rpt & 0x4000U) == 0) {
      if ((pad[0].rpt & 0x8000U) == 0) {
        if ((pad[0].rpt & 0x2000U) == 0) {
          if (*paddat[1] == 1) {
            SystemBankPlay__FiiiiP11_SND_3D_SETii(1,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
            SetNextGPhase__F14GPHASE_ID_ENUM(GID_TITLE_MENU);
            return;
          }
          if (**paddat != 1) {
            return;
          }
          SystemBankPlay__FiiiiP11_SND_3D_SETii(3,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
          if (chapter_sel_ctrl.menu_csr != '\0') {
            chapter_sel_ctrl.menu_csr = '\0';
            return;
          }
          chapter_sel_ctrl.step = '\x01';
          return;
        }
        SystemBankPlay__FiiiiP11_SND_3D_SETii(0,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
        switch(chapter_sel_ctrl.menu_csr) {
        case '\0':
          goto LAB_0012e7ec;
        case '\x01':
          pcVar5 = &chapter_sel_ctrl.chapter_csr;
          iVar4 = 0xb;
          break;
        case '\x02':
          pcVar5 = &chapter_sel_ctrl.costume_csr;
          iVar4 = 9;
          break;
        case '\x03':
          pcVar5 = &chapter_sel_ctrl.mio_csr;
          bVar1 = chapter_sel_ctrl.mio_csr;
          goto LAB_0012e6b8;
        case '\x04':
          goto switchD_0012e55c_caseD_4;
        case '\x05':
          iVar2 = chapter_sel_ctrl.diff_csr + 1;
          iVar4 = chapter_sel_ctrl.diff_csr + 4;
          goto LAB_0012e6d8;
        case '\x06':
          pcVar5 = &chapter_sel_ctrl.clear_csr;
          iVar4 = 100;
          break;
        default:
          SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
          PrintAssertReal("Error! %s");
          return;
        }
        if (iVar4 == 0) {
          trap(7);
        }
        iVar2 = *pcVar5 + 1;
      }
      else {
        SystemBankPlay__FiiiiP11_SND_3D_SETii(0,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
        switch(chapter_sel_ctrl.menu_csr) {
        case '\0':
          goto LAB_0012e7ec;
        case '\x01':
          pcVar5 = &chapter_sel_ctrl.chapter_csr;
          iVar4 = 0xb;
          iVar2 = chapter_sel_ctrl.chapter_csr + 10;
          break;
        case '\x02':
          pcVar5 = &chapter_sel_ctrl.costume_csr;
          iVar4 = 9;
          iVar2 = chapter_sel_ctrl.costume_csr + 8;
          break;
        case '\x03':
          pcVar5 = &chapter_sel_ctrl.mio_csr;
          bVar1 = chapter_sel_ctrl.mio_csr;
          goto LAB_0012e6b8;
        case '\x04':
switchD_0012e55c_caseD_4:
          pcVar5 = &chapter_sel_ctrl.mayu_csr;
          bVar1 = chapter_sel_ctrl.mayu_csr;
LAB_0012e6b8:
          *pcVar5 = bVar1 ^ 1;
          return;
        case '\x05':
          iVar2 = chapter_sel_ctrl.diff_csr + 3;
          iVar4 = chapter_sel_ctrl.diff_csr + 6;
LAB_0012e6d8:
          iVar3 = iVar2;
          if (iVar2 < 0) {
            iVar3 = iVar4;
          }
          chapter_sel_ctrl.diff_csr = (char)iVar2 + (char)(iVar3 >> 2) * -4;
          return;
        case '\x06':
          pcVar5 = &chapter_sel_ctrl.clear_csr;
          iVar4 = 100;
          iVar2 = chapter_sel_ctrl.clear_csr + 99;
          break;
        default:
          SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
          PrintAssertReal("Error! %s");
          return;
        }
      }
      cVar6 = (char)(iVar2 % iVar4);
    }
    else {
      SystemBankPlay__FiiiiP11_SND_3D_SETii(0,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
      pcVar5 = &chapter_sel_ctrl.menu_csr;
      cVar6 = (char)((chapter_sel_ctrl.menu_csr + 1) % 7);
    }
  }
  else {
    SystemBankPlay__FiiiiP11_SND_3D_SETii(0,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
    pcVar5 = &chapter_sel_ctrl.menu_csr;
    cVar6 = (char)((chapter_sel_ctrl.menu_csr + 6) % 7);
  }
  *pcVar5 = cVar6;
LAB_0012e7ec:
  return;
}

void ChapterSelDispMain() {
	char *menu_sel_str[7];
	char *chapter_sel_str[11];
	char *costume_str[9];
	char *accessory_str[2];
	char *diff_str[4];
	int i;
	
  uint uVar1;
  ulong *puVar2;
  char **ppcVar3;
  long lVar4;
  int iVar5;
  int iVar6;
  char *menu_sel_str [7];
  char *chapter_sel_str [11];
  char *costume_str [9];
  char *accessory_str [2];
  char *diff_str [4];
  
  ppcVar3 = menu_sel_str;
  iVar5 = 0x82;
  iVar6 = 0x82;
  uVar1 = (int)menu_sel_str + 7U & 7;
  puVar2 = (ulong *)(((int)menu_sel_str + 7U) - uVar1);
  *puVar2 = *puVar2 & -1L << (uVar1 + 1) * 8 | _PTR_s_GAMESTART_003a21f0 >> (7 - uVar1) * 8;
  menu_sel_str._0_8_ = _PTR_s_GAMESTART_003a21f0;
  uVar1 = (int)menu_sel_str + 0xfU & 7;
  puVar2 = (ulong *)(((int)menu_sel_str + 0xfU) - uVar1);
  *puVar2 = *puVar2 & -1L << (uVar1 + 1) * 8 | _PTR_s_COSTUME_003a21f8 >> (7 - uVar1) * 8;
  menu_sel_str._8_8_ = _PTR_s_COSTUME_003a21f8;
  uVar1 = (int)menu_sel_str + 0x17U & 7;
  puVar2 = (ulong *)(((int)menu_sel_str + 0x17U) - uVar1);
  *puVar2 = *puVar2 & -1L << (uVar1 + 1) * 8 | _PTR_s_ACCESSORY_MAYU_003a2200 >> (7 - uVar1) * 8;
  menu_sel_str._16_8_ = _PTR_s_ACCESSORY_MAYU_003a2200;
  menu_sel_str[6] = PTR_s_CLEAR_NUM_003a2208;
  uVar1 = (int)chapter_sel_str + 7U & 7;
  puVar2 = (ulong *)(((int)chapter_sel_str + 7U) - uVar1);
  *puVar2 = *puVar2 & -1L << (uVar1 + 1) * 8 | _PTR_s_CHAPTER_1_003a22c0 >> (7 - uVar1) * 8;
  chapter_sel_str._0_8_ = _PTR_s_CHAPTER_1_003a22c0;
  uVar1 = (int)chapter_sel_str + 0xfU & 7;
  puVar2 = (ulong *)(((int)chapter_sel_str + 0xfU) - uVar1);
  *puVar2 = *puVar2 & -1L << (uVar1 + 1) * 8 | _PTR_s_CHAPTER_3_003a22c8 >> (7 - uVar1) * 8;
  chapter_sel_str._8_8_ = _PTR_s_CHAPTER_3_003a22c8;
  uVar1 = (int)chapter_sel_str + 0x17U & 7;
  puVar2 = (ulong *)(((int)chapter_sel_str + 0x17U) - uVar1);
  *puVar2 = *puVar2 & -1L << (uVar1 + 1) * 8 | _PTR_s_CHAPTER_5_003a22d0 >> (7 - uVar1) * 8;
  chapter_sel_str._16_8_ = _PTR_s_CHAPTER_5_003a22d0;
  uVar1 = (int)chapter_sel_str + 0x1fU & 7;
  puVar2 = (ulong *)(((int)chapter_sel_str + 0x1fU) - uVar1);
  *puVar2 = *puVar2 & -1L << (uVar1 + 1) * 8 | _PTR_s_CHAPTER_7_003a22d8 >> (7 - uVar1) * 8;
  chapter_sel_str._24_8_ = _PTR_s_CHAPTER_7_003a22d8;
  uVar1 = (int)chapter_sel_str + 0x27U & 7;
  puVar2 = (ulong *)(((int)chapter_sel_str + 0x27U) - uVar1);
  *puVar2 = *puVar2 & -1L << (uVar1 + 1) * 8 | _PTR_s_CHAPTER_9_003a22e0 >> (7 - uVar1) * 8;
  chapter_sel_str._32_8_ = _PTR_s_CHAPTER_9_003a22e0;
  chapter_sel_str[10] = PTR_s_CHAPTER_10_2_003a22e8;
  lVar4 = 0;
  uVar1 = (int)costume_str + 7U & 7;
  puVar2 = (ulong *)(((int)costume_str + 7U) - uVar1);
  *puVar2 = *puVar2 & -1L << (uVar1 + 1) * 8 | _PTR_s_NORMAL_003a22f0 >> (7 - uVar1) * 8;
  costume_str._0_8_ = _PTR_s_NORMAL_003a22f0;
  uVar1 = (int)costume_str + 0xfU & 7;
  puVar2 = (ulong *)(((int)costume_str + 0xfU) - uVar1);
  *puVar2 = *puVar2 & -1L << (uVar1 + 1) * 8 | _PTR_s_TYPE_B_003a22f8 >> (7 - uVar1) * 8;
  costume_str._8_8_ = _PTR_s_TYPE_B_003a22f8;
  uVar1 = (int)costume_str + 0x17U & 7;
  puVar2 = (ulong *)(((int)costume_str + 0x17U) - uVar1);
  *puVar2 = *puVar2 & -1L << (uVar1 + 1) * 8 | _PTR_s_TYPE_D_003a2300 >> (7 - uVar1) * 8;
  costume_str._16_8_ = _PTR_s_TYPE_D_003a2300;
  uVar1 = (int)costume_str + 0x1fU & 7;
  puVar2 = (ulong *)(((int)costume_str + 0x1fU) - uVar1);
  *puVar2 = *puVar2 & -1L << (uVar1 + 1) * 8 | _PTR_s_TYPE_F_003a2308 >> (7 - uVar1) * 8;
  costume_str._24_8_ = _PTR_s_TYPE_F_003a2308;
  costume_str[8] = PTR_s_TYPE_H_003a2310;
  uVar1 = (int)accessory_str + 7U & 7;
  puVar2 = (ulong *)(((int)accessory_str + 7U) - uVar1);
  *puVar2 = *puVar2 & -1L << (uVar1 + 1) * 8 | (ulong)_PTR_DAT_003ef730 >> (7 - uVar1) * 8;
  accessory_str = _PTR_DAT_003ef730;
  uVar1 = (int)diff_str + 7U & 7;
  puVar2 = (ulong *)(((int)diff_str + 7U) - uVar1);
  *puVar2 = *puVar2 & -1L << (uVar1 + 1) * 8 | _PTR_DAT_003a2328 >> (7 - uVar1) * 8;
  diff_str._0_8_ = _PTR_DAT_003a2328;
  uVar1 = (int)diff_str + 0xfU & 7;
  puVar2 = (ulong *)(((int)diff_str + 0xfU) - uVar1);
  *puVar2 = *puVar2 & -1L << (uVar1 + 1) * 8 | _PTR_DAT_003a2330 >> (7 - uVar1) * 8;
  diff_str._8_8_ = _PTR_DAT_003a2330;
  SetASCIIString2__FiffiUcUcUcPc(0,170.0,60.0,1,0xff,0xff,0xff,"CHAPTER SELECT MENU");
  do {
    if (lVar4 == chapter_sel_ctrl.menu_csr) {
      SetASCIIString2__FiffiUcUcUcPc(0,120.0,(float)iVar5,1,0xff,0xff,0xff,*ppcVar3);
    }
    else {
      SetASCIIString2__FiffiUcUcUcPc(0,120.0,(float)iVar6,1,'\x1e','\x1e','\x1e',*ppcVar3);
    }
    lVar4 = (long)((int)lVar4 + 1);
    ppcVar3 = ppcVar3 + 1;
    iVar6 = iVar6 + 0x23;
    iVar5 = iVar5 + 0x23;
  } while (lVar4 < 7);
  SetASCIIString2__FiffiUcUcUcPc
            (0,380.0,165.0,1,0xff,0xff,0xff,chapter_sel_str[chapter_sel_ctrl.chapter_csr]);
  SetASCIIString2__FiffiUcUcUcPc
            (0,380.0,200.0,1,0xff,0xff,0xff,costume_str[chapter_sel_ctrl.costume_csr]);
  SetASCIIString2__FiffiUcUcUcPc
            (0,380.0,235.0,1,0xff,0xff,0xff,accessory_str[chapter_sel_ctrl.mio_csr]);
  SetASCIIString2__FiffiUcUcUcPc
            (0,380.0,270.0,1,0xff,0xff,0xff,accessory_str[chapter_sel_ctrl.mayu_csr]);
  SetASCIIString2__FiffiUcUcUcPc
            (0,380.0,DAT_003ed924,1,0xff,0xff,0xff,diff_str[chapter_sel_ctrl.diff_csr]);
  PrintNumber_N__FiiiiUcUciUcUc((int)chapter_sel_ctrl.clear_csr,2,0x17c,0x154,'\0',0x80,0,'\0',1);
  SetASCIIString2__FiffiUcUcUcPc
            (0,96.0,(float)((chapter_sel_ctrl.menu_csr * 0x24 - (int)chapter_sel_ctrl.menu_csr) +
                           0x82),1,0xff,0xff,0xff,&DAT_003ef748);
  return;
}
