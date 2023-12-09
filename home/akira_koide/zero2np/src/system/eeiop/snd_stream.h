// STATUS: NOT STARTED

#ifndef HOME_AKIRA_KOIDE_ZERO2NP_SRC_SYSTEM_EEIOP_SND_STREAM_H
#define HOME_AKIRA_KOIDE_ZERO2NP_SRC_SYSTEM_EEIOP_SND_STREAM_H

typedef _EEIOP_STREAM_STATUS EEIOP_STREAM_STATUS;
typedef _STREAM_START STREAM_START;
typedef _STREAM_PLAY STREAM_PLAY;

enum _SND_STREAM_ERR {
	SND_STREAM_OK = 0,
	SND_STREAM_ERR_IOPSEND = 1,
	SND_STREAM_ERR_HEADER = 2,
	SND_STREAM_ERR_NOT_USE = 3,
	SND_STREAM_ERR_IN_USE = 4,
	SND_STREAM_ERR_VOICE = 5,
	SND_STREAM_ERR_SPU_MEM = 6,
	SND_STREAM_ERR_WAIT_QUEUE = 7
};

typedef _SND_STREAM_ERR SND_STREAM_ERR;

void SndStreamInit(int load_priority);
SND_STREAM_ERR SndStreamStartHeaderOnMemory(int wrk_id, int file_no, void *header, int offset);
SND_STREAM_ERR SndStreamStart(int wrk_id, int file_no, int header_file_no, int offset);
void SndStreamFade(int wrk_id, int target_vol, int time);
int SndStreamIsHeaderReady(int wrk_id);
SND_STREAM_ERR SndStreamPlay(int wrk_id, int effect, int loop2, int vol, int in_time, SND_3D_SET *s3s, float play_spd, int pitch);
void SndStreamMain();
char* SndStreamPrintStatus(EEIOP_STREAM_STATUS status);
void SndStreamFadeStop(int wrk_id, int time);
void SndStreamAllStop();
void SndStreamPause(int wrk_id);
void SndStreamRestart(int wrk_id);
void SndStreamSetPosition(int wrk_id, float *pos);
int SndStreamIsUse(int wrk_id);
int SndStreamIsPreload(int wrk_id);
SND_STREAM_ERR SndStreamGetInfo(int wrk_id, int *nchannel, int *interleave_byte, SOUND_INFO **info);
int SndStreamGetEndOffset(int wrk_id);
int SndStreamGetNowOffset(int wrk_id);
SND_STREAM_ERR SndStreamChangePlaySpeed(int wrk_id, float rate);
void SndStreamSet3D(int wrk_id, SND_3D_SET *s3s);
void SndStreamFadePitch(int wrk_id, int pitch, int time);
void SetStreamHeaderSub(SND_STREAM_WRK *wrk, HXD_HEADER *header);
int SetIRQCore(SND_STREAM_WRK *wrk);

#endif // HOME_AKIRA_KOIDE_ZERO2NP_SRC_SYSTEM_EEIOP_SND_STREAM_H
