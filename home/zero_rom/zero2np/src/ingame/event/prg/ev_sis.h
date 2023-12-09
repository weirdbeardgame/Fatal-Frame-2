// STATUS: NOT STARTED

#ifndef HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_EVENT_PRG_EV_SIS_H
#define HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_EVENT_PRG_EV_SIS_H


void ev_sisSetSave(MC_SAVE_DATA *save);
void ev_sisInit();
void ev_sisRegister(int area_no, int mdl_no, int anm_no);
void ev_sisDelete(int area_no);
void ev_sisRelease();
void ev_sisChangeRoom(int room_id);

#endif // HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_EVENT_PRG_EV_SIS_H
