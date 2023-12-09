// STATUS: NOT STARTED

#include "sifrpc.h"

typedef struct {
	unsigned int request;
	unsigned int opt0;
	unsigned int opt1;
	unsigned int opt2;
	unsigned int opt3;
} _enddata;

typedef struct {
	unsigned int command;
} _binddata;

typedef struct {
	void *src;
	void *dest;
	int size;
} _rdata;

typedef struct {
	unsigned int fno;
	int ssize;
	void *receive;
	int rsize;
	int mode;
	sceSifServeData *serve;
} _calldata;

typedef struct {
	unsigned int fno;
	sceSifServeData *serve;
} _canceldata;

typedef struct {
	sceSifCmdHdr chdr;
	unsigned int status;
	void *paddr;
	unsigned int pid;
	sceSifRpcData *client;
	union {
		unsigned int dummy[8];
		_enddata end;
		_binddata bind;
		_calldata call;
		_canceldata cancel;
		_rdata rdata;
	} type;
} _sceRpcPacket;

typedef struct {
	unsigned int idkey;
	_sceRpcPacket *sys_buffer;
	int ssize;
	_sceRpcPacket *user_buffer;
	int usize;
	_sceRpcPacket *free_buffer;
	int fsize;
	_sceRpcPacket *free_buffer2;
	int fsize2;
	int findex;
	sceSifQueueData *qdata;
} _sceRpcDataTable;

static int _sceSifInitCheck = 0;
static _sceRpcPacket _packet_buffer[32];
static _sceRpcPacket _free_buffer[32];
static _sceRpcPacket _free_buffer2[32];
static _sceRpcDataTable _data_table;

void sceSifInitRpc(unsigned int mode) {
	sceSifCmdSRData *p;
	
  uint uVar1;
  long lVar2;
  
  DIntr();
  if (_sceSifInitCheck != 0) {
    EIntr();
    return;
  }
  _sceSifInitCheck = 1;
  EIntr();
  sceSifInitCmd();
  DIntr();
  _data_table.fsize2 = 0x20;
  _data_table.idkey = 1;
  _data_table.free_buffer = (_sceRpcPacket *)0x204c4380;
  _data_table.sys_buffer = (_sceRpcPacket *)0x204c3b80;
  _data_table.free_buffer2 = (_sceRpcPacket *)0x204c4b80;
  _data_table.ssize = 0x20;
  _data_table.user_buffer = (_sceRpcPacket *)0x0;
  _data_table.usize = 0;
  _data_table.fsize = 0x20;
  _data_table.findex = 0;
  sceSifAddCmdHandler(0x80000008,_request_end,&_data_table);
  sceSifAddCmdHandler(0x80000009,_request_bind,&_data_table);
  sceSifAddCmdHandler(0x8000000a,_request_call,&_data_table);
  sceSifAddCmdHandler(0x8000000c,_request_rdata,&_data_table);
  EIntr();
  lVar2 = sceSifGetReg(0xffffffff80000002);
  if (lVar2 == 0) {
    _packet_buffer[1].chdr.opt = 1;
    sceSifSendCmd(0x80000002,_packet_buffer + 1,0x10,(void *)0x0,(void *)0x0,0);
    do {
      uVar1 = sceSifGetSreg(0);
    } while (uVar1 == 0);
    sceSifSetReg(0xffffffff80000002,1);
    return;
  }
  return;
}

void sceSifExitRpc() {
  sceSifExitCmd();
  _sceSifInitCheck = 0;
  return;
}

static _sceRpcPacket* _sceRpcGetPacket(_sceRpcDataTable *pSrdt) {
	_sceRpcPacket *p;
	int i;
	
  uint uVar1;
  int iVar2;
  uint uVar3;
  _sceRpcPacket *p_Var4;
  
  DIntr();
  iVar2 = 0;
  p_Var4 = pSrdt->sys_buffer;
  if (0 < pSrdt->ssize) {
    do {
      if ((p_Var4->status & 1) == 0) {
        p_Var4->status = iVar2 << 0x10 | 5;
        uVar1 = pSrdt->idkey;
        uVar3 = uVar1 + 1;
        pSrdt->idkey = uVar3;
        if (uVar3 == 1) {
          uVar3 = 1;
          pSrdt->idkey = uVar1 + 2;
        }
        p_Var4->paddr = p_Var4;
        p_Var4->pid = uVar3;
        EIntr();
        return p_Var4;
      }
      iVar2 = iVar2 + 1;
      p_Var4 = p_Var4 + 1;
    } while (iVar2 < pSrdt->ssize);
  }
  EIntr();
  return (_sceRpcPacket *)0x0;
}

