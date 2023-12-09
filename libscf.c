// STATUS: NOT STARTED

#include "libscf.h"

static GetRomName() {
  int fd;
  
  if ((gRomName == '\0') && (fd = sceOpen("rom0:ROMVER",1), -1 < fd)) {
    sceRead(fd,&gRomName,0xe);
    sceClose(fd);
  }
  return &gRomName;
}

static IsT10K() {
  if (gRomName == '\0') {
    GetRomName();
  }
  return DAT_0036954c == 'T';
}

sceScfGetLanguage() {
  uint uVar1;
  long lVar2;
  uint local_20 [4];
  
  GetOsdConfigParam(local_20);
  lVar2 = IsT10K();
  if (lVar2 == 0) {
    GetOsdConfigParam(local_20);
    if ((local_20[0] >> 0xd & 7) == 0) {
      uVar1 = local_20[0] >> 4 & 1;
    }
    else {
      uVar1 = local_20[0] >> 0x10 & 0x1f;
    }
  }
  else {
    uVar1 = (uint)DAT_00369544;
  }
  return uVar1;
}

sceScfSetT10kConfig() {
  uint uVar1;
  uint uVar2;
  ulong in_v1;
  
  uVar1 = param_1 + 7 & 7;
  uVar2 = param_1 & 7;
  _gConfig = (*(long *)((param_1 + 7) - uVar1) << (7 - uVar1) * 8 |
             in_v1 & 0xffffffffffffffffU >> (uVar1 + 1) * 8) & -1L << (8 - uVar2) * 8 |
             *(ulong *)(param_1 - uVar2) >> uVar2 * 8;
  return;
}

sceScfGetAspect() {
  uint uVar1;
  long lVar2;
  uint local_20 [4];
  
  lVar2 = IsT10K();
  if (lVar2 == 0) {
    GetOsdConfigParam(local_20);
    uVar1 = local_20[0] >> 1 & 3;
  }
  else {
    uVar1 = (uint)DAT_00369542;
  }
  return uVar1;
}

sceScfGetSpdif() {
  long lVar1;
  uint local_20 [4];
  
  lVar1 = IsT10K();
  if (lVar1 == 0) {
    GetOsdConfigParam(local_20);
    local_20[0] = local_20[0] & 1;
  }
  else {
    local_20[0] = (uint)DAT_00369545;
  }
  return local_20[0];
}

sceScfGetTimeZone() {
  long lVar1;
  uint local_20 [4];
  
  lVar1 = IsT10K();
  if (lVar1 == 0) {
    GetOsdConfigParam(local_20);
    lVar1 = (long)((int)local_20[0] >> 0x15);
    if ((local_20[0] >> 0xd & 7) == 0) {
      lVar1 = 0x21c;
    }
  }
  else {
    lVar1 = (long)gConfig;
  }
  return lVar1;
}

sceScfGetDateNotation() {
  byte bVar1;
  long lVar2;
  uint local_20;
  byte local_1c;
  
  lVar2 = IsT10K();
  bVar1 = DAT_00369543;
  if (lVar2 == 0) {
    GetOsdConfigParam(&local_20);
    if ((local_20 >> 0xd & 7) == 0) {
      bVar1 = 0;
    }
    else {
      GetOsdConfigParam2((uint)&local_20 | 4,1,1);
      bVar1 = local_1c >> 6;
    }
  }
  return bVar1;
}

sceScfGetSummerTime() {
  byte bVar1;
  long lVar2;
  uint local_20;
  byte local_1c;
  
  lVar2 = IsT10K();
  bVar1 = DAT_00369546;
  if (lVar2 == 0) {
    GetOsdConfigParam(&local_20);
    if ((local_20 >> 0xd & 7) == 0) {
      bVar1 = 0;
    }
    else {
      GetOsdConfigParam2((uint)&local_20 | 4,1,1);
      bVar1 = local_1c >> 4 & 1;
    }
  }
  return bVar1;
}

sceScfGetTimeNotation() {
  byte bVar1;
  long lVar2;
  uint local_20;
  byte local_1c;
  
  lVar2 = IsT10K();
  bVar1 = DAT_00369547;
  if (lVar2 == 0) {
    GetOsdConfigParam(&local_20);
    if ((local_20 >> 0xd & 7) == 0) {
      bVar1 = 0;
    }
    else {
      GetOsdConfigParam2((uint)&local_20 | 4,1,1);
      bVar1 = local_1c >> 5 & 1;
    }
  }
  return bVar1;
}

