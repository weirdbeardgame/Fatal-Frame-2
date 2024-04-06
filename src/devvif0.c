#include "common.h"

INCLUDE_ASM("asm/nonmatchings/devvif0", sceDevVif0PutFifo);

INCLUDE_ASM("asm/nonmatchings/devvif0", sceDevVif1Reset);

INCLUDE_ASM("asm/nonmatchings/devvif0", sceDevVif1Pause);

INCLUDE_ASM("asm/nonmatchings/devvif0", sceDevVif1Continue);

INCLUDE_ASM("asm/nonmatchings/devvif0", sceDevVif1PutErr);

INCLUDE_ASM("asm/nonmatchings/devvif0", sceDevVif1GetErr);

INCLUDE_ASM("asm/nonmatchings/devvif0", sceDevVif1Sync);

INCLUDE_ASM("asm/nonmatchings/devvif0", sceDevVif1GetCnd);

INCLUDE_ASM("asm/nonmatchings/devvif0", sceDevVif1PutFifo);

INCLUDE_ASM("asm/nonmatchings/devvif0", sceDevVif1GetFifo);

INCLUDE_ASM("asm/nonmatchings/devvif0", RFU000_FullReset);

INCLUDE_ASM("asm/nonmatchings/devvif0", ResetEE);

INCLUDE_ASM("asm/nonmatchings/devvif0", SetGsCrt);

INCLUDE_ASM("asm/nonmatchings/devvif0", RFU003);

INCLUDE_ASM("asm/nonmatchings/devvif0", _Exit);

INCLUDE_ASM("asm/nonmatchings/devvif0", RFU005);

INCLUDE_ASM("asm/nonmatchings/devvif0", _LoadExecPS2);

INCLUDE_ASM("asm/nonmatchings/devvif0", _ExecPS2);

INCLUDE_ASM("asm/nonmatchings/devvif0", RFU008);

INCLUDE_ASM("asm/nonmatchings/devvif0", RFU009);

INCLUDE_ASM("asm/nonmatchings/devvif0", AddSbusIntcHandler);

INCLUDE_ASM("asm/nonmatchings/devvif0", RemoveSbusIntcHandler);

INCLUDE_ASM("asm/nonmatchings/devvif0", Interrupt2Iop);

INCLUDE_ASM("asm/nonmatchings/devvif0", SetVTLBRefillHandler);

INCLUDE_ASM("asm/nonmatchings/devvif0", SetVCommonHandler);

INCLUDE_ASM("asm/nonmatchings/devvif0", SetVInterruptHandler);

INCLUDE_ASM("asm/nonmatchings/devvif0", AddIntcHandler);

INCLUDE_ASM("asm/nonmatchings/devvif0", AddIntcHandler2);

INCLUDE_ASM("asm/nonmatchings/devvif0", RemoveIntcHandler);

INCLUDE_ASM("asm/nonmatchings/devvif0", AddDmacHandler);

INCLUDE_ASM("asm/nonmatchings/devvif0", AddDmacHandler2);

INCLUDE_ASM("asm/nonmatchings/devvif0", RemoveDmacHandler);

INCLUDE_ASM("asm/nonmatchings/devvif0", _EnableIntc);

INCLUDE_ASM("asm/nonmatchings/devvif0", _DisableIntc);

INCLUDE_ASM("asm/nonmatchings/devvif0", _EnableDmac);

INCLUDE_ASM("asm/nonmatchings/devvif0", _DisableDmac);

INCLUDE_ASM("asm/nonmatchings/devvif0", SetAlarm);

INCLUDE_ASM("asm/nonmatchings/devvif0", ReleaseAlarm);

INCLUDE_ASM("asm/nonmatchings/devvif0", _iEnableIntc);

INCLUDE_ASM("asm/nonmatchings/devvif0", _iDisableIntc);

INCLUDE_ASM("asm/nonmatchings/devvif0", _iEnableDmac);

INCLUDE_ASM("asm/nonmatchings/devvif0", _iDisableDmac);

INCLUDE_ASM("asm/nonmatchings/devvif0", iSetAlarm);

INCLUDE_ASM("asm/nonmatchings/devvif0", iReleaseAlarm);

INCLUDE_ASM("asm/nonmatchings/devvif0", CreateThread);

INCLUDE_ASM("asm/nonmatchings/devvif0", DeleteThread);

INCLUDE_ASM("asm/nonmatchings/devvif0", StartThread);

INCLUDE_ASM("asm/nonmatchings/devvif0", ExitThread);

INCLUDE_ASM("asm/nonmatchings/devvif0", ExitDeleteThread);

INCLUDE_ASM("asm/nonmatchings/devvif0", TerminateThread);

INCLUDE_ASM("asm/nonmatchings/devvif0", iTerminateThread);

INCLUDE_ASM("asm/nonmatchings/devvif0", DisableDispatchThread);

INCLUDE_ASM("asm/nonmatchings/devvif0", EnableDispatchThread);

INCLUDE_ASM("asm/nonmatchings/devvif0", ChangeThreadPriority);

INCLUDE_ASM("asm/nonmatchings/devvif0", iChangeThreadPriority);

INCLUDE_ASM("asm/nonmatchings/devvif0", RotateThreadReadyQueue);

INCLUDE_ASM("asm/nonmatchings/devvif0", _iRotateThreadReadyQueue);

INCLUDE_ASM("asm/nonmatchings/devvif0", ReleaseWaitThread);

INCLUDE_ASM("asm/nonmatchings/devvif0", iReleaseWaitThread);

INCLUDE_ASM("asm/nonmatchings/devvif0", GetThreadId);

INCLUDE_ASM("asm/nonmatchings/devvif0", ReferThreadStatus);

INCLUDE_ASM("asm/nonmatchings/devvif0", iReferThreadStatus);

INCLUDE_ASM("asm/nonmatchings/devvif0", SleepThread);

INCLUDE_ASM("asm/nonmatchings/devvif0", WakeupThread);

INCLUDE_ASM("asm/nonmatchings/devvif0", _iWakeupThread);

INCLUDE_ASM("asm/nonmatchings/devvif0", CancelWakeupThread);

INCLUDE_ASM("asm/nonmatchings/devvif0", iCancelWakeupThread);

INCLUDE_ASM("asm/nonmatchings/devvif0", SuspendThread);

INCLUDE_ASM("asm/nonmatchings/devvif0", _iSuspendThread);

INCLUDE_ASM("asm/nonmatchings/devvif0", ResumeThread);

INCLUDE_ASM("asm/nonmatchings/devvif0", iResumeThread);

INCLUDE_ASM("asm/nonmatchings/devvif0", JoinThread);

INCLUDE_ASM("asm/nonmatchings/devvif0", RFU060);

INCLUDE_ASM("asm/nonmatchings/devvif0", RFU061);

INCLUDE_ASM("asm/nonmatchings/devvif0", EndOfHeap);

INCLUDE_ASM("asm/nonmatchings/devvif0", RFU063);

INCLUDE_ASM("asm/nonmatchings/devvif0", CreateSema);

INCLUDE_ASM("asm/nonmatchings/devvif0", DeleteSema);

INCLUDE_ASM("asm/nonmatchings/devvif0", SignalSema);

INCLUDE_ASM("asm/nonmatchings/devvif0", iSignalSema);

INCLUDE_ASM("asm/nonmatchings/devvif0", WaitSema);

INCLUDE_ASM("asm/nonmatchings/devvif0", PollSema);

INCLUDE_ASM("asm/nonmatchings/devvif0", iPollSema);

INCLUDE_ASM("asm/nonmatchings/devvif0", ReferSemaStatus);

INCLUDE_ASM("asm/nonmatchings/devvif0", iReferSemaStatus);

INCLUDE_ASM("asm/nonmatchings/devvif0", RFU073);

INCLUDE_ASM("asm/nonmatchings/devvif0", SetOsdConfigParam);

INCLUDE_ASM("asm/nonmatchings/devvif0", GetOsdConfigParam);

INCLUDE_ASM("asm/nonmatchings/devvif0", GetGsHParam);

INCLUDE_ASM("asm/nonmatchings/devvif0", GetGsVParam);

INCLUDE_ASM("asm/nonmatchings/devvif0", SetGsHParam);

INCLUDE_ASM("asm/nonmatchings/devvif0", SetGsVParam);

INCLUDE_ASM("asm/nonmatchings/devvif0", RFU080_CreateEventFlag);

INCLUDE_ASM("asm/nonmatchings/devvif0", RFU081_DeleteEventFlag);

INCLUDE_ASM("asm/nonmatchings/devvif0", RFU082_SetEventFlag);

INCLUDE_ASM("asm/nonmatchings/devvif0", RFU083_iSetEventFlag);

INCLUDE_ASM("asm/nonmatchings/devvif0", RFU084_ClearEventFlag);

INCLUDE_ASM("asm/nonmatchings/devvif0", RFU085_iClearEventFlag);

INCLUDE_ASM("asm/nonmatchings/devvif0", RFU086_WaitEvnetFlag);

INCLUDE_ASM("asm/nonmatchings/devvif0", RFU087_PollEvnetFlag);

INCLUDE_ASM("asm/nonmatchings/devvif0", RFU088_iPollEvnetFlag);

INCLUDE_ASM("asm/nonmatchings/devvif0", RFU089_ReferEventFlagStatus);

INCLUDE_ASM("asm/nonmatchings/devvif0", RFU090_iReferEventFlagStatus);

INCLUDE_ASM("asm/nonmatchings/devvif0", RFU091);

INCLUDE_ASM("asm/nonmatchings/devvif0", EnableIntcHandler);

INCLUDE_ASM("asm/nonmatchings/devvif0", iEnableIntcHandler);

INCLUDE_ASM("asm/nonmatchings/devvif0", DisableIntcHandler);

INCLUDE_ASM("asm/nonmatchings/devvif0", iDisableIntcHandler);

INCLUDE_ASM("asm/nonmatchings/devvif0", EnableDmacHandler);

INCLUDE_ASM("asm/nonmatchings/devvif0", iEnableDmacHandler);

INCLUDE_ASM("asm/nonmatchings/devvif0", DisableDmacHandler);

INCLUDE_ASM("asm/nonmatchings/devvif0", iDisableDmacHandler);

INCLUDE_ASM("asm/nonmatchings/devvif0", KSeg0);

INCLUDE_ASM("asm/nonmatchings/devvif0", EnableCache);

INCLUDE_ASM("asm/nonmatchings/devvif0", DisableCache);

INCLUDE_ASM("asm/nonmatchings/devvif0", GetCop0);

INCLUDE_ASM("asm/nonmatchings/devvif0", FlushCache);

INCLUDE_ASM("asm/nonmatchings/devvif0", CpuConfig);

INCLUDE_ASM("asm/nonmatchings/devvif0", iGetCop0);

INCLUDE_ASM("asm/nonmatchings/devvif0", iFlushCache);

INCLUDE_ASM("asm/nonmatchings/devvif0", iCpuConfig);

