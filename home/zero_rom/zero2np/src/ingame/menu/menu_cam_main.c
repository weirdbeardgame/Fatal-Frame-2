// STATUS: NOT STARTED

#include "menu_cam_main.h"

typedef struct {
	char sub_step;
	char step;
	char mode;
	char next_mode;
	char exit_flg;
	char init_type;
} MENU_CAM_MAIN_CTRL;

static void* (*MenuCamMemGetFunc)(/* parameters unknown */) = NULL;
static void (*MenuCamMemFreeFunc)(/* parameters unknown */) = NULL;
static void *menu_cam_tex_addr = NULL;
static void *menu_cam_edit_tex_addr = NULL;

static void (*menu_cam_init_func[2])(/* parameters unknown */) = {
	/* [0] = */ MenuCamTopInit,
	/* [1] = */ MenuCamEditInit
};

static int (*menu_cam_main_func[2])(/* parameters unknown */) = {
	/* [0] = */ MenuCamTopMain,
	/* [1] = */ MenuCamEditMain
};

static void (*menu_cam_disp_func[2])(/* parameters unknown */) = {
	/* [0] = */ MenuCamTopDisp,
	/* [1] = */ MenuCamEditDisp
};

unsigned char CVariable<char, 0, 9> type_info node[8];
unsigned char CVariable<char, 0, 3> type_info node[8];
static MENU_CAM_MAIN_CTRL menu_cam_main_ctrl;

static void _fixed_array_assert(char *strType, size_t v0, size_t v1) {
	static char *str = 0x3bce00;
	
  g3ddbgAssert__FbPCce(false,str_849);
  return (int *)v;
}

static void** void * * _fixed_array_verifyrange<void *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_verifyrange__H1Zi_UiUi_PX01(0x3f2b90,_max);
  }
  return (void **)0x0;
}

static char** char * * _fixed_array_verifyrange<char *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_verifyrange__H1Zi_UiUi_PX01(0x3f2b98,_max);
  }
  return (char **)0x0;
}

static unsigned int** unsigned int * * _fixed_array_verifyrange<unsigned int *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_verifyrange__H1Zi_UiUi_PX01(0x3bce48,_max);
  }
  return (uint **)0x0;
}

void MenuCamMainInit(char init_type) {
  menu_cam_main_ctrl.init_type = init_type;
  menu_cam_main_ctrl.step = '\0';
  menu_cam_main_ctrl.sub_step = '\0';
  menu_cam_main_ctrl.mode = '\0';
  menu_cam_main_ctrl.next_mode = '\0';
  menu_cam_main_ctrl.exit_flg = '\0';
  return;
}

