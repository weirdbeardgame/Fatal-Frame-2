// STATUS: NOT STARTED

#ifndef HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_MENU_GHOST_SEAL_DOOR_H
#define HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_MENU_GHOST_SEAL_DOOR_H


void GhostSealDoorInit();
void GhostSealDoorMain(int room_label);
void GhostSealDoorAppear(int seal_label);
void GhostSealDoorRelease(int seal_label);
int GetGhostSealDoorState(int seal_label);
void SetSave_GhostSealDoor(MC_SAVE_DATA *data);
u_char* unsigned char * _fixed_array_verifyrange<unsigned char>(size_t v, size_t _max);

#endif // HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_MENU_GHOST_SEAL_DOOR_H
