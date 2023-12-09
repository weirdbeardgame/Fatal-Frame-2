// STATUS: NOT STARTED

#ifndef HOME_ZERO_ROM_ZERO2NP_SRC_SYSTEM_MC_PRG_MC_SAVE_H
#define HOME_ZERO_ROM_ZERO2NP_SRC_SYSTEM_MC_PRG_MC_SAVE_H


void MemoryCardFileSaveInit(int port, int slot, char *name, void *data_addr, int size);
int MemoryCardFileSaveMain();

#endif // HOME_ZERO_ROM_ZERO2NP_SRC_SYSTEM_MC_PRG_MC_SAVE_H
