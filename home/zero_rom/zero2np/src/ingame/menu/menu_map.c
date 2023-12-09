// STATUS: NOT STARTED

#include "menu_map.h"

typedef struct {
	char step;
	int tex_label;
} MENU_MAP_LOAD_CTRL;

typedef struct {
	char plyr_map;
	char cross_fade_flg;
	MENU_MAP_LOAD_CTRL snap_load;
	int hit_room;
	int map_area_id;
} MENU_MAP_CTRL;

typedef struct {
	char anim_step;
	char anim_timer;
	fixed_array<char,4> tri_pad_flg;
	char tri_anim_step;
	u_char tri_alpha;
	char tri_timer;
	float map_off_x;
	float map_off_y;
	u_char map_scall_flg;
	char disp_map_label;
	char before_disp_map;
} MENU_MAP_DISP;

static void *menu_map_bg_addr = NULL;
static void *map_data_addr = NULL;
static void *snap_data_addr = NULL;
static MENU_MAP_DISP menu_map_disp;
static MENU_MAP_CTRL menu_map_ctrl;

static int map_label_tbl[8][3] = {
	/* [0] = */ {
		/* [0] = */ 0,
		/* [1] = */ -1,
		/* [2] = */ 13
	},
	/* [1] = */ {
		/* [0] = */ 1,
		/* [1] = */ 2,
		/* [2] = */ 3
	},
	/* [2] = */ {
		/* [0] = */ 4,
		/* [1] = */ 5,
		/* [2] = */ 6
	},
	/* [3] = */ {
		/* [0] = */ 7,
		/* [1] = */ 8,
		/* [2] = */ 9
	},
	/* [4] = */ {
		/* [0] = */ 10,
		/* [1] = */ 11,
		/* [2] = */ 12
	},
	/* [5] = */ {
		/* [0] = */ 14,
		/* [1] = */ -1,
		/* [2] = */ -1
	},
	/* [6] = */ {
		/* [0] = */ 15,
		/* [1] = */ -1,
		/* [2] = */ -1
	},
	/* [7] = */ {
		/* [0] = */ 16,
		/* [1] = */ -1,
		/* [2] = */ -1
	}
};

static void _fixed_array_assert(char *strType, size_t v0, size_t v1) {
	static char *str = 0x3bde50;
	
  g3ddbgAssert__FbPCce(false,str_849);
  return (char *)v;
}

static void** void * * _fixed_array_verifyrange<void *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_verifyrange__H1Zc_UiUi_PX01(0x3f2e10,_max);
  }
  return (void **)0x0;
}

static char** char * * _fixed_array_verifyrange<char *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_verifyrange__H1Zc_UiUi_PX01(0x3f2e18,_max);
  }
  return (char **)0x0;
}

static unsigned int** unsigned int * * _fixed_array_verifyrange<unsigned int *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_verifyrange__H1Zc_UiUi_PX01(0x3bde98,_max);
  }
  return (uint **)0x0;
}

static void MenuMapInit() {
  uchar uVar1;
  
  MenuMapCtrlInit__Fv();
  MenuCrossFadeInit__Fv();
  uVar1 = GetLanguage__Fv();
  GetMenuMapTexMem__FPPvi(&menu_map_bg_addr,(char)uVar1 + 0x42);
  uVar1 = GetLanguage__Fv();
  MenuMapTexLoadReq__FPvi(menu_map_bg_addr,(char)uVar1 + 0x42);
  return;
}

static void MenuMapCtrlInit() {
  int iVar1;
  
  iVar1 = GetPlyrMapLabel__Fv();
  menu_map_ctrl.plyr_map = (char)iVar1;
  menu_map_ctrl.hit_room = -1;
  menu_map_ctrl.cross_fade_flg = '\0';
  MenuMapLoadCtrlInit__FP18MENU_MAP_LOAD_CTRL(&menu_map_ctrl.snap_load);
  menu_map_ctrl.map_area_id = 0;
  return;
}

static void MenuMapLoadCtrlInit(MENU_MAP_LOAD_CTRL *load_ctrl) {
  load_ctrl->step = '\0';
  load_ctrl->tex_label = -1;
  return;
}

static void GetMenuMapTexMem(void **tex_addr, int data_label) {
  uint size;
  void *pvVar1;
  
  if (*tex_addr != (void *)0x0) {
    LiberateMenuMapTexMem__FPPv(tex_addr);
  }
  size = GetFileSize(data_label);
  pvVar1 = mem_utilGetMem__Fi(size);
  *tex_addr = pvVar1;
  return;
}

static void MenuMapTexLoadReq(void *tex_addr, int data_label) {
  FileLoadReqEE(data_label,tex_addr,2,(undefined1 *)0x0,(void *)0x0);
  return;
}

static void MenuMapSnapLoadReq() {
  ROOM_INFO_DAT *pRVar1;
  int iVar2;
  ROOM_INFO_DAT *pRVar3;
  
  if (snap_data_addr != (void *)0x0) {
    LiberateMenuMapTexMem__FPPv(&snap_data_addr);
  }
  pRVar3 = room_info_dat;
  iVar2 = room_info_dat[0].room_label;
  if (room_info_dat[0].map_label != -1) {
    while (iVar2 != menu_map_ctrl.hit_room) {
      if (pRVar3[1].map_label == -1) {
        return;
      }
      pRVar1 = pRVar3 + 1;
      pRVar3 = pRVar3 + 1;
      iVar2 = pRVar1->room_label;
    }
    menu_map_ctrl.snap_load.tex_label = pRVar3->snap_tex_label;
    menu_map_ctrl.snap_load.step = '\0';
  }
  return;
}

static int MenuMapBgLoadWait() {
  uchar uVar1;
  int iVar2;
  
  uVar1 = GetLanguage__Fv();
  iVar2 = FileLoadIsEnd2((char)uVar1 + 0x42,menu_map_bg_addr);
  return (int)(iVar2 != 0);
}

void MenuMap() {
	static char __FUNCTION__[8] = {
		/* [0] = */ 77,
		/* [1] = */ 101,
		/* [2] = */ 110,
		/* [3] = */ 117,
		/* [4] = */ 77,
		/* [5] = */ 97,
		/* [6] = */ 112,
		/* [7] = */ 0
	};
	int room_label;
	
  int iVar1;
  
  if (menu_wrk.step == '\x01') {
    iVar1 = MenuMapBgLoadWait__Fv();
    if (iVar1 == 0) {
      return;
    }
    menu_wrk.step = '\x02';
    return;
  }
  if (menu_wrk.step < 2) {
    if (menu_wrk.step == '\0') {
      MenuMapInit__Fv();
      MenuMapDispInit__Fv();
      if ((byte)menu_map_ctrl.plyr_map < 0x11) {
        MenuCrossFadeInStart__Fii
                  ((int)menu_map_ctrl.cross_fade_flg,
                   map_info_dat[menu_map_disp.disp_map_label].map_tex_id);
        menu_map_ctrl.hit_room = MenuMapRoomHitCheck__Fff(320.0,DAT_003ee564);
        if (menu_map_ctrl.hit_room != -1) {
          MenuMapSnapLoadReq__Fv();
        }
      }
      menu_wrk.step = '\x01';
      return;
    }
  }
  else {
    if (menu_wrk.step == '\x02') {
      if (menu_map_disp.anim_step != '\x02') {
        return;
      }
      MenuMapPad__Fv();
      if (0x10 < (byte)menu_map_ctrl.plyr_map) {
        return;
      }
      MenuCmnCrossFade__Fv();
      MenuMapSnapLoadExe__Fv();
      iVar1 = MenuMapRoomHitCheck__Fff(320.0,DAT_003ee568);
      if (iVar1 == menu_map_ctrl.hit_room) {
        return;
      }
      if (iVar1 == -1) {
        menu_map_ctrl.hit_room = iVar1;
        return;
      }
      menu_map_ctrl.hit_room = iVar1;
      iVar1 = GetRoomInfo__Fi(iVar1);
      if (iVar1 != 1) {
        return;
      }
      MenuMapSnapLoadReq__Fv();
      return;
    }
    if (menu_wrk.step == '\x03') {
      if (menu_map_disp.anim_step != '\x04') {
        return;
      }
      MenuMapRelease__Fv();
      MenuCrossFadeTexLoadCancel__Fi(0);
      MenuCrossFadeTexLoadCancel__Fi(1);
      LiberateAllMenuCrossFadeTexMem__Fv();
      SetNextMenuStep__Fi(8);
      return;
    }
  }
  SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
  PrintAssertReal("Error! %s");
  return;
}

static void MenuMapSnapLoadExe() {
	static char __FUNCTION__[19] = {
		/* [0] = */ 77,
		/* [1] = */ 101,
		/* [2] = */ 110,
		/* [3] = */ 117,
		/* [4] = */ 77,
		/* [5] = */ 97,
		/* [6] = */ 112,
		/* [7] = */ 83,
		/* [8] = */ 110,
		/* [9] = */ 97,
		/* [10] = */ 112,
		/* [11] = */ 76,
		/* [12] = */ 111,
		/* [13] = */ 97,
		/* [14] = */ 100,
		/* [15] = */ 69,
		/* [16] = */ 120,
		/* [17] = */ 101,
		/* [18] = */ 0
	};
	
  int iVar1;
  
  if (menu_map_ctrl.snap_load.step == '\x01') {
    iVar1 = FileLoadIsEnd2(menu_map_ctrl.snap_load.tex_label,snap_data_addr);
    if (iVar1 != 0) {
      menu_map_ctrl.snap_load.step = '\x02';
    }
  }
  else {
    if (menu_map_ctrl.snap_load.step < '\x02') {
      if (menu_map_ctrl.snap_load.step == '\0') {
        if (menu_map_ctrl.hit_room != -1) {
          GetMenuMapTexMem__FPPvi(&snap_data_addr,menu_map_ctrl.snap_load.tex_label);
          MenuMapTexLoadReq__FPvi(snap_data_addr,menu_map_ctrl.snap_load.tex_label);
          menu_map_ctrl.snap_load.step = '\x01';
          return;
        }
        printf("<<<<<<<<<WARNING FILE[%s] LINE[%d]>>>>>>>>>>\n");
        PrintWarningReal("Warning! hit_room %d\n");
        return;
      }
    }
    else if (menu_map_ctrl.snap_load.step == '\x02') {
      return;
    }
    SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
    PrintAssertReal("Error! %s");
  }
  return;
}