void MenuCamMainBackGroundLoadReq(void* (*mem_get)(/* parameters unknown */), void (*mem_free)(/* parameters unknown */)) {
	static char __FUNCTION__[29] = {
		/* [0] = */ 77,
		/* [1] = */ 101,
		/* [2] = */ 110,
		/* [3] = */ 117,
		/* [4] = */ 67,
		/* [5] = */ 97,
		/* [6] = */ 109,
		/* [7] = */ 77,
		/* [8] = */ 97,
		/* [9] = */ 105,
		/* [10] = */ 110,
		/* [11] = */ 66,
		/* [12] = */ 97,
		/* [13] = */ 99,
		/* [14] = */ 107,
		/* [15] = */ 71,
		/* [16] = */ 114,
		/* [17] = */ 111,
		/* [18] = */ 117,
		/* [19] = */ 110,
		/* [20] = */ 100,
		/* [21] = */ 76,
		/* [22] = */ 111,
		/* [23] = */ 97,
		/* [24] = */ 100,
		/* [25] = */ 82,
		/* [26] = */ 101,
		/* [27] = */ 113,
		/* [28] = */ 0
	};
	
  undefined1 *puVar1;
  undefined1 *puVar2;
  uchar uVar3;
  
  if ((MenuCamMemGetFunc != (undefined1 *)0x0) ||
     (puVar1 = mem_get, puVar2 = mem_free, MenuCamMemFreeFunc != (undefined1 *)0x0)) {
    SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
    PrintAssertReal("Error! %s");
    puVar1 = MenuCamMemGetFunc;
    puVar2 = MenuCamMemFreeFunc;
  }
  MenuCamMemFreeFunc = puVar2;
  MenuCamMemGetFunc = puVar1;
  if (menu_cam_tex_addr != (void *)0x0) {
    LiberateMenuCamMainTexMem__FPPv(&menu_cam_tex_addr);
  }
  if (menu_cam_edit_tex_addr != (void *)0x0) {
    LiberateMenuCamMainTexMem__FPPv(&menu_cam_edit_tex_addr);
  }
  uVar3 = GetLanguage__Fv();
  GetMenuCamMainTexMem__FPPvi(&menu_cam_tex_addr,(char)uVar3 + 0x51);
  uVar3 = GetLanguage__Fv();
  GetMenuCamMainTexMem__FPPvi(&menu_cam_edit_tex_addr,(char)uVar3 + 0x56);
  uVar3 = GetLanguage__Fv();
  FileLoadReqEE((char)uVar3 + 0x51,menu_cam_tex_addr,2,(undefined1 *)0x0,(void *)0x0);
  uVar3 = GetLanguage__Fv();
  FileLoadReqEE((char)uVar3 + 0x56,menu_cam_edit_tex_addr,2,(undefined1 *)0x0,(void *)0x0);
  return;
}

static void GetMenuCamMainTexMem(void **tex_addr, int data_label) {
  uint uVar1;
  void *pvVar2;
  
  if (*tex_addr != (void *)0x0) {
    LiberateMenuCamMainTexMem__FPPv(tex_addr);
  }
  uVar1 = GetFileSize(data_label);
  pvVar2 = (void *)(*(code *)MenuCamMemGetFunc)(uVar1);
  *tex_addr = pvVar2;
  return;
}

static int MenuCamMainTexLoadWait() {
	int res;
	
  uchar uVar1;
  int iVar2;
  uint uVar3;
  
  uVar1 = GetLanguage__Fv();
  iVar2 = FileLoadIsEnd2((char)uVar1 + 0x51,menu_cam_tex_addr);
  if (iVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar1 = GetLanguage__Fv();
    iVar2 = FileLoadIsEnd2((char)uVar1 + 0x56,menu_cam_edit_tex_addr);
    uVar3 = (uint)(iVar2 != 0);
  }
  return uVar3;
}

int MenuCamMain() {
  int iVar1;
  
  if (menu_cam_main_ctrl.step == '\0') {
    MenuCamTopFirstInit__Fv();
    menu_cam_main_ctrl.step = '\x01';
  }
  if ((menu_cam_main_ctrl.step == '\x01') && (iVar1 = MenuCamMainTexLoadWait__Fv(), iVar1 != 0)) {
    menu_cam_main_ctrl.step = '\x02';
  }
  if ((menu_cam_main_ctrl.step == '\x02') && (iVar1 = MenuCamModeMain__Fv(), iVar1 != 0)) {
    menu_cam_main_ctrl.step = '\x03';
  }
  return (int)(menu_cam_main_ctrl.step == '\x03');
}

static int MenuCamModeMain() {
	int res;
	
  long lVar1;
  uint uVar2;
  
  if (menu_cam_main_ctrl.sub_step == '\0') {
    if ((code *)menu_cam_init_func[menu_cam_main_ctrl.mode] != (code *)0x0) {
      (*(code *)menu_cam_init_func[menu_cam_main_ctrl.mode])();
    }
    menu_cam_main_ctrl.sub_step = '\x02';
  }
  if (((menu_cam_main_ctrl.sub_step == '\x02') &&
      ((code *)menu_cam_main_func[menu_cam_main_ctrl.mode] != (code *)0x0)) &&
     (lVar1 = (*(code *)menu_cam_main_func[menu_cam_main_ctrl.mode])(), lVar1 != 0)) {
    menu_cam_main_ctrl.sub_step = '\x03';
  }
  uVar2 = 0;
  if (menu_cam_main_ctrl.sub_step == '\x03') {
    if (menu_cam_main_ctrl.exit_flg == '\0') {
      menu_cam_main_ctrl.sub_step = '\0';
      menu_cam_main_ctrl.mode = menu_cam_main_ctrl.next_mode;
    }
    uVar2 = (uint)(menu_cam_main_ctrl.exit_flg != '\0');
  }
  return uVar2;
}

