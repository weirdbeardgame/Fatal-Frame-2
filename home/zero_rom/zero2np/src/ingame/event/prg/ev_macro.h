// STATUS: NOT STARTED

#ifndef HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_EVENT_PRG_EV_MACRO_H
#define HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_EVENT_PRG_EV_MACRO_H

typedef struct {
	unsigned char *addr;
	int size;
} MC_SAVE_DATA;

extern Rep basic_string<char, string_char_traits<char>, ctl::custom_allocator<char> >::nilRep;
extern __vtbl_ptr_type ctl::custom_allocator<char> virtual table[4];
extern __vtbl_ptr_type CFileName virtual table[3];
extern unsigned char CFileName type_info node[12];
extern unsigned char ctl::custom_allocator<char> type_info node[8];
extern unsigned char EV_SAVE_STREAM type_info node[8];
extern unsigned char EV_SAVE_OBJ_STREAM type_info node[8];
extern unsigned char EV_SAVE_POS_STREAM type_info node[8];
extern unsigned char EV_SOUND_CTRL type_info node[8];
extern unsigned char EV_STREAM_CTRL type_info node[8];
extern unsigned char EV_GHOST_CTRL type_info node[8];
extern unsigned char CVariable<char, 0, 9> type_info node[8];
extern unsigned char CVariable<char, 0, 3> type_info node[8];
extern unsigned char basic_string<char, string_char_traits<char>, ctl::custom_allocator<char> > type_info node[8];
extern size_t basic_string<char, string_char_traits<char>, ctl::custom_allocator<char> >::npos;

void EventMacroInit();
void EventMacroLoadInit();
void EventExeFuncCall(EV_EXE_CTRL *exe_ctrl);
void EvSoundPause();
void EvSoundRestart();
void Set_EvGhostID(u_char ghost_type, int ghost_label, int wrk_id);
void Del_EvGhostID(u_char ghost_type, int ghost_label);
int GetEvGhostExist(u_char ghost_type, int ghost_label);
char GetSynchroModeFlg();
void EventEnd_StreamRelease();
void SetSave_EvSaveStream(MC_SAVE_DATA *data);
void SetSave_EvSaveObjStream(MC_SAVE_DATA *data);
void SetSave_EvSavePosStream(MC_SAVE_DATA *data);
void SetSave_EvSaveEffDither(MC_SAVE_DATA *data);
void SetSave_EvSaveScreenEffect(MC_SAVE_DATA *data);
void EvDbg_EventGhostPrint();
EV_SAVE_STREAM* EV_SAVE_STREAM * _fixed_array_verifyrange<EV_SAVE_STREAM>(size_t v, size_t _max);
EV_SAVE_OBJ_STREAM* EV_SAVE_OBJ_STREAM * _fixed_array_verifyrange<EV_SAVE_OBJ_STREAM>(size_t v, size_t _max);
EV_SAVE_POS_STREAM* EV_SAVE_POS_STREAM * _fixed_array_verifyrange<EV_SAVE_POS_STREAM>(size_t v, size_t _max);
EV_SOUND_CTRL* EV_SOUND_CTRL * _fixed_array_verifyrange<EV_SOUND_CTRL>(size_t v, size_t _max);
EV_STREAM_CTRL* EV_STREAM_CTRL * _fixed_array_verifyrange<EV_STREAM_CTRL>(size_t v, size_t _max);
EV_GHOST_CTRL* EV_GHOST_CTRL * _fixed_array_verifyrange<EV_GHOST_CTRL>(size_t v, size_t _max);
basic_string<char,string_char_traits<char>,ctl::custom_allocator<char> >& basic_string<char, string_char_traits<char>, ctl::custom_allocator<char> >::replace(size_t pos, size_t n1, char *s, size_t n2);
basic_string<char,string_char_traits<char>,ctl::custom_allocator<char> >& basic_string<char, string_char_traits<char>, ctl::custom_allocator<char> >::replace(size_t pos1, size_t n1, basic_string<char,string_char_traits<char>,ctl::custom_allocator<char> > &str, size_t pos2, size_t n2);
type_info& CFileName type_info function();
void CFileName::~CFileName(int __in_chrg);
type_info& ctl::custom_allocator<char> type_info function();
type_info& EV_SAVE_STREAM type_info function();
type_info& EV_SAVE_OBJ_STREAM type_info function();
type_info& EV_SAVE_POS_STREAM type_info function();
type_info& EV_SOUND_CTRL type_info function();
type_info& EV_STREAM_CTRL type_info function();
type_info& EV_GHOST_CTRL type_info function();
type_info& basic_string<char, string_char_traits<char>, ctl::custom_allocator<char> > type_info function();

#endif // HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_EVENT_PRG_EV_MACRO_H
