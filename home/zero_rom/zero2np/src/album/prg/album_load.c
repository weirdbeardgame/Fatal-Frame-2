// STATUS: NOT STARTED

#include "album_load.h"

typedef struct {
	char step;
	char mc_step;
	char mode;
	char dir_check_cnt;
	char slot_csr;
	char album_sel_csr;
	char conf_csr;
	char load_file_cnt;
	fixed_array<char,5> album_flg;
} ALBUM_LOAD_CTRL;

typedef struct {
	char anim_step;
	char anim_timer;
	char csr_anim_timer;
	int msg_id;
} ALBUM_LOAD_DISP;

static void *album_load_buff_addr = NULL;
static ALBUM_LOAD_CTRL album_load_ctrl;
static ALBUM_LOAD_DISP album_load_disp;

static void _fixed_array_assert(char *strType, size_t v0, size_t v1) {
	static char *str = 0x3a0ab0;
	
  g3ddbgAssert__FbPCce(false,str_646);
  return (char *)v;
}

static void** void * * _fixed_array_verifyrange<void *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_verifyrange__H1Zc_UiUi_PX01(0x3ef3e0,_max);
  }
  return (void **)0x0;
}

static char** char * * _fixed_array_verifyrange<char *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_verifyrange__H1Zc_UiUi_PX01(0x3ef3e8,_max);
  }
  return (char **)0x0;
}

static unsigned int** unsigned int * * _fixed_array_verifyrange<unsigned int *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_verifyrange__H1Zc_UiUi_PX01(0x3a0af8,_max);
  }
  return (uint **)0x0;
}

void AlbumLoadCtrlInit() {
	int i;
	
  void *data_addr;
  char *pcVar1;
  int iVar2;
  
  iVar2 = 0;
  album_load_ctrl.conf_csr = '\x01';
  album_load_ctrl.step = '\0';
  album_load_ctrl.mc_step = '\0';
  album_load_ctrl.mode = '\0';
  album_load_ctrl.dir_check_cnt = '\0';
  album_load_ctrl.slot_csr = '\0';
  album_load_ctrl.album_sel_csr = '\0';
  album_load_ctrl.load_file_cnt = '\0';
  do {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Zc_UiUi_PX01(iVar2,5);
    pcVar1 = album_load_ctrl.album_flg.field0_0x0.m_aData + iVar2;
                    /* end of inlined section */
    iVar2 = iVar2 + 1;
                    /* end of inlined section */
    *pcVar1 = '\0';
  } while (iVar2 < 5);
  iVar2 = GetCurrentAlbum__Fv();
  data_addr = GetAlbumDataAddr__Fi(iVar2);
  SetAlbumSaveDataAddr__FPv(data_addr);
  MemoryCardExeInit__Fv();
  return;
}

static int AlbumLoadTexLoadWait() {
	void *album_sl_tex_addr;
	void *album_slot_tex_addr;
	int res;
	
  void *adrs;
  void *adrs_00;
  int iVar1;
  uint uVar2;
  
  adrs = GetAlbumSaveLoadTexAddr__Fv();
  adrs_00 = GetAlbumSlotSelTexAddr__Fv();
  uVar2 = 0;
  iVar1 = FileLoadIsEnd2(0x1100,adrs);
  if (iVar1 != 0) {
    iVar1 = FileLoadIsEnd2(0x1101,adrs_00);
    uVar2 = (uint)(iVar1 != 0);
  }
  return uVar2;
}

int AlbumLoadMain() {
	static char __FUNCTION__[14] = {
		/* [0] = */ 65,
		/* [1] = */ 108,
		/* [2] = */ 98,
		/* [3] = */ 117,
		/* [4] = */ 109,
		/* [5] = */ 76,
		/* [6] = */ 111,
		/* [7] = */ 97,
		/* [8] = */ 100,
		/* [9] = */ 77,
		/* [10] = */ 97,
		/* [11] = */ 105,
		/* [12] = */ 110,
		/* [13] = */ 0
	};
	int res;
	
  int iVar1;
  
  if (album_load_ctrl.step == '\x01') {
    iVar1 = AlbumLoadTexLoadWait__Fv();
    if (iVar1 == 0) {
      return 0;
    }
    iVar1 = AlbumMemMain__Fv();
    if (iVar1 == 0) {
      return 0;
    }
    album_load_ctrl.step = '\x02';
    return 0;
  }
  if (album_load_ctrl.step < '\x02') {
    if (album_load_ctrl.step == '\0') {
      AlbumLoadDispInit__Fv();
      AlbumMemInit__FUiPCci(0x100000,"album_load.c",0x10a);
      album_load_ctrl.step = '\x01';
      return 0;
    }
  }
  else {
    if (album_load_ctrl.step == '\x02') {
      AlbumLoadModeMain__Fv();
      return 0;
    }
    if (album_load_ctrl.step == '\x03') {
      SetAlbumTitleFlg__Fc('\x01');
      AlbumEditMenuDelete__Fv();
      if (album_load_disp.anim_step != '\x04') {
        return 0;
      }
      iVar1 = AlbumMemMain__Fv();
      if (iVar1 != 0) {
        return 1;
      }
      return 0;
    }
  }
  SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
  PrintAssertReal("Error! %s");
  return 0;
}

