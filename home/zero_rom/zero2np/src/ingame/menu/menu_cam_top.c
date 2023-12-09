// STATUS: NOT STARTED

#include "menu_cam_top.h"

typedef struct {
	char mode;
	char step;
	char csr_yoko;
	char csr_tate;
	char add_csr;
	char equip_csr;
	char csr_yoko_backup;
} MENU_CAM_TOP_CTRL;

typedef struct {
	char anim_step;
	char anim_timer;
	char csr_anim_timer;
} MENU_CAM_TOP_DISP;

static void (*menu_cam_top_pad[4])(/* parameters unknown */) = {
	/* [0] = */ MenuCamTopAdditionalFunctionSelPad,
	/* [1] = */ MenuCamTopFilmSelPad,
	/* [2] = */ MenuCamTopEquipFuncSelPad,
	/* [3] = */ MenuCamTopPad
};

static void (*menu_cam_top_disp_func[4])(/* parameters unknown */) = {
	/* [0] = */ MenuCamModeAddFuncSelDisp,
	/* [1] = */ MenuCamModeFilmSelDisp,
	/* [2] = */ MenuCamModeEquipFuncSelDisp,
	/* [3] = */ MenuCamModeTopDisp
};

unsigned char CVariable<char, 0, 3> type_info node[8];
unsigned char CVariable<char, 0, 9> type_info node[8];
static MENU_CAM_TOP_CTRL menu_cam_top_ctrl;
static MENU_CAM_TOP_DISP menu_cam_top_disp;

static int film_name_tbl[6][2] = {
	/* [0] = */ {
		/* [0] = */ 0,
		/* [1] = */ 7
	},
	/* [1] = */ {
		/* [0] = */ 1,
		/* [1] = */ 14
	},
	/* [2] = */ {
		/* [0] = */ 2,
		/* [1] = */ 61
	},
	/* [3] = */ {
		/* [0] = */ 3,
		/* [1] = */ 90
	},
	/* [4] = */ {
		/* [0] = */ 4,
		/* [1] = */ 0
	},
	/* [5] = */ {
		/* [0] = */ -1,
		/* [1] = */ -1
	}
};

static void _fixed_array_assert(char *strType, size_t v0, size_t v1) {
	static char *str = 0x3bd040;
	
  g3ddbgAssert__FbPCce(false,str_858);
  return (type_info *)v;
}

static void** void * * _fixed_array_verifyrange<void *>(size_t v, size_t _max) {
  if (_max <= v) {
    __tft9CVariable3Zci0i3(0x3f2c18,_max);
  }
  return (void **)0x0;
}

static char** char * * _fixed_array_verifyrange<char *>(size_t v, size_t _max) {
  if (_max <= v) {
    __tft9CVariable3Zci0i3(0x3f2c20,_max);
  }
  return (char **)0x0;
}

static unsigned int** unsigned int * * _fixed_array_verifyrange<unsigned int *>(size_t v, size_t _max) {
  if (_max <= v) {
    __tft9CVariable3Zci0i3(0x3bd088,_max);
  }
  return (uint **)0x0;
}

void MenuCamTopFirstInit() {
  menu_cam_top_ctrl.csr_yoko_backup = '\x01';
  MenuCamTopCtrlInit__Fv();
  return;
}

void MenuCamTopInit() {
  MenuCamTopCtrlInit__Fv();
  return;
}

static void MenuCamTopCtrlInit() {
  menu_cam_top_ctrl.mode = '\x03';
  menu_cam_top_ctrl.csr_yoko = menu_cam_top_ctrl.csr_yoko_backup;
  menu_cam_top_ctrl.csr_tate = '\x01';
  menu_cam_top_ctrl.equip_csr = '\0';
  menu_cam_top_ctrl.step = '\0';
  menu_cam_top_ctrl.add_csr = '\0';
  return;
}

int MenuCamTopMain() {
	int res;
	
  uint uVar1;
  
  if (menu_cam_top_ctrl.step == '\0') {
    MenuCamTopDispInit__Fv();
    menu_cam_top_ctrl.step = '\x02';
  }
  if ((menu_cam_top_ctrl.step == '\x02') &&
     ((code *)menu_cam_top_pad[menu_cam_top_ctrl.mode] != (code *)0x0)) {
    (*(code *)menu_cam_top_pad[menu_cam_top_ctrl.mode])();
  }
  uVar1 = 0;
  if (menu_cam_top_ctrl.step == '\x03') {
    uVar1 = (uint)(menu_cam_top_disp.anim_step == '\x04');
  }
  return uVar1;
}

