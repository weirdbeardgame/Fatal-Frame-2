// STATUS: NOT STARTED

#include "filestub.h"

typedef struct {
	int ee_semid;
	unsigned int ee_retadr;
	unsigned int ee_retsiz;
	int flag;
	unsigned int mode;
	char name[1024];
	int ee_fds;
} _sceFsOpenData;

typedef struct {
	int ee_semid;
	unsigned int ee_retadr;
	unsigned int ee_retsiz;
	int fd;
	int ee_fds;
} _sceFsCloseData;

typedef struct {
	int ee_semid;
	unsigned int ee_retadr;
	unsigned int ee_retsiz;
	int fd;
	int offset;
	int how;
	int ee_fds;
} _sceFsLseekData;

typedef struct {
	int ee_semid;
	unsigned int ee_retadr;
	unsigned int ee_retsiz;
	int fd;
	unsigned int addr;
	int size;
	unsigned int intr_addr;
	int ee_fds;
} _sceFsReadData;

typedef struct {
	int ee_semid;
	unsigned int ee_retadr;
	unsigned int ee_retsiz;
	int fd;
	unsigned int addr;
	int size;
	int psize;
	unsigned char pdata[16];
	int ee_fds;
} _sceFsWriteData;

typedef struct {
	int ee_semid;
	unsigned int ee_retadr;
	unsigned int ee_retsiz;
	int fd;
	int cmd;
	unsigned char arg[1024];
	void *ret_argadr;
	int ret_argsiz;
	int arglen;
} _sceFsIoctlData;

typedef struct {
	int ee_semid;
	unsigned int ee_retadr;
	unsigned int ee_retsiz;
	char name[1024];
} _sceFsNameData;

typedef struct {
	int ee_semid;
	unsigned int ee_retadr;
	unsigned int ee_retsiz;
	void *addr;
} _sceFsAddrData;

typedef struct {
	int ee_semid;
	unsigned int ee_retadr;
	unsigned int ee_retsiz;
	void *addr;
	unsigned char name[1024];
} _sceFsGStatData;

typedef struct {
	int ee_semid;
	unsigned int ee_retadr;
	unsigned int ee_retsiz;
	unsigned int cbit;
	sce_stat stat;
	unsigned char name[1024];
} _sceFsCStatData;

typedef struct {
	int ee_semid;
	unsigned int ee_retadr;
	unsigned int ee_retsiz;
	char path[1024];
	char blkdevname[1024];
	unsigned char arg[1024];
	int arglen;
} _sceFsFormatData;

typedef struct {
	int ee_semid;
	unsigned int ee_retadr;
	unsigned int ee_retsiz;
	char oldpath[1024];
	char newpath[1024];
} _sceFsRenameData;

typedef struct {
	int ee_semid;
	unsigned int ee_retadr;
	unsigned int ee_retsiz;
	int fd;
	int flag;
	char path[1024];
} _sceFsSyncData;

typedef struct {
	int ee_semid;
	unsigned int ee_retadr;
	unsigned int ee_retsiz;
	int flag;
	char name[1024];
} _sceFsMkdirData;

typedef struct {
	int ee_semid;
	unsigned int ee_retadr;
	unsigned int ee_retsiz;
	char fsdevname[1024];
	char blkdevname[1024];
	unsigned char arg[1024];
	int flag;
	int arglen;
} _sceFsMountData;

typedef struct {
	int ee_semid;
	unsigned int ee_retadr;
	unsigned int ee_retsiz;
	int fd;
	long int offset;
	int how;
	int ee_fds;
} _sceFsLseek64Data;

typedef struct {
	int ee_semid;
	unsigned int ee_retadr;
	unsigned int ee_retsiz;
	char path[1024];
	unsigned char arg_buf[1024];
	int cmd;
	int arglen;
	void *ret_argadr;
	int ret_arglen;
} _sceFsDevctlData;

typedef struct {
	int ee_semid;
	unsigned int ee_retadr;
	unsigned int ee_retsiz;
	char existing[1024];
	char new[1024];
} _sceFsSymlinkData;

typedef struct {
	int ee_semid;
	unsigned int ee_retadr;
	unsigned int ee_retsiz;
	u_int bufsize;
	u_int bufaddr;
	char path[1024];
} _sceFsReadlinkData;

typedef struct {
	int psize;
	int ssize;
	unsigned int paddr;
	unsigned int saddr;
	unsigned char pdata[64];
	unsigned char sdata[64];
} _sceFsReadIntrData;

typedef struct {
	int ee_semid;
	unsigned int ee_retmod;
	unsigned int ee_retadr;
	unsigned int ee_retsiz;
	int data_top[4];
} _sceFsIntrRcvData;

typedef struct {
	int ee_semid;
	unsigned int ee_retmod;
	unsigned int ee_retadr;
	unsigned int ee_retsiz;
	int ee_ret;
	unsigned int ee_dentadr;
	sce_dirent dent;
} _sceFsIntrRcvDirData;

typedef struct {
	int ee_semid;
	unsigned int ee_retmod;
	unsigned int ee_retadr;
	unsigned int ee_retsiz;
	int ee_ret;
	unsigned int ee_readladr;
	unsigned int ee_readlsiz;
	char linkname[1024];
} _sceFsIntrRcvReadLData;

typedef struct {
	int ee_semid;
	unsigned int ee_retmod;
	unsigned int ee_retadr;
	unsigned int ee_retsiz;
	int ee_ret;
	unsigned int ret_argadr;
	unsigned int ret_argsiz;
	unsigned char arg[1024];
} _sceFsIntrRcvIoctlData;

typedef struct {
	int ee_semid;
	unsigned int ee_retmod;
	unsigned int ee_retadr;
	unsigned int ee_retsiz;
	int ee_ret;
	unsigned int ret_argadr;
	unsigned int ret_argsiz;
	unsigned char arg[1024];
} _sceFsIntrRcvDevctlData;

typedef struct {
	int i_fd;
	unsigned int i_flag;
	int i_errno;
	void *i_private;
} _sceFsIob;

typedef struct {
	void (*sceFsPoffCbfunc)(/* parameters unknown */);
	void *sceFsPoffCbdata;
} _sceFsPoffData;

int _sceFs_q[32] = {
	/* [0] = */ -1,
	/* [1] = */ -1,
	/* [2] = */ -1,
	/* [3] = */ -1,
	/* [4] = */ -1,
	/* [5] = */ -1,
	/* [6] = */ -1,
	/* [7] = */ -1,
	/* [8] = */ -1,
	/* [9] = */ -1,
	/* [10] = */ -1,
	/* [11] = */ -1,
	/* [12] = */ -1,
	/* [13] = */ -1,
	/* [14] = */ -1,
	/* [15] = */ -1,
	/* [16] = */ -1,
	/* [17] = */ -1,
	/* [18] = */ -1,
	/* [19] = */ -1,
	/* [20] = */ -1,
	/* [21] = */ -1,
	/* [22] = */ -1,
	/* [23] = */ -1,
	/* [24] = */ -1,
	/* [25] = */ -1,
	/* [26] = */ -1,
	/* [27] = */ -1,
	/* [28] = */ -1,
	/* [29] = */ -1,
	/* [30] = */ -1,
	/* [31] = */ -1
};

static unsigned int ee_retbuf_sel = 0;
static int _fs_init = 0;
static int _fs_rcv_bufdbl = 0;
static int _fs_semid = -1;
static int _fs_iob_semid = -1;
static int _fs_fsq_semid = -1;
static char *_fswildcard = 0x3ea3c8;
static unsigned char _send_data[3136];
static unsigned char _rcv_data_rpc[64];
static unsigned char _rcv_data_cmd[2][1088];
static _sceFsIob _iob[32];
static sceSifClientData _cd;
static char _fsversion[4];
static int _sif_FsRcv_Data[16];
static int _sif_FsPoff_Data[16];
static void *sceCbPoff_Gp;

static void _sceFsIobSemaMK() {
	SemaParam sparam;
	
  SemaParam sparam;
  
  if (_fs_iob_semid == -1) {
    sparam.option = 0;
    sparam.maxCount = 1;
    sparam.initCount = 1;
    _fs_iob_semid = CreateSema(&sparam);
    _fs_fsq_semid = CreateSema(&sparam);
  }
  return;
}

static _sceFsIob* new_iob() {
	_sceFsIob *io;
	
  int iVar1;
  uint uVar2;
  _sceFsIob *p_Var3;
  
  _sceFsIobSemaMK();
  WaitSema(_fs_iob_semid);
  iVar1 = _fs_iob_semid;
  p_Var3 = _iob;
  uVar2 = _iob[0].i_flag;
  while( true ) {
    if (uVar2 == 0) {
      p_Var3->i_flag = 0x10000000;
      SignalSema(iVar1);
      return p_Var3;
    }
    if ((_sceFsIob *)((int)&_iob[0x1f].i_private + 3) < p_Var3 + 1) break;
    uVar2 = p_Var3[1].i_flag;
    p_Var3 = p_Var3 + 1;
  }
  SignalSema(_fs_iob_semid);
  return (_sceFsIob *)0x0;
}

static _sceFsIob* get_iob(int fd) {
	_sceFsIob *ret;
	
  _sceFsIob *p_Var1;
  
  _sceFsIobSemaMK();
  WaitSema(_fs_iob_semid);
  if ((uint)fd < 0x20) {
    p_Var1 = _iob + fd;
    SignalSema(_fs_iob_semid);
  }
  else {
    SignalSema(_fs_iob_semid);
    p_Var1 = (_sceFsIob *)0x0;
  }
  return p_Var1;
}

