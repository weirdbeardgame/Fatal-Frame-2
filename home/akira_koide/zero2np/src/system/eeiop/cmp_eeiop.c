// STATUS: NOT STARTED

#include "cmp_eeiop.h"

static void *tmp_buf_adrs = NULL;
static int cmp_th_idx = -1;
static void *cmp_eeiop_stack;
static sceSifCmdData cmdbuffer[16];
static LOAD_REQ_NEW decode_load_ee;
static int cmp_eeiop_init_priority;
static int decode_sema_id;
static int decode_dat_sema_id;

void cmp_eeiopCancel() {
  TerminateThread(cmp_th_idx);
  SignalSema(decode_sema_id);
  return;
}

int cmp_eeiopGetWrkSize() {
  return 0x17800;
}

void* cmp_eeiopInit(void *wrk_buffer) {
	SemaParam semap;
	ThreadParam th_param;
	void *ret;
	
  SemaParam semap;
  ThreadParam th_param;
  
  cmp_eeiop_stack = (void *)((int)wrk_buffer + 0x16000);
  tmp_buf_adrs = wrk_buffer;
  sceSifInitCmd();
  DIntr();
  sceSifSetCmdBuffer(cmdbuffer,0x10);
  sceSifAddCmdHandler(0,intr_cmp,(void *)0x0);
  EIntr();
  semap.maxCount = 0xff;
  semap.initCount = 0;
  decode_dat_sema_id = CreateSema(&semap);
  semap.maxCount = 1;
  semap.initCount = 0;
  decode_sema_id = CreateSema(&semap);
  th_param.entry = cmp_eeiopDecodeLoadThread;
  th_param.stack = cmp_eeiop_stack;
  th_param.stackSize = 0x1800;
  th_param.gpReg = &ChrSortFlyList[3].hdl;
  th_param.initPriority = 0;
  th_param.option = 0;
  cmp_th_idx = CreateThread(&th_param);
  return (void *)((int)wrk_buffer + 0x17800);
}

static void intr_cmp(void *vphdr, void *dat) {
  iSignalSema(decode_dat_sema_id,dat);
  SYNC(0);
  EI();
  return;
}

