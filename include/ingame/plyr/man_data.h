#ifndef MAN_DATA_H
#define MAN_DATA_H
#include "motion.h"
#include "sgd_types.h"

struct MAN_DATA
{// 0x30
  /* 0x00 */ int man_data_draw_lock_cnt;

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
  virtual int Setup(int param_1, int param_2, int param_3, int param_4,
                    int param_5);
  virtual int IsReady();
  ANI_CTRL *GetAniCtrl();
  ANI_CTRL *GetShadowAniCtrl();
  void DrawLock();
  void DrawUnlock();
  int IsLocked();
  int GetSndBankNo();
  void AccessoryDraw();

  //protected:
  int GetAnmNo();
  int SetupIn(int mdl_no, int anm_no, int bd_no, int smdl_no, int iAcsNo);
  void InitIn(int mdl_p, int anm_p, int smdl_p);
  int ReadyIn(int *mdl_pp, int *anm_pp, int *smdl_pp);
  void ReleaseAnmIn();
  void ReleaseIn();
  void InitializeIn();
};

#endif// MAN_DATA_H
