// STATUS: NOT STARTED

#include "timer.h"

struct COUNTER {
	COUNTER *pNext;
	COUNTER *pPrev;
	u_int uiKey;
	u_int uiMode;
	u_long ulBaseTime;
	u_long ulBaseCount;
	u_long ulSchedule;
	u_long (*cbHandler)(/* parameters unknown */);
	void *gp_value;
	void *arg;
	u_int pad[3];
};

static struct g_Timer {
	u_long ulHighCount;
	int hid;
	u_int uniqkey;
	u_int uiUsedCounters;
	COUNTER *pFree;
	COUNTER *pAlarm;
	int cbcounterid;
} = {
	/* .ulHighCount = */ 0,
	/* .hid = */ -1,
	/* .uniqkey = */ 1,
	/* .uiUsedCounters = */ 0,
	/* .pFree = */ NULL,
	/* .pAlarm = */ NULL,
	/* .cbcounterid = */ -1
};

static COUNTER g_CounterBuf[128];

void SetT2(unsigned int *addr, unsigned int t) {
	unsigned int stat;
	unsigned int oldstat;
	
  undefined4 unaff_retaddr;
  
  while ((Status & 0x10000) != 0) {
    DI();
    SYNC(0x10);
  }
  SYNC(0x10);
  Status = (Status | 6) ^ 2 | Status & 0x10000;
  SYNC(0x10);
  *addr = t;
  ErrorPC = unaff_retaddr;
  SYNC(0x10);
  return;
}

void SetT2_COUNT(unsigned int t) {
  SetT2((uint *)0xb0001000,t);
  return;
}

void SetT2_MODE(unsigned int t) {
  SetT2((uint *)0xb0001010,t);
  return;
}

void SetT2_COMP(unsigned int t) {
  SetT2((uint *)0xb0001020,t);
  return;
}

int InitTimer(u_int uiMode) {
	int hid;
	u_int mode;
	int intr;
	int i;
	
  int iVar1;
  int iVar2;
  long lVar3;
  ALARM *pAVar4;
  COUNTER *pCVar5;
  uint uVar6;
  uint t;
  
  if (g_Timer.hid < 0) {
    g_Timer.ulHighCount = 0;
    g_Timer.uiUsedCounters = 0;
    memset(g_CounterBuf,0,0x2000);
    g_Timer.pFree = g_CounterBuf;
    pAVar4 = g_AlarmBuf;
    iVar1 = 0x7f;
    pCVar5 = g_CounterBuf + 0x7f;
    do {
      pCVar5->pNext = (COUNTER *)pAVar4;
      iVar1 = iVar1 + -1;
      pCVar5 = pCVar5 + -1;
      pAVar4 = (ALARM *)((int)pAVar4 + -0x40);
    } while (-1 < iVar1);
    g_CounterBuf[127].pNext = (COUNTER *)0x0;
    _InitAlarm();
    lVar3 = AddIntcHandler2(0xb,0x287300,0,0);
    if (lVar3 < 0) {
      iVar1 = -0x7fff6fdf;
    }
    else {
      g_Timer.hid = (int)lVar3;
      iVar2 = DIntr();
      uVar6 = REG_RCNT2_MODE;
      uVar6 = uVar6 & 0xfffffffc | uiMode;
      t = uVar6 | 0x300;
      if ((uVar6 & 0x80) == 0) {
        t = uVar6 | 0xf80;
        SetT2_COUNT(0);
        SetT2_COMP(0xffff);
      }
      SetT2_MODE(t);
      EnableIntc(0xb);
      iVar1 = 0;
      if (iVar2 != 0) {
        EIntr();
        iVar1 = 0;
      }
    }
  }
  else {
    iVar1 = -0x7fff7fff;
  }
  return iVar1;
}

