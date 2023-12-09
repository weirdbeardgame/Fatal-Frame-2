// STATUS: NOT STARTED

#ifndef HOME_ZERO_ROM_ZERO2NP_SRC_SYSTEM_MC_PRG_MC_LOAD_H
#define HOME_ZERO_ROM_ZERO2NP_SRC_SYSTEM_MC_PRG_MC_LOAD_H


void MemoryCardFileLoadInit(int port, int slot, char *name, void *data_addr, int size);
int MemoryCardFileLoadMain();

#endif // HOME_ZERO_ROM_ZERO2NP_SRC_SYSTEM_MC_PRG_MC_LOAD_H
