// STATUS: NOT STARTED

#include "main.h"

static int softreset_step_timer = 0;
static int *SubTitleAddr;
static int soft_reset_disable;

static void _fixed_array_assert(char *strType, size_t v0, size_t v1) {
	static char *str = 0x3bab20;
	
  g3ddbgAssert__FbPCce(false,str_849);
  return;
}

static void** void * * _fixed_array_verifyrange<void *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_assert__FPCcUiUi(s_void__003f1978,_max,v);
  }
  return (void **)0x0;
}

static char** char * * _fixed_array_verifyrange<char *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_assert__FPCcUiUi(s_char__003f1980,_max,v);
  }
  return (char **)0x0;
}

static unsigned int** unsigned int * * _fixed_array_verifyrange<unsigned int *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_assert__FPCcUiUi("unsigned int*",_max,v);
  }
  return (uint **)0x0;
}

int main() {
  __main();
  InitGPhaseSys__Fv();
  do {
    GPhaseSysMain__Fv();
  } while( true );
}

void DebugMemoryCheck() {
	static char __FUNCTION__[17] = {
		/* [0] = */ 68,
		/* [1] = */ 101,
		/* [2] = */ 98,
		/* [3] = */ 117,
		/* [4] = */ 103,
		/* [5] = */ 77,
		/* [6] = */ 101,
		/* [7] = */ 109,
		/* [8] = */ 111,
		/* [9] = */ 114,
		/* [10] = */ 121,
		/* [11] = */ 67,
		/* [12] = */ 104,
		/* [13] = */ 101,
		/* [14] = */ 99,
		/* [15] = */ 107,
		/* [16] = */ 0
	};
	
  uint uVar1;
  
  printf(&DAT_003f1990);
  printf(&DAT_003f1990);
  printf(&DAT_003f1990);
  printf("<<<<<<<<<<<<<<<MEMORY CHECK>>>>>>>>>>>>>>>>\n");
  printf("DEBUG_PROGRAM_ADDR = 0x%x\n");
  printf("HEAP_AREA_ADDR = 0x%x\n");
  printf("PRE_PACKET3D_ADDR = 0x%x\n");
  printf("PACKET3D_ADDR = 0x%x\n");
  printf("PACKET2D_ADDR = 0x%x\n");
  printf("CAMERA_VCI_ADDR = 0x%x\n");
  printf("MODEL_HEAP_ADDR = 0x%x\n");
  printf("EVENT_DATA_ADDR = 0x%x\n");
  printf("MSG_DATA_ADDR = 0x%x\n");
  printf("ROOM1_DATA_ADDR = 0x%x\n");
  printf("ROOM2_DATA_ADDR = 0x%x\n");
  printf("MEM_UTIL_HEAP_ADDR = 0x%x\n");
  printf("TEX_2D_ADDR = 0x%x\n");
  printf("PHOTO_DATA_ADDR = 0x%x\n");
  printf("EFFECT_WRK1_ADDR = 0x%x\n");
  printf("EFFECT_WRK2_ADDR = 0x%x\n");
  printf("RELEASE_END_ADDR = 0x%x\n");
  uVar1 = GetFileSize(0xd35);
  if (0x50000 < uVar1) {
    SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
    PrintAssertReal("EventObj Size Is Over");
  }
  uVar1 = GetFileSize(0xd36);
  if (0x50000 < uVar1) {
    SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
    PrintAssertReal("Event 50 Obj Size Is Over");
  }
  uVar1 = GetFileSize(0xd38);
  if (0x3d000 < uVar1) {
    SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
    PrintAssertReal("MsgObj Size Is Over");
  }
  uVar1 = GetFileSize(0xe27);
  if (0x8000 < uVar1) {
    SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
    PrintAssertReal("VCI Size Is Over");
  }
  DebugMsgDataCheck__Fv();
  printf("STACK_ADDR = 0x%x\n");
  printf(&DAT_003f1990);
  printf(&DAT_003f1990);
  printf("MENU_END_ADDR = 0x%x\n");
  printf(&DAT_003f1990);
  printf(&DAT_003f1990);
  return;
}

void newAssert(char *pStr) {
  g3ddbgAssert__FbPCce(false,pStr);
  return;
}

void init_super() {
  InitCostume__Fv();
  soft_reset_disable = 0;
  InitSystemON__Fv();
  DebugMemoryCheck__Fv();
  InitGraph2dBoot__Fv();
  playPssInit();
  InitLogo__Fv();
  LoadingInit__Fv();
  TitleInit__Fv();
  InitOptionSetup__FP10OPTION_WRK(&opt_wrk);
  ClearFlgCtrlInit__Fv();
  MemoryCardInit__Fv();
  MemoryCardDebugReqSizeDisp__Fv();
  dmaVif1Init__FPviT0i((void *)0x0,0,(void *)0x31aa1500,0x1ec30);
  InitDrawEnv__FPFv_PA3_iT0PFPA3_i_vT2
            (dmaVif1GetPacketFLUSH_DIRECT__Fv,dmaVif1GetPacketFLUSH_DIRECT__Fv,
             dmaVif1SetPacketFLUSH_DIRECT__FPA3_i,dmaVif1SetPacketFLUSH_DIRECT__FPA3_i);
  SetPrintWarning(Zero2PrintWarningFunc__FPc);
  SetPrintAssert(newAssert__FPc);
  gra3dInit__FPvi((void *)0x1a91b00,64000);
  IngameWrkInit__Fii(0,1);
  sceSifAllocSysMemory(1,0x600000,(void *)0x0);
  FinderBankSetup__Fv();
  SceneEffectInit__Fv();
  return;
}

