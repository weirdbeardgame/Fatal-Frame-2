// STATUS: NOT STARTED

#ifndef HOME_ZERO_ROM_ZERO2NP_SRC_SYSTEM_MC_PRG_MC_WRITE_H
#define HOME_ZERO_ROM_ZERO2NP_SRC_SYSTEM_MC_PRG_MC_WRITE_H


void MemoryCardFileWriteInit(int fd, void *data_addr, int size);
int MemoryCardFileWriteMain();
int MemoryCardFileWriteReq(int fd, void *data_addr, int size);

#endif // HOME_ZERO_ROM_ZERO2NP_SRC_SYSTEM_MC_PRG_MC_WRITE_H
