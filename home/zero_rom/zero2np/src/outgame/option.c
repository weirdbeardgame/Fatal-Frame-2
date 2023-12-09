// STATUS: NOT STARTED

#include "option.h"

static void (*OptionCtrlModule[4])(/* parameters unknown */) = {
	/* [0] = */ OptionMainPad,
	/* [1] = */ OptionOperatePad,
	/* [2] = */ OptionButtonSetup,
	/* [3] = */ OptionBrightnessSetup
};

static void (*OptionDispModule[4])(/* parameters unknown */) = {
	/* [0] = */ OptionMainDisp,
	/* [1] = */ OptionOperateDisp,
	/* [2] = */ OptionButtonSetupDisp,
	/* [3] = */ OptionBrightnessDisp
};

OPT_CTRL *oc = &opt_ctrl;
void *opt_og_tex_addr = NULL;
void *opt_top_tex_addr = NULL;
void *opt_brn_tex_addr = NULL;
void *opt_key_tex_addr = NULL;

OPT_CTRL opt_ctrl = {
	/* .mode = */ 0,
	/* .now_place = */ 0,
	/* .next_place = */ 0,
	/* .anm_alpha = */ 0,
	/* .now_tex = */ 0,
	/* .main_step = */ 0,
	/* .anm_step = */ 0,
	/* .save_step = */ 0,
	/* .vib_time = */ 0,
	/* .test_vib_flg = */ 0,
	/* .window = */ 0,
	/* .yn_csr = */ 0,
	/* .cursor = */ 0,
	/* .next_csr = */ 0,
	/* .old_csr = */ 0,
	/* .old_csr2 = */ 0
};

OPTION_WRK optm = {
	/* .brightness = */ 0,
	/* .snd_volume = */ 0,
	/* .pad_vib = */ 0,
	/* .pad_type = */ 0,
	/* .view_vertical = */ 0,
	/* .ana_replace = */ 0,
	/* .credits = */ 0,
	/* .snd_output = */ 0,
	/* .move_operate = */ 0,
	/* .pad = */ 0
};

static void _fixed_array_assert(char *strType, size_t v0, size_t v1) {
	static char *str = 0x3c2388;
	
  g3ddbgAssert__FbPCce(false,str_849);
  return;
}

static void** void * * _fixed_array_verifyrange<void *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_assert__FPCcUiUi(s_void__003f3628,_max,v);
  }
  return (void **)0x0;
}

static char** char * * _fixed_array_verifyrange<char *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_assert__FPCcUiUi(s_char__003f3630,_max,v);
  }
  return (char **)0x0;
}

static unsigned int** unsigned int * * _fixed_array_verifyrange<unsigned int *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_assert__FPCcUiUi("unsigned int*",_max,v);
  }
  return (uint **)0x0;
}

void InitOptionSetup(OPTION_WRK *ow) {
  ow->brightness = 0x80;
  ow->credits = '\x01';
  ow->snd_volume = 0x100;
  ow->move_operate = '\0';
  ow->pad_vib = '\x01';
  ow->pad_type = '\0';
  ow->snd_output = '\0';
  ow->view_vertical = '\0';
  ow->ana_replace = '\0';
  OptSoundSetupRef__FP10OPTION_WRK(ow);
  return;
}

void OptionInit(int mode) {
  optm._0_8_ = opt_wrk._0_8_;
  optm._8_8_ = opt_wrk._8_8_;
  opt_ctrl.mode = mode;
  opt_ctrl.now_tex = 4;
  opt_ctrl.yn_csr = 1;
  opt_ctrl.save_step = 0;
  oc = &opt_ctrl;
  opt_ctrl.now_place = 0;
  opt_ctrl.next_place = 0;
  opt_ctrl.main_step = 0;
  opt_ctrl.anm_step = 1;
  opt_ctrl.cursor = 0;
  opt_ctrl.next_csr = 0;
  opt_ctrl.old_csr = 0;
  opt_ctrl.old_csr2 = 0;
  opt_ctrl.vib_time = 0;
  opt_ctrl.anm_alpha = 0;
  opt_ctrl.window = 0;
  return;
}

