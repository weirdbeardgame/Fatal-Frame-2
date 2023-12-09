// STATUS: NOT STARTED

#include "menu_top.h"

typedef struct {
	u_char anim_step;
	char anim_timer;
	u_char move_flg;
	int now_time_cnt;
	DATE_INFO now_time;
} MENU_TOP_DISP;

static void *chapter_title_tex_addr = NULL;
static MENU_TOP_DISP menu_top_disp;

static void _fixed_array_assert(char *strType, size_t v0, size_t v1) {
	static char *str = 0x3bed30;
	
  g3ddbgAssert__FbPCce(false,str_849);
  return;
}

static void** void * * _fixed_array_verifyrange<void *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_assert__FPCcUiUi(s_void__003f2fa8,_max,v);
  }
  return (void **)0x0;
}

static char** char * * _fixed_array_verifyrange<char *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_assert__FPCcUiUi(s_char__003f2fb0,_max,v);
  }
  return (char **)0x0;
}

static unsigned int** unsigned int * * _fixed_array_verifyrange<unsigned int *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_assert__FPCcUiUi("unsigned int*",_max,v);
  }
  return (uint **)0x0;
}

static void MenuTopInit() {
  menu_top_disp.move_flg = '\0';
  menu_wrk.cursor = (int)menu_wrk.top_cursor;
  MenuTopDispInit__Fv();
  return;
}

void GetMenuChapterTitleTexMem() {
	int chapter_tex;
	
  uchar uVar1;
  int iVar2;
  int iVar3;
  uint size;
  
  iVar3 = 0x98;
  iVar2 = CheckIngameMission__Fv();
  if (iVar2 == 0) {
    iVar3 = GetMenuChapterTitleTexLabel__Fi((int)ingame_wrk.mChapterNo.mValue);
  }
  if ((chapter_title_tex_addr == (void *)0x0) ||
     (LiberateMenuChapterTitleTexMem__Fv(), chapter_title_tex_addr == (void *)0x0)) {
    uVar1 = GetLanguage__Fv();
    size = GetFileSize(iVar3 + (char)uVar1);
    chapter_title_tex_addr = mem_utilGetMem__Fi(size);
  }
  return;
}

void MenuChapterTitleTexLoadReq() {
	int chapter_tex;
	
  uchar uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0x98;
  iVar2 = CheckIngameMission__Fv();
  if (iVar2 == 0) {
    iVar3 = GetMenuChapterTitleTexLabel__Fi((int)ingame_wrk.mChapterNo.mValue);
  }
  if (chapter_title_tex_addr == (void *)0x0) {
    GetMenuChapterTitleTexMem__Fv();
  }
  uVar1 = GetLanguage__Fv();
  FileLoadReqEE(iVar3 + (char)uVar1,chapter_title_tex_addr,2,(undefined1 *)0x0,(void *)0x0);
  return;
}

static int MenuChapterTitleTexLoadWait() {
	int chapter_tex;
	
  uchar uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0x98;
  iVar2 = CheckIngameMission__Fv();
  if (iVar2 == 0) {
    iVar3 = GetMenuChapterTitleTexLabel__Fi((int)ingame_wrk.mChapterNo.mValue);
  }
  uVar1 = GetLanguage__Fv();
  iVar2 = FileLoadIsEnd2(iVar3 + (char)uVar1,chapter_title_tex_addr);
  return (int)(iVar2 != 0);
}

void MenuTop() {
  int iVar1;
  
  if (menu_wrk.step == '\0') {
    MenuTopInit__Fv();
    menu_wrk.step = '\x01';
  }
  if ((menu_wrk.step == '\x01') && (iVar1 = MenuChapterTitleTexLoadWait__Fv(), iVar1 != 0)) {
    menu_wrk.step = '\x02';
  }
  if (menu_wrk.step == '\x02') {
    MenuTopPad__Fv();
    DebugMenuTopDebugSwitchPad__Fv();
  }
  if ((menu_wrk.step == '\x03') && (menu_top_disp.anim_step == '\x04')) {
    SetNextMenuStep__Fi(menu_wrk.cursor);
  }
  return;
}

