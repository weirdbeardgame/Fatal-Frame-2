// STATUS: NOT STARTED

#include "menu_radio.h"

typedef struct {
	u_char sub_step;
	u_char cross_fade_flg;
	MENU_REF_CTRL ref_ctrl;
	int stream_id;
} MENU_RADIO_CTRL;

typedef struct {
	char anim_step;
	char anim_timer;
	char crystal_anim_step;
	char crystal_anim_timer;
	char crystal_alpha;
	char crystal_flare_alpha;
	u_char rgb;
	char scroll_timer;
	int title_timer;
} MENU_RADIO_DISP;

typedef struct {
	int crystal_id;
	int state;
} DISP_CRYSTAL_DATA;

struct fixed_array_base<DISP_CRYSTAL_DATA,40,DISP_CRYSTAL_DATA[40]> {
protected:
	DISP_CRYSTAL_DATA m_aData[40];
	
public:
	fixed_array_base<DISP_CRYSTAL_DATA,40,DISP_CRYSTAL_DATA[40]>& operator=();
	fixed_array_base();
protected:
	fixed_array_base();
public:
	DISP_CRYSTAL_DATA& operator[]();
	DISP_CRYSTAL_DATA& operator[]();
	DISP_CRYSTAL_DATA* data();
	DISP_CRYSTAL_DATA* begin();
	DISP_CRYSTAL_DATA* end();
	void fill();
	size_t size();
	bool empty();
};

struct fixed_array<DISP_CRYSTAL_DATA,40> : fixed_array_base<DISP_CRYSTAL_DATA,40,DISP_CRYSTAL_DATA[40]> {
};

static void *menu_radio_tex_addr = NULL;
static int menu_radio_stream_id = -1;
static u_char crystal_title_debug_flg = 0;
static fixed_array<DISP_CRYSTAL_DATA,40> disp_crystal_data;
unsigned char DISP_CRYSTAL_DATA type_info node[8];
static MENU_RADIO_CTRL menu_radio_ctrl;
static MENU_RADIO_DISP menu_radio_disp;

static void _fixed_array_assert(char *strType, size_t v0, size_t v1) {
	static char *str = 0x3be940;
	
  g3ddbgAssert__FbPCce(false,str_849);
  return (type_info *)v;
}

static void** void * * _fixed_array_verifyrange<void *>(size_t v, size_t _max) {
  if (_max <= v) {
    __tf17DISP_CRYSTAL_DATA(0x3f2ef8,_max);
  }
  return (void **)0x0;
}

static char** char * * _fixed_array_verifyrange<char *>(size_t v, size_t _max) {
  if (_max <= v) {
    __tf17DISP_CRYSTAL_DATA(0x3f2f00,_max);
  }
  return (char **)0x0;
}

static unsigned int** unsigned int * * _fixed_array_verifyrange<unsigned int *>(size_t v, size_t _max) {
  if (_max <= v) {
    __tf17DISP_CRYSTAL_DATA(0x3be988,_max);
  }
  return (uint **)0x0;
}

static void MenuRadioInit() {
  menu_wrk.cursor = 0;
  MenuRadioCtrlInit__Fv();
  menu_radio_stream_id = -1;
  memset(&disp_crystal_data,0,0x140);
  MenuCrossFadeInit__Fv();
  if (menu_radio_tex_addr == (void *)0x0) {
    printf("<<<<<<<<<WARNING FILE[%s] LINE[%d]>>>>>>>>>>\n");
    PrintWarningReal("Menu Radio Tex Back reading failure\n");
    MenuRadioTexLoadReq__Fv();
  }
  crystal_title_debug_flg = '\0';
  return;
}

static void MenuRadioCtrlInit() {
  int data_num;
  
  menu_radio_ctrl.sub_step = '\0';
  menu_radio_ctrl.cross_fade_flg = '\0';
  data_num = GetPlyrHaveCrystalNum__Fv();
  MenuRefCtrlInit__FP13MENU_REF_CTRLi(&menu_radio_ctrl.ref_ctrl,data_num);
  return;
}

void GetMenuRadioTexMem() {
  uchar uVar1;
  uint size;
  
  if (menu_radio_tex_addr != (void *)0x0) {
    LiberateMenuRadioTexMem__Fv();
  }
  if (menu_radio_tex_addr == (void *)0x0) {
    uVar1 = GetLanguage__Fv();
    size = GetFileSize((char)uVar1 + 0x47);
    menu_radio_tex_addr = mem_utilGetMem__Fi(size);
  }
  return;
}

void MenuRadioTexLoadReq() {
  uchar uVar1;
  
  if (menu_radio_tex_addr == (void *)0x0) {
    GetMenuRadioTexMem__Fv();
  }
  uVar1 = GetLanguage__Fv();
  FileLoadReqEE((char)uVar1 + 0x47,menu_radio_tex_addr,2,(undefined1 *)0x0,(void *)0x0);
  return;
}

static int MenuRadioTexLoadWait() {
  uchar uVar1;
  int iVar2;
  
  uVar1 = GetLanguage__Fv();
  iVar2 = FileLoadIsEnd2((char)uVar1 + 0x47,menu_radio_tex_addr);
  return (int)(iVar2 != 0);
}

static void MenuRadioSetDispData() {
	int i;
	int count;
	int state;
	
  char cVar1;
  int crystal_label;
  fixed_array<DISP_CRYSTAL_DATA,40> *pfVar2;
  int iVar3;
  int iVar4;
  
  crystal_label = 0;
  pfVar2 = &disp_crystal_data;
  iVar3 = 0;
  do {
    cVar1 = GetPlyrCrystalState__Fi(crystal_label);
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* end of inlined section */
    iVar4 = iVar3;
    if (cVar1 != '\0') {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
      _fixed_array_verifyrange__H1Z17DISP_CRYSTAL_DATA_UiUi_PX01(iVar3,0x28);
      ((fixed_array_base<DISP_CRYSTAL_DATA,40,DISP_CRYSTAL_DATA[40]> *)
      &((DISP_CRYSTAL_DATA *)pfVar2)->crystal_id)->m_aData[0].crystal_id = crystal_label;
                    /* end of inlined section */
      iVar4 = iVar3 + 1;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
      _fixed_array_verifyrange__H1Z17DISP_CRYSTAL_DATA_UiUi_PX01(iVar3,0x28);
      ((DISP_CRYSTAL_DATA *)pfVar2)->state = (int)cVar1;
                    /* end of inlined section */
      pfVar2 = (fixed_array<DISP_CRYSTAL_DATA,40> *)((int)pfVar2 + 8);
    }
    crystal_label = crystal_label + 1;
    iVar3 = iVar4;
  } while (crystal_label < 0x28);
  return;
}

