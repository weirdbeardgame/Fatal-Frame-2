// STATUS: NOT STARTED

#include "eecdvd.h"

sceCdCallback() {
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  
  lVar3 = sceCdSync(1);
  uVar2 = 0;
  if (lVar3 == 0) {
    iVar1 = DIntr();
    uVar2 = sceCdCbfunc;
    sceCdCb_Gp = 0x3f57f0;
    sceCdCbfunc = param_1;
    if (iVar1 != 0) {
      EIntr();
    }
  }
  return uVar2;
}

_sceCd_cd_callback() {
  sceCdCbfunc_num = *param_1;
  sceCdCbfunc_number = sceCdCbfunc_num;
  if (sceCdCbfunc_num == 0xb) {
    _sceCd_c_cb_sem = 0;
  }
  else {
    iSignalSema(_sceCd_ncmd_semid);
    if ((cb_thid == 0) || (sceCdCbfunc == 0)) {
      _sceCd_c_cb_sem = 0;
    }
    else {
      iSignalSema(cb_semid);
    }
  }
  sceCdCbfunc_num = 0;
  return;
}

_Cdvd_cbLoop() {
  do {
    WaitSema(cb_semid);
    if (sceCdCbfunc_num == -1) {
      _sceCd_c_cb_sem = 0;
      sceCdCbfunc_num = 0;
      cb_thid = 0;
      sceCdPoffCbfunc_num = 0;
      ExitDeleteThread();
    }
    if (0 < ram0x00365e90) {
      scePrintf("sceCdCbfunc= %d sceCdCbfunc_num= %d\n");
    }
    if ((sceCdCbfunc != (code *)0x0) && (sceCdCbfunc_number != 0)) {
      (*sceCdCbfunc)(sceCdCbfunc_number);
    }
    _sceCd_c_cb_sem = 0;
  } while( true );
}

sceCdInitEeCB() {
  bool bVar1;
  undefined8 uVar2;
  
  bVar1 = cb_thid != 0;
  if (bVar1) {
    ChangeThreadPriority(cb_thid,param_1);
  }
  else {
    uVar2 = GetThreadId();
    my_thid = (undefined4)uVar2;
    ReferThreadStatus(uVar2,0x4c2d60);
    DAT_004c2d94 = _Cdvd_cbLoop;
    DAT_004c2da4 = (undefined4)param_1;
    DAT_004c2da0 = 0;
    DAT_004c2d98 = param_2;
    DAT_004c2d9c = param_3;
    uVar2 = CreateThread(0x4c2d90);
    cb_thid = (int)uVar2;
    StartThread(uVar2,0);
  }
  return !bVar1;
}

_sceCd_cd_read_intr() {
  undefined uVar1;
  uint uVar2;
  int *piVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  
  piVar8 = (int *)(param_1 | 0x20000000);
  iVar6 = 0;
  if (0 < *piVar8) {
    uVar2 = piVar8[2];
    if (0 < *piVar8) {
      piVar3 = piVar8 + 4;
      do {
        puVar5 = (undefined *)((uVar2 | 0x20000000) + iVar6);
        uVar1 = *(undefined *)piVar3;
        puVar4 = (undefined *)(uVar2 + iVar6);
        iVar6 = iVar6 + 1;
        *puVar5 = uVar1;
        *puVar4 = uVar1;
        piVar3 = (int *)((int)(piVar8 + 4) + iVar6);
      } while (iVar6 < *piVar8);
      iVar6 = piVar8[1];
      goto LAB_0027b5f8;
    }
  }
  iVar6 = piVar8[1];
LAB_0027b5f8:
  if (0 < iVar6) {
    uVar2 = piVar8[3];
    iVar7 = 0;
    if (0 < iVar6) {
      piVar3 = piVar8 + 0x14;
      do {
        puVar5 = (undefined *)((uVar2 | 0x20000000) + iVar7);
        uVar1 = *(undefined *)piVar3;
        puVar4 = (undefined *)(uVar2 + iVar7);
        iVar7 = iVar7 + 1;
        *puVar5 = uVar1;
        *puVar4 = uVar1;
        piVar3 = (int *)((int)(piVar8 + 0x14) + iVar7);
      } while (iVar7 < piVar8[1]);
    }
  }
  _sceCd_cd_callback(0x365ed8);
  return;
}