static void MenuTopPad() {
	int i;
	
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (((pad[0].rpt & 0x1000U) == 0) && (iVar4 = GetPadAnalogRpt__Fi(0), iVar4 == 0)) {
    if (((pad[0].rpt & 0x4000U) == 0) && (iVar4 = GetPadAnalogRpt__Fi(1), iVar4 == 0)) {
      if (**paddat == 1) {
        if (menu_top_disp.anim_step == '\x02') {
          SystemBankPlay__FiiiiP11_SND_3D_SETii(3,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
          menu_top_disp.move_flg = '\x01';
          menu_wrk.step = '\x03';
          menu_wrk.top_cursor = (uchar)menu_wrk.cursor;
          menu_top_disp.anim_step = '\x03';
          menu_top_disp.anim_timer = '\0';
          MenuTopBackGroundLoadStart__Fv();
          return;
        }
      }
      else if (*paddat[1] == 1) {
        SystemBankPlay__FiiiiP11_SND_3D_SETii(1,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
        menu_wrk.step = '\x04';
        menu_top_disp.anim_step = '\x03';
        menu_top_disp.move_flg = '\0';
        menu_top_disp.anim_timer = '\0';
        MenuOutReq__Fv();
      }
    }
    else if (menu_top_disp.anim_step == '\x02') {
      iVar4 = 0;
      SystemBankPlay__FiiiiP11_SND_3D_SETii(0,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
      bVar1 = true;
      do {
        iVar4 = iVar4 + 1;
        if (!bVar1) {
          return;
        }
        iVar3 = menu_wrk.cursor + 1;
        iVar2 = iVar3;
        if (iVar3 < 0) {
          iVar2 = menu_wrk.cursor + 8;
        }
        menu_wrk.cursor = iVar3 + (iVar2 >> 3) * -8;
        iVar2 = CheckMenuCondition__Fi(menu_wrk.cursor);
        bVar1 = iVar4 < 8;
      } while (iVar2 == 0);
    }
  }
  else if (menu_top_disp.anim_step == '\x02') {
    iVar4 = 0;
    SystemBankPlay__FiiiiP11_SND_3D_SETii(0,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
    bVar1 = true;
    do {
      iVar4 = iVar4 + 1;
      if (!bVar1) {
        return;
      }
      iVar3 = menu_wrk.cursor + 7;
      iVar2 = iVar3;
      if (iVar3 < 0) {
        iVar2 = menu_wrk.cursor + 0xe;
      }
      menu_wrk.cursor = iVar3 + (iVar2 >> 3) * -8;
      iVar2 = CheckMenuCondition__Fi(menu_wrk.cursor);
      bVar1 = iVar4 < 8;
    } while (iVar2 == 0);
  }
  return;
}

static void MenuTopBackGroundLoadStart() {
  switch(menu_wrk.cursor) {
  case 1:
    GetMenuItemTexMem__Fv();
    MenuItemTexLoadReq__Fv();
    return;
  case 3:
    GetMenuPhotoTexMem__Fv();
    MenuPhotoTexLoadReq__Fv();
    return;
  case 4:
    MenuFileTexBackGroundLoad__Fv();
    return;
  case 5:
    GetMenuMemoTexMem__Fv();
    MenuMemoTexLoadReq__Fv();
    return;
  case 6:
    GetMenuRadioTexMem__Fv();
    MenuRadioTexLoadReq__Fv();
    return;
  case 7:
    GetMenuSoulTexMem__Fv();
    MenuSoulTexLoadReq__Fv();
  }
  return;
}

static int CheckMenuCondition(int menu_label) {
	int res;
	
  int iVar1;
  int iVar2;
  
  switch(menu_label) {
  case 2:
    iVar1 = CheckMenuCameraCondition__Fv();
    break;
  default:
    goto switchD_00209214_caseD_3;
  case 4:
    iVar1 = CheckMenuFileCondition__Fv();
    break;
  case 5:
    iVar1 = CheckMenuMemoCondition__Fv();
    break;
  case 6:
    iVar1 = CheckMenuRadioCondition__Fv();
    break;
  case 7:
    iVar1 = CheckMenuSoulCondition__Fv();
  }
  iVar2 = 0;
  if (iVar1 != 0) {
switchD_00209214_caseD_3:
    iVar2 = 1;
  }
  return iVar2;
}

static int CheckMenuCameraCondition() {
  int iVar1;
  
  iVar1 = GetPlyrItemHaveNum__Fi(10);
  return (int)(0 < iVar1);
}

static int CheckMenuFileCondition() {
  int iVar1;
  
  iVar1 = CheckIngameMission__Fv();
  return (int)(iVar1 == 0);
}

static int CheckMenuMemoCondition() {
  int iVar1;
  
  iVar1 = CheckIngameMission__Fv();
  return (int)(iVar1 == 0);
}

static int CheckMenuRadioCondition() {
  int iVar1;
  
  iVar1 = GetPlyrItemHaveNum__Fi(0x32);
  return (int)(0 < iVar1);
}

static int CheckMenuSoulCondition() {
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
                    /* end of inlined section */
  return (int)('\0' < ingame_wrk.mClearCnt.mValue);
}

void LiberateMenuChapterTitleTexMem() {
  if (chapter_title_tex_addr != (void *)0x0) {
    mem_utilFreeMem__FPv(chapter_title_tex_addr);
    chapter_title_tex_addr = (void *)0x0;
  }
  return;
}

static int GetMenuChapterTitleTexLabel(int chapter_no) {
	static int chapter_data[11] = {
		/* [0] = */ 97,
		/* [1] = */ 102,
		/* [2] = */ 107,
		/* [3] = */ 112,
		/* [4] = */ 117,
		/* [5] = */ 122,
		/* [6] = */ 127,
		/* [7] = */ 132,
		/* [8] = */ 137,
		/* [9] = */ 142,
		/* [10] = */ 147
	};
	
  return *(int *)(chapter_data_1018 + chapter_no * 4);
}

static void MenuTopDispInit() {
  menu_top_disp.anim_step = '\0';
  menu_top_disp.anim_timer = '\0';
  menu_top_disp.now_time_cnt = 0;
  memset(&menu_top_disp.now_time,0,0x18);
  return;
}

void MenuTopDisp() {
	u_char alpha;
	
  uchar alpha;
  
  if ((((menu_wrk.step == '\x02') || (menu_wrk.step == '\x04')) || (menu_wrk.step == '\x03')) &&
     (alpha = MenuTopAnimCtrl__Fv(), menu_top_disp.anim_step != '\x04')) {
    MenuTopTitleDisp__FiiUc(0,0,alpha);
    MenuTopSelectDisp__FiiUc(0,0,alpha);
    MenuTopPlayDataDisp__FiiUc(0,0,alpha);
    MenuTopPlyrDataDisp__FiiUc(0,0,alpha);
    MenuTopCaptionDisp__FiiUc(0,0,alpha);
    MenuTopChapterTitleDisp__FiiUc(0,0,alpha);
    MenuTopWindowDisp__FiiUc(0,0,alpha);
  }
  return;
}

static u_char MenuTopAnimCtrl() {
	u_char alpha;
	static ALPHA_ANIM_TBL alpha_tbl[2] = {
		/* [0] = */ {
			/* .start_alpha = */ 0,
			/* .end_alpha = */ 128,
			/* .start_time = */ 0,
			/* .end_time = */ 8
		},
		/* [1] = */ {
			/* .start_alpha = */ -1,
			/* .end_alpha = */ -1,
			/* .start_time = */ -1,
			/* .end_time = */ -1
		}
	};
	static ALPHA_ANIM_TBL move_in_alpha[2] = {
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
	static ALPHA_ANIM_TBL exit_menu_alpha[2] = {
		/* [0] = */ {
			/* .start_alpha = */ 128,
			/* .end_alpha = */ 0,
			/* .start_time = */ 0,
			/* .end_time = */ 8
		},
		/* [1] = */ {
			/* .start_alpha = */ -1,
			/* .end_alpha = */ -1,
			/* .start_time = */ -1,
			/* .end_time = */ -1
		}
	};
	static ALPHA_ANIM_TBL move_menu_alpha[2] = {
		/* [0] = */ {
			/* .start_alpha = */ 128,
			/* .end_alpha = */ 0,
			/* .start_time = */ 0,
			/* .end_time = */ 5
		},
		/* [1] = */ {
			/* .start_alpha = */ -1,
			/* .end_alpha = */ -1,
			/* .start_time = */ -1,
			/* .end_time = */ -1
		}
	};
	
  bool bVar1;
  uchar uVar2;
  
  uVar2 = 0x80;
  if (menu_top_disp.anim_step == '\0') {
    menu_top_disp.anim_timer = '\0';
    menu_top_disp.anim_step = '\x01';
  }
  if (menu_top_disp.anim_step == '\x01') {
    if (menu_top_disp.move_flg == '\0') {
      uVar2 = Anim2D_CalcNowAlpha__FPC14ALPHA_ANIM_TBLi
                        ((ALPHA_ANIM_TBL *)alpha_tbl_1028,(int)menu_top_disp.anim_timer);
      menu_top_disp.anim_timer = menu_top_disp.anim_timer + '\x01';
      if ('\a' < menu_top_disp.anim_timer) {
        menu_top_disp.anim_step = '\x02';
      }
    }
    else {
      uVar2 = Anim2D_CalcNowAlpha__FPC14ALPHA_ANIM_TBLi
                        ((ALPHA_ANIM_TBL *)move_in_alpha_1029,(int)menu_top_disp.anim_timer);
      menu_top_disp.anim_timer = menu_top_disp.anim_timer + '\x01';
      if ('\t' < menu_top_disp.anim_timer) {
        menu_top_disp.anim_step = '\x02';
      }
    }
  }
  else if ((menu_top_disp.anim_step != '\x02') && (menu_top_disp.anim_step == '\x03')) {
    if (menu_top_disp.move_flg == '\0') {
      uVar2 = Anim2D_CalcNowAlpha__FPC14ALPHA_ANIM_TBLi
                        ((ALPHA_ANIM_TBL *)exit_menu_alpha_1030,(int)menu_top_disp.anim_timer);
      menu_top_disp.anim_timer = menu_top_disp.anim_timer + '\x01';
      bVar1 = menu_top_disp.anim_timer < '\b';
    }
    else {
      uVar2 = Anim2D_CalcNowAlpha__FPC14ALPHA_ANIM_TBLi
                        ((ALPHA_ANIM_TBL *)move_menu_alpha_1031,(int)menu_top_disp.anim_timer);
      menu_top_disp.anim_timer = menu_top_disp.anim_timer + '\x01';
      bVar1 = menu_top_disp.anim_timer < '\x05';
    }
    if (!bVar1) {
      menu_top_disp.anim_step = '\x04';
    }
  }
  return uVar2;
}

static void MenuTopTitleDisp(int off_x, int off_y, u_char alpha) {
	DISP_SPRT top_ds;
	int i;
	float title_line_tate;
	
  int iVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float h;
  DISP_SPRT top_ds;
  
  h = (float)((uint)(ushort)menu_cmn_dat[40].h + (uint)(ushort)menu_cmn_dat[42].h);
  iVar1 = 0;
  do {
    iVar2 = iVar1 + 1;
    iVar1 = CheckMenuCondition__Fi(iVar1);
    if (iVar1 != 0) {
      h = h + 30.0;
    }
    iVar1 = iVar2;
  } while (iVar2 < 8);
  PK2SendVram__FUiiii(0x19368c0,-1,-1,0);
  fVar3 = (float)off_x;
  fVar4 = (float)off_y;
  CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&top_ds,menu_top + 0x20);
  top_ds.x = top_ds.x + fVar3;
  top_ds.y = top_ds.y + fVar4;
  top_ds.alpha = (uchar)((int)((uint)menu_top[32].alpha * (uint)alpha) >> 7);
  DispSprD__FP9DISP_SPRT(&top_ds);
  CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&top_ds,menu_top + 0x21);
  top_ds.x = top_ds.x + fVar3;
  top_ds.y = top_ds.y + fVar4;
  top_ds.alpha = (uchar)((int)((uint)menu_top[33].alpha * (uint)alpha) >> 7);
  DispSprD__FP9DISP_SPRT(&top_ds);
  MenuCmnLineYokoDisp__FfffUcUi(0.0,56.0,DAT_003ee5a0,alpha,0xa0);
  MenuCmnLineTateDisp__FfffUcUi(22.0,0.0,h,alpha,0xa0);
  PK2SendVram__FUiiii(0x1973cc0,-1,-1,0);
  CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&top_ds,menu_top + 0x1f);
  top_ds.x = top_ds.x + fVar3;
  top_ds.y = top_ds.y + fVar4;
  top_ds.alpha = (uchar)((int)((uint)menu_top[31].alpha * (uint)alpha) >> 7);
  DispSprD__FP9DISP_SPRT(&top_ds);
  return;
}

static void MenuTopSelectDisp(int off_x, int off_y, u_char alpha) {
	int i;
	int disp_menu_cnt;
	DISP_SPRT sel_ds_1;
	DISP_SPRT sel_ds_2;
	static int select_tbl[8][3] = {
		/* [0] = */ {
			/* [0] = */ 22,
			/* [1] = */ -1,
			/* [2] = */ 14
		},
		/* [1] = */ {
			/* [0] = */ 23,
			/* [1] = */ -1,
			/* [2] = */ 15
		},
		/* [2] = */ {
			/* [0] = */ 26,
			/* [1] = */ 27,
			/* [2] = */ 18
		},
		/* [3] = */ {
			/* [0] = */ 24,
			/* [1] = */ -1,
			/* [2] = */ 16
		},
		/* [4] = */ {
			/* [0] = */ 25,
			/* [1] = */ -1,
			/* [2] = */ 17
		},
		/* [5] = */ {
			/* [0] = */ 29,
			/* [1] = */ -1,
			/* [2] = */ 20
		},
		/* [6] = */ {
			/* [0] = */ 30,
			/* [1] = */ -1,
			/* [2] = */ 21
		},
		/* [7] = */ {
			/* [0] = */ 28,
			/* [1] = */ -1,
			/* [2] = */ 19
		}
	};
	static u_int sel_pk2_tbl[8] = {
		/* [0] = */ 15552,
		/* [1] = */ 15552,
		/* [2] = */ 15552,
		/* [3] = */ 15552,
		/* [4] = */ 15552,
		/* [5] = */ 33216,
		/* [6] = */ 33216,
		/* [7] = */ 15552
	};
	static u_int non_sel_pk2_tbl[8] = {
		/* [0] = */ 15552,
		/* [1] = */ 15552,
		/* [2] = */ 15552,
		/* [3] = */ 15552,
		/* [4] = */ 15552,
		/* [5] = */ 26816,
		/* [6] = */ 26816,
		/* [7] = */ 15552
	};
	
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  uint *puVar5;
  uint *puVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  DISP_SPRT sel_ds_1;
  DISP_SPRT sel_ds_2;
  
  fVar7 = 35.0;
  iVar2 = 0;
  iVar3 = 0;
  do {
    iVar1 = CheckMenuCondition__Fi(iVar2);
    if (iVar1 != 0) {
      if (iVar2 == menu_wrk.cursor) {
        MenuCmnSelFrameDisp__FfffUcUi(32.0,(float)iVar3 * fVar7 + 68.0,164.0,alpha,0xa0);
      }
      else {
        MenuCmnNonSelFrameDisp__FfffUcUi(32.0,(float)iVar3 * fVar7 + 68.0,164.0,alpha,0xa0);
      }
      iVar3 = iVar3 + 1;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 8);
  fVar7 = 35.0;
  puVar6 = &non_sel_pk2_tbl_1040;
  piVar4 = &select_tbl_1038;
  puVar5 = &sel_pk2_tbl_1039;
  iVar3 = 0;
  iVar2 = 0;
  do {
    iVar1 = CheckMenuCondition__Fi(iVar2);
    if (iVar1 != 0) {
      if (iVar2 == menu_wrk.cursor) {
        PK2SendVram__FUiiii(*puVar5,-1,-1,0);
        fVar8 = (float)off_x;
        CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&sel_ds_1,menu_top + *piVar4);
        sel_ds_1.x = sel_ds_1.x + fVar8;
        sel_ds_1.alpha = (uchar)((int)((uint)sel_ds_1.alpha * (uint)alpha) >> 7);
        fVar9 = (float)iVar3 * fVar7 + 68.0 + (float)off_y;
        sel_ds_1.y = fVar9;
        DispSprD__FP9DISP_SPRT(&sel_ds_1);
        if (piVar4[1] != -1) {
          CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&sel_ds_2,menu_top + piVar4[1]);
          sel_ds_2.x = sel_ds_2.x + fVar8;
          sel_ds_2.alpha = (uchar)((int)((uint)sel_ds_2.alpha * (uint)alpha) >> 7);
          sel_ds_2.y = fVar9;
          DispSprD__FP9DISP_SPRT(&sel_ds_2);
          iVar3 = iVar3 + 1;
          goto LAB_00209a34;
        }
      }
      else {
        PK2SendVram__FUiiii(*puVar6,-1,-1,0);
        CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&sel_ds_1,menu_top + piVar4[2]);
        sel_ds_1.x = sel_ds_1.x + (float)off_x;
        sel_ds_1.alpha = (uchar)((int)((uint)sel_ds_1.alpha * (uint)alpha) >> 7);
        sel_ds_1.y = (float)iVar3 * fVar7 + 68.0 + (float)off_y;
        DispSprD__FP9DISP_SPRT(&sel_ds_1);
      }
      iVar3 = iVar3 + 1;
    }
LAB_00209a34:
    iVar2 = iVar2 + 1;
    puVar6 = puVar6 + 1;
    piVar4 = piVar4 + 3;
    puVar5 = puVar5 + 1;
    if (7 < iVar2) {
      return;
    }
  } while( true );
}

