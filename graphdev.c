// STATUS: NOT STARTED

#include "graphdev.h"

sceGsResetGraph() {
  undefined8 uVar1;
  ushort *puVar2;
  
  if (param_1 == 1) {
    REG_GS_CSR = 0x100;
  }
  else if (param_1 < 2) {
    if (param_1 == 0) {
      puVar2 = (ushort *)sceGsGetGParam();
      REG_GS_CSR = 0x200;
      *puVar2 = param_2;
      uVar1 = REG_GS_CSR;
      puVar2[1] = param_3;
      puVar2[3] = (ushort)((ulong)uVar1 >> 0x10) & 0xff;
      GsPutIMR(0xff00);
      puVar2[2] = (ushort)(param_4 != 0);
      if (*(int *)(puVar2 + 4) != 0) {
        DisableIntc(2);
        RemoveIntcHandler(2,*(undefined4 *)(puVar2 + 6));
        *(undefined4 *)(puVar2 + 6) = 0;
        *(undefined4 *)(puVar2 + 4) = 0;
      }
      SetGsCrt(param_2 & 1,param_3 & 0xff,param_4 & 1);
      return;
    }
  }
  else if (param_1 == 5) {
    puVar2 = (ushort *)sceGsGetGParam();
    uVar1 = REG_GS_CSR;
    puVar2[2] = (ushort)(param_4 != 0);
    *puVar2 = param_2;
    puVar2[1] = param_3;
    puVar2[3] = (ushort)((ulong)uVar1 >> 0x10) & 0xff;
    SetGsCrt(param_2 & 1,param_3 & 0xff,param_4 & 1);
    return;
  }
  return;
}

sceGsGetGParam() {
  return gp_15;
}

sceGsResetPath() {
  undefined8 uVar1;
  undefined4 in_vc12;
  
  REG_VIF1_FBRST = 1;
  REG_VIF1_ERR = 2;
  SYNC(0);
  uVar1 = _cfc2(in_vc12);
  _ctc2((uint)uVar1 | 0x200);
  SYNC(0x10);
  REG_VIF1_FIFO = (int)_init_vif_regs_12;
  DAT_10005004 = (int)((ulong)_init_vif_regs_12 >> 0x20);
  DAT_10005008 = DAT_00369248;
  DAT_1000500c = DAT_0036924c;
  REG_VIF1_FIFO = DAT_00369250;
  DAT_10005004 = DAT_00369254;
  DAT_10005008 = DAT_00369258;
  DAT_1000500c = DAT_0036925c;
  REG_GIF_CTRL = 1;
  return;
}