static void _sceRpcFreePacket(_sceRpcPacket *pSrp) {
  pSrp->pid = 0;
  pSrp->status = pSrp->status & 0xfffffffe;
  return;
}

static _sceRpcPacket* _sceRpcGetFPacket(_sceRpcDataTable *pSrdt) {
  int iVar1;
  
  iVar1 = pSrdt->findex % pSrdt->fsize;
  if (pSrdt->fsize == 0) {
    trap(7);
  }
  pSrdt->findex = iVar1 + 1;
  return pSrdt->free_buffer + iVar1;
}

static _sceRpcPacket* _sceRpcGetFPacket2(_sceRpcDataTable *pSrdt, int n) {
  _sceRpcPacket *p_Var1;
  
  if ((n < 0) || (pSrdt->fsize2 <= n)) {
    p_Var1 = _sceRpcGetFPacket(pSrdt);
  }
  else {
    p_Var1 = pSrdt->free_buffer2 + n;
  }
  return p_Var1;
}

static void _request_end(void *send, void *local) {
	_sceRpcPacket *p;
	void *newgp;
	void *oldgp;
	void *oldgp;
	
  uint uVar1;
  _sceRpcPacket *p_Var2;
  _sceRpcPacket **pp_Var3;
  
  uVar1 = *(uint *)((int)send + 0x20);
  if (uVar1 == 0x8000000a) {
    pp_Var3 = *(_sceRpcPacket ***)((int)send + 0x1c);
    if (pp_Var3[7] == (_sceRpcPacket *)0x0) {
      p_Var2 = pp_Var3[2];
      goto LAB_00280248;
    }
                    /* inlined from ../../../include/eekernel.h */
                    /* end of inlined section */
    (*(code *)pp_Var3[7])(pp_Var3[8],local);
                    /* inlined from ../../../include/eekernel.h */
                    /* end of inlined section */
    pp_Var3 = *(_sceRpcPacket ***)((int)send + 0x1c);
  }
  else {
    pp_Var3 = *(_sceRpcPacket ***)((int)send + 0x1c);
    if (uVar1 < 0x8000000b) {
      if (uVar1 != 0x80000009) {
        p_Var2 = pp_Var3[2];
        goto LAB_00280248;
      }
      pp_Var3[9] = *(_sceRpcPacket **)((int)send + 0x24);
      pp_Var3[5] = *(_sceRpcPacket **)((int)send + 0x28);
    }
  }
  p_Var2 = pp_Var3[2];
LAB_00280248:
  if (-1 < (int)p_Var2) {
    iSignalSema();
  }
  _sceRpcFreePacket(*pp_Var3);
  *pp_Var3 = (_sceRpcPacket *)0x0;
  return;
}

static long unsigned int _alarm_rdata(int id, long unsigned int settime, long unsigned int calltime, void *p, void *addr) {
  uint uVar1;
  ulong uVar2;
  
  uVar1 = isceSifSendCmd(0x80000008,p,0x40,*(void **)((int)p + 0x24),*(void **)((int)p + 0x28),
                         *(int *)((int)p + 0x2c));
  uVar2 = 0x800;
  if (uVar1 != 0) {
    uVar2 = 0;
  }
  return uVar2;
}

