// STATUS: NOT STARTED

#ifndef HOME_ZERO_ROM_ZERO2NP_SRC_ALBUM_PRG_ALBUM_SAVE_H
#define HOME_ZERO_ROM_ZERO2NP_SRC_ALBUM_PRG_ALBUM_SAVE_H

extern unsigned char ALBUM_INFO type_info node[8];

void AlbumSaveCtrlInit();
int AlbumSaveMain();
void AlbumSaveEnd();
void AlbumSaveDispMain();
ALBUM_INFO* ALBUM_INFO * _fixed_array_verifyrange<ALBUM_INFO>(size_t v, size_t _max);
type_info& ALBUM_INFO type_info function();

#endif // HOME_ZERO_ROM_ZERO2NP_SRC_ALBUM_PRG_ALBUM_SAVE_H
