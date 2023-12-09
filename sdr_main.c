// STATUS: NOT STARTED

#include "sdr_main.h"

sceSdRemoteInit() {
  int iVar1;
  int iVar2;
  
  sceSifInitRpc(0);
  do {
    iVar1 = sceSifBindRpc((_sif_client_data *)&sceSd_gCd,0x80000701,0);
    iVar2 = 10000;
    if (iVar1 < 0) {
      scePrintf("sceSdRemoteInit() RPC bind error!\n");
      return 0xffffffff;
    }
    do {
      iVar2 = iVar2 + -1;
    } while (iVar2 != -1);
  } while (DAT_004cc824 == 0);
  sceSdEndFunc = 0;
  sceSdEndGp = 0;
  FlushCache(0);
  return 0;
}

sceSdTransToIOP() {
  long lVar1;
  long lVar2;
  
  if (param_4 != 0) {
    DAT_004cc78c = 0;
    transData_15 = param_1;
    DAT_004cc784 = param_2;
    DAT_004cc788 = param_3;
    lVar1 = sceSifSetDma(0x4cc780,1);
    if (lVar1 != 0) {
      if (param_4 != 1) {
        return 0;
      }
      do {
        lVar2 = sceSifDmaStat(lVar1);
      } while (-1 < lVar2);
      return 0;
    }
  }
  return 0xffffffff;
}

sceSdCallBack() {
  undefined4 uVar1;
  
  uVar1 = sceSdEndFunc;
  sceSdEndFunc = param_1;
  sceSdEndGp = 0x3f57f0;
  return uVar1;
}

sceSdRemote() {
  undefined4 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  uint fno;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 **receive;
  uint mode;
  undefined1 *func;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *local_f0 [4];
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  undefined8 local_8;
  
  local_30 = param_3;
  puVar4 = &DAT_004cc7c4;
  local_28 = param_4;
  iVar3 = 5;
  local_20 = param_5;
  local_18 = param_6;
  local_10 = param_7;
  local_8 = param_8;
  sbuff = &sbuff;
  puVar2 = &local_30;
  do {
    iVar3 = iVar3 + -1;
    *puVar4 = *(undefined4 *)puVar2;
    puVar1 = DAT_004cc7c4;
    puVar7 = _sce_sdr_spu2IntrHdr;
    puVar6 = _sce_sdr_transIntr1Hdr;
    puVar5 = ram0x00369480;
    puVar4 = puVar4 + 1;
    puVar2 = puVar2 + 1;
  } while (-1 < iVar3);
  func = (undefined1 *)0x0;
  if (param_1 == 0) {
    func = sceSdEndFunc;
  }
  mode = (uint)(param_1 == 0);
  if (param_2 == 0x8160) {
    if (DAT_004cc7c4 == (undefined4 *)0x0) {
      ram0x00369480 = DAT_004cc7c8;
      _sce_sdr_transIntr0Arg = DAT_004cc7cc;
      _sce_sdr_transIntr0Gp = 0x3f57f0;
      puVar6 = puVar5;
    }
    else {
      _sce_sdr_transIntr1Hdr = DAT_004cc7c8;
      _sce_sdr_transIntr1Arg = DAT_004cc7cc;
      _sce_sdr_transIntr1Gp = 0x3f57f0;
    }
  }
  else {
    puVar6 = (undefined4 *)0x0;
    if (param_2 == 0x8170) {
      _sce_sdr_spu2IntrHdr = DAT_004cc7c4;
      _sce_sdr_spu2IntrArg = DAT_004cc7c8;
      _sce_sdr_spu2IntrGp = 0x3f57f0;
      puVar6 = puVar7;
    }
  }
  local_f0[0] = (undefined4 *)0x0;
  if (((param_2 == 0x8130) || (param_2 == 0x81a0)) || (param_2 == 0x81b0)) {
    puVar5 = (undefined4 *)&GRA3DVU1MEM_POINTCOLSPC0;
    iVar3 = 0x40;
    fno = param_2 | (uint)DAT_004cc7c4;
    puVar4 = DAT_004cc7c8;
    puVar7 = sbuff;
  }
  else {
    if (param_2 == 0x8140) {
      sceSifCallRpc((_sif_client_data *)&sceSd_gCd,(uint)DAT_004cc7c4 | 0x8140,mode,&sbuff,0x40,
                    DAT_004cc7c8,0x40,func,DAT_004cc7c8);
      goto LAB_002975f0;
    }
    if ((param_2 == 0x81c0) || (param_2 == 0x81d0)) {
      *(undefined2 *)((int)DAT_004cc7c4 + 2) = DAT_004cc7c8._0_2_;
      if (param_2 == 0x81d0) {
        puVar1[1] = DAT_004cc7d4;
      }
      receive = DAT_004cc7cc;
      iVar3 = DAT_004cc7d0;
      if (DAT_004cc7cc == (undefined4 **)0x0) {
        receive = local_f0;
        iVar3 = 4;
      }
      sceSifCallRpc((_sif_client_data *)&sceSd_gCd,param_2,mode,DAT_004cc7c4,
                    (int)((int)DAT_004cc7c8 + 1) * 8,receive,iVar3,func,&sbuff);
      if (DAT_004cc7cc != (undefined4 **)0x0) {
        local_f0[0] = *DAT_004cc7cc;
      }
      goto LAB_002975f0;
    }
    puVar4 = DAT_004cc7c4;
    puVar5 = DAT_004cc7c8;
    if (0xf0 < param_2 - 0x9000) {
      puVar4 = &sbuff;
      puVar5 = (undefined4 *)&GRA3DVU1MEM_POINTCOLSPC0;
    }
    puVar7 = &sbuff;
    iVar3 = 0x10;
    fno = param_2;
  }
  sceSifCallRpc((_sif_client_data *)&sceSd_gCd,fno,mode,puVar4,(int)puVar5,&sbuff,iVar3,func,puVar7)
  ;
  local_f0[0] = sbuff;
LAB_002975f0:
  if ((param_2 == 0x8160) || (param_2 == 0x8170)) {
    local_f0[0] = puVar6;
  }
  return local_f0[0];
}