static void _request_rdata(void *send, void *local) {
	_sceRpcDataTable *pSrdt;
	_sceRpcPacket *q;
	
  _sif_rpc_data *p_Var1;
  _sceRpcPacket *pp;
  uint uVar2;
  
  if ((*(uint *)((int)send + 0x10) & 4) == 0) {
    pp = _sceRpcGetFPacket((_sceRpcDataTable *)local);
  }
  else {
    pp = _sceRpcGetFPacket2((_sceRpcDataTable *)local,*(uint *)((int)send + 0x10) >> 0x10);
  }
  p_Var1 = *(_sif_rpc_data **)((int)send + 0x1c);
  pp->paddr = *(void **)((int)send + 0x14);
  pp->client = p_Var1;
  (pp->type).rdata.src = (void *)0x8000000c;
  (pp->type).dummy[1] = *(uint *)((int)send + 0x20);
  (pp->type).dummy[2] = *(uint *)((int)send + 0x24);
  (pp->type).dummy[3] = *(uint *)((int)send + 0x28);
  uVar2 = isceSifSendCmd(0x80000008,pp,0x40,*(void **)((int)send + 0x20),
                         *(void **)((int)send + 0x24),*(int *)((int)send + 0x28));
  if (uVar2 == 0) {
    iSetTimerAlarm(0x800,_alarm_rdata,pp);
    return;
  }
  return;
}

int sceSifGetOtherData(sceSifReceiveData *rd, void *src, void *dest, int size, unsigned int mode) {
	_sceRpcPacket *p;
	SemaParam sem;
	
  _sceRpcPacket *pSrp;
  int iVar1;
  uint uVar2;
  long lVar3;
  SemaParam sem;
  
  pSrp = _sceRpcGetPacket(&_data_table);
  iVar1 = -1;
  if (pSrp != (_sceRpcPacket *)0x0) {
    uVar2 = pSrp->pid;
    (rd->rpcd).paddr = pSrp;
    (rd->rpcd).pid = uVar2;
    (pSrp->type).rdata.src = src;
    (pSrp->type).rdata.dest = dest;
    (pSrp->type).rdata.size = size;
    pSrp->paddr = pSrp;
    pSrp->client = &rd->rpcd;
    if ((mode & 1) == 0) {
      sem.initCount = 0;
      sem.maxCount = 1;
      lVar3 = CreateSema(&sem);
      (rd->rpcd).tid = (int)lVar3;
      if (lVar3 < 0) {
        _sceRpcFreePacket(pSrp);
        iVar1 = -3;
      }
      else {
        uVar2 = sceSifSendCmd(0x8000000c,pSrp,0x40,(void *)0x0,(void *)0x0,0);
        if (uVar2 == 0) {
          _sceRpcFreePacket(pSrp);
          DeleteSema((rd->rpcd).tid);
          iVar1 = -2;
        }
        else {
          WaitSema((rd->rpcd).tid);
          DeleteSema((rd->rpcd).tid);
          iVar1 = 0;
        }
      }
    }
    else {
      (rd->rpcd).tid = -1;
      uVar2 = sceSifSendCmd(0x8000000c,pSrp,0x40,(void *)0x0,(void *)0x0,0);
      iVar1 = 0;
      if (uVar2 == 0) {
        _sceRpcFreePacket(pSrp);
        iVar1 = -2;
      }
    }
  }
  return iVar1;
}

static sceSifServeData* _search_svdata(unsigned int c, _sceRpcDataTable *t) {
	sceSifQueueData *q;
	sceSifServeData *r;
	
  uint uVar1;
  _sif_serve_data *p_Var2;
  _sif_queue_data *p_Var3;
  
  p_Var3 = t->qdata;
  if (p_Var3 != (_sif_queue_data *)0x0) {
    p_Var2 = p_Var3->link;
    while( true ) {
      if (p_Var2 == (_sif_serve_data *)0x0) {
        p_Var3 = p_Var3->next;
      }
      else {
        uVar1 = p_Var2->command;
        while( true ) {
          if (uVar1 == c) {
            return p_Var2;
          }
          p_Var2 = p_Var2->link;
          if (p_Var2 == (_sif_serve_data *)0x0) break;
          uVar1 = p_Var2->command;
        }
        p_Var3 = p_Var3->next;
      }
      if (p_Var3 == (_sif_queue_data *)0x0) break;
      p_Var2 = p_Var3->link;
    }
  }
  return (_sif_serve_data *)0x0;
}

