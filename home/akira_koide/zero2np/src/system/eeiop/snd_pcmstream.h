// STATUS: NOT STARTED

#ifndef HOME_AKIRA_KOIDE_ZERO2NP_SRC_SYSTEM_EEIOP_SND_PCMSTREAM_H
#define HOME_AKIRA_KOIDE_ZERO2NP_SRC_SYSTEM_EEIOP_SND_PCMSTREAM_H

typedef _PCM_STREAM_START PCM_STREAM_START;
typedef _PCM_STREAM_PLAY PCM_STREAM_PLAY;

enum _SND_PCM_STREAM_ERR {
	SND_PCM_STREAM_OK = 0,
	SND_PCM_STREAM_ERR_IOPSEND = 1,
	SND_PCM_STREAM_ERR_HEADER = 2,
	SND_PCM_STREAM_ERR_NOT_USE = 3,
	SND_PCM_STREAM_ERR_IN_USE = 4,
	SND_PCM_STREAM_ERR_WAIT_QUEUE = 5
};

typedef _SND_PCM_STREAM_ERR SND_PCM_STREAM_ERR;
extern SND_PCM_STREAM_WRK snd_pcm_stream_wrk[2];

void SndPCMStreamInit();
SND_PCM_STREAM_ERR SndPCMStreamStart(int wrk_id, int file_no, int offset);
SND_PCM_STREAM_ERR SndPCMStreamPlay(int wrk_id, int loop2, int vol, int in_time);
void SndPCMStreamMain();
void SndPCMStreamStop(int wrk_id);
void SndPCMStreamAllStop();
void SndPCMStreamPause(int wrk_id);
void SndPCMStreamRestart(int wrk_id);
int SndPCMStreamIsUse(int wrk_id);
int SndPCMStreamIsPreload(int wrk_id);
SND_PCM_STREAM_ERR SndPCMStreamInitWrk(SND_PCM_STREAM_WRK *wrk, int file_no);
void SndPCMStreamFade(int wrk_id, int target_vol, int time);

#endif // HOME_AKIRA_KOIDE_ZERO2NP_SRC_SYSTEM_EEIOP_SND_PCMSTREAM_H