static void _sceFs_Rcv_Intr(void *pkt, void *data) {
	int ee_semid;
	unsigned int ee_retadr;
	unsigned int ee_retsiz;
	unsigned int ee_retmod;
	int i;
	unsigned char *cp;
	unsigned char *uccp;
	unsigned char *rcv_buf;
	_sceFsReadIntrData *ridp;
	unsigned int r_addr;
	unsigned int r_size;
	
  undefined uVar1;
  ulong uVar2;
  ulong *puVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  int *piVar7;
  ulong uVar8;
  undefined *puVar9;
  ulong *puVar10;
  undefined *puVar11;
  ulong uVar12;
  ulong *puVar13;
  int iVar14;
  size_t __n;
  ulong uVar15;
  uint *puVar16;
  int ee_semid;
  uint ee_retmod;
  uint ee_retadr;
  uint ee_retsiz;
  uint r_addr;
  uint r_size;
  
  ee_retbuf_sel = 0;
  if (_fs_rcv_bufdbl != 0) {
    ee_retbuf_sel = *(uint *)((int)pkt + 0xc);
  }
  puVar16 = (uint *)((uint)_rcv_data_cmd[ee_retbuf_sel] | 0x20000000);
  ee_semid = *puVar16;
  uVar4 = (int)&ee_semid + 3U & 3;
  puVar6 = (uint *)(((int)&ee_semid + 3U) - uVar4);
  *puVar6 = *puVar6 & -1 << (uVar4 + 1) * 8 | (uint)ee_semid >> (3 - uVar4) * 8;
  ee_retmod = puVar16[1];
  uVar4 = (int)&ee_retmod + 3U & 3;
  puVar6 = (uint *)(((int)&ee_retmod + 3U) - uVar4);
  *puVar6 = *puVar6 & -1 << (uVar4 + 1) * 8 | ee_retmod >> (3 - uVar4) * 8;
  ee_retadr = puVar16[2];
  uVar4 = (int)&ee_retadr + 3U & 3;
  puVar6 = (uint *)(((int)&ee_retadr + 3U) - uVar4);
  *puVar6 = *puVar6 & -1 << (uVar4 + 1) * 8 | ee_retadr >> (3 - uVar4) * 8;
  ee_retsiz = puVar16[3];
  uVar4 = (int)&ee_retsiz + 3U & 3;
  puVar6 = (uint *)(((int)&ee_retsiz + 3U) - uVar4);
  *puVar6 = *puVar6 & -1 << (uVar4 + 1) * 8 | ee_retsiz >> (3 - uVar4) * 8;
  if (-1 < ee_semid) {
    memcpy((void *)ee_retadr,puVar16 + 4,(long)(int)ee_retsiz);
  }
  switch(ee_retmod) {
  case 2:
    if (0 < (int)puVar16[5]) {
      uVar4 = puVar16[7];
      iVar14 = 0;
      if (0 < (int)puVar16[5]) {
        puVar6 = puVar16 + 9;
        do {
          puVar11 = (undefined *)((uVar4 | 0x20000000) + iVar14);
          uVar1 = *(undefined *)puVar6;
          puVar9 = (undefined *)(uVar4 + iVar14);
          iVar14 = iVar14 + 1;
          *puVar11 = uVar1;
          *puVar9 = uVar1;
          puVar6 = (uint *)((int)(puVar16 + 9) + iVar14);
        } while (iVar14 < (int)puVar16[5]);
      }
    }
    if (0 < (int)puVar16[6]) {
      uVar4 = puVar16[8];
      iVar14 = 0;
      if (0 < (int)puVar16[6]) {
        puVar6 = puVar16 + 0x19;
        do {
          puVar11 = (undefined *)((uVar4 | 0x20000000) + iVar14);
          uVar1 = *(undefined *)puVar6;
          puVar9 = (undefined *)(uVar4 + iVar14);
          iVar14 = iVar14 + 1;
          *puVar11 = uVar1;
          *puVar9 = uVar1;
          puVar6 = (uint *)((int)(puVar16 + 0x19) + iVar14);
        } while (iVar14 < (int)puVar16[6]);
      }
    }
    break;
  case 0xb:
    if (0 < *(int *)ee_retadr) {
      r_addr = puVar16[5];
      uVar4 = (int)&r_addr + 3U & 3;
      puVar6 = (uint *)(((int)&r_addr + 3U) - uVar4);
      *puVar6 = *puVar6 & -1 << (uVar4 + 1) * 8 | r_addr >> (3 - uVar4) * 8;
      puVar10 = (ulong *)(puVar16 + 6);
      puVar13 = (ulong *)r_addr;
      if ((r_addr & 7) == 0) {
        do {
          uVar8 = puVar10[1];
          uVar12 = puVar10[2];
          uVar15 = puVar10[3];
          *puVar13 = *puVar10;
          puVar13[1] = uVar8;
          puVar13[2] = uVar12;
          puVar13[3] = uVar15;
          puVar10 = puVar10 + 4;
          puVar13 = puVar13 + 4;
        } while (puVar10 != (ulong *)(puVar16 + 0x56));
      }
      else {
        do {
          uVar8 = *puVar10;
          uVar12 = puVar10[1];
          uVar15 = puVar10[2];
          uVar2 = puVar10[3];
          uVar4 = (int)puVar13 + 7U & 7;
          puVar3 = (ulong *)(((int)puVar13 + 7U) - uVar4);
          *puVar3 = *puVar3 & -1L << (uVar4 + 1) * 8 | uVar8 >> (7 - uVar4) * 8;
          uVar4 = (uint)puVar13 & 7;
          *(ulong *)((int)puVar13 - uVar4) =
               uVar8 << uVar4 * 8 |
               *(ulong *)((int)puVar13 - uVar4) & 0xffffffffffffffffU >> (8 - uVar4) * 8;
          uVar4 = (int)puVar13 + 0xfU & 7;
          puVar3 = (ulong *)(((int)puVar13 + 0xfU) - uVar4);
          *puVar3 = *puVar3 & -1L << (uVar4 + 1) * 8 | uVar12 >> (7 - uVar4) * 8;
          uVar4 = (uint)(puVar13 + 1) & 7;
          puVar3 = (ulong *)((int)(puVar13 + 1) - uVar4);
          *puVar3 = uVar12 << uVar4 * 8 | *puVar3 & 0xffffffffffffffffU >> (8 - uVar4) * 8;
          uVar4 = (int)puVar13 + 0x17U & 7;
          puVar3 = (ulong *)(((int)puVar13 + 0x17U) - uVar4);
          *puVar3 = *puVar3 & -1L << (uVar4 + 1) * 8 | uVar15 >> (7 - uVar4) * 8;
          uVar4 = (uint)(puVar13 + 2) & 7;
          puVar3 = (ulong *)((int)(puVar13 + 2) - uVar4);
          *puVar3 = uVar15 << uVar4 * 8 | *puVar3 & 0xffffffffffffffffU >> (8 - uVar4) * 8;
          uVar4 = (int)puVar13 + 0x1fU & 7;
          puVar3 = (ulong *)(((int)puVar13 + 0x1fU) - uVar4);
          *puVar3 = *puVar3 & -1L << (uVar4 + 1) * 8 | uVar2 >> (7 - uVar4) * 8;
          uVar4 = (uint)(puVar13 + 3) & 7;
          puVar3 = (ulong *)((int)(puVar13 + 3) - uVar4);
          *puVar3 = uVar2 << uVar4 * 8 | *puVar3 & 0xffffffffffffffffU >> (8 - uVar4) * 8;
          puVar10 = puVar10 + 4;
          puVar13 = puVar13 + 4;
        } while (puVar10 != (ulong *)(puVar16 + 0x56));
      }
      uVar4 = *(uint *)puVar10;
      uVar5 = (int)puVar13 + 3U & 3;
      puVar6 = (uint *)(((int)puVar13 + 3U) - uVar5);
      *puVar6 = *puVar6 & -1 << (uVar5 + 1) * 8 | uVar4 >> (3 - uVar5) * 8;
      uVar5 = (uint)puVar13 & 3;
      *(uint *)((int)puVar13 - uVar5) =
           *(uint *)((int)puVar13 - uVar5) & 0xffffffffU >> (4 - uVar5) * 8 | uVar4 << uVar5 * 8;
    }
    break;
  case 0xc:
    r_addr = puVar16[5];
    uVar4 = (int)&r_addr + 3U & 3;
    puVar6 = (uint *)(((int)&r_addr + 3U) - uVar4);
    *puVar6 = *puVar6 & -1 << (uVar4 + 1) * 8 | r_addr >> (3 - uVar4) * 8;
    uVar8 = *(ulong *)(puVar16 + 6);
    uVar12 = *(ulong *)(puVar16 + 8);
    uVar15 = *(ulong *)(puVar16 + 10);
    uVar2 = *(ulong *)(puVar16 + 0xc);
    uVar4 = r_addr + 7 & 7;
    puVar13 = (ulong *)((r_addr + 7) - uVar4);
    *puVar13 = *puVar13 & -1L << (uVar4 + 1) * 8 | uVar8 >> (7 - uVar4) * 8;
    uVar4 = r_addr & 7;
    *(ulong *)(r_addr - uVar4) =
         uVar8 << uVar4 * 8 | *(ulong *)(r_addr - uVar4) & 0xffffffffffffffffU >> (8 - uVar4) * 8;
    uVar4 = r_addr + 0xf & 7;
    puVar13 = (ulong *)((r_addr + 0xf) - uVar4);
    *puVar13 = *puVar13 & -1L << (uVar4 + 1) * 8 | uVar12 >> (7 - uVar4) * 8;
    uVar4 = r_addr + 8 & 7;
    puVar13 = (ulong *)((r_addr + 8) - uVar4);
    *puVar13 = uVar12 << uVar4 * 8 | *puVar13 & 0xffffffffffffffffU >> (8 - uVar4) * 8;
    uVar4 = r_addr + 0x17 & 7;
    puVar13 = (ulong *)((r_addr + 0x17) - uVar4);
    *puVar13 = *puVar13 & -1L << (uVar4 + 1) * 8 | uVar15 >> (7 - uVar4) * 8;
    uVar4 = r_addr + 0x10 & 7;
    puVar13 = (ulong *)((r_addr + 0x10) - uVar4);
    *puVar13 = uVar15 << uVar4 * 8 | *puVar13 & 0xffffffffffffffffU >> (8 - uVar4) * 8;
    uVar4 = r_addr + 0x1f & 7;
    puVar13 = (ulong *)((r_addr + 0x1f) - uVar4);
    *puVar13 = *puVar13 & -1L << (uVar4 + 1) * 8 | uVar2 >> (7 - uVar4) * 8;
    uVar4 = r_addr + 0x18 & 7;
    puVar13 = (ulong *)((r_addr + 0x18) - uVar4);
    *puVar13 = uVar2 << uVar4 * 8 | *puVar13 & 0xffffffffffffffffU >> (8 - uVar4) * 8;
    uVar8 = *(ulong *)(puVar16 + 0xe);
    uVar12 = *(ulong *)(puVar16 + 0x10);
    uVar15 = *(ulong *)(puVar16 + 0x12);
    uVar2 = *(ulong *)(puVar16 + 0x14);
    uVar4 = r_addr + 0x27 & 7;
    puVar13 = (ulong *)((r_addr + 0x27) - uVar4);
    *puVar13 = *puVar13 & -1L << (uVar4 + 1) * 8 | uVar8 >> (7 - uVar4) * 8;
    uVar4 = r_addr + 0x20 & 7;
    puVar13 = (ulong *)((r_addr + 0x20) - uVar4);
    *puVar13 = uVar8 << uVar4 * 8 | *puVar13 & 0xffffffffffffffffU >> (8 - uVar4) * 8;
    uVar4 = r_addr + 0x2f & 7;
    puVar13 = (ulong *)((r_addr + 0x2f) - uVar4);
    *puVar13 = *puVar13 & -1L << (uVar4 + 1) * 8 | uVar12 >> (7 - uVar4) * 8;
    uVar4 = r_addr + 0x28 & 7;
    puVar13 = (ulong *)((r_addr + 0x28) - uVar4);
    *puVar13 = uVar12 << uVar4 * 8 | *puVar13 & 0xffffffffffffffffU >> (8 - uVar4) * 8;
    uVar4 = r_addr + 0x37 & 7;
    puVar13 = (ulong *)((r_addr + 0x37) - uVar4);
    *puVar13 = *puVar13 & -1L << (uVar4 + 1) * 8 | uVar15 >> (7 - uVar4) * 8;
    uVar4 = r_addr + 0x30 & 7;
    puVar13 = (ulong *)((r_addr + 0x30) - uVar4);
    *puVar13 = uVar15 << uVar4 * 8 | *puVar13 & 0xffffffffffffffffU >> (8 - uVar4) * 8;
    uVar4 = r_addr + 0x3f & 7;
    puVar13 = (ulong *)((r_addr + 0x3f) - uVar4);
    *puVar13 = *puVar13 & -1L << (uVar4 + 1) * 8 | uVar2 >> (7 - uVar4) * 8;
    uVar4 = r_addr + 0x38 & 7;
    puVar13 = (ulong *)((r_addr + 0x38) - uVar4);
    *puVar13 = uVar2 << uVar4 * 8 | *puVar13 & 0xffffffffffffffffU >> (8 - uVar4) * 8;
    break;
  case 0x17:
  case 0x19:
  case 0x1a:
    r_addr = puVar16[5];
    uVar4 = (int)&r_addr + 3U & 3;
    puVar6 = (uint *)(((int)&r_addr + 3U) - uVar4);
    *puVar6 = *puVar6 & -1 << (uVar4 + 1) * 8 | r_addr >> (3 - uVar4) * 8;
    r_size = puVar16[6];
    uVar4 = (int)&r_size + 3U & 3;
    puVar6 = (uint *)(((int)&r_size + 3U) - uVar4);
    *puVar6 = *puVar6 & -1 << (uVar4 + 1) * 8 | r_size >> (3 - uVar4) * 8;
    __n = (size_t)(int)r_size;
    if (0x400 < __n) {
      __n = 0x400;
      r_size = 0x400;
    }
    memcpy((void *)r_addr,puVar16 + 7,__n);
  }
  if (ee_semid < 0) {
    if (_sceFs_q[0] == -ee_semid) {
      _sceFs_q[0] = -1;
    }
    else {
      iVar14 = 1;
      do {
        if (0x1f < iVar14) {
          return;
        }
        piVar7 = _sceFs_q + iVar14;
        iVar14 = iVar14 + 1;
      } while (*piVar7 != -ee_semid);
      *piVar7 = -1;
    }
  }
  else {
    iSignalSema();
  }
  return;
}