void MenuRadio() {
  int iVar1;
  
  if (menu_wrk.step == '\0') {
    MenuRadioInit__Fv();
    MenuRadioSetDispData__Fv();
    menu_wrk.step = '\x01';
  }
  if ((menu_wrk.step == '\x01') && (iVar1 = MenuRadioTexLoadWait__Fv(), iVar1 != 0)) {
    MenuRadioDispInit__Fv();
    iVar1 = menu_radio_ctrl.ref_ctrl.data_pos;
    menu_wrk.step = '\x02';
    if (menu_radio_ctrl.ref_ctrl.data_num == 0) {
      menu_radio_ctrl.sub_step = '\x02';
    }
    else {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
      _fixed_array_verifyrange__H1Z17DISP_CRYSTAL_DATA_UiUi_PX01
                (menu_radio_ctrl.ref_ctrl.data_pos,0x28);
      MenuCrossFadeInStart__Fii
                ((uint)menu_radio_ctrl.cross_fade_flg,
                 disp_crystal_data.field0_0x0.m_aData[iVar1].crystal_id + 0xf85);
                    /* end of inlined section */
      menu_radio_ctrl.sub_step = '\0';
    }
  }
  if (menu_wrk.step != '\x02') goto LAB_00204430;
  if (menu_radio_ctrl.sub_step == '\x01') {
    MenuRadioCrystalPlayPad__Fv();
    MenuRadioCrystalTitleDebugPad__Fv();
  }
  else if (menu_radio_ctrl.sub_step < 2) {
    if (menu_radio_ctrl.sub_step == '\0') {
      MenuRadioPad__Fv();
    }
    else {
LAB_002043f8:
      printf("<<<<<<<<<WARNING FILE[%s] LINE[%d]>>>>>>>>>>\n");
      PrintWarningReal("Error!! MenuRadio()");
    }
  }
  else {
    if (menu_radio_ctrl.sub_step != '\x02') goto LAB_002043f8;
    MenuRadioNoHaveCrystalPad__Fv();
  }
  if (menu_radio_ctrl.sub_step != '\x02') {
    MenuCmnCrossFade__Fv();
  }
LAB_00204430:
  if ((menu_wrk.step == '\x03') && (menu_radio_disp.anim_step == '\x04')) {
    MenuRadioStreamStop__Fv();
    LiberateMenuRadioTexMem__Fv();
    SetNextMenuStep__Fi(8);
    LiberateAllMenuCrossFadeTexMem__Fv();
  }
  return;
}

