// STATUS: NOT STARTED

#include "menu_item.h"

typedef struct {
	u_char sub_step;
	u_char cross_fade_flg;
	u_char conf_csr;
	MENU_REF_CTRL ref_ctrl;
} MENU_ITEM_CTRL;

typedef struct {
	char anim_step;
	char anim_timer;
	u_char rgb;
	char scroll_timer;
} MENU_ITEM_DISP;

typedef struct {
	int item_id;
	int have_num;
} DISP_ITEM_DATA;

struct fixed_array_base<DISP_ITEM_DATA,58,DISP_ITEM_DATA[58]> {
protected:
	DISP_ITEM_DATA m_aData[58];
	
public:
	fixed_array_base<DISP_ITEM_DATA,58,DISP_ITEM_DATA[58]>& operator=();
	fixed_array_base();
protected:
	fixed_array_base();
public:
	DISP_ITEM_DATA& operator[]();
	DISP_ITEM_DATA& operator[]();
	DISP_ITEM_DATA* data();
	DISP_ITEM_DATA* begin();
	DISP_ITEM_DATA* end();
	void fill();
	size_t size();
	bool empty();
};

struct fixed_array<DISP_ITEM_DATA,58> : fixed_array_base<DISP_ITEM_DATA,58,DISP_ITEM_DATA[58]> {
};

static void *menu_item_tex_addr = NULL;

static void (*menu_item_pad_func[3])(/* parameters unknown */) = {
	/* [0] = */ MenuItemPad,
	/* [1] = */ MenuItemNoUsePad,
	/* [2] = */ MenuItemUseSelPad
};

static fixed_array<DISP_ITEM_DATA,58> disp_item;
unsigned char DISP_ITEM_DATA type_info node[8];
static MENU_ITEM_CTRL menu_item_ctrl;
static MENU_ITEM_DISP menu_item_disp;

static void _fixed_array_assert(char *strType, size_t v0, size_t v1) {
	static char *str = 0x3bdb20;
	
  g3ddbgAssert__FbPCce(false,str_849);
  return (type_info *)v;
}

static void** void * * _fixed_array_verifyrange<void *>(size_t v, size_t _max) {
  if (_max <= v) {
    __tf14DISP_ITEM_DATA(0x3f2dc8,_max);
  }
  return (void **)0x0;
}

static char** char * * _fixed_array_verifyrange<char *>(size_t v, size_t _max) {
  if (_max <= v) {
    __tf14DISP_ITEM_DATA(0x3f2dd0,_max);
  }
  return (char **)0x0;
}

static unsigned int** unsigned int * * _fixed_array_verifyrange<unsigned int *>(size_t v, size_t _max) {
  if (_max <= v) {
    __tf14DISP_ITEM_DATA(0x3bdb68,_max);
  }
  return (uint **)0x0;
}

static void MenuItemInit() {
  menu_wrk.cursor = 0;
  MenuItemCtrlInit__Fv();
  MenuCrossFadeInit__Fv();
  if (menu_item_tex_addr == (void *)0x0) {
    printf("<<<<<<<<<WARNING FILE[%s] LINE[%d]>>>>>>>>>>\n");
    PrintWarningReal("Menu Item Tex Back reading failure\n");
    MenuItemTexLoadReq__Fv();
  }
  return;
}

static void MenuItemCtrlInit() {
  int data_num;
  
  menu_item_ctrl.conf_csr = '\x01';
  menu_item_ctrl.sub_step = '\0';
  menu_item_ctrl.cross_fade_flg = '\0';
  data_num = GetHaveItemTypeNum__Fv();
  MenuRefCtrlInit__FP13MENU_REF_CTRLi(&menu_item_ctrl.ref_ctrl,data_num);
  return;
}

void GetMenuItemTexMem() {
  uchar uVar1;
  uint size;
  
  if (menu_item_tex_addr != (void *)0x0) {
    LiberateMenuItemTexMem__Fv();
  }
  if (menu_item_tex_addr == (void *)0x0) {
    uVar1 = GetLanguage__Fv();
    size = GetFileSize((char)uVar1 + 0x2b);
    menu_item_tex_addr = mem_utilGetMem__Fi(size);
  }
  return;
}

void MenuItemTexLoadReq() {
  uchar uVar1;
  
  if (menu_item_tex_addr == (void *)0x0) {
    GetMenuItemTexMem__Fv();
  }
  uVar1 = GetLanguage__Fv();
  FileLoadReqEE((char)uVar1 + 0x2b,menu_item_tex_addr,2,(undefined1 *)0x0,(void *)0x0);
  return;
}

static int MenuItemTexLoadWait() {
  uchar uVar1;
  int iVar2;
  
  uVar1 = GetLanguage__Fv();
  iVar2 = FileLoadIsEnd2((char)uVar1 + 0x2b,menu_item_tex_addr);
  return (int)(iVar2 != 0);
}

