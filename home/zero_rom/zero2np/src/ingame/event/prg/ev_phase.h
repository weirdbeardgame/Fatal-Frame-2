// STATUS: NOT STARTED

#ifndef HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_EVENT_PRG_EV_PHASE_H
#define HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_EVENT_PRG_EV_PHASE_H

extern unsigned char CVariable<char, 0, 9> type_info node[8];
extern unsigned char CVariable<char, 0, 3> type_info node[8];

void init_EventMsg_Disp();
void end_EventMsg_Disp();
GPHASE_ENUM one_EventMsg_Disp(GPHASE_ENUM dummy);
void init_EventFile_Disp();
void end_EventFile_Disp();
GPHASE_ENUM one_EventFile_Disp(GPHASE_ENUM dummy);

#endif // HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_EVENT_PRG_EV_PHASE_H
