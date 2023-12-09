// STATUS: NOT STARTED

#include "g3dTexture.h"

struct CTexture : IG3DResource {
private:
	sceGsLoadImage m_gsLoadImage;
	G3DTEXTUREDATA m_TextureData;
	unsigned char *m_pbyData;
	int m_iSize;
	
public:
	CTexture& operator=();
	CTexture();
	CTexture();
	/* vtable[1] */ virtual CTexture();
	int Create(G3DTEXTUREDATA *pTextureData);
	G3DTEXTUREDATA& GetTextureDataRef();
	unsigned char* GetImage();
	int GetSize();
	/* vtable[2] */ virtual void PreLoad();
};

struct IG3DResource {
protected:
	G3DRESOURCETYPE m_Type;
public:
	__vtbl_ptr_type *__vtable;
	
	IG3DResource& operator=();
	IG3DResource();
	static void* operator new(/* parameters unknown */);
	static void* operator new [](/* parameters unknown */);
	static void operator delete(/* parameters unknown */);
	static void operator delete [](/* parameters unknown */);
	IG3DResource();
	IG3DResource();
	/* vtable[1] */ virtual IG3DResource(IG3DResource*, int, void);
	G3DRESOURCETYPE GetType();
	/* vtable[2] */ virtual void PreLoad();
};

__vtbl_ptr_type CTexture virtual table[4] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ 0x2b6798,
		/* .__delta2 = */ 26520
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ 0x2b67e8,
		/* .__delta2 = */ 26600
	},
	/* [2] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ CTexture::PreLoad,
		/* .__delta2 = */ 22080
	},
	/* [3] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	}
};

__vtbl_ptr_type IG3DResource virtual table[4] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ 0x2b6718,
		/* .__delta2 = */ 26392
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ 0x2b6758,
		/* .__delta2 = */ 26456
	},
	/* [2] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ 0x2b6790,
		/* .__delta2 = */ 26512
	},
	/* [3] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	}
};

unsigned char IG3DResource type_info node[8];
unsigned char CTexture type_info node[12];

CTexture* CTexture::CTexture() {
  void *pvVar1;
  
                    /* inlined from g3dResource.h */
                    /* end of inlined section */
                    /* inlined from g3dResource.h */
  (this->field0_0x0).m_Type = G3DRTYPE_TEXTURE;
                    /* end of inlined section */
  (this->field0_0x0).__vtable = (IG3DResource__vtable *)_vt_8CTexture;
  memset(&this->m_gsLoadImage,0,0x60);
  pvVar1 = memset(&this->m_TextureData,0,0x10);
  this->m_iSize = 0;
  this->m_pbyData = (uchar *)0x0;
                    /* end of inlined section */
  return (int)pvVar1;
}

int CTexture::Create(G3DTEXTUREDATA *pTextureData) {
	static char __FUNCTION__[7] = {
		/* [0] = */ 67,
		/* [1] = */ 114,
		/* [2] = */ 101,
		/* [3] = */ 97,
		/* [4] = */ 116,
		/* [5] = */ 101,
		/* [6] = */ 0
	};
	
  if (pTextureData == (G3DTEXTUREDATA *)0x0) {
    _SetLineInfo__FPCciT0T0("g3dTexture.cpp",0x30,__FUNCTION___631,"pTextureData");
    g3ddbgAssert__FbPCce(false,&DAT_003f0d60);
  }
  (this->m_TextureData).l.lTex0 = (pTextureData->l).lTex0;
  (this->m_TextureData).l.lTex1 = (pTextureData->l).lTex1;
  return 1;
}

void CTexture::PreLoad() {
  if (this->m_pbyData != (uchar *)0x0) {
    sceGsExecLoadImage(&this->m_gsLoadImage,this->m_pbyData);
  }
  return;
}

type_info& IG3DResource type_info function() {
  void *pvVar1;
  
                    /* inlined from g3dResource.h */
                    /* end of inlined section */
                    /* inlined from g3dResource.h */
  (this->field0_0x0).m_Type = G3DRTYPE_TEXTURE;
                    /* end of inlined section */
  (this->field0_0x0).__vtable = (IG3DResource__vtable *)_vt_8CTexture;
  memset(&this->m_gsLoadImage,0,0x60);
  pvVar1 = memset(&this->m_TextureData,0,0x10);
  this->m_iSize = 0;
  this->m_pbyData = (uchar *)0x0;
                    /* end of inlined section */
  return (int)pvVar1;
}

