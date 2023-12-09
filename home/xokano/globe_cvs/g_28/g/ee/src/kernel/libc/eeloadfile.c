// STATUS: NOT STARTED

#include "eeloadfile.h"

typedef struct {
	unsigned int code0;
	unsigned int code1;
	char data0[252];
	char data1[252];
} _sceLoadFileData;

static int _bind_check = -1;
static char *_lfwildcard = 0x3ea3d0;
static _sceLoadFileData _senddata;
static sceSifClientData cd;
static char _lfversion[4];

static int _lf_bind() {
	int i;
	
  int iVar1;
  
  if (_bind_check < 0) {
    while (iVar1 = sceSifBindRpc(&cd,0x80000006,0), -1 < iVar1) {
      if (cd.serve != (_sif_serve_data *)0x0) {
        _bind_check = 0;
        iVar1 = sceSifCallRpc(&cd,0xff,0,(void *)0x0,0,&_senddata,4,(undefined1 *)0x0,(void *)0x0);
        if (iVar1 < 0) {
          return -0x10001;
        }
        _lfversion[0] = (undefined)_senddata.code0;
        _lfversion[1] = _senddata.code0._1_1_;
        _lfversion[2] = _senddata.code0._2_1_;
        _lfversion[3] = _senddata.code0._3_1_;
        return 0;
      }
      iVar1 = 0x100000;
      do {
        iVar1 = iVar1 + -1;
      } while (iVar1 != -1);
    }
    iVar1 = -1;
  }
  else {
    iVar1 = 0;
  }
  return iVar1;
}

static int _lf_version() {
	char *libver;
	
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  iVar1 = memcmp(_lfversion,&DAT_00367a7c,4);
  if (iVar1 != 0) {
    iVar1 = memcmp(_lfversion,_lfwildcard,4);
    if (iVar1 != 0) {
      iVar1 = memcmp(&DAT_00367a7c,_lfwildcard,4);
      uVar2 = (uint)(iVar1 != 0);
    }
  }
  return uVar2;
}

int sceSifLoadFileReset() {
  _bind_check = -1;
  memset(_lfversion,0,4);
  return 0;
}