static void MenuMapPad() {
	int i;
	float map_size_w;
	float map_size_h;
	u_char fade_alpha[2];
	
  short *psVar1;
  char *pcVar2;
  int iVar3;
  float fVar4;
  uchar fade_alpha [2];
  
  iVar3 = 0;
  do {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Zc_UiUi_PX01(iVar3,4);
    pcVar2 = menu_map_disp.tri_pad_flg.field0_0x0.m_aData + iVar3;
                    /* end of inlined section */
    iVar3 = iVar3 + 1;
                    /* end of inlined section */
    *pcVar2 = '\0';
  } while (iVar3 < 4);
  fade_alpha[1] = '\0';
  fade_alpha[0] = '\0';
  if ((byte)menu_map_ctrl.plyr_map < 0x11) {
    GetMenuCrossFadeAlpha__FPUc(fade_alpha);
    if (((pad[0].now & 0x1000U) != 0) || ((pad[0].id == 'y' && (pad[0].analog[3] < 0x59)))) {
      menu_map_disp.map_off_y = menu_map_disp.map_off_y + 3.0;
      if (DAT_003ee56c < menu_map_disp.map_off_y) {
        menu_map_disp.map_off_y = DAT_003ee56c;
      }
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
      _fixed_array_verifyrange__H1Zc_UiUi_PX01(0,4);
      menu_map_disp.tri_pad_flg.field0_0x0.m_aData[0] = '\x01';
                    /* end of inlined section */
    }
    if (((pad[0].now & 0x4000U) != 0) || ((pad[0].id == 'y' && (0x9d < pad[0].analog[3])))) {
      fVar4 = menu_map_disp.map_off_y - 3.0;
      menu_map_disp.map_off_y =
           159.0 - (float)map_size_dat[menu_map_disp.disp_map_label].h *
                   map_scall_dat[menu_map_disp.disp_map_label].normal;
      if (menu_map_disp.map_off_y <= fVar4) {
        menu_map_disp.map_off_y = fVar4;
      }
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
      _fixed_array_verifyrange__H1Zc_UiUi_PX01(3,4);
      menu_map_disp.tri_pad_flg.field0_0x0.m_aData[3] = '\x01';
                    /* end of inlined section */
    }
    if (((pad[0].now & 0x8000U) != 0) || ((pad[0].id == 'y' && (pad[0].analog[2] < 0x59)))) {
      menu_map_disp.map_off_x = menu_map_disp.map_off_x + 3.0;
      if (420.0 < menu_map_disp.map_off_x) {
        menu_map_disp.map_off_x = 420.0;
      }
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
      _fixed_array_verifyrange__H1Zc_UiUi_PX01(1,4);
      menu_map_disp.tri_pad_flg.field0_0x0.m_aData[1] = '\x01';
                    /* end of inlined section */
    }
    if (((pad[0].now & 0x2000U) != 0) || ((pad[0].id == 'y' && (0x9d < pad[0].analog[2])))) {
      fVar4 = menu_map_disp.map_off_x - 3.0;
      menu_map_disp.map_off_x =
           220.0 - (float)map_size_dat[menu_map_disp.disp_map_label].w *
                   map_scall_dat[menu_map_disp.disp_map_label].normal;
      if (menu_map_disp.map_off_x <= fVar4) {
        menu_map_disp.map_off_x = fVar4;
      }
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
      _fixed_array_verifyrange__H1Zc_UiUi_PX01(2,4);
      menu_map_disp.tri_pad_flg.field0_0x0.m_aData[2] = '\x01';
                    /* end of inlined section */
    }
    if (menu_map_ctrl.snap_load.step == '\x02') {
      if (**paddat == 1) {
        menu_map_disp.map_scall_flg = menu_map_disp.map_scall_flg ^ 1;
      }
      else if ((pad[0].one & 4U) == 0) {
        if ((pad[0].one & 8U) == 0) {
          if ((pad[0].one & 1U) != 0) {
            iVar3 = CheckCrossFadeDisp__Fi((int)menu_map_ctrl.cross_fade_flg);
            if ((iVar3 == 0) || (fade_alpha[menu_map_ctrl.cross_fade_flg] != 0x80))
            goto LAB_001fc03c;
            iVar3 = MenuMapChange__Fi(0);
            goto LAB_001fbf20;
          }
          if ((pad[0].one & 2U) == 0) {
            psVar1 = paddat[1];
            goto LAB_001fc040;
          }
          iVar3 = CheckCrossFadeDisp__Fi((int)menu_map_ctrl.cross_fade_flg);
          if (((iVar3 == 0) || (fade_alpha[menu_map_ctrl.cross_fade_flg] != 0x80)) ||
             (iVar3 = MenuMapChange__Fi(1), iVar3 == 0)) goto LAB_001fc03c;
LAB_001fbf2c:
          MenuCrossFadeOutStart__Fi((int)menu_map_ctrl.cross_fade_flg);
          menu_map_ctrl.cross_fade_flg = menu_map_ctrl.cross_fade_flg ^ 1;
          MenuCrossFadeInStart__Fii
                    ((int)menu_map_ctrl.cross_fade_flg,
                     map_info_dat[menu_map_disp.disp_map_label].map_tex_id);
          MenuMapDispStartPos__Fv();
        }
        else {
          iVar3 = CheckCrossFadeDisp__Fi((int)menu_map_ctrl.cross_fade_flg);
          if ((iVar3 != 0) && (fade_alpha[menu_map_ctrl.cross_fade_flg] == 0x80)) {
            iVar3 = 1;
            goto LAB_001fbf18;
          }
        }
      }
      else {
        iVar3 = CheckCrossFadeDisp__Fi((int)menu_map_ctrl.cross_fade_flg);
        if ((iVar3 != 0) && (fade_alpha[menu_map_ctrl.cross_fade_flg] == 0x80)) {
          iVar3 = 0;
LAB_001fbf18:
          iVar3 = MenuMapFloorChange__Fi(iVar3);
LAB_001fbf20:
          if (iVar3 != 0) goto LAB_001fbf2c;
        }
      }
    }
  }
LAB_001fc03c:
  psVar1 = paddat[1];
LAB_001fc040:
  if (*psVar1 == 1) {
    SystemBankPlay__FiiiiP11_SND_3D_SETii(1,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
    MenuMapOutReq__Fv();
  }
  return;
}

static void MenuMapOutReq() {
  menu_wrk.step = '\x03';
  menu_map_disp.anim_step = '\x03';
  menu_map_disp.anim_timer = '\0';
  if (map_view_flg == '\x01') {
    MenuOutReq__Fv();
  }
  return;
}

static int MenuMapChange(int flg) {
	static char __FUNCTION__[14] = {
		/* [0] = */ 77,
		/* [1] = */ 101,
		/* [2] = */ 110,
		/* [3] = */ 117,
		/* [4] = */ 77,
		/* [5] = */ 97,
		/* [6] = */ 112,
		/* [7] = */ 67,
		/* [8] = */ 104,
		/* [9] = */ 97,
		/* [10] = */ 110,
		/* [11] = */ 103,
		/* [12] = */ 101,
		/* [13] = */ 0
	};
	int i;
	int j;
	int area;
	int floor;
	int disp_map_label;
	int res;
	u_char find_flg;
	
  bool bVar1;
  int iVar2;
  long lVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int disp_map_label;
  int res;
  
  iVar8 = 0;
  bVar1 = false;
  iVar6 = 0;
  disp_map_label = 0;
  do {
    iVar9 = 0;
    piVar4 = map_label_tbl + iVar6 + iVar8;
    iVar2 = *piVar4;
    while (piVar4 = piVar4 + 1, (long)iVar2 != (long)menu_map_disp.disp_map_label) {
      iVar9 = iVar9 + 1;
      if (2 < iVar9) goto LAB_001fc178;
      iVar2 = *piVar4;
    }
    bVar1 = true;
    disp_map_label = iVar2;
LAB_001fc178:
    if (bVar1) goto LAB_001fc1bc;
    iVar8 = iVar8 + 1;
    iVar6 = iVar6 + 2;
  } while (iVar8 < 8);
  SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
  PrintAssertReal("Error!! MenuMapChange");
LAB_001fc1bc:
  if (flg == 0) {
    iVar6 = 0;
    do {
      iVar5 = iVar8 + 7;
      iVar2 = iVar5;
      if (iVar5 < 0) {
        iVar2 = iVar8 + 0xe;
      }
      iVar7 = 0;
      iVar8 = iVar5 + (iVar2 >> 3) * -8;
      iVar2 = iVar9;
      while ((iVar2 = map_label_tbl[iVar8][iVar2 % 3], iVar2 == -1 ||
             (iVar5 = MenuMapInCheck__Fi(iVar2), iVar5 == 0))) {
        iVar7 = iVar7 + 1;
        bVar1 = iVar7 < 3;
        if (!bVar1) goto LAB_001fc328;
        iVar2 = iVar9 + iVar7;
      }
      bVar1 = iVar7 < 3;
      disp_map_label = iVar2;
LAB_001fc328:
    } while ((!bVar1) && (iVar6 = iVar6 + 1, iVar6 < 8));
  }
  else if (flg == 1) {
    iVar6 = 0;
    do {
      iVar5 = iVar8 + 1;
      iVar2 = iVar5;
      if (iVar5 < 0) {
        iVar2 = iVar8 + 8;
      }
      iVar7 = 0;
      iVar8 = iVar5 + (iVar2 >> 3) * -8;
      iVar2 = iVar9;
      while ((iVar2 = map_label_tbl[iVar8][iVar2 % 3], iVar2 == -1 ||
             (iVar5 = MenuMapInCheck__Fi(iVar2), iVar5 == 0))) {
        iVar7 = iVar7 + 1;
        bVar1 = iVar7 < 3;
        if (!bVar1) goto LAB_001fc260;
        iVar2 = iVar9 + iVar7;
      }
      bVar1 = iVar7 < 3;
      disp_map_label = iVar2;
LAB_001fc260:
    } while ((!bVar1) && (iVar6 = iVar6 + 1, iVar6 < 8));
  }
  else {
    SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
    PrintAssertReal("Error! %s");
  }
  lVar3 = (long)menu_map_disp.disp_map_label;
  if (disp_map_label != lVar3) {
    menu_map_disp.before_disp_map = menu_map_disp.disp_map_label;
    menu_map_disp.disp_map_label = (char)disp_map_label;
  }
  res = (int)(disp_map_label != lVar3);
  return res;
}

static int MenuMapFloorChange(int flg) {
	static char __FUNCTION__[19] = {
		/* [0] = */ 77,
		/* [1] = */ 101,
		/* [2] = */ 110,
		/* [3] = */ 117,
		/* [4] = */ 77,
		/* [5] = */ 97,
		/* [6] = */ 112,
		/* [7] = */ 70,
		/* [8] = */ 108,
		/* [9] = */ 111,
		/* [10] = */ 111,
		/* [11] = */ 114,
		/* [12] = */ 67,
		/* [13] = */ 104,
		/* [14] = */ 97,
		/* [15] = */ 110,
		/* [16] = */ 103,
		/* [17] = */ 101,
		/* [18] = */ 0
	};
	int i;
	int area;
	int floor;
	int disp_map_label;
	int res;
	u_char find_flg;
	
  bool bVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  int iVar7;
  long lVar8;
  
  iVar5 = 0;
  lVar8 = 0;
  bVar1 = false;
  iVar4 = 0;
  do {
    iVar7 = 0;
    piVar3 = map_label_tbl + iVar4 + iVar5;
    iVar2 = *piVar3;
    while( true ) {
      piVar3 = piVar3 + 1;
      if ((long)iVar2 == (long)menu_map_disp.disp_map_label) break;
      iVar7 = iVar7 + 1;
      if (2 < iVar7) goto LAB_001fc490;
      iVar2 = *piVar3;
    }
    bVar1 = true;
    lVar8 = (long)iVar2;
LAB_001fc490:
    if (bVar1) goto LAB_001fc4d4;
    iVar5 = iVar5 + 1;
    iVar4 = iVar4 + 2;
  } while (iVar5 < 8);
  SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
  PrintAssertReal("Error!! MenuMapFloorChange");
LAB_001fc4d4:
  if (flg == 0) {
    iVar4 = 0;
    do {
      iVar7 = (iVar7 + 2) % 3;
      lVar6 = (long)map_label_tbl[iVar5][iVar7];
      if ((lVar6 != -1) && (iVar2 = MenuMapInCheck__Fi(map_label_tbl[iVar5][iVar7]), iVar2 != 0))
      break;
      iVar4 = iVar4 + 1;
      lVar6 = lVar8;
    } while (iVar4 < 3);
  }
  else if (flg == 1) {
    iVar4 = 0;
    do {
      iVar7 = (iVar7 + 1) % 3;
      lVar6 = (long)map_label_tbl[iVar5][iVar7];
      if ((lVar6 != -1) && (iVar2 = MenuMapInCheck__Fi(map_label_tbl[iVar5][iVar7]), iVar2 != 0))
      break;
      iVar4 = iVar4 + 1;
      lVar6 = lVar8;
    } while (iVar4 < 3);
  }
  else {
    SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
    PrintAssertReal("Error! %s");
    lVar6 = lVar8;
  }
  lVar8 = (long)menu_map_disp.disp_map_label;
  if (lVar6 != lVar8) {
    menu_map_disp.before_disp_map = menu_map_disp.disp_map_label;
    menu_map_disp.disp_map_label = (char)lVar6;
  }
  return (uint)(lVar6 != lVar8);
}

static int MenuMapInCheck(int map_label) {
	int res;
	
  int iVar1;
  ROOM_INFO_DAT *pRVar2;
  
  pRVar2 = room_info_dat;
  iVar1 = room_info_dat[0].map_label;
  if (room_info_dat[0].map_label != -1) {
    do {
      if ((iVar1 == map_label) && (iVar1 = GetRoomInfo__Fi(pRVar2->room_label), iVar1 == 1)) {
        return 1;
      }
      pRVar2 = pRVar2 + 1;
      iVar1 = pRVar2->map_label;
    } while (pRVar2->map_label != -1);
  }
  return 0;
}

static int MenuMapRoomHitCheck(float x, float y) {
	int res;
	float target[4];
	float tri0[4];
	float tri1[4];
	float tri2[4];
	float tri3[4];
	
  int iVar1;
  char cVar2;
  MAP_AREA_DAT *pMVar3;
  float target [4];
  float tri0 [4];
  float tri1 [4];
  float tri2 [4];
  float tri3 [4];
  
  pMVar3 = map_area_dat;
  target[3] = 1.0;
  target[1] = 0.0;
  if (map_area_dat[0].map_label == -1) {
    return -1;
  }
  cVar2 = map_area_dat[0].map_label;
  target[0] = x;
  target[2] = y;
  while( true ) {
    if (cVar2 == menu_map_disp.disp_map_label) {
      MenuMapSetPosition__FPfff(tri0,pMVar3->pos[0],pMVar3->pos[1]);
      MenuMapSetPosition__FPfff(tri1,pMVar3->pos[1][0],pMVar3->pos[1][1]);
      MenuMapSetPosition__FPfff(tri2,pMVar3->pos[2][0],pMVar3->pos[2][1]);
      MenuMapSetPosition__FPfff(tri3,pMVar3->pos[3][0],pMVar3->pos[3][1]);
      iVar1 = MenuMapHitCheck__FPfN40(target,tri0,tri1,tri2,tri3);
      if (iVar1 != 0) {
        return (int)(short)pMVar3->room_label;
      }
    }
    pMVar3 = pMVar3 + 1;
    if (pMVar3->map_label == -1) break;
    cVar2 = pMVar3->map_label;
  }
  return -1;
}

static void MenuMapSetPosition(float *pos, float x, float y) {
	float map_x;
	float map_y;
	
  MAP_SCALL_DAT *pMVar1;
  float fVar2;
  float map_x;
  float map_y;
  
  map_x = 0.0;
  map_y = 0.0;
  CalMapDispStartPos__FPfT0c(&map_x,&map_y,menu_map_disp.map_scall_flg);
  if (menu_map_disp.map_scall_flg == '\0') {
    fVar2 = map_scall_dat[menu_map_disp.disp_map_label].normal;
    pos[1] = 0.0;
    *pos = x * fVar2 + map_x;
    pMVar1 = map_scall_dat + menu_map_disp.disp_map_label;
  }
  else {
    if (menu_map_disp.map_scall_flg != '\x01') goto LAB_001fc914;
    fVar2 = map_scall_dat[menu_map_disp.disp_map_label].big;
    pos[1] = 0.0;
    *pos = x * fVar2 + map_x;
    pMVar1 = (MAP_SCALL_DAT *)&map_scall_dat[menu_map_disp.disp_map_label].big;
  }
  pos[2] = y * pMVar1->normal + map_y;
LAB_001fc914:
  pos[3] = 1.0;
  return;
}

int MenuMapHitCheck(float *target, float *tri0, float *tri1, float *tri2, float *tri3) {
	int res;
	
  int iVar1;
  
  iVar1 = HcBaseIsInTriXZ__FPCfN30(target,tri0,tri1,tri2);
  if (iVar1 == 0) {
    iVar1 = HcBaseIsInTriXZ__FPCfN30(target,tri2,tri3,tri0);
  }
  return iVar1;
}

static int MenuMapCheckHouseCondition(int room_label) {
	int j;
	int res;
	char check_flg;
	char end_flg;
	
  bool bVar1;
  bool bVar2;
  HOUSE_INFO_DAT *pHVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar6 = 0;
  pHVar3 = house_info_dat;
  iVar7 = 0;
  bVar1 = false;
  bVar2 = false;
  iVar5 = house_info_dat[0].room_label;
  if (house_info_dat[0].room_label == -1) {
    iVar7 = 1;
  }
  else {
    do {
      if (iVar5 == room_label) {
        bVar2 = true;
        for (iVar5 = *(int *)((int)&house_info_dat[0].start_room_label + iVar6);
            iVar5 <= *(int *)((int)&house_info_dat[0].end_room_label + iVar6); iVar5 = iVar5 + 1) {
          iVar4 = GetRoomInfo__Fi(iVar5);
          if (iVar4 == 1) {
            iVar7 = 1;
            bVar1 = true;
            break;
          }
        }
        if (bVar1) {
          return iVar7;
        }
      }
      pHVar3 = pHVar3 + 1;
      iVar6 = iVar6 + 0x10;
      iVar5 = pHVar3->room_label;
    } while (pHVar3->room_label != -1);
    if (!bVar2) {
      iVar7 = 1;
    }
  }
  return iVar7;
}

int GetPlyrMapLabel() {
  int iVar1;
  int floor_label;
  
  iVar1 = GetPlyrAreaNo__Fv();
  floor_label = GetPlyrFloor__Fv();
  iVar1 = GetMapLabelFromAreaLabel__Fii(iVar1,floor_label);
  return iVar1;
}

int GetMapLabelFromAreaLabel(int area_label, int floor_label) {
	int map_label;
	int i;
	
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar1 = 0;
  while( true ) {
    do {
      iVar2 = iVar1 + iVar3;
      iVar3 = iVar3 + 1;
      if ((&area_map_tbl[0].area_label)[iVar2] == -1) {
        printf("Error! GetMapLabelFromAreaLabel:area[%d] floor[%d]\n");
        return -1;
      }
      iVar1 = iVar3 * 2;
    } while ((&area_map_tbl[0].area_label)[iVar2] != area_label);
    if (((uint)area_label < 0xd) || ((&area_map_tbl[0].floor_label)[iVar2] == floor_label)) break;
    iVar1 = iVar3 * 2;
  }
  return (&area_map_tbl[0].map_label)[iVar2];
}

void MenuMapRelease() {
  LiberateMenuMapTexMem__FPPv(&menu_map_bg_addr);
  LiberateMenuMapTexMem__FPPv(&map_data_addr);
  LiberateMenuMapTexMem__FPPv(&snap_data_addr);
  return;
}

static void LiberateMenuMapTexMem(void **tex_addr) {
  if (*tex_addr != (void *)0x0) {
    mem_utilFreeMem__FPv(*tex_addr);
    *tex_addr = (void *)0x0;
  }
  return;
}

static void MenuMapDispInit() {
	int i;
	
  char *pcVar1;
  int iVar2;
  
  iVar2 = 0;
  menu_map_disp.anim_step = '\0';
  menu_map_disp.anim_timer = '\0';
  menu_map_disp.tri_anim_step = '\0';
  menu_map_disp.tri_timer = '\0';
  menu_map_disp.tri_alpha = '\0';
  do {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Zc_UiUi_PX01(iVar2,4);
    pcVar1 = menu_map_disp.tri_pad_flg.field0_0x0.m_aData + iVar2;
                    /* end of inlined section */
    iVar2 = iVar2 + 1;
                    /* end of inlined section */
    *pcVar1 = '\0';
  } while (iVar2 < 4);
  menu_map_disp.map_scall_flg = '\0';
  iVar2 = GetPlyrMapLabel__Fv();
  menu_map_disp.disp_map_label = (char)iVar2;
  menu_map_disp.before_disp_map = menu_map_disp.disp_map_label;
  if (menu_map_disp.disp_map_label != -1) {
    MenuMapDispStartPos__Fv();
    return;
  }
  menu_map_disp.map_off_y = 0.0;
  menu_map_disp.map_off_x = 0.0;
  return;
}

static void MenuMapDispStartPos() {
	float map_plyr_x;
	float map_plyr_y;
	
  int iVar1;
  float fVar2;
  float map_plyr_x;
  float map_plyr_y;
  
  ChangeWorldPosToWinPos__FPfT0iT0i
            (&map_plyr_x,&map_plyr_y,(int)menu_map_disp.disp_map_label,plyr_wrk.cmn_wrk.mbox.pos,0);
  iVar1 = (int)menu_map_disp.disp_map_label;
  fVar2 = DAT_003ee570;
  if (menu_map_disp.disp_map_label != menu_map_ctrl.plyr_map) {
    map_plyr_x = (float)map_size_dat[iVar1].w * map_scall_dat[iVar1].normal * 0.5;
    map_plyr_y = (float)map_size_dat[iVar1].h * map_scall_dat[iVar1].normal * 0.5;
    fVar2 = DAT_003ee574;
  }
  menu_map_disp.map_off_x = 320.0 - map_plyr_x;
  menu_map_disp.map_off_y = fVar2 - map_plyr_y;
  return;
}

void MenuMapDisp() {
	u_char alpha;
	long int scissor_backup;
	int i;
	u_char fade_alpha[2];
	
  int iVar1;
  void *tm2_addr;
  long scissor;
  uchar alpha;
  uchar fade_alpha [2];
  
  alpha = 0x80;
  fade_alpha[1] = '\0';
  fade_alpha[0] = '\0';
  if (((byte)(menu_wrk.step - 2) < 2) && (menu_map_disp.anim_step != '\x04')) {
    MenuInOutAnimCtrl__FPcT0PUc(&menu_map_disp.anim_step,&menu_map_disp.anim_timer,&alpha);
    MenuMapTitleDisp__FiiUc(0,0,alpha);
    MenuMapBaseDisp__FiiUc(0,0,alpha);
    scissor = GET_SCISSOR_REGISTER__Fi(0);
    SetScissorRegister__Fil(0,0x1a3006302600020);
    GetMenuCrossFadeAlpha__FPUc(fade_alpha);
    if (menu_map_disp.disp_map_label != -1) {
      if (menu_wrk.step != '\x02') {
        fade_alpha[menu_map_ctrl.cross_fade_flg] = alpha;
      }
      iVar1 = CheckCrossFadeDisp__Fi((int)menu_map_ctrl.cross_fade_flg);
      if (iVar1 != 0) {
        tm2_addr = GetCrossFadeDataAddr__Fi((int)menu_map_ctrl.cross_fade_flg);
        PK2SendVram__FUiiii((uint)tm2_addr,-1,-1,0);
        MenuMapMapDisp__FiiiUc
                  ((int)menu_map_disp.disp_map_label,0,0,fade_alpha[menu_map_ctrl.cross_fade_flg]);
      }
    }
    SetScissorRegister__Fil(0,scissor);
    MenuMapCenterDisp__FiiUc(0,0,alpha);
    if (menu_map_disp.disp_map_label != -1) {
      MenuMapSnapShotDisp__FiiUc(0,0,alpha);
    }
    MenuMapWindowDisp__FiiUc(0,0,alpha);
    if (menu_map_disp.disp_map_label != -1) {
      MenuMapInfoDisp__FiiUc(0,0,alpha);
    }
    MenuMapCaptionDisp__FiiUc(0,0,alpha);
  }
  return;
}

static void MenuMapTitleDisp(int off_x, int off_y, u_char alpha) {
	DISP_SPRT title_ds;
	
  float fVar1;
  float fVar2;
  DISP_SPRT title_ds;
  
  fVar1 = (float)off_x;
  PK2SendVram__FUiiii(0x19368c0,-1,-1,0);
  CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&title_ds,menu_map_tex + 2);
  fVar2 = (float)off_y;
  title_ds.x = title_ds.x + fVar1;
  title_ds.y = title_ds.y + fVar2;
  title_ds.alpha = (uchar)((int)((uint)title_ds.alpha * (uint)alpha) >> 7);
  DispSprD__FP9DISP_SPRT(&title_ds);
  CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&title_ds,menu_map_tex + 3);
  title_ds.x = title_ds.x + fVar1;
  title_ds.y = title_ds.y + fVar2;
  title_ds.alpha = (uchar)((int)((uint)title_ds.alpha * (uint)alpha) >> 7);
  DispSprD__FP9DISP_SPRT(&title_ds);
  PK2SendVram__FUiiii((uint)menu_map_bg_addr,-1,-1,0);
  CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&title_ds,menu_map_tex);
  title_ds.x = title_ds.x + fVar1;
  title_ds.y = title_ds.y + fVar2;
  title_ds.alpha = (uchar)((int)((uint)title_ds.alpha * (uint)alpha) >> 7);
  DispSprD__FP9DISP_SPRT(&title_ds);
  CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&title_ds,menu_map_tex + 1);
  title_ds.x = title_ds.x + fVar1;
  title_ds.y = title_ds.y + fVar2;
  title_ds.alpha = (uchar)((int)((uint)title_ds.alpha * (uint)alpha) >> 7);
  DispSprD__FP9DISP_SPRT(&title_ds);
  return;
}

