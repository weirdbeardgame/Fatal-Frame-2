// STATUS: NOT STARTED

#include "eeException.h"

static int s_abEnableExcCode[14] = {
	/* [0] = */ 1,
	/* [1] = */ 1,
	/* [2] = */ 1,
	/* [3] = */ 1,
	/* [4] = */ 1,
	/* [5] = */ 1,
	/* [6] = */ 1,
	/* [7] = */ 1,
	/* [8] = */ 1,
	/* [9] = */ 1,
	/* [10] = */ 1,
	/* [11] = */ 1,
	/* [12] = */ 1,
	/* [13] = */ 1
};

static char *s_astrException[14] = {
	/* [0] = */ 0x3a5230,
	/* [1] = */ 0x3a5240,
	/* [2] = */ 0x3a5260,
	/* [3] = */ 0x3a5290,
	/* [4] = */ 0x3a52a8,
	/* [5] = */ 0x3a52e0,
	/* [6] = */ 0x3a5300,
	/* [7] = */ 0x3a5328,
	/* [8] = */ 0x3a5360,
	/* [9] = */ 0x3a5378,
	/* [10] = */ 0x3a5390,
	/* [11] = */ 0x3a53b0,
	/* [12] = */ 0x3a53d0,
	/* [13] = */ 0x3a53f0
};

static int s_aiDmaCatchChannel[3] = {
	/* [0] = */ 13,
	/* [1] = */ 14,
	/* [2] = */ 15
};

static sceExcepIOPExceptionData s_iopExceptionData;

