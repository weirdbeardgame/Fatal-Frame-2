// STATUS: NOT STARTED

#include "iopnotify.h"

static sceSifRebootNotifyData *g_pUserRebootBuf = NULL;
static int g_iUserRebootSize = 0;
static sceSifRebootNotifyData g_SysRebootBuf[32];

void sceSifInitRebootNotify() {
  g_pUserRebootBuf = (sceSifRebootNotifyData *)0x0;
  g_iUserRebootSize = 0;
  memset(g_SysRebootBuf,0,0x200);
  return;
}

sceSifRebootNotifyData* sceSifSetRebootNotifyBuffer(sceSifRebootNotifyData *p, int size) {
	sceSifRebootNotifyData *old;
	int intr;
	
  sceSifRebootNotifyData *psVar1;
  int iVar2;
  
  iVar2 = DIntr();
  psVar1 = g_pUserRebootBuf;
  g_pUserRebootBuf = p;
  g_iUserRebootSize = size;
  memset(p,0,(long)(size << 4));
  if (iVar2 != 0) {
    EIntr();
  }
  return psVar1;
}

int sceSifAddRebootNotifyHandler(u_int pos, sceSifRebootNotifyHandler pFunc, void *data) {
	sceSifRebootNotifyData *pBuf;
	int sz;
	int intr;
	void *gp;
	
  uint uVar1;
  int iVar2;
  sceSifRebootNotifyData *psVar3;
  
  uVar1 = g_iUserRebootSize;
  psVar3 = g_pUserRebootBuf;
  if ((int)pos < 0) {
    pos = pos & 0x7fffffff;
    uVar1 = 0x20;
    psVar3 = g_SysRebootBuf;
  }
  if (pos < uVar1) {
    iVar2 = DIntr();
    psVar3 = psVar3 + pos;
    psVar3->func = pFunc;
    psVar3->data = data;
                    /* inlined from ../../../include/eekernel.h */
                    /* end of inlined section */
    psVar3->gp = &ChrSortFlyList[3].hdl;
    if (iVar2 != 0) {
      EIntr();
    }
    iVar2 = 0;
  }
  else {
    iVar2 = -0x7fffff97;
  }
  return iVar2;
}

int sceSifRemoveRebootNotifyHandler(u_int pos) {
	sceSifRebootNotifyData *pBuf;
	int sz;
	
  uint uVar1;
  sceSifRebootNotifyData *psVar2;
  
  uVar1 = g_iUserRebootSize;
  psVar2 = g_pUserRebootBuf;
  if ((int)pos < 0) {
    pos = pos & 0x7fffffff;
    uVar1 = 0x20;
    psVar2 = g_SysRebootBuf;
  }
  if (pos < uVar1) {
    psVar2[pos].func = (undefined1 *)0x0;
    return 0;
  }
  return -0x69;
}

void sceSifExecNotifyHandler(int sys, int mode) {
	void *oldgp;
	sceSifRebootNotifyData *pBuf;
	int i;
	int sz;
	void *newgp;
	void *oldgp;
	void *newgp;
	void *oldgp;
	
  sceSifRebootNotifyData *psVar1;
  int iVar2;
  
  iVar2 = g_iUserRebootSize;
  psVar1 = g_pUserRebootBuf;
  if (sys != 0) {
    iVar2 = 0x20;
    psVar1 = g_SysRebootBuf;
  }
                    /* inlined from ../../../include/eekernel.h */
                    /* end of inlined section */
  if (0 < iVar2) {
    do {
      if (psVar1->func != (undefined1 *)0x0) {
                    /* inlined from ../../../include/eekernel.h */
                    /* end of inlined section */
        (*(code *)psVar1->func)(mode,psVar1->data);
      }
      iVar2 = iVar2 + -1;
      psVar1 = psVar1 + 1;
    } while (iVar2 != 0);
  }
                    /* inlined from ../../../include/eekernel.h */
  return;
}
