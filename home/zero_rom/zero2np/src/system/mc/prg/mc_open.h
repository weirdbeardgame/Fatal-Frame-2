// STATUS: NOT STARTED

#ifndef HOME_ZERO_ROM_ZERO2NP_SRC_SYSTEM_MC_PRG_MC_OPEN_H
#define HOME_ZERO_ROM_ZERO2NP_SRC_SYSTEM_MC_PRG_MC_OPEN_H


void MemoryCardFileOpenInit(int port, int slot, char *name, int mode);
int MemoryCardFileOpenMain(int *fd);
int MemoryCardFileOpenReq(int port, int slot, char *name, int mode);

#endif // HOME_ZERO_ROM_ZERO2NP_SRC_SYSTEM_MC_PRG_MC_OPEN_H
