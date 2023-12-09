// STATUS: NOT STARTED

#ifndef HOME_ZERO_ROM_ZERO2NP_SRC_SYSTEM_MC_PRG_MC_DEL_FILE_H
#define HOME_ZERO_ROM_ZERO2NP_SRC_SYSTEM_MC_PRG_MC_DEL_FILE_H


void MemoryCardFileDelInit(int port, int slot, char *name);
int MemoryCardFileDelMain();
int MemoryCardFileDelReq(int port, int slot, char *name);

#endif // HOME_ZERO_ROM_ZERO2NP_SRC_SYSTEM_MC_PRG_MC_DEL_FILE_H
