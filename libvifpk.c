// STATUS: NOT STARTED

#include "libvifpk.h"

sceVif1PkInit() {
  *param_1 = param_2;
  param_1[2] = 0;
  param_1[1] = param_2;
  return;
}

sceVif1PkReset() {
  param_1[2] = 0;
  *param_1 = param_1[1];
  return;
}

sceVif1PkTerminate() {
  int *piVar1;
  undefined4 *puVar2;
  
  piVar1 = (int *)param_1[2];
  for (puVar2 = (undefined4 *)*param_1; ((uint)puVar2 & 0xc) != 0; puVar2 = puVar2 + 1) {
    *puVar2 = 0;
  }
  if (piVar1 != (int *)0x0) {
    *piVar1 = *piVar1 + ((int)puVar2 - (int)piVar1 >> 4) + -1;
  }
  param_1[2] = 0;
  *param_1 = puVar2;
  return puVar2;
}

sceVif1PkCnt() {
  uint *puVar1;
  uint *puVar2;
  
  puVar2 = (uint *)sceVif1PkTerminate();
  puVar1 = *param_1;
  param_1[2] = puVar2;
  *puVar1 = param_2 | 0x10000000;
  param_1[3] = (uint *)0x0;
  *param_1 = puVar1 + 2;
  puVar1[1] = 0;
  return;
}

sceVif1PkEnd() {
  uint *puVar1;
  uint *puVar2;
  
  puVar2 = (uint *)sceVif1PkTerminate();
  puVar1 = *param_1;
  param_1[2] = puVar2;
  *puVar1 = param_2 | 0x70000000;
  param_1[3] = (uint *)0x0;
  *param_1 = puVar1 + 2;
  puVar1[1] = 0;
  return;
}

sceVif1PkOpenDirectCode() {
  undefined4 *puVar1;
  undefined4 uVar2;
  int *piVar3;
  
  sceVif1PkAlign(param_1,2,3);
  piVar3 = (int *)param_1;
  puVar1 = (undefined4 *)*piVar3;
  uVar2 = 0x50000000;
  if (param_2 != 0) {
    uVar2 = 0xd0000000;
  }
  *piVar3 = (int)(puVar1 + 1);
  piVar3[3] = (int)puVar1;
  *puVar1 = uVar2;
  return;
}

sceVif1PkCloseDirectCode() {
  int *piVar1;
  
  piVar1 = (int *)param_1[3];
  param_1[3] = 0;
  *piVar1 = *piVar1 + ((uint)((*param_1 + -4) - (int)piVar1 >> 2) >> 2);
  return;
}

sceVif1PkOpenGifTag() {
  undefined4 *puVar1;
  undefined4 in_a1_udw;
  undefined4 in_register_0000005c;
  
  puVar1 = (undefined4 *)*param_1;
  *puVar1 = (int)param_2;
  puVar1[1] = (int)((ulong)param_2 >> 0x20);
  puVar1[2] = in_a1_udw;
  puVar1[3] = in_register_0000005c;
  *param_1 = (int)(puVar1 + 4);
  param_1[5] = (int)puVar1;
  return;
}

sceVif1PkCloseGifTag() {
  ulong *puVar1;
  ulong uVar2;
  undefined4 *puVar3;
  uint uVar4;
  ulong uVar5;
  
  puVar1 = (ulong *)param_1[5];
  puVar3 = (undefined4 *)*param_1;
  uVar5 = *puVar1;
  uVar4 = ((int)puVar3 - (int)puVar1 >> 3) - 2;
  uVar2 = uVar5 >> 0x3a & 3;
  if (uVar2 != 1) {
    uVar4 = uVar4 >> 1;
  }
  if (uVar2 != 2) {
    uVar2 = uVar5 >> 0x3c;
    if (uVar5 >> 0x3c == 0) {
      uVar2 = 0x10;
    }
    if (uVar2 == 0) {
      trap(7);
    }
    uVar4 = (int)(uVar4 + (int)uVar2 + -1) / (int)uVar2;
  }
  param_1[5] = 0;
  *puVar1 = uVar5 + uVar4;
  for (; ((uint)puVar3 & 0xc) != 0; puVar3 = puVar3 + 1) {
    *puVar3 = 0;
  }
  *param_1 = puVar3;
  return;
}

sceVif1PkReserve() {
  *param_1 = *param_1 + param_2 * 4;
  return;
}

sceVif1PkAlign() {
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  
  puVar1 = (undefined4 *)*param_1;
  uVar3 = 0xffffffff >> (0x20 - (param_2 + 2U & 0x1f) & 0x1f);
  puVar2 = (undefined4 *)(((uint)puVar1 & ~uVar3) + param_3 * 4);
  if (puVar2 < puVar1) {
    puVar2 = (undefined4 *)((int)puVar2 + uVar3 + 1);
  }
  if (puVar1 < puVar2) {
    *puVar1 = 0;
    while( true ) {
      puVar1 = puVar1 + 1;
      *param_1 = puVar1;
      if (puVar2 <= puVar1) break;
      *puVar1 = 0;
    }
  }
  return;
}