sceGsSetDefDBuff() {
  ulong *puVar1;
  ulong uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  puVar1 = (ulong *)sceGsGetGParam();
  iVar6 = (param_3 << 0x10) >> 0x10;
  iVar7 = (param_4 << 0x10) >> 0x10;
  sceGsSetDefDispEnv(param_1,param_2,iVar6,iVar7,0,0);
  iVar5 = (int)param_1;
  sceGsSetDefDispEnv(iVar5 + 0x28,param_2,iVar6,iVar7,0,0);
  sceGsSetDefDrawEnv(iVar5 + 0x60,param_2,iVar6,iVar7,param_5,param_6);
  sceGsSetDefDrawEnv(iVar5 + 0x150,param_2,iVar6,iVar7,param_5,param_6);
  if (param_7 != 0) {
    iVar4 = 0x800 - ((param_4 << 0x10) >> 0x11);
    iVar3 = 0x800 - ((param_3 << 0x10) >> 0x11);
    sceGsSetDefClear(iVar5 + 0xe0,param_5,iVar3,iVar4,iVar6,iVar7,0,0);
    sceGsSetDefClear(iVar5 + 0x1d0,param_5,iVar3,iVar4,iVar6,iVar7,0,0);
  }
  *(undefined4 *)(iVar5 + 0x50) = 0;
  *(undefined4 *)(iVar5 + 0x54) = 0;
  *(undefined4 *)(iVar5 + 0x58) = 0;
  *(undefined4 *)(iVar5 + 0x5c) = 0;
  *(undefined4 *)(iVar5 + 0x140) = 0;
  *(undefined4 *)(iVar5 + 0x144) = 0;
  *(undefined4 *)(iVar5 + 0x148) = 0;
  *(undefined4 *)(iVar5 + 0x14c) = 0;
  uVar2 = 8;
  if (param_7 != 0) {
    uVar2 = 0xe;
  }
  *(ulong *)(iVar5 + 0x50) =
       *(ulong *)(iVar5 + 0x50) & 0xfffffffffff8000 | uVar2 | 0x1000000000008000;
  *(ulong *)(iVar5 + 0x140) =
       *(ulong *)(iVar5 + 0x140) & 0xfffffffffff8000 | uVar2 | 0x1000000000008000;
  *(ulong *)(iVar5 + 0x58) = *(ulong *)(iVar5 + 0x58) & 0xfffffffffffffff0 | 0xe;
  *(ulong *)(iVar5 + 0x148) = *(ulong *)(iVar5 + 0x148) & 0xfffffffffffffff0 | 0xe;
  iVar6 = sceGszbufaddr(param_2,iVar6,iVar7);
  if (((*puVar1 & 0xffff0000ffff) == 0x100000001) || (*(short *)puVar1 == 0)) {
    *(ulong *)(iVar5 + 0x60) =
         *(ulong *)(iVar5 + 0x60) & 0xfffffffffffffe00 | (long)(iVar6 >> 1) & 0x1ffU;
    *(ulong *)(iVar5 + 0x38) =
         *(ulong *)(iVar5 + 0x38) & 0xfffffffffffffe00 | (long)(int)(short)(iVar6 >> 1) & 0x1ffU;
  }
  return;
}

sceGsSyncV() {
  ulong uVar1;
  short *psVar2;
  uint uVar3;
  long lVar4;
  
  psVar2 = (short *)sceGsGetGParam();
  if (*(int *)(psVar2 + 4) == 0) {
    VSync();
    uVar3 = 1;
    if (*psVar2 == 1) {
      uVar1 = REG_GS_CSR;
      uVar3 = (uint)(uVar1 >> 0xd) & 1;
    }
  }
  else {
    lVar4 = VSync2();
    uVar3 = 1;
    if (*psVar2 == 1) {
      uVar3 = (uint)(lVar4 >> 0xd) & 1;
    }
  }
  return uVar3;
}

