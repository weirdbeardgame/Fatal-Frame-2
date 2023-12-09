// STATUS: NOT STARTED

#ifndef HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_EVENT_PRG_EV_ENE_H
#define HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_EVENT_PRG_EV_ENE_H


void ev_eneInit();
void ev_eneSetSave(MC_SAVE_DATA *save);
void ev_eneRelease();
void ev_eneRegisterFile(int room_id, int ene_type, int dat_no);
void ev_eneDeleteFile(int room_id, int ene_type, int dat_no);
void ev_eneChangeRoom(int room_id);
int ev_eneIsReady();

#endif // HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_EVENT_PRG_EV_ENE_H
