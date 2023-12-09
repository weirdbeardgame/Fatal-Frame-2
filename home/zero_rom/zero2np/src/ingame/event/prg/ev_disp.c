// STATUS: NOT STARTED

#include "ev_disp.h"

typedef struct {
	u_char step;
	u_char anim_step;
	u_char disp_flg;
	u_char win_flg;
	int file_label;
	int fade_time;
	int timer;
	SPRT_DAT sprt;
} EV_DISP2D_CTRL;

typedef struct {
	u_char step;
	u_char chapter_num;
	u_char disp_flg;
	u_char anim_step;
	int timer;
} EV_CHAPTER_DISP;

typedef struct {
	u_char anim_step;
	u_char disp_flg;
	int msg_type;
	int msg_id;
	int fade_time;
	int timer;
} EV_ITEM_NAME_DISP;

static EV_DISP2D_CTRL ev_disp2d_ctrl;
static EV_CHAPTER_DISP ev_chapter_disp;
static EV_ITEM_NAME_DISP ev_item_name_disp;
static void *ev_disp2d_addr;
static void *chapter_load_addr;

static void _fixed_array_assert(char *strType, size_t v0, size_t v1) {
	static char *str = 0x3a9718;
	
  g3ddbgAssert__FbPCce(false,str_646);
  return (int *)v;
}

static void** void * * _fixed_array_verifyrange<void *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_verifyrange__H1Zi_UiUi_PX01(0x3f02e0,_max);
  }
  return (void **)0x0;
}

static char** char * * _fixed_array_verifyrange<char *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_verifyrange__H1Zi_UiUi_PX01(0x3f02e8,_max);
  }
  return (char **)0x0;
}

static unsigned int** unsigned int * * _fixed_array_verifyrange<unsigned int *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_verifyrange__H1Zi_UiUi_PX01(0x3a9760,_max);
  }
  return (uint **)0x0;
}

void EvDispInit() {
  memset(&ev_disp2d_ctrl,0,0x30);
  memset(&ev_chapter_disp,0,8);
  memset(&ev_item_name_disp,0,0x14);
  ev_disp2d_addr = (void *)0x0;
  chapter_load_addr = (void *)0x0;
  return;
}

void EvDispMain() {
  if (ev_disp2d_ctrl.disp_flg != '\0') {
    EvDisp2DMain__Fv();
  }
  if (ev_chapter_disp.disp_flg != '\0') {
    EvChapterDispMain__Fv();
  }
  if (ev_item_name_disp.disp_flg != '\0') {
    EvItemNameDispMain__Fv();
  }
  return;
}

static void EvDisp2DMain() {
  int iVar1;
  
  if (ev_disp2d_ctrl.step == '\0') {
    EvDisp2DDataLoadReq__Fv();
    ev_disp2d_ctrl.step = '\x01';
  }
  if ((ev_disp2d_ctrl.step == '\x01') && (iVar1 = EvDisp2DDataLoadWait__Fv(), iVar1 != 0)) {
    ev_disp2d_ctrl.step = '\x02';
  }
  if (ev_disp2d_ctrl.step == '\x02') {
    EvDisp2DExe__Fv();
  }
  if (ev_disp2d_ctrl.step == '\x03') {
    EvDisp2DEndRelease__Fv();
  }
  return;
}

static void EvDisp2DDataLoadReq() {
	static char __FUNCTION__[20] = {
		/* [0] = */ 69,
		/* [1] = */ 118,
		/* [2] = */ 68,
		/* [3] = */ 105,
		/* [4] = */ 115,
		/* [5] = */ 112,
		/* [6] = */ 50,
		/* [7] = */ 68,
		/* [8] = */ 68,
		/* [9] = */ 97,
		/* [10] = */ 116,
		/* [11] = */ 97,
		/* [12] = */ 76,
		/* [13] = */ 111,
		/* [14] = */ 97,
		/* [15] = */ 100,
		/* [16] = */ 82,
		/* [17] = */ 101,
		/* [18] = */ 113,
		/* [19] = */ 0
	};
	
  uint size;
  
  if (ev_disp2d_addr == (void *)0x0) {
    size = GetFileSize(ev_disp2d_ctrl.file_label);
    ev_disp2d_addr = mem_utilGetMem__Fi(size);
  }
  else {
    SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
    PrintAssertReal("Error!! EvDisp2DDataLoadReq()");
  }
  FileLoadReqEE(ev_disp2d_ctrl.file_label,ev_disp2d_addr,3,(undefined1 *)0x0,(void *)0x0);
  return;
}