static int _sceSifLoadModuleBuffer(void *iopaddress, int args, char *argp, int *result) {
	int ret;
	
  char *pcVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  ulong in_v1;
  char *pcVar5;
  ulong uVar6;
  uint uVar7;
  ulong *puVar8;
  ulong in_t0;
  ulong in_t1;
  ulong in_t2;
  ulong uVar10;
  ulong uVar9;
  
  uVar9 = (ulong)(int)argp;
  uVar6 = uVar9;
  iVar3 = _lf_bind();
  uVar4 = 0xffff0000;
  if (-1 < iVar3) {
    iVar3 = _lf_version();
    if (iVar3 == 0) {
      _senddata.code0 = (uint)iopaddress;
      if (uVar9 == 0) {
        _senddata.code1 = 0;
      }
      else if ((long)args < 0xfd) {
        memcpy(_senddata.data1,argp,(long)args);
        _senddata.code1 = args;
      }
      else {
        pcVar5 = _senddata.data1;
        if ((((uint)argp | 0x4c6ec4) & 7) == 0) {
          do {
            puVar8 = (ulong *)uVar9;
            in_t2 = *puVar8;
            uVar9 = puVar8[1];
            uVar6 = puVar8[2];
            in_t0 = puVar8[3];
            *(ulong *)pcVar5 = in_t2;
            *(ulong *)(pcVar5 + 8) = uVar9;
            *(ulong *)(pcVar5 + 0x10) = uVar6;
            *(ulong *)(pcVar5 + 0x18) = in_t0;
            puVar8 = puVar8 + 4;
            uVar9 = (ulong)(int)puVar8;
            pcVar5 = pcVar5 + 0x20;
          } while (uVar9 != (long)(int)(argp + 0xe0));
        }
        else {
          do {
            uVar7 = (uint)uVar9;
            uVar4 = uVar7 + 7 & 7;
            uVar2 = uVar7 & 7;
            in_v1 = (*(long *)((uVar7 + 7) - uVar4) << (7 - uVar4) * 8 |
                    in_v1 & 0xffffffffffffffffU >> (uVar4 + 1) * 8) & -1L << (8 - uVar2) * 8 |
                    *(ulong *)(uVar7 - uVar2) >> uVar2 * 8;
            uVar4 = uVar7 + 0xf & 7;
            uVar2 = uVar7 + 8 & 7;
            uVar6 = (*(long *)((uVar7 + 0xf) - uVar4) << (7 - uVar4) * 8 |
                    uVar6 & 0xffffffffffffffffU >> (uVar4 + 1) * 8) & -1L << (8 - uVar2) * 8 |
                    *(ulong *)((uVar7 + 8) - uVar2) >> uVar2 * 8;
            uVar4 = uVar7 + 0x17 & 7;
            uVar2 = uVar7 + 0x10 & 7;
            in_t0 = (*(long *)((uVar7 + 0x17) - uVar4) << (7 - uVar4) * 8 |
                    in_t0 & 0xffffffffffffffffU >> (uVar4 + 1) * 8) & -1L << (8 - uVar2) * 8 |
                    *(ulong *)((uVar7 + 0x10) - uVar2) >> uVar2 * 8;
            uVar4 = uVar7 + 0x1f & 7;
            uVar2 = uVar7 + 0x18 & 7;
            in_t1 = (*(long *)((uVar7 + 0x1f) - uVar4) << (7 - uVar4) * 8 |
                    in_t1 & 0xffffffffffffffffU >> (uVar4 + 1) * 8) & -1L << (8 - uVar2) * 8 |
                    *(ulong *)((uVar7 + 0x18) - uVar2) >> uVar2 * 8;
            pcVar1 = pcVar5 + 7;
            uVar4 = (uint)pcVar1 & 7;
            *(ulong *)(pcVar1 + -uVar4) =
                 *(ulong *)(pcVar1 + -uVar4) & -1L << (uVar4 + 1) * 8 | in_v1 >> (7 - uVar4) * 8;
            uVar4 = (uint)pcVar5 & 7;
            *(ulong *)(pcVar5 + -uVar4) =
                 in_v1 << uVar4 * 8 |
                 *(ulong *)(pcVar5 + -uVar4) & 0xffffffffffffffffU >> (8 - uVar4) * 8;
            pcVar1 = pcVar5 + 0xf;
            uVar4 = (uint)pcVar1 & 7;
            *(ulong *)(pcVar1 + -uVar4) =
                 *(ulong *)(pcVar1 + -uVar4) & -1L << (uVar4 + 1) * 8 | uVar6 >> (7 - uVar4) * 8;
            pcVar1 = pcVar5 + 8;
            uVar4 = (uint)pcVar1 & 7;
            *(ulong *)(pcVar1 + -uVar4) =
                 uVar6 << uVar4 * 8 |
                 *(ulong *)(pcVar1 + -uVar4) & 0xffffffffffffffffU >> (8 - uVar4) * 8;
            pcVar1 = pcVar5 + 0x17;
            uVar4 = (uint)pcVar1 & 7;
            *(ulong *)(pcVar1 + -uVar4) =
                 *(ulong *)(pcVar1 + -uVar4) & -1L << (uVar4 + 1) * 8 | in_t0 >> (7 - uVar4) * 8;
            pcVar1 = pcVar5 + 0x10;
            uVar4 = (uint)pcVar1 & 7;
            *(ulong *)(pcVar1 + -uVar4) =
                 in_t0 << uVar4 * 8 |
                 *(ulong *)(pcVar1 + -uVar4) & 0xffffffffffffffffU >> (8 - uVar4) * 8;
            pcVar1 = pcVar5 + 0x1f;
            uVar4 = (uint)pcVar1 & 7;
            *(ulong *)(pcVar1 + -uVar4) =
                 *(ulong *)(pcVar1 + -uVar4) & -1L << (uVar4 + 1) * 8 | in_t1 >> (7 - uVar4) * 8;
            pcVar1 = pcVar5 + 0x18;
            uVar4 = (uint)pcVar1 & 7;
            *(ulong *)(pcVar1 + -uVar4) =
                 in_t1 << uVar4 * 8 |
                 *(ulong *)(pcVar1 + -uVar4) & 0xffffffffffffffffU >> (8 - uVar4) * 8;
            puVar8 = (ulong *)(uVar7 + 0x20);
            uVar9 = (ulong)(int)puVar8;
            pcVar5 = pcVar5 + 0x20;
          } while (uVar9 != (long)(int)(argp + 0xe0));
        }
        uVar4 = (int)puVar8 + 7U & 7;
        uVar2 = (uint)puVar8 & 7;
        uVar9 = (*(long *)(((int)puVar8 + 7U) - uVar4) << (7 - uVar4) * 8 |
                in_t1 & 0xffffffffffffffffU >> (uVar4 + 1) * 8) & -1L << (8 - uVar2) * 8 |
                *(ulong *)((int)puVar8 - uVar2) >> uVar2 * 8;
        uVar4 = (int)puVar8 + 0xfU & 7;
        uVar2 = (uint)(puVar8 + 1) & 7;
        uVar10 = (*(long *)(((int)puVar8 + 0xfU) - uVar4) << (7 - uVar4) * 8 |
                 in_t2 & 0xffffffffffffffffU >> (uVar4 + 1) * 8) & -1L << (8 - uVar2) * 8 |
                 *(ulong *)((int)(puVar8 + 1) - uVar2) >> uVar2 * 8;
        uVar4 = (int)puVar8 + 0x17U & 7;
        uVar2 = (uint)(puVar8 + 2) & 7;
        uVar6 = (*(long *)(((int)puVar8 + 0x17U) - uVar4) << (7 - uVar4) * 8 |
                uVar6 & 0xffffffffffffffffU >> (uVar4 + 1) * 8) & -1L << (8 - uVar2) * 8 |
                *(ulong *)((int)(puVar8 + 2) - uVar2) >> uVar2 * 8;
        uVar4 = (int)puVar8 + 0x1bU & 3;
        uVar2 = (uint)(puVar8 + 3) & 3;
        uVar4 = (*(int *)(((int)puVar8 + 0x1bU) - uVar4) << (3 - uVar4) * 8 |
                (uint)in_t0 & 0xffffffffU >> (uVar4 + 1) * 8) & -1 << (4 - uVar2) * 8 |
                *(uint *)((int)(puVar8 + 3) - uVar2) >> uVar2 * 8;
        pcVar1 = pcVar5 + 7;
        uVar2 = (uint)pcVar1 & 7;
        *(ulong *)(pcVar1 + -uVar2) =
             *(ulong *)(pcVar1 + -uVar2) & -1L << (uVar2 + 1) * 8 | uVar9 >> (7 - uVar2) * 8;
        uVar2 = (uint)pcVar5 & 7;
        *(ulong *)(pcVar5 + -uVar2) =
             uVar9 << uVar2 * 8 |
             *(ulong *)(pcVar5 + -uVar2) & 0xffffffffffffffffU >> (8 - uVar2) * 8;
        pcVar1 = pcVar5 + 0xf;
        uVar2 = (uint)pcVar1 & 7;
        *(ulong *)(pcVar1 + -uVar2) =
             *(ulong *)(pcVar1 + -uVar2) & -1L << (uVar2 + 1) * 8 | uVar10 >> (7 - uVar2) * 8;
        pcVar1 = pcVar5 + 8;
        uVar2 = (uint)pcVar1 & 7;
        *(ulong *)(pcVar1 + -uVar2) =
             uVar10 << uVar2 * 8 |
             *(ulong *)(pcVar1 + -uVar2) & 0xffffffffffffffffU >> (8 - uVar2) * 8;
        pcVar1 = pcVar5 + 0x17;
        uVar2 = (uint)pcVar1 & 7;
        *(ulong *)(pcVar1 + -uVar2) =
             *(ulong *)(pcVar1 + -uVar2) & -1L << (uVar2 + 1) * 8 | uVar6 >> (7 - uVar2) * 8;
        pcVar1 = pcVar5 + 0x10;
        uVar2 = (uint)pcVar1 & 7;
        *(ulong *)(pcVar1 + -uVar2) =
             uVar6 << uVar2 * 8 |
             *(ulong *)(pcVar1 + -uVar2) & 0xffffffffffffffffU >> (8 - uVar2) * 8;
        pcVar1 = pcVar5 + 0x1b;
        uVar2 = (uint)pcVar1 & 3;
        *(uint *)(pcVar1 + -uVar2) =
             *(uint *)(pcVar1 + -uVar2) & -1 << (uVar2 + 1) * 8 | uVar4 >> (3 - uVar2) * 8;
        *(uint *)(pcVar5 + 0x18) = uVar4;
        _senddata.code1 = 0xfc;
      }
      iVar3 = sceSifCallRpc(&cd,6,0,&_senddata,0x200,&_senddata,8,(undefined1 *)0x0,(void *)0x0);
      uVar4 = _senddata.code0;
      if (iVar3 < 0) {
        uVar4 = 0xfffeffff;
      }
      else {
        *result = _senddata.code1;
      }
    }
    else {
      uVar4 = 0xfffefffc;
    }
  }
  return uVar4;
}

