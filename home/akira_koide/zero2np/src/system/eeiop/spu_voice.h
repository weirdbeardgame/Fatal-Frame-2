// STATUS: NOT STARTED

#ifndef HOME_AKIRA_KOIDE_ZERO2NP_SRC_SYSTEM_EEIOP_SPU_VOICE_H
#define HOME_AKIRA_KOIDE_ZERO2NP_SRC_SYSTEM_EEIOP_SPU_VOICE_H

extern int core_voices[2];

void InitSPUVoice();
void InitSPUVoiceCore(int core);
int GetSPUVoiceCore(int core);
void FreeSPUVoiceCore(int core, int voice_no);

#endif // HOME_AKIRA_KOIDE_ZERO2NP_SRC_SYSTEM_EEIOP_SPU_VOICE_H