static void MenuMapBaseDisp(int off_x, int off_y, u_char alpha) {
	DISP_SPRT base_ds;
	int i;
	
  uint uVar1;
  int iVar2;
  SPRT_DAT *d;
  uint uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  DISP_SPRT base_ds;
  
  fVar5 = (float)off_y;
  fVar6 = (float)off_x;
  PK2SendVram__FUiiii((uint)menu_map_bg_addr,-1,-1,0);
  iVar2 = 0;
  do {
    CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&base_ds,menu_map_tex + 0x1d);
    uVar3 = iVar2 * base_ds.w;
    iVar2 = iVar2 + 1;
    if ((int)uVar3 < 0) {
      fVar4 = (float)(uVar3 & 1 | uVar3 >> 1);
      fVar4 = fVar4 + fVar4;
    }
    else {
      fVar4 = (float)uVar3;
    }
    base_ds.y = base_ds.y + fVar5;
    base_ds.x = base_ds.x + fVar4 + fVar6;
    base_ds.alpha = (uchar)((int)((uint)base_ds.alpha * (uint)alpha) >> 7);
    DispSprD__FP9DISP_SPRT(&base_ds);
  } while (iVar2 < 3);
  iVar2 = 1;
  d = menu_map_tex + 0x1e;
  do {
    CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&base_ds,d);
    iVar2 = iVar2 + -1;
    d = d + 1;
    base_ds.x = base_ds.x + fVar6;
    base_ds.y = base_ds.y + fVar5;
    base_ds.alpha = (uchar)((int)((uint)base_ds.alpha * (uint)alpha) >> 7);
    DispSprD__FP9DISP_SPRT(&base_ds);
  } while (-1 < iVar2);
  iVar2 = 0;
  do {
    CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&base_ds,menu_map_tex + 0x20);
    uVar3 = iVar2 * base_ds.w;
    iVar2 = iVar2 + 1;
    if ((int)uVar3 < 0) {
      fVar4 = (float)(uVar3 & 1 | uVar3 >> 1);
      fVar4 = fVar4 + fVar4;
    }
    else {
      fVar4 = (float)uVar3;
    }
    uVar3 = (uint)alpha;
    base_ds.y = base_ds.y + fVar5;
    base_ds.x = base_ds.x + fVar4 + fVar6;
    base_ds.alpha = (uchar)((int)(base_ds.alpha * uVar3) >> 7);
    DispSprD__FP9DISP_SPRT(&base_ds);
  } while (iVar2 < 4);
  iVar2 = 0;
  CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&base_ds,menu_map_tex + 0x21);
  base_ds.x = base_ds.x + fVar6;
  base_ds.y = base_ds.y + fVar5;
  base_ds.alpha = (uchar)((int)(base_ds.alpha * uVar3) >> 7);
  DispSprD__FP9DISP_SPRT(&base_ds);
  do {
    CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&base_ds,menu_map_tex + 0x22);
    uVar1 = iVar2 * base_ds.w;
    iVar2 = iVar2 + 1;
    if ((int)uVar1 < 0) {
      fVar4 = (float)(uVar1 & 1 | uVar1 >> 1);
      fVar4 = fVar4 + fVar4;
    }
    else {
      fVar4 = (float)uVar1;
    }
    base_ds.y = base_ds.y + fVar5;
    base_ds.x = base_ds.x + fVar4 + fVar6;
    base_ds.alpha = (uchar)((int)(base_ds.alpha * uVar3) >> 7);
    DispSprD__FP9DISP_SPRT(&base_ds);
  } while (iVar2 < 4);
  CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&base_ds,menu_map_tex + 0x23);
  base_ds.x = base_ds.x + fVar6;
  base_ds.y = base_ds.y + fVar5;
  base_ds.alpha = (uchar)((int)(base_ds.alpha * uVar3) >> 7);
  DispSprD__FP9DISP_SPRT(&base_ds);
  CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&base_ds,menu_map_tex + 0x37);
  base_ds.x = base_ds.x + fVar6;
  base_ds.alphar = 0x48;
  base_ds.y = base_ds.y + fVar5;
  base_ds.alpha = (uchar)((int)((uint)base_ds.alpha * (uint)alpha) >> 7);
  DispSprD__FP9DISP_SPRT(&base_ds);
  CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&base_ds,menu_map_tex + 0x38);
  base_ds.x = base_ds.x + fVar6;
  base_ds.alphar = 0x48;
  base_ds.y = base_ds.y + fVar5;
  base_ds.alpha = (uchar)((int)((uint)base_ds.alpha * (uint)alpha) >> 7);
  DispSprD__FP9DISP_SPRT(&base_ds);
  return;
}

