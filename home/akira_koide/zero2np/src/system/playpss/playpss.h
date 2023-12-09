// STATUS: NOT STARTED

#ifndef HOME_AKIRA_KOIDE_ZERO2NP_SRC_SYSTEM_PLAYPSS_PLAYPSS_H
#define HOME_AKIRA_KOIDE_ZERO2NP_SRC_SYSTEM_PLAYPSS_PLAYPSS_H

typedef struct {
	u_int pix[256];
} sceIpuRGB32;

typedef struct {
	u_char *mpegBuff;
	int mpegBuffSize;
	sceIpuRGB32 *rgb32;
	u_int *path3tag;
	void *demuxBuff;
	int demuxBuffSize;
	u_char *audioBuff;
	int audioBuffSize;
	int iopBuff;
	int iopBuffSize;
	u_char *zeroBuff;
	int iopZeroBuff;
	char *read_buf;
	int audio_vol_percent;
	int auto_dma_core;
} playPssRsrcs;

struct _PLAY_PSS_MPEG_INFO {
	int width;
	int height;
};

typedef _PLAY_PSS_MPEG_INFO PLAY_PSS_MPEG_INFO;
extern int iPalVBlankCounter;
extern int iVTCounter;
extern char videoDecStack[2048];
extern int iMovieDecSema;
extern int hid_vblank;

void playPssInit();
void videoDecMain(void *pvd);
void playPssStartNoWait(int (*cbFileRead)(/* parameters unknown */), playPssRsrcs *rsrcs);
int vblankHandler(int val);
void playPssSetNtsc2Pal(int lbNtsc2Pal, int iGSImageAdrs);
int playPssAlreadySendImage();
void playPssStart(int (*cbFileRead)(/* parameters unknown */), playPssRsrcs *rsrcs);
int playPssIsReady();
int playPssMain(playPssRsrcs *rsrcs, int vram_adrs);
void playPssGetMpegInfo(PLAY_PSS_MPEG_INFO *pInfo);
int playPssSetPacket(playPssRsrcs *rsrcs, int vram_adrs, int *pTagEndAdrs);
void playPssStop();
int playPssIsPause();
void playPssPause();
void playPssRestart();
void playPssEnd();

#endif // HOME_AKIRA_KOIDE_ZERO2NP_SRC_SYSTEM_PLAYPSS_PLAYPSS_H
