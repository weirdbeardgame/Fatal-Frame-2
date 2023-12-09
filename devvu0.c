// STATUS: NOT STARTED

#include "devvu0.h"

static sceDevVu0CheckBusy() {
  ulong uVar1;
  undefined4 in_vc13;
  
  uVar1 = _cfc2(in_vc13);
  return (uVar1 & 0xf) == 1;
}

sceDevVu0Reset() {
  ulong uVar1;
  undefined4 in_vc12;
  
  uVar1 = _cfc2(in_vc12);
  _ctc2((int)(uVar1 | 2));
  return uVar1 | 2;
}

sceDevVu0Pause() {
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 in_vc12;
  
  uVar2 = 0;
  uVar1 = sceDevVu0Sync();
  switch(uVar1) {
  case 4:
    uVar1 = _cfc2(in_vc12);
    _ctc2((uint)uVar1 | 1);
  case 0:
  case 3:
    uVar2 = 1;
  default:
    return uVar2;
  }
}

sceDevVu0Continue() {
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = sceDevVu0Sync();
  uVar1 = 0;
  if ((lVar2 < 4) && (0 < lVar2)) {
    uVar3 = sceDevVu0GetTpc();
    sceDevVu0Exec(uVar3);
    uVar1 = 1;
  }
  return uVar1;
}

sceDevVu0PutDBit() {
  undefined8 uVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined4 in_vc12;
  
  uVar3 = _cfc2(in_vc12);
  uVar1 = 1;
  if (param_1 == 1) {
    uVar2 = (uint)uVar3 | 4;
  }
  else {
    uVar1 = 0xfffffffffffffffb;
    uVar2 = (uint)uVar3 & 0xfffffffb;
  }
  _ctc2(uVar2);
  return uVar1;
}

sceDevVu0PutTBit() {
  undefined8 uVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined4 in_vc12;
  
  uVar3 = _cfc2(in_vc12);
  uVar1 = 1;
  if (param_1 == 1) {
    uVar2 = (uint)uVar3 | 8;
  }
  else {
    uVar1 = 0xfffffffffffffff7;
    uVar2 = (uint)uVar3 & 0xfffffff7;
  }
  _ctc2(uVar2);
  return uVar1;
}

sceDevVu0GetDBit() {
  undefined8 uVar1;
  undefined4 in_vc12;
  
  uVar1 = _cfc2(in_vc12);
  return (uint)uVar1 >> 2 & 1;
}

sceDevVu0GetTBit() {
  undefined8 uVar1;
  undefined4 in_vc12;
  
  uVar1 = _cfc2(in_vc12);
  return (uint)uVar1 >> 3 & 1;
}

static sceDevVu0Sync() {
  ulong uVar1;
  undefined4 in_vc13;
  
  uVar1 = _cfc2(in_vc13);
  if ((uVar1 & 2) != 0) {
    return 1;
  }
  if ((uVar1 & 4) != 0) {
    return 2;
  }
  if ((uVar1 & 8) != 0) {
    return 3;
  }
  return ((uint)uVar1 & 1) << 2;
}

sceDevVu0Exec() {
  _ctc2(param_1 & 0xffff);
  _vcallmsr();
  return;
}

sceDevVu0GetTpc() {
  ulong uVar1;
  undefined4 in_vc10;
  
  uVar1 = _cfc2(in_vc10);
  return uVar1 & 0xffff;
}

