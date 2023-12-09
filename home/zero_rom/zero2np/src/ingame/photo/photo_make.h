// STATUS: NOT STARTED

#ifndef HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_PHOTO_PHOTO_MAKE_H
#define HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_PHOTO_PHOTO_MAKE_H


void DrawPhotoBuffer(u_int pri, int addr, int szfl, int x, int y, int szw, int szh, int mszw, int mszh, int ftype, int alp, int ztype);
void CopyScreenToBuffer2(int addr_i, int addr_o, int szfl, int mx, int my, int mw, int mh);
void MakeSmallPhotoV(float x, float y);
void DrawSPhotoFromSmallPhotoArea(int n, int pri, int ftype, int x, int y, u_char alp);
void DrawSPhotoFromSmallPhotoAreaAddr(int addr, int n, int pri, int ftype, int x, int y, u_char alp);
void DrawSPhotoFromSmallPhotoArea2(int n, int pri, int ftype, int x, int y, int szw, int szh, u_char alp);
void DrawSPhotoFromSmallPhotoAreaAddr2(int addr, int n, int pri, int ftype, int x, int y, int szw, int szh, int alp);
void CompressData(int addri, int addro, int n);
void UncompressData(int addri, int n, int addro);
void CompPhotoFromWorkArea(int n);
void UncompressPhoto(int n);
void DrawPhotoFromWorkArea(int pri, int ftype, int x, int y, int szw, int szh, u_char alp);
void DrawPhotoFromWorkAreaAddr(int addr, int pri, int ftype, int x, int y, int szw, int szh, u_char alp);
float SlideEncodeHeader(unsigned char *base, unsigned char *addrs, int max_size);
void SlideDecodeHeader(unsigned char *base, unsigned char *addrs);
void DispPhotoFrame1(int fl, float x, float y, int iPercent);
void DrawPhotoFilterPK2(u_int sw, float x, float y, SPRT_DAT *dat, int photo_cnt, void *tex_adrs, int bGradual);
void DrawPhotoHinttex(u_int sw, float x, float y, int photo_cnt, int photo_spno, u_int *tex_adrs);
void DrawPhotoFrame(float x, float y);
void DrawSpecialFurnPhoto(float photo_x, float photo_y);

#endif // HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_PHOTO_PHOTO_MAKE_H