void MenuCamExitReq() {
  menu_cam_main_ctrl.exit_flg = '\x01';
  return;
}

void MenuCamGoToTopReq() {
  menu_cam_main_ctrl.next_mode = '\0';
  return;
}

void MenuCamGoToEditReq() {
  menu_cam_main_ctrl.next_mode = '\x01';
  return;
}

int GetMenuCamInitType() {
  return (int)menu_cam_main_ctrl.init_type;
}

void* GetMenuCameraPk2Addr() {
  return menu_cam_tex_addr;
}

void* GetMenuCameraEdtPk2Addr() {
  return menu_cam_edit_tex_addr;
}

int GetHaveAddFuncNum() {
	int i;
	int have_cnt;
	int idx;
	int bit;
	
  uint uVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  bVar2 = true;
  uVar4 = 0;
  iVar5 = 0;
  do {
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
    iVar3 = (int)uVar4 >> 5;
    if (!bVar2) {
      SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
      PrintAssertReal("IsUp Illegal Access %d MAX %d");
    }
    uVar1 = uVar4 & 0x1f;
                    /* end of inlined section */
    uVar4 = uVar4 + 1;
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
                    /* end of inlined section */
    bVar2 = (int)uVar4 < 4;
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
                    /* end of inlined section */
    if (((&m_plyr_camera.camera_power_up.mAdditionFlg)[iVar3].flag_32[0] & 1 << uVar1) != 0) {
      iVar5 = iVar5 + 1;
    }
  } while (bVar2);
  return iVar5;
}

int GetHaveEquipFuncNum() {
	int i;
	int have_cnt;
	int idx;
	int bit;
	
  uint uVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  bVar2 = true;
  uVar4 = 0;
  iVar5 = 0;
  do {
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
    iVar3 = (int)uVar4 >> 5;
    if (!bVar2) {
      SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
      PrintAssertReal("IsUp Illegal Access %d MAX %d");
    }
    uVar1 = uVar4 & 0x1f;
                    /* end of inlined section */
    uVar4 = uVar4 + 1;
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
                    /* end of inlined section */
    bVar2 = (int)uVar4 < 4;
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
                    /* end of inlined section */
    if (((&m_plyr_camera.camera_power_up.mCamPartsFlg)[iVar3].flag_32[0] & 1 << uVar1) != 0) {
      iVar5 = iVar5 + 1;
    }
  } while (bVar2);
  return iVar5;
}

int GetHaveReinforcedLensNum() {
	int i;
	int have_cnt;
	int idx;
	int bit;
	
  uint uVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  bVar2 = true;
  uVar4 = 1;
  iVar5 = 0;
  do {
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
    iVar3 = (int)uVar4 >> 5;
    if (!bVar2) {
      SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
      PrintAssertReal("IsUp Illegal Access %d MAX %d");
    }
    uVar1 = uVar4 & 0x1f;
                    /* end of inlined section */
    uVar4 = uVar4 + 1;
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
                    /* end of inlined section */
    bVar2 = (int)uVar4 < 10;
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
                    /* end of inlined section */
    if (((&m_plyr_camera.camera_power_up.mTemperedRenzFlg)[iVar3].flag_32[0] & 1 << uVar1) != 0) {
      iVar5 = iVar5 + 1;
    }
  } while (bVar2);
  return iVar5;
}

