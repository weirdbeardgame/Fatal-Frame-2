// STATUS: NOT STARTED

#include "menu_photo.h"

typedef struct {
	char step;
	char csr_yoko;
	char csr_tate;
	char sub_csr;
	char sort_csr;
	char photo_flg;
	char sort_flg;
	char sub_anim_step;
	char sub_anim_timer;
	char csr_timer;
	u_char rgb;
} MENU_PHOTO_CTRL;

typedef struct {
	char anim_step;
	char anim_timer;
} MENU_PHOTO_DISP;

static void *menu_photo_tex_addr = NULL;
unsigned char _PICTURE_SUBJECT type_info node[8];
static MENU_PHOTO_CTRL menu_photo_ctrl;
static MENU_PHOTO_DISP menu_photo_disp;

static int csr_num[8][2] = {
	/* [0] = */ {
		/* [0] = */ 0,
		/* [1] = */ 8
	},
	/* [1] = */ {
		/* [0] = */ 1,
		/* [1] = */ 9
	},
	/* [2] = */ {
		/* [0] = */ 2,
		/* [1] = */ 10
	},
	/* [3] = */ {
		/* [0] = */ 3,
		/* [1] = */ 11
	},
	/* [4] = */ {
		/* [0] = */ 4,
		/* [1] = */ 12
	},
	/* [5] = */ {
		/* [0] = */ 5,
		/* [1] = */ 13
	},
	/* [6] = */ {
		/* [0] = */ 6,
		/* [1] = */ 14
	},
	/* [7] = */ {
		/* [0] = */ 7,
		/* [1] = */ 15
	}
};

static void _fixed_array_assert(char *strType, size_t v0, size_t v1) {
	static char *str = 0x3be498;
	
  g3ddbgAssert__FbPCce(false,str_646);
  return (type_info *)v;
}

static void** void * * _fixed_array_verifyrange<void *>(size_t v, size_t _max) {
  if (_max <= v) {
    __tf16_PICTURE_SUBJECT(0x3f2e88,_max);
  }
  return (void **)0x0;
}

static char** char * * _fixed_array_verifyrange<char *>(size_t v, size_t _max) {
  if (_max <= v) {
    __tf16_PICTURE_SUBJECT(0x3f2e90,_max);
  }
  return (char **)0x0;
}

static unsigned int** unsigned int * * _fixed_array_verifyrange<unsigned int *>(size_t v, size_t _max) {
  if (_max <= v) {
    __tf16_PICTURE_SUBJECT(0x3be4e0,_max);
  }
  return (uint **)0x0;
}

static void MenuPhotoInit() {
  MenuPhotoCtrlInit__Fv();
  if (menu_photo_tex_addr == (void *)0x0) {
    printf("<<<<<<<<<WARNING FILE[%s] LINE[%d]>>>>>>>>>>\n");
    PrintWarningReal("Menu Photo Tex Back reading failure\n");
    MenuPhotoTexLoadReq__Fv();
  }
  return;
}

static void MenuPhotoCtrlInit() {
  menu_photo_ctrl.rgb = '@';
  menu_photo_ctrl.step = '\0';
  menu_photo_ctrl.csr_yoko = '\0';
  menu_photo_ctrl.csr_tate = '\0';
  menu_photo_ctrl.sub_csr = '\0';
  menu_photo_ctrl.sort_csr = '\0';
  menu_photo_ctrl.sort_flg = '\0';
  menu_photo_ctrl.photo_flg = '\0';
  menu_photo_ctrl.sub_anim_step = '\0';
  menu_photo_ctrl.sub_anim_timer = '\0';
  menu_photo_ctrl.csr_timer = '\0';
  return;
}

void GetMenuPhotoTexMem() {
  uchar uVar1;
  uint size;
  
  if (menu_photo_tex_addr != (void *)0x0) {
    LiberateMenuPhotoTexMem__Fv();
  }
  if (menu_photo_tex_addr == (void *)0x0) {
    uVar1 = GetLanguage__Fv();
    size = GetFileSize((char)uVar1 + 0x30);
    menu_photo_tex_addr = mem_utilGetMem__Fi(size);
  }
  return;
}

void MenuPhotoTexLoadReq() {
  uchar uVar1;
  
  if (menu_photo_tex_addr == (void *)0x0) {
    GetMenuPhotoTexMem__Fv();
  }
  uVar1 = GetLanguage__Fv();
  FileLoadReqEE((char)uVar1 + 0x30,menu_photo_tex_addr,2,(undefined1 *)0x0,(void *)0x0);
  return;
}

static int MenuPhotoTexLoadWait() {
  uchar uVar1;
  int iVar2;
  
  uVar1 = GetLanguage__Fv();
  iVar2 = FileLoadIsEnd2((char)uVar1 + 0x30,menu_photo_tex_addr);
  return (int)(iVar2 != 0);
}

void MenuPhoto() {
  int iVar1;
  
  if (menu_wrk.step == '\0') {
    MenuPhotoInit__Fv();
    MenuPhotoDispInit__Fv();
    menu_wrk.step = '\x01';
  }
  if ((menu_wrk.step == '\x01') && (iVar1 = MenuPhotoTexLoadWait__Fv(), iVar1 != 0)) {
    menu_wrk.step = '\x02';
  }
  if (menu_wrk.step == '\x02') {
    iVar1 = GetFilePhotoNum__Fv();
    if (iVar1 == 0) {
      MenuNonPhotoPad__Fv();
      return;
    }
    if (menu_photo_ctrl.step == '\0') {
      MenuPhotoPad__Fv();
      return;
    }
    if (menu_photo_ctrl.step == '\x01') {
      if (menu_photo_ctrl.sub_anim_step != '\x03') {
        MenuPhotoSubPad__Fv();
        return;
      }
    }
    else {
      if (menu_photo_ctrl.step == '\x02') {
        MenuPhotoSortPad__Fv();
        return;
      }
      if (menu_photo_ctrl.step == '\x03') {
        MenuPhotoDelPad__Fv();
        return;
      }
      if ((menu_photo_ctrl.step == '\x04') && (iVar1 = MenuCmnConfirmPad__Fv(), iVar1 != 0)) {
        menu_photo_ctrl.step = '\x01';
      }
    }
  }
  else if ((menu_wrk.step == '\x03') && (menu_photo_disp.anim_step == '\x04')) {
    SetNextMenuStep__Fi(8);
    LiberateMenuPhotoTexMem__Fv();
  }
  return;
}

