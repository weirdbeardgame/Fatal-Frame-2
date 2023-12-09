// STATUS: NOT STARTED

#include "bit.h"

_sysbitInit() {
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)param_1;
  *(undefined4 *)((int)puVar1 + 0xc) = param_2;
  *(int *)((int)puVar1 + 0x24) = param_3 + param_4;
  *(int *)(puVar1 + 5) = param_4;
  *(undefined4 *)(puVar1 + 1) = param_2;
  *puVar1 = 0;
  *(undefined4 *)(puVar1 + 2) = 0;
  puVar1[3] = 0;
  *(int *)(puVar1 + 4) = param_3;
  _sysbitFlush(param_1,0);
  return;
}

_sysbitNext() {
  return (int)(*param_1 >> (long)(0x40 - param_2));
}

static _sysbitFlush() {
  uint uVar1;
  byte *pbVar2;
  ulong uVar3;
  
  uVar1 = *(int *)(param_1 + 2) - (int)param_2;
  *param_1 = *param_1 << param_2;
  *(uint *)(param_1 + 2) = uVar1;
  if (uVar1 < 0x39) {
    uVar3 = param_1[3];
    do {
      pbVar2 = *(byte **)((int)param_1 + 0xc) + 1;
      *param_1 = *param_1 |
                 (ulong)**(byte **)((int)param_1 + 0xc) << (long)(0x38 - *(int *)(param_1 + 2));
      *(byte **)((int)param_1 + 0xc) = pbVar2;
      if (*(byte **)((int)param_1 + 0x24) <= pbVar2) {
        *(undefined4 *)((int)param_1 + 0xc) = *(undefined4 *)(param_1 + 4);
      }
      uVar1 = *(int *)(param_1 + 2) + 8;
      *(uint *)(param_1 + 2) = uVar1;
    } while (uVar1 < 0x39);
  }
  else {
    uVar3 = param_1[3];
  }
  param_1[3] = uVar3 + param_2;
  return;
}

_sysbitGet() {
  undefined8 uVar1;
  
  uVar1 = _sysbitNext();
  _sysbitFlush(param_1,param_2);
  return uVar1;
}

_sysbitMarker() {
  undefined8 uVar1;
  
  uVar1 = _sysbitNext(param_1,1);
  _sysbitFlush(param_1,1);
  return uVar1;
}

_sysbitJump() {
  long lVar1;
  uint uVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)param_1;
  lVar1 = (long)(param_2 << 3) + puVar3[3];
  *puVar3 = 0;
  uVar2 = *(int *)(puVar3 + 1) + (int)((ulong)(lVar1 * 0x20000000) >> 0x20);
  *(undefined4 *)(puVar3 + 2) = 0;
  puVar3[3] = lVar1;
  *(uint *)((int)puVar3 + 0xc) = uVar2;
  if (*(uint *)((int)puVar3 + 0x24) <= uVar2) {
    *(uint *)((int)puVar3 + 0xc) = uVar2 - *(int *)(puVar3 + 5);
  }
  _sysbitFlush(param_1,0);
  return;
}

_sysbitPtr() {
  uint uVar1;
  
  uVar1 = *(int *)(param_1 + 8) + (param_2 >> 3);
  if (*(uint *)(param_1 + 0x24) <= uVar1) {
    uVar1 = uVar1 - *(int *)(param_1 + 0x28);
  }
  return uVar1;
}
