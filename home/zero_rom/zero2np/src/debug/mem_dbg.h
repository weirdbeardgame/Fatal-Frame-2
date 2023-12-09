// STATUS: NOT STARTED

#ifndef HOME_ZERO_ROM_ZERO2NP_SRC_DEBUG_MEM_DBG_H
#define HOME_ZERO_ROM_ZERO2NP_SRC_DEBUG_MEM_DBG_H


void mem_dbgInit(void *adrs, int size);
void mem_dbgReset(void *adrs, int size);
void* mem_dbgGetMem(int size);
void mem_dbgFreeMem(void *adrs);
void mem_dbgDrawMemory(void (*draw_rect_func)(/* parameters unknown */), void (*draw_line_func)(/* parameters unknown */), int xx, int yy, int ww, int hh);
unsigned int mem_dbgQueryMaxFreeSize();
unsigned int mem_dbgQueryTotalFreeSize();

#endif // HOME_ZERO_ROM_ZERO2NP_SRC_DEBUG_MEM_DBG_H
