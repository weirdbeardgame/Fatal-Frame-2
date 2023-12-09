// STATUS: NOT STARTED

#ifndef HOME_ZERO_ROM_ZERO2NP_SRC_SYSTEM_MC_PRG_MC_CMN_H
#define HOME_ZERO_ROM_ZERO2NP_SRC_SYSTEM_MC_PRG_MC_CMN_H

int MemoryCardExeEndSync(int *result);
int GetMemoryCardFreeSizeForBrowser();
int CalcMemoryCardDataCheckSum(char *data_addr, int size);
void SetMemoryCardDataCheckSum(char *addr, int check_sum);

#endif // HOME_ZERO_ROM_ZERO2NP_SRC_SYSTEM_MC_PRG_MC_CMN_H
