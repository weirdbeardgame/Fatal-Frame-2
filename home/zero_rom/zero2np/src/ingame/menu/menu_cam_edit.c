// STATUS: NOT STARTED

#include "menu_cam_edit.h"

typedef struct {
	char mode;
	char step;
	char menu_csr;
	char equip_pos_csr;
	char lens_csr;
	char edit_sel_csr;
	char conf_csr;
	char sp_equip_init_flg;
	char edit_init_flg;
	char gem_anim_flg;
	MENU_REF_CTRL ref_ctrl;
} MENU_CAM_EDIT_CTRL;

typedef struct {
	char anim_step;
	char anim_timer;
	char csr_anim_timer;
	char scroll_anim_timer;
	short int gem_anim_timer;
} MENU_CAM_EDIT_DISP;

typedef struct {
	int lens_label;
} DISP_LENS_DATA;

typedef struct {
	char data_pos;
	char lv;
	short int timer;
} GEM_ANIM_CTRL;

struct fixed_array_base<DISP_LENS_DATA,10,DISP_LENS_DATA[10]> {
protected:
	DISP_LENS_DATA m_aData[10];
	
public:
	fixed_array_base<DISP_LENS_DATA,10,DISP_LENS_DATA[10]>& operator=();
	fixed_array_base();
protected:
	fixed_array_base();
public:
	DISP_LENS_DATA& operator[]();
	DISP_LENS_DATA& operator[]();
	DISP_LENS_DATA* data();
	DISP_LENS_DATA* begin();
	DISP_LENS_DATA* end();
	void fill();
	size_t size();
	bool empty();
};

struct fixed_array<DISP_LENS_DATA,10> : fixed_array_base<DISP_LENS_DATA,10,DISP_LENS_DATA[10]> {
};

struct fixed_array_base<int,12,int *> {
protected:
	int *m_aData;
	
public:
	fixed_array_base<int,12,int *>& operator=();
	fixed_array_base();
protected:
	fixed_array_base();
public:
	int& operator[]();
	int& operator[]();
	int* data();
	int* begin();
	int* end();
	void fill();
	size_t size();
	bool empty();
};

struct reference_fixed_array<int,12> : fixed_array_base<int,12,int *> {
};

static void (*menu_cam_edit_pad[12])(/* parameters unknown */) = {
	/* [0] = */ MenuCamEditSelMenuPad,
	/* [1] = */ MenuCamEditErrorPad,
	/* [2] = */ MenuCamEditSelLensEquipPosPad,
	/* [3] = */ MenuCamEditEquipLensSelPad,
	/* [4] = */ MenuCamEditItemSelPad,
	/* [5] = */ MenuCamEditItemSelPad,
	/* [6] = */ MenuCamEditGemAddConfPad,
	/* [7] = */ MenuCamEditErrorPad,
	/* [8] = */ MenuCamEditErrorPad,
	/* [9] = */ MenuCamEditPowerUpConfPad,
	/* [10] = */ MenuCamEditErrorPad,
	/* [11] = */ MenuCamEditErrorPad
};

static void (*menu_cam_edit_disp_func[12])(/* parameters unknown */) = {
	/* [0] = */ MenuCamEditSelMenuDisp,
	/* [1] = */ MenuCamEditLensNothingErrorDisp,
	/* [2] = */ MenuCamEditSelLensEquipPosDisp,
	/* [3] = */ MenuCamEditSelEquipLensDisp,
	/* [4] = */ MenuCamEditSelGemAddPosDisp,
	/* [5] = */ MenuCamEditSelPowerUpPosDisp,
	/* [6] = */ MenuCamEditGemAddConfDisp,
	/* [7] = */ MenuCamEditGemAddErrorDisp,
	/* [8] = */ MenuCamEditGemNothingErrorDisp,
	/* [9] = */ MenuCamEditPowerUpConfDisp,
	/* [10] = */ MenuCamEditPowerUpLvMaxErrorDisp,
	/* [11] = */ MenuCamEditPowerUpNothingErrorDisp
};

static fixed_array<DISP_LENS_DATA,10> disp_lens_data;
static reference_fixed_array<int,3> base_msg_tbl;
static reference_fixed_array<int,10> lens_msg_tbl;
unsigned char DISP_LENS_DATA type_info node[8];
unsigned char CVariable<char, 0, 3> type_info node[8];
unsigned char CVariable<char, 0, 9> type_info node[8];
static MENU_CAM_EDIT_CTRL menu_cam_edit_ctrl;
static MENU_CAM_EDIT_DISP menu_cam_edit_disp;
static GEM_ANIM_CTRL base_gem_anim_ctrl;
static GEM_ANIM_CTRL lens_gem_anim_ctrl;

static void _fixed_array_assert(char *strType, size_t v0, size_t v1) {
	static char *str = 0x3bc990;
	
  g3ddbgAssert__FbPCce(false,str_688);
  return (type_info *)v;
}

static void** void * * _fixed_array_verifyrange<void *>(size_t v, size_t _max) {
  if (_max <= v) {
    __tft9CVariable3Zci0i3(0x3f2b10,_max);
  }
  return (void **)0x0;
}

static char** char * * _fixed_array_verifyrange<char *>(size_t v, size_t _max) {
  if (_max <= v) {
    __tft9CVariable3Zci0i3(0x3f2b18,_max);
  }
  return (char **)0x0;
}

static unsigned int** unsigned int * * _fixed_array_verifyrange<unsigned int *>(size_t v, size_t _max) {
  if (_max <= v) {
    __tft9CVariable3Zci0i3(0x3bc9d8,_max);
  }
  return (uint **)0x0;
}

void MenuCamEditInit() {
  MenuCamEditCtrlInit__Fv();
  MenuCamEditSetDispLensData__Fv();
  memset(&base_gem_anim_ctrl,-1,4);
  memset(&lens_gem_anim_ctrl,-1,4);
  return;
}

static void MenuCamEditCtrlInit() {
  int data_num;
  
  menu_cam_edit_ctrl.mode = '\0';
  menu_cam_edit_ctrl.step = '\0';
  menu_cam_edit_ctrl.menu_csr = '\0';
  menu_cam_edit_ctrl.equip_pos_csr = '\0';
  menu_cam_edit_ctrl.lens_csr = '\0';
  menu_cam_edit_ctrl.edit_sel_csr = '\0';
  menu_cam_edit_ctrl.conf_csr = '\0';
  menu_cam_edit_ctrl.sp_equip_init_flg = '\0';
  menu_cam_edit_ctrl.edit_init_flg = '\0';
  menu_cam_edit_ctrl.gem_anim_flg = '\0';
  data_num = GetHaveReinforcedLensNum__Fv();
  MenuRefCtrlInit__FP13MENU_REF_CTRLi(&menu_cam_edit_ctrl.ref_ctrl,data_num);
  return;
}

static void MenuCamEditSetDispLensData() {
	int i;
	int count;
	int idx;
	int bit;
	
  bool bVar1;
  fixed_array<DISP_LENS_DATA,10> *pfVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  pfVar2 = &disp_lens_data;
  uVar3 = 1;
  bVar1 = true;
  disp_lens_data.field0_0x0.m_aData[0].lens_label = 0;
  iVar4 = 0;
  do {
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
    if (!bVar1) {
      SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
      PrintAssertReal("IsUp Illegal Access %d MAX %d");
    }
    iVar5 = iVar4;
    if (((&m_plyr_camera.camera_power_up.mTemperedRenzFlg)[(int)uVar3 >> 5].flag_32[0] &
        1 << (uVar3 & 0x1f)) != 0) {
                    /* end of inlined section */
      iVar5 = iVar4 + 1;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
      _fixed_array_verifyrange__H1Z14DISP_LENS_DATA_UiUi_PX01(iVar4,10);
      ((DISP_LENS_DATA *)pfVar2)->lens_label = uVar3;
                    /* end of inlined section */
      pfVar2 = (fixed_array<DISP_LENS_DATA,10> *)((int)pfVar2 + 4);
    }
    uVar3 = uVar3 + 1;
    bVar1 = (int)uVar3 < 10;
    iVar4 = iVar5;
  } while (bVar1);
  return;
}

int MenuCamEditMain() {
	int res;
	
  uint uVar1;
  
  if (menu_cam_edit_ctrl.step == '\0') {
    MenuCamEditDispInit__Fv();
    menu_cam_edit_ctrl.step = '\x02';
  }
  if (((menu_cam_edit_ctrl.step == '\x02') && (menu_cam_edit_ctrl.gem_anim_flg == '\0')) &&
     ((code *)menu_cam_edit_pad[menu_cam_edit_ctrl.mode] != (code *)0x0)) {
    (*(code *)menu_cam_edit_pad[menu_cam_edit_ctrl.mode])();
  }
  uVar1 = 0;
  if (menu_cam_edit_ctrl.step == '\x03') {
    uVar1 = (uint)(menu_cam_edit_disp.anim_step == '\x04');
  }
  return uVar1;
}

