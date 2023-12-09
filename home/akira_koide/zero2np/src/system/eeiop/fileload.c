// STATUS: NOT STARTED

#include "fileload.h"

enum _LOAD_CANCEL_TYPE {
	LOAD_CANCEL_NONE = 0,
	LOAD_CANCEL_STORE = 1,
	LOAD_CANCEL_NORMAL = 2,
	LOAD_CANCEL_WAIT = 3
};

typedef _LOAD_CANCEL_TYPE LOAD_CANCEL_TYPE;

struct _FILE_LOAD_SYS {
	int yet_files;
	LOAD_CANCEL_TYPE cancel_type;
	void (*cancel_func)(/* parameters unknown */);
	void *cancel_arg;
	int master_thread_id;
	int ring_buf_num;
	int one_buf_size;
	int file_load_wrk_max;
	int load_th_priority;
	int decode_th_priority;
};

typedef _FILE_LOAD_SYS FILE_LOAD_SYS;

struct _FILE_LOAD_WRK {
	int file_no;
	int start_sector;
	char *buffer;
	void (*func)(/* parameters unknown */);
	FILE_LOAD_TYPE type;
	int priority;
	void *arg;
	int read_size;
	int size;
	short unsigned int temp_id;
	short int id;
};

typedef _FILE_LOAD_WRK FILE_LOAD_WRK;
static short unsigned int file_load_wrk_id;
static FILE_LOAD_WRK *file_load_wrk;
static FILE_LOAD_SYS file_load_sys;
static char iop_fileload_ret[64];
static char iop_fileload_cmd[320];
static sceSifClientData sif_cli_data_f;
static int load_th_idx;
static int load_req_sema_id;
static int rpc_sema_id;

int FileLoadReqSPU(int file_no, void *adrs, int priority, void (*func)(/* parameters unknown */), void *arg) {
  int iVar1;
  
  iVar1 = cddatIsCmpFile(file_no);
  if (iVar1 != 0) {
    SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
    PrintAssertReal("Cannot Do SPU Decode Load");
  }
  iVar1 = FileLoadReq(file_no,(char *)adrs,priority,func,arg,FILE_LOAD_TYPE_SPU);
  return iVar1;
}

int FileLoadReqEE(int file_no, void *adrs, int priority, void (*func)(/* parameters unknown */), void *arg) {
	int id;
	
  int iVar1;
  
  iVar1 = cddatIsCmpFile(file_no);
  if (iVar1 == 0) {
    iVar1 = FileLoadReq(file_no,(char *)adrs,priority,func,arg,FILE_LOAD_TYPE_EE);
  }
  else {
    iVar1 = FileLoadReq(file_no,(char *)adrs,priority,func,arg,FILE_LOAD_TYPE_DECODE_EE);
  }
  return iVar1;
}

int FileDecodeLoadReqEE(int file_no, void *adrs, int priority, void (*func)(/* parameters unknown */), void *arg) {
  int iVar1;
  
  iVar1 = FileLoadReq(file_no,(char *)adrs,priority,func,arg,FILE_LOAD_TYPE_DECODE_EE);
  return iVar1;
}

void _intr_wait_load_func(void *buffer, void *arg) {
                    /* WARNING: Load size is inaccurate */
  WakeupThread(*arg);
  return;
}

void FileLoadReqEEWait(int file_no, void *adrs) {
	static int this_thread_id;
	
  this_thread_id_0 = GetThreadId();
  FileLoadReqEE(file_no,adrs,10,_intr_wait_load_func,&this_thread_id_0);
  SleepThread();
  return;
}

static void FileLoadCancelWaitSub(int i) {
  bool bVar1;
  int two;
  
  bVar1 = i < file_load_sys.yet_files + -1;
  if (file_load_sys.yet_files + -1 == i) {
    file_load_sys.cancel_type = LOAD_CANCEL_WAIT;
    ReqQueryLoadCancel();
    if (file_load_wrk[i].type == FILE_LOAD_TYPE_DECODE_EE) {
      cmp_eeiopCancel();
    }
    ResumeThread(load_th_idx);
    SleepThread();
    return;
  }
  while (bVar1) {
    two = i + 1;
    SwapFileLoadWrk(i,two);
    bVar1 = two < file_load_sys.yet_files + -1;
    i = two;
  }
  WaitSema(load_req_sema_id);
  file_load_sys.yet_files = file_load_sys.yet_files + -1;
  ResumeThread(load_th_idx);
  return;
}

FILE_LOAD_ENUM FileLoadCancelWait2(int file_no, void *adrs) {
	int i;
	
  _FILE_LOAD_WRK *p_Var1;
  int i;
  
  SuspendThread(load_th_idx);
  i = 0;
  p_Var1 = file_load_wrk;
  if (0 < file_load_sys.yet_files) {
    do {
      if (((p_Var1->file_no == file_no) && (p_Var1->buffer == (char *)adrs)) &&
         (p_Var1->type != FILE_LOAD_TYPE_SPU)) {
        FileLoadCancelWaitSub(i);
        return FILE_LOAD_OK;
      }
      i = i + 1;
      p_Var1 = p_Var1 + 1;
    } while (i < file_load_sys.yet_files);
  }
  ResumeThread(load_th_idx);
  return FILE_LOAD_ID_NOT_EXIST;
}

FILE_LOAD_ENUM FileLoadCancelWait(int id) {
	int i;
	
  _FILE_LOAD_WRK *p_Var1;
  int i;
  
  SuspendThread(load_th_idx);
  i = 0;
  if (0 < file_load_sys.yet_files) {
    p_Var1 = file_load_wrk;
    do {
      if (((long)(short)p_Var1->id == (long)(id >> 0x10)) &&
         ((uint)(ushort)p_Var1->temp_id == (id & 0xffffU))) {
        FileLoadCancelWaitSub(i);
        return FILE_LOAD_OK;
      }
      i = i + 1;
      p_Var1 = p_Var1 + 1;
    } while (i < file_load_sys.yet_files);
  }
  ResumeThread(load_th_idx);
  return FILE_LOAD_ID_NOT_EXIST;
}

static void FileLoadCancelSub(int i, void (*func)(/* parameters unknown */), void *arg) {
  bool bVar1;
  int two;
  
  if (file_load_sys.yet_files + -1 == i) {
    file_load_sys.cancel_type = LOAD_CANCEL_NORMAL;
    file_load_sys.cancel_func = func;
    file_load_sys.cancel_arg = arg;
    printf("load cancel req\n");
    ReqQueryLoadCancel();
    if (file_load_wrk[i].type == FILE_LOAD_TYPE_DECODE_EE) {
      cmp_eeiopCancel();
    }
  }
  else {
    if (func != (undefined1 *)0x0) {
      (*(code *)func)(file_load_wrk[i].buffer);
    }
    two = i + 1;
    if (i < file_load_sys.yet_files + -1) {
      do {
        SwapFileLoadWrk(i,two);
        bVar1 = two < file_load_sys.yet_files + -1;
        i = two;
        two = two + 1;
      } while (bVar1);
    }
    WaitSema(load_req_sema_id);
    file_load_sys.yet_files = file_load_sys.yet_files + -1;
  }
  ResumeThread(load_th_idx);
  return;
}

