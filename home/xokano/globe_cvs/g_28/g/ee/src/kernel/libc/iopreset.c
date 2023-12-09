// STATUS: NOT STARTED

#include "iopreset.h"

static sceSifCmdResetData rdata;

int sceSifResetIop(char *arg, int flag) {
	sceSifDmaData dmad;
	unsigned int addr;
	int i;
	
  long lVar1;
  char cVar2;
  int iVar3;
  sceSifDmaData dmad;
  
  sceSifExecNotifyHandler(0,0);
  sceSifExecNotifyHandler(1,0);
  sceSifStopDma();
  dmad.addr = sceSifGetReg(0xffffffff80000000);
  rdata.size = 0;
  rdata.flag = flag;
  if (*arg != '\0') {
    cVar2 = *arg;
    iVar3 = rdata.size;
    while( true ) {
      rdata.size = iVar3 + 1;
      rdata.arg[iVar3] = cVar2;
      if (arg[rdata.size] == '\0') break;
      cVar2 = arg[rdata.size];
      iVar3 = rdata.size;
    }
  }
  rdata.chdr.fcode = 0x80000003;
  rdata.chdr._0_4_ = 0x68;
  rdata.chdr.daddr = 0;
  dmad.size = 0x68;
  dmad.mode = 0x44;
  dmad.data = (uint)&rdata;
  sceSifWriteBackDCache(&rdata,0x68);
  sceSifSetReg(4,0x40000);
  lVar1 = sceSifSetDma(&dmad,1);
  if (lVar1 != 0) {
    sceSifSetReg(4,0x10000);
    sceSifSetReg(4,0x20000);
    sceSifSetReg(0xffffffff80000002,0);
    sceSifSetReg(0xffffffff80000000,0);
  }
  return (uint)(lVar1 != 0);
}

int sceSifIsAliveIop() {
  ulong uVar1;
  
  uVar1 = sceSifGetReg(4);
  return (int)((uVar1 & 0x10000) != 0);
}

int sceSifSyncIop() {
  bool bVar1;
  ulong uVar2;
  
  uVar2 = sceSifGetReg(4);
  bVar1 = (uVar2 & 0x40000) != 0;
  if (bVar1) {
    sceResetttyinit();
    sceSifExecNotifyHandler(1,1);
    sceSifExecNotifyHandler(0,1);
  }
  return (uint)bVar1;
}

int sceSifRebootIop(char *fn) {
	char buf[80];
	char *d;
	char *s;
	char *l;
	
  byte bVar1;
  uint uVar2;
  int iVar3;
  char *pcVar4;
  char cVar5;
  char *pcVar6;
  ulong uVar7;
  char *pcVar8;
  char buf [80];
  
  pcVar4 = buf;
  pcVar8 = "rom0:UDNL ";
  if (*fn == '\0') {
    uVar2 = 0xb;
  }
  else {
    pcVar6 = fn;
    do {
      pcVar6 = pcVar6 + 1;
    } while (*pcVar6 != '\0');
    uVar2 = (int)pcVar6 - (int)(fn + -0xb);
  }
  if (uVar2 < 0x51) {
    sceSifInitRpc(0);
    sceSifExitRpc();
    if (DAT_003ea3e0 == '\0') {
      bVar1 = *fn;
    }
    else {
      bVar1 = *fn;
      pcVar4 = buf;
      cVar5 = DAT_003ea3e0;
      do {
        *pcVar4 = cVar5;
        pcVar8 = pcVar8 + 1;
        pcVar4 = pcVar4 + 1;
        cVar5 = *pcVar8;
      } while (*pcVar8 != '\0');
    }
    uVar7 = (ulong)bVar1;
    if (uVar7 == 0) {
      *pcVar4 = '\0';
    }
    else {
      do {
        *pcVar4 = (char)uVar7;
        fn = fn + 1;
        pcVar4 = pcVar4 + 1;
        uVar7 = (ulong)*fn;
      } while (uVar7 != 0);
      *pcVar4 = '\0';
    }
    iVar3 = sceSifResetIop(buf,0);
  }
  else {
    scePrintf("too long parameter \'%s\'\n");
    iVar3 = 0;
  }
  return iVar3;
}
