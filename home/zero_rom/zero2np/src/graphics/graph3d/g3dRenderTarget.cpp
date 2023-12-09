// STATUS: NOT STARTED

#include "g3dRenderTarget.h"

struct CRenderTarget : IG3DCompatible {
private:
	sceGsTex0 m_gsTex0;
	CAutoGsRegisters<3> m_AutoGsRegisters;
	CAutoTransform<G3DTS_VIEW> m_AutoTransformView;
	G3DCOLOR m_ClearColor;
	float m_fZMax;
public:
	__vtbl_ptr_type *__vtable;
	
	CRenderTarget& operator=();
	CRenderTarget();
	CRenderTarget();
	/* vtable[1] */ virtual CRenderTarget();
	int Create(RENDERTARGETCREATIONDATA *pCD);
	void Begin();
	void End();
	void Clear();
	void Clear();
	void SetClearColor(G3DCOLOR Color);
	void SetWidth(int iWidth);
	void SetHeight(int iHeight);
	int GetWidth();
	int GetHeight();
	sceGsTex0& GetGsTex0Ref();
};

struct CAutoTransform<G3DTS_VIEW> : IAutoState {
private:
	float m_mat[4][4];
	
public:
	CAutoTransform<G3DTS_VIEW>& operator=();
	CAutoTransform();
	CAutoTransform();
	CAutoTransform();
	/* vtable[1] */ virtual CAutoTransform(CAutoTransform<G3DTS_VIEW>*, int, void);
	void Push();
	/* vtable[2] */ virtual void Pop();
};

struct CAutoGsRegisters<3> : IAutoState {
private:
	sceGifPackAd m_aGPA[3];
	
public:
	CAutoGsRegisters<3>& operator=();
	CAutoGsRegisters();
	CAutoGsRegisters();
	CAutoGsRegisters();
	/* vtable[1] */ virtual CAutoGsRegisters(CAutoGsRegisters<3>*, int, void);
	void Push();
	/* vtable[2] */ virtual void Pop();
	u_long& operator[]();
};

struct IAutoState : IG3DCompatible {
private:
	int m_iNumStack;
public:
	__vtbl_ptr_type *__vtable;
	
	IAutoState& operator=();
	IAutoState();
protected:
	int PushStack();
	int PopStack();
	int GetNumStack();
public:
	IAutoState();
	/* vtable[1] */ virtual IAutoState(IAutoState*, int, void);
};

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

__vtbl_ptr_type CRenderTarget virtual table[3] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ 0x2b6370,
		/* .__delta2 = */ 25456
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ CRenderTarget::~CRenderTarget,
		/* .__delta2 = */ 18792
	},
	/* [2] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	}
};

__vtbl_ptr_type CAutoTransform<0> virtual table[4] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ 0x2b6320,
		/* .__delta2 = */ 25376
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ 0x2b64c0,
		/* .__delta2 = */ 25792
	},
	/* [2] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ 0x2b6608,
		/* .__delta2 = */ 26120
	},
	/* [3] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	}
};

__vtbl_ptr_type CAutoGsRegisters<3> virtual table[4] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ 0x2b62d0,
		/* .__delta2 = */ 25296
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ 0x2b6448,
		/* .__delta2 = */ 25672
	},
	/* [2] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ 0x2b6538,
		/* .__delta2 = */ 25912
	},
	/* [3] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	}
};

__vtbl_ptr_type IAutoState virtual table[3] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ 0x2b6248,
		/* .__delta2 = */ 25160
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ 0x2b6298,
		/* .__delta2 = */ 25240
	},
	/* [2] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	}
};

unsigned char IAutoState type_info node[12];
unsigned char CAutoGsRegisters<3> type_info node[12];
unsigned char CAutoTransform<0> type_info node[12];
unsigned char CRenderTarget type_info node[12];
unsigned char CSprite type_info node[8];
unsigned char IG3DCompatible type_info node[8];

CRenderTarget* CRenderTarget::CRenderTarget() {
	CAutoGsRegisters<3> *this;
	CAutoTransform<G3DTS_VIEW> *this;
	
  type_info *ptVar1;
  
                    /* inlined from g3dAutoState.h */
                    /* end of inlined section */
  this[2].field0_0x0.__vtable = (IAutoState__vtable *)_vt_13CRenderTarget;
                    /* inlined from g3dAutoState.h */
  this->m_mat[1] = 0.0;
  this->m_mat[2] = (float)_vt_t16CAutoGsRegisters1i3;
  ptVar1 = (type_info *)memset(this->m_mat[1],0,0x30);
                    /* end of inlined section */
                    /* inlined from g3dAutoState.h */
                    /* end of inlined section */
                    /* inlined from g3dAutoState.h */
  this[1].field0_0x0.m_iNumStack = 0;
  this[1].field0_0x0.__vtable = (IAutoState__vtable *)_vt_t14CAutoTransform121G3DTRANSFORMSTATETYPE0
  ;
                    /* end of inlined section */
  return ptVar1;
}

