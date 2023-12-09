// STATUS: NOT STARTED

#ifndef USR_LOCAL_SCE_EE_GCC_SRC_GCC_LIBGCC2_H
#define USR_LOCAL_SCE_EE_GCC_SRC_GCC_LIBGCC2_H

typedef long int DItype;
typedef long unsigned int UDItype;
typedef float SFtype;
typedef double DFtype;

struct eh_context {
	void *handler_label;
	void **dynamic_handler_chain;
	void *info;
	void *table_index;
	char alloc_buffer[192];
	unsigned int alloc_mask;
};

extern void (*__terminate_func)(/* parameters unknown */);
extern void *key_value[256];

DItype __muldi3(DItype u, DItype v);
DItype __divdi3(DItype u, DItype v);
DItype __moddi3(DItype u, DItype v);
UDItype __udivdi3(UDItype n, UDItype d);
UDItype __umoddi3(UDItype u, UDItype v);
SFtype __floatdisf(DItype u);
DItype __fixunsdfdi(DFtype a);
DItype __fixunssfdi(SFtype original_a);
DItype __fixsfdi(SFtype a);
void __do_global_dtors();
void __do_global_ctors();
void __main();
void __pure_virtual();
void __default_terminate();
void __terminate();
void* __throw_type_match(void *catch_type, void *throw_type, void *obj);
void __empty();
void* __get_eh_context();
void** __get_eh_info();
void* __eh_alloc(size_t size);
void __eh_free(void *p);
void*** __get_dynamic_handler_chain();
void __sjthrow();
void __sjpopnthrow();
int __eh_rtime_match(void *rtime);
short int __get_eh_table_version(exception_descriptor *table);
short int __get_eh_table_language(exception_descriptor *table);
void __unwinding_cleanup();
void __throw();
void __rethrow(void *index);
DFtype __floatdidf(DItype u);
DItype __fixdfdi(DFtype a);

#endif // USR_LOCAL_SCE_EE_GCC_SRC_GCC_LIBGCC2_H
