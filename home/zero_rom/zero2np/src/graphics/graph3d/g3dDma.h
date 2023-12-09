// STATUS: NOT STARTED

#ifndef HOME_ZERO_ROM_ZERO2NP_SRC_GRAPHICS_GRAPH3D_G3DDMA_H
#define HOME_ZERO_ROM_ZERO2NP_SRC_GRAPHICS_GRAPH3D_G3DDMA_H

struct _sceGifPackAd {
	u_long DATA;
	u_long ADDR;
};

typedef _sceGifPackAd sceGifPackAd;

void* g3dDmaOpenPacket();
int g3dDmaCancelPacket();
int g3dDmaClosePacket(void *pPacket);
int g3dDmaAddPacket(void *pPacket, int iQWSize);
int g3dDmaFlush();
int g3dDmaCopyPacket(void *pPacket, int iQWSize);
int g3dDmaSetGsRegister(long unsigned int ulGsData, long unsigned int ulGsAddress);
int g3dDmaSetGsRegister(sceGifPackAd *pGPA);
int g3dDmaSetGsRegisters(sceGifPackAd *aGPA, int iNum);
int g3dDmaLoadVu1MicroProgram(unsigned int *pMPG, int bImmediately);
int g3dDmaCallVu1MicroSubroutine(unsigned int *pMS, int bImmediately);
int g3dDmaContinueVu1MicroSubroutine(unsigned int *pMS);

#endif // HOME_ZERO_ROM_ZERO2NP_SRC_GRAPHICS_GRAPH3D_G3DDMA_H
