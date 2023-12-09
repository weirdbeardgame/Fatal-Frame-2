// STATUS: NOT STARTED

#ifndef HOME_ZERO_ROM_ZERO2NP_SRC_ALBUM_PRG_ALBUM_MEM_H
#define HOME_ZERO_ROM_ZERO2NP_SRC_ALBUM_PRG_ALBUM_MEM_H


void AlbumMemInit(u_int get_size, char *file, int line);
int AlbumMemMain();
void* GetAlbumMemAddr();
void AlbumMemFree(char *file, int line);

#endif // HOME_ZERO_ROM_ZERO2NP_SRC_ALBUM_PRG_ALBUM_MEM_H
