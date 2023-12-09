// STATUS: NOT STARTED

#include "g3dMemory.h"

void* g3dMalloc(size_t size, char *pStr) {
  void *pvVar1;
  
  pvVar1 = mem_dbgGetMem__Fi(size);
  return pvVar1;
}

void g3dFree(void *p) {
  mem_dbgFreeMem__FPv(p);
  return;
}
