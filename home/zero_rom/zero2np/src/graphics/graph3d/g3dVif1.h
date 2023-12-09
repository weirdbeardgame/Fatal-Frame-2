// STATUS: NOT STARTED

#ifndef HOME_ZERO_ROM_ZERO2NP_SRC_GRAPHICS_GRAPH3D_G3DVIF1_H
#define HOME_ZERO_ROM_ZERO2NP_SRC_GRAPHICS_GRAPH3D_G3DVIF1_H

struct G3DVIF1CMDDATA {
	unsigned int uiCmd;
	unsigned int auiSubPacket[4];
};


void g3dVif1Init();
void g3dVif1SetRegister(G3DVIF1CMDDATA *aVCD, int iNumPacket);
int g3dVif1Unpack(int iVu1MemAddress, void *pData, int iQWSize);

#endif // HOME_ZERO_ROM_ZERO2NP_SRC_GRAPHICS_GRAPH3D_G3DVIF1_H