static void MenuTopPlayDataDisp(int off_x, int off_y, u_char alpha) {
	DISP_SPRT top_ds;
	
  float fVar1;
  DISP_SPRT top_ds;
  
  fVar1 = (float)off_x;
  PK2SendVram__FUiiii(0x1973cc0,-1,-1,0);
  CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&top_ds,menu_top + 0xc);
  top_ds.x = top_ds.x + fVar1;
  top_ds.y = top_ds.y + (float)off_y;
  top_ds.alpha = (uchar)((int)((uint)top_ds.alpha * (uint)alpha) >> 7);
  DispSprD__FP9DISP_SPRT(&top_ds);
  CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&top_ds,menu_top + 0xd);
  top_ds.x = top_ds.x + fVar1;
  top_ds.y = top_ds.y + (float)off_y;
  top_ds.alpha = (uchar)((int)((uint)top_ds.alpha * (uint)alpha) >> 7);
  DispSprD__FP9DISP_SPRT(&top_ds);
  MenuTopPlayTimeDisp__FiiUc(off_x,off_y,alpha);
  MenuTopScoreDisp__FiiUc(off_x,off_y,alpha);
  MenuTopPhotoNumDisp__FiiUc(off_x,off_y,alpha);
  MenuTopBusterNumDisp__FiiUc(off_x,off_y,alpha);
  MenuTopMaxScoreDisp__FiiUc(off_x,off_y,alpha);
  MenuTopNowDateDisp__FiiUc(off_x,off_y,alpha);
  return;
}

