// STATUS: NOT STARTED

#include "menu_soul.h"

typedef struct {
	char mode;
	char cross_fade_flg;
	MENU_REF_CTRL ref_ctrl;
	int before_list_data_pos;
	fixed_array<int,3> max_score_order;
} MENU_SOUL_CTRL;

typedef struct {
	char anim_step;
	char anim_timer;
	u_char rgb;
	char scroll_timer;
	fixed_array<int,2> disp_msg_id;
} MENU_SOUL_DISP;

typedef struct {
	int ghost_list_label;
	int state;
} DISP_SOUL_LIST_DATA;

struct fixed_array_base<DISP_SOUL_LIST_DATA,176,DISP_SOUL_LIST_DATA[176]> {
protected:
	DISP_SOUL_LIST_DATA m_aData[176];
	
public:
	fixed_array_base<DISP_SOUL_LIST_DATA,176,DISP_SOUL_LIST_DATA[176]>& operator=();
	fixed_array_base();
protected:
	fixed_array_base();
public:
	DISP_SOUL_LIST_DATA& operator[]();
	DISP_SOUL_LIST_DATA& operator[]();
	DISP_SOUL_LIST_DATA* data();
	DISP_SOUL_LIST_DATA* begin();
	DISP_SOUL_LIST_DATA* end();
	void fill();
	size_t size();
	bool empty();
};

struct fixed_array<DISP_SOUL_LIST_DATA,176> : fixed_array_base<DISP_SOUL_LIST_DATA,176,DISP_SOUL_LIST_DATA[176]> {
};

static void *menu_soul_tex_addr = NULL;
static char list_comp_disp_flg = 0;
static MENU_SOUL_CTRL menu_soul_ctrl;
static MENU_SOUL_DISP menu_soul_disp;
static fixed_array<DISP_SOUL_LIST_DATA,176> disp_soul_list_data;
unsigned char DISP_SOUL_LIST_DATA type_info node[8];

static void _fixed_array_assert(char *strType, size_t v0, size_t v1) {
	static char *str = 0x3beb88;
	
  g3ddbgAssert__FbPCce(false,str_849);
  return (type_info *)v;
}

static void** void * * _fixed_array_verifyrange<void *>(size_t v, size_t _max) {
  if (_max <= v) {
    __tf19DISP_SOUL_LIST_DATA(0x3f2f60,_max);
  }
  return (void **)0x0;
}

static char** char * * _fixed_array_verifyrange<char *>(size_t v, size_t _max) {
  if (_max <= v) {
    __tf19DISP_SOUL_LIST_DATA(0x3f2f68,_max);
  }
  return (char **)0x0;
}

static unsigned int** unsigned int * * _fixed_array_verifyrange<unsigned int *>(size_t v, size_t _max) {
  if (_max <= v) {
    __tf19DISP_SOUL_LIST_DATA(0x3bebd0,_max);
  }
  return (uint **)0x0;
}

void MenuSoulListCompFlgInit() {
  list_comp_disp_flg = '\0';
  return;
}

static void MenuSoulInit() {
  menu_wrk.cursor = 0;
  MenuSoulCtrlInit__Fv();
  MenuCrossFadeInit__Fv();
  if (menu_soul_tex_addr == (void *)0x0) {
    printf("<<<<<<<<<WARNING FILE[%s] LINE[%d]>>>>>>>>>>\n");
    PrintWarningReal("Menu Ghost Tex Back reading failure\n");
    MenuSoulTexLoadReq__Fv();
  }
  return;
}

static void MenuSoulCtrlInit() {
  int iVar1;
  
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  menu_soul_ctrl.mode = '\0';
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  menu_soul_ctrl.before_list_data_pos = 0;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  menu_soul_ctrl.cross_fade_flg = '\0';
  _fixed_array_verifyrange__H1Zi_UiUi_PX01(0,3);
  GetSoulListOrderScore__FPii((int *)&menu_soul_ctrl.max_score_order,3);
                    /* end of inlined section */
  iVar1 = CheckEnhancingSoulListCondition__Fv();
  if (iVar1 != 0) {
    iVar1 = GetPlyrHaveSoulListNum__Fv();
    MenuRefCtrlInit__FP13MENU_REF_CTRLi(&menu_soul_ctrl.ref_ctrl,iVar1);
    return;
  }
  iVar1 = GetPlyrHaveBaseSoulListNum__Fv();
  MenuRefCtrlInit__FP13MENU_REF_CTRLi(&menu_soul_ctrl.ref_ctrl,iVar1);
  return;
}

void GetMenuSoulTexMem() {
  uchar uVar1;
  uint size;
  
  if (menu_soul_tex_addr != (void *)0x0) {
    LiberateMenuSoulTexMem__Fv();
  }
  if (menu_soul_tex_addr == (void *)0x0) {
    uVar1 = GetLanguage__Fv();
    size = GetFileSize((char)uVar1 + 0x5b);
    menu_soul_tex_addr = mem_utilGetMem__Fi(size);
  }
  return;
}

void MenuSoulTexLoadReq() {
  uchar uVar1;
  
  if (menu_soul_tex_addr == (void *)0x0) {
    GetMenuSoulTexMem__Fv();
  }
  uVar1 = GetLanguage__Fv();
  FileLoadReqEE((char)uVar1 + 0x5b,menu_soul_tex_addr,2,(undefined1 *)0x0,(void *)0x0);
  return;
}

static int MenuSoulTexLoadWait() {
  uchar uVar1;
  int iVar2;
  
  uVar1 = GetLanguage__Fv();
  iVar2 = FileLoadIsEnd2((char)uVar1 + 0x5b,menu_soul_tex_addr);
  return (int)(iVar2 != 0);
}

static void MenuSoulSetDispData() {
	int i;
	int count;
	int state;
	int max_disp_num;
	
  char cVar1;
  int iVar2;
  int ghost_list_label;
  fixed_array<DISP_SOUL_LIST_DATA,176> *pfVar3;
  int iVar4;
  int iVar5;
  
  ghost_list_label = 0;
  iVar5 = 0xb0;
  iVar2 = CheckEnhancingSoulListCondition__Fv();
  if (iVar2 == 0) {
    iVar5 = 0x98;
  }
  if (iVar5 != 0) {
    pfVar3 = &disp_soul_list_data;
    iVar2 = 0;
    do {
      cVar1 = GetPlyrSoulListState__Fi(ghost_list_label);
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* end of inlined section */
      iVar4 = iVar2;
      if (cVar1 != '\0') {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
        _fixed_array_verifyrange__H1Z19DISP_SOUL_LIST_DATA_UiUi_PX01(iVar2,0xb0);
        ((fixed_array_base<DISP_SOUL_LIST_DATA,176,DISP_SOUL_LIST_DATA[176]> *)
        &((DISP_SOUL_LIST_DATA *)pfVar3)->ghost_list_label)->m_aData[0].ghost_list_label =
             ghost_list_label;
                    /* end of inlined section */
        iVar4 = iVar2 + 1;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
        _fixed_array_verifyrange__H1Z19DISP_SOUL_LIST_DATA_UiUi_PX01(iVar2,0xb0);
        ((DISP_SOUL_LIST_DATA *)pfVar3)->state = (int)cVar1;
                    /* end of inlined section */
        pfVar3 = (fixed_array<DISP_SOUL_LIST_DATA,176> *)((int)pfVar3 + 8);
      }
      ghost_list_label = ghost_list_label + 1;
      iVar2 = iVar4;
    } while (ghost_list_label < iVar5);
  }
  return;
}