FILE_LOAD_ENUM FileLoadCancel2(int file_no, void *adrs, void (*func)(/* parameters unknown */), void *arg) {
	int i;
	
  _FILE_LOAD_WRK *p_Var1;
  int i;
  
  SuspendThread(load_th_idx);
  i = 0;
  p_Var1 = file_load_wrk;
  if (0 < file_load_sys.yet_files) {
    do {
      if (((p_Var1->file_no == file_no) && (p_Var1->buffer == (char *)adrs)) &&
         (p_Var1->type != FILE_LOAD_TYPE_SPU)) {
        FileLoadCancelSub(i,func,arg);
        return FILE_LOAD_OK;
      }
      i = i + 1;
      p_Var1 = p_Var1 + 1;
    } while (i < file_load_sys.yet_files);
  }
  ResumeThread(load_th_idx);
  return FILE_LOAD_ID_NOT_EXIST;
}

FILE_LOAD_ENUM FileLoadCancelSPU2(int file_no, void *adrs, void (*func)(/* parameters unknown */), void *arg) {
	int i;
	
  _FILE_LOAD_WRK *p_Var1;
  int i;
  
  SuspendThread(load_th_idx);
  i = 0;
  p_Var1 = file_load_wrk;
  if (0 < file_load_sys.yet_files) {
    do {
      if (((p_Var1->file_no == file_no) && (p_Var1->buffer == (char *)adrs)) &&
         (p_Var1->type == FILE_LOAD_TYPE_SPU)) {
        FileLoadCancelSub(i,func,arg);
        return FILE_LOAD_OK;
      }
      i = i + 1;
      p_Var1 = p_Var1 + 1;
    } while (i < file_load_sys.yet_files);
  }
  ResumeThread(load_th_idx);
  return FILE_LOAD_ID_NOT_EXIST;
}

FILE_LOAD_ENUM FileLoadCancel(int id, void (*func)(/* parameters unknown */), void *arg) {
	int i;
	
  _FILE_LOAD_WRK *p_Var1;
  int i;
  
  SuspendThread(load_th_idx);
  i = 0;
  if (0 < file_load_sys.yet_files) {
    p_Var1 = file_load_wrk;
    do {
      if (((long)(short)p_Var1->id == (long)(id >> 0x10)) &&
         ((uint)(ushort)p_Var1->temp_id == (id & 0xffffU))) {
        FileLoadCancelSub(i,func,arg);
        return FILE_LOAD_OK;
      }
      i = i + 1;
      p_Var1 = p_Var1 + 1;
    } while (i < file_load_sys.yet_files);
  }
  printf("FileLoadCancel() FILE_LOAD_ID IS NOT EXIST\n");
  ResumeThread(load_th_idx);
  return FILE_LOAD_ID_NOT_EXIST;
}

FILE_LOAD_ENUM FileLoadCancelAll() {
  _FILE_LOAD_ENUM__8_1555 _Var1;
  
  _Var1 = FILE_LOAD_ALREADY_ALL_LOAD;
  if (file_load_sys.yet_files != 0) {
    SuspendThread(load_th_idx);
    file_load_sys.cancel_type = LOAD_CANCEL_WAIT;
    SwapFileLoadWrk(0,file_load_sys.yet_files + -1);
    for (; 1 < file_load_sys.yet_files; file_load_sys.yet_files = file_load_sys.yet_files + -1) {
      WaitSema(load_req_sema_id);
    }
    ReqQueryLoadCancel();
    if (file_load_wrk->type == FILE_LOAD_TYPE_DECODE_EE) {
      cmp_eeiopCancel();
    }
    ResumeThread(load_th_idx);
    SleepThread();
    printf("FileLoadCancelAll End()\n");
    _Var1 = FILE_LOAD_OK;
  }
  return _Var1;
}

static int cmpFileWrkPri(void *a, void *b) {
  return *(int *)((int)b + 0x14) - *(int *)((int)a + 0x14);
}

static int cmpFileWrkSector(void *a, void *b) {
  return *(int *)((int)b + 4) - *(int *)((int)a + 4);
}

int FileLoadIsEnd2(int file_no, void *adrs) {
	int ret;
	int i;
	
  _FILE_LOAD_WRK *p_Var1;
  int iVar2;
  int iVar3;
  
  iVar3 = 1;
  SuspendThread(load_th_idx);
  iVar2 = file_load_sys.yet_files;
  p_Var1 = file_load_wrk;
  if (0 < file_load_sys.yet_files) {
    do {
      iVar2 = iVar2 + -1;
      if (((p_Var1->file_no == file_no) && (p_Var1->buffer == (char *)adrs)) &&
         (p_Var1->type != FILE_LOAD_TYPE_SPU)) {
        iVar3 = 0;
      }
      p_Var1 = p_Var1 + 1;
    } while (iVar2 != 0);
  }
  ResumeThread(load_th_idx);
  return iVar3;
}

int FileLoadIsEnd(int id) {
	int ret;
	int i;
	
  _FILE_LOAD_WRK *p_Var1;
  int iVar2;
  int iVar3;
  
  iVar3 = 1;
  SuspendThread(load_th_idx);
  if (0 < file_load_sys.yet_files) {
    iVar2 = file_load_sys.yet_files;
    p_Var1 = file_load_wrk;
    do {
      iVar2 = iVar2 + -1;
      if (((long)(short)p_Var1->id == (long)(id >> 0x10)) &&
         ((uint)(ushort)p_Var1->temp_id == (id & 0xffffU))) {
        iVar3 = 0;
      }
      p_Var1 = p_Var1 + 1;
    } while (iVar2 != 0);
  }
  ResumeThread(load_th_idx);
  return iVar3;
}

int AllFileLoadIsEnd() {
	int ret;
	
  int iVar1;
  
  SuspendThread(load_th_idx);
  iVar1 = file_load_sys.yet_files;
  ResumeThread(load_th_idx);
  return (int)(iVar1 < 1);
}

int FileLoadGetNeedSize(EEIOP_DEF *def) {
	int size;
	
  uint uVar1;
  int iVar2;
  
  uVar1 = GetAlignUp(def->file_load_wrk_num * 0x28,6);
  if (def->cmp_use_flg != 0) {
    iVar2 = cmp_eeiopGetWrkSize();
    uVar1 = uVar1 + iVar2;
  }
  return uVar1;
}