static cmd_sem_init() {
  undefined auStack_60 [4];
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_4c;
  
  if (((_sceCd_ncmd_semid == &_heap_size) || (_sceCd_scmd_semid == &_heap_size)) ||
     (_sceCd_rcmd_semid == &_heap_size)) {
    local_4c = 0;
    local_5c = 1;
    local_58 = 1;
    _sceCd_ncmd_semid = (undefined *)CreateSema(auStack_60);
    _sceCd_scmd_semid = (undefined *)CreateSema(auStack_60);
    _sceCd_rcmd_semid = (undefined *)CreateSema(auStack_60);
    local_58 = 0;
    cb_semid = (undefined *)CreateSema(auStack_60);
    _sceCd_c_cb_sem = 0;
  }
  return;
}

static cdvd_exit() {
  int iVar1;
  long lVar2;
  
  if (cb_thid != 0) {
    sceCdCbfunc_num = 0xffffffff;
    SignalSema(cb_semid);
  }
  DeleteSema(_sceCd_ncmd_semid);
  DeleteSema(_sceCd_scmd_semid);
  DeleteSema(_sceCd_rcmd_semid);
  DeleteSema(cb_semid);
  iVar1 = DIntr();
  lVar2 = (long)iVar1;
  sceSifRemoveCmdHandler(0x80000012);
  if ((long)iVar1 == 0) {
    return lVar2;
  }
  iVar1 = EIntr();
  return (long)iVar1;
}

sceCdPOffCallback() {
  undefined4 uVar1;
  int iVar2;
  
  if ((int)_icmd_bind < 0) {
    PowerOffCB();
  }
  iVar2 = DIntr();
  uVar1 = sceCdPoffCbfunc;
  sceCdCbPoff_Gp = 0x3f57f0;
  sceCdPoffCbfunc = param_1;
  sceCdPoffCbdata = param_2;
  if (iVar2 != 0) {
    EIntr();
  }
  return uVar1;
}

static _sceCd_Poff_Intr() {
  if ((sceCdPoffCbfunc != (code *)0x0) && (Init_seq == 0)) {
    (*sceCdPoffCbfunc)(sceCdPoffCbdata);
  }
  return;
}

static PowerOffCB() {
  int iVar1;
  
  Init_seq = 1;
  iVar1 = DIntr();
  sceSifAddCmdHandler(0x80000012,_sceCd_Poff_Intr,(void *)0x0);
  if (iVar1 != 0) {
    EIntr();
  }
  Init_seq = 0;
  _icmd_bind = &GRA3DVU1MEM_VF02;
  return 1;
}