void MenuSoul() {
	int ghost_list_label;
	
  char cVar1;
  int iVar2;
  byte bVar3;
  int iVar4;
  
  if (menu_wrk.step == '\0') {
    MenuSoulInit__Fv();
    MenuSoulSetDispData__Fv();
    menu_wrk.step = '\x01';
  }
  if ((menu_wrk.step == '\x01') && (iVar2 = MenuSoulTexLoadWait__Fv(), iVar2 != 0)) {
    MenuSoulDispInit__Fv();
    iVar2 = menu_soul_ctrl.ref_ctrl.data_pos;
    if (menu_soul_ctrl.ref_ctrl.data_num == 0) {
      menu_soul_ctrl.mode = '\x02';
    }
    else {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
      _fixed_array_verifyrange__H1Z19DISP_SOUL_LIST_DATA_UiUi_PX01
                (menu_soul_ctrl.ref_ctrl.data_pos,0xb0);
      iVar2 = disp_soul_list_data.field0_0x0.m_aData[iVar2].ghost_list_label;
                    /* end of inlined section */
      cVar1 = GetPlyrSoulListState__Fi(iVar2);
      if (cVar1 == '\x02') {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
        MenuCrossFadeInStart__Fii((int)menu_soul_ctrl.cross_fade_flg,iVar2 + 0xfd5);
        iVar4 = (int)menu_soul_ctrl.cross_fade_flg;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
        _fixed_array_verifyrange__H1Zi_UiUi_PX01(menu_soul_ctrl.cross_fade_flg,2);
        bVar3 = menu_soul_ctrl.cross_fade_flg ^ 1;
        iVar2 = iVar2 * 3 + 2;
        menu_soul_disp.disp_msg_id.field0_0x0.m_aData[iVar4] = iVar2;
        _fixed_array_verifyrange__H1Zi_UiUi_PX01((int)(char)bVar3,2);
        menu_soul_disp.disp_msg_id.field0_0x0.m_aData[(char)bVar3] = iVar2;
                    /* end of inlined section */
      }
      if (list_comp_disp_flg == '\0') {
        iVar2 = GetSoulListAccomplishmentRate__Fv();
        if (iVar2 == 100) {
          menu_soul_ctrl.mode = '\x01';
          list_comp_disp_flg = '\x01';
        }
      }
      else {
        menu_soul_ctrl.mode = '\0';
      }
    }
    menu_wrk.step = '\x02';
  }
  if (menu_wrk.step == '\x02') {
    if (menu_soul_ctrl.mode == '\x01') {
      MenuSoulCompMsgPad__Fv();
      MenuCmnCrossFade__Fv();
    }
    else {
      if (menu_soul_ctrl.mode < '\x02') {
        if (menu_soul_ctrl.mode == '\0') {
          MenuSoulPad__Fv();
          MenuCmnCrossFade__Fv();
          goto LAB_00206b08;
        }
      }
      else if (menu_soul_ctrl.mode == '\x02') {
        MenuSoulNoListPad__Fv();
        goto LAB_00206b08;
      }
      printf("<<<<<<<<<WARNING FILE[%s] LINE[%d]>>>>>>>>>>\n");
      PrintWarningReal("Error!! MenuSoul");
    }
  }
LAB_00206b08:
  if ((menu_wrk.step == '\x03') && (menu_soul_disp.anim_step == '\x04')) {
    LiberateMenuSoulTexMem__Fv();
    MenuCrossFadeTexLoadCancel__Fi(0);
    MenuCrossFadeTexLoadCancel__Fi(1);
    LiberateAllMenuCrossFadeTexMem__Fv();
    SetNextMenuStep__Fi(8);
  }
  return;
}

