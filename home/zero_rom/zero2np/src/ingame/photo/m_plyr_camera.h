// STATUS: NOT STARTED

#ifndef HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_PHOTO_M_PLYR_CAMERA_H
#define HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_PHOTO_M_PLYR_CAMERA_H

extern CNPlyrCamera m_plyr_camera;
extern unsigned char CVariable<char, 0, 9> type_info node[8];
extern unsigned char CVariable<char, 0, 3> type_info node[8];

void m_plyr_cameraSetSaveEQ(MC_SAVE_DATA *save);
void m_plyr_cameraSetSavePowrUp(MC_SAVE_DATA *save);
void m_plyr_cameraSetSaveFilament(MC_SAVE_DATA *save);
void m_plyr_cameraSetSaveFilmType(MC_SAVE_DATA *save);
short int* short * _fixed_array_verifyrange<short>(size_t v, size_t _max);

#endif // HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_PHOTO_M_PLYR_CAMERA_H