static void MenuCamEditSelMenuPad() {
  int iVar1;
  
  if (((pad[0].rpt & 0x1000U) == 0) && (iVar1 = GetPadAnalogRpt__Fi(0), iVar1 == 0)) {
    if (((pad[0].rpt & 0x4000U) == 0) && (iVar1 = GetPadAnalogRpt__Fi(1), iVar1 == 0)) {
      if (**paddat == 1) {
        MenuCamEditSelMenuPadDecision__Fv();
        return;
      }
      if (*paddat[1] != 1) {
        return;
      }
      SystemBankPlay__FiiiiP11_SND_3D_SETii(1,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
      MenuCamEditMoveTop__Fv();
      return;
    }
    SystemBankPlay__FiiiiP11_SND_3D_SETii(0,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
    iVar1 = menu_cam_edit_ctrl.menu_csr + 1;
  }
  else {
    SystemBankPlay__FiiiiP11_SND_3D_SETii(0,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
    iVar1 = menu_cam_edit_ctrl.menu_csr + 2;
  }
  menu_cam_edit_ctrl.menu_csr = (char)(iVar1 % 3);
  return;
}

static void MenuCamEditSelMenuPadDecision() {
	static char __FUNCTION__[30] = {
		/* [0] = */ 77,
		/* [1] = */ 101,
		/* [2] = */ 110,
		/* [3] = */ 117,
		/* [4] = */ 67,
		/* [5] = */ 97,
		/* [6] = */ 109,
		/* [7] = */ 69,
		/* [8] = */ 100,
		/* [9] = */ 105,
		/* [10] = */ 116,
		/* [11] = */ 83,
		/* [12] = */ 101,
		/* [13] = */ 108,
		/* [14] = */ 77,
		/* [15] = */ 101,
		/* [16] = */ 110,
		/* [17] = */ 117,
		/* [18] = */ 80,
		/* [19] = */ 97,
		/* [20] = */ 100,
		/* [21] = */ 68,
		/* [22] = */ 101,
		/* [23] = */ 99,
		/* [24] = */ 105,
		/* [25] = */ 115,
		/* [26] = */ 105,
		/* [27] = */ 111,
		/* [28] = */ 110,
		/* [29] = */ 0
	};
	
  int iVar1;
  
  if (menu_cam_edit_ctrl.menu_csr == '\x01') {
    SystemBankPlay__FiiiiP11_SND_3D_SETii(3,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
    menu_cam_edit_ctrl.mode = '\x04';
LAB_001e7920:
    if (menu_cam_edit_ctrl.edit_init_flg != '\0') {
      menu_cam_edit_ctrl.edit_sel_csr = '\0';
      menu_cam_edit_ctrl.ref_ctrl.disp_start_pos = 0;
      menu_cam_edit_ctrl.ref_ctrl.data_pos = 0;
      menu_cam_edit_ctrl.edit_init_flg = '\0';
    }
    menu_cam_edit_ctrl.sp_equip_init_flg = '\x01';
  }
  else {
    if (menu_cam_edit_ctrl.menu_csr < '\x02') {
      if (menu_cam_edit_ctrl.menu_csr == '\0') {
        iVar1 = GetHaveReinforcedLensNum__Fv();
        if (0 < iVar1) {
          SystemBankPlay__FiiiiP11_SND_3D_SETii(3,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
          if (((uint)m_plyr_camera.camera_power_up.mCamPartsSetFlg.flag_32[0] & 2) == 0) {
            menu_cam_edit_ctrl.mode = '\x03';
          }
          else {
                    /* end of inlined section */
            menu_cam_edit_ctrl.mode = '\x02';
          }
          if (menu_cam_edit_ctrl.sp_equip_init_flg != '\0') {
            menu_cam_edit_ctrl.lens_csr = '\0';
            menu_cam_edit_ctrl.ref_ctrl.disp_start_pos = 0;
            menu_cam_edit_ctrl.ref_ctrl.data_pos = 0;
            menu_cam_edit_ctrl.sp_equip_init_flg = '\0';
          }
          menu_cam_edit_disp.csr_anim_timer = '\0';
          menu_cam_edit_ctrl.equip_pos_csr = '\0';
          menu_cam_edit_ctrl.edit_init_flg = '\x01';
          return;
        }
        SystemBankPlay__FiiiiP11_SND_3D_SETii(2,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
        menu_cam_edit_ctrl.mode = '\x01';
        return;
      }
    }
    else if (menu_cam_edit_ctrl.menu_csr == '\x02') {
      SystemBankPlay__FiiiiP11_SND_3D_SETii(3,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
      menu_cam_edit_ctrl.mode = '\x05';
      goto LAB_001e7920;
    }
    SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
    PrintAssertReal("Error! %s");
  }
  return;
}

static void MenuCamEditMoveTop() {
  menu_cam_edit_disp.anim_step = '\x03';
  menu_cam_edit_ctrl.step = '\x03';
  menu_cam_edit_disp.anim_timer = '\0';
  MenuCamGoToTopReq__Fv();
  return;
}

static void MenuCamEditSelLensEquipPosPad() {
	int csr_range;
	
  int iVar1;
  int iVar2;
  
  iVar1 = GetEquipReinforcedLensNum__Fv();
  iVar1 = iVar1 + 1;
  if (2 < iVar1) {
    iVar1 = 3;
  }
  if (((pad[0].rpt & 0x8000U) == 0) && (iVar2 = GetPadAnalogRpt__Fi(2), iVar2 == 0)) {
    if (((pad[0].rpt & 0x2000U) == 0) && (iVar2 = GetPadAnalogRpt__Fi(3), iVar2 == 0)) {
      if (**paddat == 1) {
        SystemBankPlay__FiiiiP11_SND_3D_SETii(3,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
        menu_cam_edit_ctrl.mode = '\x03';
        return;
      }
      if (*paddat[1] == 1) {
        SystemBankPlay__FiiiiP11_SND_3D_SETii(1,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
        menu_cam_edit_ctrl.mode = '\0';
        return;
      }
      return;
    }
    SystemBankPlay__FiiiiP11_SND_3D_SETii(0,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
    if (((uint)m_plyr_camera.camera_power_up.mCamPartsSetFlg.flag_32[0] & 2) == 0) {
      menu_cam_edit_ctrl.equip_pos_csr = '\0';
      return;
    }
                    /* end of inlined section */
    if (iVar1 == 0) {
      trap(7);
    }
    iVar2 = menu_cam_edit_ctrl.equip_pos_csr + 1;
  }
  else {
    SystemBankPlay__FiiiiP11_SND_3D_SETii(0,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
    if (((uint)m_plyr_camera.camera_power_up.mCamPartsSetFlg.flag_32[0] & 2) == 0) {
      menu_cam_edit_ctrl.equip_pos_csr = '\0';
      return;
    }
                    /* end of inlined section */
    if (iVar1 == 0) {
      trap(7);
    }
    iVar2 = menu_cam_edit_ctrl.equip_pos_csr + iVar1 + -1;
  }
  menu_cam_edit_ctrl.equip_pos_csr = (char)(iVar2 % iVar1);
  return;
}

static void MenuCamEditEquipLensSelPad() {
	int i;
	int disp_num;
	int data_pos_back_up;
	fixed_array<char,3> equip_special;
	
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  fixed_array<char,3> equip_special;
  
  iVar4 = menu_cam_edit_ctrl.ref_ctrl.data_pos;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  iVar3 = menu_cam_edit_ctrl.ref_ctrl.data_num;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  if (3 < menu_cam_edit_ctrl.ref_ctrl.data_num) {
    iVar3 = 3;
  }
  _fixed_array_verifyrange__H1Zc_UiUi_PX01(0,3);
  GetSubFuncArray__14CNEquipTrayWrkPc(&m_plyr_camera.eq_tray,(char *)&equip_special);
                    /* end of inlined section */
  if (((pad[0].rpt & 0x1000U) == 0) && (iVar2 = GetPadAnalogRpt__Fi(0), iVar2 == 0)) {
    if (((pad[0].rpt & 0x4000U) == 0) && (iVar2 = GetPadAnalogRpt__Fi(1), iVar2 == 0)) {
      if (**paddat != 1) {
                    /* end of inlined section */
        if (*paddat[1] != 1) {
          return;
        }
        SystemBankPlay__FiiiiP11_SND_3D_SETii(1,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
        if (((uint)m_plyr_camera.camera_power_up.mCamPartsSetFlg.flag_32[0] & 2) == 0) {
          menu_cam_edit_ctrl.mode = '\0';
          return;
        }
        menu_cam_edit_ctrl.mode = '\x02';
        return;
      }
      iVar4 = 0;
      do {
        if (2 < iVar4) {
          SystemBankPlay__FiiiiP11_SND_3D_SETii(3,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
          cVar1 = menu_cam_edit_ctrl.equip_pos_csr;
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
          if (((uint)m_plyr_camera.camera_power_up.mCamPartsSetFlg.flag_32[0] & 2) == 0) {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
            _fixed_array_verifyrange__H1Zc_UiUi_PX01(0,3);
            iVar4 = menu_cam_edit_ctrl.ref_ctrl.data_pos;
            _fixed_array_verifyrange__H1Z14DISP_LENS_DATA_UiUi_PX01
                      (menu_cam_edit_ctrl.ref_ctrl.data_pos,10);
                    /* end of inlined section */
            menu_cam_edit_ctrl.mode = '\0';
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
            equip_special.field0_0x0.m_aData[0] =
                 *(char *)&disp_lens_data.field0_0x0.m_aData[iVar4].lens_label;
          }
          else {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
            _fixed_array_verifyrange__H1Zc_UiUi_PX01(menu_cam_edit_ctrl.equip_pos_csr,3);
            iVar4 = menu_cam_edit_ctrl.ref_ctrl.data_pos;
            _fixed_array_verifyrange__H1Z14DISP_LENS_DATA_UiUi_PX01
                      (menu_cam_edit_ctrl.ref_ctrl.data_pos,10);
                    /* end of inlined section */
            menu_cam_edit_ctrl.mode = '\x02';
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
            equip_special.field0_0x0.m_aData[cVar1] =
                 *(char *)&disp_lens_data.field0_0x0.m_aData[iVar4].lens_label;
          }
          _fixed_array_verifyrange__H1Zc_UiUi_PX01(0,3);
          SetSubFuncArray__14CNEquipTrayWrkPc(&m_plyr_camera.eq_tray,(char *)&equip_special);
          return;
        }
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
        _fixed_array_verifyrange__H1Zc_UiUi_PX01(iVar4,3);
        iVar3 = menu_cam_edit_ctrl.ref_ctrl.data_pos;
        cVar1 = equip_special.field0_0x0.m_aData[iVar4];
        _fixed_array_verifyrange__H1Z14DISP_LENS_DATA_UiUi_PX01
                  (menu_cam_edit_ctrl.ref_ctrl.data_pos,10);
        iVar4 = iVar4 + 1;
      } while ((long)cVar1 != (long)disp_lens_data.field0_0x0.m_aData[iVar3].lens_label);
                    /* end of inlined section */
      iVar3 = 2;
      goto LAB_001e7d7c;
    }
    menu_cam_edit_ctrl.lens_csr = menu_cam_edit_ctrl.lens_csr + '\x01';
    iVar2 = menu_cam_edit_ctrl.ref_ctrl.disp_start_pos;
    if (iVar3 <= menu_cam_edit_ctrl.lens_csr) {
      menu_cam_edit_ctrl.lens_csr = (char)iVar3 + -1;
      iVar2 = menu_cam_edit_ctrl.ref_ctrl.disp_start_pos + 1;
      if (menu_cam_edit_ctrl.ref_ctrl.data_num + -3 < menu_cam_edit_ctrl.ref_ctrl.disp_start_pos + 1
         ) {
        iVar2 = menu_cam_edit_ctrl.ref_ctrl.disp_start_pos;
      }
    }
    menu_cam_edit_ctrl.ref_ctrl.disp_start_pos = iVar2;
    iVar3 = menu_cam_edit_ctrl.ref_ctrl.data_pos + 1;
    if (menu_cam_edit_ctrl.ref_ctrl.data_num <= menu_cam_edit_ctrl.ref_ctrl.data_pos + 1) {
      iVar3 = menu_cam_edit_ctrl.ref_ctrl.data_pos;
    }
  }
  else {
    menu_cam_edit_ctrl.lens_csr = menu_cam_edit_ctrl.lens_csr - 1;
    if ((int)((uint)(byte)menu_cam_edit_ctrl.lens_csr << 0x18) < 0) {
      menu_cam_edit_ctrl.ref_ctrl.disp_start_pos = menu_cam_edit_ctrl.ref_ctrl.disp_start_pos + -1;
      menu_cam_edit_ctrl.lens_csr = '\0';
      if (menu_cam_edit_ctrl.ref_ctrl.disp_start_pos < 0) {
        menu_cam_edit_ctrl.ref_ctrl.disp_start_pos = 0;
      }
      iVar3 = menu_cam_edit_ctrl.ref_ctrl.data_pos + -1;
      if (menu_cam_edit_ctrl.ref_ctrl.data_pos + -1 < 0) {
        menu_cam_edit_ctrl.ref_ctrl.data_pos = 0;
        iVar3 = menu_cam_edit_ctrl.ref_ctrl.data_pos;
      }
    }
    else {
      iVar3 = menu_cam_edit_ctrl.ref_ctrl.data_pos + -1;
      if (menu_cam_edit_ctrl.ref_ctrl.data_pos + -1 < 0) {
        iVar3 = 0;
      }
    }
  }
  menu_cam_edit_ctrl.ref_ctrl.data_pos = iVar3;
  iVar3 = 0;
  if (menu_cam_edit_ctrl.ref_ctrl.data_pos == iVar4) {
    return;
  }
LAB_001e7d7c:
  SystemBankPlay__FiiiiP11_SND_3D_SETii(iVar3,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
  return;
}

static void MenuCamEditItemSelPad() {
	int disp_num;
	
  int iVar1;
  int iVar2;
  
  iVar2 = menu_cam_edit_ctrl.ref_ctrl.data_num;
  if (3 < menu_cam_edit_ctrl.ref_ctrl.data_num) {
    iVar2 = 3;
  }
  if (((pad[0].rpt & 0x1000U) == 0) && (iVar1 = GetPadAnalogRpt__Fi(0), iVar1 == 0)) {
    if (((pad[0].rpt & 0x4000U) == 0) && (iVar1 = GetPadAnalogRpt__Fi(1), iVar1 == 0)) {
      if (**paddat == 1) {
        MenuCamEditItemSelDecision__Fv();
        menu_cam_edit_ctrl.conf_csr = '\x01';
      }
      else if (*paddat[1] == 1) {
        SystemBankPlay__FiiiiP11_SND_3D_SETii(1,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
        menu_cam_edit_ctrl.mode = '\0';
      }
    }
    else if (menu_cam_edit_ctrl.edit_sel_csr < '\x03') {
      menu_cam_edit_ctrl.edit_sel_csr = menu_cam_edit_ctrl.edit_sel_csr + '\x01';
      if (menu_cam_edit_ctrl.edit_sel_csr < '\x03') {
        SystemBankPlay__FiiiiP11_SND_3D_SETii(0,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
        return;
      }
      if (0 < iVar2) {
        SystemBankPlay__FiiiiP11_SND_3D_SETii(0,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
        return;
      }
      menu_cam_edit_ctrl.edit_sel_csr = '\x02';
    }
    else {
      menu_cam_edit_ctrl.edit_sel_csr = menu_cam_edit_ctrl.edit_sel_csr + '\x01';
      iVar1 = menu_cam_edit_ctrl.ref_ctrl.disp_start_pos;
      if (iVar2 + 3 <= (int)menu_cam_edit_ctrl.edit_sel_csr) {
        menu_cam_edit_ctrl.edit_sel_csr = (char)iVar2 + '\x02';
        iVar1 = menu_cam_edit_ctrl.ref_ctrl.disp_start_pos + 1;
        if (menu_cam_edit_ctrl.ref_ctrl.data_num + -3 <
            menu_cam_edit_ctrl.ref_ctrl.disp_start_pos + 1) {
          iVar1 = menu_cam_edit_ctrl.ref_ctrl.disp_start_pos;
        }
      }
      menu_cam_edit_ctrl.ref_ctrl.disp_start_pos = iVar1;
      if (menu_cam_edit_ctrl.ref_ctrl.data_pos + 1 < menu_cam_edit_ctrl.ref_ctrl.data_num) {
        menu_cam_edit_ctrl.ref_ctrl.data_pos = menu_cam_edit_ctrl.ref_ctrl.data_pos + 1;
        SystemBankPlay__FiiiiP11_SND_3D_SETii(0,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
        return;
      }
    }
  }
  else if (menu_cam_edit_ctrl.edit_sel_csr < '\x03') {
    menu_cam_edit_ctrl.edit_sel_csr = menu_cam_edit_ctrl.edit_sel_csr - 1;
    if (-1 < (int)((uint)(byte)menu_cam_edit_ctrl.edit_sel_csr << 0x18)) {
      SystemBankPlay__FiiiiP11_SND_3D_SETii(0,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
      return;
    }
    menu_cam_edit_ctrl.edit_sel_csr = '\0';
  }
  else {
    menu_cam_edit_ctrl.edit_sel_csr = menu_cam_edit_ctrl.edit_sel_csr + -1;
    if (menu_cam_edit_ctrl.edit_sel_csr < '\x03') {
      menu_cam_edit_ctrl.ref_ctrl.disp_start_pos = menu_cam_edit_ctrl.ref_ctrl.disp_start_pos + -1;
      menu_cam_edit_ctrl.edit_sel_csr = '\x03';
      menu_cam_edit_ctrl.ref_ctrl.data_pos = menu_cam_edit_ctrl.ref_ctrl.data_pos + -1;
      if (menu_cam_edit_ctrl.ref_ctrl.disp_start_pos < 0) {
        menu_cam_edit_ctrl.ref_ctrl.disp_start_pos = 0;
      }
      if (menu_cam_edit_ctrl.ref_ctrl.data_pos < 0) {
        menu_cam_edit_ctrl.ref_ctrl.data_pos = 0;
        menu_cam_edit_ctrl.edit_sel_csr = '\x02';
      }
      SystemBankPlay__FiiiiP11_SND_3D_SETii(0,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
      return;
    }
    menu_cam_edit_ctrl.ref_ctrl.data_pos = menu_cam_edit_ctrl.ref_ctrl.data_pos + -1;
    if (-1 < menu_cam_edit_ctrl.ref_ctrl.data_pos) {
      SystemBankPlay__FiiiiP11_SND_3D_SETii(0,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
      return;
    }
    menu_cam_edit_ctrl.ref_ctrl.data_pos = 0;
  }
  return;
}

static void MenuCamEditItemSelDecision() {
	static char __FUNCTION__[27] = {
		/* [0] = */ 77,
		/* [1] = */ 101,
		/* [2] = */ 110,
		/* [3] = */ 117,
		/* [4] = */ 67,
		/* [5] = */ 97,
		/* [6] = */ 109,
		/* [7] = */ 69,
		/* [8] = */ 100,
		/* [9] = */ 105,
		/* [10] = */ 116,
		/* [11] = */ 73,
		/* [12] = */ 116,
		/* [13] = */ 101,
		/* [14] = */ 109,
		/* [15] = */ 83,
		/* [16] = */ 101,
		/* [17] = */ 108,
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
	
  if (menu_cam_edit_ctrl.mode == '\x04') {
    MenuCamEditGemAddPosDecision__Fv();
    return;
  }
  if (menu_cam_edit_ctrl.mode != '\x05') {
    SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
    PrintAssertReal("Error! %s");
    return;
  }
  MenuCamEditPowerUpPosDecision__Fv();
  return;
}

static void MenuCamEditGemAddPosDecision() {
	int lens_label;
	
  char cVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = menu_cam_edit_ctrl.ref_ctrl.data_pos;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  _fixed_array_verifyrange__H1Z14DISP_LENS_DATA_UiUi_PX01(menu_cam_edit_ctrl.ref_ctrl.data_pos,10);
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  if (menu_cam_edit_ctrl.edit_sel_csr < '\x03') {
    iVar2 = GetMenuCamBasicGemNum__Fi((int)menu_cam_edit_ctrl.edit_sel_csr);
    iVar3 = GetMenuCamBasicGemNumMax__Fi((int)menu_cam_edit_ctrl.edit_sel_csr);
    if (iVar2 == iVar3) {
      SystemBankPlay__FiiiiP11_SND_3D_SETii(2,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
      menu_cam_edit_ctrl.mode = '\a';
      return;
    }
  }
  else {
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
    if (m_plyr_camera.camera_power_up.mSubFuncGem
        [disp_lens_data.field0_0x0.m_aData[iVar2].lens_label].mValue == '\x03') {
                    /* end of inlined section */
      SystemBankPlay__FiiiiP11_SND_3D_SETii(2,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
      menu_cam_edit_ctrl.mode = '\a';
      return;
    }
  }
  cVar1 = GetPlyrLevelGemNum__Fv();
  if (cVar1 < '\x01') {
    SystemBankPlay__FiiiiP11_SND_3D_SETii(2,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
    menu_cam_edit_ctrl.mode = '\b';
  }
  else {
    SystemBankPlay__FiiiiP11_SND_3D_SETii(3,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
    menu_cam_edit_ctrl.mode = '\x06';
    menu_cam_edit_ctrl.conf_csr = '\x01';
  }
  return;
}

static void MenuCamEditPowerUpPosDecision() {
	int lens_label;
	
  char cVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  CVariable<char,0,3> *pCVar5;
  
  iVar3 = menu_cam_edit_ctrl.ref_ctrl.data_pos;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  _fixed_array_verifyrange__H1Z14DISP_LENS_DATA_UiUi_PX01(menu_cam_edit_ctrl.ref_ctrl.data_pos,10);
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  iVar3 = disp_lens_data.field0_0x0.m_aData[iVar3].lens_label;
                    /* end of inlined section */
  if (menu_cam_edit_ctrl.edit_sel_csr < '\x03') {
    iVar3 = GetMenuCamBasicLv__Fi((int)menu_cam_edit_ctrl.edit_sel_csr);
    iVar4 = GetMenuCamBasicLvMax__Fi((int)menu_cam_edit_ctrl.edit_sel_csr);
    if (iVar4 <= iVar3) {
      SystemBankPlay__FiiiiP11_SND_3D_SETii(2,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
      return;
    }
    iVar3 = GetMenuCamBasicLv__Fi((int)menu_cam_edit_ctrl.edit_sel_csr);
    iVar4 = GetMenuCamBasicGemNum__Fi((int)menu_cam_edit_ctrl.edit_sel_csr);
    if (iVar4 <= iVar3) {
      SystemBankPlay__FiiiiP11_SND_3D_SETii(2,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
      menu_cam_edit_ctrl.mode = '\n';
      return;
    }
    iVar3 = GetPlayData_Score__Fv();
    iVar4 = GetMenuCamBasicLv__Fi((int)menu_cam_edit_ctrl.edit_sel_csr);
    bVar2 = iVar3 < cam_base_status_point[menu_cam_edit_ctrl.edit_sel_csr][iVar4 + 1];
  }
  else {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Zt9CVariable3Zci0i3_UiUi_PX01(iVar3,10);
    pCVar5 = m_plyr_camera.eq_tray.mSave.mSubFuncLv.field0_0x0.m_aData + iVar3;
    cVar1 = pCVar5->mValue;
    _fixed_array_verifyrange__H1Zt9CVariable3Zci0i3_UiUi_PX01(iVar3,10);
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
    if (cVar1 == '\x03') {
                    /* end of inlined section */
      SystemBankPlay__FiiiiP11_SND_3D_SETii(2,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
      return;
    }
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Zt9CVariable3Zci0i3_UiUi_PX01(iVar3,10);
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
    if (m_plyr_camera.camera_power_up.mSubFuncGem[iVar3].mValue <= pCVar5->mValue) {
                    /* end of inlined section */
      SystemBankPlay__FiiiiP11_SND_3D_SETii(2,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
      menu_cam_edit_ctrl.mode = '\n';
      return;
    }
    iVar4 = GetPlayData_Score__Fv();
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Zt9CVariable3Zci0i3_UiUi_PX01(iVar3,10);
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
    bVar2 = iVar4 < cam_sp_shot_point_tbl[iVar3][pCVar5->mValue + 1];
  }
  if (bVar2) {
    SystemBankPlay__FiiiiP11_SND_3D_SETii(2,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
    menu_cam_edit_ctrl.mode = '\v';
  }
  else {
                    /* end of inlined section */
    SystemBankPlay__FiiiiP11_SND_3D_SETii(3,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
    menu_cam_edit_ctrl.mode = '\t';
    menu_cam_edit_ctrl.conf_csr = '\x01';
  }
  return;
}

static void MenuCamEditGemAddConfPad() {
  int iVar1;
  
  if (((((pad[0].rpt & 0x8000U) == 0) && (iVar1 = GetPadAnalogRpt__Fi(2), iVar1 == 0)) &&
      ((pad[0].rpt & 0x2000U) == 0)) && (iVar1 = GetPadAnalogRpt__Fi(3), iVar1 == 0)) {
    if (**paddat == 1) {
      if (menu_cam_edit_ctrl.conf_csr == '\0') {
        SystemBankPlay__FiiiiP11_SND_3D_SETii(5,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
        MenuCamGemAdd__Fv();
        menu_cam_edit_ctrl.mode = '\x04';
      }
      else {
        SystemBankPlay__FiiiiP11_SND_3D_SETii(3,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
        menu_cam_edit_ctrl.mode = '\x04';
      }
    }
    else if (*paddat[1] == 1) {
      SystemBankPlay__FiiiiP11_SND_3D_SETii(1,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
      menu_cam_edit_ctrl.mode = '\x04';
    }
  }
  else {
    SystemBankPlay__FiiiiP11_SND_3D_SETii(0,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
    menu_cam_edit_ctrl.conf_csr = menu_cam_edit_ctrl.conf_csr ^ 1;
  }
  return;
}

static void MenuCamGemAdd() {
	static char __FUNCTION__[14] = {
		/* [0] = */ 77,
		/* [1] = */ 101,
		/* [2] = */ 110,
		/* [3] = */ 117,
		/* [4] = */ 67,
		/* [5] = */ 97,
		/* [6] = */ 109,
		/* [7] = */ 71,
		/* [8] = */ 101,
		/* [9] = */ 109,
		/* [10] = */ 65,
		/* [11] = */ 100,
		/* [12] = */ 100,
		/* [13] = */ 0
	};
	int lens_label;
	int iVal;
	int iVal;
	int iVal;
	CVariable<char,0,3> *this;
	int iVal;
	
  char cVar1;
  int iVar2;
  CVariable<char,0,3> *pCVar3;
  
  iVar2 = menu_cam_edit_ctrl.ref_ctrl.data_pos;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  _fixed_array_verifyrange__H1Z14DISP_LENS_DATA_UiUi_PX01(menu_cam_edit_ctrl.ref_ctrl.data_pos,10);
  iVar2 = disp_lens_data.field0_0x0.m_aData[iVar2].lens_label;
                    /* end of inlined section */
  cVar1 = GetPlyrLevelGemNum__Fv();
  if (cVar1 < '\x01') {
    SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
    PrintAssertReal("Error! %s");
  }
  if (menu_cam_edit_ctrl.edit_sel_csr < '\x03') {
    if (menu_cam_edit_ctrl.edit_sel_csr == '\x01') {
      pCVar3 = &m_plyr_camera.camera_power_up.mAccumGem;
    }
    else if (menu_cam_edit_ctrl.edit_sel_csr < '\x02') {
      if (menu_cam_edit_ctrl.edit_sel_csr != '\0') goto LAB_001e8928;
      pCVar3 = &m_plyr_camera.camera_power_up.mRadiusGem;
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
    }
    else {
      if (menu_cam_edit_ctrl.edit_sel_csr != '\x02') {
LAB_001e8928:
        SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
        PrintAssertReal("Error! %s");
        goto LAB_001e8988;
      }
      pCVar3 = &m_plyr_camera.camera_power_up.mSensiteiveGem;
    }
  }
  else {
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
    pCVar3 = m_plyr_camera.camera_power_up.mSubFuncGem + iVar2;
  }
  iVar2 = pCVar3->mValue + 1;
  if (iVar2 < 4) {
    pCVar3->mValue = (char)iVar2;
  }
  else {
    pCVar3->mValue = '\x03';
  }
LAB_001e8988:
                    /* end of inlined section */
  LostLevelGem__Fv();
  return;
}

static void MenuCamEditPowerUpConfPad() {
  int iVar1;
  
  if (((((pad[0].rpt & 0x8000U) == 0) && (iVar1 = GetPadAnalogRpt__Fi(2), iVar1 == 0)) &&
      ((pad[0].rpt & 0x2000U) == 0)) && (iVar1 = GetPadAnalogRpt__Fi(3), iVar1 == 0)) {
    if (**paddat == 1) {
      if (menu_cam_edit_ctrl.conf_csr == '\0') {
        SystemBankPlay__FiiiiP11_SND_3D_SETii(7,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
        MenuCamPowerUp__Fv();
        menu_cam_edit_ctrl.mode = '\x05';
      }
      else {
        SystemBankPlay__FiiiiP11_SND_3D_SETii(3,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
        menu_cam_edit_ctrl.mode = '\x05';
      }
    }
    else if (*paddat[1] == 1) {
      SystemBankPlay__FiiiiP11_SND_3D_SETii(1,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
      menu_cam_edit_ctrl.mode = '\x05';
    }
  }
  else {
    SystemBankPlay__FiiiiP11_SND_3D_SETii(0,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
    menu_cam_edit_ctrl.conf_csr = menu_cam_edit_ctrl.conf_csr ^ 1;
  }
  return;
}

static void MenuCamPowerUp() {
	static char __FUNCTION__[15] = {
		/* [0] = */ 77,
		/* [1] = */ 101,
		/* [2] = */ 110,
		/* [3] = */ 117,
		/* [4] = */ 67,
		/* [5] = */ 97,
		/* [6] = */ 109,
		/* [7] = */ 80,
		/* [8] = */ 111,
		/* [9] = */ 119,
		/* [10] = */ 101,
		/* [11] = */ 114,
		/* [12] = */ 85,
		/* [13] = */ 112,
		/* [14] = */ 0
	};
	int lens_label;
	int iVal;
	int iVal;
	int iVal;
	CVariable<char,0,3> *this;
	int iVal;
	
  int iVar1;
  int iVar2;
  CVariable<char,0,3> *pCVar3;
  
  iVar1 = menu_cam_edit_ctrl.ref_ctrl.data_pos;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  _fixed_array_verifyrange__H1Z14DISP_LENS_DATA_UiUi_PX01(menu_cam_edit_ctrl.ref_ctrl.data_pos,10);
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  iVar1 = disp_lens_data.field0_0x0.m_aData[iVar1].lens_label;
                    /* end of inlined section */
  if ('\x02' < menu_cam_edit_ctrl.edit_sel_csr) {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Zt9CVariable3Zci0i3_UiUi_PX01(iVar1,10);
    pCVar3 = m_plyr_camera.eq_tray.mSave.mSubFuncLv.field0_0x0.m_aData + iVar1;
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
    iVar2 = pCVar3->mValue + 1;
    if (iVar2 < 4) {
      pCVar3->mValue = (char)iVar2;
    }
    else {
      pCVar3->mValue = '\x03';
    }
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    pCVar3 = m_plyr_camera.eq_tray.mSave.mSubFuncLv.field0_0x0.m_aData + iVar1;
    _fixed_array_verifyrange__H1Zt9CVariable3Zci0i3_UiUi_PX01(iVar1,10);
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
    PlayData_ScoreCount__Fi(-cam_sp_shot_point_tbl[iVar1][pCVar3->mValue]);
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Zt9CVariable3Zci0i3_UiUi_PX01(iVar1,10);
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
    MenuCamEditLensGemAnimReq__Fcc((char)iVar1,pCVar3->mValue + -1);
    menu_cam_edit_ctrl.gem_anim_flg = 1;
    return;
                    /* end of inlined section */
  }
  if (menu_cam_edit_ctrl.edit_sel_csr == '\x01') {
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
    if (m_plyr_camera.eq_tray.mSave.mStockGrade.mValue + 1 < 4) {
      m_plyr_camera.eq_tray.mSave.mStockGrade.mValue =
           (char)(m_plyr_camera.eq_tray.mSave.mStockGrade.mValue + 1);
    }
    else {
      m_plyr_camera.eq_tray.mSave.mStockGrade.mValue = '\x03';
    }
                    /* end of inlined section */
    iVar1 = cam_base_status_point[1][m_plyr_camera.eq_tray.mSave.mStockGrade.mValue];
LAB_001e8c40:
    PlayData_ScoreCount__Fi(-iVar1);
  }
  else {
    if (menu_cam_edit_ctrl.edit_sel_csr < '\x02') {
      if (menu_cam_edit_ctrl.edit_sel_csr == '\0') {
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
        if (m_plyr_camera.camera_power_up.mRadiusGrade.mValue + 1 < 4) {
          m_plyr_camera.camera_power_up.mRadiusGrade.mValue =
               (char)(m_plyr_camera.camera_power_up.mRadiusGrade.mValue + 1);
        }
        else {
          m_plyr_camera.camera_power_up.mRadiusGrade.mValue = '\x03';
        }
                    /* end of inlined section */
        iVar1 = cam_base_status_point[m_plyr_camera.camera_power_up.mRadiusGrade.mValue];
        goto LAB_001e8c40;
      }
    }
    else if (menu_cam_edit_ctrl.edit_sel_csr == '\x02') {
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
      if (m_plyr_camera.camera_power_up.mSensitiveGrade.mValue + 1 < 4) {
        m_plyr_camera.camera_power_up.mSensitiveGrade.mValue =
             (char)(m_plyr_camera.camera_power_up.mSensitiveGrade.mValue + 1);
      }
      else {
        m_plyr_camera.camera_power_up.mSensitiveGrade.mValue = '\x03';
      }
                    /* end of inlined section */
      iVar1 = cam_base_status_point[2][m_plyr_camera.camera_power_up.mSensitiveGrade.mValue];
      goto LAB_001e8c40;
    }
    SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
    PrintAssertReal("Error! %s");
  }
  iVar1 = GetMenuCamBasicLv__Fi((int)menu_cam_edit_ctrl.edit_sel_csr);
  MenuCamEditBaseGemAnimReq__Fcc
            (menu_cam_edit_ctrl.edit_sel_csr,(char)((uint)((iVar1 + -1) * 0x1000000) >> 0x18));
  menu_cam_edit_ctrl.gem_anim_flg = '\x01';
  return;
}

static void MenuCamEditErrorPad() {
	char pad_flg;
	
  bool bVar1;
  int no;
  
  bVar1 = false;
  if (**paddat == 1) {
    no = 3;
  }
  else {
    no = 1;
    if (*paddat[1] != 1) goto LAB_001e8dd0;
  }
  SystemBankPlay__FiiiiP11_SND_3D_SETii(no,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
  bVar1 = true;
LAB_001e8dd0:
  if (bVar1) {
    switch(menu_cam_edit_ctrl.mode) {
    case '\x01':
      menu_cam_edit_ctrl.mode = '\0';
      break;
    case '\a':
    case '\b':
      menu_cam_edit_ctrl.mode = '\x04';
      break;
    case '\n':
    case '\v':
      menu_cam_edit_ctrl.mode = '\x05';
    }
  }
  return;
}

static int GetMenuCamBasicLv(int base_label) {
	static char __FUNCTION__[18] = {
		/* [0] = */ 71,
		/* [1] = */ 101,
		/* [2] = */ 116,
		/* [3] = */ 77,
		/* [4] = */ 101,
		/* [5] = */ 110,
		/* [6] = */ 117,
		/* [7] = */ 67,
		/* [8] = */ 97,
		/* [9] = */ 109,
		/* [10] = */ 66,
		/* [11] = */ 97,
		/* [12] = */ 115,
		/* [13] = */ 105,
		/* [14] = */ 99,
		/* [15] = */ 76,
		/* [16] = */ 118,
		/* [17] = */ 0
	};
	int lv;
	
  int iVar1;
  
  iVar1 = 0;
  if (base_label == 1) {
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
                    /* end of inlined section */
    iVar1 = (int)m_plyr_camera.eq_tray.mSave.mStockGrade.mValue;
  }
  else {
    if (base_label < 2) {
      if (base_label == 0) {
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
                    /* end of inlined section */
        return (int)m_plyr_camera.camera_power_up.mRadiusGrade.mValue;
      }
    }
    else if (base_label == 2) {
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
                    /* end of inlined section */
      return (int)m_plyr_camera.camera_power_up.mSensitiveGrade.mValue;
    }
    SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
    PrintAssertReal("Error! %s");
  }
  return iVar1;
}

static int GetMenuCamBasicLvMax(int base_label) {
	static char __FUNCTION__[21] = {
		/* [0] = */ 71,
		/* [1] = */ 101,
		/* [2] = */ 116,
		/* [3] = */ 77,
		/* [4] = */ 101,
		/* [5] = */ 110,
		/* [6] = */ 117,
		/* [7] = */ 67,
		/* [8] = */ 97,
		/* [9] = */ 109,
		/* [10] = */ 66,
		/* [11] = */ 97,
		/* [12] = */ 115,
		/* [13] = */ 105,
		/* [14] = */ 99,
		/* [15] = */ 76,
		/* [16] = */ 118,
		/* [17] = */ 77,
		/* [18] = */ 97,
		/* [19] = */ 120,
		/* [20] = */ 0
	};
	int lv;
	
  if (base_label != 1) {
    if (base_label < 2) {
      if (base_label != 0) goto LAB_001e8f3c;
    }
    else if (base_label != 2) {
LAB_001e8f3c:
      SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
      PrintAssertReal("Error! %s");
      return 0;
    }
  }
  return 3;
}

static int GetMenuCamBasicGemNum(int base_label) {
	static char __FUNCTION__[22] = {
		/* [0] = */ 71,
		/* [1] = */ 101,
		/* [2] = */ 116,
		/* [3] = */ 77,
		/* [4] = */ 101,
		/* [5] = */ 110,
		/* [6] = */ 117,
		/* [7] = */ 67,
		/* [8] = */ 97,
		/* [9] = */ 109,
		/* [10] = */ 66,
		/* [11] = */ 97,
		/* [12] = */ 115,
		/* [13] = */ 105,
		/* [14] = */ 99,
		/* [15] = */ 71,
		/* [16] = */ 101,
		/* [17] = */ 109,
		/* [18] = */ 78,
		/* [19] = */ 117,
		/* [20] = */ 109,
		/* [21] = */ 0
	};
	int gem_num;
	
  int iVar1;
  
  iVar1 = 0;
  if (base_label == 1) {
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
                    /* end of inlined section */
    iVar1 = (int)m_plyr_camera.camera_power_up.mAccumGem.mValue;
  }
  else {
    if (base_label < 2) {
      if (base_label == 0) {
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
                    /* end of inlined section */
        return (int)m_plyr_camera.camera_power_up.mRadiusGem.mValue;
      }
    }
    else if (base_label == 2) {
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
                    /* end of inlined section */
      return (int)m_plyr_camera.camera_power_up.mSensiteiveGem.mValue;
    }
    SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
    PrintAssertReal("Error! %s");
  }
  return iVar1;
}

static int GetMenuCamBasicGemNumMax(int base_label) {
	static char __FUNCTION__[25] = {
		/* [0] = */ 71,
		/* [1] = */ 101,
		/* [2] = */ 116,
		/* [3] = */ 77,
		/* [4] = */ 101,
		/* [5] = */ 110,
		/* [6] = */ 117,
		/* [7] = */ 67,
		/* [8] = */ 97,
		/* [9] = */ 109,
		/* [10] = */ 66,
		/* [11] = */ 97,
		/* [12] = */ 115,
		/* [13] = */ 105,
		/* [14] = */ 99,
		/* [15] = */ 71,
		/* [16] = */ 101,
		/* [17] = */ 109,
		/* [18] = */ 78,
		/* [19] = */ 117,
		/* [20] = */ 109,
		/* [21] = */ 77,
		/* [22] = */ 97,
		/* [23] = */ 120,
		/* [24] = */ 0
	};
	int gem_num;
	
  if (base_label != 1) {
    if (base_label < 2) {
      if (base_label != 0) goto LAB_001e908c;
    }
    else if (base_label != 2) {
LAB_001e908c:
      SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
      PrintAssertReal("Error! %s");
      return 0;
    }
  }
  return 3;
}

static void MenuCamEditBaseGemAnimReq(char label, char lv) {
  if (base_gem_anim_ctrl.data_pos == -1) {
    base_gem_anim_ctrl.timer = 0;
    base_gem_anim_ctrl.data_pos = label;
    base_gem_anim_ctrl.lv = lv;
  }
  return;
}

static void MenuCamEditLensGemAnimReq(char label, char lv) {
  if (lens_gem_anim_ctrl.data_pos == -1) {
    lens_gem_anim_ctrl.timer = 0;
    lens_gem_anim_ctrl.data_pos = label;
    lens_gem_anim_ctrl.lv = lv;
  }
  return;
}

static void MenuCamEditDispInit() {
  menu_cam_edit_disp.gem_anim_timer = 0;
  menu_cam_edit_disp.anim_step = '\0';
  menu_cam_edit_disp.anim_timer = '\0';
  menu_cam_edit_disp.csr_anim_timer = '\0';
  menu_cam_edit_disp.scroll_anim_timer = '\0';
  return;
}

void MenuCamEditDisp() {
  uchar uVar1;
  
  if ((((byte)menu_cam_edit_ctrl.step - 2 < 2) &&
      (uVar1 = Zero2Anim2D_InOutAnimCtrl__FPcT0ss
                         (&menu_cam_edit_disp.anim_step,&menu_cam_edit_disp.anim_timer,10,5),
      menu_cam_edit_disp.anim_step != '\x04')) &&
     ((code *)menu_cam_edit_disp_func[menu_cam_edit_ctrl.mode] != (code *)0x0)) {
    (*(code *)menu_cam_edit_disp_func[menu_cam_edit_ctrl.mode])(0,0,uVar1);
  }
  return;
}

static void MenuCamEditSelMenuDisp(int off_x, int off_y, u_char alpha) {
	static int msg_id[3] = {
		/* [0] = */ 24,
		/* [1] = */ 25,
		/* [2] = */ 26
	};
	
  MenuCamEditCmnDisp__FiiUc(off_x,off_y,alpha);
  MenuCamEditBaseNextPointDisp__FiiUc(off_x,off_y,alpha);
  MenuCamEditLensNextPointDisp__FiiUc(off_x,off_y,alpha);
  MenuCamEditItemFrameDisp__FiiUc(off_x,off_y,alpha);
  MenuCamEditBaseGemDisp__FiiUc(off_x,off_y,alpha);
  MenuCamEditLensGemDisp__FiiUc(off_x,off_y,alpha);
  PrintMsg__Fiiiiiii(0x31,*(int *)(msg_id_1180 + menu_cam_edit_ctrl.menu_csr * 4),off_x + 0x30,
                     off_y + 0x176,1,(uint)alpha,0);
  return;
}

static void MenuCamEditLensNothingErrorDisp(int off_x, int off_y, u_char alpha) {
  MenuCamEditCmnDisp__FiiUc(off_x,off_y,alpha);
  MenuCamEditBaseNextPointDisp__FiiUc(off_x,off_y,alpha);
  MenuCamEditLensNextPointDisp__FiiUc(off_x,off_y,alpha);
  MenuCamEditItemFrameDisp__FiiUc(off_x,off_y,alpha);
  MenuCamEditBaseGemDisp__FiiUc(off_x,off_y,alpha);
  MenuCamEditLensGemDisp__FiiUc(off_x,off_y,alpha);
  PrintMsg__Fiiiiiii(0x31,0x55,off_x + 0x30,off_y + 0x176,1,(uint)alpha,0);
  return;
}

static void MenuCamEditSelLensEquipPosDisp(int off_x, int off_y, u_char alpha) {
	u_char rgb;
	int i;
	
  int iVar1;
  float fVar2;
  float fVar3;
  uchar rgb;
  
  iVar1 = 0;
  Zero2Anim2D_CsrAnimCtrl__FPcPUc(&menu_cam_edit_disp.csr_anim_timer,&rgb);
  fVar3 = 32.0;
  MenuCamEditCmnDisp__FiiUc(off_x,off_y,alpha);
  MenuCamEditBaseNextPointDisp__FiiUc(off_x,off_y,alpha);
  MenuCamEditLensNextPointDisp__FiiUc(off_x,off_y,alpha);
  do {
    fVar2 = (float)iVar1;
    iVar1 = iVar1 + 1;
    MenuCamEditFrameBlackBgDisp__FiUc((int)(fVar2 * fVar3 + 133.0),alpha);
  } while (iVar1 < 3);
  MenuCamEditSelEquipLensPosFrameDisp__FffUc
            ((float)(int)menu_cam_edit_ctrl.equip_pos_csr * 50.0 + 186.0,35.0,alpha);
  MenuCamEditEquipLensPosCsrDisp__FffUcUc
            ((float)(int)menu_cam_edit_ctrl.equip_pos_csr * 50.0 + 182.0,61.0,alpha,rgb);
  MenuCamEditItemFrameDisp__FiiUc(off_x,off_y,alpha);
  MenuCamEditBaseGemDisp__FiiUc(off_x,off_y,alpha);
  MenuCamEditLensGemDisp__FiiUc(off_x,off_y,alpha);
  PrintMsg__Fiiiiiii(0x31,0x56,off_x + 0x30,off_y + 0x176,1,(uint)alpha,0);
  return;
}

static void MenuCamEditSelEquipLensDisp(int off_x, int off_y, u_char alpha) {
	int i;
	int disp_num;
	int lens_label;
	
  int iVar1;
  DISP_LENS_DATA *pDVar2;
  int iVar3;
  int iVar4;
  int y;
  int y_00;
  float fVar5;
  float fVar6;
  
  iVar3 = 0;
  iVar4 = menu_cam_edit_ctrl.ref_ctrl.data_num;
  if (3 < menu_cam_edit_ctrl.ref_ctrl.data_num) {
    iVar4 = 3;
  }
  MenuCamEditCmnDisp__FiiUc(off_x,off_y,alpha);
  MenuCamEditBaseNextPointDisp__FiiUc(off_x,off_y,alpha);
  if (0 < iVar4) {
    fVar6 = 32.0;
    y_00 = 0x102;
    y = 0x102;
    do {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
      iVar1 = menu_cam_edit_ctrl.ref_ctrl.disp_start_pos + iVar3;
      _fixed_array_verifyrange__H1Z14DISP_LENS_DATA_UiUi_PX01(iVar1,10);
      pDVar2 = disp_lens_data.field0_0x0.m_aData + menu_cam_edit_ctrl.ref_ctrl.data_pos;
      iVar1 = disp_lens_data.field0_0x0.m_aData[iVar1].lens_label;
      _fixed_array_verifyrange__H1Z14DISP_LENS_DATA_UiUi_PX01
                (menu_cam_edit_ctrl.ref_ctrl.data_pos,10);
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
      if (iVar1 == pDVar2->lens_label) {
                    /* end of inlined section */
        MenuCamEditOneLensNextPointDisp__FiiiUci(iVar1,0x1d2,y,alpha,0x11);
        MenuCamEditSelFrameBgDisp__FiUc((int)((float)iVar3 * fVar6 + 255.0),alpha);
      }
      else {
        MenuCamEditOneLensNextPointDisp__FiiiUci(iVar1,0x1d2,y_00,alpha,0x12);
      }
      iVar3 = iVar3 + 1;
      y_00 = y_00 + 0x20;
      y = y + 0x20;
    } while (iVar3 < iVar4);
  }
  fVar6 = 32.0;
  iVar4 = 0;
  do {
    fVar5 = (float)iVar4;
    iVar4 = iVar4 + 1;
    MenuCamEditFrameBlackBgDisp__FiUc((int)(fVar5 * fVar6 + 133.0),alpha);
  } while (iVar4 < 3);
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
  if (((uint)m_plyr_camera.camera_power_up.mCamPartsSetFlg.flag_32[0] & 2) == 0) {
    MenuCamEditSelEquipLensPosFrameDisp__FffUc(258.0,50.0,alpha);
  }
  else {
                    /* end of inlined section */
    MenuCamEditSelEquipLensPosFrameDisp__FffUc
              ((float)(int)menu_cam_edit_ctrl.equip_pos_csr * 50.0 + 186.0,35.0,alpha);
  }
  MenuCamEditItemFrameDisp__FiiUc(off_x,off_y,alpha);
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* end of inlined section */
  MenuCamEditBaseGemDisp__FiiUc(off_x,off_y,alpha);
  MenuCamEditLensGemDisp__FiiUc(off_x,off_y,alpha);
  MenuCamEditSelCsrDisp__FffUc(190.0,(float)(int)menu_cam_edit_ctrl.lens_csr * 32.0 + 252.0,alpha);
  pDVar2 = disp_lens_data.field0_0x0.m_aData + menu_cam_edit_ctrl.ref_ctrl.data_pos;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  _fixed_array_verifyrange__H1Z14DISP_LENS_DATA_UiUi_PX01(menu_cam_edit_ctrl.ref_ctrl.data_pos,10);
  iVar4 = pDVar2->lens_label;
  _fixed_array_verifyrange__H1Zi_UiUi_PX01(iVar4,10);
  if (*(int *)((int)lens_msg_tbl.field0_0x0.m_aData + iVar4 * 4) != -1) {
    pDVar2 = disp_lens_data.field0_0x0.m_aData + menu_cam_edit_ctrl.ref_ctrl.data_pos;
    _fixed_array_verifyrange__H1Z14DISP_LENS_DATA_UiUi_PX01(menu_cam_edit_ctrl.ref_ctrl.data_pos,10)
    ;
    iVar4 = pDVar2->lens_label;
    _fixed_array_verifyrange__H1Zi_UiUi_PX01(iVar4,10);
    PrintMsg__Fiiiiiii(0x31,*(int *)((int)lens_msg_tbl.field0_0x0.m_aData + iVar4 * 4),off_x + 0x30,
                       off_y + 0x176,1,(uint)alpha,0);
  }
  return;
}

static void MenuCamEditSelGemAddPosDisp(int off_x, int off_y, u_char alpha) {
	int lens_label;
	
  int iVar1;
  char cVar2;
  
  iVar1 = menu_cam_edit_ctrl.ref_ctrl.data_pos;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  _fixed_array_verifyrange__H1Z14DISP_LENS_DATA_UiUi_PX01(menu_cam_edit_ctrl.ref_ctrl.data_pos,10);
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  iVar1 = disp_lens_data.field0_0x0.m_aData[iVar1].lens_label;
                    /* end of inlined section */
  MenuCamEditGemAddCmnDisp__FiiUc(off_x,off_y,alpha);
  cVar2 = menu_cam_edit_ctrl.edit_sel_csr;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  if (menu_cam_edit_ctrl.edit_sel_csr < '\x03') {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Zi_UiUi_PX01(menu_cam_edit_ctrl.edit_sel_csr,3);
    PrintMsg__Fiiiiiii(0x31,*(int *)((int)base_msg_tbl.field0_0x0.m_aData + cVar2 * 4),off_x + 0x30,
                       off_y + 0x176,1,(uint)alpha,0);
    return;
  }
  _fixed_array_verifyrange__H1Zi_UiUi_PX01(iVar1,10);
  if (*(int *)((int)lens_msg_tbl.field0_0x0.m_aData + iVar1 * 4) != -1) {
    _fixed_array_verifyrange__H1Zi_UiUi_PX01(iVar1,10);
    PrintMsg__Fiiiiiii(0x31,*(int *)((int)lens_msg_tbl.field0_0x0.m_aData + iVar1 * 4),off_x + 0x30,
                       off_y + 0x176,1,(uint)alpha,0);
  }
  return;
}

static void MenuCamEditGemAddConfDisp(int off_x, int off_y, u_char alpha) {
  MenuCamEditGemAddCmnDisp__FiiUc(off_x,off_y,alpha);
  MenuCamEditConfYesNoDisp__FiiUc(off_x,off_y,alpha);
  if (menu_cam_edit_ctrl.edit_sel_csr < '\x03') {
    PrintMsg__Fiiiiiii(0x31,0x28,off_x + 0x30,off_y + 0x176,1,(uint)alpha,0);
    return;
  }
  PrintMsg__Fiiiiiii(0x31,0x29,off_x + 0x30,off_y + 0x176,1,(uint)alpha,0);
  return;
}

static void MenuCamEditGemAddErrorDisp(int off_x, int off_y, u_char alpha) {
  MenuCamEditGemAddCmnDisp__FiiUc(off_x,off_y,alpha);
  PrintMsg__Fiiiiiii(0x31,0x2e,off_x + 0x30,off_y + 0x176,1,(uint)alpha,0);
  return;
}

static void MenuCamEditGemNothingErrorDisp(int off_x, int off_y, u_char alpha) {
  MenuCamEditGemAddCmnDisp__FiiUc(off_x,off_y,alpha);
  PrintMsg__Fiiiiiii(0x31,0x2c,off_x + 0x30,off_y + 0x176,1,(uint)alpha,0);
  return;
}

static void MenuCamEditSelPowerUpPosDisp(int off_x, int off_y, u_char alpha) {
	int lens_label;
	
  int iVar1;
  CVariable<char,0,3> *pCVar2;
  
  iVar1 = menu_cam_edit_ctrl.ref_ctrl.data_pos;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  _fixed_array_verifyrange__H1Z14DISP_LENS_DATA_UiUi_PX01(menu_cam_edit_ctrl.ref_ctrl.data_pos,10);
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  iVar1 = disp_lens_data.field0_0x0.m_aData[iVar1].lens_label;
                    /* end of inlined section */
  MenuCamEditPowerUpCmnDisp__FiiUc(off_x,off_y,alpha);
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  pCVar2 = m_plyr_camera.eq_tray.mSave.mSubFuncLv.field0_0x0.m_aData + iVar1;
                    /* end of inlined section */
  if ('\x02' < menu_cam_edit_ctrl.edit_sel_csr) {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Zt9CVariable3Zci0i3_UiUi_PX01(iVar1,10);
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
    if (pCVar2->mValue == '\x03') {
                    /* end of inlined section */
      PrintMsg__Fiiiiiii(0x31,0x2f,off_x + 0x30,off_y + 0x176,1,(uint)alpha,0);
      return;
    }
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Zt9CVariable3Zci0i3_UiUi_PX01(iVar1,10);
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
    PrintMsg__Fiiiiiii(0x31,iVar1 * 3 + (int)pCVar2->mValue + 0x37,off_x + 0x30,off_y + 0x176,1,
                       (uint)alpha,0);
    return;
  }
  iVar1 = GetMenuCamBasicLv__Fi((int)menu_cam_edit_ctrl.edit_sel_csr);
  if (iVar1 == 3) {
    PrintMsg__Fiiiiiii(0x31,0x2f,off_x + 0x30,off_y + 0x176,1,(uint)alpha,0);
    return;
  }
  iVar1 = GetMenuCamBasicLv__Fi((int)menu_cam_edit_ctrl.edit_sel_csr);
  PrintMsg__Fiiiiiii(0x31,menu_cam_edit_ctrl.edit_sel_csr * 3 + iVar1 + 0x31,off_x + 0x30,
                     off_y + 0x176,1,(uint)alpha,0);
  return;
}

static void MenuCamEditPowerUpConfDisp(int off_x, int off_y, u_char alpha) {
  MenuCamEditPowerUpCmnDisp__FiiUc(off_x,off_y,alpha);
  MenuCamEditConfYesNoDisp__FiiUc(off_x,off_y,alpha);
  if (menu_cam_edit_ctrl.edit_sel_csr < '\x03') {
    PrintMsg__Fiiiiiii(0x31,0x2a,off_x + 0x30,off_y + 0x176,1,(uint)alpha,0);
    return;
  }
  PrintMsg__Fiiiiiii(0x31,0x2b,off_x + 0x30,off_y + 0x176,1,(uint)alpha,0);
  return;
}

static void MenuCamEditPowerUpLvMaxErrorDisp(int off_x, int off_y, u_char alpha) {
  MenuCamEditPowerUpCmnDisp__FiiUc(off_x,off_y,alpha);
  PrintMsg__Fiiiiiii(0x31,0x57,off_x + 0x30,off_y + 0x176,1,(uint)alpha,0);
  return;
}

static void MenuCamEditPowerUpNothingErrorDisp(int off_x, int off_y, u_char alpha) {
  MenuCamEditPowerUpCmnDisp__FiiUc(off_x,off_y,alpha);
  PrintMsg__Fiiiiiii(0x31,0x2d,off_x + 0x30,off_y + 0x176,1,(uint)alpha,0);
  return;
}

static void MenuCamEditCmnDisp(int off_x, int off_y, u_char alpha) {
  int iVar1;
  void *pvVar2;
  
  iVar1 = GetMenuCamInitType__Fv();
  if (iVar1 == 0) {
    pvVar2 = GetMenuCameraEdtPk2Addr__Fv();
    PK2SendVram__FUiiii((uint)pvVar2,-1,-1,0);
    MenuCamEditBgDisp__FiiUc(off_x,off_y,alpha);
  }
  pvVar2 = GetMenuCameraPk2Addr__Fv();
  PK2SendVram__FUiiii((uint)pvVar2,-1,-1,0);
  MenuCamEditTitleFrameDisp__FiiUc(off_x,off_y,alpha);
  MenuCamEditMenuFrameDisp__FiiUc(off_x,off_y,alpha);
  pvVar2 = GetMenuCameraEdtPk2Addr__Fv();
  PK2SendVram__FUiiii((uint)pvVar2,-1,-1,0);
  MenuCamEditTitleDisp__FiiUc(off_x,off_y,alpha);
  MenuCamEditMenuItemDisp__FiiUc(off_x,off_y,alpha);
  MenuCamEditWinDisp__FiiUc(off_x,off_y,alpha);
  MenuCamEditBaseDisp__FiiUc(off_x,off_y,alpha);
  MenuCamEditReinforcedLensDisp__FiiUc(off_x,off_y,alpha);
  MenuCamEditBaseFrameBgDisp__FiiUc(off_x,off_y,alpha);
  MenuCamEditLensFrameBgDisp__FiiUc(off_x,off_y,alpha);
  pvVar2 = GetMenuCameraPk2Addr__Fv();
  PK2SendVram__FUiiii((uint)pvVar2,-1,-1,0);
  MenuCamEditEquipReinforcedLensDisp__FiiUc(off_x,off_y,alpha);
  pvVar2 = GetMenuCameraEdtPk2Addr__Fv();
  PK2SendVram__FUiiii((uint)pvVar2,-1,-1,0);
  MenuCamEditEquipLensLvDisp__FiiUc(off_x,off_y,alpha);
  MenuCamEditHaveStatusDisp__FiiUc(off_x,off_y,alpha);
  pvVar2 = GetMenuCameraEdtPk2Addr__Fv();
  PK2SendVram__FUiiii((uint)pvVar2,-1,-1,0);
  MenuCamEditBaseItemDisp__FiiUc(off_x,off_y,alpha);
  MenuCamEditBaseLvDisp__FiiUc(off_x,off_y,alpha);
  MenuCamEditHaveLensNameDisp__FiiUc(off_x,off_y,alpha);
  MenuCamEditLensLvDisp__FiiUc(off_x,off_y,alpha);
  MenuCamEditScrollDisp__FiiUc(off_x,off_y,alpha);
  MenuCamEditMsgWindowDisp__FiiUc(off_x,off_y,alpha);
  MenuCamEditCaptionDisp__FiiUc(off_x,off_y,alpha);
  menu_cam_edit_disp.gem_anim_timer = menu_cam_edit_disp.gem_anim_timer + 1;
  if (0x4a < (short)menu_cam_edit_disp.gem_anim_timer) {
    menu_cam_edit_disp.gem_anim_timer = 0;
  }
  return;
}

static void MenuCamEditGemAddCmnDisp(int off_x, int off_y, u_char alpha) {
  MenuCamEditCmnDisp__FiiUc(off_x,off_y,alpha);
  MenuCamEditBaseNextPointDisp__FiiUc(off_x,off_y,alpha);
  MenuCamEditLensNextPointDisp__FiiUc(off_x,off_y,alpha);
  if (menu_cam_edit_ctrl.edit_sel_csr < '\x03') {
    MenuCamEditSelFrameBgDisp__FiUc
              ((int)((float)(int)menu_cam_edit_ctrl.edit_sel_csr * 32.0 + 133.0),alpha);
  }
  else {
    MenuCamEditSelFrameBgDisp__FiUc
              ((int)((float)(menu_cam_edit_ctrl.edit_sel_csr + -3) * 32.0 + 255.0),alpha);
  }
  MenuCamEditItemFrameDisp__FiiUc(off_x,off_y,alpha);
  MenuCamEditBaseGemDisp__FiiUc(off_x,off_y,alpha);
  MenuCamEditLensGemDisp__FiiUc(off_x,off_y,alpha);
  if (menu_cam_edit_ctrl.edit_sel_csr < '\x03') {
    MenuCamEditSelCsrDisp__FffUc
              (190.0,(float)(int)menu_cam_edit_ctrl.edit_sel_csr * 32.0 + 130.0,alpha);
    return;
  }
  MenuCamEditSelCsrDisp__FffUc
            (190.0,(float)(menu_cam_edit_ctrl.edit_sel_csr + -3) * 32.0 + 252.0,alpha);
  return;
}

static void MenuCamEditPowerUpCmnDisp(int off_x, int off_y, u_char alpha) {
  MenuCamEditCmnDisp__FiiUc(off_x,off_y,alpha);
  MenuCamEditBaseNextPointDisp__FiiUc(off_x,off_y,alpha);
  MenuCamEditLensNextPointDisp__FiiUc(off_x,off_y,alpha);
  if (menu_cam_edit_ctrl.edit_sel_csr < '\x03') {
    MenuCamEditSelFrameBgDisp__FiUc
              ((int)((float)(int)menu_cam_edit_ctrl.edit_sel_csr * 32.0 + 133.0),alpha);
  }
  else {
    MenuCamEditSelFrameBgDisp__FiUc
              ((int)((float)(menu_cam_edit_ctrl.edit_sel_csr + -3) * 32.0 + 255.0),alpha);
  }
  MenuCamEditItemFrameDisp__FiiUc(off_x,off_y,alpha);
  MenuCamEditBaseGemDisp__FiiUc(off_x,off_y,alpha);
  MenuCamEditLensGemDisp__FiiUc(off_x,off_y,alpha);
  if (menu_cam_edit_ctrl.edit_sel_csr < '\x03') {
    MenuCamEditSelCsrDisp__FffUc
              (190.0,(float)(int)menu_cam_edit_ctrl.edit_sel_csr * 32.0 + 130.0,alpha);
    return;
  }
  MenuCamEditSelCsrDisp__FffUc
            (190.0,(float)(menu_cam_edit_ctrl.edit_sel_csr + -3) * 32.0 + 252.0,alpha);
  return;
}

static void MenuCamEditItemFrameDisp(int off_x, int off_y, u_char alpha) {
  void *tm2_addr;
  
  tm2_addr = GetMenuCameraEdtPk2Addr__Fv();
  PK2SendVram__FUiiii((uint)tm2_addr,-1,-1,0);
  MenuCamEditBaseFrameDisp__FiiUc(off_x,off_y,alpha);
  MenuCamEditLensFrameDisp__FiiUc(off_x,off_y,alpha);
  return;
}

static void MenuCamEditTitleFrameDisp(int off_x, int off_y, u_char alpha) {
	int i;
	DISP_SPRT title_ds;
	
  int iVar1;
  SPRT_DAT *d;
  float fVar2;
  float fVar3;
  DISP_SPRT title_ds;
  
  fVar2 = (float)off_x;
  iVar1 = 1;
  d = menu_camera_tex + 0xe6;
  fVar3 = DAT_003ee514;
  do {
    CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&title_ds,d);
    iVar1 = iVar1 + -1;
    d = d + 1;
    title_ds.csx = title_ds.x + fVar2;
    title_ds.csy = title_ds.y + (float)off_y;
    title_ds.sch = 1.0;
    title_ds.alpha = (uchar)((int)((uint)title_ds.alpha * (uint)alpha) >> 7);
    title_ds.x = title_ds.csx;
    title_ds.y = title_ds.csy;
    title_ds.scw = fVar3;
    DispSprD__FP9DISP_SPRT(&title_ds);
  } while (-1 < iVar1);
  return;
}

static void MenuCamEditTitleDisp(int off_x, int off_y, u_char alpha) {
	DISP_SPRT title_ds;
	
  DISP_SPRT title_ds;
  
  CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&title_ds,menu_camera_tex + 0xdf);
  title_ds.x = title_ds.x + (float)off_x;
  title_ds.y = title_ds.y + (float)off_y;
  title_ds.alpha = (uchar)((int)((uint)title_ds.alpha * (uint)alpha) >> 7);
  DispSprD__FP9DISP_SPRT(&title_ds);
  return;
}

static void MenuCamEditBgDisp(int off_x, int off_y, u_char alpha) {
	DISP_SPRT bg_ds;
	
  DISP_SPRT bg_ds;
  
  CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&bg_ds,menu_camera_tex + 0x9d);
  bg_ds.x = bg_ds.x + (float)off_x;
  bg_ds.y = bg_ds.y + (float)off_y;
  bg_ds.alpha = (uchar)((int)((uint)bg_ds.alpha * (uint)alpha) >> 7);
  DispSprD__FP9DISP_SPRT(&bg_ds);
  return;
}

static void MenuCamEditMenuFrameDisp(int off_x, int off_y, u_char alpha) {
	int i;
	
  int iVar1;
  long lVar2;
  float fVar3;
  
  fVar3 = 35.0;
  lVar2 = 0;
  do {
    iVar1 = (int)lVar2;
    if (lVar2 == menu_cam_edit_ctrl.menu_csr) {
      MenuCamEditSelFrameDisp__FfffUcUi(22.0,(float)iVar1 * fVar3 + 65.0,161.0,alpha,0);
    }
    else {
      MenuCamEditNonSelFrameDisp__FfffUcUi(22.0,(float)iVar1 * fVar3 + 65.0,161.0,alpha,0);
    }
    lVar2 = (long)(iVar1 + 1);
  } while (lVar2 < 3);
  return;
}

static void MenuCamEditSelFrameDisp(float x, float y, float w, u_char alpha, u_int pri) {
	DISP_SPRT frame_ds;
	float one_size;
	float frame_scl_l;
	float frame_scl_r;
	
  uint uVar1;
  float fVar2;
  float fVar3;
  DISP_SPRT frame_ds;
  
  fVar3 = (w * 0.5) / (float)(uint)(ushort)menu_camera_tex[234].w;
  fVar2 = (w * 0.5) / (float)(uint)(ushort)menu_camera_tex[235].w;
  CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&frame_ds,menu_camera_tex + 0xea);
  uVar1 = 0xfffff - (pri & 0xfffff);
  frame_ds.sch = 1.0;
  frame_ds.alpha = (uchar)((int)((uint)frame_ds.alpha * (uint)alpha) >> 7);
  frame_ds.csx = x;
  frame_ds.csy = y;
  frame_ds.x = x;
  frame_ds.y = y;
  frame_ds.z = uVar1;
  frame_ds.scw = fVar3;
  frame_ds.pri = pri;
  DispSprD__FP9DISP_SPRT(&frame_ds);
  CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&frame_ds,menu_camera_tex + 0xeb);
  frame_ds.sch = 1.0;
  frame_ds.alpha = (uchar)((int)((uint)frame_ds.alpha * (uint)alpha) >> 7);
  frame_ds.csx = x + (float)(uint)(ushort)menu_camera_tex[234].w * fVar3;
  frame_ds.csy = y;
  frame_ds.x = frame_ds.csx;
  frame_ds.y = y;
  frame_ds.z = uVar1;
  frame_ds.scw = fVar2;
  frame_ds.pri = pri;
  DispSprD__FP9DISP_SPRT(&frame_ds);
  return;
}

static void MenuCamEditNonSelFrameDisp(float x, float y, float w, u_char alpha, u_int pri) {
	DISP_SPRT frame_ds;
	float one_size;
	float frame_scl_l;
	float frame_scl_r;
	
  uint uVar1;
  float fVar2;
  float fVar3;
  DISP_SPRT frame_ds;
  
  fVar3 = (w * 0.5) / (float)(uint)(ushort)menu_camera_tex[232].w;
  fVar2 = (w * 0.5) / (float)(uint)(ushort)menu_camera_tex[233].w;
  CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&frame_ds,menu_camera_tex + 0xe8);
  uVar1 = 0xfffff - (pri & 0xfffff);
  frame_ds.sch = 1.0;
  frame_ds.alpha = (uchar)((int)((uint)frame_ds.alpha * (uint)alpha) >> 7);
  frame_ds.csx = x;
  frame_ds.csy = y;
  frame_ds.x = x;
  frame_ds.y = y;
  frame_ds.z = uVar1;
  frame_ds.scw = fVar3;
  frame_ds.pri = pri;
  DispSprD__FP9DISP_SPRT(&frame_ds);
  CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&frame_ds,menu_camera_tex + 0xe9);
  frame_ds.sch = 1.0;
  frame_ds.alpha = (uchar)((int)((uint)frame_ds.alpha * (uint)alpha) >> 7);
  frame_ds.csx = x + (float)(uint)(ushort)menu_camera_tex[232].w * fVar3;
  frame_ds.csy = y;
  frame_ds.x = frame_ds.csx;
  frame_ds.y = y;
  frame_ds.z = uVar1;
  frame_ds.scw = fVar2;
  frame_ds.pri = pri;
  DispSprD__FP9DISP_SPRT(&frame_ds);
  return;
}

static void MenuCamEditMenuItemDisp(int off_x, int off_y, u_char alpha) {
	int i;
	DISP_SPRT item_ds;
	
  long lVar1;
  SPRT_DAT *d;
  SPRT_DAT *d_00;
  float fVar2;
  DISP_SPRT item_ds;
  
  fVar2 = (float)off_x;
  d_00 = menu_camera_tex + 0xe3;
  lVar1 = 0;
  d = menu_camera_tex + 0xe0;
  do {
    if (lVar1 == menu_cam_edit_ctrl.menu_csr) {
      CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&item_ds,d_00);
    }
    else {
      CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&item_ds,d);
    }
    lVar1 = (long)((int)lVar1 + 1);
    item_ds.x = item_ds.x + fVar2;
    d = d + 1;
    item_ds.y = item_ds.y + (float)off_y;
    d_00 = d_00 + 1;
    item_ds.alpha = (uchar)((int)((uint)item_ds.alpha * (uint)alpha) >> 7);
    DispSprD__FP9DISP_SPRT(&item_ds);
  } while (lVar1 < 3);
  return;
}

static void MenuCamEditWinDisp(int off_x, int off_y, u_char alpha) {
	int i;
	DISP_SPRT bg_ds;
	
  int iVar1;
  int iVar2;
  SPRT_DAT *pSVar3;
  uint uVar4;
  float fVar5;
  float fVar6;
  DISP_SPRT bg_ds;
  
  fVar6 = (float)off_x;
  fVar5 = (float)off_y;
  iVar2 = 8;
  pSVar3 = menu_camera_tex + 0x9e;
  do {
    CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&bg_ds,pSVar3);
    pSVar3 = pSVar3 + 1;
    bg_ds.x = bg_ds.x + fVar6;
    bg_ds.y = bg_ds.y + fVar5;
    iVar1 = GetMenuCamInitType__Fv();
    if (iVar1 == 0) {
      bg_ds.alpha = (uchar)((int)((uint)bg_ds.alpha * (uint)alpha) >> 7);
    }
    else {
      bg_ds.alpha = (uchar)((int)((uint)alpha * 0x59) >> 7);
    }
    iVar2 = iVar2 + -1;
    DispSprD__FP9DISP_SPRT(&bg_ds);
  } while (-1 < iVar2);
  iVar2 = 0xf;
  pSVar3 = menu_camera_tex + 0xb1;
  do {
    CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&bg_ds,pSVar3);
    iVar2 = iVar2 + -1;
    pSVar3 = pSVar3 + 1;
    uVar4 = (uint)alpha;
    bg_ds.x = bg_ds.x + fVar6;
    bg_ds.y = bg_ds.y + fVar5;
    bg_ds.alpha = (uchar)((int)(bg_ds.alpha * uVar4) >> 7);
    DispSprD__FP9DISP_SPRT(&bg_ds);
  } while (-1 < iVar2);
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
  if (((uint)m_plyr_camera.camera_power_up.mCamPartsSetFlg.flag_32[0] & 2) == 0) {
    iVar2 = 3;
    pSVar3 = menu_camera_tex + 0xad;
    do {
      CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&bg_ds,pSVar3);
      iVar2 = iVar2 + -1;
      pSVar3 = pSVar3 + 1;
      bg_ds.x = bg_ds.x + fVar6;
      bg_ds.y = bg_ds.y + fVar5;
      bg_ds.alpha = (uchar)((int)(bg_ds.alpha * uVar4) >> 7);
      DispSprD__FP9DISP_SPRT(&bg_ds);
    } while (-1 < iVar2);
    MenuCamEditEquipDisp__FiiUc(off_x,off_y,alpha);
  }
  else {
                    /* end of inlined section */
    CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&bg_ds,menu_camera_tex + 0xac);
    bg_ds.x = bg_ds.x + fVar6;
    bg_ds.y = bg_ds.y + fVar5;
    bg_ds.alpha = (uchar)((int)(bg_ds.alpha * uVar4) >> 7);
    DispSprD__FP9DISP_SPRT(&bg_ds);
  }
  return;
}

static void MenuCamEditBaseDisp(int off_x, int off_y, u_char alpha) {
	DISP_SPRT base_ds;
	static reference_fixed_array<int,12> base_tex_tbl;
	
  int iVar1;
  DISP_SPRT base_ds;
  
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  if (__tmp_10_1260 == 0) {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    base_tex_tbl_1259 = &DAT_003bcbc8;
    __tmp_10_1260 = 1;
  }
                    /* end of inlined section */
  iVar1 = (int)menu_cam_edit_ctrl.mode;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  _fixed_array_verifyrange__H1Zi_UiUi_PX01(menu_cam_edit_ctrl.mode,0xc);
  CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT
            (&base_ds,menu_camera_tex + *(int *)(base_tex_tbl_1259 + iVar1 * 4));
                    /* end of inlined section */
  base_ds.x = base_ds.x + (float)off_x;
  base_ds.y = base_ds.y + (float)off_y;
  base_ds.alpha = (uchar)((int)((uint)base_ds.alpha * (uint)alpha) >> 7);
  DispSprD__FP9DISP_SPRT(&base_ds);
  return;
}

static void MenuCamEditReinforcedLensDisp(int off_x, int off_y, u_char alpha) {
	DISP_SPRT assist_ds;
	
  DISP_SPRT assist_ds;
  
  CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&assist_ds,menu_camera_tex + 0xee);
  assist_ds.x = assist_ds.x + (float)off_x;
  assist_ds.y = assist_ds.y + (float)off_y;
  assist_ds.alpha = (uchar)((int)((uint)assist_ds.alpha * (uint)alpha) >> 7);
  DispSprD__FP9DISP_SPRT(&assist_ds);
  return;
}

static void MenuCamEditEquipDisp(int off_x, int off_y, u_char alpha) {
	DISP_SPRT equip_ds;
	
  DISP_SPRT equip_ds;
  
  CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&equip_ds,menu_camera_tex + 0xef);
  equip_ds.x = equip_ds.x + (float)off_x;
  equip_ds.y = equip_ds.y + (float)off_y;
  equip_ds.alpha = (uchar)((int)((uint)equip_ds.alpha * (uint)alpha) >> 7);
  DispSprD__FP9DISP_SPRT(&equip_ds);
  return;
}

static void MenuCamEditEquipReinforcedLensDisp(int off_x, int off_y, u_char alpha) {
	int i;
	fixed_array<char,3> equip_special;
	
  char *pcVar1;
  int iVar2;
  float fVar3;
  fixed_array<char,3> equip_special;
  
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  iVar2 = 0;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  _fixed_array_verifyrange__H1Zc_UiUi_PX01(0,3);
  GetSubFuncArray__14CNEquipTrayWrkPc(&m_plyr_camera.eq_tray,(char *)&equip_special);
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
  if (((uint)m_plyr_camera.camera_power_up.mCamPartsSetFlg.flag_32[0] & 2) == 0) {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Zc_UiUi_PX01(0,3);
    if (equip_special.field0_0x0.m_aData[0] != '\0') {
      _fixed_array_verifyrange__H1Zc_UiUi_PX01(0,3);
      MenuCamCmnReinforcedLensDisp__FffUci
                (DAT_003ee518,60.0,alpha,(int)equip_special.field0_0x0.m_aData[0]);
    }
  }
  else {
                    /* end of inlined section */
    fVar3 = 50.0;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    do {
      _fixed_array_verifyrange__H1Zc_UiUi_PX01(iVar2,3);
      pcVar1 = equip_special.field0_0x0.m_aData + iVar2;
      if (*pcVar1 != '\0') {
        _fixed_array_verifyrange__H1Zc_UiUi_PX01(iVar2,3);
        MenuCamCmnReinforcedLensDisp__FffUci((float)iVar2 * fVar3 + 197.0,46.0,alpha,(int)*pcVar1);
      }
                    /* end of inlined section */
      iVar2 = iVar2 + 1;
    } while (iVar2 < 3);
  }
  return;
}

static void MenuCamEditEquipLensLvDisp(int off_x, int off_y, u_char alpha) {
	int i;
	fixed_array<char,3> equip_special;
	DISP_SPRT lv_ds;
	
  char cVar1;
  char *pcVar2;
  int iVar3;
  float fVar4;
  fixed_array<char,3> equip_special;
  DISP_SPRT lv_ds;
  
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  iVar3 = 0;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  _fixed_array_verifyrange__H1Zc_UiUi_PX01(0,3);
  GetSubFuncArray__14CNEquipTrayWrkPc(&m_plyr_camera.eq_tray,(char *)&equip_special);
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
  if (((uint)m_plyr_camera.camera_power_up.mCamPartsSetFlg.flag_32[0] & 2) == 0) {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Zc_UiUi_PX01(0,3);
    if (equip_special.field0_0x0.m_aData[0] != '\0') {
      _fixed_array_verifyrange__H1Zc_UiUi_PX01(0,3);
      _fixed_array_verifyrange__H1Zt9CVariable3Zci0i3_UiUi_PX01
                (equip_special.field0_0x0.m_aData[0],10);
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
      CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT
                (&lv_ds,menu_camera_tex +
                        m_plyr_camera.eq_tray.mSave.mSubFuncLv.field0_0x0.m_aData
                        [equip_special.field0_0x0.m_aData[0]].mValue + 0xf0);
                    /* end of inlined section */
      lv_ds.x = 308.0;
      lv_ds.y = 83.0;
      lv_ds.alpha = (uchar)((int)((uint)lv_ds.alpha * (uint)alpha) >> 7);
      DispSprD__FP9DISP_SPRT(&lv_ds);
    }
  }
  else {
                    /* end of inlined section */
    fVar4 = 208.0;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    do {
      _fixed_array_verifyrange__H1Zc_UiUi_PX01(iVar3,3);
      pcVar2 = equip_special.field0_0x0.m_aData + iVar3;
      if (*pcVar2 != '\0') {
        _fixed_array_verifyrange__H1Zc_UiUi_PX01(iVar3,3);
        cVar1 = *pcVar2;
        _fixed_array_verifyrange__H1Zt9CVariable3Zci0i3_UiUi_PX01(cVar1,10);
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
        CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT
                  (&lv_ds,menu_camera_tex +
                          m_plyr_camera.eq_tray.mSave.mSubFuncLv.field0_0x0.m_aData[cVar1].mValue +
                          0xf0);
                    /* end of inlined section */
        lv_ds.y = 85.0;
        lv_ds.x = (float)iVar3 * 50.0 + fVar4;
        lv_ds.alpha = (uchar)((int)((uint)lv_ds.alpha * (uint)alpha) >> 7);
        DispSprD__FP9DISP_SPRT(&lv_ds);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < 3);
  }
  return;
}

static void MenuCamEditHaveStatusDisp(int off_x, int off_y, u_char alpha) {
	int i;
	DISP_SPRT status_ds;
	
  char cVar1;
  int iVar2;
  SPRT_DAT *d;
  float fVar3;
  DISP_SPRT status_ds;
  
  fVar3 = (float)off_x;
  iVar2 = 4;
  d = menu_camera_tex + 0xf4;
  do {
    CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&status_ds,d);
    iVar2 = iVar2 + -1;
    d = d + 1;
    status_ds.x = status_ds.x + fVar3;
    status_ds.y = status_ds.y + (float)off_y;
    status_ds.alpha = (uchar)((int)((uint)status_ds.alpha * (uint)alpha) >> 7);
    DispSprD__FP9DISP_SPRT(&status_ds);
  } while (-1 < iVar2);
  cVar1 = GetPlyrLevelGemNum__Fv();
  MenuCamNumberDisp__FiiiiUciUcUc((int)cVar1,2,499,0x3e,alpha,0,'\0','\x01');
  iVar2 = GetPlayData_Score__Fv();
  MenuCamNumberDisp__FiiiiUciUcUc(iVar2,6,0x1d7,0x51,alpha,0,'\0','\0');
  return;
}

static void MenuCamEditBaseFrameBgDisp(int off_x, int off_y, u_char alpha) {
	int i;
	
  int iVar1;
  float fVar2;
  float fVar3;
  
  fVar3 = 32.0;
  iVar1 = 0;
  do {
    fVar2 = (float)iVar1;
    iVar1 = iVar1 + 1;
    MenuCamEditFrameBgDisp__FfUc(fVar2 * fVar3 + 133.0,alpha);
  } while (iVar1 < 3);
  return;
}

static void MenuCamEditLensFrameBgDisp(int off_x, int off_y, u_char alpha) {
	int i;
	
  int iVar1;
  float fVar2;
  float fVar3;
  
  fVar3 = 32.0;
  iVar1 = 0;
  do {
    fVar2 = (float)iVar1;
    iVar1 = iVar1 + 1;
    MenuCamEditFrameBgDisp__FfUc(fVar2 * fVar3 + 255.0,alpha);
  } while (iVar1 < 3);
  return;
}

static void MenuCamEditBaseFrameDisp(int off_x, int off_y, u_char alpha) {
	int i;
	DISP_SPRT frame_ds;
	
  int iVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  DISP_SPRT frame_ds;
  
  fVar5 = (float)off_x;
  iVar2 = 0xc1;
  iVar1 = 0x1820;
  do {
    CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT
              (&frame_ds,(SPRT_DAT *)((int)&menu_camera_tex[0].tex0 + iVar1));
    frame_ds.x = frame_ds.x + fVar5;
    frame_ds.y = frame_ds.y + (float)off_y;
    switch(iVar2) {
    case 0xc2:
    case 199:
    case 0xcc:
      if ((int)frame_ds.w < 0) {
        fVar3 = (float)(frame_ds.w & 1 | frame_ds.w >> 1);
        fVar3 = fVar3 + fVar3;
      }
      else {
        fVar3 = (float)frame_ds.w;
      }
      fVar4 = 80.0;
      break;
    default:
      goto switchD_001eb44c_caseD_c3;
    case 0xc4:
    case 0xc9:
    case 0xce:
      if ((int)frame_ds.w < 0) {
        fVar3 = (float)(frame_ds.w & 1 | frame_ds.w >> 1);
        fVar3 = fVar3 + fVar3;
      }
      else {
        fVar3 = (float)frame_ds.w;
      }
      fVar4 = 161.0;
    }
    frame_ds.scw = fVar4 / fVar3;
    frame_ds.sch = 1.0;
    frame_ds.csx = frame_ds.x;
    frame_ds.csy = frame_ds.y;
switchD_001eb44c_caseD_c3:
    iVar2 = iVar2 + 1;
    frame_ds.alpha = (uchar)((int)((uint)frame_ds.alpha * (uint)alpha) >> 7);
    DispSprD__FP9DISP_SPRT(&frame_ds);
    if (0xcf < iVar2) {
      return;
    }
    iVar1 = iVar2 * 0x20;
  } while( true );
}

static void MenuCamEditBaseItemDisp(int off_x, int off_y, u_char alpha) {
	int i;
	DISP_SPRT item_ds;
	
  int iVar1;
  SPRT_DAT *d;
  float fVar2;
  DISP_SPRT item_ds;
  
  fVar2 = (float)off_x;
  iVar1 = 2;
  d = menu_camera_tex + 0xf9;
  do {
    CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&item_ds,d);
    iVar1 = iVar1 + -1;
    d = d + 1;
    item_ds.x = item_ds.x + fVar2;
    item_ds.y = item_ds.y + (float)off_y;
    item_ds.alpha = (uchar)((int)((uint)item_ds.alpha * (uint)alpha) >> 7);
    DispSprD__FP9DISP_SPRT(&item_ds);
  } while (-1 < iVar1);
  return;
}

static void MenuCamEditBaseLvDisp(int off_x, int off_y, u_char alpha) {
  MenuCamEditLvDisp__FfUci(135.0,alpha,(int)m_plyr_camera.camera_power_up.mRadiusGrade.mValue);
  MenuCamEditLvDisp__FfUci(167.0,alpha,(int)m_plyr_camera.eq_tray.mSave.mStockGrade.mValue);
  MenuCamEditLvDisp__FfUci(199.0,alpha,(int)m_plyr_camera.camera_power_up.mSensitiveGrade.mValue);
  return;
}

static void MenuCamEditBaseNextPointDisp(int off_x, int off_y, u_char alpha) {
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
  if (m_plyr_camera.camera_power_up.mRadiusGrade.mValue != '\x03') {
                    /* end of inlined section */
    MenuCamEditNextPointDisp__FiiUcii
              (0x1d2,0x88,alpha,0x12,
               cam_base_status_point[m_plyr_camera.camera_power_up.mRadiusGrade.mValue + 1]);
  }
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
  if (m_plyr_camera.eq_tray.mSave.mStockGrade.mValue != '\x03') {
                    /* end of inlined section */
    MenuCamEditNextPointDisp__FiiUcii
              (0x1d2,0xa8,alpha,0x12,
               cam_base_status_point[1][m_plyr_camera.eq_tray.mSave.mStockGrade.mValue + 1]);
  }
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
  if (m_plyr_camera.camera_power_up.mSensitiveGrade.mValue != '\x03') {
                    /* end of inlined section */
    MenuCamEditNextPointDisp__FiiUcii
              (0x1d2,200,alpha,0x12,
               cam_base_status_point[2][m_plyr_camera.camera_power_up.mSensitiveGrade.mValue + 1]);
  }
  return;
}

static void MenuCamEditBaseGemDisp(int off_x, int off_y, u_char alpha) {
	int i;
	
  float fVar1;
  int iVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  
  fVar1 = DAT_003ee51c;
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
  lVar3 = 0;
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
  if ('\0' < m_plyr_camera.camera_power_up.mRadiusGem.mValue) {
    fVar4 = 28.0;
    do {
                    /* end of inlined section */
      iVar2 = (int)lVar3;
      lVar3 = (long)(iVar2 + 1);
      MenuCamEditGemDisp__FffUcUc((float)iVar2 * fVar4 + fVar1,139.0,alpha,'\0');
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
    } while (lVar3 < m_plyr_camera.camera_power_up.mRadiusGem.mValue);
  }
  fVar1 = DAT_003ee520;
  lVar3 = 0;
  if ('\0' < m_plyr_camera.camera_power_up.mRadiusGrade.mValue) {
    fVar4 = 28.0;
    do {
                    /* end of inlined section */
      iVar2 = (int)lVar3;
      lVar3 = (long)(iVar2 + 1);
      MenuCamEditGemDisp__FffUcUc((float)iVar2 * fVar4 + fVar1,139.0,alpha,'\x01');
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
    } while (lVar3 < m_plyr_camera.camera_power_up.mRadiusGrade.mValue);
  }
  fVar1 = DAT_003ee524;
  lVar3 = 0;
  if ('\0' < m_plyr_camera.camera_power_up.mAccumGem.mValue) {
    fVar4 = 28.0;
    do {
                    /* end of inlined section */
      iVar2 = (int)lVar3;
      lVar3 = (long)(iVar2 + 1);
      MenuCamEditGemDisp__FffUcUc((float)iVar2 * fVar4 + fVar1,171.0,alpha,'\0');
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
    } while (lVar3 < m_plyr_camera.camera_power_up.mAccumGem.mValue);
  }
  fVar1 = DAT_003ee528;
  lVar3 = 0;
  if ('\0' < m_plyr_camera.eq_tray.mSave.mStockGrade.mValue) {
    fVar4 = 28.0;
    do {
                    /* end of inlined section */
      iVar2 = (int)lVar3;
      lVar3 = (long)(iVar2 + 1);
      MenuCamEditGemDisp__FffUcUc((float)iVar2 * fVar4 + fVar1,171.0,alpha,'\x01');
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
    } while (lVar3 < m_plyr_camera.eq_tray.mSave.mStockGrade.mValue);
  }
  fVar1 = DAT_003ee52c;
  lVar3 = 0;
  if ('\0' < m_plyr_camera.camera_power_up.mSensiteiveGem.mValue) {
    fVar4 = 28.0;
    do {
                    /* end of inlined section */
      iVar2 = (int)lVar3;
      lVar3 = (long)(iVar2 + 1);
      MenuCamEditGemDisp__FffUcUc((float)iVar2 * fVar4 + fVar1,203.0,alpha,'\0');
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
    } while (lVar3 < m_plyr_camera.camera_power_up.mSensiteiveGem.mValue);
  }
  fVar1 = DAT_003ee530;
  lVar3 = 0;
  if ('\0' < m_plyr_camera.camera_power_up.mSensitiveGrade.mValue) {
    fVar4 = 28.0;
    do {
                    /* end of inlined section */
      iVar2 = (int)lVar3;
      lVar3 = (long)(iVar2 + 1);
      MenuCamEditGemDisp__FffUcUc((float)iVar2 * fVar4 + fVar1,203.0,alpha,'\x01');
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
    } while (lVar3 < m_plyr_camera.camera_power_up.mSensitiveGrade.mValue);
  }
                    /* end of inlined section */
  fVar1 = DAT_003ee534;
  if (base_gem_anim_ctrl.data_pos != -1) {
    fVar4 = 28.0;
    lVar3 = 0;
    fVar5 = 32.0;
    do {
      if (base_gem_anim_ctrl.data_pos == lVar3) {
        MenuCamEditGemAnimDisp__FffUcs
                  ((float)(int)base_gem_anim_ctrl.lv * fVar4 + fVar1,
                   (float)(int)lVar3 * fVar5 + 139.0,alpha,base_gem_anim_ctrl.timer);
        base_gem_anim_ctrl.timer = base_gem_anim_ctrl.timer + 1;
        if (0x31 < (short)base_gem_anim_ctrl.timer) {
          memset(&base_gem_anim_ctrl,-1,4);
          menu_cam_edit_ctrl.gem_anim_flg = '\0';
        }
      }
      lVar3 = (long)((int)lVar3 + 1);
    } while (lVar3 < 3);
  }
  return;
}

static void MenuCamEditLensFrameDisp(int off_x, int off_y, u_char alpha) {
	int i;
	int j;
	DISP_SPRT frame_ds;
	static int frame_tex_tbl[3][2] = {
		/* [0] = */ {
			/* [0] = */ 208,
			/* [1] = */ 212
		},
		/* [1] = */ {
			/* [0] = */ 213,
			/* [1] = */ 217
		},
		/* [2] = */ {
			/* [0] = */ 218,
			/* [1] = */ 222
		}
	};
	
  int iVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  DISP_SPRT frame_ds;
  
  iVar2 = 0;
  do {
    iVar1 = (&frame_tex_tbl_1309)[iVar2 * 2];
    if (iVar1 <= (int)(&DAT_003bcc3c)[iVar2 * 2]) {
      fVar5 = (float)off_x;
      do {
        CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&frame_ds,menu_camera_tex + iVar1);
        frame_ds.x = frame_ds.x + fVar5;
        frame_ds.y = frame_ds.y + (float)off_y;
        switch(iVar1) {
        case 0xd1:
        case 0xd6:
        case 0xdb:
          if ((int)frame_ds.w < 0) {
            fVar3 = (float)(frame_ds.w & 1 | frame_ds.w >> 1);
            fVar3 = fVar3 + fVar3;
          }
          else {
            fVar3 = (float)frame_ds.w;
          }
          fVar4 = 80.0;
          break;
        default:
          goto switchD_001ebb2c_caseD_d2;
        case 0xd3:
        case 0xd8:
        case 0xdd:
          if ((int)frame_ds.w < 0) {
            fVar3 = (float)(frame_ds.w & 1 | frame_ds.w >> 1);
            fVar3 = fVar3 + fVar3;
          }
          else {
            fVar3 = (float)frame_ds.w;
          }
          fVar4 = 161.0;
        }
        frame_ds.scw = fVar4 / fVar3;
        frame_ds.sch = 1.0;
        frame_ds.csx = frame_ds.x;
        frame_ds.csy = frame_ds.y;
switchD_001ebb2c_caseD_d2:
        iVar1 = iVar1 + 1;
        frame_ds.alpha = (uchar)((int)((uint)frame_ds.alpha * (uint)alpha) >> 7);
        DispSprD__FP9DISP_SPRT(&frame_ds);
      } while (iVar1 <= (int)(&DAT_003bcc3c)[iVar2 * 2]);
    }
    iVar2 = iVar2 + 1;
    if (2 < iVar2) {
      return;
    }
  } while( true );
}

static void MenuCamEditHaveLensNameDisp(int off_x, int off_y, u_char alpha) {
	int i;
	int disp_num;
	
  float fVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  
  fVar1 = DAT_003ee538;
  iVar3 = 0;
  iVar4 = menu_cam_edit_ctrl.ref_ctrl.data_num;
  if (3 < menu_cam_edit_ctrl.ref_ctrl.data_num) {
    iVar4 = 3;
  }
  if (0 < iVar4) {
    fVar6 = 32.0;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    do {
      iVar2 = menu_cam_edit_ctrl.ref_ctrl.disp_start_pos + iVar3;
      _fixed_array_verifyrange__H1Z14DISP_LENS_DATA_UiUi_PX01(iVar2,10);
      fVar5 = (float)iVar3;
                    /* end of inlined section */
      iVar3 = iVar3 + 1;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
      MenuCamEditLensNameDisp__FffUci
                (195.0,fVar5 * fVar6 + fVar1,alpha,
                 disp_lens_data.field0_0x0.m_aData[iVar2].lens_label);
                    /* end of inlined section */
    } while (iVar3 < iVar4);
  }
  return;
}

static void MenuCamEditLensNameDisp(float x, float y, u_char alpha, int lens_label) {
	DISP_SPRT lens_ds;
	static reference_fixed_array<int,10> lens_name_tbl;
	
  DISP_SPRT lens_ds;
  
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* end of inlined section */
  if (__tmp_11_1317 == 0) {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    lens_name_tbl_1316 = &PTR_003bcc88;
    __tmp_11_1317 = 1;
  }
  _fixed_array_verifyrange__H1Zi_UiUi_PX01(lens_label,10);
  if (lens_name_tbl_1316[lens_label] != (undefined *)0xffffffff) {
    _fixed_array_verifyrange__H1Zi_UiUi_PX01(lens_label,10);
    CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT
              (&lens_ds,menu_camera_tex + (int)lens_name_tbl_1316[lens_label]);
                    /* end of inlined section */
    lens_ds.alpha = (uchar)((int)((uint)lens_ds.alpha * (uint)alpha) >> 7);
    lens_ds.x = x;
    lens_ds.y = y;
    DispSprD__FP9DISP_SPRT(&lens_ds);
  }
  return;
}

static void MenuCamEditLensLvDisp(int off_x, int off_y, u_char alpha) {
	int i;
	int disp_num;
	int lens_label;
	
  float fVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  
  fVar1 = DAT_003ee53c;
  iVar3 = 0;
  iVar4 = menu_cam_edit_ctrl.ref_ctrl.data_num;
  if (3 < menu_cam_edit_ctrl.ref_ctrl.data_num) {
    iVar4 = 3;
  }
  if (0 < iVar4) {
    fVar6 = 32.0;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    do {
      iVar2 = menu_cam_edit_ctrl.ref_ctrl.disp_start_pos + iVar3;
      _fixed_array_verifyrange__H1Z14DISP_LENS_DATA_UiUi_PX01(iVar2,10);
      iVar2 = disp_lens_data.field0_0x0.m_aData[iVar2].lens_label;
      _fixed_array_verifyrange__H1Zt9CVariable3Zci0i3_UiUi_PX01(iVar2,10);
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
      fVar5 = (float)iVar3;
                    /* end of inlined section */
      iVar3 = iVar3 + 1;
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
      MenuCamEditLvDisp__FfUci
                (fVar5 * fVar6 + fVar1,alpha,
                 (int)m_plyr_camera.eq_tray.mSave.mSubFuncLv.field0_0x0.m_aData[iVar2].mValue);
                    /* end of inlined section */
    } while (iVar3 < iVar4);
  }
  return;
}

static void MenuCamEditLensNextPointDisp(int off_x, int off_y, u_char alpha) {
	int i;
	int disp_num;
	
  int iVar1;
  int iVar2;
  int iVar3;
  int y;
  
  iVar2 = 0;
  iVar3 = menu_cam_edit_ctrl.ref_ctrl.data_num;
  if (3 < menu_cam_edit_ctrl.ref_ctrl.data_num) {
    iVar3 = 3;
  }
  if (0 < iVar3) {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    y = 0x102;
    do {
      iVar1 = menu_cam_edit_ctrl.ref_ctrl.disp_start_pos + iVar2;
                    /* end of inlined section */
      iVar2 = iVar2 + 1;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
      _fixed_array_verifyrange__H1Z14DISP_LENS_DATA_UiUi_PX01(iVar1,10);
                    /* end of inlined section */
      MenuCamEditOneLensNextPointDisp__FiiiUci
                (disp_lens_data.field0_0x0.m_aData[iVar1].lens_label,0x1d2,y,alpha,0x12);
      y = y + 0x20;
    } while (iVar2 < iVar3);
  }
  return;
}

static void MenuCamEditOneLensNextPointDisp(int lens_label, int x, int y, u_char alpha, int col_label) {
  char cVar1;
  CVariable<char,0,3> *pCVar2;
  
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  pCVar2 = m_plyr_camera.eq_tray.mSave.mSubFuncLv.field0_0x0.m_aData + lens_label;
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  _fixed_array_verifyrange__H1Zt9CVariable3Zci0i3_UiUi_PX01(lens_label,10);
  cVar1 = pCVar2->mValue;
  _fixed_array_verifyrange__H1Zt9CVariable3Zci0i3_UiUi_PX01(lens_label,10);
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
  if (cVar1 != '\x03') {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Zt9CVariable3Zci0i3_UiUi_PX01(lens_label,10);
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
    MenuCamEditNextPointDisp__FiiUcii
              (x,y,alpha,col_label,cam_sp_shot_point_tbl[lens_label][pCVar2->mValue + 1]);
  }
  return;
}

static void MenuCamEditLensGemDisp(int off_x, int off_y, u_char alpha) {
	int i;
	int j;
	int disp_num;
	int lens_label;
	
  float fVar1;
  CVariable<char,0,3> *pCVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  int iVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  
  iVar6 = 0;
  iVar7 = menu_cam_edit_ctrl.ref_ctrl.data_num;
  if (3 < menu_cam_edit_ctrl.ref_ctrl.data_num) {
    iVar7 = 3;
  }
  if (0 < iVar7) {
    do {
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
      lVar5 = 0;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
      iVar3 = menu_cam_edit_ctrl.ref_ctrl.disp_start_pos + iVar6;
      _fixed_array_verifyrange__H1Z14DISP_LENS_DATA_UiUi_PX01(iVar3,10);
      fVar1 = DAT_003ee540;
      iVar3 = disp_lens_data.field0_0x0.m_aData[iVar3].lens_label;
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
      pCVar2 = m_plyr_camera.camera_power_up.mSubFuncGem + iVar3;
      if ('\0' < pCVar2->mValue) {
        fVar9 = 28.0;
        fVar8 = 260.0;
        do {
                    /* end of inlined section */
          iVar4 = (int)lVar5;
          lVar5 = (long)(iVar4 + 1);
          MenuCamEditGemDisp__FffUcUc
                    ((float)iVar4 * fVar9 + fVar1,(float)iVar6 * 32.0 + fVar8,alpha,'\0');
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
        } while (lVar5 < pCVar2->mValue);
      }
      fVar1 = DAT_003ee544;
                    /* end of inlined section */
      fVar9 = 28.0;
      fVar8 = 32.0;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
      for (lVar5 = 0; _fixed_array_verifyrange__H1Zt9CVariable3Zci0i3_UiUi_PX01((long)iVar3,10),
          lVar5 < m_plyr_camera.eq_tray.mSave.mSubFuncLv.field0_0x0.m_aData[iVar3].mValue;
          lVar5 = (long)((int)lVar5 + 1)) {
        MenuCamEditGemDisp__FffUcUc
                  ((float)(int)lVar5 * fVar9 + fVar1,(float)iVar6 * fVar8 + 260.0,alpha,'\x01');
      }
                    /* end of inlined section */
      if (((long)lens_gem_anim_ctrl.data_pos != -1) &&
         ((long)iVar3 == (long)lens_gem_anim_ctrl.data_pos)) {
        MenuCamEditGemAnimDisp__FffUcs
                  ((float)(int)lens_gem_anim_ctrl.lv * 28.0 + DAT_003ee548,
                   (float)iVar6 * 32.0 + 260.0,alpha,lens_gem_anim_ctrl.timer);
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < iVar7);
  }
  if ((lens_gem_anim_ctrl.data_pos != -1) &&
     (lens_gem_anim_ctrl.timer = lens_gem_anim_ctrl.timer + 1,
     0x31 < (short)lens_gem_anim_ctrl.timer)) {
    memset(&lens_gem_anim_ctrl,-1,4);
    menu_cam_edit_ctrl.gem_anim_flg = '\0';
  }
  return;
}

static void MenuCamEditSelEquipLensPosFrameDisp(float x, float y, u_char alpha) {
	int i;
	DISP_SPRT frame_ds;
	
  int iVar1;
  SPRT_DAT *d;
  DISP_SPRT frame_ds;
  
  iVar1 = 3;
  d = menu_camera_tex + 0x118;
  do {
    CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&frame_ds,d);
    iVar1 = iVar1 + -1;
    d = d + 1;
    frame_ds.x = frame_ds.x + x;
    frame_ds.alphar = 0x48;
    frame_ds.y = frame_ds.y + y;
    frame_ds.alpha = (uchar)((int)((uint)frame_ds.alpha * (uint)alpha) >> 7);
    DispSprD__FP9DISP_SPRT(&frame_ds);
  } while (-1 < iVar1);
  return;
}

static void MenuCamEditEquipLensPosCsrDisp(float x, float y, u_char alpha, u_char rgb) {
	DISP_SPRT csr_ds;
	
  DISP_SPRT csr_ds;
  
  CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&csr_ds,menu_camera_tex + 0x11c);
  csr_ds.alphar = 0x48;
  csr_ds.alpha = (uchar)((int)((uint)csr_ds.alpha * (uint)alpha) >> 7);
  csr_ds.x = x;
  csr_ds.y = y;
  csr_ds.r = rgb;
  csr_ds.g = rgb;
  csr_ds.b = rgb;
  DispSprD__FP9DISP_SPRT(&csr_ds);
  CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&csr_ds,menu_camera_tex + 0x11d);
  csr_ds.x = x + 60.0;
  csr_ds.alphar = 0x48;
  csr_ds.alpha = (uchar)((int)((uint)csr_ds.alpha * (uint)alpha) >> 7);
  csr_ds.y = y;
  csr_ds.r = rgb;
  csr_ds.g = rgb;
  csr_ds.b = rgb;
  DispSprD__FP9DISP_SPRT(&csr_ds);
  return;
}

static void MenuCamEditGemDisp(float x, float y, u_char alpha, u_char flg) {
	DISP_SPRT gem_ds;
	
  DISP_SPRT gem_ds;
  
  if (flg == '\0') {
    CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&gem_ds,menu_camera_tex + 0x110);
  }
  else {
    CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&gem_ds,menu_camera_tex + 0x111);
  }
  gem_ds.alpha = (uchar)((int)((uint)gem_ds.alpha * (uint)alpha) >> 7);
  gem_ds.x = x;
  gem_ds.y = y;
  DispSprD__FP9DISP_SPRT(&gem_ds);
  return;
}

static void MenuCamEditGemAnimDisp(float x, float y, u_char alpha, short int timer) {
	DISP_SPRT gem_ds;
	static ALPHA_ANIM_TBL top_gem_anim_tbl[4] = {
		/* [0] = */ {
			/* .start_alpha = */ 0,
			/* .end_alpha = */ 0,
			/* .start_time = */ 0,
			/* .end_time = */ 25
		},
		/* [1] = */ {
			/* .start_alpha = */ 0,
			/* .end_alpha = */ 128,
			/* .start_time = */ 25,
			/* .end_time = */ 35
		},
		/* [2] = */ {
			/* .start_alpha = */ 128,
			/* .end_alpha = */ 0,
			/* .start_time = */ 35,
			/* .end_time = */ 50
		},
		/* [3] = */ {
			/* .start_alpha = */ -1,
			/* .end_alpha = */ -1,
			/* .start_time = */ -1,
			/* .end_time = */ -1
		}
	};
	static ALPHA_ANIM_TBL blue_flare_alpha_anim_tbl[5] = {
		/* [0] = */ {
			/* .start_alpha = */ 0,
			/* .end_alpha = */ 0,
			/* .start_time = */ 0,
			/* .end_time = */ 8
		},
		/* [1] = */ {
			/* .start_alpha = */ 0,
			/* .end_alpha = */ 128,
			/* .start_time = */ 8,
			/* .end_time = */ 18
		},
		/* [2] = */ {
			/* .start_alpha = */ 128,
			/* .end_alpha = */ 0,
			/* .start_time = */ 18,
			/* .end_time = */ 32
		},
		/* [3] = */ {
			/* .start_alpha = */ 0,
			/* .end_alpha = */ 0,
			/* .start_time = */ 32,
			/* .end_time = */ 50
		},
		/* [4] = */ {
			/* .start_alpha = */ -1,
			/* .end_alpha = */ -1,
			/* .start_time = */ -1,
			/* .end_time = */ -1
		}
	};
	static SCL_ANIM_TBL blue_flare_scl_anim_tbl[4] = {
		/* [0] = */ {
			/* .start_scl = */ 0.f,
			/* .end_scl = */ 0.f,
			/* .start_time = */ 0,
			/* .end_time = */ 8
		},
		/* [1] = */ {
			/* .start_scl = */ 0.f,
			/* .end_scl = */ 3.f,
			/* .start_time = */ 8,
			/* .end_time = */ 32
		},
		/* [2] = */ {
			/* .start_scl = */ 3.f,
			/* .end_scl = */ 3.f,
			/* .start_time = */ 32,
			/* .end_time = */ 50
		},
		/* [3] = */ {
			/* .start_scl = */ -1.f,
			/* .end_scl = */ -1.f,
			/* .start_time = */ -1,
			/* .end_time = */ -1
		}
	};
	static ALPHA_ANIM_TBL yellow_flare_alpha_anim_tbl[4] = {
		/* [0] = */ {
			/* .start_alpha = */ 0,
			/* .end_alpha = */ 128,
			/* .start_time = */ 0,
			/* .end_time = */ 25
		},
		/* [1] = */ {
			/* .start_alpha = */ 128,
			/* .end_alpha = */ 0,
			/* .start_time = */ 25,
			/* .end_time = */ 40
		},
		/* [2] = */ {
			/* .start_alpha = */ 0,
			/* .end_alpha = */ 0,
			/* .start_time = */ 40,
			/* .end_time = */ 50
		},
		/* [3] = */ {
			/* .start_alpha = */ -1,
			/* .end_alpha = */ -1,
			/* .start_time = */ -1,
			/* .end_time = */ -1
		}
	};
	static ALPHA_ANIM_TBL under_gem_anim_tbl[4] = {
		/* [0] = */ {
			/* .start_alpha = */ 0,
			/* .end_alpha = */ 0,
			/* .start_time = */ 0,
			/* .end_time = */ 13
		},
		/* [1] = */ {
			/* .start_alpha = */ 0,
			/* .end_alpha = */ 128,
			/* .start_time = */ 13,
			/* .end_time = */ 23
		},
		/* [2] = */ {
			/* .start_alpha = */ 128,
			/* .end_alpha = */ 128,
			/* .start_time = */ 23,
			/* .end_time = */ 50
		},
		/* [3] = */ {
			/* .start_alpha = */ -1,
			/* .end_alpha = */ -1,
			/* .start_time = */ -1,
			/* .end_time = */ -1
		}
	};
	u_char top_gem_alpha;
	u_char blue_flare_alpha;
	float blue_flare_scl;
	
  uchar uVar1;
  uchar uVar2;
  uchar uVar3;
  uchar uVar4;
  int iVar5;
  uint uVar6;
  float fVar7;
  float fVar8;
  DISP_SPRT gem_ds;
  
  iVar5 = (int)(short)timer;
  uVar1 = Anim2D_CalcNowAlpha__FPC14ALPHA_ANIM_TBLi((ALPHA_ANIM_TBL *)top_gem_anim_tbl_1348,iVar5);
  uVar2 = Anim2D_CalcNowAlpha__FPC14ALPHA_ANIM_TBLi((ALPHA_ANIM_TBL *)under_gem_anim_tbl_1352,iVar5)
  ;
  uVar3 = Anim2D_CalcNowAlpha__FPC14ALPHA_ANIM_TBLi
                    ((ALPHA_ANIM_TBL *)blue_flare_alpha_anim_tbl_1349,iVar5);
  uVar4 = Anim2D_CalcNowAlpha__FPC14ALPHA_ANIM_TBLi
                    ((ALPHA_ANIM_TBL *)yellow_flare_alpha_anim_tbl_1351,iVar5);
  fVar7 = Anim2D_CalcNowScale__FPC12SCL_ANIM_TBLi
                    ((SCL_ANIM_TBL *)blue_flare_scl_anim_tbl_1350,iVar5);
  CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&gem_ds,menu_camera_tex + 0x110);
  gem_ds.alpha = (uchar)((int)((uint)gem_ds.alpha * (uint)alpha) >> 7);
  gem_ds.x = x;
  gem_ds.y = y;
  DispSprD__FP9DISP_SPRT(&gem_ds);
  CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&gem_ds,menu_camera_tex + 0x111);
  iVar5 = (uint)gem_ds.alpha * (int)(char)uVar2;
  if (iVar5 < 0) {
    iVar5 = iVar5 + 0x7f;
  }
  iVar5 = (iVar5 >> 7) * (uint)alpha;
  if (iVar5 < 0) {
    iVar5 = iVar5 + 0x7f;
  }
  gem_ds.alpha = (uchar)(iVar5 >> 7);
  gem_ds.x = x;
  gem_ds.y = y;
  DispSprD__FP9DISP_SPRT(&gem_ds);
  CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&gem_ds,menu_camera_tex + 0x11f);
  gem_ds.y = y - 16.0;
  iVar5 = (uint)gem_ds.alpha * (int)(char)uVar4;
  gem_ds.x = x - 16.0;
  if (iVar5 < 0) {
    iVar5 = iVar5 + 0x7f;
  }
  uVar6 = (uint)alpha;
  iVar5 = (iVar5 >> 7) * uVar6;
  if (iVar5 < 0) {
    iVar5 = iVar5 + 0x7f;
  }
  gem_ds.alpha = (uchar)(iVar5 >> 7);
  DispSprD__FP9DISP_SPRT(&gem_ds);
  CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&gem_ds,menu_camera_tex + 0x11e);
  gem_ds.x = x - 4.0;
  gem_ds.y = y - 5.0;
  if ((int)gem_ds.w < 0) {
    fVar8 = (float)(gem_ds.w & 1 | gem_ds.w >> 1);
    fVar8 = fVar8 + fVar8;
  }
  else {
    fVar8 = (float)gem_ds.w;
  }
  gem_ds.csx = gem_ds.x + fVar8 * 0.5;
  if ((int)gem_ds.h < 0) {
    fVar8 = (float)(gem_ds.h & 1 | gem_ds.h >> 1);
    fVar8 = fVar8 + fVar8;
  }
  else {
    fVar8 = (float)gem_ds.h;
  }
  iVar5 = (uint)gem_ds.alpha * (int)(char)uVar3;
  gem_ds.alphar = 0x48;
  if (iVar5 < 0) {
    iVar5 = iVar5 + 0x7f;
  }
  gem_ds.csy = gem_ds.y + fVar8 * 0.5;
  iVar5 = (iVar5 >> 7) * uVar6;
  if (iVar5 < 0) {
    iVar5 = iVar5 + 0x7f;
  }
  gem_ds.alpha = (uchar)(iVar5 >> 7);
  gem_ds.scw = fVar7;
  gem_ds.sch = fVar7;
  DispSprD__FP9DISP_SPRT(&gem_ds);
  CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&gem_ds,menu_camera_tex + 0x111);
  iVar5 = (uint)gem_ds.alpha * (int)(char)uVar1;
  gem_ds.alphar = 0x48;
  if (iVar5 < 0) {
    iVar5 = iVar5 + 0x7f;
  }
  iVar5 = (iVar5 >> 7) * uVar6;
  if (iVar5 < 0) {
    iVar5 = iVar5 + 0x7f;
  }
  gem_ds.alpha = (uchar)(iVar5 >> 7);
  gem_ds.x = x;
  gem_ds.y = y;
  DispSprD__FP9DISP_SPRT(&gem_ds);
  return;
}

static void MenuCamEditLvDisp(float y, u_char alpha, int lv) {
	DISP_SPRT lv_ds;
	
  DISP_SPRT lv_ds;
  
  CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&lv_ds,menu_camera_tex + 0x112);
  lv_ds.alpha = (uchar)((int)((uint)lv_ds.alpha * (uint)alpha) >> 7);
  lv_ds.y = y;
  DispSprD__FP9DISP_SPRT(&lv_ds);
  CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&lv_ds,menu_camera_tex + lv + 0x113);
  lv_ds.alpha = (uchar)((int)((uint)lv_ds.alpha * (uint)alpha) >> 7);
  lv_ds.y = y;
  DispSprD__FP9DISP_SPRT(&lv_ds);
  return;
}

static void MenuCamEditNextPointDisp(int x, int y, u_char alpha, int col_label, int next) {
	DISP_SPRT pts_ds;
	
  DISP_SPRT pts_ds;
  
  PrintNumber_N__FiiiiUcUciUcUc(next,6,x,y,(uchar)col_label,alpha,0,'\x01',0);
  if (col_label == 0x12) {
    CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&pts_ds,menu_camera_tex + 0x121);
    pts_ds.y = (float)(y + 7);
    pts_ds.alpha = (uchar)((int)((uint)pts_ds.alpha * (uint)alpha) >> 7);
    DispSprD__FP9DISP_SPRT(&pts_ds);
  }
  else {
    CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&pts_ds,menu_camera_tex + 0x120);
    pts_ds.y = (float)(y + 7);
    pts_ds.alpha = (uchar)((int)((uint)pts_ds.alpha * (uint)alpha) >> 7);
    DispSprD__FP9DISP_SPRT(&pts_ds);
  }
  return;
}

static void MenuCamEditSelFrameBgDisp(int y, u_char alpha) {
	DISP_SQAR dsq;
	SQAR_DAT sel_bg;
	
  undefined *puVar1;
  uint uVar2;
  ulong *puVar3;
  uchar *puVar4;
  DISP_SQAR dsq;
  SQAR_DAT sel_bg;
  
  puVar1 = (undefined *)((int)&sel_bg.h + 3);
  uVar2 = (uint)puVar1 & 7;
  puVar3 = (ulong *)(puVar1 + -uVar2);
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | DAT_003bcd68 >> (7 - uVar2) * 8;
  sel_bg._0_8_ = DAT_003bcd68;
  puVar1 = (undefined *)((int)&sel_bg.y + 3);
  uVar2 = (uint)puVar1 & 7;
  puVar3 = (ulong *)(puVar1 + -uVar2);
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | DAT_003bcd70 >> (7 - uVar2) * 8;
  sel_bg._8_8_ = DAT_003bcd70;
  uVar2 = (uint)&sel_bg.alpha & 7;
  puVar4 = &sel_bg.alpha + -uVar2;
  *(ulong *)puVar4 = *(ulong *)puVar4 & -1L << (uVar2 + 1) * 8 | DAT_003bcd78 >> (7 - uVar2) * 8;
  sel_bg._16_8_ = DAT_003bcd78;
  CopySqrDToSqr__FP9DISP_SQARP8SQAR_DAT(&dsq,&sel_bg);
  dsq.x[1] = (dsq.x[1] - dsq.x[0]) + 0xc0;
  dsq.y[2] = (y + dsq.y[2]) - dsq.y[0];
  dsq.x[3] = (dsq.x[3] - dsq.x[2]) + 0xc0;
  dsq.y[3] = (y + dsq.y[3]) - dsq.y[1];
  dsq.x[2] = 0xc0;
  dsq.alpha = (uchar)((int)((uint)dsq.alpha * (uint)alpha) >> 7);
  dsq.alphar = 0x48;
  dsq.x[0] = 0xc0;
  dsq.y[0] = y;
  dsq.y[1] = y;
  DispSqrD__FP9DISP_SQAR(&dsq);
  return;
}

static void MenuCamEditFrameBlackBgDisp(int y, u_char alpha) {
	DISP_SQAR dsq;
	SQAR_DAT non_sel_bg;
	
  undefined *puVar1;
  uint uVar2;
  ulong *puVar3;
  uchar *puVar4;
  DISP_SQAR dsq;
  SQAR_DAT non_sel_bg;
  
  puVar1 = (undefined *)((int)&non_sel_bg.h + 3);
  uVar2 = (uint)puVar1 & 7;
  puVar3 = (ulong *)(puVar1 + -uVar2);
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | DAT_003bcd80 >> (7 - uVar2) * 8;
  non_sel_bg._0_8_ = DAT_003bcd80;
  puVar1 = (undefined *)((int)&non_sel_bg.y + 3);
  uVar2 = (uint)puVar1 & 7;
  puVar3 = (ulong *)(puVar1 + -uVar2);
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | DAT_003bcd88 >> (7 - uVar2) * 8;
  non_sel_bg._8_8_ = DAT_003bcd88;
  uVar2 = (uint)&non_sel_bg.alpha & 7;
  puVar4 = &non_sel_bg.alpha + -uVar2;
  *(ulong *)puVar4 = *(ulong *)puVar4 & -1L << (uVar2 + 1) * 8 | DAT_003bcd90 >> (7 - uVar2) * 8;
  non_sel_bg._16_8_ = DAT_003bcd90;
  CopySqrDToSqr__FP9DISP_SQARP8SQAR_DAT(&dsq,&non_sel_bg);
  dsq.x[1] = (dsq.x[1] - dsq.x[0]) + 0xc0;
  dsq.y[2] = (y + dsq.y[2]) - dsq.y[0];
  dsq.x[3] = (dsq.x[3] - dsq.x[2]) + 0xc0;
  dsq.y[3] = (y + dsq.y[3]) - dsq.y[1];
  dsq.x[2] = 0xc0;
  dsq.alpha = (uchar)((int)((uint)dsq.alpha * (uint)alpha) >> 7);
  dsq.alphar = 0x46;
  dsq.x[0] = 0xc0;
  dsq.y[0] = y;
  dsq.y[1] = y;
  DispSqrD__FP9DISP_SQAR(&dsq);
  return;
}

static void MenuCamEditFrameBgDisp(float y, u_char alpha) {
	int i;
	DISP_SPRT bg_ds;
	
  int iVar1;
  SPRT_DAT *d;
  DISP_SPRT bg_ds;
  
  iVar1 = 4;
  d = menu_camera_tex + 0xa7;
  do {
    CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&bg_ds,d);
    iVar1 = iVar1 + -1;
    d = d + 1;
    bg_ds.alphar = 0x48;
    bg_ds.alpha = (uchar)((int)((uint)bg_ds.alpha * (uint)alpha) >> 7);
    bg_ds.y = y;
    DispSprD__FP9DISP_SPRT(&bg_ds);
  } while (-1 < iVar1);
  return;
}

static void MenuCamEditSelCsrDisp(float x, float y, u_char alpha) {
	int i;
	float pos_x;
	DISP_SPRT csr_ds;
	
  int iVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  DISP_SPRT csr_ds;
  
  fVar5 = 88.0;
  fVar3 = 174.0;
  iVar2 = 0x10b;
  iVar1 = 0x2160;
  do {
    CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT
              (&csr_ds,(SPRT_DAT *)((int)&menu_camera_tex[0].tex0 + iVar1));
    if (iVar2 == 0x10c) {
      if ((int)csr_ds.w < 0) {
        fVar4 = (float)(csr_ds.w & 1 | csr_ds.w >> 1);
        fVar4 = fVar4 + fVar4;
      }
      else {
        fVar4 = (float)csr_ds.w;
      }
      csr_ds.scw = fVar5 / fVar4;
      fVar4 = fVar5;
LAB_001ecddc:
      fVar4 = x + fVar4;
      csr_ds.sch = 1.0;
      csr_ds.csx = x;
      csr_ds.csy = y;
    }
    else {
      if (iVar2 == 0x10e) {
        if ((int)csr_ds.w < 0) {
          fVar4 = (float)(csr_ds.w & 1 | csr_ds.w >> 1);
          fVar4 = fVar4 + fVar4;
        }
        else {
          fVar4 = (float)csr_ds.w;
        }
        csr_ds.scw = fVar3 / fVar4;
        fVar4 = fVar3;
        goto LAB_001ecddc;
      }
      if ((int)csr_ds.w < 0) {
        fVar4 = (float)(csr_ds.w & 1 | csr_ds.w >> 1);
        fVar4 = x + fVar4 + fVar4;
      }
      else {
        fVar4 = x + (float)csr_ds.w;
      }
    }
    iVar2 = iVar2 + 1;
    csr_ds.alphar = 0x48;
    csr_ds.alpha = (uchar)((int)((uint)csr_ds.alpha * (uint)alpha) >> 7);
    csr_ds.x = x;
    csr_ds.y = y;
    DispSprD__FP9DISP_SPRT(&csr_ds);
    if (0x10f < iVar2) {
      return;
    }
    iVar1 = iVar2 * 0x20;
    x = fVar4;
  } while( true );
}

static void MenuCamEditScrollDisp(int off_x, int off_y, u_char alpha) {
	int i;
	DISP_SPRT scroll_ds;
	float scroll_size;
	float scroll_y;
	float center_size;
	float scroll_scl;
	u_char rgb;
	
  uint uVar1;
  SPRT_DAT *d;
  int iVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  DISP_SPRT scroll_ds;
  uchar rgb;
  
  Zero2Anim2D_CsrAnimCtrl__FPcPUc(&menu_cam_edit_disp.scroll_anim_timer,&rgb);
  if (menu_cam_edit_ctrl.ref_ctrl.data_num < 3) {
    fVar6 = 80.0;
    fVar7 = DAT_003ee54c;
  }
  else {
    fVar6 = (80.0 / (float)menu_cam_edit_ctrl.ref_ctrl.data_num) * 3.0;
    fVar7 = (80.0 / (float)menu_cam_edit_ctrl.ref_ctrl.data_num) *
            (float)menu_cam_edit_ctrl.ref_ctrl.disp_start_pos + DAT_003ee550;
  }
  fVar5 = (float)off_x;
  fVar9 = fVar6 - (float)((uint)(ushort)menu_camera_tex[264].w +
                         (uint)(ushort)menu_camera_tex[266].w);
  CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&scroll_ds,menu_camera_tex + 0x105);
  scroll_ds.crx = scroll_ds.x + fVar5;
  if ((int)scroll_ds.w < 0) {
    fVar4 = (float)(scroll_ds.w & 1 | scroll_ds.w >> 1);
    fVar4 = fVar4 + fVar4;
  }
  else {
    fVar4 = (float)scroll_ds.w;
  }
  fVar8 = (float)off_y;
  scroll_ds.rot = 270.0;
  iVar2 = 1;
  scroll_ds.cry = scroll_ds.y + fVar4 + fVar8;
  scroll_ds.alphar = 0x48;
  scroll_ds.alpha = (uchar)((int)((uint)scroll_ds.alpha * (uint)alpha) >> 7);
  scroll_ds.x = scroll_ds.crx;
  scroll_ds.y = scroll_ds.cry;
  DispSprD__FP9DISP_SPRT(&scroll_ds);
  d = menu_camera_tex + 0x106;
  do {
    CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&scroll_ds,d);
    iVar2 = iVar2 + -1;
    d = d + 1;
    scroll_ds.x = scroll_ds.x + fVar5;
    scroll_ds.y = scroll_ds.y + fVar8;
    scroll_ds.b = rgb;
    scroll_ds.r = rgb;
    scroll_ds.alpha = (uchar)((int)((uint)scroll_ds.alpha * (uint)alpha) >> 7);
    scroll_ds.g = rgb;
    DispSprD__FP9DISP_SPRT(&scroll_ds);
  } while (-1 < iVar2);
  uVar3 = (uint)alpha;
  if (0.0 < fVar9) {
    uVar1 = (uint)(ushort)menu_camera_tex[265].w;
    CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&scroll_ds,menu_camera_tex + 0x108);
    scroll_ds.crx = scroll_ds.x + fVar5;
    if ((int)scroll_ds.w < 0) {
      fVar6 = (float)(scroll_ds.w & 1 | scroll_ds.w >> 1);
      fVar6 = fVar6 + fVar6;
    }
    else {
      fVar6 = (float)scroll_ds.w;
    }
    scroll_ds.cry = fVar7 + fVar6 + fVar8;
    scroll_ds.rot = 270.0;
    scroll_ds.alphar = 0x48;
    scroll_ds.alpha = (uchar)((int)(scroll_ds.alpha * uVar3) >> 7);
    scroll_ds.x = scroll_ds.crx;
    scroll_ds.y = scroll_ds.cry;
    DispSprD__FP9DISP_SPRT(&scroll_ds);
    fVar7 = fVar7 + (float)(uint)(ushort)menu_camera_tex[264].w;
    CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&scroll_ds,menu_camera_tex + 0x109);
    scroll_ds.crx = scroll_ds.x + fVar5;
    if ((int)scroll_ds.w < 0) {
      fVar6 = (float)(scroll_ds.w & 1 | scroll_ds.w >> 1);
      fVar6 = fVar6 + fVar6;
    }
    else {
      fVar6 = (float)scroll_ds.w;
    }
    scroll_ds.rot = 270.0;
    fVar4 = fVar7 + fVar9;
    scroll_ds.sch = 1.0;
    scroll_ds.alpha = (uchar)((int)(scroll_ds.alpha * uVar3) >> 7);
    scroll_ds.cry = fVar7 + fVar6 * (fVar9 / (float)uVar1) + fVar8;
    scroll_ds.alphar = 0x48;
    scroll_ds.csx = scroll_ds.crx;
    scroll_ds.csy = scroll_ds.cry;
    scroll_ds.x = scroll_ds.crx;
    scroll_ds.y = scroll_ds.cry;
    scroll_ds.scw = fVar9 / (float)uVar1;
    DispSprD__FP9DISP_SPRT(&scroll_ds);
    CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&scroll_ds,menu_camera_tex + 0x10a);
    scroll_ds.crx = scroll_ds.x + fVar5;
    if ((int)scroll_ds.w < 0) {
      fVar7 = (float)(scroll_ds.w & 1 | scroll_ds.w >> 1);
      fVar7 = fVar7 + fVar7;
    }
    else {
      fVar7 = (float)scroll_ds.w;
    }
    scroll_ds.rot = 270.0;
    scroll_ds.cry = fVar4 + fVar7 + fVar8;
    scroll_ds.alphar = 0x48;
    scroll_ds.alpha = (uchar)((int)((uint)scroll_ds.alpha * (uint)alpha) >> 7);
    scroll_ds.x = scroll_ds.crx;
    scroll_ds.y = scroll_ds.cry;
    DispSprD__FP9DISP_SPRT(&scroll_ds);
  }
  else {
    fVar9 = (fVar6 * 0.5) / (float)(uint)(ushort)menu_camera_tex[264].w;
    CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&scroll_ds,menu_camera_tex + 0x108);
    scroll_ds.crx = scroll_ds.x + fVar5;
    if ((int)scroll_ds.w < 0) {
      fVar4 = (float)(scroll_ds.w & 1 | scroll_ds.w >> 1);
      fVar4 = fVar4 + fVar4;
    }
    else {
      fVar4 = (float)scroll_ds.w;
    }
    scroll_ds.sch = 1.0;
    scroll_ds.rot = 270.0;
    scroll_ds.alpha = (uchar)((int)((uint)scroll_ds.alpha * (uint)alpha) >> 7);
    scroll_ds.cry = fVar7 + fVar4 * fVar9 + fVar8;
    scroll_ds.csx = scroll_ds.crx;
    scroll_ds.csy = scroll_ds.cry;
    scroll_ds.x = scroll_ds.crx;
    scroll_ds.y = scroll_ds.cry;
    scroll_ds.scw = fVar9;
    DispSprD__FP9DISP_SPRT(&scroll_ds);
    if ((int)scroll_ds.w < 0) {
      fVar4 = (float)(scroll_ds.w & 1 | scroll_ds.w >> 1);
      fVar4 = fVar4 + fVar4;
    }
    else {
      fVar4 = (float)scroll_ds.w;
    }
    fVar6 = (fVar6 * 0.5) / (float)(uint)(ushort)menu_camera_tex[266].w;
    fVar7 = fVar7 + fVar4 * fVar9;
    CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&scroll_ds,menu_camera_tex + 0x10a);
    scroll_ds.crx = scroll_ds.x + fVar5;
    if ((int)scroll_ds.w < 0) {
      fVar5 = (float)(scroll_ds.w & 1 | scroll_ds.w >> 1);
      fVar5 = fVar5 + fVar5;
    }
    else {
      fVar5 = (float)scroll_ds.w;
    }
    scroll_ds.sch = 1.0;
    scroll_ds.rot = 270.0;
    scroll_ds.alpha = (uchar)((int)(scroll_ds.alpha * uVar3) >> 7);
    scroll_ds.cry = fVar7 + fVar5 * fVar6 + fVar8;
    scroll_ds.csx = scroll_ds.crx;
    scroll_ds.csy = scroll_ds.cry;
    scroll_ds.x = scroll_ds.crx;
    scroll_ds.y = scroll_ds.cry;
    scroll_ds.scw = fVar6;
    DispSprD__FP9DISP_SPRT(&scroll_ds);
  }
  return;
}

static void MenuCamEditMsgWindowDisp(int off_x, int off_y, u_char alpha) {
  DrawCmnWindow__FUiffffUcUc(0,(float)(off_x + 0x18),(float)(off_y + 0x160),592.0,100.0,alpha,'f');
  return;
}

static void MenuCamEditConfYesNoDisp(int off_x, int off_y, u_char alpha) {
  DrawCmnSelCsr__FUiffUcfUc
            (0,(float)(menu_cam_edit_ctrl.conf_csr * 0xce + off_x + 0x9b),(float)(off_y + 0x193),
             alpha,0.0,'\0');
  DrawCmnSelYes__FUiffUc(0,(float)(off_x + 0x99),(float)(off_y + 0x195),alpha);
  DrawCmnSelNo__FUiffUc(0,(float)(off_x + 0x169),(float)(off_y + 0x195),alpha);
  return;
}

static void MenuCamEditCaptionDisp(int off_x, int off_y, u_char alpha) {
  DrawCmnCapGroup_W__FiiUcUi(0,0,alpha,0);
  return;
}

DISP_LENS_DATA* DISP_LENS_DATA * _fixed_array_verifyrange<DISP_LENS_DATA>(size_t v, size_t _max) {
  g3ddbgAssert__FbPCce(false,str_688);
  return (type_info *)v;
}

char* char * _fixed_array_verifyrange<char>(size_t v, size_t _max) {
  g3ddbgAssert__FbPCce(false,str_688);
  return (type_info *)v;
}

CVariable<char,0,3>* CVariable<char, 0, 3> * _fixed_array_verifyrange<CVariable<char, 0, 3> >(size_t v, size_t _max) {
  g3ddbgAssert__FbPCce(false,str_688);
  return (type_info *)v;
}

int* int * _fixed_array_verifyrange<int>(size_t v, size_t _max) {
  g3ddbgAssert__FbPCce(false,str_688);
  return (type_info *)v;
}

static void __static_initialization_and_destruction_0(int __initialize_p, int __priority) {
	int *ra;
	
  if ((__priority == 0xffff) && (__initialize_p == 1)) {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
    base_msg_tbl.field0_0x0.m_aData = (fixed_array_base<int,3,int_*>)&DAT_003bcd98;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    lens_msg_tbl.field0_0x0.m_aData = (fixed_array_base<int,10,int_*>)&PTR_003bcda8;
  }
  return;
}

type_info& DISP_LENS_DATA type_info function() {
  g3ddbgAssert__FbPCce(false,str_688);
  return (type_info *)v;
}

type_info& CVariable<char, 0, 3> type_info function() {
  g3ddbgAssert__FbPCce(false,str_688);
  return (type_info *)v;
}

static void global constructors keyed to MenuCamEditInit() {
  __static_initialization_and_destruction_0(1,0xffff);
  return;
}
