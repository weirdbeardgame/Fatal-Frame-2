// STATUS: NOT STARTED

#ifndef HOME_ZERO_ROM_ZERO2NP_SRC_SYSTEM_MC_PRG_MC_MAKE_DIR_H
#define HOME_ZERO_ROM_ZERO2NP_SRC_SYSTEM_MC_PRG_MC_MAKE_DIR_H


void MemoryCardMakeNewDirInit(int port, int slot, char *name);
int MemoryCardMakeNewDirMain();
int MemoryCardMakeNewDirReq(int port, int slot, char *name);

#endif // HOME_ZERO_ROM_ZERO2NP_SRC_SYSTEM_MC_PRG_MC_MAKE_DIR_H