static tobcd() {
  return ((param_1 & 0xff) / 10) * 6 + (param_1 & 0xff) & 0xff;
}

static frombcd() {
  return (param_1 & 0xff) + ((param_1 & 0xff) >> 4) * -6 & 0xff;
}

static convertfrombcd() {
  undefined uVar1;
  
  uVar1 = frombcd(*(undefined *)(param_1 + 7));
  *(undefined *)(param_1 + 7) = uVar1;
  uVar1 = frombcd(*(undefined *)(param_1 + 6));
  *(undefined *)(param_1 + 6) = uVar1;
  uVar1 = frombcd(*(undefined *)(param_1 + 5));
  *(undefined *)(param_1 + 5) = uVar1;
  uVar1 = frombcd(*(undefined *)(param_1 + 3));
  *(undefined *)(param_1 + 3) = uVar1;
  uVar1 = frombcd(*(undefined *)(param_1 + 2));
  *(undefined *)(param_1 + 2) = uVar1;
  uVar1 = frombcd(*(undefined *)(param_1 + 1));
  *(undefined *)(param_1 + 1) = uVar1;
  return;
}

static converttobcd() {
  undefined uVar1;
  
  uVar1 = tobcd(*(undefined *)(param_1 + 7));
  *(undefined *)(param_1 + 7) = uVar1;
  uVar1 = tobcd(*(undefined *)(param_1 + 6));
  *(undefined *)(param_1 + 6) = uVar1;
  uVar1 = tobcd(*(undefined *)(param_1 + 5));
  *(undefined *)(param_1 + 5) = uVar1;
  uVar1 = tobcd(*(undefined *)(param_1 + 3));
  *(undefined *)(param_1 + 3) = uVar1;
  uVar1 = tobcd(*(undefined *)(param_1 + 2));
  *(undefined *)(param_1 + 2) = uVar1;
  uVar1 = tobcd(*(undefined *)(param_1 + 1));
  *(undefined *)(param_1 + 1) = uVar1;
  return;
}

static adddate() {
  undefined *puVar1;
  byte bVar2;
  uint uVar3;
  ulong uVar4;
  char cVar5;
  char cStack_11;
  undefined auStack_10 [8];
  undefined auStack_8 [8];
  
  uVar4 = DAT_003eaff0;
  cVar5 = *(char *)(param_1 + 5);
  bVar2 = *(byte *)(param_1 + 7);
  puVar1 = auStack_10 + 7;
  uVar3 = (uint)puVar1 & 7;
  *(ulong *)(puVar1 + -uVar3) =
       *(ulong *)(puVar1 + -uVar3) & -1L << (uVar3 + 1) * 8 | DAT_003eaff0 >> (7 - uVar3) * 8;
  auStack_10 = (undefined  [8])DAT_003eaff0;
  puVar1 = auStack_8 + 3;
  uVar3 = (uint)puVar1 & 3;
  *(uint *)(puVar1 + -uVar3) =
       *(uint *)(puVar1 + -uVar3) & -1 << (uVar3 + 1) * 8 | DAT_003eaff8 >> (3 - uVar3) * 8;
  auStack_8._0_4_ = DAT_003eaff8;
  *(char *)(param_1 + 5) = cVar5 + '\x01';
  if ((bVar2 & 3) == 0) {
  }
  if ((long)(&cStack_11)[*(byte *)(param_1 + 6)] < (long)(ulong)*(byte *)(param_1 + 5)) {
    *(undefined *)(param_1 + 5) = 1;
    cVar5 = *(char *)(param_1 + 6) + '\x01';
    *(char *)(param_1 + 6) = cVar5;
    if (cVar5 == '\r') {
      if (*(char *)(param_1 + 7) == 'c') {
        *(undefined *)(param_1 + 7) = 0;
      }
      else {
        *(char *)(param_1 + 7) = *(char *)(param_1 + 7) + '\x01';
      }
      *(undefined *)(param_1 + 6) = 1;
    }
  }
  return;
}

