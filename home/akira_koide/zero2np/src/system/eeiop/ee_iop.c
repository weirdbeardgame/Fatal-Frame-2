// STATUS: NOT STARTED

#include "ee_iop.h"

struct _HIL_ONE_FORMAT {
	char irx_name[8];
	int offset;
	int size;
};

typedef _HIL_ONE_FORMAT HIL_ONE_FORMAT;

struct _HIL_FORMAT {
	int num;
	int dil_size;
	int padding[2];
};

typedef _HIL_FORMAT HIL_FORMAT;
static void* (*ee_iop_malloc)(/* parameters unknown */);
static void (*ee_iop_free)(/* parameters unknown */);
static char iop_com_buffer[4096];
static IOP_RET_STATUS iop_ret;
static char iop_ret_buffer[448];
static int iop_com_offset;
static sceSifClientData sif_cli_data;

static void* ee_iopInitSub(EEIOP_DEF *def, void *buffer) {
	int i;
	
  bool bVar1;
  int iVar2;
  uint ssize;
  void *pvVar3;
  
  do {
    iVar2 = sceSifBindRpc(&sif_cli_data,1,0);
    if (iVar2 < 0) {
      printf("error: sceSifBindRpc\n");
      do {
                    /* WARNING: Do nothing block with infinite loop */
      } while( true );
    }
    iVar2 = 0x270b;
    do {
      bVar1 = iVar2 != -1;
      iVar2 = iVar2 + -4;
    } while (bVar1);
  } while (sif_cli_data.serve == (_sif_serve_data *)0x0);
  iopCommandFrameInit();
  iopCommandRegister(REQ_IOP_REBOOT,(char *)0x0,0);
  iopCommandRegister(IOP_COM_END,(char *)0x0,0);
  FlushCache(0);
  ssize = GetAlignUp(iop_com_offset,4);
  sceSifCallRpc(&sif_cli_data,0,0,iop_com_buffer,ssize,(void *)0x0,0,(undefined1 *)0x0,(void *)0x0);
  ee_iopQueryInit();
  printf("rpc_query_ok\n");
  pvVar3 = FileLoadInit(def,buffer);
  printf("rpc_file_load ok\n");
  FileStreamInit();
  printf("rpc_file_stream ok\n");
  iopCommandFrameInit();
  return pvVar3;
}

void* ee_iopMalloc(int size) {
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)ee_iop_malloc)(size);
  return pvVar1;
}

void ee_iopFree(void *adrs) {
  (*(code *)ee_iop_free)(adrs);
  return;
}

int ee_iopGetNeedSize(EEIOP_DEF *def) {
  int iVar1;
  int iVar2;
  
  iVar1 = sndGetNeedSize(def);
  iVar2 = FileLoadGetNeedSize(def);
  return iVar1 + iVar2;
}

