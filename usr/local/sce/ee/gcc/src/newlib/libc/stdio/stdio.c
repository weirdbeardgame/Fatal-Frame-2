// STATUS: NOT STARTED

#include "stdio.h"

int __sread(void *cookie, char *buf, int n) {
	int ret;
	
  long lVar1;
  int iVar2;
  
  lVar1 = _read_r(*(_reent__2_83 **)((int)cookie + 0x54),(int)*(short *)((int)cookie + 0xe),buf,n);
  iVar2 = (int)lVar1;
  if (iVar2 < 0) {
    *(ushort *)((int)cookie + 0xc) = *(ushort *)((int)cookie + 0xc) & 0xefff;
  }
  else {
    *(int *)((int)cookie + 0x50) = *(int *)((int)cookie + 0x50) + iVar2;
  }
  return iVar2;
}

int __swrite(void *cookie, char *buf, int n) {
  long lVar1;
  
  if ((*(ushort *)((int)cookie + 0xc) & 0x100) != 0) {
    _lseek_r(*(_reent__2_83 **)((int)cookie + 0x54),(int)*(short *)((int)cookie + 0xe),0,2);
  }
  *(ushort *)((int)cookie + 0xc) = *(ushort *)((int)cookie + 0xc) & 0xefff;
  lVar1 = _write_r(*(_reent__2_83 **)((int)cookie + 0x54),(int)*(short *)((int)cookie + 0xe),buf,n);
  return (int)lVar1;
}

fpos_t __sseek(void *cookie, fpos_t offset, int whence) {
	off_t ret;
	
  long lVar1;
  ushort uVar2;
  
  lVar1 = _lseek_r(*(_reent__2_83 **)((int)cookie + 0x54),(int)*(short *)((int)cookie + 0xe),offset,
                   whence);
  if (lVar1 == -1) {
    uVar2 = *(ushort *)((int)cookie + 0xc) & 0xefff;
  }
  else {
    *(int *)((int)cookie + 0x50) = (int)lVar1;
    uVar2 = *(ushort *)((int)cookie + 0xc) | 0x1000;
  }
  *(ushort *)((int)cookie + 0xc) = uVar2;
  return lVar1;
}

int __sclose(void *cookie) {
  int iVar1;
  
  iVar1 = _close_r(*(_reent__2_83 **)((int)cookie + 0x54),(int)*(short *)((int)cookie + 0xe));
  return iVar1;
}
