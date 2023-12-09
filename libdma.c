// STATUS: NOT STARTED

#include "libdma.h"

static WaitDma() {
  int iVar1;
  
  if ((*(uint *)param_1 & 0x100) != 0) {
    iVar1 = 0xffffff;
    do {
      if (iVar1 < 0) {
        scePrintf("libdma: sync timeout\n");
        sceDmaPause(param_1);
      }
      iVar1 = iVar1 + -1;
    } while ((*(uint *)param_1 & 0x100) != 0);
  }
  return;
}

static WatchDma() {
  uint uVar1;
  int iVar2;
  
  iVar2 = 0x1000000;
  if (param_3 != 0) {
    iVar2 = param_3;
  }
  uVar1 = *(uint *)((int)param_1 + 0x10);
  while (uVar1 < param_2) {
    iVar2 = iVar2 + -1;
    if (iVar2 < 0) {
      scePrintf("libdma: sync timeout\n");
      sceDmaPause(param_1);
    }
    uVar1 = *(uint *)((int)param_1 + 0x10);
  }
  return;
}

static CheckAddress() {
  if (param_1 >> 0x1c == 7) {
    param_1 = param_1 & 0xfffffff | 0x80000000;
  }
  return param_1;
}

static memclr() {
  int iVar1;
  
  iVar1 = (int)param_2 + -1;
  if (param_2 != 0) {
    do {
      *param_1 = 0;
      iVar1 = iVar1 + -1;
      param_1 = param_1 + 1;
    } while (iVar1 != -1);
  }
  return;
}

sceDmaGetChan() {
  if (param_1 < 10) {
    return (&dch)[(int)param_1];
  }
  return (undefined *)0x0;
}

sceDmaReset() {
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  undefined **ppuVar4;
  int iVar5;
  int *piVar6;
  undefined auStack_50 [32];
  
  ppuVar4 = &dch;
  uVar2 = REG_DMAC_CTRL;
  piVar6 = &isclr;
  iVar5 = 9;
  do {
    if (*piVar6 != 0) {
      puVar1 = (undefined4 *)*ppuVar4;
      puVar1[0x20] = 0;
      *puVar1 = 0;
      puVar1[0xc] = 0;
      puVar1[4] = 0;
      puVar1[0x14] = 0;
      puVar1[0x10] = 0;
    }
    ppuVar4 = ppuVar4 + 1;
    iVar5 = iVar5 + -1;
    piVar6 = piVar6 + 1;
  } while (-1 < iVar5);
  REG_DMAC_STAT = 0xff1f;
  uVar3 = REG_DMAC_STAT;
  REG_DMAC_STAT = uVar3 & 0xff1f0000;
  memclr(auStack_50,0x14);
  sceDmaPutEnv(auStack_50);
  if (param_1 == 1) {
    uVar3 = REG_DMAC_CTRL;
    REG_DMAC_CTRL = uVar3 | 1;
  }
  return uVar2 & 1;
}

sceDmaPutEnv() {
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = REG_DMAC_CTRL;
  if (9 < *param_1) {
    return 0xffffffff;
  }
  if (9 < param_1[1]) {
    return 0xfffffffe;
  }
  if (9 < param_1[2]) {
    return 0xfffffffd;
  }
  if (6 < param_1[3]) {
    return 0xfffffffc;
  }
  uVar4 = uVar4 & 0xffffffcf | (uint)(byte)ststbl[*param_1] << 4;
  if (param_1[3] == 0) {
    uVar4 = uVar4 & 0xffffff31 | (uint)(byte)stdtbl[param_1[1]] << 6 |
            (uint)(byte)mfdtbl[param_1[2]] << 2;
  }
  else {
    uVar4 = (uVar4 & 0xffffff33 | (uint)(byte)stdtbl[param_1[1]] << 6 |
            (uint)(byte)mfdtbl[param_1[2]] << 2) & 0xfffffcff | 2 | (param_1[3] - 1) * 0x100;
  }
  REG_DMAC_CTRL = uVar4;
  REG_DMAC_PCR = CONCAT22(*(undefined2 *)(param_1 + 4),*(undefined2 *)(param_1 + 6));
  REG_DMAC_SQWC = *(undefined4 *)(param_1 + 8);
  REG_DMAC_RBOR = *(undefined4 *)(param_1 + 0xc);
  REG_DMAC_RBSR = *(undefined4 *)(param_1 + 0x10);
  uVar4 = (uint)(param_1 + 7) & 7;
  uVar2 = (uint)param_1 & 7;
  uVar1 = (uint)(param_1 + 0xf) & 7;
  uVar3 = (uint)(param_1 + 8) & 7;
  sceDmaCurrentEnv =
       (*(long *)(param_1 + 7 + -uVar4) << (7 - uVar4) * 8 |
       0xffffffffffffffffU >> (uVar4 + 1) * 8 & 0x1000e040) & -1L << (8 - uVar2) * 8 |
       *(ulong *)(param_1 + -uVar2) >> uVar2 * 8;
  DAT_004c2fe0 = (*(long *)(param_1 + 0xf + -uVar1) << (7 - uVar1) * 8 |
                 0xffffffffffffffffU >> (uVar1 + 1) * 8 & 0x1000e000) & -1L << (8 - uVar3) * 8 |
                 *(ulong *)(param_1 + 8 + -uVar3) >> uVar3 * 8;
  DAT_004c2fe8 = *(undefined4 *)(param_1 + 0x10);
  return 0;
}

