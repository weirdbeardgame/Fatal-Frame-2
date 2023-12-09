// STATUS: NOT STARTED

#include "spu_mem.h"

struct _SPU_BUF {
	int use;
	int adrs;
	int end_adrs;
	int size;
	int next_buf_len;
	_SPU_BUF *next;
};

typedef _SPU_BUF SPU_BUF;
static SPU_BUF spu_buf[50];
static int spu_mem_sema;

SPU_BUF* GetNewSPU_BUF() {
	int i;
	
  _SPU_BUF *p_Var1;
  int iVar2;
  
  iVar2 = 0;
  p_Var1 = spu_buf;
  do {
    if (p_Var1->use == 0) {
      p_Var1->use = 1;
      return p_Var1;
    }
    iVar2 = iVar2 + 1;
    p_Var1 = p_Var1 + 1;
  } while (iVar2 < 0x32);
  return (_SPU_BUF *)0x0;
}

void ReleaseSPU_BUF(SPU_BUF *wrk) {
  wrk->use = 0;
  return;
}

void SPUMemoryInit() {
	int i;
	SPU_BUF *first;
	
  _SPU_BUF *p_Var1;
  int iVar2;
  undefined auStack_30 [4];
  undefined4 local_2c;
  undefined4 local_28;
  
  iVar2 = 0x31;
  p_Var1 = spu_buf + 0x31;
  do {
    iVar2 = iVar2 + -1;
    p_Var1->use = 0;
    p_Var1 = p_Var1 + -1;
  } while (-1 < iVar2);
  local_2c = 1;
  local_28 = 1;
  spu_mem_sema = CreateSema(auStack_30);
  printf("SPUMemoryInit\n");
  p_Var1 = GetNewSPU_BUF();
  p_Var1->size = 0x5010;
  p_Var1->next_buf_len = 0x1faff0;
  p_Var1->next = (_SPU_BUF *)0x0;
  p_Var1->adrs = 0;
  return;
}

void* GetSPUMemory(int size) {
	void *ret;
	SPU_BUF *wrk;
	SPU_BUF *best_wrk;
	int best_remain;
	int remain;
	SPU_BUF *new_wrk;
	
  uint uVar1;
  int iVar2;
  int iVar3;
  _SPU_BUF *p_Var4;
  void *pvVar5;
  _SPU_BUF *p_Var6;
  int iVar7;
  
  p_Var6 = (_SPU_BUF *)0x0;
  WaitSema(spu_mem_sema);
  p_Var4 = spu_buf;
  uVar1 = GetAlignUp(size,6);
  iVar2 = spu_buf[0].next_buf_len;
  iVar7 = 0;
  while( true ) {
    iVar3 = iVar2 - uVar1;
    if (iVar3 < 0) {
      p_Var4 = p_Var4->next;
      iVar3 = iVar7;
    }
    else if ((p_Var6 == (_SPU_BUF *)0x0) || (iVar3 < iVar7)) {
      p_Var6 = p_Var4;
      p_Var4 = p_Var4->next;
    }
    else {
      p_Var4 = p_Var4->next;
      iVar3 = iVar7;
    }
    if (p_Var4 == (_SPU_BUF *)0x0) break;
    iVar2 = p_Var4->next_buf_len;
    iVar7 = iVar3;
  }
  pvVar5 = (void *)0x0;
  if (p_Var6 != (_SPU_BUF *)0x0) {
    p_Var4 = GetNewSPU_BUF();
    if (p_Var4 == (_SPU_BUF *)0x0) {
      printf("There is no Frea SPU_BUFFER_WRK!\n");
      return (void *)0x0;
    }
    p_Var4->size = uVar1;
    iVar2 = p_Var6->size;
    iVar7 = p_Var6->adrs;
    p_Var4->next = p_Var6->next;
    p_Var6->next = p_Var4;
    p_Var4->adrs = iVar7 + iVar2;
    p_Var4->next_buf_len = p_Var6->next_buf_len - uVar1;
    p_Var6->next_buf_len = 0;
    pvVar5 = (void *)p_Var4->adrs;
  }
  SignalSema(spu_mem_sema);
  return pvVar5;
}

