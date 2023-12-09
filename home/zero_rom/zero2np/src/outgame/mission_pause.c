// STATUS: NOT STARTED

#include "mission_pause.h"

static PAUSE_CTRL pause_ctrl;

static void _fixed_array_assert(char *strType, size_t v0, size_t v1) {
	static char *str = 0x3c0370;
	
  g3ddbgAssert__FbPCce(false,str_849);
  return;
}

static void** void * * _fixed_array_verifyrange<void *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_assert__FPCcUiUi(s_void__003f31b8,_max,v);
  }
  return (void **)0x0;
}

static char** char * * _fixed_array_verifyrange<char *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_assert__FPCcUiUi(s_char__003f31c0,_max,v);
  }
  return (char **)0x0;
}

static unsigned int** unsigned int * * _fixed_array_verifyrange<unsigned int *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_assert__FPCcUiUi("unsigned int*",_max,v);
  }
  return (uint **)0x0;
}

void MisPauseInit() {
  MisPauseCtrlInit__Fv();
  MisPauseInDispCaptuer__Fv();
  StreamAutoAllPause();
  SndBufAllPause();
  return;
}

static void MisPauseCtrlInit() {
  pause_ctrl.step = '\0';
  pause_ctrl.before_step = '\0';
  pause_ctrl.csr = '\0';
  pause_ctrl.title_csr = '\0';
  pause_ctrl.vib_csr = GetOptionVib__Fv();
  pause_ctrl.vib_time = 0;
  return;
}

static void MisPauseInDispCaptuer() {
  LocalCopyLtoL__Fiii(0,(int)(((sys_wrk.count + 1 & 1) * 0x23 << 0x27) >> 0x20),0x2bc0);
  return;
}

int MisPauseMain() {
	static char __FUNCTION__[13] = {
		/* [0] = */ 77,
		/* [1] = */ 105,
		/* [2] = */ 115,
		/* [3] = */ 80,
		/* [4] = */ 97,
		/* [5] = */ 117,
		/* [6] = */ 115,
		/* [7] = */ 101,
		/* [8] = */ 77,
		/* [9] = */ 97,
		/* [10] = */ 105,
		/* [11] = */ 110,
		/* [12] = */ 0
	};
	
  int iVar1;
  
  iVar1 = padIsConnected__Fi(0);
  if ((iVar1 == 0) || (iVar1 = GetPadDUALSHOCK2__Fi(0), iVar1 == 0)) {
    pause_ctrl.step = '\x02';
  }
  if (pause_ctrl.step == '\x01') {
    MisPauseReturnTitlePad__Fv();
  }
  else {
    if (pause_ctrl.step < '\x02') {
      if (pause_ctrl.step == '\0') {
        MisPausePad__Fv();
        goto LAB_0021536c;
      }
    }
    else if (pause_ctrl.step == '\x02') {
      MisPausePadErrorPad__Fv();
      goto LAB_0021536c;
    }
    SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
    PrintAssertReal("Error! %s\n");
  }
LAB_0021536c:
  if (pause_ctrl.vib_time != 0) {
    VibrateRequest__FUsUsUs(0,0xb4,0xb4);
    pause_ctrl.vib_time = pause_ctrl.vib_time + -1;
  }
  return 0;
}