static void _sceFsSemInit() {
	SemaParam sparam;
	
  SemaParam sparam;
  
  if (_fs_semid == -1) {
    sparam.option = 0;
    sparam.maxCount = 1;
    sparam.initCount = 1;
    _fs_semid = CreateSema(&sparam);
  }
  return;
}

static int _sceFsWaitS(int cur_cmd) {
  _sceFsSemInit();
  WaitSema(_fs_semid);
  return 0;
}

static void _sceFsSigSema() {
  SignalSema(_fs_semid);
  return;
}

int* scePowerOffHandler(void (*func)(/* parameters unknown */), void *addr) {
	int *ret;
	int istat;
	_sceFsPoffData *pd;
	
  int iVar1;
  int iVar2;
  
  _sceFsWaitS(0x1b);
  if (_fs_init == 0) {
    sceFsInit();
  }
  iVar2 = DIntr();
  iVar1 = _sif_FsPoff_Data[0];
  sceCbPoff_Gp = &ChrSortFlyList[3].hdl;
  _sif_FsPoff_Data[0] = (int)func;
  _sif_FsPoff_Data[1] = (int)addr;
  if (iVar2 != 0) {
    EIntr();
  }
  _sceFsSigSema();
  return (int *)iVar1;
}

static void _sceFs_Poff_Intr(void *pkt, void *data) {
	void *oldgp;
	
                    /* WARNING: Load size is inaccurate */
  if (*data != (code *)0x0) {
    (**data)(*(undefined4 *)((int)data + 4));
  }
  SYNC(0);
  EI();
  return;
}

int sceFsInit() {
	int i;
	int istat;
	int bufmode;
	_sceFsIob *io;
	_sceFsPoffData *pd;
	static unsigned int rcv_adr[2];
	
  uint uVar1;
  uint *puVar2;
  int iVar3;
  _sceFsIob *p_Var4;
  int bufmode;
  
  sceSifInitRpc(0);
  _sif_FsPoff_Data[0] = 0;
  _sif_FsPoff_Data[1] = 0;
  iVar3 = DIntr();
  sceSifAddCmdHandler(0x80000011,_sceFs_Rcv_Intr,_sif_FsRcv_Data);
  sceSifAddCmdHandler(0x80000013,_sceFs_Poff_Intr,_sif_FsPoff_Data);
  if (iVar3 != 0) {
    EIntr();
  }
  while( true ) {
    iVar3 = sceSifBindRpc(&_cd,0x80000001,0);
    if (iVar3 < 0) {
      return -1;
    }
    iVar3 = 0x100000;
    if (_cd.serve != (_sif_serve_data *)0x0) break;
    do {
      iVar3 = iVar3 + -1;
    } while (iVar3 != -1);
  }
  _sceFsIobSemaMK();
  WaitSema(_fs_iob_semid);
  p_Var4 = _iob;
  do {
    (&p_Var4->i_fd)[1] = 0;
    p_Var4 = p_Var4 + 1;
  } while (p_Var4 < &_cd);
  SignalSema(_fs_iob_semid);
  rcv_adr_39 = _rcv_data_cmd;
  DAT_004c53c4 = 0x4c64c0;
  iVar3 = sceSifCallRpc(&_cd,0xff,0,&rcv_adr_39,8,_rcv_data_rpc,8,(undefined1 *)0x0,(void *)0x0);
  if (iVar3 < 0) {
    iVar3 = -0x10001;
  }
  else {
    _fsversion[0] = (char)uRam204c6040;
    _fsversion[1] = uRam204c6040._1_1_;
    _fsversion[2] = cRam204c6042;
    _fsversion[3] = cRam204c6043;
    uVar1 = (int)&bufmode + 3U & 3;
    puVar2 = (uint *)(((int)&bufmode + 3U) - uVar1);
    *puVar2 = *puVar2 & -1 << (uVar1 + 1) * 8 | uRam204c6044 >> (3 - uVar1) * 8;
    _fs_init = 1;
    iVar3 = 0;
    _fs_rcv_bufdbl = (int)(uRam204c6044 == 2);
  }
  return iVar3;
}

static int _fs_version() {
	char *libver;
	
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  iVar1 = memcmp(_fsversion,&DAT_00367a7c,4);
  if (iVar1 != 0) {
    iVar1 = memcmp(_fsversion,_fswildcard,4);
    if (iVar1 != 0) {
      iVar1 = memcmp(&DAT_00367a7c,_fswildcard,4);
      uVar2 = (uint)(iVar1 != 0);
    }
  }
  return uVar2;
}

int sceFsReset() {
  _fs_init = 0;
  memset(_fsversion,0,4);
  return 0;
}

int sceOpen(char *name, int flag) {
	unsigned int mode;
	int nsize;
	int ret;
	int retfd;
	_sceFsOpenData *od;
	_sceFsIob *io;
	SemaParam sparam;
	
  uchar uVar1;
  int iVar2;
  int iVar3;
  _sceFsIob *p_Var4;
  int iVar5;
  undefined8 uVar6;
  undefined4 in_a2_lo;
  SemaParam sparam;
  int retfd;
  
  _sceFsWaitS(0);
  if (_fs_init == 0) {
    sceFsInit();
  }
  iVar3 = _fs_version();
  if (iVar3 == 0) {
    p_Var4 = new_iob();
    if (p_Var4 == (_sceFsIob *)0x0) {
      _sceFsSigSema();
      iVar3 = -0x13;
    }
    else {
      _send_data[20] = *name;
      iVar3 = 0;
      if (_send_data[20] != '\0') {
        for (iVar3 = 1;
            (iVar3 < 0x400 && (uVar1 = name[iVar3], _send_data[iVar3 + 0x14] = uVar1, uVar1 != '\0')
            ); iVar3 = iVar3 + 1) {
        }
      }
      if (iVar3 == 0x400) {
        _send_data[1043] = '\0';
      }
      iVar3 = (int)(p_Var4 + -0x4c690) >> 4;
      _send_data._12_4_ = flag & 0x7fffffff;
      sparam.maxCount = 1;
      sparam.initCount = 0;
      sparam.option = 0;
      _send_data._16_4_ = in_a2_lo;
      _send_data._1044_4_ = iVar3;
      uVar6 = CreateSema(&sparam);
      _send_data._0_4_ = (undefined4)uVar6;
      _send_data[8] = '\x04';
      _send_data[9] = '\0';
      _send_data[10] = '\0';
      _send_data[11] = '\0';
      _send_data._4_4_ = &retfd;
      iVar5 = sceSifCallRpc(&_cd,0,0,_send_data,0x418,_rcv_data_rpc,4,(undefined1 *)0x0,(void *)0x0)
      ;
      iVar2 = iRam204c6040;
      if (iVar5 < 0) {
        DeleteSema(uVar6);
        _sceFsSigSema();
        iVar3 = -0xb;
      }
      else {
        _sceFsSigSema();
        if (iVar2 == 0) {
          DeleteSema(uVar6);
          iVar3 = -0xb;
        }
        else {
          WaitSema(uVar6);
          DeleteSema(uVar6);
          if (retfd < 0) {
            WaitSema(_fs_iob_semid);
            p_Var4->i_flag = 0;
            SignalSema(_fs_iob_semid);
            iVar3 = retfd;
          }
          else {
            WaitSema(_fs_iob_semid);
            iVar2 = _fs_iob_semid;
            p_Var4->i_flag = p_Var4->i_flag | flag;
            p_Var4->i_fd = retfd;
            SignalSema(iVar2);
          }
        }
      }
    }
  }
  else {
    _sceFsSigSema();
    iVar3 = -0x10004;
  }
  return iVar3;
}

int sceClose(int fd) {
	_sceFsCloseData *cd;
	_sceFsIob *io;
	int ret;
	int ret_close;
	SemaParam sparam;
	
  _sceFsIob *p_Var1;
  int iVar2;
  undefined8 uVar3;
  SemaParam sparam;
  int ret_close;
  
  p_Var1 = get_iob(fd);
  _sceFsWaitS(1);
  if (_fs_init == 0) {
    _sceFsSigSema();
    ret_close = -1;
  }
  else if ((p_Var1 == (_sceFsIob *)0x0) || (p_Var1->i_flag == 0)) {
    _sceFsSigSema();
    ret_close = -9;
  }
  else {
    _send_data._12_4_ = p_Var1->i_fd;
    sparam.maxCount = 1;
    _send_data._16_4_ = (int)(p_Var1 + -0x4c690) >> 4;
    sparam.initCount = 0;
    sparam.option = 0;
    uVar3 = CreateSema(&sparam);
    _send_data._4_4_ = &ret_close;
    _send_data._0_4_ = (undefined4)uVar3;
    _send_data[8] = '\x04';
    _send_data[9] = '\0';
    _send_data[10] = '\0';
    _send_data[11] = '\0';
    iVar2 = sceSifCallRpc(&_cd,1,0,_send_data,0x14,_rcv_data_rpc,4,(undefined1 *)0x0,(void *)0x0);
    if (iVar2 < 0) {
      DeleteSema(uVar3);
      _sceFsSigSema();
      ret_close = -0xb;
    }
    else {
      p_Var1->i_flag = 0;
      iVar2 = iRam204c6040;
      _sceFsSigSema();
      if (iVar2 == 0) {
        DeleteSema(uVar3);
        ret_close = -0xb;
      }
      else {
        WaitSema(uVar3);
        DeleteSema(uVar3);
        if (-1 < ret_close) {
          ret_close = 0;
        }
      }
    }
  }
  return ret_close;
}

int sceLseek(int fd, int offset, int how) {
	_sceFsLseekData *ld;
	_sceFsIob *io;
	int ret;
	int ret_lseek;
	int cnt0;
	SemaParam sparam;
	
  uint uVar1;
  _sceFsIob *p_Var2;
  int iVar3;
  undefined8 uVar4;
  int *piVar5;
  int iVar6;
  SemaParam sparam;
  int ret_lseek;
  
  p_Var2 = get_iob(fd);
  _sceFsWaitS(4);
  if (_fs_init == 0) {
    _sceFsSigSema();
    ret_lseek = -1;
  }
  else if ((p_Var2 == (_sceFsIob *)0x0) || (uVar1 = p_Var2->i_flag, uVar1 == 0)) {
    _sceFsSigSema();
    ret_lseek = -9;
  }
  else {
    _send_data._12_4_ = p_Var2->i_fd;
    _send_data._24_4_ = (int)(p_Var2 + -0x4c690) >> 4;
    sparam.maxCount = 1;
    sparam.initCount = 0;
    sparam.option = 0;
    _send_data._16_4_ = offset;
    _send_data._20_4_ = how;
    uVar4 = CreateSema(&sparam);
    _send_data._4_4_ = &ret_lseek;
    _send_data[8] = '\x04';
    _send_data[9] = '\0';
    _send_data[10] = '\0';
    _send_data[11] = '\0';
    _send_data._0_4_ = (undefined4)uVar4;
    if ((uVar1 & 0x8000) != 0) {
      WaitSema(_fs_fsq_semid);
      if (_sceFs_q[0] == -1) {
        _sceFs_q[0]._0_1_ = _send_data[0];
        _sceFs_q[0]._1_1_ = _send_data[1];
        _sceFs_q[0]._2_1_ = _send_data[2];
        _sceFs_q[0]._3_1_ = _send_data[3];
        _send_data._0_4_ = -_send_data._0_4_;
      }
      else {
        iVar6 = 1;
        do {
          if (0x1f < iVar6) goto LAB_00281e04;
          piVar5 = _sceFs_q + iVar6;
          iVar6 = iVar6 + 1;
        } while (*piVar5 != -1);
        *piVar5 = _send_data._0_4_;
        _send_data._0_4_ = -_send_data._0_4_;
      }
LAB_00281e04:
      SignalSema(_fs_fsq_semid);
    }
    iVar3 = sceSifCallRpc(&_cd,4,0,_send_data,0x1c,_rcv_data_rpc,4,(undefined1 *)0x0,(void *)0x0);
    iVar6 = iRam204c6040;
    if (iVar3 < 0) {
      DeleteSema(uVar4);
      _sceFsSigSema();
      ret_lseek = -0xb;
    }
    else {
      _sceFsSigSema();
      if (iVar6 == 0) {
        DeleteSema(uVar4);
        ret_lseek = -0xb;
      }
      else if ((uVar1 & 0x8000) == 0) {
        WaitSema(uVar4);
        DeleteSema(uVar4);
      }
      else {
        DeleteSema(uVar4);
        ret_lseek = 0;
      }
    }
  }
  return ret_lseek;
}