sceGsSyncPath() {
  bool bVar1;
  uint uVar2;
  uint uVar3;
  char *fmt;
  uint uVar4;
  ulong uVar5;
  undefined4 in_vc13;
  
  uVar4 = 0;
  if (param_1 == 0) {
    uVar3 = REG_DMAC_1_VIF1_CHCR;
    while ((uVar3 & 0x100) != 0) {
      bVar1 = 0x1000000 < uVar4;
      uVar4 = uVar4 + 1;
      if (bVar1) {
        fmt = "sceGsSyncPath: DMA Ch.1 does not terminate\r\n";
        goto LAB_0028e19c;
      }
      uVar3 = REG_DMAC_1_VIF1_CHCR;
    }
    uVar3 = REG_DMAC_2_GIF_CHCR;
    while ((uVar3 & 0x100) != 0) {
      bVar1 = 0x1000000 < uVar4;
      uVar4 = uVar4 + 1;
      if (bVar1) {
        fmt = "sceGsSyncPath: DMA Ch.2 does not terminate\r\n";
        goto LAB_0028e19c;
      }
      uVar3 = REG_DMAC_2_GIF_CHCR;
    }
    uVar3 = REG_VIF1_STAT;
    while ((uVar3 & 0x1f000003) != 0) {
      bVar1 = 0x1000000 < uVar4;
      uVar4 = uVar4 + 1;
      if (bVar1) {
        fmt = "sceGsSyncPath: VIF1 does not terminate\r\n";
        goto LAB_0028e19c;
      }
      uVar3 = REG_VIF1_STAT;
    }
    uVar5 = _cfc2(in_vc13);
    while ((uVar5 & 0x100) != 0) {
      bVar1 = 0x1000000 < uVar4;
      uVar4 = uVar4 + 1;
      if (bVar1) {
        fmt = "sceGsSyncPath: VU1 does not terminate\r\n";
        goto LAB_0028e19c;
      }
      uVar5 = _cfc2(in_vc13);
    }
    uVar3 = REG_GIF_STAT;
    while ((uVar3 & 0xc00) != 0) {
      bVar1 = 0x1000000 < uVar4;
      uVar4 = uVar4 + 1;
      if (bVar1) {
        fmt = "sceGsSyncPath: GIF does not terminate\r\n";
LAB_0028e19c:
        scePrintf(fmt);
        scePrintf("\t<D1_CHCR=%08x:");
        scePrintf("D1_TADR=%08x:");
        scePrintf("D1_MADR=%08x:");
        scePrintf("D1_QWC=%08x>\r\n");
        scePrintf("\t<D2_CHCR=%08x:");
        scePrintf("D2_TADR=%08x:");
        scePrintf("D2_MADR=%08x:");
        scePrintf("D2_QWC=%08x>\r\n");
        scePrintf("\t<VIF1_STAT=%08x:");
        scePrintf("GIF_STAT=%08x>\r\n");
        return 0xffffffff;
      }
      uVar3 = REG_GIF_STAT;
    }
    uVar3 = 0;
  }
  else {
    uVar3 = REG_DMAC_1_VIF1_CHCR;
    uVar2 = REG_DMAC_2_GIF_CHCR;
    uVar4 = REG_VIF1_STAT;
    uVar3 = (uint)((uVar3 & 0x100) != 0);
    if ((uVar2 & 0x100) != 0) {
      uVar3 = uVar3 | 2;
    }
    if ((uVar4 & 0x1f000003) != 0) {
      uVar3 = uVar3 | 4;
    }
    uVar5 = _cfc2(in_vc13);
    uVar4 = REG_GIF_STAT;
    if ((uVar5 & 0x100) != 0) {
      uVar3 = uVar3 | 8;
    }
    if ((uVar4 & 0xc00) != 0) {
      uVar3 = uVar3 | 0x10;
    }
  }
  return uVar3;
}

sceGsSetDefAlphaEnv() {
  param_1[1] = 0x42;
  *param_1 = 0x44;
  param_1[3] = 0x49;
  param_1[2] = (long)param_2;
  param_1[5] = 0x3b;
  param_1[4] = 0x810000807f;
  param_1[7] = 0x4a;
  param_1[6] = 0;
  SYNC(0);
  return 4;
}

sceGsSetDefLoadImage() {
  undefined4 uVar1;
  ulong uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = (int)param_7;
  iVar3 = (int)param_8;
  uVar2 = 0;
  switch(param_4) {
  case 0:
  case 0x30:
    uVar2 = (ulong)(iVar4 * iVar3 >> 2);
    break;
  case 1:
  case 0x31:
    uVar2 = (ulong)(iVar4 * iVar3 * 3 >> 4);
    break;
  case 2:
  case 10:
  case 0x32:
  case 0x3a:
    uVar2 = (ulong)(iVar4 * iVar3 >> 3);
    break;
  case 0x13:
  case 0x1b:
    uVar2 = (ulong)(iVar4 * iVar3 >> 4);
    break;
  case 0x14:
  case 0x24:
  case 0x2c:
    uVar2 = (ulong)(iVar4 * iVar3 >> 5);
  }
  if ((long)uVar2 < 0x8000) {
    *(undefined4 *)(param_1 + 10) = 0;
    *(undefined4 *)((int)param_1 + 0x54) = 0;
    *(undefined4 *)(param_1 + 0xb) = 0;
    *(undefined4 *)((int)param_1 + 0x5c) = 0;
    *(undefined4 *)param_1 = 0;
    *(undefined4 *)((int)param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 1) = 0;
    *(undefined4 *)((int)param_1 + 0xc) = 0;
    param_1[10] = param_1[10] & 0xf3ffffffffff8000 | uVar2 & 0x7fff | 0x800000000008000;
    *param_1 = *param_1 & 0xfffffffffff8000 | 0x1000000000000004;
    param_1[1] = param_1[1] & 0xfffffffffffffff0 | 0xe;
    param_1[2] = ((long)(int)param_2 << 0x30) >> 0x10 | (long)(int)param_3 << 0x30 |
                 (long)(int)param_4 << 0x38;
    param_1[3] = 0x50;
    param_1[4] = ((long)(int)param_5 << 0x30) >> 0x10 | (long)(int)param_6 << 0x30;
    param_1[5] = 0x51;
    param_1[6] = (long)param_7 | ((long)iVar3 << 0x30) >> 0x10;
    param_1[7] = 0x52;
    param_1[9] = 0x53;
    param_1[8] = 0;
    SYNC(0);
    uVar1 = 6;
  }
  else {
    scePrintf("sceGsSetDefLoadImage: too big size\r\n");
    uVar1 = 0;
  }
  return uVar1;
}

