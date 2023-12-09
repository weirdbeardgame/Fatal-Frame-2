// STATUS: NOT STARTED

#ifndef HOME_ZERO_ROM_ZERO2NP_SRC_SYSTEM_MC_PRG_MC_CHECK_DIR_H
#define HOME_ZERO_ROM_ZERO2NP_SRC_SYSTEM_MC_PRG_MC_CHECK_DIR_H

typedef void sceMcTblGetDir;

void MemoryCardDirInfoCtrlInit();
void MemoryCardGetDirInfoInit(int port, int slot, char *name);
int MemoryCardGetDirInfoMain();
int MemoryCardGetDirInfoReq(int port, int slot, char *name);
int GetMemoryCardCheckDirFileNum();
void GetMemoryCardCheckDirEntryName(char *name, int data_pos);
int GetMemoryCardCheckDirSize();

#endif // HOME_ZERO_ROM_ZERO2NP_SRC_SYSTEM_MC_PRG_MC_CHECK_DIR_H
