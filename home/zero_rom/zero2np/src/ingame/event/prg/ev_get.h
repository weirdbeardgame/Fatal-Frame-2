// STATUS: NOT STARTED

#ifndef HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_EVENT_PRG_EV_GET_H
#define HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_EVENT_PRG_EV_GET_H

extern unsigned char EVENT_STATE type_info node[8];

u_char GetEvState(int event_id);
u_char GetEvWrkWaitFlg();
u_char* EvBinChangeAddr4(u_char *top_addr, u_char *dat_addr);
u_char* EvGetTblAddr(int tbl_type);
u_char* EvGetExeAddr(int tbl_type, int ev_no);
int EvGetParentID(int event_id);
void EvSetSubId(u_char *dat_addr, int *id_tbl);
void EvGetSubId(int event_no, int *id_tbl);
u_char Get1Byte(u_char *dat_addr);
u_short Get2Byte(u_char *dat_addr);
u_int Get4Byte(u_char *dat_addr);
float EvGetRot360(short int rot360);
EVENT_STATE* EVENT_STATE * _fixed_array_verifyrange<EVENT_STATE>(size_t v, size_t _max);
type_info& EVENT_STATE type_info function();

#endif // HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_EVENT_PRG_EV_GET_H