static int EvDisp2DDataLoadWait() {
  int iVar1;
  
  iVar1 = FileLoadIsEnd2(ev_disp2d_ctrl.file_label,ev_disp2d_addr);
  return (int)(iVar1 != 0);
}

int CheckEvDisp2DDataLoad() {
  return (int)(ev_disp2d_ctrl.step == '\x02');
}

static void EvDisp2DExe() {
	DISP_SPRT ds;
	u_char alpha;
	
  int iVar1;
  uchar alpha;
  DISP_SPRT ds;
  
  EvDisp2DDataMakePkt__Fv();
  memset(&ds,0,0x88);
  if (ev_disp2d_ctrl.anim_step != '\x01') {
    if (1 < ev_disp2d_ctrl.anim_step) {
      alpha = 0x80;
      if ((ev_disp2d_ctrl.anim_step != '\x02') && (alpha = 0x80, ev_disp2d_ctrl.anim_step == '\x03')
         ) {
        if (ev_disp2d_ctrl.fade_time < 1) {
          ev_disp2d_ctrl.step = ev_disp2d_ctrl.anim_step;
          alpha = '\0';
        }
        else {
          if (ev_disp2d_ctrl.fade_time == 0) {
            trap(7);
          }
          iVar1 = ev_disp2d_ctrl.timer + -1;
          alpha = (char)(0x80 / ev_disp2d_ctrl.fade_time) * (char)ev_disp2d_ctrl.timer;
          ev_disp2d_ctrl.timer = iVar1;
          if (iVar1 < 1) {
            ev_disp2d_ctrl.step = ev_disp2d_ctrl.anim_step;
          }
        }
      }
      goto LAB_0017d4f0;
    }
    alpha = 0x80;
    if (ev_disp2d_ctrl.anim_step != '\0') goto LAB_0017d4f0;
    ev_disp2d_ctrl.timer = 0;
    if (ev_disp2d_ctrl.fade_time < 1) {
      ev_disp2d_ctrl.anim_step = '\x02';
      alpha = 0x80;
      goto LAB_0017d4f0;
    }
    ev_disp2d_ctrl.anim_step = '\x01';
  }
  if (ev_disp2d_ctrl.fade_time == 0) {
    trap(7);
  }
  iVar1 = ev_disp2d_ctrl.timer + 1;
  alpha = (char)(0x80 / ev_disp2d_ctrl.fade_time) * (char)ev_disp2d_ctrl.timer;
  ev_disp2d_ctrl.timer = iVar1;
  if (ev_disp2d_ctrl.fade_time <= iVar1) {
    ev_disp2d_ctrl.anim_step = '\x02';
  }
LAB_0017d4f0:
  if (ev_disp2d_ctrl.win_flg != '\0') {
    DrawCmnWindow__FUiffffUcUc(0xa0,176.0,45.0,DAT_003ee248,262.0,alpha,'l');
  }
  CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&ds,&ev_disp2d_ctrl.sprt);
  ds.tex0 = 0x200598866932abc0;
  ds.alpha = alpha;
  DispSprD__FP9DISP_SPRT(&ds);
  return;
}

static void EvDisp2DDataMakePkt() {
	static char __FUNCTION__[20] = {
		/* [0] = */ 69,
		/* [1] = */ 118,
		/* [2] = */ 68,
		/* [3] = */ 105,
		/* [4] = */ 115,
		/* [5] = */ 112,
		/* [6] = */ 50,
		/* [7] = */ 68,
		/* [8] = */ 68,
		/* [9] = */ 97,
		/* [10] = */ 116,
		/* [11] = */ 97,
		/* [12] = */ 77,
		/* [13] = */ 97,
		/* [14] = */ 107,
		/* [15] = */ 101,
		/* [16] = */ 80,
		/* [17] = */ 107,
		/* [18] = */ 116,
		/* [19] = */ 0
	};
	
  TIM2_PICTUREHEADER *pTVar1;
  
  if (ev_disp2d_addr == (void *)0x0) {
    SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
    PrintAssertReal("Error! %s");
  }
  pTVar1 = Tim2GetPictureHeader__FPvi(ev_disp2d_addr,0);
  pTVar1->GsTex0 = 0x200598866932abc0;
  MakeTim2Direct__FPUiii((uint *)ev_disp2d_addr,0x2bc0,0);
  MakeClutDirect__FPUiii((uint *)ev_disp2d_addr,0x2cc4,0);
  return;
}