int sceSifStopModule(int modid, int args, char *argp, int *result) {
	int ret;
	
  char *pcVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  ulong in_v1;
  char *pcVar5;
  ulong uVar6;
  uint uVar7;
  ulong *puVar8;
  ulong in_t0;
  ulong in_t1;
  ulong in_t2;
  ulong uVar10;
  ulong uVar9;
  
  uVar9 = (ulong)(int)argp;
  uVar6 = uVar9;
  iVar3 = _lf_bind();
  uVar4 = 0xffff0000;
  if (-1 < iVar3) {
    iVar3 = _lf_version();
    if (iVar3 == 0) {
      _senddata.code0 = modid;
      if (uVar9 == 0) {
        _senddata.code1 = 0;
      }
      else if ((long)args < 0xfd) {
        memcpy(_senddata.data1,argp,(long)args);
        _senddata.code1 = args;
      }
      else {
        pcVar5 = _senddata.data1;
        if ((((uint)argp | 0x4c6ec4) & 7) == 0) {
          do {
            puVar8 = (ulong *)uVar9;
            in_t2 = *puVar8;
            uVar9 = puVar8[1];
            uVar6 = puVar8[2];
            in_t0 = puVar8[3];
            *(ulong *)pcVar5 = in_t2;
            *(ulong *)(pcVar5 + 8) = uVar9;
            *(ulong *)(pcVar5 + 0x10) = uVar6;
            *(ulong *)(pcVar5 + 0x18) = in_t0;
            puVar8 = puVar8 + 4;
            uVar9 = (ulong)(int)puVar8;
            pcVar5 = pcVar5 + 0x20;
          } while (uVar9 != (long)(int)(argp + 0xe0));
        }
        else {
          do {
            uVar7 = (uint)uVar9;
            uVar4 = uVar7 + 7 & 7;
            uVar2 = uVar7 & 7;
            in_v1 = (*(long *)((uVar7 + 7) - uVar4) << (7 - uVar4) * 8 |
                    in_v1 & 0xffffffffffffffffU >> (uVar4 + 1) * 8) & -1L << (8 - uVar2) * 8 |
                    *(ulong *)(uVar7 - uVar2) >> uVar2 * 8;
            uVar4 = uVar7 + 0xf & 7;
            uVar2 = uVar7 + 8 & 7;
            uVar6 = (*(long *)((uVar7 + 0xf) - uVar4) << (7 - uVar4) * 8 |
                    uVar6 & 0xffffffffffffffffU >> (uVar4 + 1) * 8) & -1L << (8 - uVar2) * 8 |
                    *(ulong *)((uVar7 + 8) - uVar2) >> uVar2 * 8;
            uVar4 = uVar7 + 0x17 & 7;
            uVar2 = uVar7 + 0x10 & 7;
            in_t0 = (*(long *)((uVar7 + 0x17) - uVar4) << (7 - uVar4) * 8 |
                    in_t0 & 0xffffffffffffffffU >> (uVar4 + 1) * 8) & -1L << (8 - uVar2) * 8 |
                    *(ulong *)((uVar7 + 0x10) - uVar2) >> uVar2 * 8;
            uVar4 = uVar7 + 0x1f & 7;
            uVar2 = uVar7 + 0x18 & 7;
            in_t1 = (*(long *)((uVar7 + 0x1f) - uVar4) << (7 - uVar4) * 8 |
                    in_t1 & 0xffffffffffffffffU >> (uVar4 + 1) * 8) & -1L << (8 - uVar2) * 8 |
                    *(ulong *)((uVar7 + 0x18) - uVar2) >> uVar2 * 8;
            pcVar1 = pcVar5 + 7;
            uVar4 = (uint)pcVar1 & 7;
            *(ulong *)(pcVar1 + -uVar4) =
                 *(ulong *)(pcVar1 + -uVar4) & -1L << (uVar4 + 1) * 8 | in_v1 >> (7 - uVar4) * 8;
            uVar4 = (uint)pcVar5 & 7;
            *(ulong *)(pcVar5 + -uVar4) =
                 in_v1 << uVar4 * 8 |
                 *(ulong *)(pcVar5 + -uVar4) & 0xffffffffffffffffU >> (8 - uVar4) * 8;
            pcVar1 = pcVar5 + 0xf;
            uVar4 = (uint)pcVar1 & 7;
            *(ulong *)(pcVar1 + -uVar4) =
                 *(ulong *)(pcVar1 + -uVar4) & -1L << (uVar4 + 1) * 8 | uVar6 >> (7 - uVar4) * 8;
            pcVar1 = pcVar5 + 8;
            uVar4 = (uint)pcVar1 & 7;
            *(ulong *)(pcVar1 + -uVar4) =
                 uVar6 << uVar4 * 8 |
                 *(ulong *)(pcVar1 + -uVar4) & 0xffffffffffffffffU >> (8 - uVar4) * 8;
            pcVar1 = pcVar5 + 0x17;
            uVar4 = (uint)pcVar1 & 7;
            *(ulong *)(pcVar1 + -uVar4) =
                 *(ulong *)(pcVar1 + -uVar4) & -1L << (uVar4 + 1) * 8 | in_t0 >> (7 - uVar4) * 8;
            pcVar1 = pcVar5 + 0x10;
            uVar4 = (uint)pcVar1 & 7;
            *(ulong *)(pcVar1 + -uVar4) =
                 in_t0 << uVar4 * 8 |
                 *(ulong *)(pcVar1 + -uVar4) & 0xffffffffffffffffU >> (8 - uVar4) * 8;
            pcVar1 = pcVar5 + 0x1f;
            uVar4 = (uint)pcVar1 & 7;
            *(ulong *)(pcVar1 + -uVar4) =
                 *(ulong *)(pcVar1 + -uVar4) & -1L << (uVar4 + 1) * 8 | in_t1 >> (7 - uVar4) * 8;
            pcVar1 = pcVar5 + 0x18;
            uVar4 = (uint)pcVar1 & 7;
            *(ulong *)(pcVar1 + -uVar4) =
                 in_t1 << uVar4 * 8 |
                 *(ulong *)(pcVar1 + -uVar4) & 0xffffffffffffffffU >> (8 - uVar4) * 8;
            puVar8 = (ulong *)(uVar7 + 0x20);
            uVar9 = (ulong)(int)puVar8;
            pcVar5 = pcVar5 + 0x20;
          } while (uVar9 != (long)(int)(argp + 0xe0));
        }
        uVar4 = (int)puVar8 + 7U & 7;
        uVar2 = (uint)puVar8 & 7;
        uVar9 = (*(long *)(((int)puVar8 + 7U) - uVar4) << (7 - uVar4) * 8 |
                in_t1 & 0xffffffffffffffffU >> (uVar4 + 1) * 8) & -1L << (8 - uVar2) * 8 |
                *(ulong *)((int)puVar8 - uVar2) >> uVar2 * 8;
        uVar4 = (int)puVar8 + 0xfU & 7;
        uVar2 = (uint)(puVar8 + 1) & 7;
        uVar10 = (*(long *)(((int)puVar8 + 0xfU) - uVar4) << (7 - uVar4) * 8 |
                 in_t2 & 0xffffffffffffffffU >> (uVar4 + 1) * 8) & -1L << (8 - uVar2) * 8 |
                 *(ulong *)((int)(puVar8 + 1) - uVar2) >> uVar2 * 8;
        uVar4 = (int)puVar8 + 0x17U & 7;
        uVar2 = (uint)(puVar8 + 2) & 7;
        uVar6 = (*(long *)(((int)puVar8 + 0x17U) - uVar4) << (7 - uVar4) * 8 |
                uVar6 & 0xffffffffffffffffU >> (uVar4 + 1) * 8) & -1L << (8 - uVar2) * 8 |
                *(ulong *)((int)(puVar8 + 2) - uVar2) >> uVar2 * 8;
        uVar4 = (int)puVar8 + 0x1bU & 3;
        uVar2 = (uint)(puVar8 + 3) & 3;
        uVar4 = (*(int *)(((int)puVar8 + 0x1bU) - uVar4) << (3 - uVar4) * 8 |
                (uint)in_t0 & 0xffffffffU >> (uVar4 + 1) * 8) & -1 << (4 - uVar2) * 8 |
                *(uint *)((int)(puVar8 + 3) - uVar2) >> uVar2 * 8;
        pcVar1 = pcVar5 + 7;
        uVar2 = (uint)pcVar1 & 7;
        *(ulong *)(pcVar1 + -uVar2) =
             *(ulong *)(pcVar1 + -uVar2) & -1L << (uVar2 + 1) * 8 | uVar9 >> (7 - uVar2) * 8;
        uVar2 = (uint)pcVar5 & 7;
        *(ulong *)(pcVar5 + -uVar2) =
             uVar9 << uVar2 * 8 |
             *(ulong *)(pcVar5 + -uVar2) & 0xffffffffffffffffU >> (8 - uVar2) * 8;
        pcVar1 = pcVar5 + 0xf;
        uVar2 = (uint)pcVar1 & 7;
        *(ulong *)(pcVar1 + -uVar2) =
             *(ulong *)(pcVar1 + -uVar2) & -1L << (uVar2 + 1) * 8 | uVar10 >> (7 - uVar2) * 8;
        pcVar1 = pcVar5 + 8;
        uVar2 = (uint)pcVar1 & 7;
        *(ulong *)(pcVar1 + -uVar2) =
             uVar10 << uVar2 * 8 |
             *(ulong *)(pcVar1 + -uVar2) & 0xffffffffffffffffU >> (8 - uVar2) * 8;
        pcVar1 = pcVar5 + 0x17;
        uVar2 = (uint)pcVar1 & 7;
        *(ulong *)(pcVar1 + -uVar2) =
             *(ulong *)(pcVar1 + -uVar2) & -1L << (uVar2 + 1) * 8 | uVar6 >> (7 - uVar2) * 8;
        pcVar1 = pcVar5 + 0x10;
        uVar2 = (uint)pcVar1 & 7;
        *(ulong *)(pcVar1 + -uVar2) =
             uVar6 << uVar2 * 8 |
             *(ulong *)(pcVar1 + -uVar2) & 0xffffffffffffffffU >> (8 - uVar2) * 8;
        pcVar1 = pcVar5 + 0x1b;
        uVar2 = (uint)pcVar1 & 3;
        *(uint *)(pcVar1 + -uVar2) =
             *(uint *)(pcVar1 + -uVar2) & -1 << (uVar2 + 1) * 8 | uVar4 >> (3 - uVar2) * 8;
        *(uint *)(pcVar5 + 0x18) = uVar4;
        _senddata.code1 = 0xfc;
      }
      iVar3 = sceSifCallRpc(&cd,7,0,&_senddata,0x200,&_senddata,8,(undefined1 *)0x0,(void *)0x0);
      uVar4 = _senddata.code0;
      if (iVar3 < 0) {
        uVar4 = 0xfffeffff;
      }
      else {
        *result = _senddata.code1;
      }
    }
    else {
      uVar4 = 0xfffefffc;
    }
  }
  return uVar4;
}

