// STATUS: NOT STARTED

#include "libpad.h"

static _send_to_iop() {
  uint *p;
  uint uVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  uint *local_150;
  int local_14c;
  undefined4 local_148;
  undefined4 local_144;
  
  iVar3 = param_2 * 0x1c + param_1 * 0x70;
  p = *(uint **)(&DAT_004cad14 + iVar3);
  if ((*(int *)(&DAT_004cad1c + iVar3) == 0) || (lVar2 = sceSifDmaStat(), lVar2 < 0)) {
    uVar1 = *p;
    iVar4 = param_2 * 0x1c + param_1 * 0x70;
    iVar3 = *(int *)(&DAT_004cad18 + iVar4);
    *p = uVar1 + 1;
    SyncDCache(p,(void *)((int)p + 0x1f));
    local_148 = 0x20;
    local_144 = 0;
    local_150 = p;
    local_14c = iVar3 + (uVar1 + 1 & 1) * 0x20;
    lVar2 = sceSifSetDma(&local_150,1);
    if (lVar2 != 0) {
      *(int *)(&DAT_004cad1c + iVar4) = (int)lVar2;
      return 1;
    }
  }
  if (isWarning != 0) {
    scePrintf("libpad: sceSifSetDma faild\n");
  }
  return 0;
}

scePadInit() {
  int iVar1;
  undefined8 uVar2;
  
  ram0x003691c0 = 1;
  while( true ) {
    sceSifBindRpc((_sif_client_data *)&padsif,0x80000100,0);
    iVar1 = 0x10000;
    if (DAT_004cace4 != 0) break;
    do {
      iVar1 = iVar1 + -1;
    } while (iVar1 != -1);
  }
  while( true ) {
    sceSifBindRpc((_sif_client_data *)&DAT_004cace8,0x80000101,0);
    iVar1 = 0x10000;
    if (DAT_004cad0c != 0) break;
    do {
      iVar1 = iVar1 + -1;
    } while (iVar1 != -1);
  }
  iVar1 = scePadGetModVersion();
  if (iVar1 >> 8 == 4) {
    uVar2 = scePadInit2(param_1);
  }
  else {
    if (isWarning != 0) {
      scePrintf("libpad: Module version mismatch ");
      scePrintf("[libpad.a = %d.%d, padman.irx = %d.%d]\n");
    }
    uVar2 = 0;
  }
  return uVar2;
}

static scePadInit2() {
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  
  puVar1 = &DAT_004cad94;
  iVar3 = 3;
  do {
    puVar1[-0x1d] = 0;
    iVar3 = iVar3 + -1;
    puVar1[-0x1b] = 0;
    puVar1[-0x1c] = 0;
    puVar1[-1] = 0;
    puVar1[1] = 0;
    *puVar1 = 0;
    puVar1 = puVar1 + 7;
  } while (-1 < iVar3);
  buffer = 0x10;
  DAT_004caf10._0_4_ = 0;
  iVar3 = sceSifCallRpc((_sif_client_data *)&padsif,1,0,&buffer,0x80,&buffer,0x80,(undefined1 *)0x0,
                        (void *)0x0);
  uVar2 = _DAT_004caf0c;
  if (iVar3 < 0) {
    uVar2 = 0;
  }
  return uVar2;
}

scePadEnd() {
  int iVar1;
  
  buffer = 0xf;
  iVar1 = sceSifCallRpc((_sif_client_data *)&padsif,1,0,&buffer,0x80,&buffer,0x80,(undefined1 *)0x0,
                        (void *)0x0);
  if (iVar1 < 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = _DAT_004caf0c;
    if (_DAT_004caf0c == 1) {
      ram0x003691c0 = 0;
    }
  }
  return iVar1;
}

