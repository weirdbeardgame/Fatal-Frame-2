// STATUS: NOT STARTED

#ifndef HOME_ZERO_ROM_ZERO2NP_SRC_GRAPHICS_GRAPH2D_TIM2_H
#define HOME_ZERO_ROM_ZERO2NP_SRC_GRAPHICS_GRAPH2D_TIM2_H

typedef struct {
	u_int TotalSize;
	u_int ClutSize;
	u_int ImageSize;
	u_short HeaderSize;
	u_short ClutColors;
	u_char PictFormat;
	u_char MipMapTextures;
	u_char ClutType;
	u_char ImageType;
	u_short ImageWidth;
	u_short ImageHeight;
	u_long GsTex0;
	u_long GsTex1;
	u_int GsTexaFbaPabe;
	u_int GsTexClut;
} TIM2_PICTUREHEADER;

typedef struct {
	u_long GsMiptbp1;
	u_long GsMiptbp2;
	u_int MMImageSize[0];
} TIM2_MIPMAPHEADER;

void printClut(void *pClut, int ClutColors);
void ResetClutAlpha(void *pClut, int ClutColors);
void ResetPIXELAlpha(u_char *ip, int size);
int Tim2CheckFileHeaer(void *pTim2);
TIM2_PICTUREHEADER* Tim2GetPictureHeader(void *pTim2, int imgno);
int Tim2IsClut2(TIM2_PICTUREHEADER *ph);
int Tim2GetMipMapPictureSize(TIM2_PICTUREHEADER *ph, int mipmap, int *pWidth, int *pHeight);
TIM2_MIPMAPHEADER* Tim2GetMipMapHeader(TIM2_PICTUREHEADER *ph, int *pSize);
void* Tim2GetUserSpace(TIM2_PICTUREHEADER *ph, int *pSize);
void* Tim2GetUserData(TIM2_PICTUREHEADER *ph, int *pSize);
char* Tim2GetComment(TIM2_PICTUREHEADER *ph);
void* Tim2GetImage(TIM2_PICTUREHEADER *ph, int mipmap);
void* Tim2GetClut(TIM2_PICTUREHEADER *ph);
u_int Tim2GetClutColor(TIM2_PICTUREHEADER *ph, int clut, int no);
u_int Tim2SetClutColor(TIM2_PICTUREHEADER *ph, int clut, int no, u_int newcolor);
u_int Tim2GetTexel(TIM2_PICTUREHEADER *ph, int mipmap, int x, int y);
u_int Tim2SetTexel(TIM2_PICTUREHEADER *ph, int mipmap, int x, int y, u_int newtexel);
u_int Tim2GetTextureColor(TIM2_PICTUREHEADER *ph, int mipmap, int clut, int x, int y);
u_int Tim2LoadPicture2(TIM2_PICTUREHEADER *ph, u_int tbp, u_int cbp, u_int offset);
u_int Tim2LoadPicture(TIM2_PICTUREHEADER *ph, u_int tbp, u_int cbp);
u_int Tim2LoadImage2(TIM2_PICTUREHEADER *ph, u_int tbp, u_int offset);
u_int Tim2LoadImage(TIM2_PICTUREHEADER *ph, u_int tbp);
u_int Tim2LoadClut2(TIM2_PICTUREHEADER *ph, u_int cbp, u_int offset);
u_int Tim2LoadClut(TIM2_PICTUREHEADER *ph, u_int cbp);
void Tim2LoadTexture(int psm, u_int tbp, int tbw, int w, int h, u_long128 *pImage);
int Tim2CalcBufWidth(int psm, int w);
u_long GetTex0RegPK(u_int addr, int no, u_int offset);
u_long GetTex0RegTM(u_int addr, u_int offset);
void MakeTim2Direct(u_int *tim2_addr, int tbp, int offset);
void MakeClutDirect(u_int *tim2_addr, int cbp, int offset);
void MakeClutDirect_ChrMono(u_int *tim2_addr, int cbp, int offset, u_int *mono_addr);
void PK2SendVram(u_int tm2_addr, int tbp, int cbp, int offset);
void PK2SendVramOne(u_int tm2_addr, int num, int tbp, int cbp, int offset);
void MakeTim2SendPacket(u_int tm2_addr, int offset);
void MakeTim2SendPacket_3Dpkt(u_int tm2_addr, int offset);
void MakeTim2SendPacket_Mono(u_int tm2_addr, int offset, u_int mono_addr);
void SetSprFile(u_int addr);
void SetSprFile2(u_int addr, u_int offset);

#endif // HOME_ZERO_ROM_ZERO2NP_SRC_GRAPHICS_GRAPH2D_TIM2_H
