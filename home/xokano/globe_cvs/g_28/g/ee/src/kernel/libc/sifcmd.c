// STATUS: NOT STARTED

#include "sifcmd.h"

typedef struct {
	void *cpbuffer;
	void *sbuffer;
	void *obuffer;
	sceSifCmdData *sysdata;
	int ssize;
	sceSifCmdData *userdata;
	int usize;
	unsigned int *sreg;
	int evflag;
} sceSifCmdDataTable;

static int _cmd_init_check = 0;
static u_long128 _pckt_buffer[8];
static u_long128 _send_buffer[4];
static sceSifCmdCSData _csdata;
static int sif0_handleid;
static sceSifCmdDataTable _data_table;
static sceSifCmdData _sys_buffer[32];
static unsigned int soft_reg[32];

static void _set_sreg(void *send, void *local) {
  *(undefined4 *)(*(int *)((int)send + 0x10) * 4 + *(int *)((int)local + 0x1c)) =
       *(undefined4 *)((int)send + 0x14);
  return;
}

static void _change_addr(void *send, void *local) {
  *(undefined4 *)((int)local + 8) = *(undefined4 *)((int)send + 0x10);
  return;
}

unsigned int sceSifGetSreg(int rno) {
  return soft_reg[rno];
}

unsigned int sceSifSetSreg(int rno, unsigned int value) {
  soft_reg[rno] = value;
  return value;
}

void* sceSifGetDataTable() {
  return &_data_table;
}

void sceSifInitCmd() {
	int i;
	
  uint uVar1;
  uint *puVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  sceSifCmdData *psVar6;
  int iVar7;
  
  DIntr();
  if (_cmd_init_check != 0) {
    EIntr();
    return;
  }
  _cmd_init_check = 1;
  psVar6 = _sys_buffer;
  _data_table.cpbuffer = (void *)0x204c3880;
  _data_table.sreg = soft_reg;
  _data_table.sbuffer = (void *)0x204c3900;
  _data_table.ssize = 0x20;
  _data_table.obuffer = (void *)0x0;
  _data_table.sysdata = _sys_buffer;
  _data_table.userdata = (sceSifCmdData *)0x0;
  _data_table.usize = 0;
  do {
    psVar6->func = (undefined1 *)0x0;
    psVar6->data = (void *)0x0;
    psVar6 = psVar6 + 1;
  } while ((int)psVar6 < 0x4c3b00);
  iVar7 = 0x1f;
  puVar2 = soft_reg + 0x1f;
  do {
    *puVar2 = 0;
    iVar7 = iVar7 + -1;
    puVar2 = puVar2 + -1;
  } while (-1 < iVar7);
  _sys_buffer[0].func = _change_addr;
  _sys_buffer[1].func = _set_sreg;
  _sys_buffer[1].data = &_data_table;
  _sys_buffer[0].data = &_data_table;
  EIntr();
  FlushCache(0);
  uVar1 = REG_DMAC_STAT;
  if ((uVar1 & 0x20) != 0) {
    REG_DMAC_STAT = 0x20;
  }
  uVar1 = REG_DMAC_5_SIF0_CHCR;
  if ((uVar1 & 0x100) == 0) {
    sceSifSetDChain();
  }
  sif0_handleid = AddDmacHandler(5,0x27fcb8,0);
  EnableDmac(5);
  lVar3 = sceSifGetReg(0xffffffff80000000);
  _data_table.obuffer = (void *)lVar3;
  if (lVar3 == 0) {
    do {
      uVar4 = sceSifGetReg(4);
    } while ((uVar4 & 0x20000) == 0);
    uVar5 = sceSifGetReg(2);
    _data_table.obuffer = (void *)uVar5;
    sceSifSetReg(0xffffffff80000000,uVar5);
    sceSifSetReg(0xffffffff80000001,0x4c3958);
    _csdata.newaddr = _pckt_buffer;
    _csdata.chdr.opt = 0;
    sceSifSendCmd(0x80000002,&_csdata,0x14,(void *)0x0,(void *)0x0,0);
    return;
  }
  _csdata.newaddr = _pckt_buffer;
  sceSifSendCmd(0x80000000,&_csdata,0x14,(void *)0x0,(void *)0x0,0);
  return;
}