static void SetDispItemData() {
	int i;
	int have_num;
	short int disp_count;
	
  fixed_array<DISP_ITEM_DATA,58> *pfVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  pfVar1 = &disp_item;
  iVar4 = 0;
  iVar3 = 0;
  do {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Z14DISP_ITEM_DATA_UiUi_PX01(iVar3,0x3a);
    ((fixed_array_base<DISP_ITEM_DATA,58,DISP_ITEM_DATA[58]> *)&((DISP_ITEM_DATA *)pfVar1)->item_id)
    ->m_aData[0].item_id = 0xff;
                    /* end of inlined section */
    iVar2 = iVar3 + 1;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Z14DISP_ITEM_DATA_UiUi_PX01(iVar3,0x3a);
    ((DISP_ITEM_DATA *)pfVar1)->have_num = 0;
                    /* end of inlined section */
    pfVar1 = (fixed_array<DISP_ITEM_DATA,58> *)((int)pfVar1 + 8);
    iVar3 = iVar2;
  } while (iVar2 < 7);
  iVar3 = 0;
  pfVar1 = &disp_item;
  do {
    iVar2 = GetPlyrItemHaveNum__Fi(iVar3);
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* end of inlined section */
    if (0 < iVar2) {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
      _fixed_array_verifyrange__H1Z14DISP_ITEM_DATA_UiUi_PX01(iVar4,0x3a);
      ((fixed_array_base<DISP_ITEM_DATA,58,DISP_ITEM_DATA[58]> *)
      &((DISP_ITEM_DATA *)pfVar1)->item_id)->m_aData[0].item_id = iVar3;
      _fixed_array_verifyrange__H1Z14DISP_ITEM_DATA_UiUi_PX01(iVar4,0x3a);
      ((DISP_ITEM_DATA *)pfVar1)->have_num = iVar2;
                    /* end of inlined section */
      pfVar1 = (fixed_array<DISP_ITEM_DATA,58> *)((int)pfVar1 + 8);
      iVar4 = (iVar4 + 1) * 0x10000 >> 0x10;
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < 0x3a);
  menu_item_ctrl.ref_ctrl.data_num = GetHaveItemTypeNum__Fv();
  return;
}

void MenuItem() {
  int iVar1;
  
  if (menu_wrk.step == '\0') {
    MenuItemInit__Fv();
    SetDispItemData__Fv();
    menu_wrk.step = '\x01';
  }
  if ((menu_wrk.step == '\x01') && (iVar1 = MenuItemTexLoadWait__Fv(), iVar1 != 0)) {
    MenuItemDispInit__Fv();
    iVar1 = menu_item_ctrl.ref_ctrl.data_pos;
    menu_wrk.step = '\x02';
    if (menu_item_ctrl.ref_ctrl.data_num != 0) {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
      _fixed_array_verifyrange__H1Z14DISP_ITEM_DATA_UiUi_PX01(menu_item_ctrl.ref_ctrl.data_pos,0x3a)
      ;
      MenuCrossFadeInStart__Fii
                ((uint)menu_item_ctrl.cross_fade_flg,
                 disp_item.field0_0x0.m_aData[iVar1].item_id + 0xe5f);
                    /* end of inlined section */
    }
    menu_item_ctrl.sub_step = '\0';
  }
  if (menu_wrk.step == '\x02') {
    if (menu_item_ctrl.ref_ctrl.data_num == 0) {
      MenuNonItemPad__Fv();
    }
    else {
      if ((code *)menu_item_pad_func[menu_item_ctrl.sub_step] != (code *)0x0) {
        (*(code *)menu_item_pad_func[menu_item_ctrl.sub_step])();
      }
      MenuCmnCrossFade__Fv();
    }
  }
  if ((menu_wrk.step == '\x03') && (menu_item_disp.anim_step == '\x04')) {
    SetNextMenuStep__Fi(8);
    LiberateMenuItemTexMem__Fv();
    MenuCrossFadeTexLoadCancel__Fi(0);
    MenuCrossFadeTexLoadCancel__Fi(1);
    LiberateAllMenuCrossFadeTexMem__Fv();
  }
  return;
}

static void MenuItemPad() {
	short int disp_num;
	u_char load_flg;
	
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  DISP_ITEM_DATA *pDVar5;
  long lVar6;
  
  bVar1 = false;
  lVar6 = (long)(short)menu_item_ctrl.ref_ctrl.data_num;
  if (7 < (long)(short)menu_item_ctrl.ref_ctrl.data_num) {
    lVar6 = 7;
  }
  iVar4 = (int)lVar6;
  if (((pad[0].rpt & 0x1000U) == 0) && (iVar2 = GetPadAnalogRpt__Fi(0), iVar2 == 0)) {
    if (((pad[0].rpt & 0x4000U) == 0) &&
       (iVar3 = GetPadAnalogRpt__Fi(1), iVar2 = menu_item_ctrl.ref_ctrl.data_pos, iVar3 == 0)) {
      if (**paddat == 1) {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
        _fixed_array_verifyrange__H1Z14DISP_ITEM_DATA_UiUi_PX01
                  (menu_item_ctrl.ref_ctrl.data_pos,0x3a);
        iVar4 = GetPlyrItemHaveNum__Fi(disp_item.field0_0x0.m_aData[iVar2].item_id);
        if (iVar4 != 0) {
          pDVar5 = disp_item.field0_0x0.m_aData + menu_item_ctrl.ref_ctrl.data_pos;
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
          _fixed_array_verifyrange__H1Z14DISP_ITEM_DATA_UiUi_PX01
                    (menu_item_ctrl.ref_ctrl.data_pos,0x3a);
          MenuItemUseItemMain__Fi(pDVar5->item_id);
        }
        goto LAB_001f9604;
      }
                    /* end of inlined section */
      if (*paddat[1] == 1) {
        SystemBankPlay__FiiiiP11_SND_3D_SETii(1,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
        MenuItemOutReq__Fv();
        goto LAB_001f9604;
      }
      if ((pad[0].one & 4U) == 0) {
        if ((pad[0].one & 8U) != 0) {
          iVar4 = MenuRefMovePageDown__FP13MENU_REF_CTRLPiii
                            (&menu_item_ctrl.ref_ctrl,&menu_wrk.cursor,iVar4,7);
          bVar1 = iVar4 != 0;
        }
        goto LAB_001f9604;
      }
      iVar4 = MenuRefMovePageUp__FP13MENU_REF_CTRLPiii
                        (&menu_item_ctrl.ref_ctrl,&menu_wrk.cursor,iVar4,7);
    }
    else {
      iVar4 = MenuRefMovePadLdown__FP13MENU_REF_CTRLPiii
                        (&menu_item_ctrl.ref_ctrl,&menu_wrk.cursor,iVar4,7);
    }
  }
  else {
    iVar4 = MenuRefMovePadLup__FP13MENU_REF_CTRLPiii
                      (&menu_item_ctrl.ref_ctrl,&menu_wrk.cursor,iVar4,7);
  }
  if (iVar4 != 0) {
    bVar1 = true;
  }
LAB_001f9604:
  if (bVar1) {
    SystemBankPlay__FiiiiP11_SND_3D_SETii(0,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
    MenuCrossFadeOutStart__Fi((uint)menu_item_ctrl.cross_fade_flg);
    iVar4 = menu_item_ctrl.ref_ctrl.data_pos;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
    menu_item_ctrl.cross_fade_flg = menu_item_ctrl.cross_fade_flg ^ 1;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Z14DISP_ITEM_DATA_UiUi_PX01(menu_item_ctrl.ref_ctrl.data_pos,0x3a);
    MenuCrossFadeInStart__Fii
              ((uint)menu_item_ctrl.cross_fade_flg,
               disp_item.field0_0x0.m_aData[iVar4].item_id + 0xe5f);
  }
  return;
}

static void MenuItemNoUsePad() {
  int iVar1;
  
  iVar1 = MenuCmnConfirmPad__Fv();
  if (iVar1 != 0) {
    menu_item_ctrl.sub_step = '\0';
  }
  return;
}

static void MenuNonItemPad() {
  if (*paddat[1] == 1) {
    SystemBankPlay__FiiiiP11_SND_3D_SETii(1,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
    SetNextMenuStep__Fi(8);
  }
  return;
}

static void MenuItemUseItemMain(int item_id) {
	static char __FUNCTION__[20] = {
		/* [0] = */ 77,
		/* [1] = */ 101,
		/* [2] = */ 110,
		/* [3] = */ 117,
		/* [4] = */ 73,
		/* [5] = */ 116,
		/* [6] = */ 101,
		/* [7] = */ 109,
		/* [8] = */ 85,
		/* [9] = */ 115,
		/* [10] = */ 101,
		/* [11] = */ 73,
		/* [12] = */ 116,
		/* [13] = */ 101,
		/* [14] = */ 109,
		/* [15] = */ 77,
		/* [16] = */ 97,
		/* [17] = */ 105,
		/* [18] = */ 110,
		/* [19] = */ 0
	};
	
  int iVar1;
  
  if (0x39 < item_id) {
    SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
    PrintAssertReal("Error! MenuItemUseItemMain item_id %d");
  }
  iVar1 = GetItemType__Fi(item_id);
  switch(iVar1) {
  case 0:
  case 4:
  case 5:
    break;
  case 1:
    iVar1 = GetPlyrEquipmentFilmType__Fv();
    if (iVar1 != item_id) {
LAB_001f97d0:
      SystemBankPlay__FiiiiP11_SND_3D_SETii(3,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
      menu_item_ctrl.sub_step = '\x02';
      goto LAB_001f9854;
    }
    break;
  case 2:
    if (plyr_wrk.cmn_wrk.st.hp != plyr_wrk.cmn_wrk.st.hpmax) goto LAB_001f97d0;
    break;
  case 3:
    if (plyr_wrk.cmn_wrk.st.sp != plyr_wrk.cmn_wrk.st.spmax) goto LAB_001f97d0;
    break;
  default:
    printf("<<<<<<<<<WARNING FILE[%s] LINE[%d]>>>>>>>>>>\n");
    PrintWarningReal("ITEM ID Error!!");
    goto LAB_001f9854;
  }
  SystemBankPlay__FiiiiP11_SND_3D_SETii(2,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
  menu_item_ctrl.sub_step = '\x01';
LAB_001f9854:
  if (menu_item_ctrl.sub_step == '\x02') {
    menu_item_ctrl.conf_csr = '\x01';
  }
  return;
}

static void MenuItemUseSelPad() {
  int iVar1;
  
  if (((((pad[0].rpt & 0x8000U) == 0) && (iVar1 = GetPadAnalogRpt__Fi(2), iVar1 == 0)) &&
      ((pad[0].rpt & 0x2000U) == 0)) && (iVar1 = GetPadAnalogRpt__Fi(3), iVar1 == 0)) {
    if (**paddat == 1) {
      if (menu_item_ctrl.conf_csr == '\0') {
        MenuItemUse__Fv();
        menu_item_ctrl.sub_step = '\0';
      }
      else {
        SystemBankPlay__FiiiiP11_SND_3D_SETii(3,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
        menu_item_ctrl.sub_step = '\0';
      }
    }
    else if (*paddat[1] == 1) {
      SystemBankPlay__FiiiiP11_SND_3D_SETii(1,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
      menu_item_ctrl.sub_step = '\0';
    }
  }
  else {
    SystemBankPlay__FiiiiP11_SND_3D_SETii(0,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
    menu_item_ctrl.conf_csr = menu_item_ctrl.conf_csr ^ 1;
  }
  return;
}

static void MenuItemUse() {
	static char __FUNCTION__[12] = {
		/* [0] = */ 77,
		/* [1] = */ 101,
		/* [2] = */ 110,
		/* [3] = */ 117,
		/* [4] = */ 73,
		/* [5] = */ 116,
		/* [6] = */ 101,
		/* [7] = */ 109,
		/* [8] = */ 85,
		/* [9] = */ 115,
		/* [10] = */ 101,
		/* [11] = */ 0
	};
	int item_id;
	
  uchar uVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = menu_item_ctrl.ref_ctrl.data_pos;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  _fixed_array_verifyrange__H1Z14DISP_ITEM_DATA_UiUi_PX01(menu_item_ctrl.ref_ctrl.data_pos,0x3a);
  iVar4 = disp_item.field0_0x0.m_aData[iVar4].item_id;
                    /* end of inlined section */
  iVar3 = GetItemType__Fi(iVar4);
  switch(iVar3) {
  case 0:
  case 4:
  case 5:
  default:
    SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
    PrintAssertReal("Error!! %s item_id[%d]");
    goto LAB_001f9a9c;
  case 1:
    iVar3 = 3;
    break;
  case 2:
    iVar3 = 7;
    break;
  case 3:
    iVar3 = 9;
  }
  SystemBankPlay__FiiiiP11_SND_3D_SETii(iVar3,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
LAB_001f9a9c:
  uVar1 = ItemUse__FiUc(iVar4,'\x01');
  if (uVar1 != '\0') {
    iVar4 = GetPlyrItemHaveNum__Fi(iVar4);
    if (iVar4 == 0) {
      SetDispItemData__Fv();
      iVar4 = menu_item_ctrl.ref_ctrl.data_pos;
      if (menu_item_ctrl.ref_ctrl.data_num < 1) {
                    /* end of inlined section */
        MenuCrossFadeOutStart__Fi((uint)menu_item_ctrl.cross_fade_flg);
        return;
      }
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
      _fixed_array_verifyrange__H1Z14DISP_ITEM_DATA_UiUi_PX01(menu_item_ctrl.ref_ctrl.data_pos,0x3a)
      ;
                    /* end of inlined section */
      if ((disp_item.field0_0x0.m_aData[iVar4].item_id == 0xff) &&
         (menu_item_ctrl.ref_ctrl.data_pos = menu_item_ctrl.ref_ctrl.data_pos + -1,
         menu_item_ctrl.ref_ctrl.data_num <= menu_wrk.cursor)) {
        menu_wrk.cursor = menu_item_ctrl.ref_ctrl.data_num + -1;
      }
      MenuCrossFadeOutStart__Fi((uint)menu_item_ctrl.cross_fade_flg);
      iVar4 = menu_item_ctrl.ref_ctrl.data_pos;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
      bVar2 = menu_item_ctrl.cross_fade_flg ^ 1;
      menu_item_ctrl.cross_fade_flg = bVar2;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
      _fixed_array_verifyrange__H1Z14DISP_ITEM_DATA_UiUi_PX01(menu_item_ctrl.ref_ctrl.data_pos,0x3a)
      ;
      MenuCrossFadeInStart__Fii((uint)bVar2,disp_item.field0_0x0.m_aData[iVar4].item_id + 0xe5f);
      return;
    }
    SetDispItemData__Fv();
  }
  return;
}

static void MenuItemOutReq() {
  menu_item_disp.anim_step = '\x03';
  menu_wrk.step = '\x03';
  menu_item_disp.anim_timer = '\0';
  return;
}

void LiberateMenuItemTexMem() {
  if (menu_item_tex_addr != (void *)0x0) {
    mem_utilFreeMem__FPv(menu_item_tex_addr);
    menu_item_tex_addr = (void *)0x0;
  }
  return;
}

void MenuItemTexLoadCancel() {
  uchar uVar1;
  int iVar2;
  
  iVar2 = MenuItemTexLoadWait__Fv();
  if (iVar2 == 0) {
    uVar1 = GetLanguage__Fv();
    FileLoadCancel2((char)uVar1 + 0x2b,menu_item_tex_addr,(undefined1 *)0x0,(void *)0x0);
  }
  return;
}

static void MenuItemDispInit() {
  menu_item_disp.rgb = '@';
  menu_item_disp.scroll_timer = '\0';
  menu_item_disp.anim_step = '\0';
  menu_item_disp.anim_timer = '\0';
  return;
}

void MenuItemDisp() {
	u_char alpha;
	
  uchar alpha;
  
  alpha = '\0';
  if (((byte)(menu_wrk.step - 2) < 2) &&
     (Zero2Anim2D_CsrAnimCtrl__FPcPUc(&menu_item_disp.scroll_timer,&menu_item_disp.rgb),
     menu_item_disp.anim_step != '\x04')) {
    MenuInOutAnimCtrl__FPcT0PUc(&menu_item_disp.anim_step,&menu_item_disp.anim_timer,&alpha);
    MenuItemTitleDisp__FiiUc(0,0,alpha);
    if (menu_item_ctrl.ref_ctrl.data_num < 1) {
      MenuItemNoHaveItemDisp__FiiUc(0,0,alpha);
    }
    else {
      MenuItemWindowDisp__FiiUc(0,0,alpha);
      MenuItemLensDisp__FiiUc(0,0,alpha);
      MenuItemPictureDisp__FiiUc(0,0,alpha);
      MenuPlyrItemDisp__FiiUc(0,0,alpha);
      MenuItemPlyrDataDisp__FiiUc(0,0,alpha);
      MenuItemCaptionDisp__FiiUc(0,0,alpha);
      if (menu_item_ctrl.sub_step == '\x01') {
        MenuItemConfirmDisp__FiiUc(0,0,0x80);
      }
      else if (menu_item_ctrl.sub_step == '\x02') {
        MenuItemUseSelDisp__FiiUc(0,0,0x80);
      }
    }
  }
  return;
}

static void MenuItemTitleDisp(int off_x, int off_y, u_char alpha) {
	DISP_SPRT title_ds;
	
  float fVar1;
  float fVar2;
  DISP_SPRT title_ds;
  
  fVar1 = (float)off_x;
  PK2SendVram__FUiiii(0x19368c0,-1,-1,0);
  CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&title_ds,menu_item + 0x67);
  fVar2 = (float)off_y;
  title_ds.x = title_ds.x + fVar1;
  title_ds.y = title_ds.y + fVar2;
  title_ds.alpha = (uchar)((int)((uint)title_ds.alpha * (uint)alpha) >> 7);
  DispSprD__FP9DISP_SPRT(&title_ds);
  CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&title_ds,menu_item + 0x68);
  title_ds.x = title_ds.x + fVar1;
  title_ds.y = title_ds.y + fVar2;
  title_ds.alpha = (uchar)((int)((uint)title_ds.alpha * (uint)alpha) >> 7);
  DispSprD__FP9DISP_SPRT(&title_ds);
  PK2SendVram__FUiiii((uint)menu_item_tex_addr,-1,-1,0);
  CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&title_ds,menu_item + 0x65);
  title_ds.x = title_ds.x + fVar1;
  title_ds.y = title_ds.y + fVar2;
  title_ds.alpha = (uchar)((int)((uint)title_ds.alpha * (uint)alpha) >> 7);
  DispSprD__FP9DISP_SPRT(&title_ds);
  CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&title_ds,menu_item + 0x66);
  title_ds.x = title_ds.x + fVar1;
  title_ds.y = title_ds.y + fVar2;
  title_ds.alpha = (uchar)((int)((uint)title_ds.alpha * (uint)alpha) >> 7);
  DispSprD__FP9DISP_SPRT(&title_ds);
  return;
}

static void MenuItemPlyrDataDisp(int off_x, int off_y, u_char alpha) {
  MenuPlyrDataDisp__FiiUc(0x22,0x39,alpha);
  return;
}

static void MenuItemWindowDisp(int off_x, int off_y, u_char alpha) {
	DISP_SPRT title_ds;
	int i;
	DISP_SQAR dsq;
	SQAR_DAT item_list_bg;
	SQAR_DAT item_msg_bg;
	
  undefined *puVar1;
  ulong *puVar2;
  uchar *puVar3;
  SPRT_DAT *pSVar4;
  int iVar5;
  uint uVar6;
  float fVar7;
  float fVar8;
  DISP_SPRT title_ds;
  DISP_SQAR dsq;
  SQAR_DAT item_list_bg;
  SQAR_DAT item_msg_bg;
  
  fVar7 = (float)off_x;
  fVar8 = (float)off_y;
  puVar1 = (undefined *)((int)&item_list_bg.h + 3);
  uVar6 = (uint)puVar1 & 7;
  puVar2 = (ulong *)(puVar1 + -uVar6);
  *puVar2 = *puVar2 & -1L << (uVar6 + 1) * 8 | DAT_003bdcb8 >> (7 - uVar6) * 8;
  item_list_bg._0_8_ = DAT_003bdcb8;
  puVar1 = (undefined *)((int)&item_list_bg.y + 3);
  uVar6 = (uint)puVar1 & 7;
  puVar2 = (ulong *)(puVar1 + -uVar6);
  *puVar2 = *puVar2 & -1L << (uVar6 + 1) * 8 | DAT_003bdcc0 >> (7 - uVar6) * 8;
  item_list_bg._8_8_ = DAT_003bdcc0;
  uVar6 = (uint)&item_list_bg.alpha & 7;
  puVar3 = &item_list_bg.alpha + -uVar6;
  *(ulong *)puVar3 = *(ulong *)puVar3 & -1L << (uVar6 + 1) * 8 | DAT_003bdcc8 >> (7 - uVar6) * 8;
  item_list_bg._16_8_ = DAT_003bdcc8;
  puVar1 = (undefined *)((int)&item_msg_bg.h + 3);
  uVar6 = (uint)puVar1 & 7;
  puVar2 = (ulong *)(puVar1 + -uVar6);
  *puVar2 = *puVar2 & -1L << (uVar6 + 1) * 8 | DAT_003bdcd0 >> (7 - uVar6) * 8;
  item_msg_bg._0_8_ = DAT_003bdcd0;
  puVar1 = (undefined *)((int)&item_msg_bg.y + 3);
  uVar6 = (uint)puVar1 & 7;
  puVar2 = (ulong *)(puVar1 + -uVar6);
  *puVar2 = *puVar2 & -1L << (uVar6 + 1) * 8 | DAT_003bdcd8 >> (7 - uVar6) * 8;
  item_msg_bg._8_8_ = DAT_003bdcd8;
  uVar6 = (uint)&item_msg_bg.alpha & 7;
  puVar3 = &item_msg_bg.alpha + -uVar6;
  *(ulong *)puVar3 = *(ulong *)puVar3 & -1L << (uVar6 + 1) * 8 | DAT_003bdce0 >> (7 - uVar6) * 8;
  item_msg_bg._16_8_ = DAT_003bdce0;
  PK2SendVram__FUiiii((uint)menu_item_tex_addr,-1,-1,0);
  iVar5 = 6;
  CopySqrDToSqr__FP9DISP_SQARP8SQAR_DAT(&dsq,&item_list_bg);
  dsq.alpha = (uchar)((int)((uint)dsq.alpha * (uint)alpha) >> 7);
  DispSqrD__FP9DISP_SQAR(&dsq);
  CopySqrDToSqr__FP9DISP_SQARP8SQAR_DAT(&dsq,&item_msg_bg);
  dsq.alpha = (uchar)((int)((uint)dsq.alpha * (uint)alpha) >> 7);
  DispSqrD__FP9DISP_SQAR(&dsq);
  MenuItemListScrollDisp__FiiUc(off_x,off_y,alpha);
  pSVar4 = menu_item;
  do {
    pSVar4 = pSVar4 + 1;
    CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&title_ds,pSVar4);
    iVar5 = iVar5 + -1;
    uVar6 = (uint)alpha;
    title_ds.x = title_ds.x + fVar7;
    title_ds.y = title_ds.y + fVar8;
    title_ds.alpha = (uchar)((int)(title_ds.alpha * uVar6) >> 7);
    DispSprD__FP9DISP_SPRT(&title_ds);
  } while (-1 < iVar5);
  iVar5 = 7;
  pSVar4 = menu_item + 8;
  do {
    CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&title_ds,pSVar4);
    iVar5 = iVar5 + -1;
    pSVar4 = pSVar4 + 1;
    title_ds.x = title_ds.x + fVar7;
    title_ds.y = title_ds.y + fVar8;
    title_ds.alpha = (uchar)((int)(title_ds.alpha * uVar6) >> 7);
    DispSprD__FP9DISP_SPRT(&title_ds);
  } while (-1 < iVar5);
  iVar5 = 4;
  pSVar4 = menu_item + 0x10;
  do {
    CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&title_ds,pSVar4);
    iVar5 = iVar5 + -1;
    pSVar4 = pSVar4 + 1;
    title_ds.x = title_ds.x + fVar7;
    title_ds.y = title_ds.y + fVar8;
    title_ds.alpha = (uchar)((int)(title_ds.alpha * uVar6) >> 7);
    DispSprD__FP9DISP_SPRT(&title_ds);
  } while (-1 < iVar5);
  return;
}

static void MenuItemListScrollDisp(int off_x, int off_y, u_char alpha) {
	DISP_SPRT scroll_ds;
	DISP_SQAR dsq;
	int i;
	SQAR_DAT scroll_bg_up;
	SQAR_DAT scroll_bg_down;
	int scroll_size;
	int scroll_y;
	int center_size;
	
  undefined *puVar1;
  ulong *puVar2;
  uchar *puVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  DISP_SPRT scroll_ds;
  DISP_SQAR dsq;
  SQAR_DAT scroll_bg_up;
  SQAR_DAT scroll_bg_down;
  
  puVar1 = (undefined *)((int)&scroll_bg_up.h + 3);
  uVar7 = (uint)puVar1 & 7;
  puVar2 = (ulong *)(puVar1 + -uVar7);
  *puVar2 = *puVar2 & -1L << (uVar7 + 1) * 8 | DAT_003bdce8 >> (7 - uVar7) * 8;
  scroll_bg_up._0_8_ = DAT_003bdce8;
  puVar1 = (undefined *)((int)&scroll_bg_up.y + 3);
  uVar7 = (uint)puVar1 & 7;
  puVar2 = (ulong *)(puVar1 + -uVar7);
  *puVar2 = *puVar2 & -1L << (uVar7 + 1) * 8 | DAT_003bdcf0 >> (7 - uVar7) * 8;
  scroll_bg_up._8_8_ = DAT_003bdcf0;
  uVar7 = (uint)&scroll_bg_up.alpha & 7;
  puVar3 = &scroll_bg_up.alpha + -uVar7;
  *(ulong *)puVar3 = *(ulong *)puVar3 & -1L << (uVar7 + 1) * 8 | DAT_003bdcf8 >> (7 - uVar7) * 8;
  scroll_bg_up._16_8_ = DAT_003bdcf8;
  puVar1 = (undefined *)((int)&scroll_bg_down.h + 3);
  uVar7 = (uint)puVar1 & 7;
  puVar2 = (ulong *)(puVar1 + -uVar7);
  *puVar2 = *puVar2 & -1L << (uVar7 + 1) * 8 | DAT_003bdd00 >> (7 - uVar7) * 8;
  scroll_bg_down._0_8_ = DAT_003bdd00;
  puVar1 = (undefined *)((int)&scroll_bg_down.y + 3);
  uVar7 = (uint)puVar1 & 7;
  puVar2 = (ulong *)(puVar1 + -uVar7);
  *puVar2 = *puVar2 & -1L << (uVar7 + 1) * 8 | DAT_003bdd08 >> (7 - uVar7) * 8;
  scroll_bg_down._8_8_ = DAT_003bdd08;
  uVar7 = (uint)&scroll_bg_down.alpha & 7;
  puVar3 = &scroll_bg_down.alpha + -uVar7;
  *(ulong *)puVar3 = *(ulong *)puVar3 & -1L << (uVar7 + 1) * 8 | DAT_003bdd10 >> (7 - uVar7) * 8;
  scroll_bg_down._16_8_ = DAT_003bdd10;
  if (menu_item_ctrl.ref_ctrl.data_num < 7) {
    iVar11 = 0xce;
    iVar6 = 0xaf;
  }
  else {
    if (menu_item_ctrl.ref_ctrl.data_num == 0) {
      trap(7);
    }
    iVar6 = (0xce / menu_item_ctrl.ref_ctrl.data_num) * menu_item_ctrl.ref_ctrl.disp_start_pos +
            0xaf;
    iVar11 = 0xce - (0xce / menu_item_ctrl.ref_ctrl.data_num) *
                    (menu_item_ctrl.ref_ctrl.data_num + -7);
  }
  fVar14 = (float)off_x;
  iVar10 = 0;
  fVar13 = (float)off_y;
  iVar5 = iVar11 - ((uint)(ushort)menu_item[26].h + (uint)(ushort)menu_item[27].h);
  PK2SendVram__FUiiii((uint)menu_item_tex_addr,-1,-1,0);
  iVar9 = 0xe;
  CopySqrDToSqr__FP9DISP_SQARP8SQAR_DAT(&dsq,&scroll_bg_up);
  DispSqrD__FP9DISP_SQAR(&dsq);
  CopySqrDToSqr__FP9DISP_SQARP8SQAR_DAT(&dsq,&scroll_bg_down);
  DispSqrD__FP9DISP_SQAR(&dsq);
  CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&scroll_ds,menu_item + 0x16);
  scroll_ds.x = scroll_ds.x + fVar14;
  scroll_ds.y = scroll_ds.y + fVar13;
  scroll_ds.alpha = (uchar)((int)((uint)scroll_ds.alpha * (uint)alpha) >> 7);
  DispSprD__FP9DISP_SPRT(&scroll_ds);
  CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&scroll_ds,menu_item + 0x17);
  scroll_ds.x = scroll_ds.x + fVar14;
  scroll_ds.y = scroll_ds.y + fVar13;
  scroll_ds.alpha = (uchar)((int)((uint)scroll_ds.alpha * (uint)alpha) >> 7);
  DispSprD__FP9DISP_SPRT(&scroll_ds);
  do {
    iVar9 = iVar9 + -1;
    CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&scroll_ds,menu_item + 0x18);
    fVar12 = (float)iVar10;
    iVar10 = iVar10 + 10;
    uVar7 = (uint)alpha;
    scroll_ds.x = scroll_ds.x + fVar14;
    scroll_ds.y = scroll_ds.y + fVar13 + fVar12;
    scroll_ds.alpha = (uchar)((int)(scroll_ds.alpha * uVar7) >> 7);
    DispSprD__FP9DISP_SPRT(&scroll_ds);
  } while (-1 < iVar9);
  CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&scroll_ds,menu_item + 0x19);
  scroll_ds.x = scroll_ds.x + fVar14;
  scroll_ds.y = scroll_ds.y + fVar13;
  scroll_ds.alpha = (uchar)((int)(scroll_ds.alpha * uVar7) >> 7);
  DispSprD__FP9DISP_SPRT(&scroll_ds);
  uVar8 = (uint)alpha;
  if (iVar5 < 0) {
    CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&scroll_ds,menu_item + 0x1a);
    uVar7 = (iVar11 / 2) / (int)scroll_ds.h;
    scroll_ds.csy = (float)(iVar6 + off_y);
    scroll_ds.csx = scroll_ds.x + fVar14;
    scroll_ds.scw = 1.0;
    scroll_ds.alpha = (uchar)((int)(scroll_ds.alpha * uVar8) >> 7);
    if (scroll_ds.h == 0) {
      trap(7);
    }
    if ((int)uVar7 < 0) {
      fVar12 = (float)(uVar7 & 1 | uVar7 >> 1);
      scroll_ds.sch = fVar12 + fVar12;
    }
    else {
      scroll_ds.sch = (float)uVar7;
    }
    scroll_ds.x = scroll_ds.csx;
    scroll_ds.y = scroll_ds.csy;
    DispSprD__FP9DISP_SPRT(&scroll_ds);
    CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&scroll_ds,menu_item + 0x1b);
    uVar7 = (iVar11 / 2) / (int)scroll_ds.h;
    scroll_ds.csx = scroll_ds.x + fVar14;
    scroll_ds.csy = (float)(iVar6 + iVar11 / 2 + off_y);
    scroll_ds.scw = 1.0;
    if (scroll_ds.h == 0) {
      trap(7);
    }
    if ((int)uVar7 < 0) {
      fVar12 = (float)(uVar7 & 1 | uVar7 >> 1);
      scroll_ds.sch = fVar12 + fVar12;
    }
    else {
      scroll_ds.sch = (float)uVar7;
    }
    scroll_ds.alpha = (uchar)((int)(scroll_ds.alpha * uVar8) >> 7);
    scroll_ds.x = scroll_ds.csx;
    scroll_ds.y = scroll_ds.csy;
    DispSprD__FP9DISP_SPRT(&scroll_ds);
  }
  else {
    CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&scroll_ds,menu_item + 0x1a);
    scroll_ds.y = (float)(iVar6 + off_y);
    scroll_ds.x = scroll_ds.x + fVar14;
    scroll_ds.alpha = (uchar)((int)(scroll_ds.alpha * uVar7) >> 7);
    DispSprD__FP9DISP_SPRT(&scroll_ds);
    iVar6 = iVar6 + (uint)(ushort)menu_item[26].h;
    if (-1 < (int)(iVar5 - (uint)(ushort)menu_item[28].h)) {
      uVar4 = (uint)(ushort)menu_item[28].h;
      do {
        iVar5 = iVar5 - uVar4;
        CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&scroll_ds,menu_item + 0x1c);
        scroll_ds.y = (float)(iVar6 + off_y);
        scroll_ds.x = scroll_ds.x + fVar14;
        scroll_ds.alpha = (uchar)((int)(scroll_ds.alpha * uVar7) >> 7);
        DispSprD__FP9DISP_SPRT(&scroll_ds);
        uVar4 = (uint)(ushort)menu_item[28].h;
        iVar6 = iVar6 + uVar4;
      } while (-1 < (int)(iVar5 - uVar4));
    }
    CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&scroll_ds,menu_item + 0x1c);
    scroll_ds.csy = (float)(iVar6 + off_y);
    scroll_ds.csx = scroll_ds.x + fVar14;
    scroll_ds.scw = 1.0;
    scroll_ds.alpha = (uchar)((int)(scroll_ds.alpha * uVar8) >> 7);
    if ((int)scroll_ds.h < 0) {
      fVar12 = (float)(scroll_ds.h & 1 | scroll_ds.h >> 1);
      fVar12 = fVar12 + fVar12;
    }
    else {
      fVar12 = (float)scroll_ds.h;
    }
    scroll_ds.sch = (float)iVar5 / fVar12;
    scroll_ds.x = scroll_ds.csx;
    scroll_ds.y = scroll_ds.csy;
    DispSprD__FP9DISP_SPRT(&scroll_ds);
    CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&scroll_ds,menu_item + 0x1b);
    scroll_ds.y = (float)(iVar6 + iVar5 + off_y);
    scroll_ds.x = scroll_ds.x + fVar14;
    scroll_ds.alpha = (uchar)((int)(scroll_ds.alpha * uVar8) >> 7);
    DispSprD__FP9DISP_SPRT(&scroll_ds);
  }
  CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&scroll_ds,menu_item + 0x1d);
  scroll_ds.x = scroll_ds.x + fVar14;
  scroll_ds.b = menu_item_disp.rgb;
  scroll_ds.y = scroll_ds.y + fVar13;
  scroll_ds.r = menu_item_disp.rgb;
  scroll_ds.g = menu_item_disp.rgb;
  scroll_ds.alpha = (uchar)((int)(scroll_ds.alpha * uVar8) >> 7);
  DispSprD__FP9DISP_SPRT(&scroll_ds);
  CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&scroll_ds,menu_item + 0x1e);
  scroll_ds.x = scroll_ds.x + fVar14;
  scroll_ds.b = menu_item_disp.rgb;
  scroll_ds.y = scroll_ds.y + fVar13;
  scroll_ds.r = menu_item_disp.rgb;
  scroll_ds.g = menu_item_disp.rgb;
  scroll_ds.alpha = (uchar)((int)(scroll_ds.alpha * uVar8) >> 7);
  DispSprD__FP9DISP_SPRT(&scroll_ds);
  return;
}

