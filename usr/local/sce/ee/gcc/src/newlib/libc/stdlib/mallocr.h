// STATUS: NOT STARTED

#ifndef USR_LOCAL_SCE_EE_GCC_SRC_NEWLIB_LIBC_STDLIB_MALLOCR_H
#define USR_LOCAL_SCE_EE_GCC_SRC_NEWLIB_LIBC_STDLIB_MALLOCR_H

struct mallinfo {
	int arena;
	int ordblks;
	int smblks;
	int hblks;
	int hblkhd;
	int usmblks;
	int fsmblks;
	int uordblks;
	int fordblks;
	int keepcost;
};

struct malloc_chunk {
	size_t prev_size;
	size_t size;
	malloc_chunk *fd;
	malloc_chunk *bk;
};

typedef malloc_chunk *mbinptr;
extern mbinptr __malloc_av_[258];
extern long unsigned int __malloc_trim_threshold;
extern long unsigned int __malloc_top_pad;
extern char *__malloc_sbrk_base;
extern long unsigned int __malloc_max_sbrked_mem;
extern long unsigned int __malloc_max_total_mem;
extern mallinfo __malloc_current_mallinfo;

void* _malloc_r(_reent *reent_ptr, size_t bytes);
void _free_r(_reent *reent_ptr, void *mem);
int _malloc_trim_r(_reent *reent_ptr, size_t pad);
void* _calloc_r(_reent *reent_ptr, size_t n, size_t elem_size);
void* _realloc_r(_reent *reent_ptr, void *oldmem, size_t bytes);

#endif // USR_LOCAL_SCE_EE_GCC_SRC_NEWLIB_LIBC_STDLIB_MALLOCR_H