sceCdLayerSearchFile() {
  char cVar1;
  uint uVar2;
  ulong *puVar3;
  uint *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  uint uVar9;
  undefined4 uVar10;
  undefined *puVar11;
  int iVar12;
  long lVar13;
  
  cmd_sem_init();
  puVar11 = (undefined *)PollSema(_sceCd_ncmd_semid);
  if (_sceCd_ncmd_semid == puVar11) {
    ncmd_sema_keep_cmd = 1;
    ReferThreadStatus(my_thid,0x4c2d60);
    lVar13 = sceCdSync(1);
    if (lVar13 == 0) {
      sceSifInitRpc(0);
      if ((int)_sf_bind < 0) {
        while( true ) {
          while (iVar12 = sceSifBindRpc((_sif_client_data *)&cdrdsf,0x80000597,0), iVar12 < 0) {
            if (0 < ram0x00365e90) {
              scePrintf("Libcdvd bind err CdSearchFile\n");
            }
            iVar12 = 0x100000;
            do {
              iVar12 = iVar12 + -1;
            } while (iVar12 != -1);
          }
          iVar12 = 0x100000;
          if (DAT_004c2f64 != 0) break;
          do {
            iVar12 = iVar12 + -1;
          } while (iVar12 != -1);
        }
        _sf_bind = (undefined *)0x0;
      }
      DAT_004c2de4 = *param_2;
      iVar12 = 0;
      if (DAT_004c2de4 != '\0') {
        for (iVar12 = 1;
            (iVar12 < 0x100 &&
            (cVar1 = param_2[iVar12], (&DAT_004c2de4)[iVar12] = cVar1, cVar1 != '\0'));
            iVar12 = iVar12 + 1) {
        }
      }
      if (iVar12 == 0x100) {
        DAT_004c2ee3 = 0;
      }
      if (0 < ram0x00365e90) {
        scePrintf("ee call cmd search %s\n");
      }
      DAT_004c2ee4 = &_sf_data;
      DAT_004c2ee8 = param_3;
      sceSifWriteBackDCache(&_sf_data,300);
      iVar12 = sceSifCallRpc((_sif_client_data *)&cdrdsf,0,0,&_sf_data,300,&sfrdata,4,
                             (undefined1 *)0x0,(void *)0x0);
      uVar8 = uRam204c2dd8;
      uVar7 = uRam204c2dd0;
      uVar6 = uRam204c2dc8;
      uVar5 = uRam204c2dc0;
      if (-1 < iVar12) {
        uVar2 = param_1 + 7 & 7;
        puVar3 = (ulong *)((param_1 + 7) - uVar2);
        *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | uRam204c2dc0 >> (7 - uVar2) * 8;
        uVar2 = param_1 & 7;
        *(ulong *)(param_1 - uVar2) =
             uVar5 << uVar2 * 8 |
             *(ulong *)(param_1 - uVar2) & 0xffffffffffffffffU >> (8 - uVar2) * 8;
        uVar2 = param_1 + 0xf & 7;
        puVar3 = (ulong *)((param_1 + 0xf) - uVar2);
        *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | uVar6 >> (7 - uVar2) * 8;
        uVar2 = param_1 + 8 & 7;
        puVar3 = (ulong *)((param_1 + 8) - uVar2);
        *puVar3 = uVar6 << uVar2 * 8 | *puVar3 & 0xffffffffffffffffU >> (8 - uVar2) * 8;
        uVar2 = param_1 + 0x17 & 7;
        puVar3 = (ulong *)((param_1 + 0x17) - uVar2);
        *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | uVar7 >> (7 - uVar2) * 8;
        uVar2 = param_1 + 0x10 & 7;
        puVar3 = (ulong *)((param_1 + 0x10) - uVar2);
        *puVar3 = uVar7 << uVar2 * 8 | *puVar3 & 0xffffffffffffffffU >> (8 - uVar2) * 8;
        uVar2 = param_1 + 0x1f & 7;
        puVar3 = (ulong *)((param_1 + 0x1f) - uVar2);
        *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | uVar8 >> (7 - uVar2) * 8;
        uVar2 = param_1 + 0x18 & 7;
        puVar3 = (ulong *)((param_1 + 0x18) - uVar2);
        *puVar3 = uVar8 << uVar2 * 8 | *puVar3 & 0xffffffffffffffffU >> (8 - uVar2) * 8;
        uVar9 = uRam204c2de0;
        uVar2 = param_1 + 0x23 & 3;
        puVar4 = (uint *)((param_1 + 0x23) - uVar2);
        *puVar4 = *puVar4 & -1 << (uVar2 + 1) * 8 | uRam204c2de0 >> (3 - uVar2) * 8;
        uVar2 = param_1 + 0x20 & 3;
        puVar4 = (uint *)((param_1 + 0x20) - uVar2);
        *puVar4 = *puVar4 & 0xffffffffU >> (4 - uVar2) * 8 | uVar9 << uVar2 * 8;
        if (((0 < ram0x00365e90) && (scePrintf("search name %s\n"), 0 < ram0x00365e90)) &&
           (scePrintf("search size %d\n"), 0 < ram0x00365e90)) {
          scePrintf("search loc lbn %d\n");
        }
        uVar10 = uRam204c2f00;
        SignalSema(_sceCd_ncmd_semid);
        return uVar10;
      }
    }
    SignalSema(_sceCd_ncmd_semid);
  }
  return 0;
}

