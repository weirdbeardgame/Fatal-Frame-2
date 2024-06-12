#ifndef PLYR_MDL_H
#define PLYR_MDL_H
#include "ChrSort.h"
#include "man_data.h"
#include "mmanage.h"
#include "sgd_types.h"

typedef enum
{
  LTP_MIO_ATTACK_ENEMY = 0,
  LTP_MIO_ENEMY = 1,
  LTP_MIO_EVENT_OBJ = 2,
  LTP_DUMMY_MIO_TIRED = 3,
  LTP_MIO_SPOT_LIGHT = 4,
  LTP_MIO_KAIDAN = 5,
  LTP_MIO_DOOR = 6,
  LTP_MIO_MAYU = 7,
  LTP_MIO_LEAST = -1
} LOOK_TARGET_PRIORITY_MIO;

struct GRA3DEMULATIONLIGHTDATACREATIONDATA
{// 0x40
  /* 0x00 */ float vStaticDirLightColor[4];
  /* 0x10 */ float fAngleScale;
  /* 0x14 */ float fDiffuseScale;
  /* 0x18 */ float fMaplightScale;
  /* 0x1c */ int bEnableSelfreflection;
  /* 0x20 */ int bEmulateSelfreflection;
  /* 0x24 */ int bEnableFlashlight;
  /* 0x28 */ int bEmulateFlashlight;
  /* 0x2c */ int bEnableFlashlight2;
  /* 0x30 */ int bEmulateFlashlight2;
  /* 0x34 */ int bEnableStaticDirLight;
};

struct PLYR_PLYR_DATA : MAN_DATA
{// 0x3c
  /* 0x30 */ int plyr_cam_mdl_p;
  /* 0x34 */ int plyr_light_mdl_p;
  /* 0x38 */ u_char plyr_cam_alpha;
  /* 0x39 */ u_char plyr_light_alpha;

  //private:
  /* 0x3a:0 */ unsigned int plyr_req_other_mdl : 1;
  /* 0x3a:1 */ unsigned int plyr_init_ok : 1;

 public:
  PLYR_PLYR_DATA &operator=(const PLYR_PLYR_DATA &rval);
  /* vtable[1] */ virtual int Setup(int param_1, int param_2, int param_3, int param_4, int param_5);

  /* vtable[2] */ virtual int IsReady()
  {
  }
  void Release();
  void Initialize();

 private:
  void Init();
};

struct _GAME_COSTUME
{
  int mPlyrMdlNo;
  int mSisterMdlNo;
  int mPlyrAcsNo;
  int mSisterAcsNo;
};

typedef _GAME_COSTUME GAME_COSTUME;

struct MDL_REQ_SAVE
{// 0x10
  /* 0x0 */ int mMdlNo;
  /* 0x4 */ int mAnmNo;
  /* 0x8 */ int mBdNo;
  /* 0xc */ int mSmdlNo;

  MDL_REQ_SAVE &operator=(const MDL_REQ_SAVE &rval);
  inline void Set(int m, int a, int b, int s)
  {
    mMdlNo = m;
    mAnmNo = a;
    mBdNo = b;
    mSmdlNo = s;
  }
  void SetSave();
};

struct _LOOK_AT_PARAM
{// 0x20
  /* 0x00 */ sceVu0FVECTOR pos;
  /* 0x10 */ float eye_spd;
  /* 0x14 */ float head_spd;
  /* 0x18 */ float chest_spd;
  /* 0x1c */ int enable;
};

typedef _LOOK_AT_PARAM LOOK_AT_PARAM;

extern PLYR_PLYR_DATA plyr_data;
static MDL_REQ_SAVE plyr_mdl_req_save;
static GAME_COSTUME GameCostume;

static LOOK_AT_PARAM plyr_neck_now_param;

static int ltd_mode;
static int same_priority_count;
static int plyr_neck_no_registered_cnt;

static LOOK_TARGET_PRIORITY_MIO plyr_neck_now_priority;
static LOOK_TARGET_PRIORITY_MIO pre_priority;

int IsReadyPlyrMdl();
void DrawGirl(int in_mirror);
int GetPlyrMdlNo();
void SetPlyrMdlNo(int iMdlNo);
int GetPlyrAcsNo();
void SetPlyrAcsNo(int iMdlNo);
int GetSisterMdlNo();
void SetSisterMdlNo(int iMdlNo);
int GetSisterAcsNo();
void SetSisterAcsNo(int iAcsNo);
void SetPlyrNeckFlg(int flg);

void plyr_mdlInit();
static void PlyrNeckFrameInit();
static void PlyrNeckInit();
void plyr_mdlResetReq();

// void CostumeSetSave(MC_SAVE_DATA *data);

#endif// PLYR_MDL_H
