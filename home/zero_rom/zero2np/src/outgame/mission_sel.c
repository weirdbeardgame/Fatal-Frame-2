// STATUS: NOT STARTED

#include "mission_sel.h"

typedef struct {
	char step;
	char next_phase;
	int stream_id;
} MISSION_SEL_CTRL;

typedef struct {
	char anim_step;
	char anim_timer;
} MISSION_SEL_DISP;

typedef struct {
	MC_SAVE_DATA aMC;
	void *pAddr;
} MIS_SAVE_DATA;

static void *mission_sel_tex_addr = NULL;
static void *out_game_cmn_tex = NULL;
static int MissionYesNo = 0;
static int MissionListTop = 0;
static int MissionCsrY = 0;
static int MissionMode = 0;
static int MissionMiniYCnt = 0;
static int MissionMiniCsr = 0;
static int MissionBlackOutCnt = 0;
static void *MissionSaveDatPtr = NULL;
static MISSION_TBL MissionTblList[25];
unsigned char PLYR_ITEM type_info node[8];
unsigned char CVariable<char, 0, 9> type_info node[8];
unsigned char CVariable<char, 0, 3> type_info node[8];
static MISSION_SEL_CTRL mission_sel_ctrl;
static MISSION_SEL_DISP mission_sel_disp;
static int MissionList[25][4];
static int MissionMdlWork[4];
static int MissionGage[4];

static void _fixed_array_assert(char *strType, size_t v0, size_t v1) {
	static char *str = 0x3c04c0;
	
  g3ddbgAssert__FbPCce(false,str_646);
  return (type_info *)v;
}

static void** void * * _fixed_array_verifyrange<void *>(size_t v, size_t _max) {
  if (_max <= v) {
    __tf9PLYR_ITEM(0x3f31d0,_max);
  }
  return (void **)0x0;
}

static char** char * * _fixed_array_verifyrange<char *>(size_t v, size_t _max) {
  if (_max <= v) {
    __tf9PLYR_ITEM(0x3f31d8,_max);
  }
  return (char **)0x0;
}

static unsigned int** unsigned int * * _fixed_array_verifyrange<unsigned int *>(size_t v, size_t _max) {
  if (_max <= v) {
    __tf9PLYR_ITEM(0x3c0508,_max);
  }
  return (uint **)0x0;
}

int MissionGetTimePal(int *pHour, int *pMin, int *pSec, int iFrame) {
	int iBaseSec;
	
  int iVar1;
  int iVar2;
  
  iVar1 = GetPALMode__Fv();
  iVar2 = 0x19;
  if (iVar1 == 0) {
    iVar2 = 0x1e;
  }
  iVar1 = iVar2 * 0xe10;
  if (iVar1 == 0) {
    trap(7);
  }
  *pHour = iFrame / iVar1;
  *pMin = (iFrame % iVar1) / (iVar2 * 0x3c);
  *pSec = ((iFrame % iVar1) % (iVar2 * 0x3c)) / iVar2;
  return 0;
}

int MissionSetTimePal(int iHour, int iMin, int iSec) {
	int iBaseSec;
	
  int iVar1;
  int iVar2;
  
  iVar1 = GetPALMode__Fv();
  iVar2 = 0x19;
  if (iVar1 == 0) {
    iVar2 = 0x1e;
  }
  return iHour * iVar2 * 0xe10 + iMin * iVar2 * 0x3c + iSec * iVar2;
}

int MissionGetYesNo() {
  return MissionYesNo;
}

int MissionGetID() {
	static char __FUNCTION__[13] = {
		/* [0] = */ 77,
		/* [1] = */ 105,
		/* [2] = */ 115,
		/* [3] = */ 115,
		/* [4] = */ 105,
		/* [5] = */ 111,
		/* [6] = */ 110,
		/* [7] = */ 71,
		/* [8] = */ 101,
		/* [9] = */ 116,
		/* [10] = */ 73,
		/* [11] = */ 68,
		/* [12] = */ 0
	};
	int i;
	
  uint uVar1;
  
  uVar1 = MissionCsrY + MissionListTop;
  if (0x18 < uVar1) {
    SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
    PrintAssertReal("NO Mission No[%d]");
    uVar1 = 0xffffffff;
  }
  return uVar1;
}

int MissionCheckEnd() {
  int iVar1;
  
  if ((((MissionCsrY != 0) || (iVar1 = 1, MissionListTop != 0)) && (iVar1 = 0, MissionCsrY == 5)) &&
     (iVar1 = 2, MissionListTop != 0x13)) {
    iVar1 = 0;
  }
  return iVar1;
}

int MissionGetPrize(int iMissionID) {
	static char __FUNCTION__[16] = {
		/* [0] = */ 77,
		/* [1] = */ 105,
		/* [2] = */ 115,
		/* [3] = */ 115,
		/* [4] = */ 105,
		/* [5] = */ 111,
		/* [6] = */ 110,
		/* [7] = */ 71,
		/* [8] = */ 101,
		/* [9] = */ 116,
		/* [10] = */ 80,
		/* [11] = */ 114,
		/* [12] = */ 105,
		/* [13] = */ 122,
		/* [14] = */ 101,
		/* [15] = */ 0
	};
	
  int iVar1;
  
  if ((uint)iMissionID < 0x19) {
    iVar1 = MissionTblList[iMissionID].iPrize;
  }
  else {
    SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
    PrintAssertReal("no MissionID[%d]");
    iVar1 = -1;
  }
  return iVar1;
}

int MissionGetType(int iMissionID) {
	static char __FUNCTION__[15] = {
		/* [0] = */ 77,
		/* [1] = */ 105,
		/* [2] = */ 115,
		/* [3] = */ 115,
		/* [4] = */ 105,
		/* [5] = */ 111,
		/* [6] = */ 110,
		/* [7] = */ 71,
		/* [8] = */ 101,
		/* [9] = */ 116,
		/* [10] = */ 84,
		/* [11] = */ 121,
		/* [12] = */ 112,
		/* [13] = */ 101,
		/* [14] = */ 0
	};
	
  int iVar1;
  
  if ((uint)iMissionID < 0x19) {
    iVar1 = (int)(short)MissionTblList[iMissionID].sType;
  }
  else {
    SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
    PrintAssertReal("no MissionID[%d]");
    iVar1 = -1;
  }
  return iVar1;
}

int MissionGetTassei(int iClearType) {
	int i;
	int iCnt;
	int iRank;
	
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = 0;
  iVar3 = 0;
  if (iClearType == 5) {
    iClearType = 4;
  }
  do {
    iVar2 = iVar1 + 1;
    iVar1 = MissionGetRank3__Fi(iVar1);
    if ((iVar1 != -1) && (iVar1 <= iClearType)) {
      iVar3 = iVar3 + 1;
    }
    iVar1 = iVar2;
  } while (iVar2 < 0x19);
  iVar1 = iVar3 << 2;
  if (iVar3 == 0) {
    iVar1 = 0;
  }
  return iVar1;
}

int MissionSetStat(int iMissionID, int iStat) {
	static char __FUNCTION__[15] = {
		/* [0] = */ 77,
		/* [1] = */ 105,
		/* [2] = */ 115,
		/* [3] = */ 115,
		/* [4] = */ 105,
		/* [5] = */ 111,
		/* [6] = */ 110,
		/* [7] = */ 83,
		/* [8] = */ 101,
		/* [9] = */ 116,
		/* [10] = */ 83,
		/* [11] = */ 116,
		/* [12] = */ 97,
		/* [13] = */ 116,
		/* [14] = */ 0
	};
	int *pStat;
	int ret;
	
  int iVar1;
  int iVar2;
  
  if ((uint)iMissionID < 0x19) {
    iVar1 = MissionList[iMissionID][0];
    iVar2 = 0;
    if (((iVar1 < iStat) && (MissionList[iMissionID][0] = iStat, iVar2 = 1, iVar1 < 2)) &&
       (1 < iStat)) {
      iVar2 = 2;
    }
  }
  else {
    SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
    PrintAssertReal("no MissionID[%d]");
    iVar2 = 0;
  }
  return iVar2;
}

int MissionGetScore(int iMissionID) {
	static char __FUNCTION__[16] = {
		/* [0] = */ 77,
		/* [1] = */ 105,
		/* [2] = */ 115,
		/* [3] = */ 115,
		/* [4] = */ 105,
		/* [5] = */ 111,
		/* [6] = */ 110,
		/* [7] = */ 71,
		/* [8] = */ 101,
		/* [9] = */ 116,
		/* [10] = */ 83,
		/* [11] = */ 99,
		/* [12] = */ 111,
		/* [13] = */ 114,
		/* [14] = */ 101,
		/* [15] = */ 0
	};
	int iType;
	
  uint uVar1;
  int iVar2;
  
  uVar1 = MissionGetType__Fi(iMissionID);
  if (uVar1 < 4) {
    iVar2 = MissionList[iMissionID][uVar1];
  }
  else {
    SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
    PrintAssertReal("NO Score Type [%d]");
    iVar2 = -1;
  }
  return iVar2;
}

int MissionGetStat(int iMissionID, int iType) {
	static char __FUNCTION__[15] = {
		/* [0] = */ 77,
		/* [1] = */ 105,
		/* [2] = */ 115,
		/* [3] = */ 115,
		/* [4] = */ 105,
		/* [5] = */ 111,
		/* [6] = */ 110,
		/* [7] = */ 71,
		/* [8] = */ 101,
		/* [9] = */ 116,
		/* [10] = */ 83,
		/* [11] = */ 116,
		/* [12] = */ 97,
		/* [13] = */ 116,
		/* [14] = */ 0
	};
	
  int iVar1;
  
  if ((uint)iMissionID < 0x19) {
    if ((uint)iType < 4) {
      iVar1 = MissionList[iMissionID][iType];
    }
    else {
      SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
      PrintAssertReal("NO Score Type [%d]");
      iVar1 = -2;
    }
  }
  else {
    SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
    PrintAssertReal("no MissionID[%d]");
    iVar1 = -1;
  }
  return iVar1;
}

