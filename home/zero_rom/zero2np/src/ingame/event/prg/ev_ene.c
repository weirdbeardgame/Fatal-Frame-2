// STATUS: NOT STARTED

#include "ev_ene.h"

struct _ENE_DATS {
	int ene_type;
	int dat_no;
};

typedef _ENE_DATS ENE_DATS;

struct _ENE_LOAD_DATS {
	ENE_DATS dats;
};

typedef _ENE_LOAD_DATS ENE_LOAD_DATS;
static ENE_LOAD_DATS ev_ene_dats[66][4];
static ENE_DATS ene_dats[4];

static void _fixed_array_assert(char *strType, size_t v0, size_t v1) {
	static char *str = 0x3a9a38;
	
  g3ddbgAssert__FbPCce(false,str_574);
  return;
}

static void** void * * _fixed_array_verifyrange<void *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_assert__FPCcUiUi(s_void__003f0340,_max,v);
  }
  return (void **)0x0;
}

static char** char * * _fixed_array_verifyrange<char *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_assert__FPCcUiUi(s_char__003f0348,_max,v);
  }
  return (char **)0x0;
}

static unsigned int** unsigned int * * _fixed_array_verifyrange<unsigned int *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_assert__FPCcUiUi("unsigned int*",_max,v);
  }
  return (uint **)0x0;
}

void ev_eneInit() {
	int i;
	int j;
	
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = 0;
  iVar1 = 0;
  while( true ) {
    iVar4 = 3;
    puVar2 = (undefined4 *)((int)&ev_ene_dats[3].dats.dat_no + iVar1);
    do {
      iVar4 = iVar4 + -1;
      *puVar2 = 0xffffffff;
      puVar2 = puVar2 + -2;
    } while (-1 < iVar4);
    iVar5 = iVar5 + 1;
    if (0x41 < iVar5) break;
    iVar1 = iVar5 * 0x20;
  }
  iVar1 = 3;
  piVar3 = &ene_dats[3].dat_no;
  do {
    iVar1 = iVar1 + -1;
    *piVar3 = -1;
    piVar3 = piVar3 + -2;
  } while (-1 < iVar1);
  return;
}

void ev_eneSetSave(MC_SAVE_DATA *save) {
  save->size = 0x840;
  save->addr = (uchar *)ev_ene_dats;
  return;
}

void ev_eneRelease() {
	int i;
	
  _ENE_DATS *p_Var1;
  int ene_type;
  _ENE_DATS *p_Var2;
  int iVar3;
  
  p_Var1 = ene_dats;
  iVar3 = 0;
  ene_type = ene_dats[0].ene_type;
  if (ene_dats[0].dat_no != -1) {
    while( true ) {
      iVar3 = iVar3 + 1;
      p_Var2 = p_Var1 + 1;
      EneReleaseReq__Fii(ene_type,p_Var1->dat_no);
      if ((3 < iVar3) || (p_Var1[1].dat_no == -1)) break;
      p_Var1 = p_Var2;
      ene_type = p_Var2->ene_type;
    }
  }
  return;
}

void ev_eneRegisterFile(int room_id, int ene_type, int dat_no) {
	static char __FUNCTION__[19] = {
		/* [0] = */ 101,
		/* [1] = */ 118,
		/* [2] = */ 95,
		/* [3] = */ 101,
		/* [4] = */ 110,
		/* [5] = */ 101,
		/* [6] = */ 82,
		/* [7] = */ 101,
		/* [8] = */ 103,
		/* [9] = */ 105,
		/* [10] = */ 115,
		/* [11] = */ 116,
		/* [12] = */ 101,
		/* [13] = */ 114,
		/* [14] = */ 70,
		/* [15] = */ 105,
		/* [16] = */ 108,
		/* [17] = */ 101,
		/* [18] = */ 0
	};
	int i;
	
  _ENE_LOAD_DATS *p_Var1;
  int *piVar2;
  int iVar3;
  
  p_Var1 = (_ENE_LOAD_DATS *)ev_ene_dats[room_id];
  iVar3 = 0;
  while ((iVar3 = iVar3 + 1, (p_Var1->dats).dat_no != dat_no ||
         (((_ENE_DATS *)&(p_Var1->dats).ene_type)->ene_type != ene_type))) {
    p_Var1 = p_Var1 + 1;
    if (3 < iVar3) {
      iVar3 = 0;
      piVar2 = &ev_ene_dats[room_id][0].dats.dat_no;
      do {
        if (*piVar2 == -1) {
          *piVar2 = dat_no;
          ((_ENE_DATS *)(piVar2 + -1))->ene_type = ene_type;
          return;
        }
        iVar3 = iVar3 + 1;
        piVar2 = piVar2 + 2;
      } while (iVar3 < 4);
      SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
      PrintAssertReal("ENE_LOAD REGISTER IS OVER!! ROOM[%d] ene_dat_no = %d");
      return;
    }
  }
  printf("room_id = %d\n");
  printf("ene_type = %d\n");
  printf("dat_no = %d\n");
  SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
  PrintAssertReal("ev_eneRegisterFile() \n Same ENEDAT[%d], type[%d]!!");
  return;
}

