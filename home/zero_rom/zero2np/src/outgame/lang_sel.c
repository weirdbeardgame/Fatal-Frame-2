// STATUS: NOT STARTED

#include "lang_sel.h"

typedef struct {
	int anim_timer;
	char step;
	char csr;
} LANG_SEL_CTRL;

static void *lang_sel_bg_addr = NULL;
static void *lang_sel_tex_addr = NULL;
static u_char set_language = 0;
static LANG_SEL_CTRL lang_sel_ctrl;

static void _fixed_array_assert(char *strType, size_t v0, size_t v1) {
	static char *str = 0x3ba300;
	
  g3ddbgAssert__FbPCce(false,str_849);
  return;
}

static void** void * * _fixed_array_verifyrange<void *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_assert__FPCcUiUi(s_void__003f17f0,_max,v);
  }
  return (void **)0x0;
}

static char** char * * _fixed_array_verifyrange<char *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_assert__FPCcUiUi(s_char__003f17f8,_max,v);
  }
  return (char **)0x0;
}

static unsigned int** unsigned int * * _fixed_array_verifyrange<unsigned int *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_assert__FPCcUiUi("unsigned int*",_max,v);
  }
  return (uint **)0x0;
}

static void LangSelCtrlInit() {
  lang_sel_ctrl.anim_timer = 0;
  lang_sel_ctrl.step = '\0';
  lang_sel_ctrl.csr = GetLanguage__Fv();
  return;
}

static int LangSelTexLoadWait() {
	int res;
	
  uchar uVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = FileLoadIsEnd2(0xd3d,lang_sel_bg_addr);
  if (iVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar1 = GetLanguage__Fv();
    iVar2 = FileLoadIsEnd2((char)uVar1 + 0x1162,lang_sel_tex_addr);
    uVar3 = (uint)(iVar2 != 0);
  }
  return uVar3;
}

static void LangSelMain() {
	static char __FUNCTION__[12] = {
		/* [0] = */ 76,
		/* [1] = */ 97,
		/* [2] = */ 110,
		/* [3] = */ 103,
		/* [4] = */ 83,
		/* [5] = */ 101,
		/* [6] = */ 108,
		/* [7] = */ 77,
		/* [8] = */ 97,
		/* [9] = */ 105,
		/* [10] = */ 110,
		/* [11] = */ 0
	};
	
  uchar uVar1;
  int iVar2;
  
  switch(lang_sel_ctrl.step) {
  case '\0':
    if (lang_sel_bg_addr != (void *)0x0) {
      LiberateTitleTexMem__FPPv(&lang_sel_bg_addr);
    }
    if (lang_sel_tex_addr != (void *)0x0) {
      LiberateTitleTexMem__FPPv(&lang_sel_tex_addr);
    }
    uVar1 = GetLanguage__Fv();
    GetTitleTexMem__FPPvi(&lang_sel_tex_addr,(char)uVar1 + 0x1162);
    GetTitleTexMem__FPPvi(&lang_sel_bg_addr,0xd3d);
    lang_sel_ctrl.step = '\x01';
    break;
  case '\x01':
    uVar1 = GetLanguage__Fv();
    TitleTexLoadReq__FPvi(lang_sel_tex_addr,(char)uVar1 + 0x1162);
    TitleTexLoadReq__FPvi(lang_sel_bg_addr,0xd3d);
    lang_sel_ctrl.step = '\x02';
    break;
  case '\x02':
    iVar2 = LangSelTexLoadWait__Fv();
    if (iVar2 != 0) {
      lang_sel_ctrl.step = '\x03';
    }
    break;
  case '\x03':
    LangSelMainPad__Fv();
    return;
  case '\x04':
    if (lang_sel_bg_addr != (void *)0x0) {
      LiberateTitleTexMem__FPPv(&lang_sel_bg_addr);
    }
    if (lang_sel_tex_addr != (void *)0x0) {
      LiberateTitleTexMem__FPPv(&lang_sel_tex_addr);
    }
    LangData_LoadReq__Fv();
    lang_sel_ctrl.step = '\x05';
  case '\x05':
    iVar2 = LangData_LoadWait__Fv();
    if (iVar2 != 0) {
      SetNextGPhase__F14GPHASE_ID_ENUM(GID_AUTOLOAD_MAIN);
      return;
    }
    break;
  default:
    SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
    PrintAssertReal("Error! %s");
  }
  return;
}

