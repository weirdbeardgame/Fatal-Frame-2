// STATUS: NOT STARTED

#include "menu.h"

typedef struct {
	void (*menu_func)(/* parameters unknown */);
	void (*menu_disp)(/* parameters unknown */);
} MENU_CTRL;

typedef struct {
	short int anim_step;
	short int menu_bg_anim;
	short int bg_anim_timer;
	short int bg_anim_out_timer;
	char tourou_anim_step;
	char tourou_out_timer;
	short int tourou_anim_timer;
	short int moyou1_anim_timer;
	short int moyou2_anim_timer;
	char bganim_in_to_out;
} MENU_DISP_CTRL;

static MENU_CTRL menu_ctrl[9] = {
	/* [0] = */ {
		/* .menu_func = */ MenuMap,
		/* .menu_disp = */ MenuMapDisp
	},
	/* [1] = */ {
		/* .menu_func = */ MenuItem,
		/* .menu_disp = */ MenuItemDisp
	},
	/* [2] = */ {
		/* .menu_func = */ MenuCam,
		/* .menu_disp = */ MenuCamDisp
	},
	/* [3] = */ {
		/* .menu_func = */ MenuPhoto,
		/* .menu_disp = */ MenuPhotoDisp
	},
	/* [4] = */ {
		/* .menu_func = */ MenuFile,
		/* .menu_disp = */ MenuFileDisp
	},
	/* [5] = */ {
		/* .menu_func = */ MenuMemo,
		/* .menu_disp = */ MenuMemoDisp
	},
	/* [6] = */ {
		/* .menu_func = */ MenuRadio,
		/* .menu_disp = */ MenuRadioDisp
	},
	/* [7] = */ {
		/* .menu_func = */ MenuSoul,
		/* .menu_disp = */ MenuSoulDisp
	},
	/* [8] = */ {
		/* .menu_func = */ MenuTop,
		/* .menu_disp = */ MenuTopDisp
	}
};

static void *menu_caption_adrs = NULL;

MENU_WRK menu_wrk = {
	/* .menu_step = */ 0,
	/* .top_cursor = */ 0,
	/* .step = */ 0,
	/* .menu_out_flg = */ 0,
	/* .menu_sys_flg = */ 0,
	/* .next_menu_step = */ 0,
	/* .cursor = */ 0,
	/* .stream_id = */ 0
};

char map_view_flg = 0;
static MENU_DISP_CTRL menu_disp;

int MenuMain() {
	int menu_out;
	
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  SetMenuStep__Fv();
  if (menu_wrk.menu_sys_flg == '\x01') {
    if ((code *)menu_ctrl[menu_wrk.menu_step].menu_func == (code *)0x0) {
      printf("ERROR!! MenuMain()\n");
    }
    else {
      (*(code *)menu_ctrl[menu_wrk.menu_step].menu_func)();
    }
  }
  iVar1 = MenuOutCheck__Fv();
  if (iVar1 == 1) {
    if (menu_disp.bganim_in_to_out == '\0') {
      StreamAutoFadeOut(menu_wrk.stream_id,10);
      menu_wrk.stream_id = -1;
    }
    StreamAutoSetExclusiveMode(0,10);
    iVar2 = 1;
  }
  SubTitleMain__Fi(0);
  return iVar2;
}

void MenuIn() {
  MenuWrkInit__Fv();
  MenuDispInit__Fv();
  MenuTexBackGroundLoad__Fv();
  StreamAutoSetExclusiveMode(1,10);
  map_view_flg = '\0';
  menu_wrk.stream_id = -1;
  return;
}

static void MenuWrkInit() {
  menu_wrk.menu_step = '\b';
  menu_wrk.menu_sys_flg = '\x01';
  menu_wrk.next_menu_step = -1;
  menu_wrk.top_cursor = '\0';
  menu_wrk.cursor = 0;
  menu_wrk.step = '\0';
  menu_wrk.menu_out_flg = '\0';
  return;
}

static void MenuTexBackGroundLoad() {
  GetMenuChapterTitleTexMem__Fv();
  MenuChapterTitleTexLoadReq__Fv();
  MenuCamMainBackGroundLoadReq__FPFi_PvPFPv_v(mem_utilGetMem__Fi,mem_utilFreeMem__FPv);
  return;
}

void MenuOutReq() {
  if (menu_disp.menu_bg_anim == 2) {
    menu_disp.bganim_in_to_out = '\0';
    menu_disp.bg_anim_out_timer = 0xf;
  }
  else if (menu_disp.menu_bg_anim == 1) {
    menu_disp.bganim_in_to_out = '\x01';
    menu_disp.menu_bg_anim = 3;
    menu_disp.bg_anim_out_timer = 4;
  }
  menu_disp.tourou_out_timer = '\0';
  menu_wrk.menu_out_flg = '\x01';
  menu_wrk.menu_sys_flg = '\0';
  menu_disp.tourou_anim_step = '\x03';
  return;
}

int MenuOutCheck() {
	int res;
	
  uint uVar1;
  
  uVar1 = 0;
  if (menu_wrk.menu_out_flg == '\x01') {
    uVar1 = (uint)(menu_disp.menu_bg_anim == 4);
  }
  return uVar1;
}

void SetNextMenuStep(int next_step) {
  menu_wrk.next_menu_step = (char)next_step;
  return;
}

void SetMenuStep() {
  char cVar1;
  
  cVar1 = menu_wrk.next_menu_step;
  if (menu_wrk.next_menu_step != -1) {
    menu_wrk.next_menu_step = -1;
    menu_wrk.menu_step = cVar1;
    menu_wrk.step = '\0';
  }
  return;
}

void MenuRelease() {
  MenuItemTexLoadCancel__Fv();
  MenuPhotoTexLoadCancel__Fv();
  MenuRadioTexLoadCancel__Fv();
  MenuMemoTexLoadCancel__Fv();
  MenuSoulTexLoadCancel__Fv();
  if (menu_caption_adrs != (void *)0x0) {
    mem_utilFreeMem__FPv(menu_caption_adrs);
    menu_caption_adrs = (void *)0x0;
  }
  if (menu_wrk.stream_id != -1) {
    StreamAutoFadeOut(menu_wrk.stream_id,10);
  }
  MenuDBuffCtrlInit__Fv();
  MenuMapRelease__Fv();
  MenuFileMemRelease__Fv();
  LiberateMenuChapterTitleTexMem__Fv();
  LiberateMenuItemTexMem__Fv();
  LiberateMenuPhotoTexMem__Fv();
  LiberateMenuRadioTexMem__Fv();
  LiberateMenuMemoTexMem__Fv();
  MenuCamMainMemFree__Fv();
  LiberateMenuSoulTexMem__Fv();
  LiberateAllMenuCrossFadeTexMem__Fv();
  MenuRadioStreamStop__Fv();
  return;
}

void MenuDispInit() {
  MenuInDispCapture__Fv();
  MenuDispCtrlInit__Fv();
  return;
}

static void MenuInDispCapture() {
	static char __FUNCTION__[18] = {
		/* [0] = */ 77,
		/* [1] = */ 101,
		/* [2] = */ 110,
		/* [3] = */ 117,
		/* [4] = */ 73,
		/* [5] = */ 110,
		/* [6] = */ 68,
		/* [7] = */ 105,
		/* [8] = */ 115,
		/* [9] = */ 112,
		/* [10] = */ 67,
		/* [11] = */ 97,
		/* [12] = */ 112,
		/* [13] = */ 116,
		/* [14] = */ 117,
		/* [15] = */ 114,
		/* [16] = */ 101,
		/* [17] = */ 0
	};
	
  int size;
  
  if (menu_caption_adrs == (void *)0x0) {
    size = LocalCopyLtoBGetSize__Fi(0);
    menu_caption_adrs = mem_utilGetMem__Fi(size);
  }
  else {
    SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
    PrintAssertReal("MenuInDispCaption() adrs Is not NULL");
  }
  LocalCopyLtoBAdrs__Fiii
            (0,(int)menu_caption_adrs,(int)(((sys_wrk.count + 1 & 1) * 0x23 << 0x27) >> 0x20));
  return;
}

static void MenuDispCtrlInit() {
  menu_disp.bganim_in_to_out = '\x01';
  menu_disp.anim_step = 1;
  menu_disp.bg_anim_timer = 0;
  menu_disp.bg_anim_out_timer = 0;
  menu_disp.menu_bg_anim = 0;
  menu_disp.tourou_anim_step = '\0';
  menu_disp.tourou_out_timer = '\0';
  menu_disp.tourou_anim_timer = 0;
  menu_disp.moyou1_anim_timer = 0;
  menu_disp.moyou2_anim_timer = 0;
  return;
}