int EndTimer() {
	int intr;
	
  int iVar1;
  long lVar2;
  
  if (g_Timer.hid < 0) {
    iVar1 = -0x7fff7fff;
  }
  else if (g_Timer.uiUsedCounters == 0) {
    iVar1 = DIntr();
    lVar2 = RemoveIntcHandler(0xb,g_Timer.hid);
    if (lVar2 == 0) {
      DisableIntc(0xb);
      SetT2_MODE(0xc00);
      SetT2_COUNT(0);
    }
    g_Timer.ulHighCount = 0;
    g_Timer.hid = -1;
    if (iVar1 != 0) {
      EIntr();
    }
    iVar1 = 0;
  }
  else {
    iVar1 = -0x7ffffff0;
  }
  return iVar1;
}

int GetTimerPreScaleFactor() {
  uint uVar1;
  
  if (g_Timer.hid < 0) {
    return -0x7fff7fff;
  }
  uVar1 = REG_RCNT2_MODE;
  return uVar1 & 3;
}

int StartTimerSystemTime() {
	u_int mode;
	int intr;
	
  uint uVar1;
  int iVar2;
  int iVar3;
  ulong ulNowTime;
  
  iVar2 = DIntr();
  uVar1 = REG_RCNT2_MODE;
  if ((uVar1 & 0x80) == 0) {
    SetT2_MODE(uVar1 & 0xfffff3ff | 0x80);
    ulNowTime = iGetTimerSystemTime();
    SetNextComp(ulNowTime);
    iVar3 = 0;
    if (iVar2 != 0) {
      EIntr();
      iVar3 = 0;
    }
  }
  else {
    iVar3 = 1;
    if (iVar2 != 0) {
      EIntr();
      iVar3 = 1;
    }
  }
  return iVar3;
}

int StopTimerSystemTime() {
	u_int mode;
	int intr;
	
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DIntr();
  uVar1 = REG_RCNT2_MODE;
  if ((uVar1 & 0x80) == 0) {
    iVar3 = 0;
    if (iVar2 != 0) {
      EIntr();
      iVar3 = 0;
    }
  }
  else {
    SetT2_MODE(uVar1 & 0xfffff37f);
    iVar3 = 1;
    if (iVar2 != 0) {
      EIntr();
      iVar3 = 1;
    }
  }
  return iVar3;
}

static void SetNextComp(u_long ulNowTime) {
	u_long a0;
	u_long a1;
	long int lDiff;
	u_int mode;
	COUNTER *pCounter;
	
  int iVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  COUNTER *pCVar5;
  ulong uVar6;
  
  if (-1 < g_Timer.cbcounterid) {
    return;
  }
  uVar2 = REG_RCNT2_MODE;
  if (g_Timer.pAlarm == (COUNTER *)0x0) {
    SetT2_COMP(0);
    SetT2_MODE(uVar2 & 0xfffff7ff);
    return;
  }
  pCVar5 = (g_Timer.pAlarm)->pNext;
  uVar6 = ((g_Timer.pAlarm)->ulSchedule + (g_Timer.pAlarm)->ulBaseTime) -
          (g_Timer.pAlarm)->ulBaseCount;
  if ((pCVar5 == (COUNTER *)0x0) ||
     (uVar3 = (pCVar5->ulSchedule + pCVar5->ulBaseTime) - pCVar5->ulBaseCount,
     uVar6 + 0x7333 <= uVar3)) {
LAB_00287198:
    lVar4 = uVar6 - ulNowTime;
  }
  else {
    do {
      uVar6 = uVar3;
      pCVar5 = pCVar5->pNext;
      if (pCVar5 == (COUNTER *)0x0) goto LAB_00287198;
      uVar3 = (pCVar5->ulSchedule + pCVar5->ulBaseTime) - pCVar5->ulBaseCount;
    } while (uVar3 < uVar6 + 0x7333);
    lVar4 = uVar6 - ulNowTime;
  }
  if (0x7332 < lVar4) {
    SetT2_MODE(uVar2 & 0xfffff7ff);
    SetT2_COMP((uint)(uVar6 >> (long)(int)((uVar2 & 3) << 2)));
    return;
  }
  iVar1 = REG_RCNT2_COUNT;
  SetT2_COMP(iVar1 + (int)(0x7333L >> (long)(int)((uVar2 & 3) << 2)));
  SetT2_MODE(uVar2 & 0xfffff7ff);
  return;
}