static void MenuRadioPad() {
	short int disp_num;
	char load_flg;
	int play_stream_data;
	
  bool bVar1;
  int iVar2;
  int iVar3;
  DISP_CRYSTAL_DATA *pDVar4;
  long lVar5;
  
  bVar1 = false;
  lVar5 = (long)(short)menu_radio_ctrl.ref_ctrl.data_num;
  if (6 < (long)(short)menu_radio_ctrl.ref_ctrl.data_num) {
    lVar5 = 6;
  }
  iVar3 = (int)lVar5;
  if (((pad[0].rpt & 0x1000U) == 0) && (iVar2 = GetPadAnalogRpt__Fi(0), iVar2 == 0)) {
    if (((pad[0].rpt & 0x4000U) == 0) && (iVar2 = GetPadAnalogRpt__Fi(1), iVar2 == 0)) {
      if (**paddat == 1) {
        iVar3 = CheckCrossFadeDisp__Fi((uint)menu_radio_ctrl.cross_fade_flg);
        if (iVar3 != 0) {
          pDVar4 = disp_crystal_data.field0_0x0.m_aData + menu_radio_ctrl.ref_ctrl.data_pos;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
          _fixed_array_verifyrange__H1Z17DISP_CRYSTAL_DATA_UiUi_PX01
                    (menu_radio_ctrl.ref_ctrl.data_pos,0x28);
          HearCrystal__Fi(pDVar4->crystal_id);
          pDVar4 = disp_crystal_data.field0_0x0.m_aData + menu_radio_ctrl.ref_ctrl.data_pos;
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
          _fixed_array_verifyrange__H1Z17DISP_CRYSTAL_DATA_UiUi_PX01
                    (menu_radio_ctrl.ref_ctrl.data_pos,0x28);
          iVar3 = GetCrystalStreamID__Fi(pDVar4->crystal_id);
                    /* end of inlined section */
          MenuRadioStreamStop__Fv();
          menu_radio_stream_id =
               StreamAutoPlay(iVar3,iVar3 + -1,0xe,0,0,0x3200,0,(_SND_3D_SET *)0x0);
          menu_radio_disp.crystal_anim_timer = '\0';
          menu_radio_disp.title_timer = 0;
          menu_radio_disp.crystal_anim_step = '\0';
          printf("\n\n**********  Crystal Title Data  **********\n");
          printf(" start,    end\n");
          menu_radio_ctrl.sub_step = '\x01';
        }
        goto LAB_00204700;
      }
      if (*paddat[1] == 1) {
        SystemBankPlay__FiiiiP11_SND_3D_SETii(1,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
        menu_wrk.step = '\x03';
        menu_radio_disp.anim_step = '\x03';
        menu_radio_disp.anim_timer = '\0';
        goto LAB_00204700;
      }
      if ((pad[0].one & 4U) == 0) {
        if (((pad[0].one & 8U) != 0) &&
           (iVar3 = MenuRefMovePageDown__FP13MENU_REF_CTRLPiii
                              (&menu_radio_ctrl.ref_ctrl,&menu_wrk.cursor,iVar3,6), iVar3 != 0)) {
          bVar1 = true;
          SystemBankPlay__FiiiiP11_SND_3D_SETii(0,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
        }
        goto LAB_00204700;
      }
      iVar3 = MenuRefMovePageUp__FP13MENU_REF_CTRLPiii
                        (&menu_radio_ctrl.ref_ctrl,&menu_wrk.cursor,iVar3,6);
    }
    else {
      iVar3 = MenuRefMovePadLdown__FP13MENU_REF_CTRLPiii
                        (&menu_radio_ctrl.ref_ctrl,&menu_wrk.cursor,iVar3,6);
    }
  }
  else {
    iVar3 = MenuRefMovePadLup__FP13MENU_REF_CTRLPiii
                      (&menu_radio_ctrl.ref_ctrl,&menu_wrk.cursor,iVar3,6);
  }
  if (iVar3 != 0) {
    bVar1 = true;
    SystemBankPlay__FiiiiP11_SND_3D_SETii(0,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
  }
LAB_00204700:
  if (bVar1) {
    MenuCrossFadeOutStart__Fi((uint)menu_radio_ctrl.cross_fade_flg);
    iVar3 = menu_radio_ctrl.ref_ctrl.data_pos;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
    menu_radio_ctrl.cross_fade_flg = menu_radio_ctrl.cross_fade_flg ^ 1;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Z17DISP_CRYSTAL_DATA_UiUi_PX01
              (menu_radio_ctrl.ref_ctrl.data_pos,0x28);
    MenuCrossFadeInStart__Fii
              ((uint)menu_radio_ctrl.cross_fade_flg,
               disp_crystal_data.field0_0x0.m_aData[iVar3].crystal_id + 0xf85);
                    /* end of inlined section */
    menu_radio_disp.crystal_anim_step = '\x04';
  }
  return;
}

static void MenuRadioCrystalPlayPad() {
  int iVar1;
  
  if ((**paddat == 1) || (*paddat[1] == 1)) {
    SystemBankPlay__FiiiiP11_SND_3D_SETii(1,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
    MenuRadioStreamStop__Fv();
    menu_radio_disp.crystal_anim_step = '\x03';
    menu_radio_disp.crystal_anim_timer = '\0';
    menu_radio_ctrl.sub_step = '\0';
  }
  else {
    iVar1 = StreamAutoIsPlaying(menu_radio_stream_id);
    if (iVar1 == 0) {
      menu_radio_stream_id = -1;
      menu_radio_disp.crystal_anim_step = '\x03';
      menu_radio_disp.crystal_anim_timer = '\0';
      menu_radio_ctrl.sub_step = '\0';
    }
  }
  return;
}

static void MenuRadioNoHaveCrystalPad() {
  if (*paddat[1] == 1) {
    SystemBankPlay__FiiiiP11_SND_3D_SETii(1,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
    menu_wrk.step = '\x03';
    menu_radio_disp.anim_step = '\x03';
    menu_radio_disp.anim_timer = '\0';
  }
  return;
}

void MenuRadioStreamStop() {
  if (menu_radio_stream_id != -1) {
    StreamAutoFadeOut(menu_radio_stream_id,3);
    menu_radio_stream_id = -1;
  }
  return;
}

void LiberateMenuRadioTexMem() {
  if (menu_radio_tex_addr != (void *)0x0) {
    mem_utilFreeMem__FPv(menu_radio_tex_addr);
    menu_radio_tex_addr = (void *)0x0;
  }
  return;
}

void MenuRadioTexLoadCancel() {
  uchar uVar1;
  int iVar2;
  
  iVar2 = MenuRadioTexLoadWait__Fv();
  if (iVar2 == 0) {
    uVar1 = GetLanguage__Fv();
    FileLoadCancel2((char)uVar1 + 0x47,menu_radio_tex_addr,(undefined1 *)0x0,(void *)0x0);
  }
  return;
}

static void MenuRadioDispInit() {
  menu_radio_disp.crystal_anim_step = '\x04';
  menu_radio_disp.crystal_alpha = 'Y';
  menu_radio_disp.rgb = '@';
  menu_radio_disp.title_timer = 0;
  menu_radio_disp.anim_step = '\0';
  menu_radio_disp.anim_timer = '\0';
  menu_radio_disp.crystal_anim_timer = '\0';
  menu_radio_disp.crystal_flare_alpha = '\0';
  menu_radio_disp.scroll_timer = '\0';
  return;
}

void MenuRadioDisp() {
	u_char alpha;
	
  uchar alpha;
  
  alpha = '\0';
  if (((byte)(menu_wrk.step - 2) < 2) &&
     (Zero2Anim2D_CsrAnimCtrl__FPcPUc(&menu_radio_disp.scroll_timer,&menu_radio_disp.rgb),
     menu_radio_disp.anim_step != '\x04')) {
    MenuInOutAnimCtrl__FPcT0PUc(&menu_radio_disp.anim_step,&menu_radio_disp.anim_timer,&alpha);
    MenuRadioBgDisp__FiiUc(0,0,alpha);
    MenuRadioTitleDisp__FiiUc(0,0,alpha);
    if (menu_radio_ctrl.sub_step == '\x01') {
      MenuRadioCrystalPlayDisp__FiiUc(0,0,alpha);
    }
    else {
      if (menu_radio_ctrl.sub_step < 2) {
        if (menu_radio_ctrl.sub_step == '\0') {
          MenuRadioCrystalSelDisp__FiiUc(0,0,alpha);
          return;
        }
      }
      else if (menu_radio_ctrl.sub_step == '\x02') {
        MenuRadioNoHaveCrystalDisp__FUc(alpha);
        return;
      }
      printf("<<<<<<<<<WARNING FILE[%s] LINE[%d]>>>>>>>>>>\n");
      PrintWarningReal("Error!! MenuRadioDisp()");
    }
  }
  return;
}

static void MenuRadioBgDisp(int off_x, int off_y, u_char alpha) {
	int i;
	DISP_SPRT bg_ds;
	
  SPRT_DAT *pSVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  DISP_SPRT bg_ds;
  
  fVar4 = (float)off_x;
  fVar5 = (float)off_y;
  PK2SendVram__FUiiii((uint)menu_radio_tex_addr,-1,-1,0);
  CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&bg_ds,menu_radio_tex);
  iVar2 = 2;
  pSVar1 = menu_radio_tex;
  bg_ds.x = bg_ds.x + fVar4;
  bg_ds.y = bg_ds.y + fVar5;
  bg_ds.alpha = (uchar)((int)((uint)bg_ds.alpha * (uint)alpha) >> 7);
  DispSprD__FP9DISP_SPRT(&bg_ds);
  do {
    pSVar1 = pSVar1 + 1;
    CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&bg_ds,pSVar1);
    iVar2 = iVar2 + -1;
    bg_ds.x = bg_ds.x + fVar4;
    bg_ds.y = bg_ds.y + fVar5;
    bg_ds.alpha = (uchar)((int)((uint)bg_ds.alpha * (uint)alpha) >> 7);
    DispSprD__FP9DISP_SPRT(&bg_ds);
  } while (-1 < iVar2);
  iVar2 = 1;
  pSVar1 = menu_radio_tex + 4;
  do {
    CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&bg_ds,pSVar1);
    bg_ds.crx = bg_ds.x + fVar4;
    if ((int)bg_ds.w < 0) {
      fVar3 = (float)(bg_ds.w & 1 | bg_ds.w >> 1);
      fVar3 = fVar3 + fVar3;
    }
    else {
      fVar3 = (float)bg_ds.w;
    }
    iVar2 = iVar2 + -1;
    bg_ds.rot = 270.0;
    bg_ds.cry = bg_ds.y + fVar3 + fVar5;
    bg_ds.alpha = (uchar)((int)((uint)bg_ds.alpha * (uint)alpha) >> 7);
    bg_ds.x = bg_ds.crx;
    bg_ds.y = bg_ds.cry;
    DispSprD__FP9DISP_SPRT(&bg_ds);
    pSVar1 = pSVar1 + 1;
  } while (-1 < iVar2);
  return;
}

static void MenuRadioTitleDisp(int off_x, int off_y, u_char alpha) {
	int i;
	DISP_SPRT title_ds;
	
  int iVar1;
  SPRT_DAT *pSVar2;
  float fVar3;
  DISP_SPRT title_ds;
  
  fVar3 = (float)off_x;
  iVar1 = 1;
  PK2SendVram__FUiiii(0x19368c0,-1,-1,0);
  pSVar2 = menu_radio_tex + 8;
  do {
    CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&title_ds,pSVar2);
    iVar1 = iVar1 + -1;
    pSVar2 = pSVar2 + 1;
    title_ds.x = title_ds.x + fVar3;
    title_ds.y = title_ds.y + (float)off_y;
    title_ds.alpha = (uchar)((int)((uint)title_ds.alpha * (uint)alpha) >> 7);
    DispSprD__FP9DISP_SPRT(&title_ds);
  } while (-1 < iVar1);
  PK2SendVram__FUiiii((uint)menu_radio_tex_addr,-1,-1,0);
  iVar1 = 1;
  pSVar2 = menu_radio_tex + 6;
  do {
    CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&title_ds,pSVar2);
    iVar1 = iVar1 + -1;
    pSVar2 = pSVar2 + 1;
    title_ds.x = title_ds.x + fVar3;
    title_ds.y = title_ds.y + (float)off_y;
    title_ds.alpha = (uchar)((int)((uint)title_ds.alpha * (uint)alpha) >> 7);
    DispSprD__FP9DISP_SPRT(&title_ds);
  } while (-1 < iVar1);
  return;
}

