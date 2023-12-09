// STATUS: NOT STARTED

#ifndef HOME_ZERO_ROM_ZERO2NP_SRC_GRAPHICS_GRAPH3D_GRA3DDMA_H
#define HOME_ZERO_ROM_ZERO2NP_SRC_GRAPHICS_GRAPH3D_GRA3DDMA_H

int gra3dSetVif1Code_CallMicroSubroutine2(void *pQW, unsigned int *pMSTop);
int gra3dSetVif1Code_Unpack(int *dest, int iAddress, int iSize, int iCommand);
int gra3dDmaLoadVu1MicroProgram(unsigned int *pMPG);
void gra3dCallMicroSubroutine1(unsigned int *pMS);
void gra3dCallMicroSubroutine2(unsigned int *pMS);
void gra3dCallMicroSubroutine3(unsigned int *pMS);
void gra3dCallMicroSubroutine4(unsigned int *pMS);

#endif // HOME_ZERO_ROM_ZERO2NP_SRC_GRAPHICS_GRAPH3D_GRA3DDMA_H