static void MenuPhotoPad() {
	int sel_num;
	u_char uncompress_flg;
	int i;
	
  uchar no;
  bool bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  iVar5 = csr_num[menu_photo_ctrl.csr_tate][menu_photo_ctrl.csr_yoko];
  bVar1 = false;
  if (((pad[0].rpt & 0x1000U) == 0) && (iVar2 = GetPadAnalogRpt__Fi(0), iVar2 == 0)) {
    if (((pad[0].rpt & 0x4000U) == 0) && (iVar2 = GetPadAnalogRpt__Fi(1), iVar2 == 0)) {
      if (((pad[0].rpt & 0x8000U) != 0) ||
         (((iVar2 = GetPadAnalogRpt__Fi(2), iVar2 != 0 || ((pad[0].rpt & 0x2000U) != 0)) ||
          (iVar2 = GetPadAnalogRpt__Fi(3), iVar2 != 0)))) {
        bVar1 = true;
        SystemBankPlay__FiiiiP11_SND_3D_SETii(0,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
        menu_photo_ctrl.csr_yoko =
             (char)(menu_photo_ctrl.csr_yoko + 1) + (char)((menu_photo_ctrl.csr_yoko + 1) / 2) * -2;
        goto LAB_002018b0;
      }
      no = (uchar)iVar5;
      if (*paddat[0x12] == 1) {
        uVar4 = GetFilePhotoState__FUc(no);
        if ((uVar4 & 1) != 0) {
          SystemBankPlay__FiiiiP11_SND_3D_SETii(3,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
          menu_photo_ctrl.step = '\x01';
          menu_photo_ctrl.sub_anim_timer = '\0';
          menu_photo_ctrl.sub_csr = '\0';
          menu_photo_ctrl.sub_anim_step = '\0';
          goto LAB_002018b0;
        }
        iVar5 = 2;
      }
      else {
        if (*paddat[1] == 1) {
          SystemBankPlay__FiiiiP11_SND_3D_SETii(1,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
          MenuPhotoOutReq__Fv();
          goto LAB_002018b0;
        }
        if (*paddat[0x14] != 1) {
          iVar5 = 0;
          if ((pad[0].one & 4U) != 0) {
            do {
              GetPhotoData__FUc((uchar)iVar5);
              iVar5 = iVar5 + 1;
              printf("pfile photo [%d] adr no[%d]\n");
            } while (iVar5 < 0x10);
          }
          goto LAB_002018b0;
        }
        uVar4 = GetFilePhotoState__FUc(no);
        if ((uVar4 & 1) == 0) {
          iVar5 = 2;
        }
        else {
          uVar4 = GetFilePhotoState__FUc(no);
          if ((uVar4 & 2) == 0) {
            SetFilePhotoProtect__FUc(no);
            iVar5 = 4;
          }
          else {
            DelFilePhotoProtect__FUc(no);
            iVar5 = 4;
          }
        }
      }
      SystemBankPlay__FiiiiP11_SND_3D_SETii(iVar5,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
      goto LAB_002018b0;
    }
    SystemBankPlay__FiiiiP11_SND_3D_SETii(0,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
    iVar2 = menu_photo_ctrl.csr_tate + 1;
    iVar5 = menu_photo_ctrl.csr_tate + 8;
  }
  else {
    SystemBankPlay__FiiiiP11_SND_3D_SETii(0,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
    iVar2 = menu_photo_ctrl.csr_tate + 7;
    iVar5 = menu_photo_ctrl.csr_tate + 0xe;
  }
  bVar1 = true;
  iVar3 = iVar2;
  if (iVar2 < 0) {
    iVar3 = iVar5;
  }
  menu_photo_ctrl.csr_tate = (char)iVar2 + (char)(iVar3 >> 3) * -8;
LAB_002018b0:
  if (bVar1) {
    menu_photo_ctrl.photo_flg = '\0';
  }
  return;
}

static void MenuNonPhotoPad() {
  if (*paddat[1] == 1) {
    SystemBankPlay__FiiiiP11_SND_3D_SETii(1,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
    MenuPhotoOutReq__Fv();
  }
  return;
}

static void MenuPhotoOutReq() {
  menu_photo_disp.anim_step = '\x03';
  menu_wrk.step = '\x03';
  menu_photo_disp.anim_timer = '\0';
  return;
}

static void MenuPhotoSubPad() {
  int iVar1;
  
  if (((pad[0].rpt & 0x1000U) == 0) && (iVar1 = GetPadAnalogRpt__Fi(0), iVar1 == 0)) {
    if (((pad[0].rpt & 0x4000U) == 0) && (iVar1 = GetPadAnalogRpt__Fi(1), iVar1 == 0)) {
      if (**paddat == 1) {
        MenuPhotoSubMenuMain__Fv();
        return;
      }
      if (*paddat[1] != 1) {
        return;
      }
      SystemBankPlay__FiiiiP11_SND_3D_SETii(1,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
      menu_photo_ctrl.sub_anim_step = '\x03';
      menu_photo_ctrl.sub_anim_timer = '\n';
      return;
    }
    SystemBankPlay__FiiiiP11_SND_3D_SETii(0,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
    iVar1 = menu_photo_ctrl.sub_csr + 1;
  }
  else {
    SystemBankPlay__FiiiiP11_SND_3D_SETii(0,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
    iVar1 = menu_photo_ctrl.sub_csr + 2;
  }
  menu_photo_ctrl.sub_csr = (char)(iVar1 % 3);
  return;
}

static void MenuPhotoDelPad() {
	int sel_num;
	
  int iVar1;
  int iVar2;
  
  iVar1 = csr_num[menu_photo_ctrl.csr_tate][menu_photo_ctrl.csr_yoko];
  iVar2 = MenuCmnYesNoPad__Fv();
  if (iVar2 == 1) {
    DeletePhotoData__FUc((uchar)iVar1);
    menu_photo_ctrl.step = '\0';
    menu_photo_ctrl.photo_flg = '\0';
  }
  else {
    if (iVar2 < 2) {
      if (iVar2 == 0) {
        return;
      }
    }
    else if (iVar2 == 2) {
      menu_photo_ctrl.step = '\x01';
      return;
    }
    printf("<<<<<<<<<WARNING FILE[%s] LINE[%d]>>>>>>>>>>\n");
    PrintWarningReal("Label Error!! MenuPhotoDelPad()");
  }
  return;
}

static void MenuPhotoSortPad() {
  int iVar1;
  
  if (((pad[0].rpt & 0x1000U) == 0) && (iVar1 = GetPadAnalogRpt__Fi(0), iVar1 == 0)) {
    if (((pad[0].rpt & 0x4000U) == 0) && (iVar1 = GetPadAnalogRpt__Fi(1), iVar1 == 0)) {
      if (**paddat == 1) {
        SystemBankPlay__FiiiiP11_SND_3D_SETii(3,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
        MenuPhotoSortMenuMain__Fv();
        return;
      }
      if (*paddat[1] != 1) {
        return;
      }
      SystemBankPlay__FiiiiP11_SND_3D_SETii(1,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
      menu_photo_ctrl.step = '\x01';
      return;
    }
    SystemBankPlay__FiiiiP11_SND_3D_SETii(0,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
    iVar1 = menu_photo_ctrl.sort_csr + 1;
  }
  else {
    SystemBankPlay__FiiiiP11_SND_3D_SETii(0,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
    iVar1 = menu_photo_ctrl.sort_csr + 2;
  }
  menu_photo_ctrl.sort_flg = '\0';
  menu_photo_ctrl.sort_csr = (char)(iVar1 % 3);
  return;
}

static void MenuPhotoSubMenuMain() {
	int sel_num;
	
  char cVar1;
  uint uVar2;
  uchar no;
  
  cVar1 = menu_photo_ctrl.sub_csr;
  no = (uchar)csr_num[menu_photo_ctrl.csr_tate][menu_photo_ctrl.csr_yoko];
  if (menu_photo_ctrl.sub_csr == '\x01') {
    SystemBankPlay__FiiiiP11_SND_3D_SETii(3,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
    uVar2 = GetFilePhotoState__FUc(no);
    if ((uVar2 & 2) == 0) {
      menu_photo_ctrl.step = '\x03';
      MenuYesNoCtrlInit__Fi(1);
      return;
    }
    menu_photo_ctrl.step = '\x04';
  }
  else {
    if (menu_photo_ctrl.sub_csr < '\x02') {
      if (menu_photo_ctrl.sub_csr == '\0') {
        SystemBankPlay__FiiiiP11_SND_3D_SETii(4,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
        uVar2 = GetFilePhotoState__FUc(no);
        if ((uVar2 & 2) == 0) {
          SetFilePhotoProtect__FUc(no);
          return;
        }
        DelFilePhotoProtect__FUc(no);
        return;
      }
    }
    else if (menu_photo_ctrl.sub_csr == '\x02') {
      SystemBankPlay__FiiiiP11_SND_3D_SETii(3,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
      menu_photo_ctrl.step = cVar1;
      menu_photo_ctrl.sort_csr = '\0';
      menu_photo_ctrl.sort_flg = '\0';
      return;
    }
    printf("ERROR!! MenuPhotoSubMenuMain()\n");
  }
  return;
}

static void MenuPhotoSortMenuMain() {
  PFILE_WRK *pPVar1;
  
  if (menu_photo_ctrl.sort_csr == '\x01') {
    if (menu_photo_ctrl.sort_flg == '\0') {
      pPVar1 = GetCamPhotoFile__Fv();
      SortPhotoData_NewTime__FP9PFILE_WRK(pPVar1);
    }
    else if (menu_photo_ctrl.sort_flg == '\x01') {
      pPVar1 = GetCamPhotoFile__Fv();
      SortPhotoData_OldTime__FP9PFILE_WRK(pPVar1);
    }
  }
  else {
    if (menu_photo_ctrl.sort_csr < '\x02') {
      if (menu_photo_ctrl.sort_csr == '\0') {
        if (menu_photo_ctrl.sort_flg == '\0') {
          pPVar1 = GetCamPhotoFile__Fv();
          SortPhotoData_Protect__FP9PFILE_WRK(pPVar1);
        }
        else if (menu_photo_ctrl.sort_flg == '\x01') {
          pPVar1 = GetCamPhotoFile__Fv();
          SortPhotoData_NonProtect__FP9PFILE_WRK(pPVar1);
        }
        goto LAB_00201f9c;
      }
    }
    else if (menu_photo_ctrl.sort_csr == '\x02') {
      if (menu_photo_ctrl.sort_flg == '\0') {
        pPVar1 = GetCamPhotoFile__Fv();
        SortPhotoData_BigScore__FP9PFILE_WRK(pPVar1);
      }
      else if (menu_photo_ctrl.sort_flg == '\x01') {
        pPVar1 = GetCamPhotoFile__Fv();
        SortPhotoData_SmallScore__FP9PFILE_WRK(pPVar1);
      }
      goto LAB_00201f9c;
    }
    printf("ERROR!! MenuPhotoSortMenuMain()\n");
  }
LAB_00201f9c:
  menu_photo_ctrl.sort_flg = menu_photo_ctrl.sort_flg == '\0';
  menu_photo_ctrl.photo_flg = '\0';
  return;
}

void LiberateMenuPhotoTexMem() {
  if (menu_photo_tex_addr != (void *)0x0) {
    mem_utilFreeMem__FPv(menu_photo_tex_addr);
    menu_photo_tex_addr = (void *)0x0;
  }
  return;
}

void MenuPhotoTexLoadCancel() {
  uchar uVar1;
  int iVar2;
  
  iVar2 = MenuPhotoTexLoadWait__Fv();
  if (iVar2 == 0) {
    uVar1 = GetLanguage__Fv();
    FileLoadCancel2((char)uVar1 + 0x30,menu_photo_tex_addr,(undefined1 *)0x0,(void *)0x0);
  }
  return;
}

static void MenuPhotoDispInit() {
  menu_photo_disp.anim_timer = '\0';
  menu_photo_disp.anim_step = '\0';
  return;
}

void MenuPhotoDisp() {
	u_char alpha;
	
  int iVar1;
  uchar alpha;
  
  alpha = '\0';
  if ((byte)(menu_wrk.step - 2) < 2) {
    MenuInOutAnimCtrl__FPcT0PUc(&menu_photo_disp.anim_step,&menu_photo_disp.anim_timer,&alpha);
    Zero2Anim2D_CsrAnimCtrl__FPcPUc(&menu_photo_ctrl.csr_timer,&menu_photo_ctrl.rgb);
    if (menu_photo_disp.anim_step != '\x04') {
      MenuPhotoTitleDisp__FiiUc(0,0,alpha);
      iVar1 = GetFilePhotoNum__Fv();
      if (iVar1 < 1) {
        MenuPhotoNotHaveDisp__FiiUc(0,0,alpha);
      }
      else {
        MenuPhotoCaptionDisp__FiiUc(0,0,alpha);
        MenuPhotoThumbnailDisp__FiiUc(0,0,alpha);
        MenuPhotoDataWinDisp__FiiUc(0,0,alpha);
        MenuPhotoInfoDisp__FiiUc(0,0,alpha);
        MenuPhotoProtectCsr__FiiUc(0,0,alpha);
        MenuPhotoLargePhotoWinDisp__FiiUc(0,0,alpha);
        MenuPhotoLargePhotoDisp__FiiUc(0,0,alpha);
        MenuPhotoLargeProtectDisp__FiiUc(0,0,alpha);
        if (menu_photo_ctrl.step == '\x01') {
          MenuPhotoSubMenuDisp__FiiUc(0,0,0x80);
        }
        else if (menu_photo_ctrl.step == '\x03') {
          MenuPhotoSubMenuDisp__FiiUc(0,0,0x80);
          MenuPhotoDelConfirmDisp__FiiUc(0,0,0x80);
        }
        else if (menu_photo_ctrl.step == '\x04') {
          MenuPhotoSubMenuDisp__FiiUc(0,0,0x80);
          MenuPhotoNotDelWinDisp__FiiUc(0,0,0x80);
        }
        else if (menu_photo_ctrl.step == '\x02') {
          MenuPhotoSortMenuDisp__FiiUc(0,0,0x80);
        }
      }
    }
  }
  return;
}

static void MenuPhotoTitleDisp(int off_x, int off_y, u_char alpha) {
	DISP_SPRT title_ds;
	
  float fVar1;
  float fVar2;
  DISP_SPRT title_ds;
  
  fVar1 = (float)off_x;
  PK2SendVram__FUiiii(0x19368c0,-1,-1,0);
  CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&title_ds,menu_photo + 0xb9);
  fVar2 = (float)off_y;
  title_ds.x = title_ds.x + fVar1;
  title_ds.y = title_ds.y + fVar2;
  title_ds.alpha = (uchar)((int)((uint)title_ds.alpha * (uint)alpha) >> 7);
  DispSprD__FP9DISP_SPRT(&title_ds);
  CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&title_ds,menu_photo + 0xba);
  title_ds.x = title_ds.x + fVar1;
  title_ds.y = title_ds.y + fVar2;
  title_ds.alpha = (uchar)((int)((uint)title_ds.alpha * (uint)alpha) >> 7);
  DispSprD__FP9DISP_SPRT(&title_ds);
  PK2SendVram__FUiiii((uint)menu_photo_tex_addr,-1,-1,0);
  CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&title_ds,menu_photo + 0xb8);
  title_ds.x = title_ds.x + fVar1;
  title_ds.y = title_ds.y + fVar2;
  title_ds.alpha = (uchar)((int)((uint)title_ds.alpha * (uint)alpha) >> 7);
  DispSprD__FP9DISP_SPRT(&title_ds);
  return;
}

static void MenuPhotoInfoDisp(int off_x, int off_y, u_char alpha) {
	static char __FUNCTION__[18] = {
		/* [0] = */ 77,
		/* [1] = */ 101,
		/* [2] = */ 110,
		/* [3] = */ 117,
		/* [4] = */ 80,
		/* [5] = */ 104,
		/* [6] = */ 111,
		/* [7] = */ 116,
		/* [8] = */ 111,
		/* [9] = */ 73,
		/* [10] = */ 110,
		/* [11] = */ 102,
		/* [12] = */ 111,
		/* [13] = */ 68,
		/* [14] = */ 105,
		/* [15] = */ 115,
		/* [16] = */ 112,
		/* [17] = */ 0
	};
	int i;
	int subject_num;
	int msg_y;
	PICTURE_WRK *pic_info;
	DATE_INFO date;
	
  uchar no;
  ushort uVar1;
  uint uVar2;
  PICTURE_WRK *pPVar3;
  int iVar4;
  PICTURE_WRK *pPVar5;
  _PICTURE_SUBJECT *p_Var6;
  int iVar7;
  int iVar8;
  DATE_INFO date;
  
  iVar8 = 0;
  no = *(uchar *)(csr_num[menu_photo_ctrl.csr_tate] + menu_photo_ctrl.csr_yoko);
  uVar2 = GetFilePhotoState__FUc(no);
  if ((uVar2 & 1) != 0) {
    pPVar3 = GetPhotoData__FUc(no);
    SetDateInfoType__FP9DATE_INFOP10sceCdCLOCK(&date,&pPVar3->time);
    if (pPVar3->room < 0xf0) {
      PrintMsg__Fiiiiiii(0x4a,(int)(short)pPVar3->room,off_x + 0x4e,off_y + 0x161,2,(uint)alpha,0);
    }
    iVar4 = off_y + 0x17a;
    PrintNumber_N__FiiiiUcUciUcUc(date.day.year,2,off_x + 0xa2,iVar4,'\x02',alpha,0,'\x01',1);
    PrintMsg__Fiiiiiii(8,1,off_x + 0x6a,iVar4,2,(uint)alpha,0);
    PrintNumber_N__FiiiiUcUciUcUc(date.day.month,2,off_x + 0x78,iVar4,'\x02',alpha,0,'\x01',1);
    PrintMsg__Fiiiiiii(8,1,off_x + 0x94,iVar4,2,(uint)alpha,0);
    PrintNumber_N__FiiiiUcUciUcUc(date.day.day,2,off_x + 0x4e,iVar4,'\x02',alpha,0,'\x01',1);
    PrintNumber_N__FiiiiUcUciUcUc(date.time.hour,2,off_x + 0xcc,iVar4,'\x02',alpha,0,'\x01',1);
    PrintMsg__Fiiiiiii(8,0,off_x + 0xe9,iVar4,2,(uint)alpha,0);
    PrintNumber_N__FiiiiUcUciUcUc(date.time.min,2,off_x + 0xf4,iVar4,'\x02',alpha,0,'\x01',1);
    PrintMsg__Fiiiiiii(8,0,off_x + 0x111,iVar4,2,(uint)alpha,0);
    PrintNumber_N__FiiiiUcUciUcUc(date.time.sec,2,off_x + 0x11c,iVar4,'\x02',alpha,0,'\x01',1);
    PrintNumber_N__FiiiiUcUciUcUc(pPVar3->score,5,off_x + 0xb6,off_y + 0x192,'\x02',alpha,0,'\0',0);
    PrintMsg__Fiiiiiii(8,2,off_x + 0x112,off_y + 0x192,2,(uint)alpha,0);
    pPVar5 = pPVar3;
    iVar4 = 0;
    while (pPVar5 = (PICTURE_WRK *)&pPVar5->maSubject, iVar4 < 3) {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
      _fixed_array_verifyrange__H1Z16_PICTURE_SUBJECT_UiUi_PX01(iVar4,3);
      if ((short)(((fixed_array<_PICTURE_SUBJECT,3> *)pPVar5)->field0_0x0).m_aData[0].type < 0)
      break;
      iVar8 = iVar8 + 1;
      iVar4 = iVar4 + 1;
    }
    iVar4 = 0x16e;
    if (iVar8 != 2) {
      if (iVar8 < 3) {
        iVar7 = 1;
        iVar4 = 0x17a;
      }
      else {
        iVar7 = 3;
        iVar4 = 0x162;
      }
      if (iVar8 != iVar7) {
        iVar4 = 0x162;
      }
    }
    iVar8 = iVar4 + off_y;
                    /* end of inlined section */
    for (iVar7 = 0; iVar7 < 3; iVar7 = iVar7 + 1) {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
      p_Var6 = (pPVar3->maSubject).field0_0x0.m_aData + iVar7;
      _fixed_array_verifyrange__H1Z16_PICTURE_SUBJECT_UiUi_PX01(iVar7,3);
      if ((short)p_Var6->type < 0) {
        return;
      }
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
      _fixed_array_verifyrange__H1Z16_PICTURE_SUBJECT_UiUi_PX01(iVar7,3);
      if ((short)p_Var6->obj_no < 0) {
LAB_002026b4:
                    /* end of inlined section */
        SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
        _fixed_array_verifyrange__H1Z16_PICTURE_SUBJECT_UiUi_PX01(iVar7,3);
        PrintAssertReal("Error! MenuPhotoInfoDisp msg_id %d");
      }
      else {
        _fixed_array_verifyrange__H1Z16_PICTURE_SUBJECT_UiUi_PX01(iVar7,3);
        uVar1 = p_Var6->obj_no;
        _fixed_array_verifyrange__H1Z16_PICTURE_SUBJECT_UiUi_PX01(iVar7,3);
        iVar4 = GetMsgIDNumMax__Fi((int)(short)p_Var6->type);
        if ((long)iVar4 <= (long)(short)uVar1) goto LAB_002026b4;
      }
      _fixed_array_verifyrange__H1Z16_PICTURE_SUBJECT_UiUi_PX01(iVar7,3);
      uVar1 = p_Var6->type;
      _fixed_array_verifyrange__H1Z16_PICTURE_SUBJECT_UiUi_PX01(iVar7,3);
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
      PrintMsg__Fiiiiiii((int)(short)uVar1,(int)(short)p_Var6->obj_no,off_x + 0x16f,iVar8,2,
                         (uint)alpha,0);
      iVar8 = iVar8 + 0x18;
    }
  }
  return;
}

static void MenuPhotoDataWinDisp(int off_x, int off_y, u_char alpha) {
	DISP_SPRT win_ds;
	int i;
	
  short *psVar1;
  SPRT_DAT *pSVar2;
  int iVar3;
  uint uVar4;
  float fVar5;
  float fVar6;
  DISP_SPRT win_ds;
  
  iVar3 = 4;
  fVar5 = (float)off_x;
  fVar6 = (float)off_y;
  PK2SendVram__FUiiii((uint)menu_photo_tex_addr,-1,-1,0);
  pSVar2 = menu_photo;
  do {
    CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&win_ds,pSVar2);
    iVar3 = iVar3 + -1;
    pSVar2 = pSVar2 + 1;
    win_ds.x = win_ds.x + fVar5;
    win_ds.y = win_ds.y + fVar6;
    win_ds.alpha = (uchar)((int)((uint)win_ds.alpha * (uint)alpha) >> 7);
    DispSprD__FP9DISP_SPRT(&win_ds);
  } while (-1 < iVar3);
  iVar3 = 0xe;
  pSVar2 = menu_photo + 0x9a;
  CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&win_ds,menu_photo + 5);
  win_ds.x = win_ds.x + fVar5;
  win_ds.y = win_ds.y + fVar6;
  win_ds.alpha = (uchar)((int)((uint)win_ds.alpha * (uint)alpha) >> 7);
  DispSprD__FP9DISP_SPRT(&win_ds);
  CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&win_ds,menu_photo + 6);
  uVar4 = (uint)alpha;
  win_ds.x = win_ds.x + fVar5;
  win_ds.y = win_ds.y + fVar6;
  win_ds.alpha = (uchar)((int)(win_ds.alpha * uVar4) >> 7);
  DispSprD__FP9DISP_SPRT(&win_ds);
  do {
    CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&win_ds,pSVar2);
    iVar3 = iVar3 + -1;
    pSVar2 = pSVar2 + 1;
    win_ds.x = win_ds.x + fVar5;
    win_ds.y = win_ds.y + fVar6;
    win_ds.alpha = (uchar)((int)(win_ds.alpha * uVar4) >> 7);
    DispSprD__FP9DISP_SPRT(&win_ds);
  } while (-1 < iVar3);
  iVar3 = 3;
  pSVar2 = menu_photo + 0xa9;
  do {
    CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&win_ds,pSVar2);
    psVar1 = &pSVar2->w;
    iVar3 = iVar3 + -1;
    win_ds.crx = win_ds.x + fVar5;
    win_ds.rot = 270.0;
    pSVar2 = pSVar2 + 1;
    win_ds.cry = win_ds.y + fVar6 + (float)(uint)(ushort)*psVar1;
    win_ds.alpha = (uchar)((int)(win_ds.alpha * uVar4) >> 7);
    win_ds.x = win_ds.crx;
    win_ds.y = win_ds.cry;
    DispSprD__FP9DISP_SPRT(&win_ds);
  } while (-1 < iVar3);
  iVar3 = 10;
  pSVar2 = menu_photo + 0xad;
  do {
    CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&win_ds,pSVar2);
    iVar3 = iVar3 + -1;
    pSVar2 = pSVar2 + 1;
    win_ds.x = win_ds.x + fVar5;
    win_ds.y = win_ds.y + fVar6;
    win_ds.alpha = (uchar)((int)(win_ds.alpha * uVar4) >> 7);
    DispSprD__FP9DISP_SPRT(&win_ds);
  } while (-1 < iVar3);
  return;
}

static void MenuPhotoThumbnailDisp(int off_x, int off_y, u_char alpha) {
	int i;
	int sel_num;
	DISP_SPRT photo_ds;
	static int number_tbl[16][2] = {
		/* [0] = */ {
			/* [0] = */ 131,
			/* [1] = */ -1
		},
		/* [1] = */ {
			/* [0] = */ 132,
			/* [1] = */ -1
		},
		/* [2] = */ {
			/* [0] = */ 133,
			/* [1] = */ -1
		},
		/* [3] = */ {
			/* [0] = */ 134,
			/* [1] = */ -1
		},
		/* [4] = */ {
			/* [0] = */ 135,
			/* [1] = */ -1
		},
		/* [5] = */ {
			/* [0] = */ 136,
			/* [1] = */ -1
		},
		/* [6] = */ {
			/* [0] = */ 137,
			/* [1] = */ -1
		},
		/* [7] = */ {
			/* [0] = */ 138,
			/* [1] = */ -1
		},
		/* [8] = */ {
			/* [0] = */ 139,
			/* [1] = */ -1
		},
		/* [9] = */ {
			/* [0] = */ 140,
			/* [1] = */ 141
		},
		/* [10] = */ {
			/* [0] = */ 142,
			/* [1] = */ 143
		},
		/* [11] = */ {
			/* [0] = */ 144,
			/* [1] = */ 145
		},
		/* [12] = */ {
			/* [0] = */ 146,
			/* [1] = */ 147
		},
		/* [13] = */ {
			/* [0] = */ 148,
			/* [1] = */ 149
		},
		/* [14] = */ {
			/* [0] = */ 150,
			/* [1] = */ 151
		},
		/* [15] = */ {
			/* [0] = */ 152,
			/* [1] = */ 153
		}
	};
	static int sel_tbl[16] = {
		/* [0] = */ 115,
		/* [1] = */ 116,
		/* [2] = */ 117,
		/* [3] = */ 118,
		/* [4] = */ 119,
		/* [5] = */ 120,
		/* [6] = */ 121,
		/* [7] = */ 122,
		/* [8] = */ 123,
		/* [9] = */ 124,
		/* [10] = */ 125,
		/* [11] = */ 126,
		/* [12] = */ 127,
		/* [13] = */ 128,
		/* [14] = */ 129,
		/* [15] = */ 130
	};
	static int bg_tbl[16] = {
		/* [0] = */ 83,
		/* [1] = */ 84,
		/* [2] = */ 85,
		/* [3] = */ 86,
		/* [4] = */ 87,
		/* [5] = */ 88,
		/* [6] = */ 89,
		/* [7] = */ 90,
		/* [8] = */ 91,
		/* [9] = */ 92,
		/* [10] = */ 93,
		/* [11] = */ 94,
		/* [12] = */ 95,
		/* [13] = */ 96,
		/* [14] = */ 97,
		/* [15] = */ 98
	};
	
  int iVar1;
  uint uVar2;
  int n;
  uchar no;
  int x;
  int y;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  float fVar7;
  float fVar8;
  DISP_SPRT photo_ds;
  int sel_num;
  
  iVar3 = 0;
  iVar4 = off_y + 0x4a;
  iVar5 = off_y + -0xc6;
  PK2SendVram__FUiiii((uint)menu_photo_tex_addr,-1,-1,0);
  piVar6 = &number_tbl_1033;
  iVar1 = csr_num[menu_photo_ctrl.csr_tate][menu_photo_ctrl.csr_yoko];
  do {
    no = (uchar)iVar3;
    uVar2 = GetFilePhotoState__FUc(no);
    if ((uVar2 & 1) == 0) {
      fVar8 = (float)off_x;
      fVar7 = (float)off_y;
      CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&photo_ds,menu_photo + (&bg_tbl_1035)[iVar3]);
      photo_ds.x = photo_ds.x + fVar8;
      photo_ds.y = photo_ds.y + fVar7;
      photo_ds.alpha = (uchar)((int)((uint)photo_ds.alpha * (uint)alpha) >> 7);
      DispSprD__FP9DISP_SPRT(&photo_ds);
      CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&photo_ds,menu_photo + *piVar6);
      photo_ds.x = photo_ds.x + fVar8;
      photo_ds.y = photo_ds.y + fVar7;
      photo_ds.alpha = (uchar)((int)((uint)photo_ds.alpha * (uint)alpha) >> 7);
      DispSprD__FP9DISP_SPRT(&photo_ds);
      if (piVar6[1] != -1) {
        CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&photo_ds,menu_photo + piVar6[1]);
        photo_ds.x = photo_ds.x + fVar8;
        photo_ds.y = photo_ds.y + fVar7;
        photo_ds.alpha = (uchar)((int)((uint)photo_ds.alpha * (uint)alpha) >> 7);
        DispSprD__FP9DISP_SPRT(&photo_ds);
      }
    }
    else {
      if (iVar3 < 8) {
        n = GetFilePhotoAdrNo__FUc(no);
        x = off_x + 0x20;
        y = iVar4;
      }
      else {
        n = GetFilePhotoAdrNo__FUc(no);
        x = off_x + 0x57;
        y = iVar5;
      }
      DrawSPhotoFromSmallPhotoArea2__FiiiiiiiUc(n,0,0,x,y,0x2d,0x1e,alpha);
    }
    if (iVar3 == iVar1) {
      CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&photo_ds,menu_photo + (&sel_tbl_1034)[iVar3]);
      photo_ds.x = photo_ds.x + (float)off_x;
      photo_ds.y = photo_ds.y + (float)off_y;
      photo_ds.alphar = 0x48;
      photo_ds.alpha = (uchar)((int)((uint)photo_ds.alpha * (uint)alpha) >> 7);
      if (menu_photo_ctrl.step == '\0') {
        photo_ds.b = menu_photo_ctrl.rgb;
        photo_ds.r = menu_photo_ctrl.rgb;
        photo_ds.g = menu_photo_ctrl.rgb;
      }
      DispSprD__FP9DISP_SPRT(&photo_ds);
    }
    iVar3 = iVar3 + 1;
    piVar6 = piVar6 + 2;
    iVar5 = iVar5 + 0x22;
    iVar4 = iVar4 + 0x22;
  } while (iVar3 < 0x10);
  return;
}

static void MenuPhotoProtectCsr(int off_x, int off_y, u_char alpha) {
	int i;
	DISP_SPRT photo_ds;
	static int protect_tbl[16] = {
		/* [0] = */ 99,
		/* [1] = */ 100,
		/* [2] = */ 101,
		/* [3] = */ 102,
		/* [4] = */ 103,
		/* [5] = */ 104,
		/* [6] = */ 105,
		/* [7] = */ 106,
		/* [8] = */ 107,
		/* [9] = */ 108,
		/* [10] = */ 109,
		/* [11] = */ 110,
		/* [12] = */ 111,
		/* [13] = */ 112,
		/* [14] = */ 113,
		/* [15] = */ 114
	};
	
  uchar no;
  uint uVar1;
  int iVar2;
  int *piVar3;
  DISP_SPRT photo_ds;
  
  iVar2 = 0;
  PK2SendVram__FUiiii((uint)menu_photo_tex_addr,-1,-1,0);
  piVar3 = &protect_tbl_1039;
  do {
    no = (uchar)iVar2;
    iVar2 = iVar2 + 1;
    uVar1 = GetFilePhotoState__FUc(no);
    if ((uVar1 & 2) != 0) {
      CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&photo_ds,menu_photo + *piVar3);
      photo_ds.x = photo_ds.x + (float)off_x;
      photo_ds.y = photo_ds.y + (float)off_y;
      photo_ds.alpha = (uchar)((int)((uint)photo_ds.alpha * (uint)alpha) >> 7);
      DispSprD__FP9DISP_SPRT(&photo_ds);
    }
    piVar3 = piVar3 + 1;
  } while (iVar2 < 0x10);
  return;
}

static void MenuPhotoLargePhotoWinDisp(int off_x, int off_y, u_char alpha) {
	DISP_SPRT win_ds;
	int i;
	DISP_SQAR dsq;
	SQAR_DAT win_bg;
	SQAR_DAT photo_bg;
	static int number_tbl[16][2] = {
		/* [0] = */ {
			/* [0] = */ 46,
			/* [1] = */ -1
		},
		/* [1] = */ {
			/* [0] = */ 47,
			/* [1] = */ -1
		},
		/* [2] = */ {
			/* [0] = */ 48,
			/* [1] = */ -1
		},
		/* [3] = */ {
			/* [0] = */ 49,
			/* [1] = */ -1
		},
		/* [4] = */ {
			/* [0] = */ 50,
			/* [1] = */ -1
		},
		/* [5] = */ {
			/* [0] = */ 51,
			/* [1] = */ -1
		},
		/* [6] = */ {
			/* [0] = */ 52,
			/* [1] = */ -1
		},
		/* [7] = */ {
			/* [0] = */ 53,
			/* [1] = */ -1
		},
		/* [8] = */ {
			/* [0] = */ 54,
			/* [1] = */ -1
		},
		/* [9] = */ {
			/* [0] = */ 55,
			/* [1] = */ 56
		},
		/* [10] = */ {
			/* [0] = */ 57,
			/* [1] = */ 58
		},
		/* [11] = */ {
			/* [0] = */ 59,
			/* [1] = */ 60
		},
		/* [12] = */ {
			/* [0] = */ 61,
			/* [1] = */ 62
		},
		/* [13] = */ {
			/* [0] = */ 63,
			/* [1] = */ 64
		},
		/* [14] = */ {
			/* [0] = */ 65,
			/* [1] = */ 66
		},
		/* [15] = */ {
			/* [0] = */ 67,
			/* [1] = */ 68
		}
	};
	int sel_num;
	
  undefined *puVar1;
  ulong *puVar2;
  uchar *puVar3;
  int iVar4;
  int iVar5;
  SPRT_DAT *pSVar6;
  uint uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  DISP_SPRT win_ds;
  DISP_SQAR dsq;
  SQAR_DAT win_bg;
  SQAR_DAT photo_bg;
  
  fVar9 = (float)off_x;
  fVar10 = (float)off_y;
  puVar1 = (undefined *)((int)&win_bg.h + 3);
  uVar7 = (uint)puVar1 & 7;
  puVar2 = (ulong *)(puVar1 + -uVar7);
  *puVar2 = *puVar2 & -1L << (uVar7 + 1) * 8 | DAT_003be790 >> (7 - uVar7) * 8;
  win_bg._0_8_ = DAT_003be790;
  puVar1 = (undefined *)((int)&win_bg.y + 3);
  uVar7 = (uint)puVar1 & 7;
  puVar2 = (ulong *)(puVar1 + -uVar7);
  *puVar2 = *puVar2 & -1L << (uVar7 + 1) * 8 | DAT_003be798 >> (7 - uVar7) * 8;
  win_bg._8_8_ = DAT_003be798;
  uVar7 = (uint)&win_bg.alpha & 7;
  puVar3 = &win_bg.alpha + -uVar7;
  *(ulong *)puVar3 = *(ulong *)puVar3 & -1L << (uVar7 + 1) * 8 | DAT_003be7a0 >> (7 - uVar7) * 8;
  win_bg._16_8_ = DAT_003be7a0;
  puVar1 = (undefined *)((int)&photo_bg.h + 3);
  uVar7 = (uint)puVar1 & 7;
  puVar2 = (ulong *)(puVar1 + -uVar7);
  *puVar2 = *puVar2 & -1L << (uVar7 + 1) * 8 | DAT_003be7a8 >> (7 - uVar7) * 8;
  photo_bg._0_8_ = DAT_003be7a8;
  puVar1 = (undefined *)((int)&photo_bg.y + 3);
  uVar7 = (uint)puVar1 & 7;
  puVar2 = (ulong *)(puVar1 + -uVar7);
  *puVar2 = *puVar2 & -1L << (uVar7 + 1) * 8 | DAT_003be7b0 >> (7 - uVar7) * 8;
  photo_bg._8_8_ = DAT_003be7b0;
  uVar7 = (uint)&photo_bg.alpha & 7;
  puVar3 = &photo_bg.alpha + -uVar7;
  *(ulong *)puVar3 = *(ulong *)puVar3 & -1L << (uVar7 + 1) * 8 | DAT_003be7b8 >> (7 - uVar7) * 8;
  photo_bg._16_8_ = DAT_003be7b8;
  PK2SendVram__FUiiii((uint)menu_photo_tex_addr,-1,-1,0);
  iVar5 = csr_num[menu_photo_ctrl.csr_tate][menu_photo_ctrl.csr_yoko];
  iVar4 = 0xb;
  CopySqrDToSqr__FP9DISP_SQARP8SQAR_DAT(&dsq,&win_bg);
  dsq.alpha = '\0';
  DispSqrD__FP9DISP_SQAR(&dsq);
  pSVar6 = menu_photo + 7;
  do {
    CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&win_ds,pSVar6);
    iVar4 = iVar4 + -1;
    pSVar6 = pSVar6 + 1;
    win_ds.x = win_ds.x + fVar9;
    win_ds.y = win_ds.y + fVar10;
    win_ds.alpha = (uchar)((int)((uint)win_ds.alpha * (uint)alpha) >> 7);
    DispSprD__FP9DISP_SPRT(&win_ds);
  } while (-1 < iVar4);
  CopySqrDToSqr__FP9DISP_SQARP8SQAR_DAT(&dsq,&photo_bg);
  uVar7 = (uint)alpha;
  iVar4 = 2;
  dsq.alpha = (uchar)((int)(((uint)alpha * 2 + uVar7) * 0x11) >> 7);
  DispSqrD__FP9DISP_SQAR(&dsq);
  pSVar6 = menu_photo + 0x45;
  do {
    CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&win_ds,pSVar6);
    iVar4 = iVar4 + -1;
    pSVar6 = pSVar6 + 1;
    win_ds.x = win_ds.x + fVar9;
    win_ds.y = win_ds.y + fVar10;
    win_ds.alpha = (uchar)((int)(win_ds.alpha * uVar7) >> 7);
    DispSprD__FP9DISP_SPRT(&win_ds);
  } while (-1 < iVar4);
  CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&win_ds,menu_photo + 0x48);
  win_ds.csx = win_ds.x + fVar9;
  win_ds.csy = win_ds.y + fVar10;
  win_ds.scw = 1.0;
  win_ds.alpha = (uchar)((int)(win_ds.alpha * uVar7) >> 7);
  if ((int)win_ds.h < 0) {
    fVar8 = (float)(win_ds.h & 1 | win_ds.h >> 1);
    fVar8 = fVar8 + fVar8;
  }
  else {
    fVar8 = (float)win_ds.h;
  }
  win_ds.sch = 239.0 / fVar8;
  win_ds.x = win_ds.csx;
  win_ds.y = win_ds.csy;
  DispSprD__FP9DISP_SPRT(&win_ds);
  CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&win_ds,menu_photo + 0x49);
  win_ds.csx = win_ds.x + fVar9;
  win_ds.csy = win_ds.y + fVar10;
  win_ds.alpha = (uchar)((int)(win_ds.alpha * uVar7) >> 7);
  if ((int)win_ds.w < 0) {
    fVar8 = (float)(win_ds.w & 1 | win_ds.w >> 1);
    fVar8 = fVar8 + fVar8;
  }
  else {
    fVar8 = (float)win_ds.w;
  }
  iVar4 = 2;
  win_ds.scw = DAT_003ee588 / fVar8;
  win_ds.sch = 1.0;
  win_ds.x = win_ds.csx;
  win_ds.y = win_ds.csy;
  DispSprD__FP9DISP_SPRT(&win_ds);
  pSVar6 = menu_photo + 0x4a;
  do {
    CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&win_ds,pSVar6);
    iVar4 = iVar4 + -1;
    pSVar6 = pSVar6 + 1;
    uVar7 = (uint)alpha;
    win_ds.x = win_ds.x + fVar9;
    win_ds.y = win_ds.y + fVar10;
    win_ds.alpha = (uchar)((int)(win_ds.alpha * uVar7) >> 7);
    DispSprD__FP9DISP_SPRT(&win_ds);
  } while (-1 < iVar4);
  CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&win_ds,menu_photo + 0x4e);
  win_ds.csx = win_ds.x + fVar9;
  win_ds.csy = win_ds.y + fVar10;
  win_ds.scw = 1.0;
  win_ds.alpha = (uchar)((int)(win_ds.alpha * uVar7) >> 7);
  if ((int)win_ds.h < 0) {
    fVar8 = (float)(win_ds.h & 1 | win_ds.h >> 1);
    fVar8 = fVar8 + fVar8;
  }
  else {
    fVar8 = (float)win_ds.h;
  }
  win_ds.sch = 239.0 / fVar8;
  win_ds.x = win_ds.csx;
  win_ds.y = win_ds.csy;
  DispSprD__FP9DISP_SPRT(&win_ds);
  CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&win_ds,menu_photo + 0x4d);
  win_ds.csx = win_ds.x + fVar9;
  win_ds.csy = win_ds.y + fVar10;
  win_ds.alpha = (uchar)((int)(win_ds.alpha * uVar7) >> 7);
  if ((int)win_ds.w < 0) {
    fVar8 = (float)(win_ds.w & 1 | win_ds.w >> 1);
    fVar8 = fVar8 + fVar8;
  }
  else {
    fVar8 = (float)win_ds.w;
  }
  iVar4 = 1;
  win_ds.scw = DAT_003ee58c / fVar8;
  win_ds.sch = 1.0;
  win_ds.x = win_ds.csx;
  win_ds.y = win_ds.csy;
  DispSprD__FP9DISP_SPRT(&win_ds);
  pSVar6 = menu_photo + 0x2b;
  do {
    CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&win_ds,pSVar6);
    iVar4 = iVar4 + -1;
    pSVar6 = pSVar6 + 1;
    win_ds.x = win_ds.x + fVar9;
    win_ds.y = win_ds.y + fVar10;
    win_ds.alpha = (uchar)((int)(win_ds.alpha * uVar7) >> 7);
    DispSprD__FP9DISP_SPRT(&win_ds);
  } while (-1 < iVar4);
  CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&win_ds,menu_photo + 0x2d);
  iVar5 = iVar5 * 8;
  win_ds.x = win_ds.x + fVar9;
  win_ds.y = win_ds.y + fVar10;
  win_ds.alpha = (uchar)((int)(win_ds.alpha * uVar7) >> 7);
  DispSprD__FP9DISP_SPRT(&win_ds);
  CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&win_ds,menu_photo + *(int *)(number_tbl_1043 + iVar5));
  win_ds.x = win_ds.x + fVar9;
  win_ds.y = win_ds.y + fVar10;
  win_ds.alpha = (uchar)((int)(win_ds.alpha * uVar7) >> 7);
  DispSprD__FP9DISP_SPRT(&win_ds);
  if (*(int *)(number_tbl_1043 + iVar5 + 4) != -1) {
    CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT
              (&win_ds,menu_photo + *(int *)(number_tbl_1043 + iVar5 + 4));
    win_ds.x = win_ds.x + fVar9;
    win_ds.y = win_ds.y + fVar10;
    win_ds.alpha = (uchar)((int)(win_ds.alpha * uVar7) >> 7);
    DispSprD__FP9DISP_SPRT(&win_ds);
  }
  return;
}

