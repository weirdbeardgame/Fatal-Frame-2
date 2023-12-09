// STATUS: NOT STARTED

#ifndef HOME_ZERO_ROM_ZERO2NP_SRC_SYSTEM_PAD_PAD_H
#define HOME_ZERO_ROM_ZERO2NP_SRC_SYSTEM_PAD_PAD_H

typedef short unsigned int u_short;

// warning: multiple differing types with the same name (#306, fields size not equal)
struct PAD_STRUCT {
	int port;
	int slot;
	u_long128 pad_dma_buf[16];
	short unsigned int now;
	short unsigned int old;
	short unsigned int cnt[16];
	short unsigned int cnt_bak[16];
	short unsigned int one;
	short unsigned int rpt;
	short unsigned int rpt_time;
	unsigned char pad_direct[6];
	char flags;
	char step;
	char id;
	unsigned char analog[4];
	unsigned char push[12];
	short unsigned int an_cnt[2];
	short unsigned int an_cnt_bak[2];
	float an_rot[2];
	float an_rot_bak[2];
	unsigned char an_dir[2];
	unsigned char an_dir_bak[2];
};

extern u_short sce_pad[16];
extern short unsigned int **paddat;
extern unsigned char **pushdat;

int InitPad();
int padIsConnected(int iId);
int GetPadDUALSHOCK2(int iId);
int GetPadStateStable(int iId);
int PadSyncCallback();
int PadReadFunc(PAD_STRUCT *psp, int p_id);
void SetAnlgInfo(PAD_STRUCT *psp, int p_id);
u_short VibrateRequest(u_short p_id, u_short act1, u_short act2);
u_short VibrateRequest1(u_short p_id, u_short act_1);
u_short VibrateRequest2(u_short p_id, u_short act_2);
void PadClearCount(int p_id);
void PadAnalogInit();
void PadAnalogMain();
int GetPadAnalogRpt(int pad_label);

#endif // HOME_ZERO_ROM_ZERO2NP_SRC_SYSTEM_PAD_PAD_H