static long unsigned int _alarm_bind(int id, long unsigned int settime, long unsigned int calltime, void *p, void *addr) {
  uint uVar1;
  ulong uVar2;
  
  uVar1 = isceSifSendCmd(0x80000008,p,0x40,(void *)0x0,(void *)0x0,0);
  uVar2 = 0x800;
  if (uVar1 != 0) {
    uVar2 = 0;
  }
  return uVar2;
}

static void _request_bind(void *send, void *local) {
	_sceRpcPacket *q;
	sceSifServeData *pSsd;
	
  void *pvVar1;
  _sceRpcPacket *pp;
  _sif_serve_data *p_Var2;
  uint uVar3;
  
  pp = _sceRpcGetFPacket((_sceRpcDataTable *)local);
  pvVar1 = *(void **)((int)send + 0x14);
  pp->client = *(_sif_rpc_data **)((int)send + 0x1c);
  pp->paddr = pvVar1;
  (pp->type).rdata.src = (void *)0x80000009;
  p_Var2 = _search_svdata(*(uint *)((int)send + 0x20),(_sceRpcDataTable *)local);
  if (p_Var2 == (_sif_serve_data *)0x0) {
    (pp->type).dummy[1] = 0;
    (pp->type).dummy[2] = 0;
  }
  else {
    (pp->type).cancel.serve = p_Var2;
    (pp->type).dummy[2] = (uint)p_Var2->buff;
  }
  uVar3 = isceSifSendCmd(0x80000008,pp,0x40,(void *)0x0,(void *)0x0,0);
  if (uVar3 == 0) {
    iSetTimerAlarm(0x800,_alarm_bind,pp);
    return;
  }
  return;
}

int sceSifBindRpc(sceSifClientData *bd, unsigned int command, unsigned int mode) {
	_sceRpcPacket *p;
	SemaParam sem;
	
  _sceRpcPacket *pSrp;
  int iVar1;
  uint uVar2;
  long lVar3;
  SemaParam sem;
  
  bd->command = 0;
  bd->serve = (_sif_serve_data *)0x0;
  pSrp = _sceRpcGetPacket(&_data_table);
  iVar1 = -1;
  if (pSrp != (_sceRpcPacket *)0x0) {
    uVar2 = pSrp->pid;
    (bd->rpcd).paddr = pSrp;
    (bd->rpcd).pid = uVar2;
    (pSrp->type).dummy[0] = command;
    pSrp->paddr = pSrp;
    pSrp->client = &bd->rpcd;
    if ((mode & 1) == 0) {
      sem.initCount = 0;
      sem.maxCount = 1;
      lVar3 = CreateSema(&sem);
      (bd->rpcd).tid = (int)lVar3;
      if (lVar3 < 0) {
        _sceRpcFreePacket(pSrp);
        iVar1 = -3;
      }
      else {
        uVar2 = sceSifSendCmd(0x80000009,pSrp,0x40,(void *)0x0,(void *)0x0,0);
        if (uVar2 == 0) {
          _sceRpcFreePacket(pSrp);
          DeleteSema((bd->rpcd).tid);
          iVar1 = -2;
        }
        else {
          WaitSema((bd->rpcd).tid);
          DeleteSema((bd->rpcd).tid);
          iVar1 = 0;
        }
      }
    }
    else {
      (bd->rpcd).tid = -1;
      uVar2 = sceSifSendCmd(0x80000009,pSrp,0x40,(void *)0x0,(void *)0x0,0);
      iVar1 = 0;
      if (uVar2 == 0) {
        _sceRpcFreePacket(pSrp);
        iVar1 = -2;
      }
    }
  }
  return iVar1;
}

