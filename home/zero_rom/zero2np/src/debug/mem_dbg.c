// STATUS: NOT STARTED

#include "mem_dbg.h"

static HEAP_WRK mem_dbg_heap_wrk;

void mem_dbgInit(void *adrs, int size) {
  heapCtrlInit(&mem_dbg_heap_wrk,adrs,size);
  return;
}

void mem_dbgReset(void *adrs, int size) {
  heapCtrlReset(&mem_dbg_heap_wrk,adrs,size);
  return;
}

void* mem_dbgGetMem(int size) {
  void *pvVar1;
  
  pvVar1 = SAFE_MALLOC(&mem_dbg_heap_wrk,(void *)0x0,size);
  return pvVar1;
}

void mem_dbgFreeMem(void *adrs) {
  if (adrs != (void *)0x0) {
    heapCtrlFree(&mem_dbg_heap_wrk,adrs);
  }
  return;
}

void mem_dbgDrawMemory(void (*draw_rect_func)(/* parameters unknown */), void (*draw_line_func)(/* parameters unknown */), int xx, int yy, int ww, int hh) {
  heapCtrlDrawMemory(&mem_dbg_heap_wrk,draw_rect_func,draw_line_func,xx,yy,ww,hh);
  return;
}

unsigned int mem_dbgQueryMaxFreeSize() {
  uint uVar1;
  
  uVar1 = heapCtrlQueryMaxOneSize(&mem_dbg_heap_wrk);
  return uVar1;
}

unsigned int mem_dbgQueryTotalFreeSize() {
  uint uVar1;
  
  uVar1 = heapCtrlMemSize(&mem_dbg_heap_wrk,HEAPMEM_LEAVE_SIZE);
  return uVar1;
}