void CRenderTarget::~CRenderTarget(int __in_chrg) {
	CAutoTransform<G3DTS_VIEW> *this;
	CAutoGsRegisters<3> *this;
	
  IAutoState__vtable *pIVar1;
  
                    /* inlined from g3dAutoState.h */
                    /* end of inlined section */
                    /* inlined from g3dAutoState.h */
                    /* end of inlined section */
                    /* inlined from g3dAutoState.h */
                    /* end of inlined section */
  this->__vtable = (CRenderTarget__vtable *)_vt_13CRenderTarget;
                    /* inlined from g3dAutoState.h */
                    /* end of inlined section */
                    /* inlined from g3dAutoState.h */
  pIVar1 = (this->m_AutoTransformView).field0_0x0.__vtable;
  (*(code *)pIVar1[2].IAutoState)
            (&(((CAutoTransform<G3DTS_VIEW> *)(this->m_AutoTransformView).m_mat[-1])->field0_0x0).
              field_0x0 + *(short *)(pIVar1 + 2));
  (this->m_AutoTransformView).field0_0x0.__vtable = (IAutoState__vtable *)_vt_10IAutoState;
  pIVar1 = (this->m_AutoGsRegisters).field0_0x0.__vtable;
  (*(code *)pIVar1[2].IAutoState)
            (&(((CAutoGsRegisters<3> *)((this->m_AutoGsRegisters).m_aGPA + -1))->field0_0x0).
              field_0x0 + *(short *)(pIVar1 + 2));
                    /* end of inlined section */
  (this->m_AutoGsRegisters).field0_0x0.__vtable = (IAutoState__vtable *)_vt_10IAutoState;
  if ((__in_chrg & 1U) != 0) {
    __builtin_delete(this);
    return;
  }
  return;
}

int CRenderTarget::Create(RENDERTARGETCREATIONDATA *pCD) {
	static char __FUNCTION__[7] = {
		/* [0] = */ 67,
		/* [1] = */ 114,
		/* [2] = */ 101,
		/* [3] = */ 97,
		/* [4] = */ 116,
		/* [5] = */ 101,
		/* [6] = */ 0
	};
	
  uint uVar1;
  
  if (pCD == (RENDERTARGETCREATIONDATA *)0x0) {
    _SetLineInfo__FPCciT0T0("g3dRenderTarget.cpp",0x3b,__FUNCTION___685,&DAT_003f0d38);
    g3ddbgAssert__FbPCce(false,&DAT_003f0d40);
  }
  this->m_gsTex0 = pCD->gsTex0;
  uVar1 = pCD->ClearColor;
  this->m_fZMax = pCD->fZMax;
  this->m_ClearColor = uVar1;
  return 1;
}

