#ifndef MAN_DATA_H
#define MAN_DATA_H
#include "sgd_types.h"
#include "motion.h"

struct MAN_DATA
{ // 0x30
    /* 0x00 */ int man_data_draw_lock_cnt;

private:
    /* 0x04 */ ANI_CTRL *mpAniCtrl;
    /* 0x08 */ ANI_CTRL *mpShadowAniCtrl;
    /* 0x0c */ int mpAcsMdl;
    /* 0x10 */ int mMdlNo;
    /* 0x14 */ int mSMdlNo;
    /* 0x18 */ int mAnmNo;
    /* 0x1c */ int mBDNo;
    /* 0x20 */ int mAcsNo;
    /* 0x24 */ int man_data_bank_no;
    /* 0x28:0 */ unsigned int man_ready_anm_init : 1;
    /* 0x28:1 */ unsigned int man_ready_req_mdl : 1;
    /* 0x28:2 */ unsigned int man_ready_req_smdl : 1;
    /* 0x28:3 */ unsigned int man_ready_req_anm : 1;
    /* 0x28:4 */ unsigned int man_ready_req_bd : 1;
    /* 0x28:5 */ unsigned int man_ready_collision : 1;

public:
    MAN_DATA &operator=(const MAN_DATA &rval);
    MAN_DATA();
    ~MAN_DATA();
    /* vtable[1] */ virtual int Setup();
    /* vtable[2] */ virtual int IsReady();
    ANI_CTRL *GetAniCtrl();
    ANI_CTRL *GetShadowAniCtrl();
    void DrawLock();
    void DrawUnlock();
    int IsLocked();
    int GetSndBankNo();
    void AccessoryDraw();

protected:
    int GetAnmNo();
    int SetupIn();
    void InitIn();
    int ReadyIn();
    void ReleaseAnmIn();
    void ReleaseIn();
    void InitializeIn();
};

#endif // MAN_DATA_H