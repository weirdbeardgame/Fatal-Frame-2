// STATUS: NOT STARTED

#ifndef HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_EVENT_PRG_EV_CHANGE_H
#define HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_EVENT_PRG_EV_CHANGE_H

typedef struct {
	u_char state;
	u_char dumy1;
	short int dumy2;
} EVENT_STATE;

typedef struct {
	int set_event_id;
	int change_id;
	u_char change_state;
} EV_CHANGE_CTRL;

extern unsigned char EV_CHANGE_CTRL type_info node[8];
extern unsigned char EVENT_STATE type_info node[8];

void EvChangeCtrlInit();
void SetEventState(int event_id, u_char state);
void SetEventWaitFlg(u_char flg);
void CompulsionSetEventStateMain();
void CompulsionSetEventState(int change_id, u_char state);
void Req_CompulsionSetEventState(int set_event_id, int change_id, u_char state);
void Del_CompulsionSetEventState(int change_id);
void SetSave_EvChangeCtrl(MC_SAVE_DATA *data);
void EvDbg_EventStatePrint();
void EvDbg_CompulsionSetPrint();
EV_CHANGE_CTRL* EV_CHANGE_CTRL * _fixed_array_verifyrange<EV_CHANGE_CTRL>(size_t v, size_t _max);
EVENT_STATE* EVENT_STATE * _fixed_array_verifyrange<EVENT_STATE>(size_t v, size_t _max);
int* int * _fixed_array_verifyrange<int>(size_t v, size_t _max);
type_info& EV_CHANGE_CTRL type_info function();
type_info& EVENT_STATE type_info function();

#endif // HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_EVENT_PRG_EV_CHANGE_H