void EvDisp2DEndRelease() {
  if (ev_disp2d_addr != (void *)0x0) {
    mem_utilFreeMem__FPv(ev_disp2d_addr);
    ev_disp2d_addr = (void *)0x0;
  }
  memset(&ev_disp2d_ctrl,0,0x30);
  return;
}

void EvDisp2DStartReq(int x, int y, int file_label, int fade_in_time, u_char win_flg, int base_label) {
  SPRT_DAT *pSVar1;
  SPRT_DAT *pSVar2;
  
  if (ev_disp2d_ctrl.disp_flg == '\x01') {
    printf("<<<<<<<<<WARNING FILE[%s] LINE[%d]>>>>>>>>>>\n");
    PrintWarningReal("Error!! EvDisp2DStartReq()");
    return;
  }
  ev_disp2d_ctrl.disp_flg = '\x01';
  ev_disp2d_ctrl.win_flg = win_flg;
  ev_disp2d_ctrl.fade_time = fade_in_time;
  ev_disp2d_ctrl.file_label = file_label;
  ev_disp2d_ctrl.step = '\0';
  ev_disp2d_ctrl.anim_step = '\0';
  pSVar1 = ev_disp2d_dat + base_label;
  pSVar2 = ev_disp2d_dat + base_label;
  ev_disp2d_ctrl.sprt.pri = pSVar1->pri;
  ev_disp2d_ctrl.sprt.alpha = pSVar1->alpha;
  ev_disp2d_ctrl.sprt.flip = pSVar1->flip;
  ev_disp2d_ctrl.sprt.bln = pSVar1->bln;
  ev_disp2d_ctrl.sprt._31_1_ = pSVar1->field_0x1f;
  ev_disp2d_ctrl.sprt.tex0 = ev_disp2d_dat[base_label].tex0;
  ev_disp2d_ctrl.sprt.u = pSVar2->u;
  ev_disp2d_ctrl.sprt.v = pSVar2->v;
  ev_disp2d_ctrl.sprt.w = pSVar2->w;
  ev_disp2d_ctrl.sprt.h = pSVar2->h;
  ev_disp2d_ctrl.sprt.y = y;
  ev_disp2d_ctrl.sprt.x = x;
  ev_disp2d_ctrl.timer = 0;
  return;
}

void EvDisp2DEndReq(int fade_out_time) {
	static char __FUNCTION__[15] = {
		/* [0] = */ 69,
		/* [1] = */ 118,
		/* [2] = */ 68,
		/* [3] = */ 105,
		/* [4] = */ 115,
		/* [5] = */ 112,
		/* [6] = */ 50,
		/* [7] = */ 68,
		/* [8] = */ 69,
		/* [9] = */ 110,
		/* [10] = */ 100,
		/* [11] = */ 82,
		/* [12] = */ 101,
		/* [13] = */ 113,
		/* [14] = */ 0
	};
	
  if (fade_out_time < 1) {
    EvDisp2DEndRelease__Fv();
    return;
  }
  if (ev_disp2d_ctrl.disp_flg == '\x01') {
    ev_disp2d_ctrl.anim_step = '\x03';
    ev_disp2d_ctrl.fade_time = fade_out_time;
    ev_disp2d_ctrl.timer = fade_out_time;
  }
  else {
    printf("<<<<<<<<<WARNING FILE[%s] LINE[%d]>>>>>>>>>>\n");
    PrintWarningReal("Warning! %s");
    EvDisp2DEndRelease__Fv();
  }
  return;
}

static void EvChapterDispMain() {
  int iVar1;
  
  if (ev_chapter_disp.step == '\0') {
    EvChapterDataLoadReq__Fv();
    ev_chapter_disp.step = '\x01';
  }
  if ((ev_chapter_disp.step == '\x01') && (iVar1 = EvChapterDataLoadWait__Fv(), iVar1 != 0)) {
    ev_chapter_disp.step = '\x02';
  }
  if (ev_chapter_disp.step == '\x02') {
    EvChapterDispExe__Fv();
  }
  if (ev_chapter_disp.step == '\x03') {
    EvChapterDispEndRelease__Fv();
  }
  return;
}