void sceSifExitCmd() {
  DisableDmac(5);
  RemoveDmacHandler(5,sif0_handleid);
  _cmd_init_check = 0;
  return;
}

sceSifCmdData* sceSifSetCmdBuffer(sceSifCmdData *p, int size) {
	sceSifCmdData *ret;
	
  sceSifCmdData *psVar1;
  
  psVar1 = _data_table.userdata;
  _data_table.usize = size;
  _data_table.userdata = p;
  return psVar1;
}

sceSifCmdData* sceSifSetSysCmdBuffer(sceSifCmdData *p, int size) {
	sceSifCmdData *ret;
	
  sceSifCmdData *psVar1;
  
  psVar1 = _data_table.sysdata;
  _data_table.ssize = size;
  _data_table.sysdata = p;
  return psVar1;
}

void sceSifAddCmdHandler(unsigned int i, sceSifCmdHandler cf, void *data) {
	void *gp;
	void *gp;
	
  sceSifCmdData *psVar1;
  int iVar2;
  
  if ((int)i < 0) {
    iVar2 = (i & 0x7fffffff) * 0xc;
    psVar1 = _data_table.sysdata + (i & 0x7fffffff);
    psVar1->data = data;
    psVar1->func = cf;
    psVar1 = _data_table.sysdata;
                    /* inlined from ../../../include/eekernel.h */
                    /* end of inlined section */
  }
  else {
    iVar2 = i * 0xc;
    psVar1 = _data_table.userdata + i;
    psVar1->data = data;
    psVar1->func = cf;
                    /* inlined from ../../../include/eekernel.h */
                    /* end of inlined section */
    psVar1 = _data_table.userdata;
  }
  *(undefined4 *)((int)&psVar1->gp + iVar2) = 0x3f57f0;
  return;
}

void sceSifRemoveCmdHandler(unsigned int i) {
  if ((int)i < 0) {
    _data_table.sysdata[i & 0x7fffffff].func = (undefined1 *)0x0;
    return;
  }
  _data_table.userdata[i].func = (undefined1 *)0x0;
  return;
}

static unsigned int _sceSifSendCmd(unsigned int fcode, unsigned int mode, void *pp, int ps, void *src, void *dest, int size) {
	int cnt;
	unsigned int did;
	sceSifDmaData dmad[2];
	
  uint uVar1;
  int iVar2;
  int iVar3;
  sceSifDmaData dmad [2];
  
  if (0x60 < ps - 0x10U) {
    return 0;
  }
  iVar3 = 0;
  if (size < 1) {
                    /* WARNING: Load size is inaccurate */
    *(undefined4 *)((int)pp + 4) = 0;
    *(uint *)pp = (uint)*pp;
  }
  else {
                    /* WARNING: Load size is inaccurate */
    *(void **)((int)pp + 4) = dest;
    iVar3 = 1;
    *(uint *)pp = (uint)*pp | size << 8;
    dmad[0].mode = 0;
    dmad[0].data = (uint)src;
    dmad[0].addr = (uint)dest;
    dmad[0].size = size;
    if ((mode & 4) != 0) {
      sceSifWriteBackDCache(src,size);
      iVar2 = 0x10;
      goto LAB_0027fba0;
    }
  }
  iVar2 = iVar3 << 4;
LAB_0027fba0:
  *(void **)((int)&dmad[0].data + iVar2) = pp;
  *(void **)((int)&dmad[0].addr + iVar2) = _data_table.obuffer;
  *(int *)((int)&dmad[0].size + iVar2) = ps;
  *(uint *)((int)pp + 8) = fcode;
  *(char *)pp = (char)ps;
  *(undefined4 *)((int)&dmad[0].mode + iVar2) = 0x44;
  sceSifWriteBackDCache(pp,ps);
  if ((mode & 1) == 0) {
    uVar1 = sceSifSetDma(dmad,iVar3 + 1);
  }
  else {
    uVar1 = isceSifSetDma(dmad);
  }
  return uVar1;
}

unsigned int sceSifSendCmd(unsigned int fid, void *pp, int ps, void *src, void *dest, int size) {
  uint uVar1;
  
  uVar1 = _sceSifSendCmd(fid,0,pp,ps,src,dest,size);
  return uVar1;
}

unsigned int isceSifSendCmd(unsigned int fid, void *pp, int ps, void *src, void *dest, int size) {
  uint uVar1;
  
  uVar1 = _sceSifSendCmd(fid,1,pp,ps,src,dest,size);
  return uVar1;
}