sceDevVu0GetCnd() {
  undefined auVar1 [16];
  long lVar2;
  undefined8 uVar3;
  undefined4 in_vi0;
  undefined4 in_vi1;
  undefined4 in_vi2;
  undefined4 in_vi3;
  undefined4 in_vi4;
  undefined4 in_vi5;
  undefined4 in_vi6;
  undefined4 in_vi7;
  undefined4 in_vi8;
  undefined4 in_vi9;
  undefined4 in_vi10;
  undefined4 in_vi11;
  undefined4 in_vi12;
  undefined4 in_vi13;
  undefined4 in_vi14;
  undefined4 in_vi15;
  undefined4 in_vc0;
  undefined4 in_vc1;
  undefined4 in_vc2;
  undefined4 in_vc4;
  undefined4 in_vc5;
  undefined4 in_vc6;
  undefined in_vf0 [16];
  undefined extraout_vf1 [16];
  undefined extraout_vf2 [16];
  undefined extraout_vf3 [16];
  undefined extraout_vf4 [16];
  undefined extraout_vf5 [16];
  undefined extraout_vf6 [16];
  undefined extraout_vf7 [16];
  undefined extraout_vf8 [16];
  undefined extraout_vf9 [16];
  undefined extraout_vf10 [16];
  undefined extraout_vf11 [16];
  undefined extraout_vf12 [16];
  undefined extraout_vf13 [16];
  undefined extraout_vf14 [16];
  undefined extraout_vf15 [16];
  undefined extraout_vf16 [16];
  undefined extraout_vf17 [16];
  undefined extraout_vf18 [16];
  undefined extraout_vf19 [16];
  undefined extraout_vf20 [16];
  undefined extraout_vf21 [16];
  undefined extraout_vf22 [16];
  undefined extraout_vf23 [16];
  undefined extraout_vf24 [16];
  undefined extraout_vf25 [16];
  undefined extraout_vf26 [16];
  undefined extraout_vf27 [16];
  undefined extraout_vf28 [16];
  undefined extraout_vf29 [16];
  undefined extraout_vf30 [16];
  undefined extraout_vf31 [16];
  
  lVar2 = sceDevVu0CheckBusy();
  if (lVar2 == 0) {
    auVar1 = _sqc2(in_vf0);
    *param_1 = auVar1;
    auVar1 = _sqc2(extraout_vf1);
    param_1[1] = auVar1;
    auVar1 = _sqc2(extraout_vf2);
    param_1[2] = auVar1;
    auVar1 = _sqc2(extraout_vf3);
    param_1[3] = auVar1;
    auVar1 = _sqc2(extraout_vf4);
    param_1[4] = auVar1;
    auVar1 = _sqc2(extraout_vf5);
    param_1[5] = auVar1;
    auVar1 = _sqc2(extraout_vf6);
    param_1[6] = auVar1;
    auVar1 = _sqc2(extraout_vf7);
    param_1[7] = auVar1;
    auVar1 = _sqc2(extraout_vf8);
    param_1[8] = auVar1;
    auVar1 = _sqc2(extraout_vf9);
    param_1[9] = auVar1;
    auVar1 = _sqc2(extraout_vf10);
    param_1[10] = auVar1;
    auVar1 = _sqc2(extraout_vf11);
    param_1[0xb] = auVar1;
    auVar1 = _sqc2(extraout_vf12);
    param_1[0xc] = auVar1;
    auVar1 = _sqc2(extraout_vf13);
    param_1[0xd] = auVar1;
    auVar1 = _sqc2(extraout_vf14);
    param_1[0xe] = auVar1;
    auVar1 = _sqc2(extraout_vf15);
    param_1[0xf] = auVar1;
    auVar1 = _sqc2(extraout_vf16);
    param_1[0x10] = auVar1;
    auVar1 = _sqc2(extraout_vf17);
    param_1[0x11] = auVar1;
    auVar1 = _sqc2(extraout_vf18);
    param_1[0x12] = auVar1;
    auVar1 = _sqc2(extraout_vf19);
    param_1[0x13] = auVar1;
    auVar1 = _sqc2(extraout_vf20);
    param_1[0x14] = auVar1;
    auVar1 = _sqc2(extraout_vf21);
    param_1[0x15] = auVar1;
    auVar1 = _sqc2(extraout_vf22);
    param_1[0x16] = auVar1;
    auVar1 = _sqc2(extraout_vf23);
    param_1[0x17] = auVar1;
    auVar1 = _sqc2(extraout_vf24);
    param_1[0x18] = auVar1;
    auVar1 = _sqc2(extraout_vf25);
    param_1[0x19] = auVar1;
    auVar1 = _sqc2(extraout_vf26);
    param_1[0x1a] = auVar1;
    auVar1 = _sqc2(extraout_vf27);
    param_1[0x1b] = auVar1;
    auVar1 = _sqc2(extraout_vf28);
    param_1[0x1c] = auVar1;
    auVar1 = _sqc2(extraout_vf29);
    param_1[0x1d] = auVar1;
    auVar1 = _sqc2(extraout_vf30);
    param_1[0x1e] = auVar1;
    auVar1 = _sqc2(extraout_vf31);
    param_1[0x1f] = auVar1;
    uVar3 = _cfc2(in_vc0);
    *(int *)param_1[0x20] = (int)uVar3;
    uVar3 = _cfc2(in_vc1);
    *(int *)(param_1[0x20] + 4) = (int)uVar3;
    uVar3 = _cfc2(in_vc2);
    *(int *)(param_1[0x20] + 8) = (int)uVar3;
    uVar3 = _cfc2(in_vc4);
    *(int *)(param_1[0x20] + 0xc) = (int)uVar3;
    uVar3 = _cfc2(in_vc5);
    *(int *)param_1[0x21] = (int)uVar3;
    uVar3 = _cfc2(in_vc6);
    *(int *)(param_1[0x21] + 4) = (int)uVar3;
    uVar3 = _cfc2(in_vi0);
    *(short *)(param_1[0x21] + 8) = (short)uVar3;
    uVar3 = _cfc2(in_vi1);
    *(short *)(param_1[0x21] + 10) = (short)uVar3;
    uVar3 = _cfc2(in_vi2);
    *(short *)(param_1[0x21] + 0xc) = (short)uVar3;
    uVar3 = _cfc2(in_vi3);
    *(short *)(param_1[0x21] + 0xe) = (short)uVar3;
    uVar3 = _cfc2(in_vi4);
    *(short *)param_1[0x22] = (short)uVar3;
    uVar3 = _cfc2(in_vi5);
    *(short *)(param_1[0x22] + 2) = (short)uVar3;
    uVar3 = _cfc2(in_vi6);
    *(short *)(param_1[0x22] + 4) = (short)uVar3;
    uVar3 = _cfc2(in_vi7);
    *(short *)(param_1[0x22] + 6) = (short)uVar3;
    uVar3 = _cfc2(in_vi8);
    *(short *)(param_1[0x22] + 8) = (short)uVar3;
    uVar3 = _cfc2(in_vi9);
    *(short *)(param_1[0x22] + 10) = (short)uVar3;
    uVar3 = _cfc2(in_vi10);
    *(short *)(param_1[0x22] + 0xc) = (short)uVar3;
    uVar3 = _cfc2(in_vi11);
    *(short *)(param_1[0x22] + 0xe) = (short)uVar3;
    uVar3 = _cfc2(in_vi12);
    *(short *)param_1[0x23] = (short)uVar3;
    uVar3 = _cfc2(in_vi13);
    *(short *)(param_1[0x23] + 2) = (short)uVar3;
    uVar3 = _cfc2(in_vi14);
    *(short *)(param_1[0x23] + 4) = (short)uVar3;
    uVar3 = _cfc2(in_vi15);
    *(short *)(param_1[0x23] + 6) = (short)uVar3;
  }
  return lVar2 == 0;
}

