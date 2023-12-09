// STATUS: NOT STARTED

#ifndef HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_DOOR_PRG_DOOR_H
#define HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_DOOR_PRG_DOOR_H

typedef struct {
	u_char lock_id;
} DOOR_CTRL;

extern unsigned char DOOR_CTRL type_info node[8];
extern DOOR_LOCK_STATE_CTRL lock_state_ctrl;

void DoorCtrlInit();
int DoorOpenInit(int door_id);
int DoorOpen(int door_id);
void DoorClose(int door_id);
void DoorLock(int door_id, u_char lock_id);
void DoorUnlock(int door_id);
void DoorLockStateExeInit(int door_id);
int DoorLockStateExe(int door_id);
DOOR_CTRL* GetDoorInfo(int door_id);
u_char GetDoorLockState(int door_id);
int GetDoorDataLabelToDoorLabel(int door_data_label);
void SetSave_DoorCtrl(MC_SAVE_DATA *data);
DOOR_CTRL* DOOR_CTRL * _fixed_array_verifyrange<DOOR_CTRL>(size_t v, size_t _max);
type_info& DOOR_CTRL type_info function();

#endif // HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_DOOR_PRG_DOOR_H
