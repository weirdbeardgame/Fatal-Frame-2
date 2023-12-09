// STATUS: NOT STARTED

#ifndef HOME_ZERO_ROM_ZERO2NP_SRC_DEBUG_DEBUG_H
#define HOME_ZERO_ROM_ZERO2NP_SRC_DEBUG_DEBUG_H

extern int dbg_spu_mem_disp;
extern int dbg_system_mem_disp;
extern int dbg_mdl_mem_disp;
extern int dbg_cmn_mem_disp;
extern int dbg_iop_mem_disp;
extern int dbg_ene_no;
extern int dbg_enemy_button;
extern Rep basic_string<char, string_char_traits<char>, ctl::custom_allocator<char> >::nilRep;
extern size_t basic_string<char, string_char_traits<char>, ctl::custom_allocator<char> >::npos;
extern unsigned char CVariable<char, 0, 9> type_info node[8];
extern unsigned char CVariable<char, 0, 3> type_info node[8];
extern bool _Alloc_traits<basic_string<char, string_char_traits<char>, ctl::custom_allocator<char> >, ctl::custom_allocator<basic_string<char, string_char_traits<char>, ctl::custom_allocator<char> > > >::_S_instanceless;
extern bool _Alloc_traits<sce_dirent, ctl::custom_allocator<sce_dirent> >::_S_instanceless;
extern bool _Alloc_traits<IEditObject *, ctl::custom_allocator<IEditObject *> >::_S_instanceless;

void SPU_draw_rect_func(int x, int y, int w, int h, int rgba);
void SPU_draw_line_func(int x1, int y1, int x2, int y2, int rgba);
void EachDebugMain();
void DebugMenu();
void InitDebug();
void DebugMain();
int DebugEnd();
void init_Debug_Menu();
void end_Debug_Menu();
GPHASE_ENUM one_Debug_Menu(GPHASE_ENUM dummy);

#endif // HOME_ZERO_ROM_ZERO2NP_SRC_DEBUG_DEBUG_H