void CRenderTarget::Begin() {
	int iWidth;
	int iHeight;
	sceGifPackAd aGPA0[3];
	CAutoGsRegisters<3> *this;
	sceGifPackAd *aGPA;
	int i;
	
  bool bVar1;
  undefined1 *puVar2;
  int iVar3;
  int iVar4;
  ulong *puVar5;
  int iVar6;
  int *piVar7;
  _sceGifPackAd aGPA0 [3];
  
                    /* inlined from g3dCore.h */
                    /* end of inlined section */
                    /* inlined from g3dCore.h */
                    /* end of inlined section */
                    /* inlined from g3dAutoState.h */
                    /* end of inlined section */
                    /* inlined from g3dCore.h */
                    /* end of inlined section */
                    /* inlined from g3dCore.h */
  (*(code *)_14IG3DCompatible_s_pFuncSetGsRegister)(0,0x3f,1);
                    /* end of inlined section */
  iVar3 = GetWidth__13CRenderTarget(this);
  iVar4 = GetHeight__13CRenderTarget(this);
  iVar6 = iVar3;
  if (iVar3 < 0) {
    iVar6 = iVar3 + 0x3f;
  }
  aGPA0[0].DATA =
       ((ulong)this->m_gsTex0 & 0x3fff) >> 5 | (long)(iVar6 >> 6) << 0x10 |
       ((ulong)this->m_gsTex0 >> 0x14 & 0x3f) << 0x18;
                    /* inlined from g3dAutoState.h */
                    /* end of inlined section */
  aGPA0[0].ADDR = 0x4c;
  aGPA0[1].DATA = (long)((0x800 - iVar3 / 2) * 0x10) | (long)((0x800 - iVar4 / 2) * 0x10) << 0x20;
  aGPA0[1].ADDR = 0x18;
  aGPA0[2].DATA = (long)(iVar3 + -1) << 0x10 | (long)(iVar4 + -1) << 0x30;
  aGPA0[2].ADDR = 0x40;
                    /* inlined from g3dAutoState.h */
  bVar1 = (this->m_AutoGsRegisters).field0_0x0.m_iNumStack < 1;
  if (bVar1) {
    piVar7 = &(this->m_AutoGsRegisters).field0_0x0.m_iNumStack;
    *piVar7 = *piVar7 + 1;
  }
  else {
    _SetLineInfo__FPCciT0T0("g3dAutoState.h",0x36,"PushStack","(m_iNumStack < MAX_STACK)");
    g3ddbgWarning__FbPCce((this->m_AutoGsRegisters).field0_0x0.m_iNumStack < 1,"Stack overflow");
    g3ddbgPrintf__FPCce("[G3DRETURN:%d]%s(%d)(%s):%s\n");
  }
  iVar6 = 0;
  if (bVar1) {
    do {
      puVar2 = _14IG3DCompatible_s_pFuncGetGsRegisterRef;
      iVar3 = iVar6 + 1;
                    /* inlined from g3dCore.h */
                    /* inlined from g3dAutoState.h */
                    /* inlined from g3dCore.h */
      (this->m_AutoGsRegisters).m_aGPA[iVar6].ADDR = aGPA0[iVar6].ADDR;
      puVar5 = (ulong *)(*(code *)puVar2)();
                    /* inlined from g3dAutoState.h */
                    /* inlined from g3dCore.h */
                    /* inlined from g3dAutoState.h */
      (this->m_AutoGsRegisters).m_aGPA[iVar6].DATA = *puVar5;
      iVar6 = iVar3;
    } while (iVar3 < 3);
                    /* inlined from g3dCore.h */
    (*(code *)_14IG3DCompatible_s_pFuncSetGsRegisters)(aGPA0,3,1);
  }
  return;
}

void CRenderTarget::End() {
	CAutoGsRegisters<3> *this;
	
  int *piVar1;
  
                    /* inlined from g3dAutoState.h */
                    /* end of inlined section */
                    /* inlined from g3dAutoState.h */
  piVar1 = &(this->m_AutoGsRegisters).field0_0x0.m_iNumStack;
  if ((this->m_AutoGsRegisters).field0_0x0.m_iNumStack < 1) {
    _SetLineInfo__FPCciT0T0("g3dAutoState.h",0x3e,"PopStack","(m_iNumStack > 0)");
    g3ddbgWarning__FbPCce(0 < (this->m_AutoGsRegisters).field0_0x0.m_iNumStack,"Stack underflow");
    g3ddbgPrintf__FPCce("[G3DRETURN:%d]%s(%d)(%s):%s\n");
  }
  else {
    *piVar1 = *piVar1 + -1;
                    /* inlined from g3dCore.h */
    (*(code *)_14IG3DCompatible_s_pFuncSetGsRegisters)((this->m_AutoGsRegisters).m_aGPA,3,1);
  }
  return;
}