int sceRead(int fd, void *addr, int size) {
	_sceFsReadData *rd;
	_sceFsIob *io;
	int ret;
	int ret_read;
	int cnt0;
	SemaParam sparam;
	
  uint uVar1;
  _sceFsIob *p_Var2;
  int iVar3;
  undefined8 uVar4;
  int *piVar5;
  int iVar6;
  SemaParam sparam;
  int ret_read;
  
  p_Var2 = get_iob(fd);
  _sceFsWaitS(2);
  if (_fs_init == 0) {
    _sceFsSigSema();
    ret_read = -1;
  }
  else if ((p_Var2 == (_sceFsIob *)0x0) || (uVar1 = p_Var2->i_flag, uVar1 == 0)) {
    _sceFsSigSema();
    ret_read = -9;
  }
  else {
    _send_data._12_4_ = p_Var2->i_fd;
    sparam.maxCount = 1;
    _send_data._28_4_ = (int)(p_Var2 + -0x4c690) >> 4;
    sparam.initCount = 0;
    sparam.option = 0;
    _send_data._16_4_ = addr;
    _send_data._20_4_ = size;
    uVar4 = CreateSema(&sparam);
    _send_data._4_4_ = &ret_read;
    _send_data[8] = '\x04';
    _send_data[9] = '\0';
    _send_data[10] = '\0';
    _send_data[11] = '\0';
    _send_data._0_4_ = (undefined4)uVar4;
    if ((uVar1 & 0x8000) != 0) {
      WaitSema(_fs_fsq_semid);
      if (_sceFs_q[0] == -1) {
        _sceFs_q[0]._0_1_ = _send_data[0];
        _sceFs_q[0]._1_1_ = _send_data[1];
        _sceFs_q[0]._2_1_ = _send_data[2];
        _sceFs_q[0]._3_1_ = _send_data[3];
        _send_data._0_4_ = -_send_data._0_4_;
      }
      else {
        iVar6 = 1;
        do {
          if (0x1f < iVar6) goto LAB_00282038;
          piVar5 = _sceFs_q + iVar6;
          iVar6 = iVar6 + 1;
        } while (*piVar5 != -1);
        *piVar5 = _send_data._0_4_;
        _send_data._0_4_ = -_send_data._0_4_;
      }
LAB_00282038:
      SignalSema(_fs_fsq_semid);
    }
    if ((uVar1 & 0x20000000) == 0) {
      sceSifWriteBackDCache(addr,size);
    }
    sceSifWriteBackDCache(_send_data,0x20);
    iVar3 = sceSifCallRpc(&_cd,2,0,_send_data,0x20,_rcv_data_rpc,4,(undefined1 *)0x0,(void *)0x0);
    iVar6 = iRam204c6040;
    if (iVar3 < 0) {
      DeleteSema(uVar4);
      _sceFsSigSema();
      ret_read = -0xb;
    }
    else {
      _sceFsSigSema();
      if (iVar6 == 0) {
        DeleteSema(uVar4);
        ret_read = -0xb;
      }
      else if ((uVar1 & 0x8000) == 0) {
        WaitSema(uVar4);
        DeleteSema(uVar4);
      }
      else {
        DeleteSema(uVar4);
        ret_read = 0;
      }
    }
  }
  return ret_read;
}

int sceWrite(int fd, void *addr, int size) {
	_sceFsWriteData *wd;
	_sceFsIob *io;
	int i;
	int cnt0;
	int psize;
	int ret;
	int ret_write;
	SemaParam sparam;
	
  uint uVar1;
  int iVar2;
  _sceFsIob *p_Var3;
  uchar *puVar4;
  undefined8 uVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  SemaParam sparam;
  int ret_write;
  
  p_Var3 = get_iob(fd);
  _sceFsWaitS(3);
  if (_fs_init == 0) {
    _sceFsSigSema();
    ret_write = -1;
  }
  else if ((p_Var3 == (_sceFsIob *)0x0) || (uVar1 = p_Var3->i_flag, uVar1 == 0)) {
    _sceFsSigSema();
    ret_write = -9;
  }
  else {
    _send_data._12_4_ = p_Var3->i_fd;
    sparam.maxCount = 1;
    _send_data._44_4_ = (int)(p_Var3 + -0x4c690) >> 4;
    sparam.initCount = 0;
    sparam.option = 0;
    _send_data._16_4_ = addr;
    _send_data._20_4_ = size;
    uVar5 = CreateSema(&sparam);
    _send_data._4_4_ = &ret_write;
    _send_data[8] = '\x04';
    _send_data[9] = '\0';
    _send_data[10] = '\0';
    _send_data[11] = '\0';
    _send_data._0_4_ = (undefined4)uVar5;
    if ((uVar1 & 0x8000) != 0) {
      WaitSema(_fs_fsq_semid);
      if (_sceFs_q[0] == -1) {
        _sceFs_q[0]._0_1_ = _send_data[0];
        _sceFs_q[0]._1_1_ = _send_data[1];
        _sceFs_q[0]._2_1_ = _send_data[2];
        _sceFs_q[0]._3_1_ = _send_data[3];
        _send_data._0_4_ = -_send_data._0_4_;
      }
      else {
        iVar8 = 1;
        do {
          if (0x1f < iVar8) goto LAB_002822a4;
          piVar6 = _sceFs_q + iVar8;
          iVar8 = iVar8 + 1;
        } while (*piVar6 != -1);
        *piVar6 = _send_data._0_4_;
        _send_data._0_4_ = -_send_data._0_4_;
      }
LAB_002822a4:
      SignalSema(_fs_fsq_semid);
    }
    if (((uint)addr & 0xf) == 0) {
      iVar8 = 0;
    }
    else {
      iVar8 = ((uint)addr & 0xfffffff0) - ((int)addr + -0x10);
    }
    if (size < iVar8) {
      iVar8 = size;
    }
    if ((uVar1 & 0x20000000) == 0) {
      sceSifWriteBackDCache(addr,size);
    }
    iVar7 = 0;
    _send_data._24_4_ = iVar8;
    if (0 < iVar8) {
      do {
        puVar4 = (uchar *)(((uint)addr | 0x20000000) + iVar7);
        iVar2 = iVar7 + 0x1c;
        iVar7 = iVar7 + 1;
        _send_data[iVar2] = *puVar4;
      } while (iVar7 < iVar8);
    }
    iVar7 = sceSifCallRpc(&_cd,3,0,_send_data,0x30,_rcv_data_rpc,4,(undefined1 *)0x0,(void *)0x0);
    iVar8 = iRam204c6040;
    if (iVar7 < 0) {
      DeleteSema(uVar5);
      _sceFsSigSema();
      ret_write = -0xb;
    }
    else {
      _sceFsSigSema();
      if (iVar8 == 0) {
        DeleteSema(uVar5);
        ret_write = -0xb;
      }
      else if ((uVar1 & 0x8000) == 0) {
        WaitSema(uVar5);
        DeleteSema(uVar5);
      }
      else {
        DeleteSema(uVar5);
        ret_write = 0;
      }
    }
  }
  return ret_write;
}