scePadPortOpen() {
  undefined4 uVar1;
  void *__s;
  int iVar2;
  
  if (((uint)param_3 & 0x3f) == 0) {
    if ((&DAT_004cad20)[param_1 * 0x1c + param_2 * 7] == 1) {
      if (isWarning != 0) {
        scePrintf("libpad: pad port is already open [%d][%d]\n");
        return 0;
      }
    }
    else {
      iVar2 = 1;
      __s = param_3;
      do {
        *(undefined4 *)((int)__s + 0x58) = 0;
        *(undefined *)((int)__s + 0x70) = 5;
        *(undefined *)((int)__s + 0x71) = 2;
        *(undefined *)((int)__s + 0x67) = 0;
        iVar2 = iVar2 + -1;
        memset(__s,0xff,0x20);
        *(undefined4 *)((int)__s + 0x60) = 0;
        __s = (void *)((int)__s + 0x80);
      } while (-1 < iVar2);
      buffer = 1;
      DAT_004caf04 = param_1;
      DAT_004caf08 = param_2;
      DAT_004caf10._0_4_ = param_3;
      iVar2 = sceSifCallRpc((_sif_client_data *)&padsif,1,0,&buffer,0x80,&buffer,0x80,
                            (undefined1 *)0x0,(void *)0x0);
      uVar1 = DAT_004caf10._4_4_;
      if (-1 < iVar2) {
        iVar2 = param_2 * 0x1c + param_1 * 0x70;
        (&DAT_004cad20)[param_1 * 0x1c + param_2 * 7] = 1;
        *(undefined4 *)(&dma_iop_data + param_1 * 0x80 + param_2 * 0x20) = 0;
        *(undefined4 *)(&DAT_004cad1c + iVar2) = 0;
        *(undefined4 *)(&DAT_004cad18 + iVar2) = uVar1;
        *(void **)(&PadInfo + iVar2) = param_3;
        *(undefined **)(&DAT_004cad14 + iVar2) = &dma_iop_data + param_1 * 0x80 + param_2 * 0x20;
        return _DAT_004caf0c;
      }
    }
  }
  else if (isWarning != 0) {
    scePrintf("libpad: buffer addr is not 64 byte align. %08x\n");
    return 0;
  }
  return 0;
}

scePadPortClose() {
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  if ((&DAT_004cad20)[param_1 * 0x1c + param_2 * 7] != 0) {
    buffer = 0xe;
    DAT_004caf10._0_4_ = 1;
    DAT_004caf04 = param_1;
    DAT_004caf08 = param_2;
    iVar1 = sceSifCallRpc((_sif_client_data *)&padsif,1,0,&buffer,0x80,&buffer,0x80,
                          (undefined1 *)0x0,(void *)0x0);
    if (iVar1 < 0) {
      uVar2 = 0;
    }
    else {
      (&DAT_004cad20)[param_1 * 0x1c + param_2 * 7] = 0;
      uVar2 = _DAT_004caf0c;
    }
  }
  return uVar2;
}

static scePadGetDmaStr() {
  void *p;
  
  p = *(void **)(&PadInfo + param_2 * 0x1c + param_1 * 0x70);
  SyncDCache(p,(void *)((int)p + 0xff));
  return (void *)((int)p + (uint)(*(int *)((int)p + 0x58) < *(int *)((int)p + 0xd8)) * 0x80);
}

scePadGetFrameCount() {
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  if ((&DAT_004cad20)[(int)param_1 * 0x1c + param_2 * 7] != 0) {
    iVar1 = scePadGetDmaStr(param_1);
    uVar2 = *(undefined4 *)(iVar1 + 0x58);
  }
  return uVar2;
}

