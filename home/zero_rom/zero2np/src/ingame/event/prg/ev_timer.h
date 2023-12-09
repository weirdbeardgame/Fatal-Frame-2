// STATUS: NOT STARTED

#ifndef HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_EVENT_PRG_EV_TIMER_H
#define HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_EVENT_PRG_EV_TIMER_H

typedef struct {
	int event_id;
	u_int timer;
	int req_event_id;
	u_char req_state;
} REGIST_TIMER;

extern unsigned char REGIST_TIMER type_info node[8];

void EvTimerCtrlInit();
void EvTimerMain();
void EvTimerRegist(int event_id, u_int timer, int req_event_id, u_char state);
void EvTimerRelease(int event_id);
void SetSave_EvTimerCtrl(MC_SAVE_DATA *data);
REGIST_TIMER* REGIST_TIMER * _fixed_array_verifyrange<REGIST_TIMER>(size_t v, size_t _max);
type_info& REGIST_TIMER type_info function();

#endif // HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_EVENT_PRG_EV_TIMER_H