static int ReleaseSPUMemorySub(void *adrs, int (*cond_func)(/* parameters unknown */)) {
	SPU_BUF *wrk;
	SPU_BUF *pre;
	int ret;
	
  _SPU_BUF *p_Var1;
  _SPU_BUF *wrk;
  _SPU_BUF *p_Var2;
  long lVar3;
  int iVar4;
  
  iVar4 = 0;
  WaitSema(spu_mem_sema);
  p_Var1 = spu_buf[0].next;
  p_Var2 = spu_buf;
  while (wrk = p_Var1, wrk != (_SPU_BUF *)0x0) {
    lVar3 = (*(code *)cond_func)(wrk,adrs);
    if (lVar3 != 0) {
      iVar4 = 1;
      p_Var1 = wrk->next;
      p_Var2->next_buf_len = p_Var2->next_buf_len + wrk->size + wrk->next_buf_len;
      p_Var2->next = p_Var1;
      ReleaseSPU_BUF(wrk);
    }
    p_Var2 = wrk;
    p_Var1 = wrk->next;
  }
  if (iVar4 == 0) {
    printf("Adrs To Be Released Is Not Found!!\n");
  }
  SignalSema(spu_mem_sema);
  return iVar4;
}

static int NormalMemoryCond(SPU_BUF *wrk, void *adrs) {
  return (int)((void *)wrk->adrs == adrs);
}

int ReleaseSPUMemory(void *adrs) {
  int iVar1;
  
  iVar1 = ReleaseSPUMemorySub(adrs,NormalMemoryCond);
  return iVar1;
}

void* GetSPUEffectMemory(int size) {
	void *ret;
	SPU_BUF *wrk;
	int effect_align_size;
	int end_adrs;
	int next_adrs;
	int next_align;
	int remain_size;
	int final_end_adrs;
	SPU_BUF *best_wrk;
	
  uint uVar1;
  void *pvVar2;
  uint a;
  int iVar3;
  _SPU_BUF *p_Var4;
  int iVar5;
  _SPU_BUF *p_Var6;
  int iVar7;
  
  iVar5 = 0;
  p_Var6 = (_SPU_BUF *)0x0;
  iVar7 = 0;
  WaitSema(spu_mem_sema);
  p_Var4 = spu_buf;
  iVar3 = spu_buf[0].adrs;
  do {
    a = iVar3 + p_Var4->size;
    iVar3 = a + p_Var4->next_buf_len;
    uVar1 = GetAlignUp(a,0x11);
    if (size < (int)(iVar3 - a)) {
      if ((int)uVar1 <= iVar3) {
        do {
          uVar1 = GetAlignUp(uVar1 + 1,0x11);
        } while ((int)uVar1 <= iVar3);
        iVar5 = uVar1 - 0x20000;
        iVar7 = iVar3 - iVar5;
        p_Var6 = p_Var4;
        goto LAB_0026f714;
      }
      p_Var4 = p_Var4->next;
    }
    else {
LAB_0026f714:
      p_Var4 = p_Var4->next;
    }
    if (p_Var4 == (_SPU_BUF *)0x0) {
      if (iVar5 == 0) {
        pvVar2 = (void *)0x0;
      }
      else {
        p_Var4 = GetNewSPU_BUF();
        p_Var4->adrs = iVar5 - size;
        p_Var4->size = size;
        pvVar2 = (void *)(iVar5 + -1);
        p_Var4->next_buf_len = iVar7;
        iVar3 = p_Var6->next_buf_len;
        p_Var4->next = p_Var6->next;
        p_Var6->next = p_Var4;
        p_Var6->next_buf_len = iVar3 - (size + iVar7);
        printf("effect finaladrs = %x size = %x\n");
      }
      SignalSema(spu_mem_sema);
      return pvVar2;
    }
    iVar3 = p_Var4->adrs;
  } while( true );
}

static int EffectMemoryCond(SPU_BUF *wrk, void *adrs) {
  printf("adrs = %x, wrk_adrs = %x\n");
  return (int)((void *)(wrk->adrs + wrk->size + -1) == adrs);
}