int sceIoctl(int fd, int cmd, void *arg) {
	_sceFsIoctlData *id;
	_sceFsIob *io;
	int ret;
	int ret_ioctl;
	int cnt0;
	int wait;
	SemaParam sparam;
	static int *ip0;
	
  uint uVar1;
  uint uVar2;
  ulong *puVar3;
  _sceFsIob *p_Var4;
  void *pvVar5;
  undefined8 *puVar6;
  int iVar7;
  undefined8 uVar8;
  int *piVar9;
  ulong uVar10;
  int iVar11;
  undefined8 *puVar12;
  ulong uVar13;
  ulong in_a3;
  undefined8 uVar14;
  ulong in_t0;
  undefined8 uVar15;
  SemaParam sparam;
  int ret_ioctl;
  
  uVar10 = (ulong)cmd;
  uVar13 = uVar10;
  p_Var4 = get_iob(fd);
  _sceFsWaitS(5);
  ip0_64 = (undefined4 *)arg;
  if (_fs_init == 0) {
    sceFsInit();
  }
  if ((p_Var4 == (_sceFsIob *)0x0) || (p_Var4->i_flag == 0)) {
    _sceFsSigSema();
    return -9;
  }
  _send_data[1044] = '\0';
  _send_data[1045] = '\0';
  _send_data[1046] = '\0';
  _send_data[1047] = '\0';
  _send_data[1048] = '\0';
  _send_data[1049] = '\0';
  _send_data[1050] = '\0';
  _send_data[1051] = '\0';
  if (uVar10 == 2) {
    *(undefined4 *)arg = *(undefined4 *)(ee_retbuf_sel * 0x440 + 0x4c6090 | 0x20000000);
  }
  else if ((long)uVar10 < 3) {
    if (uVar10 != 1) {
      _send_data._12_4_ = p_Var4->i_fd;
LAB_002825a0:
      _send_data._16_4_ = cmd;
      if (arg == (void *)0x0) {
        _send_data[1052] = '\0';
        _send_data[1053] = '\0';
        _send_data[1054] = '\0';
        _send_data[1055] = '\0';
      }
      else {
        puVar12 = (undefined8 *)(_send_data + 0x14);
        uVar10 = 0x400;
        _send_data[1052] = '\0';
        _send_data[1053] = '\x04';
        _send_data[1054] = '\0';
        _send_data[1055] = '\0';
        if ((((uint)arg | 0x4c5414) & 7) == 0) {
          puVar6 = (undefined8 *)((int)arg + 0x400);
          do {
                    /* WARNING: Load size is inaccurate */
            uVar8 = *(undefined8 *)((int)arg + 8);
            uVar14 = *(undefined8 *)((int)arg + 0x10);
            uVar15 = *(undefined8 *)((int)arg + 0x18);
            *puVar12 = *arg;
            puVar12[1] = uVar8;
            puVar12[2] = uVar14;
            puVar12[3] = uVar15;
            arg = (void *)((int)arg + 0x20);
            puVar12 = puVar12 + 4;
          } while ((undefined8 *)arg != puVar6);
        }
        else {
          pvVar5 = (void *)((int)arg + 0x400);
          do {
            uVar1 = (int)arg + 7U & 7;
            uVar2 = (uint)arg & 7;
            uVar10 = (*(long *)(((int)arg + 7U) - uVar1) << (7 - uVar1) * 8 |
                     uVar10 & 0xffffffffffffffffU >> (uVar1 + 1) * 8) & -1L << (8 - uVar2) * 8 |
                     *(ulong *)((int)arg - uVar2) >> uVar2 * 8;
            uVar1 = (int)arg + 0xfU & 7;
            uVar2 = (int)arg + 8U & 7;
            uVar13 = (*(long *)(((int)arg + 0xfU) - uVar1) << (7 - uVar1) * 8 |
                     uVar13 & 0xffffffffffffffffU >> (uVar1 + 1) * 8) & -1L << (8 - uVar2) * 8 |
                     *(ulong *)(((int)arg + 8U) - uVar2) >> uVar2 * 8;
            uVar1 = (int)arg + 0x17U & 7;
            uVar2 = (int)arg + 0x10U & 7;
            in_a3 = (*(long *)(((int)arg + 0x17U) - uVar1) << (7 - uVar1) * 8 |
                    in_a3 & 0xffffffffffffffffU >> (uVar1 + 1) * 8) & -1L << (8 - uVar2) * 8 |
                    *(ulong *)(((int)arg + 0x10U) - uVar2) >> uVar2 * 8;
            uVar1 = (int)arg + 0x1fU & 7;
            uVar2 = (int)arg + 0x18U & 7;
            in_t0 = (*(long *)(((int)arg + 0x1fU) - uVar1) << (7 - uVar1) * 8 |
                    in_t0 & 0xffffffffffffffffU >> (uVar1 + 1) * 8) & -1L << (8 - uVar2) * 8 |
                    *(ulong *)(((int)arg + 0x18U) - uVar2) >> uVar2 * 8;
            uVar1 = (uint)(uchar *)((int)puVar12 + 7U) & 7;
            puVar3 = (ulong *)((uchar *)((int)puVar12 + 7U) + -uVar1);
            *puVar3 = *puVar3 & -1L << (uVar1 + 1) * 8 | uVar10 >> (7 - uVar1) * 8;
            uVar1 = (uint)puVar12 & 7;
            *(ulong *)((int)puVar12 - uVar1) =
                 uVar10 << uVar1 * 8 |
                 *(ulong *)((int)puVar12 - uVar1) & 0xffffffffffffffffU >> (8 - uVar1) * 8;
            uVar1 = (uint)(uchar *)((int)puVar12 + 0xfU) & 7;
            puVar3 = (ulong *)((uchar *)((int)puVar12 + 0xfU) + -uVar1);
            *puVar3 = *puVar3 & -1L << (uVar1 + 1) * 8 | uVar13 >> (7 - uVar1) * 8;
            uVar1 = (uint)(puVar12 + 1) & 7;
            puVar3 = (ulong *)((int)(puVar12 + 1) - uVar1);
            *puVar3 = uVar13 << uVar1 * 8 | *puVar3 & 0xffffffffffffffffU >> (8 - uVar1) * 8;
            uVar1 = (uint)(uchar *)((int)puVar12 + 0x17U) & 7;
            puVar3 = (ulong *)((uchar *)((int)puVar12 + 0x17U) + -uVar1);
            *puVar3 = *puVar3 & -1L << (uVar1 + 1) * 8 | in_a3 >> (7 - uVar1) * 8;
            uVar1 = (uint)(puVar12 + 2) & 7;
            puVar3 = (ulong *)((int)(puVar12 + 2) - uVar1);
            *puVar3 = in_a3 << uVar1 * 8 | *puVar3 & 0xffffffffffffffffU >> (8 - uVar1) * 8;
            uVar1 = (uint)(uchar *)((int)puVar12 + 0x1fU) & 7;
            puVar3 = (ulong *)((uchar *)((int)puVar12 + 0x1fU) + -uVar1);
            *puVar3 = *puVar3 & -1L << (uVar1 + 1) * 8 | in_t0 >> (7 - uVar1) * 8;
            uVar1 = (uint)(puVar12 + 3) & 7;
            puVar3 = (ulong *)((int)(puVar12 + 3) - uVar1);
            *puVar3 = in_t0 << uVar1 * 8 | *puVar3 & 0xffffffffffffffffU >> (8 - uVar1) * 8;
            arg = (void *)((int)arg + 0x20);
            puVar12 = puVar12 + 4;
          } while (arg != pvVar5);
        }
      }
      sparam.initCount = 0;
      sparam.maxCount = 1;
      sparam.option = 0;
      uVar8 = CreateSema(&sparam);
      _send_data[8] = '\x04';
      _send_data[9] = '\0';
      _send_data[10] = '\0';
      _send_data[11] = '\0';
      _send_data._0_4_ = (undefined4)uVar8;
      _send_data._4_4_ = &ret_ioctl;
      sceSifWriteBackDCache(_send_data,0x420);
      iVar7 = sceSifCallRpc(&_cd,5,0,_send_data,0x420,_rcv_data_rpc,4,(undefined1 *)0x0,(void *)0x0)
      ;
      iVar11 = iRam204c6040;
      if (iVar7 < 0) {
        DeleteSema(uVar8);
        _sceFsSigSema();
        return -0xb;
      }
      _sceFsSigSema();
      if (iVar11 == 0) {
        DeleteSema(uVar8);
        return -0xb;
      }
      WaitSema(uVar8);
      DeleteSema(uVar8);
      return ret_ioctl;
    }
    WaitSema(_fs_fsq_semid);
    iVar11 = 0;
    if (_sceFs_q[0] == -1) {
      piVar9 = _sceFs_q;
      iVar11 = 1;
      while ((piVar9 = piVar9 + 1, iVar11 < 0x20 && (*piVar9 == -1))) {
        iVar11 = iVar11 + 1;
      }
    }
    if (iVar11 == 0x20) {
      *ip0_64 = 0;
    }
    else {
      *ip0_64 = 1;
    }
    SignalSema(_fs_fsq_semid);
  }
  else {
    if (uVar10 != 3) {
      _send_data._12_4_ = p_Var4->i_fd;
      goto LAB_002825a0;
    }
    *(undefined8 *)arg = *(undefined8 *)(ee_retbuf_sel * 0x440 + 0x4c6090 | 0x20000000);
  }
  _sceFsSigSema();
  return 0;
}

int sceIoctl2(int fd, int cmd, void *arg, size_t arglen, void *bufp, size_t buflen) {
	_sceFsIoctlData *id;
	_sceFsIob *io;
	int ret;
	int ret_ioctl;
	SemaParam sparam;
	
  int iVar1;
  _sceFsIob *p_Var2;
  int iVar3;
  undefined8 uVar4;
  SemaParam sparam;
  int ret_ioctl;
  
  p_Var2 = get_iob(fd);
  _sceFsWaitS(0x1a);
  if (_fs_init == 0) {
    sceFsInit();
  }
  if ((p_Var2 == (_sceFsIob *)0x0) || (p_Var2->i_flag == 0)) {
    _sceFsSigSema();
    ret_ioctl = -9;
  }
  else if (((ulong)(long)(int)arglen < 0x401) && (buflen < 0x401)) {
    if (arg != (void *)0x0) {
      memcpy(_send_data + 0x14,arg,(long)(int)arglen);
    }
    _send_data._12_4_ = p_Var2->i_fd;
    sparam.maxCount = 1;
    sparam.initCount = 0;
    sparam.option = 0;
    _send_data._16_4_ = cmd;
    _send_data._1052_4_ = arglen;
    uVar4 = CreateSema(&sparam);
    _send_data._4_4_ = &ret_ioctl;
    _send_data[8] = '\x04';
    _send_data[9] = '\0';
    _send_data[10] = '\0';
    _send_data[11] = '\0';
    _send_data._0_4_ = (undefined4)uVar4;
    _send_data._1044_4_ = bufp;
    _send_data._1048_4_ = buflen;
    sceSifWriteBackDCache(_send_data,0x420);
    iVar3 = sceSifCallRpc(&_cd,0x1a,0,_send_data,0x420,_rcv_data_rpc,4,(undefined1 *)0x0,(void *)0x0
                         );
    iVar1 = iRam204c6040;
    if (iVar3 < 0) {
      DeleteSema(uVar4);
      _sceFsSigSema();
      ret_ioctl = -0xb;
    }
    else {
      _sceFsSigSema();
      if (iVar1 == 0) {
        DeleteSema(uVar4);
        ret_ioctl = -0xb;
      }
      else {
        WaitSema(uVar4);
        DeleteSema(uVar4);
      }
    }
  }
  else {
    _sceFsSigSema();
    ret_ioctl = -0x16;
  }
  return ret_ioctl;
}

static int _sceCallCode(char *name, unsigned int callcode) {
	_sceFsNameData *cc;
	int nsize;
	int ret;
	int ret_code;
	SemaParam sparam;
	
  uchar uVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  SemaParam sparam;
  int ret_code;
  
  _sceFsWaitS(callcode);
  if (_fs_init == 0) {
    sceFsInit();
    _send_data[12] = *name;
  }
  else {
    _send_data[12] = *name;
  }
  iVar4 = 0;
  if (_send_data[12] != '\0') {
    for (iVar4 = 1;
        (iVar4 < 0x400 && (uVar1 = name[iVar4], _send_data[iVar4 + 0xc] = uVar1, uVar1 != '\0'));
        iVar4 = iVar4 + 1) {
    }
  }
  if (iVar4 == 0x400) {
    _send_data[1035] = '\0';
    iVar4 = 0x3ff;
  }
  sparam.initCount = 0;
  sparam.maxCount = 1;
  sparam.option = 0;
  uVar3 = CreateSema(&sparam);
  _send_data._0_4_ = (undefined4)uVar3;
  _send_data[8] = '\x04';
  _send_data[9] = '\0';
  _send_data[10] = '\0';
  _send_data[11] = '\0';
  _send_data._4_4_ = &ret_code;
  iVar2 = sceSifCallRpc(&_cd,callcode,0,_send_data,iVar4 + 0xd,_rcv_data_rpc,4,(undefined1 *)0x0,
                        (void *)0x0);
  iVar4 = iRam204c6040;
  if (iVar2 < 0) {
    DeleteSema(uVar3);
    _sceFsSigSema();
    ret_code = -0xb;
  }
  else {
    _sceFsSigSema();
    if (iVar4 == 0) {
      DeleteSema(uVar3);
      ret_code = -0xb;
    }
    else {
      WaitSema(uVar3);
      DeleteSema(uVar3);
    }
  }
  return ret_code;
}

int sceRemove(char *name) {
  int iVar1;
  
  iVar1 = _sceCallCode(name,6);
  return iVar1;
}

int sceMkdir(char *name, int flag) {
	_sceFsMkdirData *mkd;
	int nsize;
	int ret;
	int ret_mkdir;
	SemaParam sparam;
	
  uchar uVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  SemaParam sparam;
  int ret_mkdir;
  
  _sceFsWaitS(7);
  if (_fs_init == 0) {
    sceFsInit();
    _send_data[16] = *name;
  }
  else {
    _send_data[16] = *name;
  }
  iVar4 = 0;
  if (_send_data[16] != '\0') {
    for (iVar4 = 1;
        (iVar4 < 0x400 && (uVar1 = name[iVar4], _send_data[iVar4 + 0x10] = uVar1, uVar1 != '\0'));
        iVar4 = iVar4 + 1) {
    }
  }
  if (iVar4 == 0x400) {
    _send_data[1039] = '\0';
    iVar4 = 0x3ff;
  }
  sparam.maxCount = 1;
  sparam.initCount = 0;
  sparam.option = 0;
  _send_data._12_4_ = flag;
  uVar3 = CreateSema(&sparam);
  _send_data._0_4_ = (undefined4)uVar3;
  _send_data[8] = '\x04';
  _send_data[9] = '\0';
  _send_data[10] = '\0';
  _send_data[11] = '\0';
  _send_data._4_4_ = &ret_mkdir;
  iVar2 = sceSifCallRpc(&_cd,7,0,_send_data,iVar4 + 0x11,_rcv_data_rpc,4,(undefined1 *)0x0,
                        (void *)0x0);
  iVar4 = iRam204c6040;
  if (iVar2 < 0) {
    DeleteSema(uVar3);
    _sceFsSigSema();
    ret_mkdir = -0xb;
  }
  else {
    _sceFsSigSema();
    if (iVar4 == 0) {
      DeleteSema(uVar3);
      ret_mkdir = -0xb;
    }
    else {
      WaitSema(uVar3);
      DeleteSema(uVar3);
    }
  }
  return ret_mkdir;
}

