// STATUS: NOT STARTED

#include "cache.h"

void _sceSDC(u_int x, u_int y) {
	u_int z;
	u_int t;
	int i;
	
  uint uVar1;
  int iVar2;
  
  iVar2 = 0;
  do {
    SYNC(0);
    cacheOp(0x10,iVar2);
    SYNC(0);
    uVar1 = (TagLo & 0xfffff000) + iVar2;
    if ((x <= uVar1) && (uVar1 <= y)) {
      SYNC(0);
      cacheOp(0x14,iVar2);
      SYNC(0);
    }
    SYNC(0);
    cacheOp(0x10,iVar2 + 1);
    SYNC(0);
    uVar1 = (TagLo & 0xfffff000) + iVar2;
    if ((x <= uVar1) && (uVar1 <= y)) {
      SYNC(0);
      cacheOp(0x14,iVar2 + 1);
      SYNC(0);
    }
    SYNC(0);
    iVar2 = iVar2 + 0x40;
  } while (iVar2 < 0x1000);
  return;
}

void SyncDCache(void *p, void *q) {
	u_int stat;
	
  uint uVar1;
  
  uVar1 = Status & 0x10000;
  if (uVar1 != 0) {
    DIntr();
  }
  _sceSDC((uint)p & 0xffffffc0,(uint)q & 0xffffffc0);
  if (uVar1 != 0) {
    EIntr();
    return;
  }
  return;
}

void iSyncDCache(void *p, void *q) {
  _sceSDC((uint)p & 0xffffffc0,(uint)q & 0xffffffc0);
  return;
}

void _sceIDC(u_int x, u_int y) {
	u_int z;
	u_int t;
	int i;
	
  uint uVar1;
  int iVar2;
  
  iVar2 = 0;
  do {
    SYNC(0);
    cacheOp(0x10,iVar2);
    SYNC(0);
    uVar1 = (TagLo & 0xfffff000) + iVar2;
    if ((x <= uVar1) && (uVar1 <= y)) {
      SYNC(0);
      cacheOp(0x16,iVar2);
      SYNC(0);
    }
    SYNC(0);
    cacheOp(0x10,iVar2 + 1);
    SYNC(0);
    uVar1 = (TagLo & 0xfffff000) + iVar2;
    if ((x <= uVar1) && (uVar1 <= y)) {
      SYNC(0);
      cacheOp(0x16,iVar2 + 1);
      SYNC(0);
    }
    SYNC(0);
    iVar2 = iVar2 + 0x40;
  } while (iVar2 < 0x1000);
  return;
}

void InvalidDCache(void *p, void *q) {
	u_int stat;
	
  uint uVar1;
  
  uVar1 = Status & 0x10000;
  if (uVar1 != 0) {
    DIntr();
  }
  _sceIDC((uint)p & 0xffffffc0,(uint)q & 0xffffffc0);
  if (uVar1 != 0) {
    EIntr();
    return;
  }
  return;
}

void iInvalidDCache(void *p, void *q) {
  _sceIDC((uint)p & 0xffffffc0,(uint)q & 0xffffffc0);
  return;
}
