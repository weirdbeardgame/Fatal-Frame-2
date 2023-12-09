// STATUS: NOT STARTED

#include "libexcep.h"

static IsDTL() {
  int fd;
  int iVar1;
  undefined4 uVar2;
  undefined auStack_40 [4];
  char local_3c;
  char local_3b;
  
  memset(auStack_40,0,0xf);
  fd = sceOpen("rom0:ROMVER",1);
  if (fd == -1) {
    scePrintf("Can\'t open rom0:ROMVER\n");
  }
  iVar1 = sceRead(fd,auStack_40,0xe);
  if (iVar1 == -1) {
    scePrintf("Can\'t read rom error\n");
  }
  sceClose(fd);
  if ((local_3c == 'T') || (uVar2 = 0, local_3b == 'D')) {
    uVar2 = 1;
  }
  return uVar2;
}

static my_itoc() {
  return (param_1 + 0x30) * 0x1000000 >> 0x18;
}

static power() {
  int iVar1;
  int iVar2;
  
  iVar1 = 1;
  iVar2 = (int)param_2 + -1;
  if (param_2 != 0) {
    do {
      iVar1 = iVar1 * param_1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != -1);
  }
  return iVar1;
}

static my_itoa() {
  undefined uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  iVar4 = 1;
  iVar3 = 0;
  if (0 < param_1) {
    iVar2 = 0x1000000;
    do {
      iVar4 = iVar4 * 10;
      iVar3 = iVar2 >> 0x18;
      iVar2 = iVar2 + 0x1000000;
    } while (iVar4 <= param_1);
  }
  iVar4 = (iVar3 + -1) * 0x1000000 >> 0x18;
  puVar5 = param_2;
  if (iVar4 < 0) {
    *param_2 = 0;
  }
  else {
    do {
      iVar3 = 0;
      for (; -1 < param_1; param_1 = param_1 - iVar2) {
        iVar2 = power(10,iVar4);
        iVar3 = (iVar3 + 1) * 0x1000000 >> 0x18;
      }
      puVar6 = puVar5 + 1;
      iVar2 = power(10,iVar4);
      param_1 = param_1 + iVar2;
      uVar1 = my_itoc((iVar3 + -1) * 0x1000000 >> 0x18);
      *puVar5 = uVar1;
      iVar4 = (iVar4 + -1) * 0x1000000 >> 0x18;
      puVar5 = puVar6;
    } while (-1 < iVar4);
    *puVar6 = 0;
  }
  return param_2;
}

sceExcepSetDebugEEHandler() {
  long lVar1;
  int iVar2;
  
  lVar1 = IsDTL();
  iVar2 = 0;
  if (lVar1 != 0) {
    do {
      SetDebugHandler(iVar2,param_1);
      iVar2 = iVar2 + 1;
    } while (iVar2 < 8);
    iVar2 = 9;
    do {
      SetDebugHandler(iVar2,param_1);
      iVar2 = iVar2 + 1;
    } while (iVar2 < 0xd);
  }
  return;
}

sceExcepSetDebugIOPHandler() {
  int iVar1;
  char *__s;
  size_t sVar2;
  char acStack_80 [32];
  
  iVar1 = IsDTL();
  if (iVar1 != 0) {
    __s = (char *)my_itoa(param_3,acStack_80);
    sVar2 = strlen(__s);
    while (iVar1 = sceSifLoadModule(param_1,(int)sVar2 + 1,acStack_80), iVar1 < 0) {
      scePrintf("Can\'t load module panicsys\n");
    }
    DIntr();
    sceSifAddCmdHandler(0x80000010,param_2,(void *)param_3);
    iVar1 = EIntr();
  }
  return iVar1;
}