void ev_eneDeleteFile(int room_id, int ene_type, int dat_no) {
	int i;
	
  undefined *puVar1;
  _ENE_DATS _Var2;
  uint uVar3;
  ulong *puVar4;
  int iVar5;
  _ENE_DATS *p_Var6;
  int *piVar7;
  int iVar8;
  
  iVar5 = room_id * 0x20;
  piVar7 = &ev_ene_dats[room_id][0].dats.dat_no;
  iVar8 = 0;
  while ((*piVar7 != dat_no || (*(int *)((int)&ev_ene_dats[0].dats.ene_type + iVar5) != ene_type)))
  {
    iVar8 = iVar8 + 1;
    piVar7 = piVar7 + 2;
    iVar5 = iVar5 + 8;
    if (3 < iVar8) {
      printf("<<<<<<<<<WARNING FILE[%s] LINE[%d]>>>>>>>>>>\n");
      PrintWarningReal("ENE_LOAD DELETE NOT FOUND FILE!! ROOM[%d] ene_dat_no = %d");
      return;
    }
  }
  if (2 < iVar8) {
    *piVar7 = -1;
    return;
  }
  p_Var6 = (_ENE_DATS *)(ev_ene_dats[room_id] + iVar8);
  do {
    iVar8 = iVar8 + 1;
    _Var2 = p_Var6[1];
    puVar1 = (undefined *)((int)&p_Var6->dat_no + 3);
    uVar3 = (uint)puVar1 & 7;
    puVar4 = (ulong *)(puVar1 + -uVar3);
    *puVar4 = *puVar4 & -1L << (uVar3 + 1) * 8 | (ulong)_Var2 >> (7 - uVar3) * 8;
    *p_Var6 = _Var2;
    piVar7 = piVar7 + 2;
    p_Var6 = p_Var6 + 1;
  } while (iVar8 < 3);
  *piVar7 = -1;
  return;
}

void ev_eneChangeRoom(int room_id) {
	int i;
	int n;
	ENE_DATS old_ene_dats[4];
	int no_need_flg[4];
	
  undefined *puVar1;
  _ENE_DATS _Var2;
  uint uVar3;
  ulong *puVar4;
  _ENE_DATS *p_Var5;
  _ENE_DATS *p_Var6;
  int *piVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int *piVar11;
  int *__s;
  int *piVar12;
  _ENE_DATS old_ene_dats [4];
  int no_need_flg [4];
  
  __s = no_need_flg;
  memset(__s,0,0x10);
  iVar10 = 0;
  do {
    iVar9 = iVar10 + 1;
    _Var2 = ene_dats[iVar10];
    puVar1 = (undefined *)((int)&old_ene_dats[iVar10].dat_no + 3);
    uVar3 = (uint)puVar1 & 7;
    puVar4 = (ulong *)(puVar1 + -uVar3);
    *puVar4 = *puVar4 & -1L << (uVar3 + 1) * 8 | (ulong)_Var2 >> (7 - uVar3) * 8;
    old_ene_dats[iVar10] = _Var2;
    iVar10 = iVar9;
  } while (iVar9 < 4);
  p_Var5 = ene_dats;
  p_Var6 = (_ENE_DATS *)ev_ene_dats[room_id];
  iVar10 = 3;
  do {
    _Var2 = *p_Var6;
    puVar1 = (undefined *)((int)&p_Var5->dat_no + 3);
    uVar3 = (uint)puVar1 & 7;
    puVar4 = (ulong *)(puVar1 + -uVar3);
    *puVar4 = *puVar4 & -1L << (uVar3 + 1) * 8 | (ulong)_Var2 >> (7 - uVar3) * 8;
    iVar10 = iVar10 + -1;
    *p_Var5 = _Var2;
    p_Var5 = p_Var5 + 1;
    p_Var6 = p_Var6 + 1;
  } while (-1 < iVar10);
  piVar11 = &old_ene_dats[0].dat_no;
  iVar10 = 0;
  if (old_ene_dats[0].dat_no != -1) {
    iVar9 = 0;
    piVar12 = piVar11;
    do {
      iVar8 = 0;
      p_Var5 = ene_dats;
      piVar7 = __s;
      do {
        if ((p_Var5->dat_no == *piVar12) &&
           (p_Var5->ene_type == *(int *)((int)&old_ene_dats[0].ene_type + iVar9))) {
          *piVar7 = 1;
          break;
        }
        iVar8 = iVar8 + 1;
        piVar7 = piVar7 + 1;
        p_Var5 = p_Var5 + 1;
      } while (iVar8 < 4);
      if (iVar8 == 4) {
        EneReleaseReq__Fii(*(int *)((int)&old_ene_dats[0].ene_type + iVar9),*piVar11);
      }
      iVar10 = iVar10 + 1;
      piVar11 = piVar11 + 2;
      iVar9 = iVar9 + 8;
      piVar12 = piVar12 + 2;
    } while ((iVar10 < 4) && (*piVar11 != -1));
  }
  piVar11 = &ene_dats[0].dat_no;
  iVar10 = 0;
  if (ene_dats[0].dat_no != -1) {
    while( true ) {
      __s = __s + 1;
      if ((no_need_flg[0] != 1) &&
         (iVar9 = SearchEneWrkNo__Fii(((_ENE_DATS *)(piVar11 + -1))->ene_type,*piVar11), iVar9 < 0))
      {
        EneLoadReq__FiiPi(((_ENE_DATS *)(piVar11 + -1))->ene_type,*piVar11,(int *)0x0);
      }
      iVar10 = iVar10 + 1;
      piVar11 = piVar11 + 2;
      if ((3 < iVar10) || (*piVar11 == -1)) break;
      no_need_flg[0] = *__s;
    }
  }
  return;
}

int ev_eneIsReady() {
  return 1;
}
