// STATUS: NOT STARTED

#include "autoload.h"

typedef struct {
	char step;
	char csr;
	short int move_timer;
	int msg_id;
} AUTO_LOAD_CTRL;

static void *auto_load_data_buff = NULL;
static AUTO_LOAD_CTRL auto_load_ctrl;

static void _fixed_array_assert(char *strType, size_t v0, size_t v1) {
	static char *str = 0x3a17c0;
	
  g3ddbgAssert__FbPCce(false,str_849);
  return;
}

static void** void * * _fixed_array_verifyrange<void *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_assert__FPCcUiUi(s_void__003ef510,_max,v);
  }
  return (void **)0x0;
}

static char** char * * _fixed_array_verifyrange<char *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_assert__FPCcUiUi(s_char__003ef518,_max,v);
  }
  return (char **)0x0;
}

static unsigned int** unsigned int * * _fixed_array_verifyrange<unsigned int *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_assert__FPCcUiUi("unsigned int*",_max,v);
  }
  return (uint **)0x0;
}

static void AutoLoadInit() {
  auto_load_ctrl.msg_id = 0;
  auto_load_ctrl.csr = '\x01';
  auto_load_ctrl.step = '\0';
  auto_load_ctrl.move_timer = 0;
  if (auto_load_data_buff != (void *)0x0) {
    LiberateDataMemoryArea__FPv(auto_load_data_buff);
    auto_load_data_buff = (void *)0x0;
  }
  MemoryCardSetAccessPort__Fi(0);
  return;
}

static void AutoLoadMain() {
	static char __FUNCTION__[13] = {
		/* [0] = */ 65,
		/* [1] = */ 117,
		/* [2] = */ 116,
		/* [3] = */ 111,
		/* [4] = */ 76,
		/* [5] = */ 111,
		/* [6] = */ 97,
		/* [7] = */ 100,
		/* [8] = */ 77,
		/* [9] = */ 97,
		/* [10] = */ 105,
		/* [11] = */ 110,
		/* [12] = */ 0
	};
	char path_name[55];
	
  char path_name [55];
  
  memset(path_name,0,0x37);
  switch(auto_load_ctrl.step) {
  case '\0':
    AutoLoadMcCheckInit__Fv();
  case '\x01':
    AutoLoadMcCheckWait__Fv();
    break;
  case '\x02':
    AutoLoadMcLoadInit__Fv();
  case '\x03':
    AutoLoadMcLoadWait__Fv();
    break;
  case '\x04':
    AutoLoadMcLoadConf__Fv();
    break;
  case '\x05':
    AutoLoadMcErrorConf__Fv();
    break;
  case '\x06':
    AutoLoadMcDefStartConf__Fv();
    break;
  case '\a':
    AutoLoadMcEmptyError__Fv();
    break;
  case '\b':
    AutoLoadMcEmptyWarning__Fv();
    break;
  default:
    SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
    PrintAssertReal("Error! AutoLoadMain");
  }
  return;
}

static void AutoLoadMcCheckInit() {
	char path_name[55];
	
  char path_name [55];
  
  memset(path_name,0,0x37);
  MemoryCardMakeSearchDirPath__FPci(path_name,0);
  MemoryCardCheckInit__FiiPc(0,0,path_name);
  auto_load_ctrl.step = '\x01';
  return;
}

static void AutoLoadMcCheckWait() {
	int mc_res;
	
  int iVar1;
  
  iVar1 = MemoryCardCheckMain__Fv();
  if (iVar1 == 1) {
    iVar1 = MemoryCardCheckDirBroken__Fi(0);
    if (iVar1 == 0) {
      auto_load_ctrl.step = '\x05';
      auto_load_ctrl.msg_id = 0x19;
      return;
    }
switchD_0012b91c_caseD_ffffffff:
    auto_load_ctrl.step = '\x02';
    auto_load_ctrl.msg_id = 0x1d;
  }
  else {
    if (-1 < iVar1) {
      return;
    }
    switch(iVar1) {
    case -0x14:
      auto_load_ctrl.msg_id = 0x38;
      break;
    default:
      auto_load_ctrl.msg_id = 2;
      break;
    case -6:
      auto_load_ctrl.msg_id = 0x19;
      break;
    case -4:
      iVar1 = MemoryCardCheckEmpty__Fi(0);
      if (iVar1 == 0) {
        auto_load_ctrl.step = '\a';
        auto_load_ctrl.msg_id = 0x37;
        return;
      }
      auto_load_ctrl.msg_id = 0x18;
      break;
    case -2:
      auto_load_ctrl.msg_id = 0x18;
      break;
    case -1:
      goto switchD_0012b91c_caseD_ffffffff;
    }
    auto_load_ctrl.step = '\x05';
  }
  return;
}