static void MenuRadioCrystalSelDisp(int off_x, int off_y, u_char alpha) {
  MenuRadioCrystalNameFrameDisp__FiiUc(off_x,off_y,alpha);
  MenuRadioNonHearFrameDisp__FiiUc(off_x,off_y,alpha);
  MenuRadioScrollFrameDisp__FiiUc(off_x,off_y,alpha);
  MenuRadioScrollDisp__FiiUc(off_x,off_y,alpha);
  MenuRadioLoadCrystalDisp__FiiUc(off_x,off_y,alpha);
  MenuRadioMsgWinDisp__FiiUc(off_x,off_y,alpha);
  MenuRadioTopMsgDisp__FiiUc(off_x,off_y,alpha);
  MenuRadioCaptionDisp__FiiUc(off_x,off_y,alpha);
  return;
}

static void MenuRadioCrystalPlayDisp(int off_x, int off_y, u_char alpha) {
	MOVIE_TITLE_DAT *data;
	int tbl_pos;
	
  MOVIE_TITLE_DAT *data;
  int iVar1;
  
  iVar1 = menu_radio_ctrl.ref_ctrl.data_pos;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  _fixed_array_verifyrange__H1Z17DISP_CRYSTAL_DATA_UiUi_PX01(menu_radio_ctrl.ref_ctrl.data_pos,0x28)
  ;
  data = GetCrystalTitleDat__Fi(disp_crystal_data.field0_0x0.m_aData[iVar1].crystal_id);
                    /* end of inlined section */
  iVar1 = GetMovieTitleDatTblPos__FP15MOVIE_TITLE_DATi(data,menu_radio_disp.title_timer);
  MenuRadioCrystalNameFrameDisp__FiiUc(off_x,off_y,alpha);
  MenuRadioNonHearFrameDisp__FiiUc(off_x,off_y,alpha);
  MenuRadioScrollFrameDisp__FiiUc(off_x,off_y,alpha);
  MenuRadioScrollDisp__FiiUc(off_x,off_y,alpha);
  MenuRadioLoadCrystalDisp__FiiUc(off_x,off_y,alpha);
  if (iVar1 != -1) {
    MovieTitleDispMain__Fiiiic(9,data[iVar1].msg_id,0x123,0x10,'\x01');
  }
  MenuRadioMsgWinDisp__FiiUc(off_x,off_y,alpha);
  MenuRadioTopMsgDisp__FiiUc(off_x,off_y,alpha);
  MenuRadioCrystalPlayCaptionDisp__FiiUc(off_x,off_y,alpha);
  MenuRadioCrystalTitleTimerDebugDisp__Fv();
  menu_radio_disp.title_timer = menu_radio_disp.title_timer + 1;
  return;
}

static void MenuRadioNoHaveCrystalDisp(u_char alpha) {
	DISP_STR msg_data;
	MSG_WIN_DAT msg_win;
	
  DISP_STR msg_data;
  MSG_WIN_DAT msg_win;
  
  SetMsgDefData__FP8DISP_STRi(&msg_data,0x36);
  SetMsgWinDefData__FP11MSG_WIN_DATi(&msg_win,0x36);
  msg_data.alpha = (int)alpha;
  DrawCmnWindow__FUiffffUcUc(0,msg_win.x,msg_win.y,msg_win.w,msg_win.h,alpha,'f');
  PrintMsg__Fiiiiiii(0x36,4,msg_data.pos_x,msg_data.pos_y,1,(uint)alpha,0);
  DrawCmnCapGroup_W__FiiUcUi(0xc,0xc,alpha,0);
  return;
}

static void MenuRadioCrystalNameFrameDisp(int off_x, int off_y, u_char alpha) {
	short int disp_num;
	int col_label;
	int i;
	
  int iVar1;
  int y;
  long lVar2;
  int col_label;
  long lVar3;
  int local_5c;
  int local_58;
  
  lVar2 = 0;
  lVar3 = (long)(short)menu_radio_ctrl.ref_ctrl.data_num;
  if (6 < (long)(short)menu_radio_ctrl.ref_ctrl.data_num) {
    lVar3 = 6;
  }
  if (0 < lVar3) {
    local_5c = 0;
    y = off_y + 0x55;
    local_58 = 0;
    do {
      if (lVar2 == menu_wrk.cursor) {
        col_label = 4;
        MenuRadioSelFrameDisp__FffUc
                  ((float)(menu_radio_tex[21].x + off_x),
                   (float)(menu_radio_tex[21].y + local_58 + off_y),alpha);
      }
      else {
        col_label = 3;
        MenuRadioNonSelFrameDisp__FffUc
                  ((float)(menu_radio_tex[18].x + off_x),
                   (float)(menu_radio_tex[18].y + local_5c + off_y),alpha);
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
      }
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
      local_5c = local_5c + 0x23;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
      iVar1 = menu_radio_ctrl.ref_ctrl.disp_start_pos + (int)lVar2;
                    /* end of inlined section */
      lVar2 = (long)((int)lVar2 + 1);
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
      local_58 = local_58 + 0x23;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
      _fixed_array_verifyrange__H1Z17DISP_CRYSTAL_DATA_UiUi_PX01(iVar1,0x28);
      PrintMsg__Fiiiiiii(0x49,disp_crystal_data.field0_0x0.m_aData[iVar1].crystal_id,off_x + 0x40,y,
                         col_label,(uint)alpha,0xa0);
                    /* end of inlined section */
      y = y + 0x23;
    } while (lVar2 < lVar3);
  }
  return;
}

static void MenuRadioNonHearFrameDisp(int off_x, int off_y, u_char alpha) {
	short int disp_num;
	int i;
	
  char cVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  
  lVar4 = 0;
  lVar5 = (long)(short)menu_radio_ctrl.ref_ctrl.data_num;
  if (6 < (long)(short)menu_radio_ctrl.ref_ctrl.data_num) {
    lVar5 = 6;
  }
  if (0 < lVar5) {
    iVar3 = off_y + 0x53;
    do {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
      iVar2 = menu_radio_ctrl.ref_ctrl.disp_start_pos + (int)lVar4;
                    /* end of inlined section */
      lVar4 = (long)((int)lVar4 + 1);
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
      _fixed_array_verifyrange__H1Z17DISP_CRYSTAL_DATA_UiUi_PX01(iVar2,0x28);
      cVar1 = GetPlyrCrystalState__Fi(disp_crystal_data.field0_0x0.m_aData[iVar2].crystal_id);
      if (cVar1 == '\x01') {
                    /* end of inlined section */
        MenuRadioNoHearFrameDisp__FffUc((float)(off_x + 0x2c),(float)iVar3,alpha);
      }
      iVar3 = iVar3 + 0x23;
    } while (lVar4 < lVar5);
  }
  return;
}

