// STATUS: NOT STARTED

#include "gra3dDma.h"

int gra3dSetVif1Code_CallMicroSubroutine2(void *pQW, unsigned int *pMSTop) {
  *(undefined4 *)((int)pQW + 0xc) = 0x17000000;
  *(uint *)pQW = (uint)pMSTop >> 3 | 0x14000000;
  *(undefined **)((int)pQW + 8) = &DAT_11000000;
  *(undefined4 *)((int)pQW + 4) = 0x17000000;
  return 1;
}

int gra3dSetVif1Code_Unpack(int *dest, int iAddress, int iSize, int iCommand) {
  dest[3] = iAddress | iSize << 0x10 | (iCommand | 0x60U) << 0x18;
  dest[2] = 0x1000404;
  *dest = 0;
  dest[1] = 0;
  return 1;
}

int gra3dDmaLoadVu1MicroProgram(unsigned int *pMPG) {
  int iVar1;
  
  iVar1 = g3dDmaLoadVu1MicroProgram__FPCUii(pMPG,0);
  return iVar1;
}

void gra3dCallMicroSubroutine1(unsigned int *pMS) {
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)g3dDmaOpenPacket__Fv();
  puVar1[1] = (uint)pMS >> 3 | 0x14000000;
  puVar1[2] = &DAT_11000000;
  puVar1[3] = 0x17000000;
  *puVar1 = &DAT_11000000;
  g3dDmaClosePacket__FPCv(puVar1 + 4);
  return;
}

void gra3dCallMicroSubroutine2(unsigned int *pMS) {
  uint *puVar1;
  
  puVar1 = (uint *)g3dDmaOpenPacket__Fv();
  *puVar1 = (uint)pMS >> 3 | 0x14000000;
  puVar1[2] = (uint)&DAT_11000000;
  puVar1[3] = 0x17000000;
  puVar1[1] = 0x17000000;
  g3dDmaClosePacket__FPCv(puVar1 + 4);
  return;
}

void gra3dCallMicroSubroutine3(unsigned int *pMS) {
  uint *puVar1;
  
  puVar1 = (uint *)g3dDmaOpenPacket__Fv();
  *puVar1 = (uint)pMS >> 3 | 0x15000000;
  puVar1[1] = (uint)&DAT_11000000;
  puVar1[3] = 0x17000000;
  puVar1[2] = 0x17000000;
  g3dDmaClosePacket__FPCv(puVar1 + 4);
  return;
}

void gra3dCallMicroSubroutine4(unsigned int *pMS) {
  uint *puVar1;
  
  puVar1 = (uint *)g3dDmaOpenPacket__Fv();
  *puVar1 = (uint)pMS >> 3 | 0x14000000;
  puVar1[2] = (uint)&DAT_11000000;
  puVar1[3] = 0x17000000;
  puVar1[1] = 0x17000000;
  g3dDmaClosePacket__FPCv(puVar1 + 4);
  return;
}