static void InsertAlarm(COUNTER *pCounter) {
	COUNTER *pp;
	COUNTER *pn;
	u_long ulAbsCompare;
	u_long ulTarget;
	
  COUNTER *pCVar1;
  COUNTER *pCVar2;
  
  pCVar2 = (COUNTER *)0x0;
  pCVar1 = g_Timer.pAlarm;
  do {
    if (pCVar1 == (COUNTER *)0x0) {
      pCounter->pPrev = pCVar2;
LAB_002872a0:
      pCounter->pNext = pCVar1;
      if (pCVar1 != (COUNTER *)0x0) {
        pCVar1->pPrev = pCounter;
      }
      if (pCVar2 != (COUNTER *)0x0) {
        pCVar2->pNext = pCounter;
        return;
      }
      g_Timer.pAlarm = pCounter;
      return;
    }
    if ((pCounter->ulSchedule + pCounter->ulBaseTime) - pCounter->ulBaseCount <
        (pCVar1->ulSchedule + pCVar1->ulBaseTime) - pCVar1->ulBaseCount) {
      pCounter->pPrev = pCVar2;
      goto LAB_002872a0;
    }
    pCVar2 = pCVar1;
    pCVar1 = pCVar1->pNext;
  } while( true );
}

static COUNTER* UnlinkAlarm(COUNTER *pCounter) {
	COUNTER *pNext;
	
  COUNTER *pCVar1;
  COUNTER *pCVar2;
  
  pCVar1 = pCounter->pNext;
  pCVar2 = pCVar1;
  if (pCounter->pPrev != (COUNTER *)0x0) {
    pCounter->pPrev->pNext = pCVar1;
    pCVar2 = g_Timer.pAlarm;
  }
  g_Timer.pAlarm = pCVar2;
  if (pCVar1 == (COUNTER *)0x0) {
    pCounter->pPrev = (COUNTER *)0x0;
  }
  else {
    pCVar1->pPrev = pCounter->pPrev;
    pCounter->pPrev = (COUNTER *)0x0;
  }
  return pCVar1;
}

static int cbTimerHandler(int ca, void *arg, void *addr) {
	u_long ulAbsTime;
	u_int mode;
	COUNTER *pCounter;
	u_long ulTargetCompare;
	u_long ulTargetTime;
	u_long ulNext;
	COUNTER *pNext;
	u_int low;
	u_int mode;
	u_long ulSystemTime;
	u_int low;
	u_int mode;
	u_long ulSystemTime;
	u_int low;
	u_int mode;
	
  uint uVar1;
  uint uVar2;
  COUNTER *pCVar3;
  COUNTER *pCVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  COUNTER *pCounter;
  ulong uVar8;
  
  uVar1 = REG_RCNT2_MODE;
  if (((uVar1 & 0x400) != 0) && (g_Timer.pAlarm != (COUNTER *)0x0)) {
    pCounter = g_Timer.pAlarm;
    do {
      uVar1 = REG_RCNT2_COUNT;
      uVar2 = REG_RCNT2_MODE;
      uVar7 = pCounter->ulSchedule;
      uVar5 = pCounter->ulBaseTime;
      uVar6 = pCounter->ulBaseCount;
      if ((uVar2 & 0x800) != 0) {
        g_Timer.ulHighCount = g_Timer.ulHighCount + 1;
        SetT2_MODE(uVar2 & 0xfffffbff);
        uVar1 = REG_RCNT2_COUNT;
      }
      uVar8 = (g_Timer.ulHighCount << 0x10 | (ulong)uVar1) << (long)(int)((uVar2 & 3) << 2);
      if (uVar8 < (uVar7 + uVar5) - uVar6) break;
      pCVar4 = UnlinkAlarm(pCounter);
      g_Timer.cbcounterid = (int)pCounter << 4 | pCounter->uiKey;
      uVar5 = (*(code *)pCounter->cbHandler)
                        ((int)pCounter << 4 | pCounter->uiKey,pCounter->ulSchedule,
                         (uVar8 + pCounter->ulBaseCount) - pCounter->ulBaseTime,pCounter->arg,addr);
      if (uVar5 == 0) {
        pCounter->uiMode = pCounter->uiMode & 0xfffffffd;
      }
      else if (uVar5 == 0xffffffffffffffff) {
        pCVar3 = pCounter;
        pCounter->pNext = g_Timer.pFree;
        g_Timer.pFree = pCVar3;
        pCounter->uiKey = 0;
        pCounter->uiMode = 0;
      }
      else {
        if (uVar5 < 0x3999) {
          uVar5 = 0x3999;
        }
        pCounter->ulSchedule = pCounter->ulSchedule + uVar5;
        InsertAlarm(pCounter);
      }
      pCounter = pCVar4;
    } while (pCVar4 != (COUNTER *)0x0);
  }
  g_Timer.cbcounterid = -1;
  uVar1 = REG_RCNT2_COUNT;
  uVar2 = REG_RCNT2_MODE;
  if ((uVar2 & 0x800) != 0) {
    g_Timer.ulHighCount = g_Timer.ulHighCount + 1;
    SetT2_MODE(uVar2 & 0xfffffbff);
    uVar1 = REG_RCNT2_COUNT;
  }
  SetNextComp((g_Timer.ulHighCount << 0x10 | (ulong)uVar1) << (long)(int)((uVar2 & 3) << 2));
  uVar1 = REG_RCNT2_MODE;
  if ((uVar1 & 0x800) != 0) {
    g_Timer.ulHighCount = g_Timer.ulHighCount + 1;
    SetT2_MODE(uVar1 & 0xfffffbff);
  }
  SYNC(0);
  EI();
  return 0;
}