INCLUDE_ASM("asm/nonmatchings/devvif0", sceSifStopDma);

INCLUDE_ASM("asm/nonmatchings/devvif0", SetCPUTimerHandler);

INCLUDE_ASM("asm/nonmatchings/devvif0", SetCPUTimer);

INCLUDE_ASM("asm/nonmatchings/devvif0", SetOsdConfigParam2);

INCLUDE_ASM("asm/nonmatchings/devvif0", GetOsdConfigParam2);

INCLUDE_ASM("asm/nonmatchings/devvif0", GsGetIMR);

INCLUDE_ASM("asm/nonmatchings/devvif0", iGsGetIMR);

INCLUDE_ASM("asm/nonmatchings/devvif0", GsPutIMR);

INCLUDE_ASM("asm/nonmatchings/devvif0", iGsPutIMR);

INCLUDE_ASM("asm/nonmatchings/devvif0", SetPgifHandler);

INCLUDE_ASM("asm/nonmatchings/devvif0", SetVSyncFlag);

INCLUDE_ASM("asm/nonmatchings/devvif0", RFU116);

INCLUDE_ASM("asm/nonmatchings/devvif0", _print);

INCLUDE_ASM("asm/nonmatchings/devvif0", sceSifDmaStat);

INCLUDE_ASM("asm/nonmatchings/devvif0", isceSifDmaStat);

INCLUDE_ASM("asm/nonmatchings/devvif0", sceSifSetDma);

INCLUDE_ASM("asm/nonmatchings/devvif0", isceSifSetDma);

INCLUDE_ASM("asm/nonmatchings/devvif0", sceSifSetDChain);

INCLUDE_ASM("asm/nonmatchings/devvif0", isceSifSetDChain);

INCLUDE_ASM("asm/nonmatchings/devvif0", sceSifSetReg);

INCLUDE_ASM("asm/nonmatchings/devvif0", sceSifGetReg);

INCLUDE_ASM("asm/nonmatchings/devvif0", _ExecOSD);

INCLUDE_ASM("asm/nonmatchings/devvif0", Deci2Call);

INCLUDE_ASM("asm/nonmatchings/devvif0", PSMode);

INCLUDE_ASM("asm/nonmatchings/devvif0", MachineType);

INCLUDE_ASM("asm/nonmatchings/devvif0", GetMemorySize);

INCLUDE_ASM("asm/nonmatchings/devvif0", _InitTLB);

INCLUDE_ASM("asm/nonmatchings/devvif0", QueryIntrContext);

INCLUDE_ASM("asm/nonmatchings/devvif0", DisableIntc);

INCLUDE_ASM("asm/nonmatchings/devvif0", EnableIntc);

INCLUDE_ASM("asm/nonmatchings/devvif0", DisableDmac);

INCLUDE_ASM("asm/nonmatchings/devvif0", EnableDmac);

INCLUDE_ASM("asm/nonmatchings/devvif0", iEnableIntc);

INCLUDE_ASM("asm/nonmatchings/devvif0", iDisableIntc);

INCLUDE_ASM("asm/nonmatchings/devvif0", iEnableDmac);

INCLUDE_ASM("asm/nonmatchings/devvif0", iDisableDmac);

INCLUDE_ASM("asm/nonmatchings/devvif0", topThread);

INCLUDE_ASM("asm/nonmatchings/devvif0", InitThread);

INCLUDE_ASM("asm/nonmatchings/devvif0", iWakeupThread);

INCLUDE_ASM("asm/nonmatchings/devvif0", iRotateThreadReadyQueue);

INCLUDE_ASM("asm/nonmatchings/devvif0", iSuspendThread);

INCLUDE_ASM("asm/nonmatchings/devvif0", DelayThread);

INCLUDE_ASM("asm/nonmatchings/devvif0", _DelayThreadHandler);

INCLUDE_ASM("asm/nonmatchings/devvif0", kputchar);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_0027ED60);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_0027EE10);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_0027EE48);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_0027EEE0);

INCLUDE_ASM("asm/nonmatchings/devvif0", _printf);

INCLUDE_ASM("asm/nonmatchings/devvif0", kprintf);

INCLUDE_ASM("asm/nonmatchings/devvif0", scePrintf);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_0027F6D8);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_0027F6F8);

INCLUDE_ASM("asm/nonmatchings/devvif0", sceSifGetSreg);

INCLUDE_ASM("asm/nonmatchings/devvif0", sceSifSetSreg);

INCLUDE_ASM("asm/nonmatchings/devvif0", sceSifGetDataTable);

INCLUDE_ASM("asm/nonmatchings/devvif0", sceSifInitCmd);

INCLUDE_ASM("asm/nonmatchings/devvif0", sceSifExitCmd);

INCLUDE_ASM("asm/nonmatchings/devvif0", sceSifSetCmdBuffer);

INCLUDE_ASM("asm/nonmatchings/devvif0", sceSifSetSysCmdBuffer);

INCLUDE_ASM("asm/nonmatchings/devvif0", sceSifAddCmdHandler);

INCLUDE_ASM("asm/nonmatchings/devvif0", sceSifRemoveCmdHandler);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_0027FB00);

INCLUDE_ASM("asm/nonmatchings/devvif0", sceSifSendCmd);

INCLUDE_ASM("asm/nonmatchings/devvif0", isceSifSendCmd);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_0027FCB8);

INCLUDE_ASM("asm/nonmatchings/devvif0", sceSifWriteBackDCache);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_0027FEAC);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_0027FEB4);

INCLUDE_ASM("asm/nonmatchings/devvif0", sceSifExitRpc);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_00280078);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_00280120);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_00280140);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_00280170);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002801B0);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_00280280);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002802C0);

INCLUDE_ASM("asm/nonmatchings/devvif0", sceSifGetOtherData);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002804E8);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_00280538);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_00280578);

INCLUDE_ASM("asm/nonmatchings/devvif0", sceSifBindRpc);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_00280788);

INCLUDE_ASM("asm/nonmatchings/devvif0", sceSifCallRpc);

INCLUDE_ASM("asm/nonmatchings/devvif0", sceSifCheckStatRpc);

INCLUDE_ASM("asm/nonmatchings/devvif0", sceSifSetRpcQueue);

INCLUDE_ASM("asm/nonmatchings/devvif0", sceSifRegisterRpc);

INCLUDE_ASM("asm/nonmatchings/devvif0", sceSifRemoveRpc);

INCLUDE_ASM("asm/nonmatchings/devvif0", sceSifRemoveRpcQueue);

INCLUDE_ASM("asm/nonmatchings/devvif0", sceSifGetNextRequest);

INCLUDE_ASM("asm/nonmatchings/devvif0", sceSifExecRequest);

INCLUDE_ASM("asm/nonmatchings/devvif0", sceSifRpcLoop);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_00280FA0);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_00281028);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_00281098);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_00281450);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002814A0);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002814D0);

INCLUDE_ASM("asm/nonmatchings/devvif0", scePowerOffHandler);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_00281588);

INCLUDE_ASM("asm/nonmatchings/devvif0", sceFsInit);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002817D8);

INCLUDE_ASM("asm/nonmatchings/devvif0", sceFsReset);

INCLUDE_ASM("asm/nonmatchings/devvif0", sceOpen);

INCLUDE_ASM("asm/nonmatchings/devvif0", sceClose);

INCLUDE_ASM("asm/nonmatchings/devvif0", sceLseek);

INCLUDE_ASM("asm/nonmatchings/devvif0", sceRead);

INCLUDE_ASM("asm/nonmatchings/devvif0", sceWrite);

INCLUDE_ASM("asm/nonmatchings/devvif0", sceIoctl);

INCLUDE_ASM("asm/nonmatchings/devvif0", sceIoctl2);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_00282958);

INCLUDE_ASM("asm/nonmatchings/devvif0", sceRemove);

INCLUDE_ASM("asm/nonmatchings/devvif0", sceMkdir);

INCLUDE_ASM("asm/nonmatchings/devvif0", sceRmdir);

INCLUDE_ASM("asm/nonmatchings/devvif0", sceFormat);

INCLUDE_ASM("asm/nonmatchings/devvif0", sceAddDrv);

INCLUDE_ASM("asm/nonmatchings/devvif0", sceDelDrv);

INCLUDE_ASM("asm/nonmatchings/devvif0", sceDopen);

INCLUDE_ASM("asm/nonmatchings/devvif0", sceDclose);

INCLUDE_ASM("asm/nonmatchings/devvif0", sceDread);

INCLUDE_ASM("asm/nonmatchings/devvif0", sceGetstat);

INCLUDE_ASM("asm/nonmatchings/devvif0", sceChstat);

INCLUDE_ASM("asm/nonmatchings/devvif0", sceRename);

INCLUDE_ASM("asm/nonmatchings/devvif0", sceChdir);

INCLUDE_ASM("asm/nonmatchings/devvif0", sceSync);

INCLUDE_ASM("asm/nonmatchings/devvif0", sceMount);

INCLUDE_ASM("asm/nonmatchings/devvif0", sceUmount);

INCLUDE_ASM("asm/nonmatchings/devvif0", sceLseek64);

INCLUDE_ASM("asm/nonmatchings/devvif0", sceDevctl);

INCLUDE_ASM("asm/nonmatchings/devvif0", sceSymlink);

INCLUDE_ASM("asm/nonmatchings/devvif0", sceReadlink);

INCLUDE_ASM("asm/nonmatchings/devvif0", sceSifInitIopHeap);

INCLUDE_ASM("asm/nonmatchings/devvif0", sceSifAllocIopHeap);

INCLUDE_ASM("asm/nonmatchings/devvif0", sceSifAllocSysMemory);

INCLUDE_ASM("asm/nonmatchings/devvif0", sceSifFreeSysMemory);

INCLUDE_ASM("asm/nonmatchings/devvif0", sceSifFreeIopHeap);

INCLUDE_ASM("asm/nonmatchings/devvif0", sceSifLoadIopHeap);

INCLUDE_ASM("asm/nonmatchings/devvif0", sceSifQueryMemSize);

INCLUDE_ASM("asm/nonmatchings/devvif0", sceSifQueryMaxFreeMemSize);

INCLUDE_ASM("asm/nonmatchings/devvif0", sceSifQueryTotalFreeMemSize);

INCLUDE_ASM("asm/nonmatchings/devvif0", sceSifQueryBlockTopAddress);

INCLUDE_ASM("asm/nonmatchings/devvif0", sceSifQueryBlockSize);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_00284BA8);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_00284CA8);

INCLUDE_ASM("asm/nonmatchings/devvif0", sceSifLoadFileReset);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_00284D70);

INCLUDE_ASM("asm/nonmatchings/devvif0", sceSifStopModule);

INCLUDE_ASM("asm/nonmatchings/devvif0", sceSifUnloadModule);

INCLUDE_ASM("asm/nonmatchings/devvif0", sceSifSearchModuleByName);