LOAD_REQ_NEW cmp_eeiopCreateDecodeThread(int size, int adrs, int start_sector, int priority) {
  int *piVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  int iVar9;
  uint uVar10;
  char *pcVar11;
  ulong *puVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  char cVar18;
  char cVar19;
  char cVar20;
  char cVar21;
  long lVar22;
  _LOAD_REQ_NEW *p_Var23;
  _LOAD_REQ_NEW *p_Var24;
  
  decode_load_ee.tmp_ee_adrs = (int)tmp_buf_adrs;
  decode_load_ee.type = FILE_LOAD_TYPE_DECODE_EE;
  decode_load_ee.adrs = adrs;
  decode_load_ee.ld.start_sector = start_sector;
  decode_load_ee.ld.size = size;
  do {
    lVar22 = PollSema(decode_sema_id);
  } while (lVar22 != -1);
  do {
    lVar22 = PollSema(decode_dat_sema_id);
  } while (lVar22 != -1);
  TerminateThread(cmp_th_idx);
  cmp_eeiop_init_priority = priority;
  cmp_eeiopChangePriority(priority);
  StartThread(cmp_th_idx);
  p_Var23 = &decode_load_ee;
  p_Var24 = __return_storage_ptr__;
  if (((uint)__return_storage_ptr__ & 7) == 0) {
    do {
      iVar9 = p_Var23->tmp_ee_adrs;
      iVar13 = p_Var23->adrs;
      iVar14 = (p_Var23->ld).one_buf_size;
      iVar15 = (p_Var23->ld).ring_buf_num;
      iVar16 = (p_Var23->ld).start_sector;
      iVar17 = (p_Var23->ld).size;
      cVar18 = (p_Var23->ld).file_name[0];
      cVar19 = (p_Var23->ld).file_name[1];
      cVar20 = (p_Var23->ld).file_name[2];
      cVar21 = (p_Var23->ld).file_name[3];
      p_Var24->type = p_Var23->type;
      p_Var24->tmp_ee_adrs = iVar9;
      p_Var24->adrs = iVar13;
      (p_Var24->ld).one_buf_size = iVar14;
      (p_Var24->ld).ring_buf_num = iVar15;
      (p_Var24->ld).start_sector = iVar16;
      (p_Var24->ld).size = iVar17;
      (p_Var24->ld).file_name[0] = cVar18;
      (p_Var24->ld).file_name[1] = cVar19;
      (p_Var24->ld).file_name[2] = cVar20;
      (p_Var24->ld).file_name[3] = cVar21;
      p_Var23 = (_LOAD_REQ_NEW *)((p_Var23->ld).file_name + 4);
      p_Var24 = (_LOAD_REQ_NEW *)((p_Var24->ld).file_name + 4);
    } while (p_Var23 != (_LOAD_REQ_NEW *)(decode_load_ee.ld.file_name + 0xe4));
  }
  else {
    do {
      uVar2._0_4_ = p_Var23->type;
      uVar2._4_4_ = p_Var23->tmp_ee_adrs;
      uVar3._0_4_ = p_Var23->adrs;
      uVar3._4_4_ = (p_Var23->ld).one_buf_size;
      uVar4._0_4_ = (p_Var23->ld).ring_buf_num;
      uVar4._4_4_ = (p_Var23->ld).start_sector;
      uVar5._0_4_ = (p_Var23->ld).size;
      uVar5._4_1_ = (p_Var23->ld).file_name[0];
      uVar5._5_1_ = (p_Var23->ld).file_name[1];
      uVar5._6_1_ = (p_Var23->ld).file_name[2];
      uVar5._7_1_ = (p_Var23->ld).file_name[3];
      pcVar11 = (char *)((int)&p_Var24->tmp_ee_adrs + 3);
      uVar10 = (uint)pcVar11 & 7;
      pcVar11 = pcVar11 + -uVar10;
      *(ulong *)pcVar11 = *(ulong *)pcVar11 & -1L << (uVar10 + 1) * 8 | uVar2 >> (7 - uVar10) * 8;
      uVar10 = (uint)p_Var24 & 7;
      *(ulong *)((int)p_Var24 - uVar10) =
           uVar2 << uVar10 * 8 |
           *(ulong *)((int)p_Var24 - uVar10) & 0xffffffffffffffffU >> (8 - uVar10) * 8;
      pcVar11 = (char *)((int)&(p_Var24->ld).one_buf_size + 3);
      uVar10 = (uint)pcVar11 & 7;
      pcVar11 = pcVar11 + -uVar10;
      *(ulong *)pcVar11 = *(ulong *)pcVar11 & -1L << (uVar10 + 1) * 8 | uVar3 >> (7 - uVar10) * 8;
      uVar10 = (uint)&p_Var24->adrs & 7;
      puVar12 = (ulong *)((int)&p_Var24->adrs - uVar10);
      *puVar12 = uVar3 << uVar10 * 8 | *puVar12 & 0xffffffffffffffffU >> (8 - uVar10) * 8;
      pcVar11 = (char *)((int)&(p_Var24->ld).start_sector + 3);
      uVar10 = (uint)pcVar11 & 7;
      pcVar11 = pcVar11 + -uVar10;
      *(ulong *)pcVar11 = *(ulong *)pcVar11 & -1L << (uVar10 + 1) * 8 | uVar4 >> (7 - uVar10) * 8;
      piVar1 = &(p_Var24->ld).ring_buf_num;
      uVar10 = (uint)piVar1 & 7;
      puVar12 = (ulong *)((int)piVar1 - uVar10);
      *puVar12 = uVar4 << uVar10 * 8 | *puVar12 & 0xffffffffffffffffU >> (8 - uVar10) * 8;
      pcVar11 = (p_Var24->ld).file_name + 3;
      uVar10 = (uint)pcVar11 & 7;
      *(ulong *)(pcVar11 + -uVar10) =
           *(ulong *)(pcVar11 + -uVar10) & -1L << (uVar10 + 1) * 8 | uVar5 >> (7 - uVar10) * 8;
      piVar1 = &(p_Var24->ld).size;
      uVar10 = (uint)piVar1 & 7;
      puVar12 = (ulong *)((int)piVar1 - uVar10);
      *puVar12 = uVar5 << uVar10 * 8 | *puVar12 & 0xffffffffffffffffU >> (8 - uVar10) * 8;
      p_Var23 = (_LOAD_REQ_NEW *)((p_Var23->ld).file_name + 4);
      p_Var24 = (_LOAD_REQ_NEW *)((p_Var24->ld).file_name + 4);
    } while (p_Var23 != (_LOAD_REQ_NEW *)(decode_load_ee.ld.file_name + 0xe4));
    p_Var23 = (_LOAD_REQ_NEW *)(decode_load_ee.ld.file_name + 0xe4);
  }
  uVar6._0_4_ = p_Var23->type;
  uVar6._4_4_ = p_Var23->tmp_ee_adrs;
  uVar7._0_4_ = p_Var23->adrs;
  uVar7._4_4_ = (p_Var23->ld).one_buf_size;
  uVar8._0_4_ = (p_Var23->ld).ring_buf_num;
  uVar8._4_4_ = (p_Var23->ld).start_sector;
  iVar9 = (p_Var23->ld).size;
  pcVar11 = (char *)((int)&p_Var24->tmp_ee_adrs + 3);
  uVar10 = (uint)pcVar11 & 7;
  pcVar11 = pcVar11 + -uVar10;
  *(ulong *)pcVar11 = *(ulong *)pcVar11 & -1L << (uVar10 + 1) * 8 | uVar6 >> (7 - uVar10) * 8;
  uVar10 = (uint)p_Var24 & 7;
  *(ulong *)((int)p_Var24 - uVar10) =
       uVar6 << uVar10 * 8 |
       *(ulong *)((int)p_Var24 - uVar10) & 0xffffffffffffffffU >> (8 - uVar10) * 8;
  pcVar11 = (char *)((int)&(p_Var24->ld).one_buf_size + 3);
  uVar10 = (uint)pcVar11 & 7;
  pcVar11 = pcVar11 + -uVar10;
  *(ulong *)pcVar11 = *(ulong *)pcVar11 & -1L << (uVar10 + 1) * 8 | uVar7 >> (7 - uVar10) * 8;
  uVar10 = (uint)&p_Var24->adrs & 7;
  puVar12 = (ulong *)((int)&p_Var24->adrs - uVar10);
  *puVar12 = uVar7 << uVar10 * 8 | *puVar12 & 0xffffffffffffffffU >> (8 - uVar10) * 8;
  pcVar11 = (char *)((int)&(p_Var24->ld).start_sector + 3);
  uVar10 = (uint)pcVar11 & 7;
  pcVar11 = pcVar11 + -uVar10;
  *(ulong *)pcVar11 = *(ulong *)pcVar11 & -1L << (uVar10 + 1) * 8 | uVar8 >> (7 - uVar10) * 8;
  piVar1 = &(p_Var24->ld).ring_buf_num;
  uVar10 = (uint)piVar1 & 7;
  puVar12 = (ulong *)((int)piVar1 - uVar10);
  *puVar12 = uVar8 << uVar10 * 8 | *puVar12 & 0xffffffffffffffffU >> (8 - uVar10) * 8;
  (p_Var24->ld).size = iVar9;
  return __return_storage_ptr__;
}