int GetEquipReinforcedLensNum() {
	int i;
	int equip_num;
	fixed_array<char,3> equip_special;
	
  char *pcVar1;
  int iVar2;
  int iVar3;
  fixed_array<char,3> equip_special;
  
  iVar3 = 0;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  _fixed_array_verifyrange__H1Zc_UiUi_PX01(0,3);
  iVar2 = 0;
  GetSubFuncArray__14CNEquipTrayWrkPc(&m_plyr_camera.eq_tray,(char *)&equip_special);
  do {
    _fixed_array_verifyrange__H1Zc_UiUi_PX01(iVar2,3);
    pcVar1 = equip_special.field0_0x0.m_aData + iVar2;
                    /* end of inlined section */
    iVar2 = iVar2 + 1;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* end of inlined section */
    if (*pcVar1 != '\0') {
      iVar3 = iVar3 + 1;
    }
  } while (iVar2 < 3);
  return iVar3;
}

void MenuCamMainMemFree() {
  uchar uVar1;
  
  uVar1 = GetLanguage__Fv();
  MenuCamMainTexLoadCancel__FPvi(menu_cam_tex_addr,(char)uVar1 + 0x51);
  uVar1 = GetLanguage__Fv();
  MenuCamMainTexLoadCancel__FPvi(menu_cam_edit_tex_addr,(char)uVar1 + 0x56);
  LiberateMenuCamMainTexMem__FPPv(&menu_cam_tex_addr);
  LiberateMenuCamMainTexMem__FPPv(&menu_cam_edit_tex_addr);
  MenuCamMemGetFunc = (undefined1 *)0x0;
  MenuCamMemFreeFunc = (undefined1 *)0x0;
  return;
}

static void LiberateMenuCamMainTexMem(void **tex_addr) {
  if (*tex_addr != (void *)0x0) {
    (*(code *)MenuCamMemFreeFunc)(*tex_addr);
    *tex_addr = (void *)0x0;
  }
  return;
}

static void MenuCamMainTexLoadCancel(void *tex_addr, int data_label) {
  int iVar1;
  
  if ((tex_addr != (void *)0x0) && (iVar1 = FileLoadIsEnd2(data_label,tex_addr), iVar1 == 0)) {
    FileLoadCancel2(data_label,tex_addr,(undefined1 *)0x0,(void *)0x0);
  }
  return;
}

void MenuCamMainDisp() {
  if ((menu_cam_main_ctrl.step == '\x02') &&
     ((code *)menu_cam_disp_func[menu_cam_main_ctrl.mode] != (code *)0x0)) {
    (*(code *)menu_cam_disp_func[menu_cam_main_ctrl.mode])();
  }
  return;
}

void MenuCamCmnReinforcedLensDisp(float x, float y, u_char alpha, int lens_label) {
	DISP_SPRT lens_ds;
	static reference_fixed_array<int,10> lens_tbl;
	
  DISP_SPRT lens_ds;
  
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* end of inlined section */
  if (__tmp_10_1148 == 0) {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    lens_tbl_1147 = &DAT_003bcf48;
    __tmp_10_1148 = 1;
  }
  _fixed_array_verifyrange__H1Zi_UiUi_PX01(lens_label,10);
  if (*(int *)(lens_tbl_1147 + lens_label * 4) != -1) {
    _fixed_array_verifyrange__H1Zi_UiUi_PX01(lens_label,10);
    CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT
              (&lens_ds,menu_camera_tex + *(int *)(lens_tbl_1147 + lens_label * 4));
                    /* end of inlined section */
    lens_ds.b = _14CNEquipTrayWrk_equip_func_tbl[lens_label].b;
    lens_ds.r = _14CNEquipTrayWrk_equip_func_tbl[lens_label].r;
    lens_ds.g = _14CNEquipTrayWrk_equip_func_tbl[lens_label].g;
    lens_ds.alpha = (uchar)((int)((uint)lens_ds.alpha * (uint)alpha) >> 7);
    lens_ds.x = x;
    lens_ds.y = y;
    DispSprD__FP9DISP_SPRT(&lens_ds);
  }
  return;
}

