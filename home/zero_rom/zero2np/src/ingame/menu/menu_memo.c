// STATUS: NOT STARTED

#include "menu_memo.h"

typedef struct {
	u_char mode;
	u_char next_mode;
	u_char sub_step;
	MENU_REF_CTRL ref_ctrl;
} MENU_MEMO_CTRL;

typedef struct {
	char anim_step;
	char anim_timer;
	u_char rgb;
	char scroll_timer;
	char sub_anim_step;
	char sub_anim_timer;
} MENU_MEMO_DISP;

typedef struct {
	int memo_label;
	u_char state;
	u_char msg_step;
} DISP_MEMO_DATA;

struct fixed_array_base<DISP_MEMO_DATA,20,DISP_MEMO_DATA[20]> {
protected:
	DISP_MEMO_DATA m_aData[20];
	
public:
	fixed_array_base<DISP_MEMO_DATA,20,DISP_MEMO_DATA[20]>& operator=();
	fixed_array_base();
protected:
	fixed_array_base();
public:
	DISP_MEMO_DATA& operator[]();
	DISP_MEMO_DATA& operator[]();
	DISP_MEMO_DATA* data();
	DISP_MEMO_DATA* begin();
	DISP_MEMO_DATA* end();
	void fill();
	size_t size();
	bool empty();
};

struct fixed_array<DISP_MEMO_DATA,20> : fixed_array_base<DISP_MEMO_DATA,20,DISP_MEMO_DATA[20]> {
};

static void *menu_memo_tex_addr = NULL;

static void (*menu_memo_pad_func[3])(/* parameters unknown */) = {
	/* [0] = */ MenuMemoPad,
	/* [1] = */ MenuMemoContentDispPad,
	/* [2] = */ MenuMemoNotHavePad
};

static void (*menu_memo_disp_func[3])(/* parameters unknown */) = {
	/* [0] = */ MenuMemoSelDisp,
	/* [1] = */ MenuMemoContentDisp,
	/* [2] = */ MenuMemoNotHaveDisp
};

static fixed_array<DISP_MEMO_DATA,20> disp_memo_data;
unsigned char DISP_MEMO_DATA type_info node[8];
static MENU_MEMO_CTRL menu_memo_ctrl;
static MENU_MEMO_DISP menu_memo_disp;

static void _fixed_array_assert(char *strType, size_t v0, size_t v1) {
	static char *str = 0x3be1c8;
	
  g3ddbgAssert__FbPCce(false,str_849);
  return (type_info *)v;
}

static void** void * * _fixed_array_verifyrange<void *>(size_t v, size_t _max) {
  if (_max <= v) {
    __tf14DISP_MEMO_DATA(0x3f2e68,_max);
  }
  return (void **)0x0;
}

static char** char * * _fixed_array_verifyrange<char *>(size_t v, size_t _max) {
  if (_max <= v) {
    __tf14DISP_MEMO_DATA(0x3f2e70,_max);
  }
  return (char **)0x0;
}

static unsigned int** unsigned int * * _fixed_array_verifyrange<unsigned int *>(size_t v, size_t _max) {
  if (_max <= v) {
    __tf14DISP_MEMO_DATA(0x3be210,_max);
  }
  return (uint **)0x0;
}

static void MenuMemoInit() {
  menu_wrk.cursor = 0;
  MenuMemoCtrlInit__Fv();
  if (menu_memo_tex_addr == (void *)0x0) {
    printf("<<<<<<<<<WARNING FILE[%s] LINE[%d]>>>>>>>>>>\n");
    PrintWarningReal("Menu Memo Tex Back reading failure\n");
    MenuMemoTexLoadReq__Fv();
  }
  return;
}

static void MenuMemoCtrlInit() {
  int data_num;
  
  menu_memo_ctrl.sub_step = '\x02';
  menu_memo_ctrl.mode = '\0';
  menu_memo_ctrl.next_mode = '\0';
  data_num = GetMemoHaveNum__Fv();
  MenuRefCtrlInit__FP13MENU_REF_CTRLi(&menu_memo_ctrl.ref_ctrl,data_num);
  return;
}

void GetMenuMemoTexMem() {
  uchar uVar1;
  uint size;
  
  if (menu_memo_tex_addr != (void *)0x0) {
    LiberateMenuMemoTexMem__Fv();
  }
  if (menu_memo_tex_addr == (void *)0x0) {
    uVar1 = GetLanguage__Fv();
    size = GetFileSize((char)uVar1 + 0x4c);
    menu_memo_tex_addr = mem_utilGetMem__Fi(size);
  }
  return;
}

void MenuMemoTexLoadReq() {
  uchar uVar1;
  
  if (menu_memo_tex_addr == (void *)0x0) {
    GetMenuMemoTexMem__Fv();
  }
  uVar1 = GetLanguage__Fv();
  FileLoadReqEE((char)uVar1 + 0x4c,menu_memo_tex_addr,2,(undefined1 *)0x0,(void *)0x0);
  return;
}

