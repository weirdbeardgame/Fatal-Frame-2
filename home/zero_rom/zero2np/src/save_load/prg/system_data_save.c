// STATUS: NOT STARTED

#include "system_data_save.h"

typedef struct {
	char step;
	char mc_step;
	char conf_csr;
	char exit_state;
	char format_end_cnt;
} SYSTEM_DATA_SAVE_CTRL;

typedef struct {
	int msg_id;
	char anim_step;
	char anim_timer;
} SYSTEM_DATA_SAVE_DISP;

static void* (*SystemDataSaveMemGet)(/* parameters unknown */) = NULL;
static void (*SystemDataSaveMemFree)(/* parameters unknown */) = NULL;
static void *system_data_buff_addr = NULL;
static SYSTEM_DATA_SAVE_CTRL system_data_save_ctrl;
static SYSTEM_DATA_SAVE_DISP system_data_save_disp;

static void _fixed_array_assert(char *strType, size_t v0, size_t v1) {
	static char *str = 0x3e6030;
	
  g3ddbgAssert__FbPCce(false,str_849);
  return;
}

static void** void * * _fixed_array_verifyrange<void *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_assert__FPCcUiUi(s_void__003f46f0,_max,v);
  }
  return (void **)0x0;
}

static char** char * * _fixed_array_verifyrange<char *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_assert__FPCcUiUi(s_char__003f46f8,_max,v);
  }
  return (char **)0x0;
}

static unsigned int** unsigned int * * _fixed_array_verifyrange<unsigned int *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_assert__FPCcUiUi("unsigned int*",_max,v);
  }
  return (uint **)0x0;
}

void SystemDataSaveInit(void* (*mem_get)(/* parameters unknown */), void (*mem_free)(/* parameters unknown */)) {
	static char __FUNCTION__[19] = {
		/* [0] = */ 83,
		/* [1] = */ 121,
		/* [2] = */ 115,
		/* [3] = */ 116,
		/* [4] = */ 101,
		/* [5] = */ 109,
		/* [6] = */ 68,
		/* [7] = */ 97,
		/* [8] = */ 116,
		/* [9] = */ 97,
		/* [10] = */ 83,
		/* [11] = */ 97,
		/* [12] = */ 118,
		/* [13] = */ 101,
		/* [14] = */ 73,
		/* [15] = */ 110,
		/* [16] = */ 105,
		/* [17] = */ 116,
		/* [18] = */ 0
	};
	
  undefined1 *puVar1;
  undefined1 *puVar2;
  
  if ((SystemDataSaveMemGet != (undefined1 *)0x0) ||
     (puVar1 = mem_get, puVar2 = mem_free, SystemDataSaveMemFree != (undefined1 *)0x0)) {
    SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
    PrintAssertReal("Error! %s");
    puVar1 = SystemDataSaveMemGet;
    puVar2 = SystemDataSaveMemFree;
  }
  SystemDataSaveMemFree = puVar2;
  SystemDataSaveMemGet = puVar1;
  SystemDataSaveCtrlInit__Fv();
  MemoryCardExeInit__Fv();
  LiberateSystemDataSaveMem__FPPv(&system_data_buff_addr);
  MemoryCardSetAccessPort__Fi(0);
  return;
}

static void SystemDataSaveCtrlInit() {
  system_data_save_ctrl.conf_csr = '\x01';
  system_data_save_ctrl.format_end_cnt = '\0';
  system_data_save_ctrl.step = '\0';
  system_data_save_ctrl.mc_step = '\0';
  system_data_save_ctrl.exit_state = '\0';
  return;
}

static void GetSystemDataSaveDataMem(void **tex_addr, int size) {
  void *pvVar1;
  
  if (*tex_addr != (void *)0x0) {
    LiberateSystemDataSaveMem__FPPv(tex_addr);
  }
  pvVar1 = (void *)(*(code *)SystemDataSaveMemGet)(size);
  *tex_addr = pvVar1;
  return;
}