static void MisPausePad() {
  int iVar1;
  GPHASE_ID_ENUM id;
  
  if (((pad[0].rpt & 0x1000U) == 0) && (iVar1 = GetPadAnalogRpt__Fi(0), iVar1 == 0)) {
    if (((pad[0].rpt & 0x4000U) == 0) && (iVar1 = GetPadAnalogRpt__Fi(1), iVar1 == 0)) {
      if (**paddat == 1) {
        SystemBankPlay__FiiiiP11_SND_3D_SETii(3,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
        MisPauseMenuSel__Fv();
        return;
      }
      if (*key_now[12] != 1) {
        if (*key_now[13] != 1) {
          return;
        }
        SetNextGPhase__F14GPHASE_ID_ENUM(GID_STORY_DEBUG);
        return;
      }
      SetIngamePauseMode__Fi(0);
      id = IngameDecideNextPhase__Fv();
      SetNextGPhase__F14GPHASE_ID_ENUM(id);
      return;
    }
    SystemBankPlay__FiiiiP11_SND_3D_SETii(0,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
    iVar1 = pause_ctrl.csr + 1;
  }
  else {
    SystemBankPlay__FiiiiP11_SND_3D_SETii(0,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
    iVar1 = pause_ctrl.csr + 2;
  }
  pause_ctrl.csr = (char)(iVar1 % 3);
  return;
}

static void MisPauseMenuSel() {
  GPHASE_ID_ENUM id;
  
  if (pause_ctrl.csr == '\x01') {
    pause_ctrl.title_csr = pause_ctrl.csr;
    pause_ctrl.step = pause_ctrl.csr;
    pause_ctrl.before_step = pause_ctrl.csr;
  }
  else {
    if (pause_ctrl.csr < '\x02') {
      if (pause_ctrl.csr == '\0') {
        SetIngamePauseMode__Fi(0);
        id = IngameDecideNextPhase__Fv();
        SetNextGPhase__F14GPHASE_ID_ENUM(id);
        return;
      }
    }
    else if (pause_ctrl.csr == '\x02') {
      pause_ctrl.vib_csr = pause_ctrl.vib_csr ^ 1;
      OptionVibChange__Fi(pause_ctrl.vib_csr);
      if (pause_ctrl.vib_csr != 0) {
        pause_ctrl.vib_time = 0x14;
        return;
      }
      pause_ctrl.vib_time = 0;
      return;
    }
    printf("<<<<<<<<<WARNING FILE[%s] LINE[%d]>>>>>>>>>>\n");
    PrintWarningReal("Error!! MisPauseMenuSel()");
  }
  return;
}

static void MisPauseReturnTitlePad() {
  int iVar1;
  
  if (((((pad[0].rpt & 0x8000U) == 0) && (iVar1 = GetPadAnalogRpt__Fi(2), iVar1 == 0)) &&
      ((pad[0].rpt & 0x2000U) == 0)) && (iVar1 = GetPadAnalogRpt__Fi(3), iVar1 == 0)) {
    if (**paddat == 1) {
      SystemBankPlay__FiiiiP11_SND_3D_SETii(3,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
      if (pause_ctrl.title_csr == '\0') {
        SetNextGPhase__F14GPHASE_ID_ENUM(GID_MISSION_SEL);
        return;
      }
    }
    else {
      if (*paddat[1] != 1) {
        return;
      }
      SystemBankPlay__FiiiiP11_SND_3D_SETii(1,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
    }
    pause_ctrl.before_step = '\0';
    pause_ctrl.step = '\0';
  }
  else {
    SystemBankPlay__FiiiiP11_SND_3D_SETii(0,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
    pause_ctrl.title_csr = pause_ctrl.title_csr ^ 1;
  }
  return;
}

static void MisPausePadErrorPad() {
  int iVar1;
  
  iVar1 = padIsConnected__Fi(0);
  if (((iVar1 != 0) && (iVar1 = GetPadDUALSHOCK2__Fi(0), iVar1 != 0)) && (**paddat == 1)) {
    SystemBankPlay__FiiiiP11_SND_3D_SETii(3,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
    pause_ctrl.step = pause_ctrl.before_step;
  }
  return;
}

void MisPauseDispMain() {
  MisPauseCaptureDataDisp__Fv();
  MisPauseWinDisp__FiiUc(0,0,0x80);
  MisPauseTitleDisp__FiiUc(0,0,0x80);
  MisPauseMenuDisp__FiiUc(0,0,0x80);
  MisPauseMenuCsrDisp__FiiUc(0,0,0x80);
  if (pause_ctrl.step == '\x01') {
    MisPauseMenuReturnTitleWinDisp__FiiUc(0,0,0x80);
  }
  if (pause_ctrl.step == '\x02') {
    if (pause_ctrl.before_step == '\x01') {
      MisPauseMenuReturnTitleWinDisp__FiiUc(0,0,0x80);
    }
    MisPausePadErrorMsgDisp__FiiUc(0,0,0x80);
  }
  return;
}

static void MisPauseCaptureDataDisp() {
  LocalCopyLtoL__Fiii(0,0x2bc0,(int)(((sys_wrk.count & 1) * 0x23 << 0x27) >> 0x20));
  return;
}

static void MisPauseWinDisp(int off_x, int off_y, u_char alpha) {
	DISP_SQAR dsq;
	SQAR_DAT pause_bg;
	
  undefined *puVar1;
  uint uVar2;
  ulong *puVar3;
  uchar *puVar4;
  int iVar5;
  float sizew;
  DISP_SQAR dsq;
  SQAR_DAT pause_bg;
  
  puVar1 = (undefined *)((int)&pause_bg.h + 3);
  uVar2 = (uint)puVar1 & 7;
  puVar3 = (ulong *)(puVar1 + -uVar2);
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | DAT_003c0478 >> (7 - uVar2) * 8;
  pause_bg._0_8_ = DAT_003c0478;
  puVar1 = (undefined *)((int)&pause_bg.y + 3);
  uVar2 = (uint)puVar1 & 7;
  puVar3 = (ulong *)(puVar1 + -uVar2);
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | DAT_003c0480 >> (7 - uVar2) * 8;
  pause_bg._8_8_ = DAT_003c0480;
  uVar2 = (uint)&pause_bg.alpha & 7;
  puVar4 = &pause_bg.alpha + -uVar2;
  *(ulong *)puVar4 = *(ulong *)puVar4 & -1L << (uVar2 + 1) * 8 | DAT_003c0488 >> (7 - uVar2) * 8;
  pause_bg._16_8_ = DAT_003c0488;
  sizew = 340.0;
  CopySqrDToSqr__FP9DISP_SQARP8SQAR_DAT(&dsq,&pause_bg);
  DispSqrD__FP9DISP_SQAR(&dsq);
  DrawCmnWindow__FUiffffUcUc(0xa0,(float)(off_x + 0x96),(float)(off_y + 0x82),sizew,172.0,alpha,'Y')
  ;
  iVar5 = ((uint)alpha * 0x14 - (uint)alpha) * 4;
  if (iVar5 < 0) {
    iVar5 = iVar5 + 0x7f;
  }
  DrawCmnLine__FfffUcUcUi(150.0,172.0,sizew,'\x01',(uchar)(iVar5 >> 7),0xa0);
  return;
}

static void MisPauseTitleDisp(int off_x, int off_y, u_char alpha) {
	DISP_SPRT title_ds;
	
  DISP_SPRT title_ds;
  
  CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&title_ds,pause_tex);
  title_ds.x = title_ds.x + (float)off_x;
  title_ds.y = title_ds.y + (float)off_y;
  title_ds.alpha = (uchar)((int)((uint)title_ds.alpha * (uint)alpha) >> 7);
  DispSprD__FP9DISP_SPRT(&title_ds);
  return;
}

static void MisPauseMenuCsrDisp(int off_x, int off_y, u_char alpha) {
  DrawCmnSelCsr__FUiffUcfUc(0x80,162.0,(float)(pause_ctrl.csr * 0x1e + 0xb8),alpha,316.0,'\x01');
  return;
}

static void MisPauseMenuDisp(int off_x, int off_y, u_char alpha) {
	int i;
	int msg_id_tbl[3];
	int col_label;
	
  uint uVar1;
  ulong *puVar2;
  int col_label;
  long lVar3;
  int y;
  int *piVar4;
  int msg_id_tbl [3];
  
  piVar4 = msg_id_tbl;
  uVar1 = (int)msg_id_tbl + 7U & 7;
  puVar2 = (ulong *)(((int)msg_id_tbl + 7U) - uVar1);
  *puVar2 = *puVar2 & -1L << (uVar1 + 1) * 8 | DAT_003c0490 >> (7 - uVar1) * 8;
  msg_id_tbl._0_8_ = DAT_003c0490;
  if (pause_ctrl.vib_csr == 0) {
    msg_id_tbl[2] = 4;
  }
  else {
    msg_id_tbl[2] = 5;
  }
  lVar3 = 0;
  y = off_y + 0xbc;
  do {
    col_label = 7;
    if (pause_ctrl.csr != lVar3) {
      col_label = 1;
    }
    if (lVar3 == 2) {
      PrintMsg_Arrange__Fiiiiiiiiii
                (0x42,msg_id_tbl[2],0x140,off_y + 0xf8,col_label,(uint)alpha,0,0,0,(int)lVar3);
    }
    else {
      PrintMsg_Arrange__Fiiiiiiiiii(0x3c,*piVar4,0x140,y,col_label,(uint)alpha,0,0,0,2);
    }
    lVar3 = (long)((int)lVar3 + 1);
    y = y + 0x1e;
    piVar4 = piVar4 + 1;
  } while (lVar3 < 3);
  return;
}

static void MisPauseMenuReturnTitleWinDisp(int off_x, int off_y, u_char alpha) {
  DrawCmnWindow__FUiffffUcUc
            (0xa0,(float)(off_x + 0x18),(float)(off_y + 0x145),592.0,112.0,alpha,'Y');
  DrawCmnSelCsr__FUiffUcfUc
            (0xa0,(float)(pause_ctrl.title_csr * 0xcf + off_x + 0x9b),(float)(off_y + 0x17d),alpha,
             0.0,'\0');
  DrawCmnSelYes__FUiffUc(0xa0,(float)(off_x + 0x99),(float)(off_y + 0x17e),alpha);
  DrawCmnSelNo__FUiffUc(0xa0,(float)(off_x + 0x168),(float)(off_y + 0x17e),alpha);
  PrintMsg__Fiiiiiii(0x3c,0x5a,off_x + 0x44,off_y + 0x15a,1,(uint)alpha,0xa0);
  return;
}

static void MisPausePadErrorMsgDisp(int off_x, int off_y, u_char alpha) {
	DISP_SQAR dsq;
	SQAR_DAT bg_base;
	
  undefined *puVar1;
  uint uVar2;
  ulong *puVar3;
  uchar *puVar4;
  DISP_SQAR dsq;
  SQAR_DAT bg_base;
  
  puVar1 = (undefined *)((int)&bg_base.h + 3);
  uVar2 = (uint)puVar1 & 7;
  puVar3 = (ulong *)(puVar1 + -uVar2);
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | DAT_003c04a0 >> (7 - uVar2) * 8;
  bg_base._0_8_ = DAT_003c04a0;
  puVar1 = (undefined *)((int)&bg_base.y + 3);
  uVar2 = (uint)puVar1 & 7;
  puVar3 = (ulong *)(puVar1 + -uVar2);
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | DAT_003c04a8 >> (7 - uVar2) * 8;
  bg_base._8_8_ = DAT_003c04a8;
  uVar2 = (uint)&bg_base.alpha & 7;
  puVar4 = &bg_base.alpha + -uVar2;
  *(ulong *)puVar4 = *(ulong *)puVar4 & -1L << (uVar2 + 1) * 8 | DAT_003c04b0 >> (7 - uVar2) * 8;
  bg_base._16_8_ = DAT_003c04b0;
  CopySqrDToSqr__FP9DISP_SQARP8SQAR_DAT(&dsq,&bg_base);
  DispSqrD__FP9DISP_SQAR(&dsq);
  DrawCmnTwoLineWindow__FUiffffUcUc(0,45.0,126.0,DAT_003ee5d4,216.0,0x80,0x80);
  PrintMsg__Fiiiiiii(0x41,0x35,0x5c,0x8e,1,0x80,0);
  return;
}
