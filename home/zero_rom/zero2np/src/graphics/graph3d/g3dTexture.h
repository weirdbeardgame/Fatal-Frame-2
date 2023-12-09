// STATUS: NOT STARTED

#ifndef HOME_ZERO_ROM_ZERO2NP_SRC_GRAPHICS_GRAPH3D_G3DTEXTURE_H
#define HOME_ZERO_ROM_ZERO2NP_SRC_GRAPHICS_GRAPH3D_G3DTEXTURE_H

// warning: multiple differing types with the same name (#146, descriptor not equal)
typedef void sceGsLoadImage;

typedef enum {
	G3DRTYPE_TEXTURE = 1,
	G3DRTYPE_VERTEXBUFFER = 2,
	G3DRTYPE_INDEXBUFFER = 3,
	INVALID_G3DRESOURCETYPE = 2147483647,
	G3DRTYPE_FORCE_DWORD = 2147483647
} G3DRESOURCETYPE;

struct G3DTEXTUREDATA_LONG {
	long int lTex0;
	long int lTex1;
};

struct G3DTEXTUREDATA_GS {
	sceGsTex0 gsTex0;
	sceGsTex1 gsTex1;
};

union G3DTEXTUREDATA {
	G3DTEXTUREDATA_LONG l;
	G3DTEXTUREDATA_GS gs;
};

extern __vtbl_ptr_type CTexture virtual table[4];
extern __vtbl_ptr_type IG3DResource virtual table[4];
extern unsigned char IG3DResource type_info node[8];
extern unsigned char CTexture type_info node[12];

type_info& IG3DResource type_info function();
void IG3DResource::~IG3DResource(int __in_chrg);
type_info& CTexture type_info function();
void CTexture::~CTexture(int __in_chrg);

#endif // HOME_ZERO_ROM_ZERO2NP_SRC_GRAPHICS_GRAPH3D_G3DTEXTURE_H
