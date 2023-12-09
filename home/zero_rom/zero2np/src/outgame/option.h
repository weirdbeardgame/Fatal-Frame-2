// STATUS: NOT STARTED

#ifndef HOME_ZERO_ROM_ZERO2NP_SRC_OUTGAME_OPTION_H
#define HOME_ZERO_ROM_ZERO2NP_SRC_OUTGAME_OPTION_H

struct OPTION_WRK {
	int brightness;
	int snd_volume;
	u_char pad_vib;
	u_char pad_type;
	u_char view_vertical;
	u_char ana_replace;
	u_char credits;
	u_char snd_output;
	u_char move_operate;
	u_char pad;
};

typedef struct {
	int mode;
	int now_place;
	int next_place;
	int anm_alpha;
	int now_tex;
	int main_step;
	int anm_step;
	int save_step;
	int vib_time;
	int test_vib_flg;
	int window;
	int yn_csr;
	int cursor;
	int next_csr;
	int old_csr;
	int old_csr2;
} OPT_CTRL;

extern OPT_CTRL *oc;
extern void *opt_og_tex_addr;
extern void *opt_top_tex_addr;
extern void *opt_brn_tex_addr;
extern void *opt_key_tex_addr;
extern OPT_CTRL opt_ctrl;
extern OPTION_WRK optm;

void InitOptionSetup(OPTION_WRK *ow);
void OptionInit(int mode);
void OptionMain();
void OptionEnd();
void OptPK2SendVram(int tex_id, void *tex_addr);
void OptSetOptWrk();
void OptSoundSetupRef(OPTION_WRK *ow);
void SetSave_Option(MC_SAVE_DATA *data);
void OptionBackGroundLoadReq();
void OptionMemFree();
void OptionVibChange(int sw);
int GetOptionVib();

#endif // HOME_ZERO_ROM_ZERO2NP_SRC_OUTGAME_OPTION_H