static void _request_call(void *send, void *local) {
	_sceRpcPacket *p;
	sceSifServeData *pSsd;
	sceSifQueueData *pSqd;
	
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  
  iVar1 = *(int *)((int)send + 0x34);
  piVar2 = *(int **)(iVar1 + 0x40);
  if (piVar2[3] == 0) {
    piVar2[3] = iVar1;
  }
  else {
    *(int *)(piVar2[4] + 0x3c) = iVar1;
  }
  piVar2[4] = iVar1;
  uVar3 = *(undefined4 *)((int)send + 0x1c);
  *(undefined4 *)(iVar1 + 0x20) = *(undefined4 *)((int)send + 0x14);
  *(undefined4 *)(iVar1 + 0x1c) = uVar3;
  *(undefined4 *)(iVar1 + 0x24) = *(undefined4 *)((int)send + 0x20);
  *(undefined4 *)(iVar1 + 0xc) = *(undefined4 *)((int)send + 0x24);
  *(undefined4 *)(iVar1 + 0x28) = *(undefined4 *)((int)send + 0x28);
  *(undefined4 *)(iVar1 + 0x2c) = *(undefined4 *)((int)send + 0x2c);
  *(undefined4 *)(iVar1 + 0x30) = *(undefined4 *)((int)send + 0x30);
  *(undefined4 *)(iVar1 + 0x34) = *(undefined4 *)((int)send + 0x10);
  if ((-1 < *piVar2) && (piVar2[1] == 0)) {
    iWakeupThread(*piVar2);
    return;
  }
  return;
}

int sceSifCallRpc(sceSifClientData *bd, unsigned int fno, unsigned int mode, void *send, int ssize, void *receive, int rsize, sceSifEndFunc func, void *para) {
	void *para;
	_sceRpcPacket *p;
	void *gp;
	SemaParam sem;
	
  _sif_serve_data *p_Var1;
  void *dest;
  _sceRpcPacket *pSrp;
  uint uVar2;
  long lVar3;
  SemaParam sem;
  
  pSrp = _sceRpcGetPacket(&_data_table);
  if (pSrp == (_sceRpcPacket *)0x0) {
    return -1;
  }
  uVar2 = pSrp->pid;
  bd->para = para;
  (bd->rpcd).pid = uVar2;
  (bd->rpcd).paddr = pSrp;
  bd->func = func;
                    /* inlined from ../../../include/eekernel.h */
                    /* end of inlined section */
  bd->gp = &ChrSortFlyList[3].hdl;
  (pSrp->type).dummy[0] = fno;
  (pSrp->type).call.ssize = ssize;
  (pSrp->type).call.receive = receive;
  (pSrp->type).call.rsize = rsize;
  pSrp->paddr = pSrp;
  p_Var1 = bd->serve;
  pSrp->client = &bd->rpcd;
  (pSrp->type).dummy[5] = (uint)p_Var1;
  if ((mode & 2) == 0) {
    if (send == receive) {
      if (rsize <= ssize) {
        rsize = ssize;
      }
      sceSifWriteBackDCache(send,rsize);
    }
    else {
      if (0 < ssize) {
        sceSifWriteBackDCache(send,ssize);
      }
      if (0 < rsize) {
        sceSifWriteBackDCache(receive,rsize);
      }
    }
  }
  if ((mode & 1) == 0) {
    sem.initCount = 0;
    sem.maxCount = 1;
    lVar3 = CreateSema(&sem);
    (bd->rpcd).tid = (int)lVar3;
    if (lVar3 < 0) {
      _sceRpcFreePacket(pSrp);
      return -3;
    }
    (pSrp->type).dummy[4] = 1;
    uVar2 = sceSifSendCmd(0x8000000a,pSrp,0x40,send,bd->buff,ssize);
    if (uVar2 != 0) {
      WaitSema((bd->rpcd).tid);
      DeleteSema((bd->rpcd).tid);
      return 0;
    }
    DeleteSema((bd->rpcd).tid);
  }
  else {
    if (func == (undefined1 *)0x0) {
      (pSrp->type).dummy[4] = 0;
    }
    else {
      (pSrp->type).dummy[4] = 1;
    }
    dest = bd->buff;
    (bd->rpcd).tid = -1;
    uVar2 = sceSifSendCmd(0x8000000a,pSrp,0x40,send,dest,ssize);
    if (uVar2 != 0) {
      return 0;
    }
  }
  _sceRpcFreePacket(pSrp);
  return -2;
}

