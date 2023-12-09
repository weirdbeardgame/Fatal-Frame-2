// STATUS: NOT STARTED

#include "writer.h"

_ssize_t _write_r(_reent *ptr, int fd, void *buf, size_t cnt) {
	long int ret;
	
  int iVar1;
  
  errno = 0;
  iVar1 = write(fd,(char *)buf,cnt);
  if (((long)iVar1 == -1) && (errno != 0)) {
    ptr->_errno = errno;
  }
  return (long)iVar1;
}