scePadRead() {
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ulong *puVar6;
  ulong *puVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  ulong local_e0 [12];
  int local_80;
  
  puVar6 = local_e0;
  puVar7 = local_e0;
  if ((&DAT_004cad20)[(int)param_1 * 0x1c + (int)param_2 * 7] == 0) {
    local_80 = 0;
  }
  else {
    uVar8 = param_3;
    iVar3 = DIntr();
    puVar4 = (undefined8 *)scePadGetDmaStr(param_1);
    if (((uint)puVar4 & 7) == 0) {
      puVar5 = puVar4 + 0x10;
      do {
        uVar9 = puVar4[1];
        uVar10 = puVar4[2];
        uVar11 = puVar4[3];
        *puVar7 = *puVar4;
        puVar7[1] = uVar9;
        puVar7[2] = uVar10;
        puVar7[3] = uVar11;
        puVar4 = puVar4 + 4;
        puVar7 = puVar7 + 4;
      } while (puVar4 != puVar5);
    }
    else {
      puVar5 = puVar4 + 0x10;
      do {
        uVar1 = (int)puVar4 + 7U & 7;
        uVar2 = (uint)puVar4 & 7;
        param_2 = (*(long *)(((int)puVar4 + 7U) - uVar1) << (7 - uVar1) * 8 |
                  param_2 & 0xffffffffffffffffU >> (uVar1 + 1) * 8) & -1L << (8 - uVar2) * 8 |
                  *(ulong *)((int)puVar4 - uVar2) >> uVar2 * 8;
        uVar1 = (int)puVar4 + 0xfU & 7;
        uVar2 = (uint)(puVar4 + 1) & 7;
        uVar8 = (*(long *)(((int)puVar4 + 0xfU) - uVar1) << (7 - uVar1) * 8 |
                uVar8 & 0xffffffffffffffffU >> (uVar1 + 1) * 8) & -1L << (8 - uVar2) * 8 |
                *(ulong *)((int)(puVar4 + 1) - uVar2) >> uVar2 * 8;
        uVar1 = (int)puVar4 + 0x17U & 7;
        uVar2 = (uint)(puVar4 + 2) & 7;
        param_4 = (*(long *)(((int)puVar4 + 0x17U) - uVar1) << (7 - uVar1) * 8 |
                  param_4 & 0xffffffffffffffffU >> (uVar1 + 1) * 8) & -1L << (8 - uVar2) * 8 |
                  *(ulong *)((int)(puVar4 + 2) - uVar2) >> uVar2 * 8;
        uVar1 = (int)puVar4 + 0x1fU & 7;
        uVar2 = (uint)(puVar4 + 3) & 7;
        param_5 = (*(long *)(((int)puVar4 + 0x1fU) - uVar1) << (7 - uVar1) * 8 |
                  param_5 & 0xffffffffffffffffU >> (uVar1 + 1) * 8) & -1L << (8 - uVar2) * 8 |
                  *(ulong *)((int)(puVar4 + 3) - uVar2) >> uVar2 * 8;
        uVar1 = (int)puVar6 + 7U & 7;
        puVar7 = (ulong *)(((int)puVar6 + 7U) - uVar1);
        *puVar7 = *puVar7 & -1L << (uVar1 + 1) * 8 | param_2 >> (7 - uVar1) * 8;
        *puVar6 = param_2;
        uVar1 = (int)puVar6 + 0xfU & 7;
        puVar7 = (ulong *)(((int)puVar6 + 0xfU) - uVar1);
        *puVar7 = *puVar7 & -1L << (uVar1 + 1) * 8 | uVar8 >> (7 - uVar1) * 8;
        puVar6[1] = uVar8;
        uVar1 = (int)puVar6 + 0x17U & 7;
        puVar7 = (ulong *)(((int)puVar6 + 0x17U) - uVar1);
        *puVar7 = *puVar7 & -1L << (uVar1 + 1) * 8 | param_4 >> (7 - uVar1) * 8;
        puVar6[2] = param_4;
        uVar1 = (int)puVar6 + 0x1fU & 7;
        puVar7 = (ulong *)(((int)puVar6 + 0x1fU) - uVar1);
        *puVar7 = *puVar7 & -1L << (uVar1 + 1) * 8 | param_5 >> (7 - uVar1) * 8;
        puVar6[3] = param_5;
        puVar4 = puVar4 + 4;
        puVar6 = puVar6 + 4;
      } while (puVar4 != puVar5);
    }
    memcpy((void *)param_3,local_e0,(long)local_80);
    if (iVar3 == 1) {
      EIntr();
    }
  }
  return local_80;
}

scePadGetState() {
  char cVar1;
  int iVar2;
  
  cVar1 = 'c';
  if ((&DAT_004cad20)[(int)param_1 * 0x1c + param_2 * 7] != 0) {
    iVar2 = scePadGetDmaStr(param_1);
    cVar1 = *(char *)(iVar2 + 0x70);
    if (cVar1 == '\x06') {
      if (*(char *)(iVar2 + 0x71) == '\x02') {
        cVar1 = '\x05';
      }
      else {
        cVar1 = *(char *)(iVar2 + 0x70);
      }
    }
  }
  return cVar1;
}

scePadStateIntToStr() {
  undefined4 *puVar1;
  
  if (param_1 < 8) {
    puVar1 = (undefined4 *)strcpy(param_2,*(char **)(PadStateStr + (int)param_1 * 4));
    return puVar1;
  }
  *param_2 = DAT_003ea628;
  return &cy_1164;
}

static scePadSetReqState() {
  int iVar1;
  int iVar2;
  
  iVar1 = (&DAT_004cad20)[(int)param_1 * 0x1c + param_2 * 7];
  if (iVar1 != 0) {
    iVar2 = scePadGetDmaStr(param_1);
    *(undefined *)(iVar2 + 0x71) = param_3;
  }
  return iVar1 != 0;
}