static void MenuMapMapDisp(int map_label, int off_x, int off_y, u_char alpha) {
	static char __FUNCTION__[15] = {
		/* [0] = */ 77,
		/* [1] = */ 101,
		/* [2] = */ 110,
		/* [3] = */ 117,
		/* [4] = */ 77,
		/* [5] = */ 97,
		/* [6] = */ 112,
		/* [7] = */ 77,
		/* [8] = */ 97,
		/* [9] = */ 112,
		/* [10] = */ 68,
		/* [11] = */ 105,
		/* [12] = */ 115,
		/* [13] = */ 112,
		/* [14] = */ 0
	};
	DISP_SPRT map_ds;
	int i;
	float map_x;
	float map_y;
	int sel_room_group[20];
	int buff_cnt;
	
  int iVar1;
  int iVar2;
  long lVar3;
  ROOM_INFO_DAT *pRVar4;
  long lVar5;
  int iVar6;
  int *piVar7;
  uint uVar8;
  float fVar9;
  float fVar10;
  DISP_SPRT map_ds;
  float map_x;
  float map_y;
  int sel_room_group [20];
  MAP_SCALL_DAT *local_60;
  float *local_5c;
  
  lVar5 = (long)map_label;
  iVar2 = 0;
  memset(sel_room_group,-1,0x50);
  map_x = 0.0;
  map_y = 0.0;
  CalMapDispStartPos__FPfT0c(&map_x,&map_y,menu_map_disp.map_scall_flg);
  pRVar4 = room_info_dat;
  uVar8 = (uint)alpha;
  if (room_info_dat[0].map_label != -1) {
    local_5c = &map_scall_dat[map_label].big;
    local_60 = map_scall_dat + map_label;
    piVar7 = sel_room_group;
    iVar6 = 0;
    lVar3 = (long)room_info_dat[0].map_label;
    do {
      if ((lVar3 == lVar5) &&
         (((lVar5 != 0 || (iVar1 = MenuMapCheckHouseCondition__Fi(pRVar4->room_label), iVar1 != 0))
          && (iVar1 = GetRoomInfo__Fi(*(int *)((int)&room_info_dat[0].room_label + iVar6)),
             iVar1 == 1)))) {
        CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&map_ds,menu_map_mapdata_tex + pRVar4->room_tex_label)
        ;
        map_ds.alpha = (uchar)((int)(map_ds.alpha * uVar8) >> 7);
        if (menu_map_disp.map_scall_flg == '\0') {
          map_ds.scw = local_60->normal;
LAB_001fd5b4:
          map_ds.csx = map_ds.x * map_ds.scw + map_x;
          map_ds.csy = map_ds.y * map_ds.scw + map_y;
          map_ds.x = map_ds.csx;
          map_ds.y = map_ds.csy;
          map_ds.sch = map_ds.scw;
        }
        else if (menu_map_disp.map_scall_flg == '\x01') {
          map_ds.scw = *local_5c;
          goto LAB_001fd5b4;
        }
        if ((pRVar4->room_label == menu_map_ctrl.hit_room) ||
           (iVar1 = MenuMapRoomGroupCheck__Fi
                              (*(int *)((int)&room_info_dat[0].room_group_label + iVar6)),
           iVar1 != 0)) {
          iVar2 = iVar2 + 1;
          *piVar7 = *(int *)((int)&room_info_dat[0].room_tex_label + iVar6);
          piVar7 = piVar7 + 1;
        }
        else {
          map_ds.alphar = 0x46;
          map_ds.r = '\0';
          map_ds.g = '\0';
          map_ds.b = '\0';
          if ((int)map_ds.w < 0) {
            fVar10 = (float)(map_ds.w & 1 | map_ds.w >> 1);
            fVar10 = fVar10 + fVar10;
          }
          else {
            fVar10 = (float)map_ds.w;
          }
          if ((int)map_ds.h < 0) {
            fVar9 = (float)(map_ds.h & 1 | map_ds.h >> 1);
            fVar9 = fVar9 + fVar9;
          }
          else {
            fVar9 = (float)map_ds.h;
          }
          iVar1 = MenuMapDispAreaCheck__Fiffff(map_label,map_ds.x,map_ds.y,fVar10,fVar9);
          if (iVar1 != 0) {
            DispSprD__FP9DISP_SPRT(&map_ds);
          }
        }
      }
      pRVar4 = pRVar4 + 1;
      lVar3 = (long)pRVar4->map_label;
      iVar6 = iVar6 + 0x14;
    } while (lVar3 != -1);
  }
  if (0x13 < iVar2) {
    SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
    PrintAssertReal("Error! %s Buffer Size Over!!");
  }
  iVar6 = 0;
  iVar2 = 0;
  do {
    if (*(int *)((int)sel_room_group + iVar2) != -1) {
      CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT
                (&map_ds,menu_map_mapdata_tex + *(int *)((int)sel_room_group + iVar2));
      if (menu_map_disp.map_scall_flg == '\0') {
        map_ds.scw = map_scall_dat[map_label].normal;
LAB_001fd7a4:
        map_ds.csx = map_ds.x * map_ds.scw + map_x;
        map_ds.csy = map_ds.y * map_ds.scw + map_y;
        map_ds.x = map_ds.csx;
        map_ds.y = map_ds.csy;
        map_ds.sch = map_ds.scw;
      }
      else if (menu_map_disp.map_scall_flg == '\x01') {
        map_ds.scw = map_scall_dat[map_label].big;
        goto LAB_001fd7a4;
      }
      map_ds.r = 0xf2;
      map_ds.g = 0x96;
      map_ds.b = 'X';
      map_ds.alpha = (uchar)((int)(map_ds.alpha * uVar8) >> 7);
      if ((int)map_ds.w < 0) {
        fVar10 = (float)(map_ds.w & 1 | map_ds.w >> 1);
        fVar10 = fVar10 + fVar10;
      }
      else {
        fVar10 = (float)map_ds.w;
      }
      if ((int)map_ds.h < 0) {
        fVar9 = (float)(map_ds.h & 1 | map_ds.h >> 1);
        fVar9 = fVar9 + fVar9;
      }
      else {
        fVar9 = (float)map_ds.h;
      }
      iVar2 = MenuMapDispAreaCheck__Fiffff(map_label,map_ds.x,map_ds.y,fVar10,fVar9);
      if (iVar2 != 0) {
        DispSprD__FP9DISP_SPRT(&map_ds);
      }
      map_ds.alphar = 0x48;
      map_ds.alpha = (uchar)((int)(uVar8 * 0x26) >> 7);
      if ((int)map_ds.w < 0) {
        fVar10 = (float)(map_ds.w & 1 | map_ds.w >> 1);
        fVar10 = fVar10 + fVar10;
      }
      else {
        fVar10 = (float)map_ds.w;
      }
      if ((int)map_ds.h < 0) {
        fVar9 = (float)(map_ds.h & 1 | map_ds.h >> 1);
        fVar9 = fVar9 + fVar9;
      }
      else {
        fVar9 = (float)map_ds.h;
      }
      iVar2 = MenuMapDispAreaCheck__Fiffff(map_label,map_ds.x,map_ds.y,fVar10,fVar9);
      if (iVar2 != 0) {
        DispSprD__FP9DISP_SPRT(&map_ds);
      }
    }
    iVar6 = iVar6 + 1;
    if (0x13 < iVar6) {
      PK2SendVram__FUiiii((uint)menu_map_bg_addr,-1,-1,0);
      MenuMapSavePointDisp__FiffUc(map_label,map_x,map_y,alpha);
      MenuMapDoorDisp__FiffUc(map_label,map_x,map_y,alpha);
      if (menu_map_ctrl.plyr_map == lVar5) {
        MenuMapPlyrPosDisp__FiffUc(map_label,map_x,map_y,alpha);
      }
      return;
    }
    iVar2 = iVar6 * 4;
  } while( true );
}