static void MenuSoulPad() {
	int ghost_list_label;
	int disp_num;
	char load_flg;
	
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  DISP_SOUL_LIST_DATA *pDVar5;
  
  bVar1 = false;
  iVar4 = menu_soul_ctrl.ref_ctrl.data_num;
  if (9 < menu_soul_ctrl.ref_ctrl.data_num) {
    iVar4 = 9;
  }
  if (((pad[0].rpt & 0x1000U) == 0) && (iVar3 = GetPadAnalogRpt__Fi(0), iVar3 == 0)) {
    if (((pad[0].rpt & 0x4000U) == 0) && (iVar3 = GetPadAnalogRpt__Fi(1), iVar3 == 0)) {
      if (**paddat == 1) {
        SystemBankPlay__FiiiiP11_SND_3D_SETii(3,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
        iVar4 = menu_soul_ctrl.ref_ctrl.data_pos;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
        _fixed_array_verifyrange__H1Z19DISP_SOUL_LIST_DATA_UiUi_PX01
                  (menu_soul_ctrl.ref_ctrl.data_pos,0xb0);
        iVar4 = disp_soul_list_data.field0_0x0.m_aData[iVar4].ghost_list_label;
                    /* end of inlined section */
        cVar2 = GetPlyrSoulListState__Fi(iVar4);
        if (cVar2 == '\x01') {
          ReadSoulList__Fi(iVar4);
          MenuCrossFadeInStart__Fii((int)menu_soul_ctrl.cross_fade_flg,iVar4 + 0xfd5);
          iVar3 = (int)menu_soul_ctrl.cross_fade_flg;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
          _fixed_array_verifyrange__H1Zi_UiUi_PX01(menu_soul_ctrl.cross_fade_flg,2);
          menu_soul_disp.disp_msg_id.field0_0x0.m_aData[iVar3] = iVar4 * 3 + 2;
        }
        goto LAB_00206de8;
      }
                    /* end of inlined section */
      if (*paddat[1] == 1) {
        SystemBankPlay__FiiiiP11_SND_3D_SETii(1,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
        MenuSoulOutReq__Fv();
        goto LAB_00206de8;
      }
      if ((pad[0].one & 4U) == 0) {
        if ((pad[0].one & 8U) != 0) {
          menu_soul_ctrl.before_list_data_pos = menu_soul_ctrl.ref_ctrl.data_pos;
          iVar4 = MenuRefMovePageDown__FP13MENU_REF_CTRLPiii
                            (&menu_soul_ctrl.ref_ctrl,&menu_wrk.cursor,iVar4,9);
          if (iVar4 != 0) {
            bVar1 = true;
            SystemBankPlay__FiiiiP11_SND_3D_SETii(0,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
          }
        }
        goto LAB_00206de8;
      }
      menu_soul_ctrl.before_list_data_pos = menu_soul_ctrl.ref_ctrl.data_pos;
      iVar4 = MenuRefMovePageUp__FP13MENU_REF_CTRLPiii
                        (&menu_soul_ctrl.ref_ctrl,&menu_wrk.cursor,iVar4,9);
    }
    else {
      menu_soul_ctrl.before_list_data_pos = menu_soul_ctrl.ref_ctrl.data_pos;
      iVar4 = MenuRefMovePadLdown__FP13MENU_REF_CTRLPiii
                        (&menu_soul_ctrl.ref_ctrl,&menu_wrk.cursor,iVar4,9);
    }
  }
  else {
    menu_soul_ctrl.before_list_data_pos = menu_soul_ctrl.ref_ctrl.data_pos;
    iVar4 = MenuRefMovePadLup__FP13MENU_REF_CTRLPiii
                      (&menu_soul_ctrl.ref_ctrl,&menu_wrk.cursor,iVar4,9);
  }
  if (iVar4 != 0) {
    bVar1 = true;
    SystemBankPlay__FiiiiP11_SND_3D_SETii(0,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
  }
LAB_00206de8:
  iVar4 = menu_soul_ctrl.before_list_data_pos;
  if ((bVar1) && (menu_soul_ctrl.before_list_data_pos != menu_soul_ctrl.ref_ctrl.data_pos)) {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Z19DISP_SOUL_LIST_DATA_UiUi_PX01
              (menu_soul_ctrl.before_list_data_pos,0xb0);
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
    cVar2 = GetPlyrSoulListState__Fi(disp_soul_list_data.field0_0x0.m_aData[iVar4].ghost_list_label)
    ;
    if (cVar2 == '\x02') {
      MenuCrossFadeOutStart__Fi((int)menu_soul_ctrl.cross_fade_flg);
      menu_soul_ctrl.cross_fade_flg = menu_soul_ctrl.cross_fade_flg ^ 1;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    }
    pDVar5 = disp_soul_list_data.field0_0x0.m_aData + menu_soul_ctrl.ref_ctrl.data_pos;
    _fixed_array_verifyrange__H1Z19DISP_SOUL_LIST_DATA_UiUi_PX01
              (menu_soul_ctrl.ref_ctrl.data_pos,0xb0);
    iVar4 = pDVar5->ghost_list_label;
                    /* end of inlined section */
    cVar2 = GetPlyrSoulListState__Fi(iVar4);
    if (cVar2 == '\x02') {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
      iVar3 = menu_soul_ctrl.ref_ctrl.disp_start_pos + menu_wrk.cursor;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
      _fixed_array_verifyrange__H1Z19DISP_SOUL_LIST_DATA_UiUi_PX01(iVar3,0xb0);
      MenuCrossFadeInStart__Fii
                ((int)menu_soul_ctrl.cross_fade_flg,
                 disp_soul_list_data.field0_0x0.m_aData[iVar3].ghost_list_label + 0xfd5);
      iVar3 = (int)menu_soul_ctrl.cross_fade_flg;
      _fixed_array_verifyrange__H1Zi_UiUi_PX01(menu_soul_ctrl.cross_fade_flg,2);
      menu_soul_disp.disp_msg_id.field0_0x0.m_aData[iVar3] = iVar4 * 3 + 2;
    }
  }
  return;
}

static void MenuSoulOutReq() {
  menu_wrk.step = '\x03';
  menu_soul_disp.anim_step = '\x03';
  menu_soul_disp.anim_timer = '\0';
  return;
}

static void MenuSoulCompMsgPad() {
  int no;
  
  if (**paddat == 1) {
    no = 3;
  }
  else {
    if (*paddat[1] != 1) {
      return;
    }
    no = 1;
  }
  SystemBankPlay__FiiiiP11_SND_3D_SETii(no,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
  menu_soul_ctrl.mode = '\0';
  return;
}

static void MenuSoulNoListPad() {
  if (*paddat[1] == 1) {
    SystemBankPlay__FiiiiP11_SND_3D_SETii(1,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
    MenuSoulOutReq__Fv();
  }
  return;
}

void LiberateMenuSoulTexMem() {
  if (menu_soul_tex_addr != (void *)0x0) {
    mem_utilFreeMem__FPv(menu_soul_tex_addr);
    menu_soul_tex_addr = (void *)0x0;
  }
  return;
}

void MenuSoulTexLoadCancel() {
  uchar uVar1;
  int iVar2;
  
  iVar2 = MenuSoulTexLoadWait__Fv();
  if (iVar2 == 0) {
    uVar1 = GetLanguage__Fv();
    FileLoadCancel2((char)uVar1 + 0x5b,menu_soul_tex_addr,(undefined1 *)0x0,(void *)0x0);
  }
  return;
}

static void MenuSoulDispInit() {
	int i;
	
  int iVar1;
  int iVar2;
  fixed_array<int,2> *pfVar3;
  
  pfVar3 = &menu_soul_disp.disp_msg_id;
  menu_soul_disp.rgb = '@';
  menu_soul_disp.anim_step = '\0';
  menu_soul_disp.anim_timer = '\0';
  menu_soul_disp.scroll_timer = '\0';
  iVar1 = 0;
  do {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
    iVar2 = iVar1 + 1;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Zi_UiUi_PX01(iVar1,2);
    (pfVar3->field0_0x0).m_aData[0] = -1;
                    /* end of inlined section */
    pfVar3 = (fixed_array<int,2> *)((pfVar3->field0_0x0).m_aData + 1);
    iVar1 = iVar2;
  } while (iVar2 < 2);
  return;
}

void MenuSoulDisp() {
	static char __FUNCTION__[13] = {
		/* [0] = */ 77,
		/* [1] = */ 101,
		/* [2] = */ 110,
		/* [3] = */ 117,
		/* [4] = */ 83,
		/* [5] = */ 111,
		/* [6] = */ 117,
		/* [7] = */ 108,
		/* [8] = */ 68,
		/* [9] = */ 105,
		/* [10] = */ 115,
		/* [11] = */ 112,
		/* [12] = */ 0
	};
	u_char alpha;
	
  uchar alpha;
  
  alpha = '\0';
  if (((byte)(menu_wrk.step - 2) < 2) &&
     (Zero2Anim2D_CsrAnimCtrl__FPcPUc(&menu_soul_disp.scroll_timer,&menu_soul_disp.rgb),
     menu_soul_disp.anim_step != '\x04')) {
    MenuInOutAnimCtrl__FPcT0PUc(&menu_soul_disp.anim_step,&menu_soul_disp.anim_timer,&alpha);
    MenuSoulTitleDisp__FiiUc(0,0,alpha);
    if (menu_soul_ctrl.mode == '\x01') {
      MenuSoulCompMsgDisp__FiiUc(0,0,alpha);
    }
    else {
      if (menu_soul_ctrl.mode < '\x02') {
        if (menu_soul_ctrl.mode == '\0') {
          MenuSoulListSelDisp__FiiUc(0,0,alpha);
          return;
        }
      }
      else if (menu_soul_ctrl.mode == '\x02') {
        MenuSoulNotHaveListDisp__FiiUc(0,0,alpha);
        return;
      }
      SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
      PrintAssertReal("Error!! %s");
    }
  }
  return;
}

static void MenuSoulListSelDisp(int off_x, int off_y, u_char alpha) {
  MenuSoulScrollArrowDisp__FiiUc(0,0,alpha);
  MenuSoulScrollDisp__FiiUc(0,0,alpha);
  MenuSoulBgDisp__FiiUc(0,0,alpha);
  MenuSoulAccomplishmentRateDisp__FiiUc(0,0,alpha);
  MenuSoulCursorBaseDisp__FiiUc(0,0,alpha);
  MenuSoulNoReadFrameDisp__FiiUc(0,0,alpha);
  MenuSoulGhostNameDisp__FiiUc(0,0,alpha);
  MenuSoulCursorDisp__FiiUc(0,0,alpha);
  MenuSoulCursorTriangleDisp__FiiUc(0,0,alpha);
  MenuSoulOrderSignDisp__FiiUc(0,0,alpha);
  MenuSoulGhostMaxScoreDisp__FiiUc(0,0,alpha);
  MenuSoulGhostPlaceDisp__FiiUc(0,0,alpha);
  MenuSoulGhostInfoDisp__FiiUc(0,0,alpha);
  MenuSoulCaptionDisp__FiiUc(0,0,alpha);
  return;
}

static void MenuSoulCompMsgDisp(int off_x, int off_y, u_char alpha) {
	int i;
	DISP_SPRT cong_ds;
	DISP_SQAR dsq;
	SQAR_DAT black_bg;
	
  undefined *puVar1;
  uint uVar2;
  ulong *puVar3;
  uchar *puVar4;
  SPRT_DAT *d;
  int iVar5;
  float fVar6;
  DISP_SPRT cong_ds;
  DISP_SQAR dsq;
  SQAR_DAT black_bg;
  
  fVar6 = (float)off_x;
  puVar1 = (undefined *)((int)&black_bg.h + 3);
  uVar2 = (uint)puVar1 & 7;
  puVar3 = (ulong *)(puVar1 + -uVar2);
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | DAT_003becb0 >> (7 - uVar2) * 8;
  black_bg._0_8_ = DAT_003becb0;
  puVar1 = (undefined *)((int)&black_bg.y + 3);
  uVar2 = (uint)puVar1 & 7;
  puVar3 = (ulong *)(puVar1 + -uVar2);
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | DAT_003becb8 >> (7 - uVar2) * 8;
  black_bg._8_8_ = DAT_003becb8;
  uVar2 = (uint)&black_bg.alpha & 7;
  puVar4 = &black_bg.alpha + -uVar2;
  *(ulong *)puVar4 = *(ulong *)puVar4 & -1L << (uVar2 + 1) * 8 | _DAT_003becc0 >> (7 - uVar2) * 8;
  black_bg._16_8_ = _DAT_003becc0;
  MenuSoulListSelDisp__FiiUc(off_x,off_y,alpha);
  iVar5 = 1;
  CopySqrDToSqr__FP9DISP_SQARP8SQAR_DAT(&dsq,&black_bg);
  dsq.alpha = (uchar)((int)((uint)dsq.alpha * (uint)alpha) >> 7);
  DispSqrD__FP9DISP_SQAR(&dsq);
  DrawCmnTwoLineWindow__FUiffffUcUc(0,45.0,104.0,DAT_003ee59c,232.0,alpha,0x80);
  d = menu_glist_tex + 0x22;
  do {
    CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&cong_ds,d);
    iVar5 = iVar5 + -1;
    d = d + 1;
    cong_ds.x = cong_ds.x + fVar6;
    cong_ds.y = cong_ds.y + (float)off_y;
    cong_ds.alpha = (uchar)((int)((uint)cong_ds.alpha * (uint)alpha) >> 7);
    DispSprD__FP9DISP_SPRT(&cong_ds);
  } while (-1 < iVar5);
  PrintMsg_Arrange__Fiiiiiiiiii(0x28,5,0x140,0xc3,1,(uint)alpha,0,0,0,2);
  PrintMsg_Arrange__Fiiiiiiiiii(0x28,0,0x140,0xf9,1,(uint)alpha,0,0,0,2);
  PrintMsg_Arrange__Fiiiiiiiiii(0x28,1,0x140,0x111,1,(uint)alpha,0,0,0,2);
  return;
}

static void MenuSoulGhostInfoDisp(int off_x, int off_y, u_char alpha) {
  MenuSoulPhotoDisp__FiiUc(0,0,alpha);
  return;
}

static void MenuSoulBgDisp(int off_x, int off_y, u_char alpha) {
	int i;
	DISP_SPRT bg_ds;
	
  SPRT_DAT *d;
  int iVar1;
  float fVar2;
  float fVar3;
  DISP_SPRT bg_ds;
  
  fVar3 = (float)off_y;
  iVar1 = 3;
  PK2SendVram__FUiiii((uint)menu_soul_tex_addr,-1,-1,0);
  d = menu_glist_tex;
  do {
    CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&bg_ds,d);
    iVar1 = iVar1 + -1;
    d = d + 1;
    bg_ds.x = bg_ds.x + (float)off_x;
    bg_ds.y = bg_ds.y + fVar3;
    bg_ds.alpha = (uchar)((int)((uint)bg_ds.alpha * (uint)alpha) >> 7);
    DispSprD__FP9DISP_SPRT(&bg_ds);
  } while (-1 < iVar1);
  CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&bg_ds,menu_glist_tex + 4);
  bg_ds.crx = bg_ds.x + (float)off_x;
  if ((int)bg_ds.w < 0) {
    fVar2 = (float)(bg_ds.w & 1 | bg_ds.w >> 1);
    fVar2 = fVar2 + fVar2;
  }
  else {
    fVar2 = (float)bg_ds.w;
  }
  bg_ds.rot = 270.0;
  bg_ds.cry = bg_ds.y + fVar2 + fVar3;
  bg_ds.alpha = (uchar)((int)((uint)bg_ds.alpha * (uint)alpha) >> 7);
  bg_ds.x = bg_ds.crx;
  bg_ds.y = bg_ds.cry;
  DispSprD__FP9DISP_SPRT(&bg_ds);
  return;
}

static void MenuSoulTitleDisp(int off_x, int off_y, u_char alpha) {
	int i;
	DISP_SPRT title_ds;
	
  SPRT_DAT *d;
  int iVar1;
  float fVar2;
  DISP_SPRT title_ds;
  
  fVar2 = (float)off_x;
  iVar1 = 1;
  PK2SendVram__FUiiii(0x19368c0,-1,-1,0);
  d = menu_glist_tex + 5;
  do {
    CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&title_ds,d);
    iVar1 = iVar1 + -1;
    d = d + 1;
    title_ds.x = title_ds.x + fVar2;
    title_ds.y = title_ds.y + (float)off_y;
    title_ds.alpha = (uchar)((int)((uint)title_ds.alpha * (uint)alpha) >> 7);
    DispSprD__FP9DISP_SPRT(&title_ds);
  } while (-1 < iVar1);
  PK2SendVram__FUiiii((uint)menu_soul_tex_addr,-1,-1,0);
  CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&title_ds,menu_glist_tex + 7);
  title_ds.x = title_ds.x + fVar2;
  title_ds.y = title_ds.y + (float)off_y;
  title_ds.alpha = (uchar)((int)((uint)title_ds.alpha * (uint)alpha) >> 7);
  DispSprD__FP9DISP_SPRT(&title_ds);
  return;
}

static void MenuSoulPhotoDisp(int off_x, int off_y, u_char alpha) {
	DISP_SPRT ghost_ds;
	int disp_num;
	u_char fade_alpha[2];
	
  int iVar1;
  uint *puVar2;
  byte bVar3;
  DISP_SPRT ghost_ds;
  uchar fade_alpha [2];
  
  fade_alpha[1] = '\0';
  iVar1 = menu_soul_ctrl.ref_ctrl.data_num;
  if (9 < menu_soul_ctrl.ref_ctrl.data_num) {
    iVar1 = 9;
  }
  fade_alpha[0] = '\0';
  if (iVar1 != 0) {
    GetMenuCrossFadeAlpha__FPUc(fade_alpha);
    if (menu_wrk.step != '\x02') {
      fade_alpha[(char)(menu_soul_ctrl.cross_fade_flg ^ 1)] = '\0';
    }
    iVar1 = CheckCrossFadeDisp__Fi((int)(char)(menu_soul_ctrl.cross_fade_flg ^ 1));
    if ((iVar1 != 0) && (fade_alpha[(char)(menu_soul_ctrl.cross_fade_flg ^ 1)] != '\0')) {
      puVar2 = (uint *)GetCrossFadeDataAddr__Fi((int)(char)(menu_soul_ctrl.cross_fade_flg ^ 1));
      MenuTim2SendVram__FPUiii(puVar2,0x2bc0,12000);
      CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&ghost_ds,menu_glist_tex + 0x17);
      ghost_ds.tex0 = 0x2005dc066932abc0;
      ghost_ds.alpha =
           (uchar)((int)((uint)ghost_ds.alpha *
                        (uint)fade_alpha[(char)(menu_soul_ctrl.cross_fade_flg ^ 1)]) >> 7);
      DispSprD__FP9DISP_SPRT(&ghost_ds);
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
      bVar3 = menu_soul_ctrl.cross_fade_flg ^ 1;
      _fixed_array_verifyrange__H1Zi_UiUi_PX01((int)(char)bVar3,2);
      if (menu_soul_disp.disp_msg_id.field0_0x0.m_aData[(char)bVar3] != -1) {
                    /* end of inlined section */
                    /* end of inlined section */
        bVar3 = menu_soul_ctrl.cross_fade_flg ^ 1;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
        _fixed_array_verifyrange__H1Zi_UiUi_PX01((int)(char)bVar3,2);
        MenuSoulGhostExplainDisp__FiiiUc
                  (menu_soul_disp.disp_msg_id.field0_0x0.m_aData[(char)bVar3],off_x,off_y,
                   fade_alpha[(char)(menu_soul_ctrl.cross_fade_flg ^ 1)]);
      }
    }
    if (menu_wrk.step != '\x02') {
      fade_alpha[menu_soul_ctrl.cross_fade_flg] = alpha;
    }
    iVar1 = CheckCrossFadeDisp__Fi((int)menu_soul_ctrl.cross_fade_flg);
    if ((iVar1 != 0) && (fade_alpha[menu_soul_ctrl.cross_fade_flg] != '\0')) {
      puVar2 = (uint *)GetCrossFadeDataAddr__Fi((int)menu_soul_ctrl.cross_fade_flg);
      MenuTim2SendVram__FPUiii(puVar2,0x2bc0,12000);
      CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&ghost_ds,menu_glist_tex + 0x17);
      ghost_ds.tex0 = 0x2005dc066932abc0;
      ghost_ds.alpha =
           (uchar)((int)((uint)ghost_ds.alpha * (uint)fade_alpha[menu_soul_ctrl.cross_fade_flg]) >>
                  7);
      DispSprD__FP9DISP_SPRT(&ghost_ds);
      iVar1 = (int)menu_soul_ctrl.cross_fade_flg;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
      _fixed_array_verifyrange__H1Zi_UiUi_PX01(menu_soul_ctrl.cross_fade_flg,2);
      if (menu_soul_disp.disp_msg_id.field0_0x0.m_aData[iVar1] != -1) {
        iVar1 = (int)menu_soul_ctrl.cross_fade_flg;
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
        _fixed_array_verifyrange__H1Zi_UiUi_PX01(menu_soul_ctrl.cross_fade_flg,2);
        MenuSoulGhostExplainDisp__FiiiUc
                  (menu_soul_disp.disp_msg_id.field0_0x0.m_aData[iVar1],off_x,off_y,
                   fade_alpha[menu_soul_ctrl.cross_fade_flg]);
      }
    }
  }
  return;
}