void CRenderTarget::Clear(G3DCOLOR Color) {
	int iHeight;
	int iWidth;
	long unsigned int ulScissor;
	float fScreenWidthHalf;
	float fScreenHeightHalf;
	CSprite sprite;
	G3DSPRITEDATA spritedata;
	
  ulong uVar1;
  int __in_chrg;
  int iVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  ulong ulScissor;
  CSprite sprite;
  G3DSPRITEDATA spritedata;
  float local_70;
  float fStack_6c;
  float local_68;
  float fStack_64;
  uint local_60;
  float fStack_5c;
  sceGsSt local_58;
  sceGsSt local_50;
  undefined8 local_48;
  
  __in_chrg = 1;
  iVar3 = 1 << ((uint)((ulong)this->m_gsTex0 >> 0x1a) & 0xf);
  iVar2 = 1 << ((uint)((ulong)this->m_gsTex0 >> 0x1e) & 0xf);
  uVar1 = (long)(iVar3 + -1) << 0x10;
  fVar4 = __floatdisf(((uVar1 & 0x7ff0000) >> 0x10) + 1);
  uVar1 = (((uVar1 | (long)(iVar2 + -1) << 0x30) >> 0x30 & 0x7ff) -
          ((uVar1 & 0x7ff00000000) >> 0x20)) + 1;
  fVar4 = fVar4 * 0.5;
  if ((long)uVar1 < 0) {
    fVar5 = __floatdisf(uVar1 & 1 | uVar1 >> 1);
    fVar5 = fVar5 + fVar5;
  }
  else {
    fVar5 = __floatdisf(uVar1);
  }
  ___7CSprite(&sprite,__in_chrg);
  memset(&local_70,0,0x30);
  fStack_6c = (float)(iVar2 / 2);
  fStack_5c = this->m_fZMax;
  fStack_64 = fVar5 * 0.5 + fStack_6c;
  spritedata.fZ = fStack_5c;
  spritedata.Color = local_60;
  local_70 = fVar4 - fStack_6c;
  local_68 = fVar4 + (float)(iVar3 / 2);
  fStack_6c = fVar5 * 0.5 - fStack_6c;
  spritedata.Rect.fBottom = fStack_64;
  spritedata.Rect.fRight = local_68;
  spritedata.Rect.fTop = fStack_6c;
  spritedata.Rect.fLeft = local_70;
  spritedata.StLT = local_58;
  spritedata.StRB = local_50;
  spritedata._40_8_ = local_48;
  Create__7CSpritePC13G3DSPRITEDATAP8CTexture(&sprite,&spritedata,(CTexture *)0x0);
  Draw__7CSprite(&sprite);
  return;
}

void CRenderTarget::Clear() {
  Clear__13CRenderTargetUi(this,this->m_ClearColor);
  return;
}

void CRenderTarget::SetWidth(int iWidth) {
  int iVar1;
  
  iVar1 = g3dLogi2__Fii(2,iWidth);
  this->m_gsTex0 =
       (sceGsTex0)((ulong)this->m_gsTex0 & 0xffffffffc3ffffff | ((long)iVar1 & 0xfU) << 0x1a);
  return;
}

void CRenderTarget::SetHeight(int iHeight) {
  int iVar1;
  
  iVar1 = g3dLogi2__Fii(2,iHeight);
  this->m_gsTex0 =
       (sceGsTex0)((ulong)this->m_gsTex0 & 0xfffffffc3fffffff | ((long)iVar1 & 0xfU) << 0x1e);
  return;
}

int CRenderTarget::GetWidth() {
  return 1 << ((uint)((ulong)this->m_gsTex0 >> 0x1a) & 0xf);
}

int CRenderTarget::GetHeight() {
  return 1 << ((uint)((ulong)this->m_gsTex0 >> 0x1e) & 0xf);
}

type_info& IAutoState type_info function() {
  type_info *ptVar1;
  
                    /* inlined from g3dAutoState.h */
                    /* end of inlined section */
  this[2].field0_0x0.__vtable = (IAutoState__vtable *)_vt_13CRenderTarget;
                    /* inlined from g3dAutoState.h */
  this->m_mat[1] = 0.0;
  this->m_mat[2] = (float)_vt_t16CAutoGsRegisters1i3;
  ptVar1 = (type_info *)memset(this->m_mat[1],0,0x30);
                    /* end of inlined section */
                    /* inlined from g3dAutoState.h */
                    /* end of inlined section */
                    /* inlined from g3dAutoState.h */
  this[1].field0_0x0.m_iNumStack = 0;
  this[1].field0_0x0.__vtable = (IAutoState__vtable *)_vt_t14CAutoTransform121G3DTRANSFORMSTATETYPE0
  ;
                    /* end of inlined section */
  return ptVar1;
}

