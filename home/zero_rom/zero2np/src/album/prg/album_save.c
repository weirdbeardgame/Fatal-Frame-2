// STATUS: NOT STARTED

#include "album_save.h"

typedef struct {
	char step;
	char mc_step;
	char mode;
	char dir_check_cnt;
	char slot_csr;
	char album_sel_csr;
	char conf_csr;
	char save_file_cnt;
	char format_end_cnt;
} ALBUM_SAVE_CTRL;

typedef struct {
	char anim_step;
	char anim_timer;
	char csr_anim_timer;
	int msg_id;
} ALBUM_SAVE_DISP;

static void *album_save_buff_addr = NULL;
unsigned char ALBUM_INFO type_info node[8];
static ALBUM_SAVE_CTRL album_save_ctrl;
static ALBUM_SAVE_DISP album_save_disp;

static void _fixed_array_assert(char *strType, size_t v0, size_t v1) {
	static char *str = 0x3a0e70;
	
  g3ddbgAssert__FbPCce(false,str_646);
  return (type_info *)v;
}

static void** void * * _fixed_array_verifyrange<void *>(size_t v, size_t _max) {
  if (_max <= v) {
    __tf10ALBUM_INFO(0x3ef428,_max);
  }
  return (void **)0x0;
}

static char** char * * _fixed_array_verifyrange<char *>(size_t v, size_t _max) {
  if (_max <= v) {
    __tf10ALBUM_INFO(0x3ef430,_max);
  }
  return (char **)0x0;
}

static unsigned int** unsigned int * * _fixed_array_verifyrange<unsigned int *>(size_t v, size_t _max) {
  if (_max <= v) {
    __tf10ALBUM_INFO(0x3a0eb8,_max);
  }
  return (uint **)0x0;
}

void AlbumSaveCtrlInit() {
  int album_data_label;
  void *data_addr;
  
  album_save_ctrl.conf_csr = '\x01';
  album_save_ctrl.format_end_cnt = '\0';
  album_save_ctrl.step = '\0';
  album_save_ctrl.mc_step = '\0';
  album_save_ctrl.mode = '\0';
  album_save_ctrl.dir_check_cnt = '\0';
  album_save_ctrl.slot_csr = '\0';
  album_save_ctrl.album_sel_csr = '\0';
  album_save_ctrl.save_file_cnt = '\0';
  album_data_label = GetCurrentAlbum__Fv();
  data_addr = GetAlbumDataAddr__Fi(album_data_label);
  SetAlbumSaveDataAddr__FPv(data_addr);
  MemoryCardExeInit__Fv();
  return;
}