void end_super() {
  return;
}

GPHASE_ENUM pre_super(GPHASE_ENUM super) {
  void *pvVar1;
  
  ClearDrawEnv__Fv();
  pvVar1 = GetDrawEnv__Fi(0);
  SetScissorRegister__Fil(0,*(long *)((int)pvVar1 + 0x30));
  pvVar1 = GetDrawEnv__Fi(1);
  SetScissorRegister__Fil(1,*(long *)((int)pvVar1 + 0x30));
  GET_SCISSOR_REGISTER__Fi(0);
  PadSyncCallback__Fv();
  PadAnalogMain__Fv();
  return GPHASE_CONTINUE;
}

GPHASE_ENUM after_super() {
  int iVar1;
  
  EachDebugMain__Fv();
  ee_iopMain();
  SendDMAMain__Fv();
  iVar1 = CheckSoftReset__Fv();
  return (GPHASE_ENUM)(iVar1 != 0);
}

void init_Boot_Init() {
  uchar uVar1;
  _HEAP_WRK *wrk;
  uint size;
  
  uVar1 = GetSystemLanguage__Fv();
  SetLanguage__FUc(uVar1);
  uVar1 = GetLanguage__Fv();
  LoadReq__FiUi((char)uVar1 + 4,0x1e79b00);
  uVar1 = GetLanguage__Fv();
  LoadReq__FiUi((char)uVar1 + 0xd38,0xd9ec00);
  wrk = GetSystemHeapWrkP__Fv();
  size = GetFileSize(0x1184);
  SubTitleAddr = (int *)SAFE_MALLOC(wrk,(void *)0x0,size);
  LoadReq__FiUi(0x1184,(uint)SubTitleAddr);
  return;
}

void end_Boot_Init() {
  return;
}

GPHASE_ENUM one_Boot_Init(GPHASE_ENUM dummy) {
  int iVar1;
  
  iVar1 = IsLoadEndAll__Fv();
  if (iVar1 != 0) {
    PK2SendVram__FUiiii(0x1e79b00,-1,-1,0);
    SetNextGPhase__F14GPHASE_ID_ENUM(GID_BOOT_PADCHECK);
  }
  return GPHASE_CONTINUE;
}

static int CheckSoftReset() {
  int iVar1;
  
  if (sys_wrk.sreset_ng == '\0') {
    if ((((soft_reset_disable == 0) && (*key_now[8] != 0)) && (*key_now[9] != 0)) &&
       (((*key_now[10] != 0 && (*key_now[11] != 0)) && ((*key_now[12] != 0 && (*key_now[13] != 0))))
       )) {
      printf("SOFT RESET COUNT DOWN = %d\n");
      sys_wrk.sreset_count = sys_wrk.sreset_count + 1;
      if ((short)sys_wrk.sreset_count < 0x3c) {
        iVar1 = 0;
      }
      else {
        sys_wrk.sreset_count = 0;
        CallSoftReset__Fv();
        iVar1 = 1;
      }
    }
    else {
      iVar1 = 0;
      sys_wrk.sreset_count = 0;
    }
  }
  else {
    sys_wrk.sreset_count = 0;
    iVar1 = 0;
  }
  return iVar1;
}

void SoftResetLock() {
  sys_wrk.sreset_count = 0;
  soft_reset_disable = soft_reset_disable + 1;
  return;
}

void SoftResetUnlock() {
	static char __FUNCTION__[16] = {
		/* [0] = */ 83,
		/* [1] = */ 111,
		/* [2] = */ 102,
		/* [3] = */ 116,
		/* [4] = */ 82,
		/* [5] = */ 101,
		/* [6] = */ 115,
		/* [7] = */ 101,
		/* [8] = */ 116,
		/* [9] = */ 85,
		/* [10] = */ 110,
		/* [11] = */ 108,
		/* [12] = */ 111,
		/* [13] = */ 99,
		/* [14] = */ 107,
		/* [15] = */ 0
	};
	
  soft_reset_disable = soft_reset_disable + -1;
  if (soft_reset_disable < 0) {
    SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
    PrintAssertReal("SoftResetUnlock Cnt under 0");
    soft_reset_disable = 0;
  }
  return;
}

static void CallSoftReset() {
  SetNextGPhase__F14GPHASE_ID_ENUM(GID_SOFTRESETMAIN);
  printf("SOFT RESET!!\n");
  return;
}

int* GetSubTitleAddr() {
  return SubTitleAddr;
}

void init_SoftResetMain() {
  FileLoadCancelAll();
  softreset_step_timer = 0;
  return;
}

GPHASE_ENUM one_SoftResetMain(GPHASE_ENUM dummy) {
  softreset_step_timer = softreset_step_timer + 1;
  if (2 < softreset_step_timer) {
    SetNextGPhase__F14GPHASE_ID_ENUM(GID_UBI_MODE);
    ResetOutReqFlg__Fv();
    MissionReleaseSaveData__Fv();
  }
  return GPHASE_CONTINUE;
}

void end_SoftResetMain() {
  return;
}