void OptionMain() {
	int save_mode;
	int end_flg;
	
  int *piVar1;
  bool bVar2;
  int iVar3;
  OPT_CTRL *pOVar4;
  
  iVar3 = oc->main_step;
  bVar2 = false;
  if (iVar3 == 1) {
    if (oc->anm_step != 0) {
      iVar3 = oc->main_step;
      goto LAB_00228458;
    }
    piVar1 = &oc->now_place;
    oc->anm_alpha = 0x80;
    (*(code *)OptionCtrlModule[*piVar1])();
    pOVar4 = oc;
  }
  else if (iVar3 < 2) {
    if (iVar3 != 0) {
      iVar3 = oc->main_step;
      goto LAB_00228458;
    }
    iVar3 = OptionTexLoadWait__Fv();
    pOVar4 = oc;
    if (iVar3 != 0) {
      oc->anm_step = 1;
      pOVar4->main_step = 1;
    }
  }
  else {
    if (iVar3 != 4) {
      iVar3 = oc->main_step;
      goto LAB_00228458;
    }
    if (oc->window == 1) {
      OptVerify__Fv();
      pOVar4 = oc;
    }
    else {
      if (oc->window != 2) {
        iVar3 = oc->main_step;
        goto LAB_00228458;
      }
      if (oc->save_step == 0) {
        SystemDataSaveInit__FPFi_PvPFPv_v(ol_loadGetHeap__Fi,ol_loadFreeHeap__FPv);
        pOVar4 = oc;
        oc->save_step = 1;
      }
      else {
        if (oc->save_step != 1) {
          iVar3 = oc->main_step;
          goto LAB_00228458;
        }
        iVar3 = SystemDataSaveMain__Fv();
        if (iVar3 < 1) {
          pOVar4 = oc;
          if (iVar3 < 0) {
            SystemDataSaveEnd__Fv();
            pOVar4 = oc;
            oc->main_step = 1;
            pOVar4->save_step = 0;
            pOVar4->anm_step = 0;
            pOVar4->window = 0;
          }
        }
        else {
          SystemDataSaveEnd__Fv();
          pOVar4 = oc;
          oc->main_step = 1;
          pOVar4->anm_step = 2;
          pOVar4->next_place = 4;
          pOVar4->save_step = 0;
        }
      }
    }
  }
  iVar3 = pOVar4->main_step;
LAB_00228458:
  if (iVar3 != 0) {
    iVar3 = OptAnimation__Fv();
    piVar1 = &oc->now_place;
    bVar2 = iVar3 != 0;
    oc->now_tex = 4;
    if (*piVar1 != 3) {
      OptDispBgMask__Fv();
    }
    (*(code *)OptionDispModule[oc->now_place])();
    if (oc->window == 1) {
      OptionInitialyzeDisp__Fv();
    }
    else if (oc->window == 2) {
      SystemDataSaveDispMain__Fv();
    }
  }
  if (bVar2) {
    if (oc->mode == 0) {
      SetNextGPhase__F14GPHASE_ID_ENUM(GID_TITLE_MENU);
      return;
    }
    SetNextGPhase__F14GPHASE_ID_ENUM(GID_TITLE_MENU);
  }
  return;
}

void OptionEnd() {
  int iVar1;
  
  iVar1 = GetOptWrkChgValue__Fv();
  if (iVar1 != 0) {
    OptSetOptWrk__Fv();
  }
  OptSoundSetupRef__FP10OPTION_WRK(&opt_wrk);
  return;
}