int sceSifUnloadModule(int modid) {
  int iVar1;
  uint uVar2;
  
  iVar1 = _lf_bind();
  uVar2 = 0xffff0000;
  if (-1 < iVar1) {
    iVar1 = _lf_version();
    if (iVar1 == 0) {
      _senddata.code0 = modid;
      iVar1 = sceSifCallRpc(&cd,8,0,&_senddata,4,&_senddata,4,(undefined1 *)0x0,(void *)0x0);
      uVar2 = _senddata.code0;
      if (iVar1 < 0) {
        uVar2 = 0xfffeffff;
      }
    }
    else {
      uVar2 = 0xfffefffc;
    }
  }
  return uVar2;
}

int sceSifSearchModuleByName(char *modulename) {
  int iVar1;
  uint uVar2;
  
  iVar1 = _lf_bind();
  uVar2 = 0xffff0000;
  if (-1 < iVar1) {
    iVar1 = _lf_version();
    if (iVar1 == 0) {
      strncpy(_senddata.data0,modulename,0xfc);
      _senddata.data0[251] = '\0';
      iVar1 = sceSifCallRpc(&cd,9,0,&_senddata,0x200,&_senddata,4,(undefined1 *)0x0,(void *)0x0);
      uVar2 = _senddata.code0;
      if (iVar1 < 0) {
        uVar2 = 0xfffeffff;
      }
    }
    else {
      uVar2 = 0xfffefffc;
    }
  }
  return uVar2;
}