int sceSifCheckStatRpc(sceSifRpcData *cd) {
  void *pvVar1;
  
  pvVar1 = cd->paddr;
  if (((pvVar1 != (void *)0x0) && (cd->pid == *(uint *)((int)pvVar1 + 0x18))) &&
     ((*(uint *)((int)pvVar1 + 0x10) & 1) != 0)) {
    return 1;
  }
  return 0;
}

void sceSifSetRpcQueue(sceSifQueueData *pSrqd, int key) {
	sceSifQueueData *q;
	
  _sif_queue_data *p_Var1;
  _sif_queue_data *p_Var2;
  
  DIntr();
  pSrqd->key = key;
  pSrqd->active = 0;
  p_Var2 = _data_table.qdata;
  pSrqd->link = (_sif_serve_data *)0x0;
  pSrqd->start = (_sif_serve_data *)0x0;
  pSrqd->end = (_sif_serve_data *)0x0;
  pSrqd->next = (_sif_queue_data *)0x0;
  p_Var1 = pSrqd;
  if (p_Var2 != (_sif_queue_data *)0x0) {
    p_Var1 = p_Var2->next;
    if (p_Var2->next == (_sif_queue_data *)0x0) {
      p_Var2->next = pSrqd;
      p_Var1 = _data_table.qdata;
    }
    else {
      do {
        p_Var2 = p_Var1;
        p_Var1 = p_Var2->next;
      } while (p_Var1 != (_sif_queue_data *)0x0);
      p_Var2->next = pSrqd;
      p_Var1 = _data_table.qdata;
    }
  }
  _data_table.qdata = p_Var1;
  EIntr();
  return;
}

void sceSifRegisterRpc(sceSifServeData *pr, unsigned int commnad, sceSifRpcFunc func, void *buff, sceSifRpcFunc cfunc, void *cbuff, sceSifQueueData *pq) {
	sceSifServeData *r;
	
  _sif_serve_data *p_Var1;
  _sif_serve_data *p_Var2;
  
  DIntr();
  pr->next = (_sif_serve_data *)0x0;
  pr->link = (_sif_serve_data *)0x0;
  pr->command = commnad;
  p_Var2 = pq->link;
  pr->func = func;
  pr->buff = buff;
  pr->cfunc = cfunc;
  pr->cbuff = cbuff;
  pr->base = pq;
  if (p_Var2 == (_sif_serve_data *)0x0) {
    pq->link = pr;
  }
  else {
    p_Var1 = p_Var2->link;
    if (p_Var2->link == (_sif_serve_data *)0x0) {
      p_Var2->link = pr;
    }
    else {
      do {
        p_Var2 = p_Var1;
        p_Var1 = p_Var2->link;
      } while (p_Var1 != (_sif_serve_data *)0x0);
      p_Var2->link = pr;
    }
  }
  EIntr();
  return;
}

sceSifServeData* sceSifRemoveRpc(sceSifServeData *pr, sceSifQueueData *pq) {
	sceSifServeData *r;
	
  _sif_serve_data *p_Var1;
  _sif_serve_data *p_Var2;
  
  DIntr();
  p_Var2 = pq->link;
  if (p_Var2 == pr) {
    pq->link = p_Var2->link;
  }
  else if (p_Var2 != (_sif_serve_data *)0x0) {
    p_Var1 = p_Var2->link;
    if (p_Var2->link == pr) {
      p_Var1 = pr->link;
    }
    else {
      do {
        p_Var2 = p_Var1;
        if (p_Var2 == (_sif_serve_data *)0x0) goto LAB_00280c28;
        p_Var1 = p_Var2->link;
      } while (p_Var2->link != pr);
      p_Var1 = pr->link;
    }
    p_Var2->link = p_Var1;
  }
LAB_00280c28:
  EIntr();
  return p_Var2;
}