static void MenuSoulGhostExplainDisp(int msg_id, int off_x, int off_y, u_char alpha) {
  PrintMsg__Fiiiiiii(0x3b,msg_id,off_x + 0x14e,off_y + 0x115,9,(uint)alpha,0);
  return;
}

static void MenuSoulNoReadFrameDisp(int off_x, int off_y, u_char alpha) {
	int i;
	int j;
	int disp_num;
	int ghost_list_label;
	DISP_SPRT frame_ds;
	char disp_flg;
	
  bool bVar1;
  fixed_array_base<int,3,int[3]> *pfVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  fixed_array<int,3> *pfVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  DISP_SPRT frame_ds;
  
  iVar9 = 0;
  iVar10 = menu_soul_ctrl.ref_ctrl.data_num;
  if (9 < menu_soul_ctrl.ref_ctrl.data_num) {
    iVar10 = 9;
  }
  PK2SendVram__FUiiii((uint)menu_soul_tex_addr,-1,-1,0);
  if (0 < iVar10) {
    iVar8 = off_y + 0x75;
    do {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
      bVar1 = true;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
      iVar7 = 0;
      pfVar6 = &menu_soul_ctrl.max_score_order;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
      iVar5 = menu_soul_ctrl.ref_ctrl.disp_start_pos + iVar9;
      _fixed_array_verifyrange__H1Z19DISP_SOUL_LIST_DATA_UiUi_PX01(iVar5,0xb0);
      iVar5 = disp_soul_list_data.field0_0x0.m_aData[iVar5].ghost_list_label;
      do {
                    /* end of inlined section */
        if (2 < iVar7) goto LAB_00207bb0;
        iVar4 = GetPlyrSoulListMaxScore__Fi(iVar5);
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
        _fixed_array_verifyrange__H1Zi_UiUi_PX01(iVar7,3);
        pfVar2 = &pfVar6->field0_0x0;
        iVar7 = iVar7 + 1;
        pfVar6 = (fixed_array<int,3> *)((pfVar6->field0_0x0).m_aData + 1);
      } while (iVar4 != pfVar2->m_aData[0]);
                    /* end of inlined section */
      bVar1 = false;
LAB_00207bb0:
      if ((bVar1) && (cVar3 = GetPlyrSoulListState__Fi(iVar5), cVar3 == '\x01')) {
        CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&frame_ds,menu_glist_tex + 0x1d);
        frame_ds.y = (float)iVar8;
        frame_ds.x = frame_ds.x + (float)off_x;
        frame_ds.alpha = (uchar)((int)((uint)frame_ds.alpha * (uint)alpha) >> 7);
        DispSprD__FP9DISP_SPRT(&frame_ds);
      }
      iVar9 = iVar9 + 1;
      iVar8 = iVar8 + 0x22;
    } while (iVar9 < iVar10);
  }
  return;
}