static void MenuPhotoLargePhotoDisp(int off_x, int off_y, u_char alpha) {
	int sel_num;
	
  uint uVar1;
  int n;
  uchar no;
  
  PK2SendVram__FUiiii((uint)menu_photo_tex_addr,-1,-1,0);
  if (menu_photo_ctrl.photo_flg == '\0') {
    no = (uchar)csr_num[menu_photo_ctrl.csr_tate][menu_photo_ctrl.csr_yoko];
    uVar1 = GetFilePhotoState__FUc(no);
    if ((uVar1 & 1) != 0) {
      n = GetFilePhotoAdrNo__FUc(no);
      UncompressPhoto__Fi(n);
      menu_photo_ctrl.photo_flg = '\x01';
    }
  }
  if (menu_photo_ctrl.photo_flg == '\x01') {
    DrawPhotoFromWorkArea__FiiiiiiUc(0xa0,1,0xb5,0x4e,0x180,0x100,alpha);
  }
  return;
}

static void MenuPhotoLargeProtectDisp(int off_x, int off_y, u_char alpha) {
	DISP_SPRT protect_ds;
	int i;
	
  uint uVar1;
  int iVar2;
  SPRT_DAT *d;
  float fVar3;
  DISP_SPRT protect_ds;
  
  PK2SendVram__FUiiii((uint)menu_photo_tex_addr,-1,-1,0);
  uVar1 = GetFilePhotoState__FUc
                    (*(uchar *)(csr_num[menu_photo_ctrl.csr_tate] + menu_photo_ctrl.csr_yoko));
  if ((uVar1 & 2) != 0) {
    fVar3 = (float)off_x;
    iVar2 = 3;
    d = menu_photo + 0x4f;
    do {
      CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&protect_ds,d);
      iVar2 = iVar2 + -1;
      d = d + 1;
      protect_ds.x = protect_ds.x + fVar3;
      protect_ds.y = protect_ds.y + (float)off_y;
      protect_ds.alpha = (uchar)((int)((uint)protect_ds.alpha * (uint)alpha) >> 7);
      DispSprD__FP9DISP_SPRT(&protect_ds);
    } while (-1 < iVar2);
  }
  return;
}

