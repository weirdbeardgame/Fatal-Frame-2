// STATUS: NOT STARTED

#include "closer.h"

int _close_r(_reent *ptr, int fd) {
	int ret;
	
  int iVar1;
  
  errno = 0;
  iVar1 = close(fd);
  if ((iVar1 == -1) && (errno != 0)) {
    ptr->_errno = errno;
  }
  return iVar1;
}