int MissionGetRankPoint(int iMissionID, int iNum) {
	int i;
	int iType;
	
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar1 = MissionGetType__Fi(iMissionID);
  iVar3 = 0;
  piVar2 = MissionTblList[iMissionID].iRank;
  do {
    if (iVar1 == 1) {
      if (iNum <= *piVar2) {
        return iVar3;
      }
    }
    else if (*piVar2 <= iNum) {
      return iVar3;
    }
    iVar3 = iVar3 + 1;
    piVar2 = piVar2 + 1;
  } while (iVar3 < 5);
  return -1;
}

int MissionGetRank(int iMissionID, int iNum) {
  int iVar1;
  
  if (1 < MissionList[iMissionID][0]) {
    iVar1 = MissionGetRankPoint__Fii(iMissionID,iNum);
    return iVar1;
  }
  return -1;
}

int MissionGetRank3(int iMissionID) {
  int iVar1;
  
  iVar1 = MissionGetType__Fi(iMissionID);
  iVar1 = MissionGetRank__Fii(iMissionID,MissionList[iMissionID][iVar1]);
  return iVar1;
}

int MissionCheckRecord(int iMissionID, int iType, int iNum) {
	static char __FUNCTION__[19] = {
		/* [0] = */ 77,
		/* [1] = */ 105,
		/* [2] = */ 115,
		/* [3] = */ 115,
		/* [4] = */ 105,
		/* [5] = */ 111,
		/* [6] = */ 110,
		/* [7] = */ 67,
		/* [8] = */ 104,
		/* [9] = */ 101,
		/* [10] = */ 99,
		/* [11] = */ 107,
		/* [12] = */ 82,
		/* [13] = */ 101,
		/* [14] = */ 99,
		/* [15] = */ 111,
		/* [16] = */ 114,
		/* [17] = */ 100,
		/* [18] = */ 0
	};
	
  int iVar1;
  char *str;
  
  if ((uint)iMissionID < 0x19) {
    iVar1 = iMissionID * 4;
    if (iType == 2) {
LAB_002165fc:
      return (uint)(MissionList[iVar1 + iType] < iNum);
    }
    if (iType < 3) {
      if (iType == 1) {
        return (uint)(iNum < MissionList[iMissionID][1]);
      }
    }
    else if (iType == 3) {
      iVar1 = iMissionID << 2;
      goto LAB_002165fc;
    }
    SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
    str = "NO Score Type [%d]";
  }
  else {
    SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
    str = "no MissionID[%d]";
  }
  PrintAssertReal(str);
  return -1;
}

void MissionSetNewRecord(int iMissionID, int iType, int iNum) {
  int iVar1;
  
  iVar1 = MissionCheckRecord__Fiii(iMissionID,iType,iNum);
  if (iVar1 == 1) {
    MissionList[iMissionID][iType] = iNum;
  }
  return;
}

void MissionSelSave(MC_SAVE_DATA *data) {
  data->size = 400;
  data->addr = (uchar *)MissionList;
  return;
}

void MissionSelTblInit() {
	int i;
	
  int iVar1;
  int (*paiVar2) [4];
  int iVar3;
  
  paiVar2 = MissionList;
  iVar3 = 0x18;
  do {
    (*paiVar2)[0] = 0;
    iVar3 = iVar3 + -1;
    iVar1 = MissionSetTimePal__Fiii(99,0x3b,0x3b);
    (*paiVar2)[1] = iVar1;
    (*paiVar2)[2] = -1;
    (*paiVar2)[3] = -1;
    paiVar2 = paiVar2[1];
  } while (-1 < iVar3);
  return;
}

static void MissionKeepSaveData() {
	static char __FUNCTION__[20] = {
		/* [0] = */ 77,
		/* [1] = */ 105,
		/* [2] = */ 115,
		/* [3] = */ 115,
		/* [4] = */ 105,
		/* [5] = */ 111,
		/* [6] = */ 110,
		/* [7] = */ 75,
		/* [8] = */ 101,
		/* [9] = */ 101,
		/* [10] = */ 112,
		/* [11] = */ 83,
		/* [12] = */ 97,
		/* [13] = */ 118,
		/* [14] = */ 101,
		/* [15] = */ 68,
		/* [16] = */ 97,
		/* [17] = */ 116,
		/* [18] = */ 97,
		/* [19] = */ 0
	};
	int iSize;
	
  int size;
  
  size = GetMemoryCardDataSize__Fii(0,2);
  if (0xefff < size) {
    SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
    PrintAssertReal("BackUp Size Over[%x]");
  }
  MissionMdlWork[0] = GetPlyrMdlNo__Fv();
  MissionMdlWork[1] = GetPlyrAcsNo__Fv();
  MissionMdlWork[2] = GetSisterMdlNo__Fv();
  MissionMdlWork[3] = GetSisterAcsNo__Fv();
  PushGage__15CNEquipTraySavePi(&m_plyr_camera.eq_tray.mSave,MissionGage);
  MissionSaveDatPtr = GetDataMemoryArea__Fi(size);
  SetMemoryCardSaveDataToBuff__FPcii((char *)MissionSaveDatPtr,0,2);
  return;
}

static void MissionResetSaveData() {
	static char __FUNCTION__[21] = {
		/* [0] = */ 77,
		/* [1] = */ 105,
		/* [2] = */ 115,
		/* [3] = */ 115,
		/* [4] = */ 105,
		/* [5] = */ 111,
		/* [6] = */ 110,
		/* [7] = */ 82,
		/* [8] = */ 101,
		/* [9] = */ 115,
		/* [10] = */ 101,
		/* [11] = */ 116,
		/* [12] = */ 83,
		/* [13] = */ 97,
		/* [14] = */ 118,
		/* [15] = */ 101,
		/* [16] = */ 68,
		/* [17] = */ 97,
		/* [18] = */ 116,
		/* [19] = */ 97,
		/* [20] = */ 0
	};
	
  DevelopMemoryCardLoadData__FPcii((char *)MissionSaveDatPtr,0,2);
  PopGage__15CNEquipTraySavePi(&m_plyr_camera.eq_tray.mSave,MissionGage);
  SetPlyrMdlNo__Fi(MissionMdlWork[0]);
  SetPlyrAcsNo__Fi(MissionMdlWork[1]);
  SetSisterMdlNo__Fi(MissionMdlWork[2]);
  SetSisterAcsNo__Fi(MissionMdlWork[3]);
  return;
}

static void MissionPushCameraDataEQ(MIS_SAVE_DATA *pSaveData) {
  uchar *__src;
  int iVar1;
  void *__dest;
  
  m_plyr_cameraSetSaveEQ__FP12MC_SAVE_DATA(&pSaveData->aMC);
  __dest = GetDataMemoryArea__Fi((pSaveData->aMC).size);
  __src = (pSaveData->aMC).addr;
  iVar1 = (pSaveData->aMC).size;
  pSaveData->pAddr = __dest;
  memcpy(__dest,__src,(long)iVar1);
  return;
}

static void MissionPushCameraData(MIS_SAVE_DATA *pSaveData) {
  uchar *__src;
  int iVar1;
  void *__dest;
  
  m_plyr_cameraSetSavePowrUp__FP12MC_SAVE_DATA(&pSaveData->aMC);
  __dest = GetDataMemoryArea__Fi((pSaveData->aMC).size);
  __src = (pSaveData->aMC).addr;
  iVar1 = (pSaveData->aMC).size;
  pSaveData->pAddr = __dest;
  memcpy(__dest,__src,(long)iVar1);
  return;
}

static void MissionPushMissionData(MIS_SAVE_DATA *pSaveData) {
  uchar *__src;
  int iVar1;
  void *__dest;
  
  MissionSelSave__FP12MC_SAVE_DATA(&pSaveData->aMC);
  __dest = GetDataMemoryArea__Fi((pSaveData->aMC).size);
  __src = (pSaveData->aMC).addr;
  iVar1 = (pSaveData->aMC).size;
  pSaveData->pAddr = __dest;
  memcpy(__dest,__src,(long)iVar1);
  return;
}

static void MissionPushGen(MIS_SAVE_DATA *pSaveData) {
  uchar *__src;
  int iVar1;
  void *__dest;
  
  SetSave_PlyrLevelGem__FP12MC_SAVE_DATA(&pSaveData->aMC);
  __dest = GetDataMemoryArea__Fi((pSaveData->aMC).size);
  __src = (pSaveData->aMC).addr;
  iVar1 = (pSaveData->aMC).size;
  pSaveData->pAddr = __dest;
  memcpy(__dest,__src,(long)iVar1);
  return;
}