static void MenuPhotoCaptionDisp(int off_x, int off_y, u_char alpha) {
  DrawCmnCapGroup_W__FiiUcUi(0xd,0xd,alpha,0);
  return;
}

static void MenuPhotoSubMenuDisp(int off_x, int off_y, u_char alpha) {
	DISP_SPRT sub_ds;
	int i;
	static int sel_tbl[3][2] = {
		/* [0] = */ {
			/* [0] = */ 195,
			/* [1] = */ 196
		},
		/* [1] = */ {
			/* [0] = */ 197,
			/* [1] = */ 198
		},
		/* [2] = */ {
			/* [0] = */ 199,
			/* [1] = */ 200
		}
	};
	static int not_sel_tbl[3][2] = {
		/* [0] = */ {
			/* [0] = */ 201,
			/* [1] = */ 202
		},
		/* [1] = */ {
			/* [0] = */ 203,
			/* [1] = */ 204
		},
		/* [2] = */ {
			/* [0] = */ 205,
			/* [1] = */ 206
		}
	};
	static SCL_ANIM_TBL sel_scl_tbl[2] = {
		/* [0] = */ {
			/* .start_scl = */ 0.f,
			/* .end_scl = */ 1.f,
			/* .start_time = */ 0,
			/* .end_time = */ 10
		},
		/* [1] = */ {
			/* .start_scl = */ -1.f,
			/* .end_scl = */ -1.f,
			/* .start_time = */ -1,
			/* .end_time = */ -1
		}
	};
	static SCL_ANIM_TBL non_sel_scl_tbl[2] = {
		/* [0] = */ {
			/* .start_scl = */ 0.f,
			/* .end_scl = */ 0.909999967f,
			/* .start_time = */ 0,
			/* .end_time = */ 10
		},
		/* [1] = */ {
			/* .start_scl = */ -1.f,
			/* .end_scl = */ -1.f,
			/* .start_time = */ -1,
			/* .end_time = */ -1
		}
	};
	static ALPHA_ANIM_TBL alpha_tbl[2] = {
		/* [0] = */ {
			/* .start_alpha = */ 0,
			/* .end_alpha = */ 128,
			/* .start_time = */ 0,
			/* .end_time = */ 10
		},
		/* [1] = */ {
			/* .start_alpha = */ -1,
			/* .end_alpha = */ -1,
			/* .start_time = */ -1,
			/* .end_time = */ -1
		}
	};
	float sel_scale;
	float non_sel_scale;
	u_char now_alpha;
	
  uchar uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  SPRT_DAT *d;
  int iVar5;
  long lVar6;
  int *piVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  DISP_SPRT sub_ds;
  
  iVar2 = 0x80;
  PK2SendVram__FUiiii(0x19368c0,-1,-1,0);
  fVar8 = 1.0;
  if (menu_photo_ctrl.sub_anim_step == '\0') {
    menu_photo_ctrl.sub_anim_timer = '\0';
    menu_photo_ctrl.sub_anim_step = '\x01';
  }
  fVar9 = DAT_003ee590;
  if (menu_photo_ctrl.sub_anim_step == '\x01') {
    fVar8 = Anim2D_CalcNowScale__FPC12SCL_ANIM_TBLi
                      ((SCL_ANIM_TBL *)sel_scl_tbl_1058,(int)menu_photo_ctrl.sub_anim_timer);
    fVar9 = Anim2D_CalcNowScale__FPC12SCL_ANIM_TBLi
                      ((SCL_ANIM_TBL *)non_sel_scl_tbl_1059,(int)menu_photo_ctrl.sub_anim_timer);
    uVar1 = Anim2D_CalcNowAlpha__FPC14ALPHA_ANIM_TBLi
                      ((ALPHA_ANIM_TBL *)alpha_tbl_1060,(int)menu_photo_ctrl.sub_anim_timer);
    iVar2 = (int)(char)uVar1;
    menu_photo_ctrl.sub_anim_timer = menu_photo_ctrl.sub_anim_timer + '\x01';
    if ('\t' < menu_photo_ctrl.sub_anim_timer) {
      menu_photo_ctrl.sub_anim_step = '\x02';
    }
  }
  if (menu_photo_ctrl.sub_anim_step == '\x03') {
    menu_photo_ctrl.sub_anim_timer = menu_photo_ctrl.sub_anim_timer + -1;
    uVar1 = Anim2D_CalcNowAlpha__FPC14ALPHA_ANIM_TBLi
                      ((ALPHA_ANIM_TBL *)alpha_tbl_1060,(int)menu_photo_ctrl.sub_anim_timer);
    iVar2 = (int)(char)uVar1;
    if (menu_photo_ctrl.sub_anim_timer < '\x01') {
      menu_photo_ctrl.step = '\0';
      menu_photo_ctrl.sub_anim_step = '\x04';
    }
  }
  fVar11 = (float)off_x;
  fVar12 = (float)off_y;
  lVar6 = 0;
  piVar7 = &not_sel_tbl_1057;
  piVar4 = &sel_tbl_1056;
  do {
    if (menu_photo_ctrl.sub_csr == lVar6) {
      CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&sub_ds,menu_photo + *piVar4);
      iVar5 = (uint)sub_ds.alpha * iVar2;
      sub_ds.x = sub_ds.x + fVar11;
      sub_ds.csy = sub_ds.y + fVar12;
      if (iVar5 < 0) {
        iVar5 = iVar5 + 0x7f;
      }
      sub_ds.alpha = (uchar)(iVar5 >> 7);
      if (menu_photo_ctrl.step == '\x01') {
        sub_ds.b = menu_photo_ctrl.rgb;
        sub_ds.r = menu_photo_ctrl.rgb;
        sub_ds.g = menu_photo_ctrl.rgb;
      }
      sub_ds.sch = 1.0;
      if ((int)sub_ds.w < 0) {
        fVar10 = (float)(sub_ds.w & 1 | sub_ds.w >> 1);
        fVar10 = fVar10 + fVar10;
      }
      else {
        fVar10 = (float)sub_ds.w;
      }
      sub_ds.csx = sub_ds.x + fVar10;
      sub_ds.y = sub_ds.csy;
      sub_ds.scw = fVar8;
      DispSprD__FP9DISP_SPRT(&sub_ds);
      CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&sub_ds,menu_photo + piVar4[1]);
      iVar5 = (uint)sub_ds.alpha * iVar2;
      sub_ds.csx = sub_ds.x + fVar11;
      sub_ds.csy = sub_ds.y + fVar12;
      if (iVar5 < 0) {
        iVar5 = iVar5 + 0x7f;
      }
      sub_ds.alpha = (uchar)(iVar5 >> 7);
      if (menu_photo_ctrl.step == '\x01') {
        sub_ds.b = menu_photo_ctrl.rgb;
        sub_ds.r = menu_photo_ctrl.rgb;
        sub_ds.g = menu_photo_ctrl.rgb;
      }
      sub_ds.sch = 1.0;
      sub_ds.x = sub_ds.csx;
      sub_ds.y = sub_ds.csy;
      sub_ds.scw = fVar8;
      DispSprD__FP9DISP_SPRT(&sub_ds);
    }
    else {
      CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&sub_ds,menu_photo + *piVar7);
      iVar5 = (uint)sub_ds.alpha * iVar2;
      sub_ds.x = sub_ds.x + fVar11;
      sub_ds.csy = sub_ds.y + fVar12;
      sub_ds.sch = 1.0;
      if (iVar5 < 0) {
        iVar5 = iVar5 + 0x7f;
      }
      sub_ds.alpha = (uchar)(iVar5 >> 7);
      if ((int)sub_ds.w < 0) {
        fVar10 = (float)(sub_ds.w & 1 | sub_ds.w >> 1);
        fVar10 = fVar10 + fVar10;
      }
      else {
        fVar10 = (float)sub_ds.w;
      }
      sub_ds.csx = sub_ds.x + fVar10;
      sub_ds.y = sub_ds.csy;
      sub_ds.scw = fVar9;
      DispSprD__FP9DISP_SPRT(&sub_ds);
      CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&sub_ds,menu_photo + piVar7[1]);
      iVar5 = (uint)sub_ds.alpha * iVar2;
      sub_ds.csx = sub_ds.x + fVar11;
      sub_ds.csy = sub_ds.y + fVar12;
      sub_ds.sch = 1.0;
      if (iVar5 < 0) {
        iVar5 = iVar5 + 0x7f;
      }
      sub_ds.alpha = (uchar)(iVar5 >> 7);
      sub_ds.x = sub_ds.csx;
      sub_ds.y = sub_ds.csy;
      sub_ds.scw = fVar9;
      DispSprD__FP9DISP_SPRT(&sub_ds);
    }
    lVar6 = (long)((int)lVar6 + 1);
    piVar7 = piVar7 + 2;
    piVar4 = piVar4 + 2;
  } while (lVar6 < 3);
  PK2SendVram__FUiiii((uint)menu_photo_tex_addr,-1,-1,0);
  iVar5 = 2;
  d = menu_photo + 0xbc;
  do {
    iVar5 = iVar5 + -1;
    CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&sub_ds,d);
    iVar3 = (uint)sub_ds.alpha * iVar2;
    sub_ds.x = sub_ds.x + fVar11;
    sub_ds.y = sub_ds.y + fVar12;
    if (iVar3 < 0) {
      iVar3 = iVar3 + 0x7f;
    }
    sub_ds.alpha = (uchar)(iVar3 >> 7);
    DispSprD__FP9DISP_SPRT(&sub_ds);
    d = d + 1;
  } while (-1 < iVar5);
  return;
}