static int MenuMapDispAreaCheck(int map_label, float x, float y, float w, float h) {
	int res;
	float tmp_w;
	float tmp_h;
	
  int iVar1;
  float fVar2;
  float fVar3;
  
  fVar3 = 0.0;
  iVar1 = 0;
  if (menu_map_disp.map_scall_flg == '\0') {
    fVar2 = map_scall_dat[map_label].normal;
  }
  else {
    if (menu_map_disp.map_scall_flg != '\x01') {
      fVar2 = x + 0.0;
      goto LAB_001fda38;
    }
    fVar2 = map_scall_dat[map_label].big;
  }
  fVar3 = h * fVar2;
  fVar2 = x + w * fVar2;
LAB_001fda38:
  if ((((0.0 < fVar2) && (x < 640.0)) && (0.0 < y + fVar3)) && (y < 448.0)) {
    iVar1 = 1;
  }
  return iVar1;
}

static int MenuMapRoomGroupCheck(int room_group_label) {
	int res;
	int hit_room_group;
	
  ROOM_INFO_DAT *pRVar1;
  int iVar2;
  ROOM_INFO_DAT *pRVar3;
  int iVar4;
  uint uVar5;
  
  iVar4 = -1;
  uVar5 = 0;
  if (menu_map_ctrl.hit_room != -1) {
    iVar2 = GetRoomInfo__Fi(menu_map_ctrl.hit_room);
    uVar5 = 0;
    if ((iVar2 != 0) && (uVar5 = 0, room_group_label != 0)) {
      pRVar3 = room_info_dat;
      iVar2 = room_info_dat[0].room_label;
      if (room_info_dat[0].map_label != -1) {
        while (iVar2 != menu_map_ctrl.hit_room) {
          if (pRVar3[1].map_label == -1) goto LAB_001fdb28;
          pRVar1 = pRVar3 + 1;
          pRVar3 = pRVar3 + 1;
          iVar2 = pRVar1->room_label;
        }
        iVar4 = pRVar3->room_group_label;
      }
LAB_001fdb28:
      uVar5 = (uint)(room_group_label == iVar4);
    }
  }
  return uVar5;
}

static void CalMapDispStartPos(float *map_x, float *map_y, char scall_flg) {
  float fVar1;
  float fVar2;
  
  fVar1 = DAT_003ee578;
  if (scall_flg == '\0') {
    *map_x = menu_map_disp.map_off_x;
    *map_y = menu_map_disp.map_off_y;
    return;
  }
  if (scall_flg == '\x01') {
    *map_x = 320.0 - ((320.0 - menu_map_disp.map_off_x) + (320.0 - menu_map_disp.map_off_x));
    fVar2 = fVar1 - menu_map_disp.map_off_y;
    *map_y = fVar1 - (fVar2 + fVar2);
  }
  return;
}

static void MenuMapSavePointDisp(int map_label, float map_x, float map_y, u_char alpha) {
	DISP_SPRT map_ds;
	
  int iVar1;
  MAP_SAVE_POINT *pMVar2;
  float *pfVar3;
  int *piVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  DISP_SPRT map_ds;
  
  pMVar2 = map_save_point;
  piVar4 = &map_save_point[0].map_label;
  if (map_save_point[0].map_label != -1) {
    iVar5 = 0;
    pfVar3 = &map_save_point[0].y;
    iVar1 = map_save_point[0].map_label;
    do {
      if ((iVar1 == map_label) &&
         (iVar1 = GetRoomInfo__Fi(*(int *)((int)&map_save_point[0].room_label + iVar5)), iVar1 == 1)
         ) {
        CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&map_ds,menu_map_tex + 0x1c);
        map_ds.alpha = (uchar)((int)((uint)map_ds.alpha * (uint)alpha) >> 7);
        if (menu_map_disp.map_scall_flg == '\0') {
          map_ds.x = pMVar2->x * map_scall_dat[map_label].normal + map_x;
          map_ds.y = *pfVar3 * map_scall_dat[map_label].normal + map_y;
        }
        else if (menu_map_disp.map_scall_flg == '\x01') {
          map_ds.scw = 2.0;
          map_ds.sch = 2.0;
          map_ds.csx = pMVar2->x * map_scall_dat[map_label].big + map_x;
          map_ds.csy = *pfVar3 * map_scall_dat[map_label].big + map_y;
          map_ds.x = map_ds.csx;
          map_ds.y = map_ds.csy;
        }
        if ((int)map_ds.w < 0) {
          fVar7 = (float)(map_ds.w & 1 | map_ds.w >> 1);
          fVar7 = fVar7 + fVar7;
        }
        else {
          fVar7 = (float)map_ds.w;
        }
        if ((int)map_ds.h < 0) {
          fVar6 = (float)(map_ds.h & 1 | map_ds.h >> 1);
          fVar6 = fVar6 + fVar6;
        }
        else {
          fVar6 = (float)map_ds.h;
        }
        iVar1 = MenuMapDispAreaCheck__Fiffff(map_label,map_ds.x,map_ds.y,fVar7,fVar6);
        if (iVar1 != 0) {
          DispSprD__FP9DISP_SPRT(&map_ds);
        }
      }
      piVar4 = piVar4 + 4;
      iVar1 = *piVar4;
      pfVar3 = pfVar3 + 4;
      pMVar2 = pMVar2 + 1;
      iVar5 = iVar5 + 0x10;
    } while (iVar1 != -1);
  }
  return;
}

static void MenuMapDoorDisp(int map_label, float map_x, float map_y, u_char alpha) {
	static char __FUNCTION__[16] = {
		/* [0] = */ 77,
		/* [1] = */ 101,
		/* [2] = */ 110,
		/* [3] = */ 117,
		/* [4] = */ 77,
		/* [5] = */ 97,
		/* [6] = */ 112,
		/* [7] = */ 68,
		/* [8] = */ 111,
		/* [9] = */ 111,
		/* [10] = */ 114,
		/* [11] = */ 68,
		/* [12] = */ 105,
		/* [13] = */ 115,
		/* [14] = */ 112,
		/* [15] = */ 0
	};
	int i;
	MAP_DOOR_POINT *door_point_dat;
	
  MAP_DOOR_POINT *pMVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  MAP_DOOR_POINT *pMVar5;
  int iVar6;
  
  pMVar1 = menu_map_door_data[map_label];
  if (pMVar1 != (MAP_DOOR_POINT *)0x0) {
    iVar6 = 0;
    iVar4 = 0;
    if ((pMVar1->room_label1 != -1) || (pMVar1->room_label2 != -1)) {
      iVar2 = 0;
LAB_001fde74:
      do {
        iVar3 = GetRoomInfo__Fi((&pMVar1->room_label1)[iVar2 * 2]);
        if (iVar3 == 1) {
          iVar2 = (&pMVar1->door_type_label)[iVar2 * 2];
LAB_001fdea4:
          switch(iVar2) {
          case 0:
          case 1:
          case 2:
          case 3:
          case 4:
            pMVar5 = (MAP_DOOR_POINT *)(&pMVar1->x + (iVar4 + iVar6) * 2);
            if (pMVar5->ghost_seal_door_label == -1) {
              MenuMapNormalDoorDisp__FiffUcPC14MAP_DOOR_POINT(map_label,map_x,map_y,alpha,pMVar5);
            }
            else {
              MenuMapGhostSealNormalDoorDisp__FiffUcPC14MAP_DOOR_POINT
                        (map_label,map_x,map_y,alpha,pMVar5);
            }
            break;
          case 5:
          case 6:
          case 7:
          case 8:
            pMVar5 = (MAP_DOOR_POINT *)(&pMVar1->x + (iVar4 + iVar6) * 2);
            if (pMVar5->ghost_seal_door_label == -1) {
              MenuMapDoubleDoorDisp__FiffUcPC14MAP_DOOR_POINT(map_label,map_x,map_y,alpha,pMVar5);
            }
            else {
              MenuMapGhostSealDoubleDoorDisp__FiffUcPC14MAP_DOOR_POINT
                        (map_label,map_x,map_y,alpha,pMVar5);
            }
            break;
          case 9:
            break;
          default:
            SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
            PrintAssertReal("Error! map_door_point.door_type_label");
          }
        }
        else {
          iVar3 = GetRoomInfo__Fi((&pMVar1->room_label2)[iVar2 * 2]);
          if (iVar3 == 1) {
            iVar2 = (&pMVar1->door_type_label)[iVar2 * 2];
            goto LAB_001fdea4;
          }
        }
        iVar6 = iVar6 + 1;
        iVar4 = iVar6 * 2;
        if (pMVar1[iVar6].room_label1 != -1) {
          iVar2 = iVar6 * 3;
          goto LAB_001fde74;
        }
        iVar2 = iVar6 * 3;
      } while (pMVar1[iVar6].room_label2 != -1);
    }
  }
  return;
}

static void MenuMapNormalDoorDisp(int map_label, float map_x, float map_y, u_char alpha, MAP_DOOR_POINT *door_data) {
	static char __FUNCTION__[22] = {
		/* [0] = */ 77,
		/* [1] = */ 101,
		/* [2] = */ 110,
		/* [3] = */ 117,
		/* [4] = */ 77,
		/* [5] = */ 97,
		/* [6] = */ 112,
		/* [7] = */ 78,
		/* [8] = */ 111,
		/* [9] = */ 114,
		/* [10] = */ 109,
		/* [11] = */ 97,
		/* [12] = */ 108,
		/* [13] = */ 68,
		/* [14] = */ 111,
		/* [15] = */ 111,
		/* [16] = */ 114,
		/* [17] = */ 68,
		/* [18] = */ 105,
		/* [19] = */ 115,
		/* [20] = */ 112,
		/* [21] = */ 0
	};
	DISP_SPRT map_ds;
	
  int iVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  DISP_SPRT map_ds;
  
  switch(door_data->door_type_label) {
  case 0:
    CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&map_ds,menu_map_tex + 0x27);
    uVar2 = (uint)map_ds.alpha;
    break;
  case 1:
    CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&map_ds,menu_map_tex + 0x26);
    uVar2 = (uint)map_ds.alpha;
    break;
  case 2:
    CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&map_ds,menu_map_tex + 0x29);
    uVar2 = (uint)map_ds.alpha;
    break;
  case 3:
    CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&map_ds,menu_map_tex + 0x2b);
    uVar2 = (uint)map_ds.alpha;
    break;
  case 4:
    CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&map_ds,menu_map_tex + 0x2d);
    uVar2 = (uint)map_ds.alpha;
    break;
  default:
    SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
    PrintAssertReal("Error! %s");
    uVar2 = (uint)map_ds.alpha;
  }
  map_ds.alphar = 0x48;
  map_ds.alpha = (uchar)((int)(uVar2 * alpha) >> 7);
  if (menu_map_disp.map_scall_flg == '\0') {
    fVar4 = door_data->y;
    map_ds.scw = map_scall_dat[menu_map_disp.disp_map_label].normal;
    fVar3 = door_data->x;
  }
  else {
    if (menu_map_disp.map_scall_flg != '\x01') goto LAB_001fe19c;
    fVar4 = door_data->y;
    fVar3 = door_data->x;
    map_ds.scw = map_scall_dat[menu_map_disp.disp_map_label].big;
  }
  map_ds.csx = fVar3 * map_ds.scw + map_x;
  map_ds.csy = fVar4 * map_ds.scw + map_y;
  map_ds.x = map_ds.csx;
  map_ds.y = map_ds.csy;
  map_ds.sch = map_ds.scw;