void MenuDispMain() {
	static char __FUNCTION__[13] = {
		/* [0] = */ 77,
		/* [1] = */ 101,
		/* [2] = */ 110,
		/* [3] = */ 117,
		/* [4] = */ 68,
		/* [5] = */ 105,
		/* [6] = */ 115,
		/* [7] = */ 112,
		/* [8] = */ 77,
		/* [9] = */ 97,
		/* [10] = */ 105,
		/* [11] = */ 110,
		/* [12] = */ 0
	};
	
  if (menu_disp.menu_bg_anim == 0) {
    menu_disp.bg_anim_timer = 0;
    menu_disp.menu_bg_anim = 1;
  }
  SetMenuCaptureData__Fv();
  if (menu_disp.menu_bg_anim != 2) {
    MenuCaptureDataDisp__Fv();
  }
  MenuBg_LeftShojiDisp__FiiUc(0,0,0x80);
  MenuBg_RightShojiDisp__FiiUc(0,0,0x80);
  MenuBg_TourouDisp__FiiUc(0,0,0x80);
  MenuBg_LeftShadowDisp__FiiUc(0,0,0x80);
  MenuBg_RightShadowDisp__FiiUc(0,0,0x80);
  MenuBg_WallDisp__FiiUc(0,0,0x80);
  if ((menu_disp.menu_bg_anim - 2 < 2) && (menu_disp.bganim_in_to_out == '\0')) {
    if ((code *)menu_ctrl[menu_wrk.menu_step].menu_disp == (code *)0x0) {
      SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
      PrintAssertReal("ERROR!! MenuDispMain()");
    }
    else {
      (*(code *)menu_ctrl[menu_wrk.menu_step].menu_disp)();
    }
  }
  MenuBg_AnimCtrl__Fv();
  return;
}

static void MenuBg_AnimCtrl() {
  if (menu_disp.menu_bg_anim == 1) {
    menu_disp.bg_anim_timer = menu_disp.bg_anim_timer + 1;
    if (0xf < (short)menu_disp.bg_anim_timer) {
      menu_wrk.stream_id = StreamAutoPlay(0x83c,0x83b,0x14,0,1,0x3200,0,(_SND_3D_SET *)0x0);
      menu_disp.menu_bg_anim = 2;
      menu_disp.bganim_in_to_out = '\0';
    }
  }
  else if (menu_disp.menu_bg_anim == 2) {
    if (menu_disp.tourou_anim_step == '\x02') {
      menu_disp.moyou1_anim_timer = menu_disp.moyou1_anim_timer + 1;
      if (899 < (short)menu_disp.moyou1_anim_timer) {
        menu_disp.moyou1_anim_timer = 0;
      }
      menu_disp.moyou2_anim_timer = menu_disp.moyou2_anim_timer + 1;
      if (599 < (short)menu_disp.moyou2_anim_timer) {
        menu_disp.moyou2_anim_timer = 0;
      }
      menu_disp.tourou_anim_timer = menu_disp.tourou_anim_timer + 1;
      if (0x743 < (short)menu_disp.tourou_anim_timer) {
        menu_disp.tourou_anim_timer = 0x3c0;
      }
    }
    else if (menu_disp.tourou_anim_step == '\x03') {
      menu_disp.moyou1_anim_timer = menu_disp.moyou1_anim_timer + 1;
      if (899 < (short)menu_disp.moyou1_anim_timer) {
        menu_disp.moyou1_anim_timer = 0;
      }
      menu_disp.moyou2_anim_timer = menu_disp.moyou2_anim_timer + 1;
      if (599 < (short)menu_disp.moyou2_anim_timer) {
        menu_disp.moyou2_anim_timer = 0;
      }
      menu_disp.tourou_out_timer = menu_disp.tourou_out_timer + '\x01';
      if ('\a' < menu_disp.tourou_out_timer) {
        menu_disp.menu_bg_anim = 3;
        menu_disp.tourou_anim_step = '\x04';
      }
    }
  }
  else if ((menu_disp.menu_bg_anim == 3) &&
          (menu_disp.bg_anim_out_timer = menu_disp.bg_anim_out_timer - 1,
          (int)((uint)menu_disp.bg_anim_out_timer << 0x10) < 1)) {
    menu_disp.menu_bg_anim = 4;
  }
  return;
}

static void SetMenuCaptureData() {
  LocalCopyBtoLAdrs__Fiii(0,(int)menu_caption_adrs,0x2bc0);
  return;
}

static void MenuCaptureDataDisp() {
	SPRT_DAT sd;
	DISP_SPRT ds;
	
  SPRT_DAT sd;
  DISP_SPRT ds;
  
  sd.tex0 = DAT_003bc598;
  sd._8_8_ = DAT_003bc5a0;
  sd._16_8_ = DAT_003bc5a8;
  sd._24_8_ = DAT_003bc5b0;
  memset(&ds,0,0x88);
  CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&ds,&sd);
  ds.tex0 = 0x200578026802abc0;
  ds.tex1 = 0x161;
  DispSprD__FP9DISP_SPRT(&ds);
  return;
}

static void MenuBg_LeftShojiDisp(int off_x, int off_y, u_char alpha) {
	int i;
	DISP_SPRT bg_ds;
	static int shoji_tbl[2] = {
		/* [0] = */ 4,
		/* [1] = */ 5
	};
	float shouji_off_x;
	u_char shouji_alpha;
	static POS_ANIM_TBL shouji_x_tbl[3] = {
		/* [0] = */ {
			/* .start_pos = */ -320.f,
			/* .end_pos = */ -320.f,
			/* .start_time = */ 0,
			/* .end_time = */ 4,
			/* .anim_label = */ 1
		},
		/* [1] = */ {
			/* .start_pos = */ -320.f,
			/* .end_pos = */ 0.f,
			/* .start_time = */ 4,
			/* .end_time = */ 16,
			/* .anim_label = */ 1
		},
		/* [2] = */ {
			/* .start_pos = */ -1.f,
			/* .end_pos = */ -1.f,
			/* .start_time = */ -1,
			/* .end_time = */ -1,
			/* .anim_label = */ -1
		}
	};
	static ALPHA_ANIM_TBL shouji_alpha_tbl[3] = {
		/* [0] = */ {
			/* .start_alpha = */ 0,
			/* .end_alpha = */ 0,
			/* .start_time = */ 0,
			/* .end_time = */ 4
		},
		/* [1] = */ {
			/* .start_alpha = */ 0,
			/* .end_alpha = */ 128,
			/* .start_time = */ 4,
			/* .end_time = */ 16
		},
		/* [2] = */ {
			/* .start_alpha = */ -1,
			/* .end_alpha = */ -1,
			/* .start_time = */ -1,
			/* .end_time = */ -1
		}
	};
	ALPHA_ANIM_TBL in_to_out_alpha_tbl[2];
	
  undefined *puVar1;
  ushort uVar2;
  uint uVar3;
  ulong *puVar4;
  uchar uVar5;
  undefined1 *tbl;
  int iVar6;
  int iVar7;
  int *piVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  DISP_SPRT bg_ds;
  ALPHA_ANIM_TBL in_to_out_alpha_tbl [2];
  
  tbl = (undefined1 *)in_to_out_alpha_tbl;
  fVar9 = -320.0;
  puVar1 = (undefined *)((int)&in_to_out_alpha_tbl[0].end_time + 1);
  uVar3 = (uint)puVar1 & 7;
  puVar4 = (ulong *)(puVar1 + -uVar3);
  *puVar4 = *puVar4 & -1L << (uVar3 + 1) * 8 | (ulong)DAT_003bc600 >> (7 - uVar3) * 8;
  in_to_out_alpha_tbl[0] = DAT_003bc600;
  puVar1 = (undefined *)((int)&in_to_out_alpha_tbl[1].end_time + 1);
  uVar3 = (uint)puVar1 & 7;
  puVar4 = (ulong *)(puVar1 + -uVar3);
  *puVar4 = *puVar4 & -1L << (uVar3 + 1) * 8 | (ulong)_PTR_003bc608 >> (7 - uVar3) * 8;
  in_to_out_alpha_tbl[1] = _PTR_003bc608;
  uVar5 = '\0';
  if (menu_disp.menu_bg_anim == 1) {
    fVar9 = Anim2D_CalcNowPos__FPC12POS_ANIM_TBLi
                      ((POS_ANIM_TBL *)shouji_x_tbl_133,(int)(short)menu_disp.bg_anim_timer);
    uVar2 = menu_disp.bg_anim_timer;
LAB_001e611c:
    tbl = shouji_alpha_tbl_134;
  }
  else {
    if (menu_disp.menu_bg_anim == 2) {
      fVar9 = 0.0;
      uVar5 = 0x80;
      goto LAB_001e6134;
    }
    if (menu_disp.menu_bg_anim != 3) goto LAB_001e6134;
    if (menu_disp.bganim_in_to_out == '\0') {
      fVar9 = Anim2D_CalcNowPos__FPC12POS_ANIM_TBLi
                        ((POS_ANIM_TBL *)shouji_x_tbl_133,(int)(short)menu_disp.bg_anim_out_timer);
      uVar2 = menu_disp.bg_anim_out_timer;
      goto LAB_001e611c;
    }
    fVar9 = Anim2D_CalcNowPos__FPC12POS_ANIM_TBLi
                      ((POS_ANIM_TBL *)shouji_x_tbl_133,(int)(short)menu_disp.bg_anim_timer);
    uVar5 = Anim2D_CalcNowAlpha__FPC14ALPHA_ANIM_TBLi
                      ((ALPHA_ANIM_TBL *)shouji_alpha_tbl_134,(int)(short)menu_disp.bg_anim_timer);
    in_to_out_alpha_tbl[0].end_alpha = (short)(char)uVar5;
    uVar2 = menu_disp.bg_anim_out_timer;
  }
  uVar5 = Anim2D_CalcNowAlpha__FPC14ALPHA_ANIM_TBLi((ALPHA_ANIM_TBL *)tbl,(int)(short)uVar2);
LAB_001e6134:
  fVar11 = 270.0;
  PK2SendVram__FUiiii(0x19368c0,-1,-1,0);
  CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&bg_ds,menu_top + 3);
  piVar8 = &shoji_tbl_132;
  bg_ds.csx = bg_ds.x + fVar9;
  bg_ds.sch = 2.0;
  bg_ds.csy = bg_ds.y;
  iVar7 = 1;
  bg_ds.scw = 2.0;
  bg_ds.x = bg_ds.csx;
  bg_ds.alpha = uVar5;
  DispSprD__FP9DISP_SPRT(&bg_ds);
  iVar6 = shoji_tbl_132;
  while( true ) {
    piVar8 = piVar8 + 1;
    CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&bg_ds,menu_top + iVar6);
    bg_ds.crx = bg_ds.x + fVar9;
    if ((int)bg_ds.w < 0) {
      fVar10 = (float)(bg_ds.w & 1 | bg_ds.w >> 1);
      fVar10 = fVar10 + fVar10;
    }
    else {
      fVar10 = (float)bg_ds.w;
    }
    iVar7 = iVar7 + -1;
    bg_ds.cry = bg_ds.y + fVar10;
    bg_ds.x = bg_ds.crx;
    bg_ds.y = bg_ds.cry;
    bg_ds.rot = fVar11;
    bg_ds.alpha = uVar5;
    DispSprD__FP9DISP_SPRT(&bg_ds);
    if (iVar7 < 0) break;
    iVar6 = *piVar8;
  }
  CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&bg_ds,menu_top + 2);
  bg_ds.crx = bg_ds.x + fVar9;
  if ((int)bg_ds.w < 0) {
    fVar9 = (float)(bg_ds.w & 1 | bg_ds.w >> 1);
    fVar9 = fVar9 + fVar9;
    fVar9 = fVar9 + fVar9;
  }
  else {
    fVar9 = (float)bg_ds.w + (float)bg_ds.w;
  }
  bg_ds.cry = bg_ds.y + fVar9;
  bg_ds.sch = 2.0;
  bg_ds.rot = 270.0;
  bg_ds.scw = 2.0;
  bg_ds.csx = bg_ds.crx;
  bg_ds.csy = bg_ds.cry;
  bg_ds.x = bg_ds.crx;
  bg_ds.y = bg_ds.cry;
  bg_ds.alpha = uVar5;
  DispSprD__FP9DISP_SPRT(&bg_ds);
  return;
}