INCLUDE_ASM("asm/nonmatchings/devvif0", sceSifSearchModuleByAddress);

INCLUDE_ASM("asm/nonmatchings/devvif0", sceSifLoadModuleBuffer);

INCLUDE_ASM("asm/nonmatchings/devvif0", sceSifLoadStartModuleBuffer);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_00285380);

INCLUDE_ASM("asm/nonmatchings/devvif0", sceSifLoadModule);

INCLUDE_ASM("asm/nonmatchings/devvif0", sceSifLoadStartModule);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002855E8);

INCLUDE_ASM("asm/nonmatchings/devvif0", sceSifLoadElfPart);

INCLUDE_ASM("asm/nonmatchings/devvif0", sceSifLoadElf);

INCLUDE_ASM("asm/nonmatchings/devvif0", sceSifGetIopAddr);

INCLUDE_ASM("asm/nonmatchings/devvif0", sceSifSetIopAddr);

INCLUDE_ASM("asm/nonmatchings/devvif0", sceSifResetIop);

INCLUDE_ASM("asm/nonmatchings/devvif0", sceSifIsAliveIop);

INCLUDE_ASM("asm/nonmatchings/devvif0", sceSifSyncIop);

INCLUDE_ASM("asm/nonmatchings/devvif0", sceSifRebootIop);

INCLUDE_ASM("asm/nonmatchings/devvif0", SetTLBHandler);

INCLUDE_ASM("asm/nonmatchings/devvif0", SetDebugHandler);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_00285CD0);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_00285CE0);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_00285D18);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_00285D28);

INCLUDE_ASM("asm/nonmatchings/devvif0", InitTLBFunctions);

INCLUDE_ASM("asm/nonmatchings/devvif0", PutTLBEntry);

INCLUDE_ASM("asm/nonmatchings/devvif0", iPutTLBEntry);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_00285E20);

INCLUDE_ASM("asm/nonmatchings/devvif0", SetTLBEntry);

INCLUDE_ASM("asm/nonmatchings/devvif0", iSetTLBEntry);

INCLUDE_ASM("asm/nonmatchings/devvif0", GetTLBEntry);

INCLUDE_ASM("asm/nonmatchings/devvif0", iGetTLBEntry);

INCLUDE_ASM("asm/nonmatchings/devvif0", ProbeTLBEntry);

INCLUDE_ASM("asm/nonmatchings/devvif0", iProbeTLBEntry);

INCLUDE_ASM("asm/nonmatchings/devvif0", ExpandScratchPad);

INCLUDE_ASM("asm/nonmatchings/devvif0", InitTLB);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_00285F00);

INCLUDE_ASM("asm/nonmatchings/devvif0", _kTLBException);

INCLUDE_ASM("asm/nonmatchings/devvif0", _kExitTLBHandler);

INCLUDE_ASM("asm/nonmatchings/devvif0", _kDebugException);

INCLUDE_ASM("asm/nonmatchings/devvif0", DIntr);

INCLUDE_ASM("asm/nonmatchings/devvif0", EIntr);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002864D0);

INCLUDE_ASM("asm/nonmatchings/devvif0", __sceKernlGetEhSemaId);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_00286528);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_00286538);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_00286570);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002865B0);

INCLUDE_ASM("asm/nonmatchings/devvif0", GetSystemCallEntry);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002865F8);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002866F8);

INCLUDE_ASM("asm/nonmatchings/devvif0", _InitSys);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_00286760);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_00286770);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_00286780);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002867B8);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002867C8);

INCLUDE_ASM("asm/nonmatchings/devvif0", InitExecPS2);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002868E0);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002868F0);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_00286920);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_00286930);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_00286A48);

INCLUDE_ASM("asm/nonmatchings/devvif0", ExecPS2);

INCLUDE_ASM("asm/nonmatchings/devvif0", LoadExecPS2);

INCLUDE_ASM("asm/nonmatchings/devvif0", Exit);

INCLUDE_ASM("asm/nonmatchings/devvif0", ExecOSD);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_00286B80);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_00286B90);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_00286BA0);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_00286BD8);

INCLUDE_ASM("asm/nonmatchings/devvif0", InitAlarm);

INCLUDE_ASM("asm/nonmatchings/devvif0", SetT2);

INCLUDE_ASM("asm/nonmatchings/devvif0", SetT2_COUNT);

INCLUDE_ASM("asm/nonmatchings/devvif0", SetT2_MODE);

INCLUDE_ASM("asm/nonmatchings/devvif0", SetT2_COMP);

INCLUDE_ASM("asm/nonmatchings/devvif0", InitTimer);

INCLUDE_ASM("asm/nonmatchings/devvif0", EndTimer);

INCLUDE_ASM("asm/nonmatchings/devvif0", GetTimerPreScaleFactor);

INCLUDE_ASM("asm/nonmatchings/devvif0", StartTimerSystemTime);

INCLUDE_ASM("asm/nonmatchings/devvif0", StopTimerSystemTime);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002870B0);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_00287240);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002872C8);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_00287300);

INCLUDE_ASM("asm/nonmatchings/devvif0", iGetTimerSystemTime);

INCLUDE_ASM("asm/nonmatchings/devvif0", GetTimerSystemTime);

INCLUDE_ASM("asm/nonmatchings/devvif0", iAllocTimerCounter);

INCLUDE_ASM("asm/nonmatchings/devvif0", AllocTimerCounter);

INCLUDE_ASM("asm/nonmatchings/devvif0", iFreeTimerCounter);

INCLUDE_ASM("asm/nonmatchings/devvif0", FreeTimerCounter);

INCLUDE_ASM("asm/nonmatchings/devvif0", iGetTimerUsedUnusedCounters);

INCLUDE_ASM("asm/nonmatchings/devvif0", GetTimerUsedUnusedCounters);

INCLUDE_ASM("asm/nonmatchings/devvif0", iStartTimerCounter);

INCLUDE_ASM("asm/nonmatchings/devvif0", StartTimerCounter);

INCLUDE_ASM("asm/nonmatchings/devvif0", iStopTimerCounter);

INCLUDE_ASM("asm/nonmatchings/devvif0", StopTimerCounter);

INCLUDE_ASM("asm/nonmatchings/devvif0", SetTimerCount);

INCLUDE_ASM("asm/nonmatchings/devvif0", iGetTimerBaseTime);

INCLUDE_ASM("asm/nonmatchings/devvif0", GetTimerBaseTime);

INCLUDE_ASM("asm/nonmatchings/devvif0", iGetTimerCount);

INCLUDE_ASM("asm/nonmatchings/devvif0", GetTimerCount);

INCLUDE_ASM("asm/nonmatchings/devvif0", iSetTimerHandler);

INCLUDE_ASM("asm/nonmatchings/devvif0", SetTimerHandler);

INCLUDE_ASM("asm/nonmatchings/devvif0", TimerBusClock2USec);

INCLUDE_ASM("asm/nonmatchings/devvif0", TimerUSec2BusClock);

INCLUDE_ASM("asm/nonmatchings/devvif0", TimerBusClock2Freq);

INCLUDE_ASM("asm/nonmatchings/devvif0", TimerFreq2BusClock);

INCLUDE_ASM("asm/nonmatchings/devvif0", _InitAlarm);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_00288078);

INCLUDE_ASM("asm/nonmatchings/devvif0", SetTimerAlarm);

INCLUDE_ASM("asm/nonmatchings/devvif0", iSetTimerAlarm);

INCLUDE_ASM("asm/nonmatchings/devvif0", ReleaseTimerAlarm);

INCLUDE_ASM("asm/nonmatchings/devvif0", iReleaseTimerAlarm);

INCLUDE_ASM("asm/nonmatchings/devvif0", sceSifInitRebootNotify);

INCLUDE_ASM("asm/nonmatchings/devvif0", sceSifSetRebootNotifyBuffer);

INCLUDE_ASM("asm/nonmatchings/devvif0", sceSifAddRebootNotifyHandler);

INCLUDE_ASM("asm/nonmatchings/devvif0", sceSifRemoveRebootNotifyHandler);

INCLUDE_ASM("asm/nonmatchings/devvif0", sceSifExecNotifyHandler);

INCLUDE_ASM("asm/nonmatchings/devvif0", sceResetttyinit);

INCLUDE_ASM("asm/nonmatchings/devvif0", VSync);

INCLUDE_ASM("asm/nonmatchings/devvif0", VSync2);

INCLUDE_ASM("asm/nonmatchings/devvif0", write);

INCLUDE_ASM("asm/nonmatchings/devvif0", read);

INCLUDE_ASM("asm/nonmatchings/devvif0", open);

INCLUDE_ASM("asm/nonmatchings/devvif0", close);

INCLUDE_ASM("asm/nonmatchings/devvif0", ioctl);

INCLUDE_ASM("asm/nonmatchings/devvif0", lseek);

INCLUDE_ASM("asm/nonmatchings/devvif0", sbrk);

INCLUDE_ASM("asm/nonmatchings/devvif0", isatty);

INCLUDE_ASM("asm/nonmatchings/devvif0", fstat);

INCLUDE_ASM("asm/nonmatchings/devvif0", getpid);

INCLUDE_ASM("asm/nonmatchings/devvif0", kill);

INCLUDE_ASM("asm/nonmatchings/devvif0", stat);

INCLUDE_ASM("asm/nonmatchings/devvif0", unlink);

INCLUDE_ASM("asm/nonmatchings/devvif0", sceDeci2Open);

INCLUDE_ASM("asm/nonmatchings/devvif0", sceDeci2Close);

INCLUDE_ASM("asm/nonmatchings/devvif0", sceDeci2ReqSend);

INCLUDE_ASM("asm/nonmatchings/devvif0", sceDeci2Poll);

INCLUDE_ASM("asm/nonmatchings/devvif0", sceDeci2GrpOpen);

INCLUDE_ASM("asm/nonmatchings/devvif0", sceDeci2GrpClose);

INCLUDE_ASM("asm/nonmatchings/devvif0", sceDeci2ExRecv);

INCLUDE_ASM("asm/nonmatchings/devvif0", sceDeci2ExSend);

INCLUDE_ASM("asm/nonmatchings/devvif0", sceDeci2ExReqSend);

INCLUDE_ASM("asm/nonmatchings/devvif0", sceDeci2ExLock);

INCLUDE_ASM("asm/nonmatchings/devvif0", sceDeci2ExUnLock);

INCLUDE_ASM("asm/nonmatchings/devvif0", kputs);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_00288C80);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_00288CA8);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_00288CE8);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_00288D28);

INCLUDE_ASM("asm/nonmatchings/devvif0", sceTtyWrite);

INCLUDE_ASM("asm/nonmatchings/devvif0", sceTtyRead);

INCLUDE_ASM("asm/nonmatchings/devvif0", sceTtyInit);

INCLUDE_ASM("asm/nonmatchings/devvif0", sceGifPkInit);

INCLUDE_ASM("asm/nonmatchings/devvif0", sceGifPkReset);