LAB_001fe19c:
  if ((int)map_ds.w < 0) {
    fVar3 = (float)(map_ds.w & 1 | map_ds.w >> 1);
    fVar3 = fVar3 + fVar3;
  }
  else {
    fVar3 = (float)map_ds.w;
  }
  if ((int)map_ds.h < 0) {
    fVar4 = (float)(map_ds.h & 1 | map_ds.h >> 1);
    fVar4 = fVar4 + fVar4;
  }
  else {
    fVar4 = (float)map_ds.h;
  }
  iVar1 = MenuMapDispAreaCheck__Fiffff(map_label,map_ds.x,map_ds.y,fVar3,fVar4);
  if (iVar1 != 0) {
    DispSprD__FP9DISP_SPRT(&map_ds);
  }
  return;
}

static void MenuMapDoubleDoorDisp(int map_label, float map_x, float map_y, u_char alpha, MAP_DOOR_POINT *door_data) {
	static char __FUNCTION__[22] = {
		/* [0] = */ 77,
		/* [1] = */ 101,
		/* [2] = */ 110,
		/* [3] = */ 117,
		/* [4] = */ 77,
		/* [5] = */ 97,
		/* [6] = */ 112,
		/* [7] = */ 68,
		/* [8] = */ 111,
		/* [9] = */ 117,
		/* [10] = */ 98,
		/* [11] = */ 108,
		/* [12] = */ 101,
		/* [13] = */ 68,
		/* [14] = */ 111,
		/* [15] = */ 111,
		/* [16] = */ 114,
		/* [17] = */ 68,
		/* [18] = */ 105,
		/* [19] = */ 115,
		/* [20] = */ 112,
		/* [21] = */ 0
	};
	DISP_SPRT map_ds;
	int i;
	float tmp_x;
	float tmp_y;
	
  MAP_SCALL_DAT *pMVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  DISP_SPRT map_ds;
  
  fVar7 = 0.0;
  iVar3 = 0;
  fVar6 = 0.0;
  iVar2 = door_data->door_type_label;
  do {
    if (iVar2 == 6) {
      CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&map_ds,menu_map_tex + 0x26);
      if (iVar3 == 0) {
        fVar6 = door_data->x;
        fVar7 = door_data->y;
      }
      else {
LAB_001fe3e0:
        fVar6 = door_data->x;
        if ((int)map_ds.h < 0) {
          fVar5 = (float)(map_ds.h & 1 | map_ds.h >> 1);
          fVar5 = fVar5 + fVar5;
          fVar7 = door_data->y;
        }
        else {
          fVar5 = (float)map_ds.h;
          fVar7 = door_data->y;
        }
        fVar7 = fVar7 + fVar5;
      }
    }
    else if (iVar2 < 7) {
      if (iVar2 == 5) {
        CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&map_ds,menu_map_tex + 0x27);
        if (iVar3 == 0) {
          fVar6 = door_data->x;
          fVar7 = door_data->y;
        }
        else {
          if ((int)map_ds.w < 0) {
            fVar5 = (float)(map_ds.w & 1 | map_ds.w >> 1);
            fVar5 = fVar5 + fVar5;
            fVar6 = door_data->x;
          }
          else {
            fVar5 = (float)map_ds.w;
            fVar6 = door_data->x;
          }
          fVar7 = door_data->y;
          fVar6 = fVar6 + fVar5;
        }
      }
      else {
LAB_001fe4b8:
        SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
        PrintAssertReal("Error! MenuMapDoubleDoorDisp");
      }
    }
    else if (iVar2 == 7) {
      CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&map_ds,menu_map_tex + 0x29);
      if (iVar3 != 0) goto LAB_001fe3e0;
      if ((int)map_ds.w < 0) {
        fVar5 = (float)(map_ds.w & 1 | map_ds.w >> 1);
        fVar5 = fVar5 + fVar5;
        fVar6 = door_data->x;
      }
      else {
        fVar5 = (float)map_ds.w;
        fVar6 = door_data->x;
      }
      fVar7 = door_data->y;
      fVar6 = fVar6 + fVar5;
    }
    else {
      if (iVar2 != 8) goto LAB_001fe4b8;
      CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&map_ds,menu_map_tex + 0x2b);
      if (iVar3 == 0) {
        fVar6 = door_data->x;
        fVar7 = door_data->y;
      }
      else {
        if ((int)map_ds.w < 0) {
          fVar7 = (float)(map_ds.w & 1 | map_ds.w >> 1);
          fVar7 = fVar7 + fVar7;
          fVar6 = door_data->x;
        }
        else {
          fVar7 = (float)map_ds.w;
          fVar6 = door_data->x;
        }
        fVar6 = fVar6 + fVar7;
        if ((int)map_ds.h < 0) {
          fVar5 = (float)(map_ds.h & 1 | map_ds.h >> 1);
          fVar5 = fVar5 + fVar5;
          fVar7 = door_data->y;
        }
        else {
          fVar5 = (float)map_ds.h;
          fVar7 = door_data->y;
        }
        fVar7 = fVar7 + fVar5;
      }
    }
    map_ds.alphar = 0x48;
    map_ds.alpha = (uchar)((int)((uint)map_ds.alpha * (uint)alpha) >> 7);
    if (menu_map_disp.map_scall_flg == '\0') {
      pMVar1 = map_scall_dat + menu_map_disp.disp_map_label;
LAB_001fe530:
      map_ds.scw = pMVar1->normal;
      map_ds.csx = fVar6 * map_ds.scw + map_x;
      map_ds.csy = fVar7 * map_ds.scw + map_y;
      map_ds.x = map_ds.csx;
      map_ds.y = map_ds.csy;
      map_ds.sch = map_ds.scw;
    }
    else if (menu_map_disp.map_scall_flg == '\x01') {
      pMVar1 = (MAP_SCALL_DAT *)&map_scall_dat[menu_map_disp.disp_map_label].big;
      goto LAB_001fe530;
    }
    if ((int)map_ds.w < 0) {
      fVar5 = (float)(map_ds.w & 1 | map_ds.w >> 1);
      fVar5 = fVar5 + fVar5;
    }
    else {
      fVar5 = (float)map_ds.w;
    }
    if ((int)map_ds.h < 0) {
      fVar4 = (float)(map_ds.h & 1 | map_ds.h >> 1);
      fVar4 = fVar4 + fVar4;
    }
    else {
      fVar4 = (float)map_ds.h;
    }
    iVar2 = MenuMapDispAreaCheck__Fiffff(map_label,map_ds.x,map_ds.y,fVar5,fVar4);
    if (iVar2 != 0) {
      DispSprD__FP9DISP_SPRT(&map_ds);
    }
    iVar3 = iVar3 + 1;
    if (1 < iVar3) {
      return;
    }
    iVar2 = door_data->door_type_label;
  } while( true );
}

static void MenuMapGhostSealNormalDoorDisp(int map_label, float map_x, float map_y, u_char alpha, MAP_DOOR_POINT *door_data) {
	static char __FUNCTION__[31] = {
		/* [0] = */ 77,
		/* [1] = */ 101,
		/* [2] = */ 110,
		/* [3] = */ 117,
		/* [4] = */ 77,
		/* [5] = */ 97,
		/* [6] = */ 112,
		/* [7] = */ 71,
		/* [8] = */ 104,
		/* [9] = */ 111,
		/* [10] = */ 115,
		/* [11] = */ 116,
		/* [12] = */ 83,
		/* [13] = */ 101,
		/* [14] = */ 97,
		/* [15] = */ 108,
		/* [16] = */ 78,
		/* [17] = */ 111,
		/* [18] = */ 114,
		/* [19] = */ 109,
		/* [20] = */ 97,
		/* [21] = */ 108,
		/* [22] = */ 68,
		/* [23] = */ 111,
		/* [24] = */ 111,
		/* [25] = */ 114,
		/* [26] = */ 68,
		/* [27] = */ 105,
		/* [28] = */ 115,
		/* [29] = */ 112,
		/* [30] = */ 0
	};
	DISP_SPRT map_ds;
	int seal_state;
	
  int iVar1;
  int iVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  DISP_SPRT map_ds;
  
  iVar1 = GetGhostSealDoorState__Fi(door_data->ghost_seal_door_label);
  if ((iVar1 == 0) || (iVar1 == 3)) {
    MenuMapNormalDoorDisp__FiffUcPC14MAP_DOOR_POINT(map_label,map_x,map_y,alpha,door_data);
    return;
  }
  iVar2 = door_data->door_type_label;
  if (iVar2 == 1) {
    CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&map_ds,menu_map_tex + 0x24);
    uVar3 = (uint)map_ds.alpha;
  }
  else if (iVar2 < 2) {
    if (iVar2 == 0) {
      CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&map_ds,menu_map_tex + 0x25);
      uVar3 = (uint)map_ds.alpha;
    }
    else {
LAB_001fe740:
      SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
      PrintAssertReal("Error! %s");
      uVar3 = (uint)map_ds.alpha;
    }
  }
  else if (iVar2 == 2) {
    CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&map_ds,menu_map_tex + 0x28);
    uVar3 = (uint)map_ds.alpha;
  }
  else {
    if (iVar2 != 3) goto LAB_001fe740;
    CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&map_ds,menu_map_tex + 0x2a);
    uVar3 = (uint)map_ds.alpha;
  }
  map_ds.alphar = 0x48;
  map_ds.alpha = (uchar)((int)(uVar3 * alpha) >> 7);
  if (menu_map_disp.map_scall_flg == '\0') {
    fVar5 = door_data->x;
    map_ds.scw = map_scall_dat[menu_map_disp.disp_map_label].normal;
    fVar4 = door_data->y;
  }
  else {
    if (menu_map_disp.map_scall_flg != '\x01') goto LAB_001fe80c;
    fVar5 = door_data->x;
    fVar4 = door_data->y;
    map_ds.scw = map_scall_dat[menu_map_disp.disp_map_label].big;
  }
  map_ds.csx = fVar5 * map_ds.scw + map_x;
  map_ds.csy = fVar4 * map_ds.scw + map_y;
  map_ds.x = map_ds.csx;
  map_ds.y = map_ds.csy;
  map_ds.sch = map_ds.scw;
LAB_001fe80c:
  if ((int)map_ds.w < 0) {
    fVar4 = (float)(map_ds.w & 1 | map_ds.w >> 1);
    fVar4 = fVar4 + fVar4;
  }
  else {
    fVar4 = (float)map_ds.w;
  }
  if ((int)map_ds.h < 0) {
    fVar5 = (float)(map_ds.h & 1 | map_ds.h >> 1);
    fVar5 = fVar5 + fVar5;
  }
  else {
    fVar5 = (float)map_ds.h;
  }
  iVar2 = MenuMapDispAreaCheck__Fiffff(map_label,map_ds.x,map_ds.y,fVar4,fVar5);
  if (iVar2 != 0) {
    DispSprD__FP9DISP_SPRT(&map_ds);
  }
  if (iVar1 == 1) {
    MenuMapGhostSealMarkDisp__FiffUci(map_label,map_x,map_y,alpha,door_data->ghost_seal_door_label);
  }
  return;
}