int SystemDataSaveMain() {
	static char __FUNCTION__[19] = {
		/* [0] = */ 83,
		/* [1] = */ 121,
		/* [2] = */ 115,
		/* [3] = */ 116,
		/* [4] = */ 101,
		/* [5] = */ 109,
		/* [6] = */ 68,
		/* [7] = */ 97,
		/* [8] = */ 116,
		/* [9] = */ 97,
		/* [10] = */ 83,
		/* [11] = */ 97,
		/* [12] = */ 118,
		/* [13] = */ 101,
		/* [14] = */ 77,
		/* [15] = */ 97,
		/* [16] = */ 105,
		/* [17] = */ 110,
		/* [18] = */ 0
	};
	int res;
	
  if (system_data_save_ctrl.step == '\x01') {
    if (system_data_save_disp.anim_step == '\x02') {
      SystemDataSaveMcMain__Fv();
    }
  }
  else {
    if (system_data_save_ctrl.step < '\x02') {
      if (system_data_save_ctrl.step == '\0') {
        SystemDataSaveDispInit__Fv();
        system_data_save_ctrl.step = '\x01';
        return 0;
      }
    }
    else if (system_data_save_ctrl.step == '\x02') {
      if (system_data_save_disp.anim_step != '\x04') {
        return 0;
      }
      if (system_data_save_ctrl.exit_state != '\0') {
        if (system_data_save_ctrl.exit_state != '\x01') {
          SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
          PrintAssertReal("Error! %s");
          return 0;
        }
        return -1;
      }
      return 1;
    }
    SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
    PrintAssertReal("Error! %s");
  }
  return 0;
}

static void SystemDataSaveOutReq(char exit_state) {
	static char __FUNCTION__[21] = {
		/* [0] = */ 83,
		/* [1] = */ 121,
		/* [2] = */ 115,
		/* [3] = */ 116,
		/* [4] = */ 101,
		/* [5] = */ 109,
		/* [6] = */ 68,
		/* [7] = */ 97,
		/* [8] = */ 116,
		/* [9] = */ 97,
		/* [10] = */ 83,
		/* [11] = */ 97,
		/* [12] = */ 118,
		/* [13] = */ 101,
		/* [14] = */ 79,
		/* [15] = */ 117,
		/* [16] = */ 116,
		/* [17] = */ 82,
		/* [18] = */ 101,
		/* [19] = */ 113,
		/* [20] = */ 0
	};
	
  if (1 < (byte)exit_state) {
    SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
    PrintAssertReal("Error! %s");
  }
  system_data_save_ctrl.exit_state = exit_state;
  system_data_save_ctrl.step = '\x02';
  system_data_save_disp.anim_step = '\x03';
  system_data_save_disp.anim_timer = '\0';
  return;
}

static void SystemDataSaveMcMain() {
	static char __FUNCTION__[21] = {
		/* [0] = */ 83,
		/* [1] = */ 121,
		/* [2] = */ 115,
		/* [3] = */ 116,
		/* [4] = */ 101,
		/* [5] = */ 109,
		/* [6] = */ 68,
		/* [7] = */ 97,
		/* [8] = */ 116,
		/* [9] = */ 97,
		/* [10] = */ 83,
		/* [11] = */ 97,
		/* [12] = */ 118,
		/* [13] = */ 101,
		/* [14] = */ 77,
		/* [15] = */ 99,
		/* [16] = */ 77,
		/* [17] = */ 97,
		/* [18] = */ 105,
		/* [19] = */ 110,
		/* [20] = */ 0
	};
	
  switch(system_data_save_ctrl.mc_step) {
  case '\0':
    SystemDataSaveMcCheckInit__Fv();
  case '\x01':
    SystemDataSaveMcCheckWait__Fv();
    return;
  case '\x02':
    SystemDataSaveMcSaveConfInit__Fv();
  case '\x03':
    SystemDataSaveMcSaveConfWait__Fv();
    return;
  case '\x04':
    SystemDataSaveMcLoadInit__Fv();
  case '\x05':
    SystemDataSaveMcLoadWait__Fv();
    return;
  case '\x06':
    SystemDataSaveMcSaveInit__Fv();
  case '\a':
    SystemDataSaveMcSaveWait__Fv();
    return;
  case '\b':
    SystemDataSaveMcErrorConfInit__Fv();
  case '\t':
    SystemDataSaveMcErrorConfWait__Fv();
    return;
  case '\n':
    SystemDataSaveMcEndConf__Fv();
    return;
  case '\v':
    SystemDataSaveMcRemakeConfInit__Fv();
  case '\f':
    SystemDataSaveMcRemakeConfWait__Fv();
    return;
  case '\r':
    SystemDataSaveMcRemakeDirDelInit__Fv();
  case '\x0e':
    SystemDataSaveMcRemakeDirDelWait__Fv();
    return;
  case '\x0f':
    SystemDataSaveMcNewMakeConfInit__Fv();
  case '\x10':
    SystemDataSaveMcNewMakeConfWait__Fv();
    return;
  case '\x11':
    SystemDataSaveMcNewMakeInit__Fv();
  case '\x12':
    SystemDataSaveMcNewMakeWait__Fv();
    return;
  case '\x13':
    SystemDataSaveMcFormatConfInit__Fv();
  case '\x14':
    SystemDataSaveMcFormatConfWait__Fv();
    return;
  case '\x15':
    SystemDataSaveMcFormatInit__Fv();
  case '\x16':
    SystemDataSaveMcFormatWait__Fv();
    return;
  case '\x17':
    SystemDataSaveMcFormatEndInit__Fv();
  case '\x18':
    SystemDataSaveMcFormatEndWait__Fv();
    return;
  default:
    SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
    PrintAssertReal("Error! %s");
    return;
  }
}

