// STATUS: NOT STARTED

#ifndef HOME_AKIRA_KOIDE_ZERO2NP_SRC_SYSTEM_EEIOP_SND_UTIL_H
#define HOME_AKIRA_KOIDE_ZERO2NP_SRC_SYSTEM_EEIOP_SND_UTIL_H

typedef _AUTO_BD_ERR AUTO_BD_ERR;

int snd_utilGetOneWrkSize();
void* snd_utilAutoBDInit(void *buffer, int num);
AUTO_BD_ERR snd_utilAutoRelease(int snd_buf_id, int bank_id);
AUTO_BD_ERR snd_utilAutoBDPlay(int file_no, int header_file_no, int effect, int loop, int vol, int pitch, int in_time, SND_3D_SET *s3s);
void snd_utilAutoBDMain();
int GetVacantAutoBDWrk();

#endif // HOME_AKIRA_KOIDE_ZERO2NP_SRC_SYSTEM_EEIOP_SND_UTIL_H