static void MenuSoulGhostNameDisp(int off_x, int off_y, u_char alpha) {
	int i;
	int j;
	int disp_num;
	int ghost_list_label;
	
  int iVar1;
  int col_label;
  int iVar2;
  int y;
  int x;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = 0;
  iVar5 = menu_soul_ctrl.ref_ctrl.data_num;
  if (9 < menu_soul_ctrl.ref_ctrl.data_num) {
    iVar5 = 9;
  }
  if (0 < iVar5) {
    do {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
      x = off_x + 0x4e;
      iVar3 = 2;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
      iVar2 = menu_soul_ctrl.ref_ctrl.disp_start_pos + iVar4;
      _fixed_array_verifyrange__H1Z19DISP_SOUL_LIST_DATA_UiUi_PX01(iVar2,0xb0);
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
      iVar2 = disp_soul_list_data.field0_0x0.m_aData[iVar2].ghost_list_label;
                    /* end of inlined section */
      y = iVar4 * 0x22 + off_y + 0x79;
      do {
        iVar1 = 0x14;
        col_label = 0x13;
        if (iVar3 != 0) {
          iVar1 = 9;
          col_label = 9;
        }
        if (0x97 < iVar2) {
          col_label = iVar1;
        }
        iVar3 = iVar3 + -1;
        PrintMsg__Fiiiiiii(0x3b,iVar2 * 3,x,y,col_label,(uint)alpha,0);
        x = x + -1;
        y = y + -1;
      } while (-1 < iVar3);
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar5);
  }
  return;
}