static void MenuMapGhostSealDoubleDoorDisp(int map_label, float map_x, float map_y, u_char alpha, MAP_DOOR_POINT *door_data) {
	static char __FUNCTION__[31] = {
		/* [0] = */ 77,
		/* [1] = */ 101,
		/* [2] = */ 110,
		/* [3] = */ 117,
		/* [4] = */ 77,
		/* [5] = */ 97,
		/* [6] = */ 112,
		/* [7] = */ 71,
		/* [8] = */ 104,
		/* [9] = */ 111,
		/* [10] = */ 115,
		/* [11] = */ 116,
		/* [12] = */ 83,
		/* [13] = */ 101,
		/* [14] = */ 97,
		/* [15] = */ 108,
		/* [16] = */ 68,
		/* [17] = */ 111,
		/* [18] = */ 117,
		/* [19] = */ 98,
		/* [20] = */ 108,
		/* [21] = */ 101,
		/* [22] = */ 68,
		/* [23] = */ 111,
		/* [24] = */ 111,
		/* [25] = */ 114,
		/* [26] = */ 68,
		/* [27] = */ 105,
		/* [28] = */ 115,
		/* [29] = */ 112,
		/* [30] = */ 0
	};
	DISP_SPRT map_ds;
	int i;
	int seal_state;
	float tmp_x;
	float tmp_y;
	
  int iVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  DISP_SPRT map_ds;
  
  fVar7 = 0.0;
  fVar6 = 0.0;
  iVar1 = GetGhostSealDoorState__Fi(door_data->ghost_seal_door_label);
  if ((iVar1 == 0) || (iVar3 = 0, iVar1 == 3)) {
    MenuMapDoubleDoorDisp__FiffUcPC14MAP_DOOR_POINT(map_label,map_x,map_y,alpha,door_data);
  }
  else {
    while (iVar3 < 2) {
      iVar2 = door_data->door_type_label;
      if (iVar2 == 6) {
        CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&map_ds,menu_map_tex + 0x24);
        if (iVar3 == 0) {
          fVar6 = door_data->x;
          fVar7 = door_data->y;
        }
        else {
LAB_001fea90:
          fVar6 = door_data->x;
          if ((int)map_ds.h < 0) {
            fVar5 = (float)(map_ds.h & 1 | map_ds.h >> 1);
            fVar5 = fVar5 + fVar5;
            fVar7 = door_data->y;
          }
          else {
            fVar5 = (float)map_ds.h;
            fVar7 = door_data->y;
          }
          fVar7 = fVar7 + fVar5;
        }
      }
      else if (iVar2 < 7) {
        if (iVar2 == 5) {
          CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&map_ds,menu_map_tex + 0x25);
          if (iVar3 == 0) {
            fVar6 = door_data->x;
            fVar7 = door_data->y;
          }
          else {
            if ((int)map_ds.w < 0) {
              fVar5 = (float)(map_ds.w & 1 | map_ds.w >> 1);
              fVar5 = fVar5 + fVar5;
              fVar6 = door_data->x;
            }
            else {
              fVar5 = (float)map_ds.w;
              fVar6 = door_data->x;
            }
            fVar7 = door_data->y;
            fVar6 = fVar6 + fVar5;
          }
        }
        else {
LAB_001feb70:
          SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
          PrintAssertReal("Error! MenuMapDoubleDoorDisp");
        }
      }
      else if (iVar2 == 7) {
        CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&map_ds,menu_map_tex + 0x28);
        if (iVar3 != 0) goto LAB_001fea90;
        if ((int)map_ds.w < 0) {
          fVar5 = (float)(map_ds.w & 1 | map_ds.w >> 1);
          fVar5 = fVar5 + fVar5;
          fVar6 = door_data->x;
        }
        else {
          fVar5 = (float)map_ds.w;
          fVar6 = door_data->x;
        }
        fVar7 = door_data->y;
        fVar6 = fVar6 + fVar5;
      }
      else {
        if (iVar2 != 8) goto LAB_001feb70;
        CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&map_ds,menu_map_tex + 0x2a);
        if (iVar3 == 0) {
          fVar6 = door_data->x;
          fVar7 = door_data->y;
        }
        else {
          if ((int)map_ds.w < 0) {
            fVar7 = (float)(map_ds.w & 1 | map_ds.w >> 1);
            fVar7 = fVar7 + fVar7;
            fVar6 = door_data->x;
          }
          else {
            fVar7 = (float)map_ds.w;
            fVar6 = door_data->x;
          }
          fVar6 = fVar6 + fVar7;
          if ((int)map_ds.h < 0) {
            fVar5 = (float)(map_ds.h & 1 | map_ds.h >> 1);
            fVar5 = fVar5 + fVar5;
            fVar7 = door_data->y;
          }
          else {
            fVar5 = (float)map_ds.h;
            fVar7 = door_data->y;
          }
          fVar7 = fVar7 + fVar5;
        }
      }
      map_ds.alphar = 0x48;
      map_ds.alpha = (uchar)((int)((uint)map_ds.alpha * (uint)alpha) >> 7);
      if (menu_map_disp.map_scall_flg == '\0') {
        map_ds.scw = map_scall_dat[menu_map_disp.disp_map_label].normal;
LAB_001fec04:
        map_ds.csx = fVar6 * map_ds.scw + map_x;
        map_ds.csy = fVar7 * map_ds.scw + map_y;
        map_ds.x = map_ds.csx;
        map_ds.y = map_ds.csy;
        map_ds.sch = map_ds.scw;
      }
      else if (menu_map_disp.map_scall_flg == '\x01') {
        map_ds.scw = map_scall_dat[menu_map_disp.disp_map_label].big;
        goto LAB_001fec04;
      }
      if ((int)map_ds.w < 0) {
        fVar5 = (float)(map_ds.w & 1 | map_ds.w >> 1);
        fVar5 = fVar5 + fVar5;
      }
      else {
        fVar5 = (float)map_ds.w;
      }
      if ((int)map_ds.h < 0) {
        fVar4 = (float)(map_ds.h & 1 | map_ds.h >> 1);
        fVar4 = fVar4 + fVar4;
      }
      else {
        fVar4 = (float)map_ds.h;
      }
      iVar2 = MenuMapDispAreaCheck__Fiffff(map_label,map_ds.x,map_ds.y,fVar5,fVar4);
      if (iVar2 == 0) {
        iVar3 = iVar3 + 1;
      }
      else {
        DispSprD__FP9DISP_SPRT(&map_ds);
        iVar3 = iVar3 + 1;
      }
    }
    if (iVar1 == 1) {
      MenuMapGhostSealMarkDisp__FiffUci
                (map_label,map_x,map_y,alpha,door_data->ghost_seal_door_label);
    }
  }
  return;
}

static void MenuMapGhostSealMarkDisp(int map_label, float map_x, float map_y, u_char alpha, int ghost_seal_door_label) {
	DISP_SPRT map_ds;
	
  int iVar1;
  float fVar2;
  float fVar3;
  DISP_SPRT map_ds;
  
  CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&map_ds,menu_map_tex + 0x2c);
  map_ds.alpha = (uchar)((int)((uint)map_ds.alpha * (uint)alpha) >> 7);
  if (menu_map_disp.map_scall_flg == '\0') {
    map_ds.scw = map_scall_dat[menu_map_disp.disp_map_label].normal;
  }
  else {
    if (menu_map_disp.map_scall_flg != '\x01') goto LAB_001fee10;
    map_ds.scw = map_scall_dat[menu_map_disp.disp_map_label].big;
  }
  map_ds.csx = ghost_seal_door_data[ghost_seal_door_label].pos_x * map_ds.scw + map_x;
  map_ds.csy = ghost_seal_door_data[ghost_seal_door_label].pos_y * map_ds.scw + map_y;
  map_ds.x = map_ds.csx;
  map_ds.y = map_ds.csy;
  map_ds.sch = map_ds.scw;
LAB_001fee10:
  if ((int)map_ds.w < 0) {
    fVar3 = (float)(map_ds.w & 1 | map_ds.w >> 1);
    fVar3 = fVar3 + fVar3;
  }
  else {
    fVar3 = (float)map_ds.w;
  }
  if ((int)map_ds.h < 0) {
    fVar2 = (float)(map_ds.h & 1 | map_ds.h >> 1);
    fVar2 = fVar2 + fVar2;
  }
  else {
    fVar2 = (float)map_ds.h;
  }
  iVar1 = MenuMapDispAreaCheck__Fiffff(map_label,map_ds.x,map_ds.y,fVar3,fVar2);
  if (iVar1 != 0) {
    DispSprD__FP9DISP_SPRT(&map_ds);
  }
  return;
}

static void MenuMapPlyrPosDisp(int map_label, float map_x, float map_y, u_char alpha) {
	float pos_x;
	float pos_y;
	DISP_SPRT map_ds;
	
  int iVar1;
  float fVar2;
  float fVar3;
  float pos_x;
  float pos_y;
  DISP_SPRT map_ds;
  
  pos_x = 0.0;
  pos_y = 0.0;
  ChangeWorldPosToWinPos__FPfT0iT0i
            (&pos_x,&pos_y,map_label,plyr_wrk.cmn_wrk.mbox.pos,(uint)menu_map_disp.map_scall_flg);
  CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&map_ds,menu_map_tex + 0x19);
  if (menu_map_disp.map_scall_flg == '\0') {
    fVar2 = (plyr_wrk.cmn_wrk.mbox.rot[1] * 180.0) / DAT_003ee57c;
    map_ds.x = (pos_x + map_x) - 24.0;
    map_ds.y = (pos_y + map_y) - 44.0;
    map_ds.crx = map_ds.x + 24.0;
    map_ds.cry = map_ds.y + 44.0;
  }
  else {
    if (menu_map_disp.map_scall_flg != '\x01') goto LAB_001ff044;
    fVar2 = (plyr_wrk.cmn_wrk.mbox.rot[1] * 180.0) / DAT_003ee580;
    map_ds.csx = (pos_x + map_x) - 48.0;
    map_ds.sch = 2.0;
    map_ds.csy = (pos_y + map_y) - 88.0;
    map_ds.scw = 2.0;
    map_ds.crx = map_ds.csx + 48.0;
    map_ds.cry = map_ds.csy + 88.0;
    map_ds.x = map_ds.csx;
    map_ds.y = map_ds.csy;
  }
  map_ds.rot = fVar2 + 360.0;
LAB_001ff044:
  map_ds.alpha = (uchar)((int)((uint)map_ds.alpha * (uint)alpha) >> 7);
  if ((int)map_ds.w < 0) {
    fVar2 = (float)(map_ds.w & 1 | map_ds.w >> 1);
    fVar2 = fVar2 + fVar2;
  }
  else {
    fVar2 = (float)map_ds.w;
  }
  if ((int)map_ds.h < 0) {
    fVar3 = (float)(map_ds.h & 1 | map_ds.h >> 1);
    fVar3 = fVar3 + fVar3;
  }
  else {
    fVar3 = (float)map_ds.h;
  }
  iVar1 = MenuMapDispAreaCheck__Fiffff(map_label,map_ds.x,map_ds.y,fVar2,fVar3);
  if (iVar1 != 0) {
    DispSprD__FP9DISP_SPRT(&map_ds);
  }
  return;
}

