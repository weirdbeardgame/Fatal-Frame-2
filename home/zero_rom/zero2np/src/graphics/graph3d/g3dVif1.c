// STATUS: NOT STARTED

#include "g3dVif1.h"

struct _VIF1CMDINFO {
	unsigned int uiCmd;
	qword *pqwSubstantialRegister;
	int iLengthSubPacket;
	int *apiLocalRegister[4];
};

static G3DVIF1REGISTERLAYOUT s_Vif1RegisterLayout;

static void _GetVif1CmdInfo(_VIF1CMDINFO *pRet, G3DVIF1CMDDATA *pVCD) {
	static char __FUNCTION__[16] = {
		/* [0] = */ 95,
		/* [1] = */ 71,
		/* [2] = */ 101,
		/* [3] = */ 116,
		/* [4] = */ 86,
		/* [5] = */ 105,
		/* [6] = */ 102,
		/* [7] = */ 49,
		/* [8] = */ 67,
		/* [9] = */ 109,
		/* [10] = */ 100,
		/* [11] = */ 73,
		/* [12] = */ 110,
		/* [13] = */ 102,
		/* [14] = */ 111,
		/* [15] = */ 0
	};
	G3DVIF1REGISTERLAYOUT_DIRECT &rVRL;
	_VIF1CMDINFO aVCI[10];
	int i;
	
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  int *piVar4;
  ulong *puVar5;
  ulong uVar6;
  _VIF1CMDINFO *p_Var7;
  ulong uVar8;
  ulong uVar9;
  _VIF1CMDINFO aVCI [10];
  
  p_Var7 = aVCI;
  aVCI[0].pqwSubstantialRegister = (int (*) [4])0x10003c40;
  aVCI[0].uiCmd = 1;
  aVCI[0].iLengthSubPacket = 0;
  memset(aVCI[0].apiLocalRegister,0,0x10);
  aVCI[1].uiCmd = 2;
  aVCI[1].pqwSubstantialRegister = (int (*) [4])0x10003cb0;
  aVCI[0].apiLocalRegister[0] = s_Vif1RegisterLayout.Array + 4;
  aVCI[1].iLengthSubPacket = 0;
  memset(aVCI[1].apiLocalRegister,0,0x10);
  aVCI[2].uiCmd = 3;
  aVCI[2].pqwSubstantialRegister = (int (*) [4])0x10003ca0;
  aVCI[1].apiLocalRegister[0] = s_Vif1RegisterLayout.Array + 0xb;
  aVCI[2].iLengthSubPacket = 0;
  memset(aVCI[2].apiLocalRegister,0,0x10);
  aVCI[3].pqwSubstantialRegister = (int (*) [4])0x10003cd0;
  aVCI[2].apiLocalRegister[0] = s_Vif1RegisterLayout.Array + 10;
  aVCI[3].uiCmd = 4;
  aVCI[3].iLengthSubPacket = 0;
  memset(aVCI[3].apiLocalRegister,0,0x10);
  aVCI[4].uiCmd = 5;
  aVCI[4].pqwSubstantialRegister = (int (*) [4])0x10003c50;
  aVCI[3].apiLocalRegister[0] = s_Vif1RegisterLayout.Array + 9;
  aVCI[4].iLengthSubPacket = 0;
  memset(aVCI[4].apiLocalRegister,0,0x10);
  aVCI[5].uiCmd = 7;
  aVCI[5].pqwSubstantialRegister = (int (*) [4])0x10003c30;
  aVCI[4].apiLocalRegister[0] = s_Vif1RegisterLayout.Array + 5;
  aVCI[5].iLengthSubPacket = 0;
  memset(aVCI[5].apiLocalRegister,0,0x10);
  aVCI[6].uiCmd = 0x20;
  aVCI[6].pqwSubstantialRegister = (int (*) [4])0x10003c70;
  aVCI[5].apiLocalRegister[0] = s_Vif1RegisterLayout.Array + 3;
  aVCI[6].iLengthSubPacket = 1;
  memset(aVCI[6].apiLocalRegister,0,0x10);
  aVCI[6].apiLocalRegister[0] = s_Vif1RegisterLayout.Array + 7;
  aVCI[7].uiCmd = 0x30;
  aVCI[7].apiLocalRegister[0] = s_Vif1RegisterLayout.Array + 0xe;
  aVCI[7].apiLocalRegister[1] = s_Vif1RegisterLayout.Array + 0xf;
  aVCI[7].pqwSubstantialRegister = (int (*) [4])0x10003d00;
  aVCI[7].iLengthSubPacket = 4;
  aVCI[7].apiLocalRegister[2] = s_Vif1RegisterLayout.Array + 0x10;
  aVCI[7].apiLocalRegister[3] = s_Vif1RegisterLayout.Array + 0x11;
  aVCI[8].uiCmd = 0x31;
  aVCI[8].pqwSubstantialRegister = (int (*) [4])0x10003d40;
  aVCI[8].iLengthSubPacket = 4;
  aVCI[8].apiLocalRegister[0] = s_Vif1RegisterLayout.Array + 0x12;
  aVCI[8].apiLocalRegister[1] = s_Vif1RegisterLayout.Array + 0x13;
  aVCI[8].apiLocalRegister[2] = s_Vif1RegisterLayout.Array + 0x14;
  aVCI[8].apiLocalRegister[3] = s_Vif1RegisterLayout.Array + 0x15;
  memset(aVCI + 9,0,0x1c);
  uVar9 = (ulong)*(byte *)((int)&pVCD->uiCmd + 3);
  uVar8 = 0;
  aVCI[9].uiCmd = 0x11;
  do {
    if (((long)*(int *)p_Var7 & 0x7fU) == uVar9) {
      uVar2 = (int)p_Var7 + 7U & 7;
      uVar3 = (uint)p_Var7 & 7;
      uVar6 = (*(long *)(((int)p_Var7 + 7U) - uVar2) << (7 - uVar2) * 8 |
              (long)*(int *)p_Var7 & 0x7fU & 0xffffffffffffffffU >> (uVar2 + 1) * 8) &
              -1L << (8 - uVar3) * 8 | *(ulong *)((int)p_Var7 - uVar3) >> uVar3 * 8;
      uVar2 = (int)p_Var7 + 0xfU & 7;
      uVar3 = (uint)(int *)((int)p_Var7 + 8) & 7;
      uVar8 = (*(long *)(((int)p_Var7 + 0xfU) - uVar2) << (7 - uVar2) * 8 |
              uVar8 & 0xffffffffffffffffU >> (uVar2 + 1) * 8) & -1L << (8 - uVar3) * 8 |
              *(ulong *)((int)(int *)((int)p_Var7 + 8) - uVar3) >> uVar3 * 8;
      uVar2 = (int)p_Var7 + 0x17U & 7;
      uVar3 = (uint)(int *)((int)p_Var7 + 0x10) & 7;
      uVar9 = (*(long *)(((int)p_Var7 + 0x17U) - uVar2) << (7 - uVar2) * 8 |
              uVar9 & 0xffffffffffffffffU >> (uVar2 + 1) * 8) & -1L << (8 - uVar3) * 8 |
              *(ulong *)((int)(int *)((int)p_Var7 + 0x10) - uVar3) >> uVar3 * 8;
      piVar4 = *(int **)((int)p_Var7 + 0x18);
      puVar1 = (undefined *)((int)&pRet->pqwSubstantialRegister + 3);
      uVar2 = (uint)puVar1 & 7;
      puVar5 = (ulong *)(puVar1 + -uVar2);
      *puVar5 = *puVar5 & -1L << (uVar2 + 1) * 8 | uVar6 >> (7 - uVar2) * 8;
      uVar2 = (uint)pRet & 7;
      *(ulong *)((int)pRet - uVar2) =
           uVar6 << uVar2 * 8 |
           *(ulong *)((int)pRet - uVar2) & 0xffffffffffffffffU >> (8 - uVar2) * 8;
      puVar1 = (undefined *)((int)pRet->apiLocalRegister + 3);
      uVar2 = (uint)puVar1 & 7;
      puVar5 = (ulong *)(puVar1 + -uVar2);
      *puVar5 = *puVar5 & -1L << (uVar2 + 1) * 8 | uVar8 >> (7 - uVar2) * 8;
      uVar2 = (uint)&pRet->iLengthSubPacket & 7;
      puVar5 = (ulong *)((int)&pRet->iLengthSubPacket - uVar2);
      *puVar5 = uVar8 << uVar2 * 8 | *puVar5 & 0xffffffffffffffffU >> (8 - uVar2) * 8;
      puVar1 = (undefined *)((int)pRet->apiLocalRegister + 0xb);
      uVar2 = (uint)puVar1 & 7;
      puVar5 = (ulong *)(puVar1 + -uVar2);
      *puVar5 = *puVar5 & -1L << (uVar2 + 1) * 8 | uVar9 >> (7 - uVar2) * 8;
      uVar2 = (uint)(pRet->apiLocalRegister + 1) & 7;
      puVar5 = (ulong *)((int)(pRet->apiLocalRegister + 1) - uVar2);
      *puVar5 = uVar9 << uVar2 * 8 | *puVar5 & 0xffffffffffffffffU >> (8 - uVar2) * 8;
      pRet->apiLocalRegister[3] = piVar4;
      return;
    }
    uVar8 = (ulong)((int)uVar8 + 1);
    p_Var7 = (_VIF1CMDINFO *)((int)p_Var7 + 0x1c);
  } while ((long)uVar8 < 10);
  _SetLineInfo__FPCciT0T0("g3dVif1.c",0x5d,"_GetVif1CmdInfo",&DAT_003f0d68);
  g3ddbgAssert__FbPCce(false,&DAT_003f0d70);
  return;
}

