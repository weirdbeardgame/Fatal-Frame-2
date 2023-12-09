// STATUS: NOT STARTED

#include "sdr_cb.h"

sceSdRemoteCallbackInit() {
  long lVar1;
  undefined auStack_60 [4];
  code *local_5c;
  undefined *local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined *local_40;
  
  if ((int)_sce_sdr_cb_thid < 0) {
    _sce_sdr_spu2IntrHdr = 0;
    ram0x00369480 = 0;
    _sce_sdr_transIntr1Hdr = 0;
    _sce_sdr_transIntr0Arg = 0;
    _sce_sdr_transIntr1Arg = 0;
    _sce_sdr_spu2IntrArg = 0;
    _sce_sdr_transIntr0Gp = 0;
    _sce_sdr_transIntr1Gp = 0;
    _sce_sdr_spu2IntrGp = 0;
    sceSdRemote(1,0xe620);
    local_5c = _sdrCBThread;
    local_58 = &stack;
    local_54 = 0x1000;
    local_50 = 0x3f57f0;
    local_4c = param_1;
    lVar1 = CreateThread(auStack_60);
    _sce_sdr_cb_thid = (undefined *)lVar1;
    if (-1 < lVar1) {
      local_40 = _sce_sdr_cb_thid;
      lVar1 = StartThread(lVar1,0);
      if (-1 < lVar1) {
        return local_40;
      }
      scePrintf("Can\'t start thread for streaming.\n");
    }
  }
  return &_heap_size;
}

sceSdRemoteCallbackQuit() {
  _sif_serve_data *p_Var1;
  _sif_queue_data *p_Var2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if ((int)_sce_sdr_cb_thid < 0) {
    uVar5 = 0xffffffffffffffff;
  }
  else {
    sceSdRemote(1,0x8170,0,0);
    uVar5 = 0xffffffffffffffff;
    sceSdRemote(1,0x8160,0,0,0);
    sceSdRemote(1,0x8160,1,0,0);
    sceSdRemote(1,0xe630);
    ram0x00369480 = 0;
    _sce_sdr_transIntr1Hdr = 0;
    _sce_sdr_spu2IntrHdr = 0;
    _sce_sdr_transIntr0Arg = 0;
    _sce_sdr_transIntr1Arg = 0;
    _sce_sdr_spu2IntrArg = 0;
    _sce_sdr_transIntr0Gp = 0;
    _sce_sdr_transIntr1Gp = 0;
    _sce_sdr_spu2IntrGp = 0;
    p_Var1 = sceSifRemoveRpc((_sif_serve_data *)&_sce_sdr_sd,(_sif_queue_data *)&_sce_sdr_qd);
    uVar4 = 0;
    if (p_Var1 == (_sif_serve_data *)0x0) {
      uVar4 = uVar5;
    }
    p_Var2 = sceSifRemoveRpcQueue((_sif_queue_data *)&_sce_sdr_qd);
    if (p_Var2 == (_sif_queue_data *)0x0) {
      uVar4 = uVar5;
    }
    lVar3 = TerminateThread(_sce_sdr_cb_thid);
    if (lVar3 < 0) {
      uVar4 = uVar5;
    }
    lVar3 = DeleteThread(_sce_sdr_cb_thid);
    _sce_sdr_cb_thid = &_heap_size;
    if (-1 < lVar3) {
      uVar5 = uVar4;
    }
  }
  return uVar5;
}

static _sdrCBThread() {
  int key;
  
  sceSifInitRpc(0);
  key = GetThreadId();
  sceSifSetRpcQueue((_sif_queue_data *)&_sce_sdr_qd,key);
  sceSifRegisterRpc((_sif_serve_data *)&_sce_sdr_sd,0x80000704,_sdrCB,&gEECBData,(undefined1 *)0x0,
                    (void *)0x0,(_sif_queue_data *)&_sce_sdr_qd);
  sceSifRpcLoop((_sif_queue_data *)&_sce_sdr_qd);
  return;
}

static _sdrCB() {
  uint uVar1;
  
  uVar1 = *param_2;
  if (((uVar1 & 0x100) != 0) && (ram0x00369480 != (code *)0x0)) {
    (*ram0x00369480)(0,_sce_sdr_transIntr0Arg);
    uVar1 = *param_2;
  }
  if (((uVar1 & 0x200) != 0) && (_sce_sdr_transIntr1Hdr != (code *)0x0)) {
    (*_sce_sdr_transIntr1Hdr)(1,_sce_sdr_transIntr1Arg);
    uVar1 = *param_2;
  }
  if (((uVar1 & 0x400) != 0) && (_sce_sdr_spu2IntrHdr != (code *)0x0)) {
    (*_sce_sdr_spu2IntrHdr)(param_2[1],_sce_sdr_spu2IntrArg);
  }
  return 0;
}
