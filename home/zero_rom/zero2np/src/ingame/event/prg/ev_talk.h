// STATUS: NOT STARTED

#ifndef HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_EVENT_PRG_EV_TALK_H
#define HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_EVENT_PRG_EV_TALK_H

typedef struct {
	int msg_id;
	int subtitle_label;
} TALK_DATA;

struct fixed_array<TALK_DATA,16> : fixed_array_base<TALK_DATA,16,TALK_DATA[16]> {
};

typedef struct {
	char data_num;
	char data_pos;
	u_char cam_flg;
	int talk_type;
	fixed_array<TALK_DATA,16> data;
} TALK_TBL;

extern unsigned char TALK_TBL type_info node[8];
extern unsigned char TALK_DATA type_info node[8];

void EvTalkInit();
void TalkTblInit(u_char tbl_id);
void TalkDataAdd(u_char tbl_id, int msg_id, int subtitle_label);
void TalkTypeChange(u_char tbl_id, int talk_type);
int TalkExeMain(u_char tbl_id);
void TalkCamSet(u_char tbl_id, u_char on_off);
void SetSave_EvTalkTbl(MC_SAVE_DATA *data);
TALK_TBL* TALK_TBL * _fixed_array_verifyrange<TALK_TBL>(size_t v, size_t _max);
TALK_DATA* TALK_DATA * _fixed_array_verifyrange<TALK_DATA>(size_t v, size_t _max);
int* int * _fixed_array_verifyrange<int>(size_t v, size_t _max);
type_info& TALK_TBL type_info function();
type_info& TALK_DATA type_info function();

#endif // HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_EVENT_PRG_EV_TALK_H
