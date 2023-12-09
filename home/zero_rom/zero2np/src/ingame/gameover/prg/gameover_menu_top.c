// STATUS: NOT STARTED

#include "gameover_menu_top.h"

typedef struct {
	char step;
	char mode;
	char csr;
	char conf_csr;
} GAMEOVER_MENU_TOP_CTRL;

typedef struct {
	char anim_step;
	char anim_timer;
	char conf_anim_step;
	char conf_anim_timer;
} GAMEOVER_MENU_TOP_DISP;

static void *gameover_menu_tex_addr = NULL;
static char gameover_menu_top_init_flg = 0;
static GAMEOVER_MENU_TOP_CTRL gameover_menu_top_ctrl;
static GAMEOVER_MENU_TOP_DISP gameover_menu_top_disp;

static void _fixed_array_assert(char *strType, size_t v0, size_t v1) {
	static char *str = 0x3b4088;
	
  g3ddbgAssert__FbPCce(false,str_849);
  return;
}

static void** void * * _fixed_array_verifyrange<void *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_assert__FPCcUiUi(s_void__003f1010,_max,v);
  }
  return (void **)0x0;
}

static char** char * * _fixed_array_verifyrange<char *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_assert__FPCcUiUi(s_char__003f1018,_max,v);
  }
  return (char **)0x0;
}

static unsigned int** unsigned int * * _fixed_array_verifyrange<unsigned int *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_assert__FPCcUiUi("unsigned int*",_max,v);
  }
  return (uint **)0x0;
}

void GameOverMenuTopFirstInit() {
  GameOverMenuTopCtrlInit__Fv();
  GameOverMenuTopDispInit__Fv();
  gameover_menu_top_ctrl.step = '\x01';
  gameover_menu_top_ctrl.csr = '\0';
  gameover_menu_top_disp.anim_step = '\x02';
  gameover_menu_top_init_flg = '\0';
  return;
}

void GameOverMenuTopInit() {
  if (gameover_menu_top_init_flg != '\0') {
    GameOverMenuTopCtrlInit__Fv();
    return;
  }
  gameover_menu_top_init_flg = '\x01';
  return;
}

static void GameOverMenuTopCtrlInit() {
  gameover_menu_top_ctrl.conf_csr = '\x01';
  gameover_menu_top_ctrl.step = '\0';
  gameover_menu_top_ctrl.mode = '\0';
  return;
}

void GameOverMenuTopBackGroundLoadReq() {
  uchar uVar1;
  
  if (gameover_menu_tex_addr != (void *)0x0) {
    LiberateGameOverMenuTexMem__FPPv(&gameover_menu_tex_addr);
  }
  uVar1 = GetLanguage__Fv();
  GetGameOverMenuTexMem__FPPvi(&gameover_menu_tex_addr,(char)uVar1 + 0x9e);
  uVar1 = GetLanguage__Fv();
  GameOverMenuTexLoadReq__FPvi(gameover_menu_tex_addr,(char)uVar1 + 0x9e);
  return;
}

static int GameOverMenuTopTexLoadWait() {
  uchar uVar1;
  int iVar2;
  
  uVar1 = GetLanguage__Fv();
  iVar2 = FileLoadIsEnd2((char)uVar1 + 0x9e,gameover_menu_tex_addr);
  return (int)(iVar2 != 0);
}

void GameOverMenuTopMain() {
	static char __FUNCTION__[20] = {
		/* [0] = */ 71,
		/* [1] = */ 97,
		/* [2] = */ 109,
		/* [3] = */ 101,
		/* [4] = */ 79,
		/* [5] = */ 118,
		/* [6] = */ 101,
		/* [7] = */ 114,
		/* [8] = */ 77,
		/* [9] = */ 101,
		/* [10] = */ 110,
		/* [11] = */ 117,
		/* [12] = */ 84,
		/* [13] = */ 111,
		/* [14] = */ 112,
		/* [15] = */ 77,
		/* [16] = */ 97,
		/* [17] = */ 105,
		/* [18] = */ 110,
		/* [19] = */ 0
	};
	
  int iVar1;
  
  if (gameover_menu_top_ctrl.step == '\x01') {
    iVar1 = GameOverMenuTopTexLoadWait__Fv();
    if (iVar1 == 0) {
      return;
    }
    gameover_menu_top_ctrl.step = '\x02';
    return;
  }
  if (gameover_menu_top_ctrl.step < '\x02') {
    if (gameover_menu_top_ctrl.step == '\0') {
      GameOverMenuTopDispInit__Fv();
      gameover_menu_top_ctrl.step = '\x01';
      return;
    }
  }
  else {
    if (gameover_menu_top_ctrl.step == '\x02') {
      if (gameover_menu_top_disp.anim_step != '\x02') {
        return;
      }
      if (gameover_menu_top_ctrl.mode == '\0') {
        if (gameover_menu_top_disp.conf_anim_step != '\x04') {
          return;
        }
        GameOverMenuTopPad__Fv();
        return;
      }
      if (gameover_menu_top_ctrl.mode != '\x01') {
        SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
        PrintAssertReal("Error! %s");
        return;
      }
      if (gameover_menu_top_disp.conf_anim_step != '\x02') {
        return;
      }
      GameOverMenuTopConfPad__Fv();
      return;
    }
    if (gameover_menu_top_ctrl.step == '\x03') {
      if (gameover_menu_top_disp.anim_step != '\x04') {
        return;
      }
      if (gameover_menu_top_ctrl.csr != '\x01') {
        if (gameover_menu_top_ctrl.csr < '\x02') {
          if (gameover_menu_top_ctrl.csr == '\0') {
            SetNextGPhase__F14GPHASE_ID_ENUM(GID_GAMEOVER_MENU_LOAD);
            return;
          }
        }
        else if (gameover_menu_top_ctrl.csr == '\x02') {
          return;
        }
        SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
        PrintAssertReal("Error! %s");
        return;
      }
      SetNextGPhase__F14GPHASE_ID_ENUM(GID_GAMEOVER_MENU_ALBUM);
      return;
    }
  }
  SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
  PrintAssertReal("Error! %s");
  return;
}

