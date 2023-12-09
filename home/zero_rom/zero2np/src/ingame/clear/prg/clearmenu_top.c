// STATUS: NOT STARTED

#include "clearmenu_top.h"

typedef struct {
	char step;
	char mode;
	char csr;
	char conf_csr;
} CLEAR_MENU_TOP_CTRL;

typedef struct {
	char anim_step;
	char anim_timer;
	char conf_anim_step;
	char conf_anim_timer;
} CLEAR_MENU_TOP_DISP;

static void *clear_menu_tex_addr = NULL;
static char clear_menu_top_init_flg = 0;
static CLEAR_MENU_TOP_CTRL clear_menu_top_ctrl;
static CLEAR_MENU_TOP_DISP clear_menu_top_disp;

static void _fixed_array_assert(char *strType, size_t v0, size_t v1) {
	static char *str = 0x3a34c0;
	
  g3ddbgAssert__FbPCce(false,str_849);
  return;
}

static void** void * * _fixed_array_verifyrange<void *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_assert__FPCcUiUi(s_void__003ef888,_max,v);
  }
  return (void **)0x0;
}

static char** char * * _fixed_array_verifyrange<char *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_assert__FPCcUiUi(s_char__003ef890,_max,v);
  }
  return (char **)0x0;
}

static unsigned int** unsigned int * * _fixed_array_verifyrange<unsigned int *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_assert__FPCcUiUi("unsigned int*",_max,v);
  }
  return (uint **)0x0;
}

void ClearMenuTopFirstInit() {
  ClearMenuTopCtrlInit__Fv();
  ClearMenuTopDispInit__Fv();
  clear_menu_top_ctrl.step = '\x01';
  clear_menu_top_ctrl.csr = '\0';
  clear_menu_top_disp.anim_step = '\x02';
  clear_menu_top_init_flg = '\0';
  return;
}

void ClearMenuTopInit() {
  if (clear_menu_top_init_flg != '\0') {
    ClearMenuTopCtrlInit__Fv();
    return;
  }
  clear_menu_top_init_flg = '\x01';
  return;
}

static void ClearMenuTopCtrlInit() {
  clear_menu_top_ctrl.conf_csr = '\x01';
  clear_menu_top_ctrl.step = '\0';
  clear_menu_top_ctrl.mode = '\0';
  return;
}

void ClearMenuTopBackGroundLoadReq() {
  uchar uVar1;
  
  if (clear_menu_tex_addr != (void *)0x0) {
    LiberateClearMenuTexMem__FPPv(&clear_menu_tex_addr);
  }
  uVar1 = GetLanguage__Fv();
  GetClearMenuTexMem__FPPvi(&clear_menu_tex_addr,(char)uVar1 + 0x115d);
  uVar1 = GetLanguage__Fv();
  ClearMenuTexLoadReq__FPvi(clear_menu_tex_addr,(char)uVar1 + 0x115d);
  return;
}

static int ClearMenuTopTexLoadWait() {
  uchar uVar1;
  int iVar2;
  
  uVar1 = GetLanguage__Fv();
  iVar2 = FileLoadIsEnd2((char)uVar1 + 0x115d,clear_menu_tex_addr);
  return (int)(iVar2 != 0);
}

void ClearMenuTopMain() {
	static char __FUNCTION__[17] = {
		/* [0] = */ 67,
		/* [1] = */ 108,
		/* [2] = */ 101,
		/* [3] = */ 97,
		/* [4] = */ 114,
		/* [5] = */ 77,
		/* [6] = */ 101,
		/* [7] = */ 110,
		/* [8] = */ 117,
		/* [9] = */ 84,
		/* [10] = */ 111,
		/* [11] = */ 112,
		/* [12] = */ 77,
		/* [13] = */ 97,
		/* [14] = */ 105,
		/* [15] = */ 110,
		/* [16] = */ 0
	};
	
  int iVar1;
  
  if (clear_menu_top_ctrl.step == '\x01') {
    iVar1 = ClearMenuTopTexLoadWait__Fv();
    if (iVar1 == 0) {
      return;
    }
    clear_menu_top_ctrl.step = '\x02';
    return;
  }
  if (clear_menu_top_ctrl.step < '\x02') {
    if (clear_menu_top_ctrl.step == '\0') {
      ClearMenuTopDispInit__Fv();
      clear_menu_top_ctrl.step = '\x01';
      return;
    }
  }
  else {
    if (clear_menu_top_ctrl.step == '\x02') {
      if (clear_menu_top_disp.anim_step != '\x02') {
        return;
      }
      if (clear_menu_top_ctrl.mode == '\0') {
        if (clear_menu_top_disp.conf_anim_step != '\x04') {
          return;
        }
        ClearMenuTopPad__Fv();
        return;
      }
      if (clear_menu_top_ctrl.mode != '\x01') {
        SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
        PrintAssertReal("Error! %s");
        return;
      }
      if (clear_menu_top_disp.conf_anim_step != '\x02') {
        return;
      }
      ClearMenuTopConfPad__Fv();
      return;
    }
    if (clear_menu_top_ctrl.step == '\x03') {
      if (clear_menu_top_disp.anim_step != '\x04') {
        return;
      }
      if (clear_menu_top_ctrl.csr != '\x01') {
        if (clear_menu_top_ctrl.csr < '\x02') {
          if (clear_menu_top_ctrl.csr == '\0') {
            SetNextGPhase__F14GPHASE_ID_ENUM(GID_CLEARMENU_SAVE);
            return;
          }
        }
        else if (clear_menu_top_ctrl.csr == '\x02') {
          ClearMenuEndReq__Fv();
          return;
        }
        SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
        PrintAssertReal("Error! %s");
        return;
      }
      SetNextGPhase__F14GPHASE_ID_ENUM(GID_CLEARMENU_ALBUM);
      return;
    }
  }
  SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
  PrintAssertReal("Error! %s");
  return;
}