static void MenuBg_RightShojiDisp(int off_x, int off_y, u_char alpha) {
	int i;
	DISP_SPRT bg_ds;
	static int shoji_tbl[2] = {
		/* [0] = */ 10,
		/* [1] = */ 11
	};
	float shouji_off_x;
	u_char shouji_alpha;
	static POS_ANIM_TBL shouji_x_tbl[3] = {
		/* [0] = */ {
			/* .start_pos = */ 320.f,
			/* .end_pos = */ 320.f,
			/* .start_time = */ 0,
			/* .end_time = */ 4,
			/* .anim_label = */ 1
		},
		/* [1] = */ {
			/* .start_pos = */ 320.f,
			/* .end_pos = */ 0.f,
			/* .start_time = */ 4,
			/* .end_time = */ 16,
			/* .anim_label = */ 1
		},
		/* [2] = */ {
			/* .start_pos = */ -1.f,
			/* .end_pos = */ -1.f,
			/* .start_time = */ -1,
			/* .end_time = */ -1,
			/* .anim_label = */ -1
		}
	};
	static ALPHA_ANIM_TBL shouji_alpha_tbl[3] = {
		/* [0] = */ {
			/* .start_alpha = */ 0,
			/* .end_alpha = */ 0,
			/* .start_time = */ 0,
			/* .end_time = */ 4
		},
		/* [1] = */ {
			/* .start_alpha = */ 0,
			/* .end_alpha = */ 128,
			/* .start_time = */ 4,
			/* .end_time = */ 16
		},
		/* [2] = */ {
			/* .start_alpha = */ -1,
			/* .end_alpha = */ -1,
			/* .start_time = */ -1,
			/* .end_time = */ -1
		}
	};
	ALPHA_ANIM_TBL in_to_out_alpha_tbl[2];
	
  undefined *puVar1;
  uint uVar2;
  ulong *puVar3;
  uchar uVar4;
  undefined1 *tbl;
  int iVar5;
  int iVar6;
  int *piVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  DISP_SPRT bg_ds;
  ALPHA_ANIM_TBL in_to_out_alpha_tbl [2];
  
  tbl = (undefined1 *)in_to_out_alpha_tbl;
  fVar8 = 320.0;
  puVar1 = (undefined *)((int)&in_to_out_alpha_tbl[0].end_time + 1);
  uVar2 = (uint)puVar1 & 7;
  puVar3 = (ulong *)(puVar1 + -uVar2);
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | (ulong)DAT_003bc658 >> (7 - uVar2) * 8;
  in_to_out_alpha_tbl[0] = DAT_003bc658;
  puVar1 = (undefined *)((int)&in_to_out_alpha_tbl[1].end_time + 1);
  uVar2 = (uint)puVar1 & 7;
  puVar3 = (ulong *)(puVar1 + -uVar2);
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | (ulong)_PTR_003bc660 >> (7 - uVar2) * 8;
  in_to_out_alpha_tbl[1] = _PTR_003bc660;
  uVar4 = '\0';
  if (menu_disp.menu_bg_anim == 1) {
    fVar8 = Anim2D_CalcNowPos__FPC12POS_ANIM_TBLi
                      ((POS_ANIM_TBL *)shouji_x_tbl_139,(int)(short)menu_disp.bg_anim_timer);
    uVar4 = Anim2D_CalcNowAlpha__FPC14ALPHA_ANIM_TBLi
                      ((ALPHA_ANIM_TBL *)shouji_alpha_tbl_140,(int)(short)menu_disp.bg_anim_timer);
  }
  else if (menu_disp.menu_bg_anim == 2) {
    fVar8 = 0.0;
    uVar4 = 0x80;
  }
  if (menu_disp.menu_bg_anim == 3) {
    if (menu_disp.bganim_in_to_out == '\0') {
      fVar8 = Anim2D_CalcNowPos__FPC12POS_ANIM_TBLi
                        ((POS_ANIM_TBL *)shouji_x_tbl_139,(int)(short)menu_disp.bg_anim_out_timer);
      tbl = shouji_alpha_tbl_140;
    }
    else {
      fVar8 = Anim2D_CalcNowPos__FPC12POS_ANIM_TBLi
                        ((POS_ANIM_TBL *)shouji_x_tbl_139,(int)(short)menu_disp.bg_anim_timer);
      uVar4 = Anim2D_CalcNowAlpha__FPC14ALPHA_ANIM_TBLi
                        ((ALPHA_ANIM_TBL *)shouji_alpha_tbl_140,(int)(short)menu_disp.bg_anim_timer)
      ;
      in_to_out_alpha_tbl[0].end_alpha = (short)(char)uVar4;
    }
    uVar4 = Anim2D_CalcNowAlpha__FPC14ALPHA_ANIM_TBLi
                      ((ALPHA_ANIM_TBL *)tbl,(int)(short)menu_disp.bg_anim_out_timer);
  }
  fVar10 = 270.0;
  PK2SendVram__FUiiii(0x19368c0,-1,-1,0);
  CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&bg_ds,menu_top + 9);
  piVar7 = &shoji_tbl_138;
  bg_ds.csx = bg_ds.x + fVar8;
  bg_ds.sch = 2.0;
  bg_ds.csy = bg_ds.y;
  iVar6 = 1;
  bg_ds.scw = 2.0;
  bg_ds.x = bg_ds.csx;
  bg_ds.alpha = uVar4;
  DispSprD__FP9DISP_SPRT(&bg_ds);
  iVar5 = shoji_tbl_138;
  while( true ) {
    piVar7 = piVar7 + 1;
    CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&bg_ds,menu_top + iVar5);
    bg_ds.crx = bg_ds.x + fVar8;
    if ((int)bg_ds.w < 0) {
      fVar9 = (float)(bg_ds.w & 1 | bg_ds.w >> 1);
      fVar9 = fVar9 + fVar9;
    }
    else {
      fVar9 = (float)bg_ds.w;
    }
    iVar6 = iVar6 + -1;
    bg_ds.cry = bg_ds.y + fVar9;
    bg_ds.x = bg_ds.crx;
    bg_ds.y = bg_ds.cry;
    bg_ds.rot = fVar10;
    bg_ds.alpha = uVar4;
    DispSprD__FP9DISP_SPRT(&bg_ds);
    if (iVar6 < 0) break;
    iVar5 = *piVar7;
  }
  CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&bg_ds,menu_top + 8);
  bg_ds.crx = bg_ds.x + fVar8;
  if ((int)bg_ds.w < 0) {
    fVar8 = (float)(bg_ds.w & 1 | bg_ds.w >> 1);
    fVar8 = fVar8 + fVar8;
    fVar8 = fVar8 + fVar8;
  }
  else {
    fVar8 = (float)bg_ds.w + (float)bg_ds.w;
  }
  bg_ds.cry = bg_ds.y + fVar8;
  bg_ds.sch = 2.0;
  bg_ds.rot = 270.0;
  bg_ds.scw = 2.0;
  bg_ds.csx = bg_ds.crx;
  bg_ds.csy = bg_ds.cry;
  bg_ds.x = bg_ds.crx;
  bg_ds.y = bg_ds.cry;
  bg_ds.alpha = uVar4;
  DispSprD__FP9DISP_SPRT(&bg_ds);
  return;
}