static void MenuRadioScrollFrameDisp(int off_x, int off_y, u_char alpha) {
	float frame_scl;
	DISP_SPRT scroll_ds;
	
  uint uVar1;
  float fVar2;
  float fVar3;
  DISP_SPRT scroll_ds;
  
  fVar2 = (float)off_x;
  fVar3 = (float)off_y;
  uVar1 = (uint)(ushort)menu_radio_tex[14].h;
  PK2SendVram__FUiiii((uint)menu_radio_tex_addr,-1,-1,0);
  CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&scroll_ds,menu_radio_tex + 0xc);
  scroll_ds.x = scroll_ds.x + fVar2;
  scroll_ds.alphar = 0x48;
  scroll_ds.y = scroll_ds.y + fVar3;
  scroll_ds.alpha = (uchar)((int)((uint)scroll_ds.alpha * (uint)alpha) >> 7);
  DispSprD__FP9DISP_SPRT(&scroll_ds);
  CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&scroll_ds,menu_radio_tex + 0xe);
  scroll_ds.csx = scroll_ds.x + fVar2;
  scroll_ds.csy = scroll_ds.y + fVar3;
  scroll_ds.alphar = 0x48;
  scroll_ds.scw = 1.0;
  scroll_ds.alpha = (uchar)((int)((uint)scroll_ds.alpha * (uint)alpha) >> 7);
  scroll_ds.x = scroll_ds.csx;
  scroll_ds.y = scroll_ds.csy;
  scroll_ds.sch = 126.0 / (float)uVar1;
  DispSprD__FP9DISP_SPRT(&scroll_ds);
  CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&scroll_ds,menu_radio_tex + 0xd);
  scroll_ds.x = scroll_ds.x + fVar2;
  scroll_ds.alphar = 0x48;
  scroll_ds.y = scroll_ds.y + fVar3;
  scroll_ds.alpha = (uchar)((int)((uint)scroll_ds.alpha * (uint)alpha) >> 7);
  DispSprD__FP9DISP_SPRT(&scroll_ds);
  return;
}

static void MenuRadioScrollDisp(int off_x, int off_y, u_char alpha) {
	DISP_SPRT scroll_ds;
	float scroll_size;
	float scroll_y;
	float center_size;
	float scroll_scl;
	
  uint uVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  DISP_SPRT scroll_ds;
  
  if (menu_radio_ctrl.ref_ctrl.data_num < 6) {
    fVar6 = 185.0;
    fVar3 = 94.0;
  }
  else {
    fVar3 = (185.0 / (float)menu_radio_ctrl.ref_ctrl.data_num) *
            (float)menu_radio_ctrl.ref_ctrl.disp_start_pos + 94.0;
    fVar6 = 185.0 - (185.0 / (float)menu_radio_ctrl.ref_ctrl.data_num) *
                    (float)(menu_radio_ctrl.ref_ctrl.data_num + -6);
  }
  fVar5 = fVar6 - (float)((uint)(ushort)menu_radio_tex[15].h + (uint)(ushort)menu_radio_tex[17].h);
  PK2SendVram__FUiiii((uint)menu_radio_tex_addr,-1,-1,0);
  uVar2 = (uint)alpha;
  if (0.0 < fVar5) {
    fVar4 = (float)off_x;
    uVar1 = (uint)(ushort)menu_radio_tex[16].h;
    CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&scroll_ds,menu_radio_tex + 0xf);
    fVar7 = (float)off_y;
    scroll_ds.x = scroll_ds.x + fVar4;
    scroll_ds.y = fVar3 + fVar7;
    fVar6 = fVar5 / (float)uVar1;
    scroll_ds.alpha = (uchar)((int)((uint)scroll_ds.alpha * (uint)alpha) >> 7);
    DispSprD__FP9DISP_SPRT(&scroll_ds);
    uVar1 = (uint)(ushort)menu_radio_tex[15].h;
    CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&scroll_ds,menu_radio_tex + 0x10);
    scroll_ds.csx = scroll_ds.x + fVar4;
    scroll_ds.csy = fVar3 + (float)uVar1 + fVar7;
    scroll_ds.scw = 1.0;
    scroll_ds.alpha = (uchar)((int)((uint)scroll_ds.alpha * (uint)alpha) >> 7);
    scroll_ds.x = scroll_ds.csx;
    scroll_ds.y = scroll_ds.csy;
    scroll_ds.sch = fVar6;
    DispSprD__FP9DISP_SPRT(&scroll_ds);
    CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&scroll_ds,menu_radio_tex + 0x11);
    scroll_ds.y = fVar3 + (float)uVar1 + fVar5 + fVar7;
    scroll_ds.x = scroll_ds.x + fVar4;
    scroll_ds.alpha = (uchar)((int)(scroll_ds.alpha * uVar2) >> 7);
    DispSprD__FP9DISP_SPRT(&scroll_ds);
  }
  else {
    CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&scroll_ds,menu_radio_tex + 0xf);
    fVar5 = (float)off_x;
    fVar7 = (float)off_y;
    scroll_ds.csx = scroll_ds.x + fVar5;
    scroll_ds.scw = 1.0;
    scroll_ds.csy = fVar3 + fVar7;
    scroll_ds.alpha = (uchar)((int)(scroll_ds.alpha * uVar2) >> 7);
    if ((int)scroll_ds.h < 0) {
      fVar4 = (float)(scroll_ds.h & 1 | scroll_ds.h >> 1);
      fVar4 = fVar4 + fVar4;
    }
    else {
      fVar4 = (float)scroll_ds.h;
    }
    scroll_ds.sch = (fVar6 * 0.5) / fVar4;
    fVar4 = fVar5;
    scroll_ds.x = scroll_ds.csx;
    scroll_ds.y = scroll_ds.csy;
    DispSprD__FP9DISP_SPRT(&scroll_ds);
    CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&scroll_ds,menu_radio_tex + 0x11);
    scroll_ds.csx = scroll_ds.x + fVar5;
    scroll_ds.scw = 1.0;
    scroll_ds.csy = fVar3 + fVar6 * 0.5 + fVar7;
    if ((int)scroll_ds.h < 0) {
      fVar3 = (float)(scroll_ds.h & 1 | scroll_ds.h >> 1);
      fVar3 = fVar3 + fVar3;
    }
    else {
      fVar3 = (float)scroll_ds.h;
    }
    scroll_ds.sch = (fVar6 * 0.5) / fVar3;
    scroll_ds.alpha = (uchar)((int)(scroll_ds.alpha * uVar2) >> 7);
    scroll_ds.x = scroll_ds.csx;
    scroll_ds.y = scroll_ds.csy;
    DispSprD__FP9DISP_SPRT(&scroll_ds);
  }
  CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&scroll_ds,menu_radio_tex + 10);
  scroll_ds.x = scroll_ds.x + fVar4;
  scroll_ds.b = menu_radio_disp.rgb;
  scroll_ds.y = scroll_ds.y + (float)off_y;
  scroll_ds.r = menu_radio_disp.rgb;
  scroll_ds.g = menu_radio_disp.rgb;
  scroll_ds.alpha = (uchar)((int)(scroll_ds.alpha * uVar2) >> 7);
  DispSprD__FP9DISP_SPRT(&scroll_ds);
  CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&scroll_ds,menu_radio_tex + 0xb);
  scroll_ds.x = scroll_ds.x + fVar4;
  scroll_ds.b = menu_radio_disp.rgb;
  scroll_ds.y = scroll_ds.y + (float)off_y;
  scroll_ds.r = menu_radio_disp.rgb;
  scroll_ds.g = menu_radio_disp.rgb;
  scroll_ds.alpha = (uchar)((int)(scroll_ds.alpha * uVar2) >> 7);
  DispSprD__FP9DISP_SPRT(&scroll_ds);
  return;
}

