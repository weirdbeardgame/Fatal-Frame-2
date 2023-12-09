// STATUS: NOT STARTED

#ifndef HOME_ZERO_ROM_ZERO2NP_SRC_COMMON_HEAPCTRL_H
#define HOME_ZERO_ROM_ZERO2NP_SRC_COMMON_HEAPCTRL_H

struct _HEAP_WRK {
	MY_MALLOC malloc;
	int heap_num;
	int memory_sema;
};

typedef _HEAP_WRK HEAP_WRK;

typedef enum {
	HEAPMEM_USED_SIZE = 0,
	HEAPMEM_LEAVE_SIZE = 1
} HEAP_MEMMODE;

void heapCtrlReset(HEAP_WRK *wrk, void *adrs, unsigned int size);
void heapCtrlInit(HEAP_WRK *wrk, void *adrs, unsigned int size);
void* heapCtrlMalloc(HEAP_WRK *wrk, size_t size);
void heapCtrlFree(HEAP_WRK *wrk, void *ap);
unsigned int heapCtrlMemSize(HEAP_WRK *wrk, HEAP_MEMMODE mode);
unsigned int heapCtrlQueryMaxOneSize(HEAP_WRK *wrk);
void* SAFE_MALLOC(HEAP_WRK *wrk, void *buf, int size);
void heapCtrlDrawMemory(HEAP_WRK *wrk, void (*draw_rect_func)(/* parameters unknown */), void (*draw_line_func)(/* parameters unknown */), int xx, int yy, int ww, int hh);

#endif // HOME_ZERO_ROM_ZERO2NP_SRC_COMMON_HEAPCTRL_H