static void GameOverMenuTopPad() {
  int iVar1;
  
  if (((pad[0].rpt & 0x1000U) == 0) && (iVar1 = GetPadAnalogRpt__Fi(0), iVar1 == 0)) {
    if (((pad[0].rpt & 0x4000U) == 0) && (iVar1 = GetPadAnalogRpt__Fi(1), iVar1 == 0)) {
      if (**paddat == 1) {
        SystemBankPlay__FiiiiP11_SND_3D_SETii(3,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
        gameover_menu_top_ctrl.mode = '\x01';
        gameover_menu_top_ctrl.conf_csr = '\x01';
        gameover_menu_top_disp.conf_anim_step = '\0';
        gameover_menu_top_disp.conf_anim_timer = '\0';
        return;
      }
      if (*paddat[1] != 1) {
        return;
      }
      SystemBankPlay__FiiiiP11_SND_3D_SETii(1,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
      gameover_menu_top_ctrl.csr = '\x02';
      return;
    }
    SystemBankPlay__FiiiiP11_SND_3D_SETii(0,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
    iVar1 = gameover_menu_top_ctrl.csr + 1;
  }
  else {
    SystemBankPlay__FiiiiP11_SND_3D_SETii(0,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
    iVar1 = gameover_menu_top_ctrl.csr + 2;
  }
  gameover_menu_top_ctrl.csr = (char)(iVar1 % 3);
  return;
}

static void GameOverMenuEndReq() {
  gameover_menu_top_ctrl.step = '\x03';
  GameOverMenuFadeOutReq__Fv();
  return;
}

static void GameOverMenuTopConfPad() {
  int iVar1;
  
  if (((((pad[0].rpt & 0x8000U) == 0) && (iVar1 = GetPadAnalogRpt__Fi(2), iVar1 == 0)) &&
      ((pad[0].rpt & 0x2000U) == 0)) && (iVar1 = GetPadAnalogRpt__Fi(3), iVar1 == 0)) {
    if (**paddat == 1) {
      SystemBankPlay__FiiiiP11_SND_3D_SETii(3,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
      if (gameover_menu_top_ctrl.conf_csr == '\0') {
        GameOverMenuTopExeDecision__Fv();
        return;
      }
    }
    else {
      if (*paddat[1] != 1) {
        return;
      }
      SystemBankPlay__FiiiiP11_SND_3D_SETii(1,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
    }
    gameover_menu_top_ctrl.mode = '\0';
    gameover_menu_top_disp.conf_anim_step = '\x03';
    gameover_menu_top_disp.conf_anim_timer = '\0';
  }
  else {
    SystemBankPlay__FiiiiP11_SND_3D_SETii(0,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
    gameover_menu_top_ctrl.conf_csr = gameover_menu_top_ctrl.conf_csr ^ 1;
  }
  return;
}

static void GameOverMenuTopExeDecision() {
	static char __FUNCTION__[27] = {
		/* [0] = */ 71,
		/* [1] = */ 97,
		/* [2] = */ 109,
		/* [3] = */ 101,
		/* [4] = */ 79,
		/* [5] = */ 118,
		/* [6] = */ 101,
		/* [7] = */ 114,
		/* [8] = */ 77,
		/* [9] = */ 101,
		/* [10] = */ 110,
		/* [11] = */ 117,
		/* [12] = */ 84,
		/* [13] = */ 111,
		/* [14] = */ 112,
		/* [15] = */ 69,
		/* [16] = */ 120,
		/* [17] = */ 101,
		/* [18] = */ 68,
		/* [19] = */ 101,
		/* [20] = */ 99,
		/* [21] = */ 105,
		/* [22] = */ 115,
		/* [23] = */ 105,
		/* [24] = */ 111,
		/* [25] = */ 110,
		/* [26] = */ 0
	};
	
  if (-1 < gameover_menu_top_ctrl.csr) {
    if (gameover_menu_top_ctrl.csr < '\x02') {
      gameover_menu_top_ctrl.step = '\x03';
      gameover_menu_top_disp.anim_step = '\x03';
      gameover_menu_top_disp.anim_timer = '\0';
      gameover_menu_top_disp.conf_anim_step = '\x03';
      gameover_menu_top_disp.conf_anim_timer = '\0';
      return;
    }
    if (gameover_menu_top_ctrl.csr == '\x02') {
      GameOverMenuEndReq__Fv();
      return;
    }
  }
  SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
  PrintAssertReal("Error! %s");
  return;
}

void GameOverMenuTopMemFree() {
  LiberateGameOverMenuTexMem__FPPv(&gameover_menu_tex_addr);
  return;
}

static void GameOverMenuTopDispInit() {
  gameover_menu_top_disp.conf_anim_step = '\x04';
  gameover_menu_top_disp.conf_anim_timer = '\0';
  gameover_menu_top_disp.anim_step = '\0';
  gameover_menu_top_disp.anim_timer = '\0';
  return;
}

void GameOverMenuTopDisp() {
	static int msg_id_tbl[3] = {
		/* [0] = */ 3,
		/* [1] = */ 4,
		/* [2] = */ 5
	};
	
  uchar uVar1;
  
  if (('\x01' < gameover_menu_top_ctrl.step) && (gameover_menu_top_disp.anim_step != '\x04')) {
    uVar1 = Zero2Anim2D_InOutAnimCtrl__FPcT0ss
                      (&gameover_menu_top_disp.anim_step,&gameover_menu_top_disp.anim_timer,10,5);
    SavePoint_MenuWinDisp__FiiUc(0,0,uVar1);
    PK2SendVram__FUiiii((uint)gameover_menu_tex_addr,-1,-1,0);
    GameOverMenuTopTitleDisp__FiiUc(0,0,uVar1);
    SavePointTopCaptionDisp__FiiUc(0,0,uVar1);
    GameOverMenuTopSelMsgDisp__FiiUc(0,0,uVar1);
    GameOverMenuTopCsrDisp__FiiUc(0,0,uVar1);
    if (gameover_menu_top_disp.conf_anim_step != '\x04') {
      uVar1 = Zero2Anim2D_InOutAnimCtrl__FPcT0ss
                        (&gameover_menu_top_disp.conf_anim_step,
                         &gameover_menu_top_disp.conf_anim_timer,10,5);
      SavePoint_MenuConfWinDisp__FiiiUc((int)gameover_menu_top_ctrl.conf_csr,0,0,uVar1);
      PrintMsg__Fiiiiiii(0x23,*(int *)(msg_id_tbl_985 + gameover_menu_top_ctrl.csr * 4),0x44,0x135,1
                         ,(int)(char)uVar1,0);
    }
  }
  return;
}

static void GameOverMenuTopTitleDisp(int off_x, int off_y, u_char alpha) {
	DISP_SPRT title_ds;
	int i;
	
  int iVar1;
  SPRT_DAT *d;
  float fVar2;
  DISP_SPRT title_ds;
  
  fVar2 = (float)off_x;
  iVar1 = 1;
  d = gameover_tex;
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

static void GameOverMenuTopSelMsgDisp(int off_x, int off_y, u_char alpha) {
	int i;
	static int msg_id_tbl[3] = {
		/* [0] = */ 0,
		/* [1] = */ 1,
		/* [2] = */ 2
	};
	
  int msg_id;
  int col_label;
  long lVar1;
  long lVar2;
  int y;
  int *piVar3;
  
  piVar3 = &msg_id_tbl_992;
  lVar1 = 0;
  y = off_y + 0x92;
  do {
    col_label = 7;
    msg_id = *piVar3;
    piVar3 = piVar3 + 1;
    lVar2 = (long)((int)lVar1 + 1);
    if (gameover_menu_top_ctrl.csr != lVar1) {
      col_label = 1;
    }
    PrintMsg_Arrange__Fiiiiiiiiii(0x23,msg_id,off_x + 0x140,y,col_label,(uint)alpha,0,0,0,2);
    lVar1 = lVar2;
    y = y + 0x1e;
  } while (lVar2 < 3);
  return;
}

static void GameOverMenuTopCsrDisp(int off_x, int off_y, u_char alpha) {
  DrawCmnSelCsr__FUiffUcfUc
            (0,(float)(off_x + 0xb8),(float)(gameover_menu_top_ctrl.csr * 0x1e + off_y + 0x8e),alpha
             ,272.0,'\x01');
  return;
}