INCLUDE_ASM("asm/nonmatchings/devvif0", sceGifPkTerminate);

INCLUDE_ASM("asm/nonmatchings/devvif0", sceGifPkCnt);

INCLUDE_ASM("asm/nonmatchings/devvif0", sceGifPkEnd);

INCLUDE_ASM("asm/nonmatchings/devvif0", sceGifPkCloseGifTag);

INCLUDE_ASM("asm/nonmatchings/devvif0", sceGifPkAddGsData);

INCLUDE_ASM("asm/nonmatchings/devvif0", sceVif1PkInit);

INCLUDE_ASM("asm/nonmatchings/devvif0", sceVif1PkReset);

INCLUDE_ASM("asm/nonmatchings/devvif0", sceVif1PkTerminate);

INCLUDE_ASM("asm/nonmatchings/devvif0", sceVif1PkCnt);

INCLUDE_ASM("asm/nonmatchings/devvif0", sceVif1PkEnd);

INCLUDE_ASM("asm/nonmatchings/devvif0", sceVif1PkOpenDirectCode);

INCLUDE_ASM("asm/nonmatchings/devvif0", sceVif1PkCloseDirectCode);

INCLUDE_ASM("asm/nonmatchings/devvif0", sceVif1PkOpenGifTag);

INCLUDE_ASM("asm/nonmatchings/devvif0", sceVif1PkCloseGifTag);

INCLUDE_ASM("asm/nonmatchings/devvif0", sceVif1PkReserve);

INCLUDE_ASM("asm/nonmatchings/devvif0", sceVif1PkAlign);

INCLUDE_ASM("asm/nonmatchings/devvif0", sceVu0ApplyMatrix);

INCLUDE_ASM("asm/nonmatchings/devvif0", sceVu0MulMatrix);

INCLUDE_ASM("asm/nonmatchings/devvif0", sceVu0OuterProduct);

INCLUDE_ASM("asm/nonmatchings/devvif0", sceVu0InnerProduct);

INCLUDE_ASM("asm/nonmatchings/devvif0", sceVu0Normalize);

INCLUDE_ASM("asm/nonmatchings/devvif0", sceVu0TransposeMatrix);

INCLUDE_ASM("asm/nonmatchings/devvif0", sceVu0InversMatrix);

INCLUDE_ASM("asm/nonmatchings/devvif0", sceVu0DivVector);

INCLUDE_ASM("asm/nonmatchings/devvif0", sceVu0DivVectorXYZ);

INCLUDE_ASM("asm/nonmatchings/devvif0", sceVu0InterVector);

INCLUDE_ASM("asm/nonmatchings/devvif0", sceVu0AddVector);

INCLUDE_ASM("asm/nonmatchings/devvif0", sceVu0SubVector);

INCLUDE_ASM("asm/nonmatchings/devvif0", sceVu0MulVector);

INCLUDE_ASM("asm/nonmatchings/devvif0", sceVu0ScaleVector);

INCLUDE_ASM("asm/nonmatchings/devvif0", sceVu0TransMatrix);

INCLUDE_ASM("asm/nonmatchings/devvif0", sceVu0CopyVector);

INCLUDE_ASM("asm/nonmatchings/devvif0", sceVu0CopyMatrix);

INCLUDE_ASM("asm/nonmatchings/devvif0", sceVu0FTOI4Vector);

INCLUDE_ASM("asm/nonmatchings/devvif0", sceVu0FTOI0Vector);

INCLUDE_ASM("asm/nonmatchings/devvif0", sceVu0ITOF4Vector);

INCLUDE_ASM("asm/nonmatchings/devvif0", sceVu0ITOF0Vector);

INCLUDE_ASM("asm/nonmatchings/devvif0", sceVu0UnitMatrix);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_0028A088);

INCLUDE_ASM("asm/nonmatchings/devvif0", sceVu0RotMatrixZ);

INCLUDE_ASM("asm/nonmatchings/devvif0", sceVu0RotMatrixX);

INCLUDE_ASM("asm/nonmatchings/devvif0", sceVu0RotMatrixY);

INCLUDE_ASM("asm/nonmatchings/devvif0", sceVu0RotMatrix);

INCLUDE_ASM("asm/nonmatchings/devvif0", sceVu0ClampVector);

INCLUDE_ASM("asm/nonmatchings/devvif0", sceVu0CameraMatrix);

INCLUDE_ASM("asm/nonmatchings/devvif0", sceVu0NormalLightMatrix);

INCLUDE_ASM("asm/nonmatchings/devvif0", sceVu0LightColorMatrix);

INCLUDE_ASM("asm/nonmatchings/devvif0", sceVu0ViewScreenMatrix);

INCLUDE_ASM("asm/nonmatchings/devvif0", sceVu0DropShadowMatrix);

INCLUDE_ASM("asm/nonmatchings/devvif0", sceVu0RotTransPersN);

INCLUDE_ASM("asm/nonmatchings/devvif0", sceVu0RotTransPers);

INCLUDE_ASM("asm/nonmatchings/devvif0", sceVu0CopyVectorXYZ);

INCLUDE_ASM("asm/nonmatchings/devvif0", sceVu0InterVectorXYZ);

INCLUDE_ASM("asm/nonmatchings/devvif0", sceVu0ScaleVectorXYZ);

INCLUDE_ASM("asm/nonmatchings/devvif0", sceVu0ClipScreen);

INCLUDE_ASM("asm/nonmatchings/devvif0", sceVu0ClipScreen3);

INCLUDE_ASM("asm/nonmatchings/devvif0", sceVu0ClipAll);

INCLUDE_ASM("asm/nonmatchings/devvif0", sceVpu0Reset);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_0028AE50);

INCLUDE_ASM("asm/nonmatchings/devvif0", scePadInit);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_0028B0A8);

INCLUDE_ASM("asm/nonmatchings/devvif0", scePadEnd);

INCLUDE_ASM("asm/nonmatchings/devvif0", scePadPortOpen);

INCLUDE_ASM("asm/nonmatchings/devvif0", scePadPortClose);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_0028B468);

INCLUDE_ASM("asm/nonmatchings/devvif0", scePadGetFrameCount);

INCLUDE_ASM("asm/nonmatchings/devvif0", scePadRead);

INCLUDE_ASM("asm/nonmatchings/devvif0", scePadGetState);

INCLUDE_ASM("asm/nonmatchings/devvif0", scePadStateIntToStr);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_0028B730);

INCLUDE_ASM("asm/nonmatchings/devvif0", scePadGetReqState);

INCLUDE_ASM("asm/nonmatchings/devvif0", scePadReqIntToStr);

INCLUDE_ASM("asm/nonmatchings/devvif0", scePadInfoAct);

INCLUDE_ASM("asm/nonmatchings/devvif0", scePadInfoComb);

INCLUDE_ASM("asm/nonmatchings/devvif0", scePadInfoMode);

INCLUDE_ASM("asm/nonmatchings/devvif0", scePadSetMainMode);

INCLUDE_ASM("asm/nonmatchings/devvif0", scePadSetActDirect);

INCLUDE_ASM("asm/nonmatchings/devvif0", scePadSetActAlign);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_0028BDE8);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_0028BEA0);

INCLUDE_ASM("asm/nonmatchings/devvif0", scePadInfoPressMode);

INCLUDE_ASM("asm/nonmatchings/devvif0", scePadEnterPressMode);

INCLUDE_ASM("asm/nonmatchings/devvif0", scePadExitPressMode);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_0028C060);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_0028C130);

INCLUDE_ASM("asm/nonmatchings/devvif0", scePadGetSlotMax);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_0028C200);

INCLUDE_ASM("asm/nonmatchings/devvif0", scePadSetWarningLevel);

INCLUDE_ASM("asm/nonmatchings/devvif0", sceMcInit);

INCLUDE_ASM("asm/nonmatchings/devvif0", sceMcEnd);

INCLUDE_ASM("asm/nonmatchings/devvif0", _lmcGetClientPtr);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_0028C520);

INCLUDE_ASM("asm/nonmatchings/devvif0", sceMcChangeThreadPriority);

INCLUDE_ASM("asm/nonmatchings/devvif0", sceMcGetSlotMax);

INCLUDE_ASM("asm/nonmatchings/devvif0", sceMcOpen);

INCLUDE_ASM("asm/nonmatchings/devvif0", sceMcMkdir);

INCLUDE_ASM("asm/nonmatchings/devvif0", sceMcClose);

INCLUDE_ASM("asm/nonmatchings/devvif0", sceMcSeek);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_0028C9B8);

INCLUDE_ASM("asm/nonmatchings/devvif0", sceMcRead);

INCLUDE_ASM("asm/nonmatchings/devvif0", sceMcWrite);

INCLUDE_ASM("asm/nonmatchings/devvif0", sceMcSync);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_0028CDA8);

INCLUDE_ASM("asm/nonmatchings/devvif0", sceMcGetInfo);

INCLUDE_ASM("asm/nonmatchings/devvif0", sceMcUdCheckNewCard);

INCLUDE_ASM("asm/nonmatchings/devvif0", sceMcGetDir);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_0028D140);

INCLUDE_ASM("asm/nonmatchings/devvif0", sceMcChdir);

INCLUDE_ASM("asm/nonmatchings/devvif0", sceMcFormat);

INCLUDE_ASM("asm/nonmatchings/devvif0", sceMcDelete);

INCLUDE_ASM("asm/nonmatchings/devvif0", sceMcFlush);

INCLUDE_ASM("asm/nonmatchings/devvif0", sceMcSetFileInfo);

INCLUDE_ASM("asm/nonmatchings/devvif0", sceMcRename);

INCLUDE_ASM("asm/nonmatchings/devvif0", sceMcUnformat);

INCLUDE_ASM("asm/nonmatchings/devvif0", sceMcGetEntSpace);

INCLUDE_ASM("asm/nonmatchings/devvif0", sceGsResetGraph);

INCLUDE_ASM("asm/nonmatchings/devvif0", sceGsGetGParam);

INCLUDE_ASM("asm/nonmatchings/devvif0", sceGsResetPath);

INCLUDE_ASM("asm/nonmatchings/devvif0", sceGsSetDefDBuff);

INCLUDE_ASM("asm/nonmatchings/devvif0", sceGsSyncV);

INCLUDE_ASM("asm/nonmatchings/devvif0", sceGsSyncPath);

INCLUDE_ASM("asm/nonmatchings/devvif0", sceGsSetDefAlphaEnv);

INCLUDE_ASM("asm/nonmatchings/devvif0", sceGsSetDefLoadImage);

INCLUDE_ASM("asm/nonmatchings/devvif0", sceGsSetDefStoreImage);

INCLUDE_ASM("asm/nonmatchings/devvif0", sceGsExecLoadImage);

INCLUDE_ASM("asm/nonmatchings/devvif0", sceGsSyncVCallback);

INCLUDE_ASM("asm/nonmatchings/devvif0", sceGsPutIMR);

INCLUDE_ASM("asm/nonmatchings/devvif0", sceGsSetHalfOffset);