int sceSifSearchModuleByAddress(void *addr) {
  int iVar1;
  uint uVar2;
  
  iVar1 = _lf_bind();
  uVar2 = 0xffff0000;
  if (-1 < iVar1) {
    iVar1 = _lf_version();
    if (iVar1 == 0) {
      _senddata.code0 = (uint)addr;
      iVar1 = sceSifCallRpc(&cd,10,0,&_senddata,4,&_senddata,4,(undefined1 *)0x0,(void *)0x0);
      uVar2 = _senddata.code0;
      if (iVar1 < 0) {
        uVar2 = 0xfffeffff;
      }
    }
    else {
      uVar2 = 0xfffefffc;
    }
  }
  return uVar2;
}

int sceSifLoadModuleBuffer(void *addr, int args, char *argp) {
	int r;
	
  int iVar1;
  int r;
  
  iVar1 = _sceSifLoadModuleBuffer(addr,args,argp,&r);
  return iVar1;
}

int sceSifLoadStartModuleBuffer(void *addr, int args, char *argp, int *result) {
  int iVar1;
  
  iVar1 = _sceSifLoadModuleBuffer(addr,args,argp,result);
  return iVar1;
}

static int _sceSifLoadModule(char *filename, int args, char *argp, int *result, unsigned int fno) {
	int ret;
	
  char *pcVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  ulong *puVar5;
  char *pcVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong in_t1;
  
  uVar9 = (ulong)(int)fno;
  uVar8 = (ulong)(int)result;
  iVar3 = _lf_bind();
  uVar4 = 0xffff0000;
  if (-1 < iVar3) {
    iVar3 = _lf_version();
    if (iVar3 == 0) {
      uVar7 = 0xfc;
      strncpy(_senddata.data0,filename,0xfc);
      _senddata.data0[251] = '\0';
      if (argp == (char *)0x0) {
        _senddata.data1[0] = '\0';
        _senddata.code0 = 0;
      }
      else if ((long)args < 0xfd) {
        memcpy(_senddata.data1,argp,(long)args);
        _senddata.code0 = args;
      }
      else {
        pcVar6 = _senddata.data1;
        if ((((uint)argp | 0x4c6ec4) & 7) == 0) {
          puVar5 = (ulong *)(argp + 0xe0);
          do {
            uVar7 = *(ulong *)argp;
            uVar8 = *(ulong *)((int)argp + 8);
            uVar9 = *(ulong *)((int)argp + 0x10);
            in_t1 = *(ulong *)((int)argp + 0x18);
            *(ulong *)pcVar6 = uVar7;
            *(ulong *)(pcVar6 + 8) = uVar8;
            *(ulong *)(pcVar6 + 0x10) = uVar9;
            *(ulong *)(pcVar6 + 0x18) = in_t1;
            argp = (char *)((int)argp + 0x20);
            pcVar6 = pcVar6 + 0x20;
          } while ((ulong *)argp != puVar5);
        }
        else {
          puVar5 = (ulong *)(argp + 0xe0);
          do {
            uVar4 = (uint)(char *)((int)argp + 7U) & 7;
            uVar2 = (uint)argp & 7;
            uVar7 = (*(long *)((char *)((int)argp + 7U) + -uVar4) << (7 - uVar4) * 8 |
                    uVar7 & 0xffffffffffffffffU >> (uVar4 + 1) * 8) & -1L << (8 - uVar2) * 8 |
                    *(ulong *)((int)argp - uVar2) >> uVar2 * 8;
            uVar4 = (uint)(char *)((int)argp + 0xfU) & 7;
            uVar2 = (uint)(ulong *)((int)argp + 8) & 7;
            uVar8 = (*(long *)((char *)((int)argp + 0xfU) + -uVar4) << (7 - uVar4) * 8 |
                    uVar8 & 0xffffffffffffffffU >> (uVar4 + 1) * 8) & -1L << (8 - uVar2) * 8 |
                    *(ulong *)((int)(ulong *)((int)argp + 8) - uVar2) >> uVar2 * 8;
            uVar4 = (uint)(char *)((int)argp + 0x17U) & 7;
            uVar2 = (uint)(ulong *)((int)argp + 0x10) & 7;
            uVar9 = (*(long *)((char *)((int)argp + 0x17U) + -uVar4) << (7 - uVar4) * 8 |
                    uVar9 & 0xffffffffffffffffU >> (uVar4 + 1) * 8) & -1L << (8 - uVar2) * 8 |
                    *(ulong *)((int)(ulong *)((int)argp + 0x10) - uVar2) >> uVar2 * 8;
            uVar4 = (uint)(char *)((int)argp + 0x1fU) & 7;
            uVar2 = (uint)(ulong *)((int)argp + 0x18) & 7;
            in_t1 = (*(long *)((char *)((int)argp + 0x1fU) + -uVar4) << (7 - uVar4) * 8 |
                    in_t1 & 0xffffffffffffffffU >> (uVar4 + 1) * 8) & -1L << (8 - uVar2) * 8 |
                    *(ulong *)((int)(ulong *)((int)argp + 0x18) - uVar2) >> uVar2 * 8;
            pcVar1 = pcVar6 + 7;
            uVar4 = (uint)pcVar1 & 7;
            *(ulong *)(pcVar1 + -uVar4) =
                 *(ulong *)(pcVar1 + -uVar4) & -1L << (uVar4 + 1) * 8 | uVar7 >> (7 - uVar4) * 8;
            uVar4 = (uint)pcVar6 & 7;
            *(ulong *)(pcVar6 + -uVar4) =
                 uVar7 << uVar4 * 8 |
                 *(ulong *)(pcVar6 + -uVar4) & 0xffffffffffffffffU >> (8 - uVar4) * 8;
            pcVar1 = pcVar6 + 0xf;
            uVar4 = (uint)pcVar1 & 7;
            *(ulong *)(pcVar1 + -uVar4) =
                 *(ulong *)(pcVar1 + -uVar4) & -1L << (uVar4 + 1) * 8 | uVar8 >> (7 - uVar4) * 8;
            pcVar1 = pcVar6 + 8;
            uVar4 = (uint)pcVar1 & 7;
            *(ulong *)(pcVar1 + -uVar4) =
                 uVar8 << uVar4 * 8 |
                 *(ulong *)(pcVar1 + -uVar4) & 0xffffffffffffffffU >> (8 - uVar4) * 8;
            pcVar1 = pcVar6 + 0x17;
            uVar4 = (uint)pcVar1 & 7;
            *(ulong *)(pcVar1 + -uVar4) =
                 *(ulong *)(pcVar1 + -uVar4) & -1L << (uVar4 + 1) * 8 | uVar9 >> (7 - uVar4) * 8;
            pcVar1 = pcVar6 + 0x10;
            uVar4 = (uint)pcVar1 & 7;
            *(ulong *)(pcVar1 + -uVar4) =
                 uVar9 << uVar4 * 8 |
                 *(ulong *)(pcVar1 + -uVar4) & 0xffffffffffffffffU >> (8 - uVar4) * 8;
            pcVar1 = pcVar6 + 0x1f;
            uVar4 = (uint)pcVar1 & 7;
            *(ulong *)(pcVar1 + -uVar4) =
                 *(ulong *)(pcVar1 + -uVar4) & -1L << (uVar4 + 1) * 8 | in_t1 >> (7 - uVar4) * 8;
            pcVar1 = pcVar6 + 0x18;
            uVar4 = (uint)pcVar1 & 7;
            *(ulong *)(pcVar1 + -uVar4) =
                 in_t1 << uVar4 * 8 |
                 *(ulong *)(pcVar1 + -uVar4) & 0xffffffffffffffffU >> (8 - uVar4) * 8;
            argp = (char *)((int)argp + 0x20);
            pcVar6 = pcVar6 + 0x20;
          } while ((ulong *)argp != puVar5);
        }
        uVar4 = (uint)(char *)((int)argp + 7U) & 7;
        uVar2 = (uint)argp & 7;
        uVar7 = (*(long *)((char *)((int)argp + 7U) + -uVar4) << (7 - uVar4) * 8 |
                uVar7 & 0xffffffffffffffffU >> (uVar4 + 1) * 8) & -1L << (8 - uVar2) * 8 |
                *(ulong *)((int)argp - uVar2) >> uVar2 * 8;
        uVar4 = (uint)(char *)((int)argp + 0xfU) & 7;
        uVar2 = (uint)(ulong *)((int)argp + 8) & 7;
        uVar8 = (*(long *)((char *)((int)argp + 0xfU) + -uVar4) << (7 - uVar4) * 8 |
                uVar8 & 0xffffffffffffffffU >> (uVar4 + 1) * 8) & -1L << (8 - uVar2) * 8 |
                *(ulong *)((int)(ulong *)((int)argp + 8) - uVar2) >> uVar2 * 8;
        uVar4 = (uint)(char *)((int)argp + 0x17U) & 7;
        uVar2 = (uint)(ulong *)((int)argp + 0x10) & 7;
        uVar9 = (*(long *)((char *)((int)argp + 0x17U) + -uVar4) << (7 - uVar4) * 8 |
                uVar9 & 0xffffffffffffffffU >> (uVar4 + 1) * 8) & -1L << (8 - uVar2) * 8 |
                *(ulong *)((int)(ulong *)((int)argp + 0x10) - uVar2) >> uVar2 * 8;
        uVar4 = (uint)(char *)((int)argp + 0x1bU) & 3;
        uVar2 = (uint)(ulong *)((int)argp + 0x18) & 3;
        uVar4 = (*(int *)((char *)((int)argp + 0x1bU) + -uVar4) << (3 - uVar4) * 8 |
                (uint)in_t1 & 0xffffffffU >> (uVar4 + 1) * 8) & -1 << (4 - uVar2) * 8 |
                *(uint *)((int)(ulong *)((int)argp + 0x18) - uVar2) >> uVar2 * 8;
        pcVar1 = pcVar6 + 7;
        uVar2 = (uint)pcVar1 & 7;
        *(ulong *)(pcVar1 + -uVar2) =
             *(ulong *)(pcVar1 + -uVar2) & -1L << (uVar2 + 1) * 8 | uVar7 >> (7 - uVar2) * 8;
        uVar2 = (uint)pcVar6 & 7;
        *(ulong *)(pcVar6 + -uVar2) =
             uVar7 << uVar2 * 8 |
             *(ulong *)(pcVar6 + -uVar2) & 0xffffffffffffffffU >> (8 - uVar2) * 8;
        pcVar1 = pcVar6 + 0xf;
        uVar2 = (uint)pcVar1 & 7;
        *(ulong *)(pcVar1 + -uVar2) =
             *(ulong *)(pcVar1 + -uVar2) & -1L << (uVar2 + 1) * 8 | uVar8 >> (7 - uVar2) * 8;
        pcVar1 = pcVar6 + 8;
        uVar2 = (uint)pcVar1 & 7;
        *(ulong *)(pcVar1 + -uVar2) =
             uVar8 << uVar2 * 8 |
             *(ulong *)(pcVar1 + -uVar2) & 0xffffffffffffffffU >> (8 - uVar2) * 8;
        pcVar1 = pcVar6 + 0x17;
        uVar2 = (uint)pcVar1 & 7;
        *(ulong *)(pcVar1 + -uVar2) =
             *(ulong *)(pcVar1 + -uVar2) & -1L << (uVar2 + 1) * 8 | uVar9 >> (7 - uVar2) * 8;
        pcVar1 = pcVar6 + 0x10;
        uVar2 = (uint)pcVar1 & 7;
        *(ulong *)(pcVar1 + -uVar2) =
             uVar9 << uVar2 * 8 |
             *(ulong *)(pcVar1 + -uVar2) & 0xffffffffffffffffU >> (8 - uVar2) * 8;
        pcVar1 = pcVar6 + 0x1b;
        uVar2 = (uint)pcVar1 & 3;
        *(uint *)(pcVar1 + -uVar2) =
             *(uint *)(pcVar1 + -uVar2) & -1 << (uVar2 + 1) * 8 | uVar4 >> (3 - uVar2) * 8;
        *(uint *)(pcVar6 + 0x18) = uVar4;
        _senddata.code0 = 0xfc;
      }
      iVar3 = sceSifCallRpc(&cd,fno,0,&_senddata,0x200,&_senddata,8,(undefined1 *)0x0,(void *)0x0);
      uVar4 = _senddata.code0;
      if (iVar3 < 0) {
        uVar4 = 0xfffeffff;
      }
      else {
        *result = _senddata.code1;
      }
    }
    else {
      uVar4 = 0xfffefffc;
    }
  }
  return uVar4;
}