static void MenuTopPlayTimeDisp(int off_x, int off_y, u_char alpha) {
	TIME_INFO play_time;
	
  undefined *puVar1;
  uint uVar2;
  ulong *puVar3;
  int data;
  undefined8 uVar4;
  int y;
  TIME_INFO play_time;
  TIME_INFO TStack_40;
  
  GetPlayTime__Fv(&TStack_40);
  puVar1 = (undefined *)((int)&play_time.min + 3);
  uVar2 = (uint)puVar1 & 7;
  puVar3 = (ulong *)(puVar1 + -uVar2);
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | (ulong)TStack_40._0_8_ >> (7 - uVar2) * 8;
  play_time.hour = TStack_40.hour;
  play_time.min = TStack_40.min;
  uVar4 = play_time._0_8_;
  play_time.sec = TStack_40.sec;
  y = off_y + 0xaa;
  play_time.hour = (int)TStack_40._0_8_;
  data = play_time.hour;
  play_time._0_8_ = uVar4;
  PrintNumber_N__FiiiiUcUciUcUc(data,3,off_x + 0x18c,y,'\x02',alpha,0,'\x01',0);
  PrintMsg__Fiiiiiii(8,0,off_x + 0x1b7,y,2,(uint)alpha,0);
  PrintNumber_N__FiiiiUcUciUcUc(play_time.min,2,off_x + 0x1c1,y,'\x02',alpha,0,'\x01',1);
  PrintMsg__Fiiiiiii(8,0,off_x + 0x1de,y,2,(uint)alpha,0);
  PrintNumber_N__FiiiiUcUciUcUc(play_time.sec,2,off_x + 0x1e8,y,'\x02',alpha,0,'\x01',1);
  return;
}