scePadGetReqState() {
  undefined uVar1;
  int iVar2;
  
  uVar1 = 0;
  if ((&DAT_004cad20)[(int)param_1 * 0x1c + param_2 * 7] != 0) {
    iVar2 = scePadGetDmaStr(param_1);
    uVar1 = *(undefined *)(iVar2 + 0x71);
  }
  return uVar1;
}

scePadReqIntToStr() {
  undefined4 *puVar1;
  
  if (param_1 < 4) {
    puVar1 = (undefined4 *)strcpy(param_2,*(char **)(ReqStateStr + (int)param_1 * 4));
    return puVar1;
  }
  *param_2 = DAT_003ea628;
  return &cy_1164;
}

scePadInfoAct() {
  int iVar1;
  int iVar2;
  
  if ((&DAT_004cad20)[(int)param_1 * 0x1c + param_2 * 7] != 0) {
    iVar1 = scePadGetDmaStr(param_1);
    if (*(char *)(iVar1 + 0x72) != '\x01') {
      return 0;
    }
    if (*(byte *)(iVar1 + 100) < 2) {
      return 0;
    }
    if (param_3 < (long)(ulong)*(byte *)(iVar1 + 0x6a)) {
      if (param_3 == -1) {
        return (ulong)*(byte *)(iVar1 + 0x6a);
      }
      iVar2 = (int)param_3;
      if (param_4 == 2) {
        return (ulong)*(byte *)(iVar1 + iVar2 * 4 + 0x31);
      }
      if (param_4 < 3) {
        if (param_4 != 1) {
          return 0;
        }
        return (ulong)*(byte *)(iVar1 + iVar2 * 4 + 0x30);
      }
      if (param_4 == 3) {
        return (ulong)*(byte *)(iVar1 + iVar2 * 4 + 0x32);
      }
      if (param_4 != 4) {
        return 0;
      }
      return (ulong)*(byte *)(iVar1 + iVar2 * 4 + 0x33);
    }
  }
  return 0;
}

scePadInfoComb() {
  int iVar1;
  ulong uVar2;
  int iVar3;
  
  if ((&DAT_004cad20)[(int)param_1 * 0x1c + param_2 * 7] == 0) {
    uVar2 = 0;
  }
  else {
    iVar1 = scePadGetDmaStr(param_1);
    uVar2 = 0;
    if (((*(char *)(iVar1 + 0x72) == '\x01') && (uVar2 = 0, 1 < *(byte *)(iVar1 + 100))) &&
       (uVar2 = (ulong)*(byte *)(iVar1 + 0x6b), param_3 != -1)) {
      if (param_3 < (long)uVar2) {
        iVar3 = (int)param_3;
        if (param_4 == 0) {
          uVar2 = (ulong)*(byte *)(iVar1 + iVar3 * 4 + 0x41);
        }
        else if (param_4 < 1) {
          uVar2 = 0;
          if (param_4 == -1) {
            uVar2 = (ulong)*(byte *)(iVar1 + iVar3 * 4 + 0x40);
          }
        }
        else if (param_4 == 1) {
          uVar2 = (ulong)*(byte *)(iVar1 + iVar3 * 4 + 0x42);
        }
        else {
          uVar2 = 0;
          if (param_4 == 2) {
            uVar2 = (ulong)*(byte *)(iVar1 + iVar3 * 4 + 0x43);
          }
        }
      }
      else {
        uVar2 = 0;
      }
    }
  }
  return uVar2;
}

scePadInfoMode() {
  int iVar1;
  
  if ((&DAT_004cad20)[(int)param_1 * 0x1c + param_2 * 7] != 0) {
    iVar1 = scePadGetDmaStr(param_1);
    if (*(char *)(iVar1 + 0x72) != '\x01') {
      return 0;
    }
    if (*(char *)(iVar1 + 0x71) == '\x02') {
      return 0;
    }
    if (param_3 == 2) {
      if (*(char *)(iVar1 + 100) == '\x01') {
        return 0;
      }
      param_4 = (uint)*(byte *)(iVar1 + 0x69);
LAB_0028bb74:
      return (uint)*(ushort *)(iVar1 + param_4 * 2 + 0x50);
    }
    if (param_3 < 3) {
      if (param_3 != 1) {
        return 0;
      }
      if (*(byte *)(iVar1 + 0x65) != 0xf3) {
        return (uint)(*(byte *)(iVar1 + 0x65) >> 4);
      }
    }
    else {
      if (param_3 == 3) {
        if (*(char *)(iVar1 + 100) == '\x01') {
          return 0;
        }
        return (uint)*(byte *)(iVar1 + 0x69);
      }
      if (param_3 != 4) {
        return 0;
      }
      if (*(char *)(iVar1 + 100) != '\x01') {
        if (param_4 == 0xffffffff) {
          return (uint)*(byte *)(iVar1 + 0x68);
        }
        if ((int)param_4 < (int)(uint)*(byte *)(iVar1 + 0x68)) goto LAB_0028bb74;
      }
    }
  }
  return 0;
}