int sceRmdir(char *name) {
  int iVar1;
  
  iVar1 = _sceCallCode(name,8);
  return iVar1;
}

int sceFormat(char *path, char *blkdevname, void *arg, int arglen) {
	int nsize;
	int ret;
	int ret_format;
	_sceFsFormatData *fd;
	SemaParam sparam;
	
  uchar uVar1;
  uchar *puVar2;
  int iVar3;
  undefined8 uVar4;
  int iVar5;
  SemaParam sparam;
  int ret_format;
  
  _sceFsWaitS(0xe);
  if (_fs_init == 0) {
    sceFsInit();
    _send_data[12] = *path;
  }
  else {
    _send_data[12] = *path;
  }
  iVar5 = 0;
  if (_send_data[12] != '\0') {
    for (iVar5 = 1;
        (iVar5 < 0x400 && (uVar1 = path[iVar5], _send_data[iVar5 + 0xc] = uVar1, uVar1 != '\0'));
        iVar5 = iVar5 + 1) {
    }
  }
  if (iVar5 == 0x400) {
    _send_data[1035] = '\0';
  }
  if (blkdevname == (char *)0x0) {
    _send_data[1036] = '\0';
  }
  else {
    _send_data[1036] = *blkdevname;
    iVar5 = 0;
    if (_send_data[1036] != '\0') {
      for (iVar5 = 1;
          (iVar5 < 0x400 &&
          (uVar1 = blkdevname[iVar5], _send_data[iVar5 + 0x40c] = uVar1, uVar1 != '\0'));
          iVar5 = iVar5 + 1) {
      }
    }
    if (iVar5 == 0x400) {
      _send_data[2059] = '\0';
    }
  }
  if (arglen < 0x401) {
    iVar5 = 0;
    if (0 < arglen) {
      do {
        puVar2 = (uchar *)((int)arg + iVar5);
        iVar3 = iVar5 + 0x80c;
        iVar5 = iVar5 + 1;
        _send_data[iVar3] = *puVar2;
      } while (iVar5 < arglen);
    }
    sparam.maxCount = 1;
    sparam.initCount = 0;
    sparam.option = 0;
    _send_data._3084_4_ = arglen;
    uVar4 = CreateSema(&sparam);
    _send_data[8] = '\x04';
    _send_data[9] = '\0';
    _send_data[10] = '\0';
    _send_data[11] = '\0';
    _send_data._0_4_ = (undefined4)uVar4;
    _send_data._4_4_ = &ret_format;
    sceSifWriteBackDCache(_send_data,0xc10);
    iVar3 = sceSifCallRpc(&_cd,0xe,0,_send_data,0xc10,_rcv_data_rpc,4,(undefined1 *)0x0,(void *)0x0)
    ;
    iVar5 = iRam204c6040;
    if (iVar3 < 0) {
      DeleteSema(uVar4);
      _sceFsSigSema();
      ret_format = -0xb;
    }
    else {
      _sceFsSigSema();
      if (iVar5 == 0) {
        DeleteSema(uVar4);
        ret_format = -0xb;
      }
      else {
        WaitSema(uVar4);
        DeleteSema(uVar4);
      }
    }
  }
  else {
    _sceFsSigSema();
    ret_format = -7;
  }
  return ret_format;
}

int sceAddDrv(void *addr) {
	_sceFsAddrData *id;
	int ret;
	int ret_adddrv;
	SemaParam sparam;
	
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  SemaParam sparam;
  int ret_adddrv;
  
  _sceFsWaitS(0xf);
  if (_fs_init == 0) {
    sceFsInit();
  }
  sparam.maxCount = 1;
  sparam.initCount = 0;
  sparam.option = 0;
  _send_data._12_4_ = addr;
  uVar3 = CreateSema(&sparam);
  _send_data._4_4_ = &ret_adddrv;
  _send_data._0_4_ = (undefined4)uVar3;
  _send_data[8] = '\x04';
  _send_data[9] = '\0';
  _send_data[10] = '\0';
  _send_data[11] = '\0';
  iVar2 = sceSifCallRpc(&_cd,0xf,0,_send_data,0x10,_rcv_data_rpc,4,(undefined1 *)0x0,(void *)0x0);
  iVar1 = iRam204c6040;
  if (iVar2 < 0) {
    DeleteSema(uVar3);
    _sceFsSigSema();
    ret_adddrv = -1;
  }
  else {
    _sceFsSigSema();
    if (iVar1 == 0) {
      DeleteSema(uVar3);
      ret_adddrv = -1;
    }
    else {
      WaitSema(uVar3);
      DeleteSema(uVar3);
    }
  }
  return ret_adddrv;
}

int sceDelDrv(char *name) {
  int iVar1;
  
  iVar1 = _sceCallCode(name,0x10);
  return iVar1;
}

int sceDopen(char *name) {
	_sceFsIob *io;
	int ret;
	
  _sceFsIob *p_Var1;
  int iVar2;
  
  _sceFsWaitS(9);
  if (_fs_init == 0) {
    sceFsInit();
  }
  _sceFsSigSema();
  p_Var1 = new_iob();
  if (p_Var1 == (_sceFsIob *)0x0) {
    iVar2 = -0x13;
  }
  else {
    iVar2 = _sceCallCode(name,9);
    if (iVar2 < 0) {
      WaitSema(_fs_iob_semid);
      p_Var1->i_flag = 0;
    }
    else {
      WaitSema(_fs_iob_semid);
      p_Var1->i_fd = iVar2;
      iVar2 = (int)(p_Var1 + -0x4c690) >> 4;
    }
    SignalSema(_fs_iob_semid);
  }
  return iVar2;
}

int sceDclose(int fd) {
	_sceFsCloseData *cd;
	_sceFsIob *io;
	int ret;
	int ret_dclose;
	SemaParam sparam;
	
  _sceFsIob *p_Var1;
  int iVar2;
  undefined8 uVar3;
  SemaParam sparam;
  int ret_dclose;
  
  p_Var1 = get_iob(fd);
  _sceFsWaitS(10);
  if (_fs_init == 0) {
    _sceFsSigSema();
    ret_dclose = -1;
  }
  else if ((p_Var1 == (_sceFsIob *)0x0) || (p_Var1->i_flag == 0)) {
    _sceFsSigSema();
    ret_dclose = -9;
  }
  else {
    _send_data._12_4_ = p_Var1->i_fd;
    sparam.maxCount = 1;
    sparam.initCount = 0;
    sparam.option = 0;
    uVar3 = CreateSema(&sparam);
    _send_data._4_4_ = &ret_dclose;
    _send_data._0_4_ = (undefined4)uVar3;
    _send_data[8] = '\x04';
    _send_data[9] = '\0';
    _send_data[10] = '\0';
    _send_data[11] = '\0';
    iVar2 = sceSifCallRpc(&_cd,10,0,_send_data,0x14,_rcv_data_rpc,4,(undefined1 *)0x0,(void *)0x0);
    if (iVar2 < 0) {
      DeleteSema(uVar3);
      _sceFsSigSema();
      ret_dclose = -0xb;
    }
    else {
      p_Var1->i_flag = 0;
      iVar2 = iRam204c6040;
      _sceFsSigSema();
      if (iVar2 == 0) {
        DeleteSema(uVar3);
        ret_dclose = -0xb;
      }
      else {
        WaitSema(uVar3);
        DeleteSema(uVar3);
        if (-1 < ret_dclose) {
          ret_dclose = 0;
        }
      }
    }
  }
  return ret_dclose;
}

int sceDread(int fd, sce_dirent *dp) {
	_sceFsReadData *rd;
	_sceFsIob *io;
	int ret;
	int ret_dread;
	SemaParam sparam;
	
  int iVar1;
  _sceFsIob *p_Var2;
  int iVar3;
  undefined8 uVar4;
  SemaParam sparam;
  int ret_dread;
  
  p_Var2 = get_iob(fd);
  _sceFsWaitS(0xb);
  if (_fs_init == 0) {
    _sceFsSigSema();
    ret_dread = -1;
  }
  else if ((p_Var2 == (_sceFsIob *)0x0) || (p_Var2->i_flag == 0)) {
    _sceFsSigSema();
    ret_dread = -9;
  }
  else {
    _send_data._12_4_ = p_Var2->i_fd;
    sparam.maxCount = 1;
    sparam.initCount = 0;
    sparam.option = 0;
    _send_data._16_4_ = dp;
    uVar4 = CreateSema(&sparam);
    _send_data._4_4_ = &ret_dread;
    _send_data._0_4_ = (undefined4)uVar4;
    _send_data[8] = '\x04';
    _send_data[9] = '\0';
    _send_data[10] = '\0';
    _send_data[11] = '\0';
    iVar3 = sceSifCallRpc(&_cd,0xb,0,_send_data,0x20,_rcv_data_rpc,4,(undefined1 *)0x0,(void *)0x0);
    iVar1 = iRam204c6040;
    if (iVar3 < 0) {
      WaitSema(uVar4);
      _sceFsSigSema();
      ret_dread = -0xb;
    }
    else {
      _sceFsSigSema();
      if (iVar1 == 0) {
        DeleteSema(uVar4);
        ret_dread = -0xb;
      }
      else {
        WaitSema(uVar4);
        DeleteSema(uVar4);
      }
    }
  }
  return ret_dread;
}

int sceGetstat(char *name, sce_stat *dp) {
	_sceFsGStatData *sd;
	int nsize;
	int ret;
	int ret_getstat;
	SemaParam sparam;
	
  uchar uVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  SemaParam sparam;
  int ret_getstat;
  
  _sceFsWaitS(0xc);
  if (_fs_init == 0) {
    sceFsInit();
    _send_data[16] = *name;
  }
  else {
    _send_data[16] = *name;
  }
  iVar2 = 0;
  uVar1 = _send_data[16];
  while (iVar4 = iVar2, uVar1 != '\0') {
    iVar4 = iVar2 + 1;
    if (0x3ff < iVar4) break;
    uVar1 = name[iVar4];
    _send_data[iVar2 + 0x11] = uVar1;
    iVar2 = iVar4;
  }
  if (iVar4 == 0x400) {
    _send_data[1039] = '\0';
    iVar4 = 0x3ff;
  }
  sparam.maxCount = 1;
  sparam.initCount = 0;
  sparam.option = 0;
  _send_data._12_4_ = dp;
  uVar3 = CreateSema(&sparam);
  _send_data._0_4_ = (undefined4)uVar3;
  _send_data[8] = '\x04';
  _send_data[9] = '\0';
  _send_data[10] = '\0';
  _send_data[11] = '\0';
  _send_data._4_4_ = &ret_getstat;
  iVar4 = sceSifCallRpc(&_cd,0xc,0,_send_data,iVar4 + 0x11,_rcv_data_rpc,4,(undefined1 *)0x0,
                        (void *)0x0);
  iVar2 = iRam204c6040;
  if (iVar4 < 0) {
    DeleteSema(uVar3);
    _sceFsSigSema();
    ret_getstat = -0xb;
  }
  else {
    _sceFsSigSema();
    if (iVar2 == 0) {
      DeleteSema(uVar3);
      ret_getstat = -0xb;
    }
    else {
      WaitSema(uVar3);
      DeleteSema(uVar3);
    }
  }
  return ret_getstat;
}