void* FileLoadInit(EEIOP_DEF *def, void *wrk_buffer) {
	int i;
	int i;
	
  bool bVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  ushort *puVar5;
  int iVar6;
  void *wrk_buffer_00;
  undefined auStack_90 [4];
  int local_8c;
  undefined4 local_88;
  undefined auStack_70 [4];
  code *local_6c;
  undefined4 *local_68;
  undefined4 local_64;
  undefined4 local_60;
  int local_5c;
  int local_58;
  undefined4 local_50;
  
  file_load_sys.file_load_wrk_max = def->file_load_wrk_num;
  file_load_wrk = (_FILE_LOAD_WRK *)wrk_buffer;
  uVar2 = GetAlignUp(def->file_load_wrk_num * 0x28,6);
  iVar3 = file_load_sys.file_load_wrk_max;
  wrk_buffer_00 = (void *)((int)wrk_buffer + uVar2);
  iVar6 = 0;
  if (0 < file_load_sys.file_load_wrk_max) {
    puVar5 = &file_load_wrk->id;
    do {
      *puVar5 = (ushort)iVar6;
      iVar6 = iVar6 + 1;
      puVar5 = puVar5 + 0x14;
    } while (iVar6 < iVar3);
  }
  file_load_sys.yet_files = 0;
  file_load_sys.master_thread_id = GetThreadId();
  file_load_sys.one_buf_size = 0xa000;
  file_load_sys.ring_buf_num = 4;
  file_load_sys.cancel_type = LOAD_CANCEL_NONE;
  do {
    iVar3 = sceSifBindRpc(&sif_cli_data_f,3,0);
    if (iVar3 < 0) {
      printf("error: sceSifBindRpc QUERY\n");
      do {
                    /* WARNING: Do nothing block with infinite loop */
      } while( true );
    }
    iVar3 = 0x270b;
    do {
      bVar1 = iVar3 != -1;
      iVar3 = iVar3 + -4;
    } while (bVar1);
  } while (sif_cli_data_f.serve == (_sif_serve_data *)0x0);
  local_88 = 0;
  local_8c = 1;
  rpc_sema_id = CreateSema(auStack_90);
  local_8c = file_load_sys.file_load_wrk_max;
  local_88 = 0;
  load_req_sema_id = CreateSema(auStack_90);
  if (def->cmp_use_flg != 0) {
    wrk_buffer_00 = cmp_eeiopInit(wrk_buffer_00);
  }
  ReferThreadStatus(file_load_sys.master_thread_id,auStack_70);
  file_load_sys.decode_th_priority = local_58 + 1;
  file_load_sys.load_th_priority = local_58 + -1;
  local_64 = 0x1000;
  local_50 = 0;
  local_68 = &file_load_stack_1;
  local_6c = thFileLoad;
  local_60 = 0x3f57f0;
  local_5c = file_load_sys.load_th_priority;
  uVar4 = CreateThread(auStack_70);
  load_th_idx = (int)uVar4;
  StartThread(uVar4,0);
  return wrk_buffer_00;
}

void PrintFileLoadWrk() {
	int i;
	
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < file_load_sys.yet_files) {
    iVar1 = 0;
    do {
      GetFileName(*(int *)((int)&file_load_wrk->file_no + iVar1));
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + 0x28;
      printf("yet[%d] name[%s], func[%x], id[%d] sector[%d]\n");
    } while (iVar2 < file_load_sys.yet_files);
  }
  return;
}

void rpcFileLoadReqSub(FILE_LOAD_WRK *wrk) {
	LOAD_REQ_NEW *req;
	char *ptr;
	char *dot_ptr;
	
  char cVar1;
  char cVar2;
  undefined4 uVar3;
  uint uVar4;
  ulong *puVar5;
  int iVar6;
  _LOAD_REQ_NEW *p_Var7;
  _LOAD_REQ_NEW *p_Var8;
  ulong *puVar9;
  char *pcVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  char *pcVar14;
  _LOAD_REQ_NEW local_150;
  
  if (wrk->type == FILE_LOAD_TYPE_DECODE_EE) {
    cmp_eeiopCreateDecodeThread
              (&local_150,wrk->size,(int)wrk->buffer,wrk->start_sector,
               file_load_sys.decode_th_priority);
    puVar5 = (ulong *)iop_fileload_cmd;
    p_Var8 = &local_150;
    do {
      p_Var7 = p_Var8;
      puVar9 = puVar5;
      uVar11 = *(ulong *)&p_Var7->adrs;
      uVar12 = *(ulong *)&(p_Var7->ld).ring_buf_num;
      uVar13 = *(ulong *)&(p_Var7->ld).size;
      *puVar9 = *(ulong *)p_Var7;
      puVar9[1] = uVar11;
      puVar9[2] = uVar12;
      puVar9[3] = uVar13;
      p_Var8 = (_LOAD_REQ_NEW *)((p_Var7->ld).file_name + 4);
      puVar5 = puVar9 + 4;
    } while (p_Var8 != (_LOAD_REQ_NEW *)(local_150.ld.file_name + 0xe4));
    uVar11._0_4_ = p_Var8->type;
    uVar11._4_4_ = p_Var8->tmp_ee_adrs;
    uVar12 = *(ulong *)((p_Var7->ld).file_name + 0xc);
    uVar13 = *(ulong *)((p_Var7->ld).file_name + 0x14);
    uVar3 = *(undefined4 *)((p_Var7->ld).file_name + 0x1c);
    uVar4 = (int)puVar9 + 0x27U & 7;
    puVar5 = (ulong *)(((int)puVar9 + 0x27U) - uVar4);
    *puVar5 = *puVar5 & -1L << (uVar4 + 1) * 8 | uVar11 >> (7 - uVar4) * 8;
    puVar9[4] = uVar11;
    uVar4 = (int)puVar9 + 0x2fU & 7;
    puVar5 = (ulong *)(((int)puVar9 + 0x2fU) - uVar4);
    *puVar5 = *puVar5 & -1L << (uVar4 + 1) * 8 | uVar12 >> (7 - uVar4) * 8;
    puVar9[5] = uVar12;
    uVar4 = (int)puVar9 + 0x37U & 7;
    puVar5 = (ulong *)(((int)puVar9 + 0x37U) - uVar4);
    *puVar5 = *puVar5 & -1L << (uVar4 + 1) * 8 | uVar13 >> (7 - uVar4) * 8;
    puVar9[6] = uVar13;
    *(undefined4 *)(puVar9 + 7) = uVar3;
  }
  else {
    iop_fileload_cmd._8_4_ = wrk->buffer + wrk->read_size;
    iop_fileload_cmd._24_4_ = wrk->size - wrk->read_size;
    iop_fileload_cmd._20_4_ = wrk->start_sector + (wrk->read_size >> 0xb);
    iop_fileload_cmd._0_4_ = wrk->type;
  }
  iop_fileload_cmd[16] = (undefined)file_load_sys.ring_buf_num;
  iop_fileload_cmd[17] = file_load_sys.ring_buf_num._1_1_;
  iop_fileload_cmd[18] = file_load_sys.ring_buf_num._2_1_;
  iop_fileload_cmd[19] = file_load_sys.ring_buf_num._3_1_;
  iop_fileload_cmd[12] = (undefined)file_load_sys.one_buf_size;
  iop_fileload_cmd[13] = file_load_sys.one_buf_size._1_1_;
  iop_fileload_cmd[14] = file_load_sys.one_buf_size._2_1_;
  iop_fileload_cmd[15] = file_load_sys.one_buf_size._3_1_;
  iVar6 = cddatIsCmpFile(wrk->file_no);
  pcVar14 = iop_fileload_cmd + 0x1c;
  if (iVar6 == 0) {
    GetFileNameBuffer(wrk->file_no,iop_fileload_cmd + 0x1c);
  }
  else {
    GetFileNameBuffer(wrk->file_no,iop_fileload_cmd + 0x1c);
    pcVar10 = (char *)0x0;
    cVar2 = iop_fileload_cmd[28];
    cVar1 = iop_fileload_cmd[28];
    while (cVar1 != '\0') {
      if (cVar2 == '.') {
        pcVar10 = pcVar14;
      }
      pcVar14 = pcVar14 + 1;
      cVar2 = *pcVar14;
      cVar1 = *pcVar14;
    }
    if (pcVar10 != (char *)0x0) {
      *pcVar10 = '_';
    }
    strcat(iop_fileload_cmd + 0x1c,&DAT_003f4960);
  }
  if (iop_fileload_cmd._8_4_ == 0) {
    SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
    PrintAssertReal("Load Adrs Is NULL!!");
  }
  FlushCache(0);
  sceSifCallRpc(&sif_cli_data_f,0,1,iop_fileload_cmd,0x140,iop_fileload_ret,0x40,
                intr_SifEnd_FileLoad,(void *)0x0);
  return;
}

