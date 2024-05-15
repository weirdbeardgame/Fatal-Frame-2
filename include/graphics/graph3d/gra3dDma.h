#ifndef MIKOMPILATION_GRA3DDMA_H
#define MIKOMPILATION_GRA3DDMA_H

int gra3dDmaLoadVu1MicroProgram(unsigned int *pMPG, int p2);
void gra3dCallMicroSubroutine1(const unsigned int *pMS);
void gra3dCallMicroSubroutine2(const unsigned int *pMS);
int g3dDmaAddPacket(const void *pPacket, int iQWSize);

#endif //MIKOMPILATION_GRA3DDMA_H