void IG3DResource::~IG3DResource(int __in_chrg) {
  void *pvVar1;
  
                    /* inlined from g3dResource.h */
                    /* end of inlined section */
                    /* inlined from g3dResource.h */
  (this->field0_0x0).m_Type = G3DRTYPE_TEXTURE;
                    /* end of inlined section */
  (this->field0_0x0).__vtable = (IG3DResource__vtable *)_vt_8CTexture;
  memset(&this->m_gsLoadImage,0,0x60);
  pvVar1 = memset(&this->m_TextureData,0,0x10);
  this->m_iSize = 0;
  this->m_pbyData = (uchar *)0x0;
                    /* end of inlined section */
  return (int)pvVar1;
}

void IG3DResource::PreLoad() {
  void *pvVar1;
  
                    /* inlined from g3dResource.h */
                    /* end of inlined section */
                    /* inlined from g3dResource.h */
  (this->field0_0x0).m_Type = G3DRTYPE_TEXTURE;
                    /* end of inlined section */
  (this->field0_0x0).__vtable = (IG3DResource__vtable *)_vt_8CTexture;
  memset(&this->m_gsLoadImage,0,0x60);
  pvVar1 = memset(&this->m_TextureData,0,0x10);
  this->m_iSize = 0;
  this->m_pbyData = (uchar *)0x0;
                    /* end of inlined section */
  return (int)pvVar1;
}

type_info& CTexture type_info function() {
  void *pvVar1;
  
                    /* inlined from g3dResource.h */
                    /* end of inlined section */
                    /* inlined from g3dResource.h */
  (this->field0_0x0).m_Type = G3DRTYPE_TEXTURE;
                    /* end of inlined section */
  (this->field0_0x0).__vtable = (IG3DResource__vtable *)_vt_8CTexture;
  memset(&this->m_gsLoadImage,0,0x60);
  pvVar1 = memset(&this->m_TextureData,0,0x10);
  this->m_iSize = 0;
  this->m_pbyData = (uchar *)0x0;
                    /* end of inlined section */
  return (int)pvVar1;
}

void CTexture::~CTexture(int __in_chrg) {
  void *pvVar1;
  
                    /* inlined from g3dResource.h */
                    /* end of inlined section */
                    /* inlined from g3dResource.h */
  (this->field0_0x0).m_Type = G3DRTYPE_TEXTURE;
                    /* end of inlined section */
  (this->field0_0x0).__vtable = (IG3DResource__vtable *)_vt_8CTexture;
  memset(&this->m_gsLoadImage,0,0x60);
  pvVar1 = memset(&this->m_TextureData,0,0x10);
  this->m_iSize = 0;
  this->m_pbyData = (uchar *)0x0;
                    /* end of inlined section */
  return (int)pvVar1;
}

G3DTEXTUREDATA& CTexture::GetTextureDataRef() {
  void *pvVar1;
  
                    /* inlined from g3dResource.h */
                    /* end of inlined section */
                    /* inlined from g3dResource.h */
  (this->field0_0x0).m_Type = G3DRTYPE_TEXTURE;
                    /* end of inlined section */
  (this->field0_0x0).__vtable = (IG3DResource__vtable *)_vt_8CTexture;
  memset(&this->m_gsLoadImage,0,0x60);
  pvVar1 = memset(&this->m_TextureData,0,0x10);
  this->m_iSize = 0;
  this->m_pbyData = (uchar *)0x0;
                    /* end of inlined section */
  return (int)pvVar1;
}

unsigned char* CTexture::GetImage() {
  void *pvVar1;
  
                    /* inlined from g3dResource.h */
                    /* end of inlined section */
                    /* inlined from g3dResource.h */
  (this->field0_0x0).m_Type = G3DRTYPE_TEXTURE;
                    /* end of inlined section */
  (this->field0_0x0).__vtable = (IG3DResource__vtable *)_vt_8CTexture;
  memset(&this->m_gsLoadImage,0,0x60);
  pvVar1 = memset(&this->m_TextureData,0,0x10);
  this->m_iSize = 0;
  this->m_pbyData = (uchar *)0x0;
                    /* end of inlined section */
  return (int)pvVar1;
}

int CTexture::GetSize() {
  void *pvVar1;
  
                    /* inlined from g3dResource.h */
                    /* end of inlined section */
                    /* inlined from g3dResource.h */
  (this->field0_0x0).m_Type = G3DRTYPE_TEXTURE;
                    /* end of inlined section */
  (this->field0_0x0).__vtable = (IG3DResource__vtable *)_vt_8CTexture;
  memset(&this->m_gsLoadImage,0,0x60);
  pvVar1 = memset(&this->m_TextureData,0,0x10);
  this->m_iSize = 0;
  this->m_pbyData = (uchar *)0x0;
                    /* end of inlined section */
  return (int)pvVar1;
}