int sceSifLoadModule(char *filename, int args, char *argp) {
	int r;
	
  int iVar1;
  int r;
  
  iVar1 = _sceSifLoadModule(filename,args,argp,&r,0);
  return iVar1;
}

int sceSifLoadStartModule(char *filename, int args, char *argp, int *result) {
  int iVar1;
  
  iVar1 = _sceSifLoadModule(filename,args,argp,result,0);
  return iVar1;
}

static int _sceSifLoadElfPart(char *filename, char *secname, sceExecData *data, unsigned int fno) {
  int iVar1;
  int iVar2;
  
  iVar1 = _lf_bind();
  iVar2 = -0x10000;
  if (-1 < iVar1) {
    iVar1 = _lf_version();
    if (iVar1 == 0) {
      strncpy(_senddata.data0,filename,0xfc);
      _senddata.data0[251] = '\0';
      strncpy(_senddata.data1,secname,0xfc);
      _senddata.data1[251] = '\0';
      iVar1 = sceSifCallRpc(&cd,fno,0,&_senddata,0x200,&_senddata,0x10,(undefined1 *)0x0,(void *)0x0
                           );
      if (iVar1 < 0) {
        iVar2 = -0x10001;
      }
      else if (_senddata.code0 == 0) {
        iVar2 = -0x10003;
      }
      else {
        data->epc = _senddata.code0;
        iVar2 = 0;
        data->gp = _senddata.code1;
      }
    }
    else {
      iVar2 = -0x10004;
    }
  }
  return iVar2;
}