INCLUDE_ASM("asm/nonmatchings/devvif0", sceGsGetIMR);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_0028E9B0);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_0028EA50);

INCLUDE_ASM("asm/nonmatchings/devvif0", sceGsSetDefDispEnv);

INCLUDE_ASM("asm/nonmatchings/devvif0", sceGszbufaddr);

INCLUDE_ASM("asm/nonmatchings/devvif0", sceGsSetDefDrawEnv);

INCLUDE_ASM("asm/nonmatchings/devvif0", sceGsSetDefClear);

INCLUDE_ASM("asm/nonmatchings/devvif0", _type2id);

INCLUDE_ASM("asm/nonmatchings/devvif0", _id2type);

INCLUDE_ASM("asm/nonmatchings/devvif0", sceMpegDemuxPssRing);

INCLUDE_ASM("asm/nonmatchings/devvif0", sceMpegDemuxPss);

INCLUDE_ASM("asm/nonmatchings/devvif0", sceMpegAddStrCallback);

INCLUDE_ASM("asm/nonmatchings/devvif0", _pack_header);

INCLUDE_ASM("asm/nonmatchings/devvif0", _system_header);

INCLUDE_ASM("asm/nonmatchings/devvif0", _PES_packet);

INCLUDE_ASM("asm/nonmatchings/devvif0", sceMpegInit);

INCLUDE_ASM("asm/nonmatchings/devvif0", sceMpegCreate);

INCLUDE_ASM("asm/nonmatchings/devvif0", sceMpegDelete);

INCLUDE_ASM("asm/nonmatchings/devvif0", sceMpegAddBs);

INCLUDE_ASM("asm/nonmatchings/devvif0", sceMpegGetPicture);

INCLUDE_ASM("asm/nonmatchings/devvif0", sceMpegGetPictureRAW8);

INCLUDE_ASM("asm/nonmatchings/devvif0", sceMpegGetPictureRAW8xy);

INCLUDE_ASM("asm/nonmatchings/devvif0", sceMpegGetPictureAbort);

INCLUDE_ASM("asm/nonmatchings/devvif0", sceMpegSetDecodeMode);

INCLUDE_ASM("asm/nonmatchings/devvif0", sceMpegGetDecodeMode);

INCLUDE_ASM("asm/nonmatchings/devvif0", sceMpegIsEnd);

INCLUDE_ASM("asm/nonmatchings/devvif0", sceMpegIsRefBuffEmpty);

INCLUDE_ASM("asm/nonmatchings/devvif0", sceMpegReset);

INCLUDE_ASM("asm/nonmatchings/devvif0", sceMpegClearRefBuff);

INCLUDE_ASM("asm/nonmatchings/devvif0", sceMpegAddCallback);

INCLUDE_ASM("asm/nonmatchings/devvif0", _dispatchMpegCallback);

INCLUDE_ASM("asm/nonmatchings/devvif0", _dispatchMpegCbNodata);

INCLUDE_ASM("asm/nonmatchings/devvif0", sceMpegSetDefaultPtsGap);

INCLUDE_ASM("asm/nonmatchings/devvif0", sceMpegResetDefaultPtsGap);

INCLUDE_ASM("asm/nonmatchings/devvif0", sceMpegSetImageBuff);

INCLUDE_ASM("asm/nonmatchings/devvif0", sceMpegDispWidth);

INCLUDE_ASM("asm/nonmatchings/devvif0", sceMpegDispHeight);

INCLUDE_ASM("asm/nonmatchings/devvif0", sceMpegDispCenterOffX);

INCLUDE_ASM("asm/nonmatchings/devvif0", sceMpegDispCenterOffY);

INCLUDE_ASM("asm/nonmatchings/devvif0", sceSetBrokenLink);

INCLUDE_ASM("asm/nonmatchings/devvif0", sceSetPtm);

INCLUDE_ASM("asm/nonmatchings/devvif0", _alalcInit);

INCLUDE_ASM("asm/nonmatchings/devvif0", _alalcSetDynamic);

INCLUDE_ASM("asm/nonmatchings/devvif0", _alalcFree);

INCLUDE_ASM("asm/nonmatchings/devvif0", _alalcAlloc);

INCLUDE_ASM("asm/nonmatchings/devvif0", _alalcRest);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002906F8);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002908B0);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002909D0);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_00290A18);

INCLUDE_ASM("asm/nonmatchings/devvif0", _sceMpegFlush);

INCLUDE_ASM("asm/nonmatchings/devvif0", _initSeqAgain);

INCLUDE_ASM("asm/nonmatchings/devvif0", _lastFrame);

INCLUDE_ASM("asm/nonmatchings/devvif0", _clearOnce);

INCLUDE_ASM("asm/nonmatchings/devvif0", _clearEach);

INCLUDE_ASM("asm/nonmatchings/devvif0", _ErrMessage);

INCLUDE_ASM("asm/nonmatchings/devvif0", _Error1);

INCLUDE_ASM("asm/nonmatchings/devvif0", _Error);

INCLUDE_ASM("asm/nonmatchings/devvif0", _sendDataToIPU);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_00290F50);

INCLUDE_ASM("asm/nonmatchings/devvif0", _sequenceHeader);

INCLUDE_ASM("asm/nonmatchings/devvif0", _initSeq);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_00291340);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_00291420);

INCLUDE_ASM("asm/nonmatchings/devvif0", _sequenceExtension);

INCLUDE_ASM("asm/nonmatchings/devvif0", _sequenceDisplayExtension);

INCLUDE_ASM("asm/nonmatchings/devvif0", _sequenceScalableExtension);

INCLUDE_ASM("asm/nonmatchings/devvif0", _unknown_extension);

INCLUDE_ASM("asm/nonmatchings/devvif0", _pictureSpatialScalableExtension);

INCLUDE_ASM("asm/nonmatchings/devvif0", _pictureTemporalScalableExtension);

INCLUDE_ASM("asm/nonmatchings/devvif0", _defStopDMA);

INCLUDE_ASM("asm/nonmatchings/devvif0", _defRestartDMA);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_00291750);

INCLUDE_ASM("asm/nonmatchings/devvif0", _getAllRefs);

INCLUDE_ASM("asm/nonmatchings/devvif0", _getRef0);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002924C8);

INCLUDE_ASM("asm/nonmatchings/devvif0", _rix_000);

INCLUDE_ASM("asm/nonmatchings/devvif0", _ri0_000);

INCLUDE_ASM("asm/nonmatchings/devvif0", _rix_001);

INCLUDE_ASM("asm/nonmatchings/devvif0", _ri0_001);

INCLUDE_ASM("asm/nonmatchings/devvif0", _rix_010);

INCLUDE_ASM("asm/nonmatchings/devvif0", _ri0_010);

INCLUDE_ASM("asm/nonmatchings/devvif0", _rix_011);

INCLUDE_ASM("asm/nonmatchings/devvif0", _ri0_011);

INCLUDE_ASM("asm/nonmatchings/devvif0", _rix_100);

INCLUDE_ASM("asm/nonmatchings/devvif0", _ri0_100);

INCLUDE_ASM("asm/nonmatchings/devvif0", _rix_101);

INCLUDE_ASM("asm/nonmatchings/devvif0", _ri0_101);

INCLUDE_ASM("asm/nonmatchings/devvif0", _rix_110);

INCLUDE_ASM("asm/nonmatchings/devvif0", _ri0_110);

INCLUDE_ASM("asm/nonmatchings/devvif0", _rix_111);

INCLUDE_ASM("asm/nonmatchings/devvif0", _ri0_111);

INCLUDE_ASM("asm/nonmatchings/devvif0", _copyAddRefImage);

INCLUDE_ASM("asm/nonmatchings/devvif0", _copyRefImage);

INCLUDE_ASM("asm/nonmatchings/devvif0", _ipuSetMPEG1);

INCLUDE_ASM("asm/nonmatchings/devvif0", _waitBdecOut);

INCLUDE_ASM("asm/nonmatchings/devvif0", _dmVector);

INCLUDE_ASM("asm/nonmatchings/devvif0", _dualPrimeVector);

INCLUDE_ASM("asm/nonmatchings/devvif0", _mbAddressIncrement);

INCLUDE_ASM("asm/nonmatchings/devvif0", _pictureData0);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_00293B28);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_00293C58);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_00293E58);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_00293F18);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002943C0);

INCLUDE_ASM("asm/nonmatchings/devvif0", _motionVectors);

INCLUDE_ASM("asm/nonmatchings/devvif0", _motionVector);

INCLUDE_ASM("asm/nonmatchings/devvif0", _sendIpuCommand);

INCLUDE_ASM("asm/nonmatchings/devvif0", _waitIpuIdle);

INCLUDE_ASM("asm/nonmatchings/devvif0", _waitIpuIdle64);

INCLUDE_ASM("asm/nonmatchings/devvif0", _ipuVdec);

INCLUDE_ASM("asm/nonmatchings/devvif0", _peepBit);

INCLUDE_ASM("asm/nonmatchings/devvif0", _flushBuf);

INCLUDE_ASM("asm/nonmatchings/devvif0", _nextBit);

INCLUDE_ASM("asm/nonmatchings/devvif0", _nextStartCode);

INCLUDE_ASM("asm/nonmatchings/devvif0", _sliceB);

INCLUDE_ASM("asm/nonmatchings/devvif0", _nextHeader);

INCLUDE_ASM("asm/nonmatchings/devvif0", _pictureHeader);

INCLUDE_ASM("asm/nonmatchings/devvif0", _extensionAndUserData);

INCLUDE_ASM("asm/nonmatchings/devvif0", _pictureCodingExtension);

INCLUDE_ASM("asm/nonmatchings/devvif0", _extrainfo);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_00295698);

INCLUDE_ASM("asm/nonmatchings/devvif0", _groupOfPicturesHeader);

INCLUDE_ASM("asm/nonmatchings/devvif0", _quantMatrixExtension);

INCLUDE_ASM("asm/nonmatchings/devvif0", _pictureDisplayExtension);

INCLUDE_ASM("asm/nonmatchings/devvif0", _copyrightExtension);

INCLUDE_ASM("asm/nonmatchings/devvif0", _decPicture);

INCLUDE_ASM("asm/nonmatchings/devvif0", _outputFrame);

INCLUDE_ASM("asm/nonmatchings/devvif0", _updateRefImage);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_00295E18);

INCLUDE_ASM("asm/nonmatchings/devvif0", _cpr8);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_00296148);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_00296170);

INCLUDE_ASM("asm/nonmatchings/devvif0", _dispRefImage);

INCLUDE_ASM("asm/nonmatchings/devvif0", _dispRefImageField);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002965B0);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_00296720);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002967A8);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002968D0);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_00296A18);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_00296BD8);

INCLUDE_ASM("asm/nonmatchings/devvif0", _csc_storeRefImage);

INCLUDE_ASM("asm/nonmatchings/devvif0", _sysbitInit);

