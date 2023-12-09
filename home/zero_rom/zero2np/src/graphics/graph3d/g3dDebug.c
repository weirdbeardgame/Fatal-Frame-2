// STATUS: NOT STARTED

#include "g3dDebug.h"

typedef enum {
	VPS_IDLE = 0,
	VPS_WAITINGFORDATA = 1,
	VPS_DECODE = 2,
	VPS_PROCESSING = 3
} VIF1_STAT_VPS;

typedef enum {
	VEW_NOTWAIT = 0,
	VEW_WAIT = 1
} VIF1_STAT_VEW;

typedef enum {
	VGW_NOTWAIT = 0,
	VGW_WAIT = 1
} VIF1_STAT_VGW;

typedef enum {
	MRK_NOTDETECT = 0,
	MRK_DETECT = 1
} VIF1_STAT_MRK;

typedef enum {
	DBF_BASE = 0,
	DBF_BASEplusOFFSET = 1
} VIF1_STAT_DBF;

typedef enum {
	VSS_NOTSTALL = 0,
	VSS_STALL = 1
} VIF1_STAT_VSS;

typedef enum {
	VFS_NOTSTALL = 0,
	VFS_STALL = 1
} VIF1_STAT_VFS;

typedef enum {
	VIS_NOTSTALL = 0,
	VIS_STALL = 1
} VIF1_STAT_VIS;

typedef enum {
	INT_NOTDETECT = 0,
	INT_DETECT = 1
} VIF1_STAT_INT;

typedef enum {
	ERO_NOERROR = 0,
	ERO_ERROR = 1
} VIF1_STAT_ERO;

typedef enum {
	ER1_NOTDETECT = 0,
	ER1_DETECT = 1
} VIF1_STAT_ER1;

typedef enum {
	FDR_MEMtoVIF1 = 0,
	FDR_VIF1toMEM = 1
} VIF1_STAT_FDR;

static int s_bPrintConsoleInfinitely = 0;
static _G3DLINEINFO s_LineInfo;
static sceGsDBuff db;