static void MenuRadioLoadCrystalDisp(int off_x, int off_y, u_char alpha) {
	static char __FUNCTION__[25] = {
		/* [0] = */ 77,
		/* [1] = */ 101,
		/* [2] = */ 110,
		/* [3] = */ 117,
		/* [4] = */ 82,
		/* [5] = */ 97,
		/* [6] = */ 100,
		/* [7] = */ 105,
		/* [8] = */ 111,
		/* [9] = */ 76,
		/* [10] = */ 111,
		/* [11] = */ 97,
		/* [12] = */ 100,
		/* [13] = */ 67,
		/* [14] = */ 114,
		/* [15] = */ 121,
		/* [16] = */ 115,
		/* [17] = */ 116,
		/* [18] = */ 97,
		/* [19] = */ 108,
		/* [20] = */ 68,
		/* [21] = */ 105,
		/* [22] = */ 115,
		/* [23] = */ 112,
		/* [24] = */ 0
	};
	int disp_num;
	u_char fade_alpha[2];
	u_char crystal_alpha;
	u_char flare_alpha;
	static ALPHA_ANIM_TBL crystal_in_alpha_tbl[2] = {
		/* [0] = */ {
			/* .start_alpha = */ 89,
			/* .end_alpha = */ 128,
			/* .start_time = */ 0,
			/* .end_time = */ 80
		},
		/* [1] = */ {
			/* .start_alpha = */ -1,
			/* .end_alpha = */ -1,
			/* .start_time = */ -1,
			/* .end_time = */ -1
		}
	};
	ALPHA_ANIM_TBL crystal_out_alpha_tbl[2];
	static ALPHA_ANIM_TBL crystal_flare_in_alpha_tbl[2] = {
		/* [0] = */ {
			/* .start_alpha = */ 0,
			/* .end_alpha = */ 128,
			/* .start_time = */ 0,
			/* .end_time = */ 80
		},
		/* [1] = */ {
			/* .start_alpha = */ -1,
			/* .end_alpha = */ -1,
			/* .start_time = */ -1,
			/* .end_time = */ -1
		}
	};
	ALPHA_ANIM_TBL crystal_flare_out_alpha_tbl[2];
	
  undefined *puVar1;
  uint uVar2;
  ulong *puVar3;
  uchar uVar4;
  uchar alpha_00;
  uchar alpha_01;
  int iVar5;
  void *pvVar6;
  uchar fade_alpha [2];
  ALPHA_ANIM_TBL crystal_out_alpha_tbl [2];
  ALPHA_ANIM_TBL crystal_flare_out_alpha_tbl [2];
  uint local_60;
  
  alpha_01 = '\0';
  puVar1 = (undefined *)((int)&crystal_out_alpha_tbl[0].end_time + 1);
  uVar2 = (uint)puVar1 & 7;
  puVar3 = (ulong *)(puVar1 + -uVar2);
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | (ulong)DAT_003beaa0 >> (7 - uVar2) * 8;
  crystal_out_alpha_tbl[0] = DAT_003beaa0;
  puVar1 = (undefined *)((int)&crystal_out_alpha_tbl[1].end_time + 1);
  uVar2 = (uint)puVar1 & 7;
  puVar3 = (ulong *)(puVar1 + -uVar2);
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | (ulong)_PTR_003beaa8 >> (7 - uVar2) * 8;
  crystal_out_alpha_tbl[1] = _PTR_003beaa8;
  iVar5 = menu_radio_ctrl.ref_ctrl.data_num;
  if (6 < menu_radio_ctrl.ref_ctrl.data_num) {
    iVar5 = 6;
  }
  puVar1 = (undefined *)((int)&crystal_flare_out_alpha_tbl[0].end_time + 1);
  uVar2 = (uint)puVar1 & 7;
  puVar3 = (ulong *)(puVar1 + -uVar2);
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | (ulong)DAT_003beac0 >> (7 - uVar2) * 8;
  crystal_flare_out_alpha_tbl[0] = DAT_003beac0;
  puVar1 = (undefined *)((int)&crystal_flare_out_alpha_tbl[1].end_time + 1);
  uVar2 = (uint)puVar1 & 7;
  puVar3 = (ulong *)(puVar1 + -uVar2);
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | (ulong)_PTR_003beac8 >> (7 - uVar2) * 8;
  crystal_flare_out_alpha_tbl[1] = _PTR_003beac8;
  local_60 = (uint)alpha;
  fade_alpha[1] = '\0';
  fade_alpha[0] = '\0';
  switch(menu_radio_disp.crystal_anim_step) {
  case '\0':
    menu_radio_disp.crystal_anim_step = '\x01';
    menu_radio_disp.crystal_alpha = 'Y';
    menu_radio_disp.crystal_flare_alpha = '\0';
    menu_radio_disp.crystal_anim_timer = '\0';
  case '\x01':
    menu_radio_disp.crystal_alpha =
         Anim2D_CalcNowAlpha__FPC14ALPHA_ANIM_TBLi
                   ((ALPHA_ANIM_TBL *)crystal_in_alpha_tbl_1024,
                    (int)menu_radio_disp.crystal_anim_timer);
    alpha_01 = Anim2D_CalcNowAlpha__FPC14ALPHA_ANIM_TBLi
                         ((ALPHA_ANIM_TBL *)crystal_flare_in_alpha_tbl_1025,
                          (int)menu_radio_disp.crystal_anim_timer);
    menu_radio_disp.crystal_anim_timer = menu_radio_disp.crystal_anim_timer + '\x01';
    alpha_00 = menu_radio_disp.crystal_alpha;
    menu_radio_disp.crystal_flare_alpha = alpha_01;
    if ('O' < menu_radio_disp.crystal_anim_timer) {
      menu_radio_disp.crystal_anim_step = '\x02';
    }
    break;
  case '\x02':
    alpha_01 = 0x80;
    alpha_00 = 0x80;
    break;
  case '\x03':
    crystal_out_alpha_tbl[0]._2_6_ = DAT_003beaa0._2_6_;
    crystal_out_alpha_tbl[0].start_alpha = (short)menu_radio_disp.crystal_alpha;
    crystal_flare_out_alpha_tbl[0]._2_6_ = DAT_003beac0._2_6_;
    crystal_flare_out_alpha_tbl[0].start_alpha = (short)menu_radio_disp.crystal_flare_alpha;
    alpha_00 = Anim2D_CalcNowAlpha__FPC14ALPHA_ANIM_TBLi
                         (crystal_out_alpha_tbl,(int)menu_radio_disp.crystal_anim_timer);
    alpha_01 = Anim2D_CalcNowAlpha__FPC14ALPHA_ANIM_TBLi
                         (crystal_flare_out_alpha_tbl,(int)menu_radio_disp.crystal_anim_timer);
    menu_radio_disp.crystal_anim_timer = menu_radio_disp.crystal_anim_timer + '\x01';
    if ('\x13' < menu_radio_disp.crystal_anim_timer) {
      menu_radio_disp.crystal_anim_step = '\x04';
    }
    break;
  case '\x04':
    alpha_01 = '\0';
    alpha_00 = (uchar)(local_60 * 0x59 >> 7);
    break;
  default:
    SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
    PrintAssertReal("Error! %s");
    alpha_00 = 'Y';
  }
  if (menu_radio_ctrl.sub_step == '\x01') {
    iVar5 = CheckCrossFadeDisp__Fi((uint)menu_radio_ctrl.cross_fade_flg);
    if (iVar5 == 0) {
      return;
    }
LAB_00205c08:
    pvVar6 = GetCrossFadeDataAddr__Fi((uint)menu_radio_ctrl.cross_fade_flg);
    MenuRadioCrystalDisp__FiiUcPv(off_x,off_y,alpha_00,pvVar6);
    pvVar6 = GetCrossFadeDataAddr__Fi((uint)menu_radio_ctrl.cross_fade_flg);
    MenuRadioCrystalFlareDisp__FiiUcPv(off_x,off_y,alpha_01,pvVar6);
  }
  else {
    if (menu_radio_ctrl.sub_step < 2) {
      if (menu_radio_ctrl.sub_step == '\0') {
        if (iVar5 == 0) {
          return;
        }
        GetMenuCrossFadeAlpha__FPUc(fade_alpha);
        uVar4 = alpha;
        if (menu_wrk.step != '\x02') {
          fade_alpha[menu_radio_ctrl.cross_fade_flg ^ 1] = '\0';
          uVar4 = (uchar)local_60;
        }
        local_60._0_1_ = uVar4;
        iVar5 = CheckCrossFadeDisp__Fi(menu_radio_ctrl.cross_fade_flg ^ 1);
        if ((iVar5 != 0) && (menu_radio_disp.crystal_anim_step == '\x04')) {
          pvVar6 = GetCrossFadeDataAddr__Fi(menu_radio_ctrl.cross_fade_flg ^ 1);
          MenuRadioCrystalDisp__FiiUcPv
                    (off_x,off_y,
                     (uchar)((uint)fade_alpha[menu_radio_ctrl.cross_fade_flg ^ 1] * 0x59 >> 7),
                     pvVar6);
        }
        if (menu_wrk.step != '\x02') {
          fade_alpha[menu_radio_ctrl.cross_fade_flg] = (uchar)local_60;
        }
        iVar5 = CheckCrossFadeDisp__Fi((uint)menu_radio_ctrl.cross_fade_flg);
        if (iVar5 == 0) {
          return;
        }
        if (menu_radio_disp.crystal_anim_step == '\x04') {
          pvVar6 = GetCrossFadeDataAddr__Fi((uint)menu_radio_ctrl.cross_fade_flg);
          MenuRadioCrystalDisp__FiiUcPv
                    (off_x,off_y,
                     (uchar)((uint)fade_alpha[menu_radio_ctrl.cross_fade_flg] * 0x59 >> 7),pvVar6);
          return;
        }
        goto LAB_00205c08;
      }
    }
    else if (menu_radio_ctrl.sub_step == '\x02') {
      return;
    }
    SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
    PrintAssertReal("Error! %s");
  }
  return;
}

