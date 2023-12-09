// STATUS: NOT STARTED

#include "mem_util.h"

static HEAP_WRK mem_util_heap_wrk;

void mem_utilInit(void *adrs, int size) {
  heapCtrlInit(&mem_util_heap_wrk,adrs,size);
  return;
}

void mem_utilReset(void *adrs, int size) {
  heapCtrlReset(&mem_util_heap_wrk,adrs,size);
  return;
}

void* mem_utilGetMem(int size) {
  void *pvVar1;
  
  pvVar1 = SAFE_MALLOC(&mem_util_heap_wrk,(void *)0x0,size);
  return pvVar1;
}

void mem_utilFreeMem(void *adrs) {
  if (adrs != (void *)0x0) {
    heapCtrlFree(&mem_util_heap_wrk,adrs);
  }
  return;
}

void mem_utiDrawMemory(void (*draw_rect_func)(/* parameters unknown */), void (*draw_line_func)(/* parameters unknown */), int xx, int yy, int ww, int hh) {
  heapCtrlDrawMemory(&mem_util_heap_wrk,draw_rect_func,draw_line_func,xx,yy,ww,hh);
  return;
}

unsigned int mem_utilQueryMaxFreeSize() {
  uint uVar1;
  
  uVar1 = heapCtrlQueryMaxOneSize(&mem_util_heap_wrk);
  return uVar1;
}

unsigned int mem_utilQueryTotalFreeSize() {
  uint uVar1;
  
  uVar1 = heapCtrlMemSize(&mem_util_heap_wrk,HEAPMEM_LEAVE_SIZE);
  return uVar1;
}