static void LangSelMainPad() {
  int iVar1;
  
  if (((pad[0].rpt & 0x1000U) == 0) && (iVar1 = GetPadAnalogRpt__Fi(0), iVar1 == 0)) {
    if (((pad[0].rpt & 0x4000U) == 0) && (iVar1 = GetPadAnalogRpt__Fi(1), iVar1 == 0)) {
      if (**paddat != 1) {
        return;
      }
      SystemBankPlay__FiiiiP11_SND_3D_SETii(3,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
      set_language = lang_sel_ctrl.csr;
      LoadLangSetUp__Fv();
      lang_sel_ctrl.step = '\x04';
      return;
    }
    SystemBankPlay__FiiiiP11_SND_3D_SETii(0,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
    iVar1 = lang_sel_ctrl.csr + 1;
  }
  else {
    SystemBankPlay__FiiiiP11_SND_3D_SETii(0,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
    iVar1 = lang_sel_ctrl.csr + 4;
  }
  lang_sel_ctrl.csr = (char)(iVar1 % 5);
  return;
}

static void LangSelDispMain() {
  if (lang_sel_ctrl.step == '\x03') {
    DispTitleBack__FPiPv(&lang_sel_ctrl.anim_timer,lang_sel_bg_addr);
    LangSelBlackBgDisp__FiiUc(0,0,0x80);
    PK2SendVram__FUiiii((uint)lang_sel_tex_addr,-1,-1,0);
    LangSelNationalFlagDisp__FiiUc(0,0,0x80);
    LangSelCsrFlareDisp__FiiUc(0,0,0x80);
    LangSelCountryNameDisp__FiiUc(0,0,0x80);
  }
  return;
}

static void LangSelBlackBgDisp(int off_x, int off_y, u_char alpha) {
	DISP_SQAR dsq;
	SQAR_DAT lang_sel_bg;
	
  undefined *puVar1;
  uint uVar2;
  ulong *puVar3;
  uchar *puVar4;
  DISP_SQAR dsq;
  SQAR_DAT lang_sel_bg;
  
  puVar1 = (undefined *)((int)&lang_sel_bg.h + 3);
  uVar2 = (uint)puVar1 & 7;
  puVar3 = (ulong *)(puVar1 + -uVar2);
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | DAT_003ba3d8 >> (7 - uVar2) * 8;
  lang_sel_bg._0_8_ = DAT_003ba3d8;
  puVar1 = (undefined *)((int)&lang_sel_bg.y + 3);
  uVar2 = (uint)puVar1 & 7;
  puVar3 = (ulong *)(puVar1 + -uVar2);
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | DAT_003ba3e0 >> (7 - uVar2) * 8;
  lang_sel_bg._8_8_ = DAT_003ba3e0;
  uVar2 = (uint)&lang_sel_bg.alpha & 7;
  puVar4 = &lang_sel_bg.alpha + -uVar2;
  *(ulong *)puVar4 = *(ulong *)puVar4 & -1L << (uVar2 + 1) * 8 | DAT_003ba3e8 >> (7 - uVar2) * 8;
  lang_sel_bg._16_8_ = DAT_003ba3e8;
  CopySqrDToSqr__FP9DISP_SQARP8SQAR_DAT(&dsq,&lang_sel_bg);
  DispSqrD__FP9DISP_SQAR(&dsq);
  return;
}

static void LangSelNationalFlagDisp(int off_x, int off_y, u_char alpha) {
	DISP_SPRT ds;
	int i;
	static int tex_label_tbl[5] = {
		/* [0] = */ 0,
		/* [1] = */ 1,
		/* [2] = */ 2,
		/* [3] = */ 3,
		/* [4] = */ 4
	};
	
  int iVar1;
  long lVar2;
  int *piVar3;
  float fVar4;
  DISP_SPRT ds;
  
  fVar4 = (float)off_x;
  lVar2 = 0;
  piVar3 = &tex_label_tbl_979;
  iVar1 = tex_label_tbl_979;
  while( true ) {
    piVar3 = piVar3 + 1;
    CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&ds,lang_sl_tex + iVar1);
    ds.x = ds.x + fVar4;
    ds.y = ds.y + (float)off_y;
    ds.alpha = (uchar)((int)((uint)ds.alpha * (uint)alpha) >> 7);
    if (lang_sel_ctrl.csr != lVar2) {
      ds.r = '@';
      ds.g = '@';
      ds.b = '@';
    }
    lVar2 = (long)((int)lVar2 + 1);
    DispSprD__FP9DISP_SPRT(&ds);
    if (4 < lVar2) break;
    iVar1 = *piVar3;
  }
  return;
}

static void LangSelCsrFlareDisp(int off_x, int off_y, u_char alpha) {
	DISP_SPRT ds;
	int i;
	static int flare_tex_tbl[5][2] = {
		/* [0] = */ {
			/* [0] = */ 11,
			/* [1] = */ -1
		},
		/* [1] = */ {
			/* [0] = */ 12,
			/* [1] = */ 13
		},
		/* [2] = */ {
			/* [0] = */ 14,
			/* [1] = */ -1
		},
		/* [3] = */ {
			/* [0] = */ 15,
			/* [1] = */ -1
		},
		/* [4] = */ {
			/* [0] = */ 16,
			/* [1] = */ -1
		}
	};
	
  int iVar1;
  int iVar2;
  DISP_SPRT ds;
  
  iVar2 = 0;
  do {
    iVar1 = lang_sel_ctrl.csr * 2 + iVar2;
    iVar2 = iVar2 + 1;
    if (*(int *)(flare_tex_tbl_983 + iVar1 * 4) != -1) {
      CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT
                (&ds,lang_sl_tex + *(int *)(flare_tex_tbl_983 + iVar1 * 4));
      ds.x = ds.x + (float)off_x;
      ds.y = ds.y + (float)off_y;
      ds.alpha = (uchar)((int)((uint)ds.alpha * (uint)alpha) >> 7);
      DispSprD__FP9DISP_SPRT(&ds);
    }
  } while (iVar2 < 2);
  return;
}

static void LangSelCountryNameDisp(int off_x, int off_y, u_char alpha) {
	DISP_SPRT ds;
	int i;
	int j;
	static int tex_label_tbl[5][2] = {
		/* [0] = */ {
			/* [0] = */ 5,
			/* [1] = */ -1
		},
		/* [1] = */ {
			/* [0] = */ 6,
			/* [1] = */ 7
		},
		/* [2] = */ {
			/* [0] = */ 8,
			/* [1] = */ -1
		},
		/* [3] = */ {
			/* [0] = */ 9,
			/* [1] = */ -1
		},
		/* [4] = */ {
			/* [0] = */ 10,
			/* [1] = */ -1
		}
	};
	
  int iVar1;
  int *piVar2;
  int iVar3;
  long lVar4;
  DISP_SPRT ds;
  
  lVar4 = 0;
  do {
    iVar3 = 1;
    piVar2 = &tex_label_tbl_987 + (int)lVar4 * 2;
    iVar1 = *piVar2;
    while( true ) {
      piVar2 = piVar2 + 1;
      if (iVar1 != -1) {
        CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&ds,lang_sl_tex + iVar1);
        ds.x = ds.x + (float)off_x;
        ds.y = ds.y + (float)off_y;
        ds.alpha = (uchar)((int)((uint)ds.alpha * (uint)alpha) >> 7);
        if (lang_sel_ctrl.csr != lVar4) {
          ds.r = '@';
          ds.g = '@';
          ds.b = '@';
        }
        DispSprD__FP9DISP_SPRT(&ds);
      }
      iVar3 = iVar3 + -1;
      if (iVar3 < 0) break;
      iVar1 = *piVar2;
    }
    lVar4 = (long)((int)lVar4 + 1);
  } while (lVar4 < 5);
  return;
}

void LoadLangSetUp() {
  SetLanguage__FUc(set_language);
  return;
}

void LangData_LoadReq() {
  uchar uVar1;
  
  uVar1 = GetLanguage__Fv();
  LoadReq__FiUi((char)uVar1 + 4,0x1e79b00);
  uVar1 = GetLanguage__Fv();
  LoadReq__FiUi((char)uVar1 + 0xd38,0xd9ec00);
  return;
}

int LangData_LoadWait() {
	int res;
	
  int iVar1;
  
  iVar1 = IsLoadEndAll__Fv();
  if (iVar1 != 0) {
    PK2SendVram__FUiiii(0x1e79b00,-1,-1,0);
  }
  return (uint)(iVar1 != 0);
}

void Set_McSaveLanguage(u_char language) {
  set_language = language;
  return;
}

void SetSave_Language(MC_SAVE_DATA *data) {
  data->addr = &set_language;
  data->size = 1;
  return;
}

void init_LangSel_Main() {
  SoftResetLock__Fv();
  ol_loadHeapReset__FPvUi((void *)0x5a6c00,0x7a8000);
  LangSelCtrlInit__Fv();
  return;
}

GPHASE_ENUM one_LangSel_Main(GPHASE_ENUM dummy) {
  LangSelMain__Fv();
  LangSelDispMain__Fv();
  return GPHASE_CONTINUE;
}

void end_LangSel_Main() {
  SoftResetUnlock__Fv();
  return;
}