static void cmp_eeiopDecodeLoadMain() {
	CMP_HEADER *header;
	int to_adrs;
	int from_adrs;
	int now_decode_buf_idx;
	int last_2block;
	
  int header;
  int iVar1;
  uint uVar2;
  int to_adrs;
  int no;
  
  header = decode_load_ee.tmp_ee_adrs;
  no = 0;
  CMP_Init((_CMP_HEADER *)decode_load_ee.tmp_ee_adrs);
  if (0 < *(int *)(header + 0xc)) {
    do {
      WaitSema(decode_dat_sema_id);
      iVar1 = no - *(int *)(header + 0xc);
      to_adrs = no * *(int *)(header + 8) + decode_load_ee.adrs;
      if (iVar1 == -2) {
        uVar2 = GetAlignUp(*(uint *)(header + 0x10),6);
      }
      else if (iVar1 + 2 < 1) {
        uVar2 = to_adrs + *(int *)(header + 8);
      }
      else {
        uVar2 = GetAlignUp(*(uint *)(header + 0x10),6);
        uVar2 = uVar2 + *(int *)(header + 8);
      }
      iVar1 = no + 1;
      CMP_DecodeOne((_CMP_HEADER *)header,no,uVar2,to_adrs);
      ChangeThreadPriority(cmp_th_idx,cmp_eeiop_init_priority);
      no = iVar1;
    } while (iVar1 < *(int *)(header + 0xc));
  }
  return;
}

static void cmp_eeiopDecodeLoadThread(void *dummy) {
  WaitSema(decode_dat_sema_id);
  cmp_eeiopDecodeLoadMain();
  SignalSema(decode_sema_id);
  ExitThread();
  return;
}

void cmp_eeiopWaitSema() {
  WaitSema(decode_sema_id);
  return;
}

int cmp_eeiopIsLate() {
  return 0;
}

void cmp_eeiopChangePriority(int priority) {
  if (-1 < cmp_th_idx) {
    ChangeThreadPriority(cmp_th_idx,priority);
    return;
  }
  return;
}