static void EvChapterDataLoadReq() {
	static char __FUNCTION__[21] = {
		/* [0] = */ 69,
		/* [1] = */ 118,
		/* [2] = */ 67,
		/* [3] = */ 104,
		/* [4] = */ 97,
		/* [5] = */ 112,
		/* [6] = */ 116,
		/* [7] = */ 101,
		/* [8] = */ 114,
		/* [9] = */ 68,
		/* [10] = */ 97,
		/* [11] = */ 116,
		/* [12] = */ 97,
		/* [13] = */ 76,
		/* [14] = */ 111,
		/* [15] = */ 97,
		/* [16] = */ 100,
		/* [17] = */ 82,
		/* [18] = */ 101,
		/* [19] = */ 113,
		/* [20] = */ 0
	};
	
  uchar uVar1;
  uint uVar2;
  
  if (chapter_load_addr == (void *)0x0) {
    uVar1 = GetLanguage__Fv();
    uVar2 = (uint)ev_chapter_disp.chapter_num;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Zi_UiUi_PX01(ev_chapter_disp.chapter_num,0xb);
    uVar2 = GetFileSize(*(int *)((int)chapter_tim_file.field0_0x0.m_aData + uVar2 * 4) +
                        (int)(char)uVar1);
    chapter_load_addr = mem_utilGetMem__Fi(uVar2);
  }
  else {
                    /* end of inlined section */
    SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
    PrintAssertReal("Error!! EvChapterDataLoadReq()");
  }
  uVar1 = GetLanguage__Fv();
  uVar2 = (uint)ev_chapter_disp.chapter_num;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  _fixed_array_verifyrange__H1Zi_UiUi_PX01(ev_chapter_disp.chapter_num,0xb);
  FileLoadReqEE(*(int *)((int)chapter_tim_file.field0_0x0.m_aData + uVar2 * 4) + (int)(char)uVar1,
                chapter_load_addr,3,(undefined1 *)0x0,(void *)0x0);
  return;
}

static int EvChapterDataLoadWait() {
  uchar uVar1;
  int iVar2;
  uint uVar3;
  
  uVar1 = GetLanguage__Fv();
  uVar3 = (uint)ev_chapter_disp.chapter_num;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  _fixed_array_verifyrange__H1Zi_UiUi_PX01(ev_chapter_disp.chapter_num,0xb);
  iVar2 = FileLoadIsEnd2(*(int *)((int)chapter_tim_file.field0_0x0.m_aData + uVar3 * 4) +
                         (int)(char)uVar1,chapter_load_addr);
                    /* end of inlined section */
  return (int)(iVar2 != 0);
}

static void EvChapterDispExe() {
	DISP_SPRT ds;
	u_char alpha;
	
  int iVar1;
  uchar uVar2;
  DISP_SPRT ds;
  
  uVar2 = 0x80;
  EvChapterDataMakePkt__Fv();
  memset(&ds,0,0x88);
  if (ev_chapter_disp.anim_step != '\x01') {
    if (1 < ev_chapter_disp.anim_step) {
      if (ev_chapter_disp.anim_step == '\x02') {
        ev_chapter_disp.timer = ev_chapter_disp.timer + 1;
        if (0x59 < ev_chapter_disp.timer) {
          ev_chapter_disp.timer = 0x1e;
          ev_chapter_disp.anim_step = '\x03';
        }
      }
      else {
        uVar2 = 0x80;
        if (ev_chapter_disp.anim_step == '\x03') {
          iVar1 = ev_chapter_disp.timer + -1;
          uVar2 = (uchar)((ev_chapter_disp.timer & 0x3fU) << 2);
          ev_chapter_disp.timer = iVar1;
          if (iVar1 < 1) {
            ev_chapter_disp.step = ev_chapter_disp.anim_step;
          }
        }
      }
      goto LAB_0017da88;
    }
    uVar2 = 0x80;
    if (ev_chapter_disp.anim_step != '\0') goto LAB_0017da88;
    ev_chapter_disp.anim_step = '\x01';
    ev_chapter_disp.timer = 0;
  }
  iVar1 = ev_chapter_disp.timer + 1;
  uVar2 = (char)ev_chapter_disp.timer * '\f';
  ev_chapter_disp.timer = iVar1;
  if (9 < iVar1) {
    ev_chapter_disp.timer = 0;
    ev_chapter_disp.anim_step = '\x02';
  }
LAB_0017da88:
  CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&ds,ev_chapter_dat);
  ds.tex0 = 0x200598866932abc0;
  ds.alpha = uVar2;
  DispSprD__FP9DISP_SPRT(&ds);
  CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&ds,ev_chapter_dat + 1);
  ds.tex0 = 0x200598866932abc0;
  ds.test = 0x30003;
  ds.alpha = uVar2;
  DispSprD__FP9DISP_SPRT(&ds);
  return;
}