static void _EEExceptionHandler(u_int stat, u_int cause, u_int epc, u_int bva, u_int bpa, u_long128 *gpr) {
	char str[512];
	
  int in_t1_lo;
  char acStack_240 [448];
  void *VaList;
  
  if (*(int *)((int)s_abEnableExcCode + ((uint)pStr & 0x7c)) != 0) {
    eeexceptionEnableExcCodeAll__Fi(0);
    memset(acStack_240,0,0x200);
    _strcatf__FPcPCce(acStack_240,0x3a5400,
                      *(undefined4 *)((int)s_astrException + ((uint)pStr & 0x7c)));
    _strcatf__FPcPCce(acStack_240,0x3a5420,strDest,pStr);
    _strcatf__FPcPCce(acStack_240,0x3a5460,*(undefined8 *)(in_t1_lo + 0x10),
                      *(undefined8 *)(in_t1_lo + 0x20),*(undefined8 *)(in_t1_lo + 0x30));
    _strcatf__FPcPCce(acStack_240,0x3a5488,*(undefined8 *)(in_t1_lo + 0x40),
                      *(undefined8 *)(in_t1_lo + 0x50),*(undefined8 *)(in_t1_lo + 0x60),
                      *(undefined8 *)(in_t1_lo + 0x70));
    _strcatf__FPcPCce(acStack_240,0x3a54b0,*(undefined8 *)(in_t1_lo + 0x80),
                      *(undefined8 *)(in_t1_lo + 0x90),*(undefined8 *)(in_t1_lo + 0xa0),
                      *(undefined8 *)(in_t1_lo + 0xb0));
    _strcatf__FPcPCce(acStack_240,0x3a54d8,*(undefined8 *)(in_t1_lo + 0xc0),
                      *(undefined8 *)(in_t1_lo + 0xd0),*(undefined8 *)(in_t1_lo + 0xe0),
                      *(undefined8 *)(in_t1_lo + 0xf0));
    _strcatf__FPcPCce(acStack_240,0x3a5500,*(undefined8 *)(in_t1_lo + 0x100),
                      *(undefined8 *)(in_t1_lo + 0x110),*(undefined8 *)(in_t1_lo + 0x120),
                      *(undefined8 *)(in_t1_lo + 0x130));
    _strcatf__FPcPCce(acStack_240,0x3a54d8,*(undefined8 *)(in_t1_lo + 0x140),
                      *(undefined8 *)(in_t1_lo + 0x150),*(undefined8 *)(in_t1_lo + 0x160),
                      *(undefined8 *)(in_t1_lo + 0x170));
    _strcatf__FPcPCce(acStack_240,0x3a5528,*(undefined8 *)(in_t1_lo + 0x180),
                      *(undefined8 *)(in_t1_lo + 400));
    _strcatf__FPcPCce(acStack_240,0x3a5540,*(undefined8 *)(in_t1_lo + 0x1a0),
                      *(undefined8 *)(in_t1_lo + 0x1b0));
    _strcatf__FPcPCce(acStack_240,0x3a5558,*(undefined8 *)(in_t1_lo + 0x1c0),
                      *(undefined8 *)(in_t1_lo + 0x1d0),*(undefined8 *)(in_t1_lo + 0x1e0),
                      *(undefined8 *)(in_t1_lo + 0x1f0));
    scePrintf(acStack_240);
    g3ddbgPrintConsole__FPCce(acStack_240);
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  return;
}

void _IOPExceptionHandler() {
	int &raiReg[45];
	char str[1024];
	
  char str [1024];
  
  memset(str,0,0x400);
  _strcatf__FPcPCce(str,0x3a5588,*(undefined4 *)((int)s_astrException + (DAT_00423264 & 0x7c)));
  _strcatf__FPcPCce(str,0x3a55a8,0x42328c,(int)DAT_00423284 >> 8,DAT_00423284 & 0xf,DAT_00423288);
  _strcatf__FPcPCce(str,0x3a55e0,DAT_00423258,DAT_00423264,DAT_0042325c);
  _strcatf__FPcPCce(str,0x3a5460,DAT_004231d4,DAT_004231d8,DAT_004231dc);
  _strcatf__FPcPCce(str,0x3a5488,DAT_004231e0,DAT_004231e4,DAT_004231e8,DAT_004231ec);
  _strcatf__FPcPCce(str,0x3a54b0,DAT_004231f0,DAT_004231f4,DAT_004231f8,DAT_004231fc);
  _strcatf__FPcPCce(str,0x3a54d8,DAT_00423200,DAT_00423204,DAT_00423208,DAT_0042320c);
  _strcatf__FPcPCce(str,0x3a5500,DAT_00423210,DAT_00423214,DAT_00423218,DAT_0042321c);
  _strcatf__FPcPCce(str,0x3a54d8,DAT_00423220,DAT_00423224,DAT_00423228,DAT_0042322c);
  _strcatf__FPcPCce(str,0x3a5528,DAT_00423230,DAT_00423234);
  _strcatf__FPcPCce(str,0x3a5540,DAT_00423238,DAT_0042323c);
  _strcatf__FPcPCce(str,0x3a5558,DAT_00423240,DAT_00423244,DAT_00423248,DAT_0042324c);
  _strcatf__FPcPCce(str,0x3a5608,DAT_00423250,DAT_00423254,DAT_00423258,DAT_0042325c);
  _strcatf__FPcPCce(str,0x3a5638,DAT_00423264,DAT_00423268,DAT_0042326c);
  _strcatf__FPcPCce(str,0x3a5660,DAT_00423270,DAT_00423274,DAT_00423278,DAT_0042327c,DAT_00423280);
  g3ddbgInfinitePrintConsole__Fi(1);
  g3ddbgPrintConsole__FPCce(str);
  return;
}

static int _DmacHandler(int iChan, void *pArg, void *pAddr) {
  printf("iChan : %d, pAddr : 0x%08x\n");
  return 0;
}

static void _InitDmacHandler() {
	int i;
	
  int iVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = 2;
  piVar3 = s_aiDmaCatchChannel;
  iVar1 = s_aiDmaCatchChannel[0];
  while( true ) {
    piVar3 = piVar3 + 1;
    iVar2 = iVar2 + -1;
    AddDmacHandler2(iVar1,0x138ea8,0,0);
    if (iVar2 < 0) break;
    iVar1 = *piVar3;
  }
  return;
}

void eeexceptionInitialize() {
	static char __FUNCTION__[22] = {
		/* [0] = */ 101,
		/* [1] = */ 101,
		/* [2] = */ 101,
		/* [3] = */ 120,
		/* [4] = */ 99,
		/* [5] = */ 101,
		/* [6] = */ 112,
		/* [7] = */ 116,
		/* [8] = */ 105,
		/* [9] = */ 111,
		/* [10] = */ 110,
		/* [11] = */ 73,
		/* [12] = */ 110,
		/* [13] = */ 105,
		/* [14] = */ 116,
		/* [15] = */ 105,
		/* [16] = */ 97,
		/* [17] = */ 108,
		/* [18] = */ 105,
		/* [19] = */ 122,
		/* [20] = */ 101,
		/* [21] = */ 0
	};
	int i;
	
  int iVar1;
  int i;
  int *piVar2;
  
  i = 0;
  piVar2 = s_abEnableExcCode;
  iVar1 = s_abEnableExcCode[0];
  while( true ) {
    piVar2 = piVar2 + 1;
    if (iVar1 != 0) {
      SetDebugHandler(i,_strcatf__FPcPCce);
    }
    i = i + 1;
    if (0xd < i) break;
    iVar1 = *piVar2;
  }
  _InitDmacHandler__Fv();
  return;
}

void eeexceptionEnableExcCode(PS2EXCEPTION eee, int bEnable) {
	static char __FUNCTION__[25] = {
		/* [0] = */ 101,
		/* [1] = */ 101,
		/* [2] = */ 101,
		/* [3] = */ 120,
		/* [4] = */ 99,
		/* [5] = */ 101,
		/* [6] = */ 112,
		/* [7] = */ 116,
		/* [8] = */ 105,
		/* [9] = */ 111,
		/* [10] = */ 110,
		/* [11] = */ 69,
		/* [12] = */ 110,
		/* [13] = */ 97,
		/* [14] = */ 98,
		/* [15] = */ 108,
		/* [16] = */ 101,
		/* [17] = */ 69,
		/* [18] = */ 120,
		/* [19] = */ 99,
		/* [20] = */ 67,
		/* [21] = */ 111,
		/* [22] = */ 100,
		/* [23] = */ 101,
		/* [24] = */ 0
	};
	
  if (0xd < (int)eee) {
    _SetLineInfo__FPCciT0T0
              ("eeException.c",0xf6,"eeexceptionEnableExcCode","eee < NUM_PS2EXCEPTION");
    g3ddbgAssert__FbPCce(false,&DAT_003efbb8);
  }
  s_abEnableExcCode[eee] = bEnable;
  return;
}

void eeexceptionEnableExcCodeAll(int bEnable) {
	static char __FUNCTION__[28] = {
		/* [0] = */ 101,
		/* [1] = */ 101,
		/* [2] = */ 101,
		/* [3] = */ 120,
		/* [4] = */ 99,
		/* [5] = */ 101,
		/* [6] = */ 112,
		/* [7] = */ 116,
		/* [8] = */ 105,
		/* [9] = */ 111,
		/* [10] = */ 110,
		/* [11] = */ 69,
		/* [12] = */ 110,
		/* [13] = */ 97,
		/* [14] = */ 98,
		/* [15] = */ 108,
		/* [16] = */ 101,
		/* [17] = */ 69,
		/* [18] = */ 120,
		/* [19] = */ 99,
		/* [20] = */ 67,
		/* [21] = */ 111,
		/* [22] = */ 100,
		/* [23] = */ 101,
		/* [24] = */ 65,
		/* [25] = */ 108,
		/* [26] = */ 108,
		/* [27] = */ 0
	};
	int i;
	
  int *piVar1;
  int iVar2;
  
  iVar2 = 0xd;
  piVar1 = s_abEnableExcCode + 0xd;
  do {
    iVar2 = iVar2 + -1;
    *piVar1 = bEnable;
    piVar1 = piVar1 + -1;
  } while (-1 < iVar2);
  return;
}

void iopexceptionInitialize(IOPEXCEPTIONCREATIONDATA *pCD) {
  sceExcepSetDebugIOPHandler(pCD->pModuleName,0x138c88,0x4231d0);
  return;
}

void _strcatf(char *strDest, char *pStr) {
	va_list VaList;
	
  int in_t1_lo;
  char acStack_240 [448];
  void *VaList;
  
  if (*(int *)((int)s_abEnableExcCode + ((uint)pStr & 0x7c)) != 0) {
    eeexceptionEnableExcCodeAll__Fi(0);
    memset(acStack_240,0,0x200);
    _strcatf__FPcPCce(acStack_240,0x3a5400,
                      *(undefined4 *)((int)s_astrException + ((uint)pStr & 0x7c)));
    _strcatf__FPcPCce(acStack_240,0x3a5420,strDest,pStr);
    _strcatf__FPcPCce(acStack_240,0x3a5460,*(undefined8 *)(in_t1_lo + 0x10),
                      *(undefined8 *)(in_t1_lo + 0x20),*(undefined8 *)(in_t1_lo + 0x30));
    _strcatf__FPcPCce(acStack_240,0x3a5488,*(undefined8 *)(in_t1_lo + 0x40),
                      *(undefined8 *)(in_t1_lo + 0x50),*(undefined8 *)(in_t1_lo + 0x60),
                      *(undefined8 *)(in_t1_lo + 0x70));
    _strcatf__FPcPCce(acStack_240,0x3a54b0,*(undefined8 *)(in_t1_lo + 0x80),
                      *(undefined8 *)(in_t1_lo + 0x90),*(undefined8 *)(in_t1_lo + 0xa0),
                      *(undefined8 *)(in_t1_lo + 0xb0));
    _strcatf__FPcPCce(acStack_240,0x3a54d8,*(undefined8 *)(in_t1_lo + 0xc0),
                      *(undefined8 *)(in_t1_lo + 0xd0),*(undefined8 *)(in_t1_lo + 0xe0),
                      *(undefined8 *)(in_t1_lo + 0xf0));
    _strcatf__FPcPCce(acStack_240,0x3a5500,*(undefined8 *)(in_t1_lo + 0x100),
                      *(undefined8 *)(in_t1_lo + 0x110),*(undefined8 *)(in_t1_lo + 0x120),
                      *(undefined8 *)(in_t1_lo + 0x130));
    _strcatf__FPcPCce(acStack_240,0x3a54d8,*(undefined8 *)(in_t1_lo + 0x140),
                      *(undefined8 *)(in_t1_lo + 0x150),*(undefined8 *)(in_t1_lo + 0x160),
                      *(undefined8 *)(in_t1_lo + 0x170));
    _strcatf__FPcPCce(acStack_240,0x3a5528,*(undefined8 *)(in_t1_lo + 0x180),
                      *(undefined8 *)(in_t1_lo + 400));
    _strcatf__FPcPCce(acStack_240,0x3a5540,*(undefined8 *)(in_t1_lo + 0x1a0),
                      *(undefined8 *)(in_t1_lo + 0x1b0));
    _strcatf__FPcPCce(acStack_240,0x3a5558,*(undefined8 *)(in_t1_lo + 0x1c0),
                      *(undefined8 *)(in_t1_lo + 0x1d0),*(undefined8 *)(in_t1_lo + 0x1e0),
                      *(undefined8 *)(in_t1_lo + 0x1f0));
    scePrintf(acStack_240);
    g3ddbgPrintConsole__FPCce(acStack_240);
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  return;
}
