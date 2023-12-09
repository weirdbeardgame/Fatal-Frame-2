// STATUS: NOT STARTED

#include "album_edit.h"

typedef struct {
	char step;
	char sub_step;
	char mode;
	char next_mode;
	char photo_flg;
	char menu_csr;
	char sort_csr;
	char sort_flg;
	char conf_csr;
} ALBUM_EDIT_CTRL;

typedef struct {
	char anim_step;
	char anim_timer;
	char menu_anim_step;
	char menu_anim_timer;
	char sort_anim_step;
	char sort_anim_timer;
	char copy_csr_timer;
	char del_csr_timer;
	char album_flare_timer;
} ALBUM_EDIT_DISP;

typedef struct {
	char album_data;
	char copy_photo_no;
	char photo_no;
	char short_cut_flg;
} ALBUM_COPY_CTRL;

static void (*album_edit_mode_init_func[10])(/* parameters unknown */) = {
	/* [0] = */ AlbumEditTopInit,
	/* [1] = */ NULL,
	/* [2] = */ NULL,
	/* [3] = */ AlbumEditCopyPosSelInit,
	/* [4] = */ AlbumEditCopyConfInit,
	/* [5] = */ AlbumEditConfInit,
	/* [6] = */ AlbumEditConfInit,
	/* [7] = */ AlbumSaveCtrlInit,
	/* [8] = */ AlbumLoadCtrlInit,
	/* [9] = */ AlbumEditConfInit
};

static void (*album_edit_mode_func[10])(/* parameters unknown */) = {
	/* [0] = */ AlbumEditModeTop,
	/* [1] = */ AlbumEditModeMenu,
	/* [2] = */ AlbumEditSortPad,
	/* [3] = */ AlbumEditCopyPosSelMain,
	/* [4] = */ AlbumEditCopyConfPad,
	/* [5] = */ AlbumEditDelConfPad,
	/* [6] = */ AlbumEditLoadConfPad,
	/* [7] = */ AlbumEditModeSave,
	/* [8] = */ AlbumEditModeLoad,
	/* [9] = */ AlbumEditExitConfPad
};

static void (*album_edit_mode_end_func[10])(/* parameters unknown */) = {
	/* [0] = */ NULL,
	/* [1] = */ NULL,
	/* [2] = */ NULL,
	/* [3] = */ NULL,
	/* [4] = */ NULL,
	/* [5] = */ NULL,
	/* [6] = */ NULL,
	/* [7] = */ AlbumSaveEnd,
	/* [8] = */ AlbumLoadEnd,
	/* [9] = */ NULL
};

static void (*album_edit_mode_disp[10])(/* parameters unknown */) = {
	/* [0] = */ AlbumEditTopDisp,
	/* [1] = */ AlbumEditTopMenuDisp,
	/* [2] = */ AlbumEditSortDisp,
	/* [3] = */ AlbumEditCopyPosSelDisp,
	/* [4] = */ AlbumEditCopyConfDisp,
	/* [5] = */ AlbumEditDelConfDisp,
	/* [6] = */ AlbumEditLoadConfDisp,
	/* [7] = */ AlbumEditSaveDisp,
	/* [8] = */ AlbumEditLoadDisp,
	/* [9] = */ AlbumEditExitConfDisp
};

unsigned char ALBUM_INFO type_info node[8];
unsigned char PICTURE_WRK type_info node[8];
unsigned char _PICTURE_SUBJECT type_info node[8];
static ALBUM_EDIT_CTRL album_edit_ctrl;
static ALBUM_EDIT_DISP album_edit_disp;
static ALBUM_COPY_CTRL album_copy_ctrl;

static void _fixed_array_assert(char *strType, size_t v0, size_t v1) {
	static char *str = 0x3a08d0;
	
  g3ddbgAssert__FbPCce(false,str_646);
  return (type_info *)v;
}

static void** void * * _fixed_array_verifyrange<void *>(size_t v, size_t _max) {
  if (_max <= v) {
    __tf16_PICTURE_SUBJECT(0x3ef388,_max);
  }
  return (void **)0x0;
}

static char** char * * _fixed_array_verifyrange<char *>(size_t v, size_t _max) {
  if (_max <= v) {
    __tf16_PICTURE_SUBJECT(0x3ef390,_max);
  }
  return (char **)0x0;
}

static unsigned int** unsigned int * * _fixed_array_verifyrange<unsigned int *>(size_t v, size_t _max) {
  if (_max <= v) {
    __tf16_PICTURE_SUBJECT(0x3a0918,_max);
  }
  return (uint **)0x0;
}

void AlbumEditCtrlInit() {
  album_edit_ctrl.step = '\0';
  album_edit_ctrl.sub_step = '\0';
  album_edit_ctrl.mode = '\0';
  album_edit_ctrl.next_mode = '\0';
  AlbumEditUncompressPhotoReq__Fv();
  album_edit_ctrl.menu_csr = '\0';
  album_edit_ctrl.conf_csr = '\x01';
  album_edit_ctrl.sort_csr = '\0';
  album_edit_ctrl.sort_flg = '\0';
  return;
}

static void AlbumEditCopyCtrlInit() {
  album_copy_ctrl.short_cut_flg = '\0';
  album_copy_ctrl.album_data = '\0';
  album_copy_ctrl.copy_photo_no = '\0';
  album_copy_ctrl.photo_no = '\0';
  return;
}

static void AlbumEditTopInit() {
  if (album_copy_ctrl.short_cut_flg == '\x01') {
    AlbumEditUncompressPhotoReq__Fv();
  }
  return;
}

static void AlbumEditCopyPosSelInit() {
  int iVar1;
  
  iVar1 = GetCurrentAlbum__Fv();
  album_copy_ctrl.album_data = (char)iVar1;
  iVar1 = GetAlbumPhotoNo__Fv();
  album_copy_ctrl.copy_photo_no = (char)iVar1;
  album_copy_ctrl.photo_no = '\0';
  AlbumEditUncompressPhotoReq__Fv();
  return;
}

static void AlbumEditConfInit() {
  album_edit_ctrl.conf_csr = '\x01';
  return;
}

static void AlbumEditCopyConfInit() {
  AlbumEditConfInit__Fv();
  AlbumEditUncompressPhotoReq__Fv();
  return;
}

int AlbumEditMain() {
	static char __FUNCTION__[14] = {
		/* [0] = */ 65,
		/* [1] = */ 108,
		/* [2] = */ 98,
		/* [3] = */ 117,
		/* [4] = */ 109,
		/* [5] = */ 69,
		/* [6] = */ 100,
		/* [7] = */ 105,
		/* [8] = */ 116,
		/* [9] = */ 77,
		/* [10] = */ 97,
		/* [11] = */ 105,
		/* [12] = */ 110,
		/* [13] = */ 0
	};
	int res;
	
  if (album_edit_ctrl.step == '\x02') {
    AlbumEditModeMain__Fv();
  }
  else {
    if (album_edit_ctrl.step < '\x03') {
      if (album_edit_ctrl.step == '\0') {
        AlbumEditDispInit__Fv();
        AlbumEditCopyCtrlInit__Fv();
        album_edit_ctrl.step = '\x02';
        return 0;
      }
    }
    else if (album_edit_ctrl.step == '\x03') {
      if (album_edit_disp.anim_step == '\x04') {
        return 1;
      }
      return 0;
    }
    SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
    PrintAssertReal("Error! %s");
  }
  return 0;
}

static int AlbumEditModeMain() {
  AlbumEditChangeMode__Fv();
  if (album_edit_ctrl.sub_step == '\0') {
    if ((code *)album_edit_mode_init_func[album_edit_ctrl.mode] != (code *)0x0) {
      (*(code *)album_edit_mode_init_func[album_edit_ctrl.mode])();
    }
    album_edit_ctrl.sub_step = '\x01';
  }
  if ((album_edit_ctrl.sub_step == '\x01') &&
     ((code *)album_edit_mode_func[album_edit_ctrl.mode] != (code *)0x0)) {
    (*(code *)album_edit_mode_func[album_edit_ctrl.mode])();
  }
  if ((album_edit_ctrl.sub_step == '\x02') &&
     ((code *)album_edit_mode_end_func[album_edit_ctrl.mode] != (code *)0x0)) {
    (*(code *)album_edit_mode_end_func[album_edit_ctrl.mode])();
  }
  return 0;
}

static void AlbumEditChangeMode() {
  if (album_edit_ctrl.mode != album_edit_ctrl.next_mode) {
    album_edit_ctrl.mode = album_edit_ctrl.next_mode;
    album_edit_ctrl.sub_step = '\0';
  }
  return;
}

static void AlbumEditModeTop() {
  AlbumEditTopPad__Fv();
  return;
}