static void _Assert(char *pStr) {
	char str[2048];
	
  char acStack_820 [1952];
  void *VaList;
  
  memset(acStack_820,0,0x800);
  _strcatf__FPcPCce(acStack_820,0x3af190);
  if ((s_LineInfo.pFileName == (char *)0x0) && (s_LineInfo.iLine == 0)) {
    _strcatf__FPcPCce(acStack_820,0x3f0b68,strDest);
  }
  else {
    _strcatf__FPcPCce(acStack_820,0x3af1c0,s_LineInfo.pFileName,s_LineInfo.iLine);
    _strcatf__FPcPCce(acStack_820,0x3af1d0,s_LineInfo.pFunctionName);
    _strcatf__FPcPCce(acStack_820,0x3af1e0,s_LineInfo.pExpression);
    _strcatf__FPcPCce(acStack_820,0x3af1f0,strDest);
  }
  _strcatf__FPcPCce(acStack_820,0x3af200);
  _strcatf__FPcPCce(acStack_820,0x3af230);
  _strcatf__FPcPCce(acStack_820,0x3af200);
  g3ddbgPrintConsole__FPCce(acStack_820);
  g3ddbgPrintf__FPCce(acStack_820);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

static void _Warning(char *pStr) {
  g3ddbgPrintf__FPCce("--------- D E B U G   W A R N I N G ---------\n");
  g3ddbgPrintf__FPCce("At : %s(%d)\n");
  g3ddbgPrintf__FPCce("Function : %s\n");
  g3ddbgPrintf__FPCce("\"%s\" Failed\n");
  g3ddbgPrintf__FPCce("Message : %s\n");
  g3ddbgPrintf__FPCce("---------------------------------------------\n");
  return;
}

static int _IsVifcodeMpg(tVIF_CODE *pVC) {
  return (int)((pVC->field_0x3 & 0x7f) == 0x4a);
}

static int _IsVifcodeUnpack(tVIF_CODE *pVC) {
	int aiVif1CommandUnpack[13];
	int i;
	
  uint uVar1;
  ulong *puVar2;
  uint *puVar3;
  int iVar4;
  int aiVif1CommandUnpack [13];
  
  puVar3 = (uint *)aiVif1CommandUnpack;
  uVar1 = (int)aiVif1CommandUnpack + 7U & 7;
  puVar2 = (ulong *)(((int)aiVif1CommandUnpack + 7U) - uVar1);
  *puVar2 = *puVar2 & -1L << (uVar1 + 1) * 8 | DAT_003af2c0 >> (7 - uVar1) * 8;
  uVar1 = (int)aiVif1CommandUnpack + 0xfU & 7;
  puVar2 = (ulong *)(((int)aiVif1CommandUnpack + 0xfU) - uVar1);
  *puVar2 = *puVar2 & -1L << (uVar1 + 1) * 8 | DAT_003af2c8 >> (7 - uVar1) * 8;
  aiVif1CommandUnpack._8_8_ = DAT_003af2c8;
  uVar1 = (int)aiVif1CommandUnpack + 0x17U & 7;
  puVar2 = (ulong *)(((int)aiVif1CommandUnpack + 0x17U) - uVar1);
  *puVar2 = *puVar2 & -1L << (uVar1 + 1) * 8 | DAT_003af2d0 >> (7 - uVar1) * 8;
  aiVif1CommandUnpack._16_8_ = DAT_003af2d0;
  uVar1 = (int)aiVif1CommandUnpack + 0x1fU & 7;
  puVar2 = (ulong *)(((int)aiVif1CommandUnpack + 0x1fU) - uVar1);
  *puVar2 = *puVar2 & -1L << (uVar1 + 1) * 8 | DAT_003af2d8 >> (7 - uVar1) * 8;
  aiVif1CommandUnpack._24_8_ = DAT_003af2d8;
  uVar1 = (int)aiVif1CommandUnpack + 0x27U & 7;
  puVar2 = (ulong *)(((int)aiVif1CommandUnpack + 0x27U) - uVar1);
  *puVar2 = *puVar2 & -1L << (uVar1 + 1) * 8 | DAT_003af2e0 >> (7 - uVar1) * 8;
  aiVif1CommandUnpack._32_8_ = DAT_003af2e0;
  uVar1 = (int)aiVif1CommandUnpack + 0x2fU & 7;
  puVar2 = (ulong *)(((int)aiVif1CommandUnpack + 0x2fU) - uVar1);
  *puVar2 = *puVar2 & -1L << (uVar1 + 1) * 8 | DAT_003af2e8 >> (7 - uVar1) * 8;
  aiVif1CommandUnpack._40_8_ = DAT_003af2e8;
  aiVif1CommandUnpack[12] = DAT_003af2f0;
  iVar4 = 0;
  aiVif1CommandUnpack[0] = (int)DAT_003af2c0;
  while( true ) {
    puVar3 = puVar3 + 1;
    if (((byte)pVC->field_0x3 & 0x6f) == aiVif1CommandUnpack[0]) {
      return 1;
    }
    iVar4 = iVar4 + 1;
    if (0xc < iVar4) break;
    aiVif1CommandUnpack[0] = *puVar3;
  }
  return 0;
}

static int* _ParseDmaPacket(tVIF_CODE *pVC) {
	static char __FUNCTION__[16] = {
		/* [0] = */ 95,
		/* [1] = */ 80,
		/* [2] = */ 97,
		/* [3] = */ 114,
		/* [4] = */ 115,
		/* [5] = */ 101,
		/* [6] = */ 68,
		/* [7] = */ 109,
		/* [8] = */ 97,
		/* [9] = */ 80,
		/* [10] = */ 97,
		/* [11] = */ 99,
		/* [12] = */ 107,
		/* [13] = */ 101,
		/* [14] = */ 116,
		/* [15] = */ 0
	};
	int *piNext;
	int iNumInstruct;
	
  int iVar1;
  tVIF_CODE *ptVar2;
  uint uVar3;
  byte bVar4;
  
  g3ddbgVerifyVifCode__FPC9tVIF_CODE(pVC);
  bVar4 = pVC->field_0x3 & 0x7f;
  if (bVar4 == 0x20) {
    ptVar2 = pVC + 2;
  }
  else if ((bVar4 == 0x30) || (bVar4 == 0x31)) {
    ptVar2 = pVC + 5;
  }
  else if (bVar4 == 0x4a) {
    uVar3 = 0x100;
    if ((byte)pVC->field_0x2 != 0) {
      uVar3 = (uint)(byte)pVC->field_0x2;
    }
    ptVar2 = (tVIF_CODE *)(&pVC[1].field_0x0 + uVar3 * 2);
  }
  else if (bVar4 == 0x50) {
    uVar3 = (uint)(pVC + 1) & 0xf;
    if (uVar3 != 0) {
      _SetLineInfo__FPCciT0T0("g3dDebug.c",0x108,"_ParseDmaPacket","!((int)(pVC+1) & 0xf)");
      g3ddbgAssert__FbPCce(uVar3 == 0,&DAT_003f0b70);
    }
                    /* inlined from g3dUtil.h */
    ptVar2 = pVC + 1 + (uint)*(ushort *)pVC * 4;
                    /* end of inlined section */
    if (((uint)ptVar2 & 0xf) != 0) {
      _SetLineInfo__FPCciT0T0("g3dDebug.c",0x10a,"_ParseDmaPacket","!((int)piNext & 0xf)");
      g3ddbgAssert__FbPCce(((uint)ptVar2 & 0xf) == 0,&DAT_003f0b70);
    }
  }
  else if (bVar4 == 0x51) {
    _SetLineInfo__FPCciT0T0("g3dDebug.c",0x10f,"_ParseDmaPacket",&DAT_003f0b78);
    g3ddbgAssert__FbPCce(false,&DAT_003f0b70);
    ptVar2 = (tVIF_CODE *)0x0;
  }
  else {
    iVar1 = _IsVifcodeUnpack__FPC9tVIF_CODE(pVC);
    if (iVar1 == 0) {
      ptVar2 = pVC + 1;
    }
    else {
      bVar4 = pVC->field_0x3 & 0x6f;
      if (bVar4 == 0x68) {
                    /* inlined from g3dUtil.h */
        ptVar2 = pVC + (uint)(byte)pVC->field_0x2 * 3 + 1;
                    /* end of inlined section */
      }
      else {
        if (bVar4 < 0x69) {
          if (bVar4 == 0x60) {
                    /* inlined from g3dUtil.h */
                    /* end of inlined section */
            return (int *)(pVC + (byte)pVC->field_0x2 + 1);
          }
          if (bVar4 == 100) {
                    /* inlined from g3dUtil.h */
                    /* end of inlined section */
            return (int *)(pVC + (uint)(byte)pVC->field_0x2 * 2 + 1);
          }
        }
        else if (bVar4 == 0x6c) {
                    /* inlined from g3dUtil.h */
                    /* end of inlined section */
          return (int *)(pVC + (uint)(byte)pVC->field_0x2 * 4 + 1);
        }
        _SetLineInfo__FPCciT0T0("g3dDebug.c",0x125,"_ParseDmaPacket",&DAT_003f0b78);
        g3ddbgAssert__FbPCce(false,"Unknown Unpack CMD : %d(0x%x)");
        ptVar2 = (tVIF_CODE *)0x0;
      }
    }
  }
  return (int *)ptVar2;
}

void g3ddbgPrintf(char *pStr) {
	char str[2048];
	
  char str [2048];
  undefined local_38 [56];
  
  vsprintf(str,pStr,local_38);
  scePrintf(str);
  return;
}

int g3ddbgDumpMemoryCompare(void *p0, void *p1, int iSize) {
	int bRet;
	int i;
	
  byte bVar1;
  int iVar2;
  ulong uVar3;
  size_t __n;
  int iVar4;
  ulong uVar5;
  byte *pbVar6;
  
  __n = (size_t)iSize;
  iVar2 = memcmp(p0,p1,__n);
  uVar5 = 0;
  if (iVar2 != 0) {
    g3ddbgPrintf__FPCce("---_DumpMemoryCompare start---\n");
    iVar2 = 0;
    if (0 < (long)__n) {
      uVar3 = 0;
      iVar2 = 0;
      do {
        iVar4 = (int)uVar5;
        if (uVar3 == 0) {
          g3ddbgPrintf__FPCce(s_0x_08x_003f0b80);
        }
        pbVar6 = (byte *)((int)p0 + iVar4);
        if ((*pbVar6 & 0xf0) == (*(byte *)((int)p1 + iVar4) & 0xf0)) {
          g3ddbgPrintf__FPCce(&DAT_003f0b88);
          bVar1 = *pbVar6;
        }
        else {
          iVar2 = 1;
          g3ddbgPrintf__FPCce(&DAT_003f0b90);
          bVar1 = *pbVar6;
        }
        if ((bVar1 & 0xf) == (*(byte *)((int)p1 + iVar4) & 0xf)) {
          g3ddbgPrintf__FPCce(&DAT_003f0b88);
        }
        else {
          iVar2 = 1;
          g3ddbgPrintf__FPCce(&DAT_003f0b90);
        }
        uVar5 = (ulong)(iVar4 + 1);
        if ((uVar5 & 0xf) == 0) {
          g3ddbgPrintf__FPCce(s__0x_08x_003f0b98);
          g3ddbgPrintf__FPCce(s__0x_08x_003f0b98);
          g3ddbgPrintf__FPCce(&DAT_003f0ba0);
        }
        else if ((uVar5 & 3) == 0) {
          g3ddbgPrintf__FPCce(&DAT_003f0ba8);
        }
        uVar3 = uVar5 & 0xf;
      } while ((long)uVar5 < (long)__n);
    }
  }
  return iVar2;
}

void g3ddbgAssert(bool b, char *pStr) {
	char str[2048];
	
  char str [2048];
  undefined local_30 [48];
  
  if (!b) {
    vsprintf(str,pStr,local_30);
    _strcatf__FPcPCce(str,pStr);
  }
  return;
}

void g3ddbgWarning(bool b, char *pStr) {
	char str[2048];
	
  char str [2048];
  undefined local_30 [48];
  
  if (!b) {
    vsprintf(str,pStr,local_30);
    _Warning__FPCc(str);
    memset(&s_LineInfo,0,0x10);
  }
  return;
}

void _SetLineInfo(char *pFileName, int iLine, char *pFunctionName, char *pExpression) {
  s_LineInfo.pExpression = pExpression;
  s_LineInfo.pFileName = pFileName;
  s_LineInfo.iLine = iLine;
  s_LineInfo.pFunctionName = pFunctionName;
  return;
}

_G3DLINEINFO& _GetLineInfo() {
  return &s_LineInfo;
}

void g3ddbgWaitVU1() {
  char cVar1;
  
  do {
    cVar1 = getCopCondition(2,0);
  } while (cVar1 != '\0');
  return;
}

void g3ddbgDumpVu1MicroMemory() {
  return;
}

void DispVUMemory() {
  return;
}

void _PrintVector(float *fv, char *pValName) {
  g3ddbgPrintf__FPCce("_PrintVector(%s):%s(%d)");
  g3ddbgPrintf__FPCce("%8.6f,%8.6f,%8.6f,%8.6f\n");
  return;
}

void _PrintMatrix(float *fmat[4], char *pValName) {
	int i;
	
  int iVar1;
  
  iVar1 = 0;
  g3ddbgPrintf__FPCce("_PrintMatrix(%s):%s(%d)\n");
  do {
    iVar1 = iVar1 + 1;
    g3ddbgPrintf__FPCce("m[%d] : %8.2f, %8.2f, %8.2f, %8.2f\n");
  } while (iVar1 < 4);
  return;
}

void g3ddbgLoadVu0FloatingPointRegisters(float *av[4]) {
  _lqc2((undefined  [16])*av);
  _lqc2((undefined  [16])av[1]);
  _lqc2((undefined  [16])av[2]);
  _lqc2((undefined  [16])av[3]);
  _lqc2((undefined  [16])av[4]);
  _lqc2((undefined  [16])av[5]);
  _lqc2((undefined  [16])av[6]);
  _lqc2((undefined  [16])av[7]);
  _lqc2((undefined  [16])av[8]);
  _lqc2((undefined  [16])av[9]);
  _lqc2((undefined  [16])av[10]);
  _lqc2((undefined  [16])av[0xb]);
  _lqc2((undefined  [16])av[0xc]);
  _lqc2((undefined  [16])av[0xd]);
  _lqc2((undefined  [16])av[0xe]);
  _lqc2((undefined  [16])av[0xf]);
  _lqc2((undefined  [16])av[0x10]);
  _lqc2((undefined  [16])av[0x11]);
  _lqc2((undefined  [16])av[0x12]);
  _lqc2((undefined  [16])av[0x13]);
  _lqc2((undefined  [16])av[0x14]);
  _lqc2((undefined  [16])av[0x15]);
  _lqc2((undefined  [16])av[0x16]);
  _lqc2((undefined  [16])av[0x17]);
  _lqc2((undefined  [16])av[0x18]);
  _lqc2((undefined  [16])av[0x19]);
  _lqc2((undefined  [16])av[0x1a]);
  _lqc2((undefined  [16])av[0x1b]);
  _lqc2((undefined  [16])av[0x1c]);
  _lqc2((undefined  [16])av[0x1d]);
  _lqc2((undefined  [16])av[0x1e]);
  _lqc2((undefined  [16])av[0x1f]);
  return;
}

void g3ddbgStoreVu0FloatingPointRegisters(float *av[4]) {
  float afVar1 [4];
  undefined in_vf0 [16];
  undefined in_vf1 [16];
  undefined in_vf2 [16];
  undefined in_vf3 [16];
  undefined in_vf4 [16];
  undefined in_vf5 [16];
  undefined in_vf6 [16];
  undefined in_vf7 [16];
  undefined in_vf8 [16];
  undefined in_vf9 [16];
  undefined in_vf10 [16];
  undefined in_vf11 [16];
  undefined in_vf12 [16];
  undefined in_vf13 [16];
  undefined in_vf14 [16];
  undefined in_vf15 [16];
  undefined in_vf16 [16];
  undefined in_vf17 [16];
  undefined in_vf18 [16];
  undefined in_vf19 [16];
  undefined in_vf20 [16];
  undefined in_vf21 [16];
  undefined in_vf22 [16];
  undefined in_vf23 [16];
  undefined in_vf24 [16];
  undefined in_vf25 [16];
  undefined in_vf26 [16];
  undefined in_vf27 [16];
  undefined in_vf28 [16];
  undefined in_vf29 [16];
  undefined in_vf30 [16];
  undefined in_vf31 [16];
  
  afVar1 = (float  [4])_sqc2(in_vf0);
  *av = afVar1;
  afVar1 = (float  [4])_sqc2(in_vf1);
  av[1] = afVar1;
  afVar1 = (float  [4])_sqc2(in_vf2);
  av[2] = afVar1;
  afVar1 = (float  [4])_sqc2(in_vf3);
  av[3] = afVar1;
  afVar1 = (float  [4])_sqc2(in_vf4);
  av[4] = afVar1;
  afVar1 = (float  [4])_sqc2(in_vf5);
  av[5] = afVar1;
  afVar1 = (float  [4])_sqc2(in_vf6);
  av[6] = afVar1;
  afVar1 = (float  [4])_sqc2(in_vf7);
  av[7] = afVar1;
  afVar1 = (float  [4])_sqc2(in_vf8);
  av[8] = afVar1;
  afVar1 = (float  [4])_sqc2(in_vf9);
  av[9] = afVar1;
  afVar1 = (float  [4])_sqc2(in_vf10);
  av[10] = afVar1;
  afVar1 = (float  [4])_sqc2(in_vf11);
  av[0xb] = afVar1;
  afVar1 = (float  [4])_sqc2(in_vf12);
  av[0xc] = afVar1;
  afVar1 = (float  [4])_sqc2(in_vf13);
  av[0xd] = afVar1;
  afVar1 = (float  [4])_sqc2(in_vf14);
  av[0xe] = afVar1;
  afVar1 = (float  [4])_sqc2(in_vf15);
  av[0xf] = afVar1;
  afVar1 = (float  [4])_sqc2(in_vf16);
  av[0x10] = afVar1;
  afVar1 = (float  [4])_sqc2(in_vf17);
  av[0x11] = afVar1;
  afVar1 = (float  [4])_sqc2(in_vf18);
  av[0x12] = afVar1;
  afVar1 = (float  [4])_sqc2(in_vf19);
  av[0x13] = afVar1;
  afVar1 = (float  [4])_sqc2(in_vf20);
  av[0x14] = afVar1;
  afVar1 = (float  [4])_sqc2(in_vf21);
  av[0x15] = afVar1;
  afVar1 = (float  [4])_sqc2(in_vf22);
  av[0x16] = afVar1;
  afVar1 = (float  [4])_sqc2(in_vf23);
  av[0x17] = afVar1;
  afVar1 = (float  [4])_sqc2(in_vf24);
  av[0x18] = afVar1;
  afVar1 = (float  [4])_sqc2(in_vf25);
  av[0x19] = afVar1;
  afVar1 = (float  [4])_sqc2(in_vf26);
  av[0x1a] = afVar1;
  afVar1 = (float  [4])_sqc2(in_vf27);
  av[0x1b] = afVar1;
  afVar1 = (float  [4])_sqc2(in_vf28);
  av[0x1c] = afVar1;
  afVar1 = (float  [4])_sqc2(in_vf29);
  av[0x1d] = afVar1;
  afVar1 = (float  [4])_sqc2(in_vf30);
  av[0x1e] = afVar1;
  afVar1 = (float  [4])_sqc2(in_vf31);
  av[0x1f] = afVar1;
  return;
}

void g3ddbgDumpVu0FloatingPointRegisters(float *av[4]) {
	float vf[32][4];
	int i;
	int j;
	char *pFormat;
	float f;
	
  float (*pafVar1) [4];
  float (*pafVar2) [4];
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  float *pfVar6;
  char *pStr;
  int iVar7;
  int iVar8;
  float (*pafVar9) [4];
  float fVar10;
  float vf [32] [4];
  
  pafVar1 = vf;
  pafVar9 = vf;
  if (av == (float (*) [4])0x0) {
    g3ddbgStoreVu0FloatingPointRegisters__FPA3_f(vf);
  }
  else {
    pafVar2 = av[0x20];
    do {
      uVar3 = *(undefined8 *)(*av + 2);
      uVar4 = *(undefined8 *)av[1];
      uVar5 = *(undefined8 *)(av[1] + 2);
      *(undefined8 *)pafVar1 = *(undefined8 *)*av;
      *(undefined8 *)((int)pafVar1 + 8) = uVar3;
      *(undefined8 *)((int)pafVar1 + 0x10) = uVar4;
      *(undefined8 *)((int)pafVar1 + 0x18) = uVar5;
      av = av[2];
      pafVar1 = (float (*) [4])((int)pafVar1 + 0x20);
    } while (av != pafVar2);
  }
  iVar8 = 0;
  g3ddbgPrintf__FPCce("--- g3ddbgDumpVu0FloatingPointRegisters ---\n");
  do {
    iVar7 = 3;
    g3ddbgPrintf__FPCce("v0f%02d ");
    pfVar6 = (float *)((int)pafVar9 + 0xc);
    fVar10 = *pfVar6;
    while( true ) {
      pfVar6 = pfVar6 + -1;
      pStr = "%1.1f       ";
      if (fVar10 != 0.0) {
        pStr = s__8_7f_003f0bb0;
      }
      iVar7 = iVar7 + -1;
      g3ddbgPrintf__FPCce(pStr);
      g3ddbgPrintf__FPCce(&DAT_003f0ba8);
      if (iVar7 < 0) break;
      fVar10 = *pfVar6;
    }
    iVar8 = iVar8 + 1;
    g3ddbgPrintf__FPCce(&DAT_003f0ba0);
    pafVar9 = (float (*) [4])((int)pafVar9 + 0x10);
  } while (iVar8 < 0x20);
  return;
}

void g3ddbgVerifyVu1MemAddress() {
	static char __FUNCTION__[26] = {
		/* [0] = */ 103,
		/* [1] = */ 51,
		/* [2] = */ 100,
		/* [3] = */ 100,
		/* [4] = */ 98,
		/* [5] = */ 103,
		/* [6] = */ 86,
		/* [7] = */ 101,
		/* [8] = */ 114,
		/* [9] = */ 105,
		/* [10] = */ 102,
		/* [11] = */ 121,
		/* [12] = */ 86,
		/* [13] = */ 117,
		/* [14] = */ 49,
		/* [15] = */ 77,
		/* [16] = */ 101,
		/* [17] = */ 109,
		/* [18] = */ 65,
		/* [19] = */ 100,
		/* [20] = */ 100,
		/* [21] = */ 114,
		/* [22] = */ 101,
		/* [23] = */ 115,
		/* [24] = */ 115,
		/* [25] = */ 0
	};
	
  return;
}

void g3ddbgVerifyGsRegisterAddress() {
	static char __FUNCTION__[30] = {
		/* [0] = */ 103,
		/* [1] = */ 51,
		/* [2] = */ 100,
		/* [3] = */ 100,
		/* [4] = */ 98,
		/* [5] = */ 103,
		/* [6] = */ 86,
		/* [7] = */ 101,
		/* [8] = */ 114,
		/* [9] = */ 105,
		/* [10] = */ 102,
		/* [11] = */ 121,
		/* [12] = */ 71,
		/* [13] = */ 115,
		/* [14] = */ 82,
		/* [15] = */ 101,
		/* [16] = */ 103,
		/* [17] = */ 105,
		/* [18] = */ 115,
		/* [19] = */ 116,
		/* [20] = */ 101,
		/* [21] = */ 114,
		/* [22] = */ 65,
		/* [23] = */ 100,
		/* [24] = */ 100,
		/* [25] = */ 114,
		/* [26] = */ 101,
		/* [27] = */ 115,
		/* [28] = */ 115,
		/* [29] = */ 0
	};
	
  return;
}

void g3ddbgVerifyVifCode(tVIF_CODE *pVC) {
	static char __FUNCTION__[20] = {
		/* [0] = */ 103,
		/* [1] = */ 51,
		/* [2] = */ 100,
		/* [3] = */ 100,
		/* [4] = */ 98,
		/* [5] = */ 103,
		/* [6] = */ 86,
		/* [7] = */ 101,
		/* [8] = */ 114,
		/* [9] = */ 105,
		/* [10] = */ 102,
		/* [11] = */ 121,
		/* [12] = */ 86,
		/* [13] = */ 105,
		/* [14] = */ 102,
		/* [15] = */ 67,
		/* [16] = */ 111,
		/* [17] = */ 100,
		/* [18] = */ 101,
		/* [19] = */ 0
	};
	int aiVif1Command[20];
	int i;
	
  byte bVar1;
  uint uVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong *puVar5;
  uint *puVar6;
  ulong *puVar7;
  int iVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  int aiVif1Command [20];
  
  puVar6 = (uint *)aiVif1Command;
  puVar3 = (ulong *)aiVif1Command;
  puVar4 = &DAT_003b1c08;
  do {
    puVar5 = puVar4;
    puVar7 = puVar3;
    uVar9 = puVar5[1];
    uVar10 = puVar5[2];
    uVar11 = puVar5[3];
    *puVar7 = *puVar5;
    puVar7[1] = uVar9;
    puVar7[2] = uVar10;
    puVar7[3] = uVar11;
    puVar3 = puVar7 + 4;
    puVar4 = puVar5 + 4;
  } while (puVar5 + 4 != (ulong *)&UNK_003b1c48);
  bVar1 = pVC->field_0x3;
  iVar8 = 0;
  uVar9 = puVar5[5];
  uVar2 = (int)puVar7 + 0x27U & 7;
  puVar3 = (ulong *)(((int)puVar7 + 0x27U) - uVar2);
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | _UNK_003b1c48 >> (7 - uVar2) * 8;
  puVar7[4] = _UNK_003b1c48;
  uVar2 = (int)puVar7 + 0x2fU & 7;
  puVar3 = (ulong *)(((int)puVar7 + 0x2fU) - uVar2);
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | uVar9 >> (7 - uVar2) * 8;
  puVar7[5] = uVar9;
  while( true ) {
    puVar6 = puVar6 + 1;
    if ((bVar1 & 0x7f) == aiVif1Command[0]) {
      return;
    }
    iVar8 = iVar8 + 1;
    if (0x13 < iVar8) break;
    aiVif1Command[0] = *puVar6;
  }
  iVar8 = _IsVifcodeUnpack__FPC9tVIF_CODE(pVC);
  if (iVar8 != 0) {
    return;
  }
  _SetLineInfo__FPCciT0T0("g3dDebug.c",0x369,"g3ddbgVerifyVifCode",&DAT_003f0b78);
  g3ddbgAssert__FbPCce(false,"illegal VifCode Command : %d");
  return;
}

void g3ddbgVerifyDmaPacket(void *pDmaPacket) {
	static char __FUNCTION__[22] = {
		/* [0] = */ 103,
		/* [1] = */ 51,
		/* [2] = */ 100,
		/* [3] = */ 100,
		/* [4] = */ 98,
		/* [5] = */ 103,
		/* [6] = */ 86,
		/* [7] = */ 101,
		/* [8] = */ 114,
		/* [9] = */ 105,
		/* [10] = */ 102,
		/* [11] = */ 121,
		/* [12] = */ 68,
		/* [13] = */ 109,
		/* [14] = */ 97,
		/* [15] = */ 80,
		/* [16] = */ 97,
		/* [17] = */ 99,
		/* [18] = */ 107,
		/* [19] = */ 101,
		/* [20] = */ 116,
		/* [21] = */ 0
	};
	G3DDMACHAINTAG *pDCT;
	int *pSendData;
	int *piCur;
	int iSize;
	
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  tVIF_CODE *pVC;
  tVIF_CODE *ptVar4;
  long lVar5;
  
  pVC = (tVIF_CODE *)((int)pDmaPacket + 8);
  lVar5 = 0x10;
  iVar1 = (int)pVC - (int)pDmaPacket;
  while (iVar1 < 0x10) {
    iVar1 = _IsVifcodeMpg__FPC9tVIF_CODE(pVC);
    if (iVar1 != 0) {
      return;
    }
    pVC = (tVIF_CODE *)_ParseDmaPacket__FPC9tVIF_CODE(pVC);
    iVar1 = (int)pVC - (int)pDmaPacket;
  }
                    /* WARNING: Load size is inaccurate */
  uVar3 = *pDmaPacket;
  if ((((uVar3 & 0x70000000) == 0x30000000) || ((uVar3 & 0x70000000) == 0)) &&
     (0x10 < (int)pVC - (int)pDmaPacket)) {
    _SetLineInfo__FPCciT0T0("g3dDebug.c",0x390,"g3ddbgVerifyDmaPacket",&DAT_003f0b78);
    g3ddbgAssert__FbPCce(false,&DAT_003f0b70);
                    /* WARNING: Load size is inaccurate */
    uVar3 = *pDmaPacket;
  }
  uVar2 = uVar3 & 0x70000000;
  if (uVar2 == 0x10000000) {
                    /* WARNING: Load size is inaccurate */
    lVar5 = (long)((ulong)*pDmaPacket << 0x24) >> 0x20;
    ptVar4 = (tVIF_CODE *)((int)pDmaPacket + 0x10);
  }
  else if ((uVar2 == 0x30000000) || (uVar2 == 0)) {
    pVC = (tVIF_CODE *)((uint)(uVar3 >> 0x20) & 0x7fffffff);
                    /* WARNING: Load size is inaccurate */
    lVar5 = (long)((ulong)*pDmaPacket << 0x24) >> 0x20;
    ptVar4 = pVC;
    if ((uVar3 & 0x7fffffff00000000) == 0) {
      _SetLineInfo__FPCciT0T0("g3dDebug.c",0x39f,"g3ddbgVerifyDmaPacket","pDCT->ADDR");
                    /* WARNING: Load size is inaccurate */
      g3ddbgAssert__FbPCce((*pDmaPacket & 0x7fffffff00000000) != 0,&DAT_003f0b70);
      iVar1 = 0;
      goto joined_r0x0019ebd0;
    }
  }
  else {
    _SetLineInfo__FPCciT0T0("g3dDebug.c",0x3a3,"g3ddbgVerifyDmaPacket",&DAT_003f0b78);
    g3ddbgAssert__FbPCce(false,&DAT_003f0b70);
    ptVar4 = (tVIF_CODE *)pDmaPacket;
  }
  iVar1 = (int)pVC - (int)ptVar4;
joined_r0x0019ebd0:
  while( true ) {
    if (lVar5 == iVar1) {
      return;
    }
    if (lVar5 <= iVar1) {
      _SetLineInfo__FPCciT0T0
                ("g3dDebug.c",0x3ac,"g3ddbgVerifyDmaPacket","iSize > (int)piCur - (int)pSendData");
      g3ddbgAssert__FbPCce(false,&DAT_003f0b70);
    }
    iVar1 = _IsVifcodeMpg__FPC9tVIF_CODE(pVC);
    if (iVar1 != 0) break;
    pVC = (tVIF_CODE *)_ParseDmaPacket__FPC9tVIF_CODE(pVC);
    iVar1 = (int)pVC - (int)ptVar4;
  }
  return;
}

void g3ddbgVerifyDmaBuffer(void *pBuffer) {
	static char __FUNCTION__[22] = {
		/* [0] = */ 103,
		/* [1] = */ 51,
		/* [2] = */ 100,
		/* [3] = */ 100,
		/* [4] = */ 98,
		/* [5] = */ 103,
		/* [6] = */ 86,
		/* [7] = */ 101,
		/* [8] = */ 114,
		/* [9] = */ 105,
		/* [10] = */ 102,
		/* [11] = */ 121,
		/* [12] = */ 68,
		/* [13] = */ 109,
		/* [14] = */ 97,
		/* [15] = */ 66,
		/* [16] = */ 117,
		/* [17] = */ 102,
		/* [18] = */ 102,
		/* [19] = */ 101,
		/* [20] = */ 114,
		/* [21] = */ 0
	};
	G3DDMACHAINTAG *pDCT;
	
  ulong uVar1;
  int iLine;
  
  do {
    printf("0x%08x:0x%08x, id:%d");
    g3ddbgVerifyDmaPacket__FPCv(pBuffer);
                    /* WARNING: Load size is inaccurate */
    uVar1 = *pBuffer >> 0x1c & 7;
    if (7 < uVar1) goto LAB_0019edc0;
    switch((int)uVar1) {
    case 0:
      iLine = 0x3c6;
      break;
    case 1:
                    /* WARNING: Load size is inaccurate */
      pBuffer = (void *)((int)pBuffer + ((uint)*pBuffer * 2 + 2) * 8);
      goto LAB_0019edc0;
    case 2:
      iLine = 0x3cd;
      break;
    case 3:
      pBuffer = (void *)((int)pBuffer + 0x10);
      goto LAB_0019edc0;
    case 4:
      iLine = 0x3d3;
      break;
    case 5:
      iLine = 0x3d6;
      break;
    case 6:
      iLine = 0x3d9;
      break;
    case 7:
      _SetLineInfo__FPCciT0T0("g3dDebug.c",0x3dc,"g3ddbgVerifyDmaBuffer",&DAT_003f0b78);
      g3ddbgWarning__FbPCce(false,&DAT_003f0b70);
      goto LAB_0019edc0;
    }
    _SetLineInfo__FPCciT0T0("g3dDebug.c",iLine,"g3ddbgVerifyDmaBuffer",&DAT_003f0b78);
    g3ddbgWarning__FbPCce(false,&DAT_003f0b70);
LAB_0019edc0:
    printf(&DAT_003f0ba0);
  } while( true );
}

void g3ddbgDumpVif1Stat() {
  char cVar1;
  uint uVar2;
  
  printf("----==== VIF1_STAT ====----\n");
  printf("VIF1 pipeline status : ");
  uVar2 = REG_VIF1_STAT;
  uVar2 = uVar2 & 3;
  if (uVar2 == 1) {
    printf("waiting for data");
  }
  else if (uVar2 == 0) {
    printf(&DAT_003f0bb8);
  }
  else if (uVar2 == 2) {
    printf(s_decode_003f0bc0);
  }
  else if (uVar2 == 3) {
    printf("processing");
  }
  printf(&DAT_003f0ba0);
  printf("VIF1 E-bit wait : ");
  uVar2 = REG_VIF1_STAT;
  uVar2 = uVar2 >> 2 & 1;
  if (uVar2 == 0) {
    printf("not-wait");
  }
  else if (uVar2 == 1) {
    printf(&DAT_003f0bc8);
  }
  printf(&DAT_003f0ba0);
  printf("VIF1 GIF wait : ");
  uVar2 = REG_VIF1_STAT;
  uVar2 = uVar2 >> 3 & 1;
  if (uVar2 == 0) {
    printf("not-wait");
  }
  else if (uVar2 == 1) {
    printf(&DAT_003f0bc8);
  }
  printf(&DAT_003f0ba0);
  printf("VIF1 MARK detect : ");
  uVar2 = REG_VIF1_STAT;
  uVar2 = uVar2 >> 6 & 1;
  if (uVar2 == 0) {
    printf("not-detect");
  }
  else if (uVar2 == 1) {
    printf(s_detect_003f0bd0);
  }
  printf(&DAT_003f0ba0);
  printf("Duble Buffer Flag : ");
  cVar1 = REG_VIF1_STAT;
  if (cVar1 < '\0') {
    if (cVar1 < '\0') {
      printf("TOPS=BASE+OFFSET");
    }
  }
  else {
    printf("TOPS=BASE");
  }
  printf(&DAT_003f0ba0);
  printf("VIF1 stop stall : ");
  uVar2 = REG_VIF1_STAT;
  uVar2 = uVar2 >> 8 & 1;
  if (uVar2 == 0) {
    printf("not-stall");
  }
  else if (uVar2 == 1) {
    printf(s_stall_003f0bd8);
  }
  printf(&DAT_003f0ba0);
  printf("VIF1 ForceBreak stall : ");
  uVar2 = REG_VIF1_STAT;
  uVar2 = uVar2 >> 9 & 1;
  if (uVar2 == 0) {
    printf("not-stall");
  }
  else if (uVar2 == 1) {
    printf(s_stall_003f0bd8);
  }
  printf(&DAT_003f0ba0);
  printf("VIF1 interrupt stall : ");
  uVar2 = REG_VIF1_STAT;
  uVar2 = uVar2 >> 10 & 1;
  if (uVar2 == 0) {
    printf("not-stall");
  }
  else if (uVar2 == 1) {
    printf(s_stall_003f0bd8);
  }
  printf(&DAT_003f0ba0);
  printf("Interrupt bit detected flag : ");
  uVar2 = REG_VIF1_STAT;
  uVar2 = uVar2 >> 0xb & 1;
  if (uVar2 == 0) {
    printf("not-detect");
  }
  else if (uVar2 == 1) {
    printf(s_detect_003f0bd0);
  }
  printf(&DAT_003f0ba0);
  printf("Mismatch Error detected flag : ");
  uVar2 = REG_VIF1_STAT;
  uVar2 = uVar2 >> 0xc & 1;
  if (uVar2 == 0) {
    printf("no error");
  }
  else if (uVar2 == 1) {
    printf(s_error_003f0be0);
  }
  printf(&DAT_003f0ba0);
  printf("Reserved Instruction Error detected flag : ");
  uVar2 = REG_VIF1_STAT;
  uVar2 = uVar2 >> 0xd & 1;
  if (uVar2 == 0) {
    printf("not-detect");
  }
  else if (uVar2 == 1) {
    printf(s_detect_003f0bd0);
  }
  printf(&DAT_003f0ba0);
  printf("VIF1-FIFO direction : ");
  uVar2 = REG_VIF1_STAT;
  uVar2 = uVar2 >> 0x17 & 1;
  if (uVar2 == 0) {
    printf("Main memory/SPRAM -> VIF1");
  }
  else if (uVar2 == 1) {
    printf("VIF1 -> Main memory/SPRAM");
  }
  printf(&DAT_003f0ba0);
  printf("VIF1-FIFO valid data counter : %d qword");
  printf(&DAT_003f0ba0);
  return;
}

void g3ddbgDumpVif1Code() {
	tVIF_CODE *pVif1Code;
	
  printf("----==== VIF1_CODE ====----\n");
  printf(" CMD : %d, num : %d, immediate : %d, ( 0x%08x )\n");
  return;
}

void g3ddbgInfinitePrintConsole(int b) {
  s_bPrintConsoleInfinitely = b;
  return;
}

void g3ddbgPrintConsole(char *pStr) {
	char str[1024];
	int frame;
	sceVif1Packet packet;
	sceDmaEnv env;
	sceDmaChan *p1;
	u_long giftagAD[2];
	long128 buff[10];
	
  undefined8 uVar1;
  ushort uVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  uint id;
  uint uVar6;
  char str [1024];
  sceVif1Packet packet;
  sceDmaEnv env;
  ulong giftagAD [2];
  uint16 buff [10];
  undefined local_38 [56];
  
  memset(str,0,0x400);
  pStr[0x3ff] = '\0';
  vsprintf(str,pStr,local_38);
  g3dGsSyncPath__FiUs(0,0);
  sceGsSyncVCallback(0x19f618);
  sceGsSyncV(0);
  uVar1 = DAT_003b1fe0;
  sceGsResetPath();
  sceDmaReset(1);
  sceVif1PkInit(&packet,(uint)buff | 0x20000000);
  sceDmaGetEnv(&env);
  env.notify = 2;
  sceDmaPutEnv(&env);
  uVar4 = sceDmaGetChan(1);
  *(uint *)uVar4 = *(uint *)uVar4 | 0x40;
  sceGsResetGraph(0,1,2,1);
  sceGsSetDefDBuff(0x4af3f0,0,0x280,0xe0,2,0x31,1);
  sceVif1PkReset(&packet);
  sceVif1PkCnt(&packet,0);
  sceVif1PkOpenDirectCode(&packet,0);
  sceVif1PkOpenGifTag(&packet,uVar1);
  iVar3 = sceGsSetDefAlphaEnv(packet.pCurrent,0);
  sceVif1PkReserve(&packet,iVar3 << 2);
  sceVif1PkCloseGifTag(&packet);
  sceVif1PkCloseDirectCode(&packet);
  sceVif1PkEnd(&packet,0);
  sceVif1PkTerminate(&packet);
  sceDmaSend(uVar4,(uint)packet.pBase & 0x8fffffff);
  g3dGsSyncPath__FiUs(0,0);
  do {
    lVar5 = sceGsSyncV(0);
  } while (lVar5 == 0);
  sceExcepConsOpen(0x6d00,0x7980,0x4d,0x1b);
  db._498_1_ = 0;
  db._256_1_ = 0;
  db._257_1_ = 0;
  db._258_1_ = 0;
  db._496_1_ = 0;
  db._497_1_ = 0;
  id = 0;
  do {
    sceExcepConsLocate(0,0);
    sceExcepConsPrintf(str);
    if ((id & 1) == 0) {
      uVar2 = sceGsSyncV(0);
      sceGsSetHalfOffset(0x4af450,0x800,0x800,uVar2 ^ 1);
    }
    else {
      uVar2 = sceGsSyncV(0);
      sceGsSetHalfOffset(0x4af540,0x800,0x800,uVar2 ^ 1);
    }
    iFlushCache(0);
    g3dGsSyncPath__FiUs(0,0);
    uVar6 = id + 1;
    g3dGsSwapDBuff__FPC10sceGsDBuffi(&db,id);
    id = uVar6;
  } while ((s_bPrintConsoleInfinitely != 0) || (uVar6 != 2));
  return;
}

void _strcatf(char *strDest, char *pStr) {
	va_list VaList;
	
  char acStack_820 [1952];
  void *VaList;
  
  memset(acStack_820,0,0x800);
  _strcatf__FPcPCce(acStack_820,0x3af190);
  if ((s_LineInfo.pFileName == (char *)0x0) && (s_LineInfo.iLine == 0)) {
    _strcatf__FPcPCce(acStack_820,0x3f0b68,strDest);
  }
  else {
    _strcatf__FPcPCce(acStack_820,0x3af1c0,s_LineInfo.pFileName,s_LineInfo.iLine);
    _strcatf__FPcPCce(acStack_820,0x3af1d0,s_LineInfo.pFunctionName);
    _strcatf__FPcPCce(acStack_820,0x3af1e0,s_LineInfo.pExpression);
    _strcatf__FPcPCce(acStack_820,0x3af1f0,strDest);
  }
  _strcatf__FPcPCce(acStack_820,0x3af200);
  _strcatf__FPcPCce(acStack_820,0x3af230);
  _strcatf__FPcPCce(acStack_820,0x3af200);
  g3ddbgPrintConsole__FPCce(acStack_820);
  g3ddbgPrintf__FPCce(acStack_820);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

static int _VSyncCallback() {
  return 0;
}