static void MissionResetSaveDataKeepCam() {
	int iScore;
	MIS_SAVE_DATA aMcCam;
	MIS_SAVE_DATA aMcCamEQ;
	MIS_SAVE_DATA aMcMission;
	MIS_SAVE_DATA aGenNum;
	
  int score;
  MIS_SAVE_DATA aMcCam;
  MIS_SAVE_DATA aMcCamEQ;
  MIS_SAVE_DATA aMcMission;
  MIS_SAVE_DATA aGenNum;
  
  MissionPushCameraDataEQ__FP13MIS_SAVE_DATA(&aMcCamEQ);
  MissionPushCameraData__FP13MIS_SAVE_DATA(&aMcCam);
  MissionPushMissionData__FP13MIS_SAVE_DATA(&aMcMission);
  MissionPushGen__FP13MIS_SAVE_DATA(&aGenNum);
  score = GetPlayData_Score__Fv();
  IngameWrkInit__Fii(0,0);
  MissionResetSaveData__Fv();
  SetPlayData_Score__Fi(score);
  if (aMcCam.pAddr != (void *)0x0) {
    memcpy(aMcCam.aMC.addr,aMcCam.pAddr,(long)aMcCam.aMC.size);
    LiberateDataMemoryArea__FPv(aMcCam.pAddr);
    aMcCam.pAddr = (void *)0x0;
  }
  if (aMcCamEQ.pAddr != (void *)0x0) {
    memcpy(aMcCamEQ.aMC.addr,aMcCamEQ.pAddr,(long)aMcCamEQ.aMC.size);
    LiberateDataMemoryArea__FPv(aMcCamEQ.pAddr);
    aMcCamEQ.pAddr = (void *)0x0;
  }
  if (aMcMission.pAddr != (void *)0x0) {
    memcpy(aMcMission.aMC.addr,aMcMission.pAddr,(long)aMcMission.aMC.size);
    LiberateDataMemoryArea__FPv(aMcMission.pAddr);
    aMcMission.pAddr = (void *)0x0;
  }
  if (aGenNum.pAddr != (void *)0x0) {
    memcpy(aGenNum.aMC.addr,aGenNum.pAddr,(long)aGenNum.aMC.size);
    LiberateDataMemoryArea__FPv(aGenNum.pAddr);
  }
  return;
}

static void MissionInitData(int iMissionID, int iLevel) {
	int iScore;
	MIS_SAVE_DATA aMcCam;
	MIS_SAVE_DATA aMcCamEQ;
	MIS_SAVE_DATA aMcMission;
	MIS_SAVE_DATA aGenNum;
	
  int score;
  MIS_SAVE_DATA aMcCam;
  MIS_SAVE_DATA aMcCamEQ;
  MIS_SAVE_DATA aMcMission;
  MIS_SAVE_DATA aGenNum;
  
  MissionPushCameraDataEQ__FP13MIS_SAVE_DATA(&aMcCamEQ);
  MissionPushCameraData__FP13MIS_SAVE_DATA(&aMcCam);
  MissionPushMissionData__FP13MIS_SAVE_DATA(&aMcMission);
  MissionPushGen__FP13MIS_SAVE_DATA(&aGenNum);
  score = GetPlayData_Score__Fv();
  IngameWrkInit__Fii(iMissionID,iLevel);
  SetPlayData_Score__Fi(score);
  if (aMcCam.pAddr != (void *)0x0) {
    memcpy(aMcCam.aMC.addr,aMcCam.pAddr,(long)aMcCam.aMC.size);
    LiberateDataMemoryArea__FPv(aMcCam.pAddr);
    aMcCam.pAddr = (void *)0x0;
  }
  if (aMcCamEQ.pAddr != (void *)0x0) {
    memcpy(aMcCamEQ.aMC.addr,aMcCamEQ.pAddr,(long)aMcCamEQ.aMC.size);
    LiberateDataMemoryArea__FPv(aMcCamEQ.pAddr);
    aMcCamEQ.pAddr = (void *)0x0;
  }
  if (aMcMission.pAddr != (void *)0x0) {
    memcpy(aMcMission.aMC.addr,aMcMission.pAddr,(long)aMcMission.aMC.size);
    LiberateDataMemoryArea__FPv(aMcMission.pAddr);
    aMcMission.pAddr = (void *)0x0;
  }
  if (aGenNum.pAddr != (void *)0x0) {
    memcpy(aGenNum.aMC.addr,aGenNum.pAddr,(long)aGenNum.aMC.size);
    LiberateDataMemoryArea__FPv(aGenNum.pAddr);
  }
  return;
}

void MissionReleaseSaveData() {
  if (MissionSaveDatPtr != (void *)0x0) {
    LiberateDataMemoryArea__FPv(MissionSaveDatPtr);
    MissionSaveDatPtr = (void *)0x0;
  }
  return;
}

void MissionSetItem(int iMissionID) {
	int i;
	MISSION_TBL *pTblDat;
	int iFilList[5];
	int iItemID;
	int iNum;
	int iItemID;
	int iNum;
	int iItemID;
	int iNum;
	int iItemID;
	int iNum;
	int iItemID;
	int iNum;
	
  bool bVar1;
  char cVar2;
  char cVar3;
  uint uVar4;
  ulong *puVar5;
  undefined8 uVar6;
  fixed_array<PLYR_ITEM,58> *pfVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  int *piVar11;
  int iFilList [5];
  
  piVar11 = iFilList;
  piVar8 = iFilList;
  pfVar7 = &plyr_item;
  iVar10 = 0;
  do {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Z9PLYR_ITEM_UiUi_PX01(iVar10,0x3a);
    ((fixed_array_base<PLYR_ITEM,58,PLYR_ITEM[58]> *)&((PLYR_ITEM *)pfVar7)->item_id)->m_aData[0].
    item_id = 0xff;
                    /* end of inlined section */
    iVar9 = iVar10 + 1;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Z9PLYR_ITEM_UiUi_PX01(iVar10,0x3a);
    ((PLYR_ITEM *)pfVar7)->have_num = 0;
                    /* end of inlined section */
    pfVar7 = (fixed_array<PLYR_ITEM,58> *)((int)pfVar7 + 8);
    iVar10 = iVar9;
  } while (iVar9 < 0x3a);
  cVar2 = MissionTblList[iMissionID].cFilm[0];
  if (cVar2 < '\x01') {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Z9PLYR_ITEM_UiUi_PX01(1,0x3a);
    plyr_item.field0_0x0.m_aData[1].item_id = 0xff;
  }
  else {
    _fixed_array_verifyrange__H1Z9PLYR_ITEM_UiUi_PX01(1,0x3a);
    plyr_item.field0_0x0.m_aData[1].item_id = 1;
  }
  _fixed_array_verifyrange__H1Z9PLYR_ITEM_UiUi_PX01(1,0x3a);
                    /* end of inlined section */
  cVar3 = MissionTblList[iMissionID].cFilm[1];
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  plyr_item.field0_0x0.m_aData[1].have_num = (int)cVar2;
  if (cVar3 < '\x01') {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Z9PLYR_ITEM_UiUi_PX01(2,0x3a);
    plyr_item.field0_0x0.m_aData[2].item_id = 0xff;
  }
  else {
    _fixed_array_verifyrange__H1Z9PLYR_ITEM_UiUi_PX01(2,0x3a);
    plyr_item.field0_0x0.m_aData[2].item_id = 2;
  }
  _fixed_array_verifyrange__H1Z9PLYR_ITEM_UiUi_PX01(2,0x3a);
                    /* end of inlined section */
  cVar2 = MissionTblList[iMissionID].cFilm[2];
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  plyr_item.field0_0x0.m_aData[2].have_num = (int)cVar3;
  if (cVar2 < '\x01') {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Z9PLYR_ITEM_UiUi_PX01(3,0x3a);
    plyr_item.field0_0x0.m_aData[3].item_id = 0xff;
  }
  else {
    _fixed_array_verifyrange__H1Z9PLYR_ITEM_UiUi_PX01(3,0x3a);
    plyr_item.field0_0x0.m_aData[3].item_id = 3;
  }
  _fixed_array_verifyrange__H1Z9PLYR_ITEM_UiUi_PX01(3,0x3a);
                    /* end of inlined section */
  cVar3 = MissionTblList[iMissionID].cFilm[3];
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  plyr_item.field0_0x0.m_aData[3].have_num = (int)cVar2;
  if (cVar3 < '\x01') {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Z9PLYR_ITEM_UiUi_PX01(4,0x3a);
    plyr_item.field0_0x0.m_aData[4].item_id = 0xff;
  }
  else {
    _fixed_array_verifyrange__H1Z9PLYR_ITEM_UiUi_PX01(4,0x3a);
    plyr_item.field0_0x0.m_aData[4].item_id = 4;
  }
  _fixed_array_verifyrange__H1Z9PLYR_ITEM_UiUi_PX01(4,0x3a);
                    /* end of inlined section */
  cVar2 = MissionTblList[iMissionID].cManyouNum;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  plyr_item.field0_0x0.m_aData[4].have_num = (int)cVar3;
  if (cVar2 < '\x01') {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Z9PLYR_ITEM_UiUi_PX01(5,0x3a);
    plyr_item.field0_0x0.m_aData[5].item_id = 0xff;
  }
  else {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Z9PLYR_ITEM_UiUi_PX01(5,0x3a);
    plyr_item.field0_0x0.m_aData[5].item_id = 5;
  }
  _fixed_array_verifyrange__H1Z9PLYR_ITEM_UiUi_PX01(5);
                    /* end of inlined section */
  uVar4 = (int)iFilList + 7U & 7;
  puVar5 = (ulong *)(((int)iFilList + 7U) - uVar4);
  *puVar5 = *puVar5 & -1L << (uVar4 + 1) * 8 | DAT_003c0680 >> (7 - uVar4) * 8;
  iFilList[0] = (undefined4)DAT_003c0680;
  iFilList[1] = DAT_003c0680._4_4_;
  uVar6 = iFilList._0_8_;
  uVar4 = (int)iFilList + 0xfU & 7;
  puVar5 = (ulong *)(((int)iFilList + 0xfU) - uVar4);
  *puVar5 = *puVar5 & -1L << (uVar4 + 1) * 8 | DAT_003c0688 >> (7 - uVar4) * 8;
  iFilList[2] = (undefined4)DAT_003c0688;
  iFilList[3] = DAT_003c0688._4_4_;
  iFilList[4] = (int)PTR_003c0690;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  plyr_item.field0_0x0.m_aData[5].have_num = (int)cVar2;
                    /* end of inlined section */
  iFilList[0] = (int)DAT_003c0680;
  bVar1 = iFilList[0] != -1;
  iFilList._0_8_ = uVar6;
  if (bVar1) {
    iVar10 = 0;
    do {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
      iVar9 = *piVar8;
                    /* end of inlined section */
      piVar8 = piVar8 + 1;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
      _fixed_array_verifyrange__H1Z9PLYR_ITEM_UiUi_PX01(iVar9,0x3a);
      if (0 < plyr_item.field0_0x0.m_aData[iVar9].have_num) {
        _fixed_array_verifyrange__H1Z9PLYR_ITEM_UiUi_PX01(*piVar11,0x3a);
        printf("plyr_item[iFilList[%d]].have_num =  %d\n");
                    /* end of inlined section */
        ItemFilmEquip__Fi(*piVar11);
        break;
      }
                    /* end of inlined section */
      iVar10 = iVar10 + 4;
      piVar11 = piVar11 + 1;
    } while (*piVar8 != -1);
    if (*(int *)((int)iFilList + iVar10) != -1) {
      return;
    }
  }
  ItemFilmEquip__Fi(0);
  return;
}

