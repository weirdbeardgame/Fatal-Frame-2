// STATUS: NOT STARTED

#ifndef HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_EVENT_PRG_EV_DISP_H
#define HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_EVENT_PRG_EV_DISP_H


void EvDispInit();
void EvDispMain();
int CheckEvDisp2DDataLoad();
void EvDisp2DEndRelease();
void EvDisp2DStartReq(int x, int y, int file_label, int fade_in_time, u_char win_flg, int base_label);
void EvDisp2DEndReq(int fade_out_time);
void EvChapterDispEndRelease();
void EvChapterDispStartReq(u_char chapter_num);
int EvChapterIsDisp();
void EvItemNameDispStartReq(int msg_type, int msg_id, int fade_in_time);
void EvItemNameDispEndReq(int fade_out_time);
int* int * _fixed_array_verifyrange<int>(size_t v, size_t _max);

#endif // HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_EVENT_PRG_EV_DISP_H