static void OptionMainPad() {
	int old_snd_volume;
	char end_flg;
	
  bool bVar1;
  uchar uVar2;
  OPT_CTRL *pOVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  
  bVar1 = false;
  if (*paddat[1] == 1) {
    bVar1 = true;
    SystemBankPlay__FiiiiP11_SND_3D_SETii(1,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
    pOVar3 = oc;
    oc->next_place = 4;
    pOVar3->anm_step = 2;
  }
  else if (*paddat[0x19] == 1) {
    bVar1 = true;
    SystemBankPlay__FiiiiP11_SND_3D_SETii(3,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
    pOVar3 = oc;
    oc->window = 2;
    pOVar3->main_step = 4;
  }
  else {
    if (((pad[0].rpt & 0x1000U) == 0) && (iVar4 = GetPadAnalogRpt__Fi(0), iVar4 == 0)) {
      if (((pad[0].rpt & 0x4000U) == 0) &&
         (iVar5 = GetPadAnalogRpt__Fi(1), pOVar3 = oc, uVar2 = optm.pad_vib, iVar4 = optm.snd_volume
         , iVar5 == 0)) {
        if (**paddat != 1) {
          iVar5 = oc->cursor;
          if (iVar5 == 3) {
            optm.credits = ReplaceONOFF__FUc(optm.credits);
          }
          else if (iVar5 < 4) {
            if (((iVar5 == 1) && (optm.pad_vib = ReplaceONOFF__FUc(optm.pad_vib), uVar2 == '\0')) &&
               (optm.pad_vib == '\x01')) {
              oc->vib_time = 0x14;
              printf("Vib Start!!\n");
            }
          }
          else if (iVar5 == 4) {
            uVar6 = (ulong)optm.snd_output;
            optm.snd_output = ReplaceONOFF__FUc(optm.snd_output);
            if ((long)(char)optm.snd_output != uVar6) {
              if ((long)(char)optm.snd_output == 1) {
                SndSetMono();
              }
              else {
                SndSetStereo();
              }
            }
          }
          else if ((iVar5 == 5) &&
                  (optm.snd_volume = ChangeValue__Fiiii(optm.snd_volume,2,0x100,0),
                  optm.snd_volume != iVar4)) {
            SndSetGroupVolume(1,optm.snd_volume);
            SndSetGroupVolume(0,optm.snd_volume);
          }
          goto LAB_0022889c;
        }
        iVar4 = oc->cursor;
        oc->old_csr = iVar4;
        if (iVar4 == 2) {
          pOVar3->anm_step = 2;
          pOVar3->next_place = 3;
          pOVar3->next_csr = 0;
          iVar4 = 3;
        }
        else if (iVar4 < 3) {
          if (iVar4 != 0) goto LAB_0022889c;
          pOVar3->anm_step = 2;
          pOVar3->next_place = 1;
          iVar4 = 3;
          pOVar3->next_csr = 0;
        }
        else {
          if (iVar4 != 6) goto LAB_0022889c;
          pOVar3->yn_csr = 1;
          pOVar3->main_step = 4;
          iVar4 = 3;
          pOVar3->window = 1;
        }
      }
      else {
        if (5 < oc->cursor) goto LAB_0022889c;
        iVar4 = 0;
        oc->cursor = oc->cursor + 1;
      }
    }
    else {
      if (oc->cursor < 1) goto LAB_0022889c;
      iVar4 = 0;
      oc->cursor = oc->cursor + -1;
    }
    SystemBankPlay__FiiiiP11_SND_3D_SETii(iVar4,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
  }
LAB_0022889c:
  if (bVar1) {
    oc->vib_time = 0;
  }
  return;
}

static void OptionOperatePad() {
  int *piVar1;
  OPT_CTRL *pOVar2;
  int iVar3;
  
  pOVar2 = oc;
  if (*paddat[1] == 1) {
    piVar1 = &oc->old_csr;
    oc->anm_step = 2;
    pOVar2->next_csr = *piVar1;
    pOVar2->next_place = 0;
    SystemBankPlay__FiiiiP11_SND_3D_SETii(1,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
    return;
  }
  if (((pad[0].rpt & 0x1000U) == 0) && (iVar3 = GetPadAnalogRpt__Fi(0), iVar3 == 0)) {
    if (((pad[0].rpt & 0x4000U) == 0) && (iVar3 = GetPadAnalogRpt__Fi(1), pOVar2 = oc, iVar3 == 0))
    {
      if (**paddat == 1) {
        if (oc->cursor == 3) {
          oc->old_csr2 = 3;
          pOVar2->anm_step = 2;
          pOVar2->next_place = 2;
          pOVar2->next_csr = 0;
          SystemBankPlay__FiiiiP11_SND_3D_SETii(3,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
          return;
        }
      }
      else {
        iVar3 = oc->cursor;
        if (iVar3 == 1) {
          optm.view_vertical = ReplaceONOFF__FUc(optm.view_vertical);
        }
        else if (iVar3 < 2) {
          if (iVar3 == 0) {
            optm.move_operate = ReplaceONOFF__FUc(optm.move_operate);
          }
        }
        else if (iVar3 == 2) {
          optm.ana_replace = ReplaceONOFF__FUc(optm.ana_replace);
        }
      }
    }
    else if (oc->cursor < 3) {
      oc->cursor = oc->cursor + 1;
      SystemBankPlay__FiiiiP11_SND_3D_SETii(0,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
      return;
    }
  }
  else if (0 < oc->cursor) {
    oc->cursor = oc->cursor + -1;
    SystemBankPlay__FiiiiP11_SND_3D_SETii(0,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
    return;
  }
  return;
}

static void OptionBrightnessSetup() {
  int *piVar1;
  OPT_CTRL *pOVar2;
  
  pOVar2 = oc;
  if (*paddat[1] == 1) {
    piVar1 = &oc->old_csr;
    oc->anm_step = 2;
    pOVar2->next_csr = *piVar1;
    pOVar2->next_place = 0;
    SystemBankPlay__FiiiiP11_SND_3D_SETii(1,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
    return;
  }
  optm.brightness = ChangeValue__Fiiii(optm.brightness,2,0x90,0x10);
  return;
}

static void OptionButtonSetup() {
  int *piVar1;
  OPT_CTRL *pOVar2;
  int iVar3;
  
  pOVar2 = oc;
  if (*paddat[1] == 1) {
    piVar1 = &oc->old_csr2;
    oc->next_place = 1;
    pOVar2->next_csr = *piVar1;
    pOVar2->anm_step = 2;
    SystemBankPlay__FiiiiP11_SND_3D_SETii(1,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
    return;
  }
  iVar3 = ChangeValue__Fiiii((uint)optm.pad_type,1,2,0);
  optm.pad_type = (uchar)iVar3;
  return;
}

static void OptVerify() {
  int iVar1;
  OPT_CTRL *pOVar2;
  
  if (oc->window == 1) {
    if (*paddat[1] == 1) {
      SystemBankPlay__FiiiiP11_SND_3D_SETii(1,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
      pOVar2 = oc;
      oc->main_step = 1;
      pOVar2->window = 0;
    }
    else {
      if (**paddat != 1) {
        if ((pad[0]._384_8_ & 0xa00000000000) == 0) {
          iVar1 = GetPadAnalogRpt__Fi(2);
          if ((iVar1 == 0) && (iVar1 = GetPadAnalogRpt__Fi(3), iVar1 == 0)) {
            return;
          }
          iVar1 = oc->yn_csr;
        }
        else {
          iVar1 = oc->yn_csr;
        }
        oc->yn_csr = (uint)(iVar1 == 0);
        SystemBankPlay__FiiiiP11_SND_3D_SETii(0,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
        return;
      }
      SystemBankPlay__FiiiiP11_SND_3D_SETii(3,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
      pOVar2 = oc;
      if (oc->yn_csr == 0) {
        InitOptionSetup__FP10OPTION_WRK(&optm);
        pOVar2 = oc;
        oc->main_step = 1;
      }
      else {
        oc->main_step = 1;
      }
      pOVar2->window = 0;
    }
  }
  return;
}

void OptPK2SendVram(int tex_id, void *tex_addr) {
  if (tex_id != oc->now_tex) {
    PK2SendVram__FUiiii((uint)tex_addr,-1,-1,0);
    oc->now_tex = tex_id;
  }
  return;
}

static int GetOptWrkChgValue() {
  uint uVar1;
  
  uVar1 = 1;
  if (((((optm.brightness == opt_wrk.brightness) && (optm.snd_volume == opt_wrk.snd_volume)) &&
       (optm.pad_vib == opt_wrk.pad_vib)) &&
      ((optm.pad_type == opt_wrk.pad_type && (optm.view_vertical == opt_wrk.view_vertical)))) &&
     ((optm.ana_replace == opt_wrk.ana_replace &&
      ((optm.credits == opt_wrk.credits && (optm.snd_output == opt_wrk.snd_output)))))) {
    uVar1 = (uint)(optm.move_operate != opt_wrk.move_operate);
  }
  return uVar1;
}

static int ChangeValue(int val, int ofs, int max, int min) {
  int iVar1;
  
  if (((pad[0].rpt & 0x2000U) == 0) && (iVar1 = GetPadAnalogRpt__Fi(3), iVar1 == 0)) {
    if ((((pad[0].rpt & 0x8000U) != 0) || (iVar1 = GetPadAnalogRpt__Fi(2), iVar1 != 0)) &&
       (min < val)) {
      val = val - ofs;
      if (val < min) {
        val = min;
      }
      SystemBankPlay__FiiiiP11_SND_3D_SETii(0,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
    }
  }
  else if (val < max) {
    val = val + ofs;
    if (max < val) {
      val = max;
    }
    SystemBankPlay__FiiiiP11_SND_3D_SETii(0,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
  }
  return val;
}

static u_char ReplaceONOFF(u_char src) {
	u_char ret;
	
  int iVar1;
  
  if ((((pad[0]._384_8_ & 0xa00000000000) != 0) || (iVar1 = GetPadAnalogRpt__Fi(3), iVar1 != 0)) ||
     (iVar1 = GetPadAnalogRpt__Fi(2), iVar1 != 0)) {
    src = src == '\0';
    SystemBankPlay__FiiiiP11_SND_3D_SETii(0,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
  }
  return src;
}

void OptSetOptWrk() {
  opt_wrk._0_8_ = optm._0_8_;
  opt_wrk._8_8_ = optm._8_8_;
  return;
}

void OptSoundSetupRef(OPTION_WRK *ow) {
  int vol;
  
  if (ow->snd_output == '\x01') {
    SndSetMono();
    vol = ow->snd_volume;
  }
  else {
    SndSetStereo();
    vol = ow->snd_volume;
  }
  SndSetGroupVolume(1,vol);
  SndSetGroupVolume(0,ow->snd_volume);
  return;
}

void SetSave_Option(MC_SAVE_DATA *data) {
  data->size = 0x10;
  data->addr = (uchar *)&opt_wrk;
  return;
}

void OptionBackGroundLoadReq() {
  uchar uVar1;
  
  if (opt_og_tex_addr != (void *)0x0) {
    LiberateOptionTexMem__FPPv(&opt_og_tex_addr);
  }
  if (opt_top_tex_addr != (void *)0x0) {
    LiberateOptionTexMem__FPPv(&opt_top_tex_addr);
  }
  if (opt_brn_tex_addr != (void *)0x0) {
    LiberateOptionTexMem__FPPv(&opt_brn_tex_addr);
  }
  if (opt_key_tex_addr != (void *)0x0) {
    LiberateOptionTexMem__FPPv(&opt_key_tex_addr);
  }
  GetOptionTexMem__FPPvi(&opt_og_tex_addr,0x13);
  uVar1 = GetLanguage__Fv();
  GetOptionTexMem__FPPvi(&opt_top_tex_addr,(char)uVar1 + 0x1110);
  GetOptionTexMem__FPPvi(&opt_brn_tex_addr,0x1115);
  uVar1 = GetLanguage__Fv();
  GetOptionTexMem__FPPvi(&opt_key_tex_addr,(char)uVar1 + 0x1116);
  OptionTexLoadReq__FPvi(opt_og_tex_addr,0x13);
  uVar1 = GetLanguage__Fv();
  OptionTexLoadReq__FPvi(opt_top_tex_addr,(char)uVar1 + 0x1110);
  OptionTexLoadReq__FPvi(opt_brn_tex_addr,0x1115);
  uVar1 = GetLanguage__Fv();
  OptionTexLoadReq__FPvi(opt_key_tex_addr,(char)uVar1 + 0x1116);
  return;
}

static void GetOptionTexMem(void **tex_addr, int data_label) {
  uint file_size;
  void *pvVar1;
  
  if (*tex_addr != (void *)0x0) {
    LiberateOptionTexMem__FPPv(tex_addr);
  }
  file_size = GetFileSize(data_label);
  pvVar1 = ol_loadGetHeap__Fi(file_size);
  *tex_addr = pvVar1;
  return;
}

static void OptionTexLoadReq(void *tex_addr, int data_label) {
  FileLoadReqEE(data_label,tex_addr,5,(undefined1 *)0x0,(void *)0x0);
  return;
}

static int OptionTexLoadWait() {
	int res;
	
  uchar uVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = 0;
  iVar2 = FileLoadIsEnd2(0x13,opt_og_tex_addr);
  if (iVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar1 = GetLanguage__Fv();
    iVar2 = FileLoadIsEnd2((char)uVar1 + 0x1110,opt_top_tex_addr);
    if (iVar2 != 0) {
      iVar2 = FileLoadIsEnd2(0x1115,opt_brn_tex_addr);
      if (iVar2 == 0) {
        uVar3 = 0;
      }
      else {
        uVar1 = GetLanguage__Fv();
        iVar2 = FileLoadIsEnd2((char)uVar1 + 0x1116,opt_key_tex_addr);
        uVar3 = (uint)(iVar2 != 0);
      }
    }
  }
  return uVar3;
}

void OptionMemFree() {
  uchar uVar1;
  
  OptionTexLoadCancel__FPvi(opt_og_tex_addr,0x13);
  uVar1 = GetLanguage__Fv();
  OptionTexLoadCancel__FPvi(opt_top_tex_addr,(char)uVar1 + 0x1110);
  OptionTexLoadCancel__FPvi(opt_brn_tex_addr,0x1115);
  uVar1 = GetLanguage__Fv();
  OptionTexLoadCancel__FPvi(opt_key_tex_addr,(char)uVar1 + 0x1116);
  LiberateOptionTexMem__FPPv(&opt_og_tex_addr);
  LiberateOptionTexMem__FPPv(&opt_top_tex_addr);
  LiberateOptionTexMem__FPPv(&opt_brn_tex_addr);
  LiberateOptionTexMem__FPPv(&opt_key_tex_addr);
  return;
}

static void LiberateOptionTexMem(void **tex_addr) {
  if (*tex_addr != (void *)0x0) {
    ol_loadFreeHeap__FPv(*tex_addr);
    *tex_addr = (void *)0x0;
  }
  return;
}

static void OptionTexLoadCancel(void *tex_addr, int data_label) {
  int iVar1;
  
  if ((tex_addr != (void *)0x0) && (iVar1 = FileLoadIsEnd2(data_label,tex_addr), iVar1 == 0)) {
    FileLoadCancel2(data_label,tex_addr,(undefined1 *)0x0,(void *)0x0);
  }
  return;
}

void OptionVibChange(int sw) {
  optm.pad_vib = (uchar)sw;
  opt_wrk.pad_vib = (uchar)sw;
  return;
}

int GetOptionVib() {
  return (int)opt_wrk.pad_vib;
}
