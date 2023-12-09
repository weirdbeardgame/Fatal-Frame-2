// STATUS: NOT STARTED

#include "menu_cmn.h"

typedef struct {
	char load_step;
	char anim_step;
	char anim_timer;
	int tex_label;
	void *data_addr;
} MENU_CROSS_FADE;

typedef struct {
	u_char dbuff_flg;
	void *data_addr_1;
	void *data_addr_2;
} MENU_DBUFF_CTRL;

static MENU_CROSS_FADE menu_cross_fade[2] = {
	/* [0] = */ {
		/* .load_step = */ 4,
		/* .anim_step = */ 4,
		/* .anim_timer = */ 0,
		/* .tex_label = */ -1,
		/* .data_addr = */ NULL
	},
	/* [1] = */ {
		/* .load_step = */ 4,
		/* .anim_step = */ 4,
		/* .anim_timer = */ 0,
		/* .tex_label = */ -1,
		/* .data_addr = */ NULL
	}
};

MENU_YES_NO_CTRL menu_yes_no_ctrl = {
	/* .csr = */ 0
};

static MENU_DBUFF_CTRL menu_dbuff_ctrl;

static void _fixed_array_assert(char *strType, size_t v0, size_t v1) {
	static char *str = 0x3bd310;
	
  g3ddbgAssert__FbPCce(false,str_849);
  return;
}

static void** void * * _fixed_array_verifyrange<void *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_assert__FPCcUiUi(s_void__003f2c70,_max,v);
  }
  return (void **)0x0;
}

static char** char * * _fixed_array_verifyrange<char *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_assert__FPCcUiUi(s_char__003f2c78,_max,v);
  }
  return (char **)0x0;
}

static unsigned int** unsigned int * * _fixed_array_verifyrange<unsigned int *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_assert__FPCcUiUi("unsigned int*",_max,v);
  }
  return (uint **)0x0;
}

void MenuYesNoCtrlInit(int csr) {
  menu_yes_no_ctrl.csr = (char)csr;
  return;
}

void MenuRefCtrlInit(MENU_REF_CTRL *ref_ctrl, int data_num) {
  ref_ctrl->data_num = data_num;
  ref_ctrl->disp_start_pos = 0;
  ref_ctrl->data_pos = 0;
  return;
}

int MenuRefMovePadLup(MENU_REF_CTRL *ref_ctrl, int *cursor, int disp_num, int disp_num_max) {
	int data_pos_back_up;
	
  int iVar1;
  int iVar2;
  
  iVar2 = *cursor;
  iVar1 = ref_ctrl->data_pos;
  *cursor = iVar2 + -1;
  if (iVar2 + -1 < 0) {
    *cursor = 0;
    iVar2 = ref_ctrl->disp_start_pos + -1;
    ref_ctrl->disp_start_pos = iVar2;
    if (iVar2 < 0) {
      if (disp_num == disp_num_max) {
        ref_ctrl->disp_start_pos = ref_ctrl->data_num - disp_num;
      }
      else {
        ref_ctrl->disp_start_pos = 0;
      }
      *cursor = disp_num + -1;
    }
    iVar2 = ref_ctrl->data_pos + -1;
    ref_ctrl->data_pos = iVar2;
    if (-1 < iVar2) goto LAB_001f1b0c;
    iVar2 = ref_ctrl->data_num + -1;
  }
  else {
    iVar2 = ref_ctrl->data_pos + -1;
    if (iVar2 < 0) {
      iVar2 = 0;
    }
  }
  ref_ctrl->data_pos = iVar2;
LAB_001f1b0c:
  return (int)(iVar1 != ref_ctrl->data_pos);
}

int MenuRefMovePadLdown(MENU_REF_CTRL *ref_ctrl, int *cursor, int disp_num, int disp_num_max) {
	int data_pos_back_up;
	
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *cursor;
  iVar1 = ref_ctrl->data_pos;
  *cursor = iVar3 + 1;
  if (disp_num <= iVar3 + 1) {
    *cursor = disp_num + -1;
    iVar3 = ref_ctrl->data_num;
    iVar2 = ref_ctrl->disp_start_pos + 1;
    ref_ctrl->disp_start_pos = iVar2;
    if (iVar2 <= iVar3 - disp_num_max) goto LAB_001f1b68;
    ref_ctrl->disp_start_pos = 0;
    *cursor = 0;
  }
  iVar3 = ref_ctrl->data_num;
LAB_001f1b68:
  iVar2 = ref_ctrl->data_pos + 1;
  ref_ctrl->data_pos = iVar2;
  if (iVar3 <= iVar2) {
    ref_ctrl->data_pos = 0;
  }
  return (int)(iVar1 != ref_ctrl->data_pos);
}