void MissionSetPlyrStat(int iMissionID) {
	MISSION_TBL *pTblDat;
	
  sis_wrk.cmn_wrk.st.hp = MissionTblList[iMissionID].usSisHp;
  plyr_wrk.cmn_wrk.st.hp = MissionTblList[iMissionID].usPlyrHp;
  return;
}

void PlayMissionSelBGM() {
  StreamAutoAllStop();
  mission_sel_ctrl.stream_id = StreamAutoPlay(0x9d3,0x9d2,0xb,0,1,0x3200,0,(_SND_3D_SET *)0x0);
  return;
}

void MissionSelInit() {
  int iVar1;
  
  mission_sel_ctrl.next_phase = '\0';
  mission_sel_ctrl.step = '\0';
  MissionSelDispInit__Fv();
  iVar1 = CheckIngameMission__Fv();
  if (iVar1 == 0) {
    MissionKeepSaveData__Fv();
    InitPhotoWrk__Fv();
    MissionListTop = 0;
    MissionCsrY = 0;
  }
  mission_sel_tex_addr = GetSetupMsnslPk2Addr__Fv();
  if (out_game_cmn_tex == (void *)0x0) {
    out_game_cmn_tex = SpCmnTexMemLoad__Fi(0x13);
  }
  MissionYesNo = 0;
  MissionMode = 0;
  MissionMiniYCnt = 0;
  MissionMiniCsr = 0;
  MissionBlackOutCnt = 0;
  MisFadeSetMsg__Fi(-1);
  MisFadeSetMsg__Fi((MissionListTop + MissionCsrY) * 3 + 1);
  SetIngameMission__Fi(1);
  return;
}

void MissionSelEnd() {
  int iVar1;
  
  iVar1 = CheckIngameMission__Fv();
  if (iVar1 == 0) {
    MissionResetSaveDataKeepCam__Fv();
    MissionReleaseSaveData__Fv();
    InitPhotoWrk__Fv();
    PopGage__15CNEquipTraySavePi(&m_plyr_camera.eq_tray.mSave,MissionGage);
  }
  out_game_cmn_tex = SpCmnTexMemReleaseSub__FPv(out_game_cmn_tex);
  return;
}

static int MissionSelTexLoadWait() {
  uchar uVar1;
  uint uVar2;
  int iVar3;
  
  uVar1 = GetLanguage__Fv();
  uVar2 = FileLoadIsEnd2((char)uVar1 + 0x111b,mission_sel_tex_addr);
  if (uVar2 != 0) {
    iVar3 = FileLoadIsEnd2(0x13,out_game_cmn_tex);
    uVar2 = (uint)(iVar3 != 0);
  }
  return uVar2;
}