static void AutoLoadMcLoadInit() {
	int size;
	char path_name[55];
	
  int size;
  char path_name [55];
  
  memset(path_name,0,0x37);
  MemoryCardSetFilePath__FPcii(path_name,0,0);
  size = GetMemoryCardDataSize__Fii(0,0);
  auto_load_data_buff = GetDataMemoryArea__Fi(size);
  MemoryCardFileLoadInit__FiiPcPvi(0,0,path_name,auto_load_data_buff,size);
  auto_load_ctrl.msg_id = 0x1d;
  auto_load_ctrl.step = '\x03';
  return;
}

static void AutoLoadMcLoadWait() {
	int mc_res;
	int size;
	
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = MemoryCardFileLoadMain__Fv();
  if (iVar1 == 1) {
    iVar2 = GetMemoryCardDataSize__Fii(0,0);
    iVar3 = MemoryCardCheckFileBroken__FPvi(auto_load_data_buff,iVar2);
    if (iVar3 == 0) {
      iVar2 = 0x19;
    }
    else {
      iVar3 = MemoryCardCheckNewFileLoad__FPvi(auto_load_data_buff,iVar2);
      iVar2 = 0x33;
      if (iVar3 == 0) {
        DevelopMemoryCardLoadData__FPcii((char *)auto_load_data_buff,0,0);
        OptSoundSetupRef__FP10OPTION_WRK(&opt_wrk);
        auto_load_ctrl.step = '\x04';
        auto_load_ctrl.msg_id = 0x10;
        auto_load_ctrl.move_timer = 0;
        goto LAB_0012bb50;
      }
    }
    auto_load_ctrl.step = '\x05';
    auto_load_ctrl.msg_id = iVar2;
  }
  else if (iVar1 < 0) {
    auto_load_ctrl.msg_id = 0xf;
    switch(iVar1) {
    case -0x14:
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
      auto_load_ctrl.msg_id = 0xf;
      break;
    case -3:
      auto_load_ctrl.msg_id = 0x33;
      break;
    case -2:
      auto_load_ctrl.msg_id = 0x18;
    }
    auto_load_ctrl.step = '\x05';
  }
LAB_0012bb50:
  if ((iVar1 != 0) && (auto_load_data_buff != (void *)0x0)) {
    LiberateDataMemoryArea__FPv(auto_load_data_buff);
    auto_load_data_buff = (void *)0x0;
  }
  return;
}