int ee_iopInit(EEIOP_DEF *def) {
	int size;
	HIL_FORMAT *hil;
	HIL_ONE_FORMAT *work;
	int iopaddr;
	int i;
	int fd;
	void *buffer;
	char temp[9];
	
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int *addr;
  int iVar5;
  void *pvVar6;
  ulong uVar7;
  char *pcVar8;
  uint uVar9;
  ulong uVar10;
  char temp [9];
  
  ee_iop_malloc = def->malloc64;
  ee_iop_free = def->free64;
  if (def->rom_boot != 0) {
    sceSifInitRpc(0);
    sceCdInit(0);
    do {
      iVar3 = sceSifRebootIop(def->iop_def_module);
    } while (iVar3 == 0);
    do {
      iVar3 = sceSifSyncIop();
    } while (iVar3 == 0);
  }
  sceSifInitRpc(0);
  sceSifLoadFileReset();
  sceFsReset();
  sceCdInit(0);
  sceCdMmode(def->media);
  sceSifInitIopHeap();
  sceSifAllocSysMemory(1,0x600000,(void *)0x0);
  printf("(int)(sceSifAllocSysMemory(1, 0x600000, 0 )) = 0x%x\n");
  iVar3 = sceOpen(def->hil_file_name,1);
  if (iVar3 < 0) {
    pcVar8 = "can\'t open %s\n";
  }
  else {
    iVar4 = sceLseek(iVar3,0,2);
    sceLseek(iVar3,0,0);
    addr = (int *)ee_iopMalloc(iVar4);
    iVar5 = sceRead(iVar3,addr,iVar4);
    if (iVar4 != iVar5) {
      printf("Read Err\n");
      return 0;
    }
    sceClose(iVar3);
    pvVar6 = sceSifAllocSysMemory(2,addr[1],(void *)0x120000);
    printf("(int)iopaddr = 0x%x\n");
    if (pvVar6 == (void *)0x0) {
      SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
      PrintAssertReal("Sif Missed Appointed Memory Alloc");
      pvVar6 = sceSifAllocSysMemory(0,addr[1],(void *)0x0);
      pcVar8 = def->dil_file_name;
    }
    else {
      pcVar8 = def->dil_file_name;
    }
    iVar3 = sceSifLoadIopHeap(pcVar8,pvVar6);
    if (iVar3 < 0) {
      pcVar8 = "sceSifLoadIopHeap() Err %s\n";
    }
    else {
      printf("pre_LoadModuleBuffer\n");
      iVar3 = 0;
      sceSifQueryMaxFreeMemSize();
      printf("sceSifQueryMaxFreeMemSize() = 0x%x\n");
      sceSifQueryTotalFreeMemSize();
      printf("sceSifQueryTotalFreeMemSize() = 0x%x\n");
      uVar7 = (ulong)(int)(addr + 4);
      if (*addr < 1) {
LAB_00270dc0:
        printf("after_LoadModuleBuffer\n");
        sceSifQueryMaxFreeMemSize();
        printf("sceSifQueryMaxFreeMemSize() = 0x%x\n");
        sceSifQueryTotalFreeMemSize();
        printf("sceSifQueryTotalFreeMemSize() = 0x%x\n");
        ee_iopFree(addr);
        sceSifFreeIopHeap(pvVar6);
        iVar3 = ee_iopGetNeedSize(def);
        pvVar6 = ee_iopMalloc(iVar3);
        printf("pre ee_iopInit\n");
        sceSifQueryMaxFreeMemSize();
        printf("sceSifQueryMaxFreeMemSize() = 0x%x\n");
        sceSifQueryTotalFreeMemSize();
        printf("sceSifQueryTotalFreeMemSize() = 0x%x\n");
        pvVar6 = ee_iopInitSub(def,pvVar6);
        printf("pre SndInit\n");
        sceSifQueryMaxFreeMemSize();
        printf("sceSifQueryMaxFreeMemSize() = 0x%x\n");
        sceSifQueryTotalFreeMemSize();
        printf("sceSifQueryTotalFreeMemSize() = 0x%x\n");
        SndInit(def,pvVar6);
        printf("after SndInit\n");
        sceSifQueryMaxFreeMemSize();
        printf("sceSifQueryMaxFreeMemSize() = 0x%x\n");
        sceSifQueryTotalFreeMemSize();
        printf("sceSifQueryTotalFreeMemSize() = 0x%x\n");
        return 1;
      }
      temp[8] = '\0';
      uVar10 = uVar7;
      while( true ) {
        temp[8] = '\0';
        uVar9 = (uint)uVar10;
        uVar1 = uVar9 + 7 & 7;
        uVar2 = uVar9 & 7;
        temp._0_8_ = (*(long *)((uVar9 + 7) - uVar1) << (7 - uVar1) * 8 |
                     uVar7 & 0xffffffffffffffffU >> (uVar1 + 1) * 8) & -1L << (8 - uVar2) * 8 |
                     *(ulong *)(uVar9 - uVar2) >> uVar2 * 8;
        pcVar8 = temp + 7;
        uVar1 = (uint)pcVar8 & 7;
        *(ulong *)(pcVar8 + -uVar1) =
             *(ulong *)(pcVar8 + -uVar1) & -1L << (uVar1 + 1) * 8 |
             (ulong)temp._0_8_ >> (7 - uVar1) * 8;
        uVar10 = (ulong)(int)(uVar9 + 0x10);
        iVar4 = sceSifLoadModuleBuffer((void *)((int)pvVar6 + *(int *)(uVar9 + 8)),0,(char *)0x0);
        iVar3 = iVar3 + 1;
        if (iVar4 < 0) break;
        uVar7 = (ulong)(iVar3 < *addr);
        if (uVar7 == 0) goto LAB_00270dc0;
        temp[8] = '\0';
      }
      pcVar8 = "irx start err %s\n";
    }
  }
  printf(pcVar8);
  return 0;
}

