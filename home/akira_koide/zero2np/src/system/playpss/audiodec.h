// STATUS: NOT STARTED

#ifndef HOME_AKIRA_KOIDE_ZERO2NP_SRC_SYSTEM_PLAYPSS_AUDIODEC_H
#define HOME_AKIRA_KOIDE_ZERO2NP_SRC_SYSTEM_PLAYPSS_AUDIODEC_H

typedef struct {
	char id[4];
	int size;
	int type;
	int rate;
	int ch;
	int interSize;
	int loopStart;
	int loopEnd;
} SpuStreamHeader;

typedef struct {
	char id[4];
	int size;
} SpuStreamBody;

typedef struct {
	int state;
	SpuStreamHeader sshd;
	SpuStreamBody ssbd;
	int hdrCount;
	u_char *data;
	int put;
	int count;
	int size;
	int totalBytes;
	int iopBuff;
	int iopBuffSize;
	int iopLastPos;
	int iopPausePos;
	int totalBytesSent;
	int iopZero;
	int iopZeroSize;
} AudioDec;


int audioDecCreate(AudioDec *ad, u_char *buff, int buffSize, int iopBuff, int iopBuffSize, u_char *zeroBuff, int iopZeroBuff, int zeroBuffSize, int audio_vol, int auto_dma_core);
int audioDecDelete(AudioDec *ad);
void audioDecPause(AudioDec *ad);
void audioDecResume(AudioDec *ad);
void audioDecStart(AudioDec *ad);
void audioDecReset(AudioDec *ad);
void audioDecBeginPut(AudioDec *ad, u_char **ptr0, int *len0, u_char **ptr1, int *len1);
void audioDecEndPut(AudioDec *ad, int size);
int audioDecIsPreset(AudioDec *ad);
int audioDecSendToIOP(AudioDec *ad);

#endif // HOME_AKIRA_KOIDE_ZERO2NP_SRC_SYSTEM_PLAYPSS_AUDIODEC_H