sceGsSetDefStoreImage() {
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[1] = 0x6008000;
  *(undefined8 *)(param_1 + 0x1a) = 0x53;
  param_1[2] = 0x13000000;
  param_1[3] = 0x50000006;
  *(ulong *)(param_1 + 4) = *(ulong *)(param_1 + 4) & 0xfffffffffff8000 | 0x1000000000008005;
  *(ulong *)(param_1 + 6) = *(ulong *)(param_1 + 6) & 0xfffffffffffffff0 | 0xe;
  *(long *)(param_1 + 8) =
       (long)(param_3 << 0x10) | (long)param_2 | ((long)(int)param_4 << 0x30) >> 0x18;
  *(undefined8 *)(param_1 + 10) = 0x50;
  *(long *)(param_1 + 0xc) = (long)(param_6 << 0x10) | (long)param_5;
  *(undefined8 *)(param_1 + 0xe) = 0x51;
  *(long *)(param_1 + 0x10) = (long)param_7 | ((long)(int)param_8 << 0x30) >> 0x10;
  *(undefined8 *)(param_1 + 0x12) = 0x52;
  *(undefined8 *)(param_1 + 0x16) = 0x61;
  *(undefined8 *)(param_1 + 0x18) = 1;
  *param_1 = 0;
  *(undefined8 *)(param_1 + 0x14) = 0;
  SYNC(0);
  return 7;
}

sceGsExecLoadImage() {
  bool bVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = REG_DMAC_2_GIF_CHCR;
  uVar3 = 0;
  while ((uVar2 & 0x100) != 0) {
    bVar1 = 0x1000000 < uVar3;
    uVar3 = uVar3 + 1;
    if (bVar1) goto LAB_0028e7dc;
    uVar2 = REG_DMAC_2_GIF_CHCR;
  }
  REG_DMAC_2_GIF_QWC = 6;
  if ((param_1 & 0x70000000) == 0x70000000) {
    uVar2 = param_1 & 0xfffffff | 0x80000000;
  }
  else {
    uVar2 = param_1 & 0xfffffff;
  }
  REG_DMAC_2_GIF_MADR = uVar2;
  REG_DMAC_2_GIF_CHCR = 0x101;
  uVar2 = REG_DMAC_2_GIF_CHCR;
  while( true ) {
    if ((uVar2 & 0x100) == 0) {
      REG_DMAC_2_GIF_QWC = (uint)*(undefined8 *)(param_1 + 0x50) & 0x7fff;
      if ((param_2 & 0x70000000) == 0x70000000) {
        param_2 = param_2 & 0xfffffff | 0x80000000;
      }
      else {
        param_2 = param_2 & 0xfffffff;
      }
      REG_DMAC_2_GIF_MADR = param_2;
      REG_DMAC_2_GIF_CHCR = 0x101;
      return 0;
    }
    bVar1 = 0x1000000 < uVar3;
    uVar3 = uVar3 + 1;
    if (bVar1) break;
    uVar2 = REG_DMAC_2_GIF_CHCR;
  }
LAB_0028e7dc:
  scePrintf("sceGsExecLoadImage: DMA Ch.2 does not terminate\r\n");
  return 0xffffffff;
}