void WaitMainRpc() {
  int iVar1;
  
  do {
    iVar1 = sceSifCheckStatRpc(&sif_cli_data.rpcd);
  } while (iVar1 != 0);
  return;
}

void ee_iopMain() {
  _IOP_RET_STATUS *p_Var1;
  uint ssize;
  uint rsize;
  char *pcVar2;
  _IOP_STREAM_RET _Var3;
  _IOP_STREAM_RET _Var4;
  _IOP_STREAM_RET _Var5;
  
  SndMain();
  WaitMainRpc();
  pcVar2 = iop_ret_buffer;
  p_Var1 = &iop_ret;
  do {
    _Var3 = *(_IOP_STREAM_RET *)((int)pcVar2 + 8);
    _Var4 = *(_IOP_STREAM_RET *)((int)pcVar2 + 0x10);
    _Var5 = *(_IOP_STREAM_RET *)((int)pcVar2 + 0x18);
    *(undefined8 *)p_Var1->voice_end = *(undefined8 *)pcVar2;
    p_Var1->stream_ret[0] = _Var3;
    p_Var1->stream_ret[1] = _Var4;
    p_Var1->pcm_stream_ret[0] = _Var5;
    pcVar2 = (char *)((int)pcVar2 + 0x20);
    p_Var1 = (_IOP_RET_STATUS *)(p_Var1->pcm_stream_ret + 1);
  } while (pcVar2 != iop_ret_buffer + 0x1a0);
  *(undefined8 *)p_Var1->voice_end = iop_ret_buffer._416_8_;
  iopCommandRegister(IOP_COM_END,(char *)0x0,0);
  FlushCache(0);
  ssize = GetAlignUp(iop_com_offset,4);
  rsize = GetAlignUp(0x1a8,4);
  sceSifCallRpc(&sif_cli_data,0,1,iop_com_buffer,ssize,iop_ret_buffer,rsize,(undefined1 *)0x0,
                (void *)0x0);
  iopCommandFrameInit();
  return;
}

void iopCommandFrameInit() {
  iop_com_offset = 0;
  return;
}

int iopCommandRegister(IOP_COMMAND_ENUM command, char *buf, int size2) {
	int size;
	IOP_COMMAND_ENUM *cp;
	
  _IOP_COMMAND_ENUM__106_4513 *p_Var1;
  int iVar2;
  
  if ((size2 & 3U) != 0) {
    SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
    PrintAssertReal("EEIOP COMMON Struct Is Not 4Byte Align!!");
  }
  if (iop_com_offset + size2 + 4 < 0x1000) {
    iVar2 = iop_com_offset + 4;
    p_Var1 = (_IOP_COMMAND_ENUM__106_4513 *)(iop_com_buffer + iop_com_offset);
    iop_com_offset = iop_com_offset + 4;
    *p_Var1 = command;
    if ((long)size2 != 0) {
      memcpy(iop_com_buffer + iVar2,buf,(long)size2);
      iop_com_offset = iop_com_offset + size2;
    }
    iVar2 = 1;
  }
  else {
    printf("iop_command_buffer over\n");
    iVar2 = 0;
  }
  return iVar2;
}

void SetCDReadMode(int mode) {
	CD_READ_MODE_CHANGE crm;
	
  _CD_READ_MODE_CHANGE crm;
  
  crm.mode = mode;
  iopCommandRegister(REQ_CD_READ_MODE_CHANGE,(char *)&crm,4);
  return;
}

int CheckEndPointThrough(int core, int voice_no) {
  return iop_ret.voice_end[core] & 1 << (voice_no & 0x1fU);
}

IOP_STREAM_RET* GetStreamWrkRet(int wrk_id) {
  return iop_ret.stream_ret + wrk_id;
}

IOP_STREAM_RET* GetPCMStreamWrkRet(int wrk_id) {
  return iop_ret.pcm_stream_ret + wrk_id;
}

int GetVoiceNowAdrs(int core, int voice) {
  return iop_ret.mpNowAdrs[core][voice];
}

int GetVoiceLoopAdrs(int core, int voice) {
  return iop_ret.mpLoopAdrs[core][voice];
}