int MenuRefMovePageUp(MENU_REF_CTRL *ref_ctrl, int *cursor, int disp_num, int disp_num_max) {
	int data_pos_back_up;
	
  int iVar1;
  int iVar2;
  
  iVar1 = ref_ctrl->data_pos;
  iVar2 = iVar1 - disp_num_max;
  ref_ctrl->data_pos = iVar2;
  if (iVar2 < 1) {
    ref_ctrl->disp_start_pos = 0;
    *cursor = 0;
    ref_ctrl->data_pos = 0;
  }
  else {
    iVar2 = ref_ctrl->disp_start_pos - disp_num_max;
    ref_ctrl->disp_start_pos = iVar2;
    if (iVar2 < 0) {
      *cursor = *cursor + iVar2;
      ref_ctrl->disp_start_pos = 0;
    }
  }
  return (int)(iVar1 != ref_ctrl->data_pos);
}

int MenuRefMovePageDown(MENU_REF_CTRL *ref_ctrl, int *cursor, int disp_num, int disp_num_max) {
	int data_pos_back_up;
	
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = ref_ctrl->data_pos;
  iVar2 = ref_ctrl->data_num;
  iVar4 = iVar1 + disp_num_max;
  iVar3 = iVar2 - disp_num_max;
  ref_ctrl->data_pos = iVar4;
  if (iVar4 < iVar2) {
    iVar2 = ref_ctrl->disp_start_pos + disp_num_max;
    ref_ctrl->disp_start_pos = iVar2;
    if (iVar3 < iVar2) {
      ref_ctrl->disp_start_pos = iVar3;
      *cursor = iVar4 - iVar3;
    }
  }
  else {
    ref_ctrl->data_pos = iVar2 + -1;
    if (disp_num < disp_num_max) {
      ref_ctrl->disp_start_pos = 0;
    }
    else {
      ref_ctrl->disp_start_pos = iVar3;
    }
    *cursor = disp_num + -1;
  }
  return (int)(iVar1 != ref_ctrl->data_pos);
}

