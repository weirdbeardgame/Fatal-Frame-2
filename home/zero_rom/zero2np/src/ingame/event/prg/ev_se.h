// STATUS: NOT STARTED

#ifndef HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_EVENT_PRG_EV_SE_H
#define HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_EVENT_PRG_EV_SE_H


void ev_seInit();
void ev_seSetSave(MC_SAVE_DATA *save);
void ev_seRelease();
void ev_seRegisterFile(int room_id, int file_no);
void ev_seDeleteFile(int room_id, int file_no);
int ev_seGetBankID(int file_no);
void ev_seChangeRoom(int room_id);
int ev_seIsReady();

#endif // HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_EVENT_PRG_EV_SE_H