static int _UpdateValue(_VIF1CMDINFO *pVCI, G3DVIF1CMDDATA *pVCD) {
	static char __FUNCTION__[13] = {
		/* [0] = */ 95,
		/* [1] = */ 85,
		/* [2] = */ 112,
		/* [3] = */ 100,
		/* [4] = */ 97,
		/* [5] = */ 116,
		/* [6] = */ 101,
		/* [7] = */ 86,
		/* [8] = */ 97,
		/* [9] = */ 108,
		/* [10] = */ 117,
		/* [11] = */ 101,
		/* [12] = */ 0
	};
	
  int *piVar1;
  uint uVar2;
  uint *puVar3;
  uint *puVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint *puVar8;
  
  switch(pVCI->uiCmd & 0x7f) {
  case 1:
    piVar1 = pVCI->apiLocalRegister[0];
    iVar5 = 1;
    *(undefined *)piVar1 = *(undefined *)&pVCD->uiCmd;
    *(undefined *)((int)piVar1 + 1) = *(undefined *)((int)&pVCD->uiCmd + 1);
    break;
  case 2:
    puVar8 = (uint *)pVCI->apiLocalRegister[0];
    uVar7 = 0xfffffc00;
    uVar2 = *puVar8;
    uVar6 = pVCD->uiCmd & 0x3ff;
    goto LAB_001a5a18;
  case 3:
  case 4:
    iVar5 = 1;
    *pVCI->apiLocalRegister[0] =
         *pVCI->apiLocalRegister[0] & 0xfffffc00U | (uint)*(byte *)&pVCD->uiCmd;
    break;
  case 5:
    puVar8 = (uint *)pVCI->apiLocalRegister[0];
    uVar6 = pVCD->uiCmd;
    goto LAB_001a5a0c;
  default:
    _SetLineInfo__FPCciT0T0("g3dVif1.c",0xf4,"_UpdateValue",&DAT_003f0d68);
    g3ddbgAssert__FbPCce(false,&DAT_003f0d70);
    iVar5 = 0;
    break;
  case 7:
    iVar5 = 1;
    *(undefined2 *)pVCI->apiLocalRegister[0] = *(undefined2 *)&pVCD->uiCmd;
    break;
  case 0x11:
    iVar5 = 1;
    break;
  case 0x20:
    puVar8 = (uint *)pVCI->apiLocalRegister[0];
    uVar6 = pVCD->auiSubPacket[0];
LAB_001a5a0c:
    uVar7 = 0xfffffffc;
    uVar2 = *puVar8;
    uVar6 = uVar6 & 3;
LAB_001a5a18:
    iVar5 = 1;
    *puVar8 = uVar2 & uVar7 | uVar6;
    break;
  case 0x30:
  case 0x31:
    iVar5 = 1;
    puVar8 = (uint *)pVCI->apiLocalRegister[3];
    puVar3 = (uint *)pVCI->apiLocalRegister[1];
    puVar4 = (uint *)pVCI->apiLocalRegister[2];
    *pVCI->apiLocalRegister[0] = pVCD->auiSubPacket[0];
    *puVar3 = pVCD->auiSubPacket[1];
    *puVar4 = pVCD->auiSubPacket[2];
    *puVar8 = pVCD->auiSubPacket[3];
  }
  return iVar5;
}