sceSifQueueData* sceSifRemoveRpcQueue(sceSifQueueData *pSrqd) {
	sceSifQueueData *q;
	
  _sif_queue_data *p_Var1;
  _sif_queue_data *p_Var2;
  
  DIntr();
  p_Var2 = _data_table.qdata;
  if (_data_table.qdata == pSrqd) {
    _data_table.qdata = (_data_table.qdata)->next;
  }
  else if (_data_table.qdata != (_sif_queue_data *)0x0) {
    p_Var1 = (_data_table.qdata)->next;
    if ((_data_table.qdata)->next == pSrqd) {
      p_Var1 = pSrqd->next;
    }
    else {
      do {
        p_Var2 = p_Var1;
        if (p_Var2 == (_sif_queue_data *)0x0) goto LAB_00280cc0;
        p_Var1 = p_Var2->next;
      } while (p_Var2->next != pSrqd);
      p_Var1 = pSrqd->next;
    }
    p_Var2->next = p_Var1;
  }
LAB_00280cc0:
  EIntr();
  return p_Var2;
}

sceSifServeData* sceSifGetNextRequest(sceSifQueueData *qd) {
	sceSifServeData *rd;
	
  _sif_serve_data *p_Var1;
  _sif_serve_data *p_Var2;
  
  DIntr();
  p_Var1 = qd->start;
  if (p_Var1 == (_sif_serve_data *)0x0) {
    qd->active = 0;
  }
  else {
    p_Var2 = p_Var1->next;
    qd->active = 1;
    qd->start = p_Var2;
  }
  EIntr();
  return p_Var1;
}

void sceSifExecRequest(sceSifServeData *rdp) {
	_sceRpcPacket *p;
	void *ret;
	int rsize;
	unsigned int id;
	int cnt;
	sceSifDmaData data[2];
	int j;
	
  _sif_client_data *p_Var1;
  _sceRpcPacket *pp;
  uint uVar2;
  long lVar3;
  int iVar4;
  void *pvVar5;
  uint uVar6;
  sceSifDmaData data [2];
  
  uVar6 = 0;
  lVar3 = (*(code *)rdp->func)(rdp->fno,rdp->buff,rdp->size);
  if (lVar3 != 0) {
    uVar6 = rdp->rsize;
  }
  if (0 < rdp->size) {
    sceSifWriteBackDCache(rdp->buff,rdp->size);
  }
  pvVar5 = (void *)lVar3;
  if (0 < (int)uVar6) {
    sceSifWriteBackDCache(pvVar5,uVar6);
  }
  DIntr();
  if ((rdp->rid & 4) == 0) {
    pp = _sceRpcGetFPacket(&_data_table);
  }
  else {
    pp = _sceRpcGetFPacket2(&_data_table,rdp->rid >> 0x10);
  }
  EIntr();
  p_Var1 = rdp->client;
  (pp->type).rdata.src = (void *)0x8000000a;
  pp->client = &p_Var1->rpcd;
  if (rdp->rmode == 0) {
    pp->pid = 0;
    pp->status = 0;
    if (0 < (int)uVar6) {
      data[0].addr = (uint)rdp->receive;
      data[0].mode = 0;
      data[0].data = (uint)pvVar5;
      data[0].size = uVar6;
    }
    uVar6 = (uint)(0 < (int)uVar6);
    pvVar5 = rdp->paddr;
    data[uVar6].data = (uint)pp;
    data[uVar6].addr = (uint)pvVar5;
    data[uVar6].size = 0x40;
    data[uVar6].mode = 0;
    while (lVar3 = sceSifSetDma(data,uVar6 + 1), lVar3 == 0) {
      iVar4 = 0x100000;
      do {
        iVar4 = iVar4 + -1;
      } while (iVar4 != -1);
    }
  }
  else {
    do {
      uVar2 = sceSifSendCmd(0x80000008,pp,0x40,pvVar5,rdp->receive,uVar6);
    } while (uVar2 == 0);
  }
  return;
}

void sceSifRpcLoop(sceSifQueueData *qd) {
	sceSifServeData *rdp;
	
  _sif_serve_data *rdp;
  
  do {
    while( true ) {
      rdp = sceSifGetNextRequest(qd);
      if (rdp != (_sif_serve_data *)0x0) break;
      SleepThread();
    }
    sceSifExecRequest(rdp);
  } while( true );
}