int sceChstat(char *name, sce_stat *dp, unsigned int cbit) {
	_sceFsCStatData *cd;
	int nsize;
	int ret;
	int ret_chstat;
	SemaParam sparam;
	
  undefined *puVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  int iVar10;
  SemaParam sparam;
  int ret_chstat;
  
  uVar9 = (ulong)(int)cbit;
  uVar8 = (ulong)(int)dp;
  uVar7 = 0xd;
  _sceFsWaitS(0xd);
  if (_fs_init == 0) {
    sceFsInit();
    _send_data[80] = *name;
  }
  else {
    _send_data[80] = *name;
  }
  iVar5 = 0;
  bVar2 = _send_data[80];
  while (iVar10 = iVar5, (ulong)bVar2 != 0) {
    iVar10 = iVar5 + 1;
    if (0x3ff < iVar10) break;
    uVar7 = (ulong)(int)(_send_data + iVar5 + 1);
    bVar2 = name[iVar10];
    _send_data[iVar5 + 0x51] = bVar2;
    iVar5 = iVar10;
  }
  if (iVar10 == 0x400) {
    _send_data[1103] = '\0';
    iVar10 = 0x3ff;
  }
  puVar1 = (undefined *)((int)&dp->st_attr + 3);
  uVar3 = (uint)puVar1 & 7;
  uVar4 = (uint)dp & 7;
  _send_data._16_8_ =
       (*(long *)(puVar1 + -uVar3) << (7 - uVar3) * 8 |
       (ulong)bVar2 & 0xffffffffffffffffU >> (uVar3 + 1) * 8) & -1L << (8 - uVar4) * 8 |
       *(ulong *)((int)dp - uVar4) >> uVar4 * 8;
  uVar3 = (uint)(dp->st_ctime + 3) & 7;
  uVar4 = (uint)&dp->st_size & 7;
  _send_data._24_8_ =
       (*(long *)(dp->st_ctime + 3 + -uVar3) << (7 - uVar3) * 8 |
       uVar7 & 0xffffffffffffffffU >> (uVar3 + 1) * 8) & -1L << (8 - uVar4) * 8 |
       *(ulong *)((int)&dp->st_size - uVar4) >> uVar4 * 8;
  uVar3 = (uint)(dp->st_atime + 3) & 7;
  uVar4 = (uint)(dp->st_ctime + 4) & 7;
  _send_data._32_8_ =
       (*(long *)(dp->st_atime + 3 + -uVar3) << (7 - uVar3) * 8 |
       uVar8 & 0xffffffffffffffffU >> (uVar3 + 1) * 8) & -1L << (8 - uVar4) * 8 |
       *(ulong *)(dp->st_ctime + 4 + -uVar4) >> uVar4 * 8;
  uVar3 = (uint)(dp->st_mtime + 3) & 7;
  uVar4 = (uint)(dp->st_atime + 4) & 7;
  _send_data._40_8_ =
       (*(long *)(dp->st_mtime + 3 + -uVar3) << (7 - uVar3) * 8 |
       uVar9 & 0xffffffffffffffffU >> (uVar3 + 1) * 8) & -1L << (8 - uVar4) * 8 |
       *(ulong *)(dp->st_atime + 4 + -uVar4) >> uVar4 * 8;
  puVar1 = (undefined *)((int)&dp->st_hisize + 3);
  uVar3 = (uint)puVar1 & 7;
  uVar4 = (uint)(dp->st_mtime + 4) & 7;
  _send_data._48_8_ =
       (*(long *)(puVar1 + -uVar3) << (7 - uVar3) * 8 |
       _send_data._16_8_ & 0xffffffffffffffffU >> (uVar3 + 1) * 8) & -1L << (8 - uVar4) * 8 |
       *(ulong *)(dp->st_mtime + 4 + -uVar4) >> uVar4 * 8;
  puVar1 = (undefined *)((int)dp->st_private + 7);
  uVar3 = (uint)puVar1 & 7;
  uVar4 = (uint)dp->st_private & 7;
  _send_data._56_8_ =
       (*(long *)(puVar1 + -uVar3) << (7 - uVar3) * 8 |
       _send_data._24_8_ & 0xffffffffffffffffU >> (uVar3 + 1) * 8) & -1L << (8 - uVar4) * 8 |
       *(ulong *)((int)dp->st_private - uVar4) >> uVar4 * 8;
  puVar1 = (undefined *)((int)dp->st_private + 0xf);
  uVar3 = (uint)puVar1 & 7;
  uVar4 = (uint)(dp->st_private + 2) & 7;
  _send_data._64_8_ =
       (*(long *)(puVar1 + -uVar3) << (7 - uVar3) * 8 |
       _send_data._32_8_ & 0xffffffffffffffffU >> (uVar3 + 1) * 8) & -1L << (8 - uVar4) * 8 |
       *(ulong *)((int)(dp->st_private + 2) - uVar4) >> uVar4 * 8;
  puVar1 = (undefined *)((int)dp->st_private + 0x17);
  uVar3 = (uint)puVar1 & 7;
  uVar4 = (uint)(dp->st_private + 4) & 7;
  _send_data._72_8_ =
       (*(long *)(puVar1 + -uVar3) << (7 - uVar3) * 8 |
       _send_data._40_8_ & 0xffffffffffffffffU >> (uVar3 + 1) * 8) & -1L << (8 - uVar4) * 8 |
       *(ulong *)((int)(dp->st_private + 4) - uVar4) >> uVar4 * 8;
  sparam.maxCount = 1;
  sparam.initCount = 0;
  sparam.option = 0;
  _send_data._12_4_ = cbit;
  uVar6 = CreateSema(&sparam);
  _send_data[8] = '\x04';
  _send_data[9] = '\0';
  _send_data[10] = '\0';
  _send_data[11] = '\0';
  _send_data._0_4_ = (undefined4)uVar6;
  _send_data._4_4_ = &ret_chstat;
  sceSifWriteBackDCache(_send_data,0x450);
  iVar10 = sceSifCallRpc(&_cd,0xd,0,_send_data,iVar10 + 0x51,_rcv_data_rpc,4,(undefined1 *)0x0,
                         (void *)0x0);
  iVar5 = iRam204c6040;
  if (iVar10 < 0) {
    DeleteSema(uVar6);
    _sceFsSigSema();
    ret_chstat = -0xb;
  }
  else {
    _sceFsSigSema();
    if (iVar5 == 0) {
      DeleteSema(uVar6);
      ret_chstat = -0xb;
    }
    else {
      WaitSema(uVar6);
      DeleteSema(uVar6);
    }
  }
  return ret_chstat;
}

int sceRename(char *oldname, char *newname) {
	_sceFsRenameData *rd;
	int nsize;
	int ret;
	int ret_rename;
	SemaParam sparam;
	
  uchar uVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  SemaParam sparam;
  int ret_rename;
  
  _sceFsWaitS(0x11);
  if (_fs_init == 0) {
    sceFsInit();
    _send_data[12] = *oldname;
  }
  else {
    _send_data[12] = *oldname;
  }
  iVar4 = 0;
  if (_send_data[12] != '\0') {
    for (iVar4 = 1;
        (iVar4 < 0x400 && (uVar1 = oldname[iVar4], _send_data[iVar4 + 0xc] = uVar1, uVar1 != '\0'));
        iVar4 = iVar4 + 1) {
    }
  }
  if (iVar4 == 0x400) {
    _send_data[1035] = '\0';
  }
  _send_data[1036] = *newname;
  iVar4 = 0;
  if (_send_data[1036] != '\0') {
    for (iVar4 = 1;
        (iVar4 < 0x400 && (uVar1 = newname[iVar4], _send_data[iVar4 + 0x40c] = uVar1, uVar1 != '\0')
        ); iVar4 = iVar4 + 1) {
    }
  }
  if (iVar4 == 0x400) {
    _send_data[2059] = '\0';
  }
  sparam.initCount = 0;
  sparam.maxCount = 1;
  sparam.option = 0;
  uVar3 = CreateSema(&sparam);
  _send_data[8] = '\x04';
  _send_data[9] = '\0';
  _send_data[10] = '\0';
  _send_data[11] = '\0';
  _send_data._0_4_ = (undefined4)uVar3;
  _send_data._4_4_ = &ret_rename;
  sceSifWriteBackDCache(_send_data,0x80c);
  iVar2 = sceSifCallRpc(&_cd,0x11,0,_send_data,0x80c,_rcv_data_rpc,4,(undefined1 *)0x0,(void *)0x0);
  iVar4 = iRam204c6040;
  if (iVar2 < 0) {
    DeleteSema(uVar3);
    _sceFsSigSema();
    ret_rename = -0xb;
  }
  else {
    _sceFsSigSema();
    if (iVar4 == 0) {
      DeleteSema(uVar3);
      ret_rename = -0xb;
    }
    else {
      WaitSema(uVar3);
      DeleteSema(uVar3);
    }
  }
  return ret_rename;
}

int sceChdir(char *name) {
  int iVar1;
  
  iVar1 = _sceCallCode(name,0x12);
  return iVar1;
}

int sceSync(char *path, int flag) {
	_sceFsSyncData *sd;
	int nsize;
	int ret;
	int ret_sync;
	SemaParam sparam;
	
  uchar uVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  SemaParam sparam;
  int ret_sync;
  
  _sceFsWaitS(0x13);
  if (_fs_init == 0) {
    sceFsInit();
    _send_data[20] = *path;
  }
  else {
    _send_data[20] = *path;
  }
  iVar4 = 0;
  if (_send_data[20] != '\0') {
    for (iVar4 = 1;
        (iVar4 < 0x400 && (uVar1 = path[iVar4], _send_data[iVar4 + 0x14] = uVar1, uVar1 != '\0'));
        iVar4 = iVar4 + 1) {
    }
  }
  if (iVar4 == 0x400) {
    _send_data[1043] = '\0';
  }
  sparam.maxCount = 1;
  sparam.initCount = 0;
  sparam.option = 0;
  _send_data._16_4_ = flag;
  uVar3 = CreateSema(&sparam);
  _send_data._0_4_ = (undefined4)uVar3;
  _send_data[8] = '\x04';
  _send_data[9] = '\0';
  _send_data[10] = '\0';
  _send_data[11] = '\0';
  _send_data._4_4_ = &ret_sync;
  iVar2 = sceSifCallRpc(&_cd,0x13,0,_send_data,0x414,_rcv_data_rpc,4,(undefined1 *)0x0,(void *)0x0);
  iVar4 = iRam204c6040;
  if (iVar2 < 0) {
    DeleteSema(uVar3);
    _sceFsSigSema();
    ret_sync = -0xb;
  }
  else {
    _sceFsSigSema();
    if (iVar4 == 0) {
      DeleteSema(uVar3);
      ret_sync = -0xb;
    }
    else {
      WaitSema(uVar3);
      DeleteSema(uVar3);
    }
  }
  return ret_sync;
}

int sceMount(char *fsdevname, char *blkdevname, int flag, void *arg, int arglen) {
	_sceFsMountData *md;
	int nsize;
	int ret;
	int ret_mount;
	SemaParam sparam;
	
  uchar uVar1;
  uchar *puVar2;
  int iVar3;
  undefined8 uVar4;
  int iVar5;
  SemaParam sparam;
  int ret_mount;
  
  _sceFsWaitS(0x14);
  if (_fs_init == 0) {
    sceFsInit();
    _send_data[12] = *fsdevname;
  }
  else {
    _send_data[12] = *fsdevname;
  }
  iVar5 = 0;
  if (_send_data[12] != '\0') {
    for (iVar5 = 1;
        (iVar5 < 0x400 && (uVar1 = fsdevname[iVar5], _send_data[iVar5 + 0xc] = uVar1, uVar1 != '\0')
        ); iVar5 = iVar5 + 1) {
    }
  }
  if (iVar5 == 0x400) {
    _send_data[1035] = '\0';
  }
  _send_data[1036] = *blkdevname;
  iVar5 = 0;
  if (_send_data[1036] != '\0') {
    for (iVar5 = 1;
        (iVar5 < 0x400 &&
        (uVar1 = blkdevname[iVar5], _send_data[iVar5 + 0x40c] = uVar1, uVar1 != '\0'));
        iVar5 = iVar5 + 1) {
    }
  }
  if (iVar5 == 0x400) {
    _send_data[2059] = '\0';
  }
  if (arglen < 0x401) {
    iVar5 = 0;
    if (0 < arglen) {
      do {
        puVar2 = (uchar *)((int)arg + iVar5);
        iVar3 = iVar5 + 0x80c;
        iVar5 = iVar5 + 1;
        _send_data[iVar3] = *puVar2;
      } while (iVar5 < arglen);
    }
    sparam.maxCount = 1;
    sparam.initCount = 0;
    sparam.option = 0;
    _send_data._3084_4_ = flag;
    _send_data._3088_4_ = arglen;
    uVar4 = CreateSema(&sparam);
    _send_data[8] = '\x04';
    _send_data[9] = '\0';
    _send_data[10] = '\0';
    _send_data[11] = '\0';
    _send_data._0_4_ = (undefined4)uVar4;
    _send_data._4_4_ = &ret_mount;
    sceSifWriteBackDCache(_send_data,0xc14);
    iVar3 = sceSifCallRpc(&_cd,0x14,0,_send_data,0xc14,_rcv_data_rpc,4,(undefined1 *)0x0,(void *)0x0
                         );
    iVar5 = iRam204c6040;
    if (iVar3 < 0) {
      DeleteSema(uVar4);
      _sceFsSigSema();
      ret_mount = -0xb;
    }
    else {
      _sceFsSigSema();
      if (iVar5 == 0) {
        DeleteSema(uVar4);
        ret_mount = -0xb;
      }
      else {
        WaitSema(uVar4);
        DeleteSema(uVar4);
      }
    }
  }
  else {
    _sceFsSigSema();
    ret_mount = -7;
  }
  return ret_mount;
}