void IAutoState::~IAutoState(int __in_chrg) {
  type_info *ptVar1;
  
                    /* inlined from g3dAutoState.h */
                    /* end of inlined section */
  this[2].field0_0x0.__vtable = (IAutoState__vtable *)_vt_13CRenderTarget;
                    /* inlined from g3dAutoState.h */
  this->m_mat[1] = 0.0;
  this->m_mat[2] = (float)_vt_t16CAutoGsRegisters1i3;
  ptVar1 = (type_info *)memset(this->m_mat[1],0,0x30);
                    /* end of inlined section */
                    /* inlined from g3dAutoState.h */
                    /* end of inlined section */
                    /* inlined from g3dAutoState.h */
  this[1].field0_0x0.m_iNumStack = 0;
  this[1].field0_0x0.__vtable = (IAutoState__vtable *)_vt_t14CAutoTransform121G3DTRANSFORMSTATETYPE0
  ;
                    /* end of inlined section */
  return ptVar1;
}

type_info& CAutoGsRegisters<3> type_info function() {
  type_info *ptVar1;
  
                    /* inlined from g3dAutoState.h */
                    /* end of inlined section */
  this[2].field0_0x0.__vtable = (IAutoState__vtable *)_vt_13CRenderTarget;
                    /* inlined from g3dAutoState.h */
  this->m_mat[1] = 0.0;
  this->m_mat[2] = (float)_vt_t16CAutoGsRegisters1i3;
  ptVar1 = (type_info *)memset(this->m_mat[1],0,0x30);
                    /* end of inlined section */
                    /* inlined from g3dAutoState.h */
                    /* end of inlined section */
                    /* inlined from g3dAutoState.h */
  this[1].field0_0x0.m_iNumStack = 0;
  this[1].field0_0x0.__vtable = (IAutoState__vtable *)_vt_t14CAutoTransform121G3DTRANSFORMSTATETYPE0
  ;
                    /* end of inlined section */
  return ptVar1;
}

type_info& CAutoTransform<0> type_info function() {
  type_info *ptVar1;
  
                    /* inlined from g3dAutoState.h */
                    /* end of inlined section */
  this[2].field0_0x0.__vtable = (IAutoState__vtable *)_vt_13CRenderTarget;
                    /* inlined from g3dAutoState.h */
  this->m_mat[1] = 0.0;
  this->m_mat[2] = (float)_vt_t16CAutoGsRegisters1i3;
  ptVar1 = (type_info *)memset(this->m_mat[1],0,0x30);
                    /* end of inlined section */
                    /* inlined from g3dAutoState.h */
                    /* end of inlined section */
                    /* inlined from g3dAutoState.h */
  this[1].field0_0x0.m_iNumStack = 0;
  this[1].field0_0x0.__vtable = (IAutoState__vtable *)_vt_t14CAutoTransform121G3DTRANSFORMSTATETYPE0
  ;
                    /* end of inlined section */
  return ptVar1;
}

type_info& CRenderTarget type_info function() {
  type_info *ptVar1;
  
                    /* inlined from g3dAutoState.h */
                    /* end of inlined section */
  this[2].field0_0x0.__vtable = (IAutoState__vtable *)_vt_13CRenderTarget;
                    /* inlined from g3dAutoState.h */
  this->m_mat[1] = 0.0;
  this->m_mat[2] = (float)_vt_t16CAutoGsRegisters1i3;
  ptVar1 = (type_info *)memset(this->m_mat[1],0,0x30);
                    /* end of inlined section */
                    /* inlined from g3dAutoState.h */
                    /* end of inlined section */
                    /* inlined from g3dAutoState.h */
  this[1].field0_0x0.m_iNumStack = 0;
  this[1].field0_0x0.__vtable = (IAutoState__vtable *)_vt_t14CAutoTransform121G3DTRANSFORMSTATETYPE0
  ;
                    /* end of inlined section */
  return ptVar1;
}