sceGsSyncVCallback() {
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = sceGsGetGParam();
  iVar1 = *(int *)(iVar2 + 8);
  if (param_1 == 0) {
    DisableIntc(2);
    RemoveIntcHandler(2,*(undefined4 *)(iVar2 + 0xc));
    *(undefined4 *)(iVar2 + 8) = 0;
    *(undefined4 *)(iVar2 + 0xc) = 0;
  }
  else {
    if (iVar1 == 0) {
      *(int *)(iVar2 + 8) = (int)param_1;
    }
    else {
      DisableIntc(2);
      RemoveIntcHandler(2,*(undefined4 *)(iVar2 + 0xc));
      *(int *)(iVar2 + 8) = (int)param_1;
    }
    uVar3 = AddIntcHandler(2,param_1,0xffffffffffffffff);
    *(undefined4 *)(iVar2 + 0xc) = uVar3;
    EnableIntc(2);
  }
  return iVar1;
}

sceGsPutIMR() {
  undefined8 uVar1;
  
  uVar1 = GsGetIMR();
  GsPutIMR(param_1);
  return uVar1;
}

sceGsSetHalfOffset() {
  ulong uVar1;
  long lVar2;
  
  lVar2 = (long)param_3 -
          ((ulong)(long)(int)(((ushort)((ulong)*(undefined8 *)(param_1 + 0x30) >> 0x30) & 0x7ff) + 1
                             ) >> 1);
  if (param_4 == 0) {
    uVar1 = lVar2 << 0x24;
  }
  else {
    uVar1 = lVar2 * 0x10 + 8 << 0x20;
  }
  *(ulong *)(param_1 + 0x20) =
       ((long)param_2 -
       ((ulong)(long)(int)(((uint)((ulong)*(undefined8 *)(param_1 + 0x30) >> 0x10) & 0x7ff) + 1) >>
       1)) * 0x10 | uVar1;
  return;
}

sceGsGetIMR() {
  GsGetIMR();
  return;
}

static checkModelVersion() {
  char cVar1;
  int iVar2;
  uint uVar3;
  char *addr;
  char acStack_149 [9];
  char local_140 [256];
  
  addr = local_140;
  iVar2 = sceOpen("rom0:ROMVER",1);
  uVar3 = 0;
  if (iVar2 < 0) {
    uVar3 = 0xffffffff;
  }
  else {
    for (; uVar3 < 0x100; uVar3 = uVar3 + 1) {
      sceRead(iVar2,addr,1);
      cVar1 = *addr;
      addr = addr + 1;
      if (cVar1 == '\0') break;
    }
    sceClose(iVar2);
    iVar2 = atoi(acStack_149 + uVar3);
    uVar3 = (uint)(0x1315670 < iVar2);
  }
  return uVar3;
}

static _GetGsDxDyOffset() {
  syscall(0);
  return;
}