static void MenuBg_TourouDisp(int off_x, int off_y, u_char alpha) {
	DISP_SPRT bg_ds;
	int i;
	float moyou1_x;
	float moyou2_x;
	u_char moyou1_alpha;
	u_char moyou2_alpha;
	u_char shdw_alpha;
	u_char flea_alpha;
	u_char bg_alpha;
	SQAR_DAT bg_sqar;
	DISP_SQAR dsq;
	static POS_ANIM_TBL moyou1_x_tbl[2] = {
		/* [0] = */ {
			/* .start_pos = */ 0.f,
			/* .end_pos = */ 640.f,
			/* .start_time = */ 0,
			/* .end_time = */ 900,
			/* .anim_label = */ 0
		},
		/* [1] = */ {
			/* .start_pos = */ -1.f,
			/* .end_pos = */ -1.f,
			/* .start_time = */ -1,
			/* .end_time = */ -1,
			/* .anim_label = */ -1
		}
	};
	static POS_ANIM_TBL moyou2_x_tbl[2] = {
		/* [0] = */ {
			/* .start_pos = */ 0.f,
			/* .end_pos = */ 640.f,
			/* .start_time = */ 0,
			/* .end_time = */ 600,
			/* .anim_label = */ 0
		},
		/* [1] = */ {
			/* .start_pos = */ -1.f,
			/* .end_pos = */ -1.f,
			/* .start_time = */ -1,
			/* .end_time = */ -1,
			/* .anim_label = */ -1
		}
	};
	static ALPHA_ANIM_TBL moyou1_alpha_tbl[14] = {
		/* [0] = */ {
			/* .start_alpha = */ 0,
			/* .end_alpha = */ 0,
			/* .start_time = */ 0,
			/* .end_time = */ 60
		},
		/* [1] = */ {
			/* .start_alpha = */ 0,
			/* .end_alpha = */ 38,
			/* .start_time = */ 60,
			/* .end_time = */ 240
		},
		/* [2] = */ {
			/* .start_alpha = */ 38,
			/* .end_alpha = */ 51,
			/* .start_time = */ 240,
			/* .end_time = */ 360
		},
		/* [3] = */ {
			/* .start_alpha = */ 51,
			/* .end_alpha = */ 25,
			/* .start_time = */ 360,
			/* .end_time = */ 450
		},
		/* [4] = */ {
			/* .start_alpha = */ 25,
			/* .end_alpha = */ 51,
			/* .start_time = */ 450,
			/* .end_time = */ 510
		},
		/* [5] = */ {
			/* .start_alpha = */ 51,
			/* .end_alpha = */ 83,
			/* .start_time = */ 510,
			/* .end_time = */ 660
		},
		/* [6] = */ {
			/* .start_alpha = */ 83,
			/* .end_alpha = */ 19,
			/* .start_time = */ 660,
			/* .end_time = */ 960
		},
		/* [7] = */ {
			/* .start_alpha = */ 19,
			/* .end_alpha = */ 51,
			/* .start_time = */ 960,
			/* .end_time = */ 1110
		},
		/* [8] = */ {
			/* .start_alpha = */ 51,
			/* .end_alpha = */ 12,
			/* .start_time = */ 1110,
			/* .end_time = */ 1210
		},
		/* [9] = */ {
			/* .start_alpha = */ 12,
			/* .end_alpha = */ 57,
			/* .start_time = */ 1210,
			/* .end_time = */ 1400
		},
		/* [10] = */ {
			/* .start_alpha = */ 57,
			/* .end_alpha = */ 12,
			/* .start_time = */ 1400,
			/* .end_time = */ 1680
		},
		/* [11] = */ {
			/* .start_alpha = */ 12,
			/* .end_alpha = */ 25,
			/* .start_time = */ 1680,
			/* .end_time = */ 1810
		},
		/* [12] = */ {
			/* .start_alpha = */ 25,
			/* .end_alpha = */ 19,
			/* .start_time = */ 1810,
			/* .end_time = */ 1860
		},
		/* [13] = */ {
			/* .start_alpha = */ -1,
			/* .end_alpha = */ -1,
			/* .start_time = */ -1,
			/* .end_time = */ -1
		}
	};
	static ALPHA_ANIM_TBL moyou2_alpha_tbl[16] = {
		/* [0] = */ {
			/* .start_alpha = */ 0,
			/* .end_alpha = */ 0,
			/* .start_time = */ 0,
			/* .end_time = */ 60
		},
		/* [1] = */ {
			/* .start_alpha = */ 0,
			/* .end_alpha = */ 38,
			/* .start_time = */ 60,
			/* .end_time = */ 240
		},
		/* [2] = */ {
			/* .start_alpha = */ 38,
			/* .end_alpha = */ 51,
			/* .start_time = */ 240,
			/* .end_time = */ 360
		},
		/* [3] = */ {
			/* .start_alpha = */ 51,
			/* .end_alpha = */ 12,
			/* .start_time = */ 360,
			/* .end_time = */ 450
		},
		/* [4] = */ {
			/* .start_alpha = */ 12,
			/* .end_alpha = */ 64,
			/* .start_time = */ 450,
			/* .end_time = */ 480
		},
		/* [5] = */ {
			/* .start_alpha = */ 64,
			/* .end_alpha = */ 38,
			/* .start_time = */ 480,
			/* .end_time = */ 600
		},
		/* [6] = */ {
			/* .start_alpha = */ 38,
			/* .end_alpha = */ 76,
			/* .start_time = */ 600,
			/* .end_time = */ 750
		},
		/* [7] = */ {
			/* .start_alpha = */ 76,
			/* .end_alpha = */ 38,
			/* .start_time = */ 750,
			/* .end_time = */ 960
		},
		/* [8] = */ {
			/* .start_alpha = */ 38,
			/* .end_alpha = */ 64,
			/* .start_time = */ 960,
			/* .end_time = */ 1080
		},
		/* [9] = */ {
			/* .start_alpha = */ 64,
			/* .end_alpha = */ 12,
			/* .start_time = */ 1080,
			/* .end_time = */ 1150
		},
		/* [10] = */ {
			/* .start_alpha = */ 12,
			/* .end_alpha = */ 38,
			/* .start_time = */ 1150,
			/* .end_time = */ 1320
		},
		/* [11] = */ {
			/* .start_alpha = */ 38,
			/* .end_alpha = */ 83,
			/* .start_time = */ 1320,
			/* .end_time = */ 1440
		},
		/* [12] = */ {
			/* .start_alpha = */ 83,
			/* .end_alpha = */ 6,
			/* .start_time = */ 1440,
			/* .end_time = */ 1660
		},
		/* [13] = */ {
			/* .start_alpha = */ 6,
			/* .end_alpha = */ 51,
			/* .start_time = */ 1660,
			/* .end_time = */ 1835
		},
		/* [14] = */ {
			/* .start_alpha = */ 51,
			/* .end_alpha = */ 38,
			/* .start_time = */ 1835,
			/* .end_time = */ 1860
		},
		/* [15] = */ {
			/* .start_alpha = */ -1,
			/* .end_alpha = */ -1,
			/* .start_time = */ -1,
			/* .end_time = */ -1
		}
	};
	static ALPHA_ANIM_TBL shdw_alpha_tbl[10] = {
		/* [0] = */ {
			/* .start_alpha = */ 0,
			/* .end_alpha = */ 128,
			/* .start_time = */ 0,
			/* .end_time = */ 60
		},
		/* [1] = */ {
			/* .start_alpha = */ 128,
			/* .end_alpha = */ 102,
			/* .start_time = */ 60,
			/* .end_time = */ 180
		},
		/* [2] = */ {
			/* .start_alpha = */ 102,
			/* .end_alpha = */ 128,
			/* .start_time = */ 180,
			/* .end_time = */ 450
		},
		/* [3] = */ {
			/* .start_alpha = */ 128,
			/* .end_alpha = */ 89,
			/* .start_time = */ 450,
			/* .end_time = */ 600
		},
		/* [4] = */ {
			/* .start_alpha = */ 89,
			/* .end_alpha = */ 96,
			/* .start_time = */ 600,
			/* .end_time = */ 960
		},
		/* [5] = */ {
			/* .start_alpha = */ 96,
			/* .end_alpha = */ 70,
			/* .start_time = */ 960,
			/* .end_time = */ 1320
		},
		/* [6] = */ {
			/* .start_alpha = */ 70,
			/* .end_alpha = */ 108,
			/* .start_time = */ 1320,
			/* .end_time = */ 1445
		},
		/* [7] = */ {
			/* .start_alpha = */ 108,
			/* .end_alpha = */ 115,
			/* .start_time = */ 1445,
			/* .end_time = */ 1560
		},
		/* [8] = */ {
			/* .start_alpha = */ 115,
			/* .end_alpha = */ 96,
			/* .start_time = */ 1560,
			/* .end_time = */ 1860
		},
		/* [9] = */ {
			/* .start_alpha = */ -1,
			/* .end_alpha = */ -1,
			/* .start_time = */ -1,
			/* .end_time = */ -1
		}
	};
	static ALPHA_ANIM_TBL flea_alpha_tbl[18] = {
		/* [0] = */ {
			/* .start_alpha = */ 0,
			/* .end_alpha = */ 0,
			/* .start_time = */ 0,
			/* .end_time = */ 60
		},
		/* [1] = */ {
			/* .start_alpha = */ 0,
			/* .end_alpha = */ 19,
			/* .start_time = */ 60,
			/* .end_time = */ 66
		},
		/* [2] = */ {
			/* .start_alpha = */ 19,
			/* .end_alpha = */ 0,
			/* .start_time = */ 66,
			/* .end_time = */ 70
		},
		/* [3] = */ {
			/* .start_alpha = */ 0,
			/* .end_alpha = */ 12,
			/* .start_time = */ 70,
			/* .end_time = */ 100
		},
		/* [4] = */ {
			/* .start_alpha = */ 12,
			/* .end_alpha = */ 25,
			/* .start_time = */ 100,
			/* .end_time = */ 108
		},
		/* [5] = */ {
			/* .start_alpha = */ 25,
			/* .end_alpha = */ 19,
			/* .start_time = */ 108,
			/* .end_time = */ 112
		},
		/* [6] = */ {
			/* .start_alpha = */ 19,
			/* .end_alpha = */ 25,
			/* .start_time = */ 112,
			/* .end_time = */ 131
		},
		/* [7] = */ {
			/* .start_alpha = */ 25,
			/* .end_alpha = */ 19,
			/* .start_time = */ 131,
			/* .end_time = */ 137
		},
		/* [8] = */ {
			/* .start_alpha = */ 19,
			/* .end_alpha = */ 51,
			/* .start_time = */ 137,
			/* .end_time = */ 210
		},
		/* [9] = */ {
			/* .start_alpha = */ 51,
			/* .end_alpha = */ 6,
			/* .start_time = */ 210,
			/* .end_time = */ 450
		},
		/* [10] = */ {
			/* .start_alpha = */ 6,
			/* .end_alpha = */ 108,
			/* .start_time = */ 450,
			/* .end_time = */ 680
		},
		/* [11] = */ {
			/* .start_alpha = */ 108,
			/* .end_alpha = */ 19,
			/* .start_time = */ 680,
			/* .end_time = */ 960
		},
		/* [12] = */ {
			/* .start_alpha = */ 19,
			/* .end_alpha = */ 0,
			/* .start_time = */ 960,
			/* .end_time = */ 1190
		},
		/* [13] = */ {
			/* .start_alpha = */ 0,
			/* .end_alpha = */ 12,
			/* .start_time = */ 1190,
			/* .end_time = */ 1280
		},
		/* [14] = */ {
			/* .start_alpha = */ 12,
			/* .end_alpha = */ 76,
			/* .start_time = */ 1280,
			/* .end_time = */ 1380
		},
		/* [15] = */ {
			/* .start_alpha = */ 76,
			/* .end_alpha = */ 6,
			/* .start_time = */ 1380,
			/* .end_time = */ 1575
		},
		/* [16] = */ {
			/* .start_alpha = */ 6,
			/* .end_alpha = */ 19,
			/* .start_time = */ 1575,
			/* .end_time = */ 1860
		},
		/* [17] = */ {
			/* .start_alpha = */ -1,
			/* .end_alpha = */ -1,
			/* .start_time = */ -1,
			/* .end_time = */ -1
		}
	};
	static ALPHA_ANIM_TBL bg_alpha_tbl[3] = {
		/* [0] = */ {
			/* .start_alpha = */ 0,
			/* .end_alpha = */ 128,
			/* .start_time = */ 0,
			/* .end_time = */ 60
		},
		/* [1] = */ {
			/* .start_alpha = */ 128,
			/* .end_alpha = */ 128,
			/* .start_time = */ 60,
			/* .end_time = */ 1860
		},
		/* [2] = */ {
			/* .start_alpha = */ -1,
			/* .end_alpha = */ -1,
			/* .start_time = */ -1,
			/* .end_time = */ -1
		}
	};
	ALPHA_ANIM_TBL out_alpha_tbl[2];
	
  undefined *puVar1;
  uint uVar2;
  ulong *puVar3;
  uchar *puVar4;
  uchar uVar5;
  uchar uVar6;
  uchar uVar7;
  uchar uVar8;
  uchar uVar9;
  undefined1 *tbl;
  int iVar10;
  SPRT_DAT *pSVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  DISP_SPRT bg_ds;
  SQAR_DAT bg_sqar;
  DISP_SQAR dsq;
  ALPHA_ANIM_TBL out_alpha_tbl [2];
  
  tbl = (undefined1 *)out_alpha_tbl;
  uVar9 = '\0';
  uVar7 = '\0';
  uVar6 = '\0';
  uVar5 = '\0';
  puVar1 = (undefined *)((int)&bg_sqar.h + 3);
  uVar2 = (uint)puVar1 & 7;
  puVar3 = (ulong *)(puVar1 + -uVar2);
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | DAT_003bc668 >> (7 - uVar2) * 8;
  bg_sqar._0_8_ = DAT_003bc668;
  puVar1 = (undefined *)((int)&bg_sqar.y + 3);
  uVar2 = (uint)puVar1 & 7;
  puVar3 = (ulong *)(puVar1 + -uVar2);
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | DAT_003bc670 >> (7 - uVar2) * 8;
  bg_sqar._8_8_ = DAT_003bc670;
  uVar2 = (uint)&bg_sqar.alpha & 7;
  puVar4 = &bg_sqar.alpha + -uVar2;
  *(ulong *)puVar4 = *(ulong *)puVar4 & -1L << (uVar2 + 1) * 8 | DAT_003bc678 >> (7 - uVar2) * 8;
  bg_sqar._16_8_ = DAT_003bc678;
  puVar1 = (undefined *)((int)&out_alpha_tbl[0].end_time + 1);
  uVar2 = (uint)puVar1 & 7;
  puVar3 = (ulong *)(puVar1 + -uVar2);
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | (ulong)DAT_003bc8a8 >> (7 - uVar2) * 8;
  out_alpha_tbl[0] = DAT_003bc8a8;
  puVar1 = (undefined *)((int)&out_alpha_tbl[1].end_time + 1);
  uVar2 = (uint)puVar1 & 7;
  puVar3 = (ulong *)(puVar1 + -uVar2);
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | (ulong)_PTR_003bc8b0 >> (7 - uVar2) * 8;
  out_alpha_tbl[1] = _PTR_003bc8b0;
  uVar8 = '\0';
  if (menu_disp.tourou_anim_step == '\0') {
    menu_disp.tourou_anim_timer = 0;
    menu_disp.tourou_anim_step = '\x02';
    menu_disp.moyou1_anim_timer = 0;
    menu_disp.moyou2_anim_timer = 0;
  }
  fVar12 = Anim2D_CalcNowPos__FPC12POS_ANIM_TBLi
                     ((POS_ANIM_TBL *)moyou1_x_tbl_144,(int)(short)menu_disp.moyou1_anim_timer);
  fVar13 = Anim2D_CalcNowPos__FPC12POS_ANIM_TBLi
                     ((POS_ANIM_TBL *)moyou2_x_tbl_145,(int)(short)menu_disp.moyou2_anim_timer);
  if (menu_disp.tourou_anim_step == '\x02') {
    uVar5 = Anim2D_CalcNowAlpha__FPC14ALPHA_ANIM_TBLi
                      ((ALPHA_ANIM_TBL *)moyou1_alpha_tbl_146,
                       (int)(short)menu_disp.tourou_anim_timer);
    uVar6 = Anim2D_CalcNowAlpha__FPC14ALPHA_ANIM_TBLi
                      ((ALPHA_ANIM_TBL *)moyou2_alpha_tbl_147,
                       (int)(short)menu_disp.tourou_anim_timer);
    uVar7 = Anim2D_CalcNowAlpha__FPC14ALPHA_ANIM_TBLi
                      ((ALPHA_ANIM_TBL *)shdw_alpha_tbl_148,(int)(short)menu_disp.tourou_anim_timer)
    ;
    uVar8 = Anim2D_CalcNowAlpha__FPC14ALPHA_ANIM_TBLi
                      ((ALPHA_ANIM_TBL *)flea_alpha_tbl_149,(int)(short)menu_disp.tourou_anim_timer)
    ;
    iVar10 = (int)(short)menu_disp.tourou_anim_timer;
    tbl = bg_alpha_tbl_150;
  }
  else {
    if (menu_disp.tourou_anim_step != '\x03') goto LAB_001e680c;
    uVar5 = Anim2D_CalcNowAlpha__FPC14ALPHA_ANIM_TBLi
                      ((ALPHA_ANIM_TBL *)moyou1_alpha_tbl_146,
                       (int)(short)menu_disp.tourou_anim_timer);
    uVar6 = Anim2D_CalcNowAlpha__FPC14ALPHA_ANIM_TBLi
                      ((ALPHA_ANIM_TBL *)moyou2_alpha_tbl_147,
                       (int)(short)menu_disp.tourou_anim_timer);
    uVar7 = Anim2D_CalcNowAlpha__FPC14ALPHA_ANIM_TBLi
                      ((ALPHA_ANIM_TBL *)shdw_alpha_tbl_148,(int)(short)menu_disp.tourou_anim_timer)
    ;
    uVar8 = Anim2D_CalcNowAlpha__FPC14ALPHA_ANIM_TBLi
                      ((ALPHA_ANIM_TBL *)flea_alpha_tbl_149,(int)(short)menu_disp.tourou_anim_timer)
    ;
    uVar9 = Anim2D_CalcNowAlpha__FPC14ALPHA_ANIM_TBLi
                      ((ALPHA_ANIM_TBL *)bg_alpha_tbl_150,(int)(short)menu_disp.tourou_anim_timer);
    out_alpha_tbl[0].start_alpha = (short)(char)uVar5;
    uVar5 = Anim2D_CalcNowAlpha__FPC14ALPHA_ANIM_TBLi
                      ((ALPHA_ANIM_TBL *)tbl,(int)menu_disp.tourou_out_timer);
    out_alpha_tbl[0].start_alpha = (short)(char)uVar6;
    uVar6 = Anim2D_CalcNowAlpha__FPC14ALPHA_ANIM_TBLi
                      ((ALPHA_ANIM_TBL *)tbl,(int)menu_disp.tourou_out_timer);
    out_alpha_tbl[0].start_alpha = (short)(char)uVar7;
    uVar7 = Anim2D_CalcNowAlpha__FPC14ALPHA_ANIM_TBLi
                      ((ALPHA_ANIM_TBL *)tbl,(int)menu_disp.tourou_out_timer);
    out_alpha_tbl[0].start_alpha = (short)(char)uVar8;
    uVar8 = Anim2D_CalcNowAlpha__FPC14ALPHA_ANIM_TBLi
                      ((ALPHA_ANIM_TBL *)tbl,(int)menu_disp.tourou_out_timer);
    iVar10 = (int)menu_disp.tourou_out_timer;
    out_alpha_tbl[0].start_alpha = (short)(char)uVar9;
  }
  uVar9 = Anim2D_CalcNowAlpha__FPC14ALPHA_ANIM_TBLi((ALPHA_ANIM_TBL *)tbl,iVar10);
LAB_001e680c:
  PK2SendVram__FUiiii(0x1950ec0,-1,-1,0);
  CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&bg_ds,menu_top + 0x47);
  bg_ds.sch = DAT_003ee508;
  bg_ds.csx = bg_ds.x;
  bg_ds.csy = bg_ds.y;
  bg_ds.scw = DAT_003ee508;
  bg_ds.alpha = uVar9;
  DispSprD__FP9DISP_SPRT(&bg_ds);
  CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&bg_ds,menu_top + 0x48);
  if ((int)bg_ds.h < 0) {
    fVar14 = (float)(bg_ds.h & 1 | bg_ds.h >> 1);
    fVar14 = fVar14 + fVar14;
  }
  else {
    fVar14 = (float)bg_ds.h;
  }
  bg_ds.sch = DAT_003ee50c;
  bg_ds.rot = 90.0;
  bg_ds.crx = bg_ds.x + fVar14 * DAT_003ee50c;
  bg_ds.csy = bg_ds.y;
  bg_ds.cry = bg_ds.y;
  bg_ds.scw = DAT_003ee50c;
  bg_ds.csx = bg_ds.crx;
  bg_ds.x = bg_ds.crx;
  bg_ds.alpha = uVar9;
  DispSprD__FP9DISP_SPRT(&bg_ds);
  CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&bg_ds,menu_top + 0x52);
  if ((int)bg_ds.w < 0) {
    fVar14 = (float)(bg_ds.w & 1 | bg_ds.w >> 1);
    fVar14 = fVar14 + fVar14;
  }
  else {
    fVar14 = (float)bg_ds.w;
  }
  bg_ds.scw = 640.0 / fVar14;
  if ((int)bg_ds.h < 0) {
    fVar14 = (float)(bg_ds.h & 1 | bg_ds.h >> 1);
    fVar14 = fVar14 + fVar14;
  }
  else {
    fVar14 = (float)bg_ds.h;
  }
  bg_ds.sch = 448.0 / fVar14;
  bg_ds.alphar = 0x48;
  bg_ds.csy = bg_ds.y;
  bg_ds.csx = fVar13;
  bg_ds.x = fVar13;
  bg_ds.alpha = uVar6;
  DispSprD__FP9DISP_SPRT(&bg_ds);
  CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&bg_ds,menu_top + 0x52);
  bg_ds.csx = fVar13 - 640.0;
  if ((int)bg_ds.w < 0) {
    fVar13 = (float)(bg_ds.w & 1 | bg_ds.w >> 1);
    fVar13 = fVar13 + fVar13;
  }
  else {
    fVar13 = (float)bg_ds.w;
  }
  bg_ds.scw = 640.0 / fVar13;
  if ((int)bg_ds.h < 0) {
    fVar13 = (float)(bg_ds.h & 1 | bg_ds.h >> 1);
    fVar13 = fVar13 + fVar13;
  }
  else {
    fVar13 = (float)bg_ds.h;
  }
  bg_ds.sch = 448.0 / fVar13;
  bg_ds.alphar = 0x48;
  bg_ds.csy = bg_ds.y;
  bg_ds.x = bg_ds.csx;
  bg_ds.alpha = uVar6;
  DispSprD__FP9DISP_SPRT(&bg_ds);
  CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&bg_ds,menu_top + 0x51);
  if ((int)bg_ds.w < 0) {
    fVar13 = (float)(bg_ds.w & 1 | bg_ds.w >> 1);
    fVar13 = fVar13 + fVar13;
  }
  else {
    fVar13 = (float)bg_ds.w;
  }
  bg_ds.scw = 640.0 / fVar13;
  if ((int)bg_ds.h < 0) {
    fVar13 = (float)(bg_ds.h & 1 | bg_ds.h >> 1);
    fVar13 = fVar13 + fVar13;
  }
  else {
    fVar13 = (float)bg_ds.h;
  }
  bg_ds.sch = 448.0 / fVar13;
  bg_ds.alphar = 0x48;
  bg_ds.csy = bg_ds.y;
  bg_ds.csx = fVar12;
  bg_ds.x = fVar12;
  bg_ds.alpha = uVar5;
  DispSprD__FP9DISP_SPRT(&bg_ds);
  CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&bg_ds,menu_top + 0x51);
  bg_ds.csx = fVar12 - 640.0;
  if ((int)bg_ds.w < 0) {
    fVar12 = (float)(bg_ds.w & 1 | bg_ds.w >> 1);
    fVar12 = fVar12 + fVar12;
  }
  else {
    fVar12 = (float)bg_ds.w;
  }
  bg_ds.scw = 640.0 / fVar12;
  if ((int)bg_ds.h < 0) {
    fVar12 = (float)(bg_ds.h & 1 | bg_ds.h >> 1);
    fVar12 = fVar12 + fVar12;
  }
  else {
    fVar12 = (float)bg_ds.h;
  }
  bg_ds.sch = 448.0 / fVar12;
  bg_ds.alphar = 0x48;
  iVar10 = 3;
  bg_ds.csy = bg_ds.y;
  bg_ds.x = bg_ds.csx;
  bg_ds.alpha = uVar5;
  DispSprD__FP9DISP_SPRT(&bg_ds);
  pSVar11 = menu_top + 0x4d;
  do {
    CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&bg_ds,pSVar11);
    iVar10 = iVar10 + -1;
    pSVar11 = pSVar11 + 1;
    bg_ds.csx = bg_ds.x;
    bg_ds.csy = bg_ds.y;
    bg_ds.scw = 4.5;
    bg_ds.sch = 4.5;
    bg_ds.r = '\0';
    bg_ds.g = '\0';
    bg_ds.b = '\0';
    bg_ds.alpha = uVar7;
    DispSprD__FP9DISP_SPRT(&bg_ds);
    fVar12 = DAT_003ee510;
  } while (-1 < iVar10);
  CopySqrDToSqr__FP9DISP_SQARP8SQAR_DAT(&dsq,&bg_sqar);
  dsq.alpha = uVar7;
  DispSqrD__FP9DISP_SQAR(&dsq);
  pSVar11 = menu_top + 0x49;
  iVar10 = 3;
  do {
    CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&bg_ds,pSVar11);
    iVar10 = iVar10 + -1;
    pSVar11 = pSVar11 + 1;
    bg_ds.csx = bg_ds.x;
    bg_ds.csy = bg_ds.y;
    bg_ds.r = 0xff;
    bg_ds.g = 'y';
    bg_ds.b = '>';
    bg_ds.scw = fVar12;
    bg_ds.sch = fVar12;
    bg_ds.alphar = 0x48;
    bg_ds.alpha = uVar8;
    DispSprD__FP9DISP_SPRT(&bg_ds);
  } while (-1 < iVar10);
  return;
}