static void MenuPlyrItemDisp(int off_x, int off_y, u_char alpha) {
	int i;
	int j;
	short int disp_num;
	u_char col_label;
	DISP_SPRT item_ds;
	static int item_sel_on[7][4] = {
		/* [0] = */ {
			/* [0] = */ 51,
			/* [1] = */ 53,
			/* [2] = */ 54,
			/* [3] = */ 52
		},
		/* [1] = */ {
			/* [0] = */ 55,
			/* [1] = */ 57,
			/* [2] = */ 58,
			/* [3] = */ 56
		},
		/* [2] = */ {
			/* [0] = */ 59,
			/* [1] = */ 61,
			/* [2] = */ 62,
			/* [3] = */ 60
		},
		/* [3] = */ {
			/* [0] = */ 63,
			/* [1] = */ 65,
			/* [2] = */ 66,
			/* [3] = */ 64
		},
		/* [4] = */ {
			/* [0] = */ 67,
			/* [1] = */ 69,
			/* [2] = */ 70,
			/* [3] = */ 68
		},
		/* [5] = */ {
			/* [0] = */ 71,
			/* [1] = */ 73,
			/* [2] = */ 74,
			/* [3] = */ 72
		},
		/* [6] = */ {
			/* [0] = */ 75,
			/* [1] = */ 77,
			/* [2] = */ 78,
			/* [3] = */ 76
		}
	};
	static int item_sel_off[7][3] = {
		/* [0] = */ {
			/* [0] = */ 79,
			/* [1] = */ 81,
			/* [2] = */ 80
		},
		/* [1] = */ {
			/* [0] = */ 82,
			/* [1] = */ 84,
			/* [2] = */ 83
		},
		/* [2] = */ {
			/* [0] = */ 85,
			/* [1] = */ 87,
			/* [2] = */ 86
		},
		/* [3] = */ {
			/* [0] = */ 88,
			/* [1] = */ 90,
			/* [2] = */ 89
		},
		/* [4] = */ {
			/* [0] = */ 91,
			/* [1] = */ 93,
			/* [2] = */ 92
		},
		/* [5] = */ {
			/* [0] = */ 94,
			/* [1] = */ 96,
			/* [2] = */ 95
		},
		/* [6] = */ {
			/* [0] = */ 97,
			/* [1] = */ 99,
			/* [2] = */ 98
		}
	};
	
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  DISP_SPRT item_ds;
  ushort disp_num;
  int local_94;
  int *local_90;
  int local_8c;
  
  iVar7 = 0;
  iVar2 = (int)(short)menu_item_ctrl.ref_ctrl.data_num;
  if (7 < (short)menu_item_ctrl.ref_ctrl.data_num) {
    iVar2 = 7;
  }
  if (0 < iVar2) {
    fVar11 = (float)off_x;
    fVar13 = (float)off_y;
    piVar8 = &item_sel_on_1039;
    local_90 = &item_sel_off_1040;
    local_94 = 4;
    local_8c = 0;
    fVar12 = fVar11;
    fVar14 = fVar13;
    iVar6 = off_y;
    do {
      uVar4 = (uint)alpha;
      if (iVar7 == menu_wrk.cursor) {
        iVar3 = 0;
        CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&item_ds,menu_item + *piVar8);
        item_ds.x = item_ds.x + fVar12;
        item_ds.y = item_ds.y + fVar13;
        item_ds.alpha = (uchar)((int)((uint)item_ds.alpha * (uint)alpha) >> 7);
        DispSprD__FP9DISP_SPRT(&item_ds);
        iVar5 = *(int *)(&DAT_003bdd1c + local_8c);
        do {
          CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&item_ds,menu_item + iVar5);
          uVar1 = item_ds.w * iVar3;
          iVar3 = iVar3 + 1;
          if ((int)uVar1 < 0) {
            fVar9 = (float)(uVar1 & 1 | uVar1 >> 1);
            fVar9 = fVar9 + fVar9;
          }
          else {
            fVar9 = (float)uVar1;
          }
          item_ds.x = item_ds.x + fVar12 + fVar9;
          item_ds.y = item_ds.y + fVar13;
          item_ds.alpha = (uchar)((int)((uint)item_ds.alpha * (uint)alpha) >> 7);
          DispSprD__FP9DISP_SPRT(&item_ds);
        } while (iVar3 < 0x14);
        iVar5 = 4;
        CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&item_ds,menu_item + piVar8[2]);
        item_ds.x = item_ds.x + fVar11;
        item_ds.y = item_ds.y + fVar14;
        item_ds.alpha = (uchar)((int)(item_ds.alpha * uVar4) >> 7);
        DispSprD__FP9DISP_SPRT(&item_ds);
        CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&item_ds,menu_item + piVar8[3]);
        item_ds.x = item_ds.x + fVar11;
        item_ds.y = item_ds.y + fVar14;
        item_ds.alpha = (uchar)((int)(item_ds.alpha * uVar4) >> 7);
        DispSprD__FP9DISP_SPRT(&item_ds);
        MenuItemExplanation__FiiUc(off_x,off_y,alpha);
      }
      else {
        iVar3 = 0;
        CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&item_ds,menu_item + *local_90);
        item_ds.x = item_ds.x + fVar12;
        item_ds.y = item_ds.y + fVar13;
        item_ds.alpha = (uchar)((int)(item_ds.alpha * uVar4) >> 7);
        DispSprD__FP9DISP_SPRT(&item_ds);
        iVar5 = *(int *)((int)&item_sel_off_1040 + local_94);
        do {
          CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&item_ds,menu_item + iVar5);
          uVar1 = item_ds.h * iVar3;
          iVar3 = iVar3 + 1;
          if ((int)uVar1 < 0) {
            fVar9 = (float)(uVar1 & 1 | uVar1 >> 1);
            fVar9 = fVar9 + fVar9;
          }
          else {
            fVar9 = (float)uVar1;
          }
          if ((int)item_ds.h < 0) {
            fVar10 = (float)(item_ds.h & 1 | item_ds.h >> 1);
            fVar10 = fVar10 + fVar10;
          }
          else {
            fVar10 = (float)item_ds.h;
          }
          item_ds.crx = item_ds.x + fVar12 + fVar9 + fVar10;
          item_ds.rot = 90.0;
          item_ds.cry = item_ds.y + fVar13;
          item_ds.alpha = (uchar)((int)(item_ds.alpha * uVar4) >> 7);
          item_ds.x = item_ds.crx;
          item_ds.y = item_ds.cry;
          DispSprD__FP9DISP_SPRT(&item_ds);
        } while (iVar3 < 0x17);
        iVar5 = 3;
        CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&item_ds,menu_item + local_90[2]);
        item_ds.x = item_ds.x + fVar12;
        item_ds.y = item_ds.y + fVar13;
        item_ds.alpha = (uchar)((int)(item_ds.alpha * uVar4) >> 7);
        DispSprD__FP9DISP_SPRT(&item_ds);
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
      }
      iVar3 = menu_item_ctrl.ref_ctrl.disp_start_pos + iVar7;
      _fixed_array_verifyrange__H1Z14DISP_ITEM_DATA_UiUi_PX01(iVar3,0x3a);
      PrintMsg__Fiiiiiii(0x2c,disp_item.field0_0x0.m_aData[iVar3].item_id,off_x + 0x50,iVar6 + 0x9f,
                         iVar5,(uint)alpha,0);
      iVar3 = menu_item_ctrl.ref_ctrl.disp_start_pos + iVar7;
      _fixed_array_verifyrange__H1Z14DISP_ITEM_DATA_UiUi_PX01(iVar3,0x3a);
      if (disp_item.field0_0x0.m_aData[iVar3].item_id == 0) {
                    /* end of inlined section */
        PrintMsg__Fiiiiiii(8,3,off_x + 0x14c,iVar6 + 0xa1,iVar5,(uint)alpha,0);
        PrintMsg__Fiiiiiii(8,3,off_x + 0x158,iVar6 + 0xa1,iVar5,(uint)alpha,0);
      }
      else {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
        iVar3 = menu_item_ctrl.ref_ctrl.disp_start_pos + iVar7;
        _fixed_array_verifyrange__H1Z14DISP_ITEM_DATA_UiUi_PX01(iVar3,0x3a);
        PrintNumber_N__FiiiiUcUciUcUc
                  (disp_item.field0_0x0.m_aData[iVar3].have_num,2,off_x + 0x14a,iVar6 + 0xa1,
                   (uchar)iVar5,alpha,0,'\x01',0);
                    /* end of inlined section */
      }
      iVar7 = iVar7 + 1;
      iVar6 = iVar6 + 0x23;
      local_94 = local_94 + 0xc;
      local_90 = local_90 + 3;
      local_8c = local_8c + 0x10;
      piVar8 = piVar8 + 4;
    } while (iVar7 < iVar2);
  }
  return;
}

