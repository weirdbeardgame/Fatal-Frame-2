// STATUS: NOT STARTED

#ifndef HOME_ZERO_ROM_ZERO2NP_SRC_ALBUM_PRG_ALBUM_EDIT_H
#define HOME_ZERO_ROM_ZERO2NP_SRC_ALBUM_PRG_ALBUM_EDIT_H

struct _PICTURE_SUBJECT {
	short int type;
	short int obj_no;
};

typedef _PICTURE_SUBJECT PICTURE_SUBJECT;
extern unsigned char ALBUM_INFO type_info node[8];
extern unsigned char PICTURE_WRK type_info node[8];
extern unsigned char _PICTURE_SUBJECT type_info node[8];

void AlbumEditCtrlInit();
int AlbumEditMain();
void AlbumEditUncompressPhotoReq();
void AlbumEditMenuDelete();
void AlbumEditDispMain();
ALBUM_INFO* ALBUM_INFO * _fixed_array_verifyrange<ALBUM_INFO>(size_t v, size_t _max);
PICTURE_WRK* PICTURE_WRK * _fixed_array_verifyrange<PICTURE_WRK>(size_t v, size_t _max);
PICTURE_SUBJECT* _PICTURE_SUBJECT * _fixed_array_verifyrange<_PICTURE_SUBJECT>(size_t v, size_t _max);
type_info& ALBUM_INFO type_info function();
type_info& PICTURE_WRK type_info function();
type_info& _PICTURE_SUBJECT type_info function();

#endif // HOME_ZERO_ROM_ZERO2NP_SRC_ALBUM_PRG_ALBUM_EDIT_H