static int AlbumSaveTexLoadWait() {
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

int AlbumSaveMain() {
	static char __FUNCTION__[14] = {
		/* [0] = */ 65,
		/* [1] = */ 108,
		/* [2] = */ 98,
		/* [3] = */ 117,
		/* [4] = */ 109,
		/* [5] = */ 83,
		/* [6] = */ 97,
		/* [7] = */ 118,
		/* [8] = */ 101,
		/* [9] = */ 77,
		/* [10] = */ 97,
		/* [11] = */ 105,
		/* [12] = */ 110,
		/* [13] = */ 0
	};
	int res;
	
  int iVar1;
  
  if (album_save_ctrl.step == '\x01') {
    iVar1 = AlbumSaveTexLoadWait__Fv();
    if (iVar1 == 0) {
      return 0;
    }
    iVar1 = AlbumMemMain__Fv();
    if (iVar1 == 0) {
      return 0;
    }
    album_save_ctrl.step = '\x02';
    return 0;
  }
  if (album_save_ctrl.step < '\x02') {
    if (album_save_ctrl.step == '\0') {
      AlbumSaveDispInit__Fv();
      AlbumMemInit__FUiPCci(0x100000,"album_save.c",0x129);
      album_save_ctrl.step = '\x01';
      return 0;
    }
  }
  else {
    if (album_save_ctrl.step == '\x02') {
      AlbumSaveModeMain__Fv();
      return 0;
    }
    if (album_save_ctrl.step == '\x03') {
      SetAlbumTitleFlg__Fc('\x01');
      AlbumEditMenuDelete__Fv();
      if (album_save_disp.anim_step != '\x04') {
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

static void AlbumSaveModeMain() {
	static char __FUNCTION__[18] = {
		/* [0] = */ 65,
		/* [1] = */ 108,
		/* [2] = */ 98,
		/* [3] = */ 117,
		/* [4] = */ 109,
		/* [5] = */ 83,
		/* [6] = */ 97,
		/* [7] = */ 118,
		/* [8] = */ 101,
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
	
  if (album_save_ctrl.mode == '\0') {
    SetAlbumTitleFlg__Fc('\x01');
    AlbumSaveSlotSelPad__Fv();
    return;
  }
  if (album_save_ctrl.mode != '\x01') {
    SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
    PrintAssertReal("Error! %s");
    return;
  }
  SetAlbumTitleFlg__Fc('\0');
  AlbumSaveMcSave__Fv();
  return;
}

static void AlbumSaveSlotSelPad() {
  int iVar1;
  
  if (((((pad[0].rpt & 0x1000U) == 0) && (iVar1 = GetPadAnalogRpt__Fi(0), iVar1 == 0)) &&
      ((pad[0].rpt & 0x4000U) == 0)) && (iVar1 = GetPadAnalogRpt__Fi(1), iVar1 == 0)) {
    if (**paddat == 1) {
      album_save_ctrl.mode = '\x01';
      album_save_ctrl.mc_step = '\0';
      SetAlbumTitleFlg__Fc('\0');
      MemoryCardSetAccessPort__Fi((int)album_save_ctrl.slot_csr);
      SystemBankPlay__FiiiiP11_SND_3D_SETii(3,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
      return;
    }
    if (*paddat[1] == 1) {
      SystemBankPlay__FiiiiP11_SND_3D_SETii(1,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
      AlbumSaveOutReq__Fv();
    }
  }
  else {
    SystemBankPlay__FiiiiP11_SND_3D_SETii(0,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
    album_save_ctrl.slot_csr =
         (char)(album_save_ctrl.slot_csr + 1) + (char)((album_save_ctrl.slot_csr + 1) / 2) * -2;
  }
  return;
}

static void AlbumSaveOutReq() {
  album_save_ctrl.step = '\x03';
  album_save_disp.anim_timer = '\0';
  album_save_disp.anim_step = '\x03';
  AlbumMemFree__FPCci("album_save.c",0x1a4);
  return;
}

static void AlbumSaveMcSave() {
	static char __FUNCTION__[16] = {
		/* [0] = */ 65,
		/* [1] = */ 108,
		/* [2] = */ 98,
		/* [3] = */ 117,
		/* [4] = */ 109,
		/* [5] = */ 83,
		/* [6] = */ 97,
		/* [7] = */ 118,
		/* [8] = */ 101,
		/* [9] = */ 77,
		/* [10] = */ 99,
		/* [11] = */ 83,
		/* [12] = */ 97,
		/* [13] = */ 118,
		/* [14] = */ 101,
		/* [15] = */ 0
	};
	
  switch(album_save_ctrl.mc_step) {
  case '\0':
    AlbumSaveMcCardCheckInit__Fv();
  case '\x01':
    AlbumSaveMcCardCheckWait__Fv();
    return;
  case '\x02':
    AlbumSaveMcGetDirInfoInit__Fv();
  case '\x03':
    AlbumSaveMcGetDirInfoWait__Fv();
    return;
  case '\x04':
    AlbumSaveMcSaveAlbumSelInit__Fv();
  case '\x05':
    AlbumSaveMcSaveAlbumSelWait__Fv();
    return;
  case '\x06':
    AlbumSaveMcCheckAgainInit__Fv();
  case '\a':
    AlbumSaveMcCheckAgainWait__Fv();
    return;
  case '\b':
    AlbumSaveMcSaveConfInit__Fv();
  case '\t':
    AlbumSaveMcSaveConfWait__Fv();
    return;
  case '\n':
    AlbumSaveMcSaveInit__Fv();
  case '\v':
    AlbumSaveMcSaveWait__Fv();
    return;
  case '\f':
    AlbumSaveMcErrorConfInit__Fv();
  case '\r':
    AlbumSaveMcErrorConfWait__Fv();
    return;
  case '\x0e':
    AlbumSaveMcEndConf__Fv();
    return;
  case '\x0f':
    AlbumSaveMcRemakeConfInit__Fv();
  case '\x10':
    AlbumSaveMcRemakeConfWait__Fv();
    return;
  case '\x11':
    AlbumSaveMcRemakeDirDelInit__Fv();
  case '\x12':
    AlbumSaveMcRemakeDirDelWait__Fv();
    return;
  case '\x13':
    AlbumSaveMcNewMakeConfInit__Fv();
  case '\x14':
    AlbumSaveMcNewMakeConfWait__Fv();
    return;
  case '\x15':
    AlbumSaveMcNewMakeInit__Fv();
  case '\x16':
    AlbumSaveMcNewMakeWait__Fv();
    return;
  case '\x17':
    AlbumSaveMcFormatConfInit__Fv();
  case '\x18':
    AlbumSaveMcFormatConfWait__Fv();
    return;
  case '\x19':
    AlbumSaveMcFormatInit__Fv();
  case '\x1a':
    AlbumSaveMcFormatWait__Fv();
    return;
  case '\x1b':
    AlbumSaveMcFormatEndInit__Fv();
  case '\x1c':
    AlbumSaveMcFormatEndWait__Fv();
    return;
  default:
    SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
    PrintAssertReal("Error! %s");
    return;
  }
}

static void AlbumSaveMcCardCheckInit() {
  MemoryCardGetCardInfoInit__Fii((int)album_save_ctrl.slot_csr,0);
  album_save_disp.msg_id = 0;
  album_save_ctrl.mc_step = '\x01';
  return;
}

static void AlbumSaveMcCardCheckWait() {
	int mc_res;
	
  int iVar1;
  
  iVar1 = MemoryCardGetCardInfoMain__Fv();
  if (iVar1 == 1) {
    iVar1 = GetAccessMemoryCardFormat__Fv();
    if (iVar1 != 1) {
      album_save_disp.msg_id = 3;
      album_save_ctrl.mc_step = '\x17';
      album_save_ctrl.conf_csr = '\x01';
      return;
    }
LAB_00126888:
    album_save_ctrl.mc_step = '\x02';
    album_save_ctrl.dir_check_cnt = '\0';
  }
  else {
    if (-1 < iVar1) {
      return;
    }
    album_save_disp.msg_id = 2;
    switch(iVar1) {
    case -0x14:
      album_save_disp.msg_id = 1;
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
      album_save_disp.msg_id = 2;
      break;
    case -2:
      album_save_disp.msg_id = 0x27;
      album_save_ctrl.mc_step = '\x04';
      album_save_ctrl.album_sel_csr = '\0';
      return;
    case -1:
      album_save_disp.msg_id = 0;
      goto LAB_00126888;
    }
    album_save_ctrl.mc_step = '\f';
  }
  return;
}

static void AlbumSaveMcGetDirInfoInit() {
	char path_name[55];
	
  int port;
  int slot;
  char path_name [55];
  
  memset(path_name,0,0x37);
  MemoryCardMakeSearchDirPath__FPci(path_name,album_save_ctrl.dir_check_cnt + 1);
  port = GetAccessMemoryCardPort__Fv();
  slot = GetAccessMemoryCardSlot__Fv();
  MemoryCardGetDirInfoInit__FiiPc(port,slot,path_name);
  album_save_ctrl.mc_step = '\x03';
  return;
}

static void AlbumSaveMcGetDirInfoWait() {
	int mc_res;
	
  int iVar1;
  
  iVar1 = MemoryCardGetDirInfoMain__Fv();
  if (iVar1 == 1) {
LAB_001269dc:
    album_save_ctrl.dir_check_cnt = album_save_ctrl.dir_check_cnt + '\x01';
  }
  else {
    if (-1 < iVar1) goto LAB_00126a20;
    switch(iVar1) {
    case -0x14:
      album_save_disp.msg_id = 1;
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
      album_save_disp.msg_id = 2;
      break;
    case -6:
    case -4:
      goto LAB_001269dc;
    case -2:
      album_save_ctrl.mc_step = '\x04';
      album_save_disp.msg_id = 0x27;
      album_save_ctrl.dir_check_cnt = '\0';
      album_save_ctrl.album_sel_csr = '\0';
      goto LAB_00126a20;
    }
    album_save_ctrl.mc_step = '\f';
    album_save_ctrl.dir_check_cnt = '\0';
  }
LAB_00126a20:
  if (((iVar1 == 1) || (iVar1 == -4)) || (iVar1 == -6)) {
    if (album_save_ctrl.dir_check_cnt < '\x05') {
      album_save_disp.msg_id = 0;
      album_save_ctrl.mc_step = '\x02';
    }
    else {
      album_save_ctrl.mc_step = '\x04';
      album_save_disp.msg_id = 0x27;
      album_save_ctrl.album_sel_csr = '\0';
    }
  }
  return;
}

static void AlbumSaveMcSaveAlbumSelInit() {
  MemoryCardCheckEveryFrameInit__Fii((int)album_save_ctrl.slot_csr,0);
  album_save_disp.msg_id = 0x27;
  album_save_ctrl.mc_step = '\x05';
  return;
}

static void AlbumSaveMcSaveAlbumSelWait() {
  AlbumSaveMcSaveAlbumSelPad__Fv();
  AlbumSaveAlbumSelMcEveryFrameCheck__Fv();
  return;
}

static void AlbumSaveMcSaveAlbumSelPad() {
  int iVar1;
  
  if (((pad[0].rpt & 0x8000U) == 0) && (iVar1 = GetPadAnalogRpt__Fi(2), iVar1 == 0)) {
    if (((pad[0].rpt & 0x2000U) == 0) && (iVar1 = GetPadAnalogRpt__Fi(3), iVar1 == 0)) {
      if (**paddat == 1) {
        SystemBankPlay__FiiiiP11_SND_3D_SETii(3,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
        album_save_disp.msg_id = 0;
        album_save_ctrl.mc_step = '\x06';
        album_save_ctrl.conf_csr = '\x01';
        return;
      }
      if (*paddat[1] != 1) {
        return;
      }
      SystemBankPlay__FiiiiP11_SND_3D_SETii(1,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
      album_save_disp.msg_id = 0;
      album_save_ctrl.mode = '\0';
      return;
    }
    SystemBankPlay__FiiiiP11_SND_3D_SETii(0,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
    iVar1 = album_save_ctrl.album_sel_csr + 1;
  }
  else {
    SystemBankPlay__FiiiiP11_SND_3D_SETii(0,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
    iVar1 = album_save_ctrl.album_sel_csr + 4;
  }
  album_save_ctrl.album_sel_csr = (char)(iVar1 % 5);
  return;
}

static void AlbumSaveAlbumSelMcEveryFrameCheck() {
	int mc_res;
	
  int iVar1;
  int iVar2;
  
  iVar1 = MemoryCardCheckEveryFrameMain__Fv();
  if (iVar1 < 0) {
    iVar2 = 2;
    switch(iVar1) {
    case -0x14:
      iVar2 = 1;
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
      iVar2 = 2;
      break;
    case -2:
      goto LAB_00126cc8;
    case -1:
      iVar2 = 1;
    }
    album_save_ctrl.mc_step = '\f';
    album_save_disp.msg_id = iVar2;
  }
LAB_00126cc8:
  return;
}

static void AlbumSaveMcCheckAgainInit() {
	char path_name[55];
	
  char path_name [55];
  
  memset(path_name,0,0x37);
  MemoryCardMakeSearchDirPath__FPci(path_name,album_save_ctrl.album_sel_csr + 1);
  MemoryCardCheckInit__FiiPc((int)album_save_ctrl.slot_csr,0,path_name);
  album_save_disp.msg_id = 0;
  album_save_ctrl.mc_step = '\a';
  return;
}

static void AlbumSaveMcCheckAgainWait() {
	int mc_res;
	
  int iVar1;
  int iVar2;
  
  iVar1 = MemoryCardCheckMain__Fv();
  if (iVar1 != 1) {
    if (-1 < iVar1) {
      return;
    }
    iVar2 = 2;
    switch(iVar1) {
    case -0x14:
    case -1:
      iVar2 = 1;
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
      iVar2 = 2;
      break;
    case -6:
      iVar1 = MemoryCardCheckEmptyBroken__Fi(album_save_ctrl.album_sel_csr + 1);
      if (iVar1 == 0) {
        album_save_disp.msg_id = 0x2b;
        album_save_ctrl.mc_step = '\f';
        return;
      }
      album_save_disp.msg_id = 0x28;
      album_save_ctrl.mc_step = '\x0f';
      album_save_ctrl.conf_csr = '\x01';
      return;
    case -4:
      iVar1 = MemoryCardCheckEmpty__Fi(album_save_ctrl.album_sel_csr + 1);
      if (iVar1 != 0) {
        album_save_disp.msg_id = 0x1a;
        album_save_ctrl.mc_step = '\x13';
        album_save_ctrl.conf_csr = '\x01';
        return;
      }
      album_save_disp.msg_id = 0x26;
      album_save_ctrl.mc_step = '\f';
      return;
    case -2:
      album_save_disp.msg_id = 3;
      album_save_ctrl.mc_step = '\x17';
      album_save_ctrl.conf_csr = '\x01';
      return;
    }
    album_save_ctrl.mc_step = '\f';
    album_save_disp.msg_id = iVar2;
    return;
  }
  iVar1 = MemoryCardCheckDirBroken__Fi(album_save_ctrl.album_sel_csr + 1);
  if (iVar1 != 0) {
    album_save_disp.msg_id = 0xb;
    album_save_ctrl.mc_step = '\b';
    album_save_ctrl.conf_csr = '\x01';
    return;
  }
  iVar1 = MemoryCardCheckEmptyBroken__Fi(album_save_ctrl.album_sel_csr + 1);
  if (iVar1 == 0) {
    album_save_disp.msg_id = 0x2b;
    album_save_ctrl.mc_step = '\f';
    return;
  }
  album_save_disp.msg_id = 0x28;
  album_save_ctrl.mc_step = '\x0f';
  album_save_ctrl.conf_csr = '\x01';
  return;
}

static void AlbumSaveMcSaveConfInit() {
  MemoryCardCheckEveryFrameInit__Fii((int)album_save_ctrl.slot_csr,0);
  album_save_ctrl.conf_csr = '\x01';
  album_save_ctrl.mc_step = '\t';
  album_save_disp.msg_id = 0xb;
  return;
}

static void AlbumSaveMcSaveConfWait() {
  AlbumSaveMcSaveConfPad__Fv();
  AlbumSaveMcEveryFrameCheck__Fv();
  return;
}

static void AlbumSaveMcSaveConfPad() {
  int iVar1;
  
  if (((((pad[0].rpt & 0x8000U) == 0) && (iVar1 = GetPadAnalogRpt__Fi(2), iVar1 == 0)) &&
      ((pad[0].rpt & 0x2000U) == 0)) && (iVar1 = GetPadAnalogRpt__Fi(3), iVar1 == 0)) {
    if (**paddat == 1) {
      SystemBankPlay__FiiiiP11_SND_3D_SETii(3,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
      if (album_save_ctrl.conf_csr == '\0') {
        album_save_ctrl.mc_step = '\n';
        album_save_disp.msg_id = 0x29;
        album_save_ctrl.save_file_cnt = '\0';
      }
      else {
        album_save_ctrl.mc_step = '\x04';
        album_save_disp.msg_id = 0x27;
      }
    }
    else if (*paddat[1] == 1) {
      SystemBankPlay__FiiiiP11_SND_3D_SETii(1,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
      album_save_ctrl.mc_step = '\x04';
      album_save_disp.msg_id = 0x27;
    }
  }
  else {
    SystemBankPlay__FiiiiP11_SND_3D_SETii(0,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
    album_save_ctrl.conf_csr = album_save_ctrl.conf_csr ^ 1;
  }
  return;
}

static void AlbumSaveMcSaveInit() {
	static char __FUNCTION__[20] = {
		/* [0] = */ 65,
		/* [1] = */ 108,
		/* [2] = */ 98,
		/* [3] = */ 117,
		/* [4] = */ 109,
		/* [5] = */ 83,
		/* [6] = */ 97,
		/* [7] = */ 118,
		/* [8] = */ 101,
		/* [9] = */ 77,
		/* [10] = */ 99,
		/* [11] = */ 83,
		/* [12] = */ 97,
		/* [13] = */ 118,
		/* [14] = */ 101,
		/* [15] = */ 73,
		/* [16] = */ 110,
		/* [17] = */ 105,
		/* [18] = */ 116,
		/* [19] = */ 0
	};
	int save_file_label[1];
	int size;
	char path_name[55];
	
  int iVar1;
  int iVar2;
  int iVar3;
  int save_file_label [1];
  char path_name [55];
  
  save_file_label[0] = 0;
  memset(path_name,0,0x37);
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  iVar1 = GetCurrentAlbum__Fv();
  _fixed_array_verifyrange__H1Z10ALBUM_INFO_UiUi_PX01(iVar1,2);
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  iVar2 = save_file_label[album_save_ctrl.save_file_cnt];
  iVar3 = (int)album_save_ctrl.album_sel_csr;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  album_info.field0_0x0.m_aData[iVar1].album_type = iVar3;
                    /* end of inlined section */
  MemoryCardSetFilePath__FPcii(path_name,iVar3 + 1,iVar2);
  iVar2 = GetMemoryCardDataSize__Fii
                    (album_save_ctrl.album_sel_csr + 1,
                     save_file_label[album_save_ctrl.save_file_cnt]);
  if (0x100000 < iVar2) {
    SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
    PrintAssertReal("Error! %s");
  }
  album_save_buff_addr = GetAlbumMemAddr__Fv();
  SetMemoryCardSaveDataToBuff__FPcii
            ((char *)album_save_buff_addr,album_save_ctrl.album_sel_csr + 1,
             save_file_label[album_save_ctrl.save_file_cnt]);
  MemoryCardFileSaveInit__FiiPcPvi
            ((int)album_save_ctrl.slot_csr,0,path_name,album_save_buff_addr,iVar2);
  album_save_ctrl.mc_step = '\v';
  album_save_ctrl.save_file_cnt = album_save_ctrl.save_file_cnt + '\x01';
  album_save_disp.msg_id = 0x29;
  return;
}

static void AlbumSaveMcSaveWait() {
	int mc_res;
	
  int iVar1;
  
  iVar1 = MemoryCardFileSaveMain__Fv();
  if (iVar1 == 1) {
    if (album_save_ctrl.save_file_cnt < '\x01') {
      album_save_disp.msg_id = 0x29;
      album_save_ctrl.mc_step = '\n';
    }
    else {
      album_save_disp.msg_id = 8;
      album_save_ctrl.mc_step = '\x0e';
    }
  }
  else if (iVar1 < 0) {
    album_save_disp.msg_id = 7;
    album_save_ctrl.mc_step = '\f';
  }
  return;
}

static void AlbumSaveMcErrorConfInit() {
  MemoryCardCheckEveryFrameInit__Fii((int)album_save_ctrl.slot_csr,0);
  album_save_ctrl.mc_step = '\r';
  return;
}

static void AlbumSaveMcErrorConfWait() {
	int mc_res;
	
  int iVar1;
  
  AlbumSaveMcErrorConfPad__Fv();
  iVar1 = MemoryCardCheckEveryFrameMain__Fv();
  if ((iVar1 == -1) || (iVar1 == -2)) {
    album_save_disp.msg_id = 0;
    album_save_ctrl.mc_step = '\0';
  }
  else {
    if (iVar1 == 1) {
      MemoryCardCheckEveryFrameInit__Fii((int)album_save_ctrl.slot_csr,0);
      return;
    }
    if (iVar1 < 0) {
      MemoryCardCheckEveryFrameInit__Fii((int)album_save_ctrl.slot_csr,0);
    }
  }
  return;
}

static void AlbumSaveMcErrorConfPad() {
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
  album_save_ctrl.mode = '\0';
  album_save_disp.msg_id = 0;
  return;
}

static void AlbumSaveMcEndConf() {
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
  album_save_ctrl.mode = '\0';
  album_save_disp.msg_id = 0;
  return;
}

static void AlbumSaveMcRemakeConfInit() {
  MemoryCardCheckEveryFrameInit__Fii((int)album_save_ctrl.slot_csr,0);
  album_save_ctrl.conf_csr = '\x01';
  album_save_ctrl.mc_step = '\x10';
  album_save_disp.msg_id = 0x28;
  return;
}

static void AlbumSaveMcRemakeConfWait() {
  AlbumSaveMcRemakeConfPad__Fv();
  AlbumSaveMcEveryFrameCheck__Fv();
  return;
}

static void AlbumSaveMcRemakeConfPad() {
  int iVar1;
  
  if (((((pad[0].rpt & 0x8000U) == 0) && (iVar1 = GetPadAnalogRpt__Fi(2), iVar1 == 0)) &&
      ((pad[0].rpt & 0x2000U) == 0)) && (iVar1 = GetPadAnalogRpt__Fi(3), iVar1 == 0)) {
    if (**paddat == 1) {
      SystemBankPlay__FiiiiP11_SND_3D_SETii(3,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
      if (album_save_ctrl.conf_csr == '\0') {
        album_save_disp.msg_id = 0x30;
        album_save_ctrl.mc_step = '\x11';
      }
      else {
        album_save_disp.msg_id = 0x27;
        album_save_ctrl.mc_step = '\x04';
      }
    }
    else if (*paddat[1] == 1) {
      SystemBankPlay__FiiiiP11_SND_3D_SETii(1,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
      album_save_ctrl.mc_step = '\x04';
      album_save_disp.msg_id = 0x27;
    }
  }
  else {
    SystemBankPlay__FiiiiP11_SND_3D_SETii(0,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
    album_save_ctrl.conf_csr = album_save_ctrl.conf_csr ^ 1;
  }
  return;
}

static void AlbumSaveMcRemakeDirDelInit() {
  MemoryCardDirDelInit__Fiii((int)album_save_ctrl.slot_csr,0,album_save_ctrl.album_sel_csr + 1);
  album_save_disp.msg_id = 0x30;
  album_save_ctrl.mc_step = '\x12';
  return;
}

static void AlbumSaveMcRemakeDirDelWait() {
	int mc_res;
	
  int iVar1;
  
  iVar1 = MemoryCardDirDelMain__Fv();
  if (iVar1 == 1) {
    album_save_ctrl.mc_step = '\x15';
    album_save_disp.msg_id = 0x30;
  }
  else if (iVar1 < 0) {
    album_save_disp.msg_id = 0x30;
    album_save_ctrl.mc_step = '\f';
  }
  return;
}

static void AlbumSaveMcNewMakeConfInit() {
  MemoryCardCheckEveryFrameInit__Fii((int)album_save_ctrl.slot_csr,0);
  album_save_ctrl.conf_csr = '\x01';
  album_save_ctrl.mc_step = '\x14';
  album_save_disp.msg_id = 0x1a;
  return;
}

static void AlbumSaveMcNewMakeConfWait() {
  AlbumSaveMcNewMakeConfPad__Fv();
  AlbumSaveMcEveryFrameCheck__Fv();
  return;
}

static void AlbumSaveMcNewMakeConfPad() {
  int iVar1;
  
  if (((((pad[0].rpt & 0x8000U) == 0) && (iVar1 = GetPadAnalogRpt__Fi(2), iVar1 == 0)) &&
      ((pad[0].rpt & 0x2000U) == 0)) && (iVar1 = GetPadAnalogRpt__Fi(3), iVar1 == 0)) {
    if (**paddat == 1) {
      SystemBankPlay__FiiiiP11_SND_3D_SETii(3,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
      if (album_save_ctrl.conf_csr == '\0') {
        album_save_disp.msg_id = 0x30;
        album_save_ctrl.mc_step = '\x15';
      }
      else {
        album_save_disp.msg_id = 0x27;
        album_save_ctrl.mc_step = '\x04';
      }
    }
    else if (*paddat[1] == 1) {
      SystemBankPlay__FiiiiP11_SND_3D_SETii(1,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
      album_save_ctrl.mc_step = '\x04';
      album_save_disp.msg_id = 0x27;
    }
  }
  else {
    SystemBankPlay__FiiiiP11_SND_3D_SETii(0,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
    album_save_ctrl.conf_csr = album_save_ctrl.conf_csr ^ 1;
  }
  return;
}

static void AlbumSaveMcNewMakeInit() {
  void *buff_addr;
  
  buff_addr = GetAlbumMemAddr__Fv();
  MemoryCardNewMakeInit__FiiiPvi
            ((int)album_save_ctrl.slot_csr,0,album_save_ctrl.album_sel_csr + 1,buff_addr,0x100000);
  album_save_disp.msg_id = 0x30;
  album_save_ctrl.mc_step = '\x16';
  return;
}

static void AlbumSaveMcNewMakeWait() {
	int mc_res;
	
  int iVar1;
  
  iVar1 = MemoryCardNewMakeMain__Fv();
  if (iVar1 == 1) {
    album_save_ctrl.mc_step = '\n';
    album_save_disp.msg_id = 0x29;
    album_save_ctrl.save_file_cnt = '\0';
  }
  else if (iVar1 < 0) {
    album_save_disp.msg_id = 0x2f;
    album_save_ctrl.mc_step = '\f';
  }
  return;
}

static void AlbumSaveMcFormatConfInit() {
  MemoryCardCheckEveryFrameInit__Fii((int)album_save_ctrl.slot_csr,0);
  album_save_ctrl.mc_step = '\x18';
  album_save_disp.msg_id = 3;
  album_save_ctrl.conf_csr = '\x01';
  return;
}

static void AlbumSaveMcFormatConfWait() {
	int mc_res;
	
  int iVar1;
  int iVar2;
  
  AlbumSaveMcFormatConfPad__Fv();
  iVar1 = MemoryCardCheckEveryFrameMain__Fv();
  if (iVar1 < 0) {
    iVar2 = 2;
    switch(iVar1) {
    case -0x14:
      iVar2 = 1;
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
      iVar2 = 2;
      break;
    case -2:
      goto LAB_00127990;
    case -1:
      iVar2 = 1;
    }
    album_save_ctrl.mc_step = '\f';
    album_save_disp.msg_id = iVar2;
  }
LAB_00127990:
  return;
}

static void AlbumSaveMcFormatConfPad() {
  int iVar1;
  
  if (((((pad[0].rpt & 0x8000U) == 0) && (iVar1 = GetPadAnalogRpt__Fi(2), iVar1 == 0)) &&
      ((pad[0].rpt & 0x2000U) == 0)) && (iVar1 = GetPadAnalogRpt__Fi(3), iVar1 == 0)) {
    if (**paddat == 1) {
      SystemBankPlay__FiiiiP11_SND_3D_SETii(3,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
      if (album_save_ctrl.conf_csr == '\0') {
        album_save_ctrl.mc_step = '\x19';
        album_save_disp.msg_id = 4;
      }
      else {
        album_save_ctrl.mode = '\0';
        album_save_disp.msg_id = 0;
      }
    }
    else if (*paddat[1] == 1) {
      SystemBankPlay__FiiiiP11_SND_3D_SETii(1,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
      album_save_disp.msg_id = 0;
      album_save_ctrl.mode = '\0';
    }
  }
  else {
    SystemBankPlay__FiiiiP11_SND_3D_SETii(0,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
    album_save_ctrl.conf_csr = album_save_ctrl.conf_csr ^ 1;
  }
  return;
}

static void AlbumSaveMcFormatInit() {
  MemoryCardFormatInit__Fii((int)album_save_ctrl.slot_csr,0);
  album_save_disp.msg_id = 4;
  album_save_ctrl.mc_step = '\x1a';
  return;
}

static void AlbumSaveMcFormatWait() {
	int mc_res;
	
  int iVar1;
  
  iVar1 = MemoryCardFormatMain__Fv();
  if (iVar1 == 1) {
    album_save_ctrl.mc_step = '\x1b';
    album_save_disp.msg_id = 0x39;
  }
  else if (iVar1 < 0) {
    album_save_disp.msg_id = 5;
    album_save_ctrl.mc_step = '\f';
  }
  return;
}

static void AlbumSaveMcFormatEndInit() {
  album_save_ctrl.mc_step = '\x1c';
  album_save_disp.msg_id = 0x39;
  album_save_ctrl.format_end_cnt = '\0';
  return;
}

static void AlbumSaveMcFormatEndWait() {
  album_save_ctrl.format_end_cnt = album_save_ctrl.format_end_cnt + '\x01';
  if (';' < album_save_ctrl.format_end_cnt) {
    album_save_ctrl.mc_step = '\x15';
    album_save_disp.msg_id = 0x30;
  }
  return;
}

static void AlbumSaveMcEveryFrameCheck() {
	int mc_res;
	
  int iVar1;
  
  iVar1 = MemoryCardCheckEveryFrameMain__Fv();
  if (iVar1 < 0) {
    album_save_disp.msg_id = 2;
    switch(iVar1) {
    case -0x14:
      album_save_disp.msg_id = 1;
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
      album_save_disp.msg_id = 2;
      break;
    case -2:
      album_save_disp.msg_id = 0xd;
      break;
    case -1:
      album_save_disp.msg_id = 1;
    }
    album_save_ctrl.mc_step = '\f';
  }
  return;
}

void AlbumSaveEnd() {
  MemoryCardEnd__Fv();
  return;
}

static void AlbumSaveDispInit() {
  album_save_disp.csr_anim_timer = '\0';
  album_save_disp.anim_step = '\0';
  album_save_disp.anim_timer = '\0';
  album_save_disp.msg_id = 0;
  return;
}

void AlbumSaveDispMain() {
	static char __FUNCTION__[18] = {
		/* [0] = */ 65,
		/* [1] = */ 108,
		/* [2] = */ 98,
		/* [3] = */ 117,
		/* [4] = */ 109,
		/* [5] = */ 83,
		/* [6] = */ 97,
		/* [7] = */ 118,
		/* [8] = */ 101,
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
  if (((byte)album_save_ctrl.step - 2 < 2) &&
     (AlbumInOutAnimCtrl__FPcT0PUc(&album_save_disp.anim_step,&album_save_disp.anim_timer,&alpha),
     album_save_disp.anim_step != '\x04')) {
    AlbumBlackBgDisp__FiiUcUc(0,0,alpha,0x80);
    if (album_save_ctrl.mode == '\0') {
      AlbumSaveSlotSelDisp__FiiUc(0,0,alpha);
    }
    else if (album_save_ctrl.mode == '\x01') {
      AlbumSaveMcSaveDisp__FiiUc(0,0,alpha);
    }
    else {
      SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
      PrintAssertReal("Error! %s");
    }
  }
  return;
}

static void AlbumSaveSlotSelDisp(int off_x, int off_y, u_char alpha) {
  void *tm2_addr;
  
  tm2_addr = GetAlbumSlotSelTexAddr__Fv();
  PK2SendVram__FUiiii((uint)tm2_addr,-1,-1,0);
  AlbumSlotSelWinDisp__FiiiUc((int)album_save_ctrl.slot_csr,0,0,alpha);
  DrawCmnWindow__FUiffffUcUc(0,24.0,330.0,592.0,112.0,alpha,'f');
  PrintMsg__Fiiiiiii(0x50,6,0x44,0x15d,1,(uint)alpha,0);
  AlbumSlotSelCaptionDisp__FiiUc(off_x,off_y,alpha);
  return;
}

static void AlbumSaveMcSaveDisp(int off_x, int off_y, u_char alpha) {
	static char __FUNCTION__[20] = {
		/* [0] = */ 65,
		/* [1] = */ 108,
		/* [2] = */ 98,
		/* [3] = */ 117,
		/* [4] = */ 109,
		/* [5] = */ 83,
		/* [6] = */ 97,
		/* [7] = */ 118,
		/* [8] = */ 101,
		/* [9] = */ 77,
		/* [10] = */ 99,
		/* [11] = */ 83,
		/* [12] = */ 97,
		/* [13] = */ 118,
		/* [14] = */ 101,
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
  switch(album_save_ctrl.mc_step) {
  case '\0':
  case '\x01':
  case '\x02':
  case '\x03':
    PK2SendVram__FUiiii((uint)tm2_addr,-1,-1,0);
    AlbumSlotSelWinDisp__FiiiUc((int)album_save_ctrl.slot_csr,off_x,off_y,alpha);
    AlbumMcMsgWinDisp__FiiUc(off_x,off_y,alpha);
    break;
  case '\x04':
  case '\x05':
    PK2SendVram__FUiiii((uint)tm2_addr_00,-1,-1,0);
    AlbumSaveSelAlbumCsrFlareDisp__FiiiUcUc((int)album_save_ctrl.album_sel_csr,0,0,alpha,0x80);
    AlbumSaveAlbumSelDisp__FUc(alpha);
    Zero2Anim2D_CsrAnimCtrl__FPcPUc(&album_save_disp.csr_anim_timer,&csr_rgb);
    AlbumSaveSelAlbumCsrDisp__FiiiUcUc((int)album_save_ctrl.album_sel_csr,0,0,alpha,csr_rgb);
    AlbumSlotSelCaptionDisp__FiiUc(off_x,off_y,alpha);
    DrawCmnWindow__FUiffffUcUc(0,24.0,330.0,592.0,112.0,alpha,'f');
    x = 0x44;
    y = 0x15d;
    goto LAB_0012824c;
  case '\x06':
  case '\a':
  case '\n':
  case '\v':
  case '\x11':
  case '\x12':
  case '\x15':
  case '\x16':
  case '\x19':
  case '\x1a':
  case '\x1b':
  case '\x1c':
    PK2SendVram__FUiiii((uint)tm2_addr_00,-1,-1,0);
    Zero2Anim2D_CsrAnimCtrl__FPcPUc(&album_save_disp.csr_anim_timer,&csr_rgb);
    AlbumSaveSelAlbumCsrFlareDisp__FiiiUcUc((int)album_save_ctrl.album_sel_csr,0,0,alpha,csr_rgb);
    AlbumSaveAlbumSelDisp__FUc(alpha);
    AlbumSaveSelAlbumCsrDisp__FiiiUcUc((int)album_save_ctrl.album_sel_csr,0,0,alpha,0x80);
    AlbumMcMsgWinDisp__FiiUc(off_x,off_y,alpha);
    break;
  case '\b':
  case '\t':
  case '\x0f':
  case '\x10':
  case '\x13':
  case '\x14':
    PK2SendVram__FUiiii((uint)tm2_addr_00,-1,-1,0);
    Zero2Anim2D_CsrAnimCtrl__FPcPUc(&album_save_disp.csr_anim_timer,&csr_rgb);
    AlbumSaveSelAlbumCsrFlareDisp__FiiiUcUc((int)album_save_ctrl.album_sel_csr,0,0,alpha,csr_rgb);
    AlbumSaveAlbumSelDisp__FUc(alpha);
    AlbumSaveSelAlbumCsrDisp__FiiiUcUc((int)album_save_ctrl.album_sel_csr,0,0,alpha,0x80);
    AlbumMcMsgWinDisp__FiiUc(off_x,off_y,alpha);
    DrawCmnYesNoSel__FifUcUi((int)album_save_ctrl.conf_csr,(float)(off_y + 0x127),alpha,0);
    goto LAB_0012817c;
  case '\f':
  case '\r':
    PK2SendVram__FUiiii((uint)tm2_addr,-1,-1,0);
    AlbumSlotSelWinDisp__FiiiUc((int)album_save_ctrl.slot_csr,off_x,off_y,alpha);
    AlbumMcMsgWinDisp__FiiUc(off_x,off_y,alpha);
    goto LAB_0012817c;
  case '\x0e':
    PK2SendVram__FUiiii((uint)tm2_addr_00,-1,-1,0);
    Zero2Anim2D_CsrAnimCtrl__FPcPUc(&album_save_disp.csr_anim_timer,&csr_rgb);
    AlbumSaveSelAlbumCsrFlareDisp__FiiiUcUc((int)album_save_ctrl.album_sel_csr,0,0,alpha,csr_rgb);
    AlbumSaveAlbumSelDisp__FUc(alpha);
    AlbumSaveSelAlbumCsrDisp__FiiiUcUc((int)album_save_ctrl.album_sel_csr,0,0,alpha,0x80);
    AlbumMcMsgWinDisp__FiiUc(off_x,off_y,alpha);
LAB_0012817c:
    PrintMsg__Fiiiiiii(0x50,album_save_disp.msg_id,0x5c,0x8e,1,(uint)alpha,0);
    AlbumSlotSelCaptionDisp__FiiUc(off_x,off_y,alpha);
    return;
  case '\x17':
  case '\x18':
    PK2SendVram__FUiiii((uint)tm2_addr_00,-1,-1,0);
    Zero2Anim2D_CsrAnimCtrl__FPcPUc(&album_save_disp.csr_anim_timer,&csr_rgb);
    AlbumSaveSelAlbumCsrFlareDisp__FiiiUcUc((int)album_save_ctrl.album_sel_csr,0,0,alpha,csr_rgb);
    AlbumSaveAlbumSelDisp__FUc(alpha);
    AlbumSaveSelAlbumCsrDisp__FiiiUcUc((int)album_save_ctrl.album_sel_csr,0,0,alpha,0x80);
    AlbumMcMsgWinDisp__FiiUc(off_x,off_y,alpha);
    DrawCmnYesNoSel__FifUcUi((int)album_save_ctrl.conf_csr,(float)(off_y + 0x127),alpha,0);
    break;
  default:
    SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
    PrintAssertReal("Error! %s");
    return;
  }
  x = 0x5c;
  y = 0x8e;
LAB_0012824c:
  PrintMsg__Fiiiiiii(0x50,album_save_disp.msg_id,x,y,1,(uint)alpha,0);
  return;
}

static void AlbumSaveAlbumSelDisp(u_char alpha) {
	int i;
	int msg_col;
	
  int col_label;
  int album_type;
  long lVar1;
  
  lVar1 = 0;
  do {
    album_type = (int)lVar1;
    if (lVar1 == album_save_ctrl.album_sel_csr) {
      col_label = 0x18;
    }
    else {
      col_label = 0x17;
      AlbumSaveNonSelAlbumCsrDisp__FiiiUcUc(album_type,0,0,alpha,0x80);
    }
    AlbumSaveSelAlbumNameDisp__FiiiUci(album_type,0,0,alpha,col_label);
    lVar1 = (long)(album_type + 1);
    AlbumSaveSelAlbumDisp__FiiiUc(album_type,0,0,alpha);
  } while (lVar1 < 5);
  AlbumSaveSelSlotDisp__FiiiUcUc((int)album_save_ctrl.slot_csr,0,0,alpha,0x80);
  return;
}

ALBUM_INFO* ALBUM_INFO * _fixed_array_verifyrange<ALBUM_INFO>(size_t v, size_t _max) {
  g3ddbgAssert__FbPCce(false,str_646);
  return (type_info *)v;
}

type_info& ALBUM_INFO type_info function() {
  g3ddbgAssert__FbPCce(false,str_646);
  return (type_info *)v;
}