int MenuCmnConfirmPad() {
	int res;
	
  int no;
  
  if (**paddat == 1) {
    no = 3;
  }
  else {
    if (*paddat[1] != 1) {
      return 0;
    }
    no = 1;
  }
  SystemBankPlay__FiiiiP11_SND_3D_SETii(no,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
  return 1;
}

int MenuCmnYesNoPad() {
	int res;
	
  int iVar1;
  
  if (((((pad[0].rpt & 0x8000U) == 0) && (iVar1 = GetPadAnalogRpt__Fi(2), iVar1 == 0)) &&
      ((pad[0].rpt & 0x2000U) == 0)) && (iVar1 = GetPadAnalogRpt__Fi(3), iVar1 == 0)) {
    if (**paddat == 1) {
      SystemBankPlay__FiiiiP11_SND_3D_SETii(3,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
      iVar1 = 1;
      if (menu_yes_no_ctrl.csr != '\0') {
        iVar1 = 2;
      }
    }
    else if (*paddat[1] == 1) {
      SystemBankPlay__FiiiiP11_SND_3D_SETii(1,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
      iVar1 = 2;
    }
    else {
      iVar1 = 0;
    }
  }
  else {
    SystemBankPlay__FiiiiP11_SND_3D_SETii(0,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
    menu_yes_no_ctrl.csr = menu_yes_no_ctrl.csr ^ 1;
    iVar1 = 0;
  }
  return iVar1;
}

int MenuLoadWait() {
  int iVar1;
  
  iVar1 = IsLoadEndAll__Fv();
  return (int)(iVar1 != 0);
}

void MenuCrossFadeInit() {
	int i;
	
  MENU_CROSS_FADE *pMVar1;
  int buff_label;
  
  pMVar1 = menu_cross_fade;
  buff_label = 0;
  do {
    pMVar1->load_step = '\x04';
    pMVar1->anim_step = '\x04';
    pMVar1->anim_timer = '\0';
    pMVar1->tex_label = -1;
    if (pMVar1->data_addr != (void *)0x0) {
      LiberateMenuCrossFadeTexMem__Fi(buff_label);
      pMVar1->data_addr = (void *)0x0;
    }
    buff_label = buff_label + 1;
    pMVar1 = pMVar1 + 1;
  } while (buff_label < 2);
  return;
}

static void GetMenuCrossFadeMem(int buff_label, int data_label) {
  uint size;
  void *pvVar1;
  void **ppvVar2;
  
  ppvVar2 = &menu_cross_fade[buff_label].data_addr;
  if ((*ppvVar2 == (void *)0x0) ||
     (LiberateMenuCrossFadeTexMem__Fi(buff_label), *ppvVar2 == (void *)0x0)) {
    size = GetFileSize(data_label);
    pvVar1 = mem_utilGetMem__Fi(size);
    *ppvVar2 = pvVar1;
  }
  return;
}

static void MenuCrossFadeTexLoadReq(int buff_label, int data_label) {
  FileLoadReqEE(data_label,menu_cross_fade[buff_label].data_addr,2,(undefined1 *)0x0,(void *)0x0);
  menu_cross_fade[buff_label].tex_label = data_label;
  return;
}

static int MenuCrossFadeTexLoadWait(int buff_label) {
  int iVar1;
  
  iVar1 = FileLoadIsEnd2(menu_cross_fade[buff_label].tex_label,menu_cross_fade[buff_label].data_addr
                        );
  return (int)(iVar1 != 0);
}

void MenuCmnCrossFade() {
	int i;
	
  char cVar1;
  int iVar2;
  MENU_CROSS_FADE *pMVar3;
  int buff_label;
  
  pMVar3 = menu_cross_fade;
  buff_label = 0;
  do {
    cVar1 = pMVar3->load_step;
    if (cVar1 == '\0') {
      pMVar3->anim_step = '\0';
      pMVar3->anim_timer = '\0';
      if (pMVar3->data_addr != (void *)0x0) {
        LiberateMenuCrossFadeTexMem__Fi(buff_label);
      }
      pMVar3->load_step = '\x01';
    }
    else if (cVar1 == '\x01') {
      GetMenuCrossFadeMem__Fii(buff_label,pMVar3->tex_label);
      pMVar3->load_step = '\x02';
    }
    else if (cVar1 == '\x02') {
      MenuCrossFadeTexLoadReq__Fii(buff_label,pMVar3->tex_label);
      pMVar3->load_step = '\x03';
    }
    else if ((cVar1 == '\x03') && (iVar2 = MenuCrossFadeTexLoadWait__Fi(buff_label), iVar2 != 0)) {
      pMVar3->load_step = '\x04';
    }
    buff_label = buff_label + 1;
    pMVar3 = pMVar3 + 1;
  } while (buff_label < 2);
  return;
}

void MenuCrossFadeInStart(int buff_label, int data_label) {
	static char __FUNCTION__[21] = {
		/* [0] = */ 77,
		/* [1] = */ 101,
		/* [2] = */ 110,
		/* [3] = */ 117,
		/* [4] = */ 67,
		/* [5] = */ 114,
		/* [6] = */ 111,
		/* [7] = */ 115,
		/* [8] = */ 115,
		/* [9] = */ 70,
		/* [10] = */ 97,
		/* [11] = */ 100,
		/* [12] = */ 101,
		/* [13] = */ 73,
		/* [14] = */ 110,
		/* [15] = */ 83,
		/* [16] = */ 116,
		/* [17] = */ 97,
		/* [18] = */ 114,
		/* [19] = */ 116,
		/* [20] = */ 0
	};
	
  if (1 < (uint)buff_label) {
    SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
    PrintAssertReal("Error! MenuCrossFadeInStart buff_label %d");
  }
  if (menu_cross_fade[buff_label].data_addr != (void *)0x0) {
    LiberateMenuCrossFadeTexMem__Fi(buff_label);
  }
  menu_cross_fade[buff_label].anim_step = '\0';
  menu_cross_fade[buff_label].load_step = '\0';
  menu_cross_fade[buff_label].tex_label = data_label;
  return;
}

void MenuCrossFadeOutStart(int buff_label) {
	static char __FUNCTION__[22] = {
		/* [0] = */ 77,
		/* [1] = */ 101,
		/* [2] = */ 110,
		/* [3] = */ 117,
		/* [4] = */ 67,
		/* [5] = */ 114,
		/* [6] = */ 111,
		/* [7] = */ 115,
		/* [8] = */ 115,
		/* [9] = */ 70,
		/* [10] = */ 97,
		/* [11] = */ 100,
		/* [12] = */ 101,
		/* [13] = */ 79,
		/* [14] = */ 117,
		/* [15] = */ 116,
		/* [16] = */ 83,
		/* [17] = */ 116,
		/* [18] = */ 97,
		/* [19] = */ 114,
		/* [20] = */ 116,
		/* [21] = */ 0
	};
	
  if (1 < (uint)buff_label) {
    SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
    PrintAssertReal("Error! MenuCrossFadeOutStart buff_label %d");
  }
  if (menu_cross_fade[buff_label].anim_step != '\x04') {
    menu_cross_fade[buff_label].anim_timer = '\0';
    menu_cross_fade[buff_label].anim_step = '\x03';
  }
  return;
}

void LiberateAllMenuCrossFadeTexMem() {
  LiberateMenuCrossFadeTexMem__Fi(0);
  LiberateMenuCrossFadeTexMem__Fi(1);
  return;
}

void LiberateMenuCrossFadeTexMem(int buff_label) {
	static char __FUNCTION__[28] = {
		/* [0] = */ 76,
		/* [1] = */ 105,
		/* [2] = */ 98,
		/* [3] = */ 101,
		/* [4] = */ 114,
		/* [5] = */ 97,
		/* [6] = */ 116,
		/* [7] = */ 101,
		/* [8] = */ 77,
		/* [9] = */ 101,
		/* [10] = */ 110,
		/* [11] = */ 117,
		/* [12] = */ 67,
		/* [13] = */ 114,
		/* [14] = */ 111,
		/* [15] = */ 115,
		/* [16] = */ 115,
		/* [17] = */ 70,
		/* [18] = */ 97,
		/* [19] = */ 100,
		/* [20] = */ 101,
		/* [21] = */ 84,
		/* [22] = */ 101,
		/* [23] = */ 120,
		/* [24] = */ 77,
		/* [25] = */ 101,
		/* [26] = */ 109,
		/* [27] = */ 0
	};
	
  void *adrs;
  
  if (1 < (uint)buff_label) {
    SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
    PrintAssertReal("Error! LiberateMenuCrossFadeTexMem buff_label %d");
  }
  MenuCrossFadeTexLoadCancel__Fi(buff_label);
  adrs = menu_cross_fade[buff_label].data_addr;
  if (adrs != (void *)0x0) {
    mem_utilFreeMem__FPv(adrs);
    menu_cross_fade[buff_label].data_addr = (void *)0x0;
    menu_cross_fade[buff_label].tex_label = -1;
  }
  menu_cross_fade[buff_label].anim_step = '\x04';
  menu_cross_fade[buff_label].load_step = '\x04';
  return;
}

void MenuCrossFadeTexLoadCancel(int buff_label) {
	static char __FUNCTION__[27] = {
		/* [0] = */ 77,
		/* [1] = */ 101,
		/* [2] = */ 110,
		/* [3] = */ 117,
		/* [4] = */ 67,
		/* [5] = */ 114,
		/* [6] = */ 111,
		/* [7] = */ 115,
		/* [8] = */ 115,
		/* [9] = */ 70,
		/* [10] = */ 97,
		/* [11] = */ 100,
		/* [12] = */ 101,
		/* [13] = */ 84,
		/* [14] = */ 101,
		/* [15] = */ 120,
		/* [16] = */ 76,
		/* [17] = */ 111,
		/* [18] = */ 97,
		/* [19] = */ 100,
		/* [20] = */ 67,
		/* [21] = */ 97,
		/* [22] = */ 110,
		/* [23] = */ 99,
		/* [24] = */ 101,
		/* [25] = */ 108,
		/* [26] = */ 0
	};
	
  int iVar1;
  
  if (1 < (uint)buff_label) {
    SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
    PrintAssertReal("Error! MenuCrossFadeTexLoadCancel buff_label %d");
  }
  if (((menu_cross_fade[buff_label].data_addr != (void *)0x0) &&
      (menu_cross_fade[buff_label].tex_label != -1)) &&
     (iVar1 = MenuCrossFadeTexLoadWait__Fi(buff_label), iVar1 == 0)) {
    FileLoadCancel2(menu_cross_fade[buff_label].tex_label,menu_cross_fade[buff_label].data_addr,
                    (undefined1 *)0x0,(void *)0x0);
  }
  menu_cross_fade[buff_label].anim_step = '\x04';
  menu_cross_fade[buff_label].load_step = '\x04';
  menu_cross_fade[buff_label].tex_label = -1;
  return;
}

void GetMenuCrossFadeAlpha(u_char *fade_alpha) {
	static char __FUNCTION__[22] = {
		/* [0] = */ 71,
		/* [1] = */ 101,
		/* [2] = */ 116,
		/* [3] = */ 77,
		/* [4] = */ 101,
		/* [5] = */ 110,
		/* [6] = */ 117,
		/* [7] = */ 67,
		/* [8] = */ 114,
		/* [9] = */ 111,
		/* [10] = */ 115,
		/* [11] = */ 115,
		/* [12] = */ 70,
		/* [13] = */ 97,
		/* [14] = */ 100,
		/* [15] = */ 101,
		/* [16] = */ 65,
		/* [17] = */ 108,
		/* [18] = */ 112,
		/* [19] = */ 104,
		/* [20] = */ 97,
		/* [21] = */ 0
	};
	int i;
	static ALPHA_ANIM_TBL cross_fade_in[2] = {
		/* [0] = */ {
			/* .start_alpha = */ 0,
			/* .end_alpha = */ 128,
			/* .start_time = */ 0,
			/* .end_time = */ 20
		},
		/* [1] = */ {
			/* .start_alpha = */ -1,
			/* .end_alpha = */ -1,
			/* .start_time = */ -1,
			/* .end_time = */ -1
		}
	};
	static ALPHA_ANIM_TBL cross_fade_out[2] = {
		/* [0] = */ {
			/* .start_alpha = */ 128,
			/* .end_alpha = */ 0,
			/* .start_time = */ 0,
			/* .end_time = */ 20
		},
		/* [1] = */ {
			/* .start_alpha = */ -1,
			/* .end_alpha = */ -1,
			/* .start_time = */ -1,
			/* .end_time = */ -1
		}
	};
	
  uchar uVar1;
  char cVar2;
  int iVar3;
  MENU_CROSS_FADE *pMVar4;
  int buff_label;
  
  pMVar4 = menu_cross_fade;
  buff_label = 0;
  fade_alpha[1] = '\0';
  *fade_alpha = '\0';
  do {
    if (pMVar4->load_step == '\x04') {
      if (pMVar4->anim_step == '\x04') {
        *fade_alpha = '\0';
        if (pMVar4->data_addr != (void *)0x0) {
          LiberateMenuCrossFadeTexMem__Fi(buff_label);
        }
      }
      else {
        iVar3 = (uint)(byte)pMVar4->anim_step << 0x18;
        if (pMVar4->anim_step == '\0') {
          pMVar4->anim_timer = '\0';
          pMVar4->anim_step = '\x01';
          iVar3 = 0x1000000;
        }
        iVar3 = iVar3 >> 0x18;
        if (iVar3 == 2) {
          *fade_alpha = 0x80;
        }
        else if (iVar3 < 3) {
          if (iVar3 == 1) {
            uVar1 = Anim2D_CalcNowAlpha__FPC14ALPHA_ANIM_TBLi
                              ((ALPHA_ANIM_TBL *)cross_fade_in_1006,(int)pMVar4->anim_timer);
            *fade_alpha = uVar1;
            cVar2 = pMVar4->anim_timer + '\x01';
            pMVar4->anim_timer = cVar2;
            if ('\x13' < cVar2) {
              pMVar4->anim_step = '\x02';
              pMVar4->anim_timer = '\0';
            }
          }
          else {
LAB_001f2548:
            SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
            PrintAssertReal("Error! GetMenuCrossFadeAlpha");
          }
        }
        else {
          if (iVar3 != 3) goto LAB_001f2548;
          uVar1 = Anim2D_CalcNowAlpha__FPC14ALPHA_ANIM_TBLi
                            ((ALPHA_ANIM_TBL *)cross_fade_out_1007,(int)pMVar4->anim_timer);
          *fade_alpha = uVar1;
          cVar2 = pMVar4->anim_timer + '\x01';
          pMVar4->anim_timer = cVar2;
          if ('\x13' < cVar2) {
            pMVar4->anim_step = '\x04';
          }
        }
      }
    }
    else {
      *fade_alpha = '\0';
    }
    buff_label = buff_label + 1;
    fade_alpha = fade_alpha + 1;
    pMVar4 = pMVar4 + 1;
    if (1 < buff_label) {
      return;
    }
  } while( true );
}

void* GetCrossFadeDataAddr(int buff_label) {
	static char __FUNCTION__[21] = {
		/* [0] = */ 71,
		/* [1] = */ 101,
		/* [2] = */ 116,
		/* [3] = */ 67,
		/* [4] = */ 114,
		/* [5] = */ 111,
		/* [6] = */ 115,
		/* [7] = */ 115,
		/* [8] = */ 70,
		/* [9] = */ 97,
		/* [10] = */ 100,
		/* [11] = */ 101,
		/* [12] = */ 68,
		/* [13] = */ 97,
		/* [14] = */ 116,
		/* [15] = */ 97,
		/* [16] = */ 65,
		/* [17] = */ 100,
		/* [18] = */ 100,
		/* [19] = */ 114,
		/* [20] = */ 0
	};
	
  if (1 < (uint)buff_label) {
    SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
    PrintAssertReal("Error! GetCrossFadeDataAddr buff_label %d");
  }
  return menu_cross_fade[buff_label].data_addr;
}

int CheckCrossFadeDisp(int buff_label) {
	static char __FUNCTION__[19] = {
		/* [0] = */ 67,
		/* [1] = */ 104,
		/* [2] = */ 101,
		/* [3] = */ 99,
		/* [4] = */ 107,
		/* [5] = */ 67,
		/* [6] = */ 114,
		/* [7] = */ 111,
		/* [8] = */ 115,
		/* [9] = */ 115,
		/* [10] = */ 70,
		/* [11] = */ 97,
		/* [12] = */ 100,
		/* [13] = */ 101,
		/* [14] = */ 68,
		/* [15] = */ 105,
		/* [16] = */ 115,
		/* [17] = */ 112,
		/* [18] = */ 0
	};
	int res;
	
  uint uVar1;
  
  if (1 < (uint)buff_label) {
    SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
    PrintAssertReal("Error! CheckCrossFadeDisp buff_label %d");
  }
  uVar1 = 0;
  if (((menu_cross_fade[buff_label].data_addr != (void *)0x0) &&
      (menu_cross_fade[buff_label].load_step == '\x04')) &&
     (menu_cross_fade[buff_label].anim_step != '\0')) {
    uVar1 = (uint)(menu_cross_fade[buff_label].anim_step != '\x04');
  }
  return uVar1;
}

void MenuDBuffCtrlInit() {
  MenuDBuffAllRelease__Fv();
  menu_dbuff_ctrl.data_addr_2 = (void *)0x0;
  menu_dbuff_ctrl.dbuff_flg = '\0';
  menu_dbuff_ctrl.data_addr_1 = (void *)0x0;
  return;
}

void MenuDBuffChange() {
  menu_dbuff_ctrl.dbuff_flg = menu_dbuff_ctrl.dbuff_flg ^ 1;
  return;
}

void MenuDBuffLoadReq(int load_file) {
	static char __FUNCTION__[17] = {
		/* [0] = */ 77,
		/* [1] = */ 101,
		/* [2] = */ 110,
		/* [3] = */ 117,
		/* [4] = */ 68,
		/* [5] = */ 66,
		/* [6] = */ 117,
		/* [7] = */ 102,
		/* [8] = */ 102,
		/* [9] = */ 76,
		/* [10] = */ 111,
		/* [11] = */ 97,
		/* [12] = */ 100,
		/* [13] = */ 82,
		/* [14] = */ 101,
		/* [15] = */ 113,
		/* [16] = */ 0
	};
	
  uint uVar1;
  
  if (menu_dbuff_ctrl.dbuff_flg != '\0') {
    if (menu_dbuff_ctrl.data_addr_2 == (void *)0x0) {
      uVar1 = GetFileSize(load_file);
      menu_dbuff_ctrl.data_addr_2 = mem_utilGetMem__Fi(uVar1);
    }
    else {
      SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
      PrintAssertReal("Error!! MenuDBuffLoadReq()");
    }
    LoadReq__FiUi(load_file,(uint)menu_dbuff_ctrl.data_addr_2);
    return;
  }
  if (menu_dbuff_ctrl.data_addr_1 == (void *)0x0) {
    uVar1 = GetFileSize(load_file);
    menu_dbuff_ctrl.data_addr_1 = mem_utilGetMem__Fi(uVar1);
  }
  else {
    SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
    PrintAssertReal("Error!! MenuDBuffLoadReq()");
  }
  LoadReq__FiUi(load_file,(uint)menu_dbuff_ctrl.data_addr_1);
  return;
}

void MenuDBuffRelease(u_char flg) {
  if (flg == '\0') {
    if (menu_dbuff_ctrl.data_addr_1 != (void *)0x0) {
      mem_utilFreeMem__FPv(menu_dbuff_ctrl.data_addr_1);
      menu_dbuff_ctrl.data_addr_1 = (void *)0x0;
    }
  }
  else if (menu_dbuff_ctrl.data_addr_2 != (void *)0x0) {
    mem_utilFreeMem__FPv(menu_dbuff_ctrl.data_addr_2);
    menu_dbuff_ctrl.data_addr_2 = (void *)0x0;
  }
  return;
}

void MenuDBuffAllRelease() {
  MenuDBuffRelease__FUc('\0');
  MenuDBuffRelease__FUc('\x01');
  return;
}

u_char GetMenuDBuffFlg() {
  return menu_dbuff_ctrl.dbuff_flg;
}

u_int* GetMenuDBuffAddr(u_char flg) {
	u_int *addr;
	
  if (flg == '\0') {
    return (uint *)menu_dbuff_ctrl.data_addr_1;
  }
  return (uint *)menu_dbuff_ctrl.data_addr_2;
}

void MenuTim2SendVram(u_int *tim2_addr, int tbp, int cbp) {
  TIM2_PICTUREHEADER *pTVar1;
  
  if (tim2_addr != (uint *)0x0) {
    pTVar1 = Tim2GetPictureHeader__FPvi(tim2_addr,0);
    pTVar1->GsTex0 = (long)tbp | 0x29328000U | (long)cbp << 0x25 | 0x2000000640000000;
    MakeTim2Direct__FPUiii(tim2_addr,tbp,0);
    MakeClutDirect__FPUiii(tim2_addr,cbp,0);
  }
  return;
}

void MenuInOutAnimCtrl(char *anim_step, char *anim_timer, u_char *alpha) {
  uchar uVar1;
  
  uVar1 = Zero2Anim2D_InOutAnimCtrl__FPcT0ss(anim_step,anim_timer,10,5);
  *alpha = uVar1;
  return;
}

void MenuCsrAnimCtrl(char *timer, u_char *rgb) {
	static RGB_ANIM_TBL rgb_tbl[4] = {
		/* [0] = */ {
			/* .start_rgb = */ 64,
			/* .end_rgb = */ 128,
			/* .start_time = */ 0,
			/* .end_time = */ 15
		},
		/* [1] = */ {
			/* .start_rgb = */ 128,
			/* .end_rgb = */ 128,
			/* .start_time = */ 15,
			/* .end_time = */ 30
		},
		/* [2] = */ {
			/* .start_rgb = */ 128,
			/* .end_rgb = */ 64,
			/* .start_time = */ 30,
			/* .end_time = */ 45
		},
		/* [3] = */ {
			/* .start_rgb = */ -1,
			/* .end_rgb = */ -1,
			/* .start_time = */ -1,
			/* .end_time = */ -1
		}
	};
	
  char cVar1;
  uchar uVar2;
  
  uVar2 = Anim2D_CalcNowRGB__FPC12RGB_ANIM_TBLi((RGB_ANIM_TBL *)rgb_tbl_1044,(int)*timer);
  *rgb = uVar2;
  cVar1 = *timer;
  *timer = cVar1 + '\x01';
  if (',' < (char)(cVar1 + '\x01')) {
    *timer = '\0';
  }
  return;
}
