// STATUS: NOT STARTED

#include "pad.h"

typedef struct {
	int analog_timer[4];
	char rpt_flg[4];
} ANALOG_PAD_CTRL;

u_short sce_pad[16] = {
	/* [0] = */ 4096,
	/* [1] = */ 16384,
	/* [2] = */ 32768,
	/* [3] = */ 8192,
	/* [4] = */ 16,
	/* [5] = */ 64,
	/* [6] = */ 128,
	/* [7] = */ 32,
	/* [8] = */ 4,
	/* [9] = */ 1,
	/* [10] = */ 8,
	/* [11] = */ 2,
	/* [12] = */ 2048,
	/* [13] = */ 256,
	/* [14] = */ 512,
	/* [15] = */ 1024
};

short unsigned int **paddat = NULL;
unsigned char **pushdat = NULL;
static ANALOG_PAD_CTRL analog_pad_ctrl;

int InitPad() {
	PAD_STRUCT *psp;
	int i;
	int j;
	int loop;
	int port_slot[2][2];
	
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  uint uVar4;
  ulong *puVar5;
  short *psVar6;
  uchar *puVar7;
  float *pfVar8;
  undefined *puVar9;
  int iVar10;
  uint16 *puVar11;
  int iVar12;
  int (*paiVar13) [2];
  PAD_STRUCT__5_1294 *pPVar14;
  int iVar15;
  int port_slot [2] [2];
  
  paiVar13 = port_slot;
  iVar15 = 0;
  puVar9 = (undefined *)((int)port_slot + 7);
  uVar4 = (uint)puVar9 & 7;
  puVar5 = (ulong *)(puVar9 + -uVar4);
  *puVar5 = *puVar5 & -1L << (uVar4 + 1) * 8 | (ulong)DAT_003c29d8 >> (7 - uVar4) * 8;
  port_slot[0] = DAT_003c29d8;
  puVar9 = (undefined *)((int)port_slot[1] + 7);
  uVar4 = (uint)puVar9 & 7;
  puVar5 = (ulong *)(puVar9 + -uVar4);
  *puVar5 = *puVar5 & -1L << (uVar4 + 1) * 8 | (ulong)DAT_003c29e0 >> (7 - uVar4) * 8;
  port_slot[1] = DAT_003c29e0;
  scePadInit(0);
  pPVar14 = pad;
  iVar12 = 0x316c8a;
  do {
    iVar10 = 5;
    uVar3 = *(undefined4 *)((int)paiVar13 + 4);
    puVar9 = (undefined *)(iVar12 + 0x185);
    *(undefined4 *)(iVar12 + -10) = *(undefined4 *)paiVar13;
    *(undefined4 *)(iVar12 + -6) = uVar3;
    *(undefined2 *)(iVar12 + 0x136) = 0;
    *(undefined2 *)(iVar12 + 0x138) = 0;
    *(undefined2 *)(iVar12 + 0x17a) = 0;
    *(undefined2 *)(iVar12 + 0x17c) = 0;
    *(undefined2 *)(iVar12 + 0x17e) = 0;
    *(undefined *)(iVar12 + 0x186) = 2;
    *(undefined *)(iVar12 + 0x187) = 0;
    do {
      iVar10 = iVar10 + -1;
      *puVar9 = 0;
      puVar9 = puVar9 + -1;
    } while (-1 < iVar10);
    puVar1 = (undefined4 *)(iVar12 + -10);
    puVar11 = pPVar14->pad_dma_buf;
    puVar2 = (undefined4 *)(iVar12 + -6);
    iVar12 = iVar12 + 0x1c0;
    iVar15 = iVar15 + 1;
    pPVar14 = pPVar14 + 1;
    scePadPortOpen(*puVar1,*puVar2,puVar11);
    paiVar13 = (int (*) [2])((int)paiVar13 + 8);
  } while (iVar15 < 2);
  iVar15 = 0;
  pPVar14 = pad;
  iVar12 = 0;
  do {
    psVar6 = pPVar14->cnt_bak;
    iVar10 = 0xf;
    do {
      iVar10 = iVar10 + -1;
      psVar6[-0x10] = 0;
      *psVar6 = 0;
      psVar6 = psVar6 + 1;
    } while (-1 < iVar10);
    iVar10 = 1;
    psVar6 = pad[0].an_cnt + iVar12 * 0x20;
    pfVar8 = pad[0].an_rot + iVar12 * 0x10;
    puVar7 = pad[0].an_dir + iVar12 * 0x40;
    do {
      iVar10 = iVar10 + -1;
      psVar6[2] = 0;
      *psVar6 = 0;
      psVar6 = psVar6 + 1;
      puVar7[2] = 0xff;
      *puVar7 = 0xff;
      puVar7 = puVar7 + 1;
      pfVar8[2] = 0.0;
      *pfVar8 = 0.0;
      pfVar8 = pfVar8 + 1;
    } while (-1 < iVar10);
    iVar10 = 3;
    puVar7 = pad[0].analog + iVar12 * 0x40 + 3;
    do {
      iVar10 = iVar10 + -1;
      *puVar7 = 0x80;
      puVar7 = puVar7 + -1;
    } while (-1 < iVar10);
    iVar15 = iVar15 + 1;
    pPVar14 = pPVar14 + 1;
    iVar12 = iVar12 + 7;
  } while (iVar15 < 2);
  return 0;
}