static void MenuRadioCrystalDisp(int off_x, int off_y, u_char alpha, void *pk2_addr) {
	DISP_SPRT crystal_ds;
	
  DISP_SPRT crystal_ds;
  
  PK2SendVram__FUiiii((uint)pk2_addr,-1,-1,0);
  CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&crystal_ds,menu_radio_tex + 0x1a);
  crystal_ds.x = crystal_ds.x + (float)off_x;
  crystal_ds.y = crystal_ds.y + (float)off_y;
  crystal_ds.alpha = (uchar)((int)((uint)crystal_ds.alpha * (uint)alpha) >> 7);
  DispSprD__FP9DISP_SPRT(&crystal_ds);
  return;
}

static void MenuRadioCrystalFlareDisp(int off_x, int off_y, u_char alpha, void *pk2_addr) {
	int i;
	DISP_SPRT flare_ds;
	
  SPRT_DAT *d;
  int iVar1;
  float fVar2;
  DISP_SPRT flare_ds;
  
  fVar2 = (float)off_x;
  iVar1 = 3;
  PK2SendVram__FUiiii((uint)pk2_addr,-1,-1,0);
  d = menu_radio_tex + 0x1b;
  do {
    CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&flare_ds,d);
    iVar1 = iVar1 + -1;
    d = d + 1;
    flare_ds.x = flare_ds.x + fVar2;
    flare_ds.y = flare_ds.y + (float)off_y;
    flare_ds.alpha = (uchar)((int)((uint)flare_ds.alpha * (uint)alpha) >> 7);
    DispSprD__FP9DISP_SPRT(&flare_ds);
  } while (-1 < iVar1);
  return;
}

static void MenuRadioMsgWinDisp(int off_x, int off_y, u_char alpha) {
  DrawCmnWindow__FUiffffUcUc(0,24.0,322.0,592.0,124.0,alpha,0x80);
  return;
}

static void MenuRadioTopMsgDisp(int off_x, int off_y, u_char alpha) {
  int iVar1;
  
  iVar1 = menu_radio_ctrl.ref_ctrl.data_pos;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  _fixed_array_verifyrange__H1Z17DISP_CRYSTAL_DATA_UiUi_PX01(menu_radio_ctrl.ref_ctrl.data_pos,0x28)
  ;
  PrintMsg__Fiiiiiii(0x48,disp_crystal_data.field0_0x0.m_aData[iVar1].crystal_id,off_x + 0x30,
                     off_y + 0x15a,1,(uint)alpha,0);
  return;
}

static void MenuRadioCaptionDisp(int off_x, int off_y, u_char alpha) {
	DISP_SPRT cap_ds;
	
  uchar uVar1;
  DISP_SPRT cap_ds;
  
  PK2SendVram__FUiiii((uint)menu_radio_tex_addr,-1,-1,0);
  DrawCmnCapGroup_W__FiiUcUi(5,5,alpha,0);
  CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&cap_ds,menu_radio_tex + 0x1f);
  uVar1 = GetLanguage__Fv();
  cap_ds.x = (float)(play_cap_tbl[(char)uVar1] + off_x);
  cap_ds.y = cap_ds.y + (float)off_y;
  cap_ds.alpha = (uchar)((int)((uint)cap_ds.alpha * (uint)alpha) >> 7);
  DispSprD__FP9DISP_SPRT(&cap_ds);
  return;
}