int ReleaseSPUEffectMemory(void *end_adrs) {
  int iVar1;
  
  iVar1 = ReleaseSPUMemorySub(end_adrs,EffectMemoryCond);
  return iVar1;
}

void PrintBufferState() {
	SPU_BUF *wrk;
	
  _SPU_BUF *p_Var1;
  
  p_Var1 = spu_buf;
  printf("\n\nSPU_BufferState (******* > use, +++++++ > vacant)\n\n");
  do {
    printf("*******0x%06x********\n");
    if (p_Var1->next_buf_len != 0) {
      printf("+++++++0x%06x++++++++\n");
    }
    p_Var1 = p_Var1->next;
  } while (p_Var1 != (_SPU_BUF *)0x0);
  printf(&DAT_003f4968);
  return;
}

unsigned int SPUQueryMaxFreeSize() {
	SPU_BUF *wrk;
	int ret;
	
  int *piVar1;
  _SPU_BUF *p_Var2;
  uint uVar3;
  
  uVar3 = 0;
  WaitSema(spu_mem_sema);
  p_Var2 = spu_buf;
  do {
    piVar1 = &p_Var2->next_buf_len;
    p_Var2 = p_Var2->next;
    if ((int)uVar3 < *piVar1) {
      uVar3 = *piVar1;
    }
  } while (p_Var2 != (_SPU_BUF *)0x0);
  SignalSema(spu_mem_sema);
  return uVar3;
}

unsigned int SPUQueryTotalFreeSize() {
	SPU_BUF *wrk;
	int ret;
	
  int *piVar1;
  _SPU_BUF *p_Var2;
  uint uVar3;
  
  uVar3 = 0;
  WaitSema(spu_mem_sema);
  p_Var2 = spu_buf;
  do {
    piVar1 = &p_Var2->next_buf_len;
    p_Var2 = p_Var2->next;
    uVar3 = uVar3 + *piVar1;
  } while (p_Var2 != (_SPU_BUF *)0x0);
  SignalSema(spu_mem_sema);
  return uVar3;
}

void DrawSPUMemory(void (*draw_rect_func)(/* parameters unknown */), void (*draw_line_func)(/* parameters unknown */), int xx, int yy, int ww, int hh) {
	SPU_BUF *wrk;
	int now_y;
	int gage;
	
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  _SPU_BUF *p_Var5;
  
  WaitSema(spu_mem_sema);
  p_Var5 = spu_buf;
  iVar4 = xx + ww;
  iVar1 = spu_buf[0].size;
  iVar3 = yy;
  while( true ) {
    iVar1 = hh * iVar1;
    if (iVar1 < 0) {
      iVar1 = iVar1 + 0x1fffff;
    }
    (*(code *)draw_line_func)(xx,iVar3,iVar4,iVar3,0xffffffffffffffff);
    iVar2 = iVar3 + 1;
    iVar3 = iVar3 + (iVar1 >> 0x15);
    (*(code *)draw_rect_func)(xx,iVar2,ww,iVar1 >> 0x15,0x502020ff);
    iVar1 = hh * p_Var5->next_buf_len;
    if (p_Var5->next_buf_len != 0) {
      if (iVar1 < 0) {
        iVar1 = iVar1 + 0x1fffff;
      }
      (*(code *)draw_line_func)(xx,iVar3,iVar4,iVar3,0xffffffffffffffff);
      iVar3 = iVar3 + (iVar1 >> 0x15);
    }
    p_Var5 = p_Var5->next;
    if (p_Var5 == (_SPU_BUF *)0x0) break;
    iVar1 = p_Var5->size;
  }
  (*(code *)draw_line_func)(xx,iVar3,iVar4,iVar3,0xffffffffffffffff);
  (*(code *)draw_line_func)(xx,yy,xx,iVar3,0xffffffffffffffff);
  (*(code *)draw_line_func)(iVar4,yy,iVar4,iVar3,0xffffffffffffffff);
  SignalSema(spu_mem_sema);
  return;
}