static void MenuItemExplanation(int off_x, int off_y, u_char alpha) {
	int i;
	int j;
	int k;
	DISP_SPRT item_ds;
	static int item_doc_tex[5][4] = {
		/* [0] = */ {
			/* [0] = */ 31,
			/* [1] = */ 32,
			/* [2] = */ 33,
			/* [3] = */ 34
		},
		/* [1] = */ {
			/* [0] = */ 35,
			/* [1] = */ 36,
			/* [2] = */ 37,
			/* [3] = */ 38
		},
		/* [2] = */ {
			/* [0] = */ 39,
			/* [1] = */ 40,
			/* [2] = */ 41,
			/* [3] = */ 42
		},
		/* [3] = */ {
			/* [0] = */ 43,
			/* [1] = */ 44,
			/* [2] = */ 45,
			/* [3] = */ 46
		},
		/* [4] = */ {
			/* [0] = */ 47,
			/* [1] = */ 48,
			/* [2] = */ 49,
			/* [3] = */ 50
		}
	};
	
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  DISP_SPRT item_ds;
  
  fVar9 = (float)off_x;
  iVar7 = 0;
  do {
    iVar3 = iVar7 * 0x10;
    iVar6 = 0;
    piVar5 = &item_doc_tex_1044 + iVar7 * 4;
    do {
      if (iVar6 == 1) {
        iVar1 = *(int *)((int)&item_doc_tex_1044 + iVar3);
        iVar4 = 0;
        do {
          CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&item_ds,menu_item + iVar1);
          uVar2 = item_ds.w * iVar4;
          iVar4 = iVar4 + 1;
          if ((int)uVar2 < 0) {
            fVar8 = (float)(uVar2 & 1 | uVar2 >> 1);
            fVar8 = fVar8 + fVar8;
          }
          else {
            fVar8 = (float)uVar2;
          }
          item_ds.y = item_ds.y + (float)off_y;
          item_ds.x = item_ds.x + fVar8 + fVar9;
          item_ds.alpha = (uchar)((int)((uint)item_ds.alpha * (uint)alpha) >> 7);
          DispSprD__FP9DISP_SPRT(&item_ds);
        } while (iVar4 < 0xb);
      }
      else {
        CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&item_ds,menu_item + *piVar5);
        item_ds.x = item_ds.x + fVar9;
        item_ds.y = item_ds.y + (float)off_y;
        item_ds.alpha = (uchar)((int)((uint)item_ds.alpha * (uint)alpha) >> 7);
        DispSprD__FP9DISP_SPRT(&item_ds);
      }
      iVar6 = iVar6 + 1;
      piVar5 = piVar5 + 1;
      iVar3 = iVar3 + 4;
    } while (iVar6 < 4);
    iVar7 = iVar7 + 1;
  } while (iVar7 < 5);
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  iVar7 = menu_item_ctrl.ref_ctrl.disp_start_pos + menu_wrk.cursor;
  _fixed_array_verifyrange__H1Z14DISP_ITEM_DATA_UiUi_PX01(iVar7,0x3a);
  PrintMsg__Fiiiiiiiii
            (0x2b,disp_item.field0_0x0.m_aData[iVar7].item_id,off_x + 0x191,off_y + 0x120,5,
             (uint)alpha,0xa0,0,2);
  return;
}

