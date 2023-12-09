// STATUS: NOT STARTED

#ifndef HOME_AKIRA_KOIDE_ZERO2NP_SRC_SYSTEM_EEIOP_STREAM_AUTO_H
#define HOME_AKIRA_KOIDE_ZERO2NP_SRC_SYSTEM_EEIOP_STREAM_AUTO_H

struct _SND_3D_SET {
	sceVu0FVECTOR *pos;
	sceVu0FVECTOR *vel;
	sceVu0FVECTOR *dir;
};

typedef _SND_3D_SET SND_3D_SET;

void StreamAutoEnable();
void StreamAutoDisable();
int StreamAutoPreload(int file_no, int header_file_no, int priority, int effect, int loop, int vol, int in_time, SND_3D_SET *s3s);
int StreamAutoPlayNonReset(int file_no, int header_file_no, int priority, int effect, int loop, int vol, int in_time, int reset_in_time, SND_3D_SET *s3s, int start_sector);
int StreamAutoPreloadNonReset(int file_no, int header_file_no, int priority, int effect, int loop, int vol, int in_time, int reset_in_time, SND_3D_SET *s3s);
int StreamAutoPlay(int file_no, int header_file_no, int priority, int effect, int loop, int vol, int in_time, SND_3D_SET *s3s);
void StreamAutoSetPlayNum(int iNum, int fade_time);
void StreamAutoSetExclusiveMode(int flg, int fade_time);
int StreamAutoGetOneWrkSize();
void* StreamAutoPlayInit(void *wrk_buffer, int num);
void StreamAutoPlayMain();
int StreamAutoGetInfo(int id, int *num, int *interleave_byte, SOUND_INFO **info);
void StreamAutoAllStop();
void StreamAutoAllPause();
void StreamAutoAllRestart();
void StreamAutoFade(int id, int target_vol, int time);
void StreamAutoFadeOut(int id, int fade_time);
int StreamAutoPause(int id);
int StreamAutoRestart(int id);
int StreamAutoSetPosition(int id, float *pos);
void PrintStreamAutoStatus();
int StreamAutoIsPreload(int id);
int StreamAutoPreloadPlay(int id);
int StreamAutoIsAllStop();
int StreamAutoIsPlaying(int id);
int StreamAutoChangePlaySpeed(int id, float rate);
float StreamAutoNowPlayPercentage(int id);
int StreamAutoGetNowSector(int id);
int StreamAutoSet3D(int id, SND_3D_SET *s3s);

#endif // HOME_AKIRA_KOIDE_ZERO2NP_SRC_SYSTEM_EEIOP_STREAM_AUTO_H
