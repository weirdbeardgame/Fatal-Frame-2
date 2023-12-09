// STATUS: NOT STARTED

#include "lseekr.h"

_off_t _lseek_r(_reent *ptr, int fd, off_t pos, int whence) {
	off_t ret;
	
  int iVar1;
  
  errno = 0;
  iVar1 = lseek(fd,(int)pos,whence);
  if (((long)iVar1 == -1) && (errno != 0)) {
    ptr->_errno = errno;
  }
  return (long)iVar1;
}