static int FileLoadReq(int file_no, char *adrs, int priority, void (*func)(/* parameters unknown */), void *arg, FILE_LOAD_TYPE type) {
	int ret;
	FILE_LOAD_WRK *wrk;
	FILE_LOAD_WRK *now_load_wrk;
	
  undefined *puVar1;
  uint uVar2;
  ushort uVar3;
  ulong *puVar4;
  short sVar5;
  uint uVar6;
  int iVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  _FILE_LOAD_WRK *p_Var15;
  _FILE_LOAD_WRK *p_Var16;
  undefined auStack_80 [8];
  undefined auStack_78 [8];
  undefined auStack_70 [8];
  undefined auStack_68 [8];
  undefined auStack_60 [16];
  
  uVar12 = (ulong)(int)arg;
  uVar10 = (ulong)(int)func;
  uVar8 = (ulong)priority;
  if (file_no < 0) {
    uVar10 = 0x3e7268;
    uVar8 = 0x292;
    SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
    PrintAssertReal("Requested FileNo Is Under Zero");
  }
  SuspendThread(load_th_idx);
  if (file_load_sys.file_load_wrk_max <= file_load_sys.yet_files + 1) {
    uVar10 = 0x3e7268;
    uVar8 = 0x29e;
    SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
    PrintAssertReal("RegisteredFiles Is Over LoadWrkNum %d");
  }
  if (file_load_sys.yet_files == 0) {
    p_Var15 = (_FILE_LOAD_WRK *)0x0;
    p_Var16 = file_load_wrk;
  }
  else {
    iVar7 = file_load_sys.yet_files + -1;
    p_Var16 = file_load_wrk + file_load_sys.yet_files;
    puVar1 = (undefined *)((int)&p_Var16->start_sector + 3);
    uVar6 = (uint)puVar1 & 7;
    uVar2 = (uint)p_Var16 & 7;
    auStack_80 = (undefined  [8])
                 ((*(long *)(puVar1 + -uVar6) << (7 - uVar6) * 8 |
                  (long)iVar7 & 0xffffffffffffffffU >> (uVar6 + 1) * 8) & -1L << (8 - uVar2) * 8 |
                 *(ulong *)((int)p_Var16 - uVar2) >> uVar2 * 8);
    puVar1 = (undefined *)((int)&p_Var16->func + 3);
    uVar6 = (uint)puVar1 & 7;
    uVar2 = (uint)&p_Var16->buffer & 7;
    uVar9 = (*(long *)(puVar1 + -uVar6) << (7 - uVar6) * 8 |
            uVar8 & 0xffffffffffffffffU >> (uVar6 + 1) * 8) & -1L << (8 - uVar2) * 8 |
            *(ulong *)((int)&p_Var16->buffer - uVar2) >> uVar2 * 8;
    puVar1 = (undefined *)((int)&p_Var16->priority + 3);
    uVar6 = (uint)puVar1 & 7;
    uVar2 = (uint)&p_Var16->type & 7;
    uVar11 = (*(long *)(puVar1 + -uVar6) << (7 - uVar6) * 8 |
             uVar10 & 0xffffffffffffffffU >> (uVar6 + 1) * 8) & -1L << (8 - uVar2) * 8 |
             *(ulong *)((int)&p_Var16->type - uVar2) >> uVar2 * 8;
    puVar1 = (undefined *)((int)&p_Var16->read_size + 3);
    uVar6 = (uint)puVar1 & 7;
    uVar2 = (uint)&p_Var16->arg & 7;
    uVar13 = (*(long *)(puVar1 + -uVar6) << (7 - uVar6) * 8 |
             uVar12 & 0xffffffffffffffffU >> (uVar6 + 1) * 8) & -1L << (8 - uVar2) * 8 |
             *(ulong *)((int)&p_Var16->arg - uVar2) >> uVar2 * 8;
    puVar1 = auStack_80 + 7;
    uVar6 = (uint)puVar1 & 7;
    *(ulong *)(puVar1 + -uVar6) =
         *(ulong *)(puVar1 + -uVar6) & -1L << (uVar6 + 1) * 8 | (ulong)auStack_80 >> (7 - uVar6) * 8
    ;
    puVar1 = auStack_78 + 7;
    uVar6 = (uint)puVar1 & 7;
    *(ulong *)(puVar1 + -uVar6) =
         *(ulong *)(puVar1 + -uVar6) & -1L << (uVar6 + 1) * 8 | uVar9 >> (7 - uVar6) * 8;
    puVar1 = auStack_70 + 7;
    uVar6 = (uint)puVar1 & 7;
    *(ulong *)(puVar1 + -uVar6) =
         *(ulong *)(puVar1 + -uVar6) & -1L << (uVar6 + 1) * 8 | uVar11 >> (7 - uVar6) * 8;
    puVar1 = auStack_68 + 7;
    uVar6 = (uint)puVar1 & 7;
    *(ulong *)(puVar1 + -uVar6) =
         *(ulong *)(puVar1 + -uVar6) & -1L << (uVar6 + 1) * 8 | uVar13 >> (7 - uVar6) * 8;
    puVar1 = (undefined *)((int)&p_Var16->id + 1);
    uVar6 = (uint)puVar1 & 7;
    uVar2 = (uint)&p_Var16->size & 7;
    auStack_60._0_8_ =
         (*(long *)(puVar1 + -uVar6) << (7 - uVar6) * 8 |
         (ulong)auStack_80 & 0xffffffffffffffffU >> (uVar6 + 1) * 8) & -1L << (8 - uVar2) * 8 |
         *(ulong *)((int)&p_Var16->size - uVar2) >> uVar2 * 8;
    puVar1 = auStack_60 + 7;
    uVar6 = (uint)puVar1 & 7;
    *(ulong *)(puVar1 + -uVar6) =
         *(ulong *)(puVar1 + -uVar6) & -1L << (uVar6 + 1) * 8 |
         (ulong)auStack_60._0_8_ >> (7 - uVar6) * 8;
    p_Var15 = file_load_wrk + iVar7;
    puVar1 = (undefined *)((int)&p_Var15->start_sector + 3);
    uVar6 = (uint)puVar1 & 7;
    uVar2 = (uint)p_Var15 & 7;
    uVar8 = (*(long *)(puVar1 + -uVar6) << (7 - uVar6) * 8 |
            auStack_60._0_8_ & 0xffffffffffffffffU >> (uVar6 + 1) * 8) & -1L << (8 - uVar2) * 8 |
            *(ulong *)((int)p_Var15 - uVar2) >> uVar2 * 8;
    puVar1 = (undefined *)((int)&p_Var15->func + 3);
    uVar6 = (uint)puVar1 & 7;
    uVar2 = (uint)&p_Var15->buffer & 7;
    uVar10 = (*(long *)(puVar1 + -uVar6) << (7 - uVar6) * 8 |
             uVar9 & 0xffffffffffffffffU >> (uVar6 + 1) * 8) & -1L << (8 - uVar2) * 8 |
             *(ulong *)((int)&p_Var15->buffer - uVar2) >> uVar2 * 8;
    puVar1 = (undefined *)((int)&p_Var15->priority + 3);
    uVar6 = (uint)puVar1 & 7;
    uVar2 = (uint)&p_Var15->type & 7;
    uVar12 = (*(long *)(puVar1 + -uVar6) << (7 - uVar6) * 8 |
             uVar11 & 0xffffffffffffffffU >> (uVar6 + 1) * 8) & -1L << (8 - uVar2) * 8 |
             *(ulong *)((int)&p_Var15->type - uVar2) >> uVar2 * 8;
    puVar1 = (undefined *)((int)&p_Var15->read_size + 3);
    uVar6 = (uint)puVar1 & 7;
    uVar2 = (uint)&p_Var15->arg & 7;
    uVar14 = (*(long *)(puVar1 + -uVar6) << (7 - uVar6) * 8 |
             uVar13 & 0xffffffffffffffffU >> (uVar6 + 1) * 8) & -1L << (8 - uVar2) * 8 |
             *(ulong *)((int)&p_Var15->arg - uVar2) >> uVar2 * 8;
    puVar1 = (undefined *)((int)&p_Var16->start_sector + 3);
    uVar6 = (uint)puVar1 & 7;
    puVar4 = (ulong *)(puVar1 + -uVar6);
    *puVar4 = *puVar4 & -1L << (uVar6 + 1) * 8 | uVar8 >> (7 - uVar6) * 8;
    uVar6 = (uint)p_Var16 & 7;
    *(ulong *)((int)p_Var16 - uVar6) =
         uVar8 << uVar6 * 8 |
         *(ulong *)((int)p_Var16 - uVar6) & 0xffffffffffffffffU >> (8 - uVar6) * 8;
    puVar1 = (undefined *)((int)&p_Var16->func + 3);
    uVar6 = (uint)puVar1 & 7;
    puVar4 = (ulong *)(puVar1 + -uVar6);
    *puVar4 = *puVar4 & -1L << (uVar6 + 1) * 8 | uVar10 >> (7 - uVar6) * 8;
    uVar6 = (uint)&p_Var16->buffer & 7;
    puVar4 = (ulong *)((int)&p_Var16->buffer - uVar6);
    *puVar4 = uVar10 << uVar6 * 8 | *puVar4 & 0xffffffffffffffffU >> (8 - uVar6) * 8;
    puVar1 = (undefined *)((int)&p_Var16->priority + 3);
    uVar6 = (uint)puVar1 & 7;
    puVar4 = (ulong *)(puVar1 + -uVar6);
    *puVar4 = *puVar4 & -1L << (uVar6 + 1) * 8 | uVar12 >> (7 - uVar6) * 8;
    uVar6 = (uint)&p_Var16->type & 7;
    puVar4 = (ulong *)((int)&p_Var16->type - uVar6);
    *puVar4 = uVar12 << uVar6 * 8 | *puVar4 & 0xffffffffffffffffU >> (8 - uVar6) * 8;
    puVar1 = (undefined *)((int)&p_Var16->read_size + 3);
    uVar6 = (uint)puVar1 & 7;
    puVar4 = (ulong *)(puVar1 + -uVar6);
    *puVar4 = *puVar4 & -1L << (uVar6 + 1) * 8 | uVar14 >> (7 - uVar6) * 8;
    uVar6 = (uint)&p_Var16->arg & 7;
    puVar4 = (ulong *)((int)&p_Var16->arg - uVar6);
    *puVar4 = uVar14 << uVar6 * 8 | *puVar4 & 0xffffffffffffffffU >> (8 - uVar6) * 8;
    puVar1 = (undefined *)((int)&p_Var15->id + 1);
    uVar6 = (uint)puVar1 & 7;
    uVar2 = (uint)&p_Var15->size & 7;
    uVar8 = (*(long *)(puVar1 + -uVar6) << (7 - uVar6) * 8 |
            uVar8 & 0xffffffffffffffffU >> (uVar6 + 1) * 8) & -1L << (8 - uVar2) * 8 |
            *(ulong *)((int)&p_Var15->size - uVar2) >> uVar2 * 8;
    puVar1 = (undefined *)((int)&p_Var16->id + 1);
    uVar6 = (uint)puVar1 & 7;
    puVar4 = (ulong *)(puVar1 + -uVar6);
    *puVar4 = *puVar4 & -1L << (uVar6 + 1) * 8 | uVar8 >> (7 - uVar6) * 8;
    uVar6 = (uint)&p_Var16->size & 7;
    puVar4 = (ulong *)((int)&p_Var16->size - uVar6);
    *puVar4 = uVar8 << uVar6 * 8 | *puVar4 & 0xffffffffffffffffU >> (8 - uVar6) * 8;
    p_Var16 = file_load_wrk + iVar7;
    puVar1 = (undefined *)((int)&p_Var16->start_sector + 3);
    uVar6 = (uint)puVar1 & 7;
    puVar4 = (ulong *)(puVar1 + -uVar6);
    *puVar4 = *puVar4 & -1L << (uVar6 + 1) * 8 | (ulong)auStack_80 >> (7 - uVar6) * 8;
    uVar6 = (uint)p_Var16 & 7;
    *(ulong *)((int)p_Var16 - uVar6) =
         (long)auStack_80 << uVar6 * 8 |
         *(ulong *)((int)p_Var16 - uVar6) & 0xffffffffffffffffU >> (8 - uVar6) * 8;
    puVar1 = (undefined *)((int)&p_Var16->func + 3);
    uVar6 = (uint)puVar1 & 7;
    puVar4 = (ulong *)(puVar1 + -uVar6);
    *puVar4 = *puVar4 & -1L << (uVar6 + 1) * 8 | uVar9 >> (7 - uVar6) * 8;
    uVar6 = (uint)&p_Var16->buffer & 7;
    puVar4 = (ulong *)((int)&p_Var16->buffer - uVar6);
    *puVar4 = uVar9 << uVar6 * 8 | *puVar4 & 0xffffffffffffffffU >> (8 - uVar6) * 8;
    puVar1 = (undefined *)((int)&p_Var16->priority + 3);
    uVar6 = (uint)puVar1 & 7;
    puVar4 = (ulong *)(puVar1 + -uVar6);
    *puVar4 = *puVar4 & -1L << (uVar6 + 1) * 8 | uVar11 >> (7 - uVar6) * 8;
    uVar6 = (uint)&p_Var16->type & 7;
    puVar4 = (ulong *)((int)&p_Var16->type - uVar6);
    *puVar4 = uVar11 << uVar6 * 8 | *puVar4 & 0xffffffffffffffffU >> (8 - uVar6) * 8;
    puVar1 = (undefined *)((int)&p_Var16->read_size + 3);
    uVar6 = (uint)puVar1 & 7;
    puVar4 = (ulong *)(puVar1 + -uVar6);
    *puVar4 = *puVar4 & -1L << (uVar6 + 1) * 8 | uVar13 >> (7 - uVar6) * 8;
    uVar6 = (uint)&p_Var16->arg & 7;
    puVar4 = (ulong *)((int)&p_Var16->arg - uVar6);
    *puVar4 = uVar13 << uVar6 * 8 | *puVar4 & 0xffffffffffffffffU >> (8 - uVar6) * 8;
    puVar1 = (undefined *)((int)&p_Var16->id + 1);
    uVar6 = (uint)puVar1 & 7;
    puVar4 = (ulong *)(puVar1 + -uVar6);
    *puVar4 = *puVar4 & -1L << (uVar6 + 1) * 8 | (ulong)auStack_60._0_8_ >> (7 - uVar6) * 8;
    uVar6 = (uint)&p_Var16->size & 7;
    puVar4 = (ulong *)((int)&p_Var16->size - uVar6);
    *puVar4 = auStack_60._0_8_ << uVar6 * 8 | *puVar4 & 0xffffffffffffffffU >> (8 - uVar6) * 8;
    p_Var15 = file_load_wrk + file_load_sys.yet_files;
    p_Var16 = p_Var15 + -1;
    auStack_78 = (undefined  [8])uVar9;
    auStack_70 = (undefined  [8])uVar11;
    auStack_68 = (undefined  [8])uVar13;
  }
  p_Var16->buffer = adrs;
  p_Var16->func = func;
  p_Var16->arg = arg;
  p_Var16->file_no = file_no;
  iVar7 = GetFileStartSector(file_no);
  p_Var16->start_sector = iVar7;
  if (iVar7 < 0) {
    SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
    PrintAssertReal("StartSector(File[%d]) Is Under 0");
  }
  p_Var16->type = type;
  p_Var16->priority = priority;
  p_Var16->read_size = 0;
  uVar6 = GetFileCmpSize(file_no);
  p_Var16->size = uVar6;
  iVar7 = load_req_sema_id;
  file_load_sys.yet_files = file_load_sys.yet_files + 1;
  sVar5 = file_load_wrk_id + 1;
  p_Var16->temp_id = file_load_wrk_id;
  file_load_wrk_id = sVar5;
  SignalSema(iVar7);
  if (p_Var15 == (_FILE_LOAD_WRK *)0x0) {
    iVar7 = (int)(short)p_Var16->id;
  }
  else if (file_load_sys.cancel_type == LOAD_CANCEL_NONE) {
    if ((uint)p_Var15->type < 2) {
      if (p_Var16->priority < p_Var15->priority) {
        ReqQueryLoadCancel();
        file_load_sys.cancel_type = LOAD_CANCEL_STORE;
        iVar7 = (int)(short)p_Var16->id;
      }
      else {
        iVar7 = (int)(short)p_Var16->id;
      }
    }
    else {
      iVar7 = (int)(short)p_Var16->id;
    }
  }
  else {
    iVar7 = (int)(short)p_Var16->id;
  }
  uVar3 = p_Var16->temp_id;
  ResumeThread(load_th_idx);
  return iVar7 << 0x10 | (uint)uVar3;
}