int padIsConnected(int iId) {
  return (int)((pad[iId].flags & 1U) != 0);
}

int GetPadDUALSHOCK2(int iId) {
  int iVar1;
  
  iVar1 = scePadInfoPressMode(iId,0);
  return iVar1;
}

int GetPadStateStable(int iId) {
  uint uVar1;
  long lVar2;
  
  lVar2 = scePadGetState(iId,0);
  if (lVar2 == 6) {
    uVar1 = 1;
  }
  else {
    lVar2 = scePadGetState(iId,0);
    uVar1 = (uint)(lVar2 == 2);
  }
  return uVar1;
}

int PadSyncCallback() {
	int id;
	int i;
	int state;
	int wrk;
	int exid;
	int p_id;
	int intr;
	PAD_STRUCT *psp;
	static char act_align[6];
	
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined1 *puVar7;
  int iVar8;
  int iVar9;
  int p_id;
  PAD_STRUCT__5_1294 *psp;
  int intr;
  
  iVar3 = (uint)opt_wrk.pad_type * 0xc + (uint)opt_wrk.pad_type;
  pushdat = pushdat_m + iVar3 * 2;
  paddat = paddat_m + iVar3 * 2;
  p_id = 0;
  iVar3 = EIntr();
  psp = pad;
  iVar9 = 0x316c8a;
  do {
    lVar5 = scePadGetState(*(undefined4 *)(iVar9 + -10),*(undefined4 *)(iVar9 + -6));
    if (lVar5 == 0) {
      *(undefined *)(iVar9 + 0x187) = 0;
      *(byte *)(iVar9 + 0x186) = *(byte *)(iVar9 + 0x186) & 0xfe;
      PadClearCount__Fi(p_id);
    }
    else {
      *(byte *)(iVar9 + 0x186) = *(byte *)(iVar9 + 0x186) | 1;
    }
    if (lVar5 == 1) {
      *(undefined *)(iVar9 + 0x187) = 0;
    }
    cVar1 = *(char *)(iVar9 + 0x187);
    if (cVar1 == '\x03') {
      lVar5 = scePadInfoMode(*(undefined4 *)(iVar9 + -10),*(undefined4 *)(iVar9 + -6),1,0);
      if (lVar5 != 0) {
        lVar6 = scePadInfoMode(*(undefined4 *)(iVar9 + -10),*(undefined4 *)(iVar9 + -6),2,0);
        if (0 < lVar6) {
          lVar5 = lVar6;
        }
        if (lVar5 == 7) {
          *(undefined *)(iVar9 + 0x187) = 10;
        }
        else {
          *(undefined *)(iVar9 + 0x187) = 99;
        }
      }
    }
    else if (cVar1 < '\x04') {
      if (cVar1 == '\x01') {
        lVar5 = scePadGetState(*(undefined4 *)(iVar9 + -10),*(undefined4 *)(iVar9 + -6));
        if (lVar5 != 5) {
          lVar5 = scePadSetMainMode(*(undefined4 *)(iVar9 + -10),*(undefined4 *)(iVar9 + -6),1,3);
          if (lVar5 == 1) {
            *(undefined *)(iVar9 + 0x187) = 2;
          }
          else {
            *(undefined *)(iVar9 + 0x187) = 0;
          }
        }
      }
      else if (cVar1 < '\x02') {
        if (cVar1 == '\0') {
          if (lVar5 == 6) {
            uVar2 = *(undefined4 *)(iVar9 + -10);
          }
          else {
            if (lVar5 != 2) goto LAB_0022c4c0;
            uVar2 = *(undefined4 *)(iVar9 + -10);
          }
          lVar5 = scePadInfoMode(uVar2,*(undefined4 *)(iVar9 + -6),1,0);
          if (lVar5 != 0) {
            lVar6 = scePadInfoMode(*(undefined4 *)(iVar9 + -10),*(undefined4 *)(iVar9 + -6),2,0);
            if (0 < lVar6) {
              lVar5 = lVar6;
            }
            *(undefined *)(iVar9 + 0x188) = 0;
            if ((lVar5 == 4) || (lVar5 == 7)) {
              lVar5 = scePadInfoAct(*(undefined4 *)(iVar9 + -10),*(undefined4 *)(iVar9 + -6),
                                    0xffffffffffffffff,0);
              if (lVar5 == 0) goto LAB_0022c440;
              act_align_96 = 0;
              DAT_003f4ea9 = 1;
              iVar8 = 2;
              do {
                puVar7 = &act_align_96 + iVar8;
                iVar8 = iVar8 + 1;
                *puVar7 = 0xff;
              } while (iVar8 < 6);
              iVar8 = 5;
              puVar4 = (undefined *)(iVar9 + 0x185);
              do {
                iVar8 = iVar8 + -1;
                *puVar4 = 0;
                puVar4 = puVar4 + -1;
              } while (-1 < iVar8);
              lVar5 = scePadSetActAlign(*(undefined4 *)(iVar9 + -10),*(undefined4 *)(iVar9 + -6),
                                        0x3f4ea8);
              if (lVar5 == 1) {
                *(undefined *)(iVar9 + 0x187) = 1;
              }
            }
            else {
              *(undefined *)(iVar9 + 0x187) = 99;
            }
          }
        }
      }
      else {
        lVar5 = scePadGetReqState(*(undefined4 *)(iVar9 + -10),*(undefined4 *)(iVar9 + -6));
        if (lVar5 == 1) {
          *(undefined *)(iVar9 + 0x187) = 0;
        }
        else if ((lVar5 < 2) && (lVar5 == 0)) {
          *(undefined *)(iVar9 + 0x187) = 3;
        }
      }
    }
    else if (cVar1 == '\v') {
      lVar5 = scePadGetReqState(*(undefined4 *)(iVar9 + -10),*(undefined4 *)(iVar9 + -6));
      if (lVar5 == 1) {
        *(undefined *)(iVar9 + 0x187) = 10;
      }
      if (lVar5 == 0) {
LAB_0022c440:
        *(undefined *)(iVar9 + 0x187) = 99;
      }
    }
    else if (cVar1 < '\f') {
      if (cVar1 == '\n') {
        lVar5 = scePadInfoPressMode(*(undefined4 *)(iVar9 + -10),*(undefined4 *)(iVar9 + -6));
        if (lVar5 == 1) {
          lVar5 = scePadEnterPressMode(*(undefined4 *)(iVar9 + -10),*(undefined4 *)(iVar9 + -6));
          if (lVar5 == 1) {
            *(undefined *)(iVar9 + 0x187) = 0xb;
          }
        }
        else {
          *(undefined *)(iVar9 + 0x187) = 99;
        }
      }
    }
    else if ((cVar1 == 'c') && ((lVar5 == 6 || (lVar5 == 2)))) {
      PadReadFunc__FP10PAD_STRUCTi(psp,p_id);
      if ((*(byte *)(iVar9 + 0x180) & 0x80) != 0) {
        *(byte *)(iVar9 + 0x180) = *(byte *)(iVar9 + 0x180) & 1;
        scePadSetActDirect(*(undefined4 *)(iVar9 + -10),*(undefined4 *)(iVar9 + -6),psp->pad_direct)
        ;
        if ((*(ulong *)(iVar9 + 0x17e) & 0xffff0000) == 0) {
          *(undefined *)(iVar9 + 0x180) = 0;
          *(undefined *)(iVar9 + 0x181) = 0;
        }
        else {
          VibrateRequest__FUsUsUs((short)p_id,0,0);
        }
      }
    }
LAB_0022c4c0:
    p_id = p_id + 1;
    iVar9 = iVar9 + 0x1c0;
    psp = psp + 1;
    if (1 < p_id) {
      if (iVar3 == 0) {
        DIntr();
      }
      return 0;
    }
  } while( true );
}