static void MenuCamTopPad() {
  int iVar1;
  
  if (((pad[0].rpt & 0x1000U) == 0) && (iVar1 = GetPadAnalogRpt__Fi(0), iVar1 == 0)) {
    if (((pad[0].rpt & 0x4000U) == 0) && (iVar1 = GetPadAnalogRpt__Fi(1), iVar1 == 0)) {
      if (((pad[0].one & 0x8000U) != 0) || (iVar1 = GetPadAnalogRpt__Fi(2), iVar1 != 0)) {
        if (menu_cam_top_ctrl.csr_yoko != '\x01') {
          return;
        }
        SystemBankPlay__FiiiiP11_SND_3D_SETii(0,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
        menu_cam_top_ctrl.csr_yoko = '\0';
        return;
      }
      if (((pad[0].one & 0x2000U) != 0) || (iVar1 = GetPadAnalogRpt__Fi(3), iVar1 != 0)) {
        if (menu_cam_top_ctrl.csr_yoko != '\0') {
          return;
        }
        SystemBankPlay__FiiiiP11_SND_3D_SETii(0,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
        menu_cam_top_ctrl.csr_yoko = '\x01';
        return;
      }
      if (**paddat == 1) {
        menu_cam_top_ctrl.csr_yoko_backup = menu_cam_top_ctrl.csr_yoko;
        MenuCamTopPadDecision__Fv();
        return;
      }
      if (*paddat[1] != 1) {
        return;
      }
      SystemBankPlay__FiiiiP11_SND_3D_SETii(1,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
      MenuCamTopOutReq__Fv();
      return;
    }
    if (menu_cam_top_ctrl.csr_yoko != '\x01') {
      return;
    }
    SystemBankPlay__FiiiiP11_SND_3D_SETii(0,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
    iVar1 = menu_cam_top_ctrl.csr_tate + 1;
  }
  else {
    if (menu_cam_top_ctrl.csr_yoko != '\x01') {
      return;
    }
    SystemBankPlay__FiiiiP11_SND_3D_SETii(0,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
    iVar1 = menu_cam_top_ctrl.csr_tate + 2;
  }
  menu_cam_top_ctrl.csr_tate = (char)(iVar1 % 3);
  return;
}

static void MenuCamTopPadDecision() {
	static char __FUNCTION__[22] = {
		/* [0] = */ 77,
		/* [1] = */ 101,
		/* [2] = */ 110,
		/* [3] = */ 117,
		/* [4] = */ 67,
		/* [5] = */ 97,
		/* [6] = */ 109,
		/* [7] = */ 84,
		/* [8] = */ 111,
		/* [9] = */ 112,
		/* [10] = */ 80,
		/* [11] = */ 97,
		/* [12] = */ 100,
		/* [13] = */ 68,
		/* [14] = */ 101,
		/* [15] = */ 99,
		/* [16] = */ 105,
		/* [17] = */ 115,
		/* [18] = */ 105,
		/* [19] = */ 111,
		/* [20] = */ 110,
		/* [21] = */ 0
	};
	int i;
	int idx;
	int bit;
	int idx;
	int bit;
	
  bool bVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  
  cVar2 = menu_cam_top_ctrl.csr_tate;
  if (menu_cam_top_ctrl.csr_yoko == '\0') {
    SystemBankPlay__FiiiiP11_SND_3D_SETii(3,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
    MenuCamTopMoveEdit__Fv();
    return;
  }
  if (menu_cam_top_ctrl.csr_tate == '\x01') {
    SystemBankPlay__FiiiiP11_SND_3D_SETii(3,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
    menu_cam_top_disp.csr_anim_timer = '\0';
    menu_cam_top_ctrl.mode = cVar2;
  }
  else {
    if (menu_cam_top_ctrl.csr_tate < '\x02') {
      if (menu_cam_top_ctrl.csr_tate == '\0') {
        iVar3 = GetHaveAddFuncNum__Fv();
        if (iVar3 < 1) {
          SystemBankPlay__FiiiiP11_SND_3D_SETii(2,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
          return;
        }
        uVar4 = 0;
        SystemBankPlay__FiiiiP11_SND_3D_SETii(3,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
        bVar1 = true;
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
        iVar3 = 0;
        while( true ) {
          if (!bVar1) {
            SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
            PrintAssertReal("IsUp Illegal Access %d MAX %d");
          }
          if (((&m_plyr_camera.camera_power_up.mAdditionFlg)[iVar3].flag_32[0] & 1 << (uVar4 & 0x1f)
              ) != 0) break;
                    /* end of inlined section */
          uVar4 = uVar4 + 1;
          bVar1 = (int)uVar4 < 4;
          iVar3 = (int)uVar4 >> 5;
          if (!bVar1) {
            menu_cam_top_ctrl.mode = '\0';
            menu_cam_top_disp.csr_anim_timer = '\0';
            return;
          }
        }
        menu_cam_top_ctrl.mode = '\0';
        menu_cam_top_ctrl.add_csr = (char)uVar4;
        menu_cam_top_disp.csr_anim_timer = '\0';
        return;
      }
    }
    else if (menu_cam_top_ctrl.csr_tate == '\x02') {
      iVar3 = GetHaveEquipFuncNum__Fv();
      if (iVar3 < 1) {
        SystemBankPlay__FiiiiP11_SND_3D_SETii(2,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
        return;
      }
      uVar4 = 0;
      SystemBankPlay__FiiiiP11_SND_3D_SETii(3,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
      bVar1 = true;
      while( true ) {
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
        if (!bVar1) {
          SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
          PrintAssertReal("IsUp Illegal Access %d MAX %d");
        }
        if (((&m_plyr_camera.camera_power_up.mCamPartsFlg)[(int)uVar4 >> 5].flag_32[0] &
            1 << (uVar4 & 0x1f)) != 0) break;
                    /* end of inlined section */
        uVar4 = uVar4 + 1;
        bVar1 = (int)uVar4 < 4;
        if (!bVar1) {
          menu_cam_top_ctrl.mode = '\x02';
          menu_cam_top_disp.csr_anim_timer = '\0';
          return;
        }
      }
      menu_cam_top_ctrl.mode = '\x02';
      menu_cam_top_ctrl.equip_csr = (char)uVar4;
      menu_cam_top_disp.csr_anim_timer = '\0';
      return;
    }
    SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
    PrintAssertReal("Error! %s");
  }
  return;
}

static void MenuCamTopMoveEdit() {
  menu_cam_top_disp.anim_step = '\x03';
  menu_cam_top_disp.anim_timer = '\0';
  menu_cam_top_ctrl.step = '\x03';
  MenuCamGoToEditReq__Fv();
  return;
}

static void MenuCamTopOutReq() {
  menu_cam_top_disp.anim_step = '\x03';
  menu_cam_top_disp.anim_timer = '\0';
  menu_cam_top_ctrl.step = '\x03';
  MenuCamExitReq__Fv();
  return;
}

static void MenuCamTopFilmSelPad() {
	int i;
	int equip_film;
	int before_equip_film;
	
  bool bVar1;
  int item_id;
  int iVar2;
  int iVar3;
  int iVar4;
  
  item_id = GetPlyrEquipmentFilmType__Fv();
  GetPlyrItemHaveNum__Fi(item_id);
  if (((pad[0].rpt & 0x8000U) != 0) || (iVar3 = GetPadAnalogRpt__Fi(2), iVar3 != 0)) {
    iVar4 = 0;
    bVar1 = true;
    iVar3 = item_id;
    do {
      iVar4 = iVar4 + 1;
      if (!bVar1) {
LAB_001eeec8:
        iVar3 = GetPlyrEquipmentFilmType__Fv();
        if (item_id == iVar3) {
          SystemBankPlay__FiiiiP11_SND_3D_SETii(2,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
          return;
        }
        SystemBankPlay__FiiiiP11_SND_3D_SETii(0,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
        return;
      }
      bVar1 = iVar3 == 0;
      iVar3 = iVar3 + -1;
      if (bVar1) {
        iVar3 = 4;
      }
      iVar2 = GetPlyrItemHaveNum__Fi(iVar3);
      if (0 < iVar2) {
        ItemUse__FiUc(iVar3,'\x01');
        goto LAB_001eeec8;
      }
      bVar1 = iVar4 < 6;
    } while( true );
  }
  if (((pad[0].rpt & 0x2000U) == 0) && (iVar3 = GetPadAnalogRpt__Fi(3), iVar3 == 0)) {
    if ((**paddat == 1) || (*paddat[1] == 1)) {
      SystemBankPlay__FiiiiP11_SND_3D_SETii(1,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
      menu_cam_top_ctrl.mode = '\x03';
    }
    return;
  }
  iVar4 = 0;
  bVar1 = true;
  iVar3 = item_id;
  do {
    iVar4 = iVar4 + 1;
    if (!bVar1) {
LAB_001eefa0:
      iVar3 = GetPlyrEquipmentFilmType__Fv();
      if (item_id == iVar3) {
        SystemBankPlay__FiiiiP11_SND_3D_SETii(2,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
        return;
      }
      SystemBankPlay__FiiiiP11_SND_3D_SETii(0,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
      return;
    }
    iVar2 = iVar3 + 1;
    bVar1 = iVar3 != 4;
    iVar3 = 0;
    if (bVar1) {
      iVar3 = iVar2;
    }
    iVar2 = GetPlyrItemHaveNum__Fi(iVar3);
    if (0 < iVar2) {
      ItemUse__FiUc(iVar3,'\x01');
      goto LAB_001eefa0;
    }
    bVar1 = iVar4 < 6;
  } while( true );
}

static void MenuCamTopAdditionalFunctionSelPad() {
	int i;
	int no;
	int idx;
	int bit;
	int no;
	int idx;
	int bit;
	
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  if (((pad[0].rpt & 0x8000U) == 0) && (iVar4 = GetPadAnalogRpt__Fi(2), iVar4 == 0)) {
    if (((pad[0].rpt & 0x2000U) == 0) && (iVar4 = GetPadAnalogRpt__Fi(3), iVar4 == 0)) {
      if (*paddat[1] == 1) {
        SystemBankPlay__FiiiiP11_SND_3D_SETii(1,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
        menu_cam_top_ctrl.mode = '\x03';
      }
    }
    else {
      iVar4 = 1;
      do {
        iVar2 = menu_cam_top_ctrl.add_csr + 1;
        iVar1 = iVar2;
        if (iVar2 < 0) {
          iVar1 = menu_cam_top_ctrl.add_csr + 4;
        }
        iVar2 = iVar2 + (iVar1 >> 2) * -4;
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
        iVar1 = iVar2 * 0x1000000;
                    /* end of inlined section */
        menu_cam_top_ctrl.add_csr = (char)iVar2;
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
        uVar3 = iVar1 >> 0x18;
        if (3 < (int)uVar3) {
          SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
          PrintAssertReal("IsUp Illegal Access %d MAX %d");
        }
        if (((&m_plyr_camera.camera_power_up.mAdditionFlg)[iVar1 >> 0x1d].flag_32[0] &
            1 << (uVar3 & 0x1f)) != 0) {
LAB_001ef26c:
          if (3 < iVar4) {
            return;
          }
          SystemBankPlay__FiiiiP11_SND_3D_SETii(0,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
          return;
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < 5);
    }
  }
  else {
    iVar4 = 1;
    do {
      iVar2 = menu_cam_top_ctrl.add_csr + 3;
      iVar1 = iVar2;
      if (iVar2 < 0) {
        iVar1 = menu_cam_top_ctrl.add_csr + 6;
      }
      iVar2 = iVar2 + (iVar1 >> 2) * -4;
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
      iVar1 = iVar2 * 0x1000000;
                    /* end of inlined section */
      menu_cam_top_ctrl.add_csr = (char)iVar2;
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
      uVar3 = iVar1 >> 0x18;
      if (3 < (int)uVar3) {
        SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
        PrintAssertReal("IsUp Illegal Access %d MAX %d");
      }
      if (((&m_plyr_camera.camera_power_up.mAdditionFlg)[iVar1 >> 0x1d].flag_32[0] &
          1 << (uVar3 & 0x1f)) != 0) goto LAB_001ef26c;
                    /* end of inlined section */
      iVar4 = iVar4 + 1;
    } while (iVar4 < 5);
  }
  return;
}

static void MenuCamTopEquipFuncSelPad() {
	int i;
	fixed_array<char,3> equip_special;
	int no;
	int idx;
	int bit;
	int no;
	int idx;
	int bit;
	int no;
	int idx;
	int bit;
	int no;
	int idx;
	int bit;
	int no;
	int idx;
	int bit;
	
  bool bVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  BIT_FLAGS<4> *pBVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  fixed_array<char,3> equip_special;
  
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  _fixed_array_verifyrange__H1Zc_UiUi_PX01(0,3);
  GetSubFuncArray__14CNEquipTrayWrkPc(&m_plyr_camera.eq_tray,(char *)&equip_special);
                    /* end of inlined section */
  if (((pad[0].rpt & 0x8000U) == 0) && (iVar9 = GetPadAnalogRpt__Fi(2), iVar9 == 0)) {
    if (((pad[0].rpt & 0x2000U) == 0) && (iVar9 = GetPadAnalogRpt__Fi(3), iVar9 == 0)) {
      if (**paddat == 1) {
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
                    /* end of inlined section */
        SystemBankPlay__FiiiiP11_SND_3D_SETii(3,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
        uVar6 = (uint)(byte)menu_cam_top_ctrl.equip_csr;
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
        uVar7 = (int)(uVar6 << 0x18) >> 0x18;
        if (3 < (int)uVar7) {
          SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
          PrintAssertReal("IsUp Illegal Access %d MAX %d");
        }
        uVar8 = (int)((uint)(byte)menu_cam_top_ctrl.equip_csr << 0x18) >> 0x18;
        iVar9 = (int)((uint)(byte)menu_cam_top_ctrl.equip_csr << 0x18) >> 0x1d;
        if (((&m_plyr_camera.camera_power_up.mCamPartsSetFlg)[(int)(uVar6 << 0x18) >> 0x1d].flag_32
             [0] & 1 << (uVar7 & 0x1f)) == 0) {
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
          if (3 < (int)uVar8) {
            SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
            PrintAssertReal("FlgUp Illegal Access %d MAX %d");
          }
          pBVar5 = &m_plyr_camera.camera_power_up.mCamPartsSetFlg + iVar9;
          pBVar5->flag_32[0] = pBVar5->flag_32[0] | 1 << (uVar8 & 0x1f);
        }
        else {
          if (3 < (int)uVar8) {
            SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
            PrintAssertReal("FlgDown Illegal Access %d MAX %d");
          }
          pBVar5 = &m_plyr_camera.camera_power_up.mCamPartsSetFlg + iVar9;
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
                    /* end of inlined section */
          bVar1 = menu_cam_top_ctrl.equip_csr == '\x01';
          pBVar5->flag_32[0] = pBVar5->flag_32[0] & ~(1 << (uVar8 & 0x1f));
          if (bVar1) {
            iVar9 = 1;
            do {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
              _fixed_array_verifyrange__H1Zc_UiUi_PX01(iVar9,3);
              pcVar3 = equip_special.field0_0x0.m_aData + iVar9;
                    /* end of inlined section */
              iVar9 = iVar9 + 1;
                    /* end of inlined section */
              *pcVar3 = '\0';
            } while (iVar9 < 3);
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
            _fixed_array_verifyrange__H1Zc_UiUi_PX01(0,3);
            SetSubFuncArray__14CNEquipTrayWrkPc(&m_plyr_camera.eq_tray,(char *)&equip_special);
          }
        }
      }
      else {
                    /* end of inlined section */
        if (*paddat[1] == 1) {
          SystemBankPlay__FiiiiP11_SND_3D_SETii(1,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
          menu_cam_top_ctrl.mode = '\x03';
        }
      }
    }
    else {
      iVar9 = 1;
      do {
        iVar4 = menu_cam_top_ctrl.equip_csr + 1;
        iVar2 = iVar4;
        if (iVar4 < 0) {
          iVar2 = menu_cam_top_ctrl.equip_csr + 4;
        }
        iVar4 = iVar4 + (iVar2 >> 2) * -4;
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
        iVar2 = iVar4 * 0x1000000;
                    /* end of inlined section */
        menu_cam_top_ctrl.equip_csr = (char)iVar4;
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
        uVar6 = iVar2 >> 0x18;
        if (3 < (int)uVar6) {
          SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
          PrintAssertReal("IsUp Illegal Access %d MAX %d");
        }
        if (((&m_plyr_camera.camera_power_up.mCamPartsFlg)[iVar2 >> 0x1d].flag_32[0] &
            1 << (uVar6 & 0x1f)) != 0) {
LAB_001ef524:
          if (3 < iVar9) {
            return;
          }
          SystemBankPlay__FiiiiP11_SND_3D_SETii(0,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
          return;
        }
        iVar9 = iVar9 + 1;
      } while (iVar9 < 5);
    }
  }
  else {
    iVar9 = 1;
    do {
      iVar4 = menu_cam_top_ctrl.equip_csr + 3;
      iVar2 = iVar4;
      if (iVar4 < 0) {
        iVar2 = menu_cam_top_ctrl.equip_csr + 6;
      }
      iVar4 = iVar4 + (iVar2 >> 2) * -4;
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
      iVar2 = iVar4 * 0x1000000;
                    /* end of inlined section */
      menu_cam_top_ctrl.equip_csr = (char)iVar4;
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
      uVar6 = iVar2 >> 0x18;
      if (3 < (int)uVar6) {
        SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
        PrintAssertReal("IsUp Illegal Access %d MAX %d");
      }
      if (((&m_plyr_camera.camera_power_up.mCamPartsFlg)[iVar2 >> 0x1d].flag_32[0] &
          1 << (uVar6 & 0x1f)) != 0) goto LAB_001ef524;
                    /* end of inlined section */
      iVar9 = iVar9 + 1;
    } while (iVar9 < 5);
  }
  return;
}

static void MenuCamTopDispInit() {
  menu_cam_top_disp.anim_timer = '\0';
  menu_cam_top_disp.anim_step = '\0';
  return;
}

void MenuCamTopDisp() {
  uchar alpha;
  void *tm2_addr;
  
  if (((byte)menu_cam_top_ctrl.step - 2 < 2) &&
     (alpha = Zero2Anim2D_InOutAnimCtrl__FPcT0ss
                        (&menu_cam_top_disp.anim_step,&menu_cam_top_disp.anim_timer,10,5),
     menu_cam_top_disp.anim_step != '\x04')) {
    tm2_addr = GetMenuCameraPk2Addr__Fv();
    PK2SendVram__FUiiii((uint)tm2_addr,-1,-1,0);
    MenuCamTopCmnDisp__FiiUc(0,0,alpha);
    if ((code *)menu_cam_top_disp_func[menu_cam_top_ctrl.mode] != (code *)0x0) {
      (*(code *)menu_cam_top_disp_func[menu_cam_top_ctrl.mode])(0,0,alpha);
    }
  }
  return;
}

static void MenuCamModeTopDisp(int off_x, int off_y, u_char alpha) {
	static int msg_id[4] = {
		/* [0] = */ 0,
		/* [1] = */ 2,
		/* [2] = */ 1,
		/* [3] = */ 3
	};
	int disp_data;
	
  int iVar1;
  
  iVar1 = 0;
  if (menu_cam_top_ctrl.csr_yoko != '\0') {
    iVar1 = menu_cam_top_ctrl.csr_tate + 1;
  }
  MenuCamTopEquipFilmDisp__FiiUc(0,0,alpha);
  PrintMsg__Fiiiiiii(0x31,*(int *)(msg_id_1129 + iVar1 * 4),off_x + 0x30,off_y + 0x176,1,(uint)alpha
                     ,0);
  return;
}

static void MenuCamModeFilmSelDisp(int off_x, int off_y, u_char alpha) {
	static int film_msg_tbl[6][2] = {
		/* [0] = */ {
			/* [0] = */ 0,
			/* [1] = */ 4
		},
		/* [1] = */ {
			/* [0] = */ 1,
			/* [1] = */ 5
		},
		/* [2] = */ {
			/* [0] = */ 2,
			/* [1] = */ 6
		},
		/* [3] = */ {
			/* [0] = */ 3,
			/* [1] = */ 7
		},
		/* [4] = */ {
			/* [0] = */ 4,
			/* [1] = */ 8
		},
		/* [5] = */ {
			/* [0] = */ -1,
			/* [1] = */ -1
		}
	};
	int equip_film;
	
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  
  iVar1 = GetPlyrEquipmentFilmType__Fv();
  MenuCamTopEquipFilmSelDisp__FiiUc(off_x,off_y,alpha);
  MenuCamTopFilmSelCsrDisp__FiiUc(off_x,off_y,alpha);
  piVar3 = &film_msg_tbl_1133;
  if (film_msg_tbl_1133 != -1) {
    piVar4 = &DAT_003bd1dc;
    iVar2 = film_msg_tbl_1133;
    do {
      piVar3 = piVar3 + 2;
      if (iVar2 == iVar1) {
        PrintMsg__Fiiiiiii(0x31,*piVar4,off_x + 0x30,off_y + 0x176,1,(uint)alpha,0);
      }
      iVar2 = *piVar3;
      piVar4 = piVar4 + 2;
    } while (iVar2 != -1);
  }
  return;
}

static void MenuCamModeAddFuncSelDisp(int off_x, int off_y, u_char alpha) {
	static int msg_id[4] = {
		/* [0] = */ 11,
		/* [1] = */ 12,
		/* [2] = */ 13,
		/* [3] = */ 14
	};
	
  MenuCamTopEquipFilmDisp__FiiUc(off_x,off_y,alpha);
  MenuCamTopAddFuncSelCsrDisp__FiiUc(off_x,off_y,alpha);
  PrintMsg__Fiiiiiii(0x31,*(int *)(msg_id_1137 + menu_cam_top_ctrl.add_csr * 4),off_x + 0x30,
                     off_y + 0x176,1,(uint)alpha,0);
  return;
}

static void MenuCamModeEquipFuncSelDisp(int off_x, int off_y, u_char alpha) {
	static int msg_id[4] = {
		/* [0] = */ 16,
		/* [1] = */ 17,
		/* [2] = */ 18,
		/* [3] = */ 19
	};
	
  MenuCamTopEquipFilmDisp__FiiUc(off_x,off_y,alpha);
  MenuCamTopEquipFuncSelCsrDisp__FiiUc(off_x,off_y,alpha);
  PrintMsg__Fiiiiiii(0x31,*(int *)(msg_id_1141 + menu_cam_top_ctrl.equip_csr * 4),off_x + 0x30,
                     off_y + 0x176,1,(uint)alpha,0);
  return;
}

static void MenuCamTopCmnDisp(int off_x, int off_y, u_char alpha) {
  MenuCamTopTitleFrameDisp__FiiUc(0,0,alpha);
  MenuCamTopTitleDisp__FiiUc(0,0,alpha);
  MenuCamTopBaseDisp__FiiUc(0,0,alpha);
  MenuCamTopCsrBaseDisp__FiiUc(0,0,alpha);
  MenuCamTopItemDisp__FiiUc(0,0,alpha);
  MenuCamTopBasicPerformaneItemDisp__FiiUc(0,0,alpha);
  MenuCamTopCsrLineDisp__FiiUc(0,0,alpha);
  MenuCamTopEquipReinforcedLensDisp__FiiUc(0,0,alpha);
  MenuCamTopLevelGemNumDisp__FiiUc(0,0,alpha);
  MenuCamTopGhostPowerDisp__FiiUc(0,0,alpha);
  MenuCamTopPlyrHaveAddFuncDisp__FiiUc(0,0,alpha);
  MenuCamTopPlyrHaveEquipFuncDisp__FiiUc(0,0,alpha);
  MenuCamTopMsgWindowDisp__FiiUc(0,0,alpha);
  MenuCamTopCaptionDisp__FiiUc(0,0,alpha);
  return;
}

static void MenuCamTopTitleFrameDisp(int off_x, int off_y, u_char alpha) {
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
  fVar3 = DAT_003ee554;
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

static void MenuCamTopTitleDisp(int off_x, int off_y, u_char alpha) {
	int i;
	DISP_SPRT title_ds;
	
  int iVar1;
  SPRT_DAT *d;
  float fVar2;
  DISP_SPRT title_ds;
  
  fVar2 = (float)off_x;
  iVar1 = 1;
  d = menu_camera_tex + 9;
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

static void MenuCamTopBaseDisp(int off_x, int off_y, u_char alpha) {
	int i;
	DISP_SPRT base_ds;
	
  SPRT_DAT *d;
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  DISP_SPRT base_ds;
  
  fVar3 = (float)off_x;
  fVar4 = (float)off_y;
  CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&base_ds,menu_camera_tex);
  base_ds.x = base_ds.x + fVar3;
  base_ds.y = base_ds.y + fVar4;
  base_ds.alpha = (uchar)((int)((uint)base_ds.alpha * (uint)alpha) >> 7);
  DispSprD__FP9DISP_SPRT(&base_ds);
  CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&base_ds,menu_camera_tex + 1);
  base_ds.crx = base_ds.x + fVar3;
  if ((int)base_ds.w < 0) {
    fVar2 = (float)(base_ds.w & 1 | base_ds.w >> 1);
    fVar2 = fVar2 + fVar2;
  }
  else {
    fVar2 = (float)base_ds.w;
  }
  iVar1 = 4;
  base_ds.rot = 270.0;
  base_ds.cry = base_ds.y + fVar2 + fVar4;
  base_ds.alpha = (uchar)((int)((uint)base_ds.alpha * (uint)alpha) >> 7);
  base_ds.x = base_ds.crx;
  base_ds.y = base_ds.cry;
  DispSprD__FP9DISP_SPRT(&base_ds);
  d = menu_camera_tex + 2;
  do {
    CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&base_ds,d);
    iVar1 = iVar1 + -1;
    d = d + 1;
    base_ds.x = base_ds.x + fVar3;
    base_ds.y = base_ds.y + fVar4;
    base_ds.alpha = (uchar)((int)((uint)base_ds.alpha * (uint)alpha) >> 7);
    DispSprD__FP9DISP_SPRT(&base_ds);
  } while (-1 < iVar1);
  return;
}

static void MenuCamTopCsrBaseDisp(int off_x, int off_y, u_char alpha) {
	int i;
	int disp_data;
	DISP_SPRT base_ds;
	static int base_tex_tbl[4][2] = {
		/* [0] = */ {
			/* [0] = */ 11,
			/* [1] = */ 16
		},
		/* [1] = */ {
			/* [0] = */ 17,
			/* [1] = */ 22
		},
		/* [2] = */ {
			/* [0] = */ 23,
			/* [1] = */ 29
		},
		/* [3] = */ {
			/* [0] = */ 30,
			/* [1] = */ 35
		}
	};
	SQAR_DAT sqar_dat[4];
	DISP_SQAR dsq;
	int i;
	
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined uVar6;
  undefined uVar7;
  undefined uVar8;
  undefined uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined8 *puVar12;
  SQAR_DAT *pSVar13;
  int iVar14;
  uchar *puVar15;
  int iVar16;
  int iVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  DISP_SPRT base_ds;
  SQAR_DAT sqar_dat [4];
  DISP_SQAR dsq;
  
  puVar12 = &DAT_003bd248;
  pSVar13 = sqar_dat;
  do {
    uVar2 = *(undefined4 *)((int)puVar12 + 4);
    uVar3 = *(undefined4 *)(puVar12 + 1);
    uVar4 = *(undefined4 *)((int)(puVar12 + 1) + 4);
    puVar1 = puVar12 + 2;
    uVar5 = *(undefined4 *)puVar1;
    uVar6 = *(undefined *)((int)puVar1 + 4);
    uVar7 = *(undefined *)((int)puVar1 + 5);
    uVar8 = *(undefined *)((int)puVar1 + 6);
    uVar9 = *(undefined *)((int)puVar1 + 7);
    uVar10 = *(undefined4 *)(puVar12 + 3);
    uVar11 = *(undefined4 *)((int)(puVar12 + 3) + 4);
    pSVar13->w = *(undefined4 *)puVar12;
    pSVar13->h = uVar2;
    pSVar13->x = uVar3;
    pSVar13->y = uVar4;
    pSVar13->pri = uVar5;
    pSVar13->r = uVar6;
    pSVar13->g = uVar7;
    pSVar13->b = uVar8;
    pSVar13->alpha = uVar9;
    pSVar13[1].w = uVar10;
    pSVar13[1].h = uVar11;
    puVar12 = puVar12 + 4;
    pSVar13 = (SQAR_DAT *)&pSVar13[1].x;
  } while (puVar12 != (undefined8 *)&line_tex_tbl_1170);
  iVar17 = 0;
  if (menu_cam_top_ctrl.csr_yoko != '\0') {
    iVar17 = menu_cam_top_ctrl.csr_tate + 1;
  }
  CopySqrDToSqr__FP9DISP_SQARP8SQAR_DAT(&dsq,sqar_dat + iVar17);
  puVar15 = dsq.r;
  iVar16 = 0;
  do {
    iVar14 = iVar16 + 1;
    *puVar15 = 0xae;
    dsq.g[iVar16] = 'w';
    puVar15 = puVar15 + 1;
    dsq.b[iVar16] = ':';
    iVar16 = iVar14;
  } while (iVar14 < 4);
  dsq.alphar = 0x48;
  dsq.alpha = (uchar)((int)((uint)alpha * 0x33) >> 7);
  DispSqrD__FP9DISP_SQAR(&dsq);
  iVar16 = *(int *)(base_tex_tbl_1157 + iVar17 * 8);
  iVar17 = *(int *)(base_tex_tbl_1157 + iVar17 * 8 + 4);
  if (iVar16 <= iVar17) {
    fVar20 = (float)off_y;
    fVar19 = (float)off_x;
    do {
      CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&base_ds,menu_camera_tex + iVar16);
      if (iVar16 == 0x10) {
        base_ds.csx = base_ds.x + fVar19;
        base_ds.csy = base_ds.y + fVar20;
        base_ds.scw = 1.0;
        if ((int)base_ds.h < 0) {
          fVar18 = (float)(base_ds.h & 1 | base_ds.h >> 1);
          fVar18 = fVar18 + fVar18;
        }
        else {
          fVar18 = (float)base_ds.h;
        }
        base_ds.sch = 229.0 / fVar18;
        base_ds.y = base_ds.csy;
      }
      else {
        if (iVar16 < 0x11) {
          if (iVar16 == 0xb) {
LAB_001f0120:
            base_ds.crx = base_ds.x + fVar19;
            if ((int)base_ds.w < 0) {
              fVar18 = (float)(base_ds.w & 1 | base_ds.w >> 1);
              fVar18 = fVar18 + fVar18;
            }
            else {
              fVar18 = (float)base_ds.w;
            }
            base_ds.rot = 270.0;
            base_ds.cry = base_ds.y + fVar18 + fVar20;
            base_ds.y = base_ds.cry;
            goto LAB_001f022c;
          }
        }
        else if (iVar16 == 0x17) goto LAB_001f0120;
        base_ds.y = base_ds.y + fVar20;
      }
LAB_001f022c:
      base_ds.x = base_ds.x + fVar19;
      iVar16 = iVar16 + 1;
      base_ds.alphar = 0x48;
      base_ds.alpha = (uchar)((int)((uint)base_ds.alpha * (uint)alpha) >> 7);
      DispSprD__FP9DISP_SPRT(&base_ds);
    } while (iVar16 <= iVar17);
  }
  return;
}

static void MenuCamTopItemDisp(int off_x, int off_y, u_char alpha) {
	int i;
	DISP_SPRT item_ds;
	
  int iVar1;
  SPRT_DAT *d;
  float fVar2;
  DISP_SPRT item_ds;
  
  fVar2 = (float)off_x;
  iVar1 = 5;
  d = menu_camera_tex + 0x3d;
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

static void MenuCamTopBasicPerformaneItemDisp(int off_x, int off_y, u_char alpha) {
	int i;
	DISP_SPRT basic_ds;
	
  int iVar1;
  long lVar2;
  SPRT_DAT *d;
  int iVar3;
  uint uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  DISP_SPRT basic_ds;
  
  fVar6 = (float)off_y;
  fVar7 = (float)off_x;
  iVar1 = 2;
  d = menu_camera_tex + 0x43;
  do {
    CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&basic_ds,d);
    iVar1 = iVar1 + -1;
    d = d + 1;
    basic_ds.x = basic_ds.x + fVar7;
    basic_ds.y = basic_ds.y + fVar6;
    basic_ds.alpha = (uchar)((int)((uint)basic_ds.alpha * (uint)alpha) >> 7);
    DispSprD__FP9DISP_SPRT(&basic_ds);
  } while (-1 < iVar1);
  iVar3 = 0;
  iVar1 = 2;
  do {
    CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&basic_ds,menu_camera_tex + 0x49);
    fVar5 = (float)iVar3;
    iVar1 = iVar1 + -1;
    iVar3 = iVar3 + 0x23;
    basic_ds.x = basic_ds.x + fVar7;
    basic_ds.y = basic_ds.y + fVar5 + fVar6;
    basic_ds.alpha = (uchar)((int)((uint)basic_ds.alpha * (uint)alpha) >> 7);
    DispSprD__FP9DISP_SPRT(&basic_ds);
  } while (-1 < iVar1);
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
  lVar2 = 0;
  uVar4 = (uint)alpha;
  if ('\0' < m_plyr_camera.camera_power_up.mRadiusGrade.mValue) {
                    /* end of inlined section */
    do {
      CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&basic_ds,menu_camera_tex + 0x4a);
      iVar1 = (int)lVar2;
      basic_ds.y = (float)(off_y + 0x86);
      lVar2 = (long)(iVar1 + 1);
      basic_ds.alpha = (uchar)((int)(basic_ds.alpha * uVar4) >> 7);
      basic_ds.x = basic_ds.x + (float)(iVar1 << 4) + fVar7;
      DispSprD__FP9DISP_SPRT(&basic_ds);
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
    } while (lVar2 < m_plyr_camera.camera_power_up.mRadiusGrade.mValue);
  }
  lVar2 = 0;
  if ('\0' < m_plyr_camera.eq_tray.mSave.mStockGrade.mValue) {
                    /* end of inlined section */
    do {
      CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&basic_ds,menu_camera_tex + 0x4a);
      iVar1 = (int)lVar2;
      basic_ds.y = (float)(off_y + 0xa9);
      lVar2 = (long)(iVar1 + 1);
      basic_ds.alpha = (uchar)((int)(basic_ds.alpha * uVar4) >> 7);
      basic_ds.x = basic_ds.x + (float)(iVar1 << 4) + fVar7;
      DispSprD__FP9DISP_SPRT(&basic_ds);
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
    } while (lVar2 < m_plyr_camera.eq_tray.mSave.mStockGrade.mValue);
  }
  lVar2 = 0;
  if ('\0' < m_plyr_camera.camera_power_up.mSensitiveGrade.mValue) {
                    /* end of inlined section */
    do {
      CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&basic_ds,menu_camera_tex + 0x4a);
      iVar1 = (int)lVar2;
      basic_ds.y = (float)(off_y + 0xcc);
      lVar2 = (long)(iVar1 + 1);
      basic_ds.alpha = (uchar)((int)(basic_ds.alpha * uVar4) >> 7);
      basic_ds.x = basic_ds.x + (float)(iVar1 << 4) + fVar7;
      DispSprD__FP9DISP_SPRT(&basic_ds);
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
    } while (lVar2 < m_plyr_camera.camera_power_up.mSensitiveGrade.mValue);
  }
  return;
}

static void MenuCamTopCsrLineDisp(int off_x, int off_y, u_char alpha) {
	int i;
	int disp_data;
	DISP_SPRT line_ds;
	static int line_tex_tbl[4][2] = {
		/* [0] = */ {
			/* [0] = */ 36,
			/* [1] = */ 45
		},
		/* [1] = */ {
			/* [0] = */ 46,
			/* [1] = */ 50
		},
		/* [2] = */ {
			/* [0] = */ 51,
			/* [1] = */ 55
		},
		/* [3] = */ {
			/* [0] = */ 56,
			/* [1] = */ 60
		}
	};
	
  int iVar1;
  int iVar2;
  SPRT_DAT *d;
  float fVar3;
  DISP_SPRT line_ds;
  
  iVar1 = 0;
  if (menu_cam_top_ctrl.csr_yoko != '\0') {
    iVar1 = menu_cam_top_ctrl.csr_tate + 1;
  }
  iVar2 = (&line_tex_tbl_1170)[iVar1 * 2];
  iVar1 = (&DAT_003bd2ac)[iVar1 * 2];
  if (iVar2 <= iVar1) {
    fVar3 = (float)off_x;
    d = menu_camera_tex + iVar2;
    do {
      CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&line_ds,d);
      iVar2 = iVar2 + 1;
      d = d + 1;
      line_ds.x = line_ds.x + fVar3;
      line_ds.alphar = 0x48;
      line_ds.y = line_ds.y + (float)off_y;
      line_ds.alpha = (uchar)((int)((uint)line_ds.alpha * (uint)alpha) >> 7);
      DispSprD__FP9DISP_SPRT(&line_ds);
    } while (iVar2 <= iVar1);
  }
  return;
}

static void MenuCamTopEquipReinforcedLensDisp(int off_x, int off_y, u_char alpha) {
	int i;
	fixed_array<char,3> equip_special;
	DISP_SPRT ds;
	
  char cVar1;
  char *pcVar2;
  int iVar3;
  int x;
  SPRT_DAT *d;
  fixed_array<char,3> equip_special;
  DISP_SPRT ds;
  
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  iVar3 = 0;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  _fixed_array_verifyrange__H1Zc_UiUi_PX01(0,3);
  GetSubFuncArray__14CNEquipTrayWrkPc(&m_plyr_camera.eq_tray,(char *)&equip_special);
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
  if (((uint)m_plyr_camera.camera_power_up.mCamPartsSetFlg.flag_32[0] & 2) == 0) {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Zc_UiUi_PX01(0,3);
    MenuCamCmnReinforcedLensDisp__FffUci(80.0,253.0,alpha,(int)equip_special.field0_0x0.m_aData[0]);
    _fixed_array_verifyrange__H1Zc_UiUi_PX01(0,3);
    if (equip_special.field0_0x0.m_aData[0] == '\0') {
                    /* end of inlined section */
      CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&ds,menu_camera_tex + 0x47);
      ds.x = ds.x + (float)off_x;
      ds.y = ds.y + (float)off_y;
      ds.alpha = (uchar)((int)((uint)ds.alpha * (uint)alpha) >> 7);
      DispSprD__FP9DISP_SPRT(&ds);
    }
    else {
      _fixed_array_verifyrange__H1Zc_UiUi_PX01(0,3);
      _fixed_array_verifyrange__H1Zt9CVariable3Zci0i3_UiUi_PX01
                (equip_special.field0_0x0.m_aData[0],10);
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
      MenuCamTopReinforcedLensLvNumDisp__FiiUci
                (off_x + 0x4f,off_y + 0x124,alpha,
                 (int)m_plyr_camera.eq_tray.mSave.mSubFuncLv.field0_0x0.m_aData
                      [equip_special.field0_0x0.m_aData[0]].mValue);
    }
  }
  else {
                    /* end of inlined section */
    x = off_x + 0x25;
    d = menu_camera_tex + 0x46;
    do {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
      _fixed_array_verifyrange__H1Zc_UiUi_PX01(iVar3,3);
      pcVar2 = equip_special.field0_0x0.m_aData + iVar3;
      MenuCamCmnReinforcedLensDisp__FffUci((float)iVar3 * 42.0 + 38.0,253.0,alpha,(int)*pcVar2);
      _fixed_array_verifyrange__H1Zc_UiUi_PX01(iVar3,3);
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
      if (*pcVar2 == '\0') {
                    /* end of inlined section */
        CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&ds,d);
        ds.x = ds.x + (float)off_x;
        ds.y = ds.y + (float)off_y;
        ds.alpha = (uchar)((int)((uint)ds.alpha * (uint)alpha) >> 7);
        DispSprD__FP9DISP_SPRT(&ds);
      }
      else {
        _fixed_array_verifyrange__H1Zc_UiUi_PX01(iVar3,3);
        cVar1 = *pcVar2;
        _fixed_array_verifyrange__H1Zt9CVariable3Zci0i3_UiUi_PX01(cVar1,10);
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
        MenuCamTopReinforcedLensLvNumDisp__FiiUci
                  (x,off_y + 0x124,alpha,
                   (int)m_plyr_camera.eq_tray.mSave.mSubFuncLv.field0_0x0.m_aData[cVar1].mValue);
      }
      iVar3 = iVar3 + 1;
      x = x + 0x2a;
      d = d + 1;
    } while (iVar3 < 3);
  }
  return;
}

static void MenuCamTopReinforcedLensLvNumDisp(int x, int y, u_char alpha, int lv) {
	DISP_SPRT lv_ds;
	
  DISP_SPRT lv_ds;
  
  CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&lv_ds,menu_camera_tex + 0x55);
  lv_ds.x = (float)x;
  lv_ds.alpha = (uchar)((int)((uint)lv_ds.alpha * (uint)alpha) >> 7);
  lv_ds.y = (float)y;
  DispSprD__FP9DISP_SPRT(&lv_ds);
  CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&lv_ds,menu_camera_tex + lv + 0x56);
  lv_ds.x = (float)((uint)(ushort)menu_camera_tex[85].w + x);
  lv_ds.alpha = (uchar)((int)((uint)lv_ds.alpha * (uint)alpha) >> 7);
  lv_ds.y = (float)y;
  DispSprD__FP9DISP_SPRT(&lv_ds);
  return;
}

static void MenuCamTopLevelGemNumDisp(int off_x, int off_y, u_char alpha) {
  char cVar1;
  
  cVar1 = GetPlyrLevelGemNum__Fv();
  MenuCamNumberDisp__FiiiiUciUcUc((int)cVar1,2,0x43,0x141,alpha,0,'\0','\x01');
  return;
}

static void MenuCamTopGhostPowerDisp(int off_x, int off_y, u_char alpha) {
  int data;
  
  data = GetPlayData_Score__Fv();
  MenuCamNumberDisp__FiiiiUciUcUc(data,6,0x6f,0x141,alpha,0,'\0','\0');
  return;
}

static void MenuCamTopEquipFilmDisp(int off_x, int off_y, u_char alpha) {
	DISP_SPRT film_ds;
	int i;
	int equip_film;
	int equip_film_num;
	
  int item_id;
  int data;
  int (*paiVar1) [2];
  int iVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  DISP_SPRT film_ds;
  
  item_id = GetPlyrEquipmentFilmType__Fv();
  data = GetPlyrItemHaveNum__Fi(item_id);
  iVar2 = 0;
  if ((film_name_tbl[0][0] != -1) && (film_name_tbl[0][0] != item_id)) {
    paiVar1 = film_name_tbl;
    do {
      paiVar1 = paiVar1[1];
      iVar2 = iVar2 + 1;
      if ((*paiVar1)[0] == -1) break;
    } while ((*paiVar1)[0] != item_id);
  }
  if (item_id == 4) {
    fVar5 = (float)off_x;
    CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&film_ds,menu_camera_tex + 0x7e);
    film_ds.x = film_ds.x + fVar5;
    film_ds.y = film_ds.y + (float)off_y;
    film_ds.alpha = (uchar)((int)((uint)film_ds.alpha * (uint)alpha) >> 7);
    DispSprD__FP9DISP_SPRT(&film_ds);
  }
  else {
    fVar5 = (float)off_x;
    MenuCamNumberDisp__FiiiiUciUcUc(film_name_tbl[iVar2][1],2,0x20d,0xd0,alpha,0,'\x02','\x01');
  }
  fVar6 = (float)off_y;
  CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&film_ds,menu_camera_tex + 0x6e);
  film_ds.x = film_ds.x + fVar5;
  film_ds.y = film_ds.y + fVar6;
  film_ds.alpha = (uchar)((int)((uint)film_ds.alpha * (uint)alpha) >> 7);
  DispSprD__FP9DISP_SPRT(&film_ds);
  CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&film_ds,menu_camera_tex + 0x6f);
  uVar3 = (uint)alpha;
  film_ds.x = film_ds.x + fVar5;
  film_ds.y = film_ds.y + fVar6;
  film_ds.alpha = (uchar)((int)(film_ds.alpha * uVar3) >> 7);
  DispSprD__FP9DISP_SPRT(&film_ds);
  if (item_id == 0) {
    CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&film_ds,menu_camera_tex + 0x80);
    film_ds.x = film_ds.x + fVar5;
    film_ds.y = film_ds.y + fVar6;
    film_ds.alpha = (uchar)((int)(film_ds.alpha * uVar3) >> 7);
    DispSprD__FP9DISP_SPRT(&film_ds);
    CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&film_ds,menu_camera_tex + 0x80);
    if ((int)film_ds.w < 0) {
      fVar4 = (float)(film_ds.w & 1 | film_ds.w >> 1);
      fVar4 = fVar4 + fVar4;
    }
    else {
      fVar4 = (float)film_ds.w;
    }
    film_ds.y = film_ds.y + fVar6;
    film_ds.x = film_ds.x + fVar4 + fVar5;
    film_ds.alpha = (uchar)((int)(film_ds.alpha * uVar3) >> 7);
    DispSprD__FP9DISP_SPRT(&film_ds);
  }
  else {
    MenuCamNumberDisp__FiiiiUciUcUc(data,2,0x23b,0xd0,alpha,0,'\x02','\x01');
  }
  return;
}

static void MenuCamTopPlyrHaveAddFuncDisp(int off_x, int off_y, u_char alpha) {
	int i;
	int idx;
	int bit;
	
  bool bVar1;
  float fVar2;
  uint add_label;
  float fVar3;
  
  fVar2 = DAT_003ee558;
  bVar1 = true;
  fVar3 = 34.0;
  add_label = 0;
  do {
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
    if (!bVar1) {
      SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
      PrintAssertReal("IsUp Illegal Access %d MAX %d");
    }
    if (((&m_plyr_camera.camera_power_up.mAdditionFlg)[(int)add_label >> 5].flag_32[0] &
        1 << (add_label & 0x1f)) == 0) {
      MenuCamTopAddFuncLineDisp__FffUcUc((float)add_label * fVar3 + fVar2,117.0,alpha,'\0');
    }
    else {
                    /* end of inlined section */
      MenuCamCmnAdditionalFunctionDisp__FffUci
                ((float)add_label * fVar3 + fVar2,108.0,alpha,add_label);
    }
    add_label = add_label + 1;
    bVar1 = (int)add_label < 4;
  } while (bVar1);
  return;
}

static void MenuCamTopAddFuncLineDisp(float x, float y, u_char alpha, u_char flg) {
	DISP_SPRT add_ds;
	
  float fVar1;
  DISP_SPRT add_ds;
  
  if (flg != '\0') {
    CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&add_ds,menu_camera_tex + 0x87);
    if ((int)add_ds.w < 0) {
      fVar1 = (float)(add_ds.w & 1 | add_ds.w >> 1);
      fVar1 = fVar1 + fVar1;
    }
    else {
      fVar1 = (float)add_ds.w;
    }
    add_ds.cry = y + fVar1;
    add_ds.rot = 270.0;
    add_ds.alpha = (uchar)((int)((uint)add_ds.alpha * (uint)alpha) >> 7);
    add_ds.crx = x;
    add_ds.x = x;
    add_ds.y = add_ds.cry;
    DispSprD__FP9DISP_SPRT(&add_ds);
  }
  CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&add_ds,menu_camera_tex + 0x86);
  if ((int)add_ds.w < 0) {
    fVar1 = (float)(add_ds.w & 1 | add_ds.w >> 1);
    fVar1 = fVar1 + fVar1;
  }
  else {
    fVar1 = (float)add_ds.w;
  }
  add_ds.cry = y + fVar1;
  add_ds.rot = 270.0;
  add_ds.alpha = (uchar)((int)((uint)add_ds.alpha * (uint)alpha) >> 7);
  add_ds.crx = x;
  add_ds.x = x;
  add_ds.y = add_ds.cry;
  DispSprD__FP9DISP_SPRT(&add_ds);
  return;
}

static void MenuCamTopPlyrHaveEquipFuncDisp(int off_x, int off_y, u_char alpha) {
	int i;
	int idx;
	int bit;
	
  bool bVar1;
  uint parts_label;
  uint uVar2;
  float fVar3;
  
  fVar3 = 36.0;
  parts_label = 0;
  bVar1 = true;
  do {
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
    if (!bVar1) {
      SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
      PrintAssertReal("IsUp Illegal Access %d MAX %d");
    }
    uVar2 = 1 << (parts_label & 0x1f);
    if (((&m_plyr_camera.camera_power_up.mCamPartsFlg)[(int)parts_label >> 5].flag_32[0] & uVar2) ==
        0) {
      MenuCamTopEquipFuncLineDisp__FffUc((float)parts_label * fVar3 + 458.0,314.0,alpha);
    }
    else {
      if (!bVar1) {
        SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
        PrintAssertReal("IsUp Illegal Access %d MAX %d");
      }
      MenuCamCmnEquipFunctionDisp__FffUciUc
                ((float)parts_label * fVar3 + 458.0,304.0,alpha,parts_label,
                 ((&m_plyr_camera.camera_power_up.mCamPartsSetFlg)[(int)parts_label >> 5].flag_32[0]
                 & uVar2) != 0);
    }
    parts_label = parts_label + 1;
    bVar1 = (int)parts_label < 4;
  } while (bVar1);
  return;
}

static void MenuCamTopEquipFuncLineDisp(float x, float y, u_char alpha) {
	DISP_SPRT add_ds;
	
  float fVar1;
  DISP_SPRT add_ds;
  
  CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&add_ds,menu_camera_tex + 0x96);
  if ((int)add_ds.w < 0) {
    fVar1 = (float)(add_ds.w & 1 | add_ds.w >> 1);
    fVar1 = fVar1 + fVar1;
  }
  else {
    fVar1 = (float)add_ds.w;
  }
  add_ds.cry = y + fVar1;
  add_ds.rot = 270.0;
  add_ds.alpha = (uchar)((int)((uint)add_ds.alpha * (uint)alpha) >> 7);
  add_ds.crx = x;
  add_ds.x = x;
  add_ds.y = add_ds.cry;
  DispSprD__FP9DISP_SPRT(&add_ds);
  return;
}

static void MenuCamTopMsgWindowDisp(int off_x, int off_y, u_char alpha) {
  DrawCmnWindow__FUiffffUcUc(0,(float)(off_x + 0x18),(float)(off_y + 0x160),592.0,100.0,alpha,'f');
  return;
}

static void MenuCamTopCaptionDisp(int off_x, int off_y, u_char alpha) {
  DrawCmnCapGroup_W__FiiUcUi(0,0,alpha,0);
  return;
}

static void MenuCamTopEquipFilmSelDisp(int off_x, int off_y, u_char alpha) {
	DISP_SPRT film_ds;
	int i;
	int equip_film;
	int equip_film_num;
	
  int item_id;
  int data;
  int (*paiVar1) [2];
  int iVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  DISP_SPRT film_ds;
  
  item_id = GetPlyrEquipmentFilmType__Fv();
  data = GetPlyrItemHaveNum__Fi(item_id);
  iVar2 = 0;
  if ((film_name_tbl[0][0] != -1) && (film_name_tbl[0][0] != item_id)) {
    paiVar1 = film_name_tbl;
    do {
      paiVar1 = paiVar1[1];
      iVar2 = iVar2 + 1;
      if ((*paiVar1)[0] == -1) break;
    } while ((*paiVar1)[0] != item_id);
  }
  if (item_id == 4) {
    fVar5 = (float)off_x;
    CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&film_ds,menu_camera_tex + 0x7f);
    film_ds.x = film_ds.x + fVar5;
    film_ds.y = film_ds.y + (float)off_y;
    film_ds.alpha = (uchar)((int)((uint)film_ds.alpha * (uint)alpha) >> 7);
    DispSprD__FP9DISP_SPRT(&film_ds);
  }
  else {
    fVar5 = (float)off_x;
    MenuCamNumberDisp__FiiiiUciUcUc(film_name_tbl[iVar2][1],2,0x20d,0xd0,alpha,0,'\x01','\x01');
  }
  fVar6 = (float)off_y;
  CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&film_ds,menu_camera_tex + 0x7a);
  film_ds.x = film_ds.x + fVar5;
  film_ds.y = film_ds.y + fVar6;
  film_ds.alpha = (uchar)((int)((uint)film_ds.alpha * (uint)alpha) >> 7);
  DispSprD__FP9DISP_SPRT(&film_ds);
  CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&film_ds,menu_camera_tex + 0x7b);
  uVar3 = (uint)alpha;
  film_ds.x = film_ds.x + fVar5;
  film_ds.y = film_ds.y + fVar6;
  film_ds.alpha = (uchar)((int)(film_ds.alpha * uVar3) >> 7);
  DispSprD__FP9DISP_SPRT(&film_ds);
  if (item_id == 0) {
    CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&film_ds,menu_camera_tex + 0x81);
    film_ds.x = film_ds.x + fVar5;
    film_ds.y = film_ds.y + fVar6;
    film_ds.alpha = (uchar)((int)(film_ds.alpha * uVar3) >> 7);
    DispSprD__FP9DISP_SPRT(&film_ds);
    CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&film_ds,menu_camera_tex + 0x81);
    if ((int)film_ds.w < 0) {
      fVar4 = (float)(film_ds.w & 1 | film_ds.w >> 1);
      fVar4 = fVar4 + fVar4;
    }
    else {
      fVar4 = (float)film_ds.w;
    }
    film_ds.y = film_ds.y + fVar6;
    film_ds.x = film_ds.x + fVar4 + fVar5;
    film_ds.alpha = (uchar)((int)(film_ds.alpha * uVar3) >> 7);
    DispSprD__FP9DISP_SPRT(&film_ds);
  }
  else {
    MenuCamNumberDisp__FiiiiUciUcUc(data,2,0x23b,0xd0,alpha,0,'\x01','\x01');
  }
  return;
}