static void MenuItemPictureDisp(int off_x, int off_y, u_char alpha) {
	DISP_SPRT item_ds;
	int disp_num;
	u_char fade_alpha[2];
	
  int iVar1;
  uint *puVar2;
  DISP_SPRT item_ds;
  uchar fade_alpha [2];
  
  fade_alpha[1] = '\0';
  iVar1 = menu_item_ctrl.ref_ctrl.data_num;
  if (7 < menu_item_ctrl.ref_ctrl.data_num) {
    iVar1 = 7;
  }
  fade_alpha[0] = '\0';
  if (iVar1 != 0) {
    GetMenuCrossFadeAlpha__FPUc(fade_alpha);
    if (menu_wrk.step != '\x02') {
      fade_alpha[menu_item_ctrl.cross_fade_flg ^ 1] = '\0';
    }
    iVar1 = CheckCrossFadeDisp__Fi(menu_item_ctrl.cross_fade_flg ^ 1);
    if ((iVar1 != 0) && (fade_alpha[menu_item_ctrl.cross_fade_flg ^ 1] != '\0')) {
      puVar2 = (uint *)GetCrossFadeDataAddr__Fi(menu_item_ctrl.cross_fade_flg ^ 1);
      MenuTim2SendVram__FPUiii(puVar2,0x2bc0,12000);
      CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&item_ds,menu_item + 100);
      item_ds.tex0 = 0x2005dc066932abc0;
      item_ds.alpha =
           (uchar)((int)((uint)item_ds.alpha * (uint)fade_alpha[menu_item_ctrl.cross_fade_flg ^ 1])
                  >> 7);
      DispSprD__FP9DISP_SPRT(&item_ds);
    }
    if (menu_wrk.step != '\x02') {
      fade_alpha[menu_item_ctrl.cross_fade_flg] = alpha;
    }
    iVar1 = CheckCrossFadeDisp__Fi((uint)menu_item_ctrl.cross_fade_flg);
    if ((iVar1 != 0) && (fade_alpha[menu_item_ctrl.cross_fade_flg] != '\0')) {
      puVar2 = (uint *)GetCrossFadeDataAddr__Fi((uint)menu_item_ctrl.cross_fade_flg);
      MenuTim2SendVram__FPUiii(puVar2,0x2bc0,12000);
      CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&item_ds,menu_item + 100);
      item_ds.tex0 = 0x2005dc066932abc0;
      item_ds.alpha =
           (uchar)((int)((uint)item_ds.alpha * (uint)fade_alpha[menu_item_ctrl.cross_fade_flg]) >> 7
                  );
      DispSprD__FP9DISP_SPRT(&item_ds);
    }
  }
  PK2SendVram__FUiiii((uint)menu_item_tex_addr,-1,-1,0);
  CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&item_ds,menu_item);
  item_ds.x = item_ds.x + (float)off_x;
  item_ds.y = item_ds.y + (float)off_y;
  item_ds.alpha = (uchar)((int)((uint)item_ds.alpha * (uint)alpha) >> 7);
  DispSprD__FP9DISP_SPRT(&item_ds);
  return;
}