static void ClearMenuTopPad() {
  int iVar1;
  
  if (((pad[0].rpt & 0x1000U) == 0) && (iVar1 = GetPadAnalogRpt__Fi(0), iVar1 == 0)) {
    if (((pad[0].rpt & 0x4000U) == 0) && (iVar1 = GetPadAnalogRpt__Fi(1), iVar1 == 0)) {
      if (**paddat == 1) {
        SystemBankPlay__FiiiiP11_SND_3D_SETii(3,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
        clear_menu_top_ctrl.mode = '\x01';
        clear_menu_top_ctrl.conf_csr = '\x01';
        clear_menu_top_disp.conf_anim_step = '\0';
        clear_menu_top_disp.conf_anim_timer = '\0';
        return;
      }
      if (*paddat[1] != 1) {
        return;
      }
      SystemBankPlay__FiiiiP11_SND_3D_SETii(1,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
      clear_menu_top_ctrl.csr = '\x02';
      return;
    }
    SystemBankPlay__FiiiiP11_SND_3D_SETii(0,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
    iVar1 = clear_menu_top_ctrl.csr + 1;
  }
  else {
    SystemBankPlay__FiiiiP11_SND_3D_SETii(0,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
    iVar1 = clear_menu_top_ctrl.csr + 2;
  }
  clear_menu_top_ctrl.csr = (char)(iVar1 % 3);
  return;
}

static void ClearMenuEndReq() {
  clear_menu_top_ctrl.step = '\x03';
  ClearMenuFadeOutReq__Fv();
  return;
}

static void ClearMenuTopConfPad() {
  int iVar1;
  
  if (((((pad[0].rpt & 0x8000U) == 0) && (iVar1 = GetPadAnalogRpt__Fi(2), iVar1 == 0)) &&
      ((pad[0].rpt & 0x2000U) == 0)) && (iVar1 = GetPadAnalogRpt__Fi(3), iVar1 == 0)) {
    if (**paddat == 1) {
      SystemBankPlay__FiiiiP11_SND_3D_SETii(3,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
      if (clear_menu_top_ctrl.conf_csr == '\0') {
        ClearMenuTopExeDecision__Fv();
        return;
      }
    }
    else {
      if (*paddat[1] != 1) {
        return;
      }
      SystemBankPlay__FiiiiP11_SND_3D_SETii(1,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
    }
    clear_menu_top_ctrl.mode = '\0';
    clear_menu_top_disp.conf_anim_step = '\x03';
    clear_menu_top_disp.conf_anim_timer = '\0';
  }
  else {
    SystemBankPlay__FiiiiP11_SND_3D_SETii(0,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
    clear_menu_top_ctrl.conf_csr = clear_menu_top_ctrl.conf_csr ^ 1;
  }
  return;
}

static void ClearMenuTopExeDecision() {
	static char __FUNCTION__[24] = {
		/* [0] = */ 67,
		/* [1] = */ 108,
		/* [2] = */ 101,
		/* [3] = */ 97,
		/* [4] = */ 114,
		/* [5] = */ 77,
		/* [6] = */ 101,
		/* [7] = */ 110,
		/* [8] = */ 117,
		/* [9] = */ 84,
		/* [10] = */ 111,
		/* [11] = */ 112,
		/* [12] = */ 69,
		/* [13] = */ 120,
		/* [14] = */ 101,
		/* [15] = */ 68,
		/* [16] = */ 101,
		/* [17] = */ 99,
		/* [18] = */ 105,
		/* [19] = */ 115,
		/* [20] = */ 105,
		/* [21] = */ 111,
		/* [22] = */ 110,
		/* [23] = */ 0
	};
	
  if (-1 < clear_menu_top_ctrl.csr) {
    if (clear_menu_top_ctrl.csr < '\x02') {
      clear_menu_top_ctrl.step = '\x03';
      clear_menu_top_disp.anim_step = '\x03';
      clear_menu_top_disp.anim_timer = '\0';
      clear_menu_top_disp.conf_anim_step = '\x03';
      clear_menu_top_disp.conf_anim_timer = '\0';
      return;
    }
    if (clear_menu_top_ctrl.csr == '\x02') {
      ClearMenuEndReq__Fv();
      return;
    }
  }
  SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
  PrintAssertReal("Error! %s");
  return;
}

void ClearMenuTopMemFree() {
  LiberateClearMenuTexMem__FPPv(&clear_menu_tex_addr);
  return;
}

static void ClearMenuTopDispInit() {
  clear_menu_top_disp.conf_anim_step = '\x04';
  clear_menu_top_disp.conf_anim_timer = '\0';
  clear_menu_top_disp.anim_step = '\0';
  clear_menu_top_disp.anim_timer = '\0';
  return;
}

void ClearMenuTopDisp() {
	static int msg_id_tbl[3] = {
		/* [0] = */ 11,
		/* [1] = */ 12,
		/* [2] = */ 13
	};
	
  uchar uVar1;
  
  if (('\x01' < clear_menu_top_ctrl.step) && (clear_menu_top_disp.anim_step != '\x04')) {
    uVar1 = Zero2Anim2D_InOutAnimCtrl__FPcT0ss
                      (&clear_menu_top_disp.anim_step,&clear_menu_top_disp.anim_timer,10,5);
    SavePoint_MenuWinDisp__FiiUc(0,0,uVar1);
    PK2SendVram__FUiiii((uint)clear_menu_tex_addr,-1,-1,0);
    ClearMenuTopTitleDisp__FiiUc(0,0,uVar1);
    SavePointTopCaptionDisp__FiiUc(0,0,uVar1);
    ClearMenuTopSelMsgDisp__FiiUc(0,0,uVar1);
    ClearMenuTopCsrDisp__FiiUc(0,0,uVar1);
    if (clear_menu_top_disp.conf_anim_step != '\x04') {
      uVar1 = Zero2Anim2D_InOutAnimCtrl__FPcT0ss
                        (&clear_menu_top_disp.conf_anim_step,&clear_menu_top_disp.conf_anim_timer,10
                         ,5);
      SavePoint_MenuConfWinDisp__FiiiUc((int)clear_menu_top_ctrl.conf_csr,0,0,uVar1);
      PrintMsg__Fiiiiiii(0x24,*(int *)(msg_id_tbl_985 + clear_menu_top_ctrl.csr * 4),0x44,0x135,1,
                         (int)(char)uVar1,0);
    }
  }
  return;
}

static void ClearMenuTopTitleDisp(int off_x, int off_y, u_char alpha) {
	DISP_SPRT title_ds;
	int i;
	
  int iVar1;
  SPRT_DAT *d;
  float fVar2;
  DISP_SPRT title_ds;
  
  fVar2 = (float)off_x;
  iVar1 = 1;
  d = gameclear_tex + 0x30;
  do {
    CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&title_ds,d);
    iVar1 = iVar1 + -1;
    d = d + 1;
    title_ds.x = title_ds.x + fVar2;
    title_ds.y = title_ds.y + (float)off_y;
    title_ds.alpha = (uchar)((int)((uint)title_ds.alpha * (uint)alpha) >> 7);
    DispSprD__FP9DISP_SPRT(&title_ds);
  } while (-1 < iVar1);
  return;
}

static void ClearMenuTopSelMsgDisp(int off_x, int off_y, u_char alpha) {
	int i;
	static int msg_y_tbl[3] = {
		/* [0] = */ 146,
		/* [1] = */ 176,
		/* [2] = */ 206
	};
	static int msg_id_tbl[3] = {
		/* [0] = */ 0,
		/* [1] = */ 1,
		/* [2] = */ 2
	};
	
  int iVar1;
  int col_label;
  int iVar2;
  long lVar3;
  
  lVar3 = 0;
  iVar1 = 0;
  do {
    col_label = 7;
    if (clear_menu_top_ctrl.csr != lVar3) {
      col_label = 1;
    }
    iVar2 = (int)lVar3 + 1;
    lVar3 = (long)iVar2;
    PrintMsg_Arrange__Fiiiiiiiiii
              (0x24,*(int *)((int)&msg_id_tbl_993 + iVar1),off_x + 0x140,
               *(int *)((int)&msg_y_tbl_992 + iVar1) + off_y,col_label,(uint)alpha,0,0,0,2);
    iVar1 = iVar2 * 4;
  } while (lVar3 < 3);
  return;
}

static void ClearMenuTopCsrDisp(int off_x, int off_y, u_char alpha) {
  DrawCmnSelCsr__FUiffUcfUc
            (0,184.0,(float)(clear_menu_top_ctrl.csr * 0x1e + 0x8e),alpha,272.0,'\x01');
  return;
}