static int MenuMemoTexLoadWait() {
  uchar uVar1;
  int iVar2;
  
  uVar1 = GetLanguage__Fv();
  iVar2 = FileLoadIsEnd2((char)uVar1 + 0x4c,menu_memo_tex_addr);
  return (int)(iVar2 != 0);
}

static void MenuMemoSetDispData() {
	int i;
	int count;
	int state;
	
  fixed_array<DISP_MEMO_DATA,20> *pfVar1;
  int iVar2;
  int memo_label;
  int iVar3;
  
  pfVar1 = &disp_memo_data;
  memo_label = 0;
  iVar3 = 0;
  memset(&disp_memo_data,0,0xa0);
  do {
    iVar2 = GetMemoState__Fi(memo_label);
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* end of inlined section */
    if (iVar2 != 0) {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
      _fixed_array_verifyrange__H1Z14DISP_MEMO_DATA_UiUi_PX01(iVar3,0x14);
      ((fixed_array_base<DISP_MEMO_DATA,20,DISP_MEMO_DATA[20]> *)
      &((DISP_MEMO_DATA *)pfVar1)->memo_label)->m_aData[0].memo_label = memo_label;
      _fixed_array_verifyrange__H1Z14DISP_MEMO_DATA_UiUi_PX01(iVar3,0x14);
      ((DISP_MEMO_DATA *)pfVar1)->state = (uchar)iVar2;
                    /* end of inlined section */
      iVar2 = GetMemoMsgStep__Fi(memo_label);
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
      _fixed_array_verifyrange__H1Z14DISP_MEMO_DATA_UiUi_PX01(iVar3,0x14);
      ((DISP_MEMO_DATA *)pfVar1)->msg_step = (uchar)iVar2;
                    /* end of inlined section */
      iVar3 = iVar3 + 1;
      pfVar1 = (fixed_array<DISP_MEMO_DATA,20> *)((int)pfVar1 + 8);
    }
    memo_label = memo_label + 1;
  } while (memo_label < 0x14);
  return;
}

void MenuMemo() {
  int iVar1;
  
  if (menu_wrk.step == '\0') {
    MenuMemoInit__Fv();
    MenuMemoSetDispData__Fv();
    menu_wrk.step = '\x01';
  }
  if ((menu_wrk.step == '\x01') && (iVar1 = MenuMemoTexLoadWait__Fv(), iVar1 != 0)) {
    MenuMemoDispInit__Fv();
    menu_wrk.step = '\x02';
    menu_memo_ctrl.mode = '\0';
    if (menu_memo_ctrl.ref_ctrl.data_num < 1) {
      menu_memo_ctrl.next_mode = '\x02';
      menu_memo_ctrl.mode = '\x02';
    }
  }
  if (menu_wrk.step == '\x02') {
    if (menu_memo_ctrl.sub_step == '\x02') {
      if ((code *)menu_memo_pad_func[menu_memo_ctrl.mode] != (code *)0x0) {
        (*(code *)menu_memo_pad_func[menu_memo_ctrl.mode])();
      }
    }
    else if ((menu_memo_ctrl.sub_step == '\x03') && (menu_memo_disp.sub_anim_step == '\x04')) {
      menu_memo_ctrl.sub_step = menu_wrk.step;
      menu_memo_disp.sub_anim_timer = '\0';
      menu_memo_ctrl.mode = menu_memo_ctrl.next_mode;
      menu_memo_disp.sub_anim_step = '\0';
    }
  }
  if ((menu_wrk.step == '\x03') && (menu_memo_disp.anim_step == '\x04')) {
    LiberateMenuMemoTexMem__Fv();
    SetNextMenuStep__Fi(8);
  }
  return;
}

static void MenuMemoModeMoveReq(u_char next_mode) {
  menu_memo_ctrl.next_mode = next_mode;
  menu_memo_ctrl.sub_step = '\x03';
  menu_memo_disp.sub_anim_step = '\x03';
  menu_memo_disp.sub_anim_timer = '\0';
  return;
}