static void MenuItemLensDisp(int off_x, int off_y, u_char alpha) {
	DISP_SPRT item_ds;
	
  DISP_SPRT item_ds;
  
  PK2SendVram__FUiiii((uint)menu_item_tex_addr,-1,-1,0);
  CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&item_ds,menu_item + 0x15);
  item_ds.csx = item_ds.x + (float)off_x;
  item_ds.csy = item_ds.y + (float)off_y;
  item_ds.sch = 2.0;
  item_ds.alphar = 0x48;
  item_ds.alpha = (uchar)((int)((uint)item_ds.alpha * (uint)alpha) >> 7);
  item_ds.scw = 2.0;
  item_ds.x = item_ds.csx;
  item_ds.y = item_ds.csy;
  DispSprD__FP9DISP_SPRT(&item_ds);
  return;
}

static void MenuItemCaptionDisp(int off_x, int off_y, u_char alpha) {
  DrawCmnCapGroup_W__FiiUcUi(3,3,alpha,0);
  return;
}

static void MenuItemConfirmDisp(int off_x, int off_y, u_char alpha) {
  int iVar1;
  
  MenuCmnConfirmWinDisp__FiiUcUi(0,0,alpha,0x80);
  iVar1 = menu_item_ctrl.ref_ctrl.data_pos;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  _fixed_array_verifyrange__H1Z14DISP_ITEM_DATA_UiUi_PX01(menu_item_ctrl.ref_ctrl.data_pos,0x3a);
  PrintMsg__Fiiiiiii(0x52,disp_item.field0_0x0.m_aData[iVar1].item_id,0x44,0xc6,1,(uint)alpha,0x80);
  return;
}

