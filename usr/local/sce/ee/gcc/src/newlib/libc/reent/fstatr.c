// STATUS: NOT STARTED

#include "fstatr.h"

int _fstat_r(_reent *ptr, int fd, stat *pstat) {
	int ret;
	
  int iVar1;
  
  errno = 0;
  iVar1 = fstat(fd,pstat);
  if ((iVar1 == -1) && (errno != 0)) {
    ptr->_errno = errno;
  }
  return iVar1;
}
