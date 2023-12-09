// STATUS: NOT STARTED

#include "iopheap.h"

typedef struct {
	void *load_addr;
	char name[252];
} _sceLoadIHData;

typedef struct {
	unsigned int heap_size;
} _sceAllocIHData;

typedef struct {
	void *heap_addr;
} _sceFreeIHData;

typedef struct {
	unsigned int heap_size;
	int alloc_type;
	void *addr;
} _sceAllocSMData;

static int _bind = -1;
static sceSifClientData cd;
static unsigned int rdata[16];
static unsigned int sdata[16];
static _sceLoadIHData _lih_data;

int sceSifInitIopHeap() {
	int i;
	
  int iVar1;
  
  while( true ) {
    iVar1 = sceSifBindRpc(&cd,0x80000003,0);
    if (iVar1 < 0) {
      return -1;
    }
    if (cd.serve != (_sif_serve_data *)0x0) break;
    iVar1 = 0x100000;
    do {
      iVar1 = iVar1 + -1;
    } while (iVar1 != -1);
  }
  _bind = 0;
  return 0;
}

void* sceSifAllocIopHeap(unsigned int size) {
  int iVar1;
  
  if ((-1 < _bind) &&
     (sdata[0] = size, iVar1 = sceSifCallRpc(&cd,1,0,sdata,4,rdata,4,(undefined1 *)0x0,(void *)0x0),
     -1 < iVar1)) {
    return (void *)rdata[0];
  }
  return (void *)0x0;
}

void* sceSifAllocSysMemory(int type, unsigned int size, void *addr) {
	_sceAllocSMData *p;
	
  int iVar1;
  void *pvVar2;
  
  pvVar2 = (void *)0x0;
  if (-1 < _bind) {
    sdata[0] = size;
    sdata[1] = type;
    sdata[2] = (uint)addr;
    iVar1 = sceSifCallRpc(&cd,4,0,sdata,0xc,rdata,4,(undefined1 *)0x0,(void *)0x0);
    pvVar2 = (void *)rdata[0];
    if (iVar1 < 0) {
      pvVar2 = (void *)0x0;
    }
  }
  return pvVar2;
}

int sceSifFreeSysMemory(void *addr) {
  int iVar1;
  uint uVar2;
  
  if (_bind < 0) {
    uVar2 = 0;
  }
  else {
    sdata[0] = (uint)addr;
    iVar1 = sceSifCallRpc(&cd,2,0,sdata,4,rdata,4,(undefined1 *)0x0,(void *)0x0);
    uVar2 = rdata[0];
    if (iVar1 < 0) {
      uVar2 = 0xffffffff;
    }
  }
  return uVar2;
}

int sceSifFreeIopHeap(void *addr) {
  int iVar1;
  
  iVar1 = sceSifFreeSysMemory(addr);
  return iVar1;
}

int sceSifLoadIopHeap(char *name, void *addr) {
	int nsize;
	
  char cVar1;
  uint uVar2;
  int iVar3;
  
  if (_bind < 0) {
    uVar2 = 0;
  }
  else {
    _lih_data.name[0] = *name;
    iVar3 = 0;
    if (_lih_data.name[0] != '\0') {
      for (iVar3 = 1;
          (iVar3 < 0xfc && (cVar1 = name[iVar3], _lih_data.name[iVar3] = cVar1, cVar1 != '\0'));
          iVar3 = iVar3 + 1) {
      }
    }
    if (iVar3 == 0xfc) {
      iVar3 = 0xfb;
    }
    _lih_data.name[251] = '\0';
    _lih_data.load_addr = addr;
    iVar3 = sceSifCallRpc(&cd,3,0,&_lih_data,iVar3 + 5,rdata,4,(undefined1 *)0x0,(void *)0x0);
    uVar2 = rdata[0];
    if (iVar3 < 0) {
      uVar2 = 0xffffffff;
    }
  }
  return uVar2;
}

unsigned int sceSifQueryMemSize() {
  int iVar1;
  uint uVar2;
  
  if (_bind < 0) {
    uVar2 = 0;
  }
  else {
    iVar1 = sceSifCallRpc(&cd,5,0,(void *)0x0,0,rdata,4,(undefined1 *)0x0,(void *)0x0);
    uVar2 = rdata[0];
    if (iVar1 < 0) {
      uVar2 = 0xffffffff;
    }
  }
  return uVar2;
}

unsigned int sceSifQueryMaxFreeMemSize() {
  int iVar1;
  uint uVar2;
  
  if (_bind < 0) {
    uVar2 = 0;
  }
  else {
    iVar1 = sceSifCallRpc(&cd,6,0,(void *)0x0,0,rdata,4,(undefined1 *)0x0,(void *)0x0);
    uVar2 = rdata[0];
    if (iVar1 < 0) {
      uVar2 = 0xffffffff;
    }
  }
  return uVar2;
}

unsigned int sceSifQueryTotalFreeMemSize() {
  int iVar1;
  uint uVar2;
  
  if (_bind < 0) {
    uVar2 = 0;
  }
  else {
    iVar1 = sceSifCallRpc(&cd,7,0,(void *)0x0,0,rdata,4,(undefined1 *)0x0,(void *)0x0);
    uVar2 = rdata[0];
    if (iVar1 < 0) {
      uVar2 = 0xffffffff;
    }
  }
  return uVar2;
}

void* sceSifQueryBlockTopAddress(void *addr) {
  int iVar1;
  undefined *puVar2;
  
  if (_bind < 0) {
    puVar2 = (undefined *)0x0;
  }
  else {
    sdata[0] = (uint)addr;
    iVar1 = sceSifCallRpc(&cd,8,0,sdata,4,rdata,4,(undefined1 *)0x0,(void *)0x0);
    puVar2 = (undefined *)rdata[0];
    if (iVar1 < 0) {
      puVar2 = &_heap_size;
    }
  }
  return puVar2;
}

unsigned int sceSifQueryBlockSize(void *addr) {
  int iVar1;
  uint uVar2;
  
  if (_bind < 0) {
    uVar2 = 0;
  }
  else {
    sdata[0] = (uint)addr;
    iVar1 = sceSifCallRpc(&cd,9,0,sdata,4,rdata,4,(undefined1 *)0x0,(void *)0x0);
    uVar2 = rdata[0];
    if (iVar1 < 0) {
      uVar2 = 0xffffffff;
    }
  }
  return uVar2;
}