int PadReadFunc(PAD_STRUCT *psp, int p_id) {
	char r_data[32];
	int i;
	int j;
	
  char cVar1;
  uchar uVar2;
  ushort uVar3;
  ushort uVar4;
  long lVar5;
  uchar *puVar6;
  uint uVar7;
  short *psVar8;
  uchar *puVar9;
  int iVar10;
  short *psVar11;
  char r_data [32];
  
  psp->old = psp->now;
  lVar5 = scePadRead(psp->port,psp->slot,r_data);
  if (lVar5 == 0) {
    psp->now = 0;
  }
  else if (r_data[0] == '\0') {
    if ((psp->id == '\0') || (psp->id == r_data[1])) {
      psp->id = r_data[1];
      uVar7 = ~((int)((uint)(byte)r_data[2] << 0x18) >> 0x10 | (uint)(byte)r_data[3]);
      uVar3 = (ushort)uVar7;
      uVar4 = uVar3 & (uVar3 ^ psp->old);
      psp->now = uVar3;
      psp->rpt = uVar4;
      psp->one = uVar4;
      if ((uVar7 & 0xffff) == (uint)(ushort)psp->old) {
        uVar4 = psp->rpt_time + 1;
        psp->rpt_time = uVar4;
        if (9 < uVar4) {
          psp->rpt = uVar3;
          psp->rpt_time = 5;
        }
      }
      else {
        psp->rpt_time = 0;
      }
      psVar11 = sce_pad;
      iVar10 = 0xf;
      psVar8 = pad[p_id].cnt;
      do {
        uVar3 = *psVar11;
        psVar11 = (short *)((ushort *)psVar11 + 1);
        psVar8[0x10] = *psVar8;
        if ((uVar3 & psp->now) == 0) {
          *psVar8 = 0;
        }
        else {
          *psVar8 = *psVar8 + 1;
        }
        iVar10 = iVar10 + -1;
        psVar8 = psVar8 + 1;
      } while (-1 < iVar10);
      cVar1 = psp->id;
      if (((long)psp->id & 0xf0U) == 0x70) {
        puVar6 = psp->analog;
        puVar9 = (uchar *)(r_data + 4);
        iVar10 = 3;
        do {
          uVar2 = *puVar9;
          puVar9 = puVar9 + 1;
          iVar10 = iVar10 + -1;
          *puVar6 = uVar2;
          puVar6 = puVar6 + 1;
        } while (-1 < iVar10);
        cVar1 = psp->id;
      }
      if (cVar1 == 'y') {
        puVar6 = psp->push;
        puVar9 = (uchar *)(r_data + 8);
        iVar10 = 0xb;
        do {
          uVar2 = *puVar9;
          puVar9 = puVar9 + 1;
          iVar10 = iVar10 + -1;
          *puVar6 = uVar2;
          puVar6 = puVar6 + 1;
        } while (-1 < iVar10);
        SetAnlgInfo__FP10PAD_STRUCTi(psp,p_id);
      }
    }
    else {
      psp->step = '\0';
    }
  }
  else {
    psp->now = 0;
  }
  return 0;
}

