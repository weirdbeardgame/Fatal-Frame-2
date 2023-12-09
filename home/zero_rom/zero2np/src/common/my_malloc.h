// STATUS: NOT STARTED

#ifndef HOME_ZERO_ROM_ZERO2NP_SRC_COMMON_MY_MALLOC_H
#define HOME_ZERO_ROM_ZERO2NP_SRC_COMMON_MY_MALLOC_H

struct _MY_MALLOC {
	MALLOC_HEADER wrk;
	void *adrs;
	int size;
};

typedef _MY_MALLOC MY_MALLOC;
void my_mallocInit(MY_MALLOC *my_malloc, void *adrs, int size);
void* my_mallocMalloc(MY_MALLOC *my_malloc, int size, int align_bit);
void my_mallocFree(MY_MALLOC *my_malloc, void *adrs);
int my_mallocQueryTotalFreeMem(MY_MALLOC *my_malloc);
int my_mallocQueryMaxFreeMem(MY_MALLOC *my_malloc);
void my_mallocDrawMemory(MY_MALLOC *my_malloc, void (*draw_rect_func)(/* parameters unknown */), void (*draw_line_func)(/* parameters unknown */), int xx, int yy, int ww, int hh);

#endif // HOME_ZERO_ROM_ZERO2NP_SRC_COMMON_MY_MALLOC_H