u_long iGetTimerSystemTime() {
	u_long ulSystemTime;
	
  uint uVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  
  uVar1 = REG_RCNT2_COUNT;
  iVar2 = REG_RCNT2_MODE;
  lVar4 = 2;
  uVar5 = g_Timer.ulHighCount;
  if (((long)iVar2 & 0x800U) != 0) {
    uVar1 = REG_RCNT2_COUNT;
    uVar5 = g_Timer.ulHighCount + 1;
  }
  uVar3 = (long)iVar2 & 3;
  if (uVar3 == 0) {
    lVar4 = 0;
  }
  return ((ulong)uVar1 | uVar5 << 0x10) << (lVar4 << uVar3);
}

u_long GetTimerSystemTime() {
	int intr;
	u_long ulSystemTime;
	
  uint uVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  
  iVar3 = DIntr();
  uVar1 = REG_RCNT2_COUNT;
  iVar2 = REG_RCNT2_MODE;
  lVar5 = 2;
  uVar6 = g_Timer.ulHighCount;
  if (((long)iVar2 & 0x800U) != 0) {
    uVar1 = REG_RCNT2_COUNT;
    uVar6 = g_Timer.ulHighCount + 1;
  }
  uVar4 = (long)iVar2 & 3;
  if (uVar4 == 0) {
    lVar5 = 0;
  }
  if (iVar3 != 0) {
    EIntr();
  }
  return ((ulong)uVar1 | uVar6 << 0x10) << (lVar5 << uVar4);
}

int iAllocTimerCounter() {
	COUNTER *pCounter;
	
  ulong *puVar1;
  COUNTER *pCVar2;
  uint uVar3;
  
  pCVar2 = g_Timer.pFree;
  if (g_Timer.pFree == (COUNTER *)0x0) {
    return -0x7fff7ffb;
  }
  uVar3 = (int)g_Timer.pFree << 4;
  g_Timer.uiUsedCounters = g_Timer.uiUsedCounters + 1;
  (g_Timer.pFree)->cbHandler = (undefined1 *)0x0;
  (g_Timer.pFree)->uiMode = 0;
  puVar1 = &(g_Timer.pFree)->ulBaseCount;
  g_Timer.pFree = (g_Timer.pFree)->pNext;
  *puVar1 = 0;
  g_Timer.uniqkey = g_Timer.uniqkey + 1;
  pCVar2->uiKey = (g_Timer.uniqkey & 0x1ff) << 1 | 1;
  return uVar3 | pCVar2->uiKey;
}