static void SystemDataSaveMcCheckInit() {
	char path_name[55];
	
  char path_name [55];
  
  memset(path_name,0,0x37);
  MemoryCardMakeSearchDirPath__FPci(path_name,0);
  MemoryCardCheckInit__FiiPc(0,0,path_name);
  system_data_save_ctrl.mc_step = '\x01';
  return;
}

static void SystemDataSaveMcCheckWait() {
	int mc_res;
	
  int iVar1;
  int iVar2;
  
  iVar1 = MemoryCardCheckMain__Fv();
  if (iVar1 == 1) {
    iVar1 = MemoryCardCheckDirBroken__Fi(0);
    if (iVar1 != 0) {
      system_data_save_ctrl.mc_step = '\x02';
      system_data_save_disp.msg_id = 0x1b;
      return;
    }
    iVar1 = MemoryCardCheckEmptyBroken__Fi(0);
    if (iVar1 != 0) {
      system_data_save_ctrl.mc_step = '\v';
      system_data_save_ctrl.conf_csr = '\x01';
      system_data_save_disp.msg_id = 0x16;
      return;
    }
    system_data_save_ctrl.mc_step = '\b';
    system_data_save_disp.msg_id = 0x19;
    return;
  }
  if (-1 < iVar1) {
    return;
  }
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
  case -5:
  case -3:
    iVar2 = 2;
    break;
  case -6:
    iVar1 = MemoryCardCheckEmptyBroken__Fi(0);
    if (iVar1 != 0) {
      system_data_save_ctrl.mc_step = '\v';
      system_data_save_ctrl.conf_csr = '\x01';
      system_data_save_disp.msg_id = 0x16;
      return;
    }
    system_data_save_ctrl.mc_step = '\b';
    system_data_save_disp.msg_id = 0x19;
    return;
  case -4:
    iVar1 = MemoryCardCheckEmpty__Fi(0);
    if (iVar1 != 0) {
      system_data_save_ctrl.mc_step = '\x0f';
      system_data_save_ctrl.conf_csr = '\x01';
      system_data_save_disp.msg_id = 0x15;
      return;
    }
    iVar2 = 0x17;
    break;
  case -2:
    system_data_save_ctrl.mc_step = '\x13';
    system_data_save_ctrl.conf_csr = '\x01';
    system_data_save_disp.msg_id = 3;
    return;
  case -1:
    iVar1 = MemoryCardCheckDirBroken__Fi(0);
    if (iVar1 != 0) {
      system_data_save_ctrl.mc_step = '\x02';
      system_data_save_disp.msg_id = 0x1b;
      return;
    }
    iVar1 = MemoryCardCheckEmptyBroken__Fi(0);
    if (iVar1 != 0) {
      system_data_save_ctrl.mc_step = '\v';
      system_data_save_ctrl.conf_csr = '\x01';
      system_data_save_disp.msg_id = 0x16;
      return;
    }
    system_data_save_ctrl.mc_step = '\b';
    system_data_save_disp.msg_id = 0x19;
    return;
  }
  system_data_save_disp.msg_id = iVar2;
  system_data_save_ctrl.mc_step = '\b';
  return;
}

static void SystemDataSaveMcSaveConfInit() {
  MemoryCardCheckEveryFrameInit__Fii(0,0);
  system_data_save_ctrl.mc_step = '\x03';
  return;
}