void SetAnlgInfo(PAD_STRUCT *psp, int p_id) {
	float rot;
	short int pad_x;
	short int pad_y;
	u_char i;
	u_char dir_old;
	
  uchar uVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  short *psVar5;
  int iVar6;
  int iVar7;
  uchar *puVar8;
  int iVar9;
  uint uVar10;
  float fVar11;
  
  uVar10 = 0;
  iVar9 = 0;
  do {
    uVar1 = psp->an_dir[uVar10];
    *(undefined2 *)((int)psp->an_cnt_bak + iVar9) = *(undefined2 *)((int)psp->an_cnt + iVar9);
    psp->an_dir_bak[uVar10] = psp->an_dir[uVar10];
    psp->an_rot_bak[uVar10] = psp->an_rot[uVar10];
    if (uVar10 == 0) {
      bVar2 = pad[p_id].analog[2];
      iVar6 = p_id * 0x1c0 + 0x316e13;
    }
    else {
      bVar2 = pad[p_id].analog[0];
      iVar6 = p_id * 0x1c0 + 0x316e11;
    }
    iVar7 = 0x80 - (uint)*(byte *)(iVar6 + 3);
    iVar3 = (int)((bVar2 + 0xff80) * 0x10000) >> 0x10;
    iVar6 = iVar3;
    if (iVar3 < 0) {
      iVar6 = -iVar3;
    }
    if (iVar6 < 0x3c) {
      iVar6 = iVar7;
      if (iVar7 < 0) {
        iVar6 = -iVar7;
      }
      if (0x3b < iVar6) goto LAB_0022c83c;
      psp->an_dir[uVar10] = 0xff;
      *(undefined2 *)((int)psp->an_cnt + iVar9) = 0;
    }
    else {
LAB_0022c83c:
      fVar11 = atan2f((float)iVar3,(float)iVar7);
      puVar8 = psp->an_dir + uVar10;
      iVar3 = (int)((fVar11 + DAT_003ee67c + DAT_003ee680) / DAT_003ee684);
      iVar6 = iVar3;
      if (iVar3 < 0) {
        iVar6 = iVar3 + 7;
      }
      iVar3 = iVar3 + (iVar6 >> 3) * -8;
      uVar4 = iVar3 + 4;
      *puVar8 = (uchar)uVar4;
      if (7 < (uVar4 & 0xff)) {
        *puVar8 = (char)iVar3 + 0xfc;
      }
      psp->an_rot[uVar10] = fVar11;
      if (*puVar8 == uVar1) {
        psVar5 = (short *)((int)psp->an_cnt + iVar9);
        *psVar5 = *psVar5 + 1;
      }
      else {
        *(undefined2 *)((int)psp->an_cnt + iVar9) = 0;
      }
    }
    uVar10 = uVar10 + 1 & 0xff;
    iVar9 = uVar10 << 1;
    if (1 < uVar10) {
      return;
    }
  } while( true );
}