void CRenderTarget::SetClearColor(G3DCOLOR Color) {
  type_info *ptVar1;
  
                    /* inlined from g3dAutoState.h */
                    /* end of inlined section */
  this[2].field0_0x0.__vtable = (IAutoState__vtable *)_vt_13CRenderTarget;
                    /* inlined from g3dAutoState.h */
  this->m_mat[1] = 0.0;
  this->m_mat[2] = (float)_vt_t16CAutoGsRegisters1i3;
  ptVar1 = (type_info *)memset(this->m_mat[1],0,0x30);
                    /* end of inlined section */
                    /* inlined from g3dAutoState.h */
                    /* end of inlined section */
                    /* inlined from g3dAutoState.h */
  this[1].field0_0x0.m_iNumStack = 0;
  this[1].field0_0x0.__vtable = (IAutoState__vtable *)_vt_t14CAutoTransform121G3DTRANSFORMSTATETYPE0
  ;
                    /* end of inlined section */
  return ptVar1;
}

sceGsTex0& CRenderTarget::GetGsTex0Ref() {
  type_info *ptVar1;
  
                    /* inlined from g3dAutoState.h */
                    /* end of inlined section */
  this[2].field0_0x0.__vtable = (IAutoState__vtable *)_vt_13CRenderTarget;
                    /* inlined from g3dAutoState.h */
  this->m_mat[1] = 0.0;
  this->m_mat[2] = (float)_vt_t16CAutoGsRegisters1i3;
  ptVar1 = (type_info *)memset(this->m_mat[1],0,0x30);
                    /* end of inlined section */
                    /* inlined from g3dAutoState.h */
                    /* end of inlined section */
                    /* inlined from g3dAutoState.h */
  this[1].field0_0x0.m_iNumStack = 0;
  this[1].field0_0x0.__vtable = (IAutoState__vtable *)_vt_t14CAutoTransform121G3DTRANSFORMSTATETYPE0
  ;
                    /* end of inlined section */
  return ptVar1;
}

type_info& CSprite type_info function() {
  type_info *ptVar1;
  
                    /* inlined from g3dAutoState.h */
                    /* end of inlined section */
  this[2].field0_0x0.__vtable = (IAutoState__vtable *)_vt_13CRenderTarget;
                    /* inlined from g3dAutoState.h */
  this->m_mat[1] = 0.0;
  this->m_mat[2] = (float)_vt_t16CAutoGsRegisters1i3;
  ptVar1 = (type_info *)memset(this->m_mat[1],0,0x30);
                    /* end of inlined section */
                    /* inlined from g3dAutoState.h */
                    /* end of inlined section */
                    /* inlined from g3dAutoState.h */
  this[1].field0_0x0.m_iNumStack = 0;
  this[1].field0_0x0.__vtable = (IAutoState__vtable *)_vt_t14CAutoTransform121G3DTRANSFORMSTATETYPE0
  ;
                    /* end of inlined section */
  return ptVar1;
}

void CSprite::~CSprite(int __in_chrg) {
  type_info *ptVar1;
  
                    /* inlined from g3dAutoState.h */
                    /* end of inlined section */
  this[2].field0_0x0.__vtable = (IAutoState__vtable *)_vt_13CRenderTarget;
                    /* inlined from g3dAutoState.h */
  this->m_mat[1] = 0.0;
  this->m_mat[2] = (float)_vt_t16CAutoGsRegisters1i3;
  ptVar1 = (type_info *)memset(this->m_mat[1],0,0x30);
                    /* end of inlined section */
                    /* inlined from g3dAutoState.h */
                    /* end of inlined section */
                    /* inlined from g3dAutoState.h */
  this[1].field0_0x0.m_iNumStack = 0;
  this[1].field0_0x0.__vtable = (IAutoState__vtable *)_vt_t14CAutoTransform121G3DTRANSFORMSTATETYPE0
  ;
                    /* end of inlined section */
  return ptVar1;
}

void CAutoGsRegisters<3>::~CAutoGsRegisters(int __in_chrg) {
  type_info *ptVar1;
  
                    /* inlined from g3dAutoState.h */
                    /* end of inlined section */
  this[2].field0_0x0.__vtable = (IAutoState__vtable *)_vt_13CRenderTarget;
                    /* inlined from g3dAutoState.h */
  this->m_mat[1] = 0.0;
  this->m_mat[2] = (float)_vt_t16CAutoGsRegisters1i3;
  ptVar1 = (type_info *)memset(this->m_mat[1],0,0x30);
                    /* end of inlined section */
                    /* inlined from g3dAutoState.h */
                    /* end of inlined section */
                    /* inlined from g3dAutoState.h */
  this[1].field0_0x0.m_iNumStack = 0;
  this[1].field0_0x0.__vtable = (IAutoState__vtable *)_vt_t14CAutoTransform121G3DTRANSFORMSTATETYPE0
  ;
                    /* end of inlined section */
  return ptVar1;
}