sceGsSetDefDispEnv() {
  int iVar1;
  short sVar2;
  short *psVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  ushort uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int local_90;
  int local_8c;
  undefined4 local_88;
  undefined4 local_84;
  
  iVar12 = (int)param_4;
  iVar11 = (int)param_3;
  iVar14 = (int)param_5;
  iVar13 = (int)param_6;
  psVar3 = (short *)sceGsGetGParam();
  uVar7 = psVar3[1];
  if (uVar7 - 2 < 2) {
LAB_0028eb00:
    local_84 = 0;
    local_88 = 0;
    local_8c = 0;
    local_90 = 0;
  }
  else {
    lVar5 = checkModelVersion();
    if (lVar5 == 0) {
      uVar7 = psVar3[1];
      goto LAB_0028eb00;
    }
    _GetGsDxDyOffset(psVar3[1],&local_90,(uint)&local_90 | 4,(uint)&local_90 | 8,
                     (uint)&local_90 | 0xc);
    uVar7 = psVar3[1];
  }
  sVar2 = *psVar3;
  *param_1 = 0x66;
  uVar4 = 2;
  if ((*psVar3 != 0) && (uVar4 = 3, psVar3[2] == 0)) {
    uVar4 = 1;
  }
  param_1[1] = uVar4;
  param_1[2] = ((long)(int)param_2 & 0xfU) << 0xf | ((long)(iVar11 + 0x3f >> 6) & 0x3fU) << 9;
  if (uVar7 == 2) {
    if (sVar2 != 1) {
      if (iVar11 == 0) {
        trap(7);
      }
      lVar5 = (long)local_90 + 0x27c;
      iVar13 = iVar13 + local_8c + 0x19;
LAB_0028ece0:
      iVar1 = (iVar11 + 0x9ff) / iVar11;
      param_1[3] = (long)(iVar1 + -1) << 0x17 | (long)(iVar1 * iVar11 + -1) << 0x20 |
                   iVar14 * iVar1 + lVar5 & 0xfffU | (long)(iVar12 + -1) << 0x2c |
                   ((long)iVar13 & 0xfffU) << 0xc;
      goto LAB_0028eda8;
    }
    if (iVar11 == 0) {
      trap(7);
    }
    iVar1 = (iVar11 + 0x9ff) / iVar11;
    uVar9 = ((long)(iVar13 + local_8c + 0x32) & 0xfffU) << 0xc;
    uVar10 = (long)(iVar1 + -1) << 0x17;
    uVar6 = (long)(iVar1 * iVar11 + -1) << 0x20;
    uVar8 = (long)(iVar14 * iVar1) + (long)local_90 + 0x27c & 0xfff;
    if (psVar3[2] == 0) {
LAB_0028ec98:
      lVar5 = (long)(iVar12 + -1);
      uVar10 = uVar10 | uVar6;
    }
    else {
      uVar10 = uVar10 | uVar6;
      lVar5 = (long)(iVar12 * 2 + -1);
    }
  }
  else {
    if (uVar7 != 3) {
      if (uVar7 == 0x50) {
        param_1[3] = (long)(iVar12 + -1) << 0x2c | (long)(iVar11 * 2 + -1) << 0x20 |
                     (long)((0x2d0 - iVar11) / 2 << 1) + (long)local_90 + (long)(iVar14 << 1) + 0xe8
                     & 0xfffU | 0x800000 | ((long)(iVar13 + local_8c + 0x23) & 0xfffU) << 0xc;
      }
      else {
        scePrintf("sceGsDefDispEnv:Not support displaymode for 0x%x!!\n");
      }
      goto LAB_0028eda8;
    }
    if (sVar2 != 1) {
      if (iVar11 == 0) {
        trap(7);
      }
      lVar5 = (long)local_90 + 0x290;
      iVar13 = iVar13 + local_8c + 0x24;
      goto LAB_0028ece0;
    }
    if (iVar11 == 0) {
      trap(7);
    }
    iVar1 = (iVar11 + 0x9ff) / iVar11;
    uVar9 = ((long)(iVar13 + local_8c + 0x48) & 0xfffU) << 0xc;
    uVar10 = (long)(iVar1 + -1) << 0x17;
    uVar6 = (long)(iVar1 * iVar11 + -1) << 0x20;
    uVar8 = (long)(iVar14 * iVar1) + (long)local_90 + 0x290 & 0xfff;
    if (psVar3[2] == 0) goto LAB_0028ec98;
    uVar10 = uVar10 | uVar6;
    lVar5 = (long)(iVar12 * 2 + -1);
  }
  param_1[3] = uVar10 | uVar8 | lVar5 << 0x2c | uVar9;
LAB_0028eda8:
  param_1[4] = 0;
  return;
}

