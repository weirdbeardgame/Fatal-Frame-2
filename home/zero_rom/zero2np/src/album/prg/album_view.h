// STATUS: NOT STARTED

#ifndef HOME_ZERO_ROM_ZERO2NP_SRC_ALBUM_PRG_ALBUM_VIEW_H
#define HOME_ZERO_ROM_ZERO2NP_SRC_ALBUM_PRG_ALBUM_VIEW_H

extern unsigned char ALBUM_INFO type_info node[8];
extern unsigned char PICTURE_WRK type_info node[8];
extern unsigned char _PICTURE_SUBJECT type_info node[8];

void AlbumViewCtrlInit();
void AlbumViewBackGroundLoadReq(int album_type);
int AlbumViewMain();
void LiberateAlbumViewTex();
void AlbumViewTexLoadCancel();
void AlbumViewDispMain();
ALBUM_INFO* ALBUM_INFO * _fixed_array_verifyrange<ALBUM_INFO>(size_t v, size_t _max);
int* int * _fixed_array_verifyrange<int>(size_t v, size_t _max);
char* char * _fixed_array_verifyrange<char>(size_t v, size_t _max);
PICTURE_WRK* PICTURE_WRK * _fixed_array_verifyrange<PICTURE_WRK>(size_t v, size_t _max);
PICTURE_SUBJECT* _PICTURE_SUBJECT * _fixed_array_verifyrange<_PICTURE_SUBJECT>(size_t v, size_t _max);
type_info& ALBUM_INFO type_info function();
type_info& PICTURE_WRK type_info function();
type_info& _PICTURE_SUBJECT type_info function();

#endif // HOME_ZERO_ROM_ZERO2NP_SRC_ALBUM_PRG_ALBUM_VIEW_H
