// STATUS: NOT STARTED

#ifndef HOME_ZERO_ROM_ZERO2NP_SRC_COMMON_PACKFILE_H
#define HOME_ZERO_ROM_ZERO2NP_SRC_COMMON_PACKFILE_H

u_int* PakAlign128(u_int *addr);
int GetNumInPak(void *pak_head);
void* GetFileInPak(void *pak_head, int num);
int GetFileSizeInPak(void *pak_head, int num);
void* GetPakTaleAddr(void *pak_head);
int Pk2GetNum(u_int *top_addr);
u_int* Pk2GetAddr(u_int *top_addr, int index);

#endif // HOME_ZERO_ROM_ZERO2NP_SRC_COMMON_PACKFILE_H