static void MenuItemUseSelDisp(int off_x, int off_y, u_char alpha) {
  int iVar1;
  
  DrawCmnWindow__FUiffffUcUc(0,(float)(off_x + 0x18),(float)(off_y + 0xb2),592.0,112.0,alpha,0x80);
  DrawCmnSelCsr__FUiffUcfUc
            (0,(float)((uint)menu_item_ctrl.conf_csr * 0xcf + off_x + 0x9b),(float)(off_y + 0xe6),
             alpha,0.0,'\0');
  DrawCmnSelYes__FUiffUc(0,(float)(off_x + 0x99),(float)(off_y + 0xe8),alpha);
  DrawCmnSelNo__FUiffUc(0,(float)(off_x + 0x169),(float)(off_y + 0xe8),alpha);
  iVar1 = menu_item_ctrl.ref_ctrl.data_pos;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  _fixed_array_verifyrange__H1Z14DISP_ITEM_DATA_UiUi_PX01(menu_item_ctrl.ref_ctrl.data_pos,0x3a);
  PrintMsg__Fiiiiiii(0x33,disp_item.field0_0x0.m_aData[iVar1].item_id,0x44,0xc6,1,(uint)alpha,0);
  return;
}

static void MenuItemNoHaveItemDisp(int off_x, int off_y, u_char alpha) {
	DISP_STR msg_data;
	MSG_WIN_DAT msg_win;
	
  DISP_STR msg_data;
  MSG_WIN_DAT msg_win;
  
  SetMsgDefData__FP8DISP_STRi(&msg_data,0x36);
  SetMsgWinDefData__FP11MSG_WIN_DATi(&msg_win,0x36);
  DrawCmnWindow__FUiffffUcUc(0,msg_win.x,msg_win.y,msg_win.w,msg_win.h,alpha,'f');
  PrintMsg__Fiiiiiii(0x36,0,msg_data.pos_x,msg_data.pos_y,1,(uint)alpha,0);
  DrawCmnCapGroup_W__FiiUcUi(0xc,0xc,alpha,0);
  return;
}

DISP_ITEM_DATA* DISP_ITEM_DATA * _fixed_array_verifyrange<DISP_ITEM_DATA>(size_t v, size_t _max) {
  g3ddbgAssert__FbPCce(false,str_849);
  return (type_info *)v;
}

static void __static_initialization_and_destruction_0(int __initialize_p, int __priority) {
  return;
}

type_info& DISP_ITEM_DATA type_info function() {
  g3ddbgAssert__FbPCce(false,str_849);
  return (type_info *)v;
}

static void global constructors keyed to GetMenuItemTexMem() {
  __static_initialization_and_destruction_0(1,0xffff);
  return;
}