static void MenuMemoPad() {
	int disp_num;
	int memo_label;
	
  int iVar1;
  int iVar2;
  int disp_num;
  
  iVar2 = menu_memo_ctrl.ref_ctrl.data_pos;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  disp_num = menu_memo_ctrl.ref_ctrl.data_num;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  if (8 < menu_memo_ctrl.ref_ctrl.data_num) {
    disp_num = 8;
  }
  _fixed_array_verifyrange__H1Z14DISP_MEMO_DATA_UiUi_PX01(menu_memo_ctrl.ref_ctrl.data_pos,0x14);
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  iVar2 = disp_memo_data.field0_0x0.m_aData[iVar2].memo_label;
                    /* end of inlined section */
  if (((pad[0].rpt & 0x1000U) == 0) && (iVar1 = GetPadAnalogRpt__Fi(0), iVar1 == 0)) {
    if (((pad[0].rpt & 0x4000U) == 0) && (iVar1 = GetPadAnalogRpt__Fi(1), iVar1 == 0)) {
      if (**paddat == 1) {
        SystemBankPlay__FiiiiP11_SND_3D_SETii(3,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
        SetMsgFirstPage__Fv();
        ReadMemo__Fi(iVar2);
        MenuMemoModeMoveReq__FUc('\x01');
        return;
      }
      if (*paddat[1] == 1) {
        SystemBankPlay__FiiiiP11_SND_3D_SETii(1,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
        SetMsgFirstPage__Fv();
        MenuMemoOutReq__Fv();
        return;
      }
      if ((pad[0].one & 4U) == 0) {
        if (((pad[0].one & 8U) != 0) &&
           (iVar2 = MenuRefMovePageDown__FP13MENU_REF_CTRLPiii
                              (&menu_memo_ctrl.ref_ctrl,&menu_wrk.cursor,disp_num,8), iVar2 != 0)) {
          SystemBankPlay__FiiiiP11_SND_3D_SETii(0,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
        }
      }
      else {
        iVar2 = MenuRefMovePageUp__FP13MENU_REF_CTRLPiii
                          (&menu_memo_ctrl.ref_ctrl,&menu_wrk.cursor,disp_num,8);
        if (iVar2 != 0) {
          SystemBankPlay__FiiiiP11_SND_3D_SETii(0,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
          return;
        }
      }
    }
    else {
      iVar2 = MenuRefMovePadLdown__FP13MENU_REF_CTRLPiii
                        (&menu_memo_ctrl.ref_ctrl,&menu_wrk.cursor,disp_num,8);
      if (iVar2 != 0) {
        SystemBankPlay__FiiiiP11_SND_3D_SETii(0,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
        return;
      }
    }
  }
  else {
    iVar2 = MenuRefMovePadLup__FP13MENU_REF_CTRLPiii
                      (&menu_memo_ctrl.ref_ctrl,&menu_wrk.cursor,disp_num,8);
    if (iVar2 != 0) {
      SystemBankPlay__FiiiiP11_SND_3D_SETii(0,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
      return;
    }
  }
  return;
}

static void MenuMemoOutReq() {
  menu_memo_disp.sub_anim_step = '\x03';
  menu_wrk.step = '\x03';
  menu_memo_disp.sub_anim_timer = '\0';
  menu_memo_disp.anim_step = '\x03';
  menu_memo_disp.anim_timer = '\0';
  return;
}

static void MenuMemoContentDispPad() {
	int memo_label;
	int msg_id_data;
	int page_num;
	
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = menu_memo_ctrl.ref_ctrl.data_pos;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  _fixed_array_verifyrange__H1Z14DISP_MEMO_DATA_UiUi_PX01(menu_memo_ctrl.ref_ctrl.data_pos,0x14);
  iVar2 = disp_memo_data.field0_0x0.m_aData[iVar2].memo_label;
                    /* end of inlined section */
  iVar1 = GetMemoMsgStep__Fi(iVar2);
  iVar1 = iVar2 * 6 + iVar1 * 3 + 1;
  iVar2 = GetNowMsgPageNum__Fv();
  if (((**paddat == 1) || ((pad[0]._384_8_ & 0x200800000000) != 0)) ||
     (iVar3 = GetPadAnalogRpt__Fi(3), iVar3 != 0)) {
    iVar3 = GetNowMsgPageNum__Fv();
    iVar1 = GetMsgPageNum__Fii(0x30,iVar1);
    if (iVar3 == iVar1 + -1) {
      SetMsgPage__Fc('\0');
    }
    else {
      MesSetNextPage__Fv();
    }
    iVar1 = GetNowMsgPageNum__Fv();
    if (iVar2 != iVar1) {
      SystemBankPlay__FiiiiP11_SND_3D_SETii(6,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
      return;
    }
  }
  else if (((pad[0]._384_8_ & 0x800400000000) == 0) && (iVar3 = GetPadAnalogRpt__Fi(2), iVar3 == 0))
  {
    if (*paddat[1] == 1) {
      SystemBankPlay__FiiiiP11_SND_3D_SETii(1,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
      MenuMemoModeMoveReq__FUc('\0');
    }
  }
  else {
    iVar3 = GetNowMsgPageNum__Fv();
    if (iVar3 == 0) {
      iVar1 = GetMsgPageNum__Fii(0x30,iVar1);
      SetMsgPage__Fc((char)((uint)((iVar1 + -1) * 0x1000000) >> 0x18));
    }
    else {
      MesSetBeforePage__Fv();
    }
    iVar1 = GetNowMsgPageNum__Fv();
    if (iVar2 != iVar1) {
      SystemBankPlay__FiiiiP11_SND_3D_SETii(6,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
      return;
    }
  }
  return;
}

static void MenuMemoNotHavePad() {
  if (*paddat[1] == 1) {
    SystemBankPlay__FiiiiP11_SND_3D_SETii(1,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
    MenuMemoOutReq__Fv();
  }
  return;
}

void LiberateMenuMemoTexMem() {
  if (menu_memo_tex_addr != (void *)0x0) {
    mem_utilFreeMem__FPv(menu_memo_tex_addr);
    menu_memo_tex_addr = (void *)0x0;
  }
  return;
}

void MenuMemoTexLoadCancel() {
  uchar uVar1;
  int iVar2;
  
  iVar2 = MenuMemoTexLoadWait__Fv();
  if (iVar2 == 0) {
    uVar1 = GetLanguage__Fv();
    FileLoadCancel2((char)uVar1 + 0x4c,menu_memo_tex_addr,(undefined1 *)0x0,(void *)0x0);
  }
  return;
}

static void MenuMemoDispInit() {
  menu_memo_disp.rgb = '@';
  menu_memo_disp.sub_anim_timer = '\0';
  menu_memo_disp.anim_step = '\0';
  menu_memo_disp.anim_timer = '\0';
  menu_memo_disp.scroll_timer = '\0';
  menu_memo_disp.sub_anim_step = '\0';
  return;
}

void MenuMemoDisp() {
	u_char alpha;
	
  uchar alpha;
  
  alpha = '\0';
  if (((byte)(menu_wrk.step - 2) < 2) &&
     (Zero2Anim2D_CsrAnimCtrl__FPcPUc(&menu_memo_disp.scroll_timer,&menu_memo_disp.rgb),
     menu_memo_disp.anim_step != '\x04')) {
    MenuInOutAnimCtrl__FPcT0PUc(&menu_memo_disp.anim_step,&menu_memo_disp.anim_timer,&alpha);
    MenuMemoBgDisp__FiiUc(0,0,alpha);
    MenuMemoTitleDisp__FiiUc(0,0,alpha);
    MenuMemoPlyrMemoDisp__FiiUc(0,0,alpha);
    MenuMemoLineDisp__FiiUc(0,0,alpha);
    MenuInOutAnimCtrl__FPcT0PUc(&menu_memo_disp.sub_anim_step,&menu_memo_disp.sub_anim_timer,&alpha)
    ;
    if (((code *)menu_memo_disp_func[menu_memo_ctrl.mode] != (code *)0x0) &&
       (menu_memo_disp.sub_anim_step != '\x04')) {
      (*(code *)menu_memo_disp_func[menu_memo_ctrl.mode])(0,0,alpha);
    }
  }
  return;
}

static void MenuMemoBgDisp(int off_x, int off_y, u_char alpha) {
	int i;
	DISP_SPRT bg_ds;
	
  int iVar1;
  SPRT_DAT *pSVar2;
  float fVar3;
  float fVar4;
  DISP_SPRT bg_ds;
  
  iVar1 = 3;
  fVar4 = (float)off_x;
  PK2SendVram__FUiiii((uint)menu_memo_tex_addr,-1,-1,0);
  pSVar2 = menu_memo_tex;
  do {
    CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&bg_ds,pSVar2);
    iVar1 = iVar1 + -1;
    pSVar2 = pSVar2 + 1;
    bg_ds.x = bg_ds.x + fVar4;
    bg_ds.y = bg_ds.y + (float)off_y;
    bg_ds.alpha = (uchar)((int)((uint)bg_ds.alpha * (uint)alpha) >> 7);
    DispSprD__FP9DISP_SPRT(&bg_ds);
  } while (-1 < iVar1);
  iVar1 = 1;
  pSVar2 = menu_memo_tex + 4;
  do {
    CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&bg_ds,pSVar2);
    bg_ds.crx = bg_ds.x + fVar4;
    if ((int)bg_ds.w < 0) {
      fVar3 = (float)(bg_ds.w & 1 | bg_ds.w >> 1);
      fVar3 = fVar3 + fVar3;
    }
    else {
      fVar3 = (float)bg_ds.w;
    }
    iVar1 = iVar1 + -1;
    bg_ds.rot = 270.0;
    bg_ds.cry = bg_ds.y + fVar3 + (float)off_y;
    bg_ds.alpha = (uchar)((int)((uint)bg_ds.alpha * (uint)alpha) >> 7);
    bg_ds.x = bg_ds.crx;
    bg_ds.y = bg_ds.cry;
    DispSprD__FP9DISP_SPRT(&bg_ds);
    pSVar2 = pSVar2 + 1;
  } while (-1 < iVar1);
  return;
}

static void MenuMemoTitleDisp(int off_x, int off_y, u_char alpha) {
	int i;
	DISP_SPRT title_ds;
	
  SPRT_DAT *d;
  int iVar1;
  float fVar2;
  DISP_SPRT title_ds;
  
  fVar2 = (float)off_x;
  iVar1 = 1;
  PK2SendVram__FUiiii(0x19368c0,-1,-1,0);
  d = menu_memo_tex + 6;
  do {
    CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&title_ds,d);
    iVar1 = iVar1 + -1;
    d = d + 1;
    title_ds.x = title_ds.x + fVar2;
    title_ds.y = title_ds.y + (float)off_y;
    title_ds.alpha = (uchar)((int)((uint)title_ds.alpha * (uint)alpha) >> 7);
    DispSprD__FP9DISP_SPRT(&title_ds);
  } while (-1 < iVar1);
  PK2SendVram__FUiiii((uint)menu_memo_tex_addr,-1,-1,0);
  CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&title_ds,menu_memo_tex + 8);
  title_ds.x = title_ds.x + fVar2;
  title_ds.y = title_ds.y + (float)off_y;
  title_ds.alpha = (uchar)((int)((uint)title_ds.alpha * (uint)alpha) >> 7);
  DispSprD__FP9DISP_SPRT(&title_ds);
  return;
}

static void MenuMemoPlyrMemoDisp(int off_x, int off_y, u_char alpha) {
	static int memo_first_tbl[20][3] = {
		/* [0] = */ {
			/* [0] = */ 9,
			/* [1] = */ -1,
			/* [2] = */ -1
		},
		/* [1] = */ {
			/* [0] = */ 10,
			/* [1] = */ 11,
			/* [2] = */ -1
		},
		/* [2] = */ {
			/* [0] = */ 12,
			/* [1] = */ 13,
			/* [2] = */ 14
		},
		/* [3] = */ {
			/* [0] = */ 15,
			/* [1] = */ -1,
			/* [2] = */ -1
		},
		/* [4] = */ {
			/* [0] = */ 16,
			/* [1] = */ 17,
			/* [2] = */ -1
		},
		/* [5] = */ {
			/* [0] = */ 18,
			/* [1] = */ -1,
			/* [2] = */ -1
		},
		/* [6] = */ {
			/* [0] = */ 19,
			/* [1] = */ 20,
			/* [2] = */ -1
		},
		/* [7] = */ {
			/* [0] = */ 21,
			/* [1] = */ -1,
			/* [2] = */ -1
		},
		/* [8] = */ {
			/* [0] = */ 22,
			/* [1] = */ -1,
			/* [2] = */ -1
		},
		/* [9] = */ {
			/* [0] = */ 23,
			/* [1] = */ 24,
			/* [2] = */ 25
		},
		/* [10] = */ {
			/* [0] = */ 26,
			/* [1] = */ -1,
			/* [2] = */ -1
		},
		/* [11] = */ {
			/* [0] = */ 27,
			/* [1] = */ 28,
			/* [2] = */ 29
		},
		/* [12] = */ {
			/* [0] = */ 30,
			/* [1] = */ -1,
			/* [2] = */ -1
		},
		/* [13] = */ {
			/* [0] = */ 31,
			/* [1] = */ -1,
			/* [2] = */ -1
		},
		/* [14] = */ {
			/* [0] = */ 32,
			/* [1] = */ -1,
			/* [2] = */ -1
		},
		/* [15] = */ {
			/* [0] = */ 33,
			/* [1] = */ -1,
			/* [2] = */ -1
		},
		/* [16] = */ {
			/* [0] = */ 34,
			/* [1] = */ 35,
			/* [2] = */ 36
		},
		/* [17] = */ {
			/* [0] = */ 37,
			/* [1] = */ 38,
			/* [2] = */ -1
		},
		/* [18] = */ {
			/* [0] = */ 39,
			/* [1] = */ 40,
			/* [2] = */ -1
		},
		/* [19] = */ {
			/* [0] = */ 41,
			/* [1] = */ 42,
			/* [2] = */ -1
		}
	};
	static int memo_second_tbl[20][3] = {
		/* [0] = */ {
			/* [0] = */ 43,
			/* [1] = */ -1,
			/* [2] = */ -1
		},
		/* [1] = */ {
			/* [0] = */ 44,
			/* [1] = */ 45,
			/* [2] = */ -1
		},
		/* [2] = */ {
			/* [0] = */ 46,
			/* [1] = */ 47,
			/* [2] = */ 48
		},
		/* [3] = */ {
			/* [0] = */ 15,
			/* [1] = */ -1,
			/* [2] = */ -1
		},
		/* [4] = */ {
			/* [0] = */ 16,
			/* [1] = */ 17,
			/* [2] = */ -1
		},
		/* [5] = */ {
			/* [0] = */ 49,
			/* [1] = */ -1,
			/* [2] = */ -1
		},
		/* [6] = */ {
			/* [0] = */ 19,
			/* [1] = */ 20,
			/* [2] = */ -1
		},
		/* [7] = */ {
			/* [0] = */ 21,
			/* [1] = */ -1,
			/* [2] = */ -1
		},
		/* [8] = */ {
			/* [0] = */ 22,
			/* [1] = */ -1,
			/* [2] = */ -1
		},
		/* [9] = */ {
			/* [0] = */ 50,
			/* [1] = */ 51,
			/* [2] = */ 52
		},
		/* [10] = */ {
			/* [0] = */ 26,
			/* [1] = */ -1,
			/* [2] = */ -1
		},
		/* [11] = */ {
			/* [0] = */ 53,
			/* [1] = */ 54,
			/* [2] = */ 55
		},
		/* [12] = */ {
			/* [0] = */ 30,
			/* [1] = */ -1,
			/* [2] = */ -1
		},
		/* [13] = */ {
			/* [0] = */ 31,
			/* [1] = */ -1,
			/* [2] = */ -1
		},
		/* [14] = */ {
			/* [0] = */ 56,
			/* [1] = */ -1,
			/* [2] = */ -1
		},
		/* [15] = */ {
			/* [0] = */ 33,
			/* [1] = */ -1,
			/* [2] = */ -1
		},
		/* [16] = */ {
			/* [0] = */ 57,
			/* [1] = */ 58,
			/* [2] = */ 59
		},
		/* [17] = */ {
			/* [0] = */ 37,
			/* [1] = */ 38,
			/* [2] = */ -1
		},
		/* [18] = */ {
			/* [0] = */ 60,
			/* [1] = */ 61,
			/* [2] = */ -1
		},
		/* [19] = */ {
			/* [0] = */ 41,
			/* [1] = */ 42,
			/* [2] = */ -1
		}
	};
	static char color_type_tbl[20] = {
		/* [0] = */ 1,
		/* [1] = */ 0,
		/* [2] = */ 0,
		/* [3] = */ 1,
		/* [4] = */ 1,
		/* [5] = */ 0,
		/* [6] = */ 1,
		/* [7] = */ 0,
		/* [8] = */ 0,
		/* [9] = */ 1,
		/* [10] = */ 1,
		/* [11] = */ 0,
		/* [12] = */ 0,
		/* [13] = */ 0,
		/* [14] = */ 1,
		/* [15] = */ 0,
		/* [16] = */ 1,
		/* [17] = */ 0,
		/* [18] = */ 0,
		/* [19] = */ 0
	};
	DISP_SPRT memo_ds;
	int i;
	int j;
	int tex_label;
	
  int iVar1;
  undefined1 *puVar2;
  int iVar3;
  int iVar4;
  fixed_array<DISP_MEMO_DATA,20> *pfVar5;
  DISP_SPRT memo_ds;
  
  iVar3 = 0;
  if (0 < menu_memo_ctrl.ref_ctrl.data_num) {
    pfVar5 = &disp_memo_data;
    do {
      iVar4 = 0;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
      do {
        _fixed_array_verifyrange__H1Z14DISP_MEMO_DATA_UiUi_PX01(iVar3,0x14);
        iVar1 = GetMemoMsgStep__Fi(((fixed_array_base<DISP_MEMO_DATA,20,DISP_MEMO_DATA[20]> *)
                                   &((DISP_MEMO_DATA *)pfVar5)->memo_label)->m_aData[0].memo_label);
        if (iVar1 == 0) {
          _fixed_array_verifyrange__H1Z14DISP_MEMO_DATA_UiUi_PX01(iVar3,0x14);
          iVar1 = ((fixed_array_base<DISP_MEMO_DATA,20,DISP_MEMO_DATA[20]> *)
                  &((DISP_MEMO_DATA *)pfVar5)->memo_label)->m_aData[0].memo_label;
          puVar2 = memo_first_tbl_1006;
        }
        else {
          _fixed_array_verifyrange__H1Z14DISP_MEMO_DATA_UiUi_PX01(iVar3,0x14);
          iVar1 = ((fixed_array_base<DISP_MEMO_DATA,20,DISP_MEMO_DATA[20]> *)
                  &((DISP_MEMO_DATA *)pfVar5)->memo_label)->m_aData[0].memo_label;
          puVar2 = memo_second_tbl_1007;
        }
                    /* end of inlined section */
        if (*(int *)(puVar2 + (iVar1 * 3 + iVar4) * 4) == -1) break;
        CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT
                  (&memo_ds,menu_memo_tex + *(int *)(puVar2 + (iVar1 * 3 + iVar4) * 4));
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
        memo_ds.x = memo_ds.x + (float)off_x;
        memo_ds.y = memo_ds.y + (float)off_y;
        memo_ds.alpha = (uchar)((int)((uint)memo_ds.alpha * (uint)alpha) >> 7);
        if (iVar3 == menu_memo_ctrl.ref_ctrl.data_pos) {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
          _fixed_array_verifyrange__H1Z14DISP_MEMO_DATA_UiUi_PX01(iVar3,0x14);
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
          if (color_type_tbl_1008
              [((fixed_array_base<DISP_MEMO_DATA,20,DISP_MEMO_DATA[20]> *)
               &((DISP_MEMO_DATA *)pfVar5)->memo_label)->m_aData[0].memo_label] == '\0') {
            memo_ds.r = '+';
            memo_ds.g = '\x06';
            memo_ds.b = '\x06';
          }
          else {
                    /* end of inlined section */
            memo_ds.r = 'D';
            memo_ds.g = '\x04';
            memo_ds.b = '\x04';
          }
        }
        else {
          memo_ds.r = '\0';
          memo_ds.g = '\0';
          memo_ds.b = '\0';
        }
        iVar4 = iVar4 + 1;
        DispSprD__FP9DISP_SPRT(&memo_ds);
      } while (iVar4 < 3);
      iVar3 = iVar3 + 1;
      pfVar5 = (fixed_array<DISP_MEMO_DATA,20> *)((int)pfVar5 + 8);
    } while (iVar3 < menu_memo_ctrl.ref_ctrl.data_num);
  }
  return;
}

static void MenuMemoLineDisp(int off_x, int off_y, u_char alpha) {
	int i;
	int disp_num;
	float title_line_tate;
	
  int iVar1;
  float h;
  
  iVar1 = menu_memo_ctrl.ref_ctrl.data_num;
  if (8 < menu_memo_ctrl.ref_ctrl.data_num) {
    iVar1 = 8;
  }
  h = (float)((uint)(ushort)menu_cmn_dat[40].h + (uint)(ushort)menu_cmn_dat[42].h);
  if (0 < iVar1) {
    do {
      iVar1 = iVar1 + -1;
      h = h + 30.0;
    } while (iVar1 != 0);
  }
  PK2SendVram__FUiiii(0x19368c0,-1,-1,0);
  MenuCmnLineTateDisp__FfffUcUi(22.0,0.0,h,alpha,0xa0);
  return;
}

static void MenuMemoCaptionDisp(int off_x, int off_y, u_char alpha) {
  DrawCmnCapGroup_W__FiiUcUi(3,3,alpha,0);
  return;
}

static void MenuMemoContentCaptionDisp(int off_x, int off_y, u_char alpha) {
	int memo_label;
	
  int iVar1;
  int iVar2;
  
  iVar2 = menu_memo_ctrl.ref_ctrl.data_pos;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  _fixed_array_verifyrange__H1Z14DISP_MEMO_DATA_UiUi_PX01(menu_memo_ctrl.ref_ctrl.data_pos,0x14);
  iVar2 = disp_memo_data.field0_0x0.m_aData[iVar2].memo_label;
                    /* end of inlined section */
  iVar1 = GetMemoMsgStep__Fi(iVar2);
  iVar2 = GetMsgPageNum__Fii(0x30,iVar2 * 6 + iVar1 * 3 + 1);
  if (1 < iVar2) {
    DrawCmnCapGroup_W__FiiUcUi(9,9,alpha,0);
    return;
  }
  DrawCmnCapGroup_W__FiiUcUi(0xc,0xc,alpha,0);
  return;
}

static void MenuMemoMsgWindowDisp(int off_x, int off_y, u_char alpha) {
  DrawCmnWindow__FUiffffUcUc(0,(float)(off_x + 0x18),(float)(off_y + 0x15a),592.0,100.0,alpha,'f');
  return;
}

static void MenuMemoSelDisp(int off_x, int off_y, u_char alpha) {
	int memo_label;
	int msg_id_exp;
	
  int iVar1;
  int iVar2;
  
  iVar1 = menu_memo_ctrl.ref_ctrl.data_pos;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  _fixed_array_verifyrange__H1Z14DISP_MEMO_DATA_UiUi_PX01(menu_memo_ctrl.ref_ctrl.data_pos,0x14);
  iVar1 = disp_memo_data.field0_0x0.m_aData[iVar1].memo_label;
                    /* end of inlined section */
  iVar2 = GetMemoMsgStep__Fi(iVar1);
  MenuMemoItemDisp__FiiUc(off_x,off_y,alpha);
  MenuMemoMsgWindowDisp__FiiUc(off_x,off_y,alpha);
  PrintMsg__Fiiiiiii(0x30,iVar1 * 6 + iVar2 * 3 + 2,0x30,0x172,1,(uint)alpha,0);
  MenuMemoCaptionDisp__FiiUc(off_x,off_y,alpha);
  return;
}

static void MenuMemoItemDisp(int off_x, int off_y, u_char alpha) {
	int i;
	int memo_label;
	int col_label;
	int disp_num;
	
  int iVar1;
  int iVar2;
  int iVar3;
  int col_label;
  int y;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  iVar4 = menu_memo_ctrl.ref_ctrl.data_num;
  if (8 < menu_memo_ctrl.ref_ctrl.data_num) {
    iVar4 = 8;
  }
  iVar3 = 0;
  if (0 < iVar4) {
    fVar7 = 29.0;
    fVar5 = (float)off_y;
    fVar6 = 35.0;
    y = off_y + 0x3e;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    do {
      iVar2 = menu_memo_ctrl.ref_ctrl.disp_start_pos + iVar3;
      _fixed_array_verifyrange__H1Z14DISP_MEMO_DATA_UiUi_PX01(iVar2,0x14);
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
      iVar2 = disp_memo_data.field0_0x0.m_aData[iVar2].memo_label;
      if (iVar3 == menu_wrk.cursor) {
        col_label = 0;
        MenuCmnSelFrameDisp__FfffUcUi
                  ((float)off_x + fVar7,(float)iVar3 * fVar6 + 58.0 + fVar5,246.0,alpha,0);
      }
      else {
        col_label = 3;
        MenuCmnNonSelFrameDisp__FfffUcUi
                  ((float)off_x + fVar7,(float)iVar3 * fVar6 + 58.0 + fVar5,246.0,alpha,0);
      }
      iVar1 = GetMemoMsgStep__Fi(iVar2);
      PrintMsg_Arrange__Fiiiiiiiiii
                (0x30,iVar2 * 6 + iVar1 * 3,off_x + 0x92,y,col_label,(uint)alpha,0,0,0,2);
      y = y + 0x23;
      iVar2 = GetMemoState__Fi(iVar2);
      if (iVar2 == 1) {
        MenuMemoNonReadFrameDisp__FfUc((float)iVar3 * fVar6 + 60.0,alpha);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar4);
  }
  return;
}

static void MenuMemoNonReadFrameDisp(float y, u_char alpha) {
	DISP_SPRT frame_ds;
	
  DISP_SPRT frame_ds;
  
  CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&frame_ds,menu_memo_tex + 0x3e);
  frame_ds.alpha = (uchar)((int)((uint)frame_ds.alpha * (uint)alpha) >> 7);
  frame_ds.y = y;
  DispSprD__FP9DISP_SPRT(&frame_ds);
  CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&frame_ds,menu_memo_tex + 0x3f);
  frame_ds.alpha = (uchar)((int)((uint)frame_ds.alpha * (uint)alpha) >> 7);
  frame_ds.y = y;
  DispSprD__FP9DISP_SPRT(&frame_ds);
  return;
}

static void MenuMemoContentDisp(int off_x, int off_y, u_char alpha) {
  int iVar1;
  
  iVar1 = menu_memo_ctrl.ref_ctrl.data_pos;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  _fixed_array_verifyrange__H1Z14DISP_MEMO_DATA_UiUi_PX01(menu_memo_ctrl.ref_ctrl.data_pos,0x14);
                    /* end of inlined section */
  MenuMemoContentWindowDisp__FiUc(disp_memo_data.field0_0x0.m_aData[iVar1].memo_label,alpha);
  MenuMemoContentCaptionDisp__FiiUc(off_x,off_y,alpha);
  return;
}

static void MenuMemoContentWindowDisp(int memo_label, u_char alpha) {
	int msg_length;
	int msg_id_title;
	int msg_id_data;
	
  int iVar1;
  int iVar2;
  uchar *msg_addr;
  int msg_id;
  
  iVar1 = GetMemoMsgStep__Fi(memo_label);
  iVar2 = GetMemoMsgStep__Fi(memo_label);
  msg_id = memo_label * 6 + iVar1 * 3;
  msg_addr = GetMsgDataAddr__Fii(0x30,msg_id);
  iVar1 = GetMsgLineLength__FPUcPPUc(msg_addr,(uchar **)0x0);
  iVar2 = memo_label * 6 + iVar2 * 3 + 1;
  DrawCmnWindow__FUiffffUcUc(0,36.0,57.0,572.0,DAT_003ee584,alpha,'f');
  PrintMsg__Fiiiiiii(8,3,0x132 - iVar1 / 2,0x55,1,(uint)alpha,0);
  PrintMsg__Fiiiiiii(8,3,iVar1 / 2 + 0x140,0x55,1,(uint)alpha,0);
  PrintMsg_Arrange__Fiiiiiiiiii(0x30,msg_id,0x140,0x55,1,(uint)alpha,0,0,0,2);
  PrintMsg_P__Fiiiiiiiii(0x30,iVar2,0x50,0x7b,1,(uint)alpha,0,0,0);
  PrintMsg__Fiiiiiii(8,3,0x118,0x174,1,(uint)alpha,0);
  PrintMsg__Fiiiiiii(8,1,0x138,0x175,1,(uint)alpha,0);
  PrintMsg__Fiiiiiii(8,3,0x158,0x174,1,(uint)alpha,0);
  iVar1 = GetNowMsgPageNum__Fv();
  PrintNumber_N__FiiiiUcUciUcUc(iVar1 + 1,1,0x126,0x175,'\x01',alpha,0,'\x01',1);
  iVar1 = GetMsgPageNum__Fii(0x30,iVar2);
  PrintNumber_N__FiiiiUcUciUcUc(iVar1,1,0x146,0x175,'\x01',alpha,0,'\x01',1);
  return;
}

static void MenuMemoNotHaveDisp(int off_x, int off_y, u_char alpha) {
	DISP_STR msg_data;
	MSG_WIN_DAT msg_win;
	
  DISP_STR msg_data;
  MSG_WIN_DAT msg_win;
  
  SetMsgDefData__FP8DISP_STRi(&msg_data,0x36);
  SetMsgWinDefData__FP11MSG_WIN_DATi(&msg_win,0x36);
  DrawCmnWindow__FUiffffUcUc(0,msg_win.x,msg_win.y,msg_win.w,msg_win.h,alpha,'f');
  PrintMsg__Fiiiiiii(0x36,3,msg_data.pos_x,msg_data.pos_y,1,(uint)alpha,0);
  DrawCmnCapGroup_W__FiiUcUi(0xc,0xc,alpha,0);
  return;
}

DISP_MEMO_DATA* DISP_MEMO_DATA * _fixed_array_verifyrange<DISP_MEMO_DATA>(size_t v, size_t _max) {
  g3ddbgAssert__FbPCce(false,str_849);
  return (type_info *)v;
}

static void __static_initialization_and_destruction_0(int __initialize_p, int __priority) {
  return;
}

type_info& DISP_MEMO_DATA type_info function() {
  g3ddbgAssert__FbPCce(false,str_849);
  return (type_info *)v;
}

static void global constructors keyed to GetMenuMemoTexMem() {
  __static_initialization_and_destruction_0(1,0xffff);
  return;
}
