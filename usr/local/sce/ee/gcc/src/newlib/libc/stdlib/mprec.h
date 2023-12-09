// STATUS: NOT STARTED

#ifndef USR_LOCAL_SCE_EE_GCC_SRC_NEWLIB_LIBC_STDLIB_MPREC_H
#define USR_LOCAL_SCE_EE_GCC_SRC_NEWLIB_LIBC_STDLIB_MPREC_H

typedef unsigned int __uint32_t;

struct tm {
	int tm_sec;
	int tm_min;
	int tm_hour;
	int tm_mday;
	int tm_mon;
	int tm_year;
	int tm_wday;
	int tm_yday;
	int tm_isdst;
};

// warning: multiple differing types with the same name (#598, type name not equal)
typedef __uint32_t __ULong;

// warning: multiple differing types with the same name (#598, type name not equal)
struct _Bigint {
	_Bigint *_next;
	int _k;
	int _maxwds;
	int _sign;
	int _wds;
	__ULong _x[1];
};

struct _atexit {
	_atexit *_next;
	int _ind;
	void (*_fns[32])(/* parameters unknown */);
};

struct __sFILE {
	unsigned char *_p;
	int _r;
	int _w;
	short int _flags;
	short int _file;
	__sbuf _bf;
	int _lbfsize;
	void *_cookie;
	int (*_read)(/* parameters unknown */);
	int (*_write)(/* parameters unknown */);
	_fpos_t (*_seek)(/* parameters unknown */);
	int (*_close)(/* parameters unknown */);
	__sbuf _ub;
	unsigned char *_up;
	int _ur;
	unsigned char _ubuf[3];
	unsigned char _nbuf[1];
	__sbuf _lb;
	int _blksize;
	int _offset;
	_reent *_data;
};

// warning: multiple differing types with the same name (#598, size not equal)
struct _reent {
	int _errno;
	__sFILE *_stdin;
	__sFILE *_stdout;
	__sFILE *_stderr;
	int _inc;
	char _emergency[25];
	int _current_category;
	char *_current_locale;
	int __sdidinit;
	void (*__cleanup)(/* parameters unknown */);
	_Bigint *_result;
	int _result_k;
	_Bigint *_p5s;
	_Bigint **_freelist;
	int _cvtlen;
	char *_cvtbuf;
	union {
		struct {
			unsigned int _unused_rand;
			char *_strtok_last;
			char _asctime_buf[26];
			tm _localtime_buf;
			int _gamma_signgam;
			long long unsigned int _rand_next;
		} _reent;
		struct {
			unsigned char *_nextf[30];
			unsigned int _nmalloc[30];
		} _unused;
	} _new;
	_atexit *_atexit;
	_atexit _atexit0;
	void (**_sig_func)(/* parameters unknown */);
	_glue __sglue;
	__sFILE __sf[3];
};

extern double __mprec_tens[0];
extern double __mprec_bigtens[0];
extern double __mprec_tinytens[0];

_Bigint* _Balloc(_reent *ptr, int k);
void _Bfree(_reent *ptr, _Bigint *v);
_Bigint* _multadd(_reent *ptr, _Bigint *b, int m, int a);
_Bigint* _s2b(_reent *ptr, char *s, int nd0, int nd, __ULong y9);
int _hi0bits(__ULong x);
int _lo0bits(__ULong *y);
_Bigint* _i2b(_reent *ptr, int i);
_Bigint* _multiply(_reent *ptr, _Bigint *a, _Bigint *b);
_Bigint* _pow5mult(_reent *ptr, _Bigint *b, int k);
_Bigint* _lshift(_reent *ptr, _Bigint *b, int k);
int __mcmp(_Bigint *a, _Bigint *b);
_Bigint* __mdiff(_reent *ptr, _Bigint *a, _Bigint *b);
double _ulp(double _x);
double _b2d(_Bigint *a, int *e);
_Bigint* _d2b(_reent *ptr, double _d, int *e, int *bits);
double _ratio(_Bigint *a, _Bigint *b);
double _mprec_log10(int dig);

#endif // USR_LOCAL_SCE_EE_GCC_SRC_NEWLIB_LIBC_STDLIB_MPREC_H