static void MenuBg_LeftShadowDisp(int off_x, int off_y, u_char alpha) {
	DISP_SPRT bg_ds;
	float shadow_off_x;
	u_char shadow_alpha;
	static POS_ANIM_TBL shadow_x_tbl[3] = {
		/* [0] = */ {
			/* .start_pos = */ -320.f,
			/* .end_pos = */ -320.f,
			/* .start_time = */ 0,
			/* .end_time = */ 4,
			/* .anim_label = */ 1
		},
		/* [1] = */ {
			/* .start_pos = */ -320.f,
			/* .end_pos = */ 0.f,
			/* .start_time = */ 4,
			/* .end_time = */ 16,
			/* .anim_label = */ 1
		},
		/* [2] = */ {
			/* .start_pos = */ -1.f,
			/* .end_pos = */ -1.f,
			/* .start_time = */ -1,
			/* .end_time = */ -1,
			/* .anim_label = */ -1
		}
	};
	static ALPHA_ANIM_TBL shadow_alpha_tbl[3] = {
		/* [0] = */ {
			/* .start_alpha = */ 0,
			/* .end_alpha = */ 0,
			/* .start_time = */ 0,
			/* .end_time = */ 4
		},
		/* [1] = */ {
			/* .start_alpha = */ 0,
			/* .end_alpha = */ 128,
			/* .start_time = */ 4,
			/* .end_time = */ 16
		},
		/* [2] = */ {
			/* .start_alpha = */ -1,
			/* .end_alpha = */ -1,
			/* .start_time = */ -1,
			/* .end_time = */ -1
		}
	};
	ALPHA_ANIM_TBL in_to_out_alpha_tbl[2];
	
  undefined *puVar1;
  ushort uVar2;
  uint uVar3;
  ulong *puVar4;
  uchar uVar5;
  undefined1 *tbl;
  float fVar6;
  float fVar7;
  DISP_SPRT bg_ds;
  ALPHA_ANIM_TBL in_to_out_alpha_tbl [2];
  
  tbl = (undefined1 *)in_to_out_alpha_tbl;
  fVar6 = -320.0;
  puVar1 = (undefined *)((int)&in_to_out_alpha_tbl[0].end_time + 1);
  uVar3 = (uint)puVar1 & 7;
  puVar4 = (ulong *)(puVar1 + -uVar3);
  *puVar4 = *puVar4 & -1L << (uVar3 + 1) * 8 | (ulong)DAT_003bc900 >> (7 - uVar3) * 8;
  in_to_out_alpha_tbl[0] = DAT_003bc900;
  puVar1 = (undefined *)((int)&in_to_out_alpha_tbl[1].end_time + 1);
  uVar3 = (uint)puVar1 & 7;
  puVar4 = (ulong *)(puVar1 + -uVar3);
  *puVar4 = *puVar4 & -1L << (uVar3 + 1) * 8 | (ulong)_PTR_003bc908 >> (7 - uVar3) * 8;
  in_to_out_alpha_tbl[1] = _PTR_003bc908;
  bg_ds.alpha = '\0';
  if (menu_disp.menu_bg_anim == 1) {
    fVar6 = Anim2D_CalcNowPos__FPC12POS_ANIM_TBLi
                      ((POS_ANIM_TBL *)shadow_x_tbl_154,(int)(short)menu_disp.bg_anim_timer);
    uVar2 = menu_disp.bg_anim_timer;
LAB_001e6e34:
    tbl = shadow_alpha_tbl_155;
  }
  else {
    if (menu_disp.menu_bg_anim == 2) {
      fVar6 = 0.0;
      bg_ds.alpha = 0x80;
      goto LAB_001e6e4c;
    }
    if (menu_disp.menu_bg_anim != 3) goto LAB_001e6e4c;
    if (menu_disp.bganim_in_to_out == '\0') {
      fVar6 = Anim2D_CalcNowPos__FPC12POS_ANIM_TBLi
                        ((POS_ANIM_TBL *)shadow_x_tbl_154,(int)(short)menu_disp.bg_anim_out_timer);
      uVar2 = menu_disp.bg_anim_out_timer;
      goto LAB_001e6e34;
    }
    fVar6 = Anim2D_CalcNowPos__FPC12POS_ANIM_TBLi
                      ((POS_ANIM_TBL *)shadow_x_tbl_154,(int)(short)menu_disp.bg_anim_timer);
    uVar5 = Anim2D_CalcNowAlpha__FPC14ALPHA_ANIM_TBLi
                      ((ALPHA_ANIM_TBL *)shadow_alpha_tbl_155,(int)(short)menu_disp.bg_anim_timer);
    in_to_out_alpha_tbl[0].end_alpha = (short)(char)uVar5;
    uVar2 = menu_disp.bg_anim_out_timer;
  }
  bg_ds.alpha = Anim2D_CalcNowAlpha__FPC14ALPHA_ANIM_TBLi((ALPHA_ANIM_TBL *)tbl,(int)(short)uVar2);
LAB_001e6e4c:
  PK2SendVram__FUiiii(0x19368c0,-1,-1,0);
  CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&bg_ds,menu_top);
  if ((int)(bg_ds.h << 1) < 0) {
    fVar7 = (float)(bg_ds.h & 0x7fffffff) + (float)(bg_ds.h & 0x7fffffff);
  }
  else {
    fVar7 = (float)(bg_ds.h << 1);
  }
  bg_ds.crx = bg_ds.x + fVar6 + fVar7;
  bg_ds.sch = 2.0;
  bg_ds.rot = 90.0;
  bg_ds.csy = bg_ds.y;
  bg_ds.alphar = 0x46;
  bg_ds.cry = bg_ds.y;
  bg_ds.scw = 2.0;
  bg_ds.csx = bg_ds.crx;
  bg_ds.x = bg_ds.crx;
  DispSprD__FP9DISP_SPRT(&bg_ds);
  return;
}

