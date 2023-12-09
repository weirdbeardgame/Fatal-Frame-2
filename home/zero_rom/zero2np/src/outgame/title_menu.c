// STATUS: NOT STARTED

#include "title_menu.h"

typedef struct {
	char csr;
} TITLE_MENU_CTRL;

static TITLE_MENU_CTRL title_menu_ctrl;

static void _fixed_array_assert(char *strType, size_t v0, size_t v1) {
	static char *str = 0x3e6ac0;
	
  g3ddbgAssert__FbPCce(false,str_849);
  return;
}

static void** void * * _fixed_array_verifyrange<void *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_assert__FPCcUiUi(s_void__003f47f0,_max,v);
  }
  return (void **)0x0;
}

static char** char * * _fixed_array_verifyrange<char *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_assert__FPCcUiUi(s_char__003f47f8,_max,v);
  }
  return (char **)0x0;
}

static unsigned int** unsigned int * * _fixed_array_verifyrange<unsigned int *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_assert__FPCcUiUi("unsigned int*",_max,v);
  }
  return (uint **)0x0;
}

void TitleMenuCtrlInit() {
  title_menu_ctrl.csr = '\0';
  return;
}

void TitleMenuMain() {
  TitleMenuPad__Fv();
  return;
}

static void TitleMenuPad() {
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (((pad[0].rpt & 0x8000U) == 0) && (iVar1 = GetPadAnalogRpt__Fi(2), iVar1 == 0)) {
    if (((pad[0].rpt & 0x2000U) == 0) && (iVar1 = GetPadAnalogRpt__Fi(3), iVar1 == 0)) {
      if (*paddat[9] == 1) {
        ChangeVideoMode__FUc('\x02');
      }
      else if (*paddat[8] == 1) {
        ChangeVideoMode__FUc('\x03');
      }
      else if (**paddat == 1) {
        TitleMenuMovePhase__Fv();
      }
      else if (*paddat[1] == 1) {
        SystemBankPlay__FiiiiP11_SND_3D_SETii(1,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
        SetNextGPhase__F14GPHASE_ID_ENUM(GID_TITLE_TOP);
      }
      goto LAB_0026a990;
    }
    SystemBankPlay__FiiiiP11_SND_3D_SETii(0,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
    iVar3 = title_menu_ctrl.csr + 1;
    iVar1 = title_menu_ctrl.csr + 8;
  }
  else {
    SystemBankPlay__FiiiiP11_SND_3D_SETii(0,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
    iVar3 = title_menu_ctrl.csr + 7;
    iVar1 = title_menu_ctrl.csr + 0xe;
  }
  iVar2 = iVar3;
  if (iVar3 < 0) {
    iVar2 = iVar1;
  }
  title_menu_ctrl.csr = (char)iVar3 + (char)(iVar2 >> 3) * -8;
LAB_0026a990:
  if ((ushort)(*key_now[9] |
              *key_now[8] |
              *key_now[11] |
              *key_now[10] |
              *key_now[7] | *key_now[5] | *key_now[6] | *key_now[7] | *key_now[5] | *key_now[4]) !=
      0) {
    MoveTitleMovieTimerRestart__Fv();
  }
  return;
}

static void TitleMenuMovePhase() {
	static char __FUNCTION__[19] = {
		/* [0] = */ 84,
		/* [1] = */ 105,
		/* [2] = */ 116,
		/* [3] = */ 108,
		/* [4] = */ 101,
		/* [5] = */ 77,
		/* [6] = */ 101,
		/* [7] = */ 110,
		/* [8] = */ 117,
		/* [9] = */ 77,
		/* [10] = */ 111,
		/* [11] = */ 118,
		/* [12] = */ 101,
		/* [13] = */ 80,
		/* [14] = */ 104,
		/* [15] = */ 97,
		/* [16] = */ 115,
		/* [17] = */ 101,
		/* [18] = */ 0
	};
	
  switch(title_menu_ctrl.csr) {
  case '\0':
    SystemBankPlay__FiiiiP11_SND_3D_SETii(3,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
    SetNextGPhase__F14GPHASE_ID_ENUM(GID_TITLE_NEWGAME);
    return;
  case '\x01':
    SystemBankPlay__FiiiiP11_SND_3D_SETii(3,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
    SetNextGPhase__F14GPHASE_ID_ENUM(GID_TITLE_LOADGAME);
    return;
  case '\x02':
    SystemBankPlay__FiiiiP11_SND_3D_SETii(3,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
    SetNextGPhase__F14GPHASE_ID_ENUM(GID_TITLE_ALBUM);
    return;
  case '\x03':
    SystemBankPlay__FiiiiP11_SND_3D_SETii(3,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
    SetNextGPhase__F14GPHASE_ID_ENUM(GID_TITLE_GALLERY);
    return;
  case '\x04':
    SystemBankPlay__FiiiiP11_SND_3D_SETii(3,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
    SetNextGPhase__F14GPHASE_ID_ENUM(GID_TITLE_OPTION);
    return;
  case '\x05':
    SystemBankPlay__FiiiiP11_SND_3D_SETii(3,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
    SetNextGPhase__F14GPHASE_ID_ENUM(GID_TITLE_FRAMERATE_SEL);
    return;
  case '\x06':
    SystemBankPlay__FiiiiP11_SND_3D_SETii(3,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
    SetTitleLoadFlg__Fc('\0');
    ReleaseLoadingTexMem__Fv();
    SetNextGPhase__F14GPHASE_ID_ENUM(GID_DEBUG_MENU);
    return;
  case '\a':
    SystemBankPlay__FiiiiP11_SND_3D_SETii(3,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
    SetNextGPhase__F14GPHASE_ID_ENUM(GID_TITLE_CHAPTER_SEL);
    return;
  default:
    SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
    PrintAssertReal("Error! TitleMenuMovePhase");
    return;
  }
}

void TitleMenuDispMain(int off_x, int off_y, u_char alpha) {
  uchar rgb;
  
  DispTitleZeroLogo__FiiUc(0,0,0x80);
  DispTitleTecmoLogo__FiiUc(0,0,0x80);
  DispTitleMenuItem__FiiUc(off_x,off_y,alpha);
  rgb = GetTitleAnimRGB__Fv();
  DispTitleMenuCursor__FUc(rgb);
  TitleCaptionDisp__FiiUc(0,0,0x80);
  return;
}

static void DispTitleMenuItem(int off_x, int off_y, u_char alpha) {
	DISP_SPRT ds;
	int i;
	static int title_tbl[8][2] = {
		/* [0] = */ {
			/* [0] = */ 16,
			/* [1] = */ -1
		},
		/* [1] = */ {
			/* [0] = */ 18,
			/* [1] = */ -1
		},
		/* [2] = */ {
			/* [0] = */ 17,
			/* [1] = */ -1
		},
		/* [3] = */ {
			/* [0] = */ 19,
			/* [1] = */ 20
		},
		/* [4] = */ {
			/* [0] = */ 15,
			/* [1] = */ -1
		},
		/* [5] = */ {
			/* [0] = */ 27,
			/* [1] = */ 28
		},
		/* [6] = */ {
			/* [0] = */ -1,
			/* [1] = */ -1
		},
		/* [7] = */ {
			/* [0] = */ -1,
			/* [1] = */ -1
		}
	};
	
  void *tm2_addr;
  int iVar1;
  char *str;
  int iVar2;
  float x;
  DISP_SPRT ds;
  
  iVar2 = 0;
  tm2_addr = GetTitleLogoTexAddr__Fv();
  PK2SendVram__FUiiii((uint)tm2_addr,-1,-1,0);
  do {
    iVar1 = title_menu_ctrl.csr * 2 + iVar2;
    iVar2 = iVar2 + 1;
    if (*(int *)(title_tbl_964 + iVar1 * 4) == -1) {
      str = "DEBUG MENU";
      if (title_menu_ctrl.csr == '\x06') {
        x = 248.0;
LAB_0026ad7c:
        SetASCIIString2__FiffiUcUcUcPc(0,x,DAT_003ee99c,1,0xff,0xff,0xff,str);
        return;
      }
      if (title_menu_ctrl.csr == '\a') {
        x = 224.0;
        str = "CHAPTER SELECT";
        goto LAB_0026ad7c;
      }
    }
    else {
      CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&ds,title_top + *(int *)(title_tbl_964 + iVar1 * 4));
      ds.alphar = 0x48;
      DispSprD__FP9DISP_SPRT(&ds);
    }
    if (1 < iVar2) {
      return;
    }
  } while( true );
}

static void DispTitleMenuCursor(u_char rgb) {
  float y;
  uchar uVar1;
  
  if (1 < (byte)title_menu_ctrl.csr - 6) {
    uVar1 = GetLanguage__Fv();
    y = DAT_003ee9a0;
    DispTitleCursorL__FffUcUc
              ((float)title_left_x_tbl[title_menu_ctrl.csr][(char)uVar1],DAT_003ee9a0,0x80,rgb);
    uVar1 = GetLanguage__Fv();
    DispTitleCursorR__FffUcUc((float)title_right_x_tbl[title_menu_ctrl.csr][(char)uVar1],y,0x80,rgb)
    ;
  }
  return;
}
