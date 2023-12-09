// STATUS: NOT STARTED

#include "mc.h"

void MemoryCardInit() {
  sceMcInit();
  return;
}

void MemoryCardExeInit() {
  MemoryCardSoftResetLock__Fv();
  MemoryCardInfoCtrlInit__Fv();
  MemoryCardPlayDataHeadInit__Fv();
  return;
}

void MemoryCardEnd() {
  LiberateMemoryCardIconDataMem__Fv();
  sceMcSync(0,0,0);
  MemoryCardSoftResetUnlock__Fv();
  return;
}