static void MenuBg_RightShadowDisp(int off_x, int off_y, u_char alpha) {
	DISP_SPRT bg_ds;
	float shadow_off_x;
	u_char shadow_alpha;
	static POS_ANIM_TBL shadow_x_tbl[3] = {
		/* [0] = */ {
			/* .start_pos = */ 320.f,
			/* .end_pos = */ 320.f,
			/* .start_time = */ 0,
			/* .end_time = */ 4,
			/* .anim_label = */ 1
		},
		/* [1] = */ {
			/* .start_pos = */ 320.f,
			/* .end_pos = */ 0.f,
			/* .start_time = */ 4,
			/* .end_time = */ 16,
			/* .anim_label = */ 1
		},
		/* [2] = */ {
			/* .start_pos = */ -1.f,
			/* .end_pos = */ -1.f,
			/* .start_time = */ -1,
			/* .end_time = */ -1,
			/* .anim_label = */ -1
		}
	};
	static ALPHA_ANIM_TBL shadow_alpha_tbl[3] = {
		/* [0] = */ {
			/* .start_alpha = */ 0,
			/* .end_alpha = */ 0,
			/* .start_time = */ 0,
			/* .end_time = */ 4
		},
		/* [1] = */ {
			/* .start_alpha = */ 0,
			/* .end_alpha = */ 128,
			/* .start_time = */ 4,
			/* .end_time = */ 16
		},
		/* [2] = */ {
			/* .start_alpha = */ -1,
			/* .end_alpha = */ -1,
			/* .start_time = */ -1,
			/* .end_time = */ -1
		}
	};
	ALPHA_ANIM_TBL in_to_out_alpha_tbl[2];
	
  undefined *puVar1;
  ushort uVar2;
  uint uVar3;
  ulong *puVar4;
  uchar uVar5;
  undefined1 *tbl;
  float fVar6;
  DISP_SPRT bg_ds;
  ALPHA_ANIM_TBL in_to_out_alpha_tbl [2];
  
  tbl = (undefined1 *)in_to_out_alpha_tbl;
  fVar6 = 320.0;
  puVar1 = (undefined *)((int)&in_to_out_alpha_tbl[0].end_time + 1);
  uVar3 = (uint)puVar1 & 7;
  puVar4 = (ulong *)(puVar1 + -uVar3);
  *puVar4 = *puVar4 & -1L << (uVar3 + 1) * 8 | (ulong)DAT_003bc958 >> (7 - uVar3) * 8;
  in_to_out_alpha_tbl[0] = DAT_003bc958;
  puVar1 = (undefined *)((int)&in_to_out_alpha_tbl[1].end_time + 1);
  uVar3 = (uint)puVar1 & 7;
  puVar4 = (ulong *)(puVar1 + -uVar3);
  *puVar4 = *puVar4 & -1L << (uVar3 + 1) * 8 | (ulong)_PTR_003bc960 >> (7 - uVar3) * 8;
  in_to_out_alpha_tbl[1] = _PTR_003bc960;
  bg_ds.alpha = '\0';
  if (menu_disp.menu_bg_anim == 1) {
    fVar6 = Anim2D_CalcNowPos__FPC12POS_ANIM_TBLi
                      ((POS_ANIM_TBL *)shadow_x_tbl_159,(int)(short)menu_disp.bg_anim_timer);
    uVar2 = menu_disp.bg_anim_timer;
LAB_001e7004:
    tbl = shadow_alpha_tbl_160;
  }
  else {
    if (menu_disp.menu_bg_anim == 2) {
      fVar6 = 0.0;
      bg_ds.alpha = 0x80;
      goto LAB_001e701c;
    }
    if (menu_disp.menu_bg_anim != 3) goto LAB_001e701c;
    if (menu_disp.bganim_in_to_out == '\0') {
      fVar6 = Anim2D_CalcNowPos__FPC12POS_ANIM_TBLi
                        ((POS_ANIM_TBL *)shadow_x_tbl_159,(int)(short)menu_disp.bg_anim_out_timer);
      uVar2 = menu_disp.bg_anim_out_timer;
      goto LAB_001e7004;
    }
    fVar6 = Anim2D_CalcNowPos__FPC12POS_ANIM_TBLi
                      ((POS_ANIM_TBL *)shadow_x_tbl_159,(int)(short)menu_disp.bg_anim_timer);
    uVar5 = Anim2D_CalcNowAlpha__FPC14ALPHA_ANIM_TBLi
                      ((ALPHA_ANIM_TBL *)shadow_alpha_tbl_160,(int)(short)menu_disp.bg_anim_timer);
    in_to_out_alpha_tbl[0].end_alpha = (short)(char)uVar5;
    uVar2 = menu_disp.bg_anim_out_timer;
  }
  bg_ds.alpha = Anim2D_CalcNowAlpha__FPC14ALPHA_ANIM_TBLi((ALPHA_ANIM_TBL *)tbl,(int)(short)uVar2);
LAB_001e701c:
  PK2SendVram__FUiiii(0x19368c0,-1,-1,0);
  CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&bg_ds,menu_top + 6);
  bg_ds.crx = bg_ds.x + fVar6;
  if ((int)(bg_ds.w << 1) < 0) {
    fVar6 = (float)(bg_ds.w & 0x7fffffff) + (float)(bg_ds.w & 0x7fffffff);
  }
  else {
    fVar6 = (float)(bg_ds.w << 1);
  }
  bg_ds.cry = bg_ds.y + fVar6;
  bg_ds.sch = 2.0;
  bg_ds.rot = 270.0;
  bg_ds.alphar = 0x46;
  bg_ds.scw = 2.0;
  bg_ds.csx = bg_ds.crx;
  bg_ds.csy = bg_ds.cry;
  bg_ds.x = bg_ds.crx;
  bg_ds.y = bg_ds.cry;
  DispSprD__FP9DISP_SPRT(&bg_ds);
  return;
}