sceDmaGetEnv() {
  uint uVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined4 uVar5;
  uint uVar6;
  
  uVar5 = DAT_004c2fe8;
  uVar4 = DAT_004c2fe0;
  uVar3 = sceDmaCurrentEnv;
  uVar6 = (uint)param_1;
  uVar1 = uVar6 + 7 & 7;
  puVar2 = (ulong *)((uVar6 + 7) - uVar1);
  *puVar2 = *puVar2 & -1L << (uVar1 + 1) * 8 | sceDmaCurrentEnv >> (7 - uVar1) * 8;
  uVar1 = uVar6 & 7;
  *(ulong *)(uVar6 - uVar1) =
       uVar3 << uVar1 * 8 | *(ulong *)(uVar6 - uVar1) & 0xffffffffffffffffU >> (8 - uVar1) * 8;
  uVar1 = uVar6 + 0xf & 7;
  puVar2 = (ulong *)((uVar6 + 0xf) - uVar1);
  *puVar2 = *puVar2 & -1L << (uVar1 + 1) * 8 | uVar4 >> (7 - uVar1) * 8;
  uVar1 = uVar6 + 8 & 7;
  puVar2 = (ulong *)((uVar6 + 8) - uVar1);
  *puVar2 = uVar4 << uVar1 * 8 | *puVar2 & 0xffffffffffffffffU >> (8 - uVar1) * 8;
  *(undefined4 *)(uVar6 + 0x10) = uVar5;
  return param_1;
}

sceDmaPutStallAddr() {
  undefined4 uVar1;
  
  uVar1 = REG_DMAC_STADR;
  REG_DMAC_STADR = param_1;
  return uVar1;
}

sceDmaSend() {
  uint uVar1;
  uint *puVar2;
  
  uVar1 = CheckAddress(param_2);
  WaitDma(param_1);
  puVar2 = (uint *)param_1;
  if (puVar2[0xc] != 0xffffffff) {
    puVar2[0xc] = uVar1;
  }
  puVar2[8] = 0;
  *puVar2 = *puVar2 & 0xfffffff3 | 0x105;
  return;
}

sceDmaSendN() {
  uint uVar1;
  uint *puVar2;
  
  uVar1 = CheckAddress(param_2);
  WaitDma(param_1);
  puVar2 = (uint *)param_1;
  if (puVar2[4] != 0xffffffff) {
    puVar2[4] = uVar1;
  }
  puVar2[8] = param_3;
  *puVar2 = *puVar2 & 0xfffffff3 | 0x101;
  return;
}

sceDmaSendI() {
  uint uVar1;
  uint *puVar2;
  
  uVar1 = CheckAddress(param_2);
  WaitDma(param_1);
  puVar2 = (uint *)param_1;
  if (puVar2[4] != 0xffffffff) {
    puVar2[4] = uVar1;
  }
  puVar2[8] = param_3;
  *puVar2 = *puVar2 & 0xfffffff3 | 0x109;
  return;
}

sceDmaRecv() {
  WaitDma();
  param_1[8] = 0;
  *param_1 = *param_1 & 0xfffffff2 | 0x104;
  return;
}

sceDmaRecvN() {
  uint uVar1;
  uint *puVar2;
  
  uVar1 = CheckAddress(param_2);
  WaitDma(param_1);
  puVar2 = (uint *)param_1;
  if (puVar2[4] != 0xffffffff) {
    puVar2[4] = uVar1;
  }
  puVar2[8] = param_3;
  *puVar2 = *puVar2 & 0xfffffff2 | 0x100;
  return;
}

sceDmaRecvI() {
  uint uVar1;
  uint *puVar2;
  
  uVar1 = CheckAddress(param_2);
  WaitDma(param_1);
  puVar2 = (uint *)param_1;
  if (puVar2[4] != 0xffffffff) {
    puVar2[4] = uVar1;
  }
  puVar2[8] = param_3;
  *puVar2 = *puVar2 & 0xfffffff2 | 0x108;
  return;
}

sceDmaSync() {
  uint uVar1;
  
  if (param_2 == 1) {
    uVar1 = *param_1 >> 8 & 1;
  }
  else {
    WaitDma();
    uVar1 = 0;
  }
  return uVar1;
}

sceDmaWatch() {
  bool bVar1;
  
  if (param_3 == 1) {
    bVar1 = *(uint *)(param_1 + 0x10) < param_2;
  }
  else {
    WatchDma(param_1,param_2,param_4);
    bVar1 = false;
  }
  return bVar1;
}

sceDmaPause() {
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = DIntr();
  uVar2 = REG_DMAC_ENABLER;
  if ((uVar2 & 0x10000) == 0) {
    REG_DMAC_ENABLEW = uVar2 | 0x10000;
  }
  uVar1 = *param_1;
  *param_1 = uVar1 & 0xfffffeff;
  REG_DMAC_ENABLEW = uVar2;
  if (iVar3 != 0) {
    EIntr();
  }
  return uVar1;
}

sceDmaRestart() {
  uint uVar1;
  
  uVar1 = *param_1;
  *param_1 = param_2;
  return uVar1 >> 8 & 1;
}