INCLUDE_ASM("asm/nonmatchings/devvif0", _sysbitNext);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_00296F90);

INCLUDE_ASM("asm/nonmatchings/devvif0", _sysbitGet);

INCLUDE_ASM("asm/nonmatchings/devvif0", _sysbitMarker);

INCLUDE_ASM("asm/nonmatchings/devvif0", _sysbitJump);

INCLUDE_ASM("asm/nonmatchings/devvif0", _sysbitPtr);

INCLUDE_ASM("asm/nonmatchings/devvif0", sceSdRemoteInit);

INCLUDE_ASM("asm/nonmatchings/devvif0", sceSdTransToIOP);

INCLUDE_ASM("asm/nonmatchings/devvif0", sceSdCallBack);

INCLUDE_ASM("asm/nonmatchings/devvif0", sceSdRemote);

INCLUDE_ASM("asm/nonmatchings/devvif0", sceSdRemoteCallbackInit);

INCLUDE_ASM("asm/nonmatchings/devvif0", sceSdRemoteCallbackQuit);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_00297850);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002978C0);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002979B8);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_00297A30);

INCLUDE_ASM("asm/nonmatchings/devvif0", sceIpuStopDMA);

INCLUDE_ASM("asm/nonmatchings/devvif0", sceIpuRestartDMA);

INCLUDE_ASM("asm/nonmatchings/devvif0", sceIpuSync);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_00297D48);

INCLUDE_ASM("asm/nonmatchings/devvif0", sceIpuInit);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_00297FF8);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_00298068);

INCLUDE_ASM("asm/nonmatchings/devvif0", sceScfGetLanguage);

INCLUDE_ASM("asm/nonmatchings/devvif0", sceScfSetT10kConfig);

INCLUDE_ASM("asm/nonmatchings/devvif0", sceScfGetAspect);

INCLUDE_ASM("asm/nonmatchings/devvif0", sceScfGetSpdif);

INCLUDE_ASM("asm/nonmatchings/devvif0", sceScfGetTimeZone);

INCLUDE_ASM("asm/nonmatchings/devvif0", sceScfGetDateNotation);

INCLUDE_ASM("asm/nonmatchings/devvif0", sceScfGetSummerTime);

INCLUDE_ASM("asm/nonmatchings/devvif0", sceScfGetTimeNotation);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_00298330);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_00298360);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_00298380);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002983E8);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_00298450);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_00298508);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002985B0);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002985E0);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_00298608);

INCLUDE_ASM("asm/nonmatchings/devvif0", sceScfGetGMTfromRTC);

INCLUDE_ASM("asm/nonmatchings/devvif0", sceScfGetLocalTimefromRTC);

INCLUDE_ASM("asm/nonmatchings/devvif0", isnan);

INCLUDE_ASM("asm/nonmatchings/devvif0", atanf);

INCLUDE_ASM("asm/nonmatchings/devvif0", cosf);

INCLUDE_ASM("asm/nonmatchings/devvif0", fabsf);

INCLUDE_ASM("asm/nonmatchings/devvif0", finitef);

INCLUDE_ASM("asm/nonmatchings/devvif0", isinff);

INCLUDE_ASM("asm/nonmatchings/devvif0", isnanf);

INCLUDE_ASM("asm/nonmatchings/devvif0", sinf);

INCLUDE_ASM("asm/nonmatchings/devvif0", tanf);

INCLUDE_ASM("asm/nonmatchings/devvif0", acosf);

INCLUDE_ASM("asm/nonmatchings/devvif0", atan2f);

INCLUDE_ASM("asm/nonmatchings/devvif0", fmodf);

INCLUDE_ASM("asm/nonmatchings/devvif0", logf);

INCLUDE_ASM("asm/nonmatchings/devvif0", powf);

INCLUDE_ASM("asm/nonmatchings/devvif0", sqrtf);

INCLUDE_ASM("asm/nonmatchings/devvif0", __ieee754_acosf);

INCLUDE_ASM("asm/nonmatchings/devvif0", __ieee754_atan2f);

INCLUDE_ASM("asm/nonmatchings/devvif0", __ieee754_fmodf);

INCLUDE_ASM("asm/nonmatchings/devvif0", __ieee754_logf);

INCLUDE_ASM("asm/nonmatchings/devvif0", __ieee754_powf);

INCLUDE_ASM("asm/nonmatchings/devvif0", __ieee754_rem_pio2f);

INCLUDE_ASM("asm/nonmatchings/devvif0", __ieee754_sqrtf);

INCLUDE_ASM("asm/nonmatchings/devvif0", __kernel_cosf);

INCLUDE_ASM("asm/nonmatchings/devvif0", __kernel_rem_pio2f);

INCLUDE_ASM("asm/nonmatchings/devvif0", __kernel_sinf);

INCLUDE_ASM("asm/nonmatchings/devvif0", __kernel_tanf);

INCLUDE_ASM("asm/nonmatchings/devvif0", floorf);

INCLUDE_ASM("asm/nonmatchings/devvif0", scalbnf);

INCLUDE_ASM("asm/nonmatchings/devvif0", copysignf);

INCLUDE_ASM("asm/nonmatchings/devvif0", __muldi3);

INCLUDE_ASM("asm/nonmatchings/devvif0", __divdi3);

INCLUDE_ASM("asm/nonmatchings/devvif0", __moddi3);

INCLUDE_ASM("asm/nonmatchings/devvif0", __udivdi3);

INCLUDE_ASM("asm/nonmatchings/devvif0", __umoddi3);

INCLUDE_ASM("asm/nonmatchings/devvif0", __floatdisf);

INCLUDE_ASM("asm/nonmatchings/devvif0", __fixunsdfdi);

INCLUDE_ASM("asm/nonmatchings/devvif0", __fixunssfdi);

INCLUDE_ASM("asm/nonmatchings/devvif0", __fixsfdi);

INCLUDE_ASM("asm/nonmatchings/devvif0", __do_global_dtors);

INCLUDE_ASM("asm/nonmatchings/devvif0", __do_global_ctors);

INCLUDE_ASM("asm/nonmatchings/devvif0", __main);

INCLUDE_ASM("asm/nonmatchings/devvif0", __pure_virtual);

INCLUDE_ASM("asm/nonmatchings/devvif0", __default_terminate);

INCLUDE_ASM("asm/nonmatchings/devvif0", __terminate);

INCLUDE_ASM("asm/nonmatchings/devvif0", __throw_type_match);

INCLUDE_ASM("asm/nonmatchings/devvif0", __empty);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_0029D0F8);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_0029D150);

INCLUDE_ASM("asm/nonmatchings/devvif0", __get_eh_context);

INCLUDE_ASM("asm/nonmatchings/devvif0", __get_eh_info);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_0029D1C8);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_0029D3D0);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_0029D3E8);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_0029D450);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_0029D4B8);

INCLUDE_ASM("asm/nonmatchings/devvif0", __eh_alloc);

INCLUDE_ASM("asm/nonmatchings/devvif0", __eh_free);

INCLUDE_ASM("asm/nonmatchings/devvif0", __get_dynamic_handler_chain);

INCLUDE_ASM("asm/nonmatchings/devvif0", __sjthrow);

INCLUDE_ASM("asm/nonmatchings/devvif0", __sjpopnthrow);

INCLUDE_ASM("asm/nonmatchings/devvif0", __eh_rtime_match);

INCLUDE_ASM("asm/nonmatchings/devvif0", __get_eh_table_version);

INCLUDE_ASM("asm/nonmatchings/devvif0", __get_eh_table_language);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_0029D9B8);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_0029DA88);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_0029DBC8);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_0029DC58);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_0029DCC0);

INCLUDE_ASM("asm/nonmatchings/devvif0", __unwinding_cleanup);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_0029DD78);

INCLUDE_ASM("asm/nonmatchings/devvif0", __throw);

INCLUDE_ASM("asm/nonmatchings/devvif0", __rethrow);

INCLUDE_ASM("asm/nonmatchings/devvif0", fptodp);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_0029E3F8);

INCLUDE_ASM("asm/nonmatchings/devvif0", dpadd);

INCLUDE_ASM("asm/nonmatchings/devvif0", dpsub);

INCLUDE_ASM("asm/nonmatchings/devvif0", dpmul);

INCLUDE_ASM("asm/nonmatchings/devvif0", dpdiv);

INCLUDE_ASM("asm/nonmatchings/devvif0", dpcmp);

INCLUDE_ASM("asm/nonmatchings/devvif0", litodp);

INCLUDE_ASM("asm/nonmatchings/devvif0", __make_dp);

INCLUDE_ASM("asm/nonmatchings/devvif0", dptofp);

INCLUDE_ASM("asm/nonmatchings/devvif0", dptoul);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_0029ED10);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_0029ED58);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_0029EDB0);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_0029EEA8);

INCLUDE_ASM("asm/nonmatchings/devvif0", __register_frame_info);

INCLUDE_ASM("asm/nonmatchings/devvif0", __register_frame);

INCLUDE_ASM("asm/nonmatchings/devvif0", __register_frame_info_table);

INCLUDE_ASM("asm/nonmatchings/devvif0", __register_frame_table);

INCLUDE_ASM("asm/nonmatchings/devvif0", __deregister_frame_info);

INCLUDE_ASM("asm/nonmatchings/devvif0", __deregister_frame);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_0029F630);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_0029F670);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_0029F700);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_0029F758);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_0029F8C0);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_0029FA68);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_0029FB78);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_0029FC98);

INCLUDE_ASM("asm/nonmatchings/devvif0", __frame_state_for);

INCLUDE_ASM("asm/nonmatchings/devvif0", _$_9type_info);

INCLUDE_ASM("asm/nonmatchings/devvif0", __eq__C9type_infoRC9type_info);

INCLUDE_ASM("asm/nonmatchings/devvif0", __rtti_class);

INCLUDE_ASM("asm/nonmatchings/devvif0", __rtti_si);

INCLUDE_ASM("asm/nonmatchings/devvif0", __rtti_user);

INCLUDE_ASM("asm/nonmatchings/devvif0", upcast__C16__user_type_infoRC9type_infoPvPPv);

INCLUDE_ASM("asm/nonmatchings/devvif0", dyncast__C16__user_type_infoiRC9type_infoPvT2T3);

INCLUDE_ASM("asm/nonmatchings/devvif0", do_upcast__C16__user_type_infoQ216__user_type_info8sub_kindRC9type_infoPvRQ216__user_type_info13upcast_result);

INCLUDE_ASM("asm/nonmatchings/devvif0", do_dyncast__C16__user_type_infoiQ216__user_type_info8sub_kindRC9type_infoPvT3T4RQ216__user_type_info14dyncast_result);

INCLUDE_ASM("asm/nonmatchings/devvif0", do_find_public_subobj__C16__user_type_infoiRC9type_infoPvT3);

INCLUDE_ASM("asm/nonmatchings/devvif0", do_upcast__C14__si_type_infoQ216__user_type_info8sub_kindRC9type_infoPvRQ216__user_type_info13upcast_result);