static void MenuCamTopFilmSelCsrDisp(int off_x, int off_y, u_char alpha) {
	int i;
	u_char rgb;
	DISP_SPRT csr_ds;
	
  SPRT_DAT *d;
  int iVar1;
  float fVar2;
  uchar rgb;
  DISP_SPRT csr_ds;
  
  iVar1 = 1;
  fVar2 = (float)off_x;
  Zero2Anim2D_CsrAnimCtrl__FPcPUc(&menu_cam_top_disp.csr_anim_timer,&rgb);
  d = menu_camera_tex + 0x7c;
  do {
    iVar1 = iVar1 + -1;
    CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&csr_ds,d);
    csr_ds.x = csr_ds.x + fVar2;
    csr_ds.y = csr_ds.y + (float)off_y;
    csr_ds.b = rgb;
    csr_ds.r = rgb;
    csr_ds.alpha = (uchar)((int)((uint)csr_ds.alpha * (uint)alpha) >> 7);
    csr_ds.g = rgb;
    DispSprD__FP9DISP_SPRT(&csr_ds);
    d = d + 1;
  } while (-1 < iVar1);
  return;
}

static void MenuCamTopAddFuncSelCsrDisp(int off_x, int off_y, u_char alpha) {
	int i;
	DISP_SPRT csr_ds;
	u_char rgb;
	
  int iVar1;
  SPRT_DAT *pSVar2;
  float fVar3;
  DISP_SPRT csr_ds;
  uchar rgb;
  
  iVar1 = 3;
  fVar3 = (float)off_x;
  Zero2Anim2D_CsrAnimCtrl__FPcPUc(&menu_cam_top_disp.csr_anim_timer,&rgb);
  pSVar2 = menu_camera_tex + 0x8a;
  do {
    CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&csr_ds,pSVar2);
    iVar1 = iVar1 + -1;
    pSVar2 = pSVar2 + 1;
    csr_ds.y = csr_ds.y + (float)off_y;
    csr_ds.alpha = (uchar)((int)((uint)csr_ds.alpha * (uint)alpha) >> 7);
    csr_ds.x = csr_ds.x + (float)(int)menu_cam_top_ctrl.add_csr * 34.0 + fVar3;
    DispSprD__FP9DISP_SPRT(&csr_ds);
  } while (-1 < iVar1);
  iVar1 = 1;
  pSVar2 = menu_camera_tex + 0x88;
  do {
    CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&csr_ds,pSVar2);
    iVar1 = iVar1 + -1;
    pSVar2 = pSVar2 + 1;
    csr_ds.b = rgb;
    csr_ds.r = rgb;
    csr_ds.y = csr_ds.y + (float)off_y;
    csr_ds.g = rgb;
    csr_ds.alpha = (uchar)((int)((uint)csr_ds.alpha * (uint)alpha) >> 7);
    csr_ds.x = csr_ds.x + (float)(int)menu_cam_top_ctrl.add_csr * 34.0 + fVar3;
    DispSprD__FP9DISP_SPRT(&csr_ds);
  } while (-1 < iVar1);
  return;
}