int sceSifLoadElfPart(char *filename, char *secname, sceExecData *data) {
  int iVar1;
  
  iVar1 = _sceSifLoadElfPart(filename,secname,data,1);
  return iVar1;
}

int sceSifLoadElf(char *filename, sceExecData *data) {
  int iVar1;
  
  iVar1 = _sceSifLoadElfPart(filename,"all",data,1);
  return iVar1;
}

int sceSifGetIopAddr(void *addr, void *val, unsigned int type) {
  int iVar1;
  
  iVar1 = _lf_bind();
  if (iVar1 < 0) {
    return -0x10000;
  }
  if (type < 3) {
    _senddata.code0 = (uint)addr;
    _senddata.code1 = type;
    iVar1 = sceSifCallRpc(&cd,3,0,&_senddata,0x20,&_senddata,0x20,(undefined1 *)0x0,(void *)0x0);
    if (iVar1 < 0) {
      return -0x10001;
    }
    if (type == 0) {
      *(undefined *)val = (undefined)_senddata.code0;
    }
    else if (type == 1) {
      *(undefined2 *)val = (undefined2)_senddata.code0;
    }
    else {
      if (type != 2) goto LAB_002857f4;
      *(uint *)val = _senddata.code0;
    }
    iVar1 = 0;
  }
  else {
LAB_002857f4:
    iVar1 = -0x10002;
  }
  return iVar1;
}

int sceSifSetIopAddr(void *addr, void *val, unsigned int type) {
  int iVar1;
  int iVar2;
  
  iVar1 = _lf_bind();
  if (iVar1 < 0) {
    iVar2 = -0x10000;
  }
  else {
    if (type == 0) {
                    /* WARNING: Load size is inaccurate */
      _senddata.data0[0] = *val;
    }
    else if (type == 1) {
                    /* WARNING: Load size is inaccurate */
      _senddata.data0._0_2_ = *val;
    }
    else {
                    /* WARNING: Load size is inaccurate */
      if (type != 2) {
        _senddata.code0 = (uint)addr;
        _senddata.code1 = type;
        return -0x10002;
      }
      _senddata.data0._0_4_ = *val;
    }
    _senddata.code0 = (uint)addr;
    _senddata.code1 = type;
    iVar1 = sceSifCallRpc(&cd,2,0,&_senddata,0x20,&_senddata,0x10,(undefined1 *)0x0,(void *)0x0);
    iVar2 = -0x10001;
    if (-1 < iVar1) {
      iVar2 = 0;
    }
  }
  return iVar2;
}