static void MenuTopScoreDisp(int off_x, int off_y, u_char alpha) {
  int data;
  
  data = GetPlayData_TotalScore__Fv();
  PrintNumber_N__FiiiiUcUciUcUc(data,6,off_x + 0x1b0,off_y + 0xc2,'\x02',alpha,0,'\x01',0);
  return;
}

static void MenuTopPhotoNumDisp(int off_x, int off_y, u_char alpha) {
  int data;
  
  data = GetPhotoNum__Fv();
  PrintNumber_N__FiiiiUcUciUcUc(data,5,off_x + 0x1be,off_y + 0xda,'\x02',alpha,0,'\x01',0);
  return;
}

static void MenuTopBusterNumDisp(int off_x, int off_y, u_char alpha) {
  int data;
  
  data = GetBusterGhostNum__Fv();
  PrintNumber_N__FiiiiUcUciUcUc(data,4,off_x + 0x1cc,off_y + 0xf2,'\x02',alpha,0,'\x01',0);
  return;
}

static void MenuTopMaxScoreDisp(int off_x, int off_y, u_char alpha) {
  int data;
  
  data = GetMaxScore__Fv();
  PrintNumber_N__FiiiiUcUciUcUc(data,5,off_x + 0x1be,off_y + 0x10a,'\x02',alpha,0,'\x01',0);
  return;
}

