// STATUS: NOT STARTED

#ifndef HOME_AKIRA_KOIDE_ZERO2NP_SRC_SYSTEM_EEIOP_SND_BUFFER_H
#define HOME_AKIRA_KOIDE_ZERO2NP_SRC_SYSTEM_EEIOP_SND_BUFFER_H

typedef _SOUND_BUF_PLAY SOUND_BUF_PLAY;

void SndBufInit();
void SndBufAllStop();
void SndBufAllStopLoopSnd();
void SndBufAllPause();
void SndBufAllRestart();
int SndBufPlay(int adrs, int core, int effect, int vol, int bvol, int pitch, int bpitch, int pan, int fade_time, int loop, int type, void *s3d, int s3d_free, int adsr1, int adsr2, int loopstart, int loopend);
void SndBufferPrintStatus();
void SndBufPlayMain();
void SndBufStop(int id);
void SndBufPause(int id);
void SndBufRestart(int id);
void SndBufVolFade(int id, int vol, int frame);
void SndBufPitchSet(int id, int pitch);
void SndBufFadeStop(int id, int time);
int SndBufIsPlaying(int id);
void SndBufSetPosition(int id, float *pos);
void SndBufFadePitch(int id, int pitch, int time);
void SndBufSet3D(int id, SND_3D_SET *s3s);

#endif // HOME_AKIRA_KOIDE_ZERO2NP_SRC_SYSTEM_EEIOP_SND_BUFFER_H
