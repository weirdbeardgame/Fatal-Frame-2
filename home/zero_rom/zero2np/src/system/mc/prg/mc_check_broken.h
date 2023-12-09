// STATUS: NOT STARTED

#ifndef HOME_ZERO_ROM_ZERO2NP_SRC_SYSTEM_MC_PRG_MC_CHECK_BROKEN_H
#define HOME_ZERO_ROM_ZERO2NP_SRC_SYSTEM_MC_PRG_MC_CHECK_BROKEN_H

int MemoryCardCheckDirBroken(int dir_label);
int MemoryCardCheckFileBroken(void *data_addr, int size);
int MemoryCardCheckNewFileLoad(void *data_addr, int size);

#endif // HOME_ZERO_ROM_ZERO2NP_SRC_SYSTEM_MC_PRG_MC_CHECK_BROKEN_H
