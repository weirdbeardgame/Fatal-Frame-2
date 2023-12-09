// STATUS: NOT STARTED

#ifndef HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_EVENT_PRG_EV_OPEN_H
#define HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_EVENT_PRG_EV_OPEN_H

typedef struct {
	short int condition;
	short int event_id;
	u_char *exe_addr;
} EV_CTRL_CENTER;

typedef struct {
	u_char obj_type;
	int obj_id;
} EV_PHOTO_OBJ;

extern unsigned char EV_CTRL_CENTER type_info node[8];
extern unsigned char EV_PRI_CTRL type_info node[8];
extern EV_PHOTO_OBJ ev_photo_obj;

void EvCtrlCenterInit();
void EvPhotoObjInit();
void EvCondCtrlInit();
void EventSetOpenCondition(int event_id);
void EventSetCloseCondition(int event_id);
void EventDelCondition(int event_id);
void EventCtrlCenterMain();
void SetOpenCondSwitch(u_char flg);
void SetEndCondSwitch(u_char flg);
void SetSave_EvCtrlCenter(MC_SAVE_DATA *data);
void EvDbgDispCenter();
EV_CTRL_CENTER* EV_CTRL_CENTER * _fixed_array_verifyrange<EV_CTRL_CENTER>(size_t v, size_t _max);
EV_PRI_CTRL* EV_PRI_CTRL * _fixed_array_verifyrange<EV_PRI_CTRL>(size_t v, size_t _max);
int* int * _fixed_array_verifyrange<int>(size_t v, size_t _max);
type_info& EV_CTRL_CENTER type_info function();
type_info& EV_PRI_CTRL type_info function();

#endif // HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_EVENT_PRG_EV_OPEN_H
