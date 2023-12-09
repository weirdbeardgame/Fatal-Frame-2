// STATUS: NOT STARTED

#include "g3dSprite.h"

__vtbl_ptr_type CSprite virtual table[3] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ 0x2b63d0,
		/* .__delta2 = */ 25552
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ 0x2b6410,
		/* .__delta2 = */ 25616
	},
	/* [2] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	}
};

unsigned char CSprite type_info node[8];

CSprite* CSprite::CSprite() {
  this->__vtable = (CSprite__vtable *)_vt_7CSprite;
  memset(&this->m_Header,0,0x20);
  return;
}

int CSprite::Create(G3DSPRITEDATA *pSpriteData, CTexture *pTexture) {
	static char __FUNCTION__[7] = {
		/* [0] = */ 67,
		/* [1] = */ 114,
		/* [2] = */ 101,
		/* [3] = */ 97,
		/* [4] = */ 116,
		/* [5] = */ 101,
		/* [6] = */ 0
	};
	int iPrim;
	int iNreg;
	int iRegs1;
	int iRegs3;
	int iRegs4;
	float vScreenCoordLT[4];
	float vScreenCoordRB[4];
	
  int iVar1;
  float fVar2;
  undefined8 uVar3;
  int iVar4;
  undefined1 *puVar5;
  long lVar6;
  int iVar7;
  long lVar8;
  int iVar9;
  float vScreenCoordLT [4];
  float vScreenCoordRB [4];
  
  if (pSpriteData == (G3DSPRITEDATA *)0x0) {
    _SetLineInfo__FPCciT0T0("g3dSprite.cpp",0x2f,__FUNCTION___649,"pSpriteData");
    g3ddbgAssert__FbPCce(false,&DAT_003f0d50);
  }
  fVar2 = (pSpriteData->Rect).fTop;
  lVar8 = 0;
  lVar6 = 0;
  (this->m_SpriteData).Rect.fLeft = (pSpriteData->Rect).fLeft;
  (this->m_SpriteData).Rect.fTop = fVar2;
  fVar2 = (pSpriteData->Rect).fBottom;
  (this->m_SpriteData).Rect.fRight = (pSpriteData->Rect).fRight;
  (this->m_SpriteData).Rect.fBottom = fVar2;
  fVar2 = pSpriteData->fZ;
  (this->m_SpriteData).Color = pSpriteData->Color;
  (this->m_SpriteData).fZ = fVar2;
  (this->m_SpriteData).StLT = pSpriteData->StLT;
  (this->m_SpriteData).StRB = pSpriteData->StRB;
  uVar3 = *(undefined8 *)&pSpriteData->field_0x28;
  this->m_pTexture = pTexture;
  *(undefined8 *)&(this->m_SpriteData).field_0x28 = uVar3;
  if (pTexture == (CTexture *)0x0) {
    iVar9 = 6;
    this->m_iQWSizePacket = 5;
    iVar7 = 3;
    iVar4 = 4;
  }
  else {
    iVar9 = 0x16;
    this->m_iQWSizePacket = 7;
    iVar7 = 5;
    iVar4 = 2;
    lVar8 = 2;
    lVar6 = 4;
  }
  iVar1 = this->m_iQWSizePacket;
  (this->m_Header).qwVifCode[0] = 0;
  (this->m_Header).qwVifCode[2] = (int)&DAT_11000000;
  (this->m_Header).qwVifCode[1] = 0;
  puVar5 = &(this->m_Header).Gt;
  (this->m_Header).qwVifCode[3] = iVar1 - 1U | 0x50000000;
  (this->m_Rgbaq).R = (uint)*(byte *)&pSpriteData->Color;
  (this->m_Rgbaq).G = (uint)*(byte *)((int)&pSpriteData->Color + 1);
  (this->m_Rgbaq).B = (uint)*(byte *)((int)&pSpriteData->Color + 2);
  (this->m_Rgbaq).A = (uint)*(byte *)((int)&pSpriteData->Color + 3);
  *(ulong *)&(this->m_Header).field_0x18 =
       *(ulong *)&(this->m_Header).field_0x18 & 0xfffffffffff00000 | 1 | (long)iVar4 << 4 | 0x400 |
       lVar8 << 0xc | lVar6 << 0x10;
  *(ulong *)puVar5 =
       *(ulong *)puVar5 & 0x7fffffff8000 | 0x400000008001 | (long)iVar9 << 0x2f |
       (long)iVar7 << 0x3c;
  vScreenCoordLT[0] = (pSpriteData->Rect).fLeft;
  vScreenCoordLT[1] = (pSpriteData->Rect).fTop;
  vScreenCoordLT._8_8_ = ZEXT48((uint)pSpriteData->fZ);
  g3dCalcGsPrimitiveCoord__FP8sceGsXyzPCf(&this->m_GsXyzLT,vScreenCoordLT);
  vScreenCoordRB[0] = (pSpriteData->Rect).fRight;
  vScreenCoordRB[1] = (pSpriteData->Rect).fBottom;
  vScreenCoordRB._8_8_ = ZEXT48((uint)pSpriteData->fZ);
  g3dCalcGsPrimitiveCoord__FP8sceGsXyzPCf(&this->m_GsXyzRB,vScreenCoordRB);
  return 1;
}

