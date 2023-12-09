// STATUS: NOT STARTED

#ifndef HOME_ZERO_ROM_ZERO2NP_SRC_GRAPHICS_GRAPH3D_G3DSPRITE_H
#define HOME_ZERO_ROM_ZERO2NP_SRC_GRAPHICS_GRAPH3D_G3DSPRITE_H

typedef _sceGifPackRgbaq sceGifPackRgbaq;

typedef struct {
	float S;
	float T;
} sceGsSt;

struct G3DFRECT {
	float fLeft;
	float fTop;
	float fRight;
	float fBottom;
};

struct G3DSPRITEDATA {
	G3DFRECT Rect;
	G3DCOLOR Color;
	float fZ;
	sceGsSt StLT;
	sceGsSt StRB;
};

struct PACKETHEADER {
	qword qwVifCode;
	sceGifTag Gt;
};

struct CSprite {
private:
	G3DSPRITEDATA m_SpriteData;
	PACKETHEADER m_Header;
	CTexture *m_pTexture;
	sceGifPackRgbaq m_Rgbaq;
	sceGsXyz m_GsXyzLT;
	sceGsXyz m_GsXyzRB;
	int m_iQWSizePacket;
public:
	__vtbl_ptr_type *__vtable;
	
	CSprite& operator=();
	CSprite();
	CSprite();
	/* vtable[1] */ virtual CSprite();
	int Create(G3DSPRITEDATA *pSpriteData, CTexture *pTexture);
	void Draw();
};

extern __vtbl_ptr_type CSprite virtual table[3];
extern unsigned char CSprite type_info node[8];

type_info& CSprite type_info function();
void CSprite::~CSprite(int __in_chrg);

#endif // HOME_ZERO_ROM_ZERO2NP_SRC_GRAPHICS_GRAPH3D_G3DSPRITE_H