static void AlbumLoadModeMain() {
	static char __FUNCTION__[18] = {
		/* [0] = */ 65,
		/* [1] = */ 108,
		/* [2] = */ 98,
		/* [3] = */ 117,
		/* [4] = */ 109,
		/* [5] = */ 76,
		/* [6] = */ 111,
		/* [7] = */ 97,
		/* [8] = */ 100,
		/* [9] = */ 77,
		/* [10] = */ 111,
		/* [11] = */ 100,
		/* [12] = */ 101,
		/* [13] = */ 77,
		/* [14] = */ 97,
		/* [15] = */ 105,
		/* [16] = */ 110,
		/* [17] = */ 0
	};
	
  if (album_load_ctrl.mode == '\0') {
    SetAlbumTitleFlg__Fc('\x01');
    AlbumLoadSlotSelPad__Fv();
    return;
  }
  if (album_load_ctrl.mode != '\x01') {
    SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
    PrintAssertReal("Error! %s");
    return;
  }
  SetAlbumTitleFlg__Fc('\0');
  AlbumLoadMcLoad__Fv();
  return;
}

static void AlbumLoadSlotSelPad() {
  int iVar1;
  
  if (((((pad[0].rpt & 0x1000U) == 0) && (iVar1 = GetPadAnalogRpt__Fi(0), iVar1 == 0)) &&
      ((pad[0].rpt & 0x4000U) == 0)) && (iVar1 = GetPadAnalogRpt__Fi(1), iVar1 == 0)) {
    if (**paddat == 1) {
      album_load_ctrl.mode = '\x01';
      album_load_ctrl.mc_step = '\0';
      MemoryCardSetAccessPort__Fi((int)album_load_ctrl.slot_csr);
      SystemBankPlay__FiiiiP11_SND_3D_SETii(3,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
      return;
    }
    if (*paddat[1] == 1) {
      SystemBankPlay__FiiiiP11_SND_3D_SETii(1,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
      AlbumLoadOutReq__Fv();
    }
  }
  else {
    SystemBankPlay__FiiiiP11_SND_3D_SETii(0,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
    album_load_ctrl.slot_csr =
         (char)(album_load_ctrl.slot_csr + 1) + (char)((album_load_ctrl.slot_csr + 1) / 2) * -2;
  }
  return;
}

static void AlbumLoadOutReq() {
  album_load_ctrl.step = '\x03';
  album_load_disp.anim_timer = '\0';
  album_load_disp.anim_step = '\x03';
  AlbumMemFree__FPCci("album_load.c",0x181);
  return;
}

static void AlbumLoadMcLoad() {
	static char __FUNCTION__[16] = {
		/* [0] = */ 65,
		/* [1] = */ 108,
		/* [2] = */ 98,
		/* [3] = */ 117,
		/* [4] = */ 109,
		/* [5] = */ 76,
		/* [6] = */ 111,
		/* [7] = */ 97,
		/* [8] = */ 100,
		/* [9] = */ 77,
		/* [10] = */ 99,
		/* [11] = */ 76,
		/* [12] = */ 111,
		/* [13] = */ 97,
		/* [14] = */ 100,
		/* [15] = */ 0
	};
	
  switch(album_load_ctrl.mc_step) {
  case '\0':
    AlbumLoadMcCardCheckInit__Fv();
  case '\x01':
    AlbumLoadMcCardCheckWait__Fv();
    return;
  case '\x02':
    AlbumLoadMcGetDirInfoInit__Fv();
  case '\x03':
    AlbumLoadMcGetDirInfoWait__Fv();
    return;
  case '\x04':
    AlbumLoadMcLoadAlbumSelInit__Fv();
  case '\x05':
    AlbumLoadMcLoadAlbumSelWait__Fv();
    return;
  case '\x06':
    AlbumLoadMcCheckAgainInit__Fv();
  case '\a':
    AlbumLoadMcCheckAgainWait__Fv();
    return;
  case '\b':
    AlbumLoadMcLoadConfInit__Fv();
  case '\t':
    AlbumLoadMcLoadConfWait__Fv();
    return;
  case '\n':
    AlbumLoadMcLoadInit__Fv();
  case '\v':
    AlbumLoadMcLoadWait__Fv();
    return;
  case '\f':
    AlbumLoadMcErrorConfInit__Fv();
  case '\r':
    AlbumLoadMcErrorConfWait__Fv();
    return;
  case '\x0e':
    AlbumLoadMcEndConf__Fv();
    return;
  default:
    SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
    PrintAssertReal("Error! %s");
    return;
  }
}

static void AlbumLoadMcCardCheckInit() {
  MemoryCardGetCardInfoInit__Fii((int)album_load_ctrl.slot_csr,0);
  album_load_disp.msg_id = 0;
  album_load_ctrl.mc_step = '\x01';
  return;
}

static void AlbumLoadMcCardCheckWait() {
	int mc_res;
	
  int iVar1;
  
  iVar1 = MemoryCardGetCardInfoMain__Fv();
  if (iVar1 == 1) {
    iVar1 = GetAccessMemoryCardFormat__Fv();
    if (iVar1 == 1) {
      album_load_ctrl.mc_step = '\x02';
      album_load_ctrl.dir_check_cnt = '\0';
      return;
    }
    album_load_disp.msg_id = 0x2d;
  }
  else {
    if (-1 < iVar1) {
      return;
    }
    album_load_disp.msg_id = 2;
    switch(iVar1) {
    case -0x14:
      album_load_disp.msg_id = 1;
      break;
    case -0x13:
    case -0x12:
    case -0x11:
    case -0x10:
    case -0xf:
    case -0xe:
    case -0xd:
    case -0xc:
    case -0xb:
    case -10:
    case -9:
    case -8:
    case -7:
    case -6:
    case -5:
    case -4:
    case -3:
      album_load_disp.msg_id = 2;
      break;
    case -2:
      album_load_disp.msg_id = 0x2d;
      break;
    case -1:
      album_load_disp.msg_id = 0;
      album_load_ctrl.mc_step = '\x02';
      album_load_ctrl.dir_check_cnt = '\0';
      return;
    }
  }
  album_load_ctrl.mc_step = '\f';
  return;
}

static void AlbumLoadMcGetDirInfoInit() {
	char path_name[55];
	
  int port;
  int slot;
  char path_name [55];
  
  memset(path_name,0,0x37);
  MemoryCardMakeSearchDirPath__FPci(path_name,album_load_ctrl.dir_check_cnt + 1);
  port = GetAccessMemoryCardPort__Fv();
  slot = GetAccessMemoryCardSlot__Fv();
  MemoryCardGetDirInfoInit__FiiPc(port,slot,path_name);
  album_load_ctrl.mc_step = '\x03';
  return;
}

static void AlbumLoadMcGetDirInfoWait() {
	int mc_res;
	int i;
	
  int iVar1;
  int iVar2;
  
  iVar1 = MemoryCardGetDirInfoMain__Fv();
  if (iVar1 == 1) {
    iVar2 = (int)album_load_ctrl.dir_check_cnt;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Zc_UiUi_PX01(album_load_ctrl.dir_check_cnt,5);
                    /* end of inlined section */
    album_load_ctrl.album_flg.field0_0x0.m_aData[iVar2] = '\x01';
LAB_00124cd0:
                    /* end of inlined section */
    album_load_ctrl.dir_check_cnt = album_load_ctrl.dir_check_cnt + '\x01';
  }
  else {
    if (-1 < iVar1) goto LAB_00124d10;
    switch(iVar1) {
    case -0x14:
      album_load_disp.msg_id = 1;
      break;
    case -0x13:
    case -0x12:
    case -0x11:
    case -0x10:
    case -0xf:
    case -0xe:
    case -0xd:
    case -0xc:
    case -0xb:
    case -10:
    case -9:
    case -8:
    case -7:
    case -5:
    case -3:
    default:
      album_load_disp.msg_id = 2;
      break;
    case -6:
    case -4:
      iVar2 = (int)album_load_ctrl.dir_check_cnt;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
      _fixed_array_verifyrange__H1Zc_UiUi_PX01(album_load_ctrl.dir_check_cnt,5);
      album_load_ctrl.album_flg.field0_0x0.m_aData[iVar2] = '\0';
      goto LAB_00124cd0;
    case -2:
      album_load_disp.msg_id = 0x2d;
    }
    album_load_ctrl.mc_step = '\f';
    album_load_ctrl.dir_check_cnt = '\0';
  }
LAB_00124d10:
  if (((iVar1 == 1) || (iVar1 == -4)) || (iVar1 == -6)) {
    if (album_load_ctrl.dir_check_cnt < '\x05') {
      album_load_disp.msg_id = 0;
      album_load_ctrl.mc_step = '\x02';
    }
    else {
      for (iVar1 = 0; iVar1 < 5; iVar1 = iVar1 + 1) {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
        _fixed_array_verifyrange__H1Zc_UiUi_PX01(iVar1,5);
        if (album_load_ctrl.album_flg.field0_0x0.m_aData[iVar1] == '\x01') {
                    /* end of inlined section */
          album_load_disp.msg_id = 0x2a;
          album_load_ctrl.mc_step = '\x04';
          album_load_ctrl.album_sel_csr = (char)iVar1;
          return;
        }
      }
      album_load_disp.msg_id = 0x2d;
      album_load_ctrl.mc_step = '\f';
    }
  }
  return;
}

static void AlbumLoadMcLoadAlbumSelInit() {
  MemoryCardCheckEveryFrameInit__Fii((int)album_load_ctrl.slot_csr,0);
  album_load_disp.msg_id = 0x2a;
  album_load_ctrl.mc_step = '\x05';
  return;
}

static void AlbumLoadMcLoadAlbumSelWait() {
  AlbumLoadMcLoadAlbumSelPad__Fv();
  AlbumLoadMcEveryFrameCheck__Fv();
  return;
}

static void AlbumLoadMcLoadAlbumSelPad() {
	int i;
	char csr_back_up;
	
  int iVar1;
  char cVar2;
  int iVar3;
  
  cVar2 = album_load_ctrl.album_sel_csr;
  if (((pad[0].rpt & 0x8000U) == 0) && (iVar3 = GetPadAnalogRpt__Fi(2), iVar3 == 0)) {
    if (((pad[0].rpt & 0x2000U) == 0) && (iVar3 = GetPadAnalogRpt__Fi(3), iVar3 == 0)) {
      if (**paddat == 1) {
        SystemBankPlay__FiiiiP11_SND_3D_SETii(3,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
        album_load_ctrl.mc_step = '\x06';
        album_load_disp.msg_id = 0;
      }
      else if (*paddat[1] == 1) {
        SystemBankPlay__FiiiiP11_SND_3D_SETii(1,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
        album_load_disp.msg_id = 0;
        album_load_ctrl.mode = '\0';
      }
    }
    else {
      iVar3 = 0;
      do {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
        iVar1 = (album_load_ctrl.album_sel_csr + 1) % 5;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
        album_load_ctrl.album_sel_csr = (char)iVar1;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
        _fixed_array_verifyrange__H1Zc_UiUi_PX01(iVar1,5);
        iVar3 = iVar3 + 1;
        if (album_load_ctrl.album_flg.field0_0x0.m_aData[iVar1] == '\x01') break;
                    /* end of inlined section */
      } while (iVar3 < 5);
      if (album_load_ctrl.album_sel_csr != cVar2) {
        SystemBankPlay__FiiiiP11_SND_3D_SETii(0,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
        return;
      }
    }
  }
  else {
    iVar3 = 0;
    do {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
      iVar1 = (album_load_ctrl.album_sel_csr + 4) % 5;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
      album_load_ctrl.album_sel_csr = (char)iVar1;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
      _fixed_array_verifyrange__H1Zc_UiUi_PX01(iVar1,5);
      iVar3 = iVar3 + 1;
      if (album_load_ctrl.album_flg.field0_0x0.m_aData[iVar1] == '\x01') break;
                    /* end of inlined section */
    } while (iVar3 < 5);
    if (album_load_ctrl.album_sel_csr != cVar2) {
      SystemBankPlay__FiiiiP11_SND_3D_SETii(0,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
      return;
    }
  }
  return;
}

static void AlbumLoadMcCheckAgainInit() {
	char path_name[55];
	
  char path_name [55];
  
  memset(path_name,0,0x37);
  MemoryCardMakeSearchDirPath__FPci(path_name,album_load_ctrl.album_sel_csr + 1);
  MemoryCardCheckInit__FiiPc((int)album_load_ctrl.slot_csr,0,path_name);
  album_load_disp.msg_id = 0;
  album_load_ctrl.mc_step = '\a';
  return;
}

static void AlbumLoadMcCheckAgainWait() {
	int mc_res;
	
  int iVar1;
  
  iVar1 = MemoryCardCheckMain__Fv();
  if (iVar1 == 1) {
    iVar1 = MemoryCardCheckDirBroken__Fi(album_load_ctrl.album_sel_csr + 1);
    if (iVar1 == 0) {
      album_load_ctrl.mc_step = '\f';
      album_load_disp.msg_id = 0x2b;
    }
    else {
      album_load_ctrl.mc_step = '\b';
      album_load_disp.msg_id = 0xe;
      album_load_ctrl.conf_csr = '\x01';
    }
  }
  else if (iVar1 < 0) {
    album_load_disp.msg_id = 2;
    switch(iVar1) {
    case -0x14:
    case -1:
      album_load_disp.msg_id = 1;
      break;
    case -0x13:
    case -0x12:
    case -0x11:
    case -0x10:
    case -0xf:
    case -0xe:
    case -0xd:
    case -0xc:
    case -0xb:
    case -10:
    case -9:
    case -8:
    case -7:
    case -5:
    case -3:
      album_load_disp.msg_id = 2;
      break;
    case -6:
      album_load_disp.msg_id = 0x2b;
      break;
    case -4:
      album_load_disp.msg_id = 0x2d;
      break;
    case -2:
      album_load_disp.msg_id = 0x2d;
    }
    album_load_ctrl.mc_step = '\f';
  }
  return;
}

static void AlbumLoadMcLoadConfInit() {
  MemoryCardCheckEveryFrameInit__Fii((int)album_load_ctrl.slot_csr,0);
  album_load_ctrl.conf_csr = '\x01';
  album_load_ctrl.mc_step = '\t';
  album_load_disp.msg_id = 0xe;
  return;
}

static void AlbumLoadMcLoadConfWait() {
  AlbumLoadMcLoadConfPad__Fv();
  AlbumLoadMcEveryFrameCheck__Fv();
  return;
}

static void AlbumLoadMcLoadConfPad() {
  int iVar1;
  
  if (((((pad[0].rpt & 0x8000U) == 0) && (iVar1 = GetPadAnalogRpt__Fi(2), iVar1 == 0)) &&
      ((pad[0].rpt & 0x2000U) == 0)) && (iVar1 = GetPadAnalogRpt__Fi(3), iVar1 == 0)) {
    if (**paddat == 1) {
      SystemBankPlay__FiiiiP11_SND_3D_SETii(3,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
      if (album_load_ctrl.conf_csr == '\0') {
        album_load_ctrl.mc_step = '\n';
        album_load_disp.msg_id = 0x2c;
        album_load_ctrl.load_file_cnt = '\0';
      }
      else {
        album_load_ctrl.mc_step = '\x04';
        album_load_disp.msg_id = 0x2a;
      }
    }
    else if (*paddat[1] == 1) {
      SystemBankPlay__FiiiiP11_SND_3D_SETii(1,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
      album_load_ctrl.mc_step = '\x04';
      album_load_disp.msg_id = 0x2a;
    }
  }
  else {
    SystemBankPlay__FiiiiP11_SND_3D_SETii(0,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
    album_load_ctrl.conf_csr = album_load_ctrl.conf_csr ^ 1;
  }
  return;
}

static void AlbumLoadMcLoadInit() {
	static char __FUNCTION__[20] = {
		/* [0] = */ 65,
		/* [1] = */ 108,
		/* [2] = */ 98,
		/* [3] = */ 117,
		/* [4] = */ 109,
		/* [5] = */ 76,
		/* [6] = */ 111,
		/* [7] = */ 97,
		/* [8] = */ 100,
		/* [9] = */ 77,
		/* [10] = */ 99,
		/* [11] = */ 76,
		/* [12] = */ 111,
		/* [13] = */ 97,
		/* [14] = */ 100,
		/* [15] = */ 73,
		/* [16] = */ 110,
		/* [17] = */ 105,
		/* [18] = */ 116,
		/* [19] = */ 0
	};
	int size;
	char path_name[55];
	
  int size;
  char path_name [55];
  
  memset(path_name,0,0x37);
  MemoryCardSetFilePath__FPcii(path_name,album_load_ctrl.album_sel_csr + 1,0);
  size = GetMemoryCardDataSize__Fii(album_load_ctrl.album_sel_csr + 1,0);
  if (0x100000 < size) {
    SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
    PrintAssertReal("Error! %s");
  }
  album_load_buff_addr = GetAlbumMemAddr__Fv();
  MemoryCardFileLoadInit__FiiPcPvi
            ((int)album_load_ctrl.slot_csr,0,path_name,album_load_buff_addr,size);
  album_load_ctrl.mc_step = '\v';
  album_load_disp.msg_id = 0x2c;
  return;
}

static void AlbumLoadMcLoadWait() {
	int mc_res;
	int size;
	
  int iVar1;
  int iVar2;
  
  iVar1 = MemoryCardFileLoadMain__Fv();
  if (iVar1 == 1) {
    iVar1 = GetMemoryCardDataSize__Fii(album_load_ctrl.album_sel_csr + 1,0);
    iVar2 = MemoryCardCheckFileBroken__FPvi(album_load_buff_addr,iVar1);
    if ((iVar2 == 0) ||
       (iVar1 = MemoryCardCheckNewFileLoad__FPvi(album_load_buff_addr,iVar1), iVar1 != 0)) {
      album_load_ctrl.mc_step = '\f';
      album_load_disp.msg_id = 0x2b;
    }
    else {
      DevelopMemoryCardLoadData__FPcii
                ((char *)album_load_buff_addr,album_load_ctrl.album_sel_csr + 1,0);
      album_load_ctrl.mc_step = '\x0e';
      album_load_disp.msg_id = 0x10;
    }
  }
  else if (iVar1 < 0) {
    album_load_disp.msg_id = 0xf;
    switch(iVar1) {
    case -10:
    case -9:
    case -8:
    case -7:
    case -6:
    case -5:
    case -4:
      album_load_disp.msg_id = 0xf;
      break;
    case -3:
      album_load_disp.msg_id = 0x2b;
      break;
    case -2:
      album_load_disp.msg_id = 0x2d;
    }
    album_load_ctrl.mc_step = '\f';
  }
  return;
}

static void AlbumLoadMcErrorConfInit() {
  MemoryCardCheckEveryFrameInit__Fii((int)album_load_ctrl.slot_csr,0);
  album_load_ctrl.mc_step = '\r';
  return;
}

static void AlbumLoadMcErrorConfWait() {
	int mc_res;
	
  int iVar1;
  
  AlbumLoadMcErrorConfPad__Fv();
  iVar1 = MemoryCardCheckEveryFrameMain__Fv();
  if (iVar1 == -1) {
    album_load_disp.msg_id = 0;
    album_load_ctrl.mc_step = '\0';
  }
  else {
    if (iVar1 == 1) {
      MemoryCardCheckEveryFrameInit__Fii((int)album_load_ctrl.slot_csr,0);
      return;
    }
    if (iVar1 < 0) {
      MemoryCardCheckEveryFrameInit__Fii((int)album_load_ctrl.slot_csr,0);
    }
  }
  return;
}

static void AlbumLoadMcErrorConfPad() {
  int no;
  
  if (**paddat == 1) {
    no = 3;
  }
  else {
    if (*paddat[1] != 1) {
      return;
    }
    no = 1;
  }
  SystemBankPlay__FiiiiP11_SND_3D_SETii(no,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
  album_load_ctrl.mode = '\0';
  album_load_disp.msg_id = 0;
  return;
}

static void AlbumLoadMcEndConf() {
  if (**paddat != 1) {
    if (*paddat[1] == 1) {
      SystemBankPlay__FiiiiP11_SND_3D_SETii(1,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
      album_load_disp.msg_id = 0;
      album_load_ctrl.mode = '\0';
      AlbumEditUncompressPhotoReq__Fv();
    }
    return;
  }
  SystemBankPlay__FiiiiP11_SND_3D_SETii(3,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
  album_load_disp.msg_id = 0;
  album_load_ctrl.mode = '\0';
  AlbumEditUncompressPhotoReq__Fv();
  return;
}

static void AlbumLoadMcEveryFrameCheck() {
	int mc_res;
	
  int iVar1;
  
  iVar1 = MemoryCardCheckEveryFrameMain__Fv();
  if (iVar1 < 0) {
    album_load_disp.msg_id = 2;
    switch(iVar1) {
    case -0x14:
      album_load_disp.msg_id = 1;
      break;
    case -0x13:
    case -0x12:
    case -0x11:
    case -0x10:
    case -0xf:
    case -0xe:
    case -0xd:
    case -0xc:
    case -0xb:
    case -10:
    case -9:
    case -8:
    case -7:
    case -6:
    case -5:
    case -4:
    case -3:
      album_load_disp.msg_id = 2;
      break;
    case -2:
      album_load_disp.msg_id = 0x2d;
      break;
    case -1:
      album_load_disp.msg_id = 1;
    }
    album_load_ctrl.mc_step = '\f';
  }
  return;
}

void AlbumLoadEnd() {
  MemoryCardEnd__Fv();
  return;
}

static void AlbumLoadDispInit() {
  album_load_disp.csr_anim_timer = '\0';
  album_load_disp.anim_step = '\0';
  album_load_disp.anim_timer = '\0';
  album_load_disp.msg_id = 0;
  return;
}

void AlbumLoadDispMain() {
	static char __FUNCTION__[18] = {
		/* [0] = */ 65,
		/* [1] = */ 108,
		/* [2] = */ 98,
		/* [3] = */ 117,
		/* [4] = */ 109,
		/* [5] = */ 76,
		/* [6] = */ 111,
		/* [7] = */ 97,
		/* [8] = */ 100,
		/* [9] = */ 68,
		/* [10] = */ 105,
		/* [11] = */ 115,
		/* [12] = */ 112,
		/* [13] = */ 77,
		/* [14] = */ 97,
		/* [15] = */ 105,
		/* [16] = */ 110,
		/* [17] = */ 0
	};
	u_char alpha;
	
  uchar alpha;
  
  alpha = 0x80;
  if (((byte)album_load_ctrl.step - 2 < 2) &&
     (AlbumInOutAnimCtrl__FPcT0PUc(&album_load_disp.anim_step,&album_load_disp.anim_timer,&alpha),
     album_load_disp.anim_step != '\x04')) {
    AlbumBlackBgDisp__FiiUcUc(0,0,alpha,0x80);
    if (album_load_ctrl.mode == '\0') {
      AlbumLoadSlotSelDisp__FiiUc(0,0,alpha);
    }
    else if (album_load_ctrl.mode == '\x01') {
      AlbumLoadMcLoadDisp__FiiUc(0,0,alpha);
    }
    else {
      SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
      PrintAssertReal("Error! %s");
    }
  }
  return;
}

static void AlbumLoadSlotSelDisp(int off_x, int off_y, u_char alpha) {
  void *tm2_addr;
  
  tm2_addr = GetAlbumSlotSelTexAddr__Fv();
  PK2SendVram__FUiiii((uint)tm2_addr,-1,-1,0);
  AlbumSlotSelWinDisp__FiiiUc((int)album_load_ctrl.slot_csr,0,0,alpha);
  DrawCmnWindow__FUiffffUcUc(0,24.0,330.0,592.0,112.0,alpha,'f');
  PrintMsg__Fiiiiiii(0x50,0xc,0x44,0x15d,1,(uint)alpha,0);
  AlbumSlotSelCaptionDisp__FiiUc(off_x,off_y,alpha);
  return;
}

static void AlbumLoadMcLoadDisp(int off_x, int off_y, u_char alpha) {
	static char __FUNCTION__[20] = {
		/* [0] = */ 65,
		/* [1] = */ 108,
		/* [2] = */ 98,
		/* [3] = */ 117,
		/* [4] = */ 109,
		/* [5] = */ 76,
		/* [6] = */ 111,
		/* [7] = */ 97,
		/* [8] = */ 100,
		/* [9] = */ 77,
		/* [10] = */ 99,
		/* [11] = */ 76,
		/* [12] = */ 111,
		/* [13] = */ 97,
		/* [14] = */ 100,
		/* [15] = */ 68,
		/* [16] = */ 105,
		/* [17] = */ 115,
		/* [18] = */ 112,
		/* [19] = */ 0
	};
	void *album_slot_tex_addr;
	void *album_sl_addr;
	u_char csr_rgb;
	
  void *tm2_addr;
  void *tm2_addr_00;
  int x;
  int y;
  uchar csr_rgb;
  
  tm2_addr = GetAlbumSlotSelTexAddr__Fv();
  tm2_addr_00 = GetAlbumSaveLoadTexAddr__Fv();
  csr_rgb = 0x80;
  switch(album_load_ctrl.mc_step) {
  case '\0':
  case '\x01':
  case '\x02':
  case '\x03':
    PK2SendVram__FUiiii((uint)tm2_addr,-1,-1,0);
    AlbumSlotSelWinDisp__FiiiUc((int)album_load_ctrl.slot_csr,off_x,off_y,alpha);
    AlbumMcMsgWinDisp__FiiUc(off_x,off_y,alpha);
    break;
  case '\x04':
  case '\x05':
    PK2SendVram__FUiiii((uint)tm2_addr_00,-1,-1,0);
    AlbumSaveSelAlbumCsrFlareDisp__FiiiUcUc((int)album_load_ctrl.album_sel_csr,0,0,alpha,0x80);
    AlbumLoadAlbumSelDisp__FUc(alpha);
    Zero2Anim2D_CsrAnimCtrl__FPcPUc(&album_load_disp.csr_anim_timer,&csr_rgb);
    AlbumSaveSelAlbumCsrDisp__FiiiUcUc((int)album_load_ctrl.album_sel_csr,0,0,alpha,csr_rgb);
    AlbumSlotSelCaptionDisp__FiiUc(off_x,off_y,alpha);
    DrawCmnWindow__FUiffffUcUc(0,24.0,330.0,592.0,112.0,alpha,'f');
    x = 0x44;
    y = 0x15d;
    goto LAB_00125bc0;
  case '\x06':
  case '\a':
  case '\n':
  case '\v':
    PK2SendVram__FUiiii((uint)tm2_addr_00,-1,-1,0);
    Zero2Anim2D_CsrAnimCtrl__FPcPUc(&album_load_disp.csr_anim_timer,&csr_rgb);
    AlbumSaveSelAlbumCsrFlareDisp__FiiiUcUc((int)album_load_ctrl.album_sel_csr,0,0,alpha,csr_rgb);
    AlbumLoadAlbumSelDisp__FUc(alpha);
    AlbumSaveSelAlbumCsrDisp__FiiiUcUc((int)album_load_ctrl.album_sel_csr,0,0,alpha,0x80);
    AlbumMcMsgWinDisp__FiiUc(off_x,off_y,alpha);
    break;
  case '\b':
  case '\t':
    PK2SendVram__FUiiii((uint)tm2_addr_00,-1,-1,0);
    Zero2Anim2D_CsrAnimCtrl__FPcPUc(&album_load_disp.csr_anim_timer,&csr_rgb);
    AlbumSaveSelAlbumCsrFlareDisp__FiiiUcUc((int)album_load_ctrl.album_sel_csr,0,0,alpha,csr_rgb);
    AlbumLoadAlbumSelDisp__FUc(alpha);
    AlbumSaveSelAlbumCsrDisp__FiiiUcUc((int)album_load_ctrl.album_sel_csr,0,0,alpha,0x80);
    AlbumMcMsgWinDisp__FiiUc(off_x,off_y,alpha);
    PrintMsg__Fiiiiiii(0x50,album_load_disp.msg_id,0x5c,0x8e,1,(uint)alpha,0);
    DrawCmnYesNoSel__FifUcUi((int)album_load_ctrl.conf_csr,(float)(off_y + 0x127),alpha,0);
    goto LAB_00125d60;
  case '\f':
  case '\r':
    PK2SendVram__FUiiii((uint)tm2_addr,-1,-1,0);
    AlbumSlotSelWinDisp__FiiiUc((int)album_load_ctrl.slot_csr,off_x,off_y,alpha);
    AlbumMcMsgWinDisp__FiiUc(off_x,off_y,alpha);
    goto LAB_00125d44;
  case '\x0e':
    PK2SendVram__FUiiii((uint)tm2_addr_00,-1,-1,0);
    Zero2Anim2D_CsrAnimCtrl__FPcPUc(&album_load_disp.csr_anim_timer,&csr_rgb);
    AlbumSaveSelAlbumCsrFlareDisp__FiiiUcUc((int)album_load_ctrl.album_sel_csr,0,0,alpha,csr_rgb);
    AlbumLoadAlbumSelDisp__FUc(alpha);
    AlbumSaveSelAlbumCsrDisp__FiiiUcUc((int)album_load_ctrl.album_sel_csr,0,0,alpha,0x80);
    AlbumMcMsgWinDisp__FiiUc(off_x,off_y,alpha);
LAB_00125d44:
    PrintMsg__Fiiiiiii(0x50,album_load_disp.msg_id,0x5c,0x8e,1,(uint)alpha,0);
LAB_00125d60:
    AlbumSlotSelCaptionDisp__FiiUc(off_x,off_y,alpha);
    return;
  default:
    SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
    PrintAssertReal("Error! %s");
    return;
  }
  x = 0x5c;
  y = 0x8e;
LAB_00125bc0:
  PrintMsg__Fiiiiiii(0x50,album_load_disp.msg_id,x,y,1,(uint)alpha,0);
  return;
}

static void AlbumLoadAlbumSelDisp(u_char alpha) {
	int i;
	int msg_col;
	
  int album_type;
  int col_label;
  long lVar1;
  
  lVar1 = 0;
  do {
    album_type = (int)lVar1;
    if (lVar1 == album_load_ctrl.album_sel_csr) {
      col_label = 0x18;
    }
    else {
      AlbumSaveNonSelAlbumCsrDisp__FiiiUcUc(album_type,0,0,alpha,0x80);
      col_label = 0x17;
    }
    AlbumSaveSelAlbumNameDisp__FiiiUci(album_type,0,0,alpha,col_label);
    AlbumSaveSelAlbumDisp__FiiiUc(album_type,0,0,alpha);
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Zc_UiUi_PX01(lVar1,5);
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
    lVar1 = (long)(album_type + 1);
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    if (album_load_ctrl.album_flg.field0_0x0.m_aData[album_type] == '\0') {
                    /* end of inlined section */
      AlbumSaveAlbumMaskDisp__FiiiUcUc(album_type,0,0,alpha,0x80);
    }
  } while (lVar1 < 5);
  AlbumSaveSelSlotDisp__FiiiUcUc((int)album_load_ctrl.slot_csr,0,0,alpha,0x80);
  return;
}

char* char * _fixed_array_verifyrange<char>(size_t v, size_t _max) {
  g3ddbgAssert__FbPCce(false,str_646);
  return (char *)v;
}

static void __static_initialization_and_destruction_0(int __initialize_p, int __priority) {
  return;
}

static void global constructors keyed to AlbumLoadCtrlInit() {
  __static_initialization_and_destruction_0(1,0xffff);
  return;
}