static void MenuMapCenterDisp(int off_x, int off_y, u_char alpha) {
	DISP_SPRT center_ds;
	int i;
	
  int iVar1;
  int iVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  DISP_SPRT center_ds;
  
  PK2SendVram__FUiiii((uint)menu_map_bg_addr,-1,-1,0);
  MenuMapCenterAnim__Fv();
  if (menu_wrk.step == '\x02') {
    uVar3 = (uint)menu_map_disp.tri_alpha;
  }
  else {
    uVar3 = 0;
  }
  fVar5 = (float)off_x;
  iVar2 = 0x2e;
  fVar6 = (float)off_y;
  iVar1 = 0x5c0;
  while( true ) {
    CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT
              (&center_ds,(SPRT_DAT *)((int)&menu_map_tex[0].tex0 + iVar1));
    center_ds.alpha = (uchar)((int)(center_ds.alpha * uVar3) >> 7);
    if (iVar2 == 0x2f) {
      center_ds.crx = center_ds.x + fVar5;
      if ((int)center_ds.w < 0) {
        fVar4 = (float)(center_ds.w & 1 | center_ds.w >> 1);
        fVar4 = fVar4 + fVar4;
      }
      else {
        fVar4 = (float)center_ds.w;
      }
      center_ds.rot = 270.0;
      center_ds.cry = center_ds.y + fVar4 + fVar6;
      center_ds.x = center_ds.crx;
      center_ds.y = center_ds.cry;
    }
    else if (iVar2 == 0x30) {
      if ((int)center_ds.h < 0) {
        fVar4 = (float)(center_ds.h & 1 | center_ds.h >> 1);
        fVar4 = fVar4 + fVar4;
      }
      else {
        fVar4 = (float)center_ds.h;
      }
      center_ds.cry = center_ds.y + fVar6;
      center_ds.rot = 90.0;
      center_ds.crx = center_ds.x + fVar4 + fVar5;
      center_ds.x = center_ds.crx;
      center_ds.y = center_ds.cry;
    }
    else {
      center_ds.x = center_ds.x + fVar5;
      center_ds.y = center_ds.y + fVar6;
    }
    iVar2 = iVar2 + 1;
    DispSprD__FP9DISP_SPRT(&center_ds);
    if (0x31 < iVar2) break;
    iVar1 = iVar2 * 0x20;
  }
  return;
}

static void MenuMapCenterAnim() {
	int i;
	static ALPHA_ANIM_TBL csr_in_alpha_tbl[2] = {
		/* [0] = */ {
			/* .start_alpha = */ 0,
			/* .end_alpha = */ 128,
			/* .start_time = */ 0,
			/* .end_time = */ 20
		},
		/* [1] = */ {
			/* .start_alpha = */ -1,
			/* .end_alpha = */ -1,
			/* .start_time = */ -1,
			/* .end_time = */ -1
		}
	};
	static ALPHA_ANIM_TBL csr_loop_alpha_tbl[2] = {
		/* [0] = */ {
			/* .start_alpha = */ 0,
			/* .end_alpha = */ 128,
			/* .start_time = */ 0,
			/* .end_time = */ 20
		},
		/* [1] = */ {
			/* .start_alpha = */ -1,
			/* .end_alpha = */ -1,
			/* .start_time = */ -1,
			/* .end_time = */ -1
		}
	};
	
  char *pcVar1;
  int iVar2;
  
  menu_map_disp.tri_alpha = '\0';
  if (menu_map_disp.tri_anim_step == '\0') {
    iVar2 = 0;
    do {
      if (3 < iVar2) goto LAB_001ff34c;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
      _fixed_array_verifyrange__H1Zc_UiUi_PX01(iVar2,4);
      pcVar1 = menu_map_disp.tri_pad_flg.field0_0x0.m_aData + iVar2;
      iVar2 = iVar2 + 1;
    } while (*pcVar1 != '\x01');
                    /* end of inlined section */
    menu_map_disp.tri_timer = '\0';
    menu_map_disp.tri_anim_step = '\x01';
  }
LAB_001ff34c:
  if (menu_map_disp.tri_anim_step == '\x01') {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    for (iVar2 = 0;
        (iVar2 < 4 &&
        (_fixed_array_verifyrange__H1Zc_UiUi_PX01(iVar2,4),
        menu_map_disp.tri_pad_flg.field0_0x0.m_aData[iVar2] != '\x01')); iVar2 = iVar2 + 1) {
    }
    if (iVar2 == 4) {
      menu_map_disp.tri_alpha =
           Anim2D_CalcNowAlpha__FPC14ALPHA_ANIM_TBLi
                     ((ALPHA_ANIM_TBL *)csr_in_alpha_tbl_1093,(int)menu_map_disp.tri_timer);
      menu_map_disp.tri_timer = menu_map_disp.tri_timer - 1;
      if ((int)((uint)(byte)menu_map_disp.tri_timer << 0x18) < 1) {
        menu_map_disp.tri_anim_step = '\0';
      }
    }
    else {
      menu_map_disp.tri_alpha =
           Anim2D_CalcNowAlpha__FPC14ALPHA_ANIM_TBLi
                     ((ALPHA_ANIM_TBL *)csr_in_alpha_tbl_1093,(int)menu_map_disp.tri_timer);
      menu_map_disp.tri_timer = menu_map_disp.tri_timer + '\x01';
      if ('\x13' < menu_map_disp.tri_timer) {
        menu_map_disp.tri_timer = '\x14';
        menu_map_disp.tri_anim_step = '\x02';
      }
    }
  }
  else if (menu_map_disp.tri_anim_step == '\x02') {
    if (menu_map_disp.tri_timer < '\x14') {
      menu_map_disp.tri_alpha =
           Anim2D_CalcNowAlpha__FPC14ALPHA_ANIM_TBLi
                     ((ALPHA_ANIM_TBL *)csr_loop_alpha_tbl_1094,(int)menu_map_disp.tri_timer);
      menu_map_disp.tri_timer = menu_map_disp.tri_timer + '\x01';
    }
    else if (menu_map_disp.tri_timer == '\x14') {
      menu_map_disp.tri_timer = '\x15';
      menu_map_disp.tri_alpha = 0x80;
    }
    else {
      menu_map_disp.tri_alpha =
           Anim2D_CalcNowAlpha__FPC14ALPHA_ANIM_TBLi
                     ((ALPHA_ANIM_TBL *)csr_loop_alpha_tbl_1094,
                      0x14 - (int)menu_map_disp.tri_timer % 0x14);
      menu_map_disp.tri_timer = menu_map_disp.tri_timer + '\x01';
      if ('\'' < menu_map_disp.tri_timer) {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
        for (iVar2 = 0;
            (iVar2 < 4 &&
            (_fixed_array_verifyrange__H1Zc_UiUi_PX01(iVar2,4),
            menu_map_disp.tri_pad_flg.field0_0x0.m_aData[iVar2] != '\x01')); iVar2 = iVar2 + 1) {
        }
        if (iVar2 == 4) {
          menu_map_disp.tri_anim_step = '\0';
        }
        else {
          menu_map_disp.tri_timer = '\0';
        }
      }
    }
  }
  return;
}

static void MenuMapSnapShotDisp(int off_x, int off_y, u_char alpha) {
	DISP_SPRT snap_ds;
	DISP_SQAR dsq;
	SQAR_DAT snap_bg;
	
  undefined *puVar1;
  uint uVar2;
  ulong *puVar3;
  uchar *puVar4;
  int iVar5;
  DISP_SPRT snap_ds;
  DISP_SQAR dsq;
  SQAR_DAT snap_bg;
  
  puVar1 = (undefined *)((int)&snap_bg.h + 3);
  uVar2 = (uint)puVar1 & 7;
  puVar3 = (ulong *)(puVar1 + -uVar2);
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | DAT_003be150 >> (7 - uVar2) * 8;
  snap_bg._0_8_ = DAT_003be150;
  puVar1 = (undefined *)((int)&snap_bg.y + 3);
  uVar2 = (uint)puVar1 & 7;
  puVar3 = (ulong *)(puVar1 + -uVar2);
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | DAT_003be158 >> (7 - uVar2) * 8;
  snap_bg._8_8_ = DAT_003be158;
  uVar2 = (uint)&snap_bg.alpha & 7;
  puVar4 = &snap_bg.alpha + -uVar2;
  *(ulong *)puVar4 = *(ulong *)puVar4 & -1L << (uVar2 + 1) * 8 | DAT_003be160 >> (7 - uVar2) * 8;
  snap_bg._16_8_ = DAT_003be160;
  CopySqrDToSqr__FP9DISP_SQARP8SQAR_DAT(&dsq,&snap_bg);
  dsq.alpha = (uchar)((int)((uint)dsq.alpha * (uint)alpha) >> 7);
  DispSqrD__FP9DISP_SQAR(&dsq);
  if ((((menu_map_disp.disp_map_label != -1) && (menu_map_ctrl.hit_room != -1)) &&
      (menu_map_ctrl.snap_load.step == '\x02')) &&
     ((iVar5 = MenuMapCheckHouseCondition__Fi(menu_map_ctrl.hit_room), iVar5 != 0 &&
      (iVar5 = GetRoomInfo__Fi(menu_map_ctrl.hit_room), iVar5 == 1)))) {
    PK2SendVram__FUiiii((uint)snap_data_addr,-1,-1,0);
    CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&snap_ds,menu_map_tex + 0x18);
    snap_ds.x = snap_ds.x + (float)off_x;
    snap_ds.y = snap_ds.y + (float)off_y;
    snap_ds.alpha = (uchar)((int)((uint)snap_ds.alpha * (uint)alpha) >> 7);
    DispSprD__FP9DISP_SPRT(&snap_ds);
  }
  return;
}

static void MenuMapWindowDisp(int off_x, int off_y, u_char alpha) {
	DISP_SPRT win_ds;
	int i;
	
  SPRT_DAT *d;
  int iVar1;
  float fVar2;
  DISP_SPRT win_ds;
  
  fVar2 = (float)off_x;
  iVar1 = 0x13;
  PK2SendVram__FUiiii((uint)menu_map_bg_addr,-1,-1,0);
  d = menu_map_tex + 4;
  do {
    CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&win_ds,d);
    iVar1 = iVar1 + -1;
    d = d + 1;
    win_ds.x = win_ds.x + fVar2;
    win_ds.y = win_ds.y + (float)off_y;
    win_ds.alpha = (uchar)((int)((uint)win_ds.alpha * (uint)alpha) >> 7);
    DispSprD__FP9DISP_SPRT(&win_ds);
  } while (-1 < iVar1);
  return;
}

static void MenuMapInfoDisp(int off_x, int off_y, u_char alpha) {
	int i;
	int col_label;
	
  int iVar1;
  uint uVar2;
  int col_label;
  uint uVar3;
  
  uVar3 = 0;
  uVar2 = 2;
  while( true ) {
    col_label = 10;
    if (uVar2 != 0) {
      col_label = 0xb;
    }
    PrintMsg__Fiiiiiii(0x3d,(int)menu_map_disp.disp_map_label,0x39 - uVar3,0x48 - uVar3,col_label,
                       (uint)alpha,0xa0);
    if ((((menu_map_disp.disp_map_label != '\0') ||
         (iVar1 = MenuMapCheckHouseCondition__Fi(menu_map_ctrl.hit_room), iVar1 != 0)) &&
        (menu_map_ctrl.hit_room != -1)) &&
       (iVar1 = GetRoomInfo__Fi(menu_map_ctrl.hit_room), iVar1 == 1)) {
      PrintMsg__Fiiiiiii(0x4a,menu_map_ctrl.hit_room,0xed - uVar3,0x48 - uVar3,col_label,(uint)alpha
                         ,0xa0);
    }
    uVar3 = uVar3 + 1;
    if (2 < (int)uVar3) break;
    uVar2 = uVar3 ^ 2;
  }
  return;
}

static void MenuMapCaptionDisp(int off_x, int off_y, u_char alpha) {
  if (menu_map_disp.map_scall_flg == '\0') {
    DrawCmnCapGroup_W__FiiUcUi(1,1,alpha,0);
    return;
  }
  if (menu_map_disp.map_scall_flg == '\x01') {
    DrawCmnCapGroup_W__FiiUcUi(2,2,alpha,0);
  }
  return;
}

char* char * _fixed_array_verifyrange<char>(size_t v, size_t _max) {
  g3ddbgAssert__FbPCce(false,str_849);
  return (char *)v;
}

static void __static_initialization_and_destruction_0(int __initialize_p, int __priority) {
  return;
}

static void global constructors keyed to MenuMap() {
  __static_initialization_and_destruction_0(1,0xffff);
  return;
}
