// STATUS: NOT STARTED

#ifndef HOME_ZERO_ROM_ZERO2NP_SRC_GRAPHICS_DMAVIF1_H
#define HOME_ZERO_ROM_ZERO2NP_SRC_GRAPHICS_DMAVIF1_H

typedef int qword[4];

void dmaVif1ClearDMA();
void dmaVif1CheckDMA();
void dmaVif1CheckSync();
void dmaVif1AddCallTag(unsigned int next_tag_addr);
void dmaVif1WaitPath3();
qword* dmaVif1GetPacket();
void dmaVif1SetPacket(void *end_adrs);
qword* dmaVif1GetPacketVIF();
void dmaVif1SetPacketVIF(qword *end_adrs, int vifcode1, int vifcode2);
qword* dmaVif1GetPacketFLUSH_DIRECT();
void dmaVif1SetPacketFLUSH_DIRECT(qword *end_adrs);
int dmaVif1GetToggle();
void dmaVif1AddRefTag(unsigned int addr, int size);
void dmaVif1AddRefTagVIF(unsigned int addr, int size, int vif1code1, int vif1code2);
void dmaVif1Clear();
void dmaVif1Init(void *pPacketBuffer, int iSizePacketBuffer, void *pTagBuffer, int iNumTag);
int dmaVif1Resize(int iNumTag);
int dmaVif1IsResizeOK();
void dmaVif1Kick();

#endif // HOME_ZERO_ROM_ZERO2NP_SRC_GRAPHICS_DMAVIF1_H
