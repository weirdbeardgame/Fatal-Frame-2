// STATUS: NOT STARTED

#ifndef HOME_ZERO_ROM_ZERO2NP_SRC_SYSTEM_MC_DAT_SAVE_DATA_H
#define HOME_ZERO_ROM_ZERO2NP_SRC_SYSTEM_MC_DAT_SAVE_DATA_H

extern void (*save_system_data[3])(/* parameters unknown */);
extern void (*save_game_data[50])(/* parameters unknown */);
extern void (*save_play_data_head[2])(/* parameters unknown */);
extern void (*save_album_data[3])(/* parameters unknown */);
extern unsigned char CVariable<char, 0, 9> type_info node[8];
extern unsigned char CVariable<char, 0, 3> type_info node[8];


#endif // HOME_ZERO_ROM_ZERO2NP_SRC_SYSTEM_MC_DAT_SAVE_DATA_H