sceCdSearchFile() {
  sceCdLayerSearchFile(param_1,param_2,0);
  return;
}

_sceCd_ncmd_prechk() {
  undefined *puVar1;
  int iVar2;
  long lVar3;
  
  cmd_sem_init();
  puVar1 = (undefined *)PollSema(_sceCd_ncmd_semid);
  if (_sceCd_ncmd_semid == puVar1) {
    ncmd_sema_keep_cmd = param_1;
    ReferThreadStatus(my_thid,0x4c2d60);
    lVar3 = sceCdSync(1);
    if (lVar3 == 0) {
      sceSifInitRpc(0);
      if (-1 < (int)_ncmd_bind) {
        return 1;
      }
      while( true ) {
        while (iVar2 = sceSifBindRpc((_sif_client_data *)_sceCd_cd_ncmd,0x80000595,0), iVar2 < 0) {
          if (0 < ram0x00365e90) {
            scePrintf("Libcdvd bind err N CMD\n");
          }
          iVar2 = 0x100000;
          do {
            iVar2 = iVar2 + -1;
          } while (iVar2 != -1);
        }
        if (_sceCd_cd_ncmd._36_4_ != 0) break;
        iVar2 = 0x100000;
        do {
          iVar2 = iVar2 + -1;
        } while (iVar2 != -1);
      }
      _ncmd_bind = (undefined *)0x0;
      return 1;
    }
    SignalSema(_sceCd_ncmd_semid);
  }
  else if (0 < ram0x00365e90) {
    scePrintf("Ncmd fail sema cur_cmd:%d keep_cmd:%d\n");
    return 0;
  }
  return 0;
}

sceCdNcmdDiskReady() {
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  
  lVar3 = _sceCd_ncmd_prechk(2);
  if (lVar3 == 0) {
    uVar2 = 0;
  }
  else {
    iVar1 = sceSifCallRpc((_sif_client_data *)_sceCd_cd_ncmd,0xe,0,(void *)0x0,0,_sceCd_ncmdrdata,4,
                          (undefined1 *)0x0,(void *)0x0);
    uVar2 = uRam20365f00;
    if (iVar1 < 0) {
      SignalSema(_sceCd_ncmd_semid);
      uVar2 = 0;
    }
    else {
      SignalSema(_sceCd_ncmd_semid);
    }
  }
  return uVar2;
}

sceCdSync() {
  int iVar1;
  undefined4 uVar2;
  
  if (param_1 == 0) {
    if (0 < ram0x00365e90) {
      scePrintf("N cmd wait\n");
    }
    while ((_sceCd_c_cb_sem != 0 ||
           (iVar1 = sceSifCheckStatRpc((_sif_rpc_data *)_sceCd_cd_ncmd), iVar1 != 0))) {
      DelayThread(4000);
    }
    return 0;
  }
  uVar2 = 1;
  if (_sceCd_c_cb_sem == 0) {
    iVar1 = sceSifCheckStatRpc((_sif_rpc_data *)_sceCd_cd_ncmd);
    uVar2 = 1;
    if (iVar1 == 0) {
      uVar2 = 0;
    }
  }
  return uVar2;
}

sceCdSyncS() {
  int iVar1;
  int iVar2;
  
  if (param_1 == 0) {
    if (0 < ram0x00365e90) {
      scePrintf("S cmd wait\n");
    }
    while( true ) {
      iVar1 = sceSifCheckStatRpc((_sif_rpc_data *)_sceCd_cd_scmd);
      iVar2 = 0;
      if (iVar1 == 0) break;
      DelayThread(4000);
    }
  }
  else {
    iVar2 = sceSifCheckStatRpc((_sif_rpc_data *)_sceCd_cd_scmd);
  }
  return iVar2;
}

