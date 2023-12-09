// STATUS: NOT STARTED

#include "lang_check.h"

typedef struct {
	char step;
	short int move_timer;
	int msg_id;
} LANG_CHECK_CTRL;

static void *lang_check_data_buff = NULL;
static LANG_CHECK_CTRL lang_check_ctrl;

static void _fixed_array_assert(char *strType, size_t v0, size_t v1) {
	static char *str = 0x3ba140;
	
  g3ddbgAssert__FbPCce(false,str_849);
  return;
}

static void** void * * _fixed_array_verifyrange<void *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_assert__FPCcUiUi(s_void__003f17a8,_max,v);
  }
  return (void **)0x0;
}

static char** char * * _fixed_array_verifyrange<char *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_assert__FPCcUiUi(s_char__003f17b0,_max,v);
  }
  return (char **)0x0;
}

static unsigned int** unsigned int * * _fixed_array_verifyrange<unsigned int *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_assert__FPCcUiUi("unsigned int*",_max,v);
  }
  return (uint **)0x0;
}

static void LangCheckInit() {
  lang_check_ctrl.msg_id = 0;
  lang_check_ctrl.step = '\0';
  lang_check_ctrl.move_timer = 0;
  if (lang_check_data_buff != (void *)0x0) {
    LiberateDataMemoryArea__FPv(lang_check_data_buff);
    lang_check_data_buff = (void *)0x0;
  }
  return;
}

static void LangCheckMain() {
	static char __FUNCTION__[14] = {
		/* [0] = */ 76,
		/* [1] = */ 97,
		/* [2] = */ 110,
		/* [3] = */ 103,
		/* [4] = */ 67,
		/* [5] = */ 104,
		/* [6] = */ 101,
		/* [7] = */ 99,
		/* [8] = */ 107,
		/* [9] = */ 77,
		/* [10] = */ 97,
		/* [11] = */ 105,
		/* [12] = */ 110,
		/* [13] = */ 0
	};
	char path_name[55];
	
  int iVar1;
  char path_name [55];
  
  memset(path_name,0,0x37);
  switch(lang_check_ctrl.step) {
  case '\0':
    LangCheckMcCheckInit__Fv();
  case '\x01':
    LangCheckMcCheckWait__Fv();
    break;
  case '\x02':
    LangCheckMcLoadInit__Fv();
  case '\x03':
    LangCheckMcLoadWait__Fv();
    break;
  case '\x04':
    LangCheckMcLoadConf__Fv();
    break;
  case '\x05':
    LoadLangSetUp__Fv();
    LangData_LoadReq__Fv();
    lang_check_ctrl.step = '\x06';
  case '\x06':
    iVar1 = LangData_LoadWait__Fv();
    if (iVar1 != 0) {
      SetNextGPhase__F14GPHASE_ID_ENUM(GID_UBI_MODE);
    }
    break;
  case '\a':
    LangCheckMcErrorConf__Fv();
    break;
  default:
    SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
    PrintAssertReal("Error! LangCheckMain");
  }
  return;
}

static void LangCheckMcCheckInit() {
	char path_name[55];
	
  char path_name [55];
  
  memset(path_name,0,0x37);
  MemoryCardMakeSearchDirPath__FPci(path_name,0);
  MemoryCardCheckInit__FiiPc(0,0,path_name);
  lang_check_ctrl.step = '\x01';
  return;
}

static void LangCheckMcCheckWait() {
	int mc_res;
	
  int iVar1;
  
  iVar1 = MemoryCardCheckMain__Fv();
  if (iVar1 == 1) {
    iVar1 = MemoryCardCheckDirBroken__Fi(0);
    if (iVar1 == 0) {
      lang_check_ctrl.step = '\a';
      lang_check_ctrl.msg_id = 0x19;
      return;
    }
switchD_001d3f74_caseD_ffffffff:
    lang_check_ctrl.step = '\x02';
    lang_check_ctrl.msg_id = 0x1d;
  }
  else {
    if (-1 < iVar1) {
      return;
    }
    switch(iVar1) {
    case -0x14:
      lang_check_ctrl.msg_id = 0x38;
      break;
    default:
      lang_check_ctrl.msg_id = 2;
      break;
    case -6:
      lang_check_ctrl.msg_id = 0x19;
      break;
    case -4:
      iVar1 = MemoryCardCheckEmpty__Fi(0);
      if (iVar1 == 0) {
        lang_check_ctrl.msg_id = 0x37;
      }
      else {
        lang_check_ctrl.msg_id = 0x18;
      }
      break;
    case -2:
      lang_check_ctrl.msg_id = 0x18;
      break;
    case -1:
      goto switchD_001d3f74_caseD_ffffffff;
    }
    lang_check_ctrl.step = '\a';
  }
  return;
}