static void MenuRadioCrystalPlayCaptionDisp(int off_x, int off_y, u_char alpha) {
	DISP_SPRT cap_ds;
	
  uchar uVar1;
  DISP_SPRT cap_ds;
  
  PK2SendVram__FUiiii((uint)menu_radio_tex_addr,-1,-1,0);
  DrawCmnCapGroup_W__FiiUcUi(6,6,alpha,0);
  CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&cap_ds,menu_radio_tex + 0x20);
  uVar1 = GetLanguage__Fv();
  cap_ds.x = (float)(stop_cap_tbl_1[(char)uVar1] + off_x);
  cap_ds.y = cap_ds.y + (float)off_y;
  cap_ds.alpha = (uchar)((int)((uint)cap_ds.alpha * (uint)alpha) >> 7);
  DispSprD__FP9DISP_SPRT(&cap_ds);
  CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&cap_ds,menu_radio_tex + 0x21);
  uVar1 = GetLanguage__Fv();
  cap_ds.y = cap_ds.y + (float)off_y;
  cap_ds.x = (float)(stop_cap_tbl_2[(char)uVar1] + off_x);
  cap_ds.alpha = (uchar)((int)((uint)cap_ds.alpha * (uint)alpha) >> 7);
  DispSprD__FP9DISP_SPRT(&cap_ds);
  return;
}

static void MenuRadioSelFrameDisp(float x, float y, u_char alpha) {
	DISP_SPRT frame_ds;
	float center_scl;
	
  float fVar1;
  float fVar2;
  DISP_SPRT frame_ds;
  
  fVar2 = 138.0;
  fVar1 = (float)(uint)(ushort)menu_radio_tex[22].w;
  PK2SendVram__FUiiii((uint)menu_radio_tex_addr,-1,-1,0);
  CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&frame_ds,menu_radio_tex + 0x15);
  fVar1 = fVar2 / fVar1;
  frame_ds.alpha = (uchar)((int)((uint)frame_ds.alpha * (uint)alpha) >> 7);
  frame_ds.x = x;
  frame_ds.y = y;
  DispSprD__FP9DISP_SPRT(&frame_ds);
  CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&frame_ds,menu_radio_tex + 0x16);
  frame_ds.csx = x + (float)(uint)(ushort)menu_radio_tex[21].w;
  frame_ds.sch = 1.0;
  frame_ds.alpha = (uchar)((int)((uint)frame_ds.alpha * (uint)alpha) >> 7);
  frame_ds.csy = y;
  frame_ds.x = frame_ds.csx;
  frame_ds.y = y;
  frame_ds.scw = fVar1;
  DispSprD__FP9DISP_SPRT(&frame_ds);
  CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&frame_ds,menu_radio_tex + 0x17);
  frame_ds.alpha = (uchar)((int)((uint)frame_ds.alpha * (uint)alpha) >> 7);
  frame_ds.x = x + (float)(uint)(ushort)menu_radio_tex[21].w + fVar2;
  frame_ds.y = y;
  DispSprD__FP9DISP_SPRT(&frame_ds);
  return;
}

static void MenuRadioNonSelFrameDisp(float x, float y, u_char alpha) {
	DISP_SPRT frame_ds;
	float center_scl;
	
  uint uVar1;
  float fVar2;
  DISP_SPRT frame_ds;
  
  uVar1 = (uint)(ushort)menu_radio_tex[19].h;
  PK2SendVram__FUiiii((uint)menu_radio_tex_addr,-1,-1,0);
  CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&frame_ds,menu_radio_tex + 0x12);
  frame_ds.alpha = (uchar)((int)((uint)frame_ds.alpha * (uint)alpha) >> 7);
  frame_ds.x = x;
  frame_ds.y = y;
  DispSprD__FP9DISP_SPRT(&frame_ds);
  CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&frame_ds,menu_radio_tex + 0x13);
  if ((int)frame_ds.h < 0) {
    fVar2 = (float)(frame_ds.h & 1 | frame_ds.h >> 1);
    fVar2 = fVar2 + fVar2;
  }
  else {
    fVar2 = (float)frame_ds.h;
  }
  frame_ds.rot = 90.0;
  frame_ds.crx = x + (float)(uint)(ushort)menu_radio_tex[18].w + fVar2 * (164.0 / (float)uVar1);
  frame_ds.scw = 1.0;
  frame_ds.alpha = (uchar)((int)((uint)frame_ds.alpha * (uint)alpha) >> 7);
  frame_ds.cry = y;
  frame_ds.csx = frame_ds.crx;
  frame_ds.csy = y;
  frame_ds.x = frame_ds.crx;
  frame_ds.y = y;
  frame_ds.sch = 164.0 / (float)uVar1;
  DispSprD__FP9DISP_SPRT(&frame_ds);
  CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&frame_ds,menu_radio_tex + 0x14);
  frame_ds.alpha = (uchar)((int)((uint)frame_ds.alpha * (uint)alpha) >> 7);
  frame_ds.x = x + (float)(uint)(ushort)menu_radio_tex[18].w + 164.0;
  frame_ds.y = y;
  DispSprD__FP9DISP_SPRT(&frame_ds);
  return;
}

static void MenuRadioNoHearFrameDisp(float x, float y, u_char alpha) {
	DISP_SPRT frame_ds;
	
  DISP_SPRT frame_ds;
  
  PK2SendVram__FUiiii((uint)menu_radio_tex_addr,-1,-1,0);
  CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&frame_ds,menu_radio_tex + 0x18);
  frame_ds.alpha = (uchar)((int)((uint)frame_ds.alpha * (uint)alpha) >> 7);
  frame_ds.x = x;
  frame_ds.y = y;
  DispSprD__FP9DISP_SPRT(&frame_ds);
  CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&frame_ds,menu_radio_tex + 0x19);
  frame_ds.x = x + 255.0;
  frame_ds.alpha = (uchar)((int)((uint)frame_ds.alpha * (uint)alpha) >> 7);
  frame_ds.y = y;
  DispSprD__FP9DISP_SPRT(&frame_ds);
  return;
}

static void MenuRadioCrystalTitleDebugPad() {
  if ((pad[0].now & 0x20U) == 0) {
    if (crystal_title_debug_flg != '\0') {
      printf(&DAT_003f2f20);
      crystal_title_debug_flg = '\0';
    }
  }
  else {
    if (crystal_title_debug_flg == '\0') {
      printf(s__6d__003f2f18);
    }
    crystal_title_debug_flg = '\x01';
  }
  return;
}

static void MenuRadioCrystalTitleTimerDebugDisp() {
  SetASCIIString2__FiffiUcUcUcPc(0,470.0,10.0,1,0xff,0xff,0xff,s_TIMER_003f2f28);
  PrintNumber__FiiiUcUciUc(menu_radio_disp.title_timer,0x226,10,'\0',0x80,0,'\x01');
  return;
}

DISP_CRYSTAL_DATA* DISP_CRYSTAL_DATA * _fixed_array_verifyrange<DISP_CRYSTAL_DATA>(size_t v, size_t _max) {
  g3ddbgAssert__FbPCce(false,str_849);
  return (type_info *)v;
}

static void __static_initialization_and_destruction_0(int __initialize_p, int __priority) {
  return;
}

type_info& DISP_CRYSTAL_DATA type_info function() {
  g3ddbgAssert__FbPCce(false,str_849);
  return (type_info *)v;
}

static void global constructors keyed to GetMenuRadioTexMem() {
  __static_initialization_and_destruction_0(1,0xffff);
  return;
}