void MenuCamNumberDisp(int data, int num, int x, int y, u_char alpha, int pri, u_char type, u_char zero_flg) {
	static char __FUNCTION__[18] = {
		/* [0] = */ 77,
		/* [1] = */ 101,
		/* [2] = */ 110,
		/* [3] = */ 117,
		/* [4] = */ 67,
		/* [5] = */ 97,
		/* [6] = */ 109,
		/* [7] = */ 78,
		/* [8] = */ 117,
		/* [9] = */ 109,
		/* [10] = */ 98,
		/* [11] = */ 101,
		/* [12] = */ 114,
		/* [13] = */ 68,
		/* [14] = */ 105,
		/* [15] = */ 115,
		/* [16] = */ 112,
		/* [17] = */ 0
	};
	int i;
	int j;
	int count;
	int tmp;
	int ten_tmp;
	int off_x;
	u_char set_flg;
	
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int off_x;
  
  PK2SendVram__FUiiii((uint)menu_cam_tex_addr,-1,-1,0);
  off_x = 0;
  bVar1 = zero_flg == '\x01';
  if (type == '\0') {
    off_x = 0xe;
  }
  else if (type < 3) {
    off_x = 0x11;
  }
  else {
    SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
    PrintAssertReal("Error! MenuCamNumberDisp Type %d");
  }
  if (0 < num) {
    do {
      iVar3 = 1;
      iVar4 = num + -1;
      iVar2 = iVar4;
      if (iVar4 < 1) {
        iVar3 = 1;
      }
      else {
        do {
          iVar2 = iVar2 + -1;
          iVar3 = iVar3 * 10;
        } while (iVar2 != 0);
      }
      if (iVar3 == 0) {
        trap(7);
      }
      if (data / iVar3 != 0) {
        bVar1 = true;
      }
      if (((zero_flg == '\0') && (data == 0)) && (num == 1)) {
        bVar1 = true;
      }
      if (num == 1) {
        iVar2 = data % 10;
      }
      else {
        iVar2 = (data / iVar3) % 10;
      }
      if (bVar1) {
        MenuCamNumberDisp_One__FiiiUciUc(iVar2,x,y,alpha,pri,type);
      }
      x = x + off_x;
      num = iVar4;
    } while (0 < iVar4);
  }
  return;
}

static void MenuCamNumberDisp_One(int data, int x, int y, u_char alpha, int pri, u_char type) {
	static char __FUNCTION__[22] = {
		/* [0] = */ 77,
		/* [1] = */ 101,
		/* [2] = */ 110,
		/* [3] = */ 117,
		/* [4] = */ 67,
		/* [5] = */ 97,
		/* [6] = */ 109,
		/* [7] = */ 78,
		/* [8] = */ 117,
		/* [9] = */ 109,
		/* [10] = */ 98,
		/* [11] = */ 101,
		/* [12] = */ 114,
		/* [13] = */ 68,
		/* [14] = */ 105,
		/* [15] = */ 115,
		/* [16] = */ 112,
		/* [17] = */ 95,
		/* [18] = */ 79,
		/* [19] = */ 110,
		/* [20] = */ 101,
		/* [21] = */ 0
	};
	DISP_SPRT num_ds;
	
  DISP_SPRT num_ds;
  
  if (9 < data) {
    SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
    PrintAssertReal("Error!! MenuCamNumberDisp_One");
  }
  if (type == '\x01') {
    CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&num_ds,menu_camera_tex + data + 0x70);
  }
  else {
    if (type < 2) {
      if (type == '\0') {
        CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&num_ds,menu_camera_tex + data + 0x5a);
        goto LAB_001ee33c;
      }
    }
    else if (type == '\x02') {
      CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&num_ds,menu_camera_tex + data + 100);
      goto LAB_001ee33c;
    }
    SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
    PrintAssertReal("Error! MenuCamNumberDisp_One Type %d");
  }