void g3dVif1Init() {
	int i;
	
  tVIF1_STAT tVar1;
  tVIF1_STAT *ptVar2;
  int iVar3;
  G3DVIF1REGISTERLAYOUT *pGVar4;
  
  pGVar4 = &s_Vif1RegisterLayout;
  ptVar2 = (tVIF1_STAT *)0x10003c00;
  iVar3 = 0x15;
  do {
    tVar1 = *ptVar2;
    ptVar2 = ptVar2 + 4;
    iVar3 = iVar3 + -1;
    (pGVar4->Direct).stat = tVar1;
    pGVar4 = (G3DVIF1REGISTERLAYOUT *)(pGVar4->Array + 1);
  } while (-1 < iVar3);
  return;
}

void g3dVif1SetRegister(G3DVIF1CMDDATA *aVCD, int iNumPacket) {
	static char __FUNCTION__[19] = {
		/* [0] = */ 103,
		/* [1] = */ 51,
		/* [2] = */ 100,
		/* [3] = */ 86,
		/* [4] = */ 105,
		/* [5] = */ 102,
		/* [6] = */ 49,
		/* [7] = */ 83,
		/* [8] = */ 101,
		/* [9] = */ 116,
		/* [10] = */ 82,
		/* [11] = */ 101,
		/* [12] = */ 103,
		/* [13] = */ 105,
		/* [14] = */ 115,
		/* [15] = */ 116,
		/* [16] = */ 101,
		/* [17] = */ 114,
		/* [18] = */ 0
	};
	unsigned int &rauiPacket[1];
	int iWSize;
	unsigned int auiDefaultVif1Code[2];
	int iFraction;
	int i;
	int i;
	G3DVIF1CMDDATA &rVCD;
	_VIF1CMDINFO VCI;
	int j;
	int i;
	
  undefined4 uVar1;
  ulong *puVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  uint *puVar6;
  int iVar7;
  uint *puVar8;
  G3DVIF1CMDDATA *pVCD;
  uint uVar9;
  uint auiDefaultVif1Code [2];
  _VIF1CMDINFO VCI;
  
  puVar8 = auiDefaultVif1Code;
  if (0 < iNumPacket) {
    if (aVCD == (G3DVIF1CMDDATA *)0x0) {
      _SetLineInfo__FPCciT0T0("g3dVif1.c",0x114,"g3dVif1SetRegister",&DAT_003f0d78);
      g3ddbgAssert__FbPCce(false,&DAT_003f0d70);
    }
    puVar3 = (undefined4 *)g3dDmaOpenPacket__Fv();
    uVar9 = (int)auiDefaultVif1Code + 7U & 7;
    puVar2 = (ulong *)(((int)auiDefaultVif1Code + 7U) - uVar9);
    *puVar2 = *puVar2 & -1L << (uVar9 + 1) * 8 | (ulong)DAT_003f0d80 >> (7 - uVar9) * 8;
    auiDefaultVif1Code[0] = DAT_003f0d80[0];
    auiDefaultVif1Code[1] = DAT_003f0d80[1];
    iVar7 = 1;
    puVar5 = puVar3;
    do {
      uVar1 = *puVar8;
      puVar8 = puVar8 + 1;
      iVar7 = iVar7 + -1;
      *puVar5 = uVar1;
      puVar5 = puVar5 + 1;
    } while (-1 < iVar7);
    uVar9 = 2;
    if (0 < iNumPacket) {
      iVar7 = 0;
      puVar8 = puVar3 + 2;
      do {
        pVCD = (G3DVIF1CMDDATA *)((int)aVCD->auiSubPacket + iVar7 + -4);
        _GetVif1CmdInfo__FP12_VIF1CMDINFOPC14G3DVIF1CMDDATA(&VCI,pVCD);
        iVar4 = _UpdateValue__FP12_VIF1CMDINFOPC14G3DVIF1CMDDATA(&VCI,pVCD);
        if (iVar4 != 0) {
          uVar9 = uVar9 + 1;
          *puVar8 = pVCD->uiCmd;
          puVar8 = puVar8 + 1;
          if (4 < VCI.iLengthSubPacket) {
            _SetLineInfo__FPCciT0T0
                      ("g3dVif1.c",0x130,"g3dVif1SetRegister",
                       "VCI.iLengthSubPacket <= G3D_MAX_VIF1SUBPACKETLENGTH");
            g3ddbgAssert__FbPCce(VCI.iLengthSubPacket < 5,&DAT_003f0d70);
          }
          iVar4 = 0;
          if (0 < VCI.iLengthSubPacket) {
            puVar6 = puVar3 + uVar9;
            do {
              pVCD = (G3DVIF1CMDDATA *)pVCD->auiSubPacket;
              iVar4 = iVar4 + 1;
              puVar8 = puVar8 + 1;
              *puVar6 = *(uint *)pVCD;
              puVar6 = puVar6 + 1;
              uVar9 = uVar9 + 1;
            } while (iVar4 < VCI.iLengthSubPacket);
          }
        }
        iNumPacket = iNumPacket + -1;
        iVar7 = iVar7 + 0x14;
      } while (iNumPacket != 0);
    }
    if ((int)uVar9 < 3) {
      g3dDmaCancelPacket__Fv();
    }
    else {
      iVar7 = 4 - (uVar9 & 3);
      iVar4 = uVar9 << 2;
      if ((iVar7 != 0) && (0 < iVar7)) {
        puVar5 = puVar3 + uVar9;
        do {
          iVar7 = iVar7 + -1;
          *puVar5 = 0;
          uVar9 = uVar9 + 1;
          puVar5 = puVar5 + 1;
        } while (iVar7 != 0);
        iVar4 = uVar9 * 4;
      }
      g3dDmaClosePacket__FPCv((void *)((int)puVar3 + iVar4));
    }
  }
  return;
}