static void AlbumEditTopPad() {
	int current_album;
	int photo_no;
	int i;
	
  int iVar1;
  int iVar2;
  int iVar3;
  char photo_no;
  
  iVar1 = GetCurrentAlbum__Fv();
  iVar2 = GetAlbumPhotoNo__Fv();
  if (((((pad[0].rpt & 0x1000U) != 0) || (iVar3 = GetPadAnalogRpt__Fi(0), iVar3 != 0)) ||
      ((pad[0].rpt & 0x4000U) != 0)) || (iVar3 = GetPadAnalogRpt__Fi(1), iVar3 != 0)) {
    SystemBankPlay__FiiiiP11_SND_3D_SETii(0,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
    iVar3 = iVar2 + 8;
    iVar1 = iVar3;
    if (iVar3 < 0) {
      iVar1 = iVar2 + 0x17;
    }
    AlbumEditUncompressPhotoReq__Fv();
    photo_no = (char)((uint)((iVar3 + (iVar1 >> 4) * -0x10) * 0x1000000) >> 0x18);
    goto LAB_001208f4;
  }
  if (((pad[0].rpt & 0x8000U) == 0) && (iVar3 = GetPadAnalogRpt__Fi(2), iVar3 == 0)) {
    if (((pad[0].rpt & 0x2000U) == 0) && (iVar3 = GetPadAnalogRpt__Fi(3), iVar3 == 0)) {
      photo_no = (char)iVar2;
      if (*paddat[0x18] == 1) {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
        _fixed_array_verifyrange__H1Z10ALBUM_INFO_UiUi_PX01(iVar1,2);
        if (album_info.field0_0x0.m_aData[iVar1].album_info.pic_num != '\0') {
                    /* end of inlined section */
          SystemBankPlay__FiiiiP11_SND_3D_SETii(3,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
          AlbumEditMoveViewReq__Fv();
          goto LAB_001208f4;
        }
      }
      else {
        if (*paddat[1] == 1) {
          SystemBankPlay__FiiiiP11_SND_3D_SETii(1,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
          album_edit_ctrl.sub_step = '\x02';
          album_edit_ctrl.next_mode = '\t';
          goto LAB_001208f4;
        }
        if (*paddat[0x12] == 1) {
          iVar2 = 0;
          do {
            if (4 < iVar2) goto LAB_0012088c;
            iVar1 = CheckAlbumMenuCondition__Fi(iVar2);
            iVar2 = iVar2 + 1;
          } while (iVar1 == 0);
          SystemBankPlay__FiiiiP11_SND_3D_SETii(3,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
          AlbumEditMoveMenuReq__Fv();
          goto LAB_001208f4;
        }
        if (*paddat[0x13] != 1) {
          if ((pad[0]._384_6_ & 0xc00000000) != 0) {
            SystemBankPlay__FiiiiP11_SND_3D_SETii(3,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
            ChengeCurrentAlbum__Fv();
            AlbumEditUncompressPhotoReq__Fv();
          }
          goto LAB_001208f4;
        }
        iVar2 = CheckAlbumMenuCopyCondition__Fv();
        if (iVar2 != 0) {
          SystemBankPlay__FiiiiP11_SND_3D_SETii(3,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
          AlbumEditMoveCopyPosSelReq__Fc('\x01');
          goto LAB_001208f4;
        }
      }
LAB_0012088c:
      SystemBankPlay__FiiiiP11_SND_3D_SETii(2,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
      goto LAB_001208f4;
    }
    SystemBankPlay__FiiiiP11_SND_3D_SETii(0,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
    iVar3 = iVar2 + 1;
    iVar1 = iVar3;
    if (iVar3 < 0) {
      iVar1 = iVar2 + 8;
    }
    if (iVar2 < 0) {
      iVar2 = iVar2 + 7;
    }
  }
  else {
    SystemBankPlay__FiiiiP11_SND_3D_SETii(0,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
    iVar3 = iVar2 + 7;
    iVar1 = iVar3;
    if (iVar3 < 0) {
      iVar1 = iVar2 + 0xe;
    }
    if (iVar2 < 0) {
      iVar2 = iVar3;
    }
  }
  AlbumEditUncompressPhotoReq__Fv();
  photo_no = (char)((uint)(((iVar2 >> 3) * 8 + iVar3 + (iVar1 >> 3) * -8) * 0x1000000) >> 0x18);
LAB_001208f4:
  SetAlbumPhotoNo__Fc(photo_no);
  return;
}

void AlbumEditUncompressPhotoReq() {
  album_edit_ctrl.photo_flg = '\0';
  return;
}

static void AlbumEditMoveMenuReq() {
	int i;
	
  int iVar1;
  int menu_label;
  
  menu_label = 0;
  album_edit_ctrl.next_mode = '\x01';
  while( true ) {
    if (4 < menu_label) {
      album_edit_disp.menu_anim_timer = '\0';
      album_edit_disp.menu_anim_step = '\0';
      return;
    }
    iVar1 = CheckAlbumMenuCondition__Fi(menu_label);
    if (iVar1 != 0) break;
    menu_label = menu_label + 1;
  }
  album_edit_ctrl.menu_csr = (char)menu_label;
  album_edit_disp.menu_anim_step = '\0';
  album_edit_disp.menu_anim_timer = '\0';
  return;
}

static void AlbumEditMoveCopyPosSelReq(char short_cut_flg) {
  int iVar1;
  
  album_edit_ctrl.next_mode = '\x03';
  album_edit_ctrl.sub_step = '\x02';
  album_copy_ctrl.short_cut_flg = short_cut_flg;
  iVar1 = GetCurrentAlbum__Fv();
  album_copy_ctrl.album_data = (char)iVar1;
  iVar1 = GetAlbumPhotoNo__Fv();
  album_copy_ctrl.copy_photo_no = (char)iVar1;
  return;
}

static void AlbumEditOutReq() {
  album_edit_disp.anim_step = '\x03';
  album_edit_disp.anim_timer = '\0';
  AlbumOutReq__Fv();
  return;
}

static void AlbumEditMoveViewReq() {
  int iVar1;
  
  album_edit_ctrl.step = '\x03';
  album_edit_disp.anim_step = '\x03';
  album_edit_disp.anim_timer = '\0';
  iVar1 = GetCurrentAlbum__Fv();
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  _fixed_array_verifyrange__H1Z10ALBUM_INFO_UiUi_PX01(iVar1,2);
  AlbumViewBackGroundLoadReq__Fi(album_info.field0_0x0.m_aData[iVar1].album_type);
  return;
}

static void AlbumEditModeMenu() {
  if (album_edit_disp.menu_anim_step == '\x02') {
    AlbumEditMenuPad__Fv();
  }
  if (album_edit_disp.menu_anim_step == '\x04') {
    album_edit_ctrl.next_mode = '\0';
  }
  return;
}

static void AlbumEditMenuPad() {
	int i;
	char csr_back_up;
	
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  
  if (((pad[0].rpt & 0x1000U) == 0) && (iVar4 = GetPadAnalogRpt__Fi(0), iVar4 == 0)) {
    if (((pad[0].rpt & 0x4000U) == 0) && (iVar4 = GetPadAnalogRpt__Fi(1), iVar4 == 0)) {
      if (**paddat == 1) {
        AlbumEditMenuPadDecision__Fv();
        return;
      }
      if (*paddat[1] == 1) {
        SystemBankPlay__FiiiiP11_SND_3D_SETii(1,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
        album_edit_disp.menu_anim_step = '\x03';
        album_edit_disp.menu_anim_timer = '\0';
      }
    }
    else {
      cVar2 = album_edit_ctrl.menu_csr;
      iVar4 = 0;
      bVar1 = true;
      do {
        iVar4 = iVar4 + 1;
        if (!bVar1) break;
        iVar3 = (album_edit_ctrl.menu_csr + 1) % 5;
        album_edit_ctrl.menu_csr = (char)iVar3;
        iVar3 = CheckAlbumMenuCondition__Fi(iVar3);
        bVar1 = iVar4 < 5;
      } while (iVar3 == 0);
      if (album_edit_ctrl.menu_csr != cVar2) {
        SystemBankPlay__FiiiiP11_SND_3D_SETii(0,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
        return;
      }
    }
  }
  else {
    cVar2 = album_edit_ctrl.menu_csr;
    iVar4 = 0;
    bVar1 = true;
    do {
      iVar4 = iVar4 + 1;
      if (!bVar1) break;
      iVar3 = (album_edit_ctrl.menu_csr + 4) % 5;
      album_edit_ctrl.menu_csr = (char)iVar3;
      iVar3 = CheckAlbumMenuCondition__Fi(iVar3);
      bVar1 = iVar4 < 5;
    } while (iVar3 == 0);
    if (album_edit_ctrl.menu_csr != cVar2) {
      SystemBankPlay__FiiiiP11_SND_3D_SETii(0,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
      return;
    }
  }
  return;
}

static void AlbumEditMenuPadDecision() {
	static char __FUNCTION__[25] = {
		/* [0] = */ 65,
		/* [1] = */ 108,
		/* [2] = */ 98,
		/* [3] = */ 117,
		/* [4] = */ 109,
		/* [5] = */ 69,
		/* [6] = */ 100,
		/* [7] = */ 105,
		/* [8] = */ 116,
		/* [9] = */ 77,
		/* [10] = */ 101,
		/* [11] = */ 110,
		/* [12] = */ 117,
		/* [13] = */ 80,
		/* [14] = */ 97,
		/* [15] = */ 100,
		/* [16] = */ 68,
		/* [17] = */ 101,
		/* [18] = */ 99,
		/* [19] = */ 105,
		/* [20] = */ 115,
		/* [21] = */ 105,
		/* [22] = */ 111,
		/* [23] = */ 110,
		/* [24] = */ 0
	};
	int current_album;
	int photo_no;
	
  int iVar1;
  int iVar2;
  
  iVar1 = GetCurrentAlbum__Fv();
  iVar2 = GetAlbumPhotoNo__Fv();
  switch(album_edit_ctrl.menu_csr) {
  case '\0':
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Z10ALBUM_INFO_UiUi_PX01(iVar1,2);
    _fixed_array_verifyrange__H1Z11PICTURE_WRK_UiUi_PX01(iVar2,0x10);
    if ((*(byte *)((int)(album_info.field0_0x0.m_aData[iVar1].album_info.pic.field0_0x0.m_aData +
                        iVar2) + 2) & 1) != 0) {
                    /* end of inlined section */
      SystemBankPlay__FiiiiP11_SND_3D_SETii(3,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
      AlbumEditMoveCopyPosSelReq__Fc('\0');
      return;
    }
    SystemBankPlay__FiiiiP11_SND_3D_SETii(2,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
    return;
  case '\x01':
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Z10ALBUM_INFO_UiUi_PX01(iVar1,2);
    _fixed_array_verifyrange__H1Z11PICTURE_WRK_UiUi_PX01(iVar2,0x10);
    if ((*(byte *)((int)(album_info.field0_0x0.m_aData[iVar1].album_info.pic.field0_0x0.m_aData +
                        iVar2) + 2) & 1) == 0) {
      SystemBankPlay__FiiiiP11_SND_3D_SETii(2,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
      return;
    }
                    /* end of inlined section */
    SystemBankPlay__FiiiiP11_SND_3D_SETii(3,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
    album_edit_ctrl.sub_step = '\x02';
    album_edit_ctrl.next_mode = '\x05';
    album_edit_disp.menu_anim_step = '\x03';
    album_edit_disp.menu_anim_timer = '\0';
    return;
  case '\x02':
    SystemBankPlay__FiiiiP11_SND_3D_SETii(3,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
    album_edit_ctrl.mode = '\x02';
    album_edit_ctrl.next_mode = '\x02';
    album_edit_ctrl.sort_csr = '\0';
    album_edit_disp.sort_anim_step = '\0';
    album_edit_disp.sort_anim_timer = '\0';
    return;
  case '\x03':
    SystemBankPlay__FiiiiP11_SND_3D_SETii(3,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
    album_edit_ctrl.next_mode = '\a';
    break;
  case '\x04':
    SystemBankPlay__FiiiiP11_SND_3D_SETii(3,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
    album_edit_ctrl.next_mode = '\x06';
    break;
  default:
    SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
    PrintAssertReal("Error! %s");
    return;
  }
  album_edit_ctrl.sub_step = '\x02';
  return;
}

static void AlbumEditSortPad() {
	static char __FUNCTION__[17] = {
		/* [0] = */ 65,
		/* [1] = */ 108,
		/* [2] = */ 98,
		/* [3] = */ 117,
		/* [4] = */ 109,
		/* [5] = */ 69,
		/* [6] = */ 100,
		/* [7] = */ 105,
		/* [8] = */ 116,
		/* [9] = */ 83,
		/* [10] = */ 111,
		/* [11] = */ 114,
		/* [12] = */ 116,
		/* [13] = */ 80,
		/* [14] = */ 97,
		/* [15] = */ 100,
		/* [16] = */ 0
	};
	
  int iVar1;
  
  if (((((pad[0].rpt & 0x1000U) == 0) && (iVar1 = GetPadAnalogRpt__Fi(0), iVar1 == 0)) &&
      ((pad[0].rpt & 0x4000U) == 0)) && (iVar1 = GetPadAnalogRpt__Fi(1), iVar1 == 0)) {
    if (**paddat == 1) {
      SystemBankPlay__FiiiiP11_SND_3D_SETii(3,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
      if (album_edit_ctrl.sort_csr == '\0') {
        if (album_edit_ctrl.sort_flg == '\0') {
          iVar1 = GetCurrentAlbum__Fv();
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
          _fixed_array_verifyrange__H1Z10ALBUM_INFO_UiUi_PX01(iVar1,2);
          SortPhotoData_NewTime__FP9PFILE_WRK(&album_info.field0_0x0.m_aData[iVar1].album_info);
        }
        else {
                    /* end of inlined section */
          iVar1 = GetCurrentAlbum__Fv();
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
          _fixed_array_verifyrange__H1Z10ALBUM_INFO_UiUi_PX01(iVar1,2);
          SortPhotoData_OldTime__FP9PFILE_WRK(&album_info.field0_0x0.m_aData[iVar1].album_info);
                    /* end of inlined section */
        }
      }
      else if (album_edit_ctrl.sort_csr == '\x01') {
        if (album_edit_ctrl.sort_flg == '\0') {
          iVar1 = GetCurrentAlbum__Fv();
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
          _fixed_array_verifyrange__H1Z10ALBUM_INFO_UiUi_PX01(iVar1,2);
          SortPhotoData_BigScore__FP9PFILE_WRK(&album_info.field0_0x0.m_aData[iVar1].album_info);
        }
        else {
                    /* end of inlined section */
          iVar1 = GetCurrentAlbum__Fv();
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
          _fixed_array_verifyrange__H1Z10ALBUM_INFO_UiUi_PX01(iVar1,2);
          SortPhotoData_SmallScore__FP9PFILE_WRK(&album_info.field0_0x0.m_aData[iVar1].album_info);
                    /* end of inlined section */
        }
      }
      else {
        SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
        PrintAssertReal("Error! %s");
      }
      album_edit_ctrl.sort_flg = album_edit_ctrl.sort_flg == '\0';
      AlbumEditUncompressPhotoReq__Fv();
      return;
    }
    if (*paddat[1] == 1) {
      SystemBankPlay__FiiiiP11_SND_3D_SETii(1,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
      album_edit_ctrl.next_mode = '\x01';
      album_edit_ctrl.mode = '\x01';
    }
  }
  else {
    SystemBankPlay__FiiiiP11_SND_3D_SETii(0,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
    album_edit_ctrl.sort_flg = '\0';
    album_edit_ctrl.sort_csr =
         (char)(album_edit_ctrl.sort_csr + 1) + (char)((album_edit_ctrl.sort_csr + 1) / 2) * -2;
  }
  return;
}

static void AlbumEditCopyPosSelMain() {
  AlbumEditCopyPosSelPad__Fv();
  return;
}

static void AlbumEditCopyPosSelPad() {
	int copy_photo_no;
	int data_photo_no;
	
  char cVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  long lVar5;
  int iVar6;
  byte bVar7;
  
  GetCurrentAlbum__Fv();
  cVar3 = album_copy_ctrl.photo_no;
  cVar2 = album_copy_ctrl.copy_photo_no;
  if (((pad[0].rpt & 0x1000U) != 0) || (iVar4 = GetPadAnalogRpt__Fi(0), iVar4 != 0)) {
    SystemBankPlay__FiiiiP11_SND_3D_SETii(0,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
    iVar6 = album_copy_ctrl.photo_no + 8;
    iVar4 = iVar6;
    if (iVar6 < 0) {
      iVar4 = album_copy_ctrl.photo_no + 0x17;
    }
    album_copy_ctrl.photo_no = (char)iVar6 + (char)(iVar4 >> 4) * -0x10;
    AlbumEditUncompressPhotoReq__Fv();
    return;
  }
  if (((pad[0].rpt & 0x4000U) != 0) || (iVar4 = GetPadAnalogRpt__Fi(1), iVar4 != 0)) {
    SystemBankPlay__FiiiiP11_SND_3D_SETii(0,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
    iVar6 = album_copy_ctrl.photo_no + 8;
    iVar4 = iVar6;
    if (iVar6 < 0) {
      iVar4 = album_copy_ctrl.photo_no + 0x17;
    }
    album_copy_ctrl.photo_no = (char)iVar6 + (char)(iVar4 >> 4) * -0x10;
    AlbumEditUncompressPhotoReq__Fv();
    return;
  }
  if (((pad[0].rpt & 0x8000U) != 0) || (iVar4 = GetPadAnalogRpt__Fi(2), iVar4 != 0)) {
    SystemBankPlay__FiiiiP11_SND_3D_SETii(0,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
    iVar6 = album_copy_ctrl.photo_no + 7;
    iVar4 = iVar6;
    if ((long)iVar6 < 0) {
      iVar4 = album_copy_ctrl.photo_no + 0xe;
    }
    lVar5 = (long)album_copy_ctrl.photo_no;
    if ((long)album_copy_ctrl.photo_no < 0) {
      lVar5 = (long)iVar6;
    }
    album_copy_ctrl.photo_no =
         (char)(((int)lVar5 >> 3) << 3) + (char)iVar6 + (char)(iVar4 >> 3) * -8;
    AlbumEditUncompressPhotoReq__Fv();
    return;
  }
  if (((pad[0].rpt & 0x2000U) == 0) && (iVar4 = GetPadAnalogRpt__Fi(3), iVar4 == 0)) {
    if (**paddat == 1) {
      SystemBankPlay__FiiiiP11_SND_3D_SETii(3,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
      if (album_copy_ctrl.short_cut_flg == '\x01') {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
        bVar7 = album_copy_ctrl.album_data ^ 1;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
        _fixed_array_verifyrange__H1Z10ALBUM_INFO_UiUi_PX01((int)(char)bVar7,2);
        _fixed_array_verifyrange__H1Z11PICTURE_WRK_UiUi_PX01(cVar3,0x10);
        cVar1 = album_copy_ctrl.album_data;
        iVar4 = (int)album_copy_ctrl.album_data;
        _fixed_array_verifyrange__H1Z10ALBUM_INFO_UiUi_PX01(album_copy_ctrl.album_data,2);
        _fixed_array_verifyrange__H1Z11PICTURE_WRK_UiUi_PX01(cVar2,0x10);
        AlbumPhotoCopy__FP11PICTURE_WRKiPC11PICTURE_WRKi
                  ((PICTURE_WRK *)((char)bVar7 * 0x20c + 0x2d4378 + cVar3 * 0x20),
                   (int)(char)(album_copy_ctrl.album_data ^ 1),
                   (PICTURE_WRK *)((iVar4 * 0x84 - (int)cVar1) * 4 + 0x2d4378 + cVar2 * 0x20),
                   (int)album_copy_ctrl.album_data);
                    /* end of inlined section */
        album_edit_ctrl.sub_step = '\x02';
        album_edit_ctrl.next_mode = '\0';
      }
      else {
        album_edit_ctrl.next_mode = '\x04';
        album_edit_ctrl.sub_step = '\x02';
        album_edit_disp.menu_anim_step = '\x03';
        album_edit_disp.menu_anim_timer = '\0';
      }
    }
    else if (*paddat[1] == 1) {
      SystemBankPlay__FiiiiP11_SND_3D_SETii(1,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
      album_edit_ctrl.next_mode = album_copy_ctrl.short_cut_flg == '\0';
      if ((bool)album_edit_ctrl.next_mode) {
        album_edit_ctrl.mode = '\x01';
      }
      else {
        album_edit_ctrl.sub_step = '\x02';
      }
      AlbumEditUncompressPhotoReq__Fv();
    }
    return;
  }
  SystemBankPlay__FiiiiP11_SND_3D_SETii(0,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
  iVar6 = album_copy_ctrl.photo_no + 1;
  iVar4 = iVar6;
  if (iVar6 < 0) {
    iVar4 = album_copy_ctrl.photo_no + 8;
  }
  lVar5 = (long)album_copy_ctrl.photo_no;
  if ((long)album_copy_ctrl.photo_no < 0) {
    lVar5 = (long)(album_copy_ctrl.photo_no + 7);
  }
  album_copy_ctrl.photo_no = (char)(((int)lVar5 >> 3) << 3) + (char)iVar6 + (char)(iVar4 >> 3) * -8;
  AlbumEditUncompressPhotoReq__Fv();
  return;
}

static void AlbumEditCopyConfPad() {
	int copy_photo_no;
	int data_photo_no;
	
  char cVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  byte bVar5;
  
  cVar3 = album_copy_ctrl.photo_no;
  cVar2 = album_copy_ctrl.copy_photo_no;
  if (((((pad[0].rpt & 0x8000U) == 0) && (iVar4 = GetPadAnalogRpt__Fi(2), iVar4 == 0)) &&
      ((pad[0].rpt & 0x2000U) == 0)) && (iVar4 = GetPadAnalogRpt__Fi(3), iVar4 == 0)) {
    if (**paddat == 1) {
      SystemBankPlay__FiiiiP11_SND_3D_SETii(3,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
      if (album_edit_ctrl.conf_csr != '\0') {
        album_edit_ctrl.sub_step = '\x01';
        album_edit_ctrl.next_mode = '\x03';
        album_edit_disp.menu_anim_timer = '\0';
        album_edit_ctrl.mode = '\x03';
        album_edit_disp.menu_anim_step = '\0';
        AlbumEditUncompressPhotoReq__Fv();
        return;
      }
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
      bVar5 = album_copy_ctrl.album_data ^ 1;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
      _fixed_array_verifyrange__H1Z10ALBUM_INFO_UiUi_PX01((int)(char)bVar5,2);
      _fixed_array_verifyrange__H1Z11PICTURE_WRK_UiUi_PX01(cVar3,0x10);
      cVar1 = album_copy_ctrl.album_data;
      iVar4 = (int)album_copy_ctrl.album_data;
      _fixed_array_verifyrange__H1Z10ALBUM_INFO_UiUi_PX01(album_copy_ctrl.album_data,2);
      _fixed_array_verifyrange__H1Z11PICTURE_WRK_UiUi_PX01(cVar2,0x10);
      AlbumPhotoCopy__FP11PICTURE_WRKiPC11PICTURE_WRKi
                ((PICTURE_WRK *)((char)bVar5 * 0x20c + 0x2d4378 + cVar3 * 0x20),
                 (int)(char)(album_copy_ctrl.album_data ^ 1),
                 (PICTURE_WRK *)((iVar4 * 0x84 - (int)cVar1) * 4 + 0x2d4378 + cVar2 * 0x20),
                 (int)album_copy_ctrl.album_data);
                    /* end of inlined section */
      album_edit_ctrl.sub_step = '\x02';
      album_edit_ctrl.next_mode = '\0';
    }
    else if (*paddat[1] == 1) {
      SystemBankPlay__FiiiiP11_SND_3D_SETii(1,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
      album_edit_ctrl.next_mode = '\x01';
      album_edit_disp.menu_anim_timer = '\0';
      album_edit_ctrl.sub_step = '\x01';
      album_edit_ctrl.mode = '\x01';
      album_edit_disp.menu_anim_step = '\0';
      AlbumEditUncompressPhotoReq__Fv();
    }
  }
  else {
    SystemBankPlay__FiiiiP11_SND_3D_SETii(0,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
    album_edit_ctrl.conf_csr = album_edit_ctrl.conf_csr ^ 1;
  }
  return;
}

static void AlbumEditDelConfPad() {
	int photo_no;
	
  int photo_no;
  int iVar1;
  
  photo_no = GetAlbumPhotoNo__Fv();
  if (((((pad[0].rpt & 0x8000U) == 0) && (iVar1 = GetPadAnalogRpt__Fi(2), iVar1 == 0)) &&
      ((pad[0].rpt & 0x2000U) == 0)) && (iVar1 = GetPadAnalogRpt__Fi(3), iVar1 == 0)) {
    if (**paddat == 1) {
      SystemBankPlay__FiiiiP11_SND_3D_SETii(3,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
      if (album_edit_ctrl.conf_csr == '\0') {
        iVar1 = GetCurrentAlbum__Fv();
        AlbumPhotoDelete__Fii(iVar1,photo_no);
        album_edit_ctrl.sub_step = '\x02';
        album_edit_ctrl.next_mode = '\0';
        AlbumEditUncompressPhotoReq__Fv();
        return;
      }
    }
    else {
      if (*paddat[1] != 1) {
        return;
      }
      SystemBankPlay__FiiiiP11_SND_3D_SETii(1,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
    }
    album_edit_ctrl.next_mode = '\x01';
    album_edit_disp.menu_anim_timer = '\0';
    album_edit_ctrl.sub_step = '\x01';
    album_edit_disp.menu_anim_step = '\0';
  }
  else {
    SystemBankPlay__FiiiiP11_SND_3D_SETii(0,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
    album_edit_ctrl.conf_csr = album_edit_ctrl.conf_csr ^ 1;
  }
  return;
}

static void AlbumEditLoadConfPad() {
  int iVar1;
  
  GetAlbumPhotoNo__Fv();
  if (((((pad[0].rpt & 0x8000U) == 0) && (iVar1 = GetPadAnalogRpt__Fi(2), iVar1 == 0)) &&
      ((pad[0].rpt & 0x2000U) == 0)) && (iVar1 = GetPadAnalogRpt__Fi(3), iVar1 == 0)) {
    if (**paddat == 1) {
      SystemBankPlay__FiiiiP11_SND_3D_SETii(3,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
      if (album_edit_ctrl.conf_csr == '\0') {
        album_edit_ctrl.next_mode = '\b';
        album_edit_ctrl.sub_step = '\x02';
      }
      else {
        album_edit_ctrl.next_mode = '\x01';
        album_edit_ctrl.sub_step = '\x01';
      }
    }
    else if (*paddat[1] == 1) {
      SystemBankPlay__FiiiiP11_SND_3D_SETii(1,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
      album_edit_ctrl.next_mode = '\x01';
      album_edit_ctrl.sub_step = '\x01';
    }
  }
  else {
    SystemBankPlay__FiiiiP11_SND_3D_SETii(0,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
    album_edit_ctrl.conf_csr = album_edit_ctrl.conf_csr ^ 1;
  }
  return;
}

static void AlbumEditExitConfPad() {
  int iVar1;
  
  if (((((pad[0].rpt & 0x8000U) == 0) && (iVar1 = GetPadAnalogRpt__Fi(2), iVar1 == 0)) &&
      ((pad[0].rpt & 0x2000U) == 0)) && (iVar1 = GetPadAnalogRpt__Fi(3), iVar1 == 0)) {
    if (**paddat == 1) {
      SystemBankPlay__FiiiiP11_SND_3D_SETii(3,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
      if (album_edit_ctrl.conf_csr == '\0') {
        AlbumEditOutReq__Fv();
        return;
      }
    }
    else {
      if (*paddat[1] != 1) {
        return;
      }
      SystemBankPlay__FiiiiP11_SND_3D_SETii(1,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
    }
    album_edit_ctrl.sub_step = '\x01';
    album_edit_ctrl.next_mode = '\0';
    album_edit_ctrl.mode = '\0';
  }
  else {
    SystemBankPlay__FiiiiP11_SND_3D_SETii(0,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
    album_edit_ctrl.conf_csr = album_edit_ctrl.conf_csr ^ 1;
  }
  return;
}

static void AlbumPhotoCopy(PICTURE_WRK *copy_data, int copy_album, PICTURE_WRK *data, int data_album) {
	int i;
	u_int copy_addr;
	u_int data_addr;
	u_int tmp_data_addr;
	u_int tmp_copy_addr;
	
  undefined *puVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  ushort uVar5;
  ulong *puVar6;
  uchar *puVar7;
  uint *puVar8;
  uchar uVar9;
  void *pvVar10;
  void *pvVar11;
  ulong *puVar12;
  undefined8 *puVar13;
  ulong *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  ulong uVar17;
  undefined8 uVar18;
  void *pvVar19;
  undefined8 uVar21;
  ulong uVar22;
  undefined8 uVar23;
  uint uVar24;
  ulong uVar25;
  ulong in_t1;
  ulong uVar26;
  _PICTURE_SUBJECT *p_Var27;
  _PICTURE_SUBJECT *p_Var28;
  int iVar29;
  ulong uVar20;
  
  pvVar10 = GetAlbumDataAddr__Fi(data_album);
  pvVar11 = GetAlbumDataAddr__Fi(copy_album);
  uVar22 = (ulong)(int)pvVar11;
  if ((data->status & 1) != 0) {
    uVar17 = 0x10000;
    iVar29 = (uint)data->adr_no * 0xd360;
    uVar25 = (ulong)iVar29;
    pvVar19 = (void *)(iVar29 + (int)pvVar10);
    uVar20 = (ulong)(int)pvVar19;
    puVar12 = (ulong *)((int)pvVar19 + 0x10000);
    puVar14 = (ulong *)((int)pvVar11 + (uint)copy_data->adr_no * 0xd360 + 0x10000);
    if ((((uint)puVar12 | (uint)puVar14) & 7) == 0) {
      do {
        uVar17 = *puVar12;
        uVar20 = puVar12[1];
        uVar25 = puVar12[2];
        uVar26 = puVar12[3];
        *puVar14 = uVar17;
        puVar14[1] = uVar20;
        puVar14[2] = uVar25;
        puVar14[3] = uVar26;
        puVar12 = puVar12 + 4;
        puVar14 = puVar14 + 4;
      } while (puVar12 != (ulong *)((int)pvVar19 + 0x1d360U));
      bVar2 = data->adr_no;
    }
    else {
      do {
        uVar3 = (int)puVar12 + 7U & 7;
        uVar4 = (uint)puVar12 & 7;
        uVar17 = (*(long *)(((int)puVar12 + 7U) - uVar3) << (7 - uVar3) * 8 |
                 uVar17 & 0xffffffffffffffffU >> (uVar3 + 1) * 8) & -1L << (8 - uVar4) * 8 |
                 *(ulong *)((int)puVar12 - uVar4) >> uVar4 * 8;
        uVar3 = (int)puVar12 + 0xfU & 7;
        uVar4 = (uint)(puVar12 + 1) & 7;
        uVar20 = (*(long *)(((int)puVar12 + 0xfU) - uVar3) << (7 - uVar3) * 8 |
                 uVar20 & 0xffffffffffffffffU >> (uVar3 + 1) * 8) & -1L << (8 - uVar4) * 8 |
                 *(ulong *)((int)(puVar12 + 1) - uVar4) >> uVar4 * 8;
        uVar3 = (int)puVar12 + 0x17U & 7;
        uVar4 = (uint)(puVar12 + 2) & 7;
        uVar25 = (*(long *)(((int)puVar12 + 0x17U) - uVar3) << (7 - uVar3) * 8 |
                 uVar25 & 0xffffffffffffffffU >> (uVar3 + 1) * 8) & -1L << (8 - uVar4) * 8 |
                 *(ulong *)((int)(puVar12 + 2) - uVar4) >> uVar4 * 8;
        uVar3 = (int)puVar12 + 0x1fU & 7;
        uVar4 = (uint)(puVar12 + 3) & 7;
        in_t1 = (*(long *)(((int)puVar12 + 0x1fU) - uVar3) << (7 - uVar3) * 8 |
                in_t1 & 0xffffffffffffffffU >> (uVar3 + 1) * 8) & -1L << (8 - uVar4) * 8 |
                *(ulong *)((int)(puVar12 + 3) - uVar4) >> uVar4 * 8;
        uVar3 = (int)puVar14 + 7U & 7;
        puVar6 = (ulong *)(((int)puVar14 + 7U) - uVar3);
        *puVar6 = *puVar6 & -1L << (uVar3 + 1) * 8 | uVar17 >> (7 - uVar3) * 8;
        uVar3 = (uint)puVar14 & 7;
        *(ulong *)((int)puVar14 - uVar3) =
             uVar17 << uVar3 * 8 |
             *(ulong *)((int)puVar14 - uVar3) & 0xffffffffffffffffU >> (8 - uVar3) * 8;
        uVar3 = (int)puVar14 + 0xfU & 7;
        puVar6 = (ulong *)(((int)puVar14 + 0xfU) - uVar3);
        *puVar6 = *puVar6 & -1L << (uVar3 + 1) * 8 | uVar20 >> (7 - uVar3) * 8;
        uVar3 = (uint)(puVar14 + 1) & 7;
        puVar6 = (ulong *)((int)(puVar14 + 1) - uVar3);
        *puVar6 = uVar20 << uVar3 * 8 | *puVar6 & 0xffffffffffffffffU >> (8 - uVar3) * 8;
        uVar3 = (int)puVar14 + 0x17U & 7;
        puVar6 = (ulong *)(((int)puVar14 + 0x17U) - uVar3);
        *puVar6 = *puVar6 & -1L << (uVar3 + 1) * 8 | uVar25 >> (7 - uVar3) * 8;
        uVar3 = (uint)(puVar14 + 2) & 7;
        puVar6 = (ulong *)((int)(puVar14 + 2) - uVar3);
        *puVar6 = uVar25 << uVar3 * 8 | *puVar6 & 0xffffffffffffffffU >> (8 - uVar3) * 8;
        uVar3 = (int)puVar14 + 0x1fU & 7;
        puVar6 = (ulong *)(((int)puVar14 + 0x1fU) - uVar3);
        *puVar6 = *puVar6 & -1L << (uVar3 + 1) * 8 | in_t1 >> (7 - uVar3) * 8;
        uVar3 = (uint)(puVar14 + 3) & 7;
        puVar6 = (ulong *)((int)(puVar14 + 3) - uVar3);
        *puVar6 = in_t1 << uVar3 * 8 | *puVar6 & 0xffffffffffffffffU >> (8 - uVar3) * 8;
        puVar12 = puVar12 + 4;
        puVar14 = puVar14 + 4;
      } while (puVar12 != (ulong *)((int)pvVar19 + 0x1d360U));
      bVar2 = data->adr_no;
    }
    puVar16 = (undefined8 *)((int)pvVar10 + (uint)bVar2 * 0x1000);
    puVar15 = (undefined8 *)((int)pvVar11 + (uint)copy_data->adr_no * 0x1000);
    puVar13 = puVar16 + 0x200;
    if ((((uint)puVar16 | (uint)puVar15) & 7) == 0) {
      do {
        uVar18 = puVar16[1];
        uVar21 = puVar16[2];
        uVar23 = puVar16[3];
        *puVar15 = *puVar16;
        puVar15[1] = uVar18;
        puVar15[2] = uVar21;
        puVar15[3] = uVar23;
        puVar16 = puVar16 + 4;
        puVar15 = puVar15 + 4;
      } while (puVar16 != puVar13);
      uVar9 = copy_data->status;
    }
    else {
      do {
        uVar3 = (int)puVar16 + 7U & 7;
        uVar4 = (uint)puVar16 & 7;
        uVar17 = (*(long *)(((int)puVar16 + 7U) - uVar3) << (7 - uVar3) * 8 |
                 uVar17 & 0xffffffffffffffffU >> (uVar3 + 1) * 8) & -1L << (8 - uVar4) * 8 |
                 *(ulong *)((int)puVar16 - uVar4) >> uVar4 * 8;
        uVar3 = (int)puVar16 + 0xfU & 7;
        uVar4 = (uint)(puVar16 + 1) & 7;
        uVar20 = (*(long *)(((int)puVar16 + 0xfU) - uVar3) << (7 - uVar3) * 8 |
                 uVar20 & 0xffffffffffffffffU >> (uVar3 + 1) * 8) & -1L << (8 - uVar4) * 8 |
                 *(ulong *)((int)(puVar16 + 1) - uVar4) >> uVar4 * 8;
        uVar3 = (int)puVar16 + 0x17U & 7;
        uVar4 = (uint)(puVar16 + 2) & 7;
        uVar22 = (*(long *)(((int)puVar16 + 0x17U) - uVar3) << (7 - uVar3) * 8 |
                 uVar22 & 0xffffffffffffffffU >> (uVar3 + 1) * 8) & -1L << (8 - uVar4) * 8 |
                 *(ulong *)((int)(puVar16 + 2) - uVar4) >> uVar4 * 8;
        uVar3 = (int)puVar16 + 0x1fU & 7;
        uVar4 = (uint)(puVar16 + 3) & 7;
        uVar25 = (*(long *)(((int)puVar16 + 0x1fU) - uVar3) << (7 - uVar3) * 8 |
                 uVar25 & 0xffffffffffffffffU >> (uVar3 + 1) * 8) & -1L << (8 - uVar4) * 8 |
                 *(ulong *)((int)(puVar16 + 3) - uVar4) >> uVar4 * 8;
        uVar3 = (int)puVar15 + 7U & 7;
        puVar12 = (ulong *)(((int)puVar15 + 7U) - uVar3);
        *puVar12 = *puVar12 & -1L << (uVar3 + 1) * 8 | uVar17 >> (7 - uVar3) * 8;
        uVar3 = (uint)puVar15 & 7;
        *(ulong *)((int)puVar15 - uVar3) =
             uVar17 << uVar3 * 8 |
             *(ulong *)((int)puVar15 - uVar3) & 0xffffffffffffffffU >> (8 - uVar3) * 8;
        uVar3 = (int)puVar15 + 0xfU & 7;
        puVar12 = (ulong *)(((int)puVar15 + 0xfU) - uVar3);
        *puVar12 = *puVar12 & -1L << (uVar3 + 1) * 8 | uVar20 >> (7 - uVar3) * 8;
        uVar3 = (uint)(puVar15 + 1) & 7;
        puVar12 = (ulong *)((int)(puVar15 + 1) - uVar3);
        *puVar12 = uVar20 << uVar3 * 8 | *puVar12 & 0xffffffffffffffffU >> (8 - uVar3) * 8;
        uVar3 = (int)puVar15 + 0x17U & 7;
        puVar12 = (ulong *)(((int)puVar15 + 0x17U) - uVar3);
        *puVar12 = *puVar12 & -1L << (uVar3 + 1) * 8 | uVar22 >> (7 - uVar3) * 8;
        uVar3 = (uint)(puVar15 + 2) & 7;
        puVar12 = (ulong *)((int)(puVar15 + 2) - uVar3);
        *puVar12 = uVar22 << uVar3 * 8 | *puVar12 & 0xffffffffffffffffU >> (8 - uVar3) * 8;
        uVar3 = (int)puVar15 + 0x1fU & 7;
        puVar12 = (ulong *)(((int)puVar15 + 0x1fU) - uVar3);
        *puVar12 = *puVar12 & -1L << (uVar3 + 1) * 8 | uVar25 >> (7 - uVar3) * 8;
        uVar3 = (uint)(puVar15 + 3) & 7;
        puVar12 = (ulong *)((int)(puVar15 + 3) - uVar3);
        *puVar12 = uVar25 << uVar3 * 8 | *puVar12 & 0xffffffffffffffffU >> (8 - uVar3) * 8;
        puVar16 = puVar16 + 4;
        puVar15 = puVar15 + 4;
      } while (puVar16 != puVar13);
      uVar9 = copy_data->status;
    }
    if (uVar9 == '\0') {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
      _fixed_array_verifyrange__H1Z10ALBUM_INFO_UiUi_PX01(copy_album,2);
      album_info.field0_0x0.m_aData[copy_album].album_info.pic_num =
           album_info.field0_0x0.m_aData[copy_album].album_info.pic_num + '\x01';
                    /* end of inlined section */
      uVar9 = data->chp_no;
    }
    else {
      uVar9 = data->chp_no;
    }
    iVar29 = 0;
    copy_data->chp_no = uVar9;
    do {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
      uVar24 = (uint)uVar25;
      p_Var28 = (copy_data->maSubject).field0_0x0.m_aData + iVar29;
      _fixed_array_verifyrange__H1Z16_PICTURE_SUBJECT_UiUi_PX01(iVar29,3);
      p_Var27 = (data->maSubject).field0_0x0.m_aData + iVar29;
      uVar22 = 3;
      _fixed_array_verifyrange__H1Z16_PICTURE_SUBJECT_UiUi_PX01(iVar29);
      puVar1 = (undefined *)((int)&p_Var27->obj_no + 1);
      uVar3 = (uint)puVar1 & 3;
      uVar4 = (uint)p_Var27 & 3;
      uVar3 = (*(int *)(puVar1 + -uVar3) << (3 - uVar3) * 8 |
              uVar24 & 0xffffffffU >> (uVar3 + 1) * 8) & -1 << (4 - uVar4) * 8 |
              *(uint *)((int)p_Var27 - uVar4) >> uVar4 * 8;
      uVar25 = (ulong)(int)uVar3;
      puVar1 = (undefined *)((int)&p_Var28->obj_no + 1);
      uVar4 = (uint)puVar1 & 3;
      puVar8 = (uint *)(puVar1 + -uVar4);
      *puVar8 = *puVar8 & -1 << (uVar4 + 1) * 8 | uVar3 >> (3 - uVar4) * 8;
                    /* end of inlined section */
      iVar29 = iVar29 + 1;
                    /* end of inlined section */
      uVar4 = (uint)p_Var28 & 3;
      *(uint *)((int)p_Var28 - uVar4) =
           *(uint *)((int)p_Var28 - uVar4) & 0xffffffffU >> (4 - uVar4) * 8 | uVar3 << uVar4 * 8;
    } while (iVar29 < 3);
    copy_data->score = data->score;
    puVar7 = &(data->time).year;
    uVar3 = (uint)puVar7 & 7;
    uVar4 = (uint)&data->time & 7;
    uVar22 = (*(long *)(puVar7 + -uVar3) << (7 - uVar3) * 8 |
             uVar22 & 0xffffffffffffffffU >> (uVar3 + 1) * 8) & -1L << (8 - uVar4) * 8 |
             *(ulong *)((int)&data->time - uVar4) >> uVar4 * 8;
    puVar7 = &(copy_data->time).year;
    uVar3 = (uint)puVar7 & 7;
    puVar7 = puVar7 + -uVar3;
    *(ulong *)puVar7 = *(ulong *)puVar7 & -1L << (uVar3 + 1) * 8 | uVar22 >> (7 - uVar3) * 8;
    uVar3 = (uint)&copy_data->time & 7;
    puVar12 = (ulong *)((int)&copy_data->time - uVar3);
    *puVar12 = uVar22 << uVar3 * 8 | *puVar12 & 0xffffffffffffffffU >> (8 - uVar3) * 8;
    uVar5 = data->room;
    copy_data->status = '\x01';
    copy_data->room = uVar5;
  }
  return;
}

static void AlbumPhotoDelete(int del_album, int photo_no) {
	static char __FUNCTION__[17] = {
		/* [0] = */ 65,
		/* [1] = */ 108,
		/* [2] = */ 98,
		/* [3] = */ 117,
		/* [4] = */ 109,
		/* [5] = */ 80,
		/* [6] = */ 104,
		/* [7] = */ 111,
		/* [8] = */ 116,
		/* [9] = */ 111,
		/* [10] = */ 68,
		/* [11] = */ 101,
		/* [12] = */ 108,
		/* [13] = */ 101,
		/* [14] = */ 116,
		/* [15] = */ 101,
		/* [16] = */ 0
	};
	
  int iVar1;
  
  if (0xf < photo_no) {
    SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
    PrintAssertReal("Error! %s");
  }
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  _fixed_array_verifyrange__H1Z10ALBUM_INFO_UiUi_PX01(del_album,2);
  _fixed_array_verifyrange__H1Z11PICTURE_WRK_UiUi_PX01(photo_no,0x10);
  iVar1 = del_album * 0x20c + 0x2d4378 + photo_no * 0x20;
  if ((*(byte *)(iVar1 + 2) & 1) != 0) {
    _fixed_array_verifyrange__H1Z10ALBUM_INFO_UiUi_PX01(del_album,2);
    _fixed_array_verifyrange__H1Z11PICTURE_WRK_UiUi_PX01(photo_no,0x10);
    if ((*(byte *)(iVar1 + 2) & 2) == 0) {
      _fixed_array_verifyrange__H1Z10ALBUM_INFO_UiUi_PX01(del_album,2);
      _fixed_array_verifyrange__H1Z11PICTURE_WRK_UiUi_PX01(photo_no,0x10);
      *(undefined *)(iVar1 + 2) = 0;
      _fixed_array_verifyrange__H1Z10ALBUM_INFO_UiUi_PX01(del_album,2);
      album_info.field0_0x0.m_aData[del_album].album_info.pic_num =
           album_info.field0_0x0.m_aData[del_album].album_info.pic_num + 0xff;
    }
  }
  return;
}

static void AlbumEditModeSave() {
  int iVar1;
  
  iVar1 = AlbumSaveMain__Fv();
  if (iVar1 != 0) {
    album_edit_ctrl.next_mode = '\0';
    album_edit_ctrl.sub_step = '\x02';
  }
  return;
}

static void AlbumEditModeLoad() {
  int iVar1;
  
  iVar1 = AlbumLoadMain__Fv();
  if (iVar1 != 0) {
    album_edit_ctrl.next_mode = '\0';
    album_edit_ctrl.sub_step = '\x02';
  }
  return;
}

void AlbumEditMenuDelete() {
  album_edit_disp.menu_anim_step = '\x04';
  album_edit_disp.menu_anim_timer = '\0';
  return;
}

static int CheckAlbumMenuCondition(int menu_label) {
	static char __FUNCTION__[24] = {
		/* [0] = */ 67,
		/* [1] = */ 104,
		/* [2] = */ 101,
		/* [3] = */ 99,
		/* [4] = */ 107,
		/* [5] = */ 65,
		/* [6] = */ 108,
		/* [7] = */ 98,
		/* [8] = */ 117,
		/* [9] = */ 109,
		/* [10] = */ 77,
		/* [11] = */ 101,
		/* [12] = */ 110,
		/* [13] = */ 117,
		/* [14] = */ 67,
		/* [15] = */ 111,
		/* [16] = */ 110,
		/* [17] = */ 100,
		/* [18] = */ 105,
		/* [19] = */ 116,
		/* [20] = */ 105,
		/* [21] = */ 111,
		/* [22] = */ 110,
		/* [23] = */ 0
	};
	int res;
	
  int iVar1;
  
  switch(menu_label) {
  case 0:
    iVar1 = CheckAlbumMenuCopyCondition__Fv();
    break;
  case 1:
    iVar1 = CheckAlbumMenuDelCondition__Fv();
    break;
  case 2:
    iVar1 = CheckAlbumMenuSortCondition__Fv();
    break;
  case 3:
    iVar1 = CheckAlbumMenuSaveCondition__Fv();
    break;
  case 4:
    iVar1 = CheckAlbumMenuLoadCondition__Fv();
    break;
  default:
    SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
    PrintAssertReal("Error! %s");
    return 0;
  }
  return (uint)(iVar1 != 0);
}

static int CheckAlbumMenuCopyCondition() {
	int res;
	int current_album;
	
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = 0;
  uVar1 = GetCurrentAlbum__Fv();
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  _fixed_array_verifyrange__H1Z10ALBUM_INFO_UiUi_PX01(uVar1,2);
  iVar2 = GetAlbumPhotoNo__Fv();
  _fixed_array_verifyrange__H1Z11PICTURE_WRK_UiUi_PX01(iVar2,0x10);
  if ((*(byte *)((int)(album_info.field0_0x0.m_aData[uVar1].album_info.pic.field0_0x0.m_aData +
                      iVar2) + 2) & 1) != 0) {
    _fixed_array_verifyrange__H1Z10ALBUM_INFO_UiUi_PX01(uVar1 ^ 1,2);
    uVar3 = (uint)(album_info.field0_0x0.m_aData[uVar1 ^ 1].album_type != 5);
  }
                    /* end of inlined section */
  return uVar3;
}

static int CheckAlbumMenuDelCondition() {
	int res;
	int current_album;
	
  int iVar1;
  int iVar2;
  ALBUM_INFO *pAVar3;
  uint uVar4;
  
  uVar4 = 0;
  iVar1 = GetCurrentAlbum__Fv();
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  _fixed_array_verifyrange__H1Z10ALBUM_INFO_UiUi_PX01(iVar1,2);
  pAVar3 = album_info.field0_0x0.m_aData + iVar1;
  iVar2 = GetAlbumPhotoNo__Fv();
  _fixed_array_verifyrange__H1Z11PICTURE_WRK_UiUi_PX01(iVar2,0x10);
  if ((*(byte *)((int)((pAVar3->album_info).pic.field0_0x0.m_aData + iVar2) + 2) & 1) != 0) {
    _fixed_array_verifyrange__H1Z10ALBUM_INFO_UiUi_PX01(iVar1,2);
    uVar4 = (uint)(pAVar3->album_type != 5);
  }
                    /* end of inlined section */
  return uVar4;
}

static int CheckAlbumMenuSortCondition() {
	int current_album;
	
  int iVar1;
  
  iVar1 = GetCurrentAlbum__Fv();
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  _fixed_array_verifyrange__H1Z10ALBUM_INFO_UiUi_PX01(iVar1,2);
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  return (int)(album_info.field0_0x0.m_aData[iVar1].album_info.pic_num != '\0');
}

static int CheckAlbumMenuSaveCondition() {
	int current_album;
	
  int iVar1;
  
  iVar1 = GetCurrentAlbum__Fv();
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  _fixed_array_verifyrange__H1Z10ALBUM_INFO_UiUi_PX01(iVar1,2);
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  return (int)(album_info.field0_0x0.m_aData[iVar1].album_type != 5);
}

static int CheckAlbumMenuLoadCondition() {
	int current_album;
	
  int iVar1;
  
  iVar1 = GetCurrentAlbum__Fv();
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  _fixed_array_verifyrange__H1Z10ALBUM_INFO_UiUi_PX01(iVar1,2);
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  return (int)(album_info.field0_0x0.m_aData[iVar1].album_type != 5);
}

static void AlbumEditDispInit() {
  album_edit_disp.album_flare_timer = '\0';
  album_edit_disp.anim_step = '\0';
  album_edit_disp.anim_timer = '\0';
  album_edit_disp.menu_anim_step = '\0';
  album_edit_disp.menu_anim_timer = '\0';
  album_edit_disp.sort_anim_step = '\0';
  album_edit_disp.sort_anim_timer = '\0';
  album_edit_disp.copy_csr_timer = '\0';
  album_edit_disp.del_csr_timer = '\0';
  return;
}

void AlbumEditDispMain() {
	u_char alpha;
	void *album_cmn_tex_addr;
	
  void *tm2_addr;
  uchar alpha;
  
  tm2_addr = GetAlbumCmnTexAddr__Fv();
  alpha = 0x80;
  if ((byte)album_edit_ctrl.step - 2 < 2) {
    AlbumInOutAnimCtrl__FPcT0PUc(&album_edit_disp.anim_step,&album_edit_disp.anim_timer,&alpha);
    PK2SendVram__FUiiii((uint)tm2_addr,-1,-1,0);
    if ((album_edit_disp.anim_step != '\x04') &&
       ((code *)album_edit_mode_disp[album_edit_ctrl.mode] != (code *)0x0)) {
      (*(code *)album_edit_mode_disp[album_edit_ctrl.mode])(0,0,alpha);
    }
  }
  return;
}

static void AlbumEditBaseDisp(int album_data, int photo_no, int off_x, int off_y, u_char alpha) {
	int i;
	void *album_cmn_tex_addr;
	void *album_edit_tex_addr;
	
  fixed_array_base<ALBUM_INFO,2,ALBUM_INFO[2]> *pfVar1;
  void *tm2_addr;
  void *tm2_addr_00;
  int iVar2;
  ALBUM_INFO *pAVar3;
  int iVar4;
  fixed_array<ALBUM_INFO,2> *pfVar5;
  
  tm2_addr = GetAlbumCmnTexAddr__Fv();
  tm2_addr_00 = GetAlbumEditTexAddr__Fv();
  PK2SendVram__FUiiii((uint)tm2_addr,-1,-1,0);
  pfVar5 = &album_info;
  iVar4 = 0;
  do {
    AlbumThumbnailBaseDisp__FiiiUc(iVar4,0,0,alpha);
    AlbumThumbnailBaseNumberDisp__FiiiUc(iVar4,0,0,alpha);
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Z10ALBUM_INFO_UiUi_PX01(iVar4,2);
    pfVar1 = (fixed_array_base<ALBUM_INFO,2,ALBUM_INFO[2]> *)&((ALBUM_INFO *)pfVar5)->album_type;
                    /* end of inlined section */
    pfVar5 = (fixed_array<ALBUM_INFO,2> *)((int)pfVar5 + 0x20c);
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    AlbumEditAlbumDisp__FiiiiUc(iVar4,pfVar1->m_aData[0].album_type,0,0,alpha);
                    /* end of inlined section */
    iVar2 = iVar4 + 1;
    AlbumEditAlbumThumbnailDisp__FiiiUc(iVar4,0,0,alpha);
    iVar4 = iVar2;
  } while (iVar2 < 2);
  PK2SendVram__FUiiii((uint)tm2_addr_00,-1,-1,0);
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  _fixed_array_verifyrange__H1Z10ALBUM_INFO_UiUi_PX01(album_data,2);
  pAVar3 = album_info.field0_0x0.m_aData + album_data;
  AlbumEditAlbumInfoWinDisp__FiiiUc(pAVar3->album_type,0,0,alpha);
                    /* end of inlined section */
  PK2SendVram__FUiiii((uint)tm2_addr_00,-1,-1,0);
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  _fixed_array_verifyrange__H1Z10ALBUM_INFO_UiUi_PX01(album_data,2);
  AlbumEditInfoNoDisp__FiiiUc(pAVar3->album_type,0,0,alpha);
                    /* end of inlined section */
  PK2SendVram__FUiiii((uint)tm2_addr,-1,-1,0);
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  _fixed_array_verifyrange__H1Z10ALBUM_INFO_UiUi_PX01(album_data,2);
  AlbumEditInfoPhotoNoDisp__FiiiiUc(pAVar3->album_type,photo_no,0xdb,0x9c,alpha);
                    /* end of inlined section */
  AlbumEditFrameDisp__FiiUc(0,0,alpha);
  AlbumEditPhotoDisp__FiiiiUc(album_data,photo_no,0,0,alpha);
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  _fixed_array_verifyrange__H1Z10ALBUM_INFO_UiUi_PX01(album_data,2);
  if (pAVar3->album_type == 5) {
    _fixed_array_verifyrange__H1Z10ALBUM_INFO_UiUi_PX01(album_data,2);
    _fixed_array_verifyrange__H1Z11PICTURE_WRK_UiUi_PX01(photo_no,0x10);
    iVar4 = album_data * 0x20c + 0x2d4378 + photo_no * 0x20;
    if ((*(byte *)(iVar4 + 2) & 1) != 0) {
      _fixed_array_verifyrange__H1Z10ALBUM_INFO_UiUi_PX01(album_data,2);
      _fixed_array_verifyrange__H1Z11PICTURE_WRK_UiUi_PX01(photo_no,0x10);
      if ((*(byte *)(iVar4 + 2) & 2) != 0) {
                    /* end of inlined section */
        AlbumEditPhotoProtectionFrameDisp__FiiUc(0,0,alpha);
      }
    }
  }
  return;
}

static void AlbumEditAlbumThumbnailDisp(int data_label, int off_x, int off_y, u_char alpha) {
	int i;
	int j;
	int photo_num;
	static int thumbnail_x_tbl[2] = {
		/* [0] = */ 207,
		/* [1] = */ 36
	};
	static int thumbnail_y_tbl[2] = {
		/* [0] = */ 80,
		/* [1] = */ 338
	};
	
  void *addr;
  fixed_array<PICTURE_WRK,16> *pfVar1;
  ALBUM_INFO *pAVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int i;
  
  i = 0;
  pAVar2 = album_info.field0_0x0.m_aData + data_label;
  iVar5 = 0;
  iVar6 = 0;
  do {
    iVar4 = 0;
    pfVar1 = &(pAVar2->album_info).pic;
    iVar3 = 7;
    do {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
      _fixed_array_verifyrange__H1Z10ALBUM_INFO_UiUi_PX01(data_label,2);
      _fixed_array_verifyrange__H1Z11PICTURE_WRK_UiUi_PX01(iVar5,0x10);
      if (((pfVar1->field0_0x0).m_aData[0].status & 1) != 0) {
                    /* end of inlined section */
        addr = GetAlbumDataAddr__Fi(data_label);
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
        _fixed_array_verifyrange__H1Z10ALBUM_INFO_UiUi_PX01(data_label,2);
        _fixed_array_verifyrange__H1Z11PICTURE_WRK_UiUi_PX01(iVar5,0x10);
        DrawSPhotoFromSmallPhotoAreaAddr2__FiiiiiiiiUc
                  ((int)addr,(uint)(pfVar1->field0_0x0).m_aData[0].adr_no,0,0,
                   *(int *)((int)&thumbnail_x_tbl_1099 + data_label * 4) + off_x + iVar4,
                   *(int *)((int)&thumbnail_y_tbl_1100 + data_label * 4) + off_y + iVar6,0x2d,0x1e,
                   (uint)alpha);
      }
                    /* end of inlined section */
      iVar3 = iVar3 + -1;
      pfVar1 = (fixed_array<PICTURE_WRK,16> *)((pfVar1->field0_0x0).m_aData + 1);
      pAVar2 = (ALBUM_INFO *)((int)&(pAVar2->album_info).pic.field0_0x0.m_aData[0].time + 4);
      iVar5 = iVar5 + 1;
      iVar4 = iVar4 + 0x32;
    } while (-1 < iVar3);
    iVar6 = iVar6 + 0x23;
    i = i + 1;
  } while (i < 2);
  return;
}

static void AlbumEditThumbnailProtectionFrameDisp(int data_label, int off_x, int off_y, u_char alpha) {
	int i;
	int j;
	int photo_num;
	float x;
	DISP_SPRT protect_ds;
	
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  DISP_SPRT protect_ds;
  
  iVar3 = 0;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  _fixed_array_verifyrange__H1Z10ALBUM_INFO_UiUi_PX01(data_label,2,off_y);
  if (album_info.field0_0x0.m_aData[data_label].album_type == 5) {
                    /* end of inlined section */
    iVar6 = 0;
    iVar5 = 0x51;
    do {
      iVar4 = 0xd0;
      iVar2 = 7;
      iVar1 = iVar3 * 0x20 + data_label * 0x20c + 0x2d4378;
      do {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
        _fixed_array_verifyrange__H1Z10ALBUM_INFO_UiUi_PX01(data_label,2);
        _fixed_array_verifyrange__H1Z11PICTURE_WRK_UiUi_PX01(iVar3,0x10);
        if ((*(byte *)(iVar1 + 2) & 1) != 0) {
          _fixed_array_verifyrange__H1Z10ALBUM_INFO_UiUi_PX01(data_label,2);
          _fixed_array_verifyrange__H1Z11PICTURE_WRK_UiUi_PX01(iVar3,0x10);
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
          if ((*(byte *)(iVar1 + 2) & 2) != 0) {
                    /* end of inlined section */
            CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&protect_ds,album_tex + 0x7d);
            protect_ds.y = (float)iVar5;
            protect_ds.x = (float)iVar4 + (float)off_x;
            protect_ds.alpha = (uchar)((int)((uint)protect_ds.alpha * (uint)alpha) >> 7);
            DispSprD__FP9DISP_SPRT(&protect_ds);
          }
        }
        iVar2 = iVar2 + -1;
        iVar1 = iVar1 + 0x20;
        iVar3 = iVar3 + 1;
        iVar4 = iVar4 + 0x32;
      } while (-1 < iVar2);
      iVar6 = iVar6 + 1;
      iVar5 = iVar5 + 0x23;
    } while (iVar6 < 2);
  }
  return;
}

static void AlbumEditPhotoDisp(int album_data, int photo_no, int off_x, int off_y, u_char alpha) {
  void *pvVar1;
  byte *pbVar2;
  
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  _fixed_array_verifyrange__H1Z10ALBUM_INFO_UiUi_PX01(album_data,2,off_x,off_y);
  _fixed_array_verifyrange__H1Z11PICTURE_WRK_UiUi_PX01(photo_no,0x10);
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  pbVar2 = (byte *)(album_data * 0x20c + 0x2d4378 + photo_no * 0x20);
  if ((pbVar2[2] & 1) != 0) {
                    /* end of inlined section */
    if (album_edit_ctrl.photo_flg == '\0') {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
      _fixed_array_verifyrange__H1Z10ALBUM_INFO_UiUi_PX01(album_data,2);
      _fixed_array_verifyrange__H1Z11PICTURE_WRK_UiUi_PX01(photo_no,0x10);
      UncompressPhoto__Fi((uint)*pbVar2);
                    /* end of inlined section */
      album_edit_ctrl.photo_flg = '\x01';
    }
    if (album_edit_ctrl.photo_flg == '\x01') {
      pvVar1 = GetAlbumDataAddr__Fi(album_data);
      DrawPhotoFromWorkAreaAddr__FiiiiiiiUc((int)pvVar1,0,1,0x40,0xbe,0xc4,0x80,alpha);
      pvVar1 = GetAlbumCmnTexAddr__Fv();
      AlbumEditPhotoFrameDisp__FiiUcPv(0,0,alpha,pvVar1);
    }
  }
  return;
}

static void AlbumEditPhotoInfoDisp(int album_data, int photo_no, int off_x, int off_y, u_char alpha) {
	static char __FUNCTION__[23] = {
		/* [0] = */ 65,
		/* [1] = */ 108,
		/* [2] = */ 98,
		/* [3] = */ 117,
		/* [4] = */ 109,
		/* [5] = */ 69,
		/* [6] = */ 100,
		/* [7] = */ 105,
		/* [8] = */ 116,
		/* [9] = */ 80,
		/* [10] = */ 104,
		/* [11] = */ 111,
		/* [12] = */ 116,
		/* [13] = */ 111,
		/* [14] = */ 73,
		/* [15] = */ 110,
		/* [16] = */ 102,
		/* [17] = */ 111,
		/* [18] = */ 68,
		/* [19] = */ 105,
		/* [20] = */ 115,
		/* [21] = */ 112,
		/* [22] = */ 0
	};
	int i;
	int subject_num;
	int msg_y;
	DATE_INFO date;
	
  short sVar1;
  void *tm2_addr;
  int iVar2;
  short *psVar3;
  int iVar4;
  int iVar5;
  short *psVar6;
  DATE_INFO date;
  
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  iVar5 = 0;
  tm2_addr = GetAlbumEditTexAddr__Fv();
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* end of inlined section */
  PK2SendVram__FUiiii((uint)tm2_addr,-1,-1,0);
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  _fixed_array_verifyrange__H1Z10ALBUM_INFO_UiUi_PX01(album_data,2);
  AlbumEditAlbumInfoWinItemDisp__FiiiUc
            (album_info.field0_0x0.m_aData[album_data].album_type,0,0,alpha);
  _fixed_array_verifyrange__H1Z10ALBUM_INFO_UiUi_PX01(album_data,2);
  _fixed_array_verifyrange__H1Z11PICTURE_WRK_UiUi_PX01(photo_no,0x10);
  psVar6 = (short *)(album_data * 0x20c + 0x2d4378 + photo_no * 0x20);
  if ((*(byte *)(psVar6 + 1) & 1) != 0) {
    _fixed_array_verifyrange__H1Z10ALBUM_INFO_UiUi_PX01(album_data,2);
    _fixed_array_verifyrange__H1Z11PICTURE_WRK_UiUi_PX01(photo_no,0x10);
                    /* end of inlined section */
    SetDateInfoType__FP9DATE_INFOP10sceCdCLOCK(&date,(sceCdCLOCK *)(psVar6 + 10));
    if ((ushort)psVar6[0xe] < 0xf0) {
      PrintMsg__Fiiiiiii(0x4a,(int)psVar6[0xe],off_x + 0x14e,off_y + 0xad,2,(uint)alpha,0);
    }
    iVar2 = off_y + 199;
    PrintNumber_N__FiiiiUcUciUcUc(date.day.year,2,off_x + 0x1a4,iVar2,'\x02',alpha,0,'\x01',1);
    PrintMsg__Fiiiiiii(8,1,off_x + 0x16c,iVar2,2,(uint)alpha,0xa0);
    PrintNumber_N__FiiiiUcUciUcUc(date.day.month,2,off_x + 0x17a,iVar2,'\x02',alpha,0,'\x01',1);
    PrintMsg__Fiiiiiii(8,1,off_x + 0x196,iVar2,2,(uint)alpha,0xa0);
    PrintNumber_N__FiiiiUcUciUcUc(date.day.day,2,off_x + 0x150,iVar2,'\x02',alpha,0,'\x01',1);
    PrintNumber_N__FiiiiUcUciUcUc(date.time.hour,2,off_x + 0x1d1,iVar2,'\x02',alpha,0,'\x01',1);
    PrintMsg__Fiiiiiii(8,0,off_x + 0x1ee,iVar2,2,(uint)alpha,0xa0);
    PrintNumber_N__FiiiiUcUciUcUc(date.time.min,2,off_x + 0x1f9,iVar2,'\x02',alpha,0,'\x01',1);
    PrintMsg__Fiiiiiii(8,0,off_x + 0x216,iVar2,2,(uint)alpha,0xa0);
    PrintNumber_N__FiiiiUcUciUcUc(date.time.sec,2,off_x + 0x221,iVar2,'\x02',alpha,0,'\x01',1);
    PrintNumber_N__FiiiiUcUciUcUc
              (*(int *)(psVar6 + 8),5,off_x + 0x1c0,off_y + 0xdf,'\x02',alpha,0,'\0',0);
    PrintMsg__Fiiiiiii(8,2,off_x + 0x21c,off_y + 0xdf,2,(uint)alpha,0);
    psVar3 = psVar6;
    iVar2 = 0;
    while (psVar3 = psVar3 + 2, iVar2 < 3) {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
      _fixed_array_verifyrange__H1Z16_PICTURE_SUBJECT_UiUi_PX01(iVar2,3);
      if (*psVar3 < 0) break;
      iVar5 = iVar5 + 1;
      iVar2 = iVar2 + 1;
    }
    iVar2 = 0x100;
    if (iVar5 != 2) {
      if (iVar5 < 3) {
        iVar4 = 1;
        iVar2 = 0x10c;
      }
      else {
        iVar4 = 3;
        iVar2 = 0xf4;
      }
      if (iVar5 != iVar4) {
        iVar2 = 0xf4;
      }
    }
    iVar5 = iVar2 + off_y;
                    /* end of inlined section */
    for (iVar4 = 0; iVar4 < 3; iVar4 = iVar4 + 1) {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
      psVar3 = psVar6 + iVar4 * 2 + 2;
      _fixed_array_verifyrange__H1Z16_PICTURE_SUBJECT_UiUi_PX01(iVar4,3);
      if (*psVar3 < 0) {
        return;
      }
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
      _fixed_array_verifyrange__H1Z16_PICTURE_SUBJECT_UiUi_PX01(iVar4,3);
      if (psVar3[1] < 0) {
LAB_0012321c:
                    /* end of inlined section */
        SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
        _fixed_array_verifyrange__H1Z16_PICTURE_SUBJECT_UiUi_PX01(iVar4,3);
        PrintAssertReal("Error! %s msg_id %d");
      }
      else {
        _fixed_array_verifyrange__H1Z16_PICTURE_SUBJECT_UiUi_PX01(iVar4,3);
        sVar1 = psVar3[1];
        _fixed_array_verifyrange__H1Z16_PICTURE_SUBJECT_UiUi_PX01(iVar4,3);
        iVar2 = GetMsgIDNumMax__Fi((int)*psVar3);
        if ((long)iVar2 <= (long)sVar1) goto LAB_0012321c;
      }
      _fixed_array_verifyrange__H1Z16_PICTURE_SUBJECT_UiUi_PX01(iVar4,3);
      sVar1 = *psVar3;
      _fixed_array_verifyrange__H1Z16_PICTURE_SUBJECT_UiUi_PX01(iVar4,3);
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
      PrintMsg__Fiiiiiii((int)sVar1,(int)psVar3[1],off_x + 0x14e,iVar5,2,(uint)alpha,0);
      iVar5 = iVar5 + 0x18;
    }
  }
  return;
}

static void AlbumEditMenuDisp(int album_data, int album_type, int off_x, int off_y, u_char alpha) {
	int i;
	int menu_num;
	int frame_top_y;
	int item_top_y;
	float sel_frame_scl;
	float non_sel_frame_scl;
	void *album_edit_tex_addr;
	static int menu_item_x[5] = {
		/* [0] = */ 9,
		/* [1] = */ 9,
		/* [2] = */ 9,
		/* [3] = */ 9,
		/* [4] = */ 9
	};
	
  void *tm2_addr;
  int iVar1;
  int menu_label;
  int iVar2;
  long lVar3;
  int iVar4;
  int *piVar5;
  uchar local_50 [4];
  float sel_frame_scl;
  float non_sel_frame_scl;
  
  iVar4 = 0;
  local_50[0] = alpha;
  tm2_addr = GetAlbumEditTexAddr__Fv();
  iVar1 = 0;
  do {
    iVar2 = iVar1 + 1;
    iVar1 = CheckAlbumMenuCondition__Fi(iVar1);
    if (iVar1 != 0) {
      iVar4 = iVar4 + 1;
    }
    iVar1 = iVar2;
  } while (iVar2 < 5);
  iVar1 = iVar4 * -0x11 + 0xf2;
  iVar4 = iVar4 * -0x11 + 0xee;
  local_50[0] = 0x80;
  sel_frame_scl = DAT_003ed8fc;
  lVar3 = 0;
  non_sel_frame_scl = 1.0;
  AlbumEditMenuAnimCtrl__FPcT0PUcPfT3
            (&album_edit_disp.menu_anim_step,&album_edit_disp.menu_anim_timer,local_50,
             &sel_frame_scl,&non_sel_frame_scl);
  piVar5 = &menu_item_x_1113;
  do {
    menu_label = (int)lVar3;
    iVar2 = CheckAlbumMenuCondition__Fi(menu_label);
    if (iVar2 != 0) {
      if (album_edit_ctrl.menu_csr == lVar3) {
        AlbumMenuSelFrameDisp__FiiiUcfUc(album_data,0xc,iVar4,local_50[0],sel_frame_scl,0x80);
      }
      else {
        AlbumMenuNonSelFrameDisp__FiiiUcf(album_data,0xc,iVar4,local_50[0],non_sel_frame_scl);
      }
      PK2SendVram__FUiiii((uint)tm2_addr,-1,-1,0);
      iVar4 = iVar4 + 0x23;
      AlbumMenuItemDisp__FiiiUc(menu_label,*piVar5,iVar1,local_50[0]);
      iVar1 = iVar1 + 0x23;
    }
    lVar3 = (long)(menu_label + 1);
    piVar5 = piVar5 + 1;
  } while (lVar3 < 5);
  return;
}

static void AlbumEditTopDisp(int off_x, int off_y, u_char alpha) {
	void *album_cmn_tex_addr;
	int current_album;
	int photo_no;
	
  void *tm2_addr;
  int album_data;
  int photo_no;
  
  tm2_addr = GetAlbumCmnTexAddr__Fv();
  album_data = GetCurrentAlbum__Fv();
  photo_no = GetAlbumPhotoNo__Fv();
  AlbumEditBaseDisp__FiiiiUc(album_data,photo_no,0,0,alpha);
  PK2SendVram__FUiiii((uint)tm2_addr,-1,-1,0);
  if (album_data == 0) {
    AlbumEditAlbumACursorDisp__FiiiUcUc(photo_no,0,0,alpha,0x80);
    AlbumA_CurrentFrameFlareDisp__FiiUcUc(0,0,alpha,0x80);
  }
  else {
    AlbumEditAlbumBCursorDisp__FiiiUcUc(photo_no,0,0,alpha,0x80);
    AlbumB_CurrentFrameFlareDisp__FiiUcUc(0,0,alpha,0x80);
  }
  AlbumEditThumbnailProtectionFrameDisp__FiiiUc(0,0,0,alpha);
  AlbumEditPhotoInfoDisp__FiiiiUc(album_data,photo_no,0,0,alpha);
  AlbumEditCaptionDisp__FiiUc(0,0,alpha);
  return;
}

static void AlbumEditTopMenuDisp(int off_x, int off_y, u_char alpha) {
	void *album_cmn_tex_addr;
	int current_album;
	int photo_no;
	
  void *tm2_addr;
  int album_data;
  int photo_no;
  int album_data_00;
  int iVar1;
  
  tm2_addr = GetAlbumCmnTexAddr__Fv();
  album_data = GetCurrentAlbum__Fv();
  photo_no = GetAlbumPhotoNo__Fv();
  AlbumEditBaseDisp__FiiiiUc(album_data,photo_no,0,0,alpha);
  PK2SendVram__FUiiii((uint)tm2_addr,-1,-1,0);
  if (album_data == 0) {
    AlbumEditAlbumACursorDisp__FiiiUcUc(photo_no,0,0,alpha,0x80);
    AlbumA_CurrentFrameFlareDisp__FiiUcUc(0,0,alpha,0x80);
  }
  else {
    AlbumEditAlbumBCursorDisp__FiiiUcUc(photo_no,0,0,alpha,0x80);
    AlbumB_CurrentFrameFlareDisp__FiiUcUc(0,0,alpha,0x80);
  }
  AlbumEditThumbnailProtectionFrameDisp__FiiiUc(0,0,0,alpha);
  album_data_00 = GetCurrentAlbum__Fv();
  iVar1 = GetCurrentAlbum__Fv();
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  _fixed_array_verifyrange__H1Z10ALBUM_INFO_UiUi_PX01(iVar1,2);
  AlbumEditMenuDisp__FiiiiUc
            (album_data_00,album_info.field0_0x0.m_aData[iVar1].album_type,off_x,off_y,alpha);
                    /* end of inlined section */
  PK2SendVram__FUiiii((uint)tm2_addr,-1,-1,0);
  AlbumEditPhotoInfoDisp__FiiiiUc(album_data,photo_no,0,0,alpha);
  AlbumEditCaptionDisp__FiiUc(0,0,alpha);
  return;
}

static void AlbumEditSortDisp(int off_x, int off_y, u_char alpha) {
	void *album_cmn_tex_addr;
	int current_album;
	int photo_no;
	
  void *tm2_addr;
  int album_data;
  int photo_no;
  
  tm2_addr = GetAlbumCmnTexAddr__Fv();
  album_data = GetCurrentAlbum__Fv();
  photo_no = GetAlbumPhotoNo__Fv();
  AlbumEditBaseDisp__FiiiiUc(album_data,photo_no,0,0,alpha);
  PK2SendVram__FUiiii((uint)tm2_addr,-1,-1,0);
  if (album_data == 0) {
    AlbumEditAlbumACursorDisp__FiiiUcUc(photo_no,0,0,alpha,0x80);
    AlbumA_CurrentFrameFlareDisp__FiiUcUc(0,0,alpha,0x80);
  }
  else {
    AlbumEditAlbumBCursorDisp__FiiiUcUc(photo_no,0,0,alpha,0x80);
    AlbumB_CurrentFrameFlareDisp__FiiUcUc(0,0,alpha,0x80);
  }
  AlbumEditThumbnailProtectionFrameDisp__FiiiUc(0,0,0,alpha);
  AlbumEditSortMenuDisp__FiiUc(0,0,alpha);
  AlbumEditPhotoInfoDisp__FiiiiUc(album_data,photo_no,0,0,alpha);
  AlbumEditCaptionDisp__FiiUc(0,0,alpha);
  return;
}

static void AlbumEditSortMenuDisp(int off_x, int off_y, u_char alpha) {
	DISP_SPRT sort_ds;
	int i;
	int current_album;
	float sel_frame_scl;
	float non_sel_frame_scl;
	static int sort_x_tbl[2] = {
		/* [0] = */ 9,
		/* [1] = */ 9
	};
	
  int data_label;
  void *tm2_addr;
  int y;
  int y_00;
  int iVar1;
  long lVar2;
  int *piVar3;
  int iVar4;
  byte local_100 [16];
  DISP_SPRT sort_ds;
  float sel_frame_scl;
  float non_sel_frame_scl;
  
  lVar2 = 0;
  piVar3 = &sort_x_tbl_1126;
  iVar4 = 0xe4;
  local_100[0] = alpha;
  data_label = GetCurrentAlbum__Fv();
  tm2_addr = GetAlbumEditTexAddr__Fv();
  PK2SendVram__FUiiii((uint)tm2_addr,-1,-1,0);
  sel_frame_scl = DAT_003ed900;
  non_sel_frame_scl = 1.0;
  AlbumEditMenuAnimCtrl__FPcT0PUcPfT3
            (&album_edit_disp.sort_anim_step,&album_edit_disp.sort_anim_timer,local_100,
             &sel_frame_scl,&non_sel_frame_scl);
  AlbumMenuSelFrameDisp__FiiiUcfUc
            (data_label,off_x + 0xc,off_y + 0xbd,local_100[0],sel_frame_scl,0x80);
  CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&sort_ds,album_tex + 0x6f);
  sort_ds.y = (float)(off_y + 0xc1);
  sort_ds.x = (float)(off_x + 9);
  y_00 = 0xe0;
  y = 0xe0;
  sort_ds.alpha = (uchar)((int)((uint)sort_ds.alpha * (uint)local_100[0]) >> 7);
  DispSprD__FP9DISP_SPRT(&sort_ds);
  do {
    if (album_edit_ctrl.sort_csr == lVar2) {
      AlbumMenuSelFrameDisp__FiiiUcfUc(data_label,0xc,y,local_100[0],non_sel_frame_scl,0x80);
    }
    else {
      AlbumMenuNonSelFrameDisp__FiiiUcf(data_label,0xc,y_00,local_100[0],non_sel_frame_scl);
    }
    iVar1 = (int)lVar2;
    lVar2 = (long)(iVar1 + 1);
    CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&sort_ds,album_tex + iVar1 + 0x72);
    sort_ds.y = (float)iVar4;
    sort_ds.x = (float)(*piVar3 + off_x);
    y_00 = y_00 + 0x23;
    y = y + 0x23;
    iVar4 = iVar4 + 0x23;
    piVar3 = piVar3 + 1;
    sort_ds.alpha = (uchar)((int)((uint)sort_ds.alpha * (uint)local_100[0]) >> 7);
    DispSprD__FP9DISP_SPRT(&sort_ds);
  } while (lVar2 < 2);
  return;
}

static void AlbumEditCopyPosSelDisp(int off_x, int off_y, u_char alpha) {
	void *album_cmn_tex_addr;
	int photo_no;
	u_char csr_rgb;
	
  char cVar1;
  char cVar2;
  void *tm2_addr;
  uchar csr_rgb;
  
  tm2_addr = GetAlbumCmnTexAddr__Fv();
  cVar2 = album_copy_ctrl.photo_no;
  csr_rgb = 0x80;
  AlbumEditBaseDisp__FiiiiUc
            ((int)(char)(album_copy_ctrl.album_data ^ 1),(int)album_copy_ctrl.photo_no,0,0,alpha);
  PK2SendVram__FUiiii((uint)tm2_addr,-1,-1,0);
  if (album_copy_ctrl.album_data == '\0') {
    AlbumEditAlbumACursorDisp__FiiiUcUc((int)album_copy_ctrl.copy_photo_no,0,0,alpha,0x80);
    AlbumA_CurrentFrameFlareDisp__FiiUcUc(0,0,alpha,0x80);
  }
  else {
    AlbumEditAlbumBCursorDisp__FiiiUcUc((int)album_copy_ctrl.copy_photo_no,0,0,alpha,0x80);
    AlbumB_CurrentFrameFlareDisp__FiiUcUc(0,0,alpha,0x80);
  }
  Zero2Anim2D_CsrAnimCtrl__FPcPUc(&album_edit_disp.copy_csr_timer,&csr_rgb);
  if (album_copy_ctrl.album_data == '\x01') {
    AlbumEditAlbumACursorDisp__FiiiUcUc((int)album_copy_ctrl.photo_no,0,0,alpha,csr_rgb);
  }
  else {
    AlbumEditAlbumBCursorDisp__FiiiUcUc((int)album_copy_ctrl.photo_no,0,0,alpha,csr_rgb);
  }
  cVar1 = album_copy_ctrl.album_data;
  if (album_copy_ctrl.short_cut_flg == '\0') {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Z10ALBUM_INFO_UiUi_PX01(album_copy_ctrl.album_data,2);
    AlbumEditMenuDisp__FiiiiUc
              ((int)album_copy_ctrl.album_data,
               *(int *)((int)&album_info + (cVar1 * 0x84 - (int)cVar1) * 4),off_x,off_y,alpha);
                    /* end of inlined section */
    PK2SendVram__FUiiii((uint)tm2_addr,-1,-1,0);
  }
  AlbumEditThumbnailProtectionFrameDisp__FiiiUc(0,0,0,alpha);
  AlbumEditPhotoInfoDisp__FiiiiUc((int)(char)(album_copy_ctrl.album_data ^ 1),(int)cVar2,0,0,alpha);
  AlbumEditCaptionDisp__FiiUc(0,0,alpha);
  return;
}

static void AlbumEditCopyConfDisp(int off_x, int off_y, u_char alpha) {
	void *album_cmn_tex_addr;
	void *album_edit_tex_addr;
	int photo_no;
	u_char csr_rgb;
	
  char cVar1;
  void *tm2_addr;
  void *tm2_addr_00;
  uchar csr_rgb;
  
  tm2_addr = GetAlbumCmnTexAddr__Fv();
  tm2_addr_00 = GetAlbumEditTexAddr__Fv();
  csr_rgb = 0x80;
  AlbumEditBaseDisp__FiiiiUc
            ((int)album_copy_ctrl.album_data,(int)album_copy_ctrl.copy_photo_no,0,0,alpha);
  PK2SendVram__FUiiii((uint)tm2_addr,-1,-1,0);
  if (album_copy_ctrl.album_data == '\0') {
    AlbumEditAlbumACursorDisp__FiiiUcUc((int)album_copy_ctrl.copy_photo_no,0,0,alpha,0x80);
    AlbumA_CurrentFrameFlareDisp__FiiUcUc(0,0,alpha,0x80);
  }
  else {
    AlbumEditAlbumBCursorDisp__FiiiUcUc((int)album_copy_ctrl.copy_photo_no,0,0,alpha,0x80);
    AlbumB_CurrentFrameFlareDisp__FiiUcUc(0,0,alpha,0x80);
  }
  Zero2Anim2D_CsrAnimCtrl__FPcPUc(&album_edit_disp.copy_csr_timer,&csr_rgb);
  if (album_copy_ctrl.album_data == '\x01') {
    AlbumEditAlbumACursorDisp__FiiiUcUc((int)album_copy_ctrl.photo_no,0,0,alpha,csr_rgb);
  }
  else {
    AlbumEditAlbumBCursorDisp__FiiiUcUc((int)album_copy_ctrl.photo_no,0,0,alpha,csr_rgb);
  }
  AlbumEditThumbnailProtectionFrameDisp__FiiiUc(0,0,0,alpha);
  AlbumEditCaptionDisp__FiiUc(0,0,alpha);
  cVar1 = album_copy_ctrl.album_data;
  if (album_copy_ctrl.short_cut_flg == '\0') {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Z10ALBUM_INFO_UiUi_PX01(album_copy_ctrl.album_data,2);
    AlbumEditMenuDisp__FiiiiUc
              ((int)album_copy_ctrl.album_data,
               *(int *)((int)&album_info + (cVar1 * 0x84 - (int)cVar1) * 4),off_x,off_y,alpha);
                    /* end of inlined section */
  }
  PK2SendVram__FUiiii((uint)tm2_addr_00,-1,-1,0);
  AlbumConfYesNoDisp__FiiiUcUc((int)album_edit_ctrl.conf_csr,0,0,alpha,csr_rgb);
  PrintMsg__Fiiiiiii(0,0xd,0x11c,0xb4,0x20,(uint)alpha,0);
  return;
}

static void AlbumEditDelConfDisp(int off_x, int off_y, u_char alpha) {
	void *album_cmn_tex_addr;
	void *album_edit_tex_addr;
	int current_album;
	int photo_no;
	u_char csr_rgb;
	
  void *tm2_addr;
  void *tm2_addr_00;
  int album_data;
  int photo_no;
  uchar csr_rgb;
  
  tm2_addr = GetAlbumCmnTexAddr__Fv();
  tm2_addr_00 = GetAlbumEditTexAddr__Fv();
  album_data = GetCurrentAlbum__Fv();
  photo_no = GetAlbumPhotoNo__Fv();
  csr_rgb = 0x80;
  AlbumEditBaseDisp__FiiiiUc(album_data,photo_no,0,0,alpha);
  PK2SendVram__FUiiii((uint)tm2_addr,-1,-1,0);
  Zero2Anim2D_CsrAnimCtrl__FPcPUc(&album_edit_disp.del_csr_timer,&csr_rgb);
  if (album_data == 0) {
    AlbumEditAlbumACursorDisp__FiiiUcUc(photo_no,0,0,alpha,csr_rgb);
    AlbumA_CurrentFrameFlareDisp__FiiUcUc(0,0,alpha,0x80);
  }
  else {
    AlbumEditAlbumBCursorDisp__FiiiUcUc(photo_no,0,0,alpha,csr_rgb);
    AlbumB_CurrentFrameFlareDisp__FiiUcUc(0,0,alpha,0x80);
  }
  AlbumEditThumbnailProtectionFrameDisp__FiiiUc(0,0,0,alpha);
  AlbumEditCaptionDisp__FiiUc(0,0,alpha);
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  _fixed_array_verifyrange__H1Z10ALBUM_INFO_UiUi_PX01(album_data,2);
  AlbumEditMenuDisp__FiiiiUc
            (album_data,album_info.field0_0x0.m_aData[album_data].album_type,off_x,off_y,alpha);
                    /* end of inlined section */
  PK2SendVram__FUiiii((uint)tm2_addr_00,-1,-1,0);
  AlbumConfYesNoDisp__FiiiUcUc((int)album_edit_ctrl.conf_csr,0,0,alpha,csr_rgb);
  PrintMsg__Fiiiiiii(0,9,0x125,0xb4,0x20,(uint)alpha,0);
  return;
}

static void AlbumEditLoadConfDisp(int off_x, int off_y, u_char alpha) {
	void *album_cmn_tex_addr;
	void *album_edit_tex_addr;
	int current_album;
	int photo_no;
	u_char rgb;
	
  void *tm2_addr;
  void *tm2_addr_00;
  int album_data;
  int photo_no;
  uchar rgb;
  
  tm2_addr = GetAlbumCmnTexAddr__Fv();
  tm2_addr_00 = GetAlbumEditTexAddr__Fv();
  album_data = GetCurrentAlbum__Fv();
  photo_no = GetAlbumPhotoNo__Fv();
  rgb = 0x80;
  AlbumEditBaseDisp__FiiiiUc(album_data,photo_no,0,0,alpha);
  PK2SendVram__FUiiii((uint)tm2_addr,-1,-1,0);
  Zero2Anim2D_CsrAnimCtrl__FPcPUc(&album_edit_disp.album_flare_timer,&rgb);
  if (album_data == 0) {
    AlbumEditAlbumACursorDisp__FiiiUcUc(photo_no,0,0,alpha,0x80);
    AlbumA_CurrentFrameFlareDisp__FiiUcUc(0,0,alpha,rgb);
  }
  else {
    AlbumEditAlbumBCursorDisp__FiiiUcUc(photo_no,0,0,alpha,0x80);
    AlbumB_CurrentFrameFlareDisp__FiiUcUc(0,0,alpha,rgb);
  }
  AlbumEditThumbnailProtectionFrameDisp__FiiiUc(0,0,0,alpha);
  AlbumEditCaptionDisp__FiiUc(0,0,alpha);
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  _fixed_array_verifyrange__H1Z10ALBUM_INFO_UiUi_PX01(album_data,2);
  AlbumEditMenuDisp__FiiiiUc
            (album_data,album_info.field0_0x0.m_aData[album_data].album_type,off_x,off_y,alpha);
                    /* end of inlined section */
  PK2SendVram__FUiiii((uint)tm2_addr_00,-1,-1,0);
  AlbumConfYesNoDisp__FiiiUcUc((int)album_edit_ctrl.conf_csr,0,0,alpha,rgb);
  PrintMsg__Fiiiiiii(0,7,0x125,0xb4,0x20,(uint)alpha,0);
  return;
}

static void AlbumEditSaveDisp(int off_x, int off_y, u_char alpha) {
  AlbumEditTopMenuDisp__FiiUc(off_x,off_y,alpha);
  AlbumSaveDispMain__Fv();
  return;
}

static void AlbumEditLoadDisp(int off_x, int off_y, u_char alpha) {
  AlbumEditLoadConfDisp__FiiUc(off_x,off_y,alpha);
  AlbumLoadDispMain__Fv();
  return;
}

static void AlbumEditExitConfDisp(int off_x, int off_y, u_char alpha) {
	void *album_cmn_tex_addr;
	void *album_edit_tex_addr;
	int current_album;
	int photo_no;
	u_char rgb;
	
  void *tm2_addr;
  void *tm2_addr_00;
  int album_data;
  int photo_no;
  uchar rgb;
  
  tm2_addr = GetAlbumCmnTexAddr__Fv();
  tm2_addr_00 = GetAlbumEditTexAddr__Fv();
  album_data = GetCurrentAlbum__Fv();
  photo_no = GetAlbumPhotoNo__Fv();
  rgb = 0x80;
  AlbumEditBaseDisp__FiiiiUc(album_data,photo_no,0,0,alpha);
  PK2SendVram__FUiiii((uint)tm2_addr,-1,-1,0);
  if (album_data == 0) {
    AlbumEditAlbumACursorDisp__FiiiUcUc(photo_no,0,0,alpha,0x80);
    AlbumA_CurrentFrameFlareDisp__FiiUcUc(0,0,alpha,0x80);
  }
  else {
    AlbumEditAlbumBCursorDisp__FiiiUcUc(photo_no,0,0,alpha,0x80);
    AlbumB_CurrentFrameFlareDisp__FiiUcUc(0,0,alpha,0x80);
  }
  AlbumEditThumbnailProtectionFrameDisp__FiiiUc(0,0,0,alpha);
  AlbumEditCaptionDisp__FiiUc(0,0,alpha);
  PK2SendVram__FUiiii((uint)tm2_addr_00,-1,-1,0);
  Zero2Anim2D_CsrAnimCtrl__FPcPUc(&album_edit_disp.album_flare_timer,&rgb);
  AlbumConfYesNoDisp__FiiiUcUc((int)album_edit_ctrl.conf_csr,0,0,alpha,rgb);
  PrintMsg__Fiiiiiii(0,8,0x118,0xb4,0x20,(uint)alpha,0);
  return;
}

ALBUM_INFO* ALBUM_INFO * _fixed_array_verifyrange<ALBUM_INFO>(size_t v, size_t _max) {
  g3ddbgAssert__FbPCce(false,str_646);
  return (type_info *)v;
}

PICTURE_WRK* PICTURE_WRK * _fixed_array_verifyrange<PICTURE_WRK>(size_t v, size_t _max) {
  g3ddbgAssert__FbPCce(false,str_646);
  return (type_info *)v;
}

PICTURE_SUBJECT* _PICTURE_SUBJECT * _fixed_array_verifyrange<_PICTURE_SUBJECT>(size_t v, size_t _max) {
  g3ddbgAssert__FbPCce(false,str_646);
  return (type_info *)v;
}

type_info& ALBUM_INFO type_info function() {
  g3ddbgAssert__FbPCce(false,str_646);
  return (type_info *)v;
}

type_info& PICTURE_WRK type_info function() {
  g3ddbgAssert__FbPCce(false,str_646);
  return (type_info *)v;
}

type_info& _PICTURE_SUBJECT type_info function() {
  g3ddbgAssert__FbPCce(false,str_646);
  return (type_info *)v;
}