int sceUmount(char *name) {
  int iVar1;
  
  iVar1 = _sceCallCode(name,0x15);
  return iVar1;
}

long int sceLseek64(int fd, long int offset, int how) {
	_sceFsLseek64Data *ld;
	_sceFsIob *io;
	int cnt0;
	int ret;
	long int ret_lseek64;
	SemaParam sparam;
	
  uint uVar1;
  _sceFsIob *p_Var2;
  int iVar3;
  undefined8 uVar4;
  int *piVar5;
  int iVar6;
  SemaParam sparam;
  long ret_lseek64;
  
  p_Var2 = get_iob(fd);
  _sceFsWaitS(0x16);
  if (_fs_init == 0) {
    _sceFsSigSema();
    ret_lseek64 = -1;
  }
  else if ((p_Var2 == (_sceFsIob *)0x0) || (uVar1 = p_Var2->i_flag, uVar1 == 0)) {
    _sceFsSigSema();
    ret_lseek64 = -9;
  }
  else {
    _send_data._12_4_ = p_Var2->i_fd;
    _send_data._28_4_ = (int)(p_Var2 + -0x4c690) >> 4;
    sparam.maxCount = 1;
    sparam.initCount = 0;
    sparam.option = 0;
    _send_data._16_8_ = offset;
    _send_data._24_4_ = how;
    uVar4 = CreateSema(&sparam);
    _send_data._4_4_ = &ret_lseek64;
    _send_data[8] = '\b';
    _send_data[9] = '\0';
    _send_data[10] = '\0';
    _send_data[11] = '\0';
    _send_data._0_4_ = (undefined4)uVar4;
    if ((uVar1 & 0x8000) != 0) {
      WaitSema(_fs_fsq_semid);
      if (_sceFs_q[0] == -1) {
        _sceFs_q[0]._0_1_ = _send_data[0];
        _sceFs_q[0]._1_1_ = _send_data[1];
        _sceFs_q[0]._2_1_ = _send_data[2];
        _sceFs_q[0]._3_1_ = _send_data[3];
        _send_data._0_4_ = -_send_data._0_4_;
      }
      else {
        iVar6 = 1;
        do {
          if (0x1f < iVar6) goto LAB_00283f9c;
          piVar5 = _sceFs_q + iVar6;
          iVar6 = iVar6 + 1;
        } while (*piVar5 != -1);
        *piVar5 = _send_data._0_4_;
        _send_data._0_4_ = -_send_data._0_4_;
      }
LAB_00283f9c:
      SignalSema(_fs_fsq_semid);
    }
    iVar3 = sceSifCallRpc(&_cd,0x16,0,_send_data,0x20,_rcv_data_rpc,4,(undefined1 *)0x0,(void *)0x0)
    ;
    iVar6 = iRam204c6040;
    if (iVar3 < 0) {
      DeleteSema(uVar4);
      _sceFsSigSema();
      ret_lseek64 = -0xb;
    }
    else {
      _sceFsSigSema();
      if (iVar6 == 0) {
        DeleteSema(uVar4);
        ret_lseek64 = -0xb;
      }
      else if ((uVar1 & 0x8000) == 0) {
        WaitSema(uVar4);
        DeleteSema(uVar4);
      }
      else {
        DeleteSema(uVar4);
        ret_lseek64 = 0;
      }
    }
  }
  return ret_lseek64;
}

int sceDevctl(char *path, int cmd, void *arg, size_t arglen, void *bufp, size_t buflen) {
	_sceFsDevctlData *dd;
	int nsize;
	int ret;
	int ret_devctl;
	SemaParam sparam;
	
  uchar uVar1;
  uchar *puVar2;
  int iVar3;
  undefined8 uVar4;
  int iVar5;
  uint uVar6;
  SemaParam sparam;
  int ret_devctl;
  
  _sceFsWaitS(0x17);
  if (_fs_init == 0) {
    sceFsInit();
    _send_data[12] = *path;
  }
  else {
    _send_data[12] = *path;
  }
  iVar5 = 0;
  if (_send_data[12] != '\0') {
    for (iVar5 = 1;
        (iVar5 < 0x400 && (uVar1 = path[iVar5], _send_data[iVar5 + 0xc] = uVar1, uVar1 != '\0'));
        iVar5 = iVar5 + 1) {
    }
  }
  if (iVar5 == 0x400) {
    _send_data[1035] = '\0';
  }
  if ((arglen < 0x401) && (buflen < 0x401)) {
    uVar6 = 0;
    if (arglen != 0) {
      do {
        puVar2 = (uchar *)((int)arg + uVar6);
        iVar5 = uVar6 + 0x40c;
        uVar6 = uVar6 + 1;
        _send_data[iVar5] = *puVar2;
      } while (uVar6 < arglen);
    }
    sparam.maxCount = 1;
    sparam.initCount = 0;
    sparam.option = 0;
    _send_data._2060_4_ = cmd;
    _send_data._2064_4_ = arglen;
    uVar4 = CreateSema(&sparam);
    _send_data[8] = '\x04';
    _send_data[9] = '\0';
    _send_data[10] = '\0';
    _send_data[11] = '\0';
    _send_data._0_4_ = (undefined4)uVar4;
    _send_data._4_4_ = &ret_devctl;
    _send_data._2068_4_ = bufp;
    _send_data._2072_4_ = buflen;
    sceSifWriteBackDCache(_send_data,0x81c);
    iVar3 = sceSifCallRpc(&_cd,0x17,0,_send_data,0x81c,_rcv_data_rpc,4,(undefined1 *)0x0,(void *)0x0
                         );
    iVar5 = iRam204c6040;
    if (iVar3 < 0) {
      DeleteSema(uVar4);
      _sceFsSigSema();
      ret_devctl = -0xb;
    }
    else {
      _sceFsSigSema();
      if (iVar5 == 0) {
        DeleteSema(uVar4);
        ret_devctl = -0xb;
      }
      else {
        WaitSema(uVar4);
        DeleteSema(uVar4);
      }
    }
  }
  else {
    _sceFsSigSema();
    ret_devctl = -0x16;
  }
  return ret_devctl;
}

int sceSymlink(char *existing, char *new) {
	_sceFsSymlinkData *rd;
	int nsize;
	int ret;
	int ret_link;
	SemaParam sparam;
	
  uchar uVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  SemaParam sparam;
  int ret_link;
  
  _sceFsWaitS(0x11);
  if (_fs_init == 0) {
    sceFsInit();
    _send_data[12] = *existing;
  }
  else {
    _send_data[12] = *existing;
  }
  iVar4 = 0;
  if (_send_data[12] != '\0') {
    for (iVar4 = 1;
        (iVar4 < 0x400 && (uVar1 = existing[iVar4], _send_data[iVar4 + 0xc] = uVar1, uVar1 != '\0'))
        ; iVar4 = iVar4 + 1) {
    }
  }
  if (iVar4 == 0x400) {
    _send_data[1035] = '\0';
  }
  _send_data[1036] = *new;
  iVar4 = 0;
  if (_send_data[1036] != '\0') {
    for (iVar4 = 1;
        (iVar4 < 0x400 && (uVar1 = new[iVar4], _send_data[iVar4 + 0x40c] = uVar1, uVar1 != '\0'));
        iVar4 = iVar4 + 1) {
    }
  }
  if (iVar4 == 0x400) {
    _send_data[2059] = '\0';
  }
  sparam.initCount = 0;
  sparam.maxCount = 1;
  sparam.option = 0;
  uVar3 = CreateSema(&sparam);
  _send_data._0_4_ = (undefined4)uVar3;
  _send_data[8] = '\x04';
  _send_data[9] = '\0';
  _send_data[10] = '\0';
  _send_data[11] = '\0';
  _send_data._4_4_ = &ret_link;
  iVar2 = sceSifCallRpc(&_cd,0x18,0,_send_data,0x80c,_rcv_data_rpc,4,(undefined1 *)0x0,(void *)0x0);
  iVar4 = iRam204c6040;
  if (iVar2 < 0) {
    DeleteSema(uVar3);
    _sceFsSigSema();
    ret_link = -0xb;
  }
  else {
    _sceFsSigSema();
    if (iVar4 == 0) {
      DeleteSema(uVar3);
      ret_link = -0xb;
    }
    else {
      WaitSema(uVar3);
      DeleteSema(uVar3);
    }
  }
  return ret_link;
}

int sceReadlink(char *path, char *buf, size_t bufsize) {
	_sceFsReadlinkData *rd;
	int nsize;
	int ret;
	int ret_link;
	SemaParam sparam;
	
  uchar uVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  SemaParam sparam;
  int ret_link;
  
  _sceFsWaitS(0x11);
  if (_fs_init == 0) {
    sceFsInit();
    _send_data[20] = *path;
  }
  else {
    _send_data[20] = *path;
  }
  iVar4 = 0;
  if (_send_data[20] != '\0') {
    for (iVar4 = 1;
        (iVar4 < 0x400 && (uVar1 = path[iVar4], _send_data[iVar4 + 0x14] = uVar1, uVar1 != '\0'));
        iVar4 = iVar4 + 1) {
    }
  }
  if (iVar4 == 0x400) {
    _send_data[1043] = '\0';
  }
  if (0x3ff < bufsize) {
    bufsize = 0x3ff;
  }
  _send_data._12_4_ = bufsize;
  _send_data._16_4_ = buf;
  sceSifWriteBackDCache(buf,bufsize);
  sparam.initCount = 0;
  sparam.maxCount = 1;
  sparam.option = 0;
  uVar3 = CreateSema(&sparam);
  _send_data._0_4_ = (undefined4)uVar3;
  _send_data[8] = '\x04';
  _send_data[9] = '\0';
  _send_data[10] = '\0';
  _send_data[11] = '\0';
  _send_data._4_4_ = &ret_link;
  iVar2 = sceSifCallRpc(&_cd,0x19,0,_send_data,0x80c,_rcv_data_rpc,4,(undefined1 *)0x0,(void *)0x0);
  iVar4 = iRam204c6040;
  if (iVar2 < 0) {
    DeleteSema(uVar3);
    _sceFsSigSema();
    ret_link = -0xb;
  }
  else {
    _sceFsSigSema();
    if (iVar4 == 0) {
      DeleteSema(uVar3);
      ret_link = -0xb;
    }
    else {
      WaitSema(uVar3);
      DeleteSema(uVar3);
    }
  }
  return ret_link;
}