scePadSetMainMode() {
  int iVar1;
  
  buffer = 6;
  DAT_004caf04 = (undefined4)param_1;
  DAT_004caf08 = (undefined4)param_2;
  _DAT_004caf0c = param_3;
  DAT_004caf10._0_4_ = param_4;
  iVar1 = sceSifCallRpc((_sif_client_data *)&padsif,1,0,&buffer,0x80,&buffer,0x80,(undefined1 *)0x0,
                        (void *)0x0);
  if (iVar1 < 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = DAT_004caf10._4_4_;
    if (DAT_004caf10._4_4_ == 1) {
      scePadSetReqState(param_1,param_2,2);
      iVar1 = DAT_004caf10._4_4_;
    }
  }
  return iVar1;
}

scePadSetActDirect() {
  bool bVar1;
  int iVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  int iVar6;
  
  iVar2 = scePadGetDmaStr();
  bVar1 = false;
  if (*(char *)(iVar2 + 0x72) == '\x01') {
    iVar6 = 0;
    iVar2 = *(int *)(&DAT_004cad14 + (int)param_2 * 0x1c + (int)param_1 * 0x70);
    do {
      puVar3 = (undefined *)(param_3 + iVar6);
      puVar5 = (undefined *)(iVar2 + 0xc + iVar6);
      iVar6 = iVar6 + 1;
      *puVar5 = *puVar3;
    } while (iVar6 < 6);
    *(undefined4 *)(iVar2 + 4) = 1;
    *(undefined4 *)(iVar2 + 8) = 6;
    lVar4 = _send_to_iop(param_1,param_2);
    bVar1 = lVar4 == 1;
  }
  return bVar1;
}

scePadSetActAlign() {
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  
  buffer = 8;
  DAT_004caf04 = (undefined4)param_1;
  iVar3 = 0;
  DAT_004caf08 = (undefined4)param_2;
  do {
    puVar1 = (undefined *)(param_3 + iVar3);
    puVar2 = &DAT_004caf0c + iVar3;
    iVar3 = iVar3 + 1;
    *puVar2 = *puVar1;
  } while (iVar3 < 6);
  iVar3 = sceSifCallRpc((_sif_client_data *)&padsif,1,0,&buffer,0x80,&buffer,0x80,(undefined1 *)0x0,
                        (void *)0x0);
  if (iVar3 < 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = DAT_004caf10._4_4_;
    if (DAT_004caf10._4_4_ == 1) {
      scePadSetReqState(param_1,param_2,2);
      iVar3 = DAT_004caf10._4_4_;
    }
  }
  return iVar3;
}

static scePadGetButtonMask() {
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if ((&DAT_004cad20)[(int)param_1 * 0x1c + param_2 * 7] != 0) {
    iVar1 = scePadGetDmaStr(param_1);
    if (*(char *)(iVar1 + 0x72) == '\x01') {
      iVar2 = 0;
      if ((1 < *(byte *)(iVar1 + 100)) && (iVar2 = 0, 1 < *(byte *)(iVar1 + 0x66))) {
        iVar2 = (uint)*(byte *)(iVar1 + 0x79) + (uint)*(byte *)(iVar1 + 0x7c) * 0x1000000 +
                (uint)*(byte *)(iVar1 + 0x7b) * 0x10000 + (uint)*(byte *)(iVar1 + 0x7a) * 0x100;
      }
    }
    else {
      iVar2 = 0;
    }
  }
  return iVar2;
}

static scePadSetButtonInfo() {
  int iVar1;
  
  buffer = 10;
  DAT_004caf04 = (undefined4)param_1;
  DAT_004caf08 = (undefined4)param_2;
  _DAT_004caf0c = param_3;
  iVar1 = sceSifCallRpc((_sif_client_data *)&padsif,1,0,&buffer,0x80,&buffer,0x80,(undefined1 *)0x0,
                        (void *)0x0);
  if (iVar1 < 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = (int)DAT_004caf10;
    if ((int)DAT_004caf10 == 1) {
      scePadSetReqState(param_1,param_2,2);
      iVar1 = (int)DAT_004caf10;
    }
  }
  return iVar1;
}