sceGszbufaddr() {
  ulong *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = (int)param_3;
  puVar1 = (ulong *)sceGsGetGParam();
  iVar2 = param_2 + 0x3f;
  iVar3 = param_2 + 0x7e;
  if (-1 < iVar2) {
    iVar3 = iVar2;
  }
  if ((param_1 & 2) == 0) {
    iVar2 = iVar4 + 0x3e;
    if (-1 < iVar4 + 0x1f) {
      iVar2 = iVar4 + 0x1f;
    }
    iVar2 = iVar2 >> 5;
  }
  else {
    iVar2 = iVar4 + 0x7e;
    if (-1 < iVar4 + 0x3f) {
      iVar2 = iVar4 + 0x3f;
    }
    iVar2 = iVar2 >> 6;
  }
  iVar2 = (iVar3 >> 6) * iVar2;
  if ((*puVar1 & 0xffff0000ffff) == 1) {
    iVar2 = iVar2 * 0x10000;
  }
  else {
    iVar2 = iVar2 * 0x20000;
  }
  return iVar2 >> 0x10;
}

sceGsSetDefDrawEnv() {
  short sVar1;
  ulong uVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  
  iVar4 = (int)param_3;
  uVar5 = (ulong)(int)param_2;
  iVar3 = (int)param_4;
  uVar6 = (ulong)(int)param_5;
  param_1[1] = 0x4c;
  *param_1 = ((long)(iVar4 + 0x3f >> 6) & 0x3fU) << 0x10 | (uVar5 & 0xf) << 0x18;
  param_1[3] = 0x4e;
  if (uVar6 == 0) {
    sVar1 = sceGszbufaddr(uVar5,iVar4,iVar3);
    uVar2 = (long)sVar1 | ((long)(int)param_6 & 0xfU) << 0x18 | 0x100000000;
  }
  else {
    sVar1 = sceGszbufaddr(uVar5,iVar4,iVar3);
    uVar2 = (long)sVar1 | ((long)(int)param_6 & 0xfU) << 0x18;
  }
  param_1[2] = uVar2;
  param_1[5] = 0x18;
  param_1[4] = (0x800 - (long)(param_3 >> 1)) * 0x10 | 0x800 - (long)(param_4 >> 1) << 0x24;
  param_1[7] = 0x40;
  param_1[6] = (long)(iVar4 + -1) << 0x10 | (long)(iVar3 + -1) << 0x30;
  param_1[9] = 0x1a;
  param_1[8] = param_1[8] | 1;
  param_1[0xb] = 0x46;
  param_1[10] = param_1[10] | 1;
  param_1[0xd] = 0x45;
  if ((uVar5 & 2) == 0) {
    uVar5 = param_1[0xc] & 0xfffffffffffffffe;
  }
  else {
    uVar5 = param_1[0xc] | 1;
  }
  param_1[0xc] = uVar5;
  param_1[0xf] = 0x47;
  if (uVar6 == 0) {
    uVar5 = 0x30000;
  }
  else {
    uVar5 = (uVar6 & 3) << 0x11 | 0x10000;
  }
  param_1[0xe] = uVar5;
  SYNC(0);
  return 8;
}

sceGsSetDefClear() {
  param_1[2] = 6;
  param_1[5] = 1;
  param_1[4] = param_7 & 0xff | 0x3f80000000000000 | (ulong)param_9 << 0x10 | (param_8 & 0xff) << 8
               | (ulong)param_10 << 0x18;
  param_1[6] = (long)((int)param_3 << 4) | (long)((int)param_4 << 4) << 0x10 |
               (ulong)param_11 << 0x20;
  param_1[9] = 5;
  param_1[8] = (long)(((int)param_3 + (int)param_5) * 0x10) |
               (long)(((int)param_4 + (int)param_6) * 0x10) << 0x10 | (ulong)param_11 << 0x20;
  param_1[0xb] = 0x47;
  param_1[1] = 0x47;
  *param_1 = 0x30000;
  param_1[3] = 0;
  param_1[7] = 5;
  if ((long)(int)param_2 == 0) {
    param_1[10] = 0x30000;
  }
  else {
    param_1[10] = ((long)(int)param_2 & 3U) << 0x11 | 0x10000;
  }
  SYNC(0);
  return 6;
}