static void LangCheckMcLoadInit() {
	int size;
	char path_name[55];
	
  int size;
  char path_name [55];
  
  memset(path_name,0,0x37);
  MemoryCardSetFilePath__FPcii(path_name,0,0);
  size = GetMemoryCardDataSize__Fii(0,0);
  lang_check_data_buff = GetDataMemoryArea__Fi(size);
  MemoryCardFileLoadInit__FiiPcPvi(0,0,path_name,lang_check_data_buff,size);
  lang_check_ctrl.msg_id = 0x1d;
  lang_check_ctrl.step = '\x03';
  return;
}

static void LangCheckMcLoadWait() {
	int mc_res;
	int size;
	
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = MemoryCardFileLoadMain__Fv();
  if (iVar1 == 1) {
    iVar2 = GetMemoryCardDataSize__Fii(0,0);
    iVar3 = MemoryCardCheckFileBroken__FPvi(lang_check_data_buff,iVar2);
    if (iVar3 == 0) {
      iVar2 = 0x19;
    }
    else {
      iVar3 = MemoryCardCheckNewFileLoad__FPvi(lang_check_data_buff,iVar2);
      iVar2 = 0x33;
      if (iVar3 == 0) {
        DevelopMemoryCardLoadData__FPcii((char *)lang_check_data_buff,0,0);
        OptSoundSetupRef__FP10OPTION_WRK(&opt_wrk);
        lang_check_ctrl.step = '\x04';
        lang_check_ctrl.msg_id = 0x10;
        lang_check_ctrl.move_timer = 0;
        goto LAB_001d41a8;
      }
    }
    lang_check_ctrl.step = '\a';
    lang_check_ctrl.msg_id = iVar2;
  }
  else if (iVar1 < 0) {
    lang_check_ctrl.msg_id = 0xf;
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
      lang_check_ctrl.msg_id = 0xf;
      break;
    case -3:
      lang_check_ctrl.msg_id = 0x33;
      break;
    case -2:
      lang_check_ctrl.msg_id = 0x18;
    }
    lang_check_ctrl.step = '\a';
  }
LAB_001d41a8:
  if ((iVar1 != 0) && (lang_check_data_buff != (void *)0x0)) {
    LiberateDataMemoryArea__FPv(lang_check_data_buff);
    lang_check_data_buff = (void *)0x0;
  }
  return;
}

static void LangCheckMcLoadConf() {
  if (**paddat == 1) {
    SystemBankPlay__FiiiiP11_SND_3D_SETii(3,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
    lang_check_ctrl.step = '\x05';
  }
  lang_check_ctrl.move_timer = lang_check_ctrl.move_timer + 1;
  if (0x95 < (short)lang_check_ctrl.move_timer) {
    lang_check_ctrl.step = '\x05';
  }
  return;
}

static void LangCheckMcErrorConf() {
  SetNextGPhase__F14GPHASE_ID_ENUM(GID_LANGSEL_MAIN);
  return;
}

static void LangCheckDispMain() {
	static char __FUNCTION__[18] = {
		/* [0] = */ 76,
		/* [1] = */ 97,
		/* [2] = */ 110,
		/* [3] = */ 103,
		/* [4] = */ 67,
		/* [5] = */ 104,
		/* [6] = */ 101,
		/* [7] = */ 99,
		/* [8] = */ 107,
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
	
  if (-1 < lang_check_ctrl.step) {
    if (lang_check_ctrl.step < '\x05') {
      DrawCmnTwoLineWindow__FUiffffUcUc(0,45.0,126.0,DAT_003ee494,216.0,0x80,0x80);
      PrintMsg__Fiiiiiii(0x50,lang_check_ctrl.msg_id,0x5c,0x8e,1,0x80,0);
      return;
    }
    if (lang_check_ctrl.step < '\b') {
      return;
    }
  }
  SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
  PrintAssertReal("Error! LangCheckDispMain");
  return;
}

void init_LangData_Check() {
  MemoryCardExeInit__Fv();
  LangCheckInit__Fv();
  return;
}

GPHASE_ENUM one_LangData_Check(GPHASE_ENUM dummy) {
  LangCheckMain__Fv();
  LangCheckDispMain__Fv();
  return GPHASE_CONTINUE;
}

void end_LangData_Check() {
  if (lang_check_data_buff != (void *)0x0) {
    LiberateDataMemoryArea__FPv(lang_check_data_buff);
    lang_check_data_buff = (void *)0x0;
  }
  MemoryCardEnd__Fv();
  return;
}
