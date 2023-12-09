// STATUS: NOT STARTED

#ifndef HOME_AKIRA_KOIDE_ZERO2NP_SRC_SYSTEM_EEIOP_SPU_MEM_H
#define HOME_AKIRA_KOIDE_ZERO2NP_SRC_SYSTEM_EEIOP_SPU_MEM_H


SPU_BUF* GetNewSPU_BUF();
void ReleaseSPU_BUF(SPU_BUF *wrk);
void SPUMemoryInit();
void* GetSPUMemory(int size);
int ReleaseSPUMemory(void *adrs);
void* GetSPUEffectMemory(int size);
int ReleaseSPUEffectMemory(void *end_adrs);
void PrintBufferState();
unsigned int SPUQueryMaxFreeSize();
unsigned int SPUQueryTotalFreeSize();
void DrawSPUMemory(void (*draw_rect_func)(/* parameters unknown */), void (*draw_line_func)(/* parameters unknown */), int xx, int yy, int ww, int hh);

#endif // HOME_AKIRA_KOIDE_ZERO2NP_SRC_SYSTEM_EEIOP_SPU_MEM_H
