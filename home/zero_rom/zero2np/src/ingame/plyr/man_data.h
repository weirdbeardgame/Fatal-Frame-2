// STATUS: NOT STARTED

#ifndef HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_PLYR_MAN_DATA_H
#define HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_PLYR_MAN_DATA_H

struct MAN_DATA {
	int man_data_draw_lock_cnt;
private:
	ANI_CTRL *mpAniCtrl;
	ANI_CTRL *mpShadowAniCtrl;
	int mpAcsMdl;
	int mMdlNo;
	int mSMdlNo;
	int mAnmNo;
	int mBDNo;
	int mAcsNo;
	int man_data_bank_no;
	unsigned int man_ready_anm_init : 1;
	unsigned int man_ready_req_mdl : 1;
	unsigned int man_ready_req_smdl : 1;
	unsigned int man_ready_req_anm : 1;
	unsigned int man_ready_req_bd : 1;
	unsigned int man_ready_collision : 1;
public:
	__vtbl_ptr_type *__vtable;
	
	MAN_DATA& operator=();
	MAN_DATA();
	MAN_DATA();
	/* vtable[1] */ virtual int Setup(int mdl_no, int anm_no, int bd_no, int smdl_no, int mAcsNo);
	/* vtable[2] */ virtual int IsReady();
	ANI_CTRL* GetAniCtrl();
	ANI_CTRL* GetShadowAniCtrl();
	void DrawLock();
	void DrawUnlock();
	int IsLocked();
	int GetSndBankNo();
	void AccessoryDraw(int iAlpha);
protected:
	int GetAnmNo();
	int SetupIn(int mdl_no, int anm_no, int bd_no, int smdl_no, int iAcsNo);
	void InitIn(int mdl_p, int anm_p, int smdl_p);
	int ReadyIn(int *mdl_pp, int *anm_pp, int *smdl_pp);
	void ReleaseAnmIn();
	void ReleaseIn();
	void InitializeIn();
};

extern int aBoneLabelTbl[16];
extern __vtbl_ptr_type MAN_DATA virtual table[4];
extern unsigned char MAN_DATA type_info node[8];

void ManItemSGDDraw(HeaderSection *l_hs, ANI_CTRL *pAniCtrl, int iItemLabel);
type_info& MAN_DATA type_info function();

#endif // HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_PLYR_MAN_DATA_H
