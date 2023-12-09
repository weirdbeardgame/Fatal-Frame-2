// STATUS: NOT STARTED

#include "mlock.h"

static int __malloc_lock_owner = -1;
static int call_count = 0;

void __malloc_lock(_reent *ptr) {
	int id;
	
  int iVar1;
  
  iVar1 = GetThreadId(ptr);
  if (__malloc_lock_owner != iVar1) {
    WaitSema(__sce_sema_id);
    __malloc_lock_owner = iVar1;
  }
  call_count = call_count + 1;
  return;
}

void __malloc_unlock(_reent *ptr) {
  call_count = call_count + -1;
  if (call_count == 0) {
    __malloc_lock_owner = -1;
    SignalSema(__sce_sema_id);
    return;
  }
  return;
}