static void SystemDataSaveMcSaveConfWait() {
  SystemDataSaveMcSaveConfPad__Fv();
  SystemDataSaveMcEveryFrameCheck__Fv();
  return;
}

static void SystemDataSaveMcSaveConfPad() {
  int iVar1;
  
  if (((((pad[0].rpt & 0x8000U) == 0) && (iVar1 = GetPadAnalogRpt__Fi(2), iVar1 == 0)) &&
      ((pad[0].rpt & 0x2000U) == 0)) && (iVar1 = GetPadAnalogRpt__Fi(3), iVar1 == 0)) {
    if (**paddat == 1) {
      SystemBankPlay__FiiiiP11_SND_3D_SETii(3,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
      if (system_data_save_ctrl.conf_csr != '\0') {
        SystemDataSaveOutReq__Fc('\0');
        return;
      }
      system_data_save_ctrl.mc_step = '\x04';
      system_data_save_disp.msg_id = 0x1c;
    }
    else if (*paddat[1] == 1) {
      SystemBankPlay__FiiiiP11_SND_3D_SETii(1,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
      SystemDataSaveOutReq__Fc('\x01');
    }
  }
  else {
    SystemBankPlay__FiiiiP11_SND_3D_SETii(0,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
    system_data_save_ctrl.conf_csr = system_data_save_ctrl.conf_csr ^ 1;
  }
  return;
}

static void SystemDataSaveMcLoadInit() {
	int size;
	char path_name[55];
	
  int size;
  char path_name [55];
  
  memset(path_name,0,0x37);
  LiberateSystemDataSaveMem__FPPv(&system_data_buff_addr);
  MemoryCardSetFilePath__FPcii(path_name,0,0);
  size = GetMemoryCardDataSize__Fii(0,0);
  GetSystemDataSaveDataMem__FPPvi(&system_data_buff_addr,size);
  MemoryCardFileLoadInit__FiiPcPvi(0,0,path_name,system_data_buff_addr,size);
  system_data_save_disp.msg_id = 0x1c;
  system_data_save_ctrl.mc_step = '\x05';
  return;
}

static void SystemDataSaveMcLoadWait() {
	int mc_res;
	int size;
	CLEAR_FLG_CTRL buff_flg_ctrl;
	
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  ulong *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  ulong in_v1;
  ulong in_a3;
  ulong uVar8;
  ulong in_t0;
  ulong uVar9;
  CLEAR_FLG_CTRL buff_flg_ctrl;
  CLEAR_FLG_CTRL CStack_40;
  
  buff_flg_ctrl.accessory_flg.flag_32[0] = (int  [1])0x0;
  buff_flg_ctrl.ending_movie_flg.flag_32[0] = (int  [1])0x0;
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
  buff_flg_ctrl.costume_flg.flag_32[0] = (int  [1])0x0;
  buff_flg_ctrl.difficulty_flg.flag_32[0] = (int  [1])0x0;
                    /* end of inlined section */
  memset(&buff_flg_ctrl,0,0x18);
  iVar5 = MemoryCardFileLoadMain__Fv();
  if (iVar5 == 1) {
    iVar6 = GetMemoryCardDataSize__Fii(0,0);
    iVar7 = MemoryCardCheckFileBroken__FPvi(system_data_buff_addr,iVar6);
    if (iVar7 == 0) {
      system_data_save_disp.msg_id = 0x19;
      system_data_save_ctrl.mc_step = '\b';
    }
    else {
      iVar6 = MemoryCardCheckNewFileLoad__FPvi(system_data_buff_addr,iVar6);
      if (iVar6 == 0) {
        uVar2 = (int)system_data_buff_addr + 7U & 7;
        uVar3 = (uint)system_data_buff_addr & 7;
        buff_flg_ctrl._0_8_ =
             (*(long *)(((int)system_data_buff_addr + 7U) - uVar2) << (7 - uVar2) * 8 |
             in_v1 & 0xffffffffffffffffU >> (uVar2 + 1) * 8) & -1L << (8 - uVar3) * 8 |
             *(ulong *)((int)system_data_buff_addr - uVar3) >> uVar3 * 8;
        uVar2 = (int)system_data_buff_addr + 0xfU & 7;
        uVar3 = (int)system_data_buff_addr + 8U & 7;
        uVar8 = (*(long *)(((int)system_data_buff_addr + 0xfU) - uVar2) << (7 - uVar2) * 8 |
                in_a3 & 0xffffffffffffffffU >> (uVar2 + 1) * 8) & -1L << (8 - uVar3) * 8 |
                *(ulong *)(((int)system_data_buff_addr + 8U) - uVar3) >> uVar3 * 8;
        uVar2 = (int)system_data_buff_addr + 0x17U & 7;
        uVar3 = (int)system_data_buff_addr + 0x10U & 7;
        uVar9 = (*(long *)(((int)system_data_buff_addr + 0x17U) - uVar2) << (7 - uVar2) * 8 |
                in_t0 & 0xffffffffffffffffU >> (uVar2 + 1) * 8) & -1L << (8 - uVar3) * 8 |
                *(ulong *)(((int)system_data_buff_addr + 0x10U) - uVar3) >> uVar3 * 8;
        uVar2 = (uint)&buff_flg_ctrl.field_0x7 & 7;
        puVar4 = (ulong *)(&buff_flg_ctrl.field_0x7 + -uVar2);
        *puVar4 = *puVar4 & -1L << (uVar2 + 1) * 8 | (ulong)buff_flg_ctrl._0_8_ >> (7 - uVar2) * 8;
        puVar1 = (undefined *)((int)buff_flg_ctrl.ending_movie_flg.flag_32 + 3);
        uVar2 = (uint)puVar1 & 7;
        puVar4 = (ulong *)(puVar1 + -uVar2);
        *puVar4 = *puVar4 & -1L << (uVar2 + 1) * 8 | uVar8 >> (7 - uVar2) * 8;
        puVar1 = (undefined *)((int)buff_flg_ctrl.difficulty_flg.flag_32 + 3);
        uVar2 = (uint)puVar1 & 7;
        puVar4 = (ulong *)(puVar1 + -uVar2);
        *puVar4 = *puVar4 & -1L << (uVar2 + 1) * 8 | uVar9 >> (7 - uVar2) * 8;
        buff_flg_ctrl._8_8_ = uVar8;
        buff_flg_ctrl._16_8_ = uVar9;
        ClearFlgMerging__FG14CLEAR_FLG_CTRLT0(&CStack_40,&buff_flg_ctrl,&clear_flg_ctrl);
        SetClearFlgCtrl__FG14CLEAR_FLG_CTRL(&CStack_40);
      }
      system_data_save_ctrl.mc_step = '\x06';
      system_data_save_disp.msg_id = 0x1c;
    }
  }
  else if (iVar5 < 0) {
    system_data_save_disp.msg_id = 7;
    switch(iVar5) {
    case -10:
    case -9:
    case -8:
    case -7:
    case -6:
    case -5:
    case -4:
      system_data_save_disp.msg_id = 7;
      break;
    case -3:
      system_data_save_disp.msg_id = 0x19;
      break;
    case -2:
      system_data_save_disp.msg_id = 0xd;
    }
    system_data_save_ctrl.mc_step = '\b';
  }
  if (iVar5 != 0) {
    LiberateSystemDataSaveMem__FPPv(&system_data_buff_addr);
  }
  return;
}

static void SystemDataSaveMcSaveInit() {
	int size;
	char path_name[55];
	
  int size;
  char path_name [55];
  
  memset(path_name,0,0x37);
  LiberateSystemDataSaveMem__FPPv(&system_data_buff_addr);
  OptSetOptWrk__Fv();
  MemoryCardSetFilePath__FPcii(path_name,0,0);
  size = GetMemoryCardDataSize__Fii(0,0);
  GetSystemDataSaveDataMem__FPPvi(&system_data_buff_addr,size);
  SetMemoryCardSaveDataToBuff__FPcii((char *)system_data_buff_addr,0,0);
  MemoryCardFileSaveInit__FiiPcPvi(0,0,path_name,system_data_buff_addr,size);
  system_data_save_disp.msg_id = 0x1c;
  system_data_save_ctrl.mc_step = '\a';
  return;
}

static void SystemDataSaveMcSaveWait() {
	int mc_res;
	
  int iVar1;
  
  iVar1 = MemoryCardFileSaveMain__Fv();
  if (iVar1 == 1) {
    system_data_save_ctrl.mc_step = '\n';
    system_data_save_disp.msg_id = 8;
  }
  else if (iVar1 < 0) {
    system_data_save_ctrl.mc_step = '\b';
    system_data_save_disp.msg_id = 7;
  }
  if (iVar1 != 0) {
    LiberateSystemDataSaveMem__FPPv(&system_data_buff_addr);
  }
  return;
}

static void SystemDataSaveMcErrorConfInit() {
  LiberateSystemDataSaveMem__FPPv(&system_data_buff_addr);
  MemoryCardCheckEveryFrameInit__Fii(0,0);
  system_data_save_ctrl.mc_step = '\t';
  return;
}

static void SystemDataSaveMcErrorConfWait() {
	int mc_res;
	
  int iVar1;
  
  SystemDataSaveMcErrorConfPad__Fv();
  iVar1 = MemoryCardCheckEveryFrameMain__Fv();
  if ((iVar1 == -1) || (iVar1 == -2)) {
    system_data_save_disp.msg_id = 0;
    system_data_save_ctrl.mc_step = '\0';
  }
  else {
    if (iVar1 == 1) {
      MemoryCardCheckEveryFrameInit__Fii(0,0);
      return;
    }
    if (iVar1 < 0) {
      MemoryCardCheckEveryFrameInit__Fii(0,0);
    }
  }
  return;
}

static void SystemDataSaveMcErrorConfPad() {
  if (**paddat != 1) {
    if (*paddat[1] == 1) {
      SystemBankPlay__FiiiiP11_SND_3D_SETii(1,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
      SystemDataSaveOutReq__Fc('\0');
    }
    return;
  }
  SystemBankPlay__FiiiiP11_SND_3D_SETii(3,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
  SystemDataSaveOutReq__Fc('\0');
  return;
}

static void SystemDataSaveMcEndConf() {
  if (**paddat != 1) {
    if (*paddat[1] == 1) {
      SystemBankPlay__FiiiiP11_SND_3D_SETii(1,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
      SystemDataSaveOutReq__Fc('\0');
    }
    return;
  }
  SystemBankPlay__FiiiiP11_SND_3D_SETii(3,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
  SystemDataSaveOutReq__Fc('\0');
  return;
}

static void SystemDataSaveMcRemakeConfInit() {
  MemoryCardCheckEveryFrameInit__Fii(0,0);
  system_data_save_ctrl.conf_csr = '\x01';
  system_data_save_ctrl.mc_step = '\f';
  system_data_save_disp.msg_id = 0x16;
  return;
}

static void SystemDataSaveMcRemakeConfWait() {
  SystemDataSaveMcRemakeConfPad__Fv();
  SystemDataSaveMcEveryFrameCheck__Fv();
  return;
}

static void SystemDataSaveMcRemakeConfPad() {
  int iVar1;
  
  if (((((pad[0].rpt & 0x8000U) == 0) && (iVar1 = GetPadAnalogRpt__Fi(2), iVar1 == 0)) &&
      ((pad[0].rpt & 0x2000U) == 0)) && (iVar1 = GetPadAnalogRpt__Fi(3), iVar1 == 0)) {
    if (**paddat == 1) {
      SystemBankPlay__FiiiiP11_SND_3D_SETii(3,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
      if (system_data_save_ctrl.conf_csr != '\0') {
        SystemDataSaveOutReq__Fc('\0');
        return;
      }
      system_data_save_ctrl.mc_step = '\r';
      system_data_save_disp.msg_id = 0x12;
    }
    else if (*paddat[1] == 1) {
      SystemBankPlay__FiiiiP11_SND_3D_SETii(1,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
      SystemDataSaveOutReq__Fc('\x01');
    }
  }
  else {
    SystemBankPlay__FiiiiP11_SND_3D_SETii(0,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
    system_data_save_ctrl.conf_csr = system_data_save_ctrl.conf_csr ^ 1;
  }
  return;
}

static void SystemDataSaveMcRemakeDirDelInit() {
  MemoryCardDirDelInit__Fiii(0,0,0);
  system_data_save_disp.msg_id = 0x12;
  system_data_save_ctrl.mc_step = '\x0e';
  return;
}

static void SystemDataSaveMcRemakeDirDelWait() {
	int mc_res;
	
  int iVar1;
  
  iVar1 = MemoryCardDirDelMain__Fv();
  if (iVar1 == 1) {
    system_data_save_ctrl.mc_step = '\x11';
    system_data_save_disp.msg_id = 0x12;
  }
  else if (iVar1 < 0) {
    system_data_save_disp.msg_id = 0x13;
    system_data_save_ctrl.mc_step = '\b';
  }
  return;
}

static void SystemDataSaveMcNewMakeConfInit() {
  MemoryCardCheckEveryFrameInit__Fii(0,0);
  system_data_save_ctrl.conf_csr = '\x01';
  system_data_save_ctrl.mc_step = '\x10';
  system_data_save_disp.msg_id = 0x15;
  return;
}

static void SystemDataSaveMcNewMakeConfWait() {
  SystemDataSaveMcNewMakeConfPad__Fv();
  SystemDataSaveMcEveryFrameCheck__Fv();
  return;
}

static void SystemDataSaveMcNewMakeConfPad() {
  int iVar1;
  
  if (((((pad[0].rpt & 0x8000U) == 0) && (iVar1 = GetPadAnalogRpt__Fi(2), iVar1 == 0)) &&
      ((pad[0].rpt & 0x2000U) == 0)) && (iVar1 = GetPadAnalogRpt__Fi(3), iVar1 == 0)) {
    if (**paddat == 1) {
      SystemBankPlay__FiiiiP11_SND_3D_SETii(3,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
      if (system_data_save_ctrl.conf_csr != '\0') {
        SystemDataSaveOutReq__Fc('\0');
        return;
      }
      system_data_save_ctrl.mc_step = '\x11';
      system_data_save_disp.msg_id = 0x12;
    }
    else if (*paddat[1] == 1) {
      SystemBankPlay__FiiiiP11_SND_3D_SETii(1,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
      SystemDataSaveOutReq__Fc('\x01');
    }
  }
  else {
    SystemBankPlay__FiiiiP11_SND_3D_SETii(0,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
    system_data_save_ctrl.conf_csr = system_data_save_ctrl.conf_csr ^ 1;
  }
  return;
}

static void SystemDataSaveMcNewMakeInit() {
	int buff_size;
	
  int size;
  
  size = GetMemoryCardDirSize__Fi(0);
  LiberateSystemDataSaveMem__FPPv(&system_data_buff_addr);
  GetSystemDataSaveDataMem__FPPvi(&system_data_buff_addr,size);
  MemoryCardNewMakeInit__FiiiPvi(0,0,0,system_data_buff_addr,size);
  system_data_save_ctrl.mc_step = '\x12';
  return;
}

static void SystemDataSaveMcNewMakeWait() {
	int mc_res;
	
  int iVar1;
  
  iVar1 = MemoryCardNewMakeMain__Fv();
  if (iVar1 == 1) {
    system_data_save_ctrl.mc_step = '\x06';
    system_data_save_disp.msg_id = 0x1c;
  }
  else if (iVar1 < 0) {
    system_data_save_ctrl.mc_step = '\b';
    system_data_save_disp.msg_id = 0x13;
  }
  if (iVar1 != 0) {
    LiberateSystemDataSaveMem__FPPv(&system_data_buff_addr);
  }
  return;
}

static void SystemDataSaveMcFormatConfInit() {
  MemoryCardCheckEveryFrameInit__Fii(0,0);
  system_data_save_ctrl.conf_csr = '\x01';
  system_data_save_ctrl.mc_step = '\x14';
  system_data_save_disp.msg_id = 3;
  return;
}

static void SystemDataSaveMcFormatConfWait() {
	int mc_res;
	
  int iVar1;
  int iVar2;
  
  SystemDataSaveMcFormatConfPad__Fv();
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
      goto LAB_002665e4;
    case -1:
      iVar2 = 1;
    }
    system_data_save_ctrl.mc_step = '\b';
    system_data_save_disp.msg_id = iVar2;
  }
LAB_002665e4:
  return;
}

static void SystemDataSaveMcFormatConfPad() {
  int iVar1;
  
  if (((((pad[0].rpt & 0x8000U) == 0) && (iVar1 = GetPadAnalogRpt__Fi(2), iVar1 == 0)) &&
      ((pad[0].rpt & 0x2000U) == 0)) && (iVar1 = GetPadAnalogRpt__Fi(3), iVar1 == 0)) {
    if (**paddat == 1) {
      SystemBankPlay__FiiiiP11_SND_3D_SETii(3,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
      if (system_data_save_ctrl.conf_csr != '\0') {
        SystemDataSaveOutReq__Fc('\0');
        return;
      }
      system_data_save_ctrl.mc_step = '\x15';
      system_data_save_disp.msg_id = 4;
    }
    else if (*paddat[1] == 1) {
      SystemBankPlay__FiiiiP11_SND_3D_SETii(1,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
      SystemDataSaveOutReq__Fc('\x01');
    }
  }
  else {
    SystemBankPlay__FiiiiP11_SND_3D_SETii(0,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
    system_data_save_ctrl.conf_csr = system_data_save_ctrl.conf_csr ^ 1;
  }
  return;
}

static void SystemDataSaveMcFormatInit() {
  MemoryCardFormatInit__Fii(0,0);
  system_data_save_disp.msg_id = 4;
  system_data_save_ctrl.mc_step = '\x16';
  return;
}

static void SystemDataSaveMcFormatWait() {
	int mc_res;
	
  int iVar1;
  
  iVar1 = MemoryCardFormatMain__Fv();
  if (iVar1 == 1) {
    system_data_save_ctrl.mc_step = '\x17';
    system_data_save_disp.msg_id = 0x39;
  }
  else if (iVar1 < 0) {
    system_data_save_disp.msg_id = 5;
    system_data_save_ctrl.mc_step = '\b';
  }
  return;
}

static void SystemDataSaveMcFormatEndInit() {
  system_data_save_disp.msg_id = 0x39;
  system_data_save_ctrl.mc_step = '\x18';
  system_data_save_ctrl.format_end_cnt = '\0';
  return;
}

static void SystemDataSaveMcFormatEndWait() {
  system_data_save_ctrl.format_end_cnt = system_data_save_ctrl.format_end_cnt + '\x01';
  if (';' < system_data_save_ctrl.format_end_cnt) {
    system_data_save_ctrl.mc_step = '\x11';
    system_data_save_disp.msg_id = 0x12;
  }
  return;
}

static void SystemDataSaveMcEveryFrameCheck() {
	int mc_res;
	
  int iVar1;
  
  iVar1 = MemoryCardCheckEveryFrameMain__Fv();
  if (iVar1 < 0) {
    system_data_save_disp.msg_id = 2;
    switch(iVar1) {
    case -0x14:
      system_data_save_disp.msg_id = 1;
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
      system_data_save_disp.msg_id = 2;
      break;
    case -2:
      system_data_save_disp.msg_id = 0xd;
      break;
    case -1:
      system_data_save_disp.msg_id = 1;
    }
    system_data_save_ctrl.mc_step = '\b';
  }
  return;
}

void SystemDataSaveEnd() {
  LiberateSystemDataSaveMem__FPPv(&system_data_buff_addr);
  MemoryCardEnd__Fv();
  SystemDataSaveMemGet = (undefined1 *)0x0;
  SystemDataSaveMemFree = (undefined1 *)0x0;
  return;
}

static void LiberateSystemDataSaveMem(void **tex_addr) {
  if (*tex_addr != (void *)0x0) {
    (*(code *)SystemDataSaveMemFree)(*tex_addr);
    *tex_addr = (void *)0x0;
  }
  return;
}

static void SystemDataSaveDispInit() {
  system_data_save_disp.anim_timer = '\0';
  system_data_save_disp.msg_id = 0;
  system_data_save_disp.anim_step = '\0';
  return;
}

void SystemDataSaveDispMain() {
	u_char alpha;
	
  uchar alpha;
  
  alpha = Zero2Anim2D_InOutAnimCtrl__FPcT0ss
                    (&system_data_save_disp.anim_step,&system_data_save_disp.anim_timer,10,5);
  switch(system_data_save_ctrl.mc_step) {
  case '\x02':
  case '\x03':
  case '\v':
  case '\f':
  case '\x0f':
  case '\x10':
  case '\x13':
  case '\x14':
    SaveLoadMcSelYesNoWinDisp__FiiUci(0,0,alpha,(int)system_data_save_ctrl.conf_csr);
    break;
  case '\x04':
  case '\x05':
  case '\x06':
  case '\a':
  case '\b':
  case '\t':
  case '\n':
  case '\r':
  case '\x0e':
  case '\x11':
  case '\x12':
  default:
    SaveLoadMcStateMsgWinDisp__FiiUc(0,0,alpha);
  }
  SaveLoadMcStateMsgDisp__FiiUci(0,0,alpha,system_data_save_disp.msg_id);
  return;
}