INCLUDE_ASM("asm/nonmatchings/devvif0", do_dyncast__C14__si_type_infoiQ216__user_type_info8sub_kindRC9type_infoPvT3T4RQ216__user_type_info14dyncast_result);

INCLUDE_ASM("asm/nonmatchings/devvif0", do_find_public_subobj__C14__si_type_infoiRC9type_infoPvT3);

INCLUDE_ASM("asm/nonmatchings/devvif0", do_upcast__C17__class_type_infoQ216__user_type_info8sub_kindRC9type_infoPvRQ216__user_type_info13upcast_result);

INCLUDE_ASM("asm/nonmatchings/devvif0", do_dyncast__C17__class_type_infoiQ216__user_type_info8sub_kindRC9type_infoPvT3T4RQ216__user_type_info14dyncast_result);

INCLUDE_ASM("asm/nonmatchings/devvif0", do_find_public_subobj__C17__class_type_infoiRC9type_infoPvT3);

INCLUDE_ASM("asm/nonmatchings/devvif0", before__C9type_infoRC9type_info);

INCLUDE_ASM("asm/nonmatchings/devvif0", __throw_type_match_rtti_2);

INCLUDE_ASM("asm/nonmatchings/devvif0", __throw_type_match_rtti);

INCLUDE_ASM("asm/nonmatchings/devvif0", __is_pointer__FPv);

INCLUDE_ASM("asm/nonmatchings/devvif0", __rtti_ptr);

INCLUDE_ASM("asm/nonmatchings/devvif0", __rtti_attr);

INCLUDE_ASM("asm/nonmatchings/devvif0", __rtti_func);

INCLUDE_ASM("asm/nonmatchings/devvif0", __rtti_ptmf);

INCLUDE_ASM("asm/nonmatchings/devvif0", __rtti_ptmd);

INCLUDE_ASM("asm/nonmatchings/devvif0", __rtti_array);

INCLUDE_ASM("asm/nonmatchings/devvif0", __dynamic_cast);

INCLUDE_ASM("asm/nonmatchings/devvif0", __dynamic_cast_2);

INCLUDE_ASM("asm/nonmatchings/devvif0", __tfv);

INCLUDE_ASM("asm/nonmatchings/devvif0", __tfx);

INCLUDE_ASM("asm/nonmatchings/devvif0", __tfl);

INCLUDE_ASM("asm/nonmatchings/devvif0", __tfi);

INCLUDE_ASM("asm/nonmatchings/devvif0", __tfs);

INCLUDE_ASM("asm/nonmatchings/devvif0", __tfb);

INCLUDE_ASM("asm/nonmatchings/devvif0", __tfc);

INCLUDE_ASM("asm/nonmatchings/devvif0", __tfw);

INCLUDE_ASM("asm/nonmatchings/devvif0", __tfr);

INCLUDE_ASM("asm/nonmatchings/devvif0", __tfd);

INCLUDE_ASM("asm/nonmatchings/devvif0", __tff);

INCLUDE_ASM("asm/nonmatchings/devvif0", __tfUi);

INCLUDE_ASM("asm/nonmatchings/devvif0", __tfUl);

INCLUDE_ASM("asm/nonmatchings/devvif0", __tfUx);

INCLUDE_ASM("asm/nonmatchings/devvif0", __tfUs);

INCLUDE_ASM("asm/nonmatchings/devvif0", __tfUc);

INCLUDE_ASM("asm/nonmatchings/devvif0", __tfSc);

INCLUDE_ASM("asm/nonmatchings/devvif0", __tfI80);

INCLUDE_ASM("asm/nonmatchings/devvif0", __tfUI80);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002A1C58);

INCLUDE_ASM("asm/nonmatchings/devvif0", terminate__Fv);

INCLUDE_ASM("asm/nonmatchings/devvif0", __default_unexpected__Fv);

INCLUDE_ASM("asm/nonmatchings/devvif0", set_terminate__FPFv_v);

INCLUDE_ASM("asm/nonmatchings/devvif0", set_unexpected__FPFv_v);

INCLUDE_ASM("asm/nonmatchings/devvif0", unexpected__Fv);

INCLUDE_ASM("asm/nonmatchings/devvif0", __cp_exception_info);

INCLUDE_ASM("asm/nonmatchings/devvif0", __cp_eh_info);

INCLUDE_ASM("asm/nonmatchings/devvif0", __start_cp_handler);

INCLUDE_ASM("asm/nonmatchings/devvif0", __cplus_type_matcher);

INCLUDE_ASM("asm/nonmatchings/devvif0", __cp_push_exception);

INCLUDE_ASM("asm/nonmatchings/devvif0", __cp_pop_exception);

INCLUDE_ASM("asm/nonmatchings/devvif0", __uncatch_exception);

INCLUDE_ASM("asm/nonmatchings/devvif0", __check_eh_spec);

INCLUDE_ASM("asm/nonmatchings/devvif0", __check_null_eh_spec);

INCLUDE_ASM("asm/nonmatchings/devvif0", __throw_bad_cast);

INCLUDE_ASM("asm/nonmatchings/devvif0", __throw_bad_typeid);

INCLUDE_ASM("asm/nonmatchings/devvif0", uncaught_exception__Fv);

INCLUDE_ASM("asm/nonmatchings/devvif0", what__C9exception);

INCLUDE_ASM("asm/nonmatchings/devvif0", __floatdidf);

INCLUDE_ASM("asm/nonmatchings/devvif0", __unpack_f);

INCLUDE_ASM("asm/nonmatchings/devvif0", __make_fp);

INCLUDE_ASM("asm/nonmatchings/devvif0", __pack_d);

INCLUDE_ASM("asm/nonmatchings/devvif0", __unpack_d);

INCLUDE_ASM("asm/nonmatchings/devvif0", __fpcmp_parts_d);

INCLUDE_ASM("asm/nonmatchings/devvif0", __pack_f);

INCLUDE_ASM("asm/nonmatchings/devvif0", abort);

INCLUDE_ASM("asm/nonmatchings/devvif0", __assert);

INCLUDE_ASM("asm/nonmatchings/devvif0", atexit);

INCLUDE_ASM("asm/nonmatchings/devvif0", atoi);

INCLUDE_ASM("asm/nonmatchings/devvif0", __errno);

INCLUDE_ASM("asm/nonmatchings/devvif0", exit);

INCLUDE_ASM("asm/nonmatchings/devvif0", fiprintf);

INCLUDE_ASM("asm/nonmatchings/devvif0", malloc);

INCLUDE_ASM("asm/nonmatchings/devvif0", free);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002A2A68);

INCLUDE_ASM("asm/nonmatchings/devvif0", _malloc_r);

INCLUDE_ASM("asm/nonmatchings/devvif0", memcmp);

INCLUDE_ASM("asm/nonmatchings/devvif0", memcpy);

INCLUDE_ASM("asm/nonmatchings/devvif0", memmove);

INCLUDE_ASM("asm/nonmatchings/devvif0", memset);

INCLUDE_ASM("asm/nonmatchings/devvif0", __malloc_lock);

INCLUDE_ASM("asm/nonmatchings/devvif0", __malloc_unlock);

INCLUDE_ASM("asm/nonmatchings/devvif0", _printf_r);

INCLUDE_ASM("asm/nonmatchings/devvif0", printf);

INCLUDE_ASM("asm/nonmatchings/devvif0", qsort);

INCLUDE_ASM("asm/nonmatchings/devvif0", srand);

INCLUDE_ASM("asm/nonmatchings/devvif0", rand);

INCLUDE_ASM("asm/nonmatchings/devvif0", _sbrk_r);

INCLUDE_ASM("asm/nonmatchings/devvif0", _init_signal_r);

INCLUDE_ASM("asm/nonmatchings/devvif0", _signal_r);

INCLUDE_ASM("asm/nonmatchings/devvif0", _raise_r);

INCLUDE_ASM("asm/nonmatchings/devvif0", __sigtramp_r);

INCLUDE_ASM("asm/nonmatchings/devvif0", raise);

INCLUDE_ASM("asm/nonmatchings/devvif0", signal);

INCLUDE_ASM("asm/nonmatchings/devvif0", _init_signal);

INCLUDE_ASM("asm/nonmatchings/devvif0", __sigtramp);

INCLUDE_ASM("asm/nonmatchings/devvif0", _kill_r);

INCLUDE_ASM("asm/nonmatchings/devvif0", _getpid_r);

INCLUDE_ASM("asm/nonmatchings/devvif0", _sprintf_r);

INCLUDE_ASM("asm/nonmatchings/devvif0", sprintf);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002A47D0);

INCLUDE_ASM("asm/nonmatchings/devvif0", sscanf);

INCLUDE_ASM("asm/nonmatchings/devvif0", strcat);

INCLUDE_ASM("asm/nonmatchings/devvif0", strcmp);

INCLUDE_ASM("asm/nonmatchings/devvif0", strcpy);

INCLUDE_ASM("asm/nonmatchings/devvif0", strerror);

INCLUDE_ASM("asm/nonmatchings/devvif0", strlen);

INCLUDE_ASM("asm/nonmatchings/devvif0", strncmp);

INCLUDE_ASM("asm/nonmatchings/devvif0", strncpy);

INCLUDE_ASM("asm/nonmatchings/devvif0", strrchr);

INCLUDE_ASM("asm/nonmatchings/devvif0", strstr);

INCLUDE_ASM("asm/nonmatchings/devvif0", _strtol_r);

INCLUDE_ASM("asm/nonmatchings/devvif0", strtol);

INCLUDE_ASM("asm/nonmatchings/devvif0", _user_strerror);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002A5918);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002A5960);

INCLUDE_ASM("asm/nonmatchings/devvif0", vfiprintf);

INCLUDE_ASM("asm/nonmatchings/devvif0", _vfiprintf_r);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002A6688);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002A66D0);

INCLUDE_ASM("asm/nonmatchings/devvif0", vfprintf);

INCLUDE_ASM("asm/nonmatchings/devvif0", _vfprintf_r);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002A7E70);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002A8030);

INCLUDE_ASM("asm/nonmatchings/devvif0", __svfscanf);

INCLUDE_ASM("asm/nonmatchings/devvif0", __sccl);

INCLUDE_ASM("asm/nonmatchings/devvif0", vsprintf);

INCLUDE_ASM("asm/nonmatchings/devvif0", vsprintf_r);

INCLUDE_ASM("asm/nonmatchings/devvif0", __swsetup);

INCLUDE_ASM("asm/nonmatchings/devvif0", atof);

INCLUDE_ASM("asm/nonmatchings/devvif0", atol);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002A9098);

INCLUDE_ASM("asm/nonmatchings/devvif0", _dtoa_r);

INCLUDE_ASM("asm/nonmatchings/devvif0", fflush);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002AA648);

INCLUDE_ASM("asm/nonmatchings/devvif0", __sfmoreglue);

INCLUDE_ASM("asm/nonmatchings/devvif0", __sfp);

