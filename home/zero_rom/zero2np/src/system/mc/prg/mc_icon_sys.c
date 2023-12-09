// STATUS: NOT STARTED

#include "mc_icon_sys.h"

typedef struct {
	char step;
	int port;
	int slot;
	int dir_label;
	sceMcIconSys icon_sys;
} MC_ICON_SYS_CTRL;

static MC_ICON_SYS_CTRL mc_icon_sys_ctrl;

void MemoryCardIconSysInit(int port, int slot, int dir_label) {
  undefined uVar1;
  undefined uVar2;
  undefined uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  sceMcIconSys *psVar14;
  undefined local_7b0 [976];
  undefined8 local_3e0 [120];
  undefined8 auStack_20 [2];
  
  puVar8 = (undefined8 *)local_7b0;
  mc_icon_sys_ctrl.step = '\0';
  mc_icon_sys_ctrl.port = port;
  mc_icon_sys_ctrl.slot = slot;
  mc_icon_sys_ctrl.dir_label = dir_label;
  MemoryCardSetIconSysData__Fi((sceMcIconSys *)local_7b0,dir_label);
  psVar14 = &mc_icon_sys_ctrl.icon_sys;
  puVar9 = local_3e0;
  puVar10 = puVar9;
  do {
    uVar11 = puVar8[1];
    uVar12 = puVar8[2];
    uVar13 = puVar8[3];
    *puVar10 = *puVar8;
    puVar10[1] = uVar11;
    puVar10[2] = uVar12;
    puVar10[3] = uVar13;
    puVar8 = puVar8 + 4;
    puVar10 = puVar10 + 4;
  } while (puVar8 != (undefined8 *)(local_7b0 + 0x3c0));
  *(int *)puVar10 = *(int *)puVar8;
  do {
    uVar1 = *(undefined *)((int)puVar9 + 1);
    uVar2 = *(undefined *)((int)puVar9 + 2);
    uVar3 = *(undefined *)((int)puVar9 + 3);
    uVar4 = *(undefined2 *)((int)puVar9 + 4);
    uVar5 = *(undefined2 *)((int)puVar9 + 6);
    uVar6 = *(undefined4 *)(puVar9 + 1);
    uVar7 = *(undefined4 *)((int)(puVar9 + 1) + 4);
    uVar11 = puVar9[2];
    uVar12 = puVar9[3];
    psVar14->Head[0] = *(undefined *)puVar9;
    psVar14->Head[1] = uVar1;
    psVar14->Head[2] = uVar2;
    psVar14->Head[3] = uVar3;
    psVar14->Reserv1 = uVar4;
    psVar14->OffsLF = uVar5;
    psVar14->Reserv2 = uVar6;
    psVar14->TransRate = uVar7;
    *(undefined8 *)psVar14->BgColor = uVar11;
    *(undefined8 *)(psVar14->BgColor + 2) = uVar12;
    puVar9 = puVar9 + 4;
    psVar14 = (sceMcIconSys *)psVar14->BgColor[1];
  } while (puVar9 != auStack_20);
  *(int *)psVar14->Head = *(int *)puVar9;
  return;
}

int MemoryCardIconSysMain() {
	int res;
	int mc_res;
	char path_name[55];
	
  int iVar1;
  char path_name [55];
  
  memset(path_name,0,0x37);
  if (mc_icon_sys_ctrl.step == '\0') {
    MemoryCardSetIconSysPath__FPci(path_name,mc_icon_sys_ctrl.dir_label);
    MemoryCardMakeNewFileInit__FiiPcPvi
              (mc_icon_sys_ctrl.port,mc_icon_sys_ctrl.slot,path_name,&mc_icon_sys_ctrl.icon_sys,
               0x3c4);
    mc_icon_sys_ctrl.step = '\x01';
  }
  else if (mc_icon_sys_ctrl.step != '\x01') {
    MemoryCardAssert__FPce("Error! MemoryCardIconSysMain");
    return 0;
  }
  iVar1 = MemoryCardMakeNewFileMain__Fv();
  if (iVar1 == 1) {
    iVar1 = 1;
  }
  else if (-1 < iVar1) {
    iVar1 = 0;
  }
  return iVar1;
}
