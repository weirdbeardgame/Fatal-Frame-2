// STATUS: NOT STARTED

#include "timeralarm.h"

struct ALARM {
	ALARM *pNext;
	int counterid;
	u_long (*cbHandler)(/* parameters unknown */);
	void *arg;
};

static ALARM g_AlarmBuf[64];
static ALARM *g_pFreeAlarm;

int _InitAlarm() {
	int i;
	
  ALARM *pAVar1;
  ALARM **ppAVar2;
  int iVar3;
  
  iVar3 = 0x3f;
  g_pFreeAlarm = g_AlarmBuf;
  ppAVar2 = &g_pFreeAlarm;
  pAVar1 = g_AlarmBuf + 0x3f;
  do {
    pAVar1->pNext = (ALARM *)ppAVar2;
    iVar3 = iVar3 + -1;
    pAVar1 = pAVar1 + -1;
    ppAVar2 = (ALARM **)((int)ppAVar2 + -0x10);
  } while (-1 < iVar3);
  g_AlarmBuf[63].pNext = (ALARM *)0x0;
  return 0;
}

static u_long AlarmHandler(int counterid, u_long ulSchedule, u_long ulActual, void *arg, void *addr) {
	u_long ulNext;
	
  ALARM *pAVar1;
  ulong uVar2;
  
  uVar2 = (**(code **)((int)arg + 8))
                    ((int)arg << 4 | counterid & 0xfeU | 1,ulSchedule,ulActual,
                     *(undefined4 *)((int)arg + 0xc),addr);
  if (uVar2 == 0) {
    uVar2 = 0xffffffffffffffff;
    pAVar1 = (ALARM *)arg;
    *(ALARM **)arg = g_pFreeAlarm;
    g_pFreeAlarm = pAVar1;
    *(undefined4 *)((int)arg + 4) = 0;
  }
  return uVar2;
}

int SetTimerAlarm(u_long ulClock, u_long (*cbHandler)(/* parameters unknown */), void *arg) {
	int intr;
	int counterid;
	ALARM *pAlarm;
	
  ALARM *arg_00;
  ALARM *pAVar1;
  int iVar2;
  uint id;
  
  if (cbHandler == (undefined1 *)0x0) {
    id = 0x80000016;
  }
  else {
    iVar2 = DIntr();
    arg_00 = g_pFreeAlarm;
    if (g_pFreeAlarm == (ALARM *)0x0) {
      if (iVar2 != 0) {
        EIntr();
      }
      id = 0x80008005;
    }
    else {
      g_pFreeAlarm = g_pFreeAlarm->pNext;
      id = AllocTimerCounter();
      if ((int)id < 0) {
        pAVar1 = arg_00;
        arg_00->pNext = g_pFreeAlarm;
        g_pFreeAlarm = pAVar1;
        arg_00->counterid = 0;
        if (iVar2 != 0) {
          EIntr();
        }
      }
      else {
        arg_00->cbHandler = cbHandler;
        arg_00->arg = arg;
        arg_00->counterid = id;
        SetTimerHandler(id,ulClock,AlarmHandler,arg_00);
        StartTimerCounter(id);
        if (iVar2 != 0) {
          EIntr();
        }
        id = (int)arg_00 << 4 | id & 0xfe | 1;
      }
    }
  }
  return id;
}

int iSetTimerAlarm(u_long ulClock, u_long (*cbHandler)(/* parameters unknown */), void *arg) {
	int counterid;
	ALARM *pAlarm;
	
  ALARM *arg_00;
  ALARM *pAVar1;
  uint id;
  
  arg_00 = g_pFreeAlarm;
  if (cbHandler == (undefined1 *)0x0) {
    id = 0x80000016;
  }
  else if (g_pFreeAlarm == (ALARM *)0x0) {
    id = 0x80008005;
  }
  else {
    g_pFreeAlarm = g_pFreeAlarm->pNext;
    id = iAllocTimerCounter();
    if ((int)id < 0) {
      pAVar1 = arg_00;
      arg_00->pNext = g_pFreeAlarm;
      g_pFreeAlarm = pAVar1;
      arg_00->counterid = 0;
    }
    else {
      arg_00->cbHandler = cbHandler;
      arg_00->arg = arg;
      arg_00->counterid = id;
      iSetTimerHandler(id,ulClock,AlarmHandler,arg_00);
      iStartTimerCounter(id);
      id = (int)arg_00 << 4 | id & 0xfe | 1;
    }
  }
  return id;
}

int ReleaseTimerAlarm(int id) {
	int intr;
	ALARM *pAlarm;
	ALARM *pAlarm;
	
  ALARM *pAVar1;
  int iVar2;
  int iVar3;
  ALARM *pAVar4;
  
  pAVar4 = (ALARM *)(((uint)id >> 8) * 0x10);
  iVar2 = DIntr();
  if ((id < 0) || (((id ^ pAVar4->counterid) & 0xffU) != 0)) {
    if (iVar2 != 0) {
      EIntr();
    }
    iVar3 = -0x7fff7ffe;
  }
  else {
    FreeTimerCounter(pAVar4->counterid);
    pAVar1 = pAVar4;
    pAVar4->pNext = g_pFreeAlarm;
    g_pFreeAlarm = pAVar1;
    pAVar4->counterid = 0;
    iVar3 = 0;
    if (iVar2 != 0) {
      EIntr();
      iVar3 = 0;
    }
  }
  return iVar3;
}

int iReleaseTimerAlarm(int id) {
	ALARM *pAlarm;
	int res;
	ALARM *pAlarm;
	
  ALARM *pAVar1;
  int iVar2;
  ALARM *pAVar3;
  
  pAVar3 = (ALARM *)(((uint)id >> 8) * 0x10);
  if ((id < 0) || (((id ^ pAVar3->counterid) & 0xffU) != 0)) {
    iVar2 = -0x7fff7ffe;
  }
  else {
    iVar2 = iFreeTimerCounter(pAVar3->counterid);
    if (iVar2 == 0) {
      pAVar1 = pAVar3;
      pAVar3->pNext = g_pFreeAlarm;
      g_pFreeAlarm = pAVar1;
      pAVar3->counterid = 0;
    }
  }
  return iVar2;
}
