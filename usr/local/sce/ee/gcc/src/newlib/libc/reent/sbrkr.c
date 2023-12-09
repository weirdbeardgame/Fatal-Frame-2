// STATUS: NOT STARTED

#include "sbrkr.h"

int errno;

void* _sbrk_r(_reent *ptr, size_t incr) {
	char *ret;
	
  char *pcVar1;
  
  errno = 0;
  pcVar1 = sbrk(incr);
  if ((pcVar1 == &_heap_size) && (errno != 0)) {
    ptr->_errno = errno;
  }
  return pcVar1;
}
