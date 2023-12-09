// STATUS: NOT STARTED

#include "malloc.h"

void* malloc(size_t nbytes) {
	void *p;
	
  void *pvVar1;
  
  __malloc_lock(_impure_ptr);
  pvVar1 = _malloc_r(_impure_ptr,nbytes);
  __malloc_unlock(_impure_ptr);
  return pvVar1;
}

void free(void *aptr) {
  __malloc_lock(_impure_ptr);
  _free_r(_impure_ptr,aptr);
  __malloc_unlock(_impure_ptr);
  return;
}