static void MenuBg_WallDisp(int off_x, int off_y, u_char alpha) {
	DISP_SPRT bg_ds;
	u_char wall_alpha;
	static ALPHA_ANIM_TBL wall_alpha_tbl[3] = {
		/* [0] = */ {
			/* .start_alpha = */ 0,
			/* .end_alpha = */ 128,
			/* .start_time = */ 0,
			/* .end_time = */ 8
		},
		/* [1] = */ {
			/* .start_alpha = */ 128,
			/* .end_alpha = */ 128,
			/* .start_time = */ 8,
			/* .end_time = */ 16
		},
		/* [2] = */ {
			/* .start_alpha = */ -1,
			/* .end_alpha = */ -1,
			/* .start_time = */ -1,
			/* .end_time = */ -1
		}
	};
	ALPHA_ANIM_TBL in_to_out_alpha_tbl[2];
	
  undefined *puVar1;
  ushort uVar2;
  uint uVar3;
  ulong *puVar4;
  uchar uVar5;
  undefined1 *tbl;
  DISP_SPRT bg_ds;
  ALPHA_ANIM_TBL in_to_out_alpha_tbl [2];
  
  tbl = (undefined1 *)in_to_out_alpha_tbl;
  puVar1 = (undefined *)((int)&in_to_out_alpha_tbl[0].end_time + 1);
  uVar3 = (uint)puVar1 & 7;
  puVar4 = (ulong *)(puVar1 + -uVar3);
  *puVar4 = *puVar4 & -1L << (uVar3 + 1) * 8 | (ulong)DAT_003bc980 >> (7 - uVar3) * 8;
  in_to_out_alpha_tbl[0] = DAT_003bc980;
  puVar1 = (undefined *)((int)&in_to_out_alpha_tbl[1].end_time + 1);
  uVar3 = (uint)puVar1 & 7;
  puVar4 = (ulong *)(puVar1 + -uVar3);
  *puVar4 = *puVar4 & -1L << (uVar3 + 1) * 8 | (ulong)_PTR_003bc988 >> (7 - uVar3) * 8;
  in_to_out_alpha_tbl[1] = _PTR_003bc988;
  uVar5 = '\0';
  uVar2 = menu_disp.bg_anim_timer;
  if (menu_disp.menu_bg_anim == 1) {
LAB_001e719c:
    tbl = wall_alpha_tbl_164;
  }
  else {
    if (menu_disp.menu_bg_anim == 2) {
      uVar5 = 0x80;
      goto LAB_001e71b4;
    }
    if (menu_disp.menu_bg_anim != 3) goto LAB_001e71b4;
    uVar2 = menu_disp.bg_anim_out_timer;
    if (menu_disp.bganim_in_to_out == '\0') goto LAB_001e719c;
    uVar5 = Anim2D_CalcNowAlpha__FPC14ALPHA_ANIM_TBLi
                      ((ALPHA_ANIM_TBL *)wall_alpha_tbl_164,(int)(short)menu_disp.bg_anim_timer);
    in_to_out_alpha_tbl[0].end_alpha = (short)(char)uVar5;
    uVar2 = menu_disp.bg_anim_out_timer;
  }
  uVar5 = Anim2D_CalcNowAlpha__FPC14ALPHA_ANIM_TBLi((ALPHA_ANIM_TBL *)tbl,(int)(short)uVar2);
LAB_001e71b4:
  PK2SendVram__FUiiii(0x19368c0,-1,-1,0);
  CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&bg_ds,menu_top + 1);
  bg_ds.csx = bg_ds.x;
  bg_ds.csy = bg_ds.y;
  bg_ds.scw = 2.0;
  bg_ds.sch = 2.0;
  bg_ds.alpha = uVar5;
  DispSprD__FP9DISP_SPRT(&bg_ds);
  CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&bg_ds,menu_top + 7);
  bg_ds.sch = 2.0;
  bg_ds.scw = 2.0;
  bg_ds.csx = bg_ds.x;
  bg_ds.csy = bg_ds.y;
  bg_ds.alpha = uVar5;
  DispSprD__FP9DISP_SPRT(&bg_ds);
  return;
}

void MapViewInit() {
  MenuIn__Fv();
  menu_wrk.menu_step = '\0';
  map_view_flg = '\x01';
  return;
}
