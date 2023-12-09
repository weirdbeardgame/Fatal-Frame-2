// STATUS: NOT STARTED

#ifndef HOME_ZERO_ROM_ZERO2NP_SRC_SYSTEM_MC_PRG_MC_READ_H
#define HOME_ZERO_ROM_ZERO2NP_SRC_SYSTEM_MC_PRG_MC_READ_H


void MemoryCardFileReadInit(int fd, void *data_addr, int size);
int MemoryCardFileReadMain();
int MemoryCardFileReadReq(int fd, void *data_addr, int size);

#endif // HOME_ZERO_ROM_ZERO2NP_SRC_SYSTEM_MC_PRG_MC_READ_H