void CSprite::Draw() {
	PACKETHEADER *pHeader;
	GIFPACKET_WITHOUTTEXTURE *pGifPacket;
	
  undefined *puVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  ulong *puVar6;
  undefined8 *puVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  float fVar11;
  
  g3dSetTexture__FiP8CTexture(0,this->m_pTexture);
  puVar7 = (undefined8 *)g3dDmaOpenPacket__Fv();
  puVar10 = puVar7 + 4;
  *puVar7 = *(undefined8 *)(this->m_Header).qwVifCode;
  puVar7[1] = *(undefined8 *)((this->m_Header).qwVifCode + 2);
  puVar7[2] = *(undefined8 *)&(this->m_Header).Gt;
  uVar9 = *(ulong *)&(this->m_Header).field_0x18;
  puVar7[3] = uVar9;
  if ((long)(int)this->m_pTexture == 0) {
    puVar1 = (undefined *)((int)&(this->m_Rgbaq).G + 3);
    uVar3 = (uint)puVar1 & 7;
    uVar4 = (uint)&this->m_Rgbaq & 7;
    uVar9 = (*(long *)(puVar1 + -uVar3) << (7 - uVar3) * 8 |
            uVar9 & 0xffffffffffffffffU >> (uVar3 + 1) * 8) & -1L << (8 - uVar4) * 8 |
            *(ulong *)((int)&this->m_Rgbaq - uVar4) >> uVar4 * 8;
    puVar1 = (undefined *)((int)&(this->m_Rgbaq).A + 3);
    uVar3 = (uint)puVar1 & 7;
    puVar2 = &(this->m_Rgbaq).B;
    uVar4 = (uint)puVar2 & 7;
    uVar8 = (*(long *)(puVar1 + -uVar3) << (7 - uVar3) * 8 |
            (long)(int)puVar10 & 0xffffffffffffffffU >> (uVar3 + 1) * 8) & -1L << (8 - uVar4) * 8 |
            *(ulong *)((int)puVar2 - uVar4) >> uVar4 * 8;
    uVar3 = (int)puVar7 + 0x27U & 7;
    puVar6 = (ulong *)(((int)puVar7 + 0x27U) - uVar3);
    *puVar6 = *puVar6 & -1L << (uVar3 + 1) * 8 | uVar9 >> (7 - uVar3) * 8;
    uVar3 = (uint)puVar10 & 7;
    *(ulong *)((int)puVar10 - uVar3) =
         uVar9 << uVar3 * 8 |
         *(ulong *)((int)puVar10 - uVar3) & 0xffffffffffffffffU >> (8 - uVar3) * 8;
    uVar3 = (int)puVar7 + 0x2fU & 7;
    puVar6 = (ulong *)(((int)puVar7 + 0x2fU) - uVar3);
    *puVar6 = *puVar6 & -1L << (uVar3 + 1) * 8 | uVar8 >> (7 - uVar3) * 8;
    uVar3 = (uint)(puVar7 + 5) & 7;
    puVar6 = (ulong *)((int)(puVar7 + 5) - uVar3);
    *puVar6 = uVar8 << uVar3 * 8 | *puVar6 & 0xffffffffffffffffU >> (8 - uVar3) * 8;
                    /* inlined from g3dMemory.h */
    *(undefined4 *)(puVar7 + 6) = 0;
    *(undefined4 *)((int)puVar7 + 0x34) = 0;
    *(undefined4 *)(puVar7 + 7) = 0;
    *(undefined4 *)((int)puVar7 + 0x3c) = 0;
                    /* end of inlined section */
    *(uint *)(puVar7 + 6) = (uint)*(ushort *)&this->m_GsXyzLT;
                    /* inlined from g3dMemory.h */
                    /* end of inlined section */
    *(uint *)((int)puVar7 + 0x34) = (uint)*(ushort *)&(this->m_GsXyzLT).field_0x2;
    iVar5 = *(int *)&(this->m_GsXyzLT).field_0x4;
                    /* inlined from g3dMemory.h */
    *(undefined4 *)(puVar7 + 8) = 0;
    *(undefined4 *)((int)puVar7 + 0x44) = 0;
    *(undefined4 *)(puVar7 + 9) = 0;
    *(undefined4 *)((int)puVar7 + 0x4c) = 0;
                    /* end of inlined section */
    *(int *)(puVar7 + 7) = iVar5 << 4;
    *(uint *)(puVar7 + 8) = (uint)*(ushort *)&this->m_GsXyzRB;
    *(uint *)((int)puVar7 + 0x44) = (uint)*(ushort *)&(this->m_GsXyzRB).field_0x2;
    *(int *)(puVar7 + 9) = *(int *)&(this->m_GsXyzRB).field_0x4 << 4;
  }
  else {
    puVar1 = (undefined *)((int)&(this->m_Rgbaq).G + 3);
    uVar3 = (uint)puVar1 & 7;
    uVar4 = (uint)&this->m_Rgbaq & 7;
    uVar8 = (*(long *)(puVar1 + -uVar3) << (7 - uVar3) * 8 |
            (long)(int)this->m_pTexture & 0xffffffffffffffffU >> (uVar3 + 1) * 8) &
            -1L << (8 - uVar4) * 8 | *(ulong *)((int)&this->m_Rgbaq - uVar4) >> uVar4 * 8;
    puVar1 = (undefined *)((int)&(this->m_Rgbaq).A + 3);
    uVar3 = (uint)puVar1 & 7;
    puVar2 = &(this->m_Rgbaq).B;
    uVar4 = (uint)puVar2 & 7;
    uVar9 = (*(long *)(puVar1 + -uVar3) << (7 - uVar3) * 8 |
            uVar9 & 0xffffffffffffffffU >> (uVar3 + 1) * 8) & -1L << (8 - uVar4) * 8 |
            *(ulong *)((int)puVar2 - uVar4) >> uVar4 * 8;
    uVar3 = (int)puVar7 + 0x27U & 7;
    puVar6 = (ulong *)(((int)puVar7 + 0x27U) - uVar3);
    *puVar6 = *puVar6 & -1L << (uVar3 + 1) * 8 | uVar8 >> (7 - uVar3) * 8;
    uVar3 = (uint)puVar10 & 7;
    *(ulong *)((int)puVar10 - uVar3) =
         uVar8 << uVar3 * 8 |
         *(ulong *)((int)puVar10 - uVar3) & 0xffffffffffffffffU >> (8 - uVar3) * 8;
    uVar3 = (int)puVar7 + 0x2fU & 7;
    puVar6 = (ulong *)(((int)puVar7 + 0x2fU) - uVar3);
    *puVar6 = *puVar6 & -1L << (uVar3 + 1) * 8 | uVar9 >> (7 - uVar3) * 8;
    uVar3 = (uint)(puVar7 + 5) & 7;
    puVar6 = (ulong *)((int)(puVar7 + 5) - uVar3);
    *puVar6 = uVar9 << uVar3 * 8 | *puVar6 & 0xffffffffffffffffU >> (8 - uVar3) * 8;
                    /* inlined from g3dMemory.h */
    *(undefined4 *)(puVar7 + 6) = 0;
    *(undefined4 *)((int)puVar7 + 0x34) = 0;
    *(undefined4 *)(puVar7 + 7) = 0;
    *(undefined4 *)((int)puVar7 + 0x3c) = 0;
                    /* end of inlined section */
    fVar11 = (this->m_SpriteData).StLT.S;
                    /* inlined from g3dMemory.h */
    *(undefined4 *)(puVar7 + 8) = 0;
    *(undefined4 *)((int)puVar7 + 0x44) = 0;
    *(undefined4 *)(puVar7 + 9) = 0;
    *(undefined4 *)((int)puVar7 + 0x4c) = 0;
                    /* end of inlined section */
    *(float *)(puVar7 + 6) = fVar11;
    fVar11 = (this->m_SpriteData).StLT.T;
    *(undefined4 *)(puVar7 + 7) = 0x3f800000;
    *(float *)((int)puVar7 + 0x34) = fVar11;
    fVar11 = (this->m_SpriteData).StRB.S;
    *(uint *)(puVar7 + 8) = (uint)*(ushort *)&this->m_GsXyzLT;
    *(uint *)((int)puVar7 + 0x44) = (uint)*(ushort *)&(this->m_GsXyzLT).field_0x2;
                    /* inlined from g3dMemory.h */
                    /* end of inlined section */
    iVar5 = *(int *)&(this->m_GsXyzLT).field_0x4;
    *(float *)(puVar7 + 10) = fVar11;
                    /* inlined from g3dMemory.h */
    *(undefined4 *)(puVar7 + 10) = 0;
    *(undefined4 *)((int)puVar7 + 0x54) = 0;
    *(undefined4 *)(puVar7 + 0xb) = 0;
    *(undefined4 *)((int)puVar7 + 0x5c) = 0;
                    /* end of inlined section */
    fVar11 = (this->m_SpriteData).StRB.T;
                    /* inlined from g3dMemory.h */
    *(undefined4 *)(puVar7 + 0xc) = 0;
    *(undefined4 *)((int)puVar7 + 100) = 0;
    *(undefined4 *)(puVar7 + 0xd) = 0;
    *(undefined4 *)((int)puVar7 + 0x6c) = 0;
                    /* end of inlined section */
    *(int *)(puVar7 + 9) = iVar5 << 4;
    *(float *)((int)puVar7 + 0x54) = fVar11;
    *(undefined4 *)(puVar7 + 0xb) = 0x3f800000;
    *(uint *)(puVar7 + 0xc) = (uint)*(ushort *)&this->m_GsXyzRB;
    *(uint *)((int)puVar7 + 100) = (uint)*(ushort *)&(this->m_GsXyzRB).field_0x2;
    *(int *)(puVar7 + 0xd) = *(int *)&(this->m_GsXyzRB).field_0x4 << 4;
  }
  g3dDmaClosePacket__FPCv(puVar7 + this->m_iQWSizePacket * 2);
  return;
}

type_info& CSprite type_info function() {
  this->__vtable = (CSprite__vtable *)_vt_7CSprite;
  memset(&this->m_Header,0,0x20);
  return;
}

void CSprite::~CSprite(int __in_chrg) {
  this->__vtable = (CSprite__vtable *)_vt_7CSprite;
  memset(&this->m_Header,0,0x20);
  return;
}