void CAutoTransform<0>::~CAutoTransform(int __in_chrg) {
  type_info *ptVar1;
  
                    /* inlined from g3dAutoState.h */
                    /* end of inlined section */
  this[2].field0_0x0.__vtable = (IAutoState__vtable *)_vt_13CRenderTarget;
                    /* inlined from g3dAutoState.h */
  this->m_mat[1] = 0.0;
  this->m_mat[2] = (float)_vt_t16CAutoGsRegisters1i3;
  ptVar1 = (type_info *)memset(this->m_mat[1],0,0x30);
                    /* end of inlined section */
                    /* inlined from g3dAutoState.h */
                    /* end of inlined section */
                    /* inlined from g3dAutoState.h */
  this[1].field0_0x0.m_iNumStack = 0;
  this[1].field0_0x0.__vtable = (IAutoState__vtable *)_vt_t14CAutoTransform121G3DTRANSFORMSTATETYPE0
  ;
                    /* end of inlined section */
  return ptVar1;
}

void CAutoGsRegisters<3>::Pop() {
  type_info *ptVar1;
  
                    /* inlined from g3dAutoState.h */
                    /* end of inlined section */
  this[2].field0_0x0.__vtable = (IAutoState__vtable *)_vt_13CRenderTarget;
                    /* inlined from g3dAutoState.h */
  this->m_mat[1] = 0.0;
  this->m_mat[2] = (float)_vt_t16CAutoGsRegisters1i3;
  ptVar1 = (type_info *)memset(this->m_mat[1],0,0x30);
                    /* end of inlined section */
                    /* inlined from g3dAutoState.h */
                    /* end of inlined section */
                    /* inlined from g3dAutoState.h */
  this[1].field0_0x0.m_iNumStack = 0;
  this[1].field0_0x0.__vtable = (IAutoState__vtable *)_vt_t14CAutoTransform121G3DTRANSFORMSTATETYPE0
  ;
                    /* end of inlined section */
  return ptVar1;
}

void CAutoTransform<0>::Pop() {
  type_info *ptVar1;
  
                    /* inlined from g3dAutoState.h */
                    /* end of inlined section */
  this[2].field0_0x0.__vtable = (IAutoState__vtable *)_vt_13CRenderTarget;
                    /* inlined from g3dAutoState.h */
  this->m_mat[1] = 0.0;
  this->m_mat[2] = (float)_vt_t16CAutoGsRegisters1i3;
  ptVar1 = (type_info *)memset(this->m_mat[1],0,0x30);
                    /* end of inlined section */
                    /* inlined from g3dAutoState.h */
                    /* end of inlined section */
                    /* inlined from g3dAutoState.h */
  this[1].field0_0x0.m_iNumStack = 0;
  this[1].field0_0x0.__vtable = (IAutoState__vtable *)_vt_t14CAutoTransform121G3DTRANSFORMSTATETYPE0
  ;
                    /* end of inlined section */
  return ptVar1;
}

type_info& IG3DCompatible type_info function() {
  type_info *ptVar1;
  
                    /* inlined from g3dAutoState.h */
                    /* end of inlined section */
  this[2].field0_0x0.__vtable = (IAutoState__vtable *)_vt_13CRenderTarget;
                    /* inlined from g3dAutoState.h */
  this->m_mat[1] = 0.0;
  this->m_mat[2] = (float)_vt_t16CAutoGsRegisters1i3;
  ptVar1 = (type_info *)memset(this->m_mat[1],0,0x30);
                    /* end of inlined section */
                    /* inlined from g3dAutoState.h */
                    /* end of inlined section */
                    /* inlined from g3dAutoState.h */
  this[1].field0_0x0.m_iNumStack = 0;
  this[1].field0_0x0.__vtable = (IAutoState__vtable *)_vt_t14CAutoTransform121G3DTRANSFORMSTATETYPE0
  ;
                    /* end of inlined section */
  return ptVar1;
}