static int _sceSifCmdIntrHdlr(int chan) {
	u_long128 *p;
	u_long128 buffer[7];
	sceSifCmdDataTable *pScdt;
	sceSifCmdHdr *pSch;
	sceSifCmdHandler f;
	int i;
	int s;
	void *newgp;
	void *oldgp;
	void *oldgp;
	void *newgp;
	void *oldgp;
	void *oldgp;
	
  byte bVar1;
  code *pcVar2;
  undefined8 uVar3;
  sceSifCmdData *psVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined8 *puVar8;
  uint16 *puVar9;
  uint16 buffer [7];
  
  puVar8 = (undefined8 *)_data_table.cpbuffer;
  puVar9 = buffer;
                    /* WARNING: Load size is inaccurate */
  bVar1 = *_data_table.cpbuffer;
  if (bVar1 == 0) {
    return 0;
  }
  *(undefined *)_data_table.cpbuffer = 0;
  for (iVar7 = (int)(bVar1 + 0xf) >> 4; iVar7 != 0; iVar7 = iVar7 + -1) {
    uVar3 = *puVar8;
    uVar5 = *(undefined4 *)(puVar8 + 1);
    uVar6 = *(undefined4 *)((int)puVar8 + 0xc);
    puVar8 = puVar8 + 2;
    *(int *)puVar9 = (int)uVar3;
    *(int *)((int)puVar9 + 4) = (int)((ulong)uVar3 >> 0x20);
    *(undefined4 *)((int)puVar9 + 8) = uVar5;
    *(undefined4 *)((int)puVar9 + 0xc) = uVar6;
    puVar9 = (uint16 *)((int)puVar9 + 0x10);
  }
  isceSifSetDChain();
  if ((int)buffer[0]._8_4_ < 0) {
    buffer[0]._8_4_ = buffer[0]._8_4_ & 0x7fffffff;
    if (_data_table.ssize <= (int)buffer[0]._8_4_) goto LAB_0027fde0;
    pcVar2 = (code *)_data_table.sysdata[buffer[0]._8_4_].func;
    psVar4 = _data_table.sysdata;
  }
  else {
    if (_data_table.usize <= (int)buffer[0]._8_4_) goto LAB_0027fde0;
    pcVar2 = (code *)_data_table.userdata[buffer[0]._8_4_].func;
    psVar4 = _data_table.userdata;
  }
  if (pcVar2 != (code *)0x0) {
    (*pcVar2)(buffer,(&psVar4->data)[buffer[0]._8_4_ * 3]);
                    /* inlined from ../../../include/eekernel.h */
  }
LAB_0027fde0:
                    /* end of inlined section */
  SYNC(0);
  EI();
  return 0;
}

void sceSifWriteBackDCache(void *addr, int size) {
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  if (0 < size) {
    uVar1 = (uint)addr & 0xffffffc0;
    uVar3 = (((int)addr + size + -1 & 0xffffffc0U) - uVar1 >> 6) + 1;
    uVar2 = uVar3 & 7;
    uVar3 = uVar3 >> 3;
    if (uVar2 != 0) {
      do {
        SYNC(0);
        cacheOp(0x18,uVar1);
        SYNC(0);
        uVar2 = uVar2 - 1;
        uVar1 = uVar1 + 0x40;
      } while (0 < (int)uVar2);
    }
    if (uVar3 != 0) {
      do {
        uVar3 = uVar3 - 1;
        SYNC(0);
        cacheOp(0x18,uVar1);
        SYNC(0);
        cacheOp(0x18,uVar1 + 0x40);
        SYNC(0);
        cacheOp(0x18,uVar1 + 0x80);
        SYNC(0);
        cacheOp(0x18,uVar1 + 0xc0);
        SYNC(0);
        cacheOp(0x18,uVar1 + 0x100);
        SYNC(0);
        cacheOp(0x18,uVar1 + 0x140);
        SYNC(0);
        cacheOp(0x18,uVar1 + 0x180);
        SYNC(0);
        cacheOp(0x18,uVar1 + 0x1c0);
        SYNC(0);
        uVar1 = uVar1 + 0x200;
      } while (0 < (int)uVar3);
    }
  }
  return;
}
