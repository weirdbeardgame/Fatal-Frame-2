// STATUS: NOT STARTED

#include "mc_check_card.h"

typedef struct {
	int port;
	int slot;
	int type;
	int free;
	int format;
} MC_INFO;

typedef struct {
	char step;
	char retry_cnt;
	char unformat_flg;
	int port;
	int slot;
} MC_CHECK_CARD_CTRL;

typedef struct {
	int port;
	int slot;
} MC_CHECK_CARD_EVERY_FRAME;

static MC_INFO mc_info;
static MC_CHECK_CARD_CTRL mc_check_card_ctrl;
static MC_CHECK_CARD_EVERY_FRAME mc_check_card_every_frame;

void MemoryCardInfoCtrlInit() {
  memset(&mc_info,0,0x14);
  mc_info.slot = -1;
  mc_info.port = -1;
  return;
}

void MemoryCardGetCardInfoInit(int port, int slot) {
  mc_check_card_ctrl.slot = slot;
  mc_check_card_ctrl.retry_cnt = '\x04';
  mc_check_card_ctrl.port = port;
  mc_check_card_ctrl.step = '\0';
  mc_check_card_ctrl.unformat_flg = '\0';
  return;
}

void MemoryCardCheckEveryFrameInit(int port, int slot) {
  mc_check_card_every_frame.port = port;
  mc_check_card_every_frame.slot = slot;
  MemoryCardGetCardInfoInit__Fii(port,slot);
  return;
}

int MemoryCardGetCardInfoMain() {
	int res;
	int mc_res;
	int result;
	
  char cVar1;
  int iVar2;
  int iVar3;
  int result;
  
  result = 0;
  iVar3 = 0;
  cVar1 = mc_check_card_ctrl.retry_cnt;
  if (mc_check_card_ctrl.step == '\0') {
    iVar2 = MemoryCardGetCardInfoReq__Fii(mc_check_card_ctrl.port,mc_check_card_ctrl.slot);
    cVar1 = mc_check_card_ctrl.retry_cnt;
    if (iVar2 == 0) {
      mc_check_card_ctrl.step = '\x01';
    }
    else if (mc_check_card_ctrl.retry_cnt < '\x01') {
      iVar3 = -10;
    }
    else if (iVar2 == -100) {
      MemoryCardAssert__FPce("Error! sceMcInit forgets");
      cVar1 = mc_check_card_ctrl.retry_cnt;
    }
    else if (iVar2 == -0xd2) {
      MemoryCardAssert__FPce("PATH Error! MemoryCardGetCardInfoMain");
      cVar1 = mc_check_card_ctrl.retry_cnt;
    }
    else {
      cVar1 = mc_check_card_ctrl.retry_cnt + -1;
      if (iVar2 == -200) {
        mc_check_card_ctrl.step = '\x02';
        cVar1 = mc_check_card_ctrl.retry_cnt;
      }
    }
  }
  mc_check_card_ctrl.retry_cnt = cVar1;
  if (mc_check_card_ctrl.step != '\x01') goto LAB_001df640;
  iVar2 = MemoryCardExeEndSync__FPi(&result);
  if (iVar2 == 1) {
    iVar2 = GetAccessMemoryCardType__Fv();
    if (iVar2 != 2) {
      iVar3 = -0x14;
      goto LAB_001df640;
    }
    iVar2 = GetAccessMemoryCardFormat__Fv();
    cVar1 = '\x01';
    if (iVar2 == 1) {
      if (result == 0) {
        iVar3 = 1;
        goto LAB_001df640;
      }
      if (result != -2) {
        iVar3 = result;
        if (result < -1) {
          if (result != -5) {
            iVar3 = -0x14;
          }
        }
        else if (result != -1) {
          iVar3 = -0x14;
        }
        goto LAB_001df640;
      }
      if ('\0' < mc_check_card_ctrl.unformat_flg) {
        iVar3 = -2;
        goto LAB_001df640;
      }
    }
    else if ('\0' < mc_check_card_ctrl.unformat_flg) {
      iVar3 = -2;
      goto LAB_001df640;
    }
  }
  else {
    cVar1 = mc_check_card_ctrl.unformat_flg;
    if (iVar2 != -1) goto LAB_001df640;
  }
  mc_check_card_ctrl.unformat_flg = cVar1;
  mc_check_card_ctrl.step = '\0';
LAB_001df640:
  if ((mc_check_card_ctrl.step == '\x02') &&
     (iVar2 = MemoryCardExeEndSync__FPi(&result), iVar2 != 0)) {
    mc_check_card_ctrl.step = '\0';
  }
  return iVar3;
}

int MemoryCardGetCardInfoReq(int port, int slot) {
  int iVar1;
  
  mc_info.port = port;
  mc_info.slot = slot;
  iVar1 = sceMcGetInfo(port,slot,0x4b4758,0x4b475c,0x4b4760);
  return iVar1;
}

int MemoryCardCheckEveryFrameMain() {
	int res;
	int mc_res;
	
  int iVar1;
  
  iVar1 = MemoryCardGetCardInfoMain__Fv();
  if (iVar1 == 1) {
    MemoryCardGetCardInfoInit__Fii(mc_check_card_every_frame.port,mc_check_card_every_frame.slot);
    iVar1 = 1;
  }
  else if (-1 < iVar1) {
    iVar1 = 0;
  }
  return iVar1;
}

int GetAccessMemoryCardPort() {
	int port;
	
  int iVar1;
  
  iVar1 = mc_info.port;
  if (1 < (uint)mc_info.port) {
    iVar1 = -1;
  }
  return iVar1;
}

int GetAccessMemoryCardSlot() {
	int slot;
	
  int iVar1;
  
  iVar1 = mc_info.slot;
  if (1 < (uint)mc_info.slot) {
    iVar1 = -1;
  }
  return iVar1;
}

int GetAccessMemoryCardType() {
  return mc_info.type;
}

int GetAccessMemoryCardFreeCluster() {
  return mc_info.free;
}

int GetAccessMemoryCardFormat() {
  return mc_info.format;
}

void MemoryCardSetAccessPort(int port) {
  mc_info.port = port;
  return;
}
