// STATUS: NOT STARTED

#include "heapctrl.h"

void heapCtrlReset(HEAP_WRK *wrk, void *adrs, unsigned int size) {
  WaitSema(wrk->memory_sema);
  my_mallocInit__FP10_MY_MALLOCPvi(&wrk->malloc,adrs,size);
  wrk->heap_num = 0;
  SignalSema(wrk->memory_sema);
  return;
}

void heapCtrlInit(HEAP_WRK *wrk, void *adrs, unsigned int size) {
	SemaParam semap;
	
  int iVar1;
  SemaParam semap;
  
  semap.maxCount = 1;
  semap.initCount = 1;
  iVar1 = CreateSema(&semap);
  wrk->memory_sema = iVar1;
  printf("WRK[%x] heapCtrlInit() adrs = %x size = %x\n");
  heapCtrlReset(wrk,adrs,size);
  return;
}

void* heapCtrlMalloc(HEAP_WRK *wrk, size_t size) {
	void *ret;
	
  void *pvVar1;
  
  WaitSema(wrk->memory_sema);
  pvVar1 = my_mallocMalloc__FP10_MY_MALLOCii(&wrk->malloc,size,6);
  SignalSema(wrk->memory_sema);
  if (pvVar1 != (void *)0x0) {
    wrk->heap_num = wrk->heap_num + 1;
  }
  return pvVar1;
}

void heapCtrlFree(HEAP_WRK *wrk, void *ap) {
  WaitSema(wrk->memory_sema);
  my_mallocFree__FP10_MY_MALLOCPv(&wrk->malloc,ap);
  SignalSema(wrk->memory_sema);
  wrk->heap_num = wrk->heap_num + -1;
  return;
}

unsigned int heapCtrlMemSize(HEAP_WRK *wrk, HEAP_MEMMODE mode) {
	unsigned int ret;
	
  uint uVar1;
  
  WaitSema(wrk->memory_sema,mode);
  uVar1 = my_mallocQueryTotalFreeMem__FP10_MY_MALLOC(&wrk->malloc);
  SignalSema(wrk->memory_sema);
  return uVar1;
}

unsigned int heapCtrlQueryMaxOneSize(HEAP_WRK *wrk) {
	unsigned int ret;
	
  uint uVar1;
  
  WaitSema(wrk->memory_sema);
  uVar1 = my_mallocQueryMaxFreeMem__FP10_MY_MALLOC(&wrk->malloc);
  SignalSema(wrk->memory_sema);
  return uVar1;
}

void* SAFE_MALLOC(HEAP_WRK *wrk, void *buf, int size) {
  void *pvVar1;
  
  if (buf != (void *)0x0) {
    printf("Overlap Malloc!!\n");
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  pvVar1 = heapCtrlMalloc(wrk,size);
  return pvVar1;
}

void heapCtrlDrawMemory(HEAP_WRK *wrk, void (*draw_rect_func)(/* parameters unknown */), void (*draw_line_func)(/* parameters unknown */), int xx, int yy, int ww, int hh) {
  WaitSema(wrk->memory_sema);
  my_mallocDrawMemory__FP10_MY_MALLOCPFiiiii_vT1iiii
            (&wrk->malloc,draw_rect_func,draw_line_func,xx,yy,ww,hh);
  SignalSema(wrk->memory_sema);
  return;
}
