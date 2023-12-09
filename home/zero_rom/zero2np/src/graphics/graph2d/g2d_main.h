// STATUS: NOT STARTED

#ifndef HOME_ZERO_ROM_ZERO2NP_SRC_GRAPHICS_GRAPH2D_G2D_MAIN_H
#define HOME_ZERO_ROM_ZERO2NP_SRC_GRAPHICS_GRAPH2D_G2D_MAIN_H

extern SPRT_DAT effdat[98];
extern SPRT_DAT fntdat[6];
extern unsigned char CVariable<char, 0, 9> type_info node[8];
extern unsigned char CVariable<char, 0, 3> type_info node[8];
extern G2D_WRK g2d_wrk;

void InitGraph2dON();
void InitGraph2dBoot();
void InitGraph2dEFrame();
void Graph2dMain();

#endif // HOME_ZERO_ROM_ZERO2NP_SRC_GRAPHICS_GRAPH2D_G2D_MAIN_H