static void MenuSoulGhostMaxScoreDisp(int off_x, int off_y, u_char alpha) {
  int iVar1;
  
  iVar1 = menu_soul_ctrl.ref_ctrl.data_pos;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  _fixed_array_verifyrange__H1Z19DISP_SOUL_LIST_DATA_UiUi_PX01
            (menu_soul_ctrl.ref_ctrl.data_pos,0xb0);
                    /* end of inlined section */
  iVar1 = GetPlyrSoulListMaxScore__Fi
                    (disp_soul_list_data.field0_0x0.m_aData[iVar1].ghost_list_label);
  PrintNumber_N__FiiiiUcUciUcUc(iVar1,5,off_x + 0x1d3,off_y + 0x49,'\x13',alpha,0,'\0',0);
  PrintMsg__Fiiiiiii(8,2,off_x + 0x22f,off_y + 0x49,0x13,(uint)alpha,0);
  return;
}

static void MenuSoulGhostPlaceDisp(int off_x, int off_y, u_char alpha) {
	int ghost_list_label;
	
  int iVar1;
  
  iVar1 = menu_soul_ctrl.ref_ctrl.data_pos;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  _fixed_array_verifyrange__H1Z19DISP_SOUL_LIST_DATA_UiUi_PX01
            (menu_soul_ctrl.ref_ctrl.data_pos,0xb0);
                    /* end of inlined section */
  PrintMsg__Fiiiiiii(0x3b,disp_soul_list_data.field0_0x0.m_aData[iVar1].ghost_list_label * 3 + 1,
                     off_x + 0x16b,off_y + 0x61,0x13,(uint)alpha,0);
  return;
}

static void MenuSoulAccomplishmentRateDisp(int off_x, int off_y, u_char alpha) {
	int rate;
	
  int data;
  
  data = GetSoulListAccomplishmentRate__Fv();
  MenuSoulNumberDisp__FiiiiUciUc(data,3,0x77,0x48,alpha,0,'\0');
  if (99 < data) {
    MenuSoulCompleteDisp__FiiUc(off_x,off_y,alpha);
  }
  return;
}

static void MenuSoulCompleteDisp(int off_x, int off_y, u_char alpha) {
	DISP_SPRT complete_ds;
	
  DISP_SPRT complete_ds;
  
  PK2SendVram__FUiiii((uint)menu_soul_tex_addr,-1,-1,0);
  CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&complete_ds,menu_glist_tex + 0x1e);
  complete_ds.x = complete_ds.x + (float)off_x;
  complete_ds.y = complete_ds.y + (float)off_y;
  complete_ds.alpha = (uchar)((int)((uint)complete_ds.alpha * (uint)alpha) >> 7);
  DispSprD__FP9DISP_SPRT(&complete_ds);
  return;
}

static void MenuSoulOrderSignDisp(int off_x, int off_y, u_char alpha) {
	static char __FUNCTION__[22] = {
		/* [0] = */ 77,
		/* [1] = */ 101,
		/* [2] = */ 110,
		/* [3] = */ 117,
		/* [4] = */ 83,
		/* [5] = */ 111,
		/* [6] = */ 117,
		/* [7] = */ 108,
		/* [8] = */ 79,
		/* [9] = */ 114,
		/* [10] = */ 100,
		/* [11] = */ 101,
		/* [12] = */ 114,
		/* [13] = */ 83,
		/* [14] = */ 105,
		/* [15] = */ 103,
		/* [16] = */ 110,
		/* [17] = */ 68,
		/* [18] = */ 105,
		/* [19] = */ 115,
		/* [20] = */ 112,
		/* [21] = */ 0
	};
	int i;
	int j;
	int disp_num;
	int ghost_list_label;
	DISP_SPRT sign_ds;
	
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  DISP_SPRT sign_ds;
  
  iVar5 = 0;
  iVar6 = menu_soul_ctrl.ref_ctrl.data_num;
  if (9 < menu_soul_ctrl.ref_ctrl.data_num) {
    iVar6 = 9;
  }
  PK2SendVram__FUiiii((uint)menu_soul_tex_addr,-1,-1,0);
  if (0 < iVar6) {
    iVar4 = off_y + 0x6c;
    do {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
      iVar3 = 0;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
      iVar2 = menu_soul_ctrl.ref_ctrl.disp_start_pos + iVar5;
      _fixed_array_verifyrange__H1Z19DISP_SOUL_LIST_DATA_UiUi_PX01(iVar2,0xb0);
      iVar2 = disp_soul_list_data.field0_0x0.m_aData[iVar2].ghost_list_label;
      do {
                    /* end of inlined section */
        iVar1 = GetPlyrSoulListMaxScore__Fi(iVar2);
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
        _fixed_array_verifyrange__H1Zi_UiUi_PX01(iVar3,3);
        if (iVar1 == menu_soul_ctrl.max_score_order.field0_0x0.m_aData[iVar3]) {
                    /* end of inlined section */
          if (iVar3 == 1) {
            CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&sign_ds,menu_glist_tex + 0x20);
          }
          else if (iVar3 < 2) {
            if (iVar3 == 0) {
              CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&sign_ds,menu_glist_tex + 0x1f);
            }
            else {
LAB_00208160:
              SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
              PrintAssertReal("Error! MenuSoulOrderSignDisp");
            }
          }
          else {
            if (iVar3 != 2) goto LAB_00208160;
            CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&sign_ds,menu_glist_tex + 0x21);
          }
          sign_ds.y = (float)iVar4;
          sign_ds.alphar = 0x48;
          sign_ds.x = sign_ds.x + (float)off_x;
          sign_ds.alpha = (uchar)((int)((uint)sign_ds.alpha * (uint)alpha) >> 7);
          DispSprD__FP9DISP_SPRT(&sign_ds);
          break;
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < 3);
      iVar5 = iVar5 + 1;
      iVar4 = iVar4 + 0x22;
    } while (iVar5 < iVar6);
  }
  return;
}

