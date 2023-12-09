// STATUS: NOT STARTED

#ifndef HOME_ZERO_ROM_ZERO2NP_SRC_COMMON_MEM_UTIL_H
#define HOME_ZERO_ROM_ZERO2NP_SRC_COMMON_MEM_UTIL_H


void mem_utilInit(void *adrs, int size);
void mem_utilReset(void *adrs, int size);
void* mem_utilGetMem(int size);
void mem_utilFreeMem(void *adrs);
void mem_utiDrawMemory(void (*draw_rect_func)(/* parameters unknown */), void (*draw_line_func)(/* parameters unknown */), int xx, int yy, int ww, int hh);
unsigned int mem_utilQueryMaxFreeSize();
unsigned int mem_utilQueryTotalFreeSize();

#endif // HOME_ZERO_ROM_ZERO2NP_SRC_COMMON_MEM_UTIL_H