int g3dVif1Unpack(int iVu1MemAddress, void *pData, int iQWSize) {
	int &rQW[4];
	int *pQWSrc[4];
	int i;
	
  undefined8 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  puVar2 = (undefined4 *)g3dDmaOpenPacket__Fv();
  puVar2[2] = 0x1000404;
  puVar2[3] = iVu1MemAddress | iQWSize << 0x10 | 0x6c000000;
  *puVar2 = 0;
  puVar2[1] = 0;
  iVar4 = iQWSize;
  puVar3 = puVar2;
  if (0 < iQWSize) {
    do {
      uVar1 = *pData;
                    /* WARNING: Load size is inaccurate */
      uVar5 = *(undefined4 *)((int)pData + 8);
      uVar6 = *(undefined4 *)((int)pData + 0xc);
      puVar3[4] = (int)uVar1;
      puVar3[5] = (int)((ulong)uVar1 >> 0x20);
      puVar3[6] = uVar5;
      puVar3[7] = uVar6;
      iVar4 = iVar4 + -1;
      pData = (void *)((int)pData + 0x10);
      puVar3 = puVar3 + 4;
    } while (iVar4 != 0);
  }
  g3dDmaClosePacket__FPCv(puVar2 + iQWSize * 4 + 4);
  return 1;
}