_sceCd_scmd_prechk() {
  undefined *puVar1;
  int iVar2;
  long lVar3;
  
  cmd_sem_init();
  puVar1 = (undefined *)PollSema(_sceCd_scmd_semid);
  if (_sceCd_scmd_semid == puVar1) {
    scmd_sema_keep_cmd = param_1;
    ReferThreadStatus(my_thid,0x4c2d60);
    lVar3 = sceCdSyncS(1);
    if (lVar3 == 0) {
      sceSifInitRpc(0);
      if (-1 < (int)_scmd_bind) {
        return 1;
      }
      while( true ) {
        while (iVar2 = sceSifBindRpc((_sif_client_data *)_sceCd_cd_scmd,0x80000593,0), iVar2 < 0) {
          if (0 < ram0x00365e90) {
            scePrintf("Libcdvd bind err S cmd\n");
          }
          iVar2 = 0x100000;
          do {
            iVar2 = iVar2 + -1;
          } while (iVar2 != -1);
        }
        if (_sceCd_cd_scmd._36_4_ != 0) break;
        iVar2 = 0x100000;
        do {
          iVar2 = iVar2 + -1;
        } while (iVar2 != -1);
      }
      _scmd_bind = (undefined *)0x0;
      return 1;
    }
    SignalSema(_sceCd_scmd_semid);
  }
  else if (0 < ram0x00365e90) {
    scePrintf("Scmd fail sema cur_cmd:%d keep_cmd:%d\n");
    return 0;
  }
  return 0;
}

_sceCdSC() {
  undefined1 *puVar1;
  
  puVar1 = _sceCd_ncmd_semid;
  if (param_1 != 0x8001) {
    if (param_1 == 0x8003) {
      puVar1 = _sceCd_ncmdrdata;
    }
    else if (param_1 == 0x8002) {
      puVar1 = _sceCd_ncmdsdata;
    }
    else if (param_1 == 0x8004) {
      puVar1 = _sceCd_cd_ncmd;
    }
    else {
      if (param_1 == 0x8011) {
        *param_2 = _sceCd_scmd_semid;
        return 1;
      }
      if (param_1 == 0x8013) {
        puVar1 = _sceCd_scmdrdata;
      }
      else if (param_1 == 0x8012) {
        puVar1 = (undefined1 *)&_sceCd_scmdsdata;
      }
      else if (param_1 == 0x8014) {
        puVar1 = _sceCd_cd_scmd;
      }
      else {
        puVar1 = (undefined1 *)0x0;
      }
    }
  }
  *param_2 = puVar1;
  return 1;
}