static void intr_SifEnd_FileLoad(void *data) {
  iSignalSema(rpc_sema_id);
  SYNC(0);
  EI();
  return;
}

static void thFileLoad(void *dummy) {
	FILE_LOAD_RET *ret;
	FILE_LOAD_WRK *wrk;
	int end_flg;
	int i;
	int part_sort_start;
	int priority;
	char aStr[300];
	
  int iVar1;
  bool bVar2;
  _FILE_LOAD_WRK *p_Var3;
  int iVar4;
  int iVar5;
  _FILE_LOAD_WRK *p_Var6;
  int iVar7;
  int iVar8;
  int iVar9;
  char aStr [300];
  
  do {
    iVar8 = 0;
    WaitSema(load_req_sema_id);
    iVar4 = file_load_sys.yet_files;
    qsort(file_load_wrk,file_load_sys.yet_files,0x28,cmpFileWrkPri);
    iVar5 = 0;
    iVar7 = file_load_wrk->priority;
    p_Var6 = file_load_wrk;
    if (0 < iVar4) {
      p_Var3 = file_load_wrk;
      iVar9 = 0;
      do {
        iVar1 = p_Var3->priority;
        if (iVar1 != iVar7) {
          qsort(p_Var6 + iVar5,iVar8 - iVar5,0x28,cmpFileWrkSector);
          iVar5 = iVar8;
          p_Var6 = file_load_wrk;
          iVar7 = iVar1;
        }
        iVar8 = iVar8 + 1;
        p_Var3 = (_FILE_LOAD_WRK *)((int)&p_Var6[1].file_no + iVar9);
        iVar9 = iVar9 + 0x28;
      } while (iVar8 < iVar4);
    }
    qsort(p_Var6 + iVar5,iVar8 - iVar5,0x28,cmpFileWrkSector);
    rpcFileLoadReqSub(file_load_wrk + file_load_sys.yet_files + -1);
    if (file_load_wrk[file_load_sys.yet_files + -1].type == FILE_LOAD_TYPE_DECODE_EE) {
      cmp_eeiopWaitSema();
    }
    bVar2 = false;
    WaitSema(rpc_sema_id);
    iVar7 = file_load_sys.yet_files;
    p_Var6 = file_load_wrk;
    p_Var3 = file_load_wrk + file_load_sys.yet_files + -1;
    if (file_load_sys.cancel_type == LOAD_CANCEL_STORE) {
      iVar4 = file_load_wrk[file_load_sys.yet_files + -1].size;
      iVar5 = file_load_wrk[file_load_sys.yet_files + -1].read_size + iop_fileload_ret._0_4_;
      file_load_wrk[file_load_sys.yet_files + -1].read_size = iVar5;
      if (iVar5 < iVar4) {
        SignalSema(load_req_sema_id);
      }
      else {
        bVar2 = true;
      }
    }
    else if (file_load_sys.cancel_type == LOAD_CANCEL_NONE) {
      bVar2 = true;
    }
    else {
      if (file_load_sys.cancel_type != LOAD_CANCEL_NORMAL) {
        if (file_load_sys.cancel_type != LOAD_CANCEL_WAIT) {
          SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
          PrintAssertReal("load_cancel_type err");
          goto LAB_0026f138;
        }
        WakeupThread(file_load_sys.master_thread_id);
      }
      if (file_load_sys.cancel_func != (undefined1 *)0x0) {
        (*(code *)file_load_sys.cancel_func)(p_Var6[iVar7 + -1].buffer,file_load_sys.cancel_arg);
      }
      file_load_sys.yet_files = file_load_sys.yet_files + -1;
    }
LAB_0026f138:
    file_load_sys.cancel_type = LOAD_CANCEL_NONE;
    if (bVar2) {
      GetFileNameBuffer(p_Var3->file_no,aStr);
      iVar4 = cddatIsCmpFile(p_Var3->file_no);
      if (iVar4 == 0) {
        printf("LoadEnd no[% 4d] id[%06x] adrs[0x%08x] size[%x] [%s]\n");
      }
      else {
        printf("LoadEnd no[% 4d] id[%06x] adrs[0x%08x] size[%x] [%s] << This Is Compressed File\n");
      }
      file_load_sys.yet_files = file_load_sys.yet_files + -1;
      if ((code *)p_Var6[iVar7 + -1].func != (code *)0x0) {
        (*(code *)p_Var6[iVar7 + -1].func)(p_Var6[iVar7 + -1].buffer,p_Var6[iVar7 + -1].arg);
      }
    }
  } while( true );
}

