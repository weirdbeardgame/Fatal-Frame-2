// STATUS: NOT STARTED

#ifndef HOME_ZERO_ROM_ZERO2NP_SRC_SYSTEM_MC_PRG_MC_CHECK_CARD_H
#define HOME_ZERO_ROM_ZERO2NP_SRC_SYSTEM_MC_PRG_MC_CHECK_CARD_H


void MemoryCardInfoCtrlInit();
void MemoryCardGetCardInfoInit(int port, int slot);
void MemoryCardCheckEveryFrameInit(int port, int slot);
int MemoryCardGetCardInfoMain();
int MemoryCardGetCardInfoReq(int port, int slot);
int MemoryCardCheckEveryFrameMain();
int GetAccessMemoryCardPort();
int GetAccessMemoryCardSlot();
int GetAccessMemoryCardType();
int GetAccessMemoryCardFreeCluster();
int GetAccessMemoryCardFormat();
void MemoryCardSetAccessPort(int port);

#endif // HOME_ZERO_ROM_ZERO2NP_SRC_SYSTEM_MC_PRG_MC_CHECK_CARD_H