sceCdInit() {
  int iVar1;
  long lVar2;
  undefined4 uVar3;
  
  lVar2 = sceCdSyncS(1);
  uVar3 = 0;
  if (lVar2 == 0) {
    sceSifInitRpc(0);
    my_thid = GetThreadId();
    Init_seq = 1;
    c_cnt_66 = c_cnt_66 + 1;
    _icmd_bind = &_heap_size;
    _sf_bind = &_heap_size;
    _ncmd_bind = &_heap_size;
    _scmd_bind = &_heap_size;
    _scmd_dr_bind = &_heap_size;
    _sceCd_ee_read_mode = 0;
    _it_bind = &_heap_size;
    while( true ) {
      while (iVar1 = sceSifBindRpc((_sif_client_data *)&cdit,0x80000592,0), iVar1 < 0) {
        if (0 < ram0x00365e90) {
          scePrintf("Libcdvd bind err %d CD_Init %d\n");
        }
        iVar1 = 0x100000;
        do {
          iVar1 = iVar1 + -1;
        } while (iVar1 != -1);
      }
      if (DAT_004c2f8c != 0) break;
      iVar1 = 0x100000;
      do {
        iVar1 = iVar1 + -1;
      } while (iVar1 != -1);
    }
    _it_bind = (undefined *)0x0;
    _i_mode = param_1;
    sceSifWriteBackDCache(&_i_mode,4);
    iVar1 = sceSifCallRpc((_sif_client_data *)&cdit,0,0,&_i_mode,4,_sceCd_scmdrdata,0x10,
                          (undefined1 *)0x0,(void *)0x0);
    if (iVar1 < 0) {
      Init_seq = 0;
      uVar3 = 0;
    }
    else {
      uVar3 = 1;
      if (iRam2036708c != 0xff) {
        if (iRam2036708c == 0xfe) {
          ram0x00365e90 = 1;
        }
        else {
          iVar1 = iRam20367084 + 0xff;
          if (-1 < iRam20367084) {
            iVar1 = iRam20367084;
          }
          if (iVar1 >> 8 < 2) {
            uVar3 = 2;
          }
          else {
            iVar1 = iRam20367088 + 0xff;
            if (-1 < iRam20367088) {
              iVar1 = iRam20367088;
            }
            if (iVar1 >> 8 < 2) {
              uVar3 = 2;
            }
          }
        }
      }
      Init_seq = 0;
      if (((param_1 < 0) || (param_1 < 2)) || (param_1 != 5)) {
        cmd_sem_init();
        PowerOffCB();
      }
      else {
        if (0 < ram0x00365e90) {
          scePrintf("Libcdvd Exit\n");
        }
        cdvd_exit();
        _sceCd_ncmd_semid = &_heap_size;
        _sceCd_scmd_semid = &_heap_size;
        cb_semid = &_heap_size;
      }
    }
  }
  return uVar3;
}

sceCdDiskReady_old() {
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  
  if (0 < ram0x00365e90) {
    scePrintf("OLD DiskReady Call\n");
  }
  cmd_sem_init();
  puVar1 = (undefined *)PollSema(_sceCd_scmd_semid);
  uVar3 = 6;
  if (_sceCd_scmd_semid == puVar1) {
    lVar4 = sceCdSyncS(1);
    if (lVar4 == 0) {
      sceSifInitRpc(0);
      if ((int)_scmd_dr_bind < 0) {
        while( true ) {
          while (iVar2 = sceSifBindRpc((_sif_client_data *)&cddr,0x8000059a,0), iVar2 < 0) {
            if (0 < ram0x00365e90) {
              scePrintf("Libcdvd bind err CdDiskReady\n");
            }
            iVar2 = 0x100000;
            do {
              iVar2 = iVar2 + -1;
            } while (iVar2 != -1);
          }
          iVar2 = 0x100000;
          if (DAT_004c2fb4 != 0) break;
          do {
            iVar2 = iVar2 + -1;
          } while (iVar2 != -1);
        }
        _scmd_dr_bind = (undefined *)0x0;
      }
      _dr_mode = (undefined4)param_1;
      sceSifWriteBackDCache(&_dr_mode,4);
      iVar2 = sceSifCallRpc((_sif_client_data *)&cddr,0,0,&_dr_mode,4,_sceCd_scmdrdata,4,
                            (undefined1 *)0x0,(void *)0x0);
      if (-1 < iVar2) {
        if (0 < ram0x00365e90) {
          scePrintf("DiskReady ended\n");
        }
        uVar3 = uRam20367080;
        SignalSema(_sceCd_scmd_semid);
        return uVar3;
      }
    }
    SignalSema(_sceCd_scmd_semid);
    uVar3 = 6;
    if (param_1 == 8) {
      uVar3 = 0xffffffff;
    }
  }
  return uVar3;
}