static void MenuTopNowDateDisp(int off_x, int off_y, u_char alpha) {
  bool bVar1;
  int iVar2;
  
  if (menu_top_disp.now_time_cnt == 0) {
    GetSystemTime__FP9DATE_INFO(&menu_top_disp.now_time);
  }
  menu_top_disp.now_time_cnt = menu_top_disp.now_time_cnt + 1;
  iVar2 = GetPALMode__Fv();
  if (iVar2 == 0) {
    bVar1 = menu_top_disp.now_time_cnt < 0x1e;
  }
  else {
    bVar1 = menu_top_disp.now_time_cnt < 0x19;
  }
  if (!bVar1) {
    menu_top_disp.now_time_cnt = 0;
  }
  iVar2 = off_y + 0x136;
  PrintNumber_N__FiiiiUcUciUcUc
            (menu_top_disp.now_time.day.day,2,off_x + 299,iVar2,'\x02',alpha,0,'\x01',1);
  PrintNumber_N__FiiiiUcUciUcUc
            (menu_top_disp.now_time.day.month,2,off_x + 0x152,iVar2,'\x02',alpha,0,'\x01',1);
  PrintNumber_N__FiiiiUcUciUcUc
            (menu_top_disp.now_time.day.year,2,off_x + 0x179,iVar2,'\x02',alpha,0,'\x01',1);
  PrintNumber_N__FiiiiUcUciUcUc
            (menu_top_disp.now_time.time.hour,2,off_x + 0x1a5,iVar2,'\x02',alpha,0,'\x01',1);
  PrintMsg__Fiiiiiii(8,0,off_x + 0x1c1,iVar2,2,(uint)alpha,0);
  PrintNumber_N__FiiiiUcUciUcUc
            (menu_top_disp.now_time.time.min,2,off_x + 0x1cc,iVar2,'\x02',alpha,0,'\x01',1);
  PrintMsg__Fiiiiiii(8,0,off_x + 0x1e8,iVar2,2,(uint)alpha,0);
  PrintNumber_N__FiiiiUcUciUcUc
            (menu_top_disp.now_time.time.sec,2,off_x + 499,iVar2,'\x02',alpha,0,'\x01',1);
  return;
}

