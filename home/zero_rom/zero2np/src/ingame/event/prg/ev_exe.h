// STATUS: NOT STARTED

#ifndef HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_EVENT_PRG_EV_EXE_H
#define HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_EVENT_PRG_EV_EXE_H

typedef struct {
	int event_id;
	u_int stop_timer;
	u_char *event_addr;
	u_char if_state;
	u_char process;
} EV_EXE_CTRL;

extern unsigned char EV_EXE_CTRL type_info node[8];

void EventExeInit();
void SetEventInitStatus(int event_id);
void SetEventExeStatus(int event_id);
void SetEventEndExeStatus(int event_id);
void EventEnd_SubStateChange(int event_id);
void SetEventExeCtrl(int event_id, u_char use_table);
void EventExe();
void EventExeRelease(int event_id);
int CheckEventExeEntry(int event_id);
void SetSave_EvExeCtrl(MC_SAVE_DATA *data);
EV_EXE_CTRL* EV_EXE_CTRL * _fixed_array_verifyrange<EV_EXE_CTRL>(size_t v, size_t _max);
int* int * _fixed_array_verifyrange<int>(size_t v, size_t _max);
type_info& EV_EXE_CTRL type_info function();

#endif // HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_EVENT_PRG_EV_EXE_H