INCLUDE_ASM("asm/nonmatchings/devvif0", _cleanup_r);

INCLUDE_ASM("asm/nonmatchings/devvif0", _cleanup);

INCLUDE_ASM("asm/nonmatchings/devvif0", __sinit);

INCLUDE_ASM("asm/nonmatchings/devvif0", fread);

INCLUDE_ASM("asm/nonmatchings/devvif0", _free_r);

INCLUDE_ASM("asm/nonmatchings/devvif0", _malloc_trim_r);

INCLUDE_ASM("asm/nonmatchings/devvif0", __sfvwrite);

INCLUDE_ASM("asm/nonmatchings/devvif0", _fwalk);

INCLUDE_ASM("asm/nonmatchings/devvif0", _setlocale_r);

INCLUDE_ASM("asm/nonmatchings/devvif0", _localeconv_r);

INCLUDE_ASM("asm/nonmatchings/devvif0", setlocale);

INCLUDE_ASM("asm/nonmatchings/devvif0", localeconv);

INCLUDE_ASM("asm/nonmatchings/devvif0", __smakebuf);

INCLUDE_ASM("asm/nonmatchings/devvif0", _mbtowc_r);

INCLUDE_ASM("asm/nonmatchings/devvif0", memchr);

INCLUDE_ASM("asm/nonmatchings/devvif0", _Balloc);

INCLUDE_ASM("asm/nonmatchings/devvif0", _Bfree);

INCLUDE_ASM("asm/nonmatchings/devvif0", _multadd);

INCLUDE_ASM("asm/nonmatchings/devvif0", _s2b);

INCLUDE_ASM("asm/nonmatchings/devvif0", _hi0bits);

INCLUDE_ASM("asm/nonmatchings/devvif0", _lo0bits);

INCLUDE_ASM("asm/nonmatchings/devvif0", _i2b);

INCLUDE_ASM("asm/nonmatchings/devvif0", _multiply);

INCLUDE_ASM("asm/nonmatchings/devvif0", _pow5mult);

INCLUDE_ASM("asm/nonmatchings/devvif0", _lshift);

INCLUDE_ASM("asm/nonmatchings/devvif0", __mcmp);

INCLUDE_ASM("asm/nonmatchings/devvif0", __mdiff);

INCLUDE_ASM("asm/nonmatchings/devvif0", _ulp);

INCLUDE_ASM("asm/nonmatchings/devvif0", _b2d);

INCLUDE_ASM("asm/nonmatchings/devvif0", _d2b);

INCLUDE_ASM("asm/nonmatchings/devvif0", _ratio);

INCLUDE_ASM("asm/nonmatchings/devvif0", _mprec_log10);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002AC658);

INCLUDE_ASM("asm/nonmatchings/devvif0", __srefill);

INCLUDE_ASM("asm/nonmatchings/devvif0", isinf);

INCLUDE_ASM("asm/nonmatchings/devvif0", __sread);

INCLUDE_ASM("asm/nonmatchings/devvif0", __swrite);

INCLUDE_ASM("asm/nonmatchings/devvif0", __sseek);

INCLUDE_ASM("asm/nonmatchings/devvif0", __sclose);

INCLUDE_ASM("asm/nonmatchings/devvif0", _strtod_r);

INCLUDE_ASM("asm/nonmatchings/devvif0", strtod);

INCLUDE_ASM("asm/nonmatchings/devvif0", strtodf);

INCLUDE_ASM("asm/nonmatchings/devvif0", _strtoul_r);

INCLUDE_ASM("asm/nonmatchings/devvif0", strtoul);

INCLUDE_ASM("asm/nonmatchings/devvif0", __submore);

INCLUDE_ASM("asm/nonmatchings/devvif0", ungetc);

INCLUDE_ASM("asm/nonmatchings/devvif0", _write_r);

INCLUDE_ASM("asm/nonmatchings/devvif0", _calloc_r);

INCLUDE_ASM("asm/nonmatchings/devvif0", _close_r);

INCLUDE_ASM("asm/nonmatchings/devvif0", _fstat_r);

INCLUDE_ASM("asm/nonmatchings/devvif0", _lseek_r);

INCLUDE_ASM("asm/nonmatchings/devvif0", _read_r);

INCLUDE_ASM("asm/nonmatchings/devvif0", _realloc_r);

INCLUDE_ASM("asm/nonmatchings/devvif0", _sceSDC);

INCLUDE_ASM("asm/nonmatchings/devvif0", SyncDCache);

INCLUDE_ASM("asm/nonmatchings/devvif0", iSyncDCache);

INCLUDE_ASM("asm/nonmatchings/devvif0", _sceIDC);

INCLUDE_ASM("asm/nonmatchings/devvif0", InvalidDCache);

INCLUDE_ASM("asm/nonmatchings/devvif0", iInvalidDCache);

INCLUDE_ASM("asm/nonmatchings/devvif0", __fixdfdi);

INCLUDE_ASM("asm/nonmatchings/devvif0", dptoli);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002AE9C8);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002AEAA0);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002AED20);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002AEE98);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002AF118);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002AF188);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002AF2E0);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002AF320);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002AF3A8);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002AF3B0);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002AF3B8);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002AF3C0);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002AF3C8);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002AF3D0);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002AF3D8);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002AF3E0);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002AF3F8);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002AF438);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002AF488);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002AF4A8);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002AF4C8);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002AF4E8);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002AF508);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002AF510);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002AF528);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002AF538);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002AF578);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002AF598);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002AF5B8);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002AF5D8);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002AF5F8);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002AF650);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002AF6A8);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002AF6E8);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002AF740);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002AF798);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002AF7F0);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002AF848);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002AF888);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002AF8C8);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002AF908);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002AF948);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002AF9A0);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002AF9F8);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002AFA50);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002AFA90);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002AFAE0);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002AFB20);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002AFB78);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002AFBB8);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002AFC10);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002AFC68);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002AFCA8);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002AFCE8);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002AFD40);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002AFD80);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002AFDD8);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002AFE18);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002AFE70);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002AFEB0);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002AFF08);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002AFF60);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002AFFB8);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002AFFF8);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B0038);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B0090);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B00E8);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B0128);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B0168);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B01C0);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B0218);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B0270);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B02C8);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B0320);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B0378);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B03D0);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B0428);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B0480);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B04D8);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B0518);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B0568);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B05A8);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B05F8);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B0638);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B0678);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B06B8);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B0708);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B0748);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B0788);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B07C8);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B0808);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B0848);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B08A0);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B08F8);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B0938);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B0978);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B09D0);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B0A10);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B0A60);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B0AB0);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B0B28);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B0BA0);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B0BD8);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B0C10);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B0C68);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B0CC0);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B0CF0);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B0D20);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B0D60);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B0DA0);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B0DD8);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B0E30);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B0E70);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B0EE8);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B0F40);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B0F98);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B0FD8);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B1030);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B1070);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B10F0);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B1248);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B1288);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B1318);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B1348);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B1398);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B13C8);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B1430);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B1480);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B16A8);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B16E8);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B1AD0);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B2000);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B2090);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B2168);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B21A8);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B21E8);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B2228);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B22B8);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B22E8);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B2310);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B2330);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B2358);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B2378);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B23A0);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B23C0);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B23E8);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B2408);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B2438);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B2458);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B2478);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B2498);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B24C8);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B2520);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B2578);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B25D0);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B2610);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B2660);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B26A0);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B26F8);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B2748);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B2788);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B27E0);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B2838);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B2890);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B28E8);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B2940);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B2998);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B29F0);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B2A48);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B2AA0);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B2AF8);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B2B50);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B2BA8);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B3098);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B30D8);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B3118);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B3158);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B3198);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B31D8);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B3218);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B3258);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B3298);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B32E8);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B3338);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B3378);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B33B8);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B3410);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B3468);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B34A8);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B34E8);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B3540);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B3598);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B35F0);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B3648);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B36A0);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B36F8);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B3738);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B3778);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B37B8);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B37F8);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B3838);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B3878);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B38D0);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B3928);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B3968);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B39A8);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B3A00);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B3A40);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B3A98);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B3AF0);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B3B48);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B3B98);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B3BE8);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B3C38);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B3C78);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B3CB8);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B3CF8);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B3D30);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B3D88);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B3DE0);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B3E20);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B3E70);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B3EC0);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B3F00);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B3F90);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B3FE8);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B4040);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B4080);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B40C0);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B4118);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B4158);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B41B0);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B4208);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B4260);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B42B8);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B4310);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B4368);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B43A8);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B43E8);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B4428);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B4468);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B44A8);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B44E8);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B4540);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B4598);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B45D8);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B4618);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B4670);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B46C8);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B4708);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B4748);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B47A0);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B47E0);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B4808);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B4878);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B48E8);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B4958);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B49C8);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B4A38);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B4A90);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B4AD0);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B4B28);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B4B68);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B4B70);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B4B80);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B4BA0);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B4BC0);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B4C18);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B4C90);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B4CA8);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B4CC8);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B4CF8);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B4D00);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B4D70);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B4F10);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B4FD0);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B50C8);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B5200);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B5380);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B5538);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B5730);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B5778);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B57D8);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B59A0);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B5A30);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B5B18);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B5C48);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B5D78);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B5DF0);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B5EF0);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B5FB8);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B60D0);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B6160);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B6248);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B6298);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B62D0);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B6320);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B6370);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B63C0);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B63C8);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B63D0);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B6410);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B6448);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B64C0);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B6538);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B6608);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B66D8);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B6718);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B6758);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B6790);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B6798);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B67E8);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B6820);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B6828);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B6830);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B6838);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B6870);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B6A60);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B6AF0);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B6B38);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B6B48);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B6B58);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B6B68);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B6CE0);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B6EC0);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B70F0);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B71B8);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B73A8);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B74C8);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B76A8);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B7788);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B78C0);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B78E8);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B7920);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B7978);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B79C0);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B7A08);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B7A48);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B7AD8);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B7B68);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B7BB0);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B7C08);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B7C40);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B7C90);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B7CD0);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B7D28);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B7D68);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B7DA8);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B7DC0);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B7E18);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B7E70);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B7EC0);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B7F00);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B7F58);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B7F98);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B7FF0);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B8030);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B8088);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B80E0);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B8120);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B8160);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B81B8);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B8210);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B8250);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B8290);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B82E8);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B8328);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B8380);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B83C0);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B8418);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B8458);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B84B0);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B84F0);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B8548);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B8588);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B85E0);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B8620);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B8678);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B86F0);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B8748);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B87B8);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B8828);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B8860);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B88A0);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B8910);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B8950);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B8998);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B89C8);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B8A30);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B8A88);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B8AC0);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B8AF8);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B8B50);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B8B90);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B8BE8);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B8C28);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B8CA0);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B8D00);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B8D50);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B8E48);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B8F50);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B8FA8);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B8FE8);

INCLUDE_ASM("asm/nonmatchings/devvif0", func_002B9040);