void FileLoadChangeThreadPriority(int load_th_priority, int decode_th_priority) {
  ChangeThreadPriority(load_th_idx,load_th_priority);
  file_load_sys.load_th_priority = load_th_priority;
  cmp_eeiopChangePriority(decode_th_priority);
  file_load_sys.decode_th_priority = decode_th_priority;
  return;
}

static void SwapFileLoadWrk(int one, int two) {
	FILE_LOAD_WRK temp;
	
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  ulong *puVar4;
  _FILE_LOAD_WRK *p_Var5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  _FILE_LOAD_WRK *p_Var11;
  ulong in_a3;
  ulong uVar12;
  ulong uVar13;
  ulong in_t0;
  ulong uVar14;
  ulong uVar15;
  _FILE_LOAD_WRK temp;
  
  p_Var5 = file_load_wrk + one;
  puVar1 = (undefined *)((int)&p_Var5->start_sector + 3);
  uVar2 = (uint)puVar1 & 7;
  uVar3 = (uint)p_Var5 & 7;
  uVar6 = (*(long *)(puVar1 + -uVar2) << (7 - uVar2) * 8 |
          (long)one & 0xffffffffffffffffU >> (uVar2 + 1) * 8) & -1L << (8 - uVar3) * 8 |
          *(ulong *)((int)p_Var5 - uVar3) >> uVar3 * 8;
  puVar1 = (undefined *)((int)&p_Var5->func + 3);
  uVar2 = (uint)puVar1 & 7;
  uVar3 = (uint)&p_Var5->buffer & 7;
  uVar9 = (*(long *)(puVar1 + -uVar2) << (7 - uVar2) * 8 |
          (long)two & 0xffffffffffffffffU >> (uVar2 + 1) * 8) & -1L << (8 - uVar3) * 8 |
          *(ulong *)((int)&p_Var5->buffer - uVar3) >> uVar3 * 8;
  puVar1 = (undefined *)((int)&p_Var5->priority + 3);
  uVar2 = (uint)puVar1 & 7;
  uVar3 = (uint)&p_Var5->type & 7;
  uVar12 = (*(long *)(puVar1 + -uVar2) << (7 - uVar2) * 8 |
           in_a3 & 0xffffffffffffffffU >> (uVar2 + 1) * 8) & -1L << (8 - uVar3) * 8 |
           *(ulong *)((int)&p_Var5->type - uVar3) >> uVar3 * 8;
  puVar1 = (undefined *)((int)&p_Var5->read_size + 3);
  uVar2 = (uint)puVar1 & 7;
  uVar3 = (uint)&p_Var5->arg & 7;
  uVar14 = (*(long *)(puVar1 + -uVar2) << (7 - uVar2) * 8 |
           in_t0 & 0xffffffffffffffffU >> (uVar2 + 1) * 8) & -1L << (8 - uVar3) * 8 |
           *(ulong *)((int)&p_Var5->arg - uVar3) >> uVar3 * 8;
  puVar1 = (undefined *)((int)&temp.start_sector + 3);
  uVar2 = (uint)puVar1 & 7;
  puVar4 = (ulong *)(puVar1 + -uVar2);
  *puVar4 = *puVar4 & -1L << (uVar2 + 1) * 8 | uVar6 >> (7 - uVar2) * 8;
  puVar1 = (undefined *)((int)&temp.func + 3);
  uVar2 = (uint)puVar1 & 7;
  puVar4 = (ulong *)(puVar1 + -uVar2);
  *puVar4 = *puVar4 & -1L << (uVar2 + 1) * 8 | uVar9 >> (7 - uVar2) * 8;
  puVar1 = (undefined *)((int)&temp.priority + 3);
  uVar2 = (uint)puVar1 & 7;
  puVar4 = (ulong *)(puVar1 + -uVar2);
  *puVar4 = *puVar4 & -1L << (uVar2 + 1) * 8 | uVar12 >> (7 - uVar2) * 8;
  puVar1 = (undefined *)((int)&temp.read_size + 3);
  uVar2 = (uint)puVar1 & 7;
  puVar4 = (ulong *)(puVar1 + -uVar2);
  *puVar4 = *puVar4 & -1L << (uVar2 + 1) * 8 | uVar14 >> (7 - uVar2) * 8;
  puVar1 = (undefined *)((int)&p_Var5->id + 1);
  uVar2 = (uint)puVar1 & 7;
  uVar3 = (uint)&p_Var5->size & 7;
  uVar7 = (*(long *)(puVar1 + -uVar2) << (7 - uVar2) * 8 |
          uVar6 & 0xffffffffffffffffU >> (uVar2 + 1) * 8) & -1L << (8 - uVar3) * 8 |
          *(ulong *)((int)&p_Var5->size - uVar3) >> uVar3 * 8;
  puVar1 = (undefined *)((int)&temp.id + 1);
  uVar2 = (uint)puVar1 & 7;
  puVar4 = (ulong *)(puVar1 + -uVar2);
  *puVar4 = *puVar4 & -1L << (uVar2 + 1) * 8 | uVar7 >> (7 - uVar2) * 8;
  p_Var11 = file_load_wrk + two;
  puVar1 = (undefined *)((int)&p_Var11->start_sector + 3);
  uVar2 = (uint)puVar1 & 7;
  uVar3 = (uint)p_Var11 & 7;
  uVar8 = (*(long *)(puVar1 + -uVar2) << (7 - uVar2) * 8 |
          uVar7 & 0xffffffffffffffffU >> (uVar2 + 1) * 8) & -1L << (8 - uVar3) * 8 |
          *(ulong *)((int)p_Var11 - uVar3) >> uVar3 * 8;
  puVar1 = (undefined *)((int)&p_Var11->func + 3);
  uVar2 = (uint)puVar1 & 7;
  uVar3 = (uint)&p_Var11->buffer & 7;
  uVar10 = (*(long *)(puVar1 + -uVar2) << (7 - uVar2) * 8 |
           uVar9 & 0xffffffffffffffffU >> (uVar2 + 1) * 8) & -1L << (8 - uVar3) * 8 |
           *(ulong *)((int)&p_Var11->buffer - uVar3) >> uVar3 * 8;
  puVar1 = (undefined *)((int)&p_Var11->priority + 3);
  uVar2 = (uint)puVar1 & 7;
  uVar3 = (uint)&p_Var11->type & 7;
  uVar13 = (*(long *)(puVar1 + -uVar2) << (7 - uVar2) * 8 |
           uVar12 & 0xffffffffffffffffU >> (uVar2 + 1) * 8) & -1L << (8 - uVar3) * 8 |
           *(ulong *)((int)&p_Var11->type - uVar3) >> uVar3 * 8;
  puVar1 = (undefined *)((int)&p_Var11->read_size + 3);
  uVar2 = (uint)puVar1 & 7;
  uVar3 = (uint)&p_Var11->arg & 7;
  uVar15 = (*(long *)(puVar1 + -uVar2) << (7 - uVar2) * 8 |
           uVar14 & 0xffffffffffffffffU >> (uVar2 + 1) * 8) & -1L << (8 - uVar3) * 8 |
           *(ulong *)((int)&p_Var11->arg - uVar3) >> uVar3 * 8;
  puVar1 = (undefined *)((int)&p_Var5->start_sector + 3);
  uVar2 = (uint)puVar1 & 7;
  puVar4 = (ulong *)(puVar1 + -uVar2);
  *puVar4 = *puVar4 & -1L << (uVar2 + 1) * 8 | uVar8 >> (7 - uVar2) * 8;
  uVar2 = (uint)p_Var5 & 7;
  *(ulong *)((int)p_Var5 - uVar2) =
       uVar8 << uVar2 * 8 | *(ulong *)((int)p_Var5 - uVar2) & 0xffffffffffffffffU >> (8 - uVar2) * 8
  ;
  puVar1 = (undefined *)((int)&p_Var5->func + 3);
  uVar2 = (uint)puVar1 & 7;
  puVar4 = (ulong *)(puVar1 + -uVar2);
  *puVar4 = *puVar4 & -1L << (uVar2 + 1) * 8 | uVar10 >> (7 - uVar2) * 8;
  uVar2 = (uint)&p_Var5->buffer & 7;
  puVar4 = (ulong *)((int)&p_Var5->buffer - uVar2);
  *puVar4 = uVar10 << uVar2 * 8 | *puVar4 & 0xffffffffffffffffU >> (8 - uVar2) * 8;
  puVar1 = (undefined *)((int)&p_Var5->priority + 3);
  uVar2 = (uint)puVar1 & 7;
  puVar4 = (ulong *)(puVar1 + -uVar2);
  *puVar4 = *puVar4 & -1L << (uVar2 + 1) * 8 | uVar13 >> (7 - uVar2) * 8;
  uVar2 = (uint)&p_Var5->type & 7;
  puVar4 = (ulong *)((int)&p_Var5->type - uVar2);
  *puVar4 = uVar13 << uVar2 * 8 | *puVar4 & 0xffffffffffffffffU >> (8 - uVar2) * 8;
  puVar1 = (undefined *)((int)&p_Var5->read_size + 3);
  uVar2 = (uint)puVar1 & 7;
  puVar4 = (ulong *)(puVar1 + -uVar2);
  *puVar4 = *puVar4 & -1L << (uVar2 + 1) * 8 | uVar15 >> (7 - uVar2) * 8;
  uVar2 = (uint)&p_Var5->arg & 7;
  puVar4 = (ulong *)((int)&p_Var5->arg - uVar2);
  *puVar4 = uVar15 << uVar2 * 8 | *puVar4 & 0xffffffffffffffffU >> (8 - uVar2) * 8;
  puVar1 = (undefined *)((int)&p_Var11->id + 1);
  uVar2 = (uint)puVar1 & 7;
  uVar3 = (uint)&p_Var11->size & 7;
  uVar8 = (*(long *)(puVar1 + -uVar2) << (7 - uVar2) * 8 |
          uVar8 & 0xffffffffffffffffU >> (uVar2 + 1) * 8) & -1L << (8 - uVar3) * 8 |
          *(ulong *)((int)&p_Var11->size - uVar3) >> uVar3 * 8;
  puVar1 = (undefined *)((int)&p_Var5->id + 1);
  uVar2 = (uint)puVar1 & 7;
  puVar4 = (ulong *)(puVar1 + -uVar2);
  *puVar4 = *puVar4 & -1L << (uVar2 + 1) * 8 | uVar8 >> (7 - uVar2) * 8;
  uVar2 = (uint)&p_Var5->size & 7;
  puVar4 = (ulong *)((int)&p_Var5->size - uVar2);
  *puVar4 = uVar8 << uVar2 * 8 | *puVar4 & 0xffffffffffffffffU >> (8 - uVar2) * 8;
  p_Var5 = file_load_wrk + two;
  puVar1 = (undefined *)((int)&p_Var5->start_sector + 3);
  uVar2 = (uint)puVar1 & 7;
  puVar4 = (ulong *)(puVar1 + -uVar2);
  *puVar4 = *puVar4 & -1L << (uVar2 + 1) * 8 | uVar6 >> (7 - uVar2) * 8;
  uVar2 = (uint)p_Var5 & 7;
  *(ulong *)((int)p_Var5 - uVar2) =
       uVar6 << uVar2 * 8 | *(ulong *)((int)p_Var5 - uVar2) & 0xffffffffffffffffU >> (8 - uVar2) * 8
  ;
  puVar1 = (undefined *)((int)&p_Var5->func + 3);
  uVar2 = (uint)puVar1 & 7;
  puVar4 = (ulong *)(puVar1 + -uVar2);
  *puVar4 = *puVar4 & -1L << (uVar2 + 1) * 8 | uVar9 >> (7 - uVar2) * 8;
  uVar2 = (uint)&p_Var5->buffer & 7;
  puVar4 = (ulong *)((int)&p_Var5->buffer - uVar2);
  *puVar4 = uVar9 << uVar2 * 8 | *puVar4 & 0xffffffffffffffffU >> (8 - uVar2) * 8;
  puVar1 = (undefined *)((int)&p_Var5->priority + 3);
  uVar2 = (uint)puVar1 & 7;
  puVar4 = (ulong *)(puVar1 + -uVar2);
  *puVar4 = *puVar4 & -1L << (uVar2 + 1) * 8 | uVar12 >> (7 - uVar2) * 8;
  uVar2 = (uint)&p_Var5->type & 7;
  puVar4 = (ulong *)((int)&p_Var5->type - uVar2);
  *puVar4 = uVar12 << uVar2 * 8 | *puVar4 & 0xffffffffffffffffU >> (8 - uVar2) * 8;
  puVar1 = (undefined *)((int)&p_Var5->read_size + 3);
  uVar2 = (uint)puVar1 & 7;
  puVar4 = (ulong *)(puVar1 + -uVar2);
  *puVar4 = *puVar4 & -1L << (uVar2 + 1) * 8 | uVar14 >> (7 - uVar2) * 8;
  uVar2 = (uint)&p_Var5->arg & 7;
  puVar4 = (ulong *)((int)&p_Var5->arg - uVar2);
  *puVar4 = uVar14 << uVar2 * 8 | *puVar4 & 0xffffffffffffffffU >> (8 - uVar2) * 8;
  puVar1 = (undefined *)((int)&p_Var5->id + 1);
  uVar2 = (uint)puVar1 & 7;
  puVar4 = (ulong *)(puVar1 + -uVar2);
  *puVar4 = *puVar4 & -1L << (uVar2 + 1) * 8 | uVar7 >> (7 - uVar2) * 8;
  uVar2 = (uint)&p_Var5->size & 7;
  puVar4 = (ulong *)((int)&p_Var5->size - uVar2);
  *puVar4 = uVar7 << uVar2 * 8 | *puVar4 & 0xffffffffffffffffU >> (8 - uVar2) * 8;
  return;
}