static void MenuSoulCursorBaseDisp(int off_x, int off_y, u_char alpha) {
	DISP_SQAR dsq;
	SQAR_DAT cursor_base;
	
  undefined *puVar1;
  uint uVar2;
  ulong *puVar3;
  uchar *puVar4;
  int iVar5;
  int iVar6;
  DISP_SQAR dsq;
  SQAR_DAT cursor_base;
  
  puVar1 = (undefined *)((int)&cursor_base.h + 3);
  uVar2 = (uint)puVar1 & 7;
  puVar3 = (ulong *)(puVar1 + -uVar2);
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | DAT_003bed00 >> (7 - uVar2) * 8;
  cursor_base._0_8_ = DAT_003bed00;
  puVar1 = (undefined *)((int)&cursor_base.y + 3);
  uVar2 = (uint)puVar1 & 7;
  puVar3 = (ulong *)(puVar1 + -uVar2);
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | DAT_003bed08 >> (7 - uVar2) * 8;
  cursor_base._8_8_ = DAT_003bed08;
  uVar2 = (uint)&cursor_base.alpha & 7;
  puVar4 = &cursor_base.alpha + -uVar2;
  *(ulong *)puVar4 = *(ulong *)puVar4 & -1L << (uVar2 + 1) * 8 | DAT_003bed10 >> (7 - uVar2) * 8;
  cursor_base._16_8_ = DAT_003bed10;
  CopySqrDToSqr__FP9DISP_SQARP8SQAR_DAT(&dsq,&cursor_base);
  iVar5 = menu_wrk.cursor * 0x22;
  iVar6 = (iVar5 + dsq.y[2]) - dsq.y[0];
  dsq.y[0] = iVar5 + 0x74;
  dsq.x[1] = (dsq.x[1] - dsq.x[0]) + 0x28;
  dsq.x[3] = (dsq.x[3] - dsq.x[2]) + 0x28;
  dsq.y[2] = iVar6 + 0x74;
  dsq.y[3] = ((iVar5 + dsq.y[3]) - dsq.y[1]) + 0x74;
  dsq.x[2] = 0x28;
  dsq.alpha = (uchar)((int)((uint)dsq.alpha * (uint)alpha) >> 7);
  dsq.x[0] = 0x28;
  dsq.y[1] = dsq.y[0];
  DispSqrD__FP9DISP_SQAR(&dsq);
  return;
}

static void MenuSoulCursorDisp(int off_x, int off_y, u_char alpha) {
	int y;
	DISP_SPRT cursor_ds;
	
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  DISP_SPRT cursor_ds;
  
  iVar1 = menu_wrk.cursor;
  fVar3 = (float)off_x;
  PK2SendVram__FUiiii((uint)menu_soul_tex_addr,-1,-1,0);
  CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&cursor_ds,menu_glist_tex + 0x12);
  iVar1 = iVar1 * 0x22 + 0x70 + off_y;
  fVar4 = (float)iVar1;
  cursor_ds.x = cursor_ds.x + fVar3;
  cursor_ds.alphar = 0x48;
  cursor_ds.alpha = (uchar)((int)((uint)cursor_ds.alpha * (uint)alpha) >> 7);
  cursor_ds.y = fVar4;
  DispSprD__FP9DISP_SPRT(&cursor_ds);
  CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&cursor_ds,menu_glist_tex + 0x13);
  cursor_ds.csx = cursor_ds.x + fVar3;
  if ((int)cursor_ds.w < 0) {
    fVar2 = (float)(cursor_ds.w & 1 | cursor_ds.w >> 1);
    fVar2 = fVar2 + fVar2;
  }
  else {
    fVar2 = (float)cursor_ds.w;
  }
  cursor_ds.scw = 253.0 / fVar2;
  cursor_ds.sch = 1.0;
  cursor_ds.alphar = 0x48;
  cursor_ds.alpha = (uchar)((int)((uint)cursor_ds.alpha * (uint)alpha) >> 7);
  cursor_ds.csy = fVar4;
  cursor_ds.x = cursor_ds.csx;
  cursor_ds.y = fVar4;
  DispSprD__FP9DISP_SPRT(&cursor_ds);
  CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&cursor_ds,menu_glist_tex + 0x14);
  cursor_ds.y = (float)iVar1;
  cursor_ds.alphar = 0x48;
  cursor_ds.x = cursor_ds.x + fVar3;
  cursor_ds.alpha = (uchar)((int)((uint)cursor_ds.alpha * (uint)alpha) >> 7);
  DispSprD__FP9DISP_SPRT(&cursor_ds);
  return;
}

static void MenuSoulCursorTriangleDisp(int off_x, int off_y, u_char alpha) {
	int up_y;
	int down_y;
	DISP_SPRT cursor_ds;
	
  int iVar1;
  DISP_SPRT cursor_ds;
  
  iVar1 = menu_wrk.cursor;
  PK2SendVram__FUiiii((uint)menu_soul_tex_addr,-1,-1,0);
  CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&cursor_ds,menu_glist_tex + 0x15);
  cursor_ds.x = cursor_ds.x + (float)off_x;
  cursor_ds.y = (float)(iVar1 * 0x22 + 0x67 + off_y);
  cursor_ds.b = menu_soul_disp.rgb;
  cursor_ds.alpha = (uchar)((int)((uint)cursor_ds.alpha * (uint)alpha) >> 7);
  cursor_ds.alphar = 0x48;
  cursor_ds.r = menu_soul_disp.rgb;
  cursor_ds.g = menu_soul_disp.rgb;
  DispSprD__FP9DISP_SPRT(&cursor_ds);
  CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&cursor_ds,menu_glist_tex + 0x16);
  cursor_ds.y = (float)(iVar1 * 0x22 + 0x94 + off_y);
  cursor_ds.x = cursor_ds.x + (float)off_x;
  cursor_ds.alphar = 0x48;
  cursor_ds.b = menu_soul_disp.rgb;
  cursor_ds.r = menu_soul_disp.rgb;
  cursor_ds.alpha = (uchar)((int)((uint)cursor_ds.alpha * (uint)alpha) >> 7);
  cursor_ds.g = menu_soul_disp.rgb;
  DispSprD__FP9DISP_SPRT(&cursor_ds);
  return;
}

static void MenuSoulScrollArrowDisp(int off_x, int off_y, u_char alpha) {
	DISP_SPRT arrow_ds;
	
  float fVar1;
  DISP_SPRT arrow_ds;
  
  fVar1 = (float)off_x;
  PK2SendVram__FUiiii((uint)menu_soul_tex_addr,-1,-1,0);
  CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&arrow_ds,menu_glist_tex + 0x18);
  arrow_ds.x = arrow_ds.x + fVar1;
  arrow_ds.y = arrow_ds.y + (float)off_y;
  arrow_ds.b = menu_soul_disp.rgb;
  arrow_ds.r = menu_soul_disp.rgb;
  arrow_ds.alpha = (uchar)((int)((uint)arrow_ds.alpha * (uint)alpha) >> 7);
  arrow_ds.g = menu_soul_disp.rgb;
  DispSprD__FP9DISP_SPRT(&arrow_ds);
  CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&arrow_ds,menu_glist_tex + 0x19);
  arrow_ds.x = arrow_ds.x + fVar1;
  arrow_ds.b = menu_soul_disp.rgb;
  arrow_ds.y = arrow_ds.y + (float)off_y;
  arrow_ds.r = menu_soul_disp.rgb;
  arrow_ds.g = menu_soul_disp.rgb;
  arrow_ds.alpha = (uchar)((int)((uint)arrow_ds.alpha * (uint)alpha) >> 7);
  DispSprD__FP9DISP_SPRT(&arrow_ds);
  return;
}

