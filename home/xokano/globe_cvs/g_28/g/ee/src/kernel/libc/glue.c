// STATUS: NOT STARTED

#include "glue.h"

static int ttyinit = 0;

void sceResetttyinit() {
  ttyinit = 0;
  return;
}

void VSync() {
  uint uVar1;
  int iVar2;
  
  iVar2 = DIntr();
  REG_INTC_STAT = 4;
  SYNC(0);
  if (iVar2 != 0) {
    EIntr();
  }
  do {
    uVar1 = REG_INTC_STAT;
  } while ((uVar1 & 4) == 0);
  iVar2 = DIntr();
  REG_INTC_STAT = 4;
  SYNC(0);
  if (iVar2 == 0) {
    return;
  }
  EIntr();
  return;
}

long int VSync2() {
	int flag;
	long int csr;
	
  uint uVar1;
  int iVar2;
  int flag;
  long csr;
  
  flag = 0;
  SetVSyncFlag(&flag,(uint)&flag | 8);
  iVar2 = DIntr();
  REG_INTC_STAT = 4;
  SYNC(0);
  if (iVar2 != 0) {
    EIntr();
  }
  do {
    uVar1 = REG_INTC_STAT;
    if ((uVar1 & 4) != 0) break;
  } while (flag == 0);
  iVar2 = DIntr();
  REG_INTC_STAT = 4;
  SYNC(0);
  if (iVar2 != 0) {
    EIntr();
  }
  return csr;
}

int write(int fd, char *buf, int nbytes) {
  int iVar1;
  
  if (fd - 1U < 2) {
    if (ttyinit == 0) {
      iVar1 = sceTtyInit();
      if (iVar1 == 0) goto LAB_00288820;
      ttyinit = 1;
    }
    iVar1 = sceTtyWrite(buf,nbytes);
  }
  else {
LAB_00288820:
    iVar1 = -1;
  }
  return iVar1;
}

int read(int fd, char *buf, int nbytes) {
  int iVar1;
  
  if (fd == 0) {
    if (ttyinit == 0) {
      iVar1 = sceTtyInit();
      if (iVar1 == 0) goto LAB_00288898;
      ttyinit = 1;
    }
    iVar1 = sceTtyRead(buf,nbytes);
  }
  else {
LAB_00288898:
    iVar1 = -1;
  }
  return iVar1;
}

int open(char *buf, int flags, int mode) {
  int *piVar1;
  
  piVar1 = __errno();
  *piVar1 = 5;
  return -1;
}

int close(int fd) {
  return -1;
}

int ioctl(int fd, int cmd, int arg) {
  return -1;
}

int lseek(int fd, int offset, int whence) {
  return -1;
}

caddr_t sbrk(int nbytes) {
	static caddr_t heap_ptr = 0x4ce0ec;
	caddr_t base;
	caddr_t ptr;
	unsigned int stat;
	unsigned int oldstat;
	
  undefined *puVar1;
  int *piVar2;
  char *pcVar3;
  undefined *puVar4;
  uint uVar5;
  
  uVar5 = Status & 0x10000;
  while ((Status & 0x10000) != 0) {
    DI();
    SYNC(0x10);
  }
  puVar4 = heap_ptr_39 + nbytes;
  puVar1 = (undefined *)EndOfHeap();
  if (puVar1 < puVar4) {
    piVar2 = __errno();
    *piVar2 = 0xc;
    if (uVar5 != 0) {
      EI();
    }
    pcVar3 = &_heap_size;
    puVar4 = heap_ptr_39;
  }
  else {
    pcVar3 = heap_ptr_39;
    if (uVar5 != 0) {
      EI();
    }
  }
  heap_ptr_39 = puVar4;
  return pcVar3;
}

int isatty(int fd) {
  return 1;
}

int fstat(int fd, stat *buf) {
  buf->st_blksize = 0;
  buf->st_mode = 0x2000;
  return 0;
}

int getpid() {
  return 1;
}

int kill(int pid, int sig) {
  if (pid == 1) {
    Exit(sig);
  }
  return 0;
}

int stat(char *path, stat *buf) {
  int *piVar1;
  
  piVar1 = __errno();
  *piVar1 = 5;
  return -1;
}

int unlink(char *path) {
  int *piVar1;
  
  piVar1 = __errno();
  *piVar1 = 5;
  return -1;
}
