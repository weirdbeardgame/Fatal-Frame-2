// STATUS: NOT STARTED

#include "hxd.h"

char *voice_type_name_tbl[0] = {
};

static int hxd_file_id = 1213744128;

void CheckHXDData(HXD_HEADER *header, int requested_file_type) {
  if (header->name != hxd_file_id) {
    SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
    PrintAssertReal("This File Is Not HXD!!");
  }
  if (header->type != requested_file_type) {
    SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
    PrintAssertReal("This File Is Not Requested Type!");
    return;
  }
  return;
}

void PrintSOUND_INFO(SOUND_INFO info) {
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  ulong in_v0;
  ulong in_v1;
  ulong uVar5;
  ulong in_a1;
  ulong uVar6;
  undefined local_40 [8];
  undefined local_38 [8];
  undefined local_30 [8];
  int local_28;
  
  puVar1 = (undefined *)((int)&info->offset + 3);
  uVar2 = (uint)puVar1 & 7;
  uVar3 = (uint)info & 7;
  local_40 = (undefined  [8])
             ((*(long *)(puVar1 + -uVar2) << (7 - uVar2) * 8 |
              in_v0 & 0xffffffffffffffffU >> (uVar2 + 1) * 8) & -1L << (8 - uVar3) * 8 |
             *(ulong *)((int)info - uVar3) >> uVar3 * 8);
  puVar1 = (undefined *)((int)&info->adsr2 + 1);
  uVar2 = (uint)puVar1 & 7;
  uVar3 = (uint)&info->pitch & 7;
  uVar5 = (*(long *)(puVar1 + -uVar2) << (7 - uVar2) * 8 |
          in_v1 & 0xffffffffffffffffU >> (uVar2 + 1) * 8) & -1L << (8 - uVar3) * 8 |
          *(ulong *)((int)&info->pitch - uVar3) >> uVar3 * 8;
  puVar1 = (undefined *)((int)&info->loopstart + 3);
  uVar2 = (uint)puVar1 & 7;
  uVar3 = (uint)&info->attr & 7;
  uVar6 = (*(long *)(puVar1 + -uVar2) << (7 - uVar2) * 8 |
          in_a1 & 0xffffffffffffffffU >> (uVar2 + 1) * 8) & -1L << (8 - uVar3) * 8 |
          *(ulong *)((int)&info->attr - uVar3) >> uVar3 * 8;
  iVar4 = info->loopend;
  puVar1 = local_40 + 7;
  uVar2 = (uint)puVar1 & 7;
  *(ulong *)(puVar1 + -uVar2) =
       *(ulong *)(puVar1 + -uVar2) & -1L << (uVar2 + 1) * 8 | (ulong)local_40 >> (7 - uVar2) * 8;
  puVar1 = local_38 + 7;
  uVar2 = (uint)puVar1 & 7;
  *(ulong *)(puVar1 + -uVar2) =
       *(ulong *)(puVar1 + -uVar2) & -1L << (uVar2 + 1) * 8 | uVar5 >> (7 - uVar2) * 8;
  puVar1 = local_30 + 7;
  uVar2 = (uint)puVar1 & 7;
  *(ulong *)(puVar1 + -uVar2) =
       *(ulong *)(puVar1 + -uVar2) & -1L << (uVar2 + 1) * 8 | uVar6 >> (7 - uVar2) * 8;
  local_38 = (undefined  [8])uVar5;
  local_30 = (undefined  [8])uVar6;
  local_28 = iVar4;
  if ((uVar6 & 1) == 0) {
    printf("<EFFECT = OFF>\n");
  }
  else {
    printf("<EFFECT = ON>\n");
  }
  printf("<TYPE   = %d>\n");
  if (((ulong)local_30 & 0x20) == 0) {
    printf("<3D     = OFF>\n");
  }
  else {
    printf("<3D     = ON>\n");
  }
  if ((local_30._0_4_ & 0x20) == 0) {
    printf("<LOOP   = OFF>\n");
  }
  else {
    printf("<LOOP   = ON>\n");
  }
  if ((local_30._0_4_ & 0x80) == 0) {
    printf("<MALE   = FEMALE>\n");
  }
  else {
    printf("<MALE   = MALE>\n");
  }
  printf(&DAT_003f49c0);
  printf("<SAMPLING_RATE = %10d>\n");
  printf("<OFFSET        = 0x%x>\n");
  printf("<PITCH         = %10d>\n");
  printf("<VOL           = %10d>\n");
  printf("<ENVELOPE1     = 0x%x>\n");
  printf("<ENVELOPE2     = 0x%x>\n");
  printf("<PAN           = %10d>\n");
  printf(&DAT_003f49c0);
  printf(&DAT_003f49c0);
  return;
}

void PrintSOUND_INFOArray(SOUND_INFO *info, int num) {
	int i;
	
  if (0 < num) {
    do {
      num = num + -1;
      PrintSOUND_INFO(info);
      info = info + 1;
    } while (num != 0);
  }
  return;
}