u_short VibrateRequest(u_short p_id, u_short act1, u_short act2) {
	PAD_STRUCT *psp;
	
  if (opt_wrk.pad_vib != '\0') {
    pad[(ushort)p_id].pad_direct[1] = (uchar)act2;
    pad[(ushort)p_id].pad_direct[0] = (byte)act1 | 0x80;
  }
  return 0;
}

u_short VibrateRequest1(u_short p_id, u_short act_1) {
	PAD_STRUCT *psp;
	
  if (opt_wrk.pad_vib != '\0') {
    pad[(ushort)p_id].pad_direct[0] = (byte)act_1 | 0x80;
  }
  return 0;
}

u_short VibrateRequest2(u_short p_id, u_short act_2) {
	PAD_STRUCT *psp;
	
  byte bVar1;
  
  if (opt_wrk.pad_vib != '\0') {
    bVar1 = pad[(ushort)p_id].pad_direct[0];
    pad[(ushort)p_id].pad_direct[1] = (uchar)act_2;
    pad[(ushort)p_id].pad_direct[0] = bVar1 | 0x80;
  }
  return 0;
}

void PadClearCount(int p_id) {
	u_int i;
	
  short *psVar1;
  uchar *puVar2;
  float *pfVar3;
  uint uVar4;
  
  uVar4 = 0;
  psVar1 = pad[p_id].cnt;
  do {
    uVar4 = uVar4 + 1;
    psVar1[0x10] = 0;
    *psVar1 = 0;
    psVar1 = psVar1 + 1;
  } while (uVar4 < 0x10);
  uVar4 = 0;
  psVar1 = pad[p_id].an_cnt;
  pfVar3 = pad[p_id].an_rot;
  puVar2 = pad[p_id].an_dir;
  do {
    uVar4 = uVar4 + 1;
    psVar1[2] = 0;
    *psVar1 = 0;
    puVar2[2] = 0xff;
    psVar1 = psVar1 + 1;
    *puVar2 = 0xff;
    puVar2 = puVar2 + 1;
    pfVar3[2] = 0.0;
    *pfVar3 = 0.0;
    pfVar3 = pfVar3 + 1;
  } while (uVar4 < 2);
  uVar4 = 0;
  puVar2 = pad[p_id].analog;
  do {
    uVar4 = uVar4 + 1;
    *puVar2 = 0x80;
    puVar2 = puVar2 + 1;
  } while (uVar4 < 4);
  return;
}