int AllocTimerCounter() {
	int intr;
	int id;
	
  int iVar1;
  int iVar2;
  
  iVar1 = DIntr();
  iVar2 = iAllocTimerCounter();
  if (iVar1 != 0) {
    EIntr();
  }
  return iVar2;
}

int iFreeTimerCounter(int id) {
	COUNTER *pCounter;
	
  int iVar1;
  COUNTER *pCounter;
  
  pCounter = (COUNTER *)(((uint)id >> 10) * 0x40);
  if ((id < 0) || ((id & 0x3ffU) != pCounter->uiKey)) {
    iVar1 = -0x7fff7ffe;
  }
  else if (g_Timer.cbcounterid == id) {
    iVar1 = -0x7ffffff0;
  }
  else {
    if ((pCounter->uiMode & 2) != 0) {
      UnlinkAlarm(pCounter);
    }
    pCounter->uiKey = 0;
    iVar1 = 0;
    pCounter->uiMode = 0;
    pCounter->pNext = g_Timer.pFree;
    g_Timer.uiUsedCounters = g_Timer.uiUsedCounters - 1;
    g_Timer.pFree = pCounter;
  }
  return iVar1;
}

int FreeTimerCounter(int id) {
	int res;
	int intr;
	
  int iVar1;
  int iVar2;
  
  iVar1 = DIntr();
  iVar2 = iFreeTimerCounter(id);
  if (iVar1 != 0) {
    EIntr();
  }
  return iVar2;
}

int iGetTimerUsedUnusedCounters(int *pnUsed, int *pnUnused) {
  if (g_Timer.hid < 0) {
    return -0x7fff7fff;
  }
  if (pnUsed != (int *)0x0) {
    *pnUsed = g_Timer.uiUsedCounters;
  }
  if (pnUnused != (int *)0x0) {
    *pnUnused = 0x80 - g_Timer.uiUsedCounters;
  }
  return 0;
}

int GetTimerUsedUnusedCounters(int *pnUsed, int *pnUnused) {
	int res;
	int intr;
	
  int iVar1;
  int iVar2;
  
  iVar1 = DIntr();
  iVar2 = iGetTimerUsedUnusedCounters(pnUsed,pnUnused);
  if (iVar1 != 0) {
    EIntr();
  }
  return iVar2;
}

int iStartTimerCounter(int id) {
	u_long ulNowTime;
	COUNTER *pCounter;
	
  uint uVar1;
  int iVar2;
  ulong ulNowTime;
  COUNTER *pCounter;
  
  pCounter = (COUNTER *)(((uint)id >> 10) * 0x40);
  if ((id < 0) || ((id & 0x3ffU) != pCounter->uiKey)) {
    iVar2 = -0x7fff7ffe;
  }
  else if (g_Timer.cbcounterid == id) {
    iVar2 = -0x7ffffff0;
  }
  else {
    iVar2 = 1;
    if ((pCounter->uiMode & 1) == 0) {
      ulNowTime = iGetTimerSystemTime();
      uVar1 = pCounter->uiMode;
      pCounter->ulBaseTime = ulNowTime;
      pCounter->uiMode = uVar1 | 1;
      if ((uVar1 & 2) != 0) {
        InsertAlarm(pCounter);
        SetNextComp(ulNowTime);
      }
      iVar2 = 0;
    }
  }
  return iVar2;
}

int StartTimerCounter(int id) {
	int res;
	int intr;
	
  int iVar1;
  int iVar2;
  
  iVar1 = DIntr();
  iVar2 = iStartTimerCounter(id);
  if (iVar1 != 0) {
    EIntr();
  }
  return iVar2;
}