static void AutoLoadMcLoadConf() {
  if (**paddat == 1) {
    SystemBankPlay__FiiiiP11_SND_3D_SETii(3,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
    SetNextGPhase__F14GPHASE_ID_ENUM(GID_UBI_MODE);
  }
  auto_load_ctrl.move_timer = auto_load_ctrl.move_timer + 1;
  if (0x95 < (short)auto_load_ctrl.move_timer) {
    SetNextGPhase__F14GPHASE_ID_ENUM(GID_UBI_MODE);
  }
  return;
}

static void AutoLoadMcErrorConf() {
  if (**paddat == 1) {
    SystemBankPlay__FiiiiP11_SND_3D_SETii(3,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
    auto_load_ctrl.csr = '\x01';
    auto_load_ctrl.step = '\x06';
    auto_load_ctrl.msg_id = 0x23;
  }
  return;
}

static void AutoLoadMcDefStartConf() {
  int iVar1;
  
  if (((((pad[0].rpt & 0x8000U) == 0) && (iVar1 = GetPadAnalogRpt__Fi(2), iVar1 == 0)) &&
      ((pad[0].rpt & 0x2000U) == 0)) && (iVar1 = GetPadAnalogRpt__Fi(3), iVar1 == 0)) {
    if (**paddat == 1) {
      SystemBankPlay__FiiiiP11_SND_3D_SETii(3,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
      if (auto_load_ctrl.csr == '\0') {
        auto_load_ctrl.msg_id = 0x25;
        auto_load_ctrl.step = '\x04';
        auto_load_ctrl.move_timer = 0;
        InitOptionSetup__FP10OPTION_WRK(&opt_wrk);
        return;
      }
      auto_load_ctrl.msg_id = 0;
      auto_load_ctrl.step = '\0';
    }
    else if (*paddat[1] == 1) {
      SystemBankPlay__FiiiiP11_SND_3D_SETii(1,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
      auto_load_ctrl.msg_id = 0;
      auto_load_ctrl.step = '\0';
    }
  }
  else {
    SystemBankPlay__FiiiiP11_SND_3D_SETii(0,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
    auto_load_ctrl.csr = auto_load_ctrl.csr ^ 1;
  }
  return;
}

static void AutoLoadMcEmptyError() {
  if (**paddat == 1) {
    SystemBankPlay__FiiiiP11_SND_3D_SETii(3,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
    auto_load_ctrl.csr = '\x01';
    auto_load_ctrl.step = '\b';
    auto_load_ctrl.msg_id = 0x24;
  }
  return;
}

static void AutoLoadMcEmptyWarning() {
  int iVar1;
  
  if (((((pad[0].rpt & 0x8000U) == 0) && (iVar1 = GetPadAnalogRpt__Fi(2), iVar1 == 0)) &&
      ((pad[0].rpt & 0x2000U) == 0)) && (iVar1 = GetPadAnalogRpt__Fi(3), iVar1 == 0)) {
    if (**paddat == 1) {
      SystemBankPlay__FiiiiP11_SND_3D_SETii(3,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
      if (auto_load_ctrl.csr == '\0') {
        auto_load_ctrl.msg_id = 0x25;
        auto_load_ctrl.step = '\x04';
        auto_load_ctrl.move_timer = 0;
      }
      else {
        auto_load_ctrl.msg_id = 0;
        auto_load_ctrl.step = '\0';
      }
    }
    else if (*paddat[1] == 1) {
      SystemBankPlay__FiiiiP11_SND_3D_SETii(1,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
      auto_load_ctrl.msg_id = 0;
      auto_load_ctrl.step = '\0';
    }
  }
  else {
    SystemBankPlay__FiiiiP11_SND_3D_SETii(0,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
    auto_load_ctrl.csr = auto_load_ctrl.csr ^ 1;
  }
  return;
}

static void AutoLoadDispMain() {
	static char __FUNCTION__[17] = {
		/* [0] = */ 65,
		/* [1] = */ 117,
		/* [2] = */ 116,
		/* [3] = */ 111,
		/* [4] = */ 76,
		/* [5] = */ 111,
		/* [6] = */ 97,
		/* [7] = */ 100,
		/* [8] = */ 68,
		/* [9] = */ 105,
		/* [10] = */ 115,
		/* [11] = */ 112,
		/* [12] = */ 77,
		/* [13] = */ 97,
		/* [14] = */ 105,
		/* [15] = */ 110,
		/* [16] = */ 0
	};
	
  switch(auto_load_ctrl.step) {
  case '\0':
  case '\x01':
  case '\x02':
  case '\x03':
  case '\x04':
  case '\x05':
  case '\a':
    DrawCmnTwoLineWindow__FUiffffUcUc(0,45.0,126.0,DAT_003ed904,216.0,0x80,0x80);
    PrintMsg__Fiiiiiii(0x50,auto_load_ctrl.msg_id,0x5c,0x8e,1,0x80,0);
    return;
  case '\x06':
  case '\b':
    DrawCmnTwoLineWindow__FUiffffUcUc(0,45.0,126.0,DAT_003ed908,216.0,0x80,0x80);
    DrawCmnYesNoSel__FifUcUi((int)auto_load_ctrl.csr,DAT_003ed90c,0x80,0);
    PrintMsg__Fiiiiiii(0x50,auto_load_ctrl.msg_id,0x5c,0x8e,1,0x80,0);
    return;
  default:
    SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
    PrintAssertReal("Error! AutoLoadDispMain");
    return;
  }
}

void init_AutoLoad_Main() {
  MemoryCardExeInit__Fv();
  AutoLoadInit__Fv();
  return;
}

GPHASE_ENUM one_AutoLoad_Main(GPHASE_ENUM dummy) {
  AutoLoadMain__Fv();
  AutoLoadDispMain__Fv();
  return GPHASE_CONTINUE;
}

void end_AutoLoad_Main() {
  if (auto_load_data_buff != (void *)0x0) {
    LiberateDataMemoryArea__FPv(auto_load_data_buff);
    auto_load_data_buff = (void *)0x0;
  }
  MemoryCardEnd__Fv();
  return;
}