void PadAnalogInit() {
	int i;
	
  ANALOG_PAD_CTRL *pAVar1;
  char *pcVar2;
  int iVar3;
  
  iVar3 = 3;
  pAVar1 = &analog_pad_ctrl;
  pcVar2 = analog_pad_ctrl.rpt_flg;
  do {
    iVar3 = iVar3 + -1;
    pAVar1->analog_timer[0] = 0;
    *pcVar2 = '\0';
    pcVar2 = pcVar2 + 1;
    pAVar1 = (ANALOG_PAD_CTRL *)(pAVar1->analog_timer + 1);
  } while (-1 < iVar3);
  return;
}

void PadAnalogMain() {
  if ((pad[0]._320_8_ & 0xf000) == 0) {
    if ((pad[0].id == 'y') && (pad[0].analog[3] < 0x3b)) {
      PadAnalogRptCtrl__Fi(0);
      analog_pad_ctrl.analog_timer[0] = analog_pad_ctrl.analog_timer[0] + 1;
    }
    else {
      analog_pad_ctrl.rpt_flg[0] = '\0';
      analog_pad_ctrl.analog_timer[0] = 0;
    }
    if ((pad[0].id == 'y') && (0xbb < pad[0].analog[3])) {
      PadAnalogRptCtrl__Fi(1);
      analog_pad_ctrl.analog_timer[1] = analog_pad_ctrl.analog_timer[1] + 1;
    }
    else {
      analog_pad_ctrl.rpt_flg[1] = '\0';
      analog_pad_ctrl.analog_timer[1] = 0;
    }
    if ((pad[0].id == 'y') && (pad[0].analog[2] < 0x3b)) {
      PadAnalogRptCtrl__Fi(2);
      analog_pad_ctrl.analog_timer[2] = analog_pad_ctrl.analog_timer[2] + 1;
    }
    else {
      analog_pad_ctrl.rpt_flg[2] = '\0';
      analog_pad_ctrl.analog_timer[2] = 0;
    }
    if ((pad[0].id == 'y') && (0xbb < pad[0].analog[2])) {
      PadAnalogRptCtrl__Fi(3);
      analog_pad_ctrl.analog_timer[3] = analog_pad_ctrl.analog_timer[3] + 1;
    }
    else {
      analog_pad_ctrl.rpt_flg[3] = '\0';
      analog_pad_ctrl.analog_timer[3] = 0;
    }
    return;
  }
  PadAnalogInit__Fv();
  return;
}

static void PadAnalogRptCtrl(int pad_label) {
  int iVar1;
  
  iVar1 = analog_pad_ctrl.analog_timer[pad_label];
  if (((iVar1 != 0) && (iVar1 != 10)) && ((iVar1 % 5 != 0 || (iVar1 < 0xb)))) {
    analog_pad_ctrl.rpt_flg[pad_label] = '\0';
    return;
  }
  analog_pad_ctrl.rpt_flg[pad_label] = '\x01';
  return;
}

int GetPadAnalogRpt(int pad_label) {
  return (int)analog_pad_ctrl.rpt_flg[pad_label];
}