int iStopTimerCounter(int id) {
	u_long ulNowTime;
	COUNTER *pCounter;
	
  uint uVar1;
  int iVar2;
  ulong ulNowTime;
  COUNTER *pCounter;
  
  pCounter = (COUNTER *)(((uint)id >> 10) * 0x40);
  if ((id < 0) || ((id & 0x3ffU) != pCounter->uiKey)) {
    iVar2 = -0x7fff7ffe;
  }
  else if (g_Timer.cbcounterid == id) {
    iVar2 = -0x7ffffff0;
  }
  else {
    iVar2 = 0;
    if ((pCounter->uiMode & 1) != 0) {
      ulNowTime = iGetTimerSystemTime();
      uVar1 = pCounter->uiMode;
      pCounter->ulBaseCount = pCounter->ulBaseCount + (ulNowTime - pCounter->ulBaseTime);
      pCounter->uiMode = uVar1 & 0xfffffffe;
      if ((uVar1 & 2) != 0) {
        UnlinkAlarm(pCounter);
        SetNextComp(ulNowTime);
      }
      iVar2 = 1;
    }
  }
  return iVar2;
}

int StopTimerCounter(int id) {
	int res;
	int intr;
	
  int iVar1;
  int iVar2;
  
  iVar1 = DIntr();
  iVar2 = iStopTimerCounter(id);
  if (iVar1 != 0) {
    EIntr();
  }
  return iVar2;
}

u_long SetTimerCount(int id, u_long ulNewCount) {
	int intr;
	u_long ulOldCount;
	COUNTER *pCounter;
	u_long ulNowTime;
	
  int iVar1;
  ulong uVar2;
  long lVar3;
  int iVar4;
  ulong uVar5;
  
  iVar4 = ((uint)id >> 10) * 0x40;
  iVar1 = DIntr();
  if (((id < 0) || ((id & 0x3ffU) != *(uint *)(iVar4 + 8))) || (g_Timer.cbcounterid == id)) {
    uVar5 = 0xffffffffffffffff;
    if (iVar1 != 0) {
      EIntr();
      uVar5 = 0xffffffffffffffff;
    }
  }
  else {
    uVar5 = *(ulong *)(iVar4 + 0x18);
    if ((*(uint *)(iVar4 + 0xc) & 1) == 0) {
      *(ulong *)(iVar4 + 0x18) = ulNewCount;
    }
    else {
      uVar2 = iGetTimerSystemTime();
      lVar3 = *(long *)(iVar4 + 0x10);
      *(ulong *)(iVar4 + 0x18) = ulNewCount;
      *(ulong *)(iVar4 + 0x10) = uVar2;
      uVar5 = uVar5 + (uVar2 - lVar3);
    }
    if (iVar1 != 0) {
      EIntr();
    }
  }
  return uVar5;
}

u_long iGetTimerBaseTime(int id) {
	u_long ulBaseTime;
	COUNTER *pCounter;
	
  int iVar1;
  
  iVar1 = ((uint)id >> 10) * 0x40;
  if ((-1 < id) && ((id & 0x3ffU) == *(uint *)(iVar1 + 8))) {
    if ((*(uint *)(iVar1 + 0xc) & 1) != 0) {
      return *(long *)(iVar1 + 0x10) - *(long *)(iVar1 + 0x18);
    }
    return 0;
  }
  return 0xffffffffffffffff;
}

u_long GetTimerBaseTime(int id) {
	int intr;
	u_long ulBaseTime;
	
  int iVar1;
  ulong uVar2;
  
  iVar1 = DIntr();
  uVar2 = iGetTimerBaseTime(id);
  if (iVar1 != 0) {
    EIntr();
  }
  return uVar2;
}

u_long iGetTimerCount(int id) {
	u_long ulCount;
	COUNTER *pCounter;
	
  ulong uVar1;
  ulong uVar2;
  int iVar3;
  
  iVar3 = ((uint)id >> 10) * 0x40;
  if ((id < 0) || ((id & 0x3ffU) != *(uint *)(iVar3 + 8))) {
    uVar2 = 0xffffffffffffffff;
  }
  else {
    uVar2 = *(ulong *)(iVar3 + 0x18);
    if ((*(uint *)(iVar3 + 0xc) & 1) != 0) {
      uVar1 = iGetTimerSystemTime();
      uVar2 = uVar2 + (uVar1 - *(long *)(iVar3 + 0x10));
    }
  }
  return uVar2;
}