static subdate() {
  undefined *puVar1;
  byte bVar2;
  uint uVar3;
  ulong uVar4;
  char cVar5;
  undefined uStack_11;
  undefined auStack_10 [8];
  undefined auStack_8 [8];
  
  uVar4 = DAT_003eaff0;
  cVar5 = *(char *)(param_1 + 5);
  bVar2 = *(byte *)(param_1 + 7);
  puVar1 = auStack_10 + 7;
  uVar3 = (uint)puVar1 & 7;
  *(ulong *)(puVar1 + -uVar3) =
       *(ulong *)(puVar1 + -uVar3) & -1L << (uVar3 + 1) * 8 | DAT_003eaff0 >> (7 - uVar3) * 8;
  auStack_10 = (undefined  [8])DAT_003eaff0;
  puVar1 = auStack_8 + 3;
  uVar3 = (uint)puVar1 & 3;
  *(uint *)(puVar1 + -uVar3) =
       *(uint *)(puVar1 + -uVar3) & -1 << (uVar3 + 1) * 8 | DAT_003eaff8 >> (3 - uVar3) * 8;
  auStack_8._0_4_ = DAT_003eaff8;
  *(char *)(param_1 + 5) = cVar5 + -1;
  if ((bVar2 & 3) == 0) {
  }
  if (*(char *)(param_1 + 5) == '\0') {
    cVar5 = *(char *)(param_1 + 6) + -1;
    *(char *)(param_1 + 6) = cVar5;
    if (cVar5 == '\0') {
      cVar5 = *(char *)(param_1 + 7) + -1;
      if (*(char *)(param_1 + 7) == '\0') {
        cVar5 = 'c';
      }
      *(char *)(param_1 + 7) = cVar5;
      *(undefined *)(param_1 + 6) = 0xc;
    }
    *(undefined *)(param_1 + 5) = (&uStack_11)[*(byte *)(param_1 + 6)];
  }
  return;
}

static addhour() {
  char cVar1;
  int iVar2;
  
  iVar2 = (int)param_1;
  cVar1 = *(char *)(iVar2 + 3) + '\x01';
  *(char *)(iVar2 + 3) = cVar1;
  if (cVar1 == '\x18') {
    *(undefined *)(iVar2 + 3) = 0;
    adddate(param_1);
    return;
  }
  return;
}

static subhour() {
  if (*(char *)(param_1 + 3) == '\0') {
    *(undefined *)(param_1 + 3) = 0x17;
    subdate();
    return;
  }
  *(char *)(param_1 + 3) = *(char *)(param_1 + 3) + -1;
  return;
}

static AdjustTime() {
  int iVar1;
  
  convertfrombcd();
  iVar1 = (int)param_1;
  param_2 = (uint)*(byte *)(iVar1 + 2) + param_2;
  if (param_2 < 0) {
    do {
      param_2 = param_2 + 0x3c;
      subhour(param_1);
    } while (param_2 < 0);
    *(char *)(iVar1 + 2) = (char)param_2;
  }
  else if (param_2 < 0x3c) {
    *(char *)(iVar1 + 2) = (char)param_2;
  }
  else {
    do {
      param_2 = param_2 + -0x3c;
      addhour(param_1);
    } while (0x3b < param_2);
    *(char *)(iVar1 + 2) = (char)param_2;
  }
  converttobcd(param_1);
  return;
}

sceScfGetGMTfromRTC() {
  int iVar1;
  int iVar2;
  
  convertfrombcd();
  iVar2 = (int)param_1;
  iVar1 = *(byte *)(iVar2 + 2) - 0x21c;
  if (iVar1 < 0) {
    for (iVar1 = *(byte *)(iVar2 + 2) - 0x1e0; subhour(param_1), iVar1 < 0; iVar1 = iVar1 + 0x3c) {
    }
    *(char *)(iVar2 + 2) = (char)iVar1;
  }
  else if (iVar1 < 0x3c) {
    *(char *)(iVar2 + 2) = (char)iVar1;
  }
  else {
    do {
      iVar1 = iVar1 + -0x3c;
      addhour(param_1);
    } while (0x3b < iVar1);
    *(char *)(iVar2 + 2) = (char)iVar1;
  }
  converttobcd(param_1);
  return;
}

sceScfGetLocalTimefromRTC() {
  int iVar1;
  int iVar2;
  
  iVar1 = sceScfGetTimeZone();
  iVar2 = sceScfGetSummerTime();
  AdjustTime(param_1,iVar1 + iVar2 * 0x3c + -0x21c);
  return;
}