sceDevVu0PutCnd() {
  long lVar1;
  
  lVar1 = sceDevVu0CheckBusy();
  if (lVar1 == 0) {
    _lqc2(*param_1);
    _lqc2(param_1[1]);
    _lqc2(param_1[2]);
    _lqc2(param_1[3]);
    _lqc2(param_1[4]);
    _lqc2(param_1[5]);
    _lqc2(param_1[6]);
    _lqc2(param_1[7]);
    _lqc2(param_1[8]);
    _lqc2(param_1[9]);
    _lqc2(param_1[10]);
    _lqc2(param_1[0xb]);
    _lqc2(param_1[0xc]);
    _lqc2(param_1[0xd]);
    _lqc2(param_1[0xe]);
    _lqc2(param_1[0xf]);
    _lqc2(param_1[0x10]);
    _lqc2(param_1[0x11]);
    _lqc2(param_1[0x12]);
    _lqc2(param_1[0x13]);
    _lqc2(param_1[0x14]);
    _lqc2(param_1[0x15]);
    _lqc2(param_1[0x16]);
    _lqc2(param_1[0x17]);
    _lqc2(param_1[0x18]);
    _lqc2(param_1[0x19]);
    _lqc2(param_1[0x1a]);
    _lqc2(param_1[0x1b]);
    _lqc2(param_1[0x1c]);
    _lqc2(param_1[0x1d]);
    _lqc2(param_1[0x1e]);
    _lqc2(param_1[0x1f]);
    _ctc2(*(undefined4 *)param_1[0x20]);
    _ctc2(*(undefined4 *)(param_1[0x20] + 8));
    _ctc2(*(undefined4 *)(param_1[0x20] + 0xc));
    _ctc2(*(undefined4 *)param_1[0x21]);
    _ctc2(*(undefined4 *)(param_1[0x21] + 4));
    _ctc2((uint)*(ushort *)(param_1[0x21] + 8));
    _ctc2((uint)*(ushort *)(param_1[0x21] + 10));
    _ctc2((uint)*(ushort *)(param_1[0x21] + 0xc));
    _ctc2((uint)*(ushort *)(param_1[0x21] + 0xe));
    _ctc2((uint)*(ushort *)param_1[0x22]);
    _ctc2((uint)*(ushort *)(param_1[0x22] + 2));
    _ctc2((uint)*(ushort *)(param_1[0x22] + 4));
    _ctc2((uint)*(ushort *)(param_1[0x22] + 6));
    _ctc2((uint)*(ushort *)(param_1[0x22] + 8));
    _ctc2((uint)*(ushort *)(param_1[0x22] + 10));
    _ctc2((uint)*(ushort *)(param_1[0x22] + 0xc));
    _ctc2((uint)*(ushort *)(param_1[0x22] + 0xe));
    _ctc2((uint)*(ushort *)param_1[0x23]);
    _ctc2((uint)*(ushort *)(param_1[0x23] + 2));
    _ctc2((uint)*(ushort *)(param_1[0x23] + 4));
    _ctc2((uint)*(ushort *)(param_1[0x23] + 6));
  }
  return lVar1 == 0;
}
