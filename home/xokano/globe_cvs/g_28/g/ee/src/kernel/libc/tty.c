// STATUS: NOT STARTED

#include "tty.h"

typedef struct {
	int num;
	int count;
	void *rp;
	void *wp;
	char buf[256];
} CHQUEUE;

typedef struct {
	int s;
	u_int wlen;
	u_int rlen;
	u_int isSending;
	char *wptr;
	char *rptr;
	CHQUEUE *rq;
} TTYINFO;

static TTYINFO tinfo;
static char wbuf[320];
static char rbuf[320];

static CHQUEUE* QueueInit(int num) {
	static CHQUEUE q;
	
  q_12 = num;
  DAT_004ca908 = &DAT_004ca910;
  DAT_004ca904 = 0;
  DAT_004ca90c = &DAT_004ca910;
  return (CHQUEUE *)&q_12;
}

static void QueuePeekWriteDone(CHQUEUE *q) {
  undefined *puVar1;
  
  puVar1 = (undefined *)((int)q->wp + 1);
  q->count = q->count + 1;
  q->wp = puVar1;
  if (puVar1 == q->buf + q->num) {
    q->wp = q->buf;
  }
  return;
}

static void QueuePeekReadDone(CHQUEUE *q) {
  undefined *puVar1;
  
  puVar1 = (undefined *)((int)q->rp + 1);
  q->count = q->count + -1;
  q->rp = puVar1;
  if (puVar1 == q->buf + q->num) {
    q->rp = q->buf;
  }
  return;
}

static void sceTtyHandler(int event, int param, TTYINFO *ti) {
	int param;
	TTYINFO *ti;
	int n;
	sceDeci2Hdr *deci;
	TTYINFO *ti;
	int sz;
	
  ushort *puVar1;
  undefined *puVar2;
  ushort *puVar3;
  CHQUEUE *pCVar4;
  int iVar5;
  
  if (event == 3) {
    iVar5 = sceDeci2ExSend(ti->s,ti->wptr,(short)ti->wlen);
    if (-1 < iVar5) {
      ti->wptr = ti->wptr + iVar5;
      ti->wlen = ti->wlen - iVar5;
      return;
    }
    kprintf("TTY: send err %d\n");
  }
  else {
    if (event < 4) {
      if (event < 1) {
        return;
      }
      if (param == 0) {
        puVar1 = (ushort *)ti->rptr;
        iVar5 = 0xc;
        if (0xc < *puVar1) {
          pCVar4 = ti->rq;
          puVar3 = puVar1;
          while( true ) {
            puVar2 = (undefined *)((int)puVar3 + iVar5);
            iVar5 = iVar5 + 1;
            *(undefined *)pCVar4->wp = *puVar2;
            QueuePeekWriteDone(ti->rq);
            if ((int)(uint)*puVar1 <= iVar5) break;
            puVar3 = (ushort *)ti->rptr;
            pCVar4 = ti->rq;
          }
        }
        ti->rlen = 0;
        return;
      }
      if (0x140 < ti->rlen + param) {
        kprintf("TTY: packet size larger than expect\n");
      }
      iVar5 = sceDeci2ExRecv(ti->s,ti->rptr + ti->rlen,(short)param);
      if (iVar5 < 0) {
        kprintf("TTY: receive error");
      }
      ti->rlen = ti->rlen + iVar5;
      return;
    }
    if (event != 4) {
      return;
    }
    if (ti->wlen != 0) {
      kprintf("TTY: err ti->wlen=%08x\n");
    }
  }
  ti->isSending = 0;
  return;
}

int sceTtyWrite(char *buf, int nbytes) {
	int ret;
	int out;
	char *tmp;
	int intr;
	
  int iVar1;
  int iVar2;
  char cVar3;
  char *pcVar4;
  int iVar5;
  
  iVar2 = 0;
  iVar5 = -1;
  if (tinfo.isSending == 0) {
    iVar1 = DIntr();
    tinfo.isSending = 1;
    tinfo.wptr = (char *)0x204caa40;
    pcVar4 = (char *)0x204caa4c;
    iVar5 = 0;
    do {
      nbytes = nbytes + -1;
      if (nbytes == -1) break;
      cVar3 = *buf;
      if (*buf == '\n') {
        *pcVar4 = '\r';
        iVar2 = iVar2 + 1;
        pcVar4 = pcVar4 + 1;
        if (0xff < iVar2) break;
        cVar3 = *buf;
      }
      *pcVar4 = cVar3;
      iVar2 = iVar2 + 1;
      buf = buf + 1;
      pcVar4 = pcVar4 + 1;
      iVar5 = iVar5 + 1;
    } while (iVar2 < 0x100);
    tinfo.wlen = iVar2 + 0xc;
    uRam204caa40 = (undefined2)tinfo.wlen;
    iVar2 = sceDeci2ReqSend(tinfo.s,cRam204caa47);
    if (iVar2 < 0) {
      tinfo.isSending = 0;
      iVar5 = -1;
      if (iVar1 != 0) {
        EIntr();
        iVar5 = -1;
      }
    }
    else {
      while (tinfo.isSending != 0) {
        sceDeci2Poll(tinfo.s);
      }
      if (iVar1 != 0) {
        EIntr();
      }
    }
  }
  return iVar5;
}

int sceTtyRead(char *buf, int nbytes) {
	int i;
	
  char cVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  iVar3 = iVar2;
  if (0 < nbytes) {
    do {
      iVar3 = iVar2 + 1;
      do {
      } while ((tinfo.rq)->count == 0);
                    /* WARNING: Load size is inaccurate */
      buf[iVar2] = *(tinfo.rq)->rp;
      QueuePeekReadDone(tinfo.rq);
      cVar1 = buf[iVar2];
    } while (((cVar1 != '\n') && (cVar1 != '\r')) && (iVar2 = iVar3, iVar3 < nbytes));
  }
  return iVar3;
}

int sceTtyInit() {
  bool bVar1;
  
  FlushCache(0);
  tinfo.s = sceDeci2Open(0x210,&tinfo,sceTtyHandler);
  bVar1 = -1 < tinfo.s;
  if (bVar1) {
    tinfo.isSending = 0;
    tinfo.wlen = 0;
    tinfo.rlen = 0;
    tinfo.rptr = (char *)0x204cab80;
    tinfo.wptr = (char *)0x204caa40;
    uRam204caa44 = 0x210;
    uRam204caa46 = 0x45;
    uRam204caa47 = 0x48;
    uRam204caa48 = 0;
    uRam204caa42 = 0;
    tinfo.rq = QueueInit(0x100);
  }
  return (uint)bVar1;
}