u_long GetTimerCount(int id) {
	int intr;
	u_long ulCount;
	
  int iVar1;
  ulong uVar2;
  
  iVar1 = DIntr();
  uVar2 = iGetTimerCount(id);
  if (iVar1 != 0) {
    EIntr();
  }
  return uVar2;
}

int iSetTimerHandler(int id, u_long ulSchedule, u_long (*cbHandler)(/* parameters unknown */), void *arg) {
	COUNTER *pCounter;
	
  uint uVar1;
  int iVar2;
  ulong ulNowTime;
  COUNTER *pCounter;
  
  pCounter = (COUNTER *)(((uint)id >> 10) * 0x40);
  if ((id < 0) || ((id & 0x3ffU) != pCounter->uiKey)) {
    iVar2 = -0x7fff7ffe;
  }
  else if (g_Timer.cbcounterid == id) {
    iVar2 = -0x7ffffff0;
  }
  else {
    uVar1 = pCounter->uiMode;
    if ((uVar1 & 2) != 0) {
      UnlinkAlarm(pCounter);
      uVar1 = pCounter->uiMode;
    }
    pCounter->cbHandler = cbHandler;
    if (cbHandler == (undefined1 *)0x0) {
      pCounter->uiMode = uVar1 & 0xfffffffd;
    }
    else {
      pCounter->ulSchedule = ulSchedule;
      pCounter->uiMode = uVar1 | 2;
      pCounter->gp_value = &ChrSortFlyList[3].hdl;
      pCounter->arg = arg;
      if ((pCounter->uiMode & 1) != 0) {
        InsertAlarm(pCounter);
      }
    }
    ulNowTime = iGetTimerSystemTime();
    SetNextComp(ulNowTime);
    iVar2 = 0;
  }
  return iVar2;
}

int SetTimerHandler(int id, u_long ulSchedule, u_long (*cbHandler)(/* parameters unknown */), void *arg) {
	int res;
	int intr;
	
  int iVar1;
  int iVar2;
  
  iVar1 = DIntr();
  iVar2 = iSetTimerHandler(id,ulSchedule,cbHandler,arg);
  if (iVar1 != 0) {
    EIntr();
  }
  return iVar2;
}

void TimerBusClock2USec(u_long ulClock, u_int *puiSec, u_int *puiUsec) {
	u_int uiSec;
	
  ulong uVar1;
  
  uVar1 = __udivdi3(ulClock,0x8ca0000);
  if (puiSec != (uint *)0x0) {
    *puiSec = (uint)uVar1;
  }
  if (puiUsec != (uint *)0x0) {
    uVar1 = (uVar1 & 0xffffffff) * 0x8ca0000;
    uVar1 = __udivdi3((ulClock - ((long)(int)(uVar1 >> 0x20) << 0x20 | uVar1 & 0xffffffff)) *
                      1000000,0x8ca0000);
    *puiUsec = (uint)uVar1;
  }
  return;
}

u_long TimerUSec2BusClock(u_int uiSec, u_int uiUsec) {
  ulong uVar1;
  
  uVar1 = __udivdi3((long)(int)((ulong)uiUsec * 0x8ca0000 >> 0x20) << 0x20 |
                    (ulong)uiUsec * 0x8ca0000 & 0xffffffff,1000000);
  return uiSec * 0x8ca0000 + uVar1;
}

float TimerBusClock2Freq(u_long ulClock) {
  float fVar1;
  
  if ((long)ulClock < 0) {
    fVar1 = __floatdisf(ulClock & 1 | ulClock >> 1);
    fVar1 = fVar1 + fVar1;
  }
  else {
    fVar1 = __floatdisf(ulClock);
  }
  return 1.47456e+08 / fVar1;
}

u_long TimerFreq2BusClock(float fFreq) {
  ulong uVar1;
  
  uVar1 = __fixunssfdi(1.47456e+08 / fFreq);
  return uVar1;
}
