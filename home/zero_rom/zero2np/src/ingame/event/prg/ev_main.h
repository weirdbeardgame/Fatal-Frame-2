// STATUS: NOT STARTED

#ifndef HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_EVENT_PRG_EV_MAIN_H
#define HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_EVENT_PRG_EV_MAIN_H

struct fixed_array<EVENT_STATE,1931> : fixed_array_base<EVENT_STATE,1931,EVENT_STATE[1931]> {
};

typedef struct {
	int step;
	int ev_no;
	fixed_array<EVENT_STATE,1931> ev_state;
	u_char wait_flg;
} EV_WRK;

extern EV_WRK ev_wrk;
extern unsigned char EVENT_STATE type_info node[8];
extern CEventSisterGazeWrk ev_sister_gaze;

void EventInit();
void ev_gazeSisSetSave(MC_SAVE_DATA *save);
void EventDataLoadReq();
void EventRootStart();
void EventMain();
void EventEnd();
void SetSave_EvWrk(MC_SAVE_DATA *data);
EVENT_STATE* EVENT_STATE * _fixed_array_verifyrange<EVENT_STATE>(size_t v, size_t _max);
type_info& EVENT_STATE type_info function();

#endif // HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_EVENT_PRG_EV_MAIN_H