static void EvChapterDataMakePkt() {
	static char __FUNCTION__[21] = {
		/* [0] = */ 69,
		/* [1] = */ 118,
		/* [2] = */ 67,
		/* [3] = */ 104,
		/* [4] = */ 97,
		/* [5] = */ 112,
		/* [6] = */ 116,
		/* [7] = */ 101,
		/* [8] = */ 114,
		/* [9] = */ 68,
		/* [10] = */ 97,
		/* [11] = */ 116,
		/* [12] = */ 97,
		/* [13] = */ 77,
		/* [14] = */ 97,
		/* [15] = */ 107,
		/* [16] = */ 101,
		/* [17] = */ 80,
		/* [18] = */ 107,
		/* [19] = */ 116,
		/* [20] = */ 0
	};
	
  TIM2_PICTUREHEADER *pTVar1;
  
  if (chapter_load_addr == (void *)0x0) {
    SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
    PrintAssertReal("Error! %s");
  }
  pTVar1 = Tim2GetPictureHeader__FPvi(chapter_load_addr,0);
  pTVar1->GsTex0 = 0x200598826932abc0;
  MakeTim2Direct__FPUiii((uint *)chapter_load_addr,0x2bc0,0);
  MakeClutDirect__FPUiii((uint *)chapter_load_addr,0x2cc4,0);
  return;
}

void EvChapterDispEndRelease() {
  if (chapter_load_addr != (void *)0x0) {
    mem_utilFreeMem__FPv(chapter_load_addr);
    chapter_load_addr = (void *)0x0;
  }
  memset(&ev_chapter_disp,0,8);
  return;
}

void EvChapterDispStartReq(u_char chapter_num) {
	static char __FUNCTION__[22] = {
		/* [0] = */ 69,
		/* [1] = */ 118,
		/* [2] = */ 67,
		/* [3] = */ 104,
		/* [4] = */ 97,
		/* [5] = */ 112,
		/* [6] = */ 116,
		/* [7] = */ 101,
		/* [8] = */ 114,
		/* [9] = */ 68,
		/* [10] = */ 105,
		/* [11] = */ 115,
		/* [12] = */ 112,
		/* [13] = */ 83,
		/* [14] = */ 116,
		/* [15] = */ 97,
		/* [16] = */ 114,
		/* [17] = */ 116,
		/* [18] = */ 82,
		/* [19] = */ 101,
		/* [20] = */ 113,
		/* [21] = */ 0
	};
	
  if (10 < chapter_num) {
    SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
    PrintAssertReal("Error! %s");
  }
  if (ev_chapter_disp.disp_flg == '\x01') {
    SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
    PrintAssertReal("ERROR!! EvChapterDispStartReq()\n");
  }
  ev_chapter_disp.chapter_num = chapter_num;
  ev_chapter_disp.disp_flg = '\x01';
  ev_chapter_disp.timer = 0;
  ev_chapter_disp.step = '\0';
  ev_chapter_disp.anim_step = '\0';
  return;
}

int EvChapterIsDisp() {
  return (int)ev_chapter_disp.disp_flg;
}