static void MenuPhotoDelConfirmDisp(int off_x, int off_y, u_char alpha) {
  MenuCmnYesNoWinDisp__FiiUcUi(0,0,alpha,0x80);
  PrintMsg__Fiiiiiii(0x38,0,0x44,0xc6,1,(uint)alpha,0x80);
  return;
}

static void MenuPhotoNotDelWinDisp(int off_x, int off_y, u_char alpha) {
  MenuCmnConfirmWinDisp__FiiUcUi(0,0,alpha,0x80);
  PrintMsg__Fiiiiiii(0x38,1,0x44,0xc6,1,(uint)alpha,0x80);
  return;
}

static void MenuPhotoSortMenuDisp(int off_x, int off_y, u_char alpha) {
	DISP_SPRT sub_ds;
	int i;
	static int sel_tbl[3][2] = {
		/* [0] = */ {
			/* [0] = */ 209,
			/* [1] = */ 210
		},
		/* [1] = */ {
			/* [0] = */ 211,
			/* [1] = */ 212
		},
		/* [2] = */ {
			/* [0] = */ 213,
			/* [1] = */ 214
		}
	};
	static int not_sel_tbl[3][2] = {
		/* [0] = */ {
			/* [0] = */ 215,
			/* [1] = */ 216
		},
		/* [1] = */ {
			/* [0] = */ 217,
			/* [1] = */ 218
		},
		/* [2] = */ {
			/* [0] = */ 219,
			/* [1] = */ 220
		}
	};
	
  float fVar1;
  SPRT_DAT *pSVar2;
  int *piVar3;
  int iVar4;
  long lVar5;
  uint uVar6;
  int *piVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  DISP_SPRT sub_ds;
  
  iVar4 = 1;
  fVar12 = (float)off_x;
  fVar9 = (float)off_y;
  PK2SendVram__FUiiii(0x19368c0,-1,-1,0);
  pSVar2 = menu_photo + 0xcf;
  do {
    CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&sub_ds,pSVar2);
    iVar4 = iVar4 + -1;
    pSVar2 = pSVar2 + 1;
    sub_ds.x = sub_ds.x + fVar12;
    sub_ds.y = sub_ds.y + fVar9;
    sub_ds.alpha = (uchar)((int)((uint)sub_ds.alpha * (uint)alpha) >> 7);
    DispSprD__FP9DISP_SPRT(&sub_ds);
    fVar1 = DAT_003ee594;
  } while (-1 < iVar4);
  piVar7 = &not_sel_tbl_1071;
  piVar3 = &sel_tbl_1070;
  lVar5 = 0;
  fVar8 = fVar12;
  fVar10 = fVar9;
  fVar11 = DAT_003ee598;
  do {
    uVar6 = (uint)alpha;
    if (menu_photo_ctrl.sort_csr == lVar5) {
      CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&sub_ds,menu_photo + *piVar3);
      sub_ds.csx = sub_ds.x + fVar8;
      sub_ds.b = menu_photo_ctrl.rgb;
      sub_ds.csy = sub_ds.y + fVar9;
      sub_ds.r = menu_photo_ctrl.rgb;
      sub_ds.g = menu_photo_ctrl.rgb;
      sub_ds.scw = fVar1;
      sub_ds.alpha = (uchar)((int)((uint)sub_ds.alpha * (uint)alpha) >> 7);
      sub_ds.sch = 1.0;
      sub_ds.alphar = 0x48;
      sub_ds.x = sub_ds.csx;
      sub_ds.y = sub_ds.csy;
      DispSprD__FP9DISP_SPRT(&sub_ds);
      CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&sub_ds,menu_photo + piVar3[1]);
      sub_ds.csx = sub_ds.x + fVar8;
      sub_ds.b = menu_photo_ctrl.rgb;
      sub_ds.csy = sub_ds.y + fVar9;
      sub_ds.scw = fVar1;
      sub_ds.sch = 1.0;
      sub_ds.alphar = 0x48;
      sub_ds.alpha = (uchar)((int)(sub_ds.alpha * uVar6) >> 7);
      sub_ds.r = menu_photo_ctrl.rgb;
      sub_ds.g = menu_photo_ctrl.rgb;
      sub_ds.x = sub_ds.csx;
      sub_ds.y = sub_ds.csy;
      DispSprD__FP9DISP_SPRT(&sub_ds);
    }
    else {
      CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&sub_ds,menu_photo + *piVar7);
      sub_ds.csx = sub_ds.x + fVar8;
      sub_ds.csy = sub_ds.y + fVar9;
      sub_ds.sch = 1.0;
      sub_ds.alpha = (uchar)((int)(sub_ds.alpha * uVar6) >> 7);
      sub_ds.x = sub_ds.csx;
      sub_ds.y = sub_ds.csy;
      sub_ds.scw = fVar11;
      DispSprD__FP9DISP_SPRT(&sub_ds);
      CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&sub_ds,menu_photo + piVar7[1]);
      sub_ds.csx = sub_ds.x + fVar8;
      sub_ds.csy = sub_ds.y + fVar9;
      sub_ds.sch = 1.0;
      sub_ds.alpha = (uchar)((int)(sub_ds.alpha * uVar6) >> 7);
      sub_ds.x = sub_ds.csx;
      sub_ds.y = sub_ds.csy;
      sub_ds.scw = fVar11;
      DispSprD__FP9DISP_SPRT(&sub_ds);
    }
    lVar5 = (long)((int)lVar5 + 1);
    piVar7 = piVar7 + 2;
    piVar3 = piVar3 + 2;
  } while (lVar5 < 3);
  PK2SendVram__FUiiii((uint)menu_photo_tex_addr,-1,-1,0);
  pSVar2 = menu_photo + 0xbf;
  iVar4 = 3;
  do {
    CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&sub_ds,pSVar2);
    iVar4 = iVar4 + -1;
    pSVar2 = pSVar2 + 1;
    sub_ds.x = sub_ds.x + fVar12;
    sub_ds.alphar = 0x48;
    sub_ds.y = sub_ds.y + fVar10;
    sub_ds.alpha = (uchar)((int)(sub_ds.alpha * uVar6) >> 7);
    DispSprD__FP9DISP_SPRT(&sub_ds);
  } while (-1 < iVar4);
  return;
}

static void MenuPhotoNotHaveDisp(int off_x, int off_y, u_char alpha) {
	DISP_STR msg_data;
	MSG_WIN_DAT msg_win;
	
  DISP_STR msg_data;
  MSG_WIN_DAT msg_win;
  
  SetMsgDefData__FP8DISP_STRi(&msg_data,0x36);
  SetMsgWinDefData__FP11MSG_WIN_DATi(&msg_win,0x36);
  DrawCmnWindow__FUiffffUcUc(0,msg_win.x,msg_win.y,msg_win.w,msg_win.h,alpha,'f');
  PrintMsg__Fiiiiiii(0x36,1,msg_data.pos_x,msg_data.pos_y,1,(uint)alpha,0);
  DrawCmnCapGroup_W__FiiUcUi(0xc,0xc,alpha,0);
  return;
}

PICTURE_SUBJECT* _PICTURE_SUBJECT * _fixed_array_verifyrange<_PICTURE_SUBJECT>(size_t v, size_t _max) {
  g3ddbgAssert__FbPCce(false,str_646);
  return (type_info *)v;
}

type_info& _PICTURE_SUBJECT type_info function() {
  g3ddbgAssert__FbPCce(false,str_646);
  return (type_info *)v;
}