LAB_001ee33c:
  num_ds.x = (float)x;
  num_ds.y = (float)y;
  num_ds.z = 0xfffff - (pri & 0xfffffU);
  num_ds.pri = pri;
  num_ds.alpha = alpha;
  DispSprD__FP9DISP_SPRT(&num_ds);
  return;
}

void MenuCamCmnAdditionalFunctionDisp(float x, float y, u_char alpha, int add_label) {
	DISP_SPRT add_ds;
	static reference_fixed_array<int,4> add_tbl;
	
  DISP_SPRT add_ds;
  
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* end of inlined section */
  if (__tmp_11_1168 == 0) {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    add_tbl_1167 = &DAT_003bd010;
    __tmp_11_1168 = 1;
  }
  _fixed_array_verifyrange__H1Zi_UiUi_PX01(add_label,4);
  if (*(int *)(add_tbl_1167 + add_label * 4) != -1) {
    _fixed_array_verifyrange__H1Zi_UiUi_PX01(add_label,4);
    CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT
              (&add_ds,menu_camera_tex + *(int *)(add_tbl_1167 + add_label * 4));
                    /* end of inlined section */
    add_ds.alpha = (uchar)((int)((uint)add_ds.alpha * (uint)alpha) >> 7);
    add_ds.x = x;
    add_ds.y = y;
    DispSprD__FP9DISP_SPRT(&add_ds);
  }
  return;
}

void MenuCamCmnEquipFunctionDisp(float x, float y, u_char alpha, int parts_label, u_char flg) {
	DISP_SPRT parts_ds;
	static reference_fixed_array<int,4> parts_tbl;
	static reference_fixed_array<int,4> non_parts_tbl;
	
  int iVar1;
  DISP_SPRT parts_ds;
  
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  iVar1 = parts_label * 4;
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  if (__tmp_12_1182 == 0) {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    __tmp_12_1182 = 1;
    parts_tbl_1181 = &DAT_003bd020;
  }
                    /* end of inlined section */
  if (__tmp_13_1184 == 0) {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    __tmp_13_1184 = 1;
    non_parts_tbl_1183 = &DAT_003bd030;
  }
                    /* end of inlined section */
  parts_ds.x = x;
  if (flg == '\0') {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Zi_UiUi_PX01(parts_label,4);
    if (*(int *)(non_parts_tbl_1183 + iVar1) != -1) {
      _fixed_array_verifyrange__H1Zi_UiUi_PX01(parts_label,4);
      CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT
                (&parts_ds,menu_camera_tex + *(int *)(non_parts_tbl_1183 + iVar1));
                    /* end of inlined section */
      parts_ds.alpha = (uchar)((int)((uint)parts_ds.alpha * (uint)alpha) >> 7);
      parts_ds.y = y;
      DispSprD__FP9DISP_SPRT(&parts_ds);
    }
  }
  else {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Zi_UiUi_PX01(parts_label,4);
    if (*(int *)(parts_tbl_1181 + iVar1) != -1) {
      _fixed_array_verifyrange__H1Zi_UiUi_PX01(parts_label,4);
      CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT
                (&parts_ds,menu_camera_tex + *(int *)(parts_tbl_1181 + iVar1));
                    /* end of inlined section */
      parts_ds.alpha = (uchar)((int)((uint)parts_ds.alpha * (uint)alpha) >> 7);
      parts_ds.y = y;
      DispSprD__FP9DISP_SPRT(&parts_ds);
    }
  }
  return;
}

char* char * _fixed_array_verifyrange<char>(size_t v, size_t _max) {
  g3ddbgAssert__FbPCce(false,str_849);
  return (int *)v;
}

int* int * _fixed_array_verifyrange<int>(size_t v, size_t _max) {
  g3ddbgAssert__FbPCce(false,str_849);
  return (int *)v;
}