static void MenuCamTopEquipFuncSelCsrDisp(int off_x, int off_y, u_char alpha) {
	int i;
	DISP_SPRT csr_ds;
	u_char rgb;
	
  int iVar1;
  SPRT_DAT *pSVar2;
  float fVar3;
  DISP_SPRT csr_ds;
  uchar rgb;
  
  iVar1 = 3;
  fVar3 = (float)off_x;
  Zero2Anim2D_CsrAnimCtrl__FPcPUc(&menu_cam_top_disp.csr_anim_timer,&rgb);
  pSVar2 = menu_camera_tex + 0x99;
  do {
    CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&csr_ds,pSVar2);
    iVar1 = iVar1 + -1;
    pSVar2 = pSVar2 + 1;
    csr_ds.y = csr_ds.y + (float)off_y;
    csr_ds.alpha = (uchar)((int)((uint)csr_ds.alpha * (uint)alpha) >> 7);
    csr_ds.x = csr_ds.x + (float)(int)menu_cam_top_ctrl.equip_csr * 36.0 + fVar3;
    DispSprD__FP9DISP_SPRT(&csr_ds);
  } while (-1 < iVar1);
  iVar1 = 1;
  pSVar2 = menu_camera_tex + 0x97;
  do {
    CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&csr_ds,pSVar2);
    iVar1 = iVar1 + -1;
    pSVar2 = pSVar2 + 1;
    csr_ds.b = rgb;
    csr_ds.r = rgb;
    csr_ds.y = csr_ds.y + (float)off_y;
    csr_ds.g = rgb;
    csr_ds.alpha = (uchar)((int)((uint)csr_ds.alpha * (uint)alpha) >> 7);
    csr_ds.x = csr_ds.x + (float)(int)menu_cam_top_ctrl.equip_csr * 36.0 + fVar3;
    DispSprD__FP9DISP_SPRT(&csr_ds);
  } while (-1 < iVar1);
  return;
}

char* char * _fixed_array_verifyrange<char>(size_t v, size_t _max) {
  g3ddbgAssert__FbPCce(false,str_858);
  return (type_info *)v;
}

CVariable<char,0,3>* CVariable<char, 0, 3> * _fixed_array_verifyrange<CVariable<char, 0, 3> >(size_t v, size_t _max) {
  g3ddbgAssert__FbPCce(false,str_858);
  return (type_info *)v;
}

type_info& CVariable<char, 0, 3> type_info function() {
  g3ddbgAssert__FbPCce(false,str_858);
  return (type_info *)v;
}