scePadInfoPressMode() {
  bool bVar1;
  long lVar2;
  
  bVar1 = false;
  if ((&DAT_004cad20)[(int)param_1 * 0x1c + param_2 * 7] != 0) {
    lVar2 = scePadGetButtonMask(param_1);
    bVar1 = lVar2 == 0x3ffff;
  }
  return bVar1;
}

scePadEnterPressMode() {
  undefined8 uVar1;
  
  if ((&DAT_004cad20)[(int)param_1 * 0x1c + param_2 * 7] == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = scePadSetButtonInfo(param_1,param_2,0xfff);
  }
  return uVar1;
}

scePadExitPressMode() {
  undefined8 uVar1;
  
  if ((&DAT_004cad20)[(int)param_1 * 0x1c + param_2 * 7] == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = scePadSetButtonInfo(param_1,param_2,0);
  }
  return uVar1;
}

static scePadSetVrefParam() {
  uint uVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  
  DAT_004caf04 = (undefined4)param_1;
  buffer = 0xb;
  _DAT_004caf08 = param_2 & 0xffffffff;
  uVar1 = param_3 + 7 & 7;
  uVar2 = param_3 & 7;
  uVar4 = (*(long *)((param_3 + 7) - uVar1) << (7 - uVar1) * 8 |
          0xffffffffffffffffU >> (uVar1 + 1) * 8 & 0x4d0000) & -1L << (8 - uVar2) * 8 |
          *(ulong *)(param_3 - uVar2) >> uVar2 * 8;
  uVar1 = param_3 + 0xb & 3;
  uVar2 = param_3 + 8 & 3;
  _DAT_004caf08 = uVar4 << 0x20 | _DAT_004caf08;
  DAT_004caf10 = CONCAT44((*(int *)((param_3 + 0xb) - uVar1) << (3 - uVar1) * 8 |
                          0xffffffffU >> (uVar1 + 1) * 8 & 0xb) & -1 << (4 - uVar2) * 8 |
                          *(uint *)((param_3 + 8) - uVar2) >> uVar2 * 8,(int)(uVar4 >> 0x20));
  iVar3 = sceSifCallRpc((_sif_client_data *)&padsif,1,0,&buffer,0x80,&buffer,0x80,(undefined1 *)0x0,
                        (void *)0x0);
  if (iVar3 < 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = DAT_004caf1c;
    if (DAT_004caf1c == 1) {
      scePadSetReqState(param_1,param_2,2);
      iVar3 = DAT_004caf1c;
    }
  }
  return iVar3;
}

static scePadGetPortMax() {
  int iVar1;
  undefined4 uVar2;
  
  buffer = 0xc;
  iVar1 = sceSifCallRpc((_sif_client_data *)&padsif,1,0,&buffer,0x80,&buffer,0x80,(undefined1 *)0x0,
                        (void *)0x0);
  uVar2 = _DAT_004caf0c;
  if (iVar1 < 0) {
    uVar2 = 0;
  }
  return uVar2;
}

scePadGetSlotMax() {
  int iVar1;
  undefined4 uVar2;
  
  buffer = 0xd;
  DAT_004caf04 = param_1;
  iVar1 = sceSifCallRpc((_sif_client_data *)&padsif,1,0,&buffer,0x80,&buffer,0x80,(undefined1 *)0x0,
                        (void *)0x0);
  uVar2 = _DAT_004caf0c;
  if (iVar1 < 0) {
    uVar2 = 0;
  }
  return uVar2;
}

static scePadGetModVersion() {
  int iVar1;
  undefined4 uVar2;
  
  buffer = 0x12;
  iVar1 = sceSifCallRpc((_sif_client_data *)&padsif,1,0,&buffer,0x80,&buffer,0x80,(undefined1 *)0x0,
                        (void *)0x0);
  uVar2 = _DAT_004caf0c;
  if (iVar1 < 0) {
    uVar2 = 0;
  }
  return uVar2;
}

scePadSetWarningLevel() {
  int iVar1;
  undefined4 uVar2;
  
  buffer = 0x14;
  DAT_004caf04 = param_1;
  iVar1 = sceSifCallRpc((_sif_client_data *)&padsif,1,0,&buffer,0x80,&buffer,0x80,(undefined1 *)0x0,
                        (void *)0x0);
  uVar2 = DAT_004caf08;
  if (iVar1 < 0) {
    uVar2 = 0;
  }
  return uVar2;
}
