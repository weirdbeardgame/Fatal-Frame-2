// STATUS: NOT STARTED

#include "libmc.h"

sceMcInit() {
  int iVar1;
  undefined auStack_a0 [4];
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_8c;
  
  if ((int)semaidRegFunc < 0) {
    local_8c = 0;
    local_98 = 1;
    local_9c = 1;
    semaidRegFunc = (undefined *)CreateSema(auStack_a0);
    local_9c = 1;
    local_98 = 0;
    local_8c = 0;
    semaid_timerfunc = (undefined *)CreateSema(auStack_a0);
  }
  sceMcSync(0,0,0);
  WaitSema(semaidRegFunc);
  sceSifInitRpc(0);
  while( true ) {
    iVar1 = sceSifBindRpc((_sif_client_data *)&mcClientID,0x80000400,0);
    if (iVar1 < 0) {
      scePrintf("bind error libmc \n");
      do {
                    /* WARNING: Do nothing block with infinite loop */
      } while( true );
    }
    if (DAT_004cafa4 != 0) break;
    iVar1 = 0x100000;
    do {
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  iVar1 = sceSifCallRpc((_sif_client_data *)&mcClientID,0xfe,0,&sifParamOrd,0x30,&retval,0xc,
                        (undefined1 *)0x0,(void *)0x0);
  SignalSema(semaidRegFunc);
  if (iVar1 < 0) {
    DAT_004cafa4 = 0;
    iVar1 = iVar1 + -100;
  }
  else if (DAT_004cc544 < 0x20a) {
    scePrintf("libmc: too old release of mcserv.irx\n");
    DAT_004cafa4 = 0;
    iVar1 = -0x78;
  }
  else {
    iVar1 = retval;
    if (DAT_004cc548 < 0x20e) {
      scePrintf("libmc: too old release of mcman.irx\n");
      DAT_004cafa4 = 0;
      iVar1 = -0x79;
    }
  }
  return iVar1;
}

sceMcEnd() {
  if (-1 < (int)semaidRegFunc) {
    DeleteSema();
    semaidRegFunc = &_heap_size;
    DeleteSema(semaid_timerfunc);
  }
  return 1;
}

_lmcGetClientPtr() {
  *param_1 = &retval;
  *param_2 = &mcRunCmdNo;
  DAT_004cc57c = semaidRegFunc;
  return &mcClientID;
}

static mceSifRpcEndFunc() {
  iSignalSema(semaid_timerfunc);
  return;
}

sceMcChangeThreadPriority() {
  int iVar1;
  long lVar2;
  
  if (DAT_004cafa4 == 0) {
    iVar1 = -100;
  }
  else {
    lVar2 = PollSema(semaidRegFunc);
    if (lVar2 < 0) {
      iVar1 = -200;
    }
    else {
      DAT_004cb014 = param_1;
      iVar1 = sceSifCallRpc((_sif_client_data *)&mcClientID,0x14,1,&sifParamOrd,0x30,&retval,4,
                            mceSifRpcEndFunc,(void *)0x0);
      if (iVar1 == 0) {
        mcRunCmdNo = 0x14;
      }
      else {
        SignalSema(semaidRegFunc);
      }
    }
  }
  return iVar1;
}

sceMcGetSlotMax() {
  int iVar1;
  long lVar2;
  
  if (DAT_004cafa4 == 0) {
    iVar1 = -100;
  }
  else {
    lVar2 = PollSema(semaidRegFunc);
    if (lVar2 < 0) {
      iVar1 = -200;
    }
    else {
      DAT_004cb004 = param_1;
      iVar1 = sceSifCallRpc((_sif_client_data *)&mcClientID,0x15,0,&sifParamOrd,0x30,&retval,4,
                            mceSifRpcEndFunc,(void *)0x0);
      if (iVar1 == 0) {
        SignalSema(semaidRegFunc);
        iVar1 = retval;
      }
      else {
        SignalSema(semaidRegFunc);
      }
    }
  }
  return iVar1;
}

sceMcOpen() {
  int iVar1;
  long lVar2;
  
  if (DAT_004cafa4 == 0) {
    iVar1 = -100;
  }
  else {
    lVar2 = PollSema(semaidRegFunc);
    iVar1 = -200;
    if (-1 < lVar2) {
      if ((param_3 == 0) || (*(char *)param_3 == '\0')) {
        SignalSema(semaidRegFunc);
        iVar1 = -0xd2;
      }
      else {
        strncpy(&DAT_004cb044,(char *)param_3,0x3ff);
        DAT_004cb443 = 0;
        sifParamFname = param_1;
        DAT_004cb034 = param_2;
        DAT_004cb038 = param_4;
        iVar1 = sceSifCallRpc((_sif_client_data *)&mcClientID,2,1,&sifParamFname,0x414,&retval,4,
                              mceSifRpcEndFunc,(void *)0x0);
        if (iVar1 == 0) {
          mcRunCmdNo = 2;
        }
        else {
          SignalSema(semaidRegFunc);
        }
      }
    }
  }
  return iVar1;
}

sceMcMkdir() {
  long lVar1;
  
  lVar1 = sceMcOpen();
  if (lVar1 == 0) {
    mcRunCmdNo = 0xb;
  }
  return lVar1;
}

sceMcClose() {
  int iVar1;
  long lVar2;
  
  if (DAT_004cafa4 == 0) {
    iVar1 = -100;
  }
  else {
    lVar2 = PollSema(semaidRegFunc);
    if (lVar2 < 0) {
      iVar1 = -200;
    }
    else {
      sifParamOrd = param_1;
      iVar1 = sceSifCallRpc((_sif_client_data *)&mcClientID,3,1,&sifParamOrd,0x30,&retval,4,
                            mceSifRpcEndFunc,(void *)0x0);
      if (iVar1 == 0) {
        mcRunCmdNo = 3;
      }
      else {
        SignalSema(semaidRegFunc);
      }
    }
  }
  return iVar1;
}

sceMcSeek() {
  int iVar1;
  long lVar2;
  
  if (DAT_004cafa4 == 0) {
    iVar1 = -100;
  }
  else {
    lVar2 = PollSema(semaidRegFunc);
    if (lVar2 < 0) {
      iVar1 = -200;
    }
    else {
      sifParamOrd = param_1;
      DAT_004cb010 = param_2;
      DAT_004cb014 = param_3;
      iVar1 = sceSifCallRpc((_sif_client_data *)&mcClientID,4,1,&sifParamOrd,0x30,&retval,4,
                            mceSifRpcEndFunc,(void *)0x0);
      if (iVar1 == 0) {
        mcRunCmdNo = 4;
      }
      else {
        SignalSema(semaidRegFunc);
      }
    }
  }
  return iVar1;
}

static mceIntrReadFixAlign() {
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  
  piVar1 = (int *)(param_1 | 0x20000000);
  if (*piVar1 != 0) {
    puVar4 = (undefined *)piVar1[2];
    iVar2 = 0;
    if (0 < *piVar1) {
      do {
        iVar3 = iVar2 + 0x10;
        iVar2 = iVar2 + 1;
        *puVar4 = *(undefined *)((int)piVar1 + iVar3);
        puVar4 = puVar4 + 1;
      } while (iVar2 < *piVar1);
      iVar2 = piVar1[1];
      goto LAB_0028ca0c;
    }
  }
  iVar2 = piVar1[1];
LAB_0028ca0c:
  if (iVar2 != 0) {
    puVar4 = (undefined *)piVar1[3];
    iVar3 = 0;
    if (0 < iVar2) {
      do {
        iVar2 = iVar3 + 0x50;
        iVar3 = iVar3 + 1;
        *puVar4 = *(undefined *)((int)piVar1 + iVar2);
        puVar4 = puVar4 + 1;
      } while (iVar3 < piVar1[1]);
    }
  }
  iSignalSema(semaid_timerfunc);
  return;
}

sceMcRead() {
  int iVar1;
  long lVar2;
  
  if (DAT_004cafa4 == 0) {
    iVar1 = -100;
  }
  else {
    lVar2 = PollSema(semaidRegFunc);
    if (lVar2 < 0) {
      iVar1 = -200;
    }
    else {
      DAT_004cb01c = &sifParamNext;
      sifParamOrd = param_1;
      DAT_004cb00c = param_3;
      DAT_004cb018 = param_2;
      sceSifWriteBackDCache(param_2,param_3);
      sceSifWriteBackDCache(&sifParamNext,0xc0);
      iVar1 = sceSifCallRpc((_sif_client_data *)&mcClientID,5,1,&sifParamOrd,0x30,&retval,4,
                            mceIntrReadFixAlign,&sifParamNext);
      if (iVar1 == 0) {
        mcRunCmdNo = 5;
      }
      else {
        SignalSema(semaidRegFunc);
      }
    }
  }
  return iVar1;
}

sceMcWrite() {
  undefined *puVar1;
  int iVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  
  if (DAT_004cafa4 == 0) {
    iVar2 = -100;
  }
  else {
    lVar3 = PollSema(semaidRegFunc);
    if (lVar3 < 0) {
      iVar2 = -200;
    }
    else {
      if (param_3 < 0x11) {
        DAT_004cb018 = (undefined *)0x0;
        DAT_004cb00c = 0;
        DAT_004cb014 = (uint)param_3;
      }
      else {
        DAT_004cb014 = ((uint)(param_2 + -1) & 0xfffffff0) - (int)(param_2 + -0x10);
        DAT_004cb00c = (uint)param_3 - DAT_004cb014;
        DAT_004cb018 = param_2 + DAT_004cb014;
      }
      uVar4 = 0;
      puVar1 = param_2;
      sifParamOrd = param_1;
      if (DAT_004cb014 != 0) {
        do {
          uVar5 = uVar4 + 1;
          (&DAT_004cb020)[uVar4] = *puVar1;
          puVar1 = param_2 + uVar5;
          uVar4 = uVar5;
        } while (uVar5 < DAT_004cb014);
      }
      FlushCache(0);
      iVar2 = sceSifCallRpc((_sif_client_data *)&mcClientID,6,1,&sifParamOrd,0x30,&retval,4,
                            mceSifRpcEndFunc,(void *)0x0);
      if (iVar2 == 0) {
        mcRunCmdNo = 6;
      }
      else {
        SignalSema(semaidRegFunc);
      }
    }
  }
  return iVar2;
}

sceMcSync() {
  bool bVar1;
  long lVar2;
  uint uVar3;
  
  if (mcRunCmdNo == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    lVar2 = PollSema(semaid_timerfunc);
    bVar1 = lVar2 < 0;
    if ((param_1 == 0) && (bVar1)) {
      bVar1 = false;
      WaitSema(semaid_timerfunc);
    }
    uVar3 = (uint)!bVar1;
    if (param_2 != 0) {
      *(int *)param_2 = mcRunCmdNo;
    }
    if (uVar3 != 0) {
      mcRunCmdNo = 0;
      if (param_3 != 0) {
        *(undefined4 *)param_3 = retval;
      }
      SignalSema(semaidRegFunc);
    }
  }
  return uVar3;
}

static mceGetInfoApdx() {
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(param_1 | 0x20000000);
  if (typeAddr != (undefined4 *)0x0) {
    *typeAddr = *puVar1;
  }
  if (freeAddr != (undefined4 *)0x0) {
    *freeAddr = puVar1[1];
  }
  if (formAddr != (undefined4 *)0x0) {
    *formAddr = puVar1[0x24];
  }
  iSignalSema(semaid_timerfunc);
  return;
}

sceMcGetInfo() {
  int iVar1;
  long lVar2;
  
  if (DAT_004cafa4 == 0) {
    iVar1 = -100;
  }
  else {
    lVar2 = PollSema(semaidRegFunc);
    if (lVar2 < 0) {
      iVar1 = -200;
    }
    else {
      DAT_004cb01c = &sifParamNext;
      DAT_004cb014 = (uint)(param_3 != 0);
      DAT_004cb010 = (uint)(param_4 != 0);
      DAT_004cb00c = (uint)(param_5 != 0);
      typeAddr = (undefined4)param_3;
      freeAddr = (undefined4)param_4;
      formAddr = (undefined4)param_5;
      DAT_004cb004 = param_1;
      DAT_004cb008 = param_2;
      sceSifWriteBackDCache(&sifParamNext,0xc0);
      iVar1 = sceSifCallRpc((_sif_client_data *)&mcClientID,1,1,&sifParamOrd,0x30,&retval,4,
                            mceGetInfoApdx,&sifParamNext);
      if (iVar1 == 0) {
        mcRunCmdNo = 1;
      }
      else {
        SignalSema(semaidRegFunc);
      }
    }
  }
  return iVar1;
}

sceMcUdCheckNewCard() {
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = sceSifCallRpc((_sif_client_data *)&mcClientID,0x35,0,&sifParamOrd,0x30,&retval,4,
                        mceSifRpcEndFunc,(void *)0x0);
  uVar2 = retval;
  if (iVar1 != 0) {
    scePrintf("sceMcUdCheckNewCard RPC faild\n");
    uVar2 = 0xffffffff;
  }
  return uVar2;
}

sceMcGetDir() {
  int iVar1;
  long lVar2;
  
  if (DAT_004cafa4 == 0) {
    iVar1 = -100;
  }
  else {
    lVar2 = PollSema(semaidRegFunc);
    iVar1 = -200;
    if (-1 < lVar2) {
      if ((param_3 == 0) || (*(char *)param_3 == '\0')) {
        SignalSema(semaidRegFunc);
        iVar1 = -0xd2;
      }
      else {
        sifParamFname = param_1;
        DAT_004cb034 = param_2;
        DAT_004cb038 = param_4;
        DAT_004cb03c = (int)param_5;
        DAT_004cb040 = param_6;
        strncpy(&DAT_004cb044,(char *)param_3,0x3ff);
        DAT_004cb443 = 0;
        if (-1 < param_5) {
          sceSifWriteBackDCache(param_6,(int)param_5 << 6);
        }
        iVar1 = sceSifCallRpc((_sif_client_data *)&mcClientID,0xd,1,&sifParamFname,0x414,&retval,4,
                              mceSifRpcEndFunc,(void *)0x0);
        if (iVar1 == 0) {
          mcRunCmdNo = 0xd;
        }
        else {
          SignalSema(semaidRegFunc);
        }
      }
    }
  }
  return iVar1;
}

static mceStorePwd() {
  size_t sVar1;
  
  if (param_1 != 0) {
    sVar1 = strlen((char *)0x204cb540);
    if (sVar1 < 0x400) {
      sVar1 = strlen((char *)0x204cb540);
    }
    else {
      sVar1 = 0x3ff;
    }
    memcpy((void *)param_1,(void *)0x204cb540,sVar1);
    *(undefined *)((int)(void *)param_1 + (int)sVar1) = 0;
  }
  iSignalSema(semaid_timerfunc);
  return;
}

sceMcChdir() {
  int iVar1;
  long lVar2;
  
  if (DAT_004cafa4 == 0) {
    iVar1 = -100;
  }
  else {
    lVar2 = PollSema(semaidRegFunc);
    iVar1 = -200;
    if (-1 < lVar2) {
      if ((param_3 == 0) || (*(char *)param_3 == '\0')) {
        SignalSema(semaidRegFunc);
        iVar1 = -0xd2;
      }
      else {
        DAT_004cb040 = &currentDir;
        sifParamFname = param_1;
        DAT_004cb034 = param_2;
        strncpy(&DAT_004cb044,(char *)param_3,0x3ff);
        DAT_004cb443 = 0;
        sceSifWriteBackDCache(&currentDir,0x400);
        iVar1 = sceSifCallRpc((_sif_client_data *)&mcClientID,0xc,1,&sifParamFname,0x414,&retval,4,
                              mceStorePwd,param_4);
        if (iVar1 == 0) {
          mcRunCmdNo = 0xc;
        }
        else {
          SignalSema(semaidRegFunc);
        }
      }
    }
  }
  return iVar1;
}

sceMcFormat() {
  int iVar1;
  long lVar2;
  
  if (DAT_004cafa4 == 0) {
    iVar1 = -100;
  }
  else {
    lVar2 = PollSema(semaidRegFunc);
    if (lVar2 < 0) {
      iVar1 = -200;
    }
    else {
      DAT_004cb004 = param_1;
      DAT_004cb008 = param_2;
      iVar1 = sceSifCallRpc((_sif_client_data *)&mcClientID,0x10,1,&sifParamOrd,0x30,&retval,4,
                            mceSifRpcEndFunc,(void *)0x0);
      if (iVar1 == 0) {
        mcRunCmdNo = 0x10;
      }
      else {
        SignalSema(semaidRegFunc);
      }
    }
  }
  return iVar1;
}

sceMcDelete() {
  int iVar1;
  long lVar2;
  
  if (DAT_004cafa4 == 0) {
    iVar1 = -100;
  }
  else {
    lVar2 = PollSema(semaidRegFunc);
    iVar1 = -200;
    if (-1 < lVar2) {
      if ((param_3 == 0) || (*(char *)param_3 == '\0')) {
        SignalSema(semaidRegFunc);
        iVar1 = -0xd2;
      }
      else {
        strncpy(&DAT_004cb044,(char *)param_3,0x3ff);
        DAT_004cb443 = 0;
        DAT_004cb038 = 0;
        sifParamFname = param_1;
        DAT_004cb034 = param_2;
        iVar1 = sceSifCallRpc((_sif_client_data *)&mcClientID,0xf,1,&sifParamFname,0x414,&retval,4,
                              mceSifRpcEndFunc,(void *)0x0);
        if (iVar1 == 0) {
          mcRunCmdNo = 0xf;
        }
        else {
          SignalSema(semaidRegFunc);
        }
      }
    }
  }
  return iVar1;
}

sceMcFlush() {
  int iVar1;
  long lVar2;
  
  if (DAT_004cafa4 == 0) {
    iVar1 = -100;
  }
  else {
    lVar2 = PollSema(semaidRegFunc);
    if (lVar2 < 0) {
      iVar1 = -200;
    }
    else {
      sifParamOrd = param_1;
      iVar1 = sceSifCallRpc((_sif_client_data *)&mcClientID,10,1,&sifParamOrd,0x30,&retval,4,
                            mceSifRpcEndFunc,(void *)0x0);
      if (iVar1 == 0) {
        mcRunCmdNo = 10;
      }
      else {
        SignalSema(semaidRegFunc);
      }
    }
  }
  return iVar1;
}

sceMcSetFileInfo() {
  uint uVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  uint uVar8;
  
  if (DAT_004cafa4 == 0) {
    iVar3 = -100;
  }
  else {
    uVar5 = param_3;
    uVar6 = param_4;
    uVar7 = param_5;
    lVar4 = PollSema(semaidRegFunc);
    iVar3 = -200;
    if (-1 < lVar4) {
      if ((param_3 == 0) || (*(char *)param_3 == '\0')) {
        SignalSema(semaidRegFunc);
        iVar3 = -0xd2;
      }
      else {
        DAT_004cb038 = (uint)param_5 & 7;
        uVar8 = (uint)param_4;
        uVar1 = uVar8 + 7 & 7;
        uVar2 = uVar8 & 7;
        buffFileInfo = (*(long *)((uVar8 + 7) - uVar1) << (7 - uVar1) * 8 |
                       uVar5 & 0xffffffffffffffffU >> (uVar1 + 1) * 8) & -1L << (8 - uVar2) * 8 |
                       *(ulong *)(uVar8 - uVar2) >> uVar2 * 8;
        uVar1 = uVar8 + 0xf & 7;
        uVar2 = uVar8 + 8 & 7;
        DAT_004cafc8 = (*(long *)((uVar8 + 0xf) - uVar1) << (7 - uVar1) * 8 |
                       uVar6 & 0xffffffffffffffffU >> (uVar1 + 1) * 8) & -1L << (8 - uVar2) * 8 |
                       *(ulong *)((uVar8 + 8) - uVar2) >> uVar2 * 8;
        uVar1 = uVar8 + 0x17 & 7;
        uVar2 = uVar8 + 0x10 & 7;
        DAT_004cafd0 = (*(long *)((uVar8 + 0x17) - uVar1) << (7 - uVar1) * 8 |
                       uVar7 & 0xffffffffffffffffU >> (uVar1 + 1) * 8) & -1L << (8 - uVar2) * 8 |
                       *(ulong *)((uVar8 + 0x10) - uVar2) >> uVar2 * 8;
        uVar1 = uVar8 + 0x1f & 7;
        uVar2 = uVar8 + 0x18 & 7;
        DAT_004cafd8 = (*(long *)((uVar8 + 0x1f) - uVar1) << (7 - uVar1) * 8 |
                       buffFileInfo & 0xffffffffffffffffU >> (uVar1 + 1) * 8) &
                       -1L << (8 - uVar2) * 8 | *(ulong *)((uVar8 + 0x18) - uVar2) >> uVar2 * 8;
        uVar1 = uVar8 + 0x27 & 7;
        uVar2 = uVar8 + 0x20 & 7;
        DAT_004cafe0 = (*(long *)((uVar8 + 0x27) - uVar1) << (7 - uVar1) * 8 |
                       DAT_004cafc8 & 0xffffffffffffffffU >> (uVar1 + 1) * 8) &
                       -1L << (8 - uVar2) * 8 | *(ulong *)((uVar8 + 0x20) - uVar2) >> uVar2 * 8;
        uVar1 = uVar8 + 0x2f & 7;
        uVar2 = uVar8 + 0x28 & 7;
        DAT_004cafe8 = (*(long *)((uVar8 + 0x2f) - uVar1) << (7 - uVar1) * 8 |
                       DAT_004cafd0 & 0xffffffffffffffffU >> (uVar1 + 1) * 8) &
                       -1L << (8 - uVar2) * 8 | *(ulong *)((uVar8 + 0x28) - uVar2) >> uVar2 * 8;
        uVar1 = uVar8 + 0x37 & 7;
        uVar2 = uVar8 + 0x30 & 7;
        DAT_004caff0 = (*(long *)((uVar8 + 0x37) - uVar1) << (7 - uVar1) * 8 |
                       DAT_004cafd8 & 0xffffffffffffffffU >> (uVar1 + 1) * 8) &
                       -1L << (8 - uVar2) * 8 | *(ulong *)((uVar8 + 0x30) - uVar2) >> uVar2 * 8;
        uVar1 = uVar8 + 0x3f & 7;
        uVar2 = uVar8 + 0x38 & 7;
        DAT_004caff8 = (*(long *)((uVar8 + 0x3f) - uVar1) << (7 - uVar1) * 8 |
                       DAT_004cafe0 & 0xffffffffffffffffU >> (uVar1 + 1) * 8) &
                       -1L << (8 - uVar2) * 8 | *(ulong *)((uVar8 + 0x38) - uVar2) >> uVar2 * 8;
        DAT_004cb040 = &buffFileInfo;
        sifParamFname = param_1;
        DAT_004cb034 = param_2;
        strncpy(&DAT_004cb044,(char *)param_3,0x3ff);
        DAT_004cb443 = 0;
        FlushCache(0);
        iVar3 = sceSifCallRpc((_sif_client_data *)&mcClientID,0xe,1,&sifParamFname,0x414,&retval,4,
                              mceSifRpcEndFunc,(void *)0x0);
        if (iVar3 == 0) {
          mcRunCmdNo = 0xe;
        }
        else {
          SignalSema(semaidRegFunc);
        }
      }
    }
  }
  return iVar3;
}

sceMcRename() {
  int iVar1;
  long lVar2;
  
  if (DAT_004cafa4 == 0) {
    iVar1 = -100;
  }
  else {
    lVar2 = PollSema(semaidRegFunc);
    iVar1 = -200;
    if (-1 < lVar2) {
      if (((param_3 == 0) || (*(char *)param_3 == '\0')) || (param_4 == 0)) {
        SignalSema(semaidRegFunc);
        iVar1 = -0xd2;
      }
      else {
        DAT_004cb038 = 0x10;
        sifParamFname = param_1;
        DAT_004cb034 = param_2;
        strncpy(&DAT_004cb044,(char *)param_3,0x3ff);
        DAT_004cb443 = 0;
        strncpy((char *)&DAT_004cafe0,(char *)param_4,0x20);
        DAT_004cb040 = &buffFileInfo;
        DAT_004caff8._7_1_ = 0;
        FlushCache(0);
        iVar1 = sceSifCallRpc((_sif_client_data *)&mcClientID,0xe,1,&sifParamFname,0x414,&retval,4,
                              mceSifRpcEndFunc,(void *)0x0);
        if (iVar1 == 0) {
          mcRunCmdNo = 0x13;
        }
        else {
          SignalSema(semaidRegFunc);
        }
      }
    }
  }
  return iVar1;
}

sceMcUnformat() {
  int iVar1;
  long lVar2;
  
  if (DAT_004cafa4 == 0) {
    iVar1 = -100;
  }
  else {
    lVar2 = PollSema(semaidRegFunc);
    if (lVar2 < 0) {
      iVar1 = -200;
    }
    else {
      DAT_004cb004 = param_1;
      DAT_004cb008 = param_2;
      iVar1 = sceSifCallRpc((_sif_client_data *)&mcClientID,0x11,1,&sifParamOrd,0x30,&retval,4,
                            mceSifRpcEndFunc,(void *)0x0);
      if (iVar1 == 0) {
        mcRunCmdNo = 0x11;
      }
      else {
        SignalSema(semaidRegFunc);
      }
    }
  }
  return iVar1;
}

sceMcGetEntSpace() {
  int iVar1;
  long lVar2;
  
  if (DAT_004cafa4 == 0) {
    iVar1 = -100;
  }
  else {
    lVar2 = PollSema(semaidRegFunc);
    iVar1 = -200;
    if (-1 < lVar2) {
      if ((param_3 == 0) || (*(char *)param_3 == '\0')) {
        SignalSema(semaidRegFunc);
        iVar1 = -0xd2;
      }
      else {
        sifParamFname = param_1;
        DAT_004cb034 = param_2;
        strncpy(&DAT_004cb044,(char *)param_3,0x3ff);
        DAT_004cb443 = 0;
        iVar1 = sceSifCallRpc((_sif_client_data *)&mcClientID,0x12,1,&sifParamFname,0x414,&retval,4,
                              mceSifRpcEndFunc,(void *)0x0);
        if (iVar1 == 0) {
          mcRunCmdNo = 0x12;
        }
        else {
          SignalSema(semaidRegFunc);
        }
      }
    }
  }
  return iVar1;
}