sceCdDiskReady() {
  bool bVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  
  if (0 < ram0x00365e90) {
    scePrintf("NEW DiskReady Call\n");
  }
  cmd_sem_init();
  puVar2 = (undefined *)PollSema(_sceCd_rcmd_semid);
  if (_sceCd_rcmd_semid == puVar2) {
    sceSifInitRpc(0);
    iVar4 = 0;
    if ((int)_scmd_dr_bind < 0) {
      while( true ) {
        while (iVar3 = sceSifBindRpc((_sif_client_data *)&cddr,0x8000059c,0), iVar3 < 0) {
          if (0 < ram0x00365e90) {
            scePrintf("Libcdvd bind err CdDiskReady\n");
          }
          iVar3 = 0x100000;
          do {
            iVar3 = iVar3 + -1;
          } while (iVar3 != -1);
        }
        bVar1 = 0x10 < iVar4;
        if (DAT_004c2fb4 != 0) break;
        iVar4 = iVar4 + 1;
        if (bVar1) {
          SignalSema(_sceCd_rcmd_semid);
          uVar5 = sceCdDiskReady_old(param_1);
          return uVar5;
        }
        iVar3 = 0x100000;
        do {
          iVar3 = iVar3 + -1;
        } while (iVar3 != -1);
      }
      _scmd_dr_bind = (undefined *)0x0;
    }
    _dr_mode = (undefined4)param_1;
    sceSifWriteBackDCache(&_dr_mode,4);
    iVar4 = sceSifCallRpc((_sif_client_data *)&cddr,0,0,&_dr_mode,4,_sceCd_rcmdrdata,4,
                          (undefined1 *)0x0,(void *)0x0);
    if (-1 < iVar4) {
      if (0 < ram0x00365e90) {
        scePrintf("DiskReady ended\n");
      }
      uVar5 = uRam20367900;
      SignalSema(_sceCd_rcmd_semid);
      return uVar5;
    }
    SignalSema(_sceCd_rcmd_semid);
  }
  uVar5 = 6;
  if (param_1 == 8) {
    uVar5 = 0xffffffff;
  }
  return uVar5;
}

sceCdMmode() {
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  
  lVar3 = _sceCd_scmd_prechk(0x22);
  if (lVar3 == 0) {
    uVar2 = 0;
  }
  else {
    _sceCd_scmdsdata = param_1;
    sceSifWriteBackDCache(&_sceCd_scmdsdata,4);
    iVar1 = sceSifCallRpc((_sif_client_data *)_sceCd_cd_scmd,rpc_mmode,0,&_sceCd_scmdsdata,
                          outcnt_mmode,_sceCd_scmdrdata,incnt_mmode,(undefined1 *)0x0,(void *)0x0);
    uVar2 = uRam20367080;
    if (iVar1 < 0) {
      SignalSema(_sceCd_scmd_semid);
      uVar2 = 0;
    }
    else {
      SignalSema(_sceCd_scmd_semid);
    }
  }
  return uVar2;
}

sceCdReadClock() {
  uint uVar1;
  ulong *puVar2;
  int iVar3;
  undefined4 uVar4;
  long lVar5;
  ulong uVar6;
  
  lVar5 = _sceCd_scmd_prechk(0xf);
  if (lVar5 == 0) {
    uVar4 = 0;
  }
  else {
    if (0 < ram0x00365e90) {
      scePrintf("Libcdvd call Clock read 1\n");
    }
    iVar3 = sceSifCallRpc((_sif_client_data *)_sceCd_cd_scmd,1,0,(void *)0x0,0,_sceCd_scmdrdata,0x10
                          ,(undefined1 *)0x0,(void *)0x0);
    if (iVar3 < 0) {
      SignalSema(_sceCd_scmd_semid);
      uVar4 = 0;
    }
    else {
      uVar6 = lRam20367088 << 0x20 | (ulong)uRam20367084;
      uVar1 = param_1 + 7 & 7;
      puVar2 = (ulong *)((param_1 + 7) - uVar1);
      *puVar2 = *puVar2 & -1L << (uVar1 + 1) * 8 | uVar6 >> (7 - uVar1) * 8;
      uVar1 = param_1 & 7;
      *(ulong *)(param_1 - uVar1) =
           uVar6 << uVar1 * 8 | *(ulong *)(param_1 - uVar1) & 0xffffffffffffffffU >> (8 - uVar1) * 8
      ;
      if (0 < ram0x00365e90) {
        scePrintf("Libcdvd call Clock read 2\n");
      }
      uVar4 = uRam20367080;
      SignalSema(_sceCd_scmd_semid);
    }
  }
  return uVar4;
}