static void MenuTopPlyrDataDisp(int off_x, int off_y, u_char alpha) {
  MenuPlyrDataDisp__FiiUc(0xce,0x4a,alpha);
  return;
}

static void MenuTopCaptionDisp(int off_x, int off_y, u_char alpha) {
  DrawCmnCapGroup_W__FiiUcUi(0,0,alpha,0);
  return;
}

static void MenuTopChapterTitleDisp(int off_x, int off_y, u_char alpha) {
	static char __FUNCTION__[24] = {
		/* [0] = */ 77,
		/* [1] = */ 101,
		/* [2] = */ 110,
		/* [3] = */ 117,
		/* [4] = */ 84,
		/* [5] = */ 111,
		/* [6] = */ 112,
		/* [7] = */ 67,
		/* [8] = */ 104,
		/* [9] = */ 97,
		/* [10] = */ 112,
		/* [11] = */ 116,
		/* [12] = */ 101,
		/* [13] = */ 114,
		/* [14] = */ 84,
		/* [15] = */ 105,
		/* [16] = */ 116,
		/* [17] = */ 108,
		/* [18] = */ 101,
		/* [19] = */ 68,
		/* [20] = */ 105,
		/* [21] = */ 115,
		/* [22] = */ 112,
		/* [23] = */ 0
	};
	DISP_SPRT chapter_ds;
	int i;
	static int chapter_tbl[11][3] = {
		/* [0] = */ {
			/* [0] = */ 35,
			/* [1] = */ 36,
			/* [2] = */ 37
		},
		/* [1] = */ {
			/* [0] = */ 38,
			/* [1] = */ 39,
			/* [2] = */ 40
		},
		/* [2] = */ {
			/* [0] = */ 41,
			/* [1] = */ 42,
			/* [2] = */ 43
		},
		/* [3] = */ {
			/* [0] = */ 44,
			/* [1] = */ 45,
			/* [2] = */ 46
		},
		/* [4] = */ {
			/* [0] = */ 47,
			/* [1] = */ 48,
			/* [2] = */ 49
		},
		/* [5] = */ {
			/* [0] = */ 50,
			/* [1] = */ 51,
			/* [2] = */ 52
		},
		/* [6] = */ {
			/* [0] = */ 53,
			/* [1] = */ 54,
			/* [2] = */ 55
		},
		/* [7] = */ {
			/* [0] = */ 56,
			/* [1] = */ 57,
			/* [2] = */ 58
		},
		/* [8] = */ {
			/* [0] = */ 59,
			/* [1] = */ 60,
			/* [2] = */ 61
		},
		/* [9] = */ {
			/* [0] = */ 62,
			/* [1] = */ 63,
			/* [2] = */ 64
		},
		/* [10] = */ {
			/* [0] = */ 65,
			/* [1] = */ 66,
			/* [2] = */ 67
		}
	};
	
  int iVar1;
  int iVar2;
  SPRT_DAT *d;
  float fVar3;
  DISP_SPRT chapter_ds;
  
  if (chapter_title_tex_addr == (void *)0x0) {
    SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
    PrintAssertReal("Error! MenuTopChapterTitleDisp");
  }
  PK2SendVram__FUiiii((uint)chapter_title_tex_addr,-1,-1,0);
  fVar3 = (float)off_x;
  iVar2 = 0;
  d = menu_top + 0x41;
  do {
    iVar1 = CheckIngameMission__Fv();
    if (iVar1 == 0) {
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
      CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT
                (&chapter_ds,
                 menu_top +
                 *(int *)(chapter_tbl_1071 + (ingame_wrk.mChapterNo.mValue * 3 + iVar2) * 4));
                    /* end of inlined section */
      chapter_ds.x = chapter_ds.x + fVar3;
      chapter_ds.y = chapter_ds.y + (float)off_y;
      chapter_ds.alpha = (uchar)((int)((uint)chapter_ds.alpha * (uint)alpha) >> 7);
      DispSprD__FP9DISP_SPRT(&chapter_ds);
    }
    else {
      CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&chapter_ds,d);
      chapter_ds.x = chapter_ds.x + fVar3;
      chapter_ds.y = chapter_ds.y + (float)off_y;
      chapter_ds.alpha = (uchar)((int)((uint)chapter_ds.alpha * (uint)alpha) >> 7);
      DispSprD__FP9DISP_SPRT(&chapter_ds);
    }
    iVar2 = iVar2 + 1;
    d = d + 1;
  } while (iVar2 < 3);
  return;
}