static void MissionSubSelMiniMenu() {
  int iVar1;
  
  if ((*paddat[0x12] == 1) || (*paddat[1] == 1)) {
    mission_sel_ctrl.step = '\x03';
    SystemBankPlay__FiiiiP11_SND_3D_SETii(1,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
    return;
  }
  if (((pad[0].rpt & 0x1000U) == 0) && (iVar1 = GetPadAnalogRpt__Fi(0), iVar1 == 0)) {
    if (((pad[0].rpt & 0x4000U) == 0) && (iVar1 = GetPadAnalogRpt__Fi(1), iVar1 == 0)) {
      if (**paddat == 1) {
        if (MissionMiniCsr == 0) {
          MissionSelOutReq__Fi(2);
        }
        else if (MissionMiniCsr == 1) {
          MissionSelOutReq__Fi(3);
        }
        SystemBankPlay__FiiiiP11_SND_3D_SETii(3,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
      }
      return;
    }
    MissionMiniCsr = MissionMiniCsr + 1;
    if (1 < MissionMiniCsr) {
      MissionMiniCsr = 0;
    }
    SystemBankPlay__FiiiiP11_SND_3D_SETii(0,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
    return;
  }
  iVar1 = MissionMiniCsr + -1;
  MissionMiniCsr = 1;
  if (-1 < iVar1) {
    MissionMiniCsr = iVar1;
  }
  SystemBankPlay__FiiiiP11_SND_3D_SETii(0,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
  return;
}

static void MissionSubSelect() {
  int iVar1;
  
  if (*paddat[0x12] == 1) {
    SystemBankPlay__FiiiiP11_SND_3D_SETii(3,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
    mission_sel_ctrl.step = '\x03';
    goto LAB_00217448;
  }
  if (((pad[0].rpt & 0x1000U) == 0) && (iVar1 = GetPadAnalogRpt__Fi(0), iVar1 == 0)) {
    if (((pad[0].rpt & 0x4000U) == 0) && (iVar1 = GetPadAnalogRpt__Fi(1), iVar1 == 0)) {
      if ((pad[0].rpt & 8U) == 0) {
        if ((pad[0].rpt & 4U) == 0) {
          if (**paddat == 1) {
            MissionYesNo = 1;
            MissionMode = 2;
            MisFadeSetMsg__Fi(0x55);
            SystemBankPlay__FiiiiP11_SND_3D_SETii(3,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
          }
          else if ((ushort)*paddat[1] == 1) {
            MissionMode = 3;
            MissionYesNo = (uint)(ushort)*paddat[1];
            MisFadeSetMsg__Fi(0x56);
            SystemBankPlay__FiiiiP11_SND_3D_SETii(1,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
          }
          goto LAB_00217448;
        }
        MissionListTop = MissionListTop + -6;
        goto LAB_00217398;
      }
      MissionListTop = MissionListTop + 6;
    }
    else {
      MissionCsrY = MissionCsrY + 1;
      if (MissionCsrY < 6) goto LAB_00217448;
      MissionCsrY = 5;
      MissionListTop = MissionListTop + 1;
    }
    if (0x13 < MissionListTop) {
      MissionListTop = 0x13;
    }
  }
  else {
    MissionCsrY = MissionCsrY + -1;
    if (-1 < MissionCsrY) goto LAB_00217448;
    MissionCsrY = 0;
    MissionListTop = MissionListTop + -1;
LAB_00217398:
    if (MissionListTop < 0) {
      MissionListTop = 0;
    }
  }
LAB_00217448:
  if ((((((pad[0].rpt & 0xcU) != 0) || ((pad[0].rpt & 0x1000U) != 0)) ||
       (iVar1 = GetPadAnalogRpt__Fi(0), iVar1 != 0)) ||
      (((pad[0].rpt & 0x4000U) != 0 || (iVar1 = GetPadAnalogRpt__Fi(1), iVar1 != 0)))) &&
     (iVar1 = MisFadeSetMsg__Fi((MissionListTop + MissionCsrY) * 3 + 1), iVar1 != 0)) {
    SystemBankPlay__FiiiiP11_SND_3D_SETii(0,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
  }
  return;
}

static int MissionWindowYesNo() {
  int iVar1;
  
  if ((((pad[0].one & 0xa000U) != 0) || (iVar1 = GetPadAnalogRpt__Fi(3), iVar1 != 0)) ||
     (iVar1 = GetPadAnalogRpt__Fi(2), iVar1 != 0)) {
    MissionYesNo = MissionYesNo ^ 1;
    SystemBankPlay__FiiiiP11_SND_3D_SETii(0,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
  }
  if (**paddat == 1) {
    SystemBankPlay__FiiiiP11_SND_3D_SETii(3,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
    iVar1 = 2;
    if (MissionYesNo == 0) {
      iVar1 = 1;
    }
  }
  else if (*paddat[1] == 1) {
    SystemBankPlay__FiiiiP11_SND_3D_SETii(1,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
    iVar1 = -1;
  }
  else {
    iVar1 = 0;
  }
  return iVar1;
}

static void MissionSubOK() {
  int iVar1;
  
  iVar1 = MissionWindowYesNo__Fv();
  if (iVar1 == 1) {
    mission_sel_ctrl.step = '\x04';
    FileLoadCancel2(0xd35,(void *)0xd4ec00,(undefined1 *)0x0,(void *)0x0);
    FileLoadCancel2(0xd36,(void *)0xd4ec00,(undefined1 *)0x0,(void *)0x0);
    LoadReq__FiUi(0xd37,0xd4ec00);
    MissionBlackOutCnt = 0;
  }
  else {
    if (iVar1 < 2) {
      if (iVar1 != -1) {
        return;
      }
    }
    else if (iVar1 != 2) {
      return;
    }
    MissionMode = 0;
    MisFadeSetMsg__Fi((MissionListTop + MissionCsrY) * 3 + 1);
  }
  return;
}

static void MissionSubExitOK() {
  int iVar1;
  
  iVar1 = MissionWindowYesNo__Fv();
  if (iVar1 == 1) {
    MissionSelOutReq__Fi(0);
    return;
  }
  if (iVar1 < 2) {
    if (iVar1 != -1) {
      return;
    }
  }
  else if (iVar1 != 2) {
    return;
  }
  MissionMode = 0;
  MisFadeSetMsg__Fi((MissionListTop + MissionCsrY) * 3 + 1);
  return;
}

void MissionSelMain() {
	static char __FUNCTION__[15] = {
		/* [0] = */ 77,
		/* [1] = */ 105,
		/* [2] = */ 115,
		/* [3] = */ 115,
		/* [4] = */ 105,
		/* [5] = */ 111,
		/* [6] = */ 110,
		/* [7] = */ 83,
		/* [8] = */ 101,
		/* [9] = */ 108,
		/* [10] = */ 77,
		/* [11] = */ 97,
		/* [12] = */ 105,
		/* [13] = */ 110,
		/* [14] = */ 0
	};
	
  int iVar1;
  
  switch(mission_sel_ctrl.step) {
  case '\0':
    iVar1 = MissionSelTexLoadWait__Fv();
    if (iVar1 != 0) {
      mission_sel_ctrl.step = '\x01';
    }
    break;
  case '\x01':
    if (MissionMode == 1) {
      MissionSubSelMiniMenu__Fv();
      return;
    }
    if (MissionMode < 2) {
      if (MissionMode == 0) {
        MissionSubSelect__Fv();
        return;
      }
    }
    else {
      if (MissionMode == 2) {
        MissionSubOK__Fv();
        return;
      }
      if (MissionMode == 3) {
        MissionSubExitOK__Fv();
        return;
      }
    }
    break;
  case '\x02':
    if (mission_sel_disp.anim_step == '\x04') {
      SetMissionSelNextPhase__Fv();
      return;
    }
    break;
  case '\x03':
    if (MissionMode == 1) {
      MissionMiniYCnt = MissionMiniYCnt + -1;
    }
    else {
      MissionMiniYCnt = MissionMiniYCnt + 1;
    }
    if (4 < MissionMiniYCnt - 1U) {
      mission_sel_ctrl.step = '\x01';
      if (MissionMode == 0) {
        MissionMode = 1;
      }
      else if (MissionMode == 1) {
        MissionMode = 0;
      }
    }
    break;
  case '\x04':
    if (MissionBlackOutCnt < 10) {
      MissionBlackOutCnt = MissionBlackOutCnt + 1;
    }
    else {
      iVar1 = FileLoadIsEnd2(0xd37,(void *)0xd4ec00);
      if (iVar1 != 0) {
        MissionSelOutReq__Fi(4);
        return;
      }
    }
    break;
  default:
    SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
    PrintAssertReal("Error! %s");
  }
  return;
}

static void MissionSelOutReq(int iNextPhase) {
  if ((iNextPhase == 0) || (iNextPhase == 4)) {
    StreamAutoFadeOut(mission_sel_ctrl.stream_id,5);
  }
  mission_sel_ctrl.next_phase = (char)iNextPhase;
  mission_sel_ctrl.step = '\x02';
  mission_sel_disp.anim_step = '\x03';
  mission_sel_disp.anim_timer = '\0';
  return;
}

static void SetMissionSelNextPhase() {
	static char __FUNCTION__[23] = {
		/* [0] = */ 83,
		/* [1] = */ 101,
		/* [2] = */ 116,
		/* [3] = */ 77,
		/* [4] = */ 105,
		/* [5] = */ 115,
		/* [6] = */ 115,
		/* [7] = */ 105,
		/* [8] = */ 111,
		/* [9] = */ 110,
		/* [10] = */ 83,
		/* [11] = */ 101,
		/* [12] = */ 108,
		/* [13] = */ 78,
		/* [14] = */ 101,
		/* [15] = */ 120,
		/* [16] = */ 116,
		/* [17] = */ 80,
		/* [18] = */ 104,
		/* [19] = */ 97,
		/* [20] = */ 115,
		/* [21] = */ 101,
		/* [22] = */ 0
	};
	int iMissionID;
	
  int iMissionID;
  
  if (mission_sel_ctrl.next_phase == '\x02') {
    SetNextGPhase__F14GPHASE_ID_ENUM(GID_MISSION_ALBUM);
    return;
  }
  if (mission_sel_ctrl.next_phase < '\x03') {
    if (mission_sel_ctrl.next_phase == '\0') {
      SetNextGPhase__F14GPHASE_ID_ENUM(GID_TITLE_SETUPMENU);
      SetIngameMission__Fi(0);
      StreamAutoAllStop();
      return;
    }
  }
  else {
    if (mission_sel_ctrl.next_phase == '\x03') {
      MissionResetSaveDataKeepCam__Fv();
      PopGage__15CNEquipTraySavePi(&m_plyr_camera.eq_tray.mSave,MissionGage);
      SetNextGPhase__F14GPHASE_ID_ENUM(GID_MISSION_SAVE);
      return;
    }
    if (mission_sel_ctrl.next_phase == '\x04') {
      iMissionID = MissionListTop + MissionCsrY;
      MissionInitData__Fii(iMissionID,1);
      MissionSetItem__Fi(iMissionID);
      MissionSetPlyrStat__Fi(iMissionID);
      EffectSaeHazSetNoDrawFlg__Fi(1);
      FadeOutReq__FUcUcUcUi('\0','\0','\0',0);
      MisDispDeleteFlg__Fi(3);
      ResetGage__15CNEquipTraySave(&m_plyr_camera.eq_tray.mSave);
      SetTitleLoadFlg__Fc('\0');
      SetNextGPhase__F14GPHASE_ID_ENUM(GID_STORY_LOAD_MISSION);
      return;
    }
  }
  SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
  PrintAssertReal("Error! %s");
  return;
}

static void MissionSelDispInit() {
  mission_sel_disp.anim_timer = '\0';
  mission_sel_disp.anim_step = '\0';
  return;
}

void MissionSelDisp() {
  uchar ucAlpha;
  
  if ((mission_sel_ctrl.step < '\x05') && ('\0' < mission_sel_ctrl.step)) {
    ucAlpha = Zero2Anim2D_InOutAnimCtrl__FPcT0ss
                        (&mission_sel_disp.anim_step,&mission_sel_disp.anim_timer,10,5);
    SpCmnStart__FP8SPRT_DAT(mission_tex);
    MissionDrawSelect__FPviiUc(mission_sel_tex_addr,MissionListTop,MissionCsrY,ucAlpha);
    MissionDrawMiniMenu__FPvT0iUcfii
              (out_game_cmn_tex,mission_sel_tex_addr,MissionCsrY,ucAlpha,
               (float)MissionMiniYCnt / 6.0,MissionMiniCsr,(uint)(MissionMode != 1));
    MisFadeProc__FUc(ucAlpha);
  }
  if (0 < MissionBlackOutCnt) {
    SpCmnBlackOut__FUc((uchar)((MissionBlackOutCnt << 7) / 10));
  }
  return;
}

PLYR_ITEM* PLYR_ITEM * _fixed_array_verifyrange<PLYR_ITEM>(size_t v, size_t _max) {
  g3ddbgAssert__FbPCce(false,str_646);
  return (type_info *)v;
}

static void __static_initialization_and_destruction_0(int __initialize_p, int __priority) {
  ulong uVar1;
  undefined local_229;
  undefined4 uStack_228;
  uint local_224;
  int local_220;
  uint local_21c;
  int local_218;
  int local_214;
  int local_210;
  undefined2 local_200;
  undefined2 local_1fe;
  undefined2 local_1fc;
  undefined local_1fa;
  undefined local_1f9;
  undefined local_1f8;
  undefined local_1f7;
  undefined local_1f6;
  undefined local_1f5;
  uint local_1f4;
  int local_1f0;
  uint local_1ec;
  int local_1e8;
  int local_1e4;
  int local_1e0;
  undefined2 local_1d0;
  undefined2 local_1ce;
  undefined2 local_1cc;
  undefined local_1ca;
  char local_1c9;
  undefined local_1c8;
  undefined local_1c7;
  undefined local_1c6;
  undefined local_1c5;
  int local_1c4;
  int local_1c0;
  int local_1bc;
  int local_1b8;
  int local_1b4;
  uint local_1b0;
  undefined2 local_1a0;
  undefined2 local_19e;
  undefined2 local_19c;
  undefined local_19a;
  char local_199;
  undefined local_198;
  undefined local_197;
  undefined local_196;
  undefined local_195;
  int local_194;
  int local_190;
  int local_18c;
  int local_188;
  int local_184;
  int local_180;
  undefined2 local_170;
  undefined2 local_16e;
  undefined2 local_16c;
  undefined local_16a;
  undefined local_169;
  undefined local_168;
  undefined local_167;
  undefined local_166;
  undefined local_165;
  uint local_164;
  int local_160;
  uint local_15c;
  int local_158;
  int local_154;
  int local_150;
  undefined2 local_140;
  undefined2 local_13e;
  undefined2 local_13c;
  undefined local_13a;
  undefined local_139;
  undefined local_138;
  undefined local_137;
  undefined local_136;
  undefined local_135;
  uint local_134;
  int local_130;
  uint local_12c;
  int local_128;
  int local_124;
  int local_120;
  undefined2 local_110;
  undefined2 local_10e;
  undefined2 local_10c;
  undefined local_10a;
  char local_109;
  undefined local_108;
  undefined local_107;
  undefined local_106;
  undefined local_105;
  int local_104;
  int local_100;
  int local_fc;
  int local_f8;
  int local_f4;
  int local_f0;
  undefined2 local_e0;
  undefined2 local_de;
  undefined2 local_dc;
  undefined local_da;
  undefined local_d9;
  undefined local_d8;
  undefined local_d7;
  undefined local_d6;
  undefined local_d5;
  uint local_d4;
  int local_d0;
  uint local_cc;
  int local_c8;
  int local_c4;
  int local_c0;
  undefined2 local_b0;
  undefined2 local_ae;
  undefined2 local_ac;
  undefined local_aa;
  undefined local_a9;
  undefined4 uStack_a8;
  uint local_a4;
  int local_a0;
  uint local_9c;
  int local_98;
  int local_94;
  int local_90;
  undefined2 local_80;
  undefined2 local_7e;
  undefined2 local_7c;
  undefined local_7a;
  char local_79;
  undefined4 uStack_78;
  int local_74;
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  
  if ((__priority == 0xffff) && (__initialize_p == 1)) {
    MissionTblList[0]._0_8_ = DAT_003c0710;
    MissionTblList[0]._8_8_ = DAT_003c0718;
    MissionTblList[0].iRank._0_8_ = DAT_003c0720;
    MissionTblList[0].iRank._8_8_ = DAT_003c0728;
    MissionTblList[0].iRank[4] = DAT_003c0730;
    memset(&local_229,0,5);
    local_224 = 0x5dc;
    local_229 = 10;
    local_220 = MissionSetTimePal__Fiii(0,0,0x14);
    local_21c = MissionSetTimePal__Fiii(0,0,0x19);
    local_218 = MissionSetTimePal__Fiii(0,0,0x1e);
    local_214 = MissionSetTimePal__Fiii(0,0,0x23);
    local_210 = MissionSetTimePal__Fiii(0,0,0x2d);
    MissionTblList._32_8_ =
         CONCAT17(local_229,0x271013880001) << 0x20 | MissionTblList._32_8_ & 0xffffffff;
    MissionTblList[1]._4_8_ =
         CONCAT44(local_224,uStack_228) << 0x20 | CONCAT17(local_229,0x271013880001) >> 0x20;
    MissionTblList[1]._12_8_ = CONCAT44(local_21c,local_220) << 0x20 | (ulong)local_224;
    MissionTblList[1].iRank._4_8_ = CONCAT44(local_214,local_218) << 0x20 | (ulong)local_21c;
    MissionTblList[1].iRank[4] = local_210;
    MissionTblList[1].iRank[3] = local_214;
    MissionTblList[2].sType = (ushort)DAT_003c0738;
    MissionTblList[2].usPlyrHp = DAT_003c0738._2_2_;
    MissionTblList[2].usSisHp = DAT_003c0738._4_2_;
    MissionTblList[2].cManyouNum = DAT_003c0738._6_1_;
    MissionTblList[2].cFilm[0] = DAT_003c0738._7_1_;
    MissionTblList[2].cFilm[1] = (char)DAT_003c0740;
    MissionTblList[2].cFilm[2] = DAT_003c0740._1_1_;
    MissionTblList[2].cFilm[3] = DAT_003c0740._2_1_;
    MissionTblList[2].cFilm[4] = DAT_003c0740._3_1_;
    MissionTblList[2].iPrize = DAT_003c0740._4_4_;
    MissionTblList[2].iRank[0] = (int)DAT_003c0748;
    MissionTblList[2].iRank[1] = DAT_003c0748._4_4_;
    MissionTblList[2].iRank[2] = (int)DAT_003c0750;
    MissionTblList[2].iRank[3] = DAT_003c0750._4_4_;
    MissionTblList[3].sType = 0;
    MissionTblList[3].usPlyrHp = 0;
    MissionTblList[2].iRank[4] = DAT_003c0758;
    MissionTblList._104_8_ = DAT_003c0760 << 0x20 | MissionTblList._104_8_;
    MissionTblList[3]._4_8_ = DAT_003c0768 << 0x20 | DAT_003c0760 >> 0x20;
    MissionTblList[3]._12_8_ = DAT_003c0770 << 0x20 | DAT_003c0768 >> 0x20;
    MissionTblList[3].iRank._4_8_ = DAT_003c0778 << 0x20 | DAT_003c0770 >> 0x20;
    MissionTblList[3].iRank[3] = (int)((ulong)DAT_003c0778 >> 0x20);
    MissionTblList[3].iRank[4] = DAT_003c0780;
    MissionTblList[4].sType = (ushort)DAT_003c0788;
    MissionTblList[4].usPlyrHp = DAT_003c0788._2_2_;
    MissionTblList[4].usSisHp = DAT_003c0788._4_2_;
    MissionTblList[4].cManyouNum = DAT_003c0788._6_1_;
    MissionTblList[4].cFilm[0] = DAT_003c0788._7_1_;
    MissionTblList[4].cFilm[1] = (char)DAT_003c0790;
    MissionTblList[4].cFilm[2] = DAT_003c0790._1_1_;
    MissionTblList[4].cFilm[3] = DAT_003c0790._2_1_;
    MissionTblList[4].cFilm[4] = DAT_003c0790._3_1_;
    MissionTblList[4].iPrize = DAT_003c0790._4_4_;
    MissionTblList[4].iRank[0] = (int)DAT_003c0798;
    MissionTblList[4].iRank[1] = DAT_003c0798._4_4_;
    MissionTblList[4].iRank[2] = (int)DAT_003c07a0;
    MissionTblList[4].iRank[3] = DAT_003c07a0._4_4_;
    MissionTblList[4].iRank[4] = DAT_003c07a8;
    local_1f6 = 4;
    local_1f9 = 0x1e;
    local_200 = 1;
    local_1fe = 10000;
    local_1fc = 10000;
    local_1fa = 1;
    local_1f8 = 0;
    local_1f7 = 0;
    local_1f5 = 0;
    local_1f4 = 3000;
    local_1f0 = MissionSetTimePal__Fiii(0,0,0x37);
    local_1ec = MissionSetTimePal__Fiii(0,1,0x1e);
    local_1e8 = MissionSetTimePal__Fiii(0,1,0x2d);
    local_1e4 = MissionSetTimePal__Fiii(0,3,0);
    local_1e0 = MissionSetTimePal__Fiii(0,5,0);
    uVar1 = CONCAT17(local_1f9,CONCAT16(local_1fa,CONCAT24(local_1fc,CONCAT22(local_1fe,local_200)))
                    );
    MissionTblList._176_8_ = uVar1 << 0x20 | MissionTblList._176_8_ & 0xffffffff;
    MissionTblList[5]._4_8_ =
         CONCAT44(local_1f4,CONCAT13(local_1f5,CONCAT12(local_1f6,CONCAT11(local_1f7,local_1f8))))
         << 0x20 | uVar1 >> 0x20;
    MissionTblList[5]._12_8_ = CONCAT44(local_1ec,local_1f0) << 0x20 | (ulong)local_1f4;
    MissionTblList[5].iRank._4_8_ = CONCAT44(local_1e4,local_1e8) << 0x20 | (ulong)local_1ec;
    MissionTblList[5].iRank[4] = local_1e0;
    MissionTblList[5].iRank[3] = local_1e4;
    MissionTblList[6].sType = (ushort)DAT_003c07b0;
    MissionTblList[6].usPlyrHp = DAT_003c07b0._2_2_;
    MissionTblList[6].usSisHp = DAT_003c07b0._4_2_;
    MissionTblList[6].cManyouNum = DAT_003c07b0._6_1_;
    MissionTblList[6].cFilm[0] = DAT_003c07b0._7_1_;
    MissionTblList[6].cFilm[1] = (char)DAT_003c07b8;
    MissionTblList[6].cFilm[2] = DAT_003c07b8._1_1_;
    MissionTblList[6].cFilm[3] = DAT_003c07b8._2_1_;
    MissionTblList[6].cFilm[4] = DAT_003c07b8._3_1_;
    MissionTblList[6].iPrize = DAT_003c07b8._4_4_;
    MissionTblList[6].iRank[0] = (int)DAT_003c07c0;
    MissionTblList[6].iRank[1] = DAT_003c07c0._4_4_;
    MissionTblList[6].iRank[2] = (int)DAT_003c07c8;
    MissionTblList[6].iRank[3] = DAT_003c07c8._4_4_;
    MissionTblList[7].sType = 0;
    MissionTblList[7].usPlyrHp = 0;
    MissionTblList[6].iRank[4] = DAT_003c07d0;
    MissionTblList._248_8_ = DAT_003c07d8 << 0x20 | MissionTblList._248_8_;
    MissionTblList[7]._4_8_ = DAT_003c07e0 << 0x20 | DAT_003c07d8 >> 0x20;
    MissionTblList[7]._12_8_ = DAT_003c07e8 << 0x20 | DAT_003c07e0 >> 0x20;
    MissionTblList[7].iRank._4_8_ = DAT_003c07f0 << 0x20 | DAT_003c07e8 >> 0x20;
    MissionTblList[7].iRank[3] = (int)((ulong)DAT_003c07f0 >> 0x20);
    MissionTblList[7].iRank[4] = DAT_003c07f8;
    local_1c6 = 3;
    local_1c4 = 4000;
    local_1d0 = 1;
    local_1ce = 10000;
    local_1cc = 10000;
    local_1ca = 1;
    local_1c9 = '\x14';
    local_1c8 = 0;
    local_1c7 = 0;
    local_1c5 = 0;
    local_1c0 = MissionSetTimePal__Fiii(0,0,0x28);
    local_1bc = MissionSetTimePal__Fiii(0,0,0x2d);
    local_1b8 = MissionSetTimePal__Fiii(0,0,0x32);
    local_1b4 = MissionSetTimePal__Fiii(0,1,0x1e);
    local_1b0 = MissionSetTimePal__Fiii(0,2,0);
    MissionTblList[8].usPlyrHp = local_1ce;
    MissionTblList[8].sType = local_1d0;
    MissionTblList[8].usSisHp = local_1cc;
    MissionTblList[8].cManyouNum = local_1ca;
    MissionTblList[8].cFilm[0] = local_1c9;
    MissionTblList[8].cFilm[2] = local_1c7;
    MissionTblList[8].cFilm[1] = local_1c8;
    MissionTblList[8].cFilm[3] = local_1c6;
    MissionTblList[8].cFilm[4] = local_1c5;
    MissionTblList[8].iPrize = local_1c4;
    MissionTblList[8].iRank[1] = local_1bc;
    MissionTblList[8].iRank[0] = local_1c0;
    MissionTblList[8].iRank[3] = local_1b4;
    MissionTblList[8].iRank[2] = local_1b8;
    MissionTblList[9].sType = 0;
    MissionTblList[9].usPlyrHp = 0;
    MissionTblList[8].iRank[4] = local_1b0;
    local_1a0 = 1;
    MissionTblList._320_8_ = DAT_003c0800 << 0x20 | MissionTblList._320_8_;
    MissionTblList[9]._4_8_ = DAT_003c0808 << 0x20 | DAT_003c0800 >> 0x20;
    MissionTblList[9]._12_8_ = DAT_003c0810 << 0x20 | DAT_003c0808 >> 0x20;
    MissionTblList[9].iRank._4_8_ = DAT_003c0818 << 0x20 | DAT_003c0810 >> 0x20;
    MissionTblList[9].iRank[3] = (int)((ulong)DAT_003c0818 >> 0x20);
    MissionTblList[9].iRank[4] = DAT_003c0820;
    local_19e = 5000;
    local_19c = 10000;
    local_19a = 1;
    local_196 = 5;
    local_194 = 3000;
    local_199 = '\x14';
    local_198 = 0;
    local_197 = 0;
    local_195 = 0;
    local_190 = MissionSetTimePal__Fiii(0,3,0x2d);
    local_18c = MissionSetTimePal__Fiii(0,4,0);
    local_188 = MissionSetTimePal__Fiii(0,5,0);
    local_184 = MissionSetTimePal__Fiii(0,6,0x1e);
    local_180 = MissionSetTimePal__Fiii(0,7,0);
    MissionTblList[10].usPlyrHp = local_19e;
    MissionTblList[10].sType = local_1a0;
    MissionTblList[10].usSisHp = local_19c;
    MissionTblList[10].cManyouNum = local_19a;
    MissionTblList[10].cFilm[0] = local_199;
    MissionTblList[10].cFilm[2] = local_197;
    MissionTblList[10].cFilm[1] = local_198;
    MissionTblList[10].cFilm[3] = local_196;
    MissionTblList[10].cFilm[4] = local_195;
    MissionTblList[10].iPrize = local_194;
    MissionTblList[10].iRank[1] = local_18c;
    MissionTblList[10].iRank[0] = local_190;
    MissionTblList[10].iRank[3] = local_184;
    MissionTblList[10].iRank[2] = local_188;
    MissionTblList[10].iRank[4] = local_180;
    local_164 = 5000;
    local_170 = 1;
    local_16e = 5000;
    local_16c = 10000;
    local_16a = 1;
    local_169 = 0x14;
    local_168 = 0;
    local_167 = 0;
    local_166 = 1;
    local_165 = 0;
    local_160 = MissionSetTimePal__Fiii(0,0,0x28);
    local_15c = MissionSetTimePal__Fiii(0,1,0);
    local_158 = MissionSetTimePal__Fiii(0,1,0x1e);
    local_154 = MissionSetTimePal__Fiii(0,2,0);
    local_150 = MissionSetTimePal__Fiii(0,3,0);
    uVar1 = CONCAT17(local_169,CONCAT16(local_16a,CONCAT24(local_16c,CONCAT22(local_16e,local_170)))
                    );
    MissionTblList._392_8_ = uVar1 << 0x20 | MissionTblList._392_8_ & 0xffffffff;
    MissionTblList[11]._4_8_ =
         CONCAT44(local_164,CONCAT13(local_165,CONCAT12(local_166,CONCAT11(local_167,local_168))))
         << 0x20 | uVar1 >> 0x20;
    MissionTblList[11]._12_8_ = CONCAT44(local_15c,local_160) << 0x20 | (ulong)local_164;
    MissionTblList[11].iRank._4_8_ = CONCAT44(local_154,local_158) << 0x20 | (ulong)local_15c;
    MissionTblList[11].iRank[4] = local_150;
    MissionTblList[11].iRank[3] = local_154;
    MissionTblList[12].sType = (ushort)DAT_003c0828;
    MissionTblList[12].usPlyrHp = DAT_003c0828._2_2_;
    MissionTblList[12].usSisHp = DAT_003c0828._4_2_;
    MissionTblList[12].cManyouNum = DAT_003c0828._6_1_;
    MissionTblList[12].cFilm[0] = DAT_003c0828._7_1_;
    MissionTblList[12].cFilm[1] = (char)DAT_003c0830;
    MissionTblList[12].cFilm[2] = DAT_003c0830._1_1_;
    MissionTblList[12].cFilm[3] = DAT_003c0830._2_1_;
    MissionTblList[12].cFilm[4] = DAT_003c0830._3_1_;
    MissionTblList[12].iPrize = DAT_003c0830._4_4_;
    MissionTblList[12].iRank[0] = (int)DAT_003c0838;
    MissionTblList[12].iRank[1] = DAT_003c0838._4_4_;
    MissionTblList[12].iRank[2] = (int)DAT_003c0840;
    MissionTblList[12].iRank[3] = DAT_003c0840._4_4_;
    MissionTblList[13].sType = 0;
    MissionTblList[13].usPlyrHp = 0;
    MissionTblList[12].iRank[4] = DAT_003c0848;
    MissionTblList._464_8_ = DAT_003c0850 << 0x20 | MissionTblList._464_8_;
    MissionTblList[13]._4_8_ = DAT_003c0858 << 0x20 | DAT_003c0850 >> 0x20;
    MissionTblList[13]._12_8_ = DAT_003c0860 << 0x20 | DAT_003c0858 >> 0x20;
    MissionTblList[13].iRank._4_8_ = DAT_003c0868 << 0x20 | DAT_003c0860 >> 0x20;
    MissionTblList[13].iRank[3] = (int)((ulong)DAT_003c0868 >> 0x20);
    MissionTblList[13].iRank[4] = DAT_003c0870;
    MissionTblList[14].sType = (ushort)DAT_003c0878;
    MissionTblList[14].usPlyrHp = DAT_003c0878._2_2_;
    MissionTblList[14].usSisHp = DAT_003c0878._4_2_;
    MissionTblList[14].cManyouNum = DAT_003c0878._6_1_;
    MissionTblList[14].cFilm[0] = DAT_003c0878._7_1_;
    MissionTblList[14].cFilm[1] = (char)DAT_003c0880;
    MissionTblList[14].cFilm[2] = DAT_003c0880._1_1_;
    MissionTblList[14].cFilm[3] = DAT_003c0880._2_1_;
    MissionTblList[14].cFilm[4] = DAT_003c0880._3_1_;
    MissionTblList[14].iPrize = DAT_003c0880._4_4_;
    MissionTblList[14].iRank[0] = (int)DAT_003c0888;
    MissionTblList[14].iRank[1] = DAT_003c0888._4_4_;
    MissionTblList[14].iRank[2] = (int)DAT_003c0890;
    MissionTblList[14].iRank[3] = DAT_003c0890._4_4_;
    MissionTblList[15].sType = 0;
    MissionTblList[15].usPlyrHp = 0;
    MissionTblList[14].iRank[4] = DAT_003c0898;
    MissionTblList._536_8_ = DAT_003c08a0 << 0x20 | MissionTblList._536_8_;
    MissionTblList[15]._4_8_ = DAT_003c08a8 << 0x20 | DAT_003c08a0 >> 0x20;
    MissionTblList[15]._12_8_ = DAT_003c08b0 << 0x20 | DAT_003c08a8 >> 0x20;
    MissionTblList[15].iRank._4_8_ = DAT_003c08b8 << 0x20 | DAT_003c08b0 >> 0x20;
    MissionTblList[15].iRank[3] = (int)((ulong)DAT_003c08b8 >> 0x20);
    MissionTblList[15].iRank[4] = DAT_003c08c0;
    MissionTblList[16].sType = (ushort)DAT_003c08c8;
    MissionTblList[16].usPlyrHp = DAT_003c08c8._2_2_;
    MissionTblList[16].usSisHp = DAT_003c08c8._4_2_;
    MissionTblList[16].cManyouNum = DAT_003c08c8._6_1_;
    MissionTblList[16].cFilm[0] = DAT_003c08c8._7_1_;
    MissionTblList[16].cFilm[1] = (char)DAT_003c08d0;
    MissionTblList[16].cFilm[2] = DAT_003c08d0._1_1_;
    MissionTblList[16].cFilm[3] = DAT_003c08d0._2_1_;
    MissionTblList[16].cFilm[4] = DAT_003c08d0._3_1_;
    MissionTblList[16].iPrize = DAT_003c08d0._4_4_;
    MissionTblList[16].iRank[0] = (int)DAT_003c08d8;
    MissionTblList[16].iRank[1] = DAT_003c08d8._4_4_;
    MissionTblList[16].iRank[2] = (int)DAT_003c08e0;
    MissionTblList[16].iRank[3] = DAT_003c08e0._4_4_;
    MissionTblList[16].iRank[4] = DAT_003c08e8;
    local_139 = 0x1e;
    local_134 = 5000;
    local_136 = 3;
    local_140 = 1;
    local_13e = 10000;
    local_13c = 10000;
    local_13a = 1;
    local_138 = 0;
    local_137 = 0;
    local_135 = 0;
    local_130 = MissionSetTimePal__Fiii(0,1,10);
    local_12c = MissionSetTimePal__Fiii(0,1,0x2d);
    local_128 = MissionSetTimePal__Fiii(0,2,0x1e);
    local_124 = MissionSetTimePal__Fiii(0,3,0);
    local_120 = MissionSetTimePal__Fiii(0,4,0);
    uVar1 = CONCAT17(local_139,CONCAT16(local_13a,CONCAT24(local_13c,CONCAT22(local_13e,local_140)))
                    );
    MissionTblList._608_8_ = uVar1 << 0x20 | MissionTblList._608_8_ & 0xffffffff;
    MissionTblList[17]._4_8_ =
         CONCAT44(local_134,CONCAT13(local_135,CONCAT12(local_136,CONCAT11(local_137,local_138))))
         << 0x20 | uVar1 >> 0x20;
    MissionTblList[17]._12_8_ = CONCAT44(local_12c,local_130) << 0x20 | (ulong)local_134;
    MissionTblList[17].iRank._4_8_ = CONCAT44(local_124,local_128) << 0x20 | (ulong)local_12c;
    MissionTblList[17].iRank[4] = local_120;
    MissionTblList[17].iRank[3] = local_124;
    MissionTblList[18].sType = (ushort)DAT_003c08f0;
    MissionTblList[18].usPlyrHp = DAT_003c08f0._2_2_;
    MissionTblList[18].usSisHp = DAT_003c08f0._4_2_;
    MissionTblList[18].cManyouNum = DAT_003c08f0._6_1_;
    MissionTblList[18].cFilm[0] = DAT_003c08f0._7_1_;
    MissionTblList[18].cFilm[1] = (char)DAT_003c08f8;
    MissionTblList[18].cFilm[2] = DAT_003c08f8._1_1_;
    MissionTblList[18].cFilm[3] = DAT_003c08f8._2_1_;
    MissionTblList[18].cFilm[4] = DAT_003c08f8._3_1_;
    MissionTblList[18].iPrize = DAT_003c08f8._4_4_;
    MissionTblList[18].iRank[0] = (int)DAT_003c0900;
    MissionTblList[18].iRank[1] = DAT_003c0900._4_4_;
    MissionTblList[18].iRank[2] = (int)DAT_003c0908;
    MissionTblList[18].iRank[3] = DAT_003c0908._4_4_;
    MissionTblList[19].sType = 0;
    MissionTblList[19].usPlyrHp = 0;
    MissionTblList[18].iRank[4] = DAT_003c0910;
    MissionTblList._680_8_ = DAT_003c0918 << 0x20 | MissionTblList._680_8_;
    MissionTblList[19]._4_8_ = DAT_003c0920 << 0x20 | DAT_003c0918 >> 0x20;
    MissionTblList[19]._12_8_ = DAT_003c0928 << 0x20 | DAT_003c0920 >> 0x20;
    MissionTblList[19].iRank._4_8_ = DAT_003c0930 << 0x20 | DAT_003c0928 >> 0x20;
    MissionTblList[19].iRank[3] = (int)((ulong)DAT_003c0930 >> 0x20);
    MissionTblList[19].iRank[4] = DAT_003c0938;
    local_109 = '2';
    local_104 = 8000;
    local_106 = 3;
    local_110 = 1;
    local_10e = 10000;
    local_10c = 10000;
    local_10a = 1;
    local_108 = 0;
    local_107 = 0;
    local_105 = 0;
    local_100 = MissionSetTimePal__Fiii(0,0,0x19);
    local_fc = MissionSetTimePal__Fiii(0,1,0x14);
    local_f8 = MissionSetTimePal__Fiii(0,2,0);
    local_f4 = MissionSetTimePal__Fiii(0,3,0);
    local_f0 = MissionSetTimePal__Fiii(0,4,0);
    MissionTblList[20].usPlyrHp = local_10e;
    MissionTblList[20].sType = local_110;
    MissionTblList[20].usSisHp = local_10c;
    MissionTblList[20].cManyouNum = local_10a;
    MissionTblList[20].cFilm[0] = local_109;
    MissionTblList[20].cFilm[2] = local_107;
    MissionTblList[20].cFilm[1] = local_108;
    MissionTblList[20].cFilm[3] = local_106;
    MissionTblList[20].cFilm[4] = local_105;
    MissionTblList[20].iPrize = local_104;
    MissionTblList[20].iRank[1] = local_fc;
    MissionTblList[20].iRank[0] = local_100;
    MissionTblList[20].iRank[3] = local_f4;
    MissionTblList[20].iRank[2] = local_f8;
    MissionTblList[20].iRank[4] = local_f0;
    local_d9 = 0x1e;
    local_dc = 1000;
    local_e0 = 1;
    local_de = 10000;
    local_da = 1;
    local_d4 = 1000;
    local_d8 = 0;
    local_d7 = 0;
    local_d6 = 1;
    local_d5 = 0;
    local_d0 = MissionSetTimePal__Fiii(0,0,0x37);
    local_cc = MissionSetTimePal__Fiii(0,1,0x14);
    local_c8 = MissionSetTimePal__Fiii(0,2,0);
    local_c4 = MissionSetTimePal__Fiii(0,3,0);
    local_c0 = MissionSetTimePal__Fiii(0,4,0);
    uVar1 = CONCAT17(local_d9,CONCAT16(local_da,CONCAT24(local_dc,CONCAT22(local_de,local_e0))));
    MissionTblList._752_8_ = uVar1 << 0x20 | MissionTblList._752_8_ & 0xffffffff;
    MissionTblList[21]._4_8_ =
         CONCAT44(local_d4,CONCAT13(local_d5,CONCAT12(local_d6,CONCAT11(local_d7,local_d8)))) <<
         0x20 | uVar1 >> 0x20;
    MissionTblList[21]._12_8_ = CONCAT44(local_cc,local_d0) << 0x20 | (ulong)local_d4;
    MissionTblList[21].iRank._4_8_ = CONCAT44(local_c4,local_c8) << 0x20 | (ulong)local_cc;
    MissionTblList[21].iRank[4] = local_c0;
    MissionTblList[21].iRank[3] = local_c4;
    local_b0 = 1;
    MissionTblList[22].sType = (ushort)DAT_003c0940;
    MissionTblList[22].usPlyrHp = DAT_003c0940._2_2_;
    MissionTblList[22].usSisHp = DAT_003c0940._4_2_;
    MissionTblList[22].cManyouNum = DAT_003c0940._6_1_;
    MissionTblList[22].cFilm[0] = DAT_003c0940._7_1_;
    MissionTblList[22].cFilm[1] = (char)DAT_003c0948;
    MissionTblList[22].cFilm[2] = DAT_003c0948._1_1_;
    MissionTblList[22].cFilm[3] = DAT_003c0948._2_1_;
    MissionTblList[22].cFilm[4] = DAT_003c0948._3_1_;
    MissionTblList[22].iPrize = DAT_003c0948._4_4_;
    MissionTblList[22].iRank[0] = (int)DAT_003c0950;
    MissionTblList[22].iRank[1] = DAT_003c0950._4_4_;
    MissionTblList[22].iRank[2] = (int)DAT_003c0958;
    MissionTblList[22].iRank[3] = DAT_003c0958._4_4_;
    MissionTblList[22].iRank[4] = DAT_003c0960;
    local_ae = 10000;
    local_ac = 10000;
    local_aa = 1;
    memset(&local_a9,0,5);
    local_a4 = 5000;
    local_a9 = 0x1e;
    local_a0 = MissionSetTimePal__Fiii(0,2,0);
    local_9c = MissionSetTimePal__Fiii(0,2,0x1e);
    local_98 = MissionSetTimePal__Fiii(0,3,0x1e);
    local_94 = MissionSetTimePal__Fiii(0,4,0);
    local_90 = MissionSetTimePal__Fiii(0,5,0);
    uVar1 = CONCAT17(local_a9,CONCAT16(local_aa,CONCAT24(local_ac,CONCAT22(local_ae,local_b0))));
    MissionTblList._824_8_ = uVar1 << 0x20 | MissionTblList._824_8_ & 0xffffffff;
    MissionTblList[23]._4_8_ = CONCAT44(local_a4,uStack_a8) << 0x20 | uVar1 >> 0x20;
    MissionTblList[23]._12_8_ = CONCAT44(local_9c,local_a0) << 0x20 | (ulong)local_a4;
    MissionTblList[23].iRank._4_8_ = CONCAT44(local_94,local_98) << 0x20 | (ulong)local_9c;
    MissionTblList[23].iRank[4] = local_90;
    MissionTblList[23].iRank[3] = local_94;
    local_80 = 1;
    local_7c = 10000;
    local_7a = 1;
    local_7e = 10000;
    memset(&local_79,0,5);
    local_79 = '\x1e';
    local_74 = 10000;
    local_70 = MissionSetTimePal__Fiii(0,3,0x1e);
    local_6c = MissionSetTimePal__Fiii(0,5,0);
    local_68 = MissionSetTimePal__Fiii(0,6,0);
    local_64 = MissionSetTimePal__Fiii(0,7,0);
    MissionTblList[24].iRank[4] = MissionSetTimePal__Fiii(0,8,0);
    MissionTblList[24].usPlyrHp = local_7e;
    MissionTblList[24].sType = local_80;
    MissionTblList[24].usSisHp = local_7c;
    MissionTblList[24].cManyouNum = local_7a;
    MissionTblList[24].cFilm[0] = local_79;
    MissionTblList[24].iPrize = local_74;
    MissionTblList[24].cFilm[1] = (undefined)uStack_78;
    MissionTblList[24].cFilm[2] = uStack_78._1_1_;
    MissionTblList[24].cFilm[3] = uStack_78._2_1_;
    MissionTblList[24].cFilm[4] = uStack_78._3_1_;
    MissionTblList[24].iRank[1] = local_6c;
    MissionTblList[24].iRank[0] = local_70;
    MissionTblList[24].iRank[3] = local_64;
    MissionTblList[24].iRank[2] = local_68;
  }
  return;
}

type_info& PLYR_ITEM type_info function() {
  g3ddbgAssert__FbPCce(false,str_646);
  return (type_info *)v;
}

static void global constructors keyed to MissionGetTimePal() {
  __static_initialization_and_destruction_0(1,0xffff);
  return;
}