static void MenuSoulScrollDisp(int off_x, int off_y, u_char alpha) {
	DISP_SPRT scroll_ds;
	float scroll_size;
	float scroll_y;
	float center_size;
	float scroll_scl;
	
  uint uVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  DISP_SPRT scroll_ds;
  
  if (menu_soul_ctrl.ref_ctrl.data_num < 9) {
    fVar5 = 251.0;
    fVar3 = 142.0;
  }
  else {
    fVar3 = (251.0 / (float)menu_soul_ctrl.ref_ctrl.data_num) *
            (float)menu_soul_ctrl.ref_ctrl.disp_start_pos + 142.0;
    fVar5 = 251.0 - (251.0 / (float)menu_soul_ctrl.ref_ctrl.data_num) *
                    (float)(menu_soul_ctrl.ref_ctrl.data_num + -9);
  }
  fVar6 = fVar5 - (float)((uint)(ushort)menu_glist_tex[26].h + (uint)(ushort)menu_glist_tex[28].h);
  PK2SendVram__FUiiii((uint)menu_soul_tex_addr,-1,-1,0);
  uVar2 = (uint)alpha;
  if (0.0 < fVar6) {
    fVar7 = (float)off_x;
    uVar1 = (uint)(ushort)menu_glist_tex[27].h;
    CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&scroll_ds,menu_glist_tex + 0x1a);
    fVar5 = (float)off_y;
    scroll_ds.x = scroll_ds.x + fVar7;
    scroll_ds.alphar = 0x48;
    scroll_ds.y = fVar3 + fVar5;
    fVar4 = fVar6 / (float)uVar1;
    scroll_ds.alpha = (uchar)((int)((uint)scroll_ds.alpha * (uint)alpha) >> 7);
    DispSprD__FP9DISP_SPRT(&scroll_ds);
    uVar1 = (uint)(ushort)menu_glist_tex[26].h;
    CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&scroll_ds,menu_glist_tex + 0x1b);
    scroll_ds.csy = fVar3 + (float)uVar1 + fVar5;
    scroll_ds.csx = scroll_ds.x + fVar7;
    scroll_ds.scw = 1.0;
    scroll_ds.alphar = 0x48;
    scroll_ds.alpha = (uchar)((int)((uint)scroll_ds.alpha * (uint)alpha) >> 7);
    fVar5 = fVar3 + (float)uVar1 + fVar6 + fVar5;
    scroll_ds.x = scroll_ds.csx;
    scroll_ds.y = scroll_ds.csy;
    scroll_ds.sch = fVar4;
    DispSprD__FP9DISP_SPRT(&scroll_ds);
    CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&scroll_ds,menu_glist_tex + 0x1c);
    scroll_ds.alphar = 0x48;
    scroll_ds.x = scroll_ds.x + fVar7;
    scroll_ds.alpha = (uchar)((int)(scroll_ds.alpha * uVar2) >> 7);
    scroll_ds.y = fVar5;
    DispSprD__FP9DISP_SPRT(&scroll_ds);
  }
  else {
    CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&scroll_ds,menu_glist_tex + 0x1a);
    fVar6 = (float)off_y;
    scroll_ds.csx = scroll_ds.x + (float)off_x;
    scroll_ds.scw = 1.0;
    scroll_ds.csy = fVar3 + fVar6;
    scroll_ds.alpha = (uchar)((int)(scroll_ds.alpha * uVar2) >> 7);
    if ((int)scroll_ds.h < 0) {
      fVar4 = (float)(scroll_ds.h & 1 | scroll_ds.h >> 1);
      fVar4 = fVar4 + fVar4;
    }
    else {
      fVar4 = (float)scroll_ds.h;
    }
    scroll_ds.sch = (fVar5 * 0.5) / fVar4;
    scroll_ds.alphar = 0x48;
    scroll_ds.x = scroll_ds.csx;
    scroll_ds.y = scroll_ds.csy;
    DispSprD__FP9DISP_SPRT(&scroll_ds);
    CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&scroll_ds,menu_glist_tex + 0x1c);
    scroll_ds.csx = scroll_ds.x + (float)off_x;
    scroll_ds.scw = 1.0;
    scroll_ds.csy = fVar3 + fVar5 * 0.5 + fVar6;
    if ((int)scroll_ds.h < 0) {
      fVar3 = (float)(scroll_ds.h & 1 | scroll_ds.h >> 1);
      fVar3 = fVar3 + fVar3;
    }
    else {
      fVar3 = (float)scroll_ds.h;
    }
    scroll_ds.sch = (fVar5 * 0.5) / fVar3;
    scroll_ds.alphar = 0x48;
    scroll_ds.alpha = (uchar)((int)(scroll_ds.alpha * uVar2) >> 7);
    scroll_ds.x = scroll_ds.csx;
    scroll_ds.y = scroll_ds.csy;
    DispSprD__FP9DISP_SPRT(&scroll_ds);
  }
  return;
}

static void MenuSoulCaptionDisp(int off_x, int off_y, u_char alpha) {
  DrawCmnCapGroup_W__FiiUcUi(3,3,alpha,0);
  return;
}

static void MenuSoulNumberDisp(int data, int num, int x, int y, u_char alpha, int pri, u_char zero_flg) {
  DrawCmnNumberTex__FiiP8SPRT_DATiiUciUc(data,num,menu_glist_tex + 8,x,y,alpha,pri,zero_flg);
  return;
}

static void MenuSoulNotHaveListDisp(int off_x, int off_y, u_char alpha) {
  DrawCmnCapGroup_W__FiiUcUi(0xc,0xc,alpha,0);
  return;
}

void SetSave_ListCompDispFlg(MC_SAVE_DATA *data) {
  data->addr = (uchar *)&list_comp_disp_flg;
  data->size = 1;
  return;
}

int* int * _fixed_array_verifyrange<int>(size_t v, size_t _max) {
  g3ddbgAssert__FbPCce(false,str_849);
  return (type_info *)v;
}

DISP_SOUL_LIST_DATA* DISP_SOUL_LIST_DATA * _fixed_array_verifyrange<DISP_SOUL_LIST_DATA>(size_t v, size_t _max) {
  g3ddbgAssert__FbPCce(false,str_849);
  return (type_info *)v;
}

static void __static_initialization_and_destruction_0(int __initialize_p, int __priority) {
  return;
}

type_info& DISP_SOUL_LIST_DATA type_info function() {
  g3ddbgAssert__FbPCce(false,str_849);
  return (type_info *)v;
}

static void global constructors keyed to MenuSoulListCompFlgInit() {
  __static_initialization_and_destruction_0(1,0xffff);
  return;
}