static void MenuTopWindowDisp(int off_x, int off_y, u_char alpha) {
	static int msg_id[9] = {
		/* [0] = */ 0,
		/* [1] = */ 1,
		/* [2] = */ 2,
		/* [3] = */ 3,
		/* [4] = */ 4,
		/* [5] = */ 5,
		/* [6] = */ 6,
		/* [7] = */ 7,
		/* [8] = */ -1
	};
	
  DrawCmnWindow__FUiffffUcUc
            (0xa0,(float)(off_x + 0x18),(float)(off_y + 0x15a),592.0,100.0,alpha,'f');
  if (*(int *)(msg_id_1075 + menu_wrk.cursor * 4) != -1) {
    PrintMsg__Fiiiiiii(0x3a,*(int *)(msg_id_1075 + menu_wrk.cursor * 4),off_x + 0x30,off_y + 0x172,1
                       ,(uint)alpha,0);
  }
  return;
}

static void DebugMenuTopDebugSwitchPad() {
  if (((pad[1].now & 0x100U) != 0) && ((pad[1].one & 0x20U) != 0)) {
    DebugAllItemGet__Fv();
    return;
  }
  if ((pad[1].now & 0x100U) != 0) {
    if ((pad[1].one & 0x10U) != 0) {
      DebugAllFileGet__Fv();
      return;
    }
    if ((pad[1].one & 0x80U) != 0) {
      DebugAllCrystalGet__Fv();
      return;
    }
    if ((pad[1].one & 0x40U) != 0) {
      DebugGetAllSoulList__Fv();
      return;
    }
    if ((pad[1].one & 4U) != 0) {
      DebugSetLevelGemMaxNum__Fv();
      return;
    }
    if ((pad[1].one & 1U) != 0) {
      DebugSetPlayScoreMaxNum__Fv();
      return;
    }
    if ((pad[1].one & 8U) != 0) {
      DebugAllFirstMemoGet__Fv();
      return;
    }
    if ((pad[1].one & 2U) != 0) {
      DebugAllSecondMemoGet__Fv();
      return;
    }
    if ((pad[1].one & 0x200U) == 0) {
                    /* end of inlined section */
      if ((pad[1].one & 0x400U) != 0) {
        DebugAllMapDisp__Fv();
      }
    }
    else {
      DebugAllClearFlgUp__Fv();
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
      ingame_wrk.mClearCnt.mValue = '\x01';
    }
  }
  return;
}