static void EvItemNameDispMain() {
	static char __FUNCTION__[19] = {
		/* [0] = */ 69,
		/* [1] = */ 118,
		/* [2] = */ 73,
		/* [3] = */ 116,
		/* [4] = */ 101,
		/* [5] = */ 109,
		/* [6] = */ 78,
		/* [7] = */ 97,
		/* [8] = */ 109,
		/* [9] = */ 101,
		/* [10] = */ 68,
		/* [11] = */ 105,
		/* [12] = */ 115,
		/* [13] = */ 112,
		/* [14] = */ 77,
		/* [15] = */ 97,
		/* [16] = */ 105,
		/* [17] = */ 110,
		/* [18] = */ 0
	};
	u_char alpha;
	int msg_length;
	
  uchar *msg_addr;
  int iVar1;
  int iVar2;
  uint alpha;
  
  alpha = 0;
  msg_addr = GetMsgDataAddr__Fii(ev_item_name_disp.msg_type,ev_item_name_disp.msg_id);
  iVar1 = GetMsgLineLength__FPUcPPUc(msg_addr,(uchar **)0x0);
  if (ev_item_name_disp.anim_step == '\x01') {
LAB_0017dd34:
    if (ev_item_name_disp.fade_time == 0) {
      trap(7);
    }
    iVar2 = ev_item_name_disp.timer + 1;
    alpha = (0x80 / ev_item_name_disp.fade_time) * ev_item_name_disp.timer & 0xff;
    ev_item_name_disp.timer = iVar2;
    if (ev_item_name_disp.fade_time <= iVar2) {
      ev_item_name_disp.anim_step = '\x02';
    }
  }
  else {
    if (ev_item_name_disp.anim_step < 2) {
      if (ev_item_name_disp.anim_step == '\0') {
        ev_item_name_disp.anim_step = '\x01';
        ev_item_name_disp.timer = 0;
        goto LAB_0017dd34;
      }
    }
    else {
      if (ev_item_name_disp.anim_step == '\x02') {
        alpha = 0x80;
        goto LAB_0017ddf0;
      }
      if (ev_item_name_disp.anim_step == '\x03') {
        if (ev_item_name_disp.fade_time == 0) {
          trap(7);
        }
        iVar2 = ev_item_name_disp.timer + 1;
        alpha = -((0x80 / ev_item_name_disp.fade_time) * ev_item_name_disp.timer) - 0x80U & 0xff;
        ev_item_name_disp.timer = iVar2;
        if (ev_item_name_disp.fade_time <= iVar2) {
          ev_item_name_disp.disp_flg = '\0';
          ev_item_name_disp.timer = 0;
        }
        goto LAB_0017ddf0;
      }
    }
    SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
    PrintAssertReal("Error! EvItemNameDispMain");
  }
LAB_0017ddf0:
  DrawCmnTwoLineWindow__FUiffffUcUc
            (0,(float)(300 - iVar1 / 2),DAT_003ee24c,(float)(iVar1 + 0x28),60.0,(uchar)alpha,0x80);
  PrintMsg_Arrange__Fiiiiiiiiii
            (ev_item_name_disp.msg_type,ev_item_name_disp.msg_id,0x140,0x130,1,alpha,0,0,0,2);
  return;
}

void EvItemNameDispStartReq(int msg_type, int msg_id, int fade_in_time) {
	static char __FUNCTION__[23] = {
		/* [0] = */ 69,
		/* [1] = */ 118,
		/* [2] = */ 73,
		/* [3] = */ 116,
		/* [4] = */ 101,
		/* [5] = */ 109,
		/* [6] = */ 78,
		/* [7] = */ 97,
		/* [8] = */ 109,
		/* [9] = */ 101,
		/* [10] = */ 68,
		/* [11] = */ 105,
		/* [12] = */ 115,
		/* [13] = */ 112,
		/* [14] = */ 83,
		/* [15] = */ 116,
		/* [16] = */ 97,
		/* [17] = */ 114,
		/* [18] = */ 116,
		/* [19] = */ 82,
		/* [20] = */ 101,
		/* [21] = */ 113,
		/* [22] = */ 0
	};
	
  int iVar1;
  
  if (0x52 < (uint)msg_type) {
    SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
    PrintAssertReal("Error! %s msg_type %d");
  }
  if ((msg_id < 0) || (iVar1 = GetMsgIDNumMax__Fi(msg_type), iVar1 <= msg_id)) {
    SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
    PrintAssertReal("Error! %s msg_id %d");
  }
  if (ev_item_name_disp.disp_flg == '\x01') {
    printf("<<<<<<<<<WARNING FILE[%s] LINE[%d]>>>>>>>>>>\n");
    PrintWarningReal("ERROR!! EvItemNameDispStartReq");
  }
  ev_item_name_disp.msg_type = msg_type;
  ev_item_name_disp.msg_id = msg_id;
  ev_item_name_disp.fade_time = fade_in_time;
  ev_item_name_disp.disp_flg = '\x01';
  ev_item_name_disp.timer = 0;
  ev_item_name_disp.anim_step = '\0';
  return;
}

void EvItemNameDispEndReq(int fade_out_time) {
  if (fade_out_time < 1) {
    ev_item_name_disp.disp_flg = '\0';
    return;
  }
  ev_item_name_disp.anim_step = '\x03';
  ev_item_name_disp.fade_time = fade_out_time;
  ev_item_name_disp.timer = 0;
  return;
}

int* int * _fixed_array_verifyrange<int>(size_t v, size_t _max) {
  g3ddbgAssert__FbPCce(false,str_646);
  return (int *)v;
}
