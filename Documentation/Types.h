// File written by stdump development version on 2024-08-09
// 
// Input file:
//   SLES_523.84
// Toolchain version(s):
//   unknown
// Built-in types:
//   _IO_lock_t               void
//   __int128_t               128-bit integer
//   __uint128_t              128-bit integer
//   __wchar_t                32-bit unsigned integer
//   bool                     8-bit boolean
//   char                     8-bit integer
//   complex double           64-bit floating point
//   complex double           128-bit floating point
//   complex float            32-bit floating point
//   complex float            64-bit floating point
//   complex long double      64-bit floating point
//   complex long double      128-bit floating point
//   double                   64-bit floating point
//   float                    32-bit floating point
//   int                      32-bit signed integer
//   long double              64-bit floating point
//   long int                 64-bit signed integer
//   long long int            64-bit signed integer
//   long long unsigned int   64-bit unsigned integer
//   long unsigned int        64-bit unsigned integer
//   long128                  128-bit integer
//   sceExcepIOPExceptionData void
//   sceGifTag                void
//   sceGsAlphaEnv            void
//   sceGsAlphaEnv2           void
//   sceGsClear               void
//   sceGsDrawEnv1            void
//   sceGsDrawEnv2            void
//   sceGsGParam              void
//   sceGsLoadImage           void
//   sceGsStoreImage          void
//   sceGsTexEnv              void
//   sceGsTexEnv2             void
//   sceMcTblGetDir           void
//   short int                16-bit signed integer
//   short unsigned int       16-bit unsigned integer
//   signed char              8-bit signed integer
//   u_long128                128-bit integer
//   unsigned char            8-bit unsigned integer
//   unsigned int             32-bit unsigned integer
//   void                     void

typedef struct { // 0x8
	/* 0x0 */ int real;
	/* 0x4 */ int imag;
} complex int;

typedef void *__builtin_va_list;

typedef struct { // 0x8
	/* 0x0 */ short int __delta;
	/* 0x2 */ short int __index;
	/* 0x4 */ void *__pfn;
	/* 0x4 */ short int __delta2;
} __vtbl_ptr_type;

typedef int __int32_t;
typedef unsigned int __uint32_t;
typedef unsigned int size_t;
// warning: multiple differing types with the same name (descriptor not equal)
typedef void *__gnuc_va_list;
typedef long unsigned int clock_t;
typedef long int time_t;

struct tm { // 0x24
	/* 0x00 */ int tm_sec;
	/* 0x04 */ int tm_min;
	/* 0x08 */ int tm_hour;
	/* 0x0c */ int tm_mday;
	/* 0x10 */ int tm_mon;
	/* 0x14 */ int tm_year;
	/* 0x18 */ int tm_wday;
	/* 0x1c */ int tm_yday;
	/* 0x20 */ int tm_isdst;
};

// warning: multiple differing types with the same name (type name not equal)
typedef __uint32_t __ULong;

struct _glue { // 0xc
	/* 0x0 */ _glue *_next;
	/* 0x4 */ int _niobs;
	/* 0x8 */ __sFILE *_iobs;
};

// warning: multiple differing types with the same name (type name not equal)
typedef struct { // 0x18
	/* 0x00 */ _Bigint *_next;
	/* 0x04 */ int _k;
	/* 0x08 */ int _maxwds;
	/* 0x0c */ int _sign;
	/* 0x10 */ int _wds;
	/* 0x14 */ __ULong _x[1];
} _Bigint;

struct _atexit { // 0x88
	/* 0x00 */ _atexit *_next;
	/* 0x04 */ int _ind;
	/* 0x08 */ void (*_fns[32])(/* parameters unknown */);
};

struct __sbuf { // 0x8
	/* 0x0 */ unsigned char *_base;
	/* 0x4 */ int _size;
};

typedef long int _fpos_t;

struct __sFILE { // 0x58
	/* 0x00 */ unsigned char *_p;
	/* 0x04 */ int _r;
	/* 0x08 */ int _w;
	/* 0x0c */ short int _flags;
	/* 0x0e */ short int _file;
	/* 0x10 */ __sbuf _bf;
	/* 0x18 */ int _lbfsize;
	/* 0x1c */ void *_cookie;
	/* 0x20 */ int (*_read)(/* parameters unknown */);
	/* 0x24 */ int (*_write)(/* parameters unknown */);
	/* 0x28 */ _fpos_t (*_seek)(/* parameters unknown */);
	/* 0x2c */ int (*_close)(/* parameters unknown */);
	/* 0x30 */ __sbuf _ub;
	/* 0x38 */ unsigned char *_up;
	/* 0x3c */ int _ur;
	/* 0x40 */ unsigned char _ubuf[3];
	/* 0x43 */ unsigned char _nbuf[1];
	/* 0x44 */ __sbuf _lb;
	/* 0x4c */ int _blksize;
	/* 0x50 */ int _offset;
	/* 0x54 */ _reent *_data;
};

// warning: multiple differing types with the same name (size not equal)
struct _reent { // 0x2f0
	/* 0x000 */ int _errno;
	/* 0x004 */ __sFILE *_stdin;
	/* 0x008 */ __sFILE *_stdout;
	/* 0x00c */ __sFILE *_stderr;
	/* 0x010 */ int _inc;
	/* 0x014 */ char _emergency[25];
	/* 0x030 */ int _current_category;
	/* 0x034 */ char *_current_locale;
	/* 0x038 */ int __sdidinit;
	/* 0x03c */ void (*__cleanup)(/* parameters unknown */);
	/* 0x040 */ _Bigint *_result;
	/* 0x044 */ int _result_k;
	/* 0x048 */ _Bigint *_p5s;
	/* 0x04c */ _Bigint **_freelist;
	/* 0x050 */ int _cvtlen;
	/* 0x054 */ char *_cvtbuf;
	/* 0x058 */ union { // 0xf0
		/* 0x058 */ struct { // 0x58
			/* 0x058 */ unsigned int _unused_rand;
			/* 0x05c */ char *_strtok_last;
			/* 0x060 */ char _asctime_buf[26];
			/* 0x07c */ tm _localtime_buf;
			/* 0x0a0 */ int _gamma_signgam;
			/* 0x0a8 */ long long unsigned int _rand_next;
		} _reent;
		/* 0x058 */ struct { // 0xf0
			/* 0x058 */ unsigned char *_nextf[30];
			/* 0x0d0 */ unsigned int _nmalloc[30];
		} _unused;
	} _new;
	/* 0x148 */ _atexit *_atexit;
	/* 0x14c */ _atexit _atexit0;
	/* 0x1d4 */ void (**_sig_func)(/* parameters unknown */);
	/* 0x1d8 */ _glue __sglue;
	/* 0x1e4 */ __sFILE __sf[3];
};

typedef _fpos_t fpos_t;
typedef __sFILE FILE;

typedef struct { // 0xc
	/* 0x0 */ char *str;
	/* 0x4 */ int (*func)(/* parameters unknown */);
	/* 0x8 */ void (*ini_func)(/* parameters unknown */);
} DEBUG_MENU_DATA;

enum _FADE_MODE {
	FADE_MODE_NONE = 0,
	FADE_MODE_IN = 1,
	FADE_MODE_KEEP = 2,
	FADE_MODE_OUT = 3,
	FADE_MODE_UP = 4,
	FADE_MODE_DOWN = 5,
	FADE_MODE_IN_STOP = 6,
	FADE_MODE_OUT_STOP = 7
};

typedef _FADE_MODE FADE_MODE;

struct _MALLOC_HEADER { // 0x10
	/* 0x0 */ _MALLOC_HEADER *pre;
	/* 0x4 */ _MALLOC_HEADER *next;
	/* 0x8 */ int use_size;
	/* 0xc */ int vac_size;
};

typedef _MALLOC_HEADER MALLOC_HEADER;

struct _MY_MALLOC { // 0x18
	/* 0x00 */ MALLOC_HEADER wrk;
	/* 0x10 */ void *adrs;
	/* 0x14 */ int size;
};

typedef _MY_MALLOC MY_MALLOC;

struct _HEAP_WRK { // 0x20
	/* 0x00 */ MY_MALLOC malloc;
	/* 0x18 */ int heap_num;
	/* 0x1c */ int memory_sema;
};

typedef _HEAP_WRK HEAP_WRK;

enum HEAP_MEMMODE {
	HEAPMEM_USED_SIZE = 0,
	HEAPMEM_LEAVE_SIZE = 1
};

enum _enum__SPU_CORE {
	SPU_CORE_1 = 0,
	SPU_CORE_2 = 1,
	SPU_CORE_NUM = 2
};

typedef _enum__SPU_CORE enum_SPU_CORE;

struct _VOLSET { // 0x4
	/* 0x0 */ short int l;
	/* 0x2 */ short int r;
};

typedef _VOLSET VOLSET;
typedef unsigned char u_char;
typedef short unsigned int u_short;
typedef unsigned int u_int;
typedef long unsigned int u_long;
// warning: multiple differing types with the same name (descriptor not equal)
typedef __int128_t long128;
// warning: multiple differing types with the same name (descriptor not equal)
typedef __uint128_t u_long128;
typedef int qword[4];
typedef int sceVu0IVECTOR[4];
typedef float sceVu0FVECTOR[4];
typedef float sceVu0FMATRIX[4][4];

struct _SND_3D_ENV { // 0x18
	/* 0x00 */ float front;
	/* 0x04 */ float side;
	/* 0x08 */ float back;
	/* 0x0c */ float vol_min;
	/* 0x10 */ float farthest_dist;
	/* 0x14 */ float nearest_dist;
};

typedef _SND_3D_ENV SND_3D_ENV;

struct _SND_3D_SET { // 0xc
	/* 0x0 */ sceVu0FVECTOR *pos;
	/* 0x4 */ sceVu0FVECTOR *vel;
	/* 0x8 */ sceVu0FVECTOR *dir;
};

typedef _SND_3D_SET SND_3D_SET;
typedef void (*CdlCB)(/* parameters unknown */);

typedef struct { // 0x4
	/* 0x0 */ u_char trycount;
	/* 0x1 */ u_char spindlctrl;
	/* 0x2 */ u_char datapattern;
	/* 0x3 */ u_char pad;
} sceCdRMode;

typedef struct { // 0x4
	/* 0x0 */ u_char minute;
	/* 0x1 */ u_char second;
	/* 0x2 */ u_char sector;
	/* 0x3 */ u_char track;
} sceCdlLOCCD;

typedef struct { // 0x24
	/* 0x00 */ u_int lsn;
	/* 0x04 */ u_int size;
	/* 0x08 */ char name[16];
	/* 0x18 */ u_char date[8];
	/* 0x20 */ u_int flag;
} sceCdlFILE;

typedef struct { // 0x8
	/* 0x0 */ u_char stat;
	/* 0x1 */ u_char second;
	/* 0x2 */ u_char minute;
	/* 0x3 */ u_char hour;
	/* 0x4 */ u_char pad;
	/* 0x5 */ u_char day;
	/* 0x6 */ u_char month;
	/* 0x7 */ u_char year;
} sceCdCLOCK;

typedef struct { // 0xc
	/* 0x0 */ u_int bufmax;
	/* 0x4 */ u_int bankmax;
	/* 0x8 */ u_int iop_bufaddr;
} sceCdStmInit;

struct _sceGifPackRgbaq { // 0x10
	/* 0x0 */ u_int R;
	/* 0x4 */ u_int G;
	/* 0x8 */ u_int B;
	/* 0xc */ u_int A;
};

typedef _sceGifPackRgbaq sceGifPackRgbaq;

struct _sceGifPackAd { // 0x10
	/* 0x0 */ u_long DATA;
	/* 0x8 */ u_long ADDR;
};

typedef _sceGifPackAd sceGifPackAd;

struct _sceGifPackSt { // 0x10
	/* 0x0 */ float S;
	/* 0x4 */ float T;
	/* 0x8 */ float Q;
	/* 0xc */ u_int pad96;
};

typedef _sceGifPackSt sceGifPackSt;

struct _sceGifPackUv { // 0x10
	/* 0x0 */ int U;
	/* 0x4 */ int V;
	/* 0x8 */ long int pad64;
};

typedef _sceGifPackUv sceGifPackUv;

struct _sceGifPackXyzf { // 0x10
	/* 0x0 */ int X;
	/* 0x4 */ int Y;
	/* 0x8 */ u_int Z;
	/* 0xc:0 */ u_int F : 12;
	/* 0xd:4 */ u_int pad108 : 3;
	/* 0xd:7 */ u_int ADC : 1;
	/* 0xe:0 */ u_int pad112 : 16;
};

typedef _sceGifPackXyzf sceGifPackXyzf;

struct _sceGifPackXyz { // 0x10
	/* 0x0 */ int X;
	/* 0x4 */ int Y;
	/* 0x8 */ u_int Z;
	/* 0xc:0 */ u_int pad96 : 15;
	/* 0xd:7 */ u_int ADC : 1;
	/* 0xe:0 */ u_int pad112 : 16;
};

typedef _sceGifPackXyz sceGifPackXyz;

struct _sceGifPackFog { // 0x10
	/* 0x0 */ u_int pad[3];
	/* 0xc */ u_int F;
};

typedef _sceGifPackFog sceGifPackFog;

struct _sceGifPackNop { // 0x10
	/* 0x0 */ u_long pad[2];
};

typedef _sceGifPackNop sceGifPackNop;

typedef struct { // 0x8
	/* 0x0:0 */ long unsigned int A : 2;
	/* 0x0:2 */ long unsigned int B : 2;
	/* 0x0:4 */ long unsigned int C : 2;
	/* 0x0:6 */ long unsigned int D : 2;
	/* 0x1:0 */ long unsigned int pad8 : 24;
	/* 0x4:0 */ long unsigned int FIX : 8;
	/* 0x5:0 */ long unsigned int pad40 : 24;
} sceGsAlpha;

typedef struct { // 0x8
	/* 0x0:0 */ long unsigned int SBP : 14;
	/* 0x1:6 */ long unsigned int pad14 : 2;
	/* 0x2:0 */ long unsigned int SBW : 6;
	/* 0x2:6 */ long unsigned int pad22 : 2;
	/* 0x3:0 */ long unsigned int SPSM : 6;
	/* 0x3:6 */ long unsigned int pad30 : 2;
	/* 0x4:0 */ long unsigned int DBP : 14;
	/* 0x5:6 */ long unsigned int pad46 : 2;
	/* 0x6:0 */ long unsigned int DBW : 6;
	/* 0x6:6 */ long unsigned int pad54 : 2;
	/* 0x7:0 */ long unsigned int DPSM : 6;
	/* 0x7:6 */ long unsigned int pad62 : 2;
} sceGsBitbltbuf;

typedef struct { // 0x8
	/* 0x0:0 */ long unsigned int WMS : 2;
	/* 0x0:2 */ long unsigned int WMT : 2;
	/* 0x0:4 */ long unsigned int MINU : 10;
	/* 0x1:6 */ long unsigned int MAXU : 10;
	/* 0x3:0 */ long unsigned int MINV : 10;
	/* 0x4:2 */ long unsigned int MAXV : 10;
	/* 0x5:4 */ long unsigned int pad44 : 20;
} sceGsClamp;

typedef struct { // 0x8
	/* 0x0:0 */ long unsigned int CLAMP : 1;
	/* 0x0:1 */ long unsigned int pad01 : 63;
} sceGsColclamp;

typedef struct { // 0x8
	/* 0x0:0 */ long unsigned int DIMX00 : 3;
	/* 0x0:3 */ long unsigned int pad00 : 1;
	/* 0x0:4 */ long unsigned int DIMX01 : 3;
	/* 0x0:7 */ long unsigned int pad01 : 1;
	/* 0x1:0 */ long unsigned int DIMX02 : 3;
	/* 0x1:3 */ long unsigned int pad02 : 1;
	/* 0x1:4 */ long unsigned int DIMX03 : 3;
	/* 0x1:7 */ long unsigned int pad03 : 1;
	/* 0x2:0 */ long unsigned int DIMX10 : 3;
	/* 0x2:3 */ long unsigned int pad10 : 1;
	/* 0x2:4 */ long unsigned int DIMX11 : 3;
	/* 0x2:7 */ long unsigned int pad11 : 1;
	/* 0x3:0 */ long unsigned int DIMX12 : 3;
	/* 0x3:3 */ long unsigned int pad12 : 1;
	/* 0x3:4 */ long unsigned int DIMX13 : 3;
	/* 0x3:7 */ long unsigned int pad13 : 1;
	/* 0x4:0 */ long unsigned int DIMX20 : 3;
	/* 0x4:3 */ long unsigned int pad20 : 1;
	/* 0x4:4 */ long unsigned int DIMX21 : 3;
	/* 0x4:7 */ long unsigned int pad21 : 1;
	/* 0x5:0 */ long unsigned int DIMX22 : 3;
	/* 0x5:3 */ long unsigned int pad22 : 1;
	/* 0x5:4 */ long unsigned int DIMX23 : 3;
	/* 0x5:7 */ long unsigned int pad23 : 1;
	/* 0x6:0 */ long unsigned int DIMX30 : 3;
	/* 0x6:3 */ long unsigned int pad30 : 1;
	/* 0x6:4 */ long unsigned int DIMX31 : 3;
	/* 0x6:7 */ long unsigned int pad31 : 1;
	/* 0x7:0 */ long unsigned int DIMX32 : 3;
	/* 0x7:3 */ long unsigned int pad32 : 1;
	/* 0x7:4 */ long unsigned int DIMX33 : 3;
	/* 0x7:7 */ long unsigned int pad33 : 1;
} sceGsDimx;

typedef struct { // 0x8
	/* 0x0:0 */ long unsigned int DTHE : 1;
	/* 0x0:1 */ long unsigned int pad01 : 63;
} sceGsDthe;

typedef struct { // 0x8
	/* 0x0:0 */ long unsigned int FBA : 1;
	/* 0x0:1 */ long unsigned int pad01 : 63;
} sceGsFba;

typedef struct { // 0x8
	/* 0x0 */ long unsigned int pad00;
} sceGsFinish;

typedef struct { // 0x8
	/* 0x0:0 */ long unsigned int pad00 : 56;
	/* 0x7:0 */ long unsigned int F : 8;
} sceGsFog;

typedef struct { // 0x8
	/* 0x0:0 */ long unsigned int FCR : 8;
	/* 0x1:0 */ long unsigned int FCG : 8;
	/* 0x2:0 */ long unsigned int FCB : 8;
	/* 0x3:0 */ long unsigned int pad24 : 40;
} sceGsFogcol;

typedef struct { // 0x8
	/* 0x0:0 */ long unsigned int FBP : 9;
	/* 0x1:1 */ long unsigned int pad09 : 7;
	/* 0x2:0 */ long unsigned int FBW : 6;
	/* 0x2:6 */ long unsigned int pad22 : 2;
	/* 0x3:0 */ long unsigned int PSM : 6;
	/* 0x3:6 */ long unsigned int pad30 : 2;
	/* 0x4:0 */ long unsigned int FBMSK : 32;
} sceGsFrame;

typedef struct { // 0x8
	/* 0x0 */ long unsigned int WDATA;
} sceGsHwreg;

typedef struct { // 0x8
	/* 0x0 */ u_int ID;
	/* 0x4 */ u_int IDMSK;
} sceGsLabel;

typedef struct { // 0x8
	/* 0x0:0 */ long unsigned int TBP1 : 14;
	/* 0x1:6 */ long unsigned int TBW1 : 6;
	/* 0x2:4 */ long unsigned int TBP2 : 14;
	/* 0x4:2 */ long unsigned int TBW2 : 6;
	/* 0x5:0 */ long unsigned int TBP3 : 14;
	/* 0x6:6 */ long unsigned int TBW3 : 6;
	/* 0x7:4 */ long unsigned int pad60 : 4;
} sceGsMiptbp1;

typedef struct { // 0x8
	/* 0x0:0 */ long unsigned int TBP4 : 14;
	/* 0x1:6 */ long unsigned int TBW4 : 6;
	/* 0x2:4 */ long unsigned int TBP5 : 14;
	/* 0x4:2 */ long unsigned int TBW5 : 6;
	/* 0x5:0 */ long unsigned int TBP6 : 14;
	/* 0x6:6 */ long unsigned int TBW6 : 6;
	/* 0x7:4 */ long unsigned int pad60 : 4;
} sceGsMiptbp2;

typedef struct { // 0x8
	/* 0x0:0 */ long unsigned int PABE : 1;
	/* 0x0:1 */ long unsigned int pad01 : 63;
} sceGsPabe;

typedef struct { // 0x8
	/* 0x0:0 */ long unsigned int PRIM : 3;
	/* 0x0:3 */ long unsigned int IIP : 1;
	/* 0x0:4 */ long unsigned int TME : 1;
	/* 0x0:5 */ long unsigned int FGE : 1;
	/* 0x0:6 */ long unsigned int ABE : 1;
	/* 0x0:7 */ long unsigned int AA1 : 1;
	/* 0x1:0 */ long unsigned int FST : 1;
	/* 0x1:1 */ long unsigned int CTXT : 1;
	/* 0x1:2 */ long unsigned int FIX : 1;
	/* 0x1:3 */ long unsigned int pad11 : 53;
} sceGsPrim;

typedef struct { // 0x8
	/* 0x0:0 */ long unsigned int pad00 : 3;
	/* 0x0:3 */ long unsigned int IIP : 1;
	/* 0x0:4 */ long unsigned int TME : 1;
	/* 0x0:5 */ long unsigned int FGE : 1;
	/* 0x0:6 */ long unsigned int ABE : 1;
	/* 0x0:7 */ long unsigned int AA1 : 1;
	/* 0x1:0 */ long unsigned int FST : 1;
	/* 0x1:1 */ long unsigned int CTXT : 1;
	/* 0x1:2 */ long unsigned int FIX : 1;
	/* 0x1:3 */ long unsigned int pad11 : 53;
} sceGsPrmode;

typedef struct { // 0x8
	/* 0x0:0 */ long unsigned int AC : 1;
	/* 0x0:1 */ long unsigned int pad01 : 63;
} sceGsPrmodecont;

typedef struct { // 0x8
	/* 0x0:0 */ u_int R : 8;
	/* 0x1:0 */ u_int G : 8;
	/* 0x2:0 */ u_int B : 8;
	/* 0x3:0 */ u_int A : 8;
	/* 0x4 */ float Q;
} sceGsRgbaq;

typedef struct { // 0x8
	/* 0x0:0 */ long unsigned int MSK : 2;
	/* 0x0:2 */ long unsigned int pad02 : 62;
} sceGsScanmsk;

typedef struct { // 0x8
	/* 0x0:0 */ long unsigned int SCAX0 : 11;
	/* 0x1:3 */ long unsigned int pad11 : 5;
	/* 0x2:0 */ long unsigned int SCAX1 : 11;
	/* 0x3:3 */ long unsigned int pad27 : 5;
	/* 0x4:0 */ long unsigned int SCAY0 : 11;
	/* 0x5:3 */ long unsigned int pad43 : 5;
	/* 0x6:0 */ long unsigned int SCAY1 : 11;
	/* 0x7:3 */ long unsigned int pad59 : 5;
} sceGsScissor;

typedef struct { // 0x8
	/* 0x0 */ u_int ID;
	/* 0x4 */ u_int IDMSK;
} sceGsSignal;

typedef struct { // 0x8
	/* 0x0 */ float S;
	/* 0x4 */ float T;
} sceGsSt;

typedef struct { // 0x8
	/* 0x0:0 */ long unsigned int ATE : 1;
	/* 0x0:1 */ long unsigned int ATST : 3;
	/* 0x0:4 */ long unsigned int AREF : 8;
	/* 0x1:4 */ long unsigned int AFAIL : 2;
	/* 0x1:6 */ long unsigned int DATE : 1;
	/* 0x1:7 */ long unsigned int DATM : 1;
	/* 0x2:0 */ long unsigned int ZTE : 1;
	/* 0x2:1 */ long unsigned int ZTST : 2;
	/* 0x2:3 */ long unsigned int pad19 : 45;
} sceGsTest;

typedef struct { // 0x8
	/* 0x0:0 */ long unsigned int TBP0 : 14;
	/* 0x1:6 */ long unsigned int TBW : 6;
	/* 0x2:4 */ long unsigned int PSM : 6;
	/* 0x3:2 */ long unsigned int TW : 4;
	/* 0x3:6 */ long unsigned int TH : 4;
	/* 0x4:2 */ long unsigned int TCC : 1;
	/* 0x4:3 */ long unsigned int TFX : 2;
	/* 0x4:5 */ long unsigned int CBP : 14;
	/* 0x6:3 */ long unsigned int CPSM : 4;
	/* 0x6:7 */ long unsigned int CSM : 1;
	/* 0x7:0 */ long unsigned int CSA : 5;
	/* 0x7:5 */ long unsigned int CLD : 3;
} sceGsTex0;

typedef struct { // 0x8
	/* 0x0:0 */ long unsigned int LCM : 1;
	/* 0x0:1 */ long unsigned int pad01 : 1;
	/* 0x0:2 */ long unsigned int MXL : 3;
	/* 0x0:5 */ long unsigned int MMAG : 1;
	/* 0x0:6 */ long unsigned int MMIN : 3;
	/* 0x1:1 */ long unsigned int MTBA : 1;
	/* 0x1:2 */ long unsigned int pad10 : 9;
	/* 0x2:3 */ long unsigned int L : 2;
	/* 0x2:5 */ long unsigned int pad21 : 11;
	/* 0x4:0 */ long unsigned int K : 12;
	/* 0x5:4 */ long unsigned int pad44 : 20;
} sceGsTex1;

typedef struct { // 0x8
	/* 0x0:0 */ long unsigned int pad00 : 20;
	/* 0x2:4 */ long unsigned int PSM : 6;
	/* 0x3:2 */ long unsigned int pad26 : 11;
	/* 0x4:5 */ long unsigned int CBP : 14;
	/* 0x6:3 */ long unsigned int CPSM : 4;
	/* 0x6:7 */ long unsigned int CSM : 1;
	/* 0x7:0 */ long unsigned int CSA : 5;
	/* 0x7:5 */ long unsigned int CLD : 3;
} sceGsTex2;

typedef struct { // 0x8
	/* 0x0:0 */ long unsigned int TA0 : 8;
	/* 0x1:0 */ long unsigned int pad08 : 7;
	/* 0x1:7 */ long unsigned int AEM : 1;
	/* 0x2:0 */ long unsigned int pad16 : 16;
	/* 0x4:0 */ long unsigned int TA1 : 8;
	/* 0x5:0 */ long unsigned int pad40 : 24;
} sceGsTexa;

typedef struct { // 0x8
	/* 0x0:0 */ long unsigned int CBW : 6;
	/* 0x0:6 */ long unsigned int COU : 6;
	/* 0x1:4 */ long unsigned int COV : 10;
	/* 0x2:6 */ long unsigned int pad22 : 42;
} sceGsTexclut;

typedef struct { // 0x8
	/* 0x0 */ long unsigned int pad00;
} sceGsTexflush;

typedef struct { // 0x8
	/* 0x0:0 */ long unsigned int XDR : 2;
	/* 0x0:2 */ long unsigned int pad02 : 62;
} sceGsTrxdir;

typedef struct { // 0x8
	/* 0x0:0 */ long unsigned int SSAX : 11;
	/* 0x1:3 */ long unsigned int pad11 : 5;
	/* 0x2:0 */ long unsigned int SSAY : 11;
	/* 0x3:3 */ long unsigned int pad27 : 5;
	/* 0x4:0 */ long unsigned int DSAX : 11;
	/* 0x5:3 */ long unsigned int pad43 : 5;
	/* 0x6:0 */ long unsigned int DSAY : 11;
	/* 0x7:3 */ long unsigned int DIR : 2;
	/* 0x7:5 */ long unsigned int pad61 : 3;
} sceGsTrxpos;

typedef struct { // 0x8
	/* 0x0:0 */ long unsigned int RRW : 12;
	/* 0x1:4 */ long unsigned int pad12 : 20;
	/* 0x4:0 */ long unsigned int RRH : 12;
	/* 0x5:4 */ long unsigned int pad44 : 20;
} sceGsTrxreg;

typedef struct { // 0x8
	/* 0x0:0 */ long unsigned int U : 14;
	/* 0x1:6 */ long unsigned int pad14 : 2;
	/* 0x2:0 */ long unsigned int V : 14;
	/* 0x3:6 */ long unsigned int pad30 : 34;
} sceGsUv;

typedef struct { // 0x8
	/* 0x0:0 */ long unsigned int OFX : 16;
	/* 0x2:0 */ long unsigned int pad16 : 16;
	/* 0x4:0 */ long unsigned int OFY : 16;
	/* 0x6:0 */ long unsigned int pad48 : 16;
} sceGsXyoffset;

typedef struct { // 0x8
	/* 0x0:0 */ long unsigned int X : 16;
	/* 0x2:0 */ long unsigned int Y : 16;
	/* 0x4:0 */ long unsigned int Z : 32;
} sceGsXyz;

typedef struct { // 0x8
	/* 0x0:0 */ long unsigned int X : 16;
	/* 0x2:0 */ long unsigned int Y : 16;
	/* 0x4:0 */ long unsigned int Z : 24;
	/* 0x7:0 */ long unsigned int F : 8;
} sceGsXyzf;

typedef struct { // 0x8
	/* 0x0:0 */ long unsigned int ZBP : 9;
	/* 0x1:1 */ long unsigned int pad09 : 15;
	/* 0x3:0 */ long unsigned int PSM : 4;
	/* 0x3:4 */ long unsigned int pad28 : 4;
	/* 0x4:0 */ long unsigned int ZMSK : 1;
	/* 0x4:1 */ long unsigned int pad33 : 31;
} sceGsZbuf;

struct ThreadParam { // 0x30
	/* 0x00 */ int status;
	/* 0x04 */ void (*entry)(/* parameters unknown */);
	/* 0x08 */ void *stack;
	/* 0x0c */ int stackSize;
	/* 0x10 */ void *gpReg;
	/* 0x14 */ int initPriority;
	/* 0x18 */ int currentPriority;
	/* 0x1c */ u_int attr;
	/* 0x20 */ u_int option;
	/* 0x24 */ int waitType;
	/* 0x28 */ int waitId;
	/* 0x2c */ int wakeupCount;
};

struct SemaParam { // 0x18
	/* 0x00 */ int currentCount;
	/* 0x04 */ int maxCount;
	/* 0x08 */ int initCount;
	/* 0x0c */ int numWaitThreads;
	/* 0x10 */ u_int attr;
	/* 0x14 */ u_int option;
};

typedef struct { // 0x4
	/* 0x0:0 */ unsigned int COUNT : 16;
	/* 0x2:0 */ unsigned int p0 : 16;
} tT_COUNT;

typedef struct { // 0x4
	/* 0x0:0 */ unsigned int CLKS : 2;
	/* 0x0:2 */ unsigned int GATE : 1;
	/* 0x0:3 */ unsigned int GATS : 1;
	/* 0x0:4 */ unsigned int GATM : 2;
	/* 0x0:6 */ unsigned int ZRET : 1;
	/* 0x0:7 */ unsigned int CUE : 1;
	/* 0x1:0 */ unsigned int CMPE : 1;
	/* 0x1:1 */ unsigned int OVFE : 1;
	/* 0x1:2 */ unsigned int EQUF : 1;
	/* 0x1:3 */ unsigned int OVFF : 1;
	/* 0x1:4 */ unsigned int p0 : 20;
} tT_MODE;

typedef struct { // 0x4
	/* 0x0:0 */ unsigned int COMP : 16;
	/* 0x2:0 */ unsigned int p0 : 16;
} tT_COMP;

typedef struct { // 0x4
	/* 0x0:0 */ unsigned int HOLD : 16;
	/* 0x2:0 */ unsigned int p0 : 16;
} tT_HOLD;

// warning: multiple differing types with the same name (size not equal)
typedef struct { // 0x4
	/* 0x0:0 */ unsigned int OPTION : 28;
	/* 0x3:4 */ unsigned int CODE : 4;
} tIPU_CMD_write;

// warning: multiple differing types with the same name (size not equal)
typedef struct { // 0x8
	/* 0x0 */ unsigned int DATA;
	/* 0x4:0 */ unsigned int p0 : 31;
	/* 0x7:7 */ unsigned int BUSY : 1;
} tIPU_CMD_read;

typedef struct { // 0x8
	/* 0x0 */ unsigned int BSTOP;
	/* 0x4:0 */ unsigned int p0 : 31;
	/* 0x7:7 */ unsigned int BUSY : 1;
} tIPU_TOP;

typedef struct { // 0x4
	/* 0x0:0 */ unsigned int IFC : 4;
	/* 0x0:4 */ unsigned int OFC : 4;
	/* 0x1:0 */ unsigned int CBP : 6;
	/* 0x1:6 */ unsigned int ECD : 1;
	/* 0x1:7 */ unsigned int SCD : 1;
	/* 0x2:0 */ unsigned int IDP : 2;
	/* 0x2:2 */ unsigned int p0 : 2;
	/* 0x2:4 */ unsigned int AS : 1;
	/* 0x2:5 */ unsigned int IVF : 1;
	/* 0x2:6 */ unsigned int QST : 1;
	/* 0x2:7 */ unsigned int MP1 : 1;
	/* 0x3:0 */ unsigned int PCT : 3;
	/* 0x3:3 */ unsigned int p1 : 3;
	/* 0x3:6 */ unsigned int RST : 1;
	/* 0x3:7 */ unsigned int BUSY : 1;
} tIPU_CTRL;

typedef struct { // 0x4
	/* 0x0:0 */ unsigned int BP : 7;
	/* 0x0:7 */ unsigned int p0 : 1;
	/* 0x1:0 */ unsigned int IFC : 4;
	/* 0x1:4 */ unsigned int p1 : 4;
	/* 0x2:0 */ unsigned int FP : 2;
	/* 0x2:2 */ unsigned int p2 : 14;
} tIPU_BP;

typedef struct { // 0x4
	/* 0x0:0 */ unsigned int RST : 1;
	/* 0x0:1 */ unsigned int p0 : 2;
	/* 0x0:3 */ unsigned int PSE : 1;
	/* 0x0:4 */ unsigned int p1 : 28;
} tGIF_CTRL;

typedef struct { // 0x4
	/* 0x0:0 */ unsigned int M3R : 1;
	/* 0x0:1 */ unsigned int p0 : 1;
	/* 0x0:2 */ unsigned int IMT : 1;
	/* 0x0:3 */ unsigned int p1 : 29;
} tGIF_MODE;

typedef struct { // 0x4
	/* 0x0:0 */ unsigned int M3R : 1;
	/* 0x0:1 */ unsigned int M3P : 1;
	/* 0x0:2 */ unsigned int IMT : 1;
	/* 0x0:3 */ unsigned int PSE : 1;
	/* 0x0:4 */ unsigned int p0 : 1;
	/* 0x0:5 */ unsigned int IP3 : 1;
	/* 0x0:6 */ unsigned int P3Q : 1;
	/* 0x0:7 */ unsigned int P2Q : 1;
	/* 0x1:0 */ unsigned int P1Q : 1;
	/* 0x1:1 */ unsigned int OPH : 1;
	/* 0x1:2 */ unsigned int APATH : 2;
	/* 0x1:4 */ unsigned int DIR : 1;
	/* 0x1:5 */ unsigned int p1 : 11;
	/* 0x3:0 */ unsigned int FQC : 5;
	/* 0x3:5 */ unsigned int p2 : 3;
} tGIF_STAT;

typedef struct { // 0x4
	/* 0x0:0 */ unsigned int NLOOP : 15;
	/* 0x1:7 */ unsigned int EOP : 1;
	/* 0x2:0 */ unsigned int tag : 16;
} tGIF_TAG0;

// warning: multiple differing types with the same name (size not equal)
typedef struct { // 0x4
	/* 0x0:0 */ unsigned int tag : 14;
	/* 0x1:6 */ unsigned int PRE : 1;
	/* 0x1:7 */ unsigned int PRIM : 11;
	/* 0x3:2 */ unsigned int FLG : 2;
	/* 0x3:4 */ unsigned int NREG : 4;
} tGIF_TAG1;

typedef struct { // 0x4
	/* 0x0 */ unsigned int tag;
} tGIF_TAG2;

typedef struct { // 0x4
	/* 0x0 */ unsigned int tag;
} tGIF_TAG3;

typedef struct { // 0x4
	/* 0x0:0 */ unsigned int LOOPCNT : 15;
	/* 0x1:7 */ unsigned int p0 : 1;
	/* 0x2:0 */ unsigned int REGCNT : 4;
	/* 0x2:4 */ unsigned int VUADDR : 10;
	/* 0x3:6 */ unsigned int p1 : 2;
} tGIF_CNT;

typedef struct { // 0x4
	/* 0x0:0 */ unsigned int P3CNT : 15;
	/* 0x1:7 */ unsigned int p0 : 17;
} tGIF_P3CNT;

typedef struct { // 0x4
	/* 0x0:0 */ unsigned int LOOPCNT : 15;
	/* 0x1:7 */ unsigned int EOP : 1;
	/* 0x2:0 */ unsigned int p0 : 16;
} tGIF_P3TAG;

// warning: multiple differing types with the same name (fields size not equal)
typedef struct { // 0x4
	/* 0x0:0 */ unsigned int VPS : 2;
	/* 0x0:2 */ unsigned int VEW : 1;
	/* 0x0:3 */ unsigned int p0 : 3;
	/* 0x0:6 */ unsigned int MRK : 1;
	/* 0x0:7 */ unsigned int p1 : 1;
	/* 0x1:0 */ unsigned int VSS : 1;
	/* 0x1:1 */ unsigned int VFS : 1;
	/* 0x1:2 */ unsigned int VIS : 1;
	/* 0x1:3 */ unsigned int INT : 1;
	/* 0x1:4 */ unsigned int ERO : 1;
	/* 0x1:5 */ unsigned int ER1 : 1;
	/* 0x1:6 */ unsigned int p2 : 10;
	/* 0x3:0 */ unsigned int FQC : 4;
	/* 0x3:4 */ unsigned int p3 : 4;
} tVIF0_STAT;

typedef struct { // 0x4
	/* 0x0:0 */ unsigned int RST : 1;
	/* 0x0:1 */ unsigned int FBK : 1;
	/* 0x0:2 */ unsigned int STP : 1;
	/* 0x0:3 */ unsigned int STC : 1;
	/* 0x0:4 */ unsigned int p0 : 28;
} tVIF0_FBRST;

typedef struct { // 0x4
	/* 0x0:0 */ unsigned int MII : 1;
	/* 0x0:1 */ unsigned int ME0 : 1;
	/* 0x0:2 */ unsigned int ME1 : 1;
	/* 0x0:3 */ unsigned int p0 : 29;
} tVIF0_ERR;

typedef struct { // 0x4
	/* 0x0:0 */ unsigned int MARK : 16;
	/* 0x2:0 */ unsigned int p0 : 16;
} tVIF_MARK;

typedef struct { // 0x4
	/* 0x0:0 */ unsigned int CL : 8;
	/* 0x1:0 */ unsigned int WL : 8;
	/* 0x2:0 */ unsigned int p0 : 16;
} tVIF_CYCLE;

typedef struct { // 0x4
	/* 0x0:0 */ unsigned int MOD : 2;
	/* 0x0:2 */ unsigned int p0 : 30;
} tVIF_MODE;

typedef struct { // 0x4
	/* 0x0:0 */ unsigned int num : 8;
	/* 0x1:0 */ unsigned int p0 : 24;
} tVIF0_NUM;

typedef struct { // 0x4
	/* 0x0:0 */ unsigned int m0 : 2;
	/* 0x0:2 */ unsigned int m1 : 2;
	/* 0x0:4 */ unsigned int m2 : 2;
	/* 0x0:6 */ unsigned int m3 : 2;
	/* 0x1:0 */ unsigned int m4 : 2;
	/* 0x1:2 */ unsigned int m5 : 2;
	/* 0x1:4 */ unsigned int m6 : 2;
	/* 0x1:6 */ unsigned int m7 : 2;
	/* 0x2:0 */ unsigned int m8 : 2;
	/* 0x2:2 */ unsigned int m9 : 2;
	/* 0x2:4 */ unsigned int m10 : 2;
	/* 0x2:6 */ unsigned int m11 : 2;
	/* 0x3:0 */ unsigned int m12 : 2;
	/* 0x3:2 */ unsigned int m13 : 2;
	/* 0x3:4 */ unsigned int m14 : 2;
	/* 0x3:6 */ unsigned int m15 : 2;
} tVIF_MASK;

typedef struct { // 0x4
	/* 0x0:0 */ unsigned int immediate : 16;
	/* 0x2:0 */ unsigned int num : 8;
	/* 0x3:0 */ unsigned int CMD : 8;
} tVIF_CODE;

typedef struct { // 0x4
	/* 0x0:0 */ unsigned int ITOPS : 10;
	/* 0x1:2 */ unsigned int p0 : 22;
} tVIF_ITOPS;

typedef struct { // 0x4
	/* 0x0:0 */ unsigned int ITOP : 10;
	/* 0x1:2 */ unsigned int p0 : 22;
} tVIF_ITOP;

typedef struct { // 0x4
	/* 0x0 */ unsigned int R0;
} tVIF_R0;

typedef struct { // 0x4
	/* 0x0 */ unsigned int R1;
} tVIF_R1;

typedef struct { // 0x4
	/* 0x0 */ unsigned int R2;
} tVIF_R2;

typedef struct { // 0x4
	/* 0x0 */ unsigned int R3;
} tVIF_R3;

typedef struct { // 0x4
	/* 0x0 */ unsigned int C0;
} tVIF_C0;

typedef struct { // 0x4
	/* 0x0 */ unsigned int C1;
} tVIF_C1;

typedef struct { // 0x4
	/* 0x0 */ unsigned int C2;
} tVIF_C2;

typedef struct { // 0x4
	/* 0x0 */ unsigned int C3;
} tVIF_C3;

typedef struct { // 0x4
	/* 0x0:0 */ unsigned int VPS : 2;
	/* 0x0:2 */ unsigned int VEW : 1;
	/* 0x0:3 */ unsigned int VGW : 1;
	/* 0x0:4 */ unsigned int p0 : 2;
	/* 0x0:6 */ unsigned int MRK : 1;
	/* 0x0:7 */ unsigned int DBF : 1;
	/* 0x1:0 */ unsigned int VSS : 1;
	/* 0x1:1 */ unsigned int VFS : 1;
	/* 0x1:2 */ unsigned int VIS : 1;
	/* 0x1:3 */ unsigned int INT : 1;
	/* 0x1:4 */ unsigned int ERO : 1;
	/* 0x1:5 */ unsigned int ER1 : 1;
	/* 0x1:6 */ unsigned int p1 : 9;
	/* 0x2:7 */ unsigned int FDR : 1;
	/* 0x3:0 */ unsigned int FQC : 5;
	/* 0x3:5 */ unsigned int p2 : 3;
} tVIF1_STAT;

typedef struct { // 0x4
	/* 0x0:0 */ unsigned int RST : 1;
	/* 0x0:1 */ unsigned int FBK : 1;
	/* 0x0:2 */ unsigned int STP : 1;
	/* 0x0:3 */ unsigned int STC : 1;
	/* 0x0:4 */ unsigned int p0 : 28;
} tVIF1_FBRST;

typedef struct { // 0x4
	/* 0x0:0 */ unsigned int MII : 1;
	/* 0x0:1 */ unsigned int ME0 : 1;
	/* 0x0:2 */ unsigned int ME1 : 1;
	/* 0x0:3 */ unsigned int p0 : 29;
} tVIF1_ERR;

// warning: multiple differing types with the same name (size not equal)
typedef struct { // 0x4
	/* 0x0:0 */ unsigned int num : 8;
	/* 0x1:0 */ unsigned int p0 : 24;
} tVIF1_NUM;

typedef struct { // 0x4
	/* 0x0:0 */ unsigned int BASE : 10;
	/* 0x1:2 */ unsigned int p0 : 22;
} tVIF1_BASE;

typedef struct { // 0x4
	/* 0x0:0 */ unsigned int OFFSET : 10;
	/* 0x1:2 */ unsigned int p0 : 22;
} tVIF1_OFST;

typedef struct { // 0x4
	/* 0x0:0 */ unsigned int TOPS : 10;
	/* 0x1:2 */ unsigned int p0 : 22;
} tVIF1_TOPS;

typedef struct { // 0x4
	/* 0x0:0 */ unsigned int TOP : 10;
	/* 0x1:2 */ unsigned int p0 : 22;
} tVIF1_TOP;

typedef struct { // 0x4
	/* 0x0:0 */ unsigned int DIR : 1;
	/* 0x0:1 */ unsigned int p0 : 1;
	/* 0x0:2 */ unsigned int MOD : 2;
	/* 0x0:4 */ unsigned int ASP : 2;
	/* 0x0:6 */ unsigned int TTE : 1;
	/* 0x0:7 */ unsigned int TIE : 1;
	/* 0x1:0 */ unsigned int STR : 1;
	/* 0x1:1 */ unsigned int p1 : 7;
	/* 0x2:0 */ unsigned int TAG : 16;
} tD_CHCR;

// warning: multiple differing types with the same name (fields size not equal)
typedef struct { // 0x4
	/* 0x0:0 */ unsigned int ADDR : 31;
	/* 0x3:7 */ unsigned int SPR : 1;
} tD_MADR;

typedef struct { // 0x4
	/* 0x0:0 */ unsigned int QWC : 16;
	/* 0x2:0 */ unsigned int p0 : 16;
} tD_QWC;

// warning: multiple differing types with the same name (fields size not equal)
typedef struct { // 0x4
	/* 0x0:0 */ unsigned int ADDR : 31;
	/* 0x3:7 */ unsigned int SPR : 1;
} tD_TADR;

// warning: multiple differing types with the same name (fields size not equal)
typedef struct { // 0x4
	/* 0x0:0 */ unsigned int ADDR : 31;
	/* 0x3:7 */ unsigned int SPR : 1;
} tD_ASR0;

// warning: multiple differing types with the same name (fields size not equal)
typedef struct { // 0x4
	/* 0x0:0 */ unsigned int ADDR : 31;
	/* 0x3:7 */ unsigned int SPR : 1;
} tD_ASR1;

// warning: multiple differing types with the same name (fields size not equal)
typedef struct { // 0x4
	/* 0x0:0 */ unsigned int ADDR : 14;
	/* 0x1:6 */ unsigned int p0 : 18;
} tD_SADR;

typedef struct { // 0x4
	/* 0x0:0 */ unsigned int DMAE : 1;
	/* 0x0:1 */ unsigned int RELE : 1;
	/* 0x0:2 */ unsigned int MFD : 2;
	/* 0x0:4 */ unsigned int STS : 2;
	/* 0x0:6 */ unsigned int STD : 2;
	/* 0x1:0 */ unsigned int RCYC : 3;
	/* 0x1:3 */ unsigned int p0 : 21;
} tD_CTRL;

typedef struct { // 0x4
	/* 0x0:0 */ unsigned int CIS0 : 1;
	/* 0x0:1 */ unsigned int CIS1 : 1;
	/* 0x0:2 */ unsigned int CIS2 : 1;
	/* 0x0:3 */ unsigned int CIS3 : 1;
	/* 0x0:4 */ unsigned int CIS4 : 1;
	/* 0x0:5 */ unsigned int CIS5 : 1;
	/* 0x0:6 */ unsigned int CIS6 : 1;
	/* 0x0:7 */ unsigned int CIS7 : 1;
	/* 0x1:0 */ unsigned int CIS8 : 1;
	/* 0x1:1 */ unsigned int CIS9 : 1;
	/* 0x1:2 */ unsigned int p0 : 3;
	/* 0x1:5 */ unsigned int SIS : 1;
	/* 0x1:6 */ unsigned int MEIS : 1;
	/* 0x1:7 */ unsigned int BEIS : 1;
	/* 0x2:0 */ unsigned int CIM0 : 1;
	/* 0x2:1 */ unsigned int CIM1 : 1;
	/* 0x2:2 */ unsigned int CIM2 : 1;
	/* 0x2:3 */ unsigned int CIM3 : 1;
	/* 0x2:4 */ unsigned int CIM4 : 1;
	/* 0x2:5 */ unsigned int CIM5 : 1;
	/* 0x2:6 */ unsigned int CIM6 : 1;
	/* 0x2:7 */ unsigned int CIM7 : 1;
	/* 0x3:0 */ unsigned int CIM8 : 1;
	/* 0x3:1 */ unsigned int CIM9 : 1;
	/* 0x3:2 */ unsigned int p1 : 3;
	/* 0x3:5 */ unsigned int SIM : 1;
	/* 0x3:6 */ unsigned int MEIM : 1;
	/* 0x3:7 */ unsigned int p2 : 1;
} tD_STAT;

typedef struct { // 0x4
	/* 0x0:0 */ unsigned int CPC0 : 1;
	/* 0x0:1 */ unsigned int CPC1 : 1;
	/* 0x0:2 */ unsigned int CPC2 : 1;
	/* 0x0:3 */ unsigned int CPC3 : 1;
	/* 0x0:4 */ unsigned int CPC4 : 1;
	/* 0x0:5 */ unsigned int CPC5 : 1;
	/* 0x0:6 */ unsigned int CPC6 : 1;
	/* 0x0:7 */ unsigned int CPC7 : 1;
	/* 0x1:0 */ unsigned int CPC8 : 1;
	/* 0x1:1 */ unsigned int CPC9 : 1;
	/* 0x1:2 */ unsigned int p0 : 6;
	/* 0x2:0 */ unsigned int CDE0 : 1;
	/* 0x2:1 */ unsigned int CDE1 : 1;
	/* 0x2:2 */ unsigned int CDE2 : 1;
	/* 0x2:3 */ unsigned int CDE3 : 1;
	/* 0x2:4 */ unsigned int CDE4 : 1;
	/* 0x2:5 */ unsigned int CDE5 : 1;
	/* 0x2:6 */ unsigned int CDE6 : 1;
	/* 0x2:7 */ unsigned int CDE7 : 1;
	/* 0x3:0 */ unsigned int CDE8 : 1;
	/* 0x3:1 */ unsigned int CDE9 : 1;
	/* 0x3:2 */ unsigned int p1 : 5;
	/* 0x3:7 */ unsigned int PCE : 1;
} tD_PCR;

typedef struct { // 0x4
	/* 0x0:0 */ unsigned int SQWC : 8;
	/* 0x1:0 */ unsigned int p0 : 8;
	/* 0x2:0 */ unsigned int TQWC : 8;
	/* 0x3:0 */ unsigned int p1 : 8;
} tD_SQWC;

// warning: multiple differing types with the same name (fields size not equal)
typedef struct { // 0x4
	/* 0x0:0 */ unsigned int RMSK : 31;
	/* 0x3:7 */ unsigned int p0 : 1;
} tD_RBSR;

// warning: multiple differing types with the same name (fields size not equal)
typedef struct { // 0x4
	/* 0x0:0 */ unsigned int ADDR : 31;
	/* 0x3:7 */ unsigned int p0 : 1;
} tD_RBOR;

// warning: multiple differing types with the same name (fields size not equal)
typedef struct { // 0x4
	/* 0x0:0 */ unsigned int ADDR : 31;
	/* 0x3:7 */ unsigned int p0 : 1;
} tD_STADR;

typedef struct { // 0x4
	/* 0x0:0 */ unsigned int p0 : 16;
	/* 0x2:0 */ unsigned int CPND : 1;
	/* 0x2:1 */ unsigned int p1 : 15;
} tD_ENABLER;

typedef struct { // 0x4
	/* 0x0:0 */ unsigned int p0 : 16;
	/* 0x2:0 */ unsigned int CPND : 1;
	/* 0x2:1 */ unsigned int p1 : 15;
} tD_ENABLEW;

// warning: multiple differing types with the same name (fields size not equal)
typedef struct { // 0x8
	/* 0x0:0 */ unsigned int EN1 : 1;
	/* 0x0:1 */ unsigned int EN2 : 1;
	/* 0x0:2 */ unsigned int CRTMD : 3;
	/* 0x0:5 */ unsigned int MMOD : 1;
	/* 0x0:6 */ unsigned int AMOD : 1;
	/* 0x0:7 */ unsigned int SLBG : 1;
	/* 0x1:0 */ unsigned int ALP : 8;
	/* 0x2:0 */ unsigned int p0 : 16;
	/* 0x4 */ unsigned int p1;
} tGS_PMODE;

// warning: multiple differing types with the same name (size not equal)
typedef struct { // 0x8
	/* 0x0:0 */ unsigned int INT : 1;
	/* 0x0:1 */ unsigned int FFMD : 1;
	/* 0x0:2 */ unsigned int DPMS : 2;
	/* 0x0:4 */ unsigned int p0 : 28;
	/* 0x4 */ unsigned int p1;
} tGS_SMODE2;

typedef struct { // 0x8
	/* 0x0:0 */ unsigned int FBP : 9;
	/* 0x1:1 */ unsigned int FBW : 6;
	/* 0x1:7 */ unsigned int PSM : 5;
	/* 0x2:4 */ unsigned int p0 : 12;
	/* 0x4:0 */ unsigned int DBX : 11;
	/* 0x5:3 */ unsigned int DBY : 11;
	/* 0x6:6 */ unsigned int p1 : 10;
} tGS_DISPFB1;

typedef struct { // 0x8
	/* 0x0:0 */ unsigned int DX : 12;
	/* 0x1:4 */ unsigned int DY : 11;
	/* 0x2:7 */ unsigned int MAGH : 4;
	/* 0x3:3 */ unsigned int MAGV : 2;
	/* 0x3:5 */ unsigned int p0 : 3;
	/* 0x4:0 */ unsigned int DW : 12;
	/* 0x5:4 */ unsigned int DH : 11;
	/* 0x6:7 */ unsigned int p1 : 9;
} tGS_DISPLAY1;

typedef struct { // 0x8
	/* 0x0:0 */ unsigned int FBP : 9;
	/* 0x1:1 */ unsigned int FBW : 6;
	/* 0x1:7 */ unsigned int PSM : 5;
	/* 0x2:4 */ unsigned int p0 : 12;
	/* 0x4:0 */ unsigned int DBX : 11;
	/* 0x5:3 */ unsigned int DBY : 11;
	/* 0x6:6 */ unsigned int p1 : 10;
} tGS_DISPFB2;

typedef struct { // 0x8
	/* 0x0:0 */ unsigned int DX : 12;
	/* 0x1:4 */ unsigned int DY : 11;
	/* 0x2:7 */ unsigned int MAGH : 4;
	/* 0x3:3 */ unsigned int MAGV : 2;
	/* 0x3:5 */ unsigned int p0 : 3;
	/* 0x4:0 */ unsigned int DW : 12;
	/* 0x5:4 */ unsigned int DH : 11;
	/* 0x6:7 */ unsigned int p1 : 9;
} tGS_DISPLAY2;

// warning: multiple differing types with the same name (fields size not equal)
typedef struct { // 0x8
	/* 0x0:0 */ unsigned int EXBP : 14;
	/* 0x1:6 */ unsigned int EXBW : 6;
	/* 0x2:4 */ unsigned int FBIN : 2;
	/* 0x2:6 */ unsigned int WFFMD : 1;
	/* 0x2:7 */ unsigned int EMODA : 2;
	/* 0x3:1 */ unsigned int EMODC : 2;
	/* 0x3:3 */ unsigned int p0 : 5;
	/* 0x4:0 */ unsigned int WDX : 11;
	/* 0x5:3 */ unsigned int WDY : 11;
	/* 0x6:6 */ unsigned int p1 : 10;
} tGS_EXTBUF;

typedef struct { // 0x8
	/* 0x0:0 */ unsigned int SX : 12;
	/* 0x1:4 */ unsigned int SY : 11;
	/* 0x2:7 */ unsigned int SMPH : 4;
	/* 0x3:3 */ unsigned int SMPV : 2;
	/* 0x3:5 */ unsigned int p0 : 3;
	/* 0x4:0 */ unsigned int WW : 12;
	/* 0x5:4 */ unsigned int WH : 11;
	/* 0x6:7 */ unsigned int p1 : 9;
} tGS_EXTDATA;

typedef struct { // 0x8
	/* 0x0:0 */ unsigned int WRITE : 1;
	/* 0x0:1 */ unsigned int p0 : 31;
	/* 0x4 */ unsigned int p1;
} tGS_EXTWRITE;

// warning: multiple differing types with the same name (descriptor not equal)
typedef struct { // 0x8
	/* 0x0:0 */ unsigned int R : 8;
	/* 0x1:0 */ unsigned int G : 8;
	/* 0x2:0 */ unsigned int B : 8;
	/* 0x3:0 */ unsigned int p0 : 8;
	/* 0x4 */ unsigned int p1;
} tGS_BGCOLOR;

// warning: multiple differing types with the same name (fields size not equal)
typedef struct { // 0x8
	/* 0x0:0 */ unsigned int SIGNAL : 1;
	/* 0x0:1 */ unsigned int FINISH : 1;
	/* 0x0:2 */ unsigned int HSINT : 1;
	/* 0x0:3 */ unsigned int VSINT : 1;
	/* 0x0:4 */ unsigned int EDWINT : 1;
	/* 0x0:5 */ unsigned int p0 : 3;
	/* 0x1:0 */ unsigned int FLUSH : 1;
	/* 0x1:1 */ unsigned int RESET : 1;
	/* 0x1:2 */ unsigned int p1 : 2;
	/* 0x1:4 */ unsigned int NFIELD : 1;
	/* 0x1:5 */ unsigned int FIELD : 1;
	/* 0x1:6 */ unsigned int FIFO : 2;
	/* 0x2:0 */ unsigned int REV : 8;
	/* 0x3:0 */ unsigned int ID : 8;
	/* 0x4 */ unsigned int p2;
} tGS_CSR;

// warning: multiple differing types with the same name (fields size not equal)
typedef struct { // 0x8
	/* 0x0:0 */ unsigned int p0 : 8;
	/* 0x1:0 */ unsigned int SIGMSK : 1;
	/* 0x1:1 */ unsigned int FINISHMSK : 1;
	/* 0x1:2 */ unsigned int HSMSK : 1;
	/* 0x1:3 */ unsigned int VSMSK : 1;
	/* 0x1:4 */ unsigned int EDWMSK : 1;
	/* 0x1:5 */ unsigned int p1 : 19;
	/* 0x4 */ unsigned int p2;
} tGS_IMR;

typedef struct { // 0x8
	/* 0x0:0 */ unsigned int DIR : 1;
	/* 0x0:1 */ unsigned int p0 : 31;
	/* 0x4 */ unsigned int p1;
} tGS_BUSDIR;

typedef struct { // 0x8
	/* 0x0 */ unsigned int SIGID;
	/* 0x4 */ unsigned int LBLID;
} tGS_SIGLBLID;

typedef struct { // 0x28
	/* 0x00 */ tGS_PMODE pmode;
	/* 0x08 */ tGS_SMODE2 smode2;
	/* 0x10 */ tGS_DISPFB2 dispfb;
	/* 0x18 */ tGS_DISPLAY2 display;
	/* 0x20 */ tGS_BGCOLOR bgcolor;
} sceGsDispEnv;

// warning: multiple differing types with the same name (descriptor not equal)
typedef struct { // 0x230
	/* 0x000 */ sceGsDispEnv disp[2];
	/* 0x050 */ void giftag0;
	/* 0x060 */ void draw0;
	/* 0x0e0 */ void clear0;
	/* 0x140 */ void giftag1;
	/* 0x150 */ void draw1;
	/* 0x1d0 */ void clear1;
} sceGsDBuff;

// warning: multiple differing types with the same name (descriptor not equal)
typedef struct { // 0x330
	/* 0x000 */ sceGsDispEnv disp[2];
	/* 0x050 */ void giftag0;
	/* 0x060 */ void draw01;
	/* 0x0e0 */ void draw02;
	/* 0x160 */ void clear0;
	/* 0x1c0 */ void giftag1;
	/* 0x1d0 */ void draw11;
	/* 0x250 */ void draw12;
	/* 0x2d0 */ void clear1;
} sceGsDBuffDc;

// warning: multiple differing types with the same name (fields size not equal)
struct PAD_STRUCT { // 0x1c0
	/* 0x000 */ int port;
	/* 0x004 */ int slot;
	/* 0x040 */ u_long128 pad_dma_buf[16];
	/* 0x140 */ short unsigned int now;
	/* 0x142 */ short unsigned int old;
	/* 0x144 */ short unsigned int cnt[16];
	/* 0x164 */ short unsigned int cnt_bak[16];
	/* 0x184 */ short unsigned int one;
	/* 0x186 */ short unsigned int rpt;
	/* 0x188 */ short unsigned int rpt_time;
	/* 0x18a */ unsigned char pad_direct[6];
	/* 0x190 */ char flags;
	/* 0x191 */ char step;
	/* 0x192 */ char id;
};

typedef struct { // 0x8
	/* 0x0 */ short int TimeZone;
	/* 0x2 */ u_char Aspect;
	/* 0x3 */ u_char DateNotation;
	/* 0x4 */ u_char Language;
	/* 0x5 */ u_char Spdif;
	/* 0x6 */ u_char SummerTime;
	/* 0x7 */ u_char TimeNotation;
} sceScfT10kConfig;

typedef union { // 0x10
	/* 0x0 */ u_long128 ul128;
	/* 0x0 */ u_long ul64[2];
	/* 0x0 */ u_int ui32[4];
	/* 0x0 */ float fl32[4];
	/* 0x0 */ u_short us16[8];
	/* 0x0 */ u_char uc8[16];
	/* 0x0 */ sceVu0FVECTOR fv;
	/* 0x0 */ sceVu0IVECTOR iv;
} Q_WORDDATA;

typedef union { // 0x8
	/* 0x0 */ u_char *pu8;
	/* 0x0 */ u_short *pu16;
	/* 0x0 */ u_int *pu32;
	/* 0x0 */ u_long *pu64;
	/* 0x0 */ char *ps8;
	/* 0x0 */ short int *ps16;
	/* 0x0 */ int *ps32;
	/* 0x0 */ long int *ps64;
	/* 0x0 */ long int wrk;
} P_INT;

struct SYS_WRK { // 0x20
	/* 0x00 */ u_long count;
	/* 0x08 */ sceCdCLOCK rtc;
	/* 0x10 */ short int sreset_count;
	/* 0x12 */ u_char sreset_ng;
	/* 0x13 */ u_char video_mode;
	/* 0x14 */ u_char language;
	/* 0x18 */ int game_mode;
	/* 0x1c */ u_char interrupt;
};

struct OPTION_WRK { // 0x10
	/* 0x0 */ int brightness;
	/* 0x4 */ int snd_volume;
	/* 0x8 */ u_char pad_vib;
	/* 0x9 */ u_char pad_type;
	/* 0xa */ u_char view_vertical;
	/* 0xb */ u_char ana_replace;
	/* 0xc */ u_char credits;
	/* 0xd */ u_char snd_output;
	/* 0xe */ u_char move_operate;
	/* 0xf */ u_char pad;
};

struct MOVE_BOX { // 0xa0
	/* 0x00 */ float mloop;
	/* 0x10 */ sceVu0FVECTOR pos;
	/* 0x20 */ sceVu0FVECTOR bpos;
	/* 0x30 */ sceVu0FVECTOR mv;
	/* 0x40 */ sceVu0FVECTOR bmv;
	/* 0x50 */ sceVu0FVECTOR rot;
	/* 0x60 */ sceVu0FVECTOR brot;
	/* 0x70 */ sceVu0FVECTOR spd;
	/* 0x80 */ sceVu0FVECTOR rspd;
	/* 0x90 */ sceVu0FVECTOR trot;
};

struct STATUS_DAT { // 0x40
	/* 0x00 */ u_long sta;
	/* 0x08 */ u_long sta_old;
	/* 0x10 */ u_long mvsta;
	/* 0x18 */ u_short hp;
	/* 0x1a */ u_short sp;
	/* 0x1c */ u_short hpmax;
	/* 0x1e */ u_short spmax;
	/* 0x20 */ u_short hp_recover_time;
	/* 0x22 */ u_short sp_recover_time;
	/* 0x24 */ u_short sp_down_fl;
	/* 0x26 */ u_short dmg;
	/* 0x28 */ u_short rhspdmg;
	/* 0x2a */ u_short rhpdmg;
	/* 0x2c */ u_short rspdmg;
	/* 0x2e */ u_short dmg_old;
	/* 0x30 */ u_short dmg_type;
	/* 0x32 */ u_char dmg_cam_flag;
	/* 0x34 */ u_short dwalk_tm;
	/* 0x36 */ u_short cond;
	/* 0x38 */ u_short cond_old;
	/* 0x3a */ u_short cond_tm;
	/* 0x3c */ u_short invisible_timer;
};

typedef struct { // 0xa0
	/* 0x00 */ sceVu0FVECTOR p0;
	/* 0x10 */ sceVu0FVECTOR p1;
	/* 0x20 */ sceVu0FVECTOR p2;
	/* 0x30 */ sceVu0FVECTOR p3;
	/* 0x40 */ sceVu0FVECTOR p4;
	/* 0x50 */ sceVu0FVECTOR p5;
	/* 0x60 */ sceVu0FVECTOR p6;
	/* 0x70 */ sceVu0FVECTOR p7;
	/* 0x80 */ sceVu0FVECTOR p8;
	/* 0x90 */ sceVu0FVECTOR p9;
} MPOS;

typedef struct { // 0x10
	/* 0x0 */ u_char charge_range;
	/* 0x1 */ u_char charge_max;
	/* 0x2 */ u_char charge_speed;
	/* 0x8 */ u_long point;
} CAM_CUSTOM_WRK;

struct DEBUG_WRK { // 0x38
	/* 0x00 */ u_char fr_30;
	/* 0x04 */ int mode;
	/* 0x08 */ int menu_csr;
	/* 0x0c */ int comp_mode;
	/* 0x10 */ int init_movieviewer;
	/* 0x14 */ int init_msg_viewer;
	/* 0x18 */ int init_sndtest;
	/* 0x1c */ int init_scntest;
	/* 0x20 */ int init_screen_calib;
	/* 0x24 */ int init_test2d;
	/* 0x28 */ int init_motionviewer;
	/* 0x2c */ int init_func;
	/* 0x30 */ int init_subtitle_test;
	/* 0x34 */ int dbg_menu_sw;
};

struct CFVariable { // 0xc
private:
	/* 0x0 */ float mValue;
	/* 0x4 */ float m_fMax;
	/* 0x8 */ float m_fMin;
	
public:
	CFVariable& operator=();
	CFVariable();
	CFVariable();
	void Init();
	void Set();
	void SetMax();
	void SetMin();
	float GetMax();
	float GetMin();
	float GetWidth();
	int Offset();
	int Add();
	int Sub();
	int LoopAdd();
	int LoopSub();
	float Get();
};

typedef struct { // 0x8
	/* 0x0 */ unsigned char *addr;
	/* 0x4 */ int size;
} MC_SAVE_DATA;

typedef int ptrdiff_t;
typedef int dword[2];
typedef int word;
typedef unsigned int G3DCOLOR;

struct G3DMATERIAL { // 0x50
	/* 0x00 */ sceVu0FVECTOR vDiffuse;
	/* 0x10 */ sceVu0FVECTOR vAmbient;
	/* 0x20 */ sceVu0FVECTOR vSpecular;
	/* 0x30 */ sceVu0FVECTOR vEmissive;
	/* 0x40 */ float fPower;
	/* 0x44 */ int aiPad[3];
};

enum G3DLIGHTTYPE {
	G3DLIGHT_DIRECTIONAL = 0,
	G3DLIGHT_POINT = 1,
	G3DLIGHT_SPOT = 2,
	NUM_G3DLIGHTTYPE = 3,
	G3DLIGHT_AMBIENT = 3,
	INVALID_G3DLIGHTTYPE = 2147483647,
	G3DLIGHTTYPE_FORCE_DWORD = 2147483647
};

struct G3DLIGHT { // 0x70
	/* 0x00 */ sceVu0FVECTOR vDiffuse;
	/* 0x10 */ sceVu0FVECTOR vSpecular;
	/* 0x20 */ sceVu0FVECTOR vAmbient;
	/* 0x30 */ sceVu0FVECTOR vPosition;
	/* 0x40 */ sceVu0FVECTOR vDirection;
	/* 0x50 */ G3DLIGHTTYPE Type;
	/* 0x54 */ float fAngleInside;
	/* 0x58 */ float fAngleOutside;
	/* 0x5c */ float fMaxRange;
	/* 0x60 */ float fMinRange;
	/* 0x64 */ float fFalloff;
	/* 0x68 */ float afPad0[2];
};

enum G3DRENDERSTATETYPE {
	G3DRS_LIGHTING = 0,
	G3DRS_COLORVERTEX = 1,
	G3DRS_SPECULARENABLE = 2,
	G3DRS_DIFFUSEMATERIALSOURCE = 3,
	G3DRS_SPECULARMATERIALSOURCE = 4,
	G3DRS_AMBIENTMATERIALSOURCE = 5,
	G3DRS_EMISSIVEMATERIALSOURCE = 6,
	G3DRS_FOGCOLOR = 7,
	NUM_G3DRENDERSTATETYPE = 8,
	G3DRENDERSTATE_FORCE_DWORD = 2147483647
};

enum G3DGLOBALSTATETYPE {
	G3DGS_LIGHTATTENUATIONTYPE = 0,
	G3DGS_LIGHTINGTYPE = 1,
	NUM_G3DGLOBALSTATETYPE = 2,
	G3DGLOBALSTATE_FORCE_DWORD = 2147483647
};

enum G3DMATERIALCOLORSOURCE {
	G3DMCS_MATERIAL = 0,
	G3DMCS_COLOR1 = 1,
	G3DMCS_COLOR2 = 2,
	G3DMCS_FORCE_DWORD = 2147483647
};

enum G3DLIGHTATTENUATIONTYPE {
	G3DLAT_LINEAR = 0,
	G3DLAT_HYPERBOLIC = 1,
	G3DLAT_FORCE_DWORD = 2147483647
};

enum G3DLIGHTINGTYPE {
	G3DLT_CONSTANT = 0,
	G3DLT_LAMBERT = 1,
	G3DLT_PHONG = 2,
	NUM_G3DLIGHTINGTYPE = 3,
	G3DLIGHTINGTYPE_FORCE_DWORD = 2147483647
};

enum G3DLIGHTINDEX {
	G3DLIDX_DIRECTIONAL_0 = 0,
	G3DLIDX_DIRECTIONAL_1 = 1,
	G3DLIDX_DIRECTIONAL_2 = 2,
	G3DLIDX_POINT_0 = 3,
	G3DLIDX_POINT_1 = 4,
	G3DLIDX_POINT_2 = 5,
	G3DLIDX_SPOT_0 = 6,
	G3DLIDX_SPOT_1 = 7,
	G3DLIDX_SPOT_2 = 8,
	NUM_G3DLIGHTINDEX = 9,
	G3D_START_LIGHT_DIRECTIONAL = 0,
	G3D_END_LIGHT_DIRECTIONAL = 2,
	G3D_NUM_LIGHT_DIRECTIONAL = 3,
	G3D_START_LIGHT_POINT = 3,
	G3D_END_LIGHT_POINT = 5,
	G3D_NUM_LIGHT_POINT = 3,
	G3D_START_LIGHT_SPOT = 6,
	G3D_END_LIGHT_SPOT = 8,
	G3D_NUM_LIGHT_SPOT = 3,
	G3D_MAX_LIGHT_PER_TYPE = 3,
	INVALID_G3DLIGHTINDEX = 2147483647,
	G3DLIGHTINDEX_FORCE_DWORD = 2147483647
};

struct G3DSCREEN { // 0x10
	/* 0x0 */ float fWidth;
	/* 0x4 */ float fHeight;
	/* 0x8 */ float fDistance;
	/* 0xc */ float fDepth;
};

struct G3DWINDOW { // 0x10
	/* 0x0 */ float fAspectX;
	/* 0x4 */ float fAspectY;
	/* 0x8 */ float fCenterX;
	/* 0xc */ float fCenterY;
};

struct G3DDEPTH { // 0x10
	/* 0x0 */ float fZmax;
	/* 0x4 */ float fZmin;
	/* 0x8 */ float fNearZ;
	/* 0xc */ float fFarZ;
};

struct G3DVIEWPORT { // 0x18
	/* 0x00 */ float fX;
	/* 0x04 */ float fY;
	/* 0x08 */ float fWidth;
	/* 0x0c */ float fHeight;
	/* 0x10 */ float fMinZ;
	/* 0x14 */ float fMaxZ;
};

enum G3DCAMPROJECTIONTYPE {
	PT_PERSPECTIVE = 0,
	PT_ORTHO = 1,
	NUM_G3DCAMPROJECTIONTYPE = 2,
	G3DCAMPROJECTIONTYPE_FORCE_DWORD = -1
};

enum G3DTRANSFORMSTATETYPE {
	G3DTS_VIEW = 0,
	G3DTS_PROJECTION = 1,
	G3DTS_WORLD = 2,
	G3DTS_WORLD1 = 3,
	G3DTS_WORLDCLIP = 4,
	NUM_G3DTRANSFORMSTATETYPE = 5,
	G3DTS_FORCE_DWORD = 2147483647
};

struct G3DFOG { // 0x10
	/* 0x0 */ float fMin;
	/* 0x4 */ float fMax;
	/* 0x8 */ float fNear;
	/* 0xc */ float fFar;
};

struct G3DFPOINT { // 0x8
	/* 0x0 */ float fX;
	/* 0x4 */ float fY;
};

struct G3DSIZE { // 0x8
	/* 0x0 */ float fWidth;
	/* 0x4 */ float fHeight;
};

struct G3DFRECT { // 0x10
	/* 0x0 */ float fLeft;
	/* 0x4 */ float fTop;
	/* 0x8 */ float fRight;
	/* 0xc */ float fBottom;
};

struct G3DFREGION { // 0x10
	/* 0x0 */ float fLeft;
	/* 0x4 */ float fTop;
	/* 0x8 */ float fWidth;
	/* 0xc */ float fHeight;
};

union G3DINTFLOAT { // 0x4
	/* 0x0 */ int i;
	/* 0x0 */ float f;
};

union __dmath { // 0x8
	/* 0x0 */ __uint32_t i[2];
	/* 0x0 */ double d;
};

struct __exception { // 0x28
	/* 0x00 */ int type;
	/* 0x04 */ char *name;
	/* 0x08 */ double arg1;
	/* 0x10 */ double arg2;
	/* 0x18 */ double retval;
	/* 0x20 */ int err;
};

enum __fdlibm_version {
	__fdlibm_ieee = -1,
	__fdlibm_svid = 0,
	__fdlibm_xopen = 1,
	__fdlibm_posix = 2
};

typedef signed char _G_int8_t;
typedef unsigned char _G_uint8_t;
typedef short int _G_int16_t;
typedef short unsigned int _G_uint16_t;
typedef int _G_int32_t;
typedef unsigned int _G_uint32_t;
typedef long int _G_int64_t;
typedef long unsigned int _G_uint64_t;
typedef long long int _G_llong;
typedef long long unsigned int _G_ullong;
typedef long unsigned int _G_clock_t;
typedef short int _G_dev_t;
typedef long int _G_fpos_t;
typedef short unsigned int _G_gid_t;
typedef short unsigned int _G_ino_t;
typedef int _G_mode_t;
typedef short unsigned int _G_nlink_t;
typedef long int _G_off_t;
typedef int _G_pid_t;
typedef int _G_ptrdiff_t;
typedef long unsigned int _G_sigset_t;
typedef unsigned int _G_size_t;
typedef long int _G_time_t;
typedef short unsigned int _G_uid_t;
typedef int _G_wchar_t;
typedef long int _G_ssize_t;
typedef int _G_wint_t;
typedef void *_G_va_list;

struct __true_type { // 0x1
};

struct __false_type { // 0x1
};

struct __type_traits<bool> { // 0x1
};

struct __type_traits<char> { // 0x1
};

struct __type_traits<signed char> { // 0x1
};

struct __type_traits<unsigned char> { // 0x1
};

struct __type_traits<__wchar_t> { // 0x1
};

struct __type_traits<short int> { // 0x1
};

struct __type_traits<short unsigned int> { // 0x1
};

struct __type_traits<int> { // 0x1
};

struct __type_traits<unsigned int> { // 0x1
};

struct __type_traits<long int> { // 0x1
};

struct __type_traits<long unsigned int> { // 0x1
};

struct __type_traits<long long int> { // 0x1
};

struct __type_traits<long long unsigned int> { // 0x1
};

struct __type_traits<float> { // 0x1
};

struct __type_traits<double> { // 0x1
};

struct __type_traits<long double> { // 0x1
};

struct _Is_integer<bool> { // 0x1
};

struct _Is_integer<char> { // 0x1
};

struct _Is_integer<signed char> { // 0x1
};

struct _Is_integer<unsigned char> { // 0x1
};

struct _Is_integer<__wchar_t> { // 0x1
};

struct _Is_integer<short int> { // 0x1
};

struct _Is_integer<short unsigned int> { // 0x1
};

struct _Is_integer<int> { // 0x1
};

struct _Is_integer<unsigned int> { // 0x1
};

struct _Is_integer<long int> { // 0x1
};

struct _Is_integer<long unsigned int> { // 0x1
};

struct _Is_integer<long long int> { // 0x1
};

struct _Is_integer<long long unsigned int> { // 0x1
};

typedef struct { // 0x8
	/* 0x0 */ int quot;
	/* 0x4 */ int rem;
} div_t;

typedef struct { // 0x10
	/* 0x0 */ long int quot;
	/* 0x8 */ long int rem;
} ldiv_t;

typedef void (*terminate_handler)(/* parameters unknown */);
typedef void (*unexpected_handler)(/* parameters unknown */);
typedef void (*new_handler)(/* parameters unknown */);

struct _IO_marker { // 0xc
	/* 0x0 */ _IO_marker *_next;
	/* 0x4 */ _IO_FILE *_sbuf;
	/* 0x8 */ int _pos;
};

struct _IO_FILE { // 0x50
	/* 0x00 */ int _flags;
	/* 0x04 */ char *_IO_read_ptr;
	/* 0x08 */ char *_IO_read_end;
	/* 0x0c */ char *_IO_read_base;
	/* 0x10 */ char *_IO_write_base;
	/* 0x14 */ char *_IO_write_ptr;
	/* 0x18 */ char *_IO_write_end;
	/* 0x1c */ char *_IO_buf_base;
	/* 0x20 */ char *_IO_buf_end;
	/* 0x24 */ char *_IO_save_base;
	/* 0x28 */ char *_IO_backup_base;
	/* 0x2c */ char *_IO_save_end;
	/* 0x30 */ _IO_marker *_markers;
	/* 0x34 */ _IO_FILE *_chain;
	/* 0x38 */ int _fileno;
	/* 0x3c */ int _blksize;
	/* 0x40 */ _G_off_t _offset;
	/* 0x48 */ short unsigned int _cur_column;
	/* 0x4a */ char _unused;
	/* 0x4b */ char _shortbuf[1];
};

typedef struct { // 0x10
	/* 0x0 */ _G_ssize_t (*read)(/* parameters unknown */);
	/* 0x4 */ _G_ssize_t (*write)(/* parameters unknown */);
	/* 0x8 */ _G_off_t (*seek)(/* parameters unknown */);
	/* 0xc */ int (*close)(/* parameters unknown */);
} _IO_cookie_io_functions_t;

struct _IO_cookie_file { // 0x68
	/* 0x00 */ _IO_FILE file;
	/* 0x50 */ void *vtable;
	/* 0x54 */ void *cookie;
	/* 0x58 */ _IO_cookie_io_functions_t io_functions;
};

typedef _G_off_t streamoff;
typedef _G_off_t streampos;
typedef _G_ssize_t streamsize;
typedef long unsigned int __fmtflags;
typedef unsigned char __iostate;

enum io_state {
	goodbit = 0,
	eofbit = 1,
	failbit = 2,
	badbit = 4
};

enum open_mode {
	in = 1,
	out = 2,
	ate = 4,
	app = 8,
	trunc = 16,
	nocreate = 32,
	noreplace = 64,
	bin = 128,
	binary = 128
};

enum seek_dir {
	beg = 0,
	cur = 1,
	end = 2
};

typedef seek_dir _seek_dir;
typedef ios& (*__manip)(/* parameters unknown */);
typedef istream& (*__imanip)(/* parameters unknown */);
typedef ostream& (*__omanip)(/* parameters unknown */);

struct input_iterator_tag { // 0x1
};

struct output_iterator_tag { // 0x1
};

struct forward_iterator_tag : /* 0x0 */ input_iterator_tag { // 0x1
};

struct bidirectional_iterator_tag : /* 0x0 */ forward_iterator_tag { // 0x1
};

struct random_access_iterator_tag : /* 0x0 */ bidirectional_iterator_tag { // 0x1
};

struct output_iterator { // 0x1
};

struct _G3DLINEINFO { // 0x10
	/* 0x0 */ char *pFileName;
	/* 0x4 */ int iLine;
	/* 0x8 */ char *pFunctionName;
	/* 0xc */ char *pExpression;
};

typedef XVECTOR &RXVECTOR;
typedef XMATRIX &RXMATRIX;

struct XVECTOR { // 0x10
	/* 0x0 */ float x;
	/* 0x4 */ float y;
	/* 0x8 */ float z;
	/* 0xc */ float w;
	
	float* operator float *();
	float* operator float *();
	float& operator[]();
	XVECTOR();
	XVECTOR();
	XVECTOR();
	XVECTOR();
	XVECTOR& operator=();
	XVECTOR& operator+();
	XVECTOR& operator+=();
	XVECTOR& operator-();
	XVECTOR& operator-();
	XVECTOR& operator-=();
	XVECTOR& operator*();
	XVECTOR& operator*=();
	XVECTOR& operator/();
	XVECTOR& operator/=();
	XVECTOR& operator*();
	XVECTOR& operator*=();
};

struct XMATRIX { // 0x40
	/* 0x00 */ union { // 0x40
		/* 0x00 */ struct { // 0x40
			/* 0x00 */ float __11;
			/* 0x04 */ float __12;
			/* 0x08 */ float __13;
			/* 0x0c */ float __14;
			/* 0x10 */ float __21;
			/* 0x14 */ float __22;
			/* 0x18 */ float __23;
			/* 0x1c */ float __24;
			/* 0x20 */ float __31;
			/* 0x24 */ float __32;
			/* 0x28 */ float __33;
			/* 0x2c */ float __34;
			/* 0x30 */ float __41;
			/* 0x34 */ float __42;
			/* 0x38 */ float __43;
			/* 0x3c */ float __44;
		};
		/* 0x00 */ float m[4][4];
	};
	
	XMATRIX& operator=();
	XMATRIX();
	float&[4][4] operator float (&)[3][3]();
	float&[4][4] operator float (&)[3][3]();
	XMATRIX();
	XMATRIX();
	XMATRIX();
	XVECTOR& operator[]();
	XVECTOR& operator[]();
	XMATRIX operator*();
	XMATRIX& operator*=();
	XVECTOR operator*();
	XMATRIX operator*();
	XMATRIX& operator*=();
};

typedef __gnuc_va_list va_list;

struct unary_function<unsigned int,unsigned int> { // 0x1
};

struct subtractive_rng : /* 0x00 */ unary_function<unsigned int,unsigned int> { // 0xe8
private:
	/* 0x04 */ unsigned int _M_table[55];
	/* 0xe0 */ size_t _M_index1;
	/* 0xe4 */ size_t _M_index2;
	
public:
	subtractive_rng& operator=();
	subtractive_rng();
	unsigned int operator()();
	void _M_initialize();
	subtractive_rng();
	subtractive_rng();
};

struct binary_function<G3D_EMULATE_DIRECTIONALLIGHT_DATA,G3D_EMULATE_DIRECTIONALLIGHT_DATA,bool> { // 0x1
};

// warning: multiple differing types with the same name (type name not equal)
struct greater : /* 0x0 */ binary_function<G3D_EMULATE_DIRECTIONALLIGHT_DATA,G3D_EMULATE_DIRECTIONALLIGHT_DATA,bool> { // 0x1
	greater& operator=();
	greater();
	greater();
	bool operator()();
};

struct G3D_EMULATE_DIRECTIONALLIGHT_DATA { // 0x30
	/* 0x00 */ XVECTOR vDiffuse;
	/* 0x10 */ XVECTOR vDirection;
	/* 0x20 */ float fLength;
	/* 0x24 */ int aiPad[3];
};

struct binary_function<LIGHTCOMPAREDATA,LIGHTCOMPAREDATA,bool> { // 0x1
};

// warning: multiple differing types with the same name (type name not equal)
struct greater : /* 0x0 */ binary_function<LIGHTCOMPAREDATA,LIGHTCOMPAREDATA,bool> { // 0x1
	greater& operator=();
	greater();
	greater();
	bool operator()();
};

struct LIGHTCOMPAREDATA { // 0xc
	/* 0x0 */ float fPower;
	/* 0x4 */ G3DLIGHT *pLight;
	/* 0x8 */ int iIndex;
};

enum G3DGSSYNCPATHTIMEOUTREASON {
	SPTR_D1_START = 0,
	SPTR_D2_START = 1,
	SPTR_VIF1_ACTIVE = 2,
	SPTR_VU0_STAT = 3,
	SPTR_GIF_STAT = 4,
	SPTR_GS_CSR_FINISH = 5
};

typedef void (*LPFUNC_ONDETECTPACKETDOESNOTTERMINATED)(/* parameters unknown */);
typedef void (*LPFUNC_VU0LOADMATRIX)(/* parameters unknown */);
typedef void (*LPFUNC_VU0APPLYMATRIXWITHOUTTRANS)(/* parameters unknown */);

struct CVu0Matrix { // 0x1
	static LPFUNC_VU0LOADMATRIX s_pFuncLoadMatrix;
	static LPFUNC_VU0APPLYMATRIXWITHOUTTRANS s_pFuncApplyMatrixWithoutTrans;
	
	CVu0Matrix& operator=();
	CVu0Matrix();
private:
	void Set();
public:
	CVu0Matrix();
	CVu0Matrix();
	CVu0Matrix& operator=();
	void ApplyWithoutTrans();
	void ApplyWithoutTrans();
};

enum G3DVU1MEMADDRESS {
	MA_VF01 = 1,
	MA_LWMATRIX0_0 = 2,
	MA_LWMATRIX0_1 = 3,
	MA_LWMATRIX0_2 = 4,
	MA_LWMATRIX0_3 = 5,
	MA_LWMATRIX1_0 = 6,
	MA_LWMATRIX1_1 = 7,
	MA_LWMATRIX1_2 = 8,
	MA_LWMATRIX1_3 = 9,
	MA_CAMERAMATRIX0 = 10,
	MA_CAMERAMATRIX1 = 11,
	MA_CAMERAMATRIX2 = 12,
	MA_CAMERAMATRIX3 = 13,
	MA_WSMATRIX0 = 14,
	MA_WSMATRIX1 = 15,
	MA_WSMATRIX2 = 16,
	MA_WSMATRIX3 = 17,
	MA_WCMATRIX0 = 18,
	MA_WCMATRIX1 = 19,
	MA_WCMATRIX2 = 20,
	MA_WCMATRIX3 = 21,
	MA_VERTEX = 22,
	MA_NORMAL = 23,
	MA_DIRCOLAMB0 = 24,
	MA_DIRCOLAMB1 = 25,
	MA_DIRCOLAMB2 = 26,
	MA_DIRCOLDIF0 = 27,
	MA_DIRCOLDIF1 = 28,
	MA_DIRCOLDIF2 = 29,
	MA_DIRCOLSPC0 = 30,
	MA_DIRCOLSPC1 = 31,
	MA_DIRCOLSPC2 = 32,
	MA_POINTCOLAMB0 = 33,
	MA_POINTCOLAMB1 = 34,
	MA_POINTCOLAMB2 = 35,
	MA_POINTCOLDIF0 = 36,
	MA_POINTCOLDIF1 = 37,
	MA_POINTCOLDIF2 = 38,
	MA_POINTCOLSPC0 = 39,
	MA_POINTCOLSPC1 = 40,
	MA_POINTCOLSPC2 = 41,
	MA_SPOTCOLAMB0 = 42,
	MA_SPOTCOLAMB1 = 43,
	MA_SPOTCOLAMB2 = 44,
	MA_SPOTCOLDIF0 = 45,
	MA_SPOTCOLDIF1 = 46,
	MA_SPOTCOLDIF2 = 47,
	MA_SPOTCOLSPC0 = 48,
	MA_SPOTCOLSPC1 = 49,
	MA_SPOTCOLSPC2 = 50,
	MA_LIGHTSTATUS = 51,
	MA_DIRDIR0 = 52,
	MA_DIRDIR1 = 53,
	MA_DIRDIR2 = 54,
	MA_POINTPOS0 = 55,
	MA_POINTPOS1 = 56,
	MA_POINTPOS2 = 57,
	MA_POINTMAXRANGE = 58,
	MA_POINTMAXMININVRANGE = 59,
	MA_SPOTPOS0 = 60,
	MA_SPOTPOS1 = 61,
	MA_SPOTPOS2 = 62,
	MA_SPOTDIR0 = 63,
	MA_SPOTDIR1 = 64,
	MA_SPOTDIR2 = 65,
	MA_SPOTMAXRANGE = 66,
	MA_SPOTMAXMININVRANGE = 67,
	MA_SPOTCOSOUT = 68,
	MA_SPOTCOSINOUTINV = 69,
	MA_MATERIALAMB = 70,
	MA_MATERIALDIF = 71,
	MA_MATERIALSPC = 72,
	MA_MATERIALEMI = 73,
	MA_MATERIALALPHA = 74,
	MA_GLOBALAMBIENT = 75,
	MA_TEMP = 76
};

struct G3DVU1DIRECTIONALLIGHT { // 0x30
	/* 0x00 */ sceVu0FVECTOR avDirection[3];
};

struct G3DVU1POINTLIGHT { // 0x50
	/* 0x00 */ sceVu0FVECTOR avPosition[3];
	/* 0x30 */ sceVu0FVECTOR vMaxRange;
	/* 0x40 */ sceVu0FVECTOR vMax_Min_InverseRange;
};

struct G3DVU1SPOTLIGHT { // 0xa0
	/* 0x00 */ sceVu0FVECTOR avPosition[3];
	/* 0x30 */ sceVu0FVECTOR avDirection[3];
	/* 0x60 */ sceVu0FVECTOR vMaxRange;
	/* 0x70 */ sceVu0FVECTOR vMax_Min_InverseRange;
	/* 0x80 */ sceVu0FVECTOR vCosOutside;
	/* 0x90 */ sceVu0FVECTOR vCosIn_Out_Inverse;
};

struct G3DVU1COLOR_DIRECTIONAL { // 0x90
	/* 0x00 */ sceVu0FVECTOR avAmbient[3];
	/* 0x30 */ sceVu0FVECTOR avDiffuse[3];
	/* 0x60 */ sceVu0FVECTOR avSpecular[3];
};

struct G3DVU1COLOR_POINT { // 0x90
	/* 0x00 */ sceVu0FVECTOR avAmbient[3];
	/* 0x30 */ sceVu0FVECTOR avDiffuse[3];
	/* 0x60 */ sceVu0FVECTOR avSpecular[3];
};

struct G3DVU1COLOR_SPOT { // 0x90
	/* 0x00 */ sceVu0FVECTOR avAmbient[3];
	/* 0x30 */ sceVu0FVECTOR avDiffuse[3];
	/* 0x60 */ sceVu0FVECTOR avSpecular[3];
};

struct G3DVU1COLOR { // 0x1b0
	/* 0x000 */ G3DVU1COLOR_DIRECTIONAL dir;
	/* 0x090 */ G3DVU1COLOR_POINT point;
	/* 0x120 */ G3DVU1COLOR_SPOT spot;
};

struct G3DVU1COLOR_PHONG { // 0x90
	/* 0x00 */ sceVu0FVECTOR avAmbient[3];
	/* 0x30 */ sceVu0FVECTOR avDiffuse[3];
	/* 0x60 */ sceVu0FVECTOR avSpecular[3];
};

struct G3DVU1COLOR_LAMBERT { // 0x60
	/* 0x00 */ sceVu0FVECTOR avAmbient[3];
	/* 0x30 */ sceVu0FVECTOR avDiffuse[3];
};

struct G3DVU1COLOR_CONSTANT { // 0x30
	/* 0x00 */ sceVu0FVECTOR avAmbient[3];
};

struct G3DVU1CALCULATED { // 0x20
	/* 0x00 */ sceVu0FVECTOR vAmbient;
	/* 0x10 */ sceVu0FVECTOR vMisc;
};

struct G3DVU1CONSTANT { // 0x20
	/* 0x00 */ sceVu0FVECTOR v0001;
	/* 0x10 */ sceVu0FVECTOR v1111;
};

struct G3DVU1FOG { // 0x10
	/* 0x0 */ float fMin;
	/* 0x4 */ float fMax;
	/* 0x8 */ float FA;
	/* 0xc */ float FB;
};

struct G3DVU1GLOBAL { // 0x60
	/* 0x00 */ sceVu0FVECTOR vAmbient;
	/* 0x10 */ sceVu0FVECTOR vTemp;
	/* 0x20 */ sceVu0IVECTOR ivFogColor;
	/* 0x30 */ G3DVU1FOG Fog;
	/* 0x40 */ void gtPrimitve;
	/* 0x50 */ void gtVertexBuffer;
};

struct G3DVU1TRANSFORM { // 0x160
	/* 0x000 */ sceVu0FMATRIX matLocalWorld;
	/* 0x040 */ sceVu0FMATRIX matLocalWorld1;
	/* 0x080 */ sceVu0FMATRIX matCamera;
	/* 0x0c0 */ sceVu0FMATRIX matWorldScreen;
	/* 0x100 */ sceVu0FMATRIX matWorldClip;
	/* 0x140 */ sceVu0FVECTOR vVertex;
	/* 0x150 */ sceVu0FVECTOR vNormal;
};

struct G3DVU1LIGHTACTIVITYSTATUS { // 0x4
	/* 0x0:0 */ unsigned int uiEnableDir0 : 1;
	/* 0x0:1 */ unsigned int uiEnableDir1 : 1;
	/* 0x0:2 */ unsigned int uiEnableDir2 : 1;
	/* 0x0:3 */ unsigned int _uiPad0 : 1;
	/* 0x0:4 */ unsigned int uiEnablePoint0 : 1;
	/* 0x0:5 */ unsigned int uiEnablePoint1 : 1;
	/* 0x0:6 */ unsigned int uiEnablePoint2 : 1;
	/* 0x0:7 */ unsigned int _uiPad1 : 1;
	/* 0x1:0 */ unsigned int uiEnableSpot0 : 1;
	/* 0x1:1 */ unsigned int uiEnableSpot1 : 1;
	/* 0x1:2 */ unsigned int uiEnableSpot2 : 1;
	/* 0x1:3 */ unsigned int _uiPad2 : 1;
	/* 0x1:4 */ unsigned int _uiPad : 4;
};

struct G3DVU1LIGHTSTATUS { // 0x10
	/* 0x0 */ unsigned int auiPad[2];
	/* 0x8 */ union { // 0x8
		/* 0x8 */ G3DVU1LIGHTACTIVITYSTATUS as;
		/* 0x8 */ long int lAS;
	};
};

struct G3DVU1LIGHT { // 0x130
	/* 0x000 */ G3DVU1LIGHTSTATUS status;
	/* 0x010 */ G3DVU1DIRECTIONALLIGHT dir;
	/* 0x040 */ G3DVU1POINTLIGHT point;
	/* 0x090 */ G3DVU1SPOTLIGHT spot;
};

struct G3DVU1MEMLAYOUT_DIRECT { // 0x6e0
	/* 0x000 */ sceVu0FVECTOR v0001;
	/* 0x010 */ sceVu0FVECTOR v1111;
	/* 0x020 */ sceVu0FMATRIX matLocalWorld;
	/* 0x060 */ sceVu0FMATRIX matLocalWorld1;
	/* 0x0a0 */ sceVu0FMATRIX matCamera;
	/* 0x0e0 */ sceVu0FMATRIX matWorldScreen;
	/* 0x120 */ sceVu0FMATRIX matWorldClip;
	/* 0x160 */ sceVu0FVECTOR vVertex;
	/* 0x170 */ sceVu0FVECTOR vNormal;
	/* 0x180 */ sceVu0FVECTOR avAmbientDirectional[3];
	/* 0x1b0 */ sceVu0FVECTOR avDiffuseDirectional[3];
	/* 0x1e0 */ sceVu0FVECTOR avSpecularDirectional[3];
	/* 0x210 */ sceVu0FVECTOR avAmbientPoint[3];
	/* 0x240 */ sceVu0FVECTOR avDiffusePoint[3];
	/* 0x270 */ sceVu0FVECTOR avSpecularPoint[3];
	/* 0x2a0 */ sceVu0FVECTOR avAmbientSpot[3];
	/* 0x2d0 */ sceVu0FVECTOR avDiffuseSpot[3];
	/* 0x300 */ sceVu0FVECTOR avSpecularSpot[3];
	/* 0x330 */ G3DVU1LIGHTSTATUS lightstatus;
	/* 0x340 */ sceVu0FVECTOR avDirectionDirectional[3];
	/* 0x370 */ sceVu0FVECTOR avPositionPoint[3];
	/* 0x3a0 */ sceVu0FVECTOR vMaxRangePoint;
	/* 0x3b0 */ sceVu0FVECTOR vMax_Min_RangeInversePoint;
	/* 0x3c0 */ sceVu0FVECTOR avPositionSpot[3];
	/* 0x3f0 */ sceVu0FVECTOR avDirectionSpot[3];
	/* 0x420 */ sceVu0FVECTOR vMaxRangeSpot;
	/* 0x430 */ sceVu0FVECTOR vMax_Min_RangeInverseSpot;
	/* 0x440 */ sceVu0FVECTOR vCosOutsideSpot;
	/* 0x450 */ sceVu0FVECTOR vCosIn_Out_InverseSpot;
	/* 0x460 */ sceVu0FVECTOR vAmbientMaterial;
	/* 0x470 */ sceVu0FVECTOR vDiffuseMaterial;
	/* 0x480 */ sceVu0FVECTOR vSpecularMaterial;
	/* 0x490 */ sceVu0FVECTOR vEmissiveMaterial;
	/* 0x4a0 */ sceVu0FVECTOR vAlphaMaterial;
	/* 0x4b0 */ sceVu0FVECTOR vAmbientGlobal;
	/* 0x4c0 */ sceVu0FVECTOR vTemp;
	/* 0x4d0 */ sceVu0IVECTOR ivFogColor;
	/* 0x4e0 */ G3DVU1FOG Fog;
	/* 0x4f0 */ void gtPrimitve;
	/* 0x500 */ void gtVertexBuffer;
	/* 0x510 */ sceVu0FVECTOR vAmbientCalculated;
	/* 0x520 */ sceVu0FVECTOR vMisc;
	/* 0x530 */ sceVu0FVECTOR avAmbientDirectionalOrigin[3];
	/* 0x560 */ sceVu0FVECTOR avDiffuseDirectionalOrigin[3];
	/* 0x590 */ sceVu0FVECTOR avSpecularDirectionalOrigin[3];
	/* 0x5c0 */ sceVu0FVECTOR avAmbientPointOrigin[3];
	/* 0x5f0 */ sceVu0FVECTOR avDiffusePointOrigin[3];
	/* 0x620 */ sceVu0FVECTOR avSpecularPointOrigin[3];
	/* 0x650 */ sceVu0FVECTOR avAmbientSpotOrigin[3];
	/* 0x680 */ sceVu0FVECTOR avDiffuseSpotOrigin[3];
	/* 0x6b0 */ sceVu0FVECTOR avSpecularSpotOrigin[3];
};

struct G3DVU1MEMLAYOUT_PACKED { // 0x6e0
	/* 0x000 */ G3DVU1CONSTANT Constant;
	/* 0x020 */ G3DVU1TRANSFORM Transform;
	/* 0x180 */ G3DVU1COLOR Color;
	/* 0x330 */ G3DVU1LIGHT Light;
	/* 0x460 */ G3DMATERIAL Material;
	/* 0x4b0 */ G3DVU1GLOBAL Global;
	/* 0x510 */ G3DVU1CALCULATED Calc;
	/* 0x530 */ G3DVU1COLOR ColorOrigin;
};

union G3DVU1MEMLAYOUT { // 0x6e0
	/* 0x000 */ G3DVU1MEMLAYOUT_PACKED Packed;
	/* 0x000 */ G3DVU1MEMLAYOUT_DIRECT Direct;
};

enum GRA3DLIGHTID {
	LID_DIRECTIONAL_0 = 0,
	LID_DIRECTIONAL_1 = 1,
	LID_DIRECTIONAL_2 = 2,
	LID_POINT_0 = 3,
	LID_POINT_1 = 4,
	LID_POINT_2 = 5,
	LID_POINT_3 = 6,
	LID_POINT_4 = 7,
	LID_POINT_5 = 8,
	LID_POINT_6 = 9,
	LID_POINT_7 = 10,
	LID_POINT_8 = 11,
	LID_POINT_9 = 12,
	LID_POINT_10 = 13,
	LID_POINT_11 = 14,
	LID_POINT_12 = 15,
	LID_POINT_13 = 16,
	LID_POINT_14 = 17,
	LID_POINT_15 = 18,
	LID_POINT_FLASHLIGHT_0 = 19,
	LID_POINT_FLASHLIGHT_1 = 20,
	LID_POINT_SELFREFLECTION = 21,
	LID_SPOT_0 = 22,
	LID_SPOT_1 = 23,
	LID_SPOT_2 = 24,
	LID_SPOT_3 = 25,
	LID_SPOT_4 = 26,
	LID_SPOT_5 = 27,
	LID_SPOT_6 = 28,
	LID_SPOT_7 = 29,
	LID_SPOT_8 = 30,
	LID_SPOT_9 = 31,
	LID_SPOT_10 = 32,
	LID_SPOT_11 = 33,
	LID_SPOT_12 = 34,
	LID_SPOT_13 = 35,
	LID_SPOT_14 = 36,
	LID_SPOT_15 = 37,
	LID_SPOT_FLASHLIGHT = 38,
	NUM_GRA3DLIGHTID = 39,
	GRA3D_START_LIGHT_DIRECTIONAL = 0,
	GRA3D_END_LIGHT_DIRECTIONAL = 2,
	GRA3D_NUM_LIGHT_DIRECTIONAL = 3,
	GRA3D_START_LIGHT_POINT = 3,
	GRA3D_END_LIGHT_POINT = 21,
	GRA3D_NUM_LIGHT_POINT = 19,
	GRA3D_NUM_LIGHT_POINT_STATIC = 16,
	GRA3D_START_LIGHT_SPOT = 22,
	GRA3D_END_LIGHT_SPOT = 38,
	GRA3D_NUM_LIGHT_SPOT = 17,
	GRA3D_NUM_LIGHT_SPOT_STATIC = 16,
	INVALID_GRA3DLIGHTID = 2147483647,
	GRA3DLIGHTID_FORCE_DWORD = 2147483647
};

struct GRA3DCAMERA { // 0x1e0
	/* 0x000 */ float fFov;
	/* 0x004 */ float fNearZ;
	/* 0x008 */ float fFarZ;
	/* 0x00c */ float fAspectX;
	/* 0x010 */ float fAspectY;
	/* 0x014 */ float fCenterX;
	/* 0x018 */ float fCenterY;
	/* 0x01c */ float fZmin;
	/* 0x020 */ float fZmax;
	/* 0x024 */ G3DCAMPROJECTIONTYPE type;
	/* 0x028 */ int aiPad[2];
	/* 0x030 */ float vTarget[4];
	/* 0x040 */ float vPositionOld[4];
	/* 0x050 */ float vTargetOld[4];
	/* 0x060 */ float matViewClipPolygon[4][4];
	/* 0x0a0 */ float matViewClipObject[4][4];
	/* 0x0e0 */ float matWorldScreen[4][4];
	/* 0x120 */ float matWorldClipPolygon[4][4];
	/* 0x160 */ float matWorldClipObject[4][4];
	/* 0x1a0 */ float matCoord[4][4];
};

typedef float LMATRIX[3][4];

struct TextureAnimation { // 0x6
	/* 0x0 */ u_char TexNum;
	/* 0x1 */ u_char pads;
	/* 0x2 */ u_char AnmON;
	/* 0x3 */ u_char AnmStep;
	/* 0x4 */ u_char AnmCnt;
	/* 0x5 */ u_char AnmLoop;
};

struct ModelGroup { // 0x6
	/* 0x0 */ short int GroupNo;
	/* 0x2 */ short int Num;
	/* 0x4 */ short int Lists[1];
};

struct GRA3DMATERIALINDEXCACHE { // 0x10
	/* 0x0 */ int bEnable;
	/* 0x4 */ int aiIndex[3];
};

struct CoordCache { // 0x2c
	/* 0x00 */ int cache_on;
	/* 0x04 */ int edge_check;
	/* 0x08 */ int cn0;
	/* 0x0c */ GRA3DMATERIALINDEXCACHE Point;
	/* 0x1c */ GRA3DMATERIALINDEXCACHE Spot;
};

struct GRA3DLIGHTSTATUS { // 0x10
	/* 0x0 */ int bEnable;
	/* 0x4 */ int bEnableToChar;
	/* 0x8 */ int bEnableToShadow;
	/* 0xc */ int bEmulateToDirectionalLight;
};

struct fixed_array_base<G3DLIGHT,39,G3DLIGHT[39]> { // 0x1110
protected:
	/* 0x0000 */ G3DLIGHT m_aData[39];
	
public:
	fixed_array_base<G3DLIGHT,39,G3DLIGHT[39]>& operator=();
	fixed_array_base();
protected:
	fixed_array_base();
public:
	G3DLIGHT& operator[]();
	G3DLIGHT& operator[]();
	G3DLIGHT* data();
	G3DLIGHT* begin();
	G3DLIGHT* end();
	void fill();
	size_t size();
	bool empty();
};

struct fixed_array<G3DLIGHT,39> : /* 0x0000 */ fixed_array_base<G3DLIGHT,39,G3DLIGHT[39]> { // 0x1110
};

struct fixed_array_base<GRA3DLIGHTSTATUS,39,GRA3DLIGHTSTATUS[39]> { // 0x270
protected:
	/* 0x000 */ GRA3DLIGHTSTATUS m_aData[39];
	
public:
	fixed_array_base<GRA3DLIGHTSTATUS,39,GRA3DLIGHTSTATUS[39]>& operator=();
	fixed_array_base();
protected:
	fixed_array_base();
public:
	GRA3DLIGHTSTATUS& operator[]();
	GRA3DLIGHTSTATUS& operator[]();
	GRA3DLIGHTSTATUS* data();
	GRA3DLIGHTSTATUS* begin();
	GRA3DLIGHTSTATUS* end();
	void fill();
	size_t size();
	bool empty();
};

struct fixed_array<GRA3DLIGHTSTATUS,39> : /* 0x000 */ fixed_array_base<GRA3DLIGHTSTATUS,39,GRA3DLIGHTSTATUS[39]> { // 0x270
};

struct fixed_array_base<int,3,int[3]> { // 0xc
protected:
	/* 0x0 */ int m_aData[3];
	
public:
	fixed_array_base<int,3,int[3]>& operator=();
	fixed_array_base();
protected:
	fixed_array_base();
public:
	int& operator[]();
	int& operator[]();
	int* data();
	int* begin();
	int* end();
	void fill();
	size_t size();
	bool empty();
};

struct fixed_array<int,3> : /* 0x0 */ fixed_array_base<int,3,int[3]> { // 0xc
};

struct GRA3DLIGHTDATA { // 0x13a0
	/* 0x0000 */ float vAmbient[4];
	/* 0x0010 */ fixed_array<G3DLIGHT,39> aLight;
	/* 0x1120 */ fixed_array<GRA3DLIGHTSTATUS,39> aStatus;
	/* 0x1390 */ fixed_array<int,3> aiNumInitial;
	/* 0x139c */ int aiPad[1];
};

struct ZERO2LIGHTDATAFILE { // 0x1890
	/* 0x0000 */ int iSignature;
	/* 0x0004 */ int iSizeOfThisFile;
	/* 0x0008 */ int aiPad[2];
	/* 0x0010 */ char astrLightName[39][32];
	/* 0x04f0 */ GRA3DLIGHTDATA LD;
};

enum GRA3DTRANSFORMSTATETYPE {
	GRA3DTS_VIEW = 0,
	GRA3DTS_PROJECTION = 1,
	GRA3DTS_WORLD = 2,
	GRA3DTS_WORLD1 = 3,
	GRA3DTS_WORLDCLIP = 4,
	GRA3DTS_WORLDSCREEN = 5,
	NUM_GRA3DTRANSFORMSTATETYPE = 6,
	GRA3DTS_FORCE_DWORD = 2147483647
};

enum GRA3DVU1MEMADDRESS {
	GRA3DVU1MEM_TOP = 0,
	GRA3DVU1MEM_VF01 = 0,
	GRA3DVU1MEM_VF02 = 1,
	GRA3DVU1MEM_DBADDRESS = 2,
	GRA3DVU1MEM_GTTRISTRIP_NOTEX = 3,
	GRA3DVU1MEM_GTTRISTRIP_TEX = 4,
	GRA3DVU1MEM_GTEOP = 5,
	GRA3DVU1MEM_GTTRIFAN_NOTEX = 6,
	GRA3DVU1MEM_GTTRIFAN_TEX = 7,
	GRA3DVU1MEM_WSMATRIX0 = 8,
	GRA3DVU1MEM_WSMATRIX1 = 9,
	GRA3DVU1MEM_WSMATRIX2 = 10,
	GRA3DVU1MEM_WSMATRIX3 = 11,
	GRA3DVU1MEM_WCMATRIX0 = 12,
	GRA3DVU1MEM_WCMATRIX1 = 13,
	GRA3DVU1MEM_WCMATRIX2 = 14,
	GRA3DVU1MEM_WCMATRIX3 = 15,
	GRA3DVU1MEM_LWMATRIX0 = 16,
	GRA3DVU1MEM_LWMATRIX1 = 17,
	GRA3DVU1MEM_LWMATRIX2 = 18,
	GRA3DVU1MEM_LWMATRIX3 = 19,
	GRA3DVU1MEM_LWMATRIXNONORMALIZED0 = 20,
	GRA3DVU1MEM_LWMATRIXNONORMALIZED1 = 21,
	GRA3DVU1MEM_LWMATRIXNONORMALIZED2 = 22,
	GRA3DVU1MEM_LWMATRIXNONORMALIZED3 = 23,
	GRA3DVU1MEM_FOG = 24,
	GRA3DVU1MEM_DIRLIGHTDIF0 = 25,
	GRA3DVU1MEM_DIRLIGHTDIF1 = 26,
	GRA3DVU1MEM_DIRLIGHTDIF2 = 27,
	GRA3DVU1MEM_DIRLIGHTSPC0 = 28,
	GRA3DVU1MEM_DIRLIGHTSPC1 = 29,
	GRA3DVU1MEM_DIRLIGHTSPC2 = 30,
	GRA3DVU1MEM_SPOTPOS0 = 31,
	GRA3DVU1MEM_SPOTPOS1 = 32,
	GRA3DVU1MEM_SPOTPOS2 = 33,
	GRA3DVU1MEM_SPOTINTENS = 34,
	GRA3DVU1MEM_SPOTINTENSB = 35,
	GRA3DVU1MEM_SPOTLIGHTDIF0 = 36,
	GRA3DVU1MEM_SPOTLIGHTDIF1 = 37,
	GRA3DVU1MEM_SPOTLIGHTDIF2 = 38,
	GRA3DVU1MEM_SPOTLIGHTSPC0 = 39,
	GRA3DVU1MEM_SPOTLIGHTSPC1 = 40,
	GRA3DVU1MEM_SPOTLIGHTSPC2 = 41,
	GRA3DVU1MEM_POINTPOS0 = 42,
	GRA3DVU1MEM_POINTPOS1 = 43,
	GRA3DVU1MEM_POINTPOS2 = 44,
	GRA3DVU1MEM_EYEVECTOR = 45,
	GRA3DVU1MEM_GLOBALAMBIENT = 46,
	GRA3DVU1MEM_DIRCOLDIF0 = 47,
	GRA3DVU1MEM_DIRCOLDIF1 = 48,
	GRA3DVU1MEM_DIRCOLDIF2 = 49,
	GRA3DVU1MEM_DIRCOLSPC0 = 50,
	GRA3DVU1MEM_DIRCOLSPC1 = 51,
	GRA3DVU1MEM_DIRCOLSPC2 = 52,
	GRA3DVU1MEM_SPOTBTIMES = 53,
	GRA3DVU1MEM_SPOTCOLDIF0 = 54,
	GRA3DVU1MEM_SPOTCOLDIF1 = 55,
	GRA3DVU1MEM_SPOTCOLDIF2 = 56,
	GRA3DVU1MEM_SPOTCOLSPC0 = 57,
	GRA3DVU1MEM_SPOTCOLSPC1 = 58,
	GRA3DVU1MEM_SPOTCOLSPC2 = 59,
	GRA3DVU1MEM_POINTBTIMES = 60,
	GRA3DVU1MEM_POINTCOLDIF0 = 61,
	GRA3DVU1MEM_POINTCOLDIF1 = 62,
	GRA3DVU1MEM_POINTCOLDIF2 = 63,
	GRA3DVU1MEM_POINTCOLSPC0 = 64,
	GRA3DVU1MEM_POINTCOLSPC1 = 65,
	GRA3DVU1MEM_POINTCOLSPC2 = 66,
	GRA3DVU1MEM_COORDMATRIX0 = 67,
	GRA3DVU1MEM_COORDMATRIX1 = 68,
	GRA3DVU1MEM_COORDMATRIX2 = 69,
	GRA3DVU1MEM_COORDMATRIX3 = 70,
	GRA3DVU1MEM_MAPSHADOW_VF01 = 0,
	GRA3DVU1MEM_MAPSHADOW_VF02 = 1,
	GRA3DVU1MEM_MAPSHADOW_DBADDRESS = 2,
	GRA3DVU1MEM_MAPSHADOW_OFFSETDATA = 3,
	GRA3DVU1MEM_MAPSHADOW_GTTRISTRIP = 4,
	GRA3DVU1MEM_MAPSHADOW_GTTRIFAN = 5,
	GRA3DVU1MEM_MAPSHADOW_LSMATRIX0 = 8,
	GRA3DVU1MEM_MAPSHADOW_LSMATRIX1 = 9,
	GRA3DVU1MEM_MAPSHADOW_LSMATRIX2 = 10,
	GRA3DVU1MEM_MAPSHADOW_LSMATRIX3 = 11,
	GRA3DVU1MEM_MAPSHADOW_LCMATRIX0 = 12,
	GRA3DVU1MEM_MAPSHADOW_LCMATRIX1 = 13,
	GRA3DVU1MEM_MAPSHADOW_LCMATRIX2 = 14,
	GRA3DVU1MEM_MAPSHADOW_LCMATRIX3 = 15,
	GRA3DVU1MEM_MAPSHADOW_LIPMATRIX0 = 19,
	GRA3DVU1MEM_MAPSHADOW_LIPMATRIX1 = 20,
	GRA3DVU1MEM_MAPSHADOW_LIPMATRIX2 = 21,
	GRA3DVU1MEM_MAPSHADOW_LIPMATRIX3 = 22,
	GRA3DVU1MEM_MAPSHADOW_SHADOWCOLOR = 23,
	GRA3DVU1MEM_MAPSHADOW_FOGDATA = 24,
	GRA3DVU1MEM_DBBASE = 96,
	GRA3DVU1MEM_DBEND = 1024
};

struct GRA3DVU1LIGHTDATA_DIRECTIONAL { // 0x60
	/* 0x00 */ LMATRIX lmDiffuse;
	/* 0x30 */ LMATRIX lmSpecular;
};

struct GRA3DVU1LIGHTDATA_POINT { // 0x40
	/* 0x00 */ LMATRIX lmPosition;
	/* 0x30 */ float _vDirectionInverse[4];
};

struct GRA3DVU1LIGHTDATA_SPOT { // 0xb0
	/* 0x00 */ LMATRIX lmPosition;
	/* 0x30 */ float vIntens[4];
	/* 0x40 */ float vIntensB[4];
	/* 0x50 */ LMATRIX lmDirection;
	/* 0x80 */ LMATRIX lmSpecular;
};

struct GRA3DVU1LIGHTDATA { // 0x150
	/* 0x000 */ GRA3DVU1LIGHTDATA_DIRECTIONAL dir;
	/* 0x060 */ GRA3DVU1LIGHTDATA_SPOT spot;
	/* 0x110 */ GRA3DVU1LIGHTDATA_POINT point;
};

struct GRA3DVU1MATERIALDATA_POINT { // 0x70
	/* 0x00 */ float vPower[4];
	/* 0x10 */ LMATRIX lmDiffuse;
	/* 0x40 */ LMATRIX lmSpecular;
};

struct GRA3DVU1MATERIALDATA_SPOT { // 0x70
	/* 0x00 */ float vPower[4];
	/* 0x10 */ LMATRIX lmDiffuse;
	/* 0x40 */ LMATRIX lmSpecular;
};

struct GRA3DVU1MATERIALDATA_DIRECTIONAL { // 0x70
	/* 0x00 */ float vAmbient[4];
	/* 0x10 */ LMATRIX lmDiffuse;
	/* 0x40 */ LMATRIX lmSpecular;
};

struct GRA3DVU1MATERIALCACHE_POINT { // 0x80
	/* 0x00 */ GRA3DVU1MATERIALDATA_POINT Data;
	/* 0x70 */ GRA3DMATERIALINDEXCACHE Index;
};

struct GRA3DVU1MATERIALCACHE_SPOT { // 0x80
	/* 0x00 */ GRA3DVU1MATERIALDATA_SPOT Data;
	/* 0x70 */ GRA3DMATERIALINDEXCACHE Index;
};

struct GRA3DVU1MATERIALDATA { // 0x150
	/* 0x000 */ GRA3DVU1MATERIALDATA_DIRECTIONAL dir;
	/* 0x070 */ GRA3DVU1MATERIALDATA_SPOT spot;
	/* 0x0e0 */ GRA3DVU1MATERIALDATA_POINT point;
};

struct GRA3DVU1LIGHTPACKET { // 0x160
	/* 0x000 */ qword qwVif1Code;
	/* 0x010 */ GRA3DVU1LIGHTDATA Data;
};

struct GRA3DVU1MATERIALPACKET_DIRECTIONAL { // 0x80
	/* 0x00 */ qword qwVif1Code;
	/* 0x10 */ GRA3DVU1MATERIALDATA_DIRECTIONAL Data;
};

struct GRA3DVU1MATERIALPACKET_POINT { // 0x80
	/* 0x00 */ qword qwVif1Code;
	/* 0x10 */ GRA3DVU1MATERIALDATA_POINT Data;
};

struct GRA3DVU1MATERIALPACKET_SPOT { // 0x80
	/* 0x00 */ qword qwVif1Code;
	/* 0x10 */ GRA3DVU1MATERIALDATA_SPOT Data;
};

struct GRA3DVU1DBADDRESS { // 0x10
	/* 0x0 */ unsigned int uiContext0;
	/* 0x4 */ unsigned int uiContext1;
	/* 0x8 */ unsigned int auiPad[2];
};

struct GRA3DVU1TRANSFORMDATA { // 0x100
	/* 0x00 */ float matWorldScreen[4][4];
	/* 0x40 */ float matWorldClip[4][4];
	/* 0x80 */ float matLocalWorld[4][4];
	/* 0xc0 */ float matLocalWorldNoNormalized[4][4];
};

struct _LIGHT_POINT_AND_SPOT_NUM { // 0x10
	/* 0x0 */ int iPad0;
	/* 0x4 */ int iNumSpotGroup;
	/* 0x8 */ int iNumPointGroup;
	/* 0xc */ int iPad1;
};

union SCEGIFTAG_EOP { // 0x10
	/* 0x0 */ void gtEOP;
	/* 0x0 */ _LIGHT_POINT_AND_SPOT_NUM lightnum;
};

struct GRA3DVU1CONSTDATA { // 0x80
	/* 0x00 */ float _vVF1[4];
	/* 0x10 */ float _vVF2[4];
	/* 0x20 */ GRA3DVU1DBADDRESS DBAddress;
	/* 0x30 */ void gtTRISTRIP_NOTEXTURE;
	/* 0x40 */ void gtTRISTRIP_TEXTURE;
	/* 0x50 */ SCEGIFTAG_EOP gtEOP;
	/* 0x60 */ void gtTRIFAN_NOTEXTURE;
	/* 0x70 */ void gtTRIFAN_TEXTURE;
};

struct GRA3DVU1MEMLAYOUT_DIRECT { // 0x430
	/* 0x000 */ float _vVF1[4];
	/* 0x010 */ float _vVF2[4];
	/* 0x020 */ GRA3DVU1DBADDRESS DBAddress;
	/* 0x030 */ void gtTRISTRIP_NOTEXTURE;
	/* 0x040 */ void gtTRISTRIP_TEXTURE;
	/* 0x050 */ SCEGIFTAG_EOP gtEOP;
	/* 0x060 */ void gtTRIFAN_NOTEXTURE;
	/* 0x070 */ void gtTRIFAN_TEXTURE;
	/* 0x080 */ float matWorldScreen[4][4];
	/* 0x0c0 */ float matWorldClip[4][4];
	/* 0x100 */ float matLocalWorld[4][4];
	/* 0x140 */ float matLocalWorldNoNormalized[4][4];
	/* 0x180 */ G3DVU1FOG Fog;
	/* 0x190 */ LMATRIX lmatDiffuse_Directional;
	/* 0x1c0 */ LMATRIX lmatSpecular_Directional;
	/* 0x1f0 */ float vPosition_Spot0[4];
	/* 0x200 */ float vPosition_Spot1[4];
	/* 0x210 */ float vPosition_Spot2[4];
	/* 0x220 */ float vIntension_Spot[4];
	/* 0x230 */ float vIntensionB_Spot[4];
	/* 0x240 */ LMATRIX lmatDiffuse_Spot;
	/* 0x270 */ LMATRIX lmatSpecular_Spot;
	/* 0x2a0 */ float vPosition_Point0[4];
	/* 0x2b0 */ float vPosition_Point1[4];
	/* 0x2c0 */ float vPosition_Point2[4];
	/* 0x2d0 */ float _vEyeDirection_Point[4];
	/* 0x2e0 */ float vAmbient_Directional[4];
	/* 0x2f0 */ LMATRIX lmatDiffuse_Directional_Material;
	/* 0x320 */ LMATRIX lmatSpecular_Directional_Material;
	/* 0x350 */ float vBTimes_Spot[4];
	/* 0x360 */ LMATRIX lmatDiffuse_Spot_Material;
	/* 0x390 */ LMATRIX lmatSpecular_Spot_Material;
	/* 0x3c0 */ float vBTimes_Point[4];
	/* 0x3d0 */ LMATRIX lmatDiffuse_Point_Material;
	/* 0x400 */ LMATRIX lmatSpecular_Point_Material;
};

struct GRA3DVU1MEMLAYOUT_PACKED { // 0x430
	/* 0x000 */ GRA3DVU1CONSTDATA Const;
	/* 0x080 */ GRA3DVU1TRANSFORMDATA Transform;
	/* 0x180 */ G3DVU1FOG Fog;
	/* 0x190 */ GRA3DVU1LIGHTDATA Light;
	/* 0x2e0 */ GRA3DVU1MATERIALDATA Material;
};

union GRA3DVU1MEMLAYOUT { // 0x430
	/* 0x000 */ GRA3DVU1MEMLAYOUT_DIRECT Direct;
	/* 0x000 */ GRA3DVU1MEMLAYOUT_PACKED Packed;
};

struct GRA3DVU1MEMLAYOUT_MAPSHADOW_DIRECT { // 0x190
	/* 0x000 */ float _vf01[4];
	/* 0x010 */ float _vf02[4];
	/* 0x020 */ GRA3DVU1DBADDRESS DataAddress;
	/* 0x030 */ float vOffsetData[4];
	/* 0x040 */ void gtTRISTRIP;
	/* 0x050 */ void gtTRIFAN;
	/* 0x060 */ qword qw0x06;
	/* 0x070 */ qword qw0x07;
	/* 0x080 */ float matLocalScreen[4][4];
	/* 0x0c0 */ float matLocalClip[4][4];
	/* 0x100 */ qword qw0x10;
	/* 0x110 */ qword qw0x11;
	/* 0x120 */ qword qw0x12;
	/* 0x130 */ float matLIP[4][4];
	/* 0x170 */ sceVu0IVECTOR ivColor;
	/* 0x180 */ G3DVU1FOG Fog;
};

union GRA3DVU1MEMLAYOUT_MAPSHADOW { // 0x190
	/* 0x000 */ GRA3DVU1MEMLAYOUT_MAPSHADOW_DIRECT Direct;
};

enum VFINDEX {
	VF_00 = 0,
	VF_01 = 1,
	VF_02 = 2,
	NUM_VFINDEX = 3,
	VFINDEX_FORCE_DWORD = 2147483647
};

struct GRA3DEMULATIONLIGHTDATACREATIONDATA { // 0x40
	/* 0x00 */ float vStaticDirLightColor[4];
	/* 0x10 */ float fAngleScale;
	/* 0x14 */ float fDiffuseScale;
	/* 0x18 */ float fMaplightScale;
	/* 0x1c */ int bEnableSelfreflection;
	/* 0x20 */ int bEmulateSelfreflection;
	/* 0x24 */ int bEnableFlashlight;
	/* 0x28 */ int bEmulateFlashlight;
	/* 0x2c */ int bEnableFlashlight2;
	/* 0x30 */ int bEmulateFlashlight2;
	/* 0x34 */ int bEnableStaticDirLight;
};

struct G3DVIF1CODE_STCYCLE { // 0x4
	/* 0x0:0 */ unsigned int CL : 8;
	/* 0x1:0 */ unsigned int WL : 8;
	/* 0x2:0 */ unsigned int NUM : 8;
	/* 0x3:0 */ unsigned int CMD : 7;
	/* 0x3:7 */ unsigned int irq : 1;
};

struct G3DVIF1CODE_OFFSET { // 0x4
	/* 0x0:0 */ unsigned int OFFSET : 10;
	/* 0x1:2 */ unsigned int __ : 6;
	/* 0x2:0 */ unsigned int NUM : 8;
	/* 0x3:0 */ unsigned int CMD : 7;
	/* 0x3:7 */ unsigned int irq : 1;
};

struct G3DVIF1CODE_BASE { // 0x4
	/* 0x0:0 */ unsigned int BASE : 8;
	/* 0x1:0 */ unsigned int __ : 8;
	/* 0x2:0 */ unsigned int NUM : 8;
	/* 0x3:0 */ unsigned int CMD : 7;
	/* 0x3:7 */ unsigned int irq : 1;
};

struct G3DVIF1CODE_ITOP { // 0x4
	/* 0x0:0 */ unsigned int ADDR : 8;
	/* 0x1:0 */ unsigned int __ : 8;
	/* 0x2:0 */ unsigned int NUM : 8;
	/* 0x3:0 */ unsigned int CMD : 7;
	/* 0x3:7 */ unsigned int irq : 1;
};

struct G3DVIF1CODE_STMOD { // 0x4
	/* 0x0:0 */ unsigned int MODE : 2;
	/* 0x0:2 */ unsigned int __ : 14;
	/* 0x2:0 */ unsigned int NUM : 8;
	/* 0x3:0 */ unsigned int CMD : 7;
	/* 0x3:7 */ unsigned int irq : 1;
};

struct G3DVIF1CODE_MARK { // 0x4
	/* 0x0:0 */ unsigned int MARK : 16;
	/* 0x2:0 */ unsigned int NUM : 8;
	/* 0x3:0 */ unsigned int CMD : 7;
	/* 0x3:7 */ unsigned int irq : 1;
};

struct G3DVIF1CODE_DIRECT { // 0x4
	/* 0x0:0 */ unsigned int size : 16;
	/* 0x2:0 */ unsigned int num : 8;
	/* 0x3:0 */ unsigned int cmd : 7;
	/* 0x3:7 */ unsigned int irq : 1;
};

struct G3DVIF1CODE_UNPACK { // 0x4
	/* 0x0:0 */ unsigned int ADDR : 10;
	/* 0x1:2 */ unsigned int pad : 4;
	/* 0x1:6 */ unsigned int USN : 1;
	/* 0x1:7 */ unsigned int FLG : 1;
	/* 0x2:0 */ unsigned int NUM : 8;
	/* 0x3:0 */ unsigned int CMD : 8;
};

union G3DVIF1CODE { // 0x4
	/* 0x0 */ G3DVIF1CODE_STCYCLE stcycle;
	/* 0x0 */ G3DVIF1CODE_OFFSET offset;
	/* 0x0 */ G3DVIF1CODE_BASE base;
	/* 0x0 */ G3DVIF1CODE_ITOP itop;
	/* 0x0 */ G3DVIF1CODE_STMOD stmod;
	/* 0x0 */ G3DVIF1CODE_MARK mark;
	/* 0x0 */ G3DVIF1CODE_DIRECT direct;
	/* 0x0 */ G3DVIF1CODE_UNPACK unpack;
};

struct G3DVIF1REGISTERLAYOUT_DIRECT { // 0x58
	/* 0x00 */ tVIF1_STAT stat;
	/* 0x04 */ tVIF1_FBRST fbrst;
	/* 0x08 */ tVIF1_ERR err;
	/* 0x0c */ tVIF_MARK mark;
	/* 0x10 */ tVIF_CYCLE cycle;
	/* 0x14 */ tVIF_MODE mode;
	/* 0x18 */ tVIF1_NUM num;
	/* 0x1c */ tVIF_MASK mask;
	/* 0x20 */ tVIF_CODE code;
	/* 0x24 */ tVIF_ITOPS itop;
	/* 0x28 */ tVIF1_BASE base;
	/* 0x2c */ tVIF1_OFST ofst;
	/* 0x30 */ tVIF1_TOPS tops;
	/* 0x34 */ int _aiReserved0[1];
	/* 0x38 */ tVIF_R0 r0;
	/* 0x3c */ tVIF_R1 r1;
	/* 0x40 */ tVIF_R2 r2;
	/* 0x44 */ tVIF_R3 r3;
	/* 0x48 */ tVIF_C0 c0;
	/* 0x4c */ tVIF_C1 c1;
	/* 0x50 */ tVIF_C2 c2;
	/* 0x54 */ tVIF_C3 c3;
};

typedef word G3DVIF1REGISTERLAYOUT_ARRAY[22];

union G3DVIF1REGISTERLAYOUT { // 0x58
	/* 0x00 */ G3DVIF1REGISTERLAYOUT_DIRECT Direct;
	/* 0x00 */ G3DVIF1REGISTERLAYOUT_ARRAY Array;
};

struct G3DVIF1CMDDATA { // 0x14
	/* 0x00 */ unsigned int uiCmd;
	/* 0x04 */ unsigned int auiSubPacket[4];
};

typedef sceVu0FVECTOR DVECTOR[2];
typedef float VECTOR3[3];
typedef G3DLIGHTTYPE SGDLIGHTTYPE;

struct SGDTRI2FILEHEADER { // 0x70
	/* 0x00 */ unsigned int uiVif1Code_NOP0;
	/* 0x04 */ unsigned int uiVif1Code_NOP1;
	/* 0x08 */ unsigned int uiVif1Code_FLUSH;
	/* 0x0c */ unsigned int uiVif1Code_DIRECT;
	/* 0x10 */ void gsli;
	
	SGDTRI2FILEHEADER& operator=();
	SGDTRI2FILEHEADER();
	SGDTRI2FILEHEADER();
	unsigned int GetTRI2Size();
};

typedef GRA3DMATERIALINDEXCACHE SGDMATERIALCACHE;

struct SGDMATERIAL { // 0xb0
	/* 0x00 */ unsigned int uiPrimType;
	/* 0x04 */ char strTexName[12];
	/* 0x10 */ float vAmbient[4];
	/* 0x20 */ float vDiffuse[4];
	/* 0x30 */ float vSpecular[4];
	/* 0x40 */ float vEmission[4];
	/* 0x50 */ int iCacheStatus;
	/* 0x54 */ unsigned int iTagAddressOld;
	/* 0x58 */ int iSizeOld;
	/* 0x5c */ int iPad;
	/* 0x60 */ SGDMATERIALCACHE aCache[3];
	/* 0x90 */ int aiPad[8];
};

struct _VECTORINDEX { // 0x8
	/* 0x0 */ unsigned int uiVertexId;
	/* 0x4 */ unsigned int uiNormalId;
};

struct _VECTORADDRESS { // 0x8
	/* 0x0 */ sceVu0FVECTOR *pVertex;
	/* 0x4 */ sceVu0FVECTOR *pNormal;
};

union _VECTORDATA { // 0x8
	/* 0x0 */ _VECTORINDEX vIndex;
	/* 0x0 */ _VECTORADDRESS vAddress;
};

struct SGDVUVNDESC { // 0x8
	/* 0x0 */ short int sNumVertex;
	/* 0x2 */ short int sNumNormal;
	/* 0x4 */ unsigned char ucSize;
	/* 0x5 */ unsigned char ucVectorType;
	/* 0x6 */ unsigned char aucPad[2];
};

struct SGDVUVNDATA { // 0x20
	/* 0x00 */ qword qwVif1Code;
	/* 0x10 */ unsigned int uiVTop;
	/* 0x14 */ unsigned int uiPTop;
	/* 0x18 */ unsigned int uiWTop;
	/* 0x1c */ unsigned int uiNumMesh;
};

struct _SGDVUMESHCOLORDATA { // 0x10
	/* 0x0 */ G3DVIF1CODE_UNPACK VifUnpack;
	/* 0x4 */ VECTOR3 avColor[1];
};

struct SGDMESHVERTEXDATA_TYPE2 { // 0x18
	/* 0x00 */ VECTOR3 vVertex;
	/* 0x0c */ VECTOR3 vNormal;
};

struct SGDMESHVERTEXDATA_TYPE2F { // 0xc
	/* 0x0 */ VECTOR3 avNormal[1];
};

struct SGDVUVNDATA_PRESET { // 0x40
	/* 0x00 */ unsigned int aui[10];
	/* 0x28 */ union { // 0x18
		/* 0x28 */ SGDMESHVERTEXDATA_TYPE2 avt2[1];
		/* 0x28 */ SGDMESHVERTEXDATA_TYPE2F vt2f;
	};
};

struct SGDVUVNDATA_WEIGHTED { // 0x20
	/* 0x00 */ unsigned char auc0[28];
	/* 0x1c */ unsigned char ucBoneId0;
	/* 0x1d */ unsigned char ucBoneId1;
	/* 0x1e */ unsigned char auc1[2];
};

struct SGDVUMESHTYPE { // 0x1
	/* 0x0:0 */ unsigned char GRD : 1;
	/* 0x0:1 */ unsigned char TEX : 1;
	/* 0x0:2 */ unsigned char VTYPE : 2;
	/* 0x0:4 */ unsigned char PRE : 1;
	/* 0x0:5 */ unsigned char FLAT : 1;
	/* 0x0:6 */ unsigned char MULTI : 1;
	/* 0x0:7 */ unsigned char NVL : 1;
};

struct SGDVUMESHDESC { // 0x8
	/* 0x0 */ int iTagSize;
	/* 0x4 */ unsigned char ucPad0;
	/* 0x5 */ union { // 0x1
		/* 0x5 */ SGDVUMESHTYPE MeshType;
		/* 0x5 */ unsigned char ucMeshType;
	};
	/* 0x6 */ unsigned char ucNumMesh;
	/* 0x7 */ unsigned char ucPad1;
};

struct SGDVUMESHDATA { // 0x20
	/* 0x00 */ qword qwVif1Code;
	/* 0x10 */ void GifTag;
};

struct SGDVUMESHDATA_PRESET { // 0x18
	/* 0x00 */ short int asPad0[2];
	/* 0x04 */ short int sOffsetToST;
	/* 0x06 */ short int sOffsetToPrim;
	/* 0x08 */ int aiPad1[2];
	/* 0x10 */ long int alData[1];
};

struct SGDVUMATERIALDESC { // 0x8
	/* 0x0 */ union { // 0x4
		/* 0x0 */ int iMaterialIndex;
		/* 0x0 */ SGDMATERIAL *pMat;
	};
	/* 0x4 */ int iPad;
};

struct SGDCOORDINATEDESC { // 0x8
	/* 0x0 */ int iCoordId0;
	/* 0x4 */ int iCoordId1;
};

struct SGDBOUNDINGBOXDESC { // 0x8
	/* 0x0 */ int iCoordId;
	/* 0x4 */ int iPad;
};

struct SGDGSIMAGEDESC { // 0x8
	/* 0x0 */ int iQWordSize;
	/* 0x4 */ int iPad;
};

struct SGDGSIMAGEDATA { // 0x30
	/* 0x00 */ unsigned int auiVifCode[4];
	/* 0x10 */ void GT;
	/* 0x20 */ unsigned char aucData[1];
};

struct SGDTEXTUREIMAGEDESC { // 0x8
	/* 0x0 */ int iNumTexture;
	/* 0x4 */ int iPaddingSize;
};

struct SGDLIGHTDESC { // 0x8
	/* 0x0 */ SGDLIGHTTYPE Type;
	/* 0x4 */ int iNum;
};

struct SGDLIGHTDATA_DIRECTIONAL { // 0x20
	/* 0x00 */ float vColor[4];
	/* 0x10 */ float vDirection[4];
};

struct SGDLIGHTDATA_POINT { // 0x20
	/* 0x00 */ float vColor[4];
	/* 0x10 */ float vPosition[4];
};

struct SGDLIGHTDATA_SPOT { // 0x30
	/* 0x00 */ float vColor[4];
	/* 0x10 */ float vPosition[4];
	/* 0x20 */ float vTarget[4];
};

struct SGDLIGHTDATA_AMBIENT { // 0x10
	/* 0x0 */ float vColor[4];
};

struct SGDTEXTUREANIMATIONDESC { // 0x8
	/* 0x0 */ unsigned char ucNumTexture;
	/* 0x1 */ unsigned char ucPaddingSize;
	/* 0x2 */ unsigned char bEnable;
	/* 0x3 */ unsigned char ucStep;
	/* 0x4 */ unsigned char ucCount;
	/* 0x5 */ unsigned char bLoop;
	/* 0x6 */ unsigned char aucPad[2];
};

struct SGDPROCUNITHEADER { // 0x10
	/* 0x0 */ SGDPROCUNITHEADER *pNext;
	/* 0x4 */ int iCategory;
	/* 0x8 */ union { // 0x8
		/* 0x8 */ long int lPrimType;
		/* 0x8 */ SGDVUVNDESC VUVNDesc;
		/* 0x8 */ SGDVUMESHDESC VUMeshDesc;
		/* 0x8 */ SGDVUMATERIALDESC VUMaterialDesc;
		/* 0x8 */ SGDCOORDINATEDESC CoordDesc;
		/* 0x8 */ SGDBOUNDINGBOXDESC BoundingBoxDesc;
		/* 0x8 */ SGDGSIMAGEDESC GSImageDesc;
		/* 0x8 */ SGDLIGHTDESC LightDesc;
		/* 0x8 */ SGDTEXTUREIMAGEDESC TexDesc;
		/* 0x8 */ SGDTEXTUREANIMATIONDESC TexAnimDesc;
	};
};

union SGDPROCUNITDATA { // 0x80
	/* 0x00 */ SGDVUVNDATA VUVNData;
	/* 0x00 */ SGDVUMESHDATA VUMeshData;
	/* 0x00 */ SGDVUVNDATA_PRESET VUVNData_Preset;
	/* 0x00 */ SGDVUMESHDATA_PRESET VUMeshData_Preset;
	/* 0x00 */ unsigned char aucGSImage;
	/* 0x00 */ float avBB[8][4];
	/* 0x00 */ SGDLIGHTDATA_DIRECTIONAL alightDirectional[1];
	/* 0x00 */ SGDLIGHTDATA_POINT alightPoint[1];
	/* 0x00 */ SGDLIGHTDATA_SPOT alightSpot[1];
	/* 0x00 */ SGDLIGHTDATA_AMBIENT lightAmbient;
	/* 0x00 */ SGDGSIMAGEDATA GSImage;
};

enum SGDVECTORADDRESSID {
	SVA_UNIQUE = 0,
	SVA_COMMON = 1,
	SVA_WEIGHTED = 2,
	NUM_SGDVECTORADDRESSID = 3,
	SGDVECTORADDRESSID_FORCE_DWORD = -1
};

struct _ONELIST { // 0x8
	/* 0x0 */ short int sCoordId0;
	/* 0x2 */ short int sCoordId1;
	/* 0x4 */ u_short usNumVector;
	/* 0x6 */ u_short vOff;
};

struct _VERTEXLIST { // 0xc
	/* 0x0 */ int iNumList;
	/* 0x4 */ _ONELIST aList[1];
};

struct SGDVECTORADDRESS { // 0x10
	/* 0x0 */ unsigned int uiSize;
	/* 0x4 */ sceVu0FVECTOR *pvVertex;
	/* 0x8 */ sceVu0FVECTOR *pvNormal;
	/* 0xc */ _VERTEXLIST *pVertexList;
};

struct SGDVECTORINFO { // 0x34
	/* 0x00 */ unsigned int uiNumAddress;
	/* 0x04 */ SGDVECTORADDRESS aAddress[3];
};

struct SGDCOORDINATE { // 0xe0
	/* 0x00 */ float matCoord[4][4];
	/* 0x40 */ float matLocalWorld[4][4];
	/* 0x80 */ float _matWork[4][4];
	/* 0xc0 */ float vRot[4];
	/* 0xd0 */ SGDCOORDINATE *pParent;
	/* 0xd4 */ unsigned int bCalc;
	/* 0xd8 */ unsigned int edge_check;
	/* 0xdc */ int bInViewvolume;
};

struct SGDFILEHEADER { // 0x20
	/* 0x00 */ unsigned int uiVersionId;
	/* 0x04 */ unsigned char ucMapFlag;
	/* 0x05 */ unsigned char ucModelType;
	/* 0x06 */ short unsigned int usNumMaterial;
	/* 0x08 */ SGDCOORDINATE *pCoord;
	/* 0x0c */ SGDMATERIAL *pMaterial;
	/* 0x10 */ SGDVECTORINFO *pVectorInfo;
	/* 0x14 */ unsigned int uiNumBlock;
	/* 0x18 */ SGDPROCUNITHEADER *apProcUnitHead[1];
	/* 0x1c */ int aiPad[1];
};

enum SGDRENDERTYPE {
	SRT_REALTIME = 0,
	SRT_PRELIGHTING = 1,
	SRT_MAPSHADOW = 2,
	SRT_CLEARPRELIGHTING = 3,
	NUM_SGDRENDERTYPE = 4
};

struct GRA3DSGDCREATIONDATA { // 0x8
	/* 0x0 */ sceVu0FVECTOR *vnarray;
	/* 0x4 */ int size;
};

struct GRA3DSCRATCHPADLAYOUT { // 0x440
	/* 0x000 */ qword qwVif1Code0;
	/* 0x010 */ GRA3DVU1MEMLAYOUT Vu1Mem;
};

struct CSND_BUF_PLAY { // 0x4
protected:
	/* 0x0 */ int play_id;
	
public:
	CSND_BUF_PLAY& operator=();
	CSND_BUF_PLAY();
	CSND_BUF_PLAY();
	void Fade();
	void PitchFade();
	int IsPlaying();
	void Stop();
};

enum _PLANE3D {
	YZ = 0,
	ZX = 1,
	XY = 2
};

typedef _PLANE3D PLANE3D;

struct CSYSTEM_SND_BUF_PLAY : /* 0x0 */ CSND_BUF_PLAY { // 0x4
	CSYSTEM_SND_BUF_PLAY& operator=();
	CSYSTEM_SND_BUF_PLAY();
	CSYSTEM_SND_BUF_PLAY();
	void Play();
};

typedef __malloc_alloc_template<0> malloc_alloc;

struct __malloc_alloc_template<0> { // 0x1
private:
	static void (*__malloc_alloc_oom_handler)(/* parameters unknown */);
	
public:
	__malloc_alloc_template<0>& operator=();
	__malloc_alloc_template();
	__malloc_alloc_template();
private:
	static void* _S_oom_malloc(/* parameters unknown */);
	static void* _S_oom_realloc(/* parameters unknown */);
public:
	static void* allocate(/* parameters unknown */);
	static void deallocate(/* parameters unknown */);
	static void* reallocate(/* parameters unknown */);
	static void (*)(/* parameters unknown */) __set_malloc_handler(/* parameters unknown */);
};

typedef __default_alloc_template<false,0> alloc;
typedef __default_alloc_template<false,0> single_client_alloc;

struct __default_alloc_template<false,0> { // 0x1
private:
	static _Obj *_S_free_list[16];
	static char *_S_start_free;
	static char *_S_end_free;
	static size_t _S_heap_size;
	
public:
	__default_alloc_template<false,0>& operator=();
	__default_alloc_template();
	__default_alloc_template();
private:
	static size_t _S_round_up(/* parameters unknown */);
	static size_t _S_freelist_index(/* parameters unknown */);
	static void* _S_refill(/* parameters unknown */);
	static char* _S_chunk_alloc(/* parameters unknown */);
public:
	static void* allocate(/* parameters unknown */);
	static void deallocate(/* parameters unknown */);
	static void* reallocate(/* parameters unknown */);
};

struct allocator<void> { // 0x1
};

struct _Bit_reference { // 0x8
	/* 0x0 */ unsigned int *_M_p;
	/* 0x4 */ unsigned int _M_mask;
	
	_Bit_reference();
	_Bit_reference();
	_Bit_reference();
	bool operator bool();
	_Bit_reference& operator=();
	_Bit_reference& operator=();
	bool operator==();
	bool operator<();
	void flip();
};

struct random_access_iterator<bool,int> { // 0x1
};

struct _Bit_iterator : /* 0x0 */ random_access_iterator<bool,int> { // 0xc
	/* 0x4 */ unsigned int *_M_p;
	/* 0x8 */ unsigned int _M_offset;
	
	_Bit_iterator& operator=();
	_Bit_iterator();
	void bump_up();
	void bump_down();
	_Bit_iterator();
	_Bit_iterator();
	_Bit_reference operator*();
	_Bit_iterator& operator++();
	_Bit_iterator operator++();
	_Bit_iterator& operator--();
	_Bit_iterator operator--();
	_Bit_iterator& operator+=();
	_Bit_iterator& operator-=();
	_Bit_iterator operator+();
	_Bit_iterator operator-();
	ptrdiff_t operator-();
	_Bit_reference operator[]();
	bool operator==();
	bool operator!=();
	bool operator<();
};

struct _Bit_const_iterator : /* 0x0 */ random_access_iterator<bool,int> { // 0xc
	/* 0x4 */ unsigned int *_M_p;
	/* 0x8 */ unsigned int _M_offset;
	
	_Bit_const_iterator& operator=();
	_Bit_const_iterator();
	void bump_up();
	void bump_down();
	_Bit_const_iterator();
	_Bit_const_iterator();
	_Bit_const_iterator();
	bool operator*();
	_Bit_const_iterator& operator++();
	_Bit_const_iterator operator++();
	_Bit_const_iterator& operator--();
	_Bit_const_iterator operator--();
	_Bit_const_iterator& operator+=();
	_Bit_const_iterator& operator-=();
	_Bit_const_iterator operator+();
	_Bit_const_iterator operator-();
	ptrdiff_t operator-();
	bool operator[]();
	bool operator==();
	bool operator!=();
	bool operator<();
};

typedef vector<bool,__default_alloc_template<false, 0> > bit_vector;
// warning: multiple differing types with the same name (type name not equal)
typedef basic_string<char,string_char_traits<char>,__default_alloc_template<false, 0> > string;

struct custom_allocator<void> { // 0x1
};

typedef void* (*LPFUNC_ALLOCATE)(/* parameters unknown */);
typedef void (*LPFUNC_DEALLOCATE)(/* parameters unknown */);
// warning: multiple differing types with the same name (type name not equal)
typedef basic_string<char,string_char_traits<char>,ctl::custom_allocator<char> > string;
typedef void (*LPFUNC_ONEDITVALUECHANGED)(/* parameters unknown */);

struct basic_string<char,string_char_traits<char>,ctl::custom_allocator<char> > { // 0x4
	static size_t npos;
private:
	static Rep nilRep;
	/* 0x0 */ char *dat;
	
	Rep* rep();
	void repup();
public:
	char* data();
	size_t length();
	size_t size();
	size_t capacity();
	size_t max_size();
	bool empty();
	basic_string<char,string_char_traits<char>,ctl::custom_allocator<char> >& operator=();
	basic_string();
	basic_string();
	basic_string();
	basic_string();
	basic_string();
	basic_string();
	basic_string(basic_string<char,string_char_traits<char>,ctl::custom_allocator<char> >*, int, void);
	void swap();
	basic_string<char,string_char_traits<char>,ctl::custom_allocator<char> >& append();
	basic_string<char,string_char_traits<char>,ctl::custom_allocator<char> >& append();
	basic_string<char,string_char_traits<char>,ctl::custom_allocator<char> >& append();
	basic_string<char,string_char_traits<char>,ctl::custom_allocator<char> >& append();
	void push_back();
	basic_string<char,string_char_traits<char>,ctl::custom_allocator<char> >& assign();
	basic_string<char,string_char_traits<char>,ctl::custom_allocator<char> >& assign();
	basic_string<char,string_char_traits<char>,ctl::custom_allocator<char> >& assign();
	basic_string<char,string_char_traits<char>,ctl::custom_allocator<char> >& assign();
	basic_string<char,string_char_traits<char>,ctl::custom_allocator<char> >& operator=();
	basic_string<char,string_char_traits<char>,ctl::custom_allocator<char> >& operator=();
	basic_string<char,string_char_traits<char>,ctl::custom_allocator<char> >& operator+=();
	basic_string<char,string_char_traits<char>,ctl::custom_allocator<char> >& operator+=();
	basic_string<char,string_char_traits<char>,ctl::custom_allocator<char> >& operator+=();
	basic_string<char,string_char_traits<char>,ctl::custom_allocator<char> >& insert();
	basic_string<char,string_char_traits<char>,ctl::custom_allocator<char> >& insert();
	basic_string<char,string_char_traits<char>,ctl::custom_allocator<char> >& insert();
	basic_string<char,string_char_traits<char>,ctl::custom_allocator<char> >& insert();
	char* insert();
	char* insert();
	basic_string<char,string_char_traits<char>,ctl::custom_allocator<char> >& erase();
	char* erase();
	char* erase();
	basic_string<char,string_char_traits<char>,ctl::custom_allocator<char> >& replace();
	basic_string<char,string_char_traits<char>,ctl::custom_allocator<char> >& replace();
	basic_string<char,string_char_traits<char>,ctl::custom_allocator<char> >& replace();
	basic_string<char,string_char_traits<char>,ctl::custom_allocator<char> >& replace();
	basic_string<char,string_char_traits<char>,ctl::custom_allocator<char> >& replace();
	basic_string<char,string_char_traits<char>,ctl::custom_allocator<char> >& replace();
	basic_string<char,string_char_traits<char>,ctl::custom_allocator<char> >& replace();
	basic_string<char,string_char_traits<char>,ctl::custom_allocator<char> >& replace();
	basic_string<char,string_char_traits<char>,ctl::custom_allocator<char> >& replace();
private:
	static char eos(/* parameters unknown */);
	void unique();
	void selfish();
public:
	char operator[]();
	char& operator[]();
	char& at();
	char& at();
private:
	void terminate();
public:
	char* c_str();
	void resize();
	void resize();
	void reserve();
	void clear();
	size_t copy();
	size_t find();
	size_t find();
	size_t find();
	size_t find();
	size_t rfind();
	size_t rfind();
	size_t rfind();
	size_t rfind();
	size_t find_first_of();
	size_t find_first_of();
	size_t find_first_of();
	size_t find_first_of();
	size_t find_last_of();
	size_t find_last_of();
	size_t find_last_of();
	size_t find_last_of();
	size_t find_first_not_of();
	size_t find_first_not_of();
	size_t find_first_not_of();
	size_t find_first_not_of();
	size_t find_last_not_of();
	size_t find_last_not_of();
	size_t find_last_not_of();
	size_t find_last_not_of();
	basic_string<char,string_char_traits<char>,ctl::custom_allocator<char> > substr();
	int compare();
	int compare();
	int compare();
	char* begin();
	char* end();
private:
	char* ibegin();
	char* iend();
public:
	char* begin();
	char* end();
	reverse_iterator<char *> rbegin();
	reverse_iterator<const char *> rbegin();
	reverse_iterator<char *> rend();
	reverse_iterator<const char *> rend();
private:
	void alloc();
	static size_t _find(/* parameters unknown */);
	bool check_realloc();
};

struct rebind<IEditObject *> { // 0x1
};

struct _Alloc_traits<IEditObject *,ctl::custom_allocator<IEditObject *> > { // 0x1
	static bool _S_instanceless;
};

struct _Vector_alloc_base<IEditObject *,ctl::custom_allocator<IEditObject *>,false> { // 0x10
protected:
	/* 0x0 */ custom_allocator<IEditObject *> _M_data_allocator;
	/* 0x4 */ IEditObject **_M_start;
	/* 0x8 */ IEditObject **_M_finish;
	/* 0xc */ IEditObject **_M_end_of_storage;
	
public:
	_Vector_alloc_base<IEditObject *,ctl::custom_allocator<IEditObject *>,false>& operator=();
	_Vector_alloc_base();
	custom_allocator<IEditObject *> get_allocator();
	_Vector_alloc_base();
protected:
	IEditObject** _M_allocate();
	void _M_deallocate();
};

struct _Vector_base<IEditObject *,ctl::custom_allocator<IEditObject *> > : /* 0x0 */ _Vector_alloc_base<IEditObject *,ctl::custom_allocator<IEditObject *>,false> { // 0x10
};

struct vector<IEditObject *,ctl::custom_allocator<IEditObject *> > : /* 0x0 */ private _Vector_base<IEditObject *,ctl::custom_allocator<IEditObject *> > { // 0x10
	custom_allocator<IEditObject *> get_allocator();
protected:
	void _M_insert_aux();
	void _M_insert_aux();
public:
	IEditObject** begin();
	IEditObject** begin();
	IEditObject** end();
	IEditObject** end();
	reverse_iterator<IEditObject **> rbegin();
	reverse_iterator<IEditObject *const *> rbegin();
	reverse_iterator<IEditObject **> rend();
	reverse_iterator<IEditObject *const *> rend();
	size_t size();
	size_t max_size();
	size_t capacity();
	bool empty();
	IEditObject*& operator[]();
	IEditObject*& operator[]();
	vector();
	vector();
	vector();
	vector();
	vector(vector<IEditObject *,ctl::custom_allocator<IEditObject *> >*, int, void);
	vector<IEditObject *,ctl::custom_allocator<IEditObject *> >& operator=();
	void reserve();
	void assign();
	IEditObject*& front();
	IEditObject*& front();
	IEditObject*& back();
	IEditObject*& back();
	void push_back();
	void push_back();
	void swap();
	IEditObject** insert();
	IEditObject** insert();
	void insert();
	void pop_back();
	IEditObject** erase();
	IEditObject** erase();
	void resize();
	void resize();
	void clear();
};

struct vector<IEditObject *> : /* 0x0 */ vector<IEditObject *,ctl::custom_allocator<IEditObject *> > { // 0x10
};

struct Rep { // 0x10
	/* 0x0 */ size_t len;
	/* 0x4 */ size_t res;
	/* 0x8 */ size_t ref;
	/* 0xc */ bool selfish;
	
	Rep();
	Rep();
	char* data();
	char& operator[]();
	char* grab();
	void release();
	static void* operator new(/* parameters unknown */);
	static void operator delete(/* parameters unknown */);
	static Rep* create(/* parameters unknown */);
	char* clone();
	void copy();
	void move();
	void set();
	static bool excess_slop(/* parameters unknown */);
	static size_t frob_size(/* parameters unknown */);
private:
	Rep& operator=();
};

struct iterator_traits<IEditObject **> { // 0x1
};

struct __type_traits<IEditObject *> { // 0x1
};

// warning: multiple differing types with the same name (type name not equal)
typedef __true_type _Trivial_destructor;
// warning: multiple differing types with the same name (descriptor not equal)
typedef IEditObject *_Tp;
// warning: multiple differing types with the same name (type name not equal)
typedef __true_type _Trivial;

struct __copy_dispatch<IEditObject **,IEditObject **,__true_type> { // 0x1
	__copy_dispatch<IEditObject **,IEditObject **,__true_type>& operator=();
	__copy_dispatch();
	__copy_dispatch();
	static IEditObject** copy(/* parameters unknown */);
};

struct __copy_backward_dispatch<IEditObject **,IEditObject **,__true_type> { // 0x1
	__copy_backward_dispatch<IEditObject **,IEditObject **,__true_type>& operator=();
	__copy_backward_dispatch();
	__copy_backward_dispatch();
	static IEditObject** copy(/* parameters unknown */);
};

// warning: multiple differing types with the same name (type name not equal)
typedef __true_type _Is_POD;

struct custom_allocator<char> { // 0x4
	/* 0x0 */ __vtbl_ptr_type *$vf1437;
	
	custom_allocator<char>& operator=();
	char* address();
	char* address();
	custom_allocator();
	custom_allocator();
	/* vtable[1] */ virtual char* custom_allocate();
	char* allocate();
	char* allocate();
	/* vtable[2] */ virtual void custom_deallocate();
	void deallocate();
	void construct();
	void destroy();
	size_t max_size();
};

struct CEditRoot : /* 0x00 */ IEditObject { // 0x24
	/* 0x14 */ vector<IEditObject *> m_vpEditItem;
	
	CEditRoot& operator=();
	CEditRoot();
	static void* operator new(/* parameters unknown */);
	static void* operator new [](/* parameters unknown */);
	static void operator delete(/* parameters unknown */);
	static void operator delete [](/* parameters unknown */);
	CEditRoot();
	CEditRoot();
	/* vtable[1] */ virtual CEditRoot(CEditRoot*, int, void);
	/* vtable[2] */ virtual int IsItem();
	int Create();
	/* vtable[8] */ virtual void Clear();
	CEditRoot* AddRoot();
	void SwitchNextItem();
	void SwitchPrevItem();
	int GetNumObject();
	IEditObject* GetObject();
	IEditObject* GetObject();
	/* vtable[9] */ virtual char* TypeString();
};

struct custom_allocator<IEditObject *> { // 0x4
	/* 0x0 */ __vtbl_ptr_type *$vf1307;
	
	custom_allocator<IEditObject *>& operator=();
	IEditObject** address();
	IEditObject** address();
	custom_allocator();
	custom_allocator();
	/* vtable[1] */ virtual IEditObject** custom_allocate();
	IEditObject** allocate();
	IEditObject** allocate();
	/* vtable[2] */ virtual void custom_deallocate();
	void deallocate();
	void construct();
	void destroy();
	size_t max_size();
};

struct IEditObject { // 0x14
protected:
	/* 0x00 */ string m_strLabel;
	/* 0x04 */ LPFUNC_ONEDITVALUECHANGED m_fpOnValueChanged;
	/* 0x08 */ void *m_pContext;
	/* 0x0c */ CEditRoot *m_pParentRoot;
public:
	/* 0x10 */ __vtbl_ptr_type *$vf1310;
	
	IEditObject& operator=();
	IEditObject();
	IEditObject();
	/* vtable[1] */ virtual IEditObject(IEditObject*, int, void);
	/* vtable[2] */ virtual int IsItem();
	/* vtable[3] */ virtual char* ValueString();
	/* vtable[4] */ virtual void Inc();
	/* vtable[5] */ virtual void Inc();
	/* vtable[6] */ virtual void Dec();
	/* vtable[7] */ virtual void Dec();
	/* vtable[8] */ virtual void Clear();
	char* LabelString();
	/* vtable[9] */ virtual char* TypeString();
	/* vtable[10] */ virtual type_info& TypeInfo();
	void SetHandler();
	CEditRoot* GetParentRoot();
};

struct PHEAD { // 0x34
	/* 0x00 */ u_int HeaderSections;
	/* 0x04 */ u_int UniqHeaderSize;
	/* 0x08 */ float *pUniqVertex[4];
	/* 0x0c */ float *pUniqNormal[4];
	/* 0x10 */ u_int *pUniqList;
	/* 0x14 */ u_int CommonHeaderSize;
	/* 0x18 */ float *pCommonVertex[4];
	/* 0x1c */ float *pCommonNormal[4];
	/* 0x20 */ u_int *pCommonList;
	/* 0x24 */ u_int WeightedHeaderSize;
	/* 0x28 */ float *pWeightedVertex[4];
	/* 0x2c */ float *pWeightedNormal[4];
	/* 0x30 */ u_int *pWeightedList;
};

typedef struct { // 0x8
	/* 0x0 */ short int cn0;
	/* 0x2 */ short int cn1;
	/* 0x4 */ u_short vIdx;
	/* 0x6 */ u_short vOff;
} ONELIST;

typedef struct { // 0xc
	/* 0x0 */ int list_num;
	/* 0x4 */ ONELIST lists[1];
} VERTEXLIST;

struct HeaderSection { // 0x1c
	/* 0x00 */ u_int VersionID;
	/* 0x04 */ u_char MAPFLAG;
	/* 0x05 */ u_char kind;
	/* 0x06 */ u_short materials;
	/* 0x08 */ SGDCOORDINATE *coordp;
	/* 0x0c */ SGDMATERIAL *matp;
	/* 0x10 */ u_int *phead;
	/* 0x14 */ u_int blocks;
	/* 0x18 */ u_int **primitives;
};

typedef struct { // 0x6
	/* 0x0 */ short int vnum;
	/* 0x2 */ short int nnum;
	/* 0x4 */ char vif_size;
	/* 0x5 */ char vtype;
} VUVN_PRIM;

typedef u_short ANI_CODE;

struct C_PARTICLE { // 0x60
	/* 0x00 */ sceVu0FVECTOR p;
	/* 0x10 */ sceVu0FVECTOR old;
	/* 0x20 */ sceVu0FVECTOR v;
	/* 0x30 */ sceVu0FVECTOR org;
	/* 0x40 */ sceVu0FVECTOR c_old;
	/* 0x50 */ int s_flg;
};

struct SPRING { // 0x8
	/* 0x0 */ u_short p1;
	/* 0x2 */ u_short p2;
	/* 0x4 */ float ldef;
};

struct SPHERE { // 0x20
	/* 0x00 */ sceVu0FVECTOR center;
	/* 0x10 */ float r;
};

struct TUBE { // 0x30
	/* 0x00 */ sceVu0FVECTOR p0;
	/* 0x10 */ sceVu0FVECTOR p1;
	/* 0x20 */ float r;
	/* 0x24 */ u_int axis;
};

struct CPLANE { // 0x20
	/* 0x00 */ sceVu0FVECTOR p0;
	/* 0x10 */ float r;
};

struct COLLISION_DAT { // 0x8
	/* 0x0 */ void *dat;
	/* 0x4 */ u_char type;
	/* 0x5 */ u_char bone_id;
};

struct ROPE_DAT { // 0x14
	/* 0x00 */ float *vtx;
	/* 0x04 */ float gravity;
	/* 0x08 */ float Kd;
	/* 0x0c */ float Ke;
	/* 0x10 */ u_int fixed_num;
};

struct ROPE_CTRL { // 0x40
	/* 0x00 */ C_PARTICLE *particle;
	/* 0x04 */ SPRING *spring;
	/* 0x08 */ ROPE_DAT *rdat;
	/* 0x10 */ sceVu0FVECTOR dir;
	/* 0x20 */ sceVu0FVECTOR top;
	/* 0x30 */ float pow;
	/* 0x34 */ u_int furn_id;
	/* 0x38 */ u_char p_num;
	/* 0x39 */ u_char spring_num;
	/* 0x3a */ u_char stat;
	/* 0x3b */ u_char move_mode;
};

struct WIND_CTRL { // 0x30
	/* 0x00 */ sceVu0FVECTOR dir;
	/* 0x10 */ float pow;
	/* 0x14 */ int cycle;
	/* 0x18 */ int strong;
	/* 0x1c */ int weak;
	/* 0x20 */ int sta;
};

struct CLOTH { // 0x10
	/* 0x0 */ float gravity;
	/* 0x4 */ float Kd;
	/* 0x8 */ float Ke;
	/* 0xc */ u_char w;
	/* 0xd */ u_char h;
	/* 0xe */ u_char type;
};

struct CLOTH_DAT { // 0x10
	/* 0x0 */ CLOTH *dat;
	/* 0x4 */ sceVu0FVECTOR *rist_vtx;
	/* 0x8 */ u_char bone_id;
	/* 0x9 */ u_char bone_id2;
	/* 0xa */ u_char sgd_id;
	/* 0xb */ u_char flg;
	/* 0xc */ int b_point;
};

struct CLOTH_CTRL { // 0xa0
	/* 0x00 */ C_PARTICLE *particle;
	/* 0x04 */ SPRING *spring;
	/* 0x08 */ CLOTH_DAT *cdat;
	/* 0x10 */ sceVu0FVECTOR old_bone_pos;
	/* 0x20 */ sceVu0FMATRIX old_w2l;
	/* 0x60 */ u_short p_num;
	/* 0x62 */ u_short spring_num;
	/* 0x64 */ u_short w;
	/* 0x66 */ u_short h;
	/* 0x68 */ u_char reset_flg;
	/* 0x69 */ u_char pad;
	/* 0x70 */ WIND_CTRL w_ctrl;
};

struct COLLISION_CTRL { // 0x140
	/* 0x000 */ sceVu0FMATRIX old_w2c[5];
};

struct ACS_ALPHA { // 0x4
	/* 0x0 */ short int alpha;
	/* 0x2 */ short int stat;
};

struct CMOVE_CTRL { // 0x14
	/* 0x00 */ u_int type;
	/* 0x04 */ u_int furn_id;
	/* 0x08 */ u_int timer;
	/* 0x0c */ u_int req;
	/* 0x10 */ u_char alpha;
};

struct FURNMDL_DAT { // 0x8
	/* 0x0 */ CLOTH_DAT *cdat;
	/* 0x4 */ COLLISION_DAT *collision;
};

struct C_ACS_CTRL { // 0x10
	/* 0x0 */ CLOTH_CTRL *c_cloth_ctrl;
	/* 0x4 */ u_int *addr;
	/* 0x8 */ int mdl_no;
	/* 0xc */ int key;
};

typedef struct { // 0x20
	/* 0x00 */ u_char file_id[4];
	/* 0x04 */ u_int map_flg;
	/* 0x08 */ u_int bone_num;
	/* 0x0c */ u_int trans_num;
	/* 0x10 */ u_int frame_num;
	/* 0x14 */ u_int interp_frame;
	/* 0x18 */ u_int flg;
	/* 0x1c */ u_int si_frame;
} MOT_FILE_HEADER;

typedef struct { // 0x2
	/* 0x0 */ u_char parent_id;
	/* 0x1 */ u_char trans_id;
} MOT_ID_TABLE;

typedef struct { // 0x4
	/* 0x0 */ u_int *frame_addr;
} MOT_ADDR_TABLE;

struct ANI_BUF { // 0x8
	/* 0x0 */ ANI_CODE code;
	/* 0x2 */ u_short cnt;
	/* 0x4 */ u_int stat;
};

struct ANI_CODE_CTRL { // 0x6c
	/* 0x00 */ int playnum;
	/* 0x04 */ int stat;
	/* 0x08 */ int loop_rest;
	/* 0x0c */ int timer;
	/* 0x10 */ ANI_BUF buf[10];
	/* 0x60 */ ANI_CODE *code_head;
	/* 0x64 */ ANI_CODE *code_now;
	/* 0x68 */ ANI_CODE *loop_start;
};

struct RST_DATA { // 0x30
	/* 0x00 */ sceVu0FVECTOR rot;
	/* 0x10 */ sceVu0FVECTOR scale;
	/* 0x20 */ sceVu0FVECTOR trans;
};

struct MOT_CTRL { // 0x38
	/* 0x00 */ u_int *top;
	/* 0x04 */ u_int *dat;
	/* 0x08 */ u_int play_id;
	/* 0x0c */ int cnt;
	/* 0x10 */ int all_cnt;
	/* 0x14 */ int inp_allcnt;
	/* 0x18 */ float inp_cnt;
	/* 0x1c */ float old_mot_cnt;
	/* 0x20 */ int reso;
	/* 0x24 */ int reso_cnt;
	/* 0x28 */ int next_flg;
	/* 0x2c */ int end_flg;
	/* 0x30 */ RST_DATA *rst0;
	/* 0x34 */ RST_DATA *rst1;
};

typedef struct { // 0x20
	/* 0x00 */ u_char file_id[4];
	/* 0x04 */ u_int map_flg;
	/* 0x08 */ u_int key_num;
	/* 0x0c */ u_int frame_num;
	/* 0x10 */ u_int parts_no;
	/* 0x14 */ u_int flg;
	/* 0x18 */ u_char w_name[8];
} MIM_FILE_HEADER;

typedef struct { // 0x8
	/* 0x0 */ u_int *wav_addr;
	/* 0x4 */ u_int *key_addr;
} MIM_ADDR_TABLE;

struct MIME_DAT { // 0x14
	/* 0x00 */ sceVu0FVECTOR *vtx;
	/* 0x04 */ sceVu0FVECTOR *pkt;
	/* 0x08 */ u_int *dat;
	/* 0x0c */ u_int vtx_num;
	/* 0x10 */ u_int p_no;
};

struct WMIM { // 0x30
	/* 0x00 */ u_char *name;
	/* 0x04 */ float mass;
	/* 0x08 */ float Ks;
	/* 0x0c */ float dec;
	/* 0x10 */ sceVu0FVECTOR pos;
	/* 0x20 */ sceVu0FVECTOR gravity;
};

struct WMIM_DAT { // 0x8
	/* 0x0 */ WMIM *dat;
	/* 0x4 */ u_char bone_id;
};

struct WMIM_CTRL { // 0x50
	/* 0x00 */ WMIM_DAT *wdat;
	/* 0x10 */ sceVu0FVECTOR v;
	/* 0x20 */ sceVu0FVECTOR w;
	/* 0x30 */ sceVu0FVECTOR pbak;
	/* 0x40 */ sceVu0FVECTOR old_pos;
};

typedef struct { // 0x8
	/* 0x0 */ u_int *addr;
	/* 0x4 */ u_char *dat;
} MIME_LOAD;

struct MIME_CTRL { // 0x1c
	/* 0x00 */ MIME_DAT *mdat;
	/* 0x04 */ int frame;
	/* 0x08 */ int reso;
	/* 0x0c */ u_short furn_id;
	/* 0x10 */ float cnt;
	/* 0x14 */ u_char weight_id;
	/* 0x15 */ u_char parts_id;
	/* 0x16 */ u_char loop;
	/* 0x17 */ u_char stat;
	/* 0x18 */ u_char rev;
	/* 0x19 */ u_char flg;
	/* 0x1a */ u_char pad;
};

struct NECK_CTRL_WORK { // 0xd0
	/* 0x00 */ sceVu0FMATRIX neck_lw;
	/* 0x40 */ sceVu0FMATRIX neck_p_lw;
	/* 0x80 */ sceVu0FMATRIX chest_lw;
	/* 0xc0 */ int flg;
};

struct ANI_CTRL { // 0x240
	/* 0x000 */ ANI_CODE_CTRL anm;
	/* 0x06c */ MOT_CTRL mot;
	/* 0x0b0 */ sceVu0FVECTOR pbak;
	/* 0x0c0 */ sceVu0FVECTOR rbak;
	/* 0x0d0 */ u_int *mdl_p;
	/* 0x0d4 */ u_int *pk2_p;
	/* 0x0d8 */ u_int *mpk_p;
	/* 0x0dc */ HeaderSection *base_p;
	/* 0x0e0 */ u_int *anm_p;
	/* 0x0e4 */ u_int *mtop;
	/* 0x0e8 */ u_int *mdat;
	/* 0x0ec */ u_int *tanm_p;
	/* 0x0f0 */ u_int *bwc_p;
	/* 0x0f4 */ MIME_CTRL *mim;
	/* 0x0f8 */ MIME_CTRL *bgmim;
	/* 0x0fc */ WMIM_CTRL *wmim;
	/* 0x100 */ CLOTH_CTRL *cloth_ctrl;
	/* 0x104 */ COLLISION_CTRL *collision_ctrl;
	/* 0x108 */ u_int mot_num;
	/* 0x10c */ u_int mim_num;
	/* 0x110 */ u_int bg_num;
	/* 0x114 */ u_int wmim_num;
	/* 0x118 */ u_short ftype;
	/* 0x11a */ u_short interp_flg;
	/* 0x11c */ void *pkt_p;
	/* 0x120 */ int use;
	/* 0x124 */ int mdl_no;
	/* 0x128 */ int anm_no;
	/* 0x130 */ sceVu0FVECTOR eye_rots[2];
	/* 0x150 */ sceVu0FVECTOR neck_rot;
	/* 0x160 */ sceVu0FVECTOR chest_rot;
	/* 0x170 */ NECK_CTRL_WORK neck_work;
};

struct MANMDL_DAT { // 0x18
	/* 0x00 */ float scale;
	/* 0x04 */ u_char head_id;
	/* 0x05 */ u_char neck_id;
	/* 0x06 */ u_char chest_id;
	/* 0x07 */ u_char waist_id;
	/* 0x08 */ u_char hip_id;
	/* 0x09 */ u_char leg_id;
	/* 0x0c */ WMIM_DAT *wdat;
	/* 0x10 */ CLOTH_DAT *cdat;
	/* 0x14 */ COLLISION_DAT *collision;
};

typedef struct { // 0x10
	/* 0x0 */ u_int *mdl_p;
	/* 0x4 */ u_int flg;
	/* 0x8 */ u_int mdl_no;
	/* 0xc */ int offset;
} ENE_VRAM_CTRL;

typedef struct { // 0x10
	/* 0x0 */ u_int pak_num;
	/* 0x4 */ u_int map_flg;
	/* 0x8 */ u_int pad[2];
} MANMPK_HEADER;

struct ENE_CHILD_CTRL { // 0xc
	/* 0x0 */ float r;
	/* 0x4 */ float ry;
	/* 0x8 */ u_char bone_id;
	/* 0x9 */ u_char flg;
};

typedef struct { // 0xc
	/* 0x0 */ u_char map_flg;
	/* 0x2 */ u_short anm_no;
	/* 0x4 */ u_int *anm_p;
	/* 0x8 */ u_char pkt_no;
} ANI_MDL_CTRL;

typedef struct { // 0x2
	/* 0x0 */ u_char buf_no;
	/* 0x1 */ u_char pkt_no;
} ENE_PKT_CTRL;

typedef struct { // 0x2
	/* 0x0 */ u_char msn_no;
	/* 0x1 */ u_char step;
} MSN_PLYR_INIT;

struct ENE_COLLISION { // 0x8
	/* 0x0 */ ANI_CTRL *ani_ctrl;
	/* 0x4 */ u_short mdl_no;
};

typedef float NECK_SPD;

typedef struct { // 0x8
	/* 0x0 */ float neck_lr_limit;
	/* 0x4 */ NECK_SPD *neck_spd;
} NECK_ACS_DAT;

typedef u_long MORPH_CODE;

struct ANI_TBL { // 0x10
	/* 0x0 */ ANI_CODE **ani;
	/* 0x4 */ MORPH_CODE **morph;
	/* 0x8 */ float neck_lr_limit;
	/* 0xc */ NECK_SPD *neck_spd;
};

enum _SND_BANK_STATUS {
	SND_BANK_NOT_USE = 0,
	SND_BANK_NOT_READY = 1,
	SND_BANK_USE = 2,
	SND_BANK_ILLEGAL_SOUND_NO = 3,
	SND_BANK_OK = 4
};

typedef _SND_BANK_STATUS SND_BANK_STATUS;

struct _LOOK_AT_PARAM { // 0x20
	/* 0x00 */ sceVu0FVECTOR pos;
	/* 0x10 */ float eye_spd;
	/* 0x14 */ float head_spd;
	/* 0x18 */ float chest_spd;
	/* 0x1c */ int enable;
};

typedef _LOOK_AT_PARAM LOOK_AT_PARAM;

enum _LOOK_TARGET_PRIORITY_MIO {
	LTP_MIO_ATTACK_ENEMY = 0,
	LTP_MIO_ENEMY = 1,
	LTP_MIO_EVENT_OBJ = 2,
	LTP_DUMMY_MIO_TIRED = 3,
	LTP_MIO_SPOT_LIGHT = 4,
	LTP_MIO_KAIDAN = 5,
	LTP_MIO_DOOR = 6,
	LTP_MIO_MAYU = 7,
	LTP_MIO_LEAST = -1
};

typedef _LOOK_TARGET_PRIORITY_MIO LOOK_TARGET_PRIORITY_MIO;

struct CPLYR_SND_BUF_PLAY : /* 0x0 */ CSND_BUF_PLAY { // 0x4
	CPLYR_SND_BUF_PLAY& operator=();
	CPLYR_SND_BUF_PLAY();
	CPLYR_SND_BUF_PLAY();
	void Play();
};

enum _LOOK_TARGET_PRIORITY_MAYU {
	LTP_MAYU_ATTACK_ENEMY = 0,
	LTP_MAYU_ENEMY = 1,
	LTP_MAYU_EVENT_OBJ = 2,
	LTP_MAYU_MIO_FAR = 3,
	LTP_DUMMY_TIRED = 4,
	LTP_MAYU_MIO_NEAR = 5,
	LTP_MAYU_BACKGROUND = 6,
	LTP_MAYU_ITEM = 7,
	LTP_MAYU_OBJ = 8,
	LTP_MAYU_MIO_MIDDLE = 9,
	LTP_MAYU_KAIDAN = 10,
	LTP_MAYU_LEAST = -1
};

typedef _LOOK_TARGET_PRIORITY_MAYU LOOK_TARGET_PRIORITY_MAYU;

struct CSIS_SND_BUF_PLAY : /* 0x0 */ CSND_BUF_PLAY { // 0x4
	CSIS_SND_BUF_PLAY& operator=();
	CSIS_SND_BUF_PLAY();
	CSIS_SND_BUF_PLAY();
	void Play();
};

struct fixed_array_base<unsigned char,10,unsigned char[10]> { // 0xa
protected:
	/* 0x0 */ u_char m_aData[10];
	
public:
	fixed_array_base<unsigned char,10,unsigned char[10]>& operator=();
	fixed_array_base();
protected:
	fixed_array_base();
public:
	u_char& operator[]();
	u_char& operator[]();
	u_char* data();
	u_char* begin();
	u_char* end();
	void fill();
	size_t size();
	bool empty();
};

struct fixed_array<unsigned char,10> : /* 0x0 */ fixed_array_base<unsigned char,10,unsigned char[10]> { // 0xa
};

struct fixed_array_base<float[4],10,float[10][4]> { // 0xa0
protected:
	/* 0x00 */ float m_aData[10][4];
	
public:
	fixed_array_base<float[4],10,float[10][4]>& operator=();
	fixed_array_base();
protected:
	fixed_array_base();
public:
	float&[4] operator[]();
	float&[4] operator[]();
	sceVu0FVECTOR* data();
	sceVu0FVECTOR* begin();
	sceVu0FVECTOR* end();
	void fill();
	size_t size();
	bool empty();
};

struct fixed_array<float[4],10> : /* 0x00 */ fixed_array_base<float[4],10,float[10][4]> { // 0xa0
};

typedef struct { // 0xb0
	/* 0x00 */ u_char num;
	/* 0x01 */ fixed_array<unsigned char,10> result;
	/* 0x10 */ fixed_array<float[4],10> p;
} PP_JUDGE;

enum _ENE_RELASE_TYPE {
	ENE_RELEASE_NO_RELEASE = 0,
	ENE_RELEASE_TAKE_PICT = 1,
	ENE_RELEASE_TIME_OUT = 2,
	ENE_RELEASE_DIST = 3,
	ENE_RELEASE_DEAD = 4,
	ENE_RELEASE_REQ = 5,
	ENE_RELEASE_MAX_NO = 6,
	ENE_RELEASE_FORCE_DWORD = -1
};

typedef _ENE_RELASE_TYPE ENE_RELASE_TYPE;

enum _SHUTTER_CHANCE_STATE {
	SHUTTER_CHANCE_NONE = 0,
	SHUTTER_CHANCE_NORMAL = 1,
	SHUTTER_CHANCE_SP = 2,
	SHUTTER_CHANCE_STATE_MAX = 3,
	SHUTTER_CHANCE_FORCE_DWORD = -1
};

typedef _SHUTTER_CHANCE_STATE SHUTTER_CHANCE_STATE;

struct CWrkVariable<char,0,60> { // 0x2
private:
	/* 0x0 */ char mValue;
	/* 0x1 */ char mAdd;
	
public:
	CWrkVariable<char,0,60>& operator=();
	CWrkVariable();
	CWrkVariable();
	void Init();
	void SetMax();
	void SetMin();
	char GetMax();
	char GetMin();
	char GetWidth();
	void SetAddVal();
	void Set();
	void Work();
	int LoopWork();
	char Get();
	int GetState();
};

struct CSpiritGage { // 0xc
private:
	/* 0x0 */ int mPercent;
	/* 0x4 */ CWrkVariable<char,0,60> mAlpha;
	/* 0x8 */ int mFlg;
	static CMIN_MAX<float> aDmgMultipleTbl[3];
	
public:
	CSpiritGage& operator=();
	CSpiritGage();
	CSpiritGage();
	void Init();
	void FadeIn();
	void FadeOut();
	int GetPercent();
	void Work();
	float CalcDamageRate();
	void Draw();
};

enum _OL_LOAD_ERR {
	OL_LOAD_ERR_OK = 0,
	OL_LOAD_ERR_MEMORY_LACK = 1,
	OL_LOAD_ERR_WORK_LACK = 2,
	OL_LOAD_ERR_FORCE_DWORD = -1
};

typedef _OL_LOAD_ERR OL_LOAD_ERR;

enum OL_LOAD_READY {
	OL_LOAD_READY_NOT_READY = 0,
	OL_LOAD_READY_READY = 1,
	OL_LOAD_READY_READY_FIRST = 3,
	OL_LOAD_READY_WAIT_MEMORY = 4
};

struct OL_LOAD_ONE { // 0x10
private:
	/* 0x0:0 */ unsigned int mapping : 1;
	/* 0x0:1 */ unsigned int load_end : 1;
	/* 0x4 */ int cnt;
	/* 0x8 */ void *adrs;
	/* 0xc */ int file_no;
	
public:
	OL_LOAD_ONE& operator=();
	OL_LOAD_ONE();
	OL_LOAD_ONE();
	void Init();
	int Main();
	int Release();
	void CntUp();
	OL_LOAD_ERR Req();
	OL_LOAD_READY IsReady();
	int GetFileNo();
	void Print();
};

struct fixed_array_base<OL_LOAD_ONE,30,OL_LOAD_ONE[30]> { // 0x1e0
protected:
	/* 0x000 */ OL_LOAD_ONE m_aData[30];
	
public:
	fixed_array_base<OL_LOAD_ONE,30,OL_LOAD_ONE[30]>& operator=();
	fixed_array_base();
protected:
	fixed_array_base();
public:
	OL_LOAD_ONE& operator[]();
	OL_LOAD_ONE& operator[]();
	OL_LOAD_ONE* data();
	OL_LOAD_ONE* begin();
	OL_LOAD_ONE* end();
	void fill();
	size_t size();
	bool empty();
};

struct fixed_array<OL_LOAD_ONE,30> : /* 0x000 */ fixed_array_base<OL_LOAD_ONE,30,OL_LOAD_ONE[30]> { // 0x1e0
};

struct OL_LOAD { // 0x1e0
private:
	/* 0x000 */ fixed_array<OL_LOAD_ONE,30> one;
	
public:
	OL_LOAD& operator=();
	OL_LOAD();
	OL_LOAD();
	void Init();
	void Main();
	OL_LOAD_READY IsReady();
	OL_LOAD_ERR Req();
	void Clear();
	void Print();
};

enum ITEM_MODEL_PACK_ORDER {
	ITEM_MODEL_PACK_ORDER_SGD = 0,
	ITEM_MODEL_PACK_ORDER_TM2 = 1,
	ITEM_MODEL_PACK_ORDER_BWC = 2
};

typedef OL_LOAD_ERR MMANAGE_ERR;

enum _ENE_STATUS {
	ENE_STATUS_NO_USE = 0,
	ENE_STATUS_LOADING = 1,
	ENE_STATUS_WAIT_ANI_CTRL = 2,
	ENE_STATUS_READY = 3,
	ENE_STATUS_ACT = 4,
	ENE_STATUS_RELEASE = 5,
	ENE_STATUS_FORCE_DWORD = -1
};

typedef _ENE_STATUS ENE_STATUS;

typedef struct { // 0x34
	/* 0x00 */ u_char attr;
	/* 0x01 */ u_char alp;
	/* 0x02 */ u_short mdl_no;
	/* 0x04 */ u_short anm_no;
	/* 0x06 */ u_short dmg;
	/* 0x08 */ u_short hit_rng;
	/* 0x0a */ u_short cond;
	/* 0x0c */ u_int blifetime;
	/* 0x10 */ u_short chg_cnt;
	/* 0x14 */ float fstmove;
	/* 0x18 */ float fstrot;
	/* 0x1c */ float fdist;
	/* 0x20 */ float fmove;
	/* 0x24 */ float frot;
	/* 0x28 */ float ndist;
	/* 0x2c */ float nmove;
	/* 0x30 */ float nrot;
} FLY_DATA;

typedef struct { // 0x1460
	/* 0x0000 */ u_short sta;
	/* 0x0004 */ void *ew;
	/* 0x0008 */ FLY_DATA *dat;
	/* 0x000c */ PLCMN_WRK *target;
	/* 0x0010 */ GRA3DLIGHTDATA light;
	/* 0x13b0 */ float npos[4];
	/* 0x13c0 */ float opos[4];
	/* 0x13d0 */ float nrot[4];
	/* 0x13e0 */ float tpos[4];
	/* 0x13f0 */ float trot[4];
	/* 0x1400 */ float spd;
	/* 0x1404 */ u_int life_time;
	/* 0x1408 */ u_int life_cnt;
	/* 0x140c */ float trace_ang;
	/* 0x1410 */ u_int trace_time;
	/* 0x1414 */ u_short now_cnt;
	/* 0x1416 */ u_char alp;
	/* 0x1418 */ void *efpw;
	/* 0x141c */ void *ani_ctrl;
	/* 0x1420 */ int mdl_p;
	/* 0x1424 */ int mdl_no;
	/* 0x1428 */ int anm_p;
	/* 0x142c */ int anm_no;
	/* 0x1430 */ int init_flow;
	/* 0x1434 */ float adjp_cnt;
	/* 0x1438 */ float adjp_span;
	/* 0x143c */ float adjp_add;
	/* 0x1440 */ float adjp_ang;
	/* 0x1450 */ float adjv[4];
} FLY_WRK;

struct OLD_ENEALG_WRK { // 0xd0
	/* 0x00 */ u_char idx;
	/* 0x01 */ u_char job_no;
	/* 0x02 */ u_char pos_no;
	/* 0x04 */ float wait_time;
	/* 0x08 */ float loop[2];
	/* 0x10 */ u_char pos_no_tr[2];
	/* 0x14 */ float loop_tr[2];
	/* 0x20 */ P_INT comm_add;
	/* 0x28 */ long int comm_add_top;
	/* 0x30 */ u_long stack_b[16];
	/* 0xb0 */ u_long *stack_p;
	/* 0xb4 */ u_char flag;
	/* 0xb5 */ u_char cnt[2];
	/* 0xb7 */ u_char branch;
	/* 0xb8 */ u_char bjob_no;
	/* 0xb9 */ u_char bpos_no;
	/* 0xbc */ float bwait_time;
	/* 0xc0 */ P_INT bcomm_add;
	/* 0xc8 */ long int bcomm_add_top;
};

struct ENEALG_WRK { // 0xd0
	/* 0x00 */ long int comm_add_top;
	/* 0x08 */ u_long stack_b[16];
	/* 0x88 */ u_long *stack_p;
	/* 0x90 */ long int bcomm_add_top;
	/* 0x98 */ P_INT bcomm_add;
	/* 0xa0 */ P_INT comm_add;
	/* 0xa8 */ float wait_time;
	/* 0xac */ float loop[2];
	/* 0xb4 */ float loop_tr[2];
	/* 0xbc */ float bwait_time;
	/* 0xc0 */ u_char pos_no_tr[2];
	/* 0xc2 */ u_char cnt[2];
	/* 0xc4 */ u_char idx;
	/* 0xc5 */ u_char job_no;
	/* 0xc6 */ u_char pos_no;
	/* 0xc7 */ u_char flag;
	/* 0xc8 */ u_char branch;
	/* 0xc9 */ u_char bjob_no;
	/* 0xca */ u_char bpos_no;
};

struct _ENE_DAT_COMMON { // 0x38
	/* 0x00 */ int adpcm_no;
	/* 0x04 */ float px;
	/* 0x08 */ float py;
	/* 0x0c */ float pz;
	/* 0x10 */ int se_no;
	/* 0x14 */ u_short mdl_no;
	/* 0x16 */ u_short anm_no;
	/* 0x18 */ u_short alg_no;
	/* 0x1a */ u_short point_base;
	/* 0x1c */ u_short dir;
	/* 0x1e */ u_char neck_ctl;
	/* 0x20 */ u_int attr;
	/* 0x24 */ float near;
	/* 0x28 */ float far;
	/* 0x2c */ u_char blg_r;
	/* 0x2d */ u_char blg_g;
	/* 0x2e */ u_char blg_b;
	/* 0x2f */ u_char balp;
	/* 0x30 */ u_char ghost_list_no;
	/* 0x31 */ u_char ghost_list_no_sp;
	/* 0x32 */ u_char def_type[2];
	/* 0x34 */ u_char def_size[2];
	/* 0x36 */ u_char dih_type;
};

typedef _ENE_DAT_COMMON ENE_DAT_COMMON;

struct _SP_TIMING { // 0x2
	/* 0x0 */ unsigned char start_frame;
	/* 0x1 */ unsigned char end_frame;
};

typedef _SP_TIMING SP_TIMING;

typedef struct { // 0x74
	/* 0x00 */ ENE_DAT_COMMON cmn;
	/* 0x38 */ u_short dst_gthr;
	/* 0x3a */ u_char way_gthr;
	/* 0x3b */ u_char atk_ptn;
	/* 0x3c */ float atk_rng;
	/* 0x40 */ float hit_rng;
	/* 0x44 */ float chance_rng;
	/* 0x48 */ int dead_adpcm;
	/* 0x4c */ short int hit_adjx;
	/* 0x4e */ u_char hint_pic;
	/* 0x4f */ u_char aura_alp;
	/* 0x50 */ u_short trgt_chg;
	/* 0x52 */ u_short hp;
	/* 0x54 */ u_short atk_p;
	/* 0x56 */ u_short atk_h;
	/* 0x58 */ u_char atk;
	/* 0x59 */ u_char atk_tm;
	/* 0x5a */ u_char wspd;
	/* 0x5b */ u_char rspd;
	/* 0x5c */ u_char rotsp;
	/* 0x5e */ u_short hitbk;
	/* 0x60 */ u_int hp_recv_wait;
	/* 0x64 */ float hp_recv_vol;
	/* 0x68 */ short int fly_type[3];
	/* 0x6e */ short int child_ene[3];
} ENE_DAT;

typedef struct { // 0x4c
	/* 0x00 */ ENE_DAT_COMMON cmn;
	/* 0x38 */ u_char dat_no;
	/* 0x39 */ u_char soul_no;
	/* 0x3a */ u_short adpcm_tm;
	/* 0x3c */ short int next;
	/* 0x3e */ u_short chgattr;
	/* 0x40 */ float rng;
	/* 0x44 */ short int time;
	/* 0x48 */ int se_foot;
} AENE_DAT;

struct CWaitVariable<short int> { // 0x2
private:
	/* 0x0 */ short int mValue;
	
public:
	CWaitVariable<short int>& operator=();
	CWaitVariable();
	CWaitVariable();
	void Reset();
	void Wait();
	int Work();
	short int Get();
};

struct ENE_WRK { // 0x490
	/* 0x000 */ float bep[4];
	/* 0x010 */ float neck_rot[4];
	/* 0x020 */ float adjp[4];
	/* 0x030 */ MPOS mpos;
	/* 0x0d0 */ ENEALG_WRK alg;
	/* 0x1a0 */ PP_JUDGE ppj;
	/* 0x250 */ MOVE_BOX mbox;
	/* 0x2f0 */ CSpiritGage spirit_gage;
	/* 0x300 */ STATUS_DAT st;
	/* 0x340 */ ENE_DAT *dat;
	/* 0x344 */ AENE_DAT *aie;
	/* 0x348 */ float dist_p_e[2];
	/* 0x350 */ float dist_p_e_o[2];
	/* 0x358 */ float dist_c_e;
	/* 0x35c */ u_int hp_recv_tm;
	/* 0x360 */ float hp_recv_pt;
	/* 0x364 */ float reso;
	/* 0x368 */ float wlk_reso_chg;
	/* 0x36c */ float wlk_reso;
	/* 0x370 */ PLCMN_WRK *target;
	/* 0x374 */ float tr_frate;
	/* 0x378 */ float tr_common;
	/* 0x37c */ void *pdf;
	/* 0x380 */ void *pdf2;
	/* 0x384 */ float d_pd;
	/* 0x388 */ float d_pd2;
	/* 0x38c */ float d_pda;
	/* 0x390 */ float d_pda2;
	/* 0x394 */ float d_pdc;
	/* 0x398 */ float d_pdc2;
	/* 0x39c */ float d_mpd;
	/* 0x3a0 */ float d_mpd2;
	/* 0x3a4 */ void *nee;
	/* 0x3a8 */ float nee_rate;
	/* 0x3ac */ float nee_size;
	/* 0x3b0 */ u_int nee_col;
	/* 0x3b4 */ void *efpw;
	/* 0x3b8 */ float effw;
	/* 0x3bc */ float slow_hb_reso;
	/* 0x3c0 */ int stream_id;
	/* 0x3c4 */ int status;
	/* 0x3c8 */ void *ani_ctrl_p;
	/* 0x3cc */ u_int attr;
	/* 0x3d0 */ float directionaldiffuse[4];
	/* 0x3e0 */ ENE_DAT_COMMON *cmn_dat;
	/* 0x3e4 */ int anm_jibaku_p;
	/* 0x3e8 */ int se_bank_jibaku_no;
	/* 0x3ec */ int se_bank_no;
	/* 0x3f0 */ FLY_WRK *fw[3][5];
	/* 0x42c */ void *wrkp[3];
	/* 0x438 */ ENE_RELASE_TYPE rel_type;
	/* 0x43c */ CWaitVariable<short int> adpcm_tm;
	/* 0x43e */ short int reso_tm;
	/* 0x440 */ u_short atk_tm;
	/* 0x442 */ u_short atk_type;
	/* 0x444 */ short int combo_time;
	/* 0x446 */ u_short tr_time;
	/* 0x448 */ u_short tr2_cnt;
	/* 0x44a */ u_short in_finder_tm;
	/* 0x44c */ short int dat_no;
	/* 0x44e */ short int fp[2];
	/* 0x452 */ short int dist_in_tm[2];
	/* 0x456 */ short int stm_slow;
	/* 0x458 */ short int stm_view;
	/* 0x45a */ short int mahi_total_time;
	/* 0x45c */ short int mahi_cnt;
	/* 0x45e */ short int mahi_one_stop_time;
	/* 0x460 */ short int mahi_one_act_time;
	/* 0x462:0 */ unsigned char bWithSearcher : 1;
	/* 0x463 */ u_char anime_no;
	/* 0x464 */ u_char target_n;
	/* 0x465 */ u_char tr_max;
	/* 0x466 */ u_char tr2_rate_alg;
	/* 0x467 */ u_char tr2_base;
	/* 0x468 */ u_char tr2_freq;
	/* 0x469 */ u_char tr2_add;
	/* 0x46a */ u_char tr_rate;
	/* 0x46b */ u_char tr_rate_in;
	/* 0x46c */ u_char tr_rate_out;
	/* 0x46d */ u_char tr_rate_alg;
	/* 0x46e */ u_char tr_rate_alg_sp;
	/* 0x46f */ u_char ppj_check;
	/* 0x470 */ u_char type;
	/* 0x471 */ u_char act_no;
	/* 0x472 */ u_char recog_tm;
	/* 0x473 */ u_char room_no;
	/* 0x474 */ u_char wlk_reso_frm;
	/* 0x475 */ u_char wlk_reso_wait;
	/* 0x476 */ char act_flg;
	/* 0x477 */ char slow_hb_wait_frame;
	/* 0x478 */ char slow_hb_frame;
	/* 0x47c */ int ani_reso;
	/* 0x480 */ char combo_counter;
	/* 0x481 */ char combo_sb_counter;
};

enum GPHASE_ENUM {
	GPHASE_CONTINUE = 0,
	GPHASE_END = 1,
	GPHASE_NOFRAME = 2
};

enum GPHASE_ID_ENUM {
	GID_SUPER = 0,
	GID_BOOT_INIT = 1,
	GID_BOOT_PADCHECK = 2,
	GID_LANGDATA_CHECK = 3,
	GID_LANGSEL_MAIN = 4,
	GID_AUTOLOAD_MAIN = 5,
	GID_UBI_MODE = 6,
	GID_OUTGAME_MAIN = 7,
	GID_STORY_MAIN = 8,
	GID_GAMEOVER_MENU = 9,
	GID_ENDING_MOVIE = 10,
	GID_GAMERESULT = 11,
	GID_CLEARMENU = 12,
	GID_SOFTRESETMAIN = 13,
	GID_DEBUG_MENU = 14,
	GID_TECMO_MODE = 15,
	GID_PROJECT_MODE = 16,
	GID_TITLE_MODE = 17,
	GID_TITLE_MOVIE_MODE = 18,
	GID_STORY_NOWLOADING = 19,
	GID_STORY_NORMAL = 20,
	GID_STORY_DAMAGE = 21,
	GID_STORY_DOOR_OPEN = 22,
	GID_STORY_DEBUG = 23,
	GID_STORY_DEBUG_CAM = 24,
	GID_STORY_PAUSE = 25,
	GID_STORY_PAUSE_MISSION = 26,
	GID_STORY_MENU = 27,
	GID_STORY_MAP = 28,
	GID_STORY_MISSION_ST = 29,
	GID_STORY_MISSION_RESULT = 30,
	GID_STORY_GAME_OVER_PRE = 31,
	GID_STORY_GAME_OVER = 32,
	GID_STORY_SCENE = 33,
	GID_STORY_MOVIE = 34,
	GID_STORY_EFFECT = 35,
	GID_EVENTMSG_DISP = 36,
	GID_EVENTFILE_DISP = 37,
	GID_STORY_PHOTO = 38,
	GID_STORY_ENE_DEAD = 39,
	GID_STORY_PUZZLE = 40,
	GID_STORY_SAVEPOINT = 41,
	GID_STORY_MOVIE_ROOM_SEL = 42,
	GID_GAMEOVER_MENU_TOP = 43,
	GID_GAMEOVER_MENU_LOAD = 44,
	GID_GAMEOVER_MENU_ALBUM = 45,
	GID_ENDING_NORMAL1 = 46,
	GID_ENDING_NORMAL2 = 47,
	GID_ENDING_HARD = 48,
	GID_GAMERESULT_TOP = 49,
	GID_CLEARMENU_TOP = 50,
	GID_CLEARMENU_SAVE = 51,
	GID_CLEARMENU_ALBUM = 52,
	GID_TITLE_TOP = 53,
	GID_TITLE_MENU = 54,
	GID_TITLE_NEWGAME = 55,
	GID_TITLE_LOADGAME = 56,
	GID_TITLE_SETUP = 57,
	GID_TITLE_ALBUM = 58,
	GID_TITLE_GALLERY = 59,
	GID_TITLE_OPTION = 60,
	GID_TITLE_FRAMERATE_SEL = 61,
	GID_TITLE_CHAPTER_SEL = 62,
	GID_TITLE_MOVE_MOVIE = 63,
	GID_STORY_LOAD_MISSION = 64,
	GID_STORY_LOAD_MISSION_EVENT = 65,
	GID_STORY_LOAD_MISSION_SAVE = 66,
	GID_STORY_GAMEOVER_EFF = 67,
	GID_STORY_GAMEOVER_FADE = 68,
	GID_STORY_GAMEOVER_MOVIE = 69,
	GID_STORY_SCENE_PRELOAD = 70,
	GID_STORY_SCENE_MAIN = 71,
	GID_STORY_MOVIE_PRELOAD = 72,
	GID_STORY_MOVIE_MAIN = 73,
	GID_PUZZLE_INCONF = 74,
	GID_PUZZLE_CROSSFADE = 75,
	GID_PUZZLE_HINA = 76,
	GID_PUZZLE_ROKU = 77,
	GID_PUZZLE_KAZA = 78,
	GID_PUZZLE_KAZA2 = 79,
	GID_PUZZLE_KAI1 = 80,
	GID_PUZZLE_KAI2 = 81,
	GID_SAVEPOINT_FADEIN = 82,
	GID_SAVEPOINT_MAIN = 83,
	GID_SAVEPOINT_FADEOUT = 84,
	GID_TITLE_SETUPMENU = 85,
	GID_TITLE_MISSION = 86,
	GID_SAVEPOINT_TOP = 87,
	GID_SAVEPOINT_SAVE = 88,
	GID_SAVEPOINT_ALBUM = 89,
	GID_MISSION_SEL = 90,
	GID_MISSION_CAM = 91,
	GID_MISSION_ALBUM = 92,
	GID_MISSION_SAVE = 93,
	GPHASE_ID_NONE = -1
};

struct POINT_T { // 0x8
	/* 0x0 */ float x;
	/* 0x4 */ float y;
};

struct LINE_T { // 0x10
	/* 0x0 */ POINT_T a;
	/* 0x8 */ POINT_T b;
};

struct FUYU_GHOST_ONE_DATA { // 0x6
	/* 0x0 */ short int mGhostLabel[3];
private:
	static int mAppearNum;
	
public:
	FUYU_GHOST_ONE_DATA& operator=();
	FUYU_GHOST_ONE_DATA();
	FUYU_GHOST_ONE_DATA();
	int FuyuIsReady();
	int FuyuIsDead();
	int FuyuLoadReq();
	void FuyuActReq();
	void FuyuReleaseReq();
	static void Init(/* parameters unknown */);
	static void SetAppearNum(/* parameters unknown */);
};

struct FUYU_GHOST_DATA { // 0x8
	/* 0x0 */ FUYU_GHOST_ONE_DATA *pOne;
	/* 0x4 */ int iNum;
};

struct BIT_FLAGS<66> { // 0xc
protected:
	/* 0x0 */ int flag_32[3];
	
public:
	BIT_FLAGS<66>& operator=();
	BIT_FLAGS();
	BIT_FLAGS();
	void AllDown();
	void AllUp();
	int GetUpNum();
	void FlgUp();
	void FlgDown();
	int IsUp();
};

struct CWaitVariable<int> { // 0x4
private:
	/* 0x0 */ int mValue;
	
public:
	CWaitVariable<int>& operator=();
	CWaitVariable();
	CWaitVariable();
	void Reset();
	void Wait();
	int Work();
	int Get();
};

struct CFEneEntry { // 0x20
	/* 0x00 */ BIT_FLAGS<66> mAreaLockFlg;
private:
	/* 0x0c */ char mMode;
	/* 0x0d */ char mApparType;
	/* 0x0e */ char mNowAreaNo;
	/* 0x0f */ char mLockCnt;
	/* 0x10:0 */ unsigned char mCamChangeFlg : 1;
	/* 0x10:1 */ unsigned char mMultiEnemyDisable : 1;
	/* 0x14 */ FUYU_GHOST_ONE_DATA *mpFD;
	/* 0x18 */ CWaitVariable<int> mWaitCnt;
	/* 0x1c */ int mWaitSave;
	static short int aResionAreaTbl[0];
	static FUYU_GHOST_DATA aFuyuGhostTbl[6][11];
	static float aFuyuAppearTbl[66][3][4];
	
public:
	CFEneEntry& operator=();
	CFEneEntry();
	CFEneEntry();
	void Init();
	void Lock();
	void Unlock();
	void AreaChange();
	int Release();
	void Work();
	void CamChangeFlg();
	void MultiAppearDisable();
	void MultiAppearEnable();
private:
	int IsValidPosData();
	sceVu0FVECTOR* GetNearestAppearPos();
	FUYU_GHOST_ONE_DATA* GetPbyRand();
	int GetResionId();
};

enum CD_FILE_DAT {
	COMP_TES_PKS = 0,
	COMP_TES_CMP = 1,
	LOGO_PK2 = 2,
	ZERO_LOGO_PK2 = 3,
	VRAM_TEX_PK2 = 4,
	VRAM_TEX_F_PK2 = 5,
	VRAM_TEX_G_PK2 = 6,
	VRAM_TEX_S_PK2 = 7,
	VRAM_TEX_I_PK2 = 8,
	N_FINDER_PK2 = 9,
	N_FINDER_F_PK2 = 10,
	N_FINDER_G_PK2 = 11,
	N_FINDER_S_PK2 = 12,
	N_FINDER_I_PK2 = 13,
	N_LIFE_PK2 = 14,
	N_LIFE_F_PK2 = 15,
	N_LIFE_G_PK2 = 16,
	N_LIFE_S_PK2 = 17,
	N_LIFE_I_PK2 = 18,
	OUTGAME_PK2 = 19,
	SCREENSAVER_PK2 = 20,
	SCREENSAVER2_PK2 = 21,
	OS_R00_TM2 = 22,
	OS_R04_TM2 = 23,
	OK_R04_TM2 = 24,
	PHT_HINT_GET_000_TM2 = 25,
	PHT_ETC_GET_000_PK2 = 26,
	MENU_BG_PK2 = 27,
	MENU_BG_F_PK2 = 28,
	MENU_BG_G_PK2 = 29,
	MENU_BG_S_PK2 = 30,
	MENU_BG_I_PK2 = 31,
	MENU_PLAYDATA_PK2 = 32,
	MENU_PLAYDATA_F_PK2 = 33,
	MENU_PLAYDATA_G_PK2 = 34,
	MENU_PLAYDATA_S_PK2 = 35,
	MENU_PLAYDATA_I_PK2 = 36,
	MENU_STATUS_PK2 = 37,
	MENU_STATUS_F_PK2 = 38,
	MENU_STATUS_G_PK2 = 39,
	MENU_STATUS_S_PK2 = 40,
	MENU_STATUS_I_PK2 = 41,
	MENU_TOUROU_PK2 = 42,
	MENU_ITEM_PK2 = 43,
	MENU_ITEM_F_PK2 = 44,
	MENU_ITEM_G_PK2 = 45,
	MENU_ITEM_S_PK2 = 46,
	MENU_ITEM_I_PK2 = 47,
	MENU_PHOTO_PK2 = 48,
	MENU_PHOTO_F_PK2 = 49,
	MENU_PHOTO_G_PK2 = 50,
	MENU_PHOTO_S_PK2 = 51,
	MENU_PHOTO_I_PK2 = 52,
	MENU_FILE_CMN_PK2 = 53,
	MENU_FILE_CMN_F_PK2 = 54,
	MENU_FILE_CMN_G_PK2 = 55,
	MENU_FILE_CMN_S_PK2 = 56,
	MENU_FILE_CMN_I_PK2 = 57,
	MENU_FILE_TOP_PK2 = 58,
	MENU_FILE_TOP_F_PK2 = 59,
	MENU_FILE_TOP_G_PK2 = 60,
	MENU_FILE_TOP_S_PK2 = 61,
	MENU_FILE_TOP_I_PK2 = 62,
	MENU_FILE_PHOTO_PK2 = 63,
	MENU_FILE_TXT_PK2 = 64,
	MENU_FILE_MAP_PK2 = 65,
	MENU_MAP_PK2 = 66,
	MENU_MAP_F_PK2 = 67,
	MENU_MAP_G_PK2 = 68,
	MENU_MAP_S_PK2 = 69,
	MENU_MAP_I_PK2 = 70,
	MENU_RADIO_PK2 = 71,
	MENU_RADIO_F_PK2 = 72,
	MENU_RADIO_G_PK2 = 73,
	MENU_RADIO_S_PK2 = 74,
	MENU_RADIO_I_PK2 = 75,
	MENU_MEMO_PK2 = 76,
	MENU_MEMO_F_PK2 = 77,
	MENU_MEMO_G_PK2 = 78,
	MENU_MEMO_S_PK2 = 79,
	MENU_MEMO_I_PK2 = 80,
	MENU_CAMERA_PK2 = 81,
	MENU_CAMERA_F_PK2 = 82,
	MENU_CAMERA_G_PK2 = 83,
	MENU_CAMERA_S_PK2 = 84,
	MENU_CAMERA_I_PK2 = 85,
	MENU_CAMERA_EDT_PK2 = 86,
	MENU_CAMERA_EDT_F_PK2 = 87,
	MENU_CAMERA_EDT_G_PK2 = 88,
	MENU_CAMERA_EDT_S_PK2 = 89,
	MENU_CAMERA_EDT_I_PK2 = 90,
	MENU_GLIST_PK2 = 91,
	MENU_GLIST_F_PK2 = 92,
	MENU_GLIST_G_PK2 = 93,
	MENU_GLIST_S_PK2 = 94,
	MENU_GLIST_I_PK2 = 95,
	MENU_MAP_SNP_OS00_PK2 = 96,
	MENU_CHP1_PK2 = 97,
	MENU_CHP1_F_PK2 = 98,
	MENU_CHP1_G_PK2 = 99,
	MENU_CHP1_S_PK2 = 100,
	MENU_CHP1_I_PK2 = 101,
	MENU_CHP2_PK2 = 102,
	MENU_CHP2_F_PK2 = 103,
	MENU_CHP2_G_PK2 = 104,
	MENU_CHP2_S_PK2 = 105,
	MENU_CHP2_I_PK2 = 106,
	MENU_CHP3_PK2 = 107,
	MENU_CHP3_F_PK2 = 108,
	MENU_CHP3_G_PK2 = 109,
	MENU_CHP3_S_PK2 = 110,
	MENU_CHP3_I_PK2 = 111,
	MENU_CHP4_PK2 = 112,
	MENU_CHP4_F_PK2 = 113,
	MENU_CHP4_G_PK2 = 114,
	MENU_CHP4_S_PK2 = 115,
	MENU_CHP4_I_PK2 = 116,
	MENU_CHP5_PK2 = 117,
	MENU_CHP5_F_PK2 = 118,
	MENU_CHP5_G_PK2 = 119,
	MENU_CHP5_S_PK2 = 120,
	MENU_CHP5_I_PK2 = 121,
	MENU_CHP6_PK2 = 122,
	MENU_CHP6_F_PK2 = 123,
	MENU_CHP6_G_PK2 = 124,
	MENU_CHP6_S_PK2 = 125,
	MENU_CHP6_I_PK2 = 126,
	MENU_CHP7_PK2 = 127,
	MENU_CHP7_F_PK2 = 128,
	MENU_CHP7_G_PK2 = 129,
	MENU_CHP7_S_PK2 = 130,
	MENU_CHP7_I_PK2 = 131,
	MENU_CHP8_PK2 = 132,
	MENU_CHP8_F_PK2 = 133,
	MENU_CHP8_G_PK2 = 134,
	MENU_CHP8_S_PK2 = 135,
	MENU_CHP8_I_PK2 = 136,
	MENU_CHP9_PK2 = 137,
	MENU_CHP9_F_PK2 = 138,
	MENU_CHP9_G_PK2 = 139,
	MENU_CHP9_S_PK2 = 140,
	MENU_CHP9_I_PK2 = 141,
	MENU_CHP10_PK2 = 142,
	MENU_CHP10_F_PK2 = 143,
	MENU_CHP10_G_PK2 = 144,
	MENU_CHP10_S_PK2 = 145,
	MENU_CHP10_I_PK2 = 146,
	MENU_CHP11_PK2 = 147,
	MENU_CHP11_F_PK2 = 148,
	MENU_CHP11_G_PK2 = 149,
	MENU_CHP11_S_PK2 = 150,
	MENU_CHP11_I_PK2 = 151,
	MENU_CHP_MSN_PK2 = 152,
	MENU_CHP_MSN_F_PK2 = 153,
	MENU_CHP_MSN_G_PK2 = 154,
	MENU_CHP_MSN_S_PK2 = 155,
	MENU_CHP_MSN_I_PK2 = 156,
	SORA_PAK = 157,
	GAMEOVER_PK2 = 158,
	GAMEOVER_F_PK2 = 159,
	GAMEOVER_G_PK2 = 160,
	GAMEOVER_S_PK2 = 161,
	GAMEOVER_I_PK2 = 162,
	MENU_MAP_SOTO_PK2 = 163,
	MENU_MAP_OS1_PK2 = 164,
	MENU_MAP_OS2_PK2 = 165,
	MENU_MAP_OS0_PK2 = 166,
	MENU_MAP_KS0_PK2 = 167,
	MENU_MAP_KS1_PK2 = 168,
	MENU_MAP_KS2_PK2 = 169,
	MENU_MAP_RY1_PK2 = 170,
	MENU_MAP_RY2_PK2 = 171,
	MENU_MAP_RY0_PK2 = 172,
	MENU_MAP_TB1_PK2 = 173,
	MENU_MAP_TB2_PK2 = 174,
	MENU_MAP_TB0_PK2 = 175,
	MENU_MAP_CHIKA_PK2 = 176,
	MENU_MAP_KUC_PK2 = 177,
	MENU_MAP_KUH_PK2 = 178,
	MENU_MAP_KUR_PK2 = 179,
	SNP_SOTO_MIS_PK2 = 180,
	SNP_SOTO_MIS_E_PK2 = 181,
	SNP_SOTO_MIS_W_PK2 = 182,
	SNP_SOTO_OSA_PK2 = 183,
	SNP_SOTO_IDO_PK2 = 184,
	SNP_SOTO_MINAMI_PK2 = 185,
	SNP_SOTO_KIR_PK2 = 186,
	SNP_SOTO_TAC_PK2 = 187,
	SNP_SOTO_KITA_PK2 = 188,
	SNP_SOTO_MON_PK2 = 189,
	SNP_SOTO_SAS_PK2 = 190,
	SNP_SOTO_KUR_MAE_PK2 = 191,
	SNP_SOTO_MIN_PK2 = 192,
	SNP_SOTO_BOC_PK2 = 193,
	SNP_SOTO_KUC_PK2 = 194,
	SNP_SOTO_SAN_IRI_PK2 = 195,
	SNP_SOTO_SAN_PK2 = 196,
	SNP_SOTO_KUR_PK2 = 197,
	SNP_SOTO_KRO_PK2 = 198,
	SNP_SOTO_TAC_IE_PK2 = 199,
	SNP_OS1_GEN_PK2 = 200,
	SNP_OS1_KIM_PK2 = 201,
	SNP_OS1_NAN_PK2 = 202,
	SNP_OS1_IRO_PK2 = 203,
	SNP_OS1_DOM2_PK2 = 204,
	SNP_OS1_DOM1_PK2 = 205,
	SNP_OS1_DOM0_PK2 = 206,
	SNP_OS1_OZA_PK2 = 207,
	SNP_OS1_BUT_PK2 = 208,
	SNP_OS1_KAM_PK2 = 209,
	SNP_OS1_OKU_PK2 = 210,
	SNP_OS2_DOM_PK2 = 211,
	SNP_OS2_SEI_PK2 = 212,
	SNP_OS2_KYA_PK2 = 213,
	SNP_OS2_SIN_PK2 = 214,
	SNP_OS2_SHO_PK2 = 215,
	SNP_KS1_KEI_PK2 = 216,
	SNP_KS1_GEN_PK2 = 217,
	SNP_KS1_MEI_PK2 = 218,
	SNP_KS1_TUC_PK2 = 219,
	SNP_KS1_TUC_CHI_PK2 = 220,
	SNP_KS1_OHI_PK2 = 221,
	SNP_KS1_TUB_PK2 = 222,
	SNP_KS1_NUN_MON_PK2 = 223,
	SNP_KS1_NUN_PK2 = 224,
	SNP_KS1_DOZ_PK2 = 225,
	SNP_KS1_DOZ_ZAS_PK2 = 226,
	SNP_KS1_DOZ_TUU_PK2 = 227,
	SNP_KS1_BUT_PK2 = 228,
	SNP_KS1_WAT_PK2 = 229,
	SNP_KS1_KUS_KOB_PK2 = 230,
	SNP_KS1_KUS_PK2 = 231,
	SNP_KS1_KUS_TUU_PK2 = 232,
	SNP_KS0_CHI_PK2 = 233,
	SNP_KS2_TUB_PK2 = 234,
	SNP_KS2_NUN_PK2 = 235,
	SNP_KS2_MEI_PK2 = 236,
	SNP_KS2_MEIMETU_PK2 = 237,
	SNP_KS2_KYA_ROU_PK2 = 238,
	SNP_KS2_KYA_PK2 = 239,
	SNP_KS2_HIN_PK2 = 240,
	SNP_KS2_TOU_PK2 = 241,
	SNP_KS0_BUT_PK2 = 242,
	SNP_KS0_WAT_W_PK2 = 243,
	SNP_KS0_WAT_E_PK2 = 244,
	SNP_KS0_KUS_PK2 = 245,
	SNP_RY1_GEN_PK2 = 246,
	SNP_RY1_GEN_ROU_PK2 = 247,
	SNP_RY1_KUB_PK2 = 248,
	SNP_RY1_AKA_PK2 = 249,
	SNP_RY1_BUT_PK2 = 250,
	SNP_RY1_ZAS_PK2 = 251,
	SNP_RY1_NAK_PK2 = 252,
	SNP_RY1_KAM_PK2 = 253,
	SNP_RY1_FUT_PK2 = 254,
	SNP_RY1_MEI_PK2 = 255,
	SNP_RY1_KAR_PK2 = 256,
	SNP_RY1_FUK_PK2 = 257,
	SNP_RY1_SHO_PK2 = 258,
	SNP_RY1_EIS_PK2 = 259,
	SNP_RY1_KAI_PK2 = 260,
	SNP_RY2_WAT_PK2 = 261,
	SNP_RY2_FUK_PK2 = 262,
	SNP_RY2_SHO_PK2 = 263,
	SNP_RY2_KAI_PK2 = 264,
	SNP_RY2_TAK_PK2 = 265,
	SNP_TB1_GEN_PK2 = 266,
	SNP_TB1_GEN_ROU_PK2 = 267,
	SNP_TB1_KUB_PK2 = 268,
	SNP_TB1_ZAS_PK2 = 269,
	SNP_TB1_NAK_PK2 = 270,
	SNP_TB1_KAM_PK2 = 271,
	SNP_TB1_FUT_PK2 = 272,
	SNP_TB1_MEI_PK2 = 273,
	SNP_TB1_KAR_PK2 = 274,
	SNP_TB1_FUK_PK2 = 275,
	SNP_TB1_SHO_PK2 = 276,
	SNP_TB1_EIS_PK2 = 277,
	SNP_TB1_KAI_PK2 = 278,
	SNP_TB2_FUK_PK2 = 279,
	SNP_TB2_ITU_PK2 = 280,
	SNP_TB2_SHO_PK2 = 281,
	SNP_TB2_KAI_PK2 = 282,
	SNP_TB2_TAK_PK2 = 283,
	SNP_TB2_NAR_E_PK2 = 284,
	SNP_TB2_NAR_N_PK2 = 285,
	SNP_TB2_NAR_S_PK2 = 286,
	SNP_TB2_NAR_W_PK2 = 287,
	SNP_OS0_OSA_PK2 = 288,
	SNP_RY0_RYTB_PK2 = 289,
	SNP_CHIKA_FUK1_PK2 = 290,
	SNP_CHIKA_FUK2_PK2 = 291,
	SNP_CHIKA_HIK_PK2 = 292,
	SNP_CHIKA_UTU_PK2 = 293,
	SNP_KUR_PK2 = 294,
	SNP_KUC_PK2 = 295,
	SNP_KUREHA_PK2 = 296,
	SNP_SOTO_OSA_MAE_PK2 = 297,
	SNP_SOTO_KUR_URA_PK2 = 298,
	SNP_SOTO_KIR_URA_PK2 = 299,
	SNP_SOTO_KIR_IE_PK2 = 300,
	ENE_ACT01_OBJ = 301,
	SIS_ALG_OBJ = 302,
	CH000_MIO_MDL = 303,
	CH001_MAY_MDL = 304,
	CH002_FUUIN_MDL = 305,
	CH003_KUSABI2A_MDL = 306,
	CH004_MAKABE_MDL = 307,
	CH005_TYOU_MDL = 308,
	CH006_ITU_MDL = 309,
	CH007_DUMMY_MDL = 310,
	CH008_DUMMY_MDL = 311,
	CH009_KUSABI2C_MDL = 312,
	CH010_YAMI_MDL = 313,
	CH011_YAMI2_MDL = 314,
	CH012_KUSANAWA_MDL = 315,
	CH013_SAEREI1_MDL = 316,
	CH014_GUUJITAMA_MDL = 317,
	CH015_MAKI_MDL = 318,
	CH016_MIOKAGE_MDL = 319,
	CH017_MIYA_MDL = 320,
	CH018_KUSABI_MDL = 321,
	CH019_CHITOSE_MDL = 322,
	CH020_RAKKA_MDL = 323,
	CH021_WANINNGYOU_MDL = 324,
	CH022_HUTAGOREI_MDL = 325,
	CH023_ASHIREI_MDL = 326,
	CH024_HAKO_MDL = 327,
	CH025_KUBIORE_MDL = 328,
	CH026_KARAKURI_MDL = 329,
	CH027_ONIKODOMO1_MDL = 330,
	CH028_ONIKODOMO2_MDL = 331,
	CH029_ONIKODOMO3_MDL = 332,
	CH030_SUISI_MDL = 333,
	CH031_GUUJI_MDL = 334,
	CH032_IMIBITO1_MDL = 335,
	CH033_NINGYOU_MDL = 336,
	CH034_RAKKA2_MDL = 337,
	CH035_MURAA_MDL = 338,
	CH036_MURAB_MDL = 339,
	CH037_MURAC_MDL = 340,
	CH038_KUSA1_MDL = 341,
	CH039_KUSA2_MDL = 342,
	CH040_KUMITATE_MDL = 343,
	CH041_KUROREI_MDL = 344,
	CH042_DUMMY_MDL = 345,
	CH043_KUROSAWA_MDL = 346,
	CH044_SAECONTE_MDL = 347,
	CH045_LHANDREI_MDL = 348,
	CH046_YAMI_MDL = 349,
	CH047_KUSA3_MDL = 350,
	CH048_KUSA4_MDL = 351,
	CH049_KUSA5_MDL = 352,
	CH050_MURAREI4_MDL = 353,
	CH051_MURAREI5_MDL = 354,
	CH052_MURAREI6_MDL = 355,
	CH053_IMIBITO2_MDL = 356,
	CH054_MAKIMURA_MDL = 357,
	CH055_SUDO_MDL = 358,
	CH056_WANINGYOUR_MDL = 359,
	CH057_WANINGYOUL_MDL = 360,
	CH058_SAE_MDL = 361,
	CH059_MURAREI7_MDL = 362,
	CH060_MURAREI8_MDL = 363,
	CH061_MURAREI9_MDL = 364,
	CH000_GOTH_MDL = 365,
	CH001_GOTH_MDL = 366,
	CH000_YUKATA_1_MDL = 367,
	CH001_YUKATA_1_MDL = 368,
	CH000_YUKATA_2_MDL = 369,
	CH001_YUKATA_2_MDL = 370,
	CH000_YUKATA_3_MDL = 371,
	CH001_YUKATA_3_MDL = 372,
	CH000_YAE_MDL = 373,
	CH001_SAE_MDL = 374,
	CH000_MIKU_MDL = 375,
	CH001_MIKU_MDL = 376,
	CH000_SEIHUKU_MDL = 377,
	CH001_SEIHUKU_MDL = 378,
	CH000_BONTAGE_MDL = 379,
	CH001_BONTAGE_MDL = 380,
	MAN_MDL_END = 381,
	CH000_MIO_ANM = 382,
	CH000_MIO_L_ANM = 383,
	CH000_MIO_L_SP_01_ANM = 384,
	CH000_MIO_L_SP_02_ANM = 385,
	CH001_MAY_ANM = 386,
	CH001_MAY_SYNC_ANM = 387,
	CH003_KUSABI2A_ANM = 388,
	CH004_DUMMY_ANM = 389,
	CH005_TYOU_ANM = 390,
	CH007_DUMMY_ANM = 391,
	CH008_DUMMY_ANM = 392,
	CH009_KUSABI2C_ANM = 393,
	CH010_YAMI_ANM = 394,
	CH011_YAMI2_ANM = 395,
	CH012_KUSANAWA_ANM = 396,
	CH013_SAEREI1_ANM = 397,
	CH014_GUUJITAMA_ANM = 398,
	CH015_MAKI_ANM = 399,
	CH016_DUMMY_ANM = 400,
	CH017_MIYA_ANM = 401,
	CH018_KUSABI_ANM = 402,
	CH019_CHITOSE_ANM = 403,
	CH020_RAKKA_ANM = 404,
	CH021_WANINNGYOU_ANM = 405,
	CH022_HUTAGOREI_ANM = 406,
	CH023_DUMMY_ANM = 407,
	CH024_HAKO_ANM = 408,
	CH025_KUBIORE_ANM = 409,
	CH026_KARAKURI_ANM = 410,
	CH027_ONIKODOMO1_ANM = 411,
	CH028_ONIKODOMO2_ANM = 412,
	CH029_ONIKODOMO3_ANM = 413,
	CH030_SUISI_ANM = 414,
	CH031_GUUJI_ANM = 415,
	CH032_IMIBITO_ANM = 416,
	CH033_NINGYOU_ANM = 417,
	CH034_DUMMY_ANM = 418,
	CH035_MURAA_ANM = 419,
	CH036_MURAB_ANM = 420,
	CH037_MURAC_ANM = 421,
	CH038_KUSA1_ANM = 422,
	CH039_KUSA2_ANM = 423,
	CH040_DUMMY_ANM = 424,
	CH041_KUROREI_ANM = 425,
	CH042_DUMMY_ANM = 426,
	CH043_DUMMY_ANM = 427,
	CH044_DUMMY_ANM = 428,
	CH045_DUMMY_ANM = 429,
	CH047_DUMMY_ANM = 430,
	CH048_DUMMY_ANM = 431,
	CH049_DUMMY_ANM = 432,
	CH050_DUMMY_ANM = 433,
	CH051_DUMMY_ANM = 434,
	CH052_DUMMY_ANM = 435,
	CH053_DUMMY_ANM = 436,
	CH054_DUMMY_ANM = 437,
	CH055_DUMMY_ANM = 438,
	CH056_WANINGYOUR_ANM = 439,
	CH057_WANINGYOUL_ANM = 440,
	CH058_DUMMY_ANM = 441,
	CH059_DUMMY_ANM = 442,
	CH060_DUMMY_ANM = 443,
	CH061_DUMMY_ANM = 444,
	CH017_A000_STAND_ANM = 445,
	CH046_A026_TAORE_ANM = 446,
	CH999_DUMMY_ANM = 447,
	CH002_A032_HANDS_ANM = 448,
	CH017_A017_WALK_ANM = 449,
	CH017_A001_UP_ANM = 450,
	CH017_A024_WALK_ANM = 451,
	CH024_A003_BOXOUT2_ANM = 452,
	CH006_A027_STAND_ANM = 453,
	CH017_A028_NOREN_ANM = 454,
	CH006_A031_STAND_ANM = 455,
	CH001_A035_RUN1_ANM = 456,
	CH001_A036_RUN2_ANM = 457,
	CH030_A037_SUISHI_ANM = 458,
	CH035_A038_ESCAPE_ANM = 459,
	CH036_A039_ESCAPE_ANM = 460,
	CH037_A040_ESCAPE_ANM = 461,
	CH001_A041_WALK_ANM = 462,
	CH004_A042_FURIMUKI_ANM = 463,
	CH018_A043_HIKIZURI_ANM = 464,
	CH036_A044_HIKIZURARE_ANM = 465,
	CH018_A045_WALK_ANM = 466,
	CH024_A046_HUSI_ANM = 467,
	CH024_A048_STAND_ANM = 468,
	CH043_A049_STAND_ANM = 469,
	CH038_A050_HAIAGARI_ANM = 470,
	CH029_A055_OUDAN_ANM = 471,
	CH029_A056_NOZOKI_ANM = 472,
	CH004_A057_STAND_ANM = 473,
	CH043_A058_KEIKOKU_ANM = 474,
	CH031_A059_STAND_ANM = 475,
	CH031_A060_FURIMUKI_ANM = 476,
	CH024_A061_HIKIKOMI_ANM = 477,
	CH017_A062_STAND_ANM = 478,
	CH004_A063_WALK_ANM = 479,
	CH023_A066_WALK_ANM = 480,
	CH038_A067_TATI_ANM = 481,
	CH045_A068_HAND_ANM = 482,
	CH039_A069_MADO_ANM = 483,
	CH038_A070_SHAGAMI_ANM = 484,
	CH029_A076_NOZOKI_ANM = 485,
	CH029_A077_HIRAKI_ANM = 486,
	CH001_A087_CRAZY_ANM = 487,
	CH025_A089_WALK_ANM = 488,
	CH004_A090_WRITE_ANM = 489,
	CH022_A091_RUN_ANM = 490,
	CH022_A093_SEIZA_ANM = 491,
	CH026_A095_KARAKURISHI_ANM = 492,
	CH001_A096_WALK_SLOW_ANM = 493,
	CH032_A098_STAND_ANM = 494,
	CH001_A099_CRY_ANM = 495,
	CH006_A100_NEUTRAL_ANM = 496,
	CH059_A101_MURAWALK_ANM = 497,
	CH060_A102_MURAWALK_ANM = 498,
	CH061_A103_MURAWALK_ANM = 499,
	CH031_A104_FURIMUKI_ANM = 500,
	CH031_A105_FURIMUKI_ANM = 501,
	CH013_A106_TURN_R_ANM = 502,
	CH022_A107_SUWARI_R_ANM = 503,
	CH021_A108_SUWARI_L_ANM = 504,
	CH018_A111_KUSABI_ANM = 505,
	CH054_A112_NEUTRAL_ANM = 506,
	CH001_A113_DOWN_ANM = 507,
	CH054_A114_WALK_ANM = 508,
	CH013_A115_WALK_ANM = 509,
	CH013_A116_NEUTRAL_ANM = 510,
	CH013_A117_CRY_ANM = 511,
	CH006_A119_WALK_ANM = 512,
	CH013_A120_TURN_L_ANM = 513,
	CH038_A121_STAND_ANM = 514,
	CH019_A122_ESCAPE_ANM = 515,
	CH019_A123_RUN_ANM = 516,
	CH013_A124_WALK_ANM = 517,
	CH027_A126_RUN_ANM = 518,
	CH028_A127_RUN_ANM = 519,
	CH029_A128_RUN_ANM = 520,
	CH027_A129_LOOK_ANM = 521,
	CH031_A130_OJIGI_ANM = 522,
	CH004_A137_TATIAGARI_ANM = 523,
	CH019_A138_SIT_ANM = 524,
	CH028_A140_LOOK_ANM = 525,
	CH029_A141_LOOK_ANM = 526,
	CH031_A142_STAND_ANM = 527,
	CH010_A143_STAND_ANM = 528,
	CH011_A144_NEUTRAL_ANM = 529,
	CH040_A145_MIKAN_ANM = 530,
	CH010_A146_YAMI_WALK_ANM = 531,
	CH019_A147_NEUTRAL_ANM = 532,
	CH021_A148_NEUTRAL_ANM = 533,
	CH025_A149_NEUTRAL_ANM = 534,
	CH026_A150_STAND_ANM = 535,
	CH028_A151_WALK_ANM = 536,
	CH031_A152_WALK_ANM = 537,
	CH032_A153_WALK_ANM = 538,
	CH035_A154_NEUTRAL_ANM = 539,
	CH032_A156_IMIBITO_FURIKAERI_ANM = 540,
	CH019_A157_KAOAGERU_ANM = 541,
	CH015_A158_MAKIREI_SISU_ANM = 542,
	CH019_A165_HAIZURI_ANM = 543,
	CH028_A166_JUMP_ANM = 544,
	CH027_A171_STAND_ANM = 545,
	CH002_A173_HANDS_ANM = 546,
	CH021_A178_NEUTRAL_ANM = 547,
	CH001_A179_NEUTRAL_ANM = 548,
	CH019_A191_STANDUP_ANM = 549,
	CH001_A195_SAE_MAYU_ANM = 550,
	CH019_A202_CHITOSE_SIT_ANM = 551,
	CH024_A204_BOXOUT3_ANM = 552,
	MAN_ANM_END = 553,
	DOOR_ANIM_MOT = 554,
	ROOM_START_DMY = 555,
	RY00_PK2 = 556,
	RY00_ZLD = 557,
	RY00_PZB_PAK = 558,
	RY00_MH = 559,
	RY00MONO_PK2 = 560,
	RY01_PK2 = 561,
	RY01_ZLD = 562,
	RY01_PZB_PAK = 563,
	RY01_MH = 564,
	RY01MONO_PK2 = 565,
	RY02_PK2 = 566,
	RY02_ZLD = 567,
	RY02_PZB_PAK = 568,
	RY02_MH = 569,
	RY02MONO_PK2 = 570,
	RY03_PK2 = 571,
	RY03_ZLD = 572,
	RY03_PZB_PAK = 573,
	RY03_MH = 574,
	RY03MONO_PK2 = 575,
	RY04_PK2 = 576,
	RY04_ZLD = 577,
	RY04_PZB_PAK = 578,
	RY04_MH = 579,
	RY04MONO_PK2 = 580,
	RY05_PK2 = 581,
	RY05_ZLD = 582,
	RY05_PZB_PAK = 583,
	RY05_MH = 584,
	RY05MONO_PK2 = 585,
	RY06_PK2 = 586,
	RY06_ZLD = 587,
	RY06_PZB_PAK = 588,
	RY06_MH = 589,
	RY06MONO_PK2 = 590,
	RY07_PK2 = 591,
	RY07_ZLD = 592,
	RY07_PZB_PAK = 593,
	RY07_MH = 594,
	RY07MONO_PK2 = 595,
	RY08_PK2 = 596,
	RY08_ZLD = 597,
	RY08_PZB_PAK = 598,
	RY08_MH = 599,
	RY08MONO_PK2 = 600,
	RY09_PK2 = 601,
	RY09_ZLD = 602,
	RY09_PZB_PAK = 603,
	RY09_MH = 604,
	RY09MONO_PK2 = 605,
	RY10_PK2 = 606,
	RY10_ZLD = 607,
	RY10_PZB_PAK = 608,
	RY10_MH = 609,
	RY10MONO_PK2 = 610,
	RY11_PK2 = 611,
	RY11_ZLD = 612,
	RY11_PZB_PAK = 613,
	RY11_MH = 614,
	RY11MONO_PK2 = 615,
	RY12_PK2 = 616,
	RY12_ZLD = 617,
	RY12_PZB_PAK = 618,
	RY12_MH = 619,
	RY12MONO_PK2 = 620,
	ROS00_PK2 = 621,
	ROS00_ZLD = 622,
	ROS00_PZB_PAK = 623,
	ROS00_MH = 624,
	ROS00MONO_PK2 = 625,
	ROS01_PK2 = 626,
	ROS01_ZLD = 627,
	ROS01_PZB_PAK = 628,
	ROS01_MH = 629,
	ROS01MONO_PK2 = 630,
	ROS02_PK2 = 631,
	ROS02_ZLD = 632,
	ROS02_PZB_PAK = 633,
	ROS02_MH = 634,
	ROS02MONO_PK2 = 635,
	ROS03_PK2 = 636,
	ROS03_ZLD = 637,
	ROS03_PZB_PAK = 638,
	ROS03_MH = 639,
	ROS03MONO_PK2 = 640,
	ROS04_PK2 = 641,
	ROS04_ZLD = 642,
	ROS04_PZB_PAK = 643,
	ROS04_MH = 644,
	ROS04MONO_PK2 = 645,
	ROS05_PK2 = 646,
	ROS05_ZLD = 647,
	ROS05_PZB_PAK = 648,
	ROS05_MH = 649,
	ROS05MONO_PK2 = 650,
	RTB00_PK2 = 651,
	RTB00_ZLD = 652,
	RTB00_PZB_PAK = 653,
	RTB00_MH = 654,
	RTB00MONO_PK2 = 655,
	RTB01_PK2 = 656,
	RTB01_ZLD = 657,
	RTB01_PZB_PAK = 658,
	RTB01_MH = 659,
	RTB01MONO_PK2 = 660,
	RTB02_PK2 = 661,
	RTB02_ZLD = 662,
	RTB02_PZB_PAK = 663,
	RTB02_MH = 664,
	RTB02MONO_PK2 = 665,
	RTB03_PK2 = 666,
	RTB03_ZLD = 667,
	RTB03_PZB_PAK = 668,
	RTB03_MH = 669,
	RTB03MONO_PK2 = 670,
	RTB04_PK2 = 671,
	RTB04_ZLD = 672,
	RTB04_PZB_PAK = 673,
	RTB04_MH = 674,
	RTB04MONO_PK2 = 675,
	RTB05_PK2 = 676,
	RTB05_ZLD = 677,
	RTB05_PZB_PAK = 678,
	RTB05_MH = 679,
	RTB05MONO_PK2 = 680,
	RTB06_PK2 = 681,
	RTB06_ZLD = 682,
	RTB06_PZB_PAK = 683,
	RTB06_MH = 684,
	RTB06MONO_PK2 = 685,
	RTB07_PK2 = 686,
	RTB07_ZLD = 687,
	RTB07_PZB_PAK = 688,
	RTB07_MH = 689,
	RTB07MONO_PK2 = 690,
	RTB08_PK2 = 691,
	RTB08_ZLD = 692,
	RTB08_PZB_PAK = 693,
	RTB08_MH = 694,
	RTB08MONO_PK2 = 695,
	RTB09_PK2 = 696,
	RTB09_ZLD = 697,
	RTB09_PZB_PAK = 698,
	RTB09_MH = 699,
	RTB09MONO_PK2 = 700,
	RTB10_PK2 = 701,
	RTB10_ZLD = 702,
	RTB10_PZB_PAK = 703,
	RTB10_MH = 704,
	RTB10MONO_PK2 = 705,
	RRY00_PK2 = 706,
	RRY00_ZLD = 707,
	RRY00_PZB_PAK = 708,
	RRY00_MH = 709,
	RRY00MONO_PK2 = 710,
	RRY01_PK2 = 711,
	RRY01_ZLD = 712,
	RRY01_PZB_PAK = 713,
	RRY01_MH = 714,
	RRY01MONO_PK2 = 715,
	RRY02_PK2 = 716,
	RRY02_ZLD = 717,
	RRY02_PZB_PAK = 718,
	RRY02_MH = 719,
	RRY02MONO_PK2 = 720,
	RRY03_PK2 = 721,
	RRY03_ZLD = 722,
	RRY03_PZB_PAK = 723,
	RRY03_MH = 724,
	RRY03MONO_PK2 = 725,
	RRY04_PK2 = 726,
	RRY04_ZLD = 727,
	RRY04_PZB_PAK = 728,
	RRY04_MH = 729,
	RRY04MONO_PK2 = 730,
	RRY05_PK2 = 731,
	RRY05_ZLD = 732,
	RRY05_PZB_PAK = 733,
	RRY05_MH = 734,
	RRY05MONO_PK2 = 735,
	RRY06_PK2 = 736,
	RRY06_ZLD = 737,
	RRY06_PZB_PAK = 738,
	RRY06_MH = 739,
	RRY06MONO_PK2 = 740,
	RRY07_PK2 = 741,
	RRY07_ZLD = 742,
	RRY07_PZB_PAK = 743,
	RRY07_MH = 744,
	RRY07MONO_PK2 = 745,
	RRY08_PK2 = 746,
	RRY08_ZLD = 747,
	RRY08_PZB_PAK = 748,
	RRY08_MH = 749,
	RRY08MONO_PK2 = 750,
	RRY09_PK2 = 751,
	RRY09_ZLD = 752,
	RRY09_PZB_PAK = 753,
	RRY09_MH = 754,
	RRY09MONO_PK2 = 755,
	RKS00_PK2 = 756,
	RKS00_ZLD = 757,
	RKS00_PZB_PAK = 758,
	RKS00_MH = 759,
	RKS00MONO_PK2 = 760,
	RKS01_PK2 = 761,
	RKS01_ZLD = 762,
	RKS01_PZB_PAK = 763,
	RKS01_MH = 764,
	RKS01MONO_PK2 = 765,
	RKS02_PK2 = 766,
	RKS02_ZLD = 767,
	RKS02_PZB_PAK = 768,
	RKS02_MH = 769,
	RKS02MONO_PK2 = 770,
	RKS03_PK2 = 771,
	RKS03_ZLD = 772,
	RKS03_PZB_PAK = 773,
	RKS03_MH = 774,
	RKS03MONO_PK2 = 775,
	RKS04_PK2 = 776,
	RKS04_ZLD = 777,
	RKS04_PZB_PAK = 778,
	RKS04_MH = 779,
	RKS04MONO_PK2 = 780,
	RKS05_PK2 = 781,
	RKS05_ZLD = 782,
	RKS05_PZB_PAK = 783,
	RKS05_MH = 784,
	RKS05MONO_PK2 = 785,
	RKS06_PK2 = 786,
	RKS06_ZLD = 787,
	RKS06_PZB_PAK = 788,
	RKS06_MH = 789,
	RKS06MONO_PK2 = 790,
	RKS07_PK2 = 791,
	RKS07_ZLD = 792,
	RKS07_PZB_PAK = 793,
	RKS07_MH = 794,
	RKS07MONO_PK2 = 795,
	RKS08_PK2 = 796,
	RKS08_ZLD = 797,
	RKS08_PZB_PAK = 798,
	RKS08_MH = 799,
	RKS08MONO_PK2 = 800,
	RKS09_PK2 = 801,
	RKS09_ZLD = 802,
	RKS09_PZB_PAK = 803,
	RKS09_MH = 804,
	RKS09MONO_PK2 = 805,
	RKS10_PK2 = 806,
	RKS10_ZLD = 807,
	RKS10_PZB_PAK = 808,
	RKS10_MH = 809,
	RKS10MONO_PK2 = 810,
	RKS11_PK2 = 811,
	RKS11_ZLD = 812,
	RKS11_PZB_PAK = 813,
	RKS11_MH = 814,
	RKS11MONO_PK2 = 815,
	RKS12_PK2 = 816,
	RKS12_ZLD = 817,
	RKS12_PZB_PAK = 818,
	RKS12_MH = 819,
	RKS12MONO_PK2 = 820,
	RKS13_PK2 = 821,
	RKS13_ZLD = 822,
	RKS13_PZB_PAK = 823,
	RKS13_MH = 824,
	RKS13MONO_PK2 = 825,
	RKS14_PK2 = 826,
	RKS14_ZLD = 827,
	RKS14_PZB_PAK = 828,
	RKS14_MH = 829,
	RKS14MONO_PK2 = 830,
	RKH00_PK2 = 831,
	RKH00_ZLD = 832,
	RKH00_PZB_PAK = 833,
	RKH00_MH = 834,
	RKH00MONO_PK2 = 835,
	RKC00_PK2 = 836,
	RKC00_ZLD = 837,
	RKC00_PZB_PAK = 838,
	RKC00_MH = 839,
	RKC00MONO_PK2 = 840,
	RKR00_PK2 = 841,
	RKR00_ZLD = 842,
	RKR00_PZB_PAK = 843,
	RKR00_MH = 844,
	RKR00MONO_PK2 = 845,
	RCH00_PK2 = 846,
	RCH00_ZLD = 847,
	RCH00_PZB_PAK = 848,
	RCH00_MH = 849,
	RCH00MONO_PK2 = 850,
	RCH01_PK2 = 851,
	RCH01_ZLD = 852,
	RCH01_PZB_PAK = 853,
	RCH01_MH = 854,
	RCH01MONO_PK2 = 855,
	RCH02_PK2 = 856,
	RCH02_ZLD = 857,
	RCH02_PZB_PAK = 858,
	RCH02_MH = 859,
	RCH02MONO_PK2 = 860,
	RCH03_PK2 = 861,
	RCH03_ZLD = 862,
	RCH03_PZB_PAK = 863,
	RCH03_MH = 864,
	RCH03MONO_PK2 = 865,
	RCH04_PK2 = 866,
	RCH04_ZLD = 867,
	RCH04_PZB_PAK = 868,
	RCH04_MH = 869,
	RCH04MONO_PK2 = 870,
	RCH05_PK2 = 871,
	RCH05_ZLD = 872,
	RCH05_PZB_PAK = 873,
	RCH05_MH = 874,
	RCH05MONO_PK2 = 875,
	RCH06_PK2 = 876,
	RCH06_ZLD = 877,
	RCH06_PZB_PAK = 878,
	RCH06_MH = 879,
	RCH06MONO_PK2 = 880,
	RY13_PK2 = 881,
	RY13_ZLD = 882,
	RY13_PZB_PAK = 883,
	RY13_MH = 884,
	RY13MONO_PK2 = 885,
	ROOM_END_DMY = 886,
	F000_PK2 = 887,
	F001_PK2 = 888,
	F002_PK2 = 889,
	F003_PK2 = 890,
	F004_PK2 = 891,
	F005_PK2 = 892,
	F006_PK2 = 893,
	F007_PK2 = 894,
	F008_PK2 = 895,
	F009_PK2 = 896,
	F010_PK2 = 897,
	F011_PK2 = 898,
	F012_PK2 = 899,
	F013_PK2 = 900,
	F014_PK2 = 901,
	F015_PK2 = 902,
	F016_PK2 = 903,
	F017_PK2 = 904,
	F018_PK2 = 905,
	F019_PK2 = 906,
	F020_PK2 = 907,
	F021_PK2 = 908,
	F022_PK2 = 909,
	F023_PK2 = 910,
	F024_PK2 = 911,
	F025_PK2 = 912,
	F026_PK2 = 913,
	F027_PK2 = 914,
	F028_PK2 = 915,
	F029_PK2 = 916,
	F030_PK2 = 917,
	F031_PK2 = 918,
	F032_PK2 = 919,
	F033_PK2 = 920,
	F034_PK2 = 921,
	F035_PK2 = 922,
	F036_PK2 = 923,
	F037_PK2 = 924,
	F038_PK2 = 925,
	F039_PK2 = 926,
	F040_PK2 = 927,
	F041_PK2 = 928,
	F042_PK2 = 929,
	F043_PK2 = 930,
	F044_PK2 = 931,
	F045_PK2 = 932,
	F046_PK2 = 933,
	F047_PK2 = 934,
	F048_PK2 = 935,
	F049_PK2 = 936,
	F050_PK2 = 937,
	F051_PK2 = 938,
	F052_PK2 = 939,
	F053_PK2 = 940,
	F054_PK2 = 941,
	F055_PK2 = 942,
	F056_PK2 = 943,
	F057_PK2 = 944,
	F058_PK2 = 945,
	F059_PK2 = 946,
	F060_PK2 = 947,
	F061_PK2 = 948,
	F062_PK2 = 949,
	F063_PK2 = 950,
	F064_PK2 = 951,
	F065_PK2 = 952,
	F066_PK2 = 953,
	F067_PK2 = 954,
	F068_PK2 = 955,
	F069_PK2 = 956,
	F070_PK2 = 957,
	F071_PK2 = 958,
	F072_PK2 = 959,
	F073_PK2 = 960,
	F074_PK2 = 961,
	F075_PK2 = 962,
	F076_PK2 = 963,
	F077_PK2 = 964,
	F078_PK2 = 965,
	F079_PK2 = 966,
	F080_PK2 = 967,
	F081_PK2 = 968,
	F082_PK2 = 969,
	F083_PK2 = 970,
	F084_PK2 = 971,
	F085_PK2 = 972,
	F086_PK2 = 973,
	F087_PK2 = 974,
	F088_PK2 = 975,
	F089_PK2 = 976,
	F090_PK2 = 977,
	F091_PK2 = 978,
	F092_PK2 = 979,
	F093_PK2 = 980,
	F094_PK2 = 981,
	F095_PK2 = 982,
	F096_PK2 = 983,
	F097_PK2 = 984,
	F098_PK2 = 985,
	F099_PK2 = 986,
	F100_PK2 = 987,
	F101_PK2 = 988,
	F102_PK2 = 989,
	F103_PK2 = 990,
	F104_PK2 = 991,
	F105_PK2 = 992,
	F106_PK2 = 993,
	F107_PK2 = 994,
	F108_PK2 = 995,
	F109_PK2 = 996,
	F110_PK2 = 997,
	F111_PK2 = 998,
	F112_PK2 = 999,
	F113_PK2 = 1000,
	F114_PK2 = 1001,
	F115_PK2 = 1002,
	F116_PK2 = 1003,
	F117_PK2 = 1004,
	F118_PK2 = 1005,
	F119_PK2 = 1006,
	F120_PK2 = 1007,
	F121_PK2 = 1008,
	F122_PK2 = 1009,
	F123_PK2 = 1010,
	F124_PK2 = 1011,
	F125_PK2 = 1012,
	F126_PK2 = 1013,
	F127_PK2 = 1014,
	F128_PK2 = 1015,
	F129_PK2 = 1016,
	F130_PK2 = 1017,
	F131_PK2 = 1018,
	F132_PK2 = 1019,
	F133_PK2 = 1020,
	F134_PK2 = 1021,
	F135_PK2 = 1022,
	F136_PK2 = 1023,
	F137_PK2 = 1024,
	F138_PK2 = 1025,
	F139_PK2 = 1026,
	F140_PK2 = 1027,
	F141_PK2 = 1028,
	F142_PK2 = 1029,
	F143_PK2 = 1030,
	F144_PK2 = 1031,
	F145_PK2 = 1032,
	F146_PK2 = 1033,
	F147_PK2 = 1034,
	F148_PK2 = 1035,
	F149_PK2 = 1036,
	F150_PK2 = 1037,
	F151_PK2 = 1038,
	F152_PK2 = 1039,
	F153_PK2 = 1040,
	F154_PK2 = 1041,
	F155_PK2 = 1042,
	F156_PK2 = 1043,
	F157_PK2 = 1044,
	F158_PK2 = 1045,
	F159_PK2 = 1046,
	F160_PK2 = 1047,
	F161_PK2 = 1048,
	F162_PK2 = 1049,
	F163_PK2 = 1050,
	F164_PK2 = 1051,
	F165_PK2 = 1052,
	F166_PK2 = 1053,
	F167_PK2 = 1054,
	F168_PK2 = 1055,
	F169_PK2 = 1056,
	F170_PK2 = 1057,
	F171_PK2 = 1058,
	F172_PK2 = 1059,
	F173_PK2 = 1060,
	F174_PK2 = 1061,
	F175_PK2 = 1062,
	F176_PK2 = 1063,
	F177_PK2 = 1064,
	F178_PK2 = 1065,
	F179_PK2 = 1066,
	F180_PK2 = 1067,
	F181_PK2 = 1068,
	F182_PK2 = 1069,
	F183_PK2 = 1070,
	F184_PK2 = 1071,
	F185_PK2 = 1072,
	F186_PK2 = 1073,
	F187_PK2 = 1074,
	F188_PK2 = 1075,
	F189_PK2 = 1076,
	F190_PK2 = 1077,
	F191_PK2 = 1078,
	F192_PK2 = 1079,
	F193_PK2 = 1080,
	F194_PK2 = 1081,
	F195_PK2 = 1082,
	F196_PK2 = 1083,
	F197_PK2 = 1084,
	F198_PK2 = 1085,
	F199_PK2 = 1086,
	F200_PK2 = 1087,
	F201_PK2 = 1088,
	F202_PK2 = 1089,
	F203_PK2 = 1090,
	F204_PK2 = 1091,
	F205_PK2 = 1092,
	F206_PK2 = 1093,
	F207_PK2 = 1094,
	F208_PK2 = 1095,
	F209_PK2 = 1096,
	F210_PK2 = 1097,
	F211_PK2 = 1098,
	F212_PK2 = 1099,
	F213_PK2 = 1100,
	F214_PK2 = 1101,
	F215_PK2 = 1102,
	F216_PK2 = 1103,
	F217_PK2 = 1104,
	F218_PK2 = 1105,
	F219_PK2 = 1106,
	F220_PK2 = 1107,
	F221_PK2 = 1108,
	F222_PK2 = 1109,
	F223_PK2 = 1110,
	F224_PK2 = 1111,
	F225_PK2 = 1112,
	F226_PK2 = 1113,
	F227_PK2 = 1114,
	F228_PK2 = 1115,
	F229_PK2 = 1116,
	F230_PK2 = 1117,
	F231_PK2 = 1118,
	F232_PK2 = 1119,
	F233_PK2 = 1120,
	F234_PK2 = 1121,
	F235_PK2 = 1122,
	F236_PK2 = 1123,
	F237_PK2 = 1124,
	F238_PK2 = 1125,
	F239_PK2 = 1126,
	F240_PK2 = 1127,
	F241_PK2 = 1128,
	F242_PK2 = 1129,
	F243_PK2 = 1130,
	F244_PK2 = 1131,
	F245_PK2 = 1132,
	F246_PK2 = 1133,
	F247_PK2 = 1134,
	F248_PK2 = 1135,
	F249_PK2 = 1136,
	F250_PK2 = 1137,
	F251_PK2 = 1138,
	F252_PK2 = 1139,
	F253_PK2 = 1140,
	F254_PK2 = 1141,
	F255_PK2 = 1142,
	F256_PK2 = 1143,
	F257_PK2 = 1144,
	F258_PK2 = 1145,
	F259_PK2 = 1146,
	F260_PK2 = 1147,
	F261_PK2 = 1148,
	F262_PK2 = 1149,
	F263_PK2 = 1150,
	F264_PK2 = 1151,
	F265_PK2 = 1152,
	F266_PK2 = 1153,
	F267_PK2 = 1154,
	F268_PK2 = 1155,
	F269_PK2 = 1156,
	F270_PK2 = 1157,
	F271_PK2 = 1158,
	F272_PK2 = 1159,
	F273_PK2 = 1160,
	F274_PK2 = 1161,
	F275_PK2 = 1162,
	F276_PK2 = 1163,
	F277_PK2 = 1164,
	F278_PK2 = 1165,
	F279_PK2 = 1166,
	F280_PK2 = 1167,
	F281_PK2 = 1168,
	F282_PK2 = 1169,
	F283_PK2 = 1170,
	F284_PK2 = 1171,
	F285_PK2 = 1172,
	F286_PK2 = 1173,
	F287_PK2 = 1174,
	F288_PK2 = 1175,
	F289_PK2 = 1176,
	F290_PK2 = 1177,
	F291_PK2 = 1178,
	F292_PK2 = 1179,
	F293_PK2 = 1180,
	F294_PK2 = 1181,
	F295_PK2 = 1182,
	F296_PK2 = 1183,
	F297_PK2 = 1184,
	F298_PK2 = 1185,
	F299_PK2 = 1186,
	F300_PK2 = 1187,
	F301_PK2 = 1188,
	F302_PK2 = 1189,
	F303_PK2 = 1190,
	F304_PK2 = 1191,
	F305_PK2 = 1192,
	F306_PK2 = 1193,
	F307_PK2 = 1194,
	F308_PK2 = 1195,
	F309_PK2 = 1196,
	F310_PK2 = 1197,
	F311_PK2 = 1198,
	F312_PK2 = 1199,
	F313_PK2 = 1200,
	F314_PK2 = 1201,
	F315_PK2 = 1202,
	F316_PK2 = 1203,
	F317_PK2 = 1204,
	F318_PK2 = 1205,
	F319_PK2 = 1206,
	F320_PK2 = 1207,
	F321_PK2 = 1208,
	F322_PK2 = 1209,
	F323_PK2 = 1210,
	F324_PK2 = 1211,
	F325_PK2 = 1212,
	F326_PK2 = 1213,
	F327_PK2 = 1214,
	F328_PK2 = 1215,
	F329_PK2 = 1216,
	F330_PK2 = 1217,
	F331_PK2 = 1218,
	F332_PK2 = 1219,
	F333_PK2 = 1220,
	F334_PK2 = 1221,
	F335_PK2 = 1222,
	F336_PK2 = 1223,
	F337_PK2 = 1224,
	F338_PK2 = 1225,
	F339_PK2 = 1226,
	F340_PK2 = 1227,
	F341_PK2 = 1228,
	F342_PK2 = 1229,
	F343_PK2 = 1230,
	F344_PK2 = 1231,
	F345_PK2 = 1232,
	F346_PK2 = 1233,
	F347_PK2 = 1234,
	F348_PK2 = 1235,
	F349_PK2 = 1236,
	F350_PK2 = 1237,
	F351_PK2 = 1238,
	F352_PK2 = 1239,
	F353_PK2 = 1240,
	F354_PK2 = 1241,
	F355_PK2 = 1242,
	F356_PK2 = 1243,
	F357_PK2 = 1244,
	F358_PK2 = 1245,
	F359_PK2 = 1246,
	F360_PK2 = 1247,
	F361_PK2 = 1248,
	F362_PK2 = 1249,
	F363_PK2 = 1250,
	F364_PK2 = 1251,
	F365_PK2 = 1252,
	F366_PK2 = 1253,
	F367_PK2 = 1254,
	F368_PK2 = 1255,
	F369_PK2 = 1256,
	F370_PK2 = 1257,
	F371_PK2 = 1258,
	F372_PK2 = 1259,
	F373_PK2 = 1260,
	F374_PK2 = 1261,
	F375_PK2 = 1262,
	F376_PK2 = 1263,
	F377_PK2 = 1264,
	F378_PK2 = 1265,
	F379_PK2 = 1266,
	F380_PK2 = 1267,
	F381_PK2 = 1268,
	F382_PK2 = 1269,
	F383_PK2 = 1270,
	F384_PK2 = 1271,
	F385_PK2 = 1272,
	F386_PK2 = 1273,
	F387_PK2 = 1274,
	F388_PK2 = 1275,
	F389_PK2 = 1276,
	F390_PK2 = 1277,
	F391_PK2 = 1278,
	F392_PK2 = 1279,
	F393_PK2 = 1280,
	F394_PK2 = 1281,
	F395_PK2 = 1282,
	F396_PK2 = 1283,
	F397_PK2 = 1284,
	F398_PK2 = 1285,
	F399_PK2 = 1286,
	F400_PK2 = 1287,
	F401_PK2 = 1288,
	F402_PK2 = 1289,
	F403_PK2 = 1290,
	F404_PK2 = 1291,
	F405_PK2 = 1292,
	F406_PK2 = 1293,
	F407_PK2 = 1294,
	F408_PK2 = 1295,
	F409_PK2 = 1296,
	F410_PK2 = 1297,
	F411_PK2 = 1298,
	F412_PK2 = 1299,
	F413_PK2 = 1300,
	F414_PK2 = 1301,
	F415_PK2 = 1302,
	F416_PK2 = 1303,
	F417_PK2 = 1304,
	F418_PK2 = 1305,
	F419_PK2 = 1306,
	F420_PK2 = 1307,
	F421_PK2 = 1308,
	F422_PK2 = 1309,
	F423_PK2 = 1310,
	F424_PK2 = 1311,
	F425_PK2 = 1312,
	F426_PK2 = 1313,
	F427_PK2 = 1314,
	F428_PK2 = 1315,
	F429_PK2 = 1316,
	F430_PK2 = 1317,
	F431_PK2 = 1318,
	F432_PK2 = 1319,
	F433_PK2 = 1320,
	F434_PK2 = 1321,
	F435_PK2 = 1322,
	F436_PK2 = 1323,
	F437_PK2 = 1324,
	F438_PK2 = 1325,
	F439_PK2 = 1326,
	F440_PK2 = 1327,
	F441_PK2 = 1328,
	F442_PK2 = 1329,
	F443_PK2 = 1330,
	F444_PK2 = 1331,
	F445_PK2 = 1332,
	F446_PK2 = 1333,
	F447_PK2 = 1334,
	F448_PK2 = 1335,
	F449_PK2 = 1336,
	F450_PK2 = 1337,
	F451_PK2 = 1338,
	F452_PK2 = 1339,
	F453_PK2 = 1340,
	F454_PK2 = 1341,
	F455_PK2 = 1342,
	F456_PK2 = 1343,
	F457_PK2 = 1344,
	F458_PK2 = 1345,
	F459_PK2 = 1346,
	F460_PK2 = 1347,
	F461_PK2 = 1348,
	F462_PK2 = 1349,
	F463_PK2 = 1350,
	F464_PK2 = 1351,
	F465_PK2 = 1352,
	F466_PK2 = 1353,
	F467_PK2 = 1354,
	F468_PK2 = 1355,
	F469_PK2 = 1356,
	F470_PK2 = 1357,
	F471_PK2 = 1358,
	F472_PK2 = 1359,
	F473_PK2 = 1360,
	F474_PK2 = 1361,
	F475_PK2 = 1362,
	F476_PK2 = 1363,
	F477_PK2 = 1364,
	F478_PK2 = 1365,
	F479_PK2 = 1366,
	F480_PK2 = 1367,
	F481_PK2 = 1368,
	F482_PK2 = 1369,
	F483_PK2 = 1370,
	F484_PK2 = 1371,
	F485_PK2 = 1372,
	F486_PK2 = 1373,
	F487_PK2 = 1374,
	F488_PK2 = 1375,
	F489_PK2 = 1376,
	F490_PK2 = 1377,
	F491_PK2 = 1378,
	F492_PK2 = 1379,
	F493_PK2 = 1380,
	F494_PK2 = 1381,
	F495_PK2 = 1382,
	F496_PK2 = 1383,
	F497_PK2 = 1384,
	F498_PK2 = 1385,
	F499_PK2 = 1386,
	F500_PK2 = 1387,
	F501_PK2 = 1388,
	F502_PK2 = 1389,
	F503_PK2 = 1390,
	F504_PK2 = 1391,
	F505_PK2 = 1392,
	F506_PK2 = 1393,
	F507_PK2 = 1394,
	F508_PK2 = 1395,
	F509_PK2 = 1396,
	F510_PK2 = 1397,
	F511_PK2 = 1398,
	F512_PK2 = 1399,
	F513_PK2 = 1400,
	F514_PK2 = 1401,
	F515_PK2 = 1402,
	F516_PK2 = 1403,
	F517_PK2 = 1404,
	F518_PK2 = 1405,
	F519_PK2 = 1406,
	F520_PK2 = 1407,
	F521_PK2 = 1408,
	F522_PK2 = 1409,
	F523_PK2 = 1410,
	F524_PK2 = 1411,
	F525_PK2 = 1412,
	F526_PK2 = 1413,
	F527_PK2 = 1414,
	F528_PK2 = 1415,
	F529_PK2 = 1416,
	F530_PK2 = 1417,
	F531_PK2 = 1418,
	F532_PK2 = 1419,
	F533_PK2 = 1420,
	F534_PK2 = 1421,
	F535_PK2 = 1422,
	F536_PK2 = 1423,
	F537_PK2 = 1424,
	F538_PK2 = 1425,
	F539_PK2 = 1426,
	F540_PK2 = 1427,
	F541_PK2 = 1428,
	F542_PK2 = 1429,
	F543_PK2 = 1430,
	F544_PK2 = 1431,
	F545_PK2 = 1432,
	F546_PK2 = 1433,
	F547_PK2 = 1434,
	F548_PK2 = 1435,
	F549_PK2 = 1436,
	F550_PK2 = 1437,
	F551_PK2 = 1438,
	F552_PK2 = 1439,
	F553_PK2 = 1440,
	F554_PK2 = 1441,
	F555_PK2 = 1442,
	F556_PK2 = 1443,
	F557_PK2 = 1444,
	F558_PK2 = 1445,
	F559_PK2 = 1446,
	F560_PK2 = 1447,
	F561_PK2 = 1448,
	F562_PK2 = 1449,
	F563_PK2 = 1450,
	F564_PK2 = 1451,
	F565_PK2 = 1452,
	F566_PK2 = 1453,
	F567_PK2 = 1454,
	F568_PK2 = 1455,
	F569_PK2 = 1456,
	F570_PK2 = 1457,
	F571_PK2 = 1458,
	F572_PK2 = 1459,
	F573_PK2 = 1460,
	F574_PK2 = 1461,
	F575_PK2 = 1462,
	F576_PK2 = 1463,
	F577_PK2 = 1464,
	F578_PK2 = 1465,
	F579_PK2 = 1466,
	F580_PK2 = 1467,
	F581_PK2 = 1468,
	F582_PK2 = 1469,
	F583_PK2 = 1470,
	F584_PK2 = 1471,
	F585_PK2 = 1472,
	F586_PK2 = 1473,
	F587_PK2 = 1474,
	F588_PK2 = 1475,
	F589_PK2 = 1476,
	F590_PK2 = 1477,
	F591_PK2 = 1478,
	F592_PK2 = 1479,
	F593_PK2 = 1480,
	F594_PK2 = 1481,
	F595_PK2 = 1482,
	F596_PK2 = 1483,
	F597_PK2 = 1484,
	F598_PK2 = 1485,
	F599_PK2 = 1486,
	F600_PK2 = 1487,
	F601_PK2 = 1488,
	F602_PK2 = 1489,
	F603_PK2 = 1490,
	F604_PK2 = 1491,
	F605_PK2 = 1492,
	F606_PK2 = 1493,
	F607_PK2 = 1494,
	F608_PK2 = 1495,
	F609_PK2 = 1496,
	F610_PK2 = 1497,
	F611_PK2 = 1498,
	F612_PK2 = 1499,
	F613_PK2 = 1500,
	F614_PK2 = 1501,
	F615_PK2 = 1502,
	F616_PK2 = 1503,
	F617_PK2 = 1504,
	F618_PK2 = 1505,
	F619_PK2 = 1506,
	F620_PK2 = 1507,
	F621_PK2 = 1508,
	F622_PK2 = 1509,
	F623_PK2 = 1510,
	F624_PK2 = 1511,
	F625_PK2 = 1512,
	F626_PK2 = 1513,
	F627_PK2 = 1514,
	F628_PK2 = 1515,
	F629_PK2 = 1516,
	F630_PK2 = 1517,
	F631_PK2 = 1518,
	F632_PK2 = 1519,
	F633_PK2 = 1520,
	F634_PK2 = 1521,
	F635_PK2 = 1522,
	F636_PK2 = 1523,
	F637_PK2 = 1524,
	F638_PK2 = 1525,
	F639_PK2 = 1526,
	F640_PK2 = 1527,
	F641_PK2 = 1528,
	F642_PK2 = 1529,
	F643_PK2 = 1530,
	F644_PK2 = 1531,
	F645_PK2 = 1532,
	F646_PK2 = 1533,
	F647_PK2 = 1534,
	F648_PK2 = 1535,
	F649_PK2 = 1536,
	F650_PK2 = 1537,
	F651_PK2 = 1538,
	F652_PK2 = 1539,
	F653_PK2 = 1540,
	F654_PK2 = 1541,
	F655_PK2 = 1542,
	F656_PK2 = 1543,
	F657_PK2 = 1544,
	F658_PK2 = 1545,
	F659_PK2 = 1546,
	F660_PK2 = 1547,
	F661_PK2 = 1548,
	F662_PK2 = 1549,
	F663_PK2 = 1550,
	F664_PK2 = 1551,
	F665_PK2 = 1552,
	F666_PK2 = 1553,
	F667_PK2 = 1554,
	F668_PK2 = 1555,
	F669_PK2 = 1556,
	F670_PK2 = 1557,
	F671_PK2 = 1558,
	F672_PK2 = 1559,
	F673_PK2 = 1560,
	F674_PK2 = 1561,
	F675_PK2 = 1562,
	F676_PK2 = 1563,
	F677_PK2 = 1564,
	F678_PK2 = 1565,
	F679_PK2 = 1566,
	F680_PK2 = 1567,
	F681_PK2 = 1568,
	F682_PK2 = 1569,
	F683_PK2 = 1570,
	F684_PK2 = 1571,
	F685_PK2 = 1572,
	F686_PK2 = 1573,
	F687_PK2 = 1574,
	F688_PK2 = 1575,
	F689_PK2 = 1576,
	F690_PK2 = 1577,
	F691_PK2 = 1578,
	F692_PK2 = 1579,
	F693_PK2 = 1580,
	F694_PK2 = 1581,
	F695_PK2 = 1582,
	F696_PK2 = 1583,
	F697_PK2 = 1584,
	F698_PK2 = 1585,
	F699_PK2 = 1586,
	F700_PK2 = 1587,
	F701_PK2 = 1588,
	F702_PK2 = 1589,
	F703_PK2 = 1590,
	F704_PK2 = 1591,
	F705_PK2 = 1592,
	F706_PK2 = 1593,
	F707_PK2 = 1594,
	F708_PK2 = 1595,
	F709_PK2 = 1596,
	F710_PK2 = 1597,
	F711_PK2 = 1598,
	F712_PK2 = 1599,
	F713_PK2 = 1600,
	F714_PK2 = 1601,
	F715_PK2 = 1602,
	F716_PK2 = 1603,
	F717_PK2 = 1604,
	F718_PK2 = 1605,
	F719_PK2 = 1606,
	F720_PK2 = 1607,
	F721_PK2 = 1608,
	F722_PK2 = 1609,
	F723_PK2 = 1610,
	F724_PK2 = 1611,
	F725_PK2 = 1612,
	F726_PK2 = 1613,
	F727_PK2 = 1614,
	F728_PK2 = 1615,
	F729_PK2 = 1616,
	F730_PK2 = 1617,
	F731_PK2 = 1618,
	F732_PK2 = 1619,
	F733_PK2 = 1620,
	F734_PK2 = 1621,
	F735_PK2 = 1622,
	F736_PK2 = 1623,
	F737_PK2 = 1624,
	F738_PK2 = 1625,
	F739_PK2 = 1626,
	F740_PK2 = 1627,
	F741_PK2 = 1628,
	F742_PK2 = 1629,
	F743_PK2 = 1630,
	F744_PK2 = 1631,
	F745_PK2 = 1632,
	F746_PK2 = 1633,
	F747_PK2 = 1634,
	F748_PK2 = 1635,
	F749_PK2 = 1636,
	F750_PK2 = 1637,
	F751_PK2 = 1638,
	F752_PK2 = 1639,
	F753_PK2 = 1640,
	F754_PK2 = 1641,
	F755_PK2 = 1642,
	F756_PK2 = 1643,
	F757_PK2 = 1644,
	F758_PK2 = 1645,
	F759_PK2 = 1646,
	F760_PK2 = 1647,
	F761_PK2 = 1648,
	F762_PK2 = 1649,
	F763_PK2 = 1650,
	F764_PK2 = 1651,
	F765_PK2 = 1652,
	F766_PK2 = 1653,
	F767_PK2 = 1654,
	F768_PK2 = 1655,
	F769_PK2 = 1656,
	F770_PK2 = 1657,
	F771_PK2 = 1658,
	F772_PK2 = 1659,
	F773_PK2 = 1660,
	F774_PK2 = 1661,
	F775_PK2 = 1662,
	F776_PK2 = 1663,
	F777_PK2 = 1664,
	F778_PK2 = 1665,
	F779_PK2 = 1666,
	F780_PK2 = 1667,
	F781_PK2 = 1668,
	F782_PK2 = 1669,
	F783_PK2 = 1670,
	F784_PK2 = 1671,
	F785_PK2 = 1672,
	F786_PK2 = 1673,
	F787_PK2 = 1674,
	F788_PK2 = 1675,
	F789_PK2 = 1676,
	F790_PK2 = 1677,
	F791_PK2 = 1678,
	F792_PK2 = 1679,
	F793_PK2 = 1680,
	F794_PK2 = 1681,
	F795_PK2 = 1682,
	F796_PK2 = 1683,
	F797_PK2 = 1684,
	F798_PK2 = 1685,
	F799_PK2 = 1686,
	F800_PK2 = 1687,
	F801_PK2 = 1688,
	F802_PK2 = 1689,
	F803_PK2 = 1690,
	F804_PK2 = 1691,
	F805_PK2 = 1692,
	F806_PK2 = 1693,
	F807_PK2 = 1694,
	F808_PK2 = 1695,
	F809_PK2 = 1696,
	F810_PK2 = 1697,
	F811_PK2 = 1698,
	F812_PK2 = 1699,
	F813_PK2 = 1700,
	F814_PK2 = 1701,
	F815_PK2 = 1702,
	F816_PK2 = 1703,
	F817_PK2 = 1704,
	F818_PK2 = 1705,
	F819_PK2 = 1706,
	F820_PK2 = 1707,
	F821_PK2 = 1708,
	F822_PK2 = 1709,
	F823_PK2 = 1710,
	F824_PK2 = 1711,
	F825_PK2 = 1712,
	F826_PK2 = 1713,
	F827_PK2 = 1714,
	F828_PK2 = 1715,
	F829_PK2 = 1716,
	F830_PK2 = 1717,
	F831_PK2 = 1718,
	F832_PK2 = 1719,
	F833_PK2 = 1720,
	F834_PK2 = 1721,
	F835_PK2 = 1722,
	F836_PK2 = 1723,
	F837_PK2 = 1724,
	F838_PK2 = 1725,
	F839_PK2 = 1726,
	F840_PK2 = 1727,
	F841_PK2 = 1728,
	F842_PK2 = 1729,
	F843_PK2 = 1730,
	F844_PK2 = 1731,
	F845_PK2 = 1732,
	F846_PK2 = 1733,
	F847_PK2 = 1734,
	F848_PK2 = 1735,
	F849_PK2 = 1736,
	F850_PK2 = 1737,
	F851_PK2 = 1738,
	F852_PK2 = 1739,
	F853_PK2 = 1740,
	F854_PK2 = 1741,
	F855_PK2 = 1742,
	F856_PK2 = 1743,
	F857_PK2 = 1744,
	F858_PK2 = 1745,
	F859_PK2 = 1746,
	F860_PK2 = 1747,
	F861_PK2 = 1748,
	F862_PK2 = 1749,
	F863_PK2 = 1750,
	F864_PK2 = 1751,
	F865_PK2 = 1752,
	F866_PK2 = 1753,
	F867_PK2 = 1754,
	F868_PK2 = 1755,
	F869_PK2 = 1756,
	F870_PK2 = 1757,
	F871_PK2 = 1758,
	F872_PK2 = 1759,
	F873_PK2 = 1760,
	F874_PK2 = 1761,
	F875_PK2 = 1762,
	F876_PK2 = 1763,
	F877_PK2 = 1764,
	F878_PK2 = 1765,
	F879_PK2 = 1766,
	F880_PK2 = 1767,
	F881_PK2 = 1768,
	F882_PK2 = 1769,
	F883_PK2 = 1770,
	F884_PK2 = 1771,
	F885_PK2 = 1772,
	F886_PK2 = 1773,
	F887_PK2 = 1774,
	F888_PK2 = 1775,
	F889_PK2 = 1776,
	F890_PK2 = 1777,
	F891_PK2 = 1778,
	F892_PK2 = 1779,
	F893_PK2 = 1780,
	F894_PK2 = 1781,
	F895_PK2 = 1782,
	F896_PK2 = 1783,
	F897_PK2 = 1784,
	F898_PK2 = 1785,
	F899_PK2 = 1786,
	F900_PK2 = 1787,
	F901_PK2 = 1788,
	F902_PK2 = 1789,
	F903_PK2 = 1790,
	F904_PK2 = 1791,
	F905_PK2 = 1792,
	F906_PK2 = 1793,
	F907_PK2 = 1794,
	F908_PK2 = 1795,
	F909_PK2 = 1796,
	F910_PK2 = 1797,
	F911_PK2 = 1798,
	F912_PK2 = 1799,
	F913_PK2 = 1800,
	F914_PK2 = 1801,
	F915_PK2 = 1802,
	F916_PK2 = 1803,
	F917_PK2 = 1804,
	F918_PK2 = 1805,
	F919_PK2 = 1806,
	F920_PK2 = 1807,
	F921_PK2 = 1808,
	F922_PK2 = 1809,
	F923_PK2 = 1810,
	F924_PK2 = 1811,
	F925_PK2 = 1812,
	F926_PK2 = 1813,
	F927_PK2 = 1814,
	F928_PK2 = 1815,
	F929_PK2 = 1816,
	F930_PK2 = 1817,
	F931_PK2 = 1818,
	F932_PK2 = 1819,
	F933_PK2 = 1820,
	F934_PK2 = 1821,
	F935_PK2 = 1822,
	F936_PK2 = 1823,
	F937_PK2 = 1824,
	F938_PK2 = 1825,
	F939_PK2 = 1826,
	F940_PK2 = 1827,
	F941_PK2 = 1828,
	F942_PK2 = 1829,
	F943_PK2 = 1830,
	F944_PK2 = 1831,
	F945_PK2 = 1832,
	F946_PK2 = 1833,
	F947_PK2 = 1834,
	F948_PK2 = 1835,
	F949_PK2 = 1836,
	F950_PK2 = 1837,
	F951_PK2 = 1838,
	F952_PK2 = 1839,
	F953_PK2 = 1840,
	F954_PK2 = 1841,
	F955_PK2 = 1842,
	F956_PK2 = 1843,
	F957_PK2 = 1844,
	F958_PK2 = 1845,
	F959_PK2 = 1846,
	F960_PK2 = 1847,
	F961_PK2 = 1848,
	F962_PK2 = 1849,
	F963_PK2 = 1850,
	F964_PK2 = 1851,
	F965_PK2 = 1852,
	F966_PK2 = 1853,
	F967_PK2 = 1854,
	F968_PK2 = 1855,
	F969_PK2 = 1856,
	F970_PK2 = 1857,
	F971_PK2 = 1858,
	F972_PK2 = 1859,
	F973_PK2 = 1860,
	F974_PK2 = 1861,
	F975_PK2 = 1862,
	F976_PK2 = 1863,
	F977_PK2 = 1864,
	F978_PK2 = 1865,
	F979_PK2 = 1866,
	F980_PK2 = 1867,
	F981_PK2 = 1868,
	F982_PK2 = 1869,
	F983_PK2 = 1870,
	F984_PK2 = 1871,
	F985_PK2 = 1872,
	F986_PK2 = 1873,
	F987_PK2 = 1874,
	F988_PK2 = 1875,
	F989_PK2 = 1876,
	F990_PK2 = 1877,
	F991_PK2 = 1878,
	F992_PK2 = 1879,
	F993_PK2 = 1880,
	F994_PK2 = 1881,
	F995_PK2 = 1882,
	F996_PK2 = 1883,
	F997_PK2 = 1884,
	F998_PK2 = 1885,
	F999_PK2 = 1886,
	D000_PK2 = 1887,
	D001_PK2 = 1888,
	D002_PK2 = 1889,
	D003_PK2 = 1890,
	D004_PK2 = 1891,
	D005_PK2 = 1892,
	D006_PK2 = 1893,
	D007_PK2 = 1894,
	D008_PK2 = 1895,
	D009_PK2 = 1896,
	D010_PK2 = 1897,
	D100_PK2 = 1898,
	D101_PK2 = 1899,
	D102_PK2 = 1900,
	D103_PK2 = 1901,
	D104_PK2 = 1902,
	D105_PK2 = 1903,
	D106_PK2 = 1904,
	D107_PK2 = 1905,
	D108_PK2 = 1906,
	D109_PK2 = 1907,
	D110_PK2 = 1908,
	D111_PK2 = 1909,
	D112_PK2 = 1910,
	D113_PK2 = 1911,
	D114_PK2 = 1912,
	D115_PK2 = 1913,
	D116_PK2 = 1914,
	D117_PK2 = 1915,
	D118_PK2 = 1916,
	D119_PK2 = 1917,
	D120_PK2 = 1918,
	D121_PK2 = 1919,
	D122_PK2 = 1920,
	D123_PK2 = 1921,
	D124_PK2 = 1922,
	D125_PK2 = 1923,
	D126_PK2 = 1924,
	D127_PK2 = 1925,
	D128_PK2 = 1926,
	D129_PK2 = 1927,
	D130_PK2 = 1928,
	D200_PK2 = 1929,
	D201_PK2 = 1930,
	D202_PK2 = 1931,
	D203_PK2 = 1932,
	D204_PK2 = 1933,
	D205_PK2 = 1934,
	D206_PK2 = 1935,
	D207_PK2 = 1936,
	D208_PK2 = 1937,
	D209_PK2 = 1938,
	D210_PK2 = 1939,
	D211_PK2 = 1940,
	D212_PK2 = 1941,
	D213_PK2 = 1942,
	D214_PK2 = 1943,
	D215_PK2 = 1944,
	D216_PK2 = 1945,
	D217_PK2 = 1946,
	D218_PK2 = 1947,
	D219_PK2 = 1948,
	D220_PK2 = 1949,
	D221_PK2 = 1950,
	D222_PK2 = 1951,
	D223_PK2 = 1952,
	D224_PK2 = 1953,
	D225_PK2 = 1954,
	D226_PK2 = 1955,
	D227_PK2 = 1956,
	D228_PK2 = 1957,
	D229_PK2 = 1958,
	D230_PK2 = 1959,
	D231_PK2 = 1960,
	D232_PK2 = 1961,
	D300_PK2 = 1962,
	D301_PK2 = 1963,
	D302_PK2 = 1964,
	D303_PK2 = 1965,
	D304_PK2 = 1966,
	D305_PK2 = 1967,
	D306_PK2 = 1968,
	D307_PK2 = 1969,
	D308_PK2 = 1970,
	D309_PK2 = 1971,
	D310_PK2 = 1972,
	D311_PK2 = 1973,
	D312_PK2 = 1974,
	D313_PK2 = 1975,
	D314_PK2 = 1976,
	D315_PK2 = 1977,
	D316_PK2 = 1978,
	D317_PK2 = 1979,
	D318_PK2 = 1980,
	D319_PK2 = 1981,
	D320_PK2 = 1982,
	D321_PK2 = 1983,
	D322_PK2 = 1984,
	D323_PK2 = 1985,
	D324_PK2 = 1986,
	D325_PK2 = 1987,
	D326_PK2 = 1988,
	D327_PK2 = 1989,
	D328_PK2 = 1990,
	D329_PK2 = 1991,
	D330_PK2 = 1992,
	D331_PK2 = 1993,
	D332_PK2 = 1994,
	D333_PK2 = 1995,
	D334_PK2 = 1996,
	D335_PK2 = 1997,
	D336_PK2 = 1998,
	D337_PK2 = 1999,
	D338_PK2 = 2000,
	D339_PK2 = 2001,
	D340_PK2 = 2002,
	D400_PK2 = 2003,
	D800_PK2 = 2004,
	D801_PK2 = 2005,
	D802_PK2 = 2006,
	D803_PK2 = 2007,
	D804_PK2 = 2008,
	D805_PK2 = 2009,
	D806_PK2 = 2010,
	D807_PK2 = 2011,
	D808_PK2 = 2012,
	D809_PK2 = 2013,
	D810_PK2 = 2014,
	I000_PLAY_CAMERA_PK2 = 2015,
	I001_PLAY_LIGHT_PK2 = 2016,
	I002_NOTE_PK2 = 2017,
	I003_GYAKUSATU_PK2 = 2018,
	I004_DUMMY_PK2 = 2019,
	I005_KEY_PK2 = 2020,
	I006_MEGANE_PK2 = 2021,
	I007_MEGANE_PK2 = 2022,
	I008_GANTAI_PK2 = 2023,
	BGM_START_DMY = 2024,
	DANMATU_MALE_HXD = 2025,
	DANMATU_MALE_STR = 2026,
	DANMATU_FEMALE_HXD = 2027,
	DANMATU_FEMALE_STR = 2028,
	ESE_KUSAKI_ZAWAMEKI_HXD = 2029,
	ESE_KUSAKI_ZAWAMEKI_STR = 2030,
	ESE_KODOMO_HASIRIMAWARI_HXD = 2031,
	ESE_KODOMO_HASIRIMAWARI_STR = 2032,
	KAN043_RAKURAI_HXD = 2033,
	KAN043_RAKURAI_STR = 2034,
	KAN042_KAMINARI_HXD = 2035,
	KAN042_KAMINARI_STR = 2036,
	ESE_KAMINARI_HXD = 2037,
	ESE_KAMINARI_STR = 2038,
	ESE_HINADAN_KAGI_HXD = 2039,
	ESE_HINADAN_KAGI_STR = 2040,
	KAN020_TYOU_HXD = 2041,
	KAN020_TYOU_STR = 2042,
	KAN003_KUREHA_HXD = 2043,
	KAN003_KUREHA_STR = 2044,
	KAN002_KUTIKI_HXD = 2045,
	KAN002_KUTIKI_STR = 2046,
	VOICE_MURAREI_HXD = 2047,
	VOICE_MURAREI_STR = 2048,
	YKN25_KUSA_HXD = 2049,
	YKN25_KUSA_STR = 2050,
	YKN21_IMIBITO_HXD = 2051,
	YKN21_IMIBITO_STR = 2052,
	YKN20_GUUJIREI_HXD = 2053,
	YKN20_GUUJIREI_STR = 2054,
	YKN19_SUISHI_HXD = 2055,
	YKN19_SUISHI_STR = 2056,
	YKN15_KARAKURISHI_HXD = 2057,
	YKN15_KARAKURISHI_STR = 2058,
	YKN14_KUBIORE_HXD = 2059,
	YKN14_KUBIORE_STR = 2060,
	YKN07_KUSABI3_HXD = 2061,
	YKN07_KUSABI3_STR = 2062,
	YKN06_KUSABI2_HXD = 2063,
	YKN06_KUSABI2_STR = 2064,
	YKN05_KUSABI1_HXD = 2065,
	YKN05_KUSABI1_STR = 2066,
	SCENE0240_HXD = 2067,
	SCENE0240_STR = 2068,
	SCENE0210_HXD = 2069,
	SCENE0210_STR = 2070,
	SCENE0190_HXD = 2071,
	SCENE0190_STR = 2072,
	SCENE0170_HXD = 2073,
	SCENE0170_STR = 2074,
	SCENE0160_HXD = 2075,
	SCENE0160_STR = 2076,
	SCENE0150_HXD = 2077,
	SCENE0150_STR = 2078,
	SCENE0133_HXD = 2079,
	SCENE0133_STR = 2080,
	SCENE0132_HXD = 2081,
	SCENE0132_STR = 2082,
	SCENE0130_HXD = 2083,
	SCENE0130_STR = 2084,
	YKN12_HAHAOYAREI_HXD = 2085,
	YKN12_HAHAOYAREI_STR = 2086,
	YKN10_WANINNGYOU_HXD = 2087,
	YKN10_WANINNGYOU_STR = 2088,
	FLASHOUT_HXD = 2089,
	FLASHOUT_STR = 2090,
	FLASHIN_HXD = 2091,
	FLASHIN_STR = 2092,
	YKN16_ONIKODOMO_HXD = 2093,
	YKN16_ONIKODOMO_STR = 2094,
	YKN08_CHITOSE_HXD = 2095,
	YKN08_CHITOSE_STR = 2096,
	YKN31_SAEREI3_HXD = 2097,
	YKN31_SAEREI3_STR = 2098,
	YKN03_SAEREI2_HXD = 2099,
	YKN03_SAEREI2_STR = 2100,
	YKN02_SAEREI1_HXD = 2101,
	YKN02_SAEREI1_STR = 2102,
	BGM010_PRM90_HXD = 2103,
	BGM010_PRM90_STR = 2104,
	ESE_DOOR_HUUINDOOR_HXD = 2105,
	ESE_DOOR_HUUINDOOR_STR = 2106,
	MENYU_HXD = 2107,
	MENYU_STR = 2108,
	ANE_YARARE_HXD = 2109,
	ANE_YARARE_STR = 2110,
	KAN033_NAZO_HXD = 2111,
	KAN033_NAZO_STR = 2112,
	KAN032_OKYOU_HXD = 2113,
	KAN032_OKYOU_STR = 2114,
	YKN13_HAKO_HXD = 2115,
	YKN13_HAKO_STR = 2116,
	RT002_NER_HXD = 2117,
	RT002_NER_STR = 2118,
	MIYAKO_AG_10_HXD = 2119,
	MIYAKO_AG_10_STR = 2120,
	MIYAKO_AG_09_HXD = 2121,
	MIYAKO_AG_09_STR = 2122,
	MIYAKO_AG_08_HXD = 2123,
	MIYAKO_AG_08_STR = 2124,
	MIYAKO_AG_07_HXD = 2125,
	MIYAKO_AG_07_STR = 2126,
	MIYAKO_AG_06_HXD = 2127,
	MIYAKO_AG_06_STR = 2128,
	MIYAKO_AG_05_HXD = 2129,
	MIYAKO_AG_05_STR = 2130,
	MIYAKO_AG_04_HXD = 2131,
	MIYAKO_AG_04_STR = 2132,
	MIYAKO_AG_03_HXD = 2133,
	MIYAKO_AG_03_STR = 2134,
	MIYAKO_AG_02_HXD = 2135,
	MIYAKO_AG_02_STR = 2136,
	MIYAKO_AG_01_HXD = 2137,
	MIYAKO_AG_01_STR = 2138,
	MIYAKO_AG_00_HXD = 2139,
	MIYAKO_AG_00_STR = 2140,
	ESE_DOOR_MON_SIME_HXD = 2141,
	ESE_DOOR_MON_SIME_STR = 2142,
	ESE_DOOR_MON_OPEN_HXD = 2143,
	ESE_DOOR_MON_OPEN_STR = 2144,
	ESE_DOOR_FUSUMA_SIME_HXD = 2145,
	ESE_DOOR_FUSUMA_SIME_STR = 2146,
	ITSUKI_TALK_05_HXD = 2147,
	ITSUKI_TALK_05_STR = 2148,
	ITSUKI_TALK_04_HXD = 2149,
	ITSUKI_TALK_04_STR = 2150,
	ITSUKI_TALK_03_HXD = 2151,
	ITSUKI_TALK_03_STR = 2152,
	ITSUKI_TALK_02_HXD = 2153,
	ITSUKI_TALK_02_STR = 2154,
	MAYU_TALK_36_HXD = 2155,
	MAYU_TALK_36_STR = 2156,
	MAYU_TALK_35_HXD = 2157,
	MAYU_TALK_35_STR = 2158,
	MAYU_TALK_34_HXD = 2159,
	MAYU_TALK_34_STR = 2160,
	MAYU_TALK_33_HXD = 2161,
	MAYU_TALK_33_STR = 2162,
	MAYU_TALK_32_HXD = 2163,
	MAYU_TALK_32_STR = 2164,
	MAYU_TALK_31_HXD = 2165,
	MAYU_TALK_31_STR = 2166,
	MAYU_TALK_30_HXD = 2167,
	MAYU_TALK_30_STR = 2168,
	MAYU_TALK_29_HXD = 2169,
	MAYU_TALK_29_STR = 2170,
	MAYU_TALK_28_HXD = 2171,
	MAYU_TALK_28_STR = 2172,
	MAYU_TALK_27_HXD = 2173,
	MAYU_TALK_27_STR = 2174,
	MAYU_TALK_26_HXD = 2175,
	MAYU_TALK_26_STR = 2176,
	MAYU_TALK_25_HXD = 2177,
	MAYU_TALK_25_STR = 2178,
	MAYU_TALK_24_HXD = 2179,
	MAYU_TALK_24_STR = 2180,
	MAYU_TALK_23_HXD = 2181,
	MAYU_TALK_23_STR = 2182,
	MAYU_TALK_21_HXD = 2183,
	MAYU_TALK_21_STR = 2184,
	MAYU_TALK_20_HXD = 2185,
	MAYU_TALK_20_STR = 2186,
	MAYU_TALK_19_HXD = 2187,
	MAYU_TALK_19_STR = 2188,
	MAYU_TALK_18_HXD = 2189,
	MAYU_TALK_18_STR = 2190,
	MAYU_TALK_17_HXD = 2191,
	MAYU_TALK_17_STR = 2192,
	MAYU_TALK_16_HXD = 2193,
	MAYU_TALK_16_STR = 2194,
	MAYU_TALK_15_HXD = 2195,
	MAYU_TALK_15_STR = 2196,
	MAYU_TALK_14_HXD = 2197,
	MAYU_TALK_14_STR = 2198,
	MAYU_TALK_13_HXD = 2199,
	MAYU_TALK_13_STR = 2200,
	MAYU_TALK_12_HXD = 2201,
	MAYU_TALK_12_STR = 2202,
	MAYU_TALK_11_HXD = 2203,
	MAYU_TALK_11_STR = 2204,
	MAYU_TALK_10_HXD = 2205,
	MAYU_TALK_10_STR = 2206,
	MAYU_TALK_09_HXD = 2207,
	MAYU_TALK_09_STR = 2208,
	MAYU_TALK_08_HXD = 2209,
	MAYU_TALK_08_STR = 2210,
	MAYU_TALK_07_HXD = 2211,
	MAYU_TALK_07_STR = 2212,
	MAYU_TALK_06_HXD = 2213,
	MAYU_TALK_06_STR = 2214,
	MAYU_TALK_05_HXD = 2215,
	MAYU_TALK_05_STR = 2216,
	MAYU_TALK_04_HXD = 2217,
	MAYU_TALK_04_STR = 2218,
	MAYU_TALK_03_HXD = 2219,
	MAYU_TALK_03_STR = 2220,
	MAYU_TALK_02_HXD = 2221,
	MAYU_TALK_02_STR = 2222,
	MAYU_TALK_01_HXD = 2223,
	MAYU_TALK_01_STR = 2224,
	MAYU_TALK_00_HXD = 2225,
	MAYU_TALK_00_STR = 2226,
	ITSUKI_TALK_01_HXD = 2227,
	ITSUKI_TALK_01_STR = 2228,
	ESE_DOOR_FUSUMA_OPEN_HXD = 2229,
	ESE_DOOR_FUSUMA_OPEN_STR = 2230,
	ITSUKI_TALK_00_HXD = 2231,
	ITSUKI_TALK_00_STR = 2232,
	YKN09_RAKKA_HXD = 2233,
	YKN09_RAKKA_STR = 2234,
	BGM004_MENU1_HXD = 2235,
	BGM004_MENU1_STR = 2236,
	BGM000_TITLE_HXD = 2237,
	BGM000_TITLE_STR = 2238,
	YKN30_MAKIREI_HXD = 2239,
	YKN30_MAKIREI_STR = 2240,
	YKN22_MURAREI_HXD = 2241,
	YKN22_MURAREI_STR = 2242,
	YKN00_YAMI_HXD = 2243,
	YKN00_YAMI_STR = 2244,
	SHOWTITLE_HXD = 2245,
	SHOWTITLE_STR = 2246,
	KAN037_CONTE_HXD = 2247,
	KAN037_CONTE_STR = 2248,
	KAN036_NANIKA_HXD = 2249,
	KAN036_NANIKA_STR = 2250,
	KAN035_MENNIWA_HXD = 2251,
	KAN035_MENNIWA_STR = 2252,
	KAN029_SANDOU_HXD = 2253,
	KAN029_SANDOU_STR = 2254,
	KAN028_MURA1_HXD = 2255,
	KAN028_MURA1_STR = 2256,
	KAN025_MISONO_HXD = 2257,
	KAN025_MISONO_STR = 2258,
	KAN023_OKUNAI1_HXD = 2259,
	KAN023_OKUNAI1_STR = 2260,
	KAN022_HOSOI_HXD = 2261,
	KAN022_HOSOI_STR = 2262,
	KAN021_HIROI_HXD = 2263,
	KAN021_HIROI_STR = 2264,
	KAN018_SAE_HXD = 2265,
	KAN018_SAE_STR = 2266,
	KAN017_RHYTHM_HXD = 2267,
	KAN017_RHYTHM_STR = 2268,
	KAN007_KUROSAWA_HXD = 2269,
	KAN007_KUROSAWA_STR = 2270,
	KAN006_TACHIBANA_HXD = 2271,
	KAN006_TACHIBANA_STR = 2272,
	KAN005_KIRYUU_HXD = 2273,
	KAN005_KIRYUU_STR = 2274,
	ESE001_KNOCKDOOR_HXD = 2275,
	ESE001_KNOCKDOOR_STR = 2276,
	KAN004_OUSAKA_HXD = 2277,
	KAN004_OUSAKA_STR = 2278,
	SCENE0120_HXD = 2279,
	SCENE0120_STR = 2280,
	SCENE0121_HXD = 2281,
	SCENE0121_STR = 2282,
	SCENE0122_HXD = 2283,
	SCENE0122_STR = 2284,
	SCENE0140_HXD = 2285,
	SCENE0140_STR = 2286,
	KAN010_HASINO_UE_HXD = 2287,
	KAN010_HASINO_UE_STR = 2288,
	YKN26_KUSA2_HXD = 2289,
	YKN26_KUSA2_STR = 2290,
	SCENE0230_HXD = 2291,
	SCENE0230_STR = 2292,
	SCENE0231_HXD = 2293,
	SCENE0231_STR = 2294,
	SCENE0350_HXD = 2295,
	SCENE0350_STR = 2296,
	SCENE0352_HXD = 2297,
	SCENE0352_STR = 2298,
	SCENE9001_HXD = 2299,
	SCENE9001_STR = 2300,
	YKN23_MURAREI_B_HXD = 2301,
	YKN23_MURAREI_B_STR = 2302,
	YKN24_MURAREI_C_HXD = 2303,
	YKN24_MURAREI_C_STR = 2304,
	ESE_TOUSYUTALK_HXD = 2305,
	ESE_TOUSYUTALK_STR = 2306,
	GUUJI_AG_00_HXD = 2307,
	GUUJI_AG_00_STR = 2308,
	MAKABE_AG_00_HXD = 2309,
	MAKABE_AG_00_STR = 2310,
	MURA_AG_00_HXD = 2311,
	MURA_AG_00_STR = 2312,
	MURA_AG_01_HXD = 2313,
	MURA_AG_01_STR = 2314,
	MURA_AG_02_HXD = 2315,
	MURA_AG_02_STR = 2316,
	TOUSYU_AG_00_HXD = 2317,
	TOUSYU_AG_00_STR = 2318,
	TOUSYU_AG_01_HXD = 2319,
	TOUSYU_AG_01_STR = 2320,
	TOUSYU_AG_02_HXD = 2321,
	TOUSYU_AG_02_STR = 2322,
	ESE_GUUJITALK_HXD = 2323,
	ESE_GUUJITALK_STR = 2324,
	SCENE0410_HXD = 2325,
	SCENE0410_STR = 2326,
	SCENE9002_HXD = 2327,
	SCENE9002_STR = 2328,
	SCENE0330_HXD = 2329,
	SCENE0330_STR = 2330,
	SCENE0340_HXD = 2331,
	SCENE0340_STR = 2332,
	SCENE9302_HXD = 2333,
	SCENE9302_STR = 2334,
	SCENE9501_HXD = 2335,
	SCENE9501_STR = 2336,
	ESE_WASAN_01_HXD = 2337,
	ESE_WASAN_01_STR = 2338,
	ESE_WASAN_00_HXD = 2339,
	ESE_WASAN_00_STR = 2340,
	ITSUKI_TALK_06_HXD = 2341,
	ITSUKI_TALK_06_STR = 2342,
	ITSUKI_TALK_07_HXD = 2343,
	ITSUKI_TALK_07_STR = 2344,
	ITSUKI_TALK_08_HXD = 2345,
	ITSUKI_TALK_08_STR = 2346,
	ITSUKI_TALK_09_HXD = 2347,
	ITSUKI_TALK_09_STR = 2348,
	ITSUKI_TALK_10_HXD = 2349,
	ITSUKI_TALK_10_STR = 2350,
	MAYU_TALK_37_HXD = 2351,
	MAYU_TALK_37_STR = 2352,
	MAYU_TALK_38_HXD = 2353,
	MAYU_TALK_38_STR = 2354,
	MAYU_TALK_39_HXD = 2355,
	MAYU_TALK_39_STR = 2356,
	MAYU_TALK_40_HXD = 2357,
	MAYU_TALK_40_STR = 2358,
	MAYU_TALK_41_HXD = 2359,
	MAYU_TALK_41_STR = 2360,
	ESE_HASHIGO_HXD = 2361,
	ESE_HASHIGO_BD = 2362,
	ESE_HASHIGO_STR = 2363,
	ESE_HIKIDO_HXD = 2364,
	ESE_HIKIDO_STR = 2365,
	ESE_OSHIIRE_GOTO_HXD = 2366,
	ESE_OSHIIRE_GOTO_STR = 2367,
	ESE_OSHIIRE_SUZU_HXD = 2368,
	ESE_OSHIIRE_SUZU_STR = 2369,
	ESE_TOBIRATATAKI_HXD = 2370,
	ESE_TOBIRATATAKI_STR = 2371,
	ESE_YUKASHITA_HXD = 2372,
	ESE_YUKASHITA_STR = 2373,
	KAN_AME_00_HXD = 2374,
	KAN_AME_00_STR = 2375,
	KAN_WASAN_00_HXD = 2376,
	KAN_WASAN_00_STR = 2377,
	KAN_WASAN_01_HXD = 2378,
	KAN_WASAN_01_STR = 2379,
	KAN_WASAN_02_HXD = 2380,
	KAN_WASAN_02_STR = 2381,
	ESE_ONECHAN00_HXD = 2382,
	ESE_ONECHAN00_STR = 2383,
	ESE_ONECHAN01_HXD = 2384,
	ESE_ONECHAN01_STR = 2385,
	ESE_ONECHAN02_HXD = 2386,
	ESE_ONECHAN02_STR = 2387,
	ESE_ONECHAN03_HXD = 2388,
	ESE_ONECHAN03_STR = 2389,
	NINGYOU_AG_01_HXD = 2390,
	NINGYOU_AG_01_STR = 2391,
	NINGYOU_AG_02_HXD = 2392,
	NINGYOU_AG_02_STR = 2393,
	TOUSYU_AG_03_HXD = 2394,
	TOUSYU_AG_03_STR = 2395,
	GD042_HXD = 2396,
	GD042_STR = 2397,
	GD053_HXD = 2398,
	GD053_STR = 2399,
	REISEKI_VOISE_00_HXD = 2400,
	REISEKI_VOISE_00_STR = 2401,
	REISEKI_VOISE_01_HXD = 2402,
	REISEKI_VOISE_01_STR = 2403,
	REISEKI_VOISE_02_HXD = 2404,
	REISEKI_VOISE_02_STR = 2405,
	REISEKI_VOISE_03_HXD = 2406,
	REISEKI_VOISE_03_STR = 2407,
	REISEKI_VOISE_04_HXD = 2408,
	REISEKI_VOISE_04_STR = 2409,
	REISEKI_VOISE_05_HXD = 2410,
	REISEKI_VOISE_05_STR = 2411,
	REISEKI_VOISE_06_HXD = 2412,
	REISEKI_VOISE_06_STR = 2413,
	REISEKI_VOISE_07_HXD = 2414,
	REISEKI_VOISE_07_STR = 2415,
	REISEKI_VOISE_08_HXD = 2416,
	REISEKI_VOISE_08_STR = 2417,
	REISEKI_VOISE_09_HXD = 2418,
	REISEKI_VOISE_09_STR = 2419,
	REISEKI_VOISE_10_HXD = 2420,
	REISEKI_VOISE_10_STR = 2421,
	REISEKI_VOISE_11_HXD = 2422,
	REISEKI_VOISE_11_STR = 2423,
	ITSUKI_TALK_11_HXD = 2424,
	ITSUKI_TALK_11_STR = 2425,
	ITSUKI_TALK_12_HXD = 2426,
	ITSUKI_TALK_12_STR = 2427,
	ITSUKI_TALK_13_HXD = 2428,
	ITSUKI_TALK_13_STR = 2429,
	ITSUKI_TALK_14_HXD = 2430,
	ITSUKI_TALK_14_STR = 2431,
	ITSUKI_TALK_15_HXD = 2432,
	ITSUKI_TALK_15_STR = 2433,
	ITSUKI_TALK_16_HXD = 2434,
	ITSUKI_TALK_16_STR = 2435,
	ITSUKI_TALK_17_HXD = 2436,
	ITSUKI_TALK_17_STR = 2437,
	ITSUKI_TALK_18_HXD = 2438,
	ITSUKI_TALK_18_STR = 2439,
	ITSUKI_TALK_19_HXD = 2440,
	ITSUKI_TALK_19_STR = 2441,
	ITSUKI_TALK_20_HXD = 2442,
	ITSUKI_TALK_20_STR = 2443,
	ITSUKI_TALK_21_HXD = 2444,
	ITSUKI_TALK_21_STR = 2445,
	ITSUKI_TALK_22_HXD = 2446,
	ITSUKI_TALK_22_STR = 2447,
	ITSUKI_TALK_23_HXD = 2448,
	ITSUKI_TALK_23_STR = 2449,
	MAYU_TALK_42_HXD = 2450,
	MAYU_TALK_42_STR = 2451,
	MAYU_TALK_43_HXD = 2452,
	MAYU_TALK_43_STR = 2453,
	MAYU_TALK_44_HXD = 2454,
	MAYU_TALK_44_STR = 2455,
	MAYU_TALK_45_HXD = 2456,
	MAYU_TALK_45_STR = 2457,
	MAYU_TALK_46_HXD = 2458,
	MAYU_TALK_46_STR = 2459,
	MAYU_TALK_47_HXD = 2460,
	MAYU_TALK_47_STR = 2461,
	MAYU_TALK_48_HXD = 2462,
	MAYU_TALK_48_STR = 2463,
	MAYU_TALK_49_HXD = 2464,
	MAYU_TALK_49_STR = 2465,
	MAYU_TALK_50_HXD = 2466,
	MAYU_TALK_50_STR = 2467,
	MAYU_TALK_51_HXD = 2468,
	MAYU_TALK_51_STR = 2469,
	MAYU_TALK_52_HXD = 2470,
	MAYU_TALK_52_STR = 2471,
	MAYU_TALK_53_HXD = 2472,
	MAYU_TALK_53_STR = 2473,
	MAYU_TALK_54_HXD = 2474,
	MAYU_TALK_54_STR = 2475,
	MAYU_TALK_55_HXD = 2476,
	MAYU_TALK_55_STR = 2477,
	MAYU_TALK_56_HXD = 2478,
	MAYU_TALK_56_STR = 2479,
	MAYU_TALK_57_HXD = 2480,
	MAYU_TALK_57_STR = 2481,
	MAYU_TALK_58_HXD = 2482,
	MAYU_TALK_58_STR = 2483,
	MAYU_TALK_59_HXD = 2484,
	MAYU_TALK_59_STR = 2485,
	MAYU_TALK_60_HXD = 2486,
	MAYU_TALK_60_STR = 2487,
	MAYU_TALK_61_HXD = 2488,
	MAYU_TALK_61_STR = 2489,
	MAYU_TALK_62_HXD = 2490,
	MAYU_TALK_62_STR = 2491,
	MAYU_TALK_63_HXD = 2492,
	MAYU_TALK_63_STR = 2493,
	YKN04_MASUMI_HXD = 2494,
	YKN04_MASUMI_STR = 2495,
	ESE_SHIKAKE_HXD = 2496,
	ESE_SHIKAKE_STR = 2497,
	SCENE0110_HXD = 2498,
	SCENE0110_STR = 2499,
	SCENE0510_HXD = 2500,
	SCENE0510_STR = 2501,
	SCENE0520_HXD = 2502,
	SCENE0520_STR = 2503,
	YKN11_FUTAGOREI_HXD = 2504,
	YKN11_FUTAGOREI_STR = 2505,
	YKN17_ONIKODOMO_B_HXD = 2506,
	YKN17_ONIKODOMO_B_STR = 2507,
	YKN18_ONIKODOMO_C_HXD = 2508,
	YKN18_ONIKODOMO_C_STR = 2509,
	YKN27_TOUSYU_HXD = 2510,
	YKN27_TOUSYU_STR = 2511,
	KAN044_CHIKA_HXD = 2512,
	KAN044_CHIKA_STR = 2513,
	BGM005_MENU2_HXD = 2514,
	BGM005_MENU2_STR = 2515,
	BGM006_CLEAR_HXD = 2516,
	BGM006_CLEAR_STR = 2517,
	BGM007_WIN_HXD = 2518,
	BGM007_WIN_STR = 2519,
	BGM008_LOSE_HXD = 2520,
	BGM008_LOSE_STR = 2521,
	BGM009_START_HXD = 2522,
	BGM009_START_STR = 2523,
	MAKABE_AG_01_HXD = 2524,
	MAKABE_AG_01_STR = 2525,
	MAKABE_AG_02_HXD = 2526,
	MAKABE_AG_02_STR = 2527,
	ESE_CHITOSE_RUN_HXD = 2528,
	ESE_CHITOSE_RUN_STR = 2529,
	ESE_CHITOSE_RUN_FO_HXD = 2530,
	ESE_CHITOSE_RUN_FO_STR = 2531,
	CHITOSE_AG_00_HXD = 2532,
	CHITOSE_AG_00_STR = 2533,
	KDM_BY_AG_00_HXD = 2534,
	KDM_BY_AG_00_STR = 2535,
	KDM_BY_AG_01_HXD = 2536,
	KDM_BY_AG_01_STR = 2537,
	KDM_BY_AG_02_HXD = 2538,
	KDM_BY_AG_02_STR = 2539,
	KDM_BY_AG_03_HXD = 2540,
	KDM_BY_AG_03_STR = 2541,
	KDM_BY_AG_04_HXD = 2542,
	KDM_BY_AG_04_STR = 2543,
	KDM_GL_AG_00_HXD = 2544,
	KDM_GL_AG_00_STR = 2545,
	KDM_GL_AG_01_HXD = 2546,
	KDM_GL_AG_01_STR = 2547,
	KDM_GL_AG_02_HXD = 2548,
	KDM_GL_AG_02_STR = 2549,
	KDM_GL_AG_03_HXD = 2550,
	KDM_GL_AG_03_STR = 2551,
	KDM_GL_AG_04_HXD = 2552,
	KDM_GL_AG_04_STR = 2553,
	SCENE0610_HXD = 2554,
	SCENE0610_STR = 2555,
	SCENE0620_HXD = 2556,
	SCENE0620_STR = 2557,
	SCENE0720_HXD = 2558,
	SCENE0720_STR = 2559,
	SCENE0730_HXD = 2560,
	SCENE0730_STR = 2561,
	SCENE9101_HXD = 2562,
	SCENE9101_STR = 2563,
	SCENE9203_HXD = 2564,
	SCENE9203_STR = 2565,
	SCENE9204_HXD = 2566,
	SCENE9204_STR = 2567,
	SCENE9205_HXD = 2568,
	SCENE9205_STR = 2569,
	SCENE9303_HXD = 2570,
	SCENE9303_STR = 2571,
	SCENE0820_HXD = 2572,
	SCENE0820_STR = 2573,
	RT_KOKONIITE_STR_HXD = 2574,
	RT_KOKONIITE_STR_STR = 2575,
	GD210_CHAKUMI_STR_HXD = 2576,
	GD210_CHAKUMI_STR_STR = 2577,
	BGM010_OMAKE_HXD = 2578,
	BGM010_OMAKE_STR = 2579,
	CHITOSE_AG_01_HXD = 2580,
	CHITOSE_AG_01_STR = 2581,
	FUTAGO_AG_00_HXD = 2582,
	FUTAGO_AG_00_STR = 2583,
	FUTAGO_AG_01_HXD = 2584,
	FUTAGO_AG_01_STR = 2585,
	FUTAGO_AG_02_HXD = 2586,
	FUTAGO_AG_02_STR = 2587,
	KDM_HSHS_AG_HXD = 2588,
	KDM_HSHS_AG_STR = 2589,
	SAE_LAUGH_01_HXD = 2590,
	SAE_LAUGH_01_STR = 2591,
	SAE_LAUGH_02_HXD = 2592,
	SAE_LAUGH_02_STR = 2593,
	SAE_LAUGH_03_HXD = 2594,
	SAE_LAUGH_03_STR = 2595,
	ESE_GHOST_VOICE_STR_HXD = 2596,
	ESE_GHOST_VOICE_STR_STR = 2597,
	ESE_MIYAKO_DOKONANO_HXD = 2598,
	ESE_MIYAKO_DOKONANO_STR = 2599,
	ESE_MIYAKO_OKAERI_HXD = 2600,
	ESE_MIYAKO_OKAERI_STR = 2601,
	ESE_MIYAKO_SUSURINAKI_HXD = 2602,
	ESE_MIYAKO_SUSURINAKI_STR = 2603,
	ESE_MIYAKO_UMEKI_HXD = 2604,
	ESE_MIYAKO_UMEKI_STR = 2605,
	ESE_MIYAKO_YURUSITE_HXD = 2606,
	ESE_MIYAKO_YURUSITE_STR = 2607,
	ESE_SUZUNONE_FO_HXD = 2608,
	ESE_SUZUNONE_FO_STR = 2609,
	GD105_CHITOSE_HXD = 2610,
	GD105_CHITOSE_STR = 2611,
	KAN_36_NANIKA2_HXD = 2612,
	KAN_36_NANIKA2_STR = 2613,
	KAN_FUKAMITI_WASAN_HXD = 2614,
	KAN_FUKAMITI_WASAN_STR = 2615,
	KAN_NIEZA_HXD = 2616,
	KAN_NIEZA_STR = 2617,
	KAN_UTURO_HXD = 2618,
	KAN_UTURO_STR = 2619,
	SCENE0721_HXD = 2620,
	SCENE0721_STR = 2621,
	ESE_OHUDA_HXD = 2622,
	ESE_OHUDA_STR = 2623,
	REISEKI_VOISE_12_HXD = 2624,
	REISEKI_VOISE_12_STR = 2625,
	REISEKI_VOISE_13_HXD = 2626,
	REISEKI_VOISE_13_STR = 2627,
	REISEKI_VOISE_14_HXD = 2628,
	REISEKI_VOISE_14_STR = 2629,
	REISEKI_VOISE_15_HXD = 2630,
	REISEKI_VOISE_15_STR = 2631,
	REISEKI_VOISE_16_HXD = 2632,
	REISEKI_VOISE_16_STR = 2633,
	REISEKI_VOISE_17_HXD = 2634,
	REISEKI_VOISE_17_STR = 2635,
	REISEKI_VOISE_18_HXD = 2636,
	REISEKI_VOISE_18_STR = 2637,
	REISEKI_VOISE_19_HXD = 2638,
	REISEKI_VOISE_19_STR = 2639,
	REISEKI_VOISE_20_HXD = 2640,
	REISEKI_VOISE_20_STR = 2641,
	REISEKI_VOISE_21_HXD = 2642,
	REISEKI_VOISE_21_STR = 2643,
	REISEKI_VOISE_22_HXD = 2644,
	REISEKI_VOISE_22_STR = 2645,
	REISEKI_VOISE_23_HXD = 2646,
	REISEKI_VOISE_23_STR = 2647,
	REISEKI_VOISE_24_HXD = 2648,
	REISEKI_VOISE_24_STR = 2649,
	REISEKI_VOISE_25_HXD = 2650,
	REISEKI_VOISE_25_STR = 2651,
	REISEKI_VOISE_26_HXD = 2652,
	REISEKI_VOISE_26_STR = 2653,
	REISEKI_VOISE_26_1_HXD = 2654,
	REISEKI_VOISE_26_1_STR = 2655,
	REISEKI_VOISE_27_HXD = 2656,
	REISEKI_VOISE_27_STR = 2657,
	REISEKI_VOISE_28_HXD = 2658,
	REISEKI_VOISE_28_STR = 2659,
	REISEKI_VOISE_29_HXD = 2660,
	REISEKI_VOISE_29_STR = 2661,
	REISEKI_VOISE_30_HXD = 2662,
	REISEKI_VOISE_30_STR = 2663,
	REISEKI_VOISE_31_HXD = 2664,
	REISEKI_VOISE_31_STR = 2665,
	REISEKI_VOISE_32_HXD = 2666,
	REISEKI_VOISE_32_STR = 2667,
	REISEKI_VOISE_33_HXD = 2668,
	REISEKI_VOISE_33_STR = 2669,
	REISEKI_VOISE_34_HXD = 2670,
	REISEKI_VOISE_34_STR = 2671,
	MAKABE_AG_03_HXD = 2672,
	MAKABE_AG_03_STR = 2673,
	MAKABE_AG_04_HXD = 2674,
	MAKABE_AG_04_STR = 2675,
	MAKABE_AG_05_HXD = 2676,
	MAKABE_AG_05_STR = 2677,
	MAKABE_AG_06_HXD = 2678,
	MAKABE_AG_06_STR = 2679,
	MAKABE_AG_07_HXD = 2680,
	MAKABE_AG_07_STR = 2681,
	MAKABE_AG_08_HXD = 2682,
	MAKABE_AG_08_STR = 2683,
	MAKABE_AG_09_HXD = 2684,
	MAKABE_AG_09_STR = 2685,
	MAKABE_AG_10_HXD = 2686,
	MAKABE_AG_10_STR = 2687,
	MAKABE_AG_11_HXD = 2688,
	MAKABE_AG_11_STR = 2689,
	MAKABE_AG_12_HXD = 2690,
	MAKABE_AG_12_STR = 2691,
	MAKABE_AG_13_HXD = 2692,
	MAKABE_AG_13_STR = 2693,
	MAKABE_AG_14_HXD = 2694,
	MAKABE_AG_14_STR = 2695,
	MAKABE_AG_15_HXD = 2696,
	MAKABE_AG_15_STR = 2697,
	MAYU_TALK_100_HXD = 2698,
	MAYU_TALK_100_STR = 2699,
	MAYU_TALK_101_HXD = 2700,
	MAYU_TALK_101_STR = 2701,
	MAYU_TALK_102_HXD = 2702,
	MAYU_TALK_102_STR = 2703,
	MAYU_TALK_103_HXD = 2704,
	MAYU_TALK_103_STR = 2705,
	MAYU_TALK_104_HXD = 2706,
	MAYU_TALK_104_STR = 2707,
	MAYU_TALK_105_HXD = 2708,
	MAYU_TALK_105_STR = 2709,
	MAYU_TALK_106_HXD = 2710,
	MAYU_TALK_106_STR = 2711,
	MAYU_TALK_107_HXD = 2712,
	MAYU_TALK_107_STR = 2713,
	MAYU_TALK_108_HXD = 2714,
	MAYU_TALK_108_STR = 2715,
	MAYU_TALK_109_HXD = 2716,
	MAYU_TALK_109_STR = 2717,
	MAYU_TALK_110_HXD = 2718,
	MAYU_TALK_110_STR = 2719,
	MAYU_TALK_111_HXD = 2720,
	MAYU_TALK_111_STR = 2721,
	MAYU_TALK_112_HXD = 2722,
	MAYU_TALK_112_STR = 2723,
	MAYU_TALK_113_HXD = 2724,
	MAYU_TALK_113_STR = 2725,
	MAYU_TALK_114_HXD = 2726,
	MAYU_TALK_114_STR = 2727,
	MAYU_TALK_115_HXD = 2728,
	MAYU_TALK_115_STR = 2729,
	MAYU_TALK_116_HXD = 2730,
	MAYU_TALK_116_STR = 2731,
	MAYU_TALK_117_HXD = 2732,
	MAYU_TALK_117_STR = 2733,
	MAYU_TALK_118_HXD = 2734,
	MAYU_TALK_118_STR = 2735,
	MAYU_TALK_119_HXD = 2736,
	MAYU_TALK_119_STR = 2737,
	MAYU_TALK_120_HXD = 2738,
	MAYU_TALK_120_STR = 2739,
	MAYU_TALK_121_HXD = 2740,
	MAYU_TALK_121_STR = 2741,
	MAYU_TALK_122_HXD = 2742,
	MAYU_TALK_122_STR = 2743,
	MAYU_TALK_123_HXD = 2744,
	MAYU_TALK_123_STR = 2745,
	MAYU_TALK_124_HXD = 2746,
	MAYU_TALK_124_STR = 2747,
	MAYU_TALK_125_HXD = 2748,
	MAYU_TALK_125_STR = 2749,
	MAYU_TALK_126_HXD = 2750,
	MAYU_TALK_126_STR = 2751,
	MAYU_TALK_127_HXD = 2752,
	MAYU_TALK_127_STR = 2753,
	MAYU_TALK_128_HXD = 2754,
	MAYU_TALK_128_STR = 2755,
	MAYU_TALK_129_HXD = 2756,
	MAYU_TALK_129_STR = 2757,
	MAYU_TALK_130_HXD = 2758,
	MAYU_TALK_130_STR = 2759,
	MAYU_TALK_131_HXD = 2760,
	MAYU_TALK_131_STR = 2761,
	MAYU_TALK_132_HXD = 2762,
	MAYU_TALK_132_STR = 2763,
	MAYU_TALK_133_HXD = 2764,
	MAYU_TALK_133_STR = 2765,
	MAYU_TALK_134_HXD = 2766,
	MAYU_TALK_134_STR = 2767,
	MAYU_TALK_135_HXD = 2768,
	MAYU_TALK_135_STR = 2769,
	MAYU_TALK_136_HXD = 2770,
	MAYU_TALK_136_STR = 2771,
	MAYU_TALK_137_HXD = 2772,
	MAYU_TALK_137_STR = 2773,
	MAYU_TALK_138_HXD = 2774,
	MAYU_TALK_138_STR = 2775,
	MAYU_TALK_139_HXD = 2776,
	MAYU_TALK_139_STR = 2777,
	MAYU_TALK_140_HXD = 2778,
	MAYU_TALK_140_STR = 2779,
	MAYU_TALK_141_HXD = 2780,
	MAYU_TALK_141_STR = 2781,
	MAYU_TALK_142_HXD = 2782,
	MAYU_TALK_142_STR = 2783,
	MAYU_TALK_143_HXD = 2784,
	MAYU_TALK_143_STR = 2785,
	MAYU_TALK_144_HXD = 2786,
	MAYU_TALK_144_STR = 2787,
	MAYU_TALK_145_HXD = 2788,
	MAYU_TALK_145_STR = 2789,
	MAYU_TALK_146_HXD = 2790,
	MAYU_TALK_146_STR = 2791,
	MAYU_TALK_147_HXD = 2792,
	MAYU_TALK_147_STR = 2793,
	MAYU_TALK_148_HXD = 2794,
	MAYU_TALK_148_STR = 2795,
	MAYU_TALK_149_HXD = 2796,
	MAYU_TALK_149_STR = 2797,
	MAYU_TALK_150_HXD = 2798,
	MAYU_TALK_150_STR = 2799,
	MAYU_TALK_151_HXD = 2800,
	MAYU_TALK_151_STR = 2801,
	MAYU_TALK_152_HXD = 2802,
	MAYU_TALK_152_STR = 2803,
	MAYU_TALK_153_HXD = 2804,
	MAYU_TALK_153_STR = 2805,
	MAYU_TALK_154_HXD = 2806,
	MAYU_TALK_154_STR = 2807,
	MAYU_TALK_155_HXD = 2808,
	MAYU_TALK_155_STR = 2809,
	MAYU_TALK_156_HXD = 2810,
	MAYU_TALK_156_STR = 2811,
	MAYU_TALK_157_HXD = 2812,
	MAYU_TALK_157_STR = 2813,
	MAYU_TALK_158_HXD = 2814,
	MAYU_TALK_158_STR = 2815,
	MAYU_TALK_159_HXD = 2816,
	MAYU_TALK_159_STR = 2817,
	MAYU_TALK_160_HXD = 2818,
	MAYU_TALK_160_STR = 2819,
	MAYU_TALK_161_HXD = 2820,
	MAYU_TALK_161_STR = 2821,
	MAYU_TALK_162_HXD = 2822,
	MAYU_TALK_162_STR = 2823,
	MAYU_TALK_163_HXD = 2824,
	MAYU_TALK_163_STR = 2825,
	MAYU_TALK_164_HXD = 2826,
	MAYU_TALK_164_STR = 2827,
	MAYU_TALK_165_HXD = 2828,
	MAYU_TALK_165_STR = 2829,
	MAYU_TALK_166_HXD = 2830,
	MAYU_TALK_166_STR = 2831,
	MAYU_TALK_167_HXD = 2832,
	MAYU_TALK_167_STR = 2833,
	MAYU_TALK_168_HXD = 2834,
	MAYU_TALK_168_STR = 2835,
	MAYU_TALK_169_HXD = 2836,
	MAYU_TALK_169_STR = 2837,
	MAYU_TALK_170_HXD = 2838,
	MAYU_TALK_170_STR = 2839,
	MAYU_TALK_171_HXD = 2840,
	MAYU_TALK_171_STR = 2841,
	MAYU_TALK_172_HXD = 2842,
	MAYU_TALK_172_STR = 2843,
	MAYU_TALK_173_HXD = 2844,
	MAYU_TALK_173_STR = 2845,
	MAYU_TALK_174_HXD = 2846,
	MAYU_TALK_174_STR = 2847,
	MAYU_TALK_175_HXD = 2848,
	MAYU_TALK_175_STR = 2849,
	MAYU_TALK_176_HXD = 2850,
	MAYU_TALK_176_STR = 2851,
	MAYU_TALK_177_HXD = 2852,
	MAYU_TALK_177_STR = 2853,
	MAYU_TALK_178_HXD = 2854,
	MAYU_TALK_178_STR = 2855,
	MAYU_TALK_179_HXD = 2856,
	MAYU_TALK_179_STR = 2857,
	MAYU_TALK_180_HXD = 2858,
	MAYU_TALK_180_STR = 2859,
	MAYU_TALK_181_HXD = 2860,
	MAYU_TALK_181_STR = 2861,
	MAYU_TALK_182_HXD = 2862,
	MAYU_TALK_182_STR = 2863,
	MAYU_TALK_183_HXD = 2864,
	MAYU_TALK_183_STR = 2865,
	MAYU_TALK_184_HXD = 2866,
	MAYU_TALK_184_STR = 2867,
	MAYU_TALK_185_HXD = 2868,
	MAYU_TALK_185_STR = 2869,
	MAYU_TALK_186_HXD = 2870,
	MAYU_TALK_186_STR = 2871,
	MAYU_TALK_187_HXD = 2872,
	MAYU_TALK_187_STR = 2873,
	MAYU_TALK_188_HXD = 2874,
	MAYU_TALK_188_STR = 2875,
	MAYU_TALK_189_HXD = 2876,
	MAYU_TALK_189_STR = 2877,
	MAYU_TALK_190_HXD = 2878,
	MAYU_TALK_190_STR = 2879,
	MAYU_TALK_191_HXD = 2880,
	MAYU_TALK_191_STR = 2881,
	MAYU_TALK_192_HXD = 2882,
	MAYU_TALK_192_STR = 2883,
	MAYU_TALK_193_HXD = 2884,
	MAYU_TALK_193_STR = 2885,
	MAYU_TALK_194_HXD = 2886,
	MAYU_TALK_194_STR = 2887,
	MAYU_TALK_195_HXD = 2888,
	MAYU_TALK_195_STR = 2889,
	MAYU_TALK_196_HXD = 2890,
	MAYU_TALK_196_STR = 2891,
	MAYU_TALK_197_HXD = 2892,
	MAYU_TALK_197_STR = 2893,
	MAYU_TALK_198_HXD = 2894,
	MAYU_TALK_198_STR = 2895,
	MAYU_TALK_199_HXD = 2896,
	MAYU_TALK_199_STR = 2897,
	MAYU_TALK_200_HXD = 2898,
	MAYU_TALK_200_STR = 2899,
	MAYU_TALK_201_HXD = 2900,
	MAYU_TALK_201_STR = 2901,
	MAYU_TALK_202_HXD = 2902,
	MAYU_TALK_202_STR = 2903,
	MAYU_TALK_203_HXD = 2904,
	MAYU_TALK_203_STR = 2905,
	MAYU_TALK_204_HXD = 2906,
	MAYU_TALK_204_STR = 2907,
	MAYU_TALK_205_HXD = 2908,
	MAYU_TALK_205_STR = 2909,
	MAYU_TALK_206_HXD = 2910,
	MAYU_TALK_206_STR = 2911,
	MAYU_TALK_207_HXD = 2912,
	MAYU_TALK_207_STR = 2913,
	MAYU_TALK_208_HXD = 2914,
	MAYU_TALK_208_STR = 2915,
	MAYU_TALK_209_HXD = 2916,
	MAYU_TALK_209_STR = 2917,
	MAYU_TALK_210_HXD = 2918,
	MAYU_TALK_210_STR = 2919,
	MAYU_TALK_211_HXD = 2920,
	MAYU_TALK_211_STR = 2921,
	MAYU_TALK_212_HXD = 2922,
	MAYU_TALK_212_STR = 2923,
	MAYU_TALK_213_HXD = 2924,
	MAYU_TALK_213_STR = 2925,
	MAYU_TALK_214_HXD = 2926,
	MAYU_TALK_214_STR = 2927,
	MAYU_TALK_215_HXD = 2928,
	MAYU_TALK_215_STR = 2929,
	MAYU_TALK_216_HXD = 2930,
	MAYU_TALK_216_STR = 2931,
	MAYU_TALK_217_HXD = 2932,
	MAYU_TALK_217_STR = 2933,
	MAYU_TALK_64_HXD = 2934,
	MAYU_TALK_64_STR = 2935,
	MAYU_TALK_65_HXD = 2936,
	MAYU_TALK_65_STR = 2937,
	MAYU_TALK_66_HXD = 2938,
	MAYU_TALK_66_STR = 2939,
	MAYU_TALK_67_HXD = 2940,
	MAYU_TALK_67_STR = 2941,
	MAYU_TALK_68_HXD = 2942,
	MAYU_TALK_68_STR = 2943,
	MAYU_TALK_69_HXD = 2944,
	MAYU_TALK_69_STR = 2945,
	MAYU_TALK_70_HXD = 2946,
	MAYU_TALK_70_STR = 2947,
	MAYU_TALK_71_HXD = 2948,
	MAYU_TALK_71_STR = 2949,
	MAYU_TALK_72_HXD = 2950,
	MAYU_TALK_72_STR = 2951,
	MAYU_TALK_73_HXD = 2952,
	MAYU_TALK_73_STR = 2953,
	MAYU_TALK_74_HXD = 2954,
	MAYU_TALK_74_STR = 2955,
	MAYU_TALK_75_HXD = 2956,
	MAYU_TALK_75_STR = 2957,
	MAYU_TALK_76_HXD = 2958,
	MAYU_TALK_76_STR = 2959,
	MAYU_TALK_77_HXD = 2960,
	MAYU_TALK_77_STR = 2961,
	MAYU_TALK_78_HXD = 2962,
	MAYU_TALK_78_STR = 2963,
	MAYU_TALK_79_HXD = 2964,
	MAYU_TALK_79_STR = 2965,
	MAYU_TALK_80_HXD = 2966,
	MAYU_TALK_80_STR = 2967,
	MAYU_TALK_81_HXD = 2968,
	MAYU_TALK_81_STR = 2969,
	MAYU_TALK_82_HXD = 2970,
	MAYU_TALK_82_STR = 2971,
	MAYU_TALK_83_HXD = 2972,
	MAYU_TALK_83_STR = 2973,
	MAYU_TALK_84_HXD = 2974,
	MAYU_TALK_84_STR = 2975,
	MAYU_TALK_85_HXD = 2976,
	MAYU_TALK_85_STR = 2977,
	MAYU_TALK_86_HXD = 2978,
	MAYU_TALK_86_STR = 2979,
	MAYU_TALK_87_HXD = 2980,
	MAYU_TALK_87_STR = 2981,
	MAYU_TALK_88_HXD = 2982,
	MAYU_TALK_88_STR = 2983,
	MAYU_TALK_89_HXD = 2984,
	MAYU_TALK_89_STR = 2985,
	MAYU_TALK_90_HXD = 2986,
	MAYU_TALK_90_STR = 2987,
	MAYU_TALK_91_HXD = 2988,
	MAYU_TALK_91_STR = 2989,
	MAYU_TALK_92_HXD = 2990,
	MAYU_TALK_92_STR = 2991,
	MAYU_TALK_93_HXD = 2992,
	MAYU_TALK_93_STR = 2993,
	MAYU_TALK_94_HXD = 2994,
	MAYU_TALK_94_STR = 2995,
	MAYU_TALK_95_HXD = 2996,
	MAYU_TALK_95_STR = 2997,
	MAYU_TALK_96_HXD = 2998,
	MAYU_TALK_96_STR = 2999,
	MAYU_TALK_97_HXD = 3000,
	MAYU_TALK_97_STR = 3001,
	MAYU_TALK_98_HXD = 3002,
	MAYU_TALK_98_STR = 3003,
	MAYU_TALK_99_HXD = 3004,
	MAYU_TALK_99_STR = 3005,
	MURA_AG_03_HXD = 3006,
	MURA_AG_03_STR = 3007,
	MURA_AG_04_HXD = 3008,
	MURA_AG_04_STR = 3009,
	MURA_AG_05_HXD = 3010,
	MURA_AG_05_STR = 3011,
	NINGYOU_AG_03_HXD = 3012,
	NINGYOU_AG_03_STR = 3013,
	NINGYOU_AG_04_HXD = 3014,
	NINGYOU_AG_04_STR = 3015,
	NINGYOU_AG_05_HXD = 3016,
	NINGYOU_AG_05_STR = 3017,
	NINGYOU_AG_06_HXD = 3018,
	NINGYOU_AG_06_STR = 3019,
	TOUSYU_AG_04_HXD = 3020,
	TOUSYU_AG_04_STR = 3021,
	TOUSYU_AG_05_HXD = 3022,
	TOUSYU_AG_05_STR = 3023,
	TOUSYU_AG_06_HXD = 3024,
	TOUSYU_AG_06_STR = 3025,
	TOUSYU_AG_07_HXD = 3026,
	TOUSYU_AG_07_STR = 3027,
	TOUSYU_AG_08_HXD = 3028,
	TOUSYU_AG_08_STR = 3029,
	MAYU_TALK_218_HXD = 3030,
	MAYU_TALK_218_STR = 3031,
	SYNCHRO_2SYOU_HXD = 3032,
	SYNCHRO_2SYOU_STR = 3033,
	SYNCHRO_3SYOU_HXD = 3034,
	SYNCHRO_3SYOU_STR = 3035,
	SYNCHRO_5SYOU_HXD = 3036,
	SYNCHRO_5SYOU_STR = 3037,
	SYNCHRO_9SYOU_A_HXD = 3038,
	SYNCHRO_9SYOU_A_STR = 3039,
	SYNCHRO_9SYOU_B_HXD = 3040,
	SYNCHRO_9SYOU_B_STR = 3041,
	MAYU_TALK_221_HXD = 3042,
	MAYU_TALK_221_STR = 3043,
	MAYU_TALK_220_HXD = 3044,
	MAYU_TALK_220_STR = 3045,
	MAYU_TALK_219_HXD = 3046,
	MAYU_TALK_219_STR = 3047,
	SCENE9206_HXD = 3048,
	SCENE9206_STR = 3049,
	SCENE1010_HXD = 3050,
	SCENE1010_STR = 3051,
	ESE_TASUKETE_HXD = 3052,
	ESE_TASUKETE_STR = 3053,
	ESE_UTURO_FUTAGO_HXD = 3054,
	ESE_UTURO_FUTAGO_STR = 3055,
	BGM011_GAMEOVER_HXD = 3056,
	BGM011_GAMEOVER_STR = 3057,
	MAYU_TALK_222_HXD = 3058,
	MAYU_TALK_222_STR = 3059,
	GD243_YUNOMI_STR_HXD = 3060,
	GD243_YUNOMI_STR_STR = 3061,
	ESE_RT_MARI_HXD = 3062,
	ESE_RT_MARI_STR = 3063,
	ESE_RT_TANAGATA_HXD = 3064,
	ESE_RT_TANAGATA_STR = 3065,
	REISEKI_VOISE_35_HXD = 3066,
	REISEKI_VOISE_35_STR = 3067,
	REISEKI_VOISE_36_HXD = 3068,
	REISEKI_VOISE_36_STR = 3069,
	REISEKI_VOISE_37_HXD = 3070,
	REISEKI_VOISE_37_STR = 3071,
	REISEKI_VOISE_38_HXD = 3072,
	REISEKI_VOISE_38_STR = 3073,
	REISEKI_VOISE_39_HXD = 3074,
	REISEKI_VOISE_39_STR = 3075,
	RT_ESE_KATANA_HXD = 3076,
	RT_ESE_KATANA_STR = 3077,
	REISEKI_VOISE_40_HXD = 3078,
	REISEKI_VOISE_40_STR = 3079,
	REISEKI_VOISE_41_HXD = 3080,
	REISEKI_VOISE_41_STR = 3081,
	ITSUKI_TALK_24_HXD = 3082,
	ITSUKI_TALK_24_STR = 3083,
	ESE_KUSABI_TOJYO_HXD = 3084,
	ESE_KUSABI_TOJYO_STR = 3085,
	BGM_END_DMY = 3086,
	SE_START_DMY = 3087,
	YAMIB_SE_BTL_HXD = 3088,
	YAMIB_SE_BTL_BD = 3089,
	MIYA_SE_BTL_HXD = 3090,
	MIYA_SE_BTL_BD = 3091,
	KUSABI_SE_BTL_HXD = 3092,
	KUSABI_SE_BTL_BD = 3093,
	MURAC_SE_BTL_HXD = 3094,
	MURAC_SE_BTL_BD = 3095,
	TES_HXD = 3096,
	TES_BD = 3097,
	AJ_001_32_HXD = 3098,
	AJ_001_32_BD = 3099,
	AJ_002_32_HXD = 3100,
	AJ_002_32_BD = 3101,
	AJ_003_32_HXD = 3102,
	AJ_003_32_BD = 3103,
	AJ_004_32_HXD = 3104,
	AJ_004_32_BD = 3105,
	AJ_005_32_HXD = 3106,
	AJ_005_32_BD = 3107,
	AJ_006_32_HXD = 3108,
	AJ_006_32_BD = 3109,
	AJ_007_32_HXD = 3110,
	AJ_007_32_BD = 3111,
	AJ_008_32_HXD = 3112,
	AJ_008_32_BD = 3113,
	AJ_009_22_HXD = 3114,
	AJ_009_22_BD = 3115,
	AJ_011_22_HXD = 3116,
	AJ_011_22_BD = 3117,
	AJ_012_22_HXD = 3118,
	AJ_012_22_BD = 3119,
	AJ_013A_22_HXD = 3120,
	AJ_013A_22_BD = 3121,
	AJ_013B_22_HXD = 3122,
	AJ_013B_22_BD = 3123,
	AJ_013C_22_HXD = 3124,
	AJ_013C_22_BD = 3125,
	AJ_013D_22_HXD = 3126,
	AJ_013D_22_BD = 3127,
	AJ_015_32_HXD = 3128,
	AJ_015_32_BD = 3129,
	AJ_016_22_HXD = 3130,
	AJ_016_22_BD = 3131,
	DOOR009_KAGI_TYUU_HXD = 3132,
	DOOR009_KAGI_TYUU_BD = 3133,
	DOOR008_KAGI_SYOU_HXD = 3134,
	DOOR008_KAGI_SYOU_BD = 3135,
	DOOR007_DAI_AKANAI_HXD = 3136,
	DOOR007_DAI_AKANAI_BD = 3137,
	DOOR006_TYUU_AKANAI_HXD = 3138,
	DOOR006_TYUU_AKANAI_BD = 3139,
	DOOR004_KUGURI_HXD = 3140,
	DOOR004_KUGURI_BD = 3141,
	DOOR003_HIKIDO_HXD = 3142,
	DOOR003_HIKIDO_BD = 3143,
	DOOR002_OOSAKA_HXD = 3144,
	DOOR002_OOSAKA_BD = 3145,
	DOOR005_HUSUMA_AKANA_HXD = 3146,
	DOOR005_HUSUMA_AKANA_BD = 3147,
	ESE006_HUTASIMERU_HXD = 3148,
	ESE006_HUTASIMERU_BD = 3149,
	ESE007_HUTAAKERU_HXD = 3150,
	ESE007_HUTAAKERU_BD = 3151,
	ESE005_HUTAUGOKU_HXD = 3152,
	ESE005_HUTAUGOKU_BD = 3153,
	FOOT016_KUSA_HXD = 3154,
	FOOT016_KUSA_BD = 3155,
	FOOT015_TUTI_HXD = 3156,
	FOOT015_TUTI_BD = 3157,
	FOOT014_ITANOMA3_HXD = 3158,
	FOOT014_ITANOMA3_BD = 3159,
	FOOT013_DOMA1_HXD = 3160,
	FOOT013_DOMA1_BD = 3161,
	FOOT012_EXTKISIMI_HXD = 3162,
	FOOT012_EXTKISIMI_BD = 3163,
	FOOT011_OTIBAMAJIRI_HXD = 3164,
	FOOT011_OTIBAMAJIRI_BD = 3165,
	FOOT010_JYARIMAJIRI_HXD = 3166,
	FOOT010_JYARIMAJIRI_BD = 3167,
	FOOT009_WARETOUKI_HXD = 3168,
	FOOT009_WARETOUKI_BD = 3169,
	FOOT008_ITANOMA2_HXD = 3170,
	FOOT008_ITANOMA2_BD = 3171,
	FOOT007_ITANOMA_HXD = 3172,
	FOOT007_ITANOMA_BD = 3173,
	FOOT006_ITAKAIDAN_HXD = 3174,
	FOOT006_ITAKAIDAN_BD = 3175,
	FOOT005_TATAMI_HXD = 3176,
	FOOT005_TATAMI_BD = 3177,
	FOOT004_KAMOI_HXD = 3178,
	FOOT004_KAMOI_BD = 3179,
	FOOT003_DOMA2_HXD = 3180,
	FOOT003_DOMA2_BD = 3181,
	FOOT002_MOKUHEN_HXD = 3182,
	FOOT002_MOKUHEN_BD = 3183,
	FOOT001_ISIDATAMI_HXD = 3184,
	FOOT001_ISIDATAMI_BD = 3185,
	FOOT000_ISIKAIDAN_HXD = 3186,
	FOOT000_ISIKAIDAN_BD = 3187,
	ANE_SISUTEMU_HXD = 3188,
	ANE_SISUTEMU_BD = 3189,
	SJ009_117_HXD = 3190,
	SJ009_117_BD = 3191,
	SJ008_116_HXD = 3192,
	SJ008_116_BD = 3193,
	SJ007_115_HXD = 3194,
	SJ007_115_BD = 3195,
	SJ006_KOKIRIE_HXD = 3196,
	SJ006_KOKIRIE_BD = 3197,
	SJ005_110_HXD = 3198,
	SJ005_110_BD = 3199,
	SJ004_109_HXD = 3200,
	SJ004_109_BD = 3201,
	SJ003_KIRIE_HXD = 3202,
	SJ003_KIRIE_BD = 3203,
	SJ001_104_HXD = 3204,
	SJ001_104_BD = 3205,
	SJ000_102_HXD = 3206,
	SJ000_102_BD = 3207,
	HAN001_HUSUMA_HXD = 3208,
	HAN001_HUSUMA_BD = 3209,
	HAN000_TYUU_HXD = 3210,
	HAN000_TYUU_BD = 3211,
	FOOT011_ISINOUE_HXD = 3212,
	FOOT011_ISINOUE_BD = 3213,
	FOOT010_JYARI_HXD = 3214,
	FOOT010_JYARI_BD = 3215,
	FOOT009_TUTI2_HXD = 3216,
	FOOT009_TUTI2_BD = 3217,
	FOOT008_TUTI_HXD = 3218,
	FOOT008_TUTI_BD = 3219,
	FOOT007_KAMOI_HXD = 3220,
	FOOT007_KAMOI_BD = 3221,
	FOOT006_TATAMI_HXD = 3222,
	FOOT006_TATAMI_BD = 3223,
	FOOT005_ITAKAIDAN_HXD = 3224,
	FOOT005_ITAKAIDAN_BD = 3225,
	FOOT004_MOKUHEN_HXD = 3226,
	FOOT004_MOKUHEN_BD = 3227,
	FOOT003_ITANOMA2_HXD = 3228,
	FOOT003_ITANOMA2_BD = 3229,
	FOOT002_ITANOMA1_HXD = 3230,
	FOOT002_ITANOMA1_BD = 3231,
	FOOT001_DOMA2_HXD = 3232,
	FOOT001_DOMA2_BD = 3233,
	FOOT000_DOMA1_HXD = 3234,
	FOOT000_DOMA1_BD = 3235,
	DOOR001_TYUU_HXD = 3236,
	DOOR001_TYUU_BD = 3237,
	DOOR000_HUSUMA_HXD = 3238,
	DOOR000_HUSUMA_BD = 3239,
	ESE004_NAGABITUAKESI_HXD = 3240,
	ESE004_NAGABITUAKESI_BD = 3241,
	ESE000_ABARERU_HXD = 3242,
	ESE000_ABARERU_BD = 3243,
	SISUTEMU_HXD = 3244,
	SISUTEMU_BD = 3245,
	GUJI_SE_BTL_HXD = 3246,
	GUJI_SE_BTL_BD = 3247,
	HAKO_SE_BTL_HXD = 3248,
	HAKO_SE_BTL_BD = 3249,
	KUSAA_SE_BTL_HXD = 3250,
	KUSAA_SE_BTL_BD = 3251,
	KUSAB_SE_BTL_HXD = 3252,
	KUSAB_SE_BTL_BD = 3253,
	MURAA_SE_BTL_HXD = 3254,
	MURAA_SE_BTL_BD = 3255,
	MURAB_SE_BTL_HXD = 3256,
	MURAB_SE_BTL_BD = 3257,
	SUIS_SE_BTL_HXD = 3258,
	SUIS_SE_BTL_BD = 3259,
	YAMIA_SE_BTL_HXD = 3260,
	YAMIA_SE_BTL_BD = 3261,
	PZL_HINADAN_HXD = 3262,
	PZL_HINADAN_BD = 3263,
	PZL_ROKUMEN_HXD = 3264,
	PZL_ROKUMEN_BD = 3265,
	KAN_KAWA_HXD = 3266,
	KAN_KAWA_BD = 3267,
	ESE_TANAGATA_HXD = 3268,
	ESE_TANAGATA_BD = 3269,
	ESE_SUITEKI_YUKA_HXD = 3270,
	ESE_SUITEKI_YUKA_BD = 3271,
	KAN_KAGARIBI_HXD = 3272,
	KAN_KAGARIBI_BD = 3273,
	ESE_MOKUHEN_HXD = 3274,
	ESE_MOKUHEN_BD = 3275,
	ESE_MARI_HXD = 3276,
	ESE_MARI_BD = 3277,
	ESE_IKE_OTIRU_HXD = 3278,
	ESE_IKE_OTIRU_BD = 3279,
	ESE_DOOR_OPCL_HXD = 3280,
	ESE_DOOR_OPCL_BD = 3281,
	ESE_BOX_OTIRU_HXD = 3282,
	ESE_BOX_OTIRU_BD = 3283,
	ESE_SCREAM00_HXD = 3284,
	ESE_SCREAM00_BD = 3285,
	ESE_SCREAM01_HXD = 3286,
	ESE_SCREAM01_BD = 3287,
	TEST005_HXD = 3288,
	TEST005_BD = 3289,
	TEST006_HXD = 3290,
	TEST006_BD = 3291,
	TEST007_HXD = 3292,
	TEST007_BD = 3293,
	KUBI_SE_BTL_HXD = 3294,
	KUBI_SE_BTL_BD = 3295,
	MASU_SE_BTL_HXD = 3296,
	MASU_SE_BTL_BD = 3297,
	TOUSYU_SE_BTL_HXD = 3298,
	TOUSYU_SE_BTL_BD = 3299,
	NIN_SE_BTL_HXD = 3300,
	NIN_SE_BTL_BD = 3301,
	AKANE_SE_BTL_HXD = 3302,
	AKANE_SE_BTL_BD = 3303,
	AZAMI_SE_BTL_HXD = 3304,
	AZAMI_SE_BTL_BD = 3305,
	CHITOSE_SE_BTL_HXD = 3306,
	CHITOSE_SE_BTL_BD = 3307,
	IMI_SE_BTL_HXD = 3308,
	IMI_SE_BTL_BD = 3309,
	KDMA_SE_BTL_HXD = 3310,
	KDMA_SE_BTL_BD = 3311,
	KDMB_SE_BTL_HXD = 3312,
	KDMB_SE_BTL_BD = 3313,
	KDMC_SE_BTL_HXD = 3314,
	KDMC_SE_BTL_BD = 3315,
	SUIS2_SE_BTL_HXD = 3316,
	SUIS2_SE_BTL_BD = 3317,
	RAKKA_SE_BTL_HXD = 3318,
	RAKKA_SE_BTL_BD = 3319,
	BASE_SYS_BD_HXD = 3320,
	BASE_SYS_BD_BD = 3321,
	FINDER_SYS_BD_HXD = 3322,
	FINDER_SYS_BD_BD = 3323,
	MIO_SYS_BD_HXD = 3324,
	MIO_SYS_BD_BD = 3325,
	KAN_KAGARIHAZE_BD_HXD = 3326,
	KAN_KAGARIHAZE_BD_BD = 3327,
	FOOT016_SOFT_HXD = 3328,
	FOOT016_SOFT_BD = 3329,
	ESE_CHITOSESUZU_BD_HXD = 3330,
	ESE_CHITOSESUZU_BD_BD = 3331,
	KAN_MEIMETU_BD_HXD = 3332,
	KAN_MEIMETU_BD_BD = 3333,
	PZL_KAZAGURUMA_HXD = 3334,
	PZL_KAZAGURUMA_BD = 3335,
	GD130_BD_HXD = 3336,
	GD130_BD_BD = 3337,
	GD062_BD_HXD = 3338,
	GD062_BD_BD = 3339,
	ESE_RAKURAI_HXD = 3340,
	ESE_RAKURAI_BD = 3341,
	ESE_SUITEKI_SUIMEN_HXD = 3342,
	ESE_SUITEKI_SUIMEN_BD = 3343,
	KAN_KAWA_FAST_HXD = 3344,
	KAN_KAWA_FAST_BD = 3345,
	ESE_FILMREEL_HXD = 3346,
	ESE_FILMREEL_BD = 3347,
	PZL_FUTAGO_HXD = 3348,
	PZL_FUTAGO_BD = 3349,
	KAN_SCREEN_NOISE_HXD = 3350,
	KAN_SCREEN_NOISE_BD = 3351,
	KAN_RARE_NEAR_HXD = 3352,
	KAN_RARE_NEAR_BD = 3353,
	KAN_CHITEIKO_HXD = 3354,
	KAN_CHITEIKO_BD = 3355,
	ESE_SYNCHRO_LAST_HXD = 3356,
	ESE_SYNCHRO_LAST_BD = 3357,
	ESE_CHITOSESUZU_HXD = 3358,
	ESE_CHITOSESUZU_BD = 3359,
	ESE_DOOR_OPEN_MON_HXD = 3360,
	ESE_DOOR_OPEN_MON_BD = 3361,
	ESE_HASHIGO_BD_HXD = 3362,
	ESE_HASHIGO_BD_BD = 3363,
	SAE_SE_BTL_HXD = 3364,
	SAE_SE_BTL_BD = 3365,
	NINGYOU_SE_BTL_HXD = 3366,
	NINGYOU_SE_BTL_BD = 3367,
	KUSABI2_SE_BTL_HXD = 3368,
	KUSABI2_SE_BTL_BD = 3369,
	KAN_KAZE_HXD = 3370,
	KAN_KAZE_BD = 3371,
	JISIN_HXD = 3372,
	JISIN_BD = 3373,
	ESE_TANAGATA_RT_HXD = 3374,
	ESE_TANAGATA_RT_BD = 3375,
	ESE_MARI_RT_HXD = 3376,
	ESE_MARI_RT_BD = 3377,
	ESE_HASIGO2_HXD = 3378,
	ESE_HASIGO2_BD = 3379,
	SE_END_DMY = 3380,
	EVENT_OBJ = 3381,
	EVENT_50_OBJ = 3382,
	MISSION_OBJ = 3383,
	MSG_OBJ = 3384,
	MSG_F_OBJ = 3385,
	MSG_G_OBJ = 3386,
	MSG_S_OBJ = 3387,
	MSG_I_OBJ = 3388,
	TITLE_BG_PK2 = 3389,
	TITLE_LOGO_PK2 = 3390,
	TITLE_LOGO_F_PK2 = 3391,
	TITLE_LOGO_G_PK2 = 3392,
	TITLE_LOGO_S_PK2 = 3393,
	TITLE_LOGO_I_PK2 = 3394,
	MOVIE_ROOM_000_PSS = 3395,
	MOVIE_ROOM_000PAL_PSS = 3396,
	MOVIE_ROOM_001_PSS = 3397,
	MOVIE_ROOM_001PAL_PSS = 3398,
	MOVIE_ROOM_002_PSS = 3399,
	MOVIE_ROOM_002PAL_PSS = 3400,
	MOVIE_ROOM_003_PSS = 3401,
	MOVIE_ROOM_003PAL_PSS = 3402,
	MOVIE_ROOM_004_PSS = 3403,
	MOVIE_ROOM_004PAL_PSS = 3404,
	MOVIE_ROOM_005_PSS = 3405,
	MOVIE_ROOM_005PAL_PSS = 3406,
	MOVIE_ROOM_006_PSS = 3407,
	MOVIE_ROOM_006PAL_PSS = 3408,
	S0010_PSS = 3409,
	SCENE0010_MOVIE_SLT = 3410,
	SCENE0010_MOVIE_EFF = 3411,
	S0020_PSS = 3412,
	SCENE0020_MOVIE_SLT = 3413,
	SCENE0020_MOVIE_EFF = 3414,
	SCENE0110_SCN = 3415,
	SCENE0110_SLT = 3416,
	SCENE0110_EFF = 3417,
	SCENE0120_SCN = 3418,
	SCENE0120_SLT = 3419,
	SCENE0120_EFF = 3420,
	S0121_PSS = 3421,
	SCENE0121_MOVIE_SLT = 3422,
	SCENE0121_MOVIE_EFF = 3423,
	SCENE0122_SCN = 3424,
	SCENE0122_SLT = 3425,
	SCENE0122_EFF = 3426,
	SCENE0130_SCN = 3427,
	SCENE0130_SLT = 3428,
	SCENE0130_EFF = 3429,
	SCENE0132_SCN = 3430,
	SCENE0132_SLT = 3431,
	SCENE0132_EFF = 3432,
	SCENE0133_SCN = 3433,
	SCENE0133_SLT = 3434,
	SCENE0133_EFF = 3435,
	SCENE0140_SCN = 3436,
	SCENE0140_SLT = 3437,
	SCENE0140_EFF = 3438,
	S0141_PSS = 3439,
	SCENE0141_MOVIE_SLT = 3440,
	SCENE0141_MOVIE_EFF = 3441,
	SCENE0150_SCN = 3442,
	SCENE0150_SLT = 3443,
	SCENE0150_EFF = 3444,
	SCENE0160_SCN = 3445,
	SCENE0160_SLT = 3446,
	SCENE0160_EFF = 3447,
	SCENE0170_SCN = 3448,
	SCENE0170_SLT = 3449,
	SCENE0170_EFF = 3450,
	S0180_PSS = 3451,
	SCENE0180_MOVIE_SLT = 3452,
	SCENE0180_MOVIE_EFF = 3453,
	SCENE0190_SCN = 3454,
	SCENE0190_SLT = 3455,
	SCENE0190_EFF = 3456,
	S0200_PSS = 3457,
	SCENE0200_MOVIE_SLT = 3458,
	SCENE0200_MOVIE_EFF = 3459,
	SCENE0210_SCN = 3460,
	SCENE0210_SLT = 3461,
	SCENE0210_EFF = 3462,
	S0220_PSS = 3463,
	SCENE0220_MOVIE_SLT = 3464,
	SCENE0220_MOVIE_EFF = 3465,
	S0230_PSS = 3466,
	SCENE0230_MOVIE_SLT = 3467,
	SCENE0230_MOVIE_EFF = 3468,
	SCENE0231_SCN = 3469,
	SCENE0231_SLT = 3470,
	SCENE0231_EFF = 3471,
	SCENE0240_SCN = 3472,
	SCENE0240_SLT = 3473,
	SCENE0240_EFF = 3474,
	S0310_PSS = 3475,
	SCENE0310_MOVIE_SLT = 3476,
	SCENE0310_MOVIE_EFF = 3477,
	S0330_PSS = 3478,
	SCENE0330_SLT = 3479,
	SCENE0330_EFF = 3480,
	SCENE0340_SCN = 3481,
	SCENE0340_SLT = 3482,
	SCENE0340_EFF = 3483,
	SCENE0350_SCN = 3484,
	SCENE0350_SLT = 3485,
	SCENE0350_EFF = 3486,
	S0351_PSS = 3487,
	SCENE0351_MOVIE_SLT = 3488,
	SCENE0351_MOVIE_EFF = 3489,
	SCENE0352_SCN = 3490,
	SCENE0352_SLT = 3491,
	SCENE0352_EFF = 3492,
	SCENE0410_SCN = 3493,
	SCENE0410_SLT = 3494,
	SCENE0410_EFF = 3495,
	SCENE0510_SCN = 3496,
	SCENE0510_SLT = 3497,
	SCENE0510_EFF = 3498,
	SCENE0520_SCN = 3499,
	SCENE0520_SLT = 3500,
	SCENE0520_EFF = 3501,
	SCENE0610_SCN = 3502,
	SCENE0610_SLT = 3503,
	SCENE0610_EFF = 3504,
	S0611_PSS = 3505,
	SCENE0611_MOVIE_SLT = 3506,
	SCENE0611_MOVIE_EFF = 3507,
	SCENE0620_SCN = 3508,
	SCENE0620_SLT = 3509,
	SCENE0620_EFF = 3510,
	S0710_PSS = 3511,
	SCENE0710_MOVIE_SLT = 3512,
	SCENE0710_MOVIE_EFF = 3513,
	S0711_PSS = 3514,
	SCENE0711_MOVIE_SLT = 3515,
	SCENE0711_MOVIE_EFF = 3516,
	S0712_PSS = 3517,
	SCENE0712_MOVIE_SLT = 3518,
	SCENE0712_MOVIE_EFF = 3519,
	S0713_PSS = 3520,
	SCENE0713_MOVIE_SLT = 3521,
	SCENE0713_MOVIE_EFF = 3522,
	SCENE0720_SCN = 3523,
	SCENE0720_SLT = 3524,
	SCENE0720_EFF = 3525,
	SCENE0721_SCN = 3526,
	SCENE0721_SLT = 3527,
	SCENE0721_EFF = 3528,
	SCENE0730_SCN = 3529,
	SCENE0730_SLT = 3530,
	SCENE0730_EFF = 3531,
	S0731_PSS = 3532,
	SCENE0731_MOVIE_SLT = 3533,
	SCENE0731_MOVIE_EFF = 3534,
	S0740_PSS = 3535,
	SCENE0740_MOVIE_SLT = 3536,
	SCENE0740_MOVIE_EFF = 3537,
	S0810_PSS = 3538,
	SCENE0810_MOVIE_SLT = 3539,
	SCENE0810_MOVIE_EFF = 3540,
	SCENE0820_SCN = 3541,
	SCENE0820_SLT = 3542,
	SCENE0820_EFF = 3543,
	S0910_PSS = 3544,
	SCENE0910_MOVIE_SLT = 3545,
	SCENE0910_MOVIE_EFF = 3546,
	S0920_PSS = 3547,
	SCENE0920_MOVIE_SLT = 3548,
	SCENE0920_MOVIE_EFF = 3549,
	S0930_PSS = 3550,
	SCENE0930_MOVIE_SLT = 3551,
	SCENE0930_MOVIE_EFF = 3552,
	S0940_PSS = 3553,
	SCENE0940_MOVIE_SLT = 3554,
	SCENE0940_MOVIE_EFF = 3555,
	S0960_PSS = 3556,
	SCENE0960_MOVIE_SLT = 3557,
	SCENE0960_MOVIE_EFF = 3558,
	SCENE1010_SCN = 3559,
	SCENE1010_SLT = 3560,
	SCENE1010_EFF = 3561,
	S1020_PSS = 3562,
	SCENE1020_MOVIE_SLT = 3563,
	SCENE1020_MOVIE_EFF = 3564,
	S1030_PSS = 3565,
	SCENE1030_MOVIE_SLT = 3566,
	SCENE1030_MOVIE_EFF = 3567,
	S1040_PSS = 3568,
	SCENE1040_MOVIE_SLT = 3569,
	SCENE1040_MOVIE_EFF = 3570,
	SCENE9001_SCN = 3571,
	SCENE9001_SLT = 3572,
	SCENE9001_EFF = 3573,
	SCENE9002_SCN = 3574,
	SCENE9002_SLT = 3575,
	SCENE9002_EFF = 3576,
	S9005_PSS = 3577,
	SCENE9005_MOVIE_SLT = 3578,
	SCENE9005_MOVIE_EFF = 3579,
	SCENE9101_SCN = 3580,
	SCENE9101_SLT = 3581,
	SCENE9101_EFF = 3582,
	SCENE9203_SCN = 3583,
	SCENE9203_SLT = 3584,
	SCENE9203_EFF = 3585,
	SCENE9204_SCN = 3586,
	SCENE9204_SLT = 3587,
	SCENE9204_EFF = 3588,
	SCENE9205_SCN = 3589,
	SCENE9205_SLT = 3590,
	SCENE9205_EFF = 3591,
	SCENE9206_SCN = 3592,
	SCENE9206_SLT = 3593,
	SCENE9206_EFF = 3594,
	SCENE9302_SCN = 3595,
	SCENE9302_SLT = 3596,
	SCENE9302_EFF = 3597,
	SCENE9303_SCN = 3598,
	SCENE9303_SLT = 3599,
	SCENE9303_EFF = 3600,
	SCENE9501_SCN = 3601,
	SCENE9501_SLT = 3602,
	SCENE9501_EFF = 3603,
	PROMO_48_PSS = 3604,
	PROMO_48_SLT = 3605,
	PROMO_48_EFF = 3606,
	PROMO_01_PSS = 3607,
	PROMO_01_SLT = 3608,
	PROMO_01_EFF = 3609,
	PROMO_02_PSS = 3610,
	PROMO_02_SLT = 3611,
	PROMO_02_EFF = 3612,
	PROMO_03_PSS = 3613,
	PROMO_03_SLT = 3614,
	PROMO_03_EFF = 3615,
	GAME_OVER_PSS = 3616,
	GAME_OVER_SLT = 3617,
	GAME_OVER_EFF = 3618,
	UBI_ROGO_PSS = 3619,
	UBI_ROGO_SLT = 3620,
	UBI_ROGO_EFF = 3621,
	CALIBRATION_TM2 = 3622,
	VCITEST_PK2 = 3623,
	CHAPTER1_TM2 = 3624,
	CHAPTER1_F_TM2 = 3625,
	CHAPTER1_G_TM2 = 3626,
	CHAPTER1_S_TM2 = 3627,
	CHAPTER1_I_TM2 = 3628,
	CHAPTER2_TM2 = 3629,
	CHAPTER2_F_TM2 = 3630,
	CHAPTER2_G_TM2 = 3631,
	CHAPTER2_S_TM2 = 3632,
	CHAPTER2_I_TM2 = 3633,
	CHAPTER3_TM2 = 3634,
	CHAPTER3_F_TM2 = 3635,
	CHAPTER3_G_TM2 = 3636,
	CHAPTER3_S_TM2 = 3637,
	CHAPTER3_I_TM2 = 3638,
	CHAPTER4_TM2 = 3639,
	CHAPTER4_F_TM2 = 3640,
	CHAPTER4_G_TM2 = 3641,
	CHAPTER4_S_TM2 = 3642,
	CHAPTER4_I_TM2 = 3643,
	CHAPTER5_TM2 = 3644,
	CHAPTER5_F_TM2 = 3645,
	CHAPTER5_G_TM2 = 3646,
	CHAPTER5_S_TM2 = 3647,
	CHAPTER5_I_TM2 = 3648,
	CHAPTER6_TM2 = 3649,
	CHAPTER6_F_TM2 = 3650,
	CHAPTER6_G_TM2 = 3651,
	CHAPTER6_S_TM2 = 3652,
	CHAPTER6_I_TM2 = 3653,
	CHAPTER7_TM2 = 3654,
	CHAPTER7_F_TM2 = 3655,
	CHAPTER7_G_TM2 = 3656,
	CHAPTER7_S_TM2 = 3657,
	CHAPTER7_I_TM2 = 3658,
	CHAPTER8_TM2 = 3659,
	CHAPTER8_F_TM2 = 3660,
	CHAPTER8_G_TM2 = 3661,
	CHAPTER8_S_TM2 = 3662,
	CHAPTER8_I_TM2 = 3663,
	CHAPTER9_TM2 = 3664,
	CHAPTER9_F_TM2 = 3665,
	CHAPTER9_G_TM2 = 3666,
	CHAPTER9_S_TM2 = 3667,
	CHAPTER9_I_TM2 = 3668,
	CHAPTER10_TM2 = 3669,
	CHAPTER10_F_TM2 = 3670,
	CHAPTER10_G_TM2 = 3671,
	CHAPTER10_S_TM2 = 3672,
	CHAPTER10_I_TM2 = 3673,
	CHAPTER11_TM2 = 3674,
	CHAPTER11_F_TM2 = 3675,
	CHAPTER11_G_TM2 = 3676,
	CHAPTER11_S_TM2 = 3677,
	CHAPTER11_I_TM2 = 3678,
	ITEM_000_TM2 = 3679,
	ITEM_001_TM2 = 3680,
	ITEM_002_TM2 = 3681,
	ITEM_003_TM2 = 3682,
	ITEM_004_TM2 = 3683,
	ITEM_005_TM2 = 3684,
	ITEM_006_TM2 = 3685,
	ITEM_007_TM2 = 3686,
	ITEM_008_TM2 = 3687,
	ITEM_009_TM2 = 3688,
	ITEM_010_TM2 = 3689,
	ITEM_011_TM2 = 3690,
	ITEM_012_TM2 = 3691,
	ITEM_013_TM2 = 3692,
	ITEM_014_TM2 = 3693,
	ITEM_015_TM2 = 3694,
	ITEM_016_TM2 = 3695,
	ITEM_017_TM2 = 3696,
	ITEM_018_TM2 = 3697,
	ITEM_019_TM2 = 3698,
	ITEM_020_TM2 = 3699,
	ITEM_021_TM2 = 3700,
	ITEM_022_TM2 = 3701,
	ITEM_023_TM2 = 3702,
	ITEM_024_TM2 = 3703,
	ITEM_025_TM2 = 3704,
	ITEM_026_TM2 = 3705,
	ITEM_027_TM2 = 3706,
	ITEM_028_TM2 = 3707,
	ITEM_029_TM2 = 3708,
	ITEM_030_TM2 = 3709,
	ITEM_031_TM2 = 3710,
	ITEM_032_TM2 = 3711,
	ITEM_033_TM2 = 3712,
	ITEM_034_TM2 = 3713,
	ITEM_035_TM2 = 3714,
	ITEM_036_TM2 = 3715,
	ITEM_037_TM2 = 3716,
	ITEM_038_TM2 = 3717,
	ITEM_039_TM2 = 3718,
	ITEM_040_TM2 = 3719,
	ITEM_041_TM2 = 3720,
	ITEM_042_TM2 = 3721,
	ITEM_043_TM2 = 3722,
	ITEM_044_TM2 = 3723,
	ITEM_045_TM2 = 3724,
	ITEM_046_TM2 = 3725,
	ITEM_047_TM2 = 3726,
	ITEM_048_TM2 = 3727,
	ITEM_049_TM2 = 3728,
	ITEM_050_TM2 = 3729,
	ITEM_051_TM2 = 3730,
	ITEM_052_TM2 = 3731,
	ITEM_053_TM2 = 3732,
	ITEM_054_TM2 = 3733,
	ITEM_055_TM2 = 3734,
	ITEM_056_TM2 = 3735,
	ITEM_057_TM2 = 3736,
	ITEM_058_TM2 = 3737,
	ITEM_059_TM2 = 3738,
	ITEM_060_TM2 = 3739,
	ITEM_061_TM2 = 3740,
	ITEM_062_TM2 = 3741,
	ITEM_063_TM2 = 3742,
	ITEM_064_TM2 = 3743,
	ITEM_065_TM2 = 3744,
	ITEM_066_TM2 = 3745,
	ITEM_067_TM2 = 3746,
	ITEM_068_TM2 = 3747,
	ITEM_069_TM2 = 3748,
	DOC_POCKETBOOK_000_TM2 = 3749,
	DOC_POCKETBOOK_001_TM2 = 3750,
	DOC_POCKETBOOK_002_TM2 = 3751,
	DOC_POCKETBOOK_003_TM2 = 3752,
	DOC_POCKETBOOK_004_TM2 = 3753,
	DOC_POCKETBOOK_005_TM2 = 3754,
	DOC_POCKETBOOK_006_TM2 = 3755,
	DOC_POCKETBOOK_007_TM2 = 3756,
	DOC_POCKETBOOK_008_TM2 = 3757,
	DOC_POCKETBOOK_009_TM2 = 3758,
	DOC_POCKETBOOK_010_TM2 = 3759,
	DOC_POCKETBOOK_011_TM2 = 3760,
	DOC_POCKETBOOK_012_TM2 = 3761,
	DOC_POCKETBOOK_013_TM2 = 3762,
	DOC_POCKETBOOK_014_TM2 = 3763,
	DOC_POCKETBOOK_015_TM2 = 3764,
	DOC_POCKETBOOK_016_TM2 = 3765,
	DOC_POCKETBOOK_017_TM2 = 3766,
	DOC_POCKETBOOK_018_TM2 = 3767,
	DOC_POCKETBOOK_019_TM2 = 3768,
	DOC_POCKETBOOK_020_TM2 = 3769,
	DOC_POCKETBOOK_021_TM2 = 3770,
	DOC_POCKETBOOK_022_TM2 = 3771,
	DOC_POCKETBOOK_023_TM2 = 3772,
	DOC_POCKETBOOK_024_TM2 = 3773,
	DOC_POCKETBOOK_025_TM2 = 3774,
	DOC_POCKETBOOK_026_TM2 = 3775,
	DOC_POCKETBOOK_027_TM2 = 3776,
	DOC_POCKETBOOK_028_TM2 = 3777,
	DOC_POCKETBOOK_029_TM2 = 3778,
	DOC_POCKETBOOK_MASUMI04_BROKEN_TM2 = 3779,
	DOC_POCKETBOOK_MASUMI04_TM2 = 3780,
	DOC_POCKETBOOK_030_TM2 = 3781,
	DOC_POCKETBOOK_031_TM2 = 3782,
	DOC_POCKETBOOK_032_TM2 = 3783,
	DOC_POCKETBOOK_033_TM2 = 3784,
	DOC_POCKETBOOK_034_TM2 = 3785,
	DOC_POCKETBOOK_035_TM2 = 3786,
	DOC_POCKETBOOK_036_TM2 = 3787,
	DOC_POCKETBOOK_037_TM2 = 3788,
	DOC_POCKETBOOK_038_TM2 = 3789,
	DOC_POCKETBOOK_039_TM2 = 3790,
	DOC_SCRAP_000_TM2 = 3791,
	DOC_SCRAP_001_TM2 = 3792,
	DOC_SCRAP_002_TM2 = 3793,
	DOC_SCRAP_003_TM2 = 3794,
	DOC_SCRAP_004_TM2 = 3795,
	DOC_SCRAP_005_TM2 = 3796,
	DOC_SCRAP_006_TM2 = 3797,
	DOC_SCRAP_007_TM2 = 3798,
	DOC_SCRAP_008_TM2 = 3799,
	DOC_SCRAP_009_TM2 = 3800,
	DOC_SCRAP_010_TM2 = 3801,
	DOC_SCRAP_011_TM2 = 3802,
	DOC_SCRAP_012_TM2 = 3803,
	DOC_SCRAP_013_TM2 = 3804,
	DOC_SCRAP_014_TM2 = 3805,
	DOC_SCRAP_015_TM2 = 3806,
	DOC_SCRAP_016_TM2 = 3807,
	DOC_SCRAP_017_TM2 = 3808,
	DOC_SCRAP_018_TM2 = 3809,
	DOC_SCRAP_019_TM2 = 3810,
	DOC_SCRAP_020_TM2 = 3811,
	DOC_SCRAP_021_TM2 = 3812,
	DOC_SCRAP_022_TM2 = 3813,
	DOC_SCRAP_023_TM2 = 3814,
	DOC_SCRAP_024_TM2 = 3815,
	DOC_SCRAP_025_TM2 = 3816,
	DOC_SCRAP_026_TM2 = 3817,
	DOC_SCRAP_027_TM2 = 3818,
	DOC_SCRAP_028_TM2 = 3819,
	DOC_SCRAP_029_TM2 = 3820,
	DOC_SCRAP_030_TM2 = 3821,
	DOC_SCRAP_031_TM2 = 3822,
	DOC_SCRAP_032_TM2 = 3823,
	DOC_SCRAP_033_TM2 = 3824,
	DOC_SCRAP_034_TM2 = 3825,
	DOC_SCRAP_035_TM2 = 3826,
	DOC_SCRAP_036_TM2 = 3827,
	DOC_SCRAP_037_TM2 = 3828,
	DOC_SCRAP_038_TM2 = 3829,
	DOC_SCRAP_039_TM2 = 3830,
	DOC_SCRAP_040_TM2 = 3831,
	DOC_SCRAP_041_TM2 = 3832,
	DOC_OLDBOOK_000_TM2 = 3833,
	DOC_OLDBOOK_001_TM2 = 3834,
	DOC_OLDBOOK_002_TM2 = 3835,
	DOC_OLDBOOK_003_TM2 = 3836,
	DOC_OLDBOOK_004_TM2 = 3837,
	DOC_OLDBOOK_005_TM2 = 3838,
	DOC_OLDBOOK_006_TM2 = 3839,
	DOC_OLDBOOK_007_TM2 = 3840,
	DOC_OLDBOOK_008_TM2 = 3841,
	DOC_OLDBOOK_009_TM2 = 3842,
	DOC_OLDBOOK_010_TM2 = 3843,
	DOC_OLDBOOK_011_TM2 = 3844,
	DOC_OLDBOOK_012_TM2 = 3845,
	DOC_OLDBOOK_013_TM2 = 3846,
	DOC_OLDBOOK_014_TM2 = 3847,
	DOC_OLDBOOK_015_TM2 = 3848,
	DOC_OLDBOOK_016_TM2 = 3849,
	DOC_OLDBOOK_017_TM2 = 3850,
	DOC_OLDBOOK_018_TM2 = 3851,
	DOC_OLDBOOK_019_TM2 = 3852,
	DOC_OLDBOOK_020_TM2 = 3853,
	DOC_OLDBOOK_021_TM2 = 3854,
	DOC_OLDBOOK_022_TM2 = 3855,
	DOC_OLDBOOK_023_TM2 = 3856,
	DOC_OLDBOOK_024_TM2 = 3857,
	DOC_OLDBOOK_025_TM2 = 3858,
	DOC_OLDBOOK_026_TM2 = 3859,
	DOC_OLDBOOK_027_TM2 = 3860,
	DOC_OLDBOOK_028_TM2 = 3861,
	DOC_OLDBOOK_029_TM2 = 3862,
	DOC_OLDBOOK_030_TM2 = 3863,
	DOC_OLDBOOK_031_TM2 = 3864,
	DOC_OLDBOOK_032_TM2 = 3865,
	DOC_OLDBOOK_033_TM2 = 3866,
	DOC_OLDBOOK_034_TM2 = 3867,
	DOC_OLDBOOK_035_TM2 = 3868,
	DOC_OLDBOOK_036_TM2 = 3869,
	DOC_OLDBOOK_037_TM2 = 3870,
	DOC_OLDBOOK_038_TM2 = 3871,
	DOC_OLDBOOK_039_TM2 = 3872,
	PHT_DTS_PK2 = 3873,
	PHT_TOP_000_TM2 = 3874,
	PHT_TOP_001_TM2 = 3875,
	PHT_TOP_002_TM2 = 3876,
	PHT_TOP_003_TM2 = 3877,
	PHT_TOP_004_TM2 = 3878,
	PHT_TOP_005_TM2 = 3879,
	PHT_TOP_006_TM2 = 3880,
	PHT_TOP_007_TM2 = 3881,
	PHT_TOP_008_TM2 = 3882,
	PHT_TOP_009_TM2 = 3883,
	PHT_TOP_010_TM2 = 3884,
	PHT_TOP_011_TM2 = 3885,
	PHT_TOP_012_TM2 = 3886,
	PHT_TOP_013_TM2 = 3887,
	PHT_TOP_014_TM2 = 3888,
	PHT_TOP_015_TM2 = 3889,
	PHT_TOP_016_TM2 = 3890,
	PHT_TOP_017_TM2 = 3891,
	PHT_TOP_018_TM2 = 3892,
	PHT_TOP_019_TM2 = 3893,
	PHT_TOP_020_TM2 = 3894,
	PHT_TOP_021_TM2 = 3895,
	PHT_TOP_022_TM2 = 3896,
	PHT_TOP_023_TM2 = 3897,
	PHT_TOP_024_TM2 = 3898,
	PHT_TOP_025_TM2 = 3899,
	PHT_GET_000_PK2 = 3900,
	PHT_GET_001_PK2 = 3901,
	PHT_GET_002_PK2 = 3902,
	PHT_GET_003_PK2 = 3903,
	PHT_GET_004_PK2 = 3904,
	PHT_GET_005_PK2 = 3905,
	PHT_GET_006_PK2 = 3906,
	PHT_GET_007_PK2 = 3907,
	PHT_GET_008_PK2 = 3908,
	PHT_GET_009_PK2 = 3909,
	PHT_GET_010_PK2 = 3910,
	PHT_GET_011_PK2 = 3911,
	PHT_GET_012_PK2 = 3912,
	PHT_GET_013_PK2 = 3913,
	PHT_GET_014_PK2 = 3914,
	PHT_GET_015_PK2 = 3915,
	PHT_GET_016_PK2 = 3916,
	PHT_GET_017_PK2 = 3917,
	PHT_GET_018_PK2 = 3918,
	PHT_GET_019_PK2 = 3919,
	PHT_GET_020_PK2 = 3920,
	PHT_GET_021_PK2 = 3921,
	PHT_GET_022_PK2 = 3922,
	PHT_GET_023_PK2 = 3923,
	PHT_GET_024_PK2 = 3924,
	PHT_GET_025_PK2 = 3925,
	PHT_DTL_000_TM2 = 3926,
	PHT_DTL_001_TM2 = 3927,
	PHT_DTL_002_TM2 = 3928,
	PHT_DTL_003_TM2 = 3929,
	PHT_DTL_004_TM2 = 3930,
	PHT_DTL_005_TM2 = 3931,
	PHT_DTL_006_TM2 = 3932,
	PHT_DTL_007_TM2 = 3933,
	PHT_DTL_008_TM2 = 3934,
	PHT_DTL_009_TM2 = 3935,
	PHT_DTL_010_TM2 = 3936,
	PHT_DTL_011_TM2 = 3937,
	PHT_DTL_012_TM2 = 3938,
	PHT_DTL_013_TM2 = 3939,
	PHT_DTL_014_TM2 = 3940,
	PHT_DTL_015_TM2 = 3941,
	PHT_DTL_016_TM2 = 3942,
	PHT_DTL_017_TM2 = 3943,
	PHT_DTL_018_TM2 = 3944,
	PHT_DTL_019_TM2 = 3945,
	PHT_DTL_020_TM2 = 3946,
	PHT_DTL_021_TM2 = 3947,
	PHT_DTL_022_TM2 = 3948,
	PHT_DTL_023_TM2 = 3949,
	PHT_DTL_024_TM2 = 3950,
	PHT_DTL_025_TM2 = 3951,
	PIC_DTS_PK2 = 3952,
	PIC_GET_000_TM2 = 3953,
	PIC_GET_001_TM2 = 3954,
	PIC_GET_002_TM2 = 3955,
	PIC_GET_003_TM2 = 3956,
	PIC_GET_004_TM2 = 3957,
	PIC_GET_005_TM2 = 3958,
	PIC_GET_006_TM2 = 3959,
	PIC_GET_007_TM2 = 3960,
	PIC_GET_008_TM2 = 3961,
	PIC_GET_009_TM2 = 3962,
	PIC_DTL_000_TM2 = 3963,
	PIC_DTL_001_TM2 = 3964,
	PIC_DTL_002_TM2 = 3965,
	PIC_DTL_003_TM2 = 3966,
	PIC_DTL_004_TM2 = 3967,
	PIC_DTL_005_TM2 = 3968,
	PIC_DTL_006_TM2 = 3969,
	PIC_DTL_007_TM2 = 3970,
	PIC_DTL_008_TM2 = 3971,
	PIC_DTL_009_TM2 = 3972,
	RADIO_CRYSTAL_01_PK2 = 3973,
	RADIO_CRYSTAL_02_PK2 = 3974,
	RADIO_CRYSTAL_03_PK2 = 3975,
	RADIO_CRYSTAL_04_PK2 = 3976,
	RADIO_CRYSTAL_05_PK2 = 3977,
	RADIO_CRYSTAL_06_PK2 = 3978,
	RADIO_CRYSTAL_07_PK2 = 3979,
	RADIO_CRYSTAL_08_PK2 = 3980,
	RADIO_CRYSTAL_09_PK2 = 3981,
	RADIO_CRYSTAL_10_PK2 = 3982,
	RADIO_CRYSTAL_11_PK2 = 3983,
	RADIO_CRYSTAL_12_PK2 = 3984,
	RADIO_CRYSTAL_13_PK2 = 3985,
	RADIO_CRYSTAL_14_PK2 = 3986,
	RADIO_CRYSTAL_15_PK2 = 3987,
	RADIO_CRYSTAL_16_PK2 = 3988,
	RADIO_CRYSTAL_17_PK2 = 3989,
	RADIO_CRYSTAL_18_PK2 = 3990,
	RADIO_CRYSTAL_19_PK2 = 3991,
	RADIO_CRYSTAL_20_PK2 = 3992,
	RADIO_CRYSTAL_21_PK2 = 3993,
	RADIO_CRYSTAL_22_PK2 = 3994,
	RADIO_CRYSTAL_23_PK2 = 3995,
	RADIO_CRYSTAL_24_PK2 = 3996,
	RADIO_CRYSTAL_25_PK2 = 3997,
	RADIO_CRYSTAL_26_PK2 = 3998,
	RADIO_CRYSTAL_27_PK2 = 3999,
	RADIO_CRYSTAL_28_PK2 = 4000,
	RADIO_CRYSTAL_29_PK2 = 4001,
	RADIO_CRYSTAL_30_PK2 = 4002,
	RADIO_CRYSTAL_31_PK2 = 4003,
	RADIO_CRYSTAL_32_PK2 = 4004,
	RADIO_CRYSTAL_33_PK2 = 4005,
	RADIO_CRYSTAL_34_PK2 = 4006,
	RADIO_CRYSTAL_35_PK2 = 4007,
	RADIO_CRYSTAL_36_PK2 = 4008,
	RADIO_CRYSTAL_37_PK2 = 4009,
	RADIO_CRYSTAL_38_PK2 = 4010,
	RADIO_CRYSTAL_39_PK2 = 4011,
	RADIO_CRYSTAL_40_PK2 = 4012,
	CRY_001_TM2 = 4013,
	CRY_002_TM2 = 4014,
	CRY_003_TM2 = 4015,
	CRY_004_TM2 = 4016,
	CRY_005_TM2 = 4017,
	CRY_006_TM2 = 4018,
	CRY_007_TM2 = 4019,
	CRY_008_TM2 = 4020,
	CRY_009_TM2 = 4021,
	CRY_010_TM2 = 4022,
	CRY_011_TM2 = 4023,
	CRY_012_TM2 = 4024,
	CRY_013_TM2 = 4025,
	CRY_014_TM2 = 4026,
	CRY_015_TM2 = 4027,
	CRY_016_TM2 = 4028,
	CRY_017_TM2 = 4029,
	CRY_018_TM2 = 4030,
	CRY_019_TM2 = 4031,
	CRY_020_TM2 = 4032,
	CRY_021_TM2 = 4033,
	CRY_022_TM2 = 4034,
	CRY_023_TM2 = 4035,
	CRY_024_TM2 = 4036,
	CRY_025_TM2 = 4037,
	CRY_026_TM2 = 4038,
	CRY_027_TM2 = 4039,
	CRY_028_TM2 = 4040,
	CRY_029_TM2 = 4041,
	CRY_030_TM2 = 4042,
	CRY_031_TM2 = 4043,
	CRY_032_TM2 = 4044,
	CRY_033_TM2 = 4045,
	CRY_034_TM2 = 4046,
	CRY_035_TM2 = 4047,
	CRY_036_TM2 = 4048,
	CRY_037_TM2 = 4049,
	CRY_038_TM2 = 4050,
	CRY_039_TM2 = 4051,
	CRY_040_TM2 = 4052,
	REI_PHT_000_TM2 = 4053,
	REI_PHT_001_TM2 = 4054,
	REI_PHT_002_TM2 = 4055,
	REI_PHT_003_TM2 = 4056,
	REI_PHT_004_TM2 = 4057,
	REI_PHT_005_TM2 = 4058,
	REI_PHT_006_TM2 = 4059,
	REI_PHT_007_TM2 = 4060,
	REI_PHT_008_TM2 = 4061,
	REI_PHT_009_TM2 = 4062,
	REI_PHT_010_TM2 = 4063,
	REI_PHT_011_TM2 = 4064,
	REI_PHT_012_TM2 = 4065,
	REI_PHT_013_TM2 = 4066,
	REI_PHT_014_TM2 = 4067,
	REI_PHT_015_TM2 = 4068,
	REI_PHT_016_TM2 = 4069,
	REI_PHT_017_TM2 = 4070,
	REI_PHT_018_TM2 = 4071,
	REI_PHT_019_TM2 = 4072,
	REI_PHT_020_TM2 = 4073,
	REI_PHT_021_TM2 = 4074,
	REI_PHT_022_TM2 = 4075,
	REI_PHT_023_TM2 = 4076,
	REI_PHT_024_TM2 = 4077,
	REI_PHT_026_TM2 = 4078,
	REI_PHT_027_TM2 = 4079,
	REI_PHT_028_TM2 = 4080,
	REI_PHT_029_TM2 = 4081,
	REI_PHT_030_TM2 = 4082,
	REI_PHT_031_TM2 = 4083,
	REI_PHT_032_TM2 = 4084,
	REI_PHT_033_TM2 = 4085,
	REI_PHT_034_TM2 = 4086,
	REI_PHT_035_TM2 = 4087,
	REI_PHT_036_TM2 = 4088,
	REI_PHT_037_TM2 = 4089,
	REI_PHT_038_TM2 = 4090,
	REI_PHT_039_TM2 = 4091,
	REI_PHT_040_TM2 = 4092,
	REI_PHT_041_TM2 = 4093,
	REI_PHT_042_TM2 = 4094,
	REI_PHT_043_TM2 = 4095,
	REI_PHT_044_TM2 = 4096,
	REI_PHT_045_TM2 = 4097,
	REI_PHT_046_TM2 = 4098,
	REI_PHT_047_TM2 = 4099,
	REI_PHT_048_TM2 = 4100,
	REI_PHT_049_TM2 = 4101,
	REI_PHT_050_TM2 = 4102,
	REI_PHT_051_TM2 = 4103,
	REI_PHT_052_TM2 = 4104,
	REI_PHT_053_TM2 = 4105,
	REI_PHT_054_TM2 = 4106,
	REI_PHT_055_TM2 = 4107,
	REI_PHT_056_TM2 = 4108,
	REI_PHT_057_TM2 = 4109,
	REI_PHT_058_TM2 = 4110,
	REI_PHT_059_TM2 = 4111,
	REI_PHT_060_TM2 = 4112,
	REI_PHT_061_TM2 = 4113,
	REI_PHT_062_TM2 = 4114,
	REI_PHT_063_TM2 = 4115,
	REI_PHT_064_TM2 = 4116,
	REI_PHT_065_TM2 = 4117,
	REI_PHT_066_TM2 = 4118,
	REI_PHT_067_TM2 = 4119,
	REI_PHT_068_TM2 = 4120,
	REI_PHT_069_TM2 = 4121,
	REI_PHT_070_TM2 = 4122,
	REI_PHT_071_TM2 = 4123,
	REI_PHT_072_TM2 = 4124,
	REI_PHT_073_TM2 = 4125,
	REI_PHT_074_TM2 = 4126,
	REI_PHT_075_TM2 = 4127,
	REI_PHT_076_TM2 = 4128,
	REI_PHT_077_TM2 = 4129,
	REI_PHT_078_TM2 = 4130,
	REI_PHT_079_TM2 = 4131,
	REI_PHT_080_TM2 = 4132,
	REI_PHT_081_TM2 = 4133,
	REI_PHT_082_TM2 = 4134,
	REI_PHT_083_TM2 = 4135,
	REI_PHT_084_TM2 = 4136,
	REI_PHT_085_TM2 = 4137,
	REI_PHT_086_TM2 = 4138,
	REI_PHT_087_TM2 = 4139,
	REI_PHT_088_TM2 = 4140,
	REI_PHT_089_TM2 = 4141,
	REI_PHT_090_TM2 = 4142,
	REI_PHT_091_TM2 = 4143,
	REI_PHT_092_TM2 = 4144,
	REI_PHT_093_TM2 = 4145,
	REI_PHT_094_TM2 = 4146,
	REI_PHT_095_TM2 = 4147,
	REI_PHT_096_TM2 = 4148,
	REI_PHT_097_TM2 = 4149,
	REI_PHT_098_TM2 = 4150,
	REI_PHT_099_TM2 = 4151,
	REI_PHT_100_TM2 = 4152,
	REI_PHT_101_TM2 = 4153,
	REI_PHT_102_TM2 = 4154,
	REI_PHT_103_TM2 = 4155,
	REI_PHT_104_TM2 = 4156,
	REI_PHT_105_TM2 = 4157,
	REI_PHT_106_TM2 = 4158,
	REI_PHT_107_TM2 = 4159,
	REI_PHT_108_TM2 = 4160,
	REI_PHT_109_TM2 = 4161,
	REI_PHT_110_TM2 = 4162,
	REI_PHT_111_TM2 = 4163,
	REI_PHT_112_TM2 = 4164,
	REI_PHT_113_TM2 = 4165,
	REI_PHT_114_TM2 = 4166,
	REI_PHT_115_TM2 = 4167,
	REI_PHT_116_TM2 = 4168,
	REI_PHT_117_TM2 = 4169,
	REI_PHT_118_TM2 = 4170,
	REI_PHT_119_TM2 = 4171,
	REI_PHT_120_TM2 = 4172,
	REI_PHT_121_TM2 = 4173,
	REI_PHT_122_TM2 = 4174,
	REI_PHT_123_TM2 = 4175,
	REI_PHT_124_TM2 = 4176,
	REI_PHT_125_TM2 = 4177,
	REI_PHT_126_TM2 = 4178,
	REI_PHT_127_TM2 = 4179,
	REI_PHT_128_TM2 = 4180,
	REI_PHT_129_TM2 = 4181,
	REI_PHT_130_TM2 = 4182,
	REI_PHT_131_TM2 = 4183,
	REI_PHT_132_TM2 = 4184,
	REI_PHT_133_TM2 = 4185,
	REI_PHT_134_TM2 = 4186,
	REI_PHT_135_TM2 = 4187,
	REI_PHT_136_TM2 = 4188,
	REI_PHT_137_TM2 = 4189,
	REI_PHT_138_TM2 = 4190,
	REI_PHT_139_TM2 = 4191,
	REI_PHT_140_TM2 = 4192,
	REI_PHT_141_TM2 = 4193,
	REI_PHT_142_TM2 = 4194,
	REI_PHT_143_TM2 = 4195,
	REI_PHT_144_TM2 = 4196,
	REI_PHT_145_TM2 = 4197,
	REI_PHT_146_TM2 = 4198,
	REI_PHT_147_TM2 = 4199,
	REI_PHT_148_TM2 = 4200,
	REI_PHT_149_TM2 = 4201,
	REI_PHT_150_TM2 = 4202,
	REI_PHT_151_TM2 = 4203,
	REI_PHT_152_TM2 = 4204,
	REI_PHT_153_TM2 = 4205,
	REI_PHT_154_TM2 = 4206,
	REI_PHT_155_TM2 = 4207,
	REI_PHT_156_TM2 = 4208,
	REI_PHT_157_TM2 = 4209,
	REI_PHT_158_TM2 = 4210,
	REI_PHT_159_TM2 = 4211,
	REI_PHT_160_TM2 = 4212,
	REI_PHT_161_TM2 = 4213,
	REI_PHT_162_TM2 = 4214,
	REI_PHT_163_TM2 = 4215,
	REI_PHT_164_TM2 = 4216,
	REI_PHT_165_TM2 = 4217,
	REI_PHT_166_TM2 = 4218,
	REI_PHT_167_TM2 = 4219,
	REI_PHT_168_TM2 = 4220,
	REI_PHT_169_TM2 = 4221,
	REI_PHT_170_TM2 = 4222,
	REI_PHT_171_TM2 = 4223,
	REI_PHT_172_TM2 = 4224,
	REI_PHT_173_TM2 = 4225,
	REI_PHT_174_TM2 = 4226,
	REI_PHT_175_TM2 = 4227,
	REI_PHT_176_TM2 = 4228,
	REI_PHT_177_TM2 = 4229,
	REI_GET_000_PK2 = 4230,
	REI_GET_001_PK2 = 4231,
	REI_GET_002_PK2 = 4232,
	REI_GET_003_PK2 = 4233,
	REI_GET_004_PK2 = 4234,
	REI_GET_005_PK2 = 4235,
	REI_GET_006_PK2 = 4236,
	REI_GET_007_PK2 = 4237,
	REI_GET_008_PK2 = 4238,
	REI_GET_009_PK2 = 4239,
	REI_GET_010_PK2 = 4240,
	REI_GET_011_PK2 = 4241,
	REI_GET_012_PK2 = 4242,
	REI_GET_013_PK2 = 4243,
	REI_GET_014_PK2 = 4244,
	REI_GET_015_PK2 = 4245,
	REI_GET_016_PK2 = 4246,
	REI_GET_017_PK2 = 4247,
	REI_GET_018_PK2 = 4248,
	REI_GET_019_PK2 = 4249,
	REI_GET_020_PK2 = 4250,
	REI_GET_021_PK2 = 4251,
	REI_GET_022_PK2 = 4252,
	REI_GET_023_PK2 = 4253,
	REI_GET_024_PK2 = 4254,
	REI_GET_025_PK2 = 4255,
	REI_GET_026_PK2 = 4256,
	REI_GET_027_PK2 = 4257,
	REI_GET_028_PK2 = 4258,
	REI_GET_029_PK2 = 4259,
	REI_GET_030_PK2 = 4260,
	REI_GET_031_PK2 = 4261,
	REI_GET_032_PK2 = 4262,
	REI_GET_033_PK2 = 4263,
	REI_GET_034_PK2 = 4264,
	REI_GET_035_PK2 = 4265,
	KAGIANA_TM2 = 4266,
	GAME_000_TM2 = 4267,
	GAME_001_TM2 = 4268,
	GAME_002_TM2 = 4269,
	GAME_003_TM2 = 4270,
	GAME_004_TM2 = 4271,
	GAME_005_TM2 = 4272,
	GAME_006_TM2 = 4273,
	GAME_007_TM2 = 4274,
	GAME_008_TM2 = 4275,
	GAME_009_TM2 = 4276,
	GAME_010_TM2 = 4277,
	GAME_011_TM2 = 4278,
	GAME_012_TM2 = 4279,
	GAME_013_TM2 = 4280,
	GAME_014_TM2 = 4281,
	GAME_015_TM2 = 4282,
	GAME_016_TM2 = 4283,
	GAME_017_TM2 = 4284,
	GAME_018_TM2 = 4285,
	GAME_019_TM2 = 4286,
	GAME_020_TM2 = 4287,
	GAME_021_TM2 = 4288,
	GAME_022_TM2 = 4289,
	GAME_023_TM2 = 4290,
	GAME_024_TM2 = 4291,
	PUZZLE_HINA_PK2 = 4292,
	PUZZLE_HINA_F_PK2 = 4293,
	PUZZLE_HINA_G_PK2 = 4294,
	PUZZLE_HINA_S_PK2 = 4295,
	PUZZLE_HINA_I_PK2 = 4296,
	PUZZLE_ROKU_PK2 = 4297,
	PUZZLE_ROKU_F_PK2 = 4298,
	PUZZLE_ROKU_G_PK2 = 4299,
	PUZZLE_ROKU_S_PK2 = 4300,
	PUZZLE_ROKU_I_PK2 = 4301,
	PUZZLE_KAZA_PK2 = 4302,
	PUZZLE_KAZA_F_PK2 = 4303,
	PUZZLE_KAZA_G_PK2 = 4304,
	PUZZLE_KAZA_S_PK2 = 4305,
	PUZZLE_KAZA_I_PK2 = 4306,
	PUZZLE_KAZA_2_PK2 = 4307,
	PUZZLE_KAZA_2_F_PK2 = 4308,
	PUZZLE_KAZA_2_G_PK2 = 4309,
	PUZZLE_KAZA_2_S_PK2 = 4310,
	PUZZLE_KAZA_2_I_PK2 = 4311,
	ALBM_CMN_PK2 = 4312,
	ALBM_CMN_F_PK2 = 4313,
	ALBM_CMN_G_PK2 = 4314,
	ALBM_CMN_S_PK2 = 4315,
	ALBM_CMN_I_PK2 = 4316,
	ALBM_HENSYU_PK2 = 4317,
	ALBM_HENSYU_F_PK2 = 4318,
	ALBM_HENSYU_G_PK2 = 4319,
	ALBM_HENSYU_S_PK2 = 4320,
	ALBM_HENSYU_I_PK2 = 4321,
	ALBM_KKD_PAT0_PK2 = 4322,
	ALBM_KKD_PAT0_F_PK2 = 4323,
	ALBM_KKD_PAT0_G_PK2 = 4324,
	ALBM_KKD_PAT0_S_PK2 = 4325,
	ALBM_KKD_PAT0_I_PK2 = 4326,
	ALBM_KKD_PAT1_PK2 = 4327,
	ALBM_KKD_PAT1_F_PK2 = 4328,
	ALBM_KKD_PAT1_G_PK2 = 4329,
	ALBM_KKD_PAT1_S_PK2 = 4330,
	ALBM_KKD_PAT1_I_PK2 = 4331,
	ALBM_KKD_PAT2_PK2 = 4332,
	ALBM_KKD_PAT2_F_PK2 = 4333,
	ALBM_KKD_PAT2_G_PK2 = 4334,
	ALBM_KKD_PAT2_S_PK2 = 4335,
	ALBM_KKD_PAT2_I_PK2 = 4336,
	ALBM_KKD_PAT3_PK2 = 4337,
	ALBM_KKD_PAT3_F_PK2 = 4338,
	ALBM_KKD_PAT3_G_PK2 = 4339,
	ALBM_KKD_PAT3_S_PK2 = 4340,
	ALBM_KKD_PAT3_I_PK2 = 4341,
	ALBM_KKD_PAT4_PK2 = 4342,
	ALBM_KKD_PAT4_F_PK2 = 4343,
	ALBM_KKD_PAT4_G_PK2 = 4344,
	ALBM_KKD_PAT4_S_PK2 = 4345,
	ALBM_KKD_PAT4_I_PK2 = 4346,
	ALBM_KKD_PAT5_PK2 = 4347,
	ALBM_KKD_PAT5_F_PK2 = 4348,
	ALBM_KKD_PAT5_G_PK2 = 4349,
	ALBM_KKD_PAT5_S_PK2 = 4350,
	ALBM_KKD_PAT5_I_PK2 = 4351,
	ALBM_SL_PK2 = 4352,
	ALBM_SLOT_SL_PK2 = 4353,
	ALBM_SLOT_SL_F_PK2 = 4354,
	ALBM_SLOT_SL_G_PK2 = 4355,
	ALBM_SLOT_SL_S_PK2 = 4356,
	ALBM_SLOT_SL_I_PK2 = 4357,
	SETUP_BG_PK2 = 4358,
	SETUP_BG_F_PK2 = 4359,
	SETUP_BG_G_PK2 = 4360,
	SETUP_BG_S_PK2 = 4361,
	SETUP_BG_I_PK2 = 4362,
	SETUP_FONT_PK2 = 4363,
	SETUP_FONT_F_PK2 = 4364,
	SETUP_FONT_G_PK2 = 4365,
	SETUP_FONT_S_PK2 = 4366,
	SETUP_FONT_I_PK2 = 4367,
	OPTION_TOP_PK2 = 4368,
	OPTION_TOP_F_PK2 = 4369,
	OPTION_TOP_G_PK2 = 4370,
	OPTION_TOP_S_PK2 = 4371,
	OPTION_TOP_I_PK2 = 4372,
	OPTION_MEIDO_PK2 = 4373,
	OPTION_KEY_PK2 = 4374,
	OPTION_KEY_F_PK2 = 4375,
	OPTION_KEY_G_PK2 = 4376,
	OPTION_KEY_S_PK2 = 4377,
	OPTION_KEY_I_PK2 = 4378,
	MSN_SL_PK2 = 4379,
	MSN_SL_F_PK2 = 4380,
	MSN_SL_G_PK2 = 4381,
	MSN_SL_S_PK2 = 4382,
	MSN_SL_I_PK2 = 4383,
	MSN_START_PK2 = 4384,
	MSN_START_F_PK2 = 4385,
	MSN_START_G_PK2 = 4386,
	MSN_START_S_PK2 = 4387,
	MSN_START_I_PK2 = 4388,
	MSN_RESULT_PK2 = 4389,
	MSN_RESULT_F_PK2 = 4390,
	MSN_RESULT_G_PK2 = 4391,
	MSN_RESULT_S_PK2 = 4392,
	MSN_RESULT_I_PK2 = 4393,
	GALLERY_CMN_PK2 = 4394,
	GALLERY_CMN_F_PK2 = 4395,
	GALLERY_CMN_G_PK2 = 4396,
	GALLERY_CMN_S_PK2 = 4397,
	GALLERY_CMN_I_PK2 = 4398,
	GALLERY_TOP_PK2 = 4399,
	GALLERY_TOP_F_PK2 = 4400,
	GALLERY_TOP_G_PK2 = 4401,
	GALLERY_TOP_S_PK2 = 4402,
	GALLERY_TOP_I_PK2 = 4403,
	GALLERY_VIEW_PK2 = 4404,
	GALLERY_SETTEI_00_PK2 = 4405,
	GALLERY_SETTEI_01_PK2 = 4406,
	GALLERY_SETTEI_02_PK2 = 4407,
	GALLERY_SETTEI_03_PK2 = 4408,
	GALLERY_SETTEI_04_PK2 = 4409,
	GALLERY_SETTEI_05_PK2 = 4410,
	GALLERY_SETTEI_06_PK2 = 4411,
	GALLERY_SETTEI_07_PK2 = 4412,
	GALLERY_SETTEI_08_PK2 = 4413,
	GALLERY_SETTEI_09_PK2 = 4414,
	GALLERY_SETTEI_10_PK2 = 4415,
	GALLERY_SETTEI_11_PK2 = 4416,
	GALLERY_SETTEI_12_PK2 = 4417,
	GALLERY_SETTEI_13_PK2 = 4418,
	GALLERY_SETTEI_14_PK2 = 4419,
	GALLERY_SETTEI_15_PK2 = 4420,
	GALLERY_SETTEI_16_PK2 = 4421,
	GALLERY_SETTEI_17_PK2 = 4422,
	GALLERY_SETTEI_18_PK2 = 4423,
	GALLERY_SETTEI_19_PK2 = 4424,
	GALLERY_IMAGE_00_PK2 = 4425,
	GALLERY_IMAGE_01_PK2 = 4426,
	GALLERY_IMAGE_02_PK2 = 4427,
	GALLERY_IMAGE_03_PK2 = 4428,
	GALLERY_IMAGE_04_PK2 = 4429,
	GALLERY_IMAGE_05_PK2 = 4430,
	GALLERY_IMAGE_06_PK2 = 4431,
	GALLERY_IMAGE_07_PK2 = 4432,
	GALLERY_IMAGE_08_PK2 = 4433,
	GALLERY_IMAGE_09_PK2 = 4434,
	GALLERY_PROMO_00_PK2 = 4435,
	GALLERY_PROMO_01_PK2 = 4436,
	GALLERY_PROMO_02_PK2 = 4437,
	GAMECLEAR_BG_A_PK2 = 4438,
	GAMECLEAR_BG_B_PK2 = 4439,
	GAMECLEAR_CHARA_PK2 = 4440,
	GAMECLEAR_CHARA_F_PK2 = 4441,
	GAMECLEAR_CHARA_G_PK2 = 4442,
	GAMECLEAR_CHARA_S_PK2 = 4443,
	GAMECLEAR_CHARA_I_PK2 = 4444,
	CLEAR_MENU_PK2 = 4445,
	CLEAR_MENU_F_PK2 = 4446,
	CLEAR_MENU_G_PK2 = 4447,
	CLEAR_MENU_S_PK2 = 4448,
	CLEAR_MENU_I_PK2 = 4449,
	LANG_SL_PK2 = 4450,
	LANG_SL_F_PK2 = 4451,
	LANG_SL_G_PK2 = 4452,
	LANG_SL_S_PK2 = 4453,
	LANG_SL_I_PK2 = 4454,
	LOADING_PK2 = 4455,
	LOADING_F_PK2 = 4456,
	LOADING_G_PK2 = 4457,
	LOADING_S_PK2 = 4458,
	LOADING_I_PK2 = 4459,
	EF_KUSABI_PHT1_PK2 = 4460,
	EF_KUSABI_PHT2_PK2 = 4461,
	EF_KUSABI_PHT3_PK2 = 4462,
	EF_KUSABI_PHT4_PK2 = 4463,
	EF_KUSABI_PHT5_PK2 = 4464,
	SAVEPOINT_BG_PK2 = 4465,
	SAVEPOINT_MOJI_PK2 = 4466,
	SAVEPOINT_MOJI_F_PK2 = 4467,
	SAVEPOINT_MOJI_G_PK2 = 4468,
	SAVEPOINT_MOJI_S_PK2 = 4469,
	SAVEPOINT_MOJI_I_PK2 = 4470,
	SAVE_LOAD_PK2 = 4471,
	SAVE_LOAD_F_PK2 = 4472,
	SAVE_LOAD_G_PK2 = 4473,
	SAVE_LOAD_S_PK2 = 4474,
	SAVE_LOAD_I_PK2 = 4475,
	SNP_CLEAR_DATA_PK2 = 4476,
	ZERO2GAME_ICO = 4477,
	ZERO2ALBUM0_ICO = 4478,
	ZERO2ALBUM1_ICO = 4479,
	ZERO2ALBUM2_ICO = 4480,
	ZERO2ALBUM3_ICO = 4481,
	ZERO2ALBUM4_ICO = 4482,
	CANDLEPOS_PK2 = 4483,
	SUBTITLE_OBJ = 4484,
	SITAJI_PK2 = 4485,
	GRD_PK2 = 4486,
	MOYOU_PK2 = 4487,
	OVERLAY_PK2 = 4488,
	TEST_BG_PK2 = 4489,
	BRIGHTNESS_PK2 = 4490
};

typedef struct { // 0x180
	/* 0x000 */ u_char y[256];
	/* 0x100 */ u_char cb[64];
	/* 0x140 */ u_char cr[64];
} sceIpuRAW8;

typedef struct { // 0x300
	/* 0x000 */ short int y[256];
	/* 0x200 */ short int cb[64];
	/* 0x280 */ short int cr[64];
} sceIpuRAW16;

typedef struct { // 0x400
	/* 0x000 */ u_int pix[256];
} sceIpuRGB32;

typedef struct { // 0x200
	/* 0x000 */ u_short pix[256];
} sceIpuRGB16;

typedef struct { // 0x80
	/* 0x00 */ u_int pix[32];
} sceIpuINDX4;

typedef struct { // 0x24
	/* 0x00 */ u_int d4madr;
	/* 0x04 */ u_int d4tadr;
	/* 0x08 */ u_int d4qwc;
	/* 0x0c */ u_int d4chcr;
	/* 0x10 */ u_int d3madr;
	/* 0x14 */ u_int d3qwc;
	/* 0x18 */ u_int d3chcr;
	/* 0x1c */ u_int ipubp;
	/* 0x20 */ u_int ipuctrl;
} sceIpuDmaEnv;

typedef enum {
	sceMpegStrM2V = 0,
	sceMpegStrIPU = 1,
	sceMpegStrPCM = 2,
	sceMpegStrADPCM = 3,
	sceMpegStrDATA = 4
} sceMpegStrType;

typedef enum {
	sceMpegCbError = 0,
	sceMpegCbNodata = 1,
	sceMpegCbStopDMA = 2,
	sceMpegCbRestartDMA = 3,
	sceMpegCbBackground = 4,
	sceMpegCbTimeStamp = 5,
	sceMpegCbStr = 6
} sceMpegCbType;

typedef struct { // 0x8
	/* 0x0 */ sceMpegCbType type;
	/* 0x4 */ char *errMessage;
} sceMpegCbDataError;

typedef struct { // 0x18
	/* 0x00 */ sceMpegCbType type;
	/* 0x08 */ long int pts;
	/* 0x10 */ long int dts;
} sceMpegCbDataTimeStamp;

typedef struct { // 0x20
	/* 0x00 */ sceMpegCbType type;
	/* 0x04 */ u_char *header;
	/* 0x08 */ u_char *data;
	/* 0x0c */ u_int len;
	/* 0x10 */ long int pts;
	/* 0x18 */ long int dts;
} sceMpegCbDataStr;

typedef union { // 0x20
	/* 0x00 */ sceMpegCbType type;
	/* 0x00 */ sceMpegCbDataError error;
	/* 0x00 */ sceMpegCbDataTimeStamp ts;
	/* 0x00 */ sceMpegCbDataStr str;
} sceMpegCbData;

typedef struct { // 0x48
	/* 0x00 */ int width;
	/* 0x04 */ int height;
	/* 0x08 */ int frameCount;
	/* 0x10 */ long int pts;
	/* 0x18 */ long int dts;
	/* 0x20 */ u_long flags;
	/* 0x28 */ long int pts2nd;
	/* 0x30 */ long int dts2nd;
	/* 0x38 */ u_long flags2nd;
	/* 0x40 */ void *sys;
} sceMpeg;

typedef int (*sceMpegCallback)(/* parameters unknown */);

typedef struct { // 0x3c
	/* 0x00 */ u_char *mpegBuff;
	/* 0x04 */ int mpegBuffSize;
	/* 0x08 */ sceIpuRGB32 *rgb32;
	/* 0x0c */ u_int *path3tag;
	/* 0x10 */ void *demuxBuff;
	/* 0x14 */ int demuxBuffSize;
	/* 0x18 */ u_char *audioBuff;
	/* 0x1c */ int audioBuffSize;
	/* 0x20 */ int iopBuff;
	/* 0x24 */ int iopBuffSize;
	/* 0x28 */ u_char *zeroBuff;
	/* 0x2c */ int iopZeroBuff;
	/* 0x30 */ char *read_buf;
	/* 0x34 */ int audio_vol_percent;
	/* 0x38 */ int auto_dma_core;
} playPssRsrcs;

struct _PLAY_PSS_MPEG_INFO { // 0x8
	/* 0x0 */ int width;
	/* 0x4 */ int height;
};

typedef _PLAY_PSS_MPEG_INFO PLAY_PSS_MPEG_INFO;

struct CMovieRoom { // 0x4c
private:
	/* 0x00:0 */ unsigned int mActFlg : 1;
	/* 0x00:1 */ unsigned int mPreloadFlg : 1;
	/* 0x04 */ int mSndId;
	/* 0x08 */ int mBankNo;
	/* 0x0c */ playPssRsrcs ing_rsrcs;
	/* 0x48 */ float *mpaVec[4];
	
public:
	CMovieRoom& operator=();
	CMovieRoom();
	CMovieRoom();
	void Init();
	void Release();
	int PreLoad();
	int PlayFilm();
	int Work();
	void Draw();
};

struct CVariable<char,0,24> { // 0x1
private:
	/* 0x0 */ char mValue;
	
public:
	CVariable<char,0,24>& operator=();
	CVariable();
	CVariable();
	void Init();
	void SetMax();
	void SetMin();
	char GetMax();
	char GetMin();
	char GetWidth();
	void Set();
	int Increment();
	int Decrement();
	int LoopIncrement();
	int LoopDecrement();
	int Offset();
	int Add();
	int Sub();
	int LoopAdd();
	int LoopSub();
	int Get();
};

struct CVariable<char,0,3> { // 0x1
private:
	/* 0x0 */ char mValue;
	
public:
	CVariable<char,0,3>& operator=();
	CVariable();
	CVariable();
	void Init();
	void SetMax();
	void SetMin();
	char GetMax();
	char GetMin();
	char GetWidth();
	void Set();
	int Increment();
	int Decrement();
	int LoopIncrement();
	int LoopDecrement();
	int Offset();
	int Add();
	int Sub();
	int LoopAdd();
	int LoopSub();
	int Get();
};

struct CVariable<char,0,99> { // 0x1
private:
	/* 0x0 */ char mValue;
	
public:
	CVariable<char,0,99>& operator=();
	CVariable();
	CVariable();
	void Init();
	void SetMax();
	void SetMin();
	char GetMax();
	char GetMin();
	char GetWidth();
	void Set();
	int Increment();
	int Decrement();
	int LoopIncrement();
	int LoopDecrement();
	int Offset();
	int Add();
	int Sub();
	int LoopAdd();
	int LoopSub();
	int Get();
};

struct INGAME_WRK { // 0xc
	/* 0x0 */ CVariable<char,0,24> mChapterNo;
	/* 0x1 */ CVariable<char,0,3> mDifficulty;
	/* 0x2 */ CVariable<char,0,99> mClearCnt;
	/* 0x3 */ u_char clear_save_flg;
private:
	/* 0x4 */ int mMenuLockCnt;
	/* 0x8 */ int mPauseLockCnt;
	
public:
	INGAME_WRK& operator=();
	INGAME_WRK();
	INGAME_WRK();
	void Init();
	void MenuLock();
	void MenuUnlock();
	int MenuIsLocked();
	void PauseLock();
	void PauseUnlock();
	int PauseIsLocked();
};

typedef struct { // 0xc
	/* 0x0 */ int put_id;
	/* 0x4 */ void *hdl;
	/* 0x8 */ ENE_WRK *ene;
} CHR_SORT_WORK;

typedef struct { // 0xc
	/* 0x0 */ int put_id;
	/* 0x4 */ void *hdl;
	/* 0x8 */ FLY_WRK *fly;
} CHR_SORT_FLY_WORK;

struct sce_stat { // 0x40
	/* 0x00 */ unsigned int st_mode;
	/* 0x04 */ unsigned int st_attr;
	/* 0x08 */ unsigned int st_size;
	/* 0x0c */ unsigned char st_ctime[8];
	/* 0x14 */ unsigned char st_atime[8];
	/* 0x1c */ unsigned char st_mtime[8];
	/* 0x24 */ unsigned int st_hisize;
	/* 0x28 */ unsigned int st_private[6];
};

struct sce_dirent { // 0x144
	/* 0x000 */ sce_stat d_stat;
	/* 0x040 */ char d_name[256];
	/* 0x140 */ void *d_private;
};

typedef struct { // 0x10
	/* 0x0 */ unsigned int epc;
	/* 0x4 */ unsigned int gp;
	/* 0x8 */ unsigned int sp;
	/* 0xc */ unsigned int dummy;
} sceExecData;

typedef void (*sceSifRebootNotifyHandler)(/* parameters unknown */);

typedef struct { // 0x10
	/* 0x0 */ sceSifRebootNotifyHandler func;
	/* 0x4 */ void *data;
	/* 0x8 */ void *gp;
	/* 0xc */ void *reserve;
} sceSifRebootNotifyData;

struct _sif_rpc_data { // 0x10
	/* 0x0 */ void *paddr;
	/* 0x4 */ unsigned int pid;
	/* 0x8 */ int tid;
	/* 0xc */ unsigned int mode;
};

typedef _sif_rpc_data sceSifRpcData;
typedef void (*sceSifEndFunc)(/* parameters unknown */);

struct _sif_client_data { // 0x28
	/* 0x00 */ _sif_rpc_data rpcd;
	/* 0x10 */ unsigned int command;
	/* 0x14 */ void *buff;
	/* 0x18 */ void *gp;
	/* 0x1c */ sceSifEndFunc func;
	/* 0x20 */ void *para;
	/* 0x24 */ _sif_serve_data *serve;
};

typedef _sif_client_data sceSifClientData;

struct _sif_receive_data { // 0x1c
	/* 0x00 */ _sif_rpc_data rpcd;
	/* 0x10 */ void *src;
	/* 0x14 */ void *dest;
	/* 0x18 */ int size;
};

typedef _sif_receive_data sceSifReceiveData;
typedef void* (*sceSifRpcFunc)(/* parameters unknown */);

struct _sif_serve_data { // 0x44
	/* 0x00 */ unsigned int command;
	/* 0x04 */ sceSifRpcFunc func;
	/* 0x08 */ void *buff;
	/* 0x0c */ int size;
	/* 0x10 */ sceSifRpcFunc cfunc;
	/* 0x14 */ void *cbuff;
	/* 0x18 */ int csize;
	/* 0x1c */ sceSifClientData *client;
	/* 0x20 */ void *paddr;
	/* 0x24 */ unsigned int fno;
	/* 0x28 */ void *receive;
	/* 0x2c */ int rsize;
	/* 0x30 */ int rmode;
	/* 0x34 */ unsigned int rid;
	/* 0x38 */ _sif_serve_data *link;
	/* 0x3c */ _sif_serve_data *next;
	/* 0x40 */ _sif_queue_data *base;
};

typedef _sif_serve_data sceSifServeData;

struct _sif_queue_data { // 0x18
	/* 0x00 */ int key;
	/* 0x04 */ int active;
	/* 0x08 */ _sif_serve_data *link;
	/* 0x0c */ _sif_serve_data *start;
	/* 0x10 */ _sif_serve_data *end;
	/* 0x14 */ _sif_queue_data *next;
};

typedef _sif_queue_data sceSifQueueData;

struct _sceDmaTag { // 0x10
	/* 0x0 */ u_short qwc;
	/* 0x2 */ u_char mark;
	/* 0x3 */ u_char id;
	/* 0x4 */ _sceDmaTag *next;
	/* 0x8 */ u_int p[2];
};

typedef _sceDmaTag sceDmaTag;

typedef struct { // 0x14
	/* 0x00 */ u_char sts;
	/* 0x01 */ u_char std;
	/* 0x02 */ u_char mfd;
	/* 0x03 */ u_char rcycle;
	/* 0x04 */ u_short express;
	/* 0x06 */ u_short notify;
	/* 0x08 */ u_short sqwc;
	/* 0x0a */ u_short tqwc;
	/* 0x0c */ void *rbadr;
	/* 0x10 */ u_int rbmsk;
} sceDmaEnv;

typedef struct { // 0x90
	/* 0x00 */ tD_CHCR chcr;
	/* 0x04 */ u_int p0[3];
	/* 0x10 */ void *madr;
	/* 0x14 */ u_int p1[3];
	/* 0x20 */ u_int qwc;
	/* 0x24 */ u_int p2[3];
	/* 0x30 */ sceDmaTag *tadr;
	/* 0x34 */ u_int p3[3];
	/* 0x40 */ void *as0;
	/* 0x44 */ u_int p4[3];
	/* 0x50 */ void *as1;
	/* 0x54 */ u_int p5[3];
	/* 0x60 */ u_int p6[4];
	/* 0x70 */ u_int p7[4];
	/* 0x80 */ void *sadr;
	/* 0x84 */ u_int p8[3];
} sceDmaChan;

typedef struct { // 0x10
	/* 0x0 */ u_int *pCurrent;
	/* 0x4 */ u_long128 *pBase;
	/* 0x8 */ u_long128 *pDmaTag;
	/* 0xc */ u_int pad03;
} sceDmaPacket;

typedef struct { // 0x20
	/* 0x00 */ u_int *pCurrent;
	/* 0x04 */ u_long128 *pBase;
	/* 0x08 */ u_long128 *pDmaTag;
	/* 0x0c */ u_int *pVifCode;
	/* 0x10 */ u_int numlen;
	/* 0x14 */ u_int pad11;
	/* 0x18 */ u_int pad12;
	/* 0x1c */ u_int pad13;
} sceVif0Packet;

typedef struct { // 0x20
	/* 0x00 */ u_int *pCurrent;
	/* 0x04 */ u_long128 *pBase;
	/* 0x08 */ u_long128 *pDmaTag;
	/* 0x0c */ u_int *pVifCode;
	/* 0x10 */ u_int numlen;
	/* 0x14 */ u_long *pGifTag;
	/* 0x18 */ u_int pad12;
	/* 0x1c */ u_int pad13;
} sceVif1Packet;

typedef struct { // 0x10
	/* 0x0 */ u_int *pCurrent;
	/* 0x4 */ u_long128 *pBase;
	/* 0x8 */ u_long128 *pDmaTag;
	/* 0xc */ u_long *pGifTag;
} sceGifPacket;

typedef struct { // 0x240
	/* 0x000 */ u_long128 vf[32];
	/* 0x200 */ u_int status;
	/* 0x204 */ u_int mac;
	/* 0x208 */ u_int clipping;
	/* 0x20c */ u_int r;
	/* 0x210 */ u_int i;
	/* 0x214 */ u_int q;
	/* 0x218 */ u_short vi[16];
} sceDevVu0Cnd;

typedef struct { // 0x240
	/* 0x000 */ u_long128 vf[32];
	/* 0x200 */ u_int status;
	/* 0x204 */ u_int mac;
	/* 0x208 */ u_int clipping;
	/* 0x20c */ u_int r;
	/* 0x210 */ u_int i;
	/* 0x214 */ u_int q;
	/* 0x218 */ u_int p;
	/* 0x21c */ u_short vi[16];
} sceDevVu1Cnd;

typedef struct { // 0x30
	/* 0x00 */ u_long128 tag;
	/* 0x10 */ u_int stat;
	/* 0x14 */ u_int count;
	/* 0x18 */ u_int p3count;
	/* 0x1c */ u_int p3tag;
	/* 0x20 */ u_int pad;
} sceDevGifCnd;

typedef struct { // 0x3c
	/* 0x00 */ u_int row[4];
	/* 0x10 */ u_int col[4];
	/* 0x20 */ u_int mask;
	/* 0x24 */ u_int code;
	/* 0x28 */ u_int stat;
	/* 0x2c */ u_short itop;
	/* 0x2e */ u_short itops;
	/* 0x30 */ u_short mark;
	/* 0x32 */ u_short num;
	/* 0x34 */ u_char error;
	/* 0x35 */ u_char cl;
	/* 0x36 */ u_char wl;
	/* 0x37 */ u_char cmod;
	/* 0x38 */ u_char pad;
} sceDevVif0Cnd;

typedef struct { // 0x44
	/* 0x00 */ u_int row[4];
	/* 0x10 */ u_int col[4];
	/* 0x20 */ u_int mask;
	/* 0x24 */ u_int code;
	/* 0x28 */ u_int stat;
	/* 0x2c */ u_short itop;
	/* 0x2e */ u_short itops;
	/* 0x30 */ u_short base;
	/* 0x32 */ u_short offset;
	/* 0x34 */ u_short top;
	/* 0x36 */ u_short tops;
	/* 0x38 */ u_short mark;
	/* 0x3a */ u_short num;
	/* 0x3c */ u_char error;
	/* 0x3d */ u_char cl;
	/* 0x3e */ u_char wl;
	/* 0x3f */ u_char cmod;
	/* 0x40 */ u_char pad;
} sceDevVif1Cnd;

// warning: multiple differing types with the same name (fields size not equal)
struct PAD_STRUCT { // 0x1c0
	/* 0x000 */ int port;
	/* 0x004 */ int slot;
	/* 0x040 */ u_long128 pad_dma_buf[16];
	/* 0x140 */ short unsigned int now;
	/* 0x142 */ short unsigned int old;
	/* 0x144 */ short unsigned int cnt[16];
	/* 0x164 */ short unsigned int cnt_bak[16];
	/* 0x184 */ short unsigned int one;
	/* 0x186 */ short unsigned int rpt;
	/* 0x188 */ short unsigned int rpt_time;
	/* 0x18a */ unsigned char pad_direct[6];
	/* 0x190 */ char flags;
	/* 0x191 */ char step;
	/* 0x192 */ char id;
	/* 0x193 */ unsigned char analog[4];
	/* 0x197 */ unsigned char push[12];
	/* 0x1a4 */ short unsigned int an_cnt[2];
	/* 0x1a8 */ short unsigned int an_cnt_bak[2];
	/* 0x1ac */ float an_rot[2];
	/* 0x1b4 */ float an_rot_bak[2];
	/* 0x1bc */ unsigned char an_dir[2];
	/* 0x1be */ unsigned char an_dir_bak[2];
};

struct _DRAW_ENV_5 { // 0x28
	/* 0x00 */ long int alpha;
	/* 0x08 */ long int tex1;
	/* 0x10 */ long int clamp;
	/* 0x18 */ long int test;
	/* 0x20 */ long int zbuf;
};

typedef _DRAW_ENV_5 DRAW_ENV_5;

struct _DRAW_ENV_NOTEX { // 0x18
	/* 0x00 */ long int alpha;
	/* 0x08 */ long int test;
	/* 0x10 */ long int zbuf;
};

typedef _DRAW_ENV_NOTEX DRAW_ENV_NOTEX;
typedef void (*LPFUNC_SETREGISTER_WITHCONTEXT)(/* parameters unknown */);
typedef void (*LPFUNC_SETREGISTER)(/* parameters unknown */);
typedef long int (*LPFUNC_GETREGISTER_WITHCONTEXT)(/* parameters unknown */);
typedef long int (*LPFUNC_GETREGISTER)(/* parameters unknown */);

typedef struct { // 0x30
	/* 0x00 */ u_long tex1;
	/* 0x08 */ u_long alpha;
	/* 0x10 */ u_long zbuf;
	/* 0x18 */ u_long test;
	/* 0x20 */ u_long clamp;
	/* 0x28 */ u_long prim;
} DRAW_ENV;

typedef struct { // 0x38
	/* 0x00 */ u_char *str;
	/* 0x04 */ int pos_x;
	/* 0x08 */ int pos_y;
	/* 0x0c */ int type;
	/* 0x10 */ u_int r;
	/* 0x14 */ u_int g;
	/* 0x18 */ u_int b;
	/* 0x1c */ int alpha;
	/* 0x20 */ int pri;
	/* 0x24 */ int x_wide;
	/* 0x28 */ int y_wide;
	/* 0x2c */ int brnch_num;
	/* 0x30 */ int csr;
	/* 0x34 */ int st;
} DISP_STR;

typedef struct { // 0x24
	/* 0x00 */ u_char *str;
	/* 0x04 */ int pos_x;
	/* 0x08 */ int pos_y;
	/* 0x0c */ int type;
	/* 0x10 */ u_int r;
	/* 0x14 */ u_int g;
	/* 0x18 */ u_int b;
	/* 0x1c */ int alpha;
	/* 0x20 */ int pri;
} STR_DAT;

typedef struct { // 0x88
	/* 0x00 */ u_int att;
	/* 0x04 */ u_int u;
	/* 0x08 */ u_int v;
	/* 0x0c */ u_int w;
	/* 0x10 */ u_int h;
	/* 0x14 */ float crx;
	/* 0x18 */ float cry;
	/* 0x1c */ float csx;
	/* 0x20 */ float csy;
	/* 0x24 */ float x;
	/* 0x28 */ float y;
	/* 0x2c */ u_int z;
	/* 0x30 */ float scw;
	/* 0x34 */ float sch;
	/* 0x38 */ float rot;
	/* 0x40 */ u_long gftg;
	/* 0x48 */ u_long tex0;
	/* 0x50 */ u_long tex1;
	/* 0x58 */ u_long texa;
	/* 0x60 */ u_long alphar;
	/* 0x68 */ u_long zbuf;
	/* 0x70 */ u_long test;
	/* 0x78 */ u_int pri;
	/* 0x7c */ u_char r;
	/* 0x7d */ u_char g;
	/* 0x7e */ u_char b;
	/* 0x7f */ u_char alpha;
	/* 0x80 */ u_char col;
} DISP_SPRT;

typedef struct { // 0x20
	/* 0x00 */ u_long tex0;
	/* 0x08 */ u_short u;
	/* 0x0a */ u_short v;
	/* 0x0c */ u_short w;
	/* 0x0e */ u_short h;
	/* 0x10 */ int x;
	/* 0x14 */ int y;
	/* 0x18 */ int pri;
	/* 0x1c */ u_char alpha;
	/* 0x1d */ u_char flip;
	/* 0x1e */ u_char bln;
} SPRT_DAT;

typedef struct { // 0x90
	/* 0x00 */ u_int att;
	/* 0x04 */ u_short u1;
	/* 0x06 */ u_short v1;
	/* 0x08 */ u_short u2;
	/* 0x0a */ u_short v2;
	/* 0x0c */ float w;
	/* 0x10 */ float h;
	/* 0x14 */ float crx;
	/* 0x18 */ float cry;
	/* 0x1c */ float csx;
	/* 0x20 */ float csy;
	/* 0x24 */ float x;
	/* 0x28 */ float y;
	/* 0x2c */ u_int z;
	/* 0x30 */ float scw;
	/* 0x34 */ float sch;
	/* 0x38 */ float rot;
	/* 0x40 */ u_long gftg;
	/* 0x48 */ u_long tex0;
	/* 0x50 */ u_long tex1;
	/* 0x58 */ u_long texa;
	/* 0x60 */ u_long alpreg;
	/* 0x68 */ u_long zbuf;
	/* 0x70 */ u_long test;
	/* 0x78 */ u_long clmp;
	/* 0x80 */ u_int pri;
	/* 0x84 */ u_char r;
	/* 0x85 */ u_char g;
	/* 0x86 */ u_char b;
	/* 0x87 */ u_char alp;
	/* 0x88 */ u_char col;
} DISP_SPRT2;

typedef struct { // 0x30
	/* 0x00 */ u_long tex0;
	/* 0x08 */ float u1;
	/* 0x0c */ float v1;
	/* 0x10 */ float u2;
	/* 0x14 */ float v2;
	/* 0x18 */ float w;
	/* 0x1c */ float h;
	/* 0x20 */ float x;
	/* 0x24 */ float y;
	/* 0x28 */ int pri;
	/* 0x2c */ u_char alpha;
} SPRT_DAT2;

typedef struct { // 0x80
	/* 0x00 */ u_int att;
	/* 0x04 */ float crx;
	/* 0x08 */ float cry;
	/* 0x0c */ float csx;
	/* 0x10 */ float csy;
	/* 0x14 */ int x[4];
	/* 0x24 */ int y[4];
	/* 0x34 */ u_int z;
	/* 0x38 */ float scw;
	/* 0x3c */ float sch;
	/* 0x40 */ float rot;
	/* 0x48 */ u_long texa;
	/* 0x50 */ u_long alphar;
	/* 0x58 */ u_long zbuf;
	/* 0x60 */ u_long test;
	/* 0x68 */ u_int pri;
	/* 0x6c */ u_char r[4];
	/* 0x70 */ u_char g[4];
	/* 0x74 */ u_char b[4];
	/* 0x78 */ u_char alpha;
} DISP_SQAR;

typedef struct { // 0x18
	/* 0x00 */ u_int w;
	/* 0x04 */ u_int h;
	/* 0x08 */ int x;
	/* 0x0c */ int y;
	/* 0x10 */ u_int pri;
	/* 0x14 */ u_char r;
	/* 0x15 */ u_char g;
	/* 0x16 */ u_char b;
	/* 0x17 */ u_char alpha;
} SQAR_DAT;

typedef struct { // 0x24
	/* 0x00 */ u_int w;
	/* 0x04 */ u_int h;
	/* 0x08 */ int x;
	/* 0x0c */ int y;
	/* 0x10 */ u_int pri;
	/* 0x14 */ u_char r[4];
	/* 0x18 */ u_char g[4];
	/* 0x1c */ u_char b[4];
	/* 0x20 */ u_char alpha;
} GSQR_DAT;

typedef struct { // 0x28
	/* 0x00 */ int x[4];
	/* 0x10 */ int y[4];
	/* 0x20 */ u_int pri;
	/* 0x24 */ u_char r;
	/* 0x25 */ u_char g;
	/* 0x26 */ u_char b;
	/* 0x27 */ u_char alpha;
} SQR4_DAT;

typedef struct { // 0x34
	/* 0x00 */ int x[4];
	/* 0x10 */ int y[4];
	/* 0x20 */ u_int pri;
	/* 0x24 */ u_char r[4];
	/* 0x28 */ u_char g[4];
	/* 0x2c */ u_char b[4];
	/* 0x30 */ u_char alpha;
} GSQ4_DAT;

enum TIM2_gattr_type {
	TIM2_NONE = 0,
	TIM2_RGB16 = 1,
	TIM2_RGB24 = 2,
	TIM2_RGB32 = 3,
	TIM2_IDTEX4 = 4,
	TIM2_IDTEX8 = 5
};

typedef struct { // 0x10
	/* 0x0 */ u_char FileId[4];
	/* 0x4 */ u_char FormatVersion;
	/* 0x5 */ u_char FormatId;
	/* 0x6 */ u_short Pictures;
	/* 0x8 */ u_char pad[8];
} TIM2_FILEHEADER;

typedef struct { // 0x30
	/* 0x00 */ u_int TotalSize;
	/* 0x04 */ u_int ClutSize;
	/* 0x08 */ u_int ImageSize;
	/* 0x0c */ u_short HeaderSize;
	/* 0x0e */ u_short ClutColors;
	/* 0x10 */ u_char PictFormat;
	/* 0x11 */ u_char MipMapTextures;
	/* 0x12 */ u_char ClutType;
	/* 0x13 */ u_char ImageType;
	/* 0x14 */ u_short ImageWidth;
	/* 0x16 */ u_short ImageHeight;
	/* 0x18 */ u_long GsTex0;
	/* 0x20 */ u_long GsTex1;
	/* 0x28 */ u_int GsTexaFbaPabe;
	/* 0x2c */ u_int GsTexClut;
} TIM2_PICTUREHEADER;

typedef struct { // 0x10
	/* 0x0 */ u_long GsMiptbp1;
	/* 0x8 */ u_long GsMiptbp2;
	/* 0x10 */ u_int MMImageSize[0];
} TIM2_MIPMAPHEADER;

typedef struct { // 0x10
	/* 0x0 */ u_char ExHeaderId[4];
	/* 0x4 */ u_int UserSpaceSize;
	/* 0x8 */ u_int UserDataSize;
	/* 0xc */ u_int Reserved;
} TIM2_EXHEADER;

typedef struct { // 0x10
	/* 0x0 */ float x;
	/* 0x4 */ float y;
	/* 0x8 */ float w;
	/* 0xc */ float h;
} MSG_WIN_DAT;

typedef struct { // 0x8
	/* 0x0 */ int x;
	/* 0x4 */ int y;
} MSG_DEF_DATA;

typedef struct { // 0x8
	/* 0x0 */ int msg_def_id;
	/* 0x4 */ int msg_win_id;
} MSG_DISP_DATA;

struct GRA3DSCRATCHPADLAYOUT_MAPSHADOW { // 0x1a0
	/* 0x000 */ qword qwVif1Code;
	/* 0x010 */ GRA3DVU1MEMLAYOUT_MAPSHADOW Vu1Mem;
};

struct GRA3DSHADOWCREATIONDATA { // 0x4
	/* 0x0 */ GRA3DSCRATCHPADLAYOUT_MAPSHADOW *pSL;
};

struct GRA3DSHADOWDEBUG { // 0x1c
	/* 0x00 */ int bDrawShadowModelBB;
	/* 0x04 */ int bDrawCastShadowOnBB;
	/* 0x08 */ int bDrawLightDir;
	/* 0x0c */ int bTextureMapEnable;
	/* 0x10 */ int bFogEnable;
	/* 0x14 */ int bDrawCharShadow;
	/* 0x18 */ int bDrawObjectShadow;
};

typedef int (*LPFUNC_SETGSREGISTER)(/* parameters unknown */);
typedef int (*LPFUNC_SETGSREGISTERS)(/* parameters unknown */);
typedef long int& (*LPFUNC_GETGSREGISTERREF)(/* parameters unknown */);
typedef int (*LPFUNC_SETTRANSFORM)(/* parameters unknown */);
typedef float&[4][4] (*LPFUNC_GETTRANSFORMREF)(/* parameters unknown */);

struct _LIGHTDATA { // 0x80
	/* 0x00 */ G3DLIGHT L;
	/* 0x70 */ int bEnable;
};

struct G3DGSREGISTERLAYOUT_DIRECT { // 0x400
	/* 0x000 */ sceGsPrim gsPrim;
	/* 0x008 */ sceGsRgbaq gsRgbaq;
	/* 0x010 */ sceGsSt gsSt;
	/* 0x018 */ sceGsUv gsUv;
	/* 0x020 */ sceGsXyzf gsXyzf2;
	/* 0x028 */ sceGsXyzf gsXyz2;
	/* 0x030 */ sceGsTex0 gsTex0_1;
	/* 0x038 */ sceGsTex0 gsTex0_2;
	/* 0x040 */ sceGsClamp gsClamp_1;
	/* 0x048 */ sceGsClamp gsClamp_2;
	/* 0x050 */ sceGsFog gsFog;
	/* 0x058 */ long int gsBlank0x0b;
	/* 0x060 */ sceGsXyzf gsXyzf3;
	/* 0x068 */ sceGsXyzf gsXyz3;
	/* 0x070 */ long int gsBlank0x0e;
	/* 0x078 */ long int gsBlank0x0f;
	/* 0x080 */ long int gsBlank0x10;
	/* 0x088 */ long int gsBlank0x11;
	/* 0x090 */ long int gsBlank0x12;
	/* 0x098 */ long int gsBlank0x13;
	/* 0x0a0 */ sceGsTex1 gsTex1_1;
	/* 0x0a8 */ sceGsTex1 gsTex1_2;
	/* 0x0b0 */ sceGsTex2 gsTex2_1;
	/* 0x0b8 */ sceGsTex2 gsTex2_2;
	/* 0x0c0 */ sceGsXyoffset gsXyoffset_1;
	/* 0x0c8 */ sceGsXyoffset gsXyoffset_2;
	/* 0x0d0 */ sceGsPrmodecont gsPrmodecont;
	/* 0x0d8 */ sceGsPrmode gsPrmode;
	/* 0x0e0 */ sceGsTexclut gsTexclut;
	/* 0x0e8 */ long int gsBlank0x1d;
	/* 0x0f0 */ long int gsBlank0x1e;
	/* 0x0f8 */ long int gsBlank0x1f;
	/* 0x100 */ long int gsBlank0x20;
	/* 0x108 */ long int gsBlank0x21;
	/* 0x110 */ sceGsScanmsk gsScanmsk;
	/* 0x118 */ long int gsBlank0x23;
	/* 0x120 */ long int gsBlank0x24;
	/* 0x128 */ long int gsBlank0x25;
	/* 0x130 */ long int gsBlank0x26;
	/* 0x138 */ long int gsBlank0x27;
	/* 0x140 */ long int gsBlank0x28;
	/* 0x148 */ long int gsBlank0x29;
	/* 0x150 */ long int gsBlank0x2a;
	/* 0x158 */ long int gsBlank0x2b;
	/* 0x160 */ long int gsBlank0x2c;
	/* 0x168 */ long int gsBlank0x2d;
	/* 0x170 */ long int gsBlank0x2e;
	/* 0x178 */ long int gsBlank0x2f;
	/* 0x180 */ long int gsBlank0x30;
	/* 0x188 */ long int gsBlank0x31;
	/* 0x190 */ long int gsBlank0x32;
	/* 0x198 */ long int gsBlank0x33;
	/* 0x1a0 */ sceGsMiptbp1 gsMiptbp1_1;
	/* 0x1a8 */ sceGsMiptbp1 gsMiptbp1_2;
	/* 0x1b0 */ sceGsMiptbp2 gsMiptbp2_1;
	/* 0x1b8 */ sceGsMiptbp2 gsMiptbp2_2;
	/* 0x1c0 */ long int gsBlank0x38;
	/* 0x1c8 */ long int gsBlank0x39;
	/* 0x1d0 */ long int gsBlank0x3a;
	/* 0x1d8 */ sceGsTexa gsTexa;
	/* 0x1e0 */ long int gsBlank0x3c;
	/* 0x1e8 */ sceGsFogcol gsFogcol;
	/* 0x1f0 */ long int gsBlank0x3e;
	/* 0x1f8 */ sceGsTexflush gsTexflush;
	/* 0x200 */ sceGsScissor gsScissor_1;
	/* 0x208 */ sceGsScissor gsScissor_2;
	/* 0x210 */ sceGsAlpha gsAlpha_1;
	/* 0x218 */ sceGsAlpha gsAlpha_2;
	/* 0x220 */ sceGsDimx gsDimx;
	/* 0x228 */ sceGsDthe gsDthe;
	/* 0x230 */ sceGsColclamp gsColclamp;
	/* 0x238 */ sceGsTest gsTest_1;
	/* 0x240 */ sceGsTest gsTest_2;
	/* 0x248 */ sceGsPabe gsPabe;
	/* 0x250 */ sceGsFba gsFba_1;
	/* 0x258 */ sceGsFba gsFba_2;
	/* 0x260 */ sceGsFrame gsFrame_1;
	/* 0x268 */ sceGsFrame gsFrame_2;
	/* 0x270 */ sceGsZbuf gsZbuf_1;
	/* 0x278 */ sceGsZbuf gsZbuf_2;
	/* 0x280 */ sceGsBitbltbuf gsBitbltbuf;
	/* 0x288 */ sceGsTrxpos gsTrxpos;
	/* 0x290 */ sceGsTrxreg gsTrxreg;
	/* 0x298 */ sceGsTrxdir gsTrxdir;
	/* 0x2a0 */ sceGsHwreg gsHwreg;
	/* 0x2a8 */ long int gsBlank0x55;
	/* 0x2b0 */ long int gsBlank0x56;
	/* 0x2b8 */ long int gsBlank0x57;
	/* 0x2c0 */ long int gsBlank0x58;
	/* 0x2c8 */ long int gsBlank0x59;
	/* 0x2d0 */ long int gsBlank0x5a;
	/* 0x2d8 */ long int gsBlank0x5b;
	/* 0x2e0 */ long int gsBlank0x5c;
	/* 0x2e8 */ long int gsBlank0x5d;
	/* 0x2f0 */ long int gsBlank0x5e;
	/* 0x2f8 */ long int gsBlank0x5f;
	/* 0x300 */ sceGsSignal gsSignal;
	/* 0x308 */ sceGsFinish gsFinish;
	/* 0x310 */ sceGsLabel gsLabel;
	/* 0x318 */ long int gsBlank0x63;
	/* 0x320 */ long int gsBlank0x64;
	/* 0x328 */ long int gsBlank0x65;
	/* 0x330 */ long int gsBlank0x66;
	/* 0x338 */ long int gsBlank0x67;
	/* 0x340 */ long int gsBlank0x68;
	/* 0x348 */ long int gsBlank0x69;
	/* 0x350 */ long int gsBlank0x6a;
	/* 0x358 */ long int gsBlank0x6b;
	/* 0x360 */ long int gsBlank0x6c;
	/* 0x368 */ long int gsBlank0x6d;
	/* 0x370 */ long int gsBlank0x6e;
	/* 0x378 */ long int gsBlank0x6f;
	/* 0x380 */ long int gsBlank0x70;
	/* 0x388 */ long int gsBlank0x71;
	/* 0x390 */ long int gsBlank0x72;
	/* 0x398 */ long int gsBlank0x73;
	/* 0x3a0 */ long int gsBlank0x74;
	/* 0x3a8 */ long int gsBlank0x75;
	/* 0x3b0 */ long int gsBlank0x76;
	/* 0x3b8 */ long int gsBlank0x77;
	/* 0x3c0 */ long int gsBlank0x78;
	/* 0x3c8 */ long int gsBlank0x79;
	/* 0x3d0 */ long int gsBlank0x7a;
	/* 0x3d8 */ long int gsBlank0x7b;
	/* 0x3e0 */ long int gsBlank0x7c;
	/* 0x3e8 */ long int gsBlank0x7d;
	/* 0x3f0 */ long int gsBlank0x7e;
	/* 0x3f8 */ long int gsNop;
};

typedef long int G3DGSREGISTERLAYOUT_ARRAY[128];

union G3DGSREGISTERLAYOUT { // 0x400
	/* 0x000 */ G3DGSREGISTERLAYOUT_DIRECT Direct;
	/* 0x000 */ G3DGSREGISTERLAYOUT_ARRAY Array;
};

struct G3DRESOURCE { // 0xc
	/* 0x0 */ CTexture *apTexture[1];
	/* 0x4 */ IG3DVertexBuffer *pVertexBuffer;
	/* 0x8 */ IG3DIndexBuffer *pIndexBuffer;
};

struct G3DCOREOBJECT { // 0x1170
	/* 0x0000 */ unsigned int auiRenderState[8];
	/* 0x0020 */ unsigned int auiGlobalState[2];
	/* 0x0030 */ _LIGHTDATA aLightData[9];
	/* 0x04b0 */ float vAmbient[4];
	/* 0x04c0 */ G3DMATERIAL Material;
	/* 0x0510 */ sceVu0FMATRIX amatTransform[5];
	/* 0x0650 */ G3DVIEWPORT Viewport;
	/* 0x0670 */ G3DWINDOW Window;
	/* 0x0680 */ G3DRESOURCE Resource;
	/* 0x0690 */ G3DVU1MEMLAYOUT Vu1Mem;
	/* 0x0d70 */ G3DGSREGISTERLAYOUT GsRegister;
};

struct G3DCREATIONDATA { // 0x4
	/* 0x0 */ G3DCOREOBJECT *pObj;
};

struct IG3DCompatible { // 0x1
	static LPFUNC_SETGSREGISTER s_pFuncSetGsRegister;
	static LPFUNC_SETGSREGISTERS s_pFuncSetGsRegisters;
	static LPFUNC_GETGSREGISTERREF s_pFuncGetGsRegisterRef;
	static LPFUNC_SETTRANSFORM s_pFuncSetTransform;
	static LPFUNC_GETTRANSFORMREF s_pFuncGetTransformRef;
	
	IG3DCompatible& operator=();
	IG3DCompatible();
	IG3DCompatible();
protected:
	int SetGsRegister();
	int SetGsRegisters();
	long int& GetGsRegisterRef();
	int SetTransform();
	float&[4][4] GetTransformRef();
};

typedef struct { // 0x10
	/* 0x0 */ sceVu0FVECTOR v;
} SgmVERTEX;

typedef struct { // 0x10
	/* 0x0 */ sceVu0IVECTOR n;
} SgmIDX;

typedef struct { // 0x8
	/* 0x0 */ int num;
	/* 0x4 */ int *e_idx;
} SgmAREA;

typedef struct { // 0x40
	/* 0x00 */ int inf[4];
	/* 0x10 */ int w;
	/* 0x14 */ int h;
	/* 0x18 */ int v_count;
	/* 0x1c */ int f_count;
	/* 0x20 */ float *x;
	/* 0x24 */ float *z;
	/* 0x28 */ SgmAREA *area;
	/* 0x2c */ SgmIDX *v_idx;
	/* 0x30 */ SgmVERTEX *V;
	/* 0x34 */ int dmy[3];
} MhCtrl;

typedef struct { // 0x50
	/* 0x00 */ short unsigned int RectID;
	/* 0x02 */ short unsigned int size;
	/* 0x04 */ int reg_id;
	/* 0x08 */ int pad[2];
	/* 0x10 */ float vec[4][4];
} MB_OUT_RECT;

typedef struct { // 0x8
	/* 0x0 */ short unsigned int SecStID;
	/* 0x2 */ short unsigned int size;
	/* 0x4 */ unsigned int labelID;
} MB_OUT_SECTION;

typedef struct { // 0x30
	/* 0x00 */ char magic[4];
	/* 0x04 */ int area_id;
	/* 0x08 */ int kai;
	/* 0x0c */ int pad;
	/* 0x10 */ int reg_vec_num;
	/* 0x14 */ MB_OUT_RECT *reg_vecp;
	/* 0x18 */ int reg_st_num;
	/* 0x1c */ MB_OUT_SECTION *reg_stp;
	/* 0x20 */ float Pos[4];
} MB_OUT_HEAD;

typedef struct { // 0x30
	/* 0x00 */ MB_OUT_SECTION head;
	/* 0x08 */ int type;
	/* 0x0c */ float Pos[3];
	/* 0x18 */ float View[3];
	/* 0x24 */ float Rrg;
	/* 0x28 */ float RotZ;
	/* 0x2c */ float Asobi;
} MDAT_CAM;

typedef struct { // 0xc
	/* 0x0 */ MB_OUT_SECTION head;
	/* 0x8 */ int type;
} MDAT_EVENT;

typedef struct { // 0xc
	/* 0x0 */ MB_OUT_SECTION head;
	/* 0x8 */ int type;
} MDAT_MISSION;

typedef struct { // 0x10
	/* 0x0 */ MB_OUT_SECTION head;
	/* 0x8 */ int No;
	/* 0xc */ int Pre;
} MDAT_SE;

typedef struct { // 0x1c
	/* 0x00 */ float Start;
	/* 0x04 */ float End;
	/* 0x08 */ int Min;
	/* 0x0c */ int Max;
	/* 0x10 */ int Color[3];
} MDAT_FOG_ST_ONE;

typedef struct { // 0x40
	/* 0x00 */ MB_OUT_SECTION head;
	/* 0x08 */ MDAT_FOG_ST_ONE dat[2];
} MDAT_FOG;

typedef struct { // 0x40
	/* 0x00 */ MB_OUT_SECTION head;
	/* 0x08 */ MDAT_FOG_ST_ONE dat[2];
} MDAT_FOG_SW;

typedef struct { // 0x10
	/* 0x0 */ MB_OUT_SECTION head;
	/* 0x8 */ int MapID;
	/* 0xc */ int BgmNo;
} MDAT_MAP;

typedef struct { // 0x64
	/* 0x00 */ MB_OUT_SECTION head;
	/* 0x08 */ int type;
	/* 0x0c */ char ModelName[36];
	/* 0x30 */ float Pos[3];
	/* 0x3c */ float Rot[3];
	/* 0x48 */ int HitCheck;
	/* 0x4c */ int PhotoAble;
	/* 0x50 */ int Visible;
	/* 0x54 */ int Action;
	/* 0x58 */ int ActionType;
	/* 0x5c */ int Weight;
	/* 0x60 */ int Attribute;
} MDAT_OBJ;

typedef struct { // 0x54
	/* 0x00 */ MB_OUT_SECTION head;
	/* 0x08 */ char ModelName[36];
	/* 0x2c */ int DatID;
	/* 0x30 */ float Pos[3];
	/* 0x3c */ float Rot[3];
	/* 0x48 */ int HitCheck;
	/* 0x4c */ int ActionType;
	/* 0x50 */ int Attribute;
} MDAT_DOOR;

typedef struct { // 0x2c
	/* 0x00 */ MB_OUT_SECTION head;
	/* 0x08 */ float Cam_Pos_X;
	/* 0x0c */ float Cam_Pos_Y;
	/* 0x10 */ float Cam_Pos_Z;
	/* 0x14 */ float View_Pos_X;
	/* 0x18 */ float View_Pos_Y;
	/* 0x1c */ float View_Pos_Z;
	/* 0x20 */ float Rrg;
	/* 0x24 */ float RotZ;
	/* 0x28 */ float Asobi;
} MDAT_CAM_BTL;

typedef struct { // 0x20
	/* 0x00 */ float Cam_Pos_X;
	/* 0x04 */ float Cam_Pos_Y;
	/* 0x08 */ float Cam_Pos_Z;
	/* 0x0c */ float View_Pos_X;
	/* 0x10 */ float View_Pos_Y;
	/* 0x14 */ float View_Pos_Z;
	/* 0x18 */ float Proj;
	/* 0x1c */ float RotZ;
} MDAT_CAM_SP_ONE;

typedef struct { // 0x8c
	/* 0x00 */ MB_OUT_SECTION head;
	/* 0x08 */ int type;
	/* 0x0c */ MDAT_CAM_SP_ONE st[4];
} MDAT_CAM_SP;

typedef struct { // 0x10
	/* 0x0 */ MB_OUT_SECTION head;
	/* 0x8 */ int Step_type;
	/* 0xc */ int rot;
} MDAT_FLOOR;

typedef struct { // 0x64
	/* 0x00 */ MB_OUT_SECTION head;
	/* 0x08 */ char ModelName[36];
	/* 0x2c */ float Pos[3];
	/* 0x38 */ float Rot[3];
	/* 0x44 */ float Scale[3];
	/* 0x50 */ int Visible;
	/* 0x54 */ int Action;
	/* 0x58 */ int ActionType;
	/* 0x5c */ int Weight;
	/* 0x60 */ int Attribute;
} MDAT_PUT;

typedef struct { // 0xc
	/* 0x0 */ u_char area_no;
	/* 0x1 */ u_char area_old;
	/* 0x2 */ u_char room_id;
	/* 0x3 */ u_char room_old;
	/* 0x4 */ u_char camera_no;
	/* 0x5 */ u_char camera_no_old;
	/* 0x8 */ float hight;
} PROOM_INFO;

struct CWrkVariable<char,0,10> { // 0x2
private:
	/* 0x0 */ char mValue;
	/* 0x1 */ char mAdd;
	
public:
	CWrkVariable<char,0,10>& operator=();
	CWrkVariable();
	CWrkVariable();
	void Init();
	void SetMax();
	void SetMin();
	char GetMax();
	char GetMin();
	char GetWidth();
	void SetAddVal();
	void Set();
	void Work();
	int LoopWork();
	char Get();
	int GetState();
};

struct CEneTracer { // 0x4
private:
	/* 0x0 */ CWaitVariable<short int> mWaitCnt;
	/* 0x2 */ CWrkVariable<char,0,10> mTraceEne;
	
public:
	CEneTracer& operator=();
	CEneTracer();
	CEneTracer();
	int Init();
	void Work();
	void Req();
};

struct PLCMN_WRK { // 0x110
	/* 0x000 */ MOVE_BOX mbox;
	/* 0x0a0 */ STATUS_DAT st;
	/* 0x0e0 */ PROOM_INFO pr_info;
	/* 0x0ec */ u_char mode;
	/* 0x0ed */ u_char atk_eneno;
	/* 0x0ee */ u_char atk_pos;
	/* 0x0ef */ u_char atk_rot;
	/* 0x0f0 */ float near_ene_dist;
	/* 0x0f4 */ float near_ene_dist_old;
	/* 0x0f8 */ u_char near_ene_no;
	/* 0x0fa */ short int floor;
	/* 0x100 */ float headpos[4];
};

struct PLYR_WRK { // 0x380
	/* 0x000 */ PLCMN_WRK cmn_wrk;
	/* 0x110 */ u_char modedead;
	/* 0x111 */ u_char anime_no;
	/* 0x112 */ u_char charge_num;
	/* 0x114 */ float charge_rate;
	/* 0x118 */ float charge_deg;
	/* 0x11c */ float frot_x;
	/* 0x120 */ short int fp[2];
	/* 0x124 */ u_short no_photo_tm;
	/* 0x126 */ u_short shutter_tm;
	/* 0x128 */ u_short vib_time_sm;
	/* 0x12a */ u_short vib_time_bg;
	/* 0x130 */ float spd[4];
	/* 0x140 */ float old_spd[4];
	/* 0x150 */ float fhp[5][4];
	/* 0x1a0 */ float prot;
	/* 0x1a4 */ u_short fene_tm;
	/* 0x1a6 */ u_short bonus_sta;
	/* 0x1a8 */ u_short avoid_tm;
	/* 0x1aa */ u_short avoid_flg;
	/* 0x1ac */ u_short avoid_st;
	/* 0x1ae */ u_short avoid_sp;
	/* 0x1b0 */ u_char door_flg;
	/* 0x1b2 */ u_short door_no;
	/* 0x1c0 */ float bwp[4];
	/* 0x1d0 */ float spot_pos[4];
	/* 0x1e0 */ float spot_rot[4];
	/* 0x1f0 */ G3DLIGHT fl;
	/* 0x260 */ G3DLIGHT fl2;
	/* 0x2d0 */ G3DLIGHT reflectionlight;
	/* 0x340 */ float maplight_scale;
	/* 0x344 */ SND_3D_SET s3d;
	/* 0x350 */ float fl_pow;
	/* 0x354 */ int finder_tm;
	/* 0x358 */ char finder_lock_cnt;
	/* 0x359 */ char move_lock_cnt;
	/* 0x35a */ char action_lock_cnt;
	/* 0x35b */ char shutter_lock_cnt;
	/* 0x35c */ char run_lock_cnt;
	/* 0x35e */ CEneTracer ene_tracer;
	/* 0x364 */ int ane_curse_lock;
	/* 0x368 */ float hit_rad;
	/* 0x36c */ SHUTTER_CHANCE_STATE preShutterChanceState;
	/* 0x370 */ SHUTTER_CHANCE_STATE nowShutterChanceState;
};

enum PLAYERFLASHLIGHTTYPE {
	PFT_HAND = 0,
	PFT_STEP = 1,
	NUM_PLAYERFLASHLIGHTTYPE = 2
};

struct fixed_array_base<char,4,char[4]> { // 0x4
protected:
	/* 0x0 */ char m_aData[4];
	
public:
	fixed_array_base<char,4,char[4]>& operator=();
	fixed_array_base();
protected:
	fixed_array_base();
public:
	char& operator[]();
	char& operator[]();
	char* data();
	char* begin();
	char* end();
	void fill();
	size_t size();
	bool empty();
};

struct fixed_array<char,4> : /* 0x0 */ fixed_array_base<char,4,char[4]> { // 0x4
};

typedef struct { // 0x13f0
	/* 0x0000 */ int labelID;
	/* 0x0004 */ int buff_id;
	/* 0x0008 */ int stat;
	/* 0x000c */ char *addr;
	/* 0x0010 */ float pos[4];
	/* 0x0020 */ u_int model_addr;
	/* 0x0024 */ u_int reg_dat_top;
	/* 0x0028 */ u_int free_mem_top;
	/* 0x002c */ u_int high_addr;
	/* 0x0030 */ u_int model_pak_addr;
	/* 0x0034 */ u_int lit_addr;
	/* 0x0038 */ u_int shadow_addr;
	/* 0x003c */ u_int shadow_s_addr;
	/* 0x0040 */ GRA3DLIGHTDATA lit_dat;
	/* 0x13e0 */ fixed_array<char,4> reg_id;
} MLOAD_HEAD;

enum MAPMODELPK2DATAINDEX {
	MAPMODELPK2_MODEL = 0,
	MAPMODELPK2_SOURCEMODEL = 1,
	MAPMODELPK2_SHADOWMODEL = 2
};

typedef struct { // 0x3c
	/* 0x00 */ int buff_id;
	/* 0x04 */ short int attr;
	/* 0x06 */ short int flg;
	/* 0x08 */ int size;
	/* 0x0c */ char name[36];
	/* 0x30 */ char *addr;
	/* 0x34 */ char *model;
	/* 0x38 */ char *mot;
} FURN_CTL;

struct fixed_array_base<FURN_CTL,48,FURN_CTL[48]> { // 0xb40
protected:
	/* 0x000 */ FURN_CTL m_aData[48];
	
public:
	fixed_array_base<FURN_CTL,48,FURN_CTL[48]>& operator=();
	fixed_array_base();
protected:
	fixed_array_base();
public:
	FURN_CTL& operator[]();
	FURN_CTL& operator[]();
	FURN_CTL* data();
	FURN_CTL* begin();
	FURN_CTL* end();
	void fill();
	size_t size();
	bool empty();
};

struct fixed_array<FURN_CTL,48> : /* 0x000 */ fixed_array_base<FURN_CTL,48,FURN_CTL[48]> { // 0xb40
};

typedef struct { // 0x8
	/* 0x0 */ int id;
	/* 0x4 */ char *addr;
} FURN_WORK_HEAD;

enum _FILE_LOAD_ENUM {
	FILE_LOAD_OK = 0,
	FILE_LOAD_ALREADY_LOAD = 1,
	FILE_LOAD_ALREADY_ALL_LOAD = 2,
	FILE_LOAD_ID_NOT_EXIST = 3
};

typedef _FILE_LOAD_ENUM FILE_LOAD_ENUM;

typedef struct { // 0x10
	/* 0x0 */ char key[8];
	/* 0x8 */ int label;
	/* 0xc */ int attr;
} FURN_LOAD_TBL;

enum ENUM_ScreenEffectStatus {
	SCREEN_EFFECT_NORMAL = 0,
	SCREEN_EFFECT_EMEMY_DEAD = 1,
	SCREEN_EFFECT_PUZZLE = 2,
	SCREEN_EFFECT_NOTHING = 3
};

enum SCREEN_EFFECT_NO_LABEL {
	SCREEN_EFFECT_NO_DEFAULT = 0,
	SCREEN_EFFECT_NO_01 = 1,
	SCREEN_EFFECT_NO_02 = 2,
	SCREEN_EFFECT_NO_03 = 3,
	SCREEN_EFFECT_NO_04 = 4,
	SCREEN_EFFECT_NO_SCREEN_SAVER = 5,
	SCREEN_EFFECT_NO_NUM = 6
};

enum EFF_FLOW_CTRL_ID {
	EFF_FLOW_CTRL_IN = 0,
	EFF_FLOW_CTRL_KEEP = 1,
	EFF_FLOW_CTRL_OUT = 2,
	EFF_FLOW_CTRL_END = 3,
	EFF_FLOW_CTRL_STOP = 4
};

typedef union { // 0x4
	/* 0x0 */ int ui32;
	/* 0x0 */ float fl32;
} U32DATA;

struct fixed_array_base<float,3,float[3]> { // 0xc
protected:
	/* 0x0 */ float m_aData[3];
	
public:
	fixed_array_base<float,3,float[3]>& operator=();
	fixed_array_base();
protected:
	fixed_array_base();
public:
	float& operator[]();
	float& operator[]();
	float* data();
	float* begin();
	float* end();
	void fill();
	size_t size();
	bool empty();
};

struct fixed_array<float,3> : /* 0x0 */ fixed_array_base<float,3,float[3]> { // 0xc
};

typedef struct { // 0x70
	/* 0x00 */ Q_WORDDATA dat;
	/* 0x10 */ float Pos[4];
	/* 0x20 */ void *pnt[6];
	/* 0x38 */ fixed_array<float,3> fw;
	/* 0x44 */ u_int z;
	/* 0x48 */ u_int flow;
	/* 0x4c */ u_int cnt;
	/* 0x50 */ u_int in;
	/* 0x54 */ u_int keep;
	/* 0x58 */ u_int out;
	/* 0x5c */ u_int max;
	/* 0x60 */ u_char r;
	/* 0x61 */ u_char g;
	/* 0x62 */ u_char b;
	/* 0x63 */ u_char a;
} EFFECT_CONT;

typedef struct { // 0x14
	/* 0x00 */ u_char sw;
	/* 0x01 */ u_char alp;
	/* 0x04 */ int scl;
	/* 0x08 */ int rot;
	/* 0x0c */ float x;
	/* 0x10 */ float y;
} BLUR_STR;

typedef struct { // 0x4
	/* 0x0 */ u_char sw;
	/* 0x1 */ u_char type;
	/* 0x2 */ u_char col;
	/* 0x3 */ u_char alp;
} CONTRAST_STR;

typedef struct { // 0x2
	/* 0x0 */ u_char sw;
	/* 0x1 */ u_char alp;
} FFRAME_STR;

typedef struct { // 0x10
	/* 0x0 */ u_char sw;
	/* 0x1 */ u_char type;
	/* 0x4 */ float spd;
	/* 0x8 */ float alp;
	/* 0xc */ u_char amax;
	/* 0xd */ u_char cmax;
} DITHER_STR;

typedef struct { // 0x3
	/* 0x0 */ u_char sw;
	/* 0x1 */ u_char type;
	/* 0x2 */ u_char rate;
} DEFORM_STR;

typedef struct { // 0x4
	/* 0x0 */ u_char sw;
	/* 0x1 */ u_char col;
	/* 0x2 */ u_char alp;
	/* 0x3 */ u_char alp2;
} NEGA_STR;

typedef struct { // 0x1
	/* 0x0 */ u_char sw;
} MONO_STR;

typedef struct { // 0x34
	/* 0x00 */ BLUR_STR bl;
	/* 0x14 */ CONTRAST_STR cn;
	/* 0x18 */ FFRAME_STR ff;
	/* 0x1c */ DITHER_STR dt;
	/* 0x2c */ DEFORM_STR df;
	/* 0x2f */ NEGA_STR ng;
	/* 0x33 */ MONO_STR mn;
} SBTSET;

typedef struct { // 0x60
	/* 0x00 */ int Z_Dep;
	/* 0x04 */ int Dither;
	/* 0x08 */ int DitherSpeed;
	/* 0x0c */ int DitherAlpha;
	/* 0x10 */ int DitherAlphaMax;
	/* 0x14 */ int DitherColorMax;
	/* 0x18 */ int Blur;
	/* 0x1c */ int BlurAlpha;
	/* 0x20 */ int BlurScale;
	/* 0x24 */ int BlrrRot;
	/* 0x28 */ int Deform;
	/* 0x2c */ int DeformRate;
	/* 0x30 */ int Focus;
	/* 0x34 */ int ColorFilter;
	/* 0x38 */ int BlackFilter;
	/* 0x3c */ int Contrast;
	/* 0x40 */ int ContrastColor;
	/* 0x44 */ int ContrastAlpha;
	/* 0x48 */ int NegaColor;
	/* 0x4c */ int NegaAlpha;
	/* 0x50 */ int NegaAlpha2;
	/* 0x54 */ int FadeFrame;
	/* 0x58 */ int FadeFrameAlpha;
	/* 0x5c */ int Overlap;
} SCREEN_EFFECT_PARAMETER;

struct fixed_array_base<unsigned char,8,unsigned char[8]> { // 0x8
protected:
	/* 0x0 */ u_char m_aData[8];
	
public:
	fixed_array_base<unsigned char,8,unsigned char[8]>& operator=();
	fixed_array_base();
protected:
	fixed_array_base();
public:
	u_char& operator[]();
	u_char& operator[]();
	u_char* data();
	u_char* begin();
	u_char* end();
	void fill();
	size_t size();
	bool empty();
};

struct fixed_array<unsigned char,8> : /* 0x0 */ fixed_array_base<unsigned char,8,unsigned char[8]> { // 0x8
};

typedef struct { // 0x10
	/* 0x0 */ u_int frame;
	/* 0x4 */ u_int size;
	/* 0x8 */ fixed_array<unsigned char,8> anm;
} FOD_CAM_FRAME;

typedef struct { // 0x30
	/* 0x00 */ float p[4];
	/* 0x10 */ float i[4];
	/* 0x20 */ float roll;
	/* 0x24 */ float fov;
	/* 0x28 */ float near;
	/* 0x2c */ float far;
} FOD_FIRST_CAM;

typedef struct { // 0x30
	/* 0x00 */ float vPosition[4];
	/* 0x10 */ float vTarget[4];
	/* 0x20 */ float fRoll;
	/* 0x24 */ float fFov;
	/* 0x28 */ float fNearZ;
	/* 0x2c */ float fFarZ;
} FOD_CAMERA_DATA;

typedef struct { // 0x10
	/* 0x0 */ u_int frame;
	/* 0x4 */ u_int size;
	/* 0x8 */ u_int pad[2];
} FOD_LIT_FRAME;

typedef struct { // 0x10
	/* 0x0 */ int light_id;
	/* 0x4 */ u_int type;
	/* 0x8 */ fixed_array<unsigned char,8> anm;
} FOD_LIT_ANM;

typedef struct { // 0x20
	/* 0x00 */ u_char light_no;
	/* 0x01 */ u_char light_type;
	/* 0x02 */ u_char anm_flg;
	/* 0x03 */ char pad;
	/* 0x04 */ char light_name[28];
} FOD_LIT_SERIAL;

typedef struct { // 0x20
	/* 0x00 */ u_int id;
	/* 0x04 */ u_int size;
	/* 0x08 */ u_int pad[2];
	/* 0x10 */ float color[4];
} FOD_LIT_AMB;

typedef struct { // 0x30
	/* 0x00 */ u_int id;
	/* 0x04 */ u_int size;
	/* 0x08 */ u_int pad[2];
	/* 0x10 */ float color[4];
	/* 0x20 */ float direction[4];
} FOD_LIT_INF;

typedef struct { // 0x50
	/* 0x00 */ u_int id;
	/* 0x04 */ u_int size;
	/* 0x08 */ u_int pad[2];
	/* 0x10 */ float color[4];
	/* 0x20 */ float position[4];
	/* 0x30 */ float interest[4];
	/* 0x40 */ float cone;
	/* 0x44 */ float spread;
	/* 0x48 */ float fpad[2];
} FOD_LIT_SPOT;

typedef struct { // 0x30
	/* 0x00 */ u_int id;
	/* 0x04 */ u_int size;
	/* 0x08 */ u_int pad[2];
	/* 0x10 */ float color[4];
	/* 0x20 */ float position[4];
} FOD_LIT_POINT;

struct fixed_array_base<FOD_LIT_SERIAL,36,FOD_LIT_SERIAL[36]> { // 0x480
protected:
	/* 0x000 */ FOD_LIT_SERIAL m_aData[36];
	
public:
	fixed_array_base<FOD_LIT_SERIAL,36,FOD_LIT_SERIAL[36]>& operator=();
	fixed_array_base();
protected:
	fixed_array_base();
public:
	FOD_LIT_SERIAL& operator[]();
	FOD_LIT_SERIAL& operator[]();
	FOD_LIT_SERIAL* data();
	FOD_LIT_SERIAL* begin();
	FOD_LIT_SERIAL* end();
	void fill();
	size_t size();
	bool empty();
};

struct fixed_array<FOD_LIT_SERIAL,36> : /* 0x000 */ fixed_array_base<FOD_LIT_SERIAL,36,FOD_LIT_SERIAL[36]> { // 0x480
};

struct fixed_array_base<G3DLIGHT,36,G3DLIGHT[36]> { // 0xfc0
protected:
	/* 0x000 */ G3DLIGHT m_aData[36];
	
public:
	fixed_array_base<G3DLIGHT,36,G3DLIGHT[36]>& operator=();
	fixed_array_base();
protected:
	fixed_array_base();
public:
	G3DLIGHT& operator[]();
	G3DLIGHT& operator[]();
	G3DLIGHT* data();
	G3DLIGHT* begin();
	G3DLIGHT* end();
	void fill();
	size_t size();
	bool empty();
};

struct fixed_array<G3DLIGHT,36> : /* 0x000 */ fixed_array_base<G3DLIGHT,36,G3DLIGHT[36]> { // 0xfc0
};

struct fixed_array_base<float[4],6,float[6][4]> { // 0x60
protected:
	/* 0x00 */ float m_aData[6][4];
	
public:
	fixed_array_base<float[4],6,float[6][4]>& operator=();
	fixed_array_base();
protected:
	fixed_array_base();
public:
	float&[4] operator[]();
	float&[4] operator[]();
	float*[4] data();
	float*[4] begin();
	float*[4] end();
	void fill();
	size_t size();
	bool empty();
};

struct fixed_array<float[4],6> : /* 0x00 */ fixed_array_base<float[4],6,float[6][4]> { // 0x60
};

typedef struct { // 0x14c0
	/* 0x0000 */ fixed_array<FOD_LIT_SERIAL,36> lit_serial;
	/* 0x0480 */ fixed_array<G3DLIGHT,36> all_lit;
	/* 0x1440 */ fixed_array<float[4],6> amb;
	/* 0x14a0 */ u_int *lit_top;
	/* 0x14a4 */ u_int ilit_num;
	/* 0x14a8 */ u_int slit_num;
	/* 0x14ac */ u_int plit_num;
	/* 0x14b0 */ u_int all_lit_num;
	/* 0x14b4 */ int hand_spot_no;
} FOD_LIGHT;

typedef struct { // 0x10
	/* 0x0 */ int num;
	/* 0x4 */ int shibata;
	/* 0x8 */ int pad[2];
} FOD_EF_FIX_HDR;

typedef struct { // 0x10
	/* 0x0 */ u_int frame_no;
	/* 0x4 */ u_int size;
	/* 0x8 */ u_char zdepth;
	/* 0x9 */ u_char mono;
	/* 0xa */ u_char sepia;
	/* 0xb */ u_char color_change;
	/* 0xc */ u_int pad;
} FOD_EFF_FRAME;

typedef struct { // 0x10
	/* 0x0 */ u_char efct_id;
	/* 0x1 */ u_char type;
	/* 0x2 */ u_char alpmax;
	/* 0x3 */ u_char colmax;
	/* 0x4 */ float speed;
	/* 0x8 */ float alpha;
	/* 0xc */ u_int ipad;
} FOD_EF_DITHER;

typedef struct { // 0x10
	/* 0x0 */ u_char efct_id;
	/* 0x1 */ u_char blur_type;
	/* 0x2 */ u_char alpha;
	/* 0x3 */ u_char cpad;
	/* 0x4 */ u_int scale;
	/* 0x8 */ u_int rot;
	/* 0xc */ u_int ipad;
} FOD_EF_BLUR;

typedef struct { // 0x10
	/* 0x0 */ u_char efct_id;
	/* 0x1 */ u_char type;
	/* 0x2 */ u_char volume;
	/* 0x3 */ u_char cpad;
	/* 0x4 */ u_int ipad[3];
} FOD_EF_DEFORM;

typedef struct { // 0x10
	/* 0x0 */ u_char efct_id;
	/* 0x1 */ u_char volume;
	/* 0x2 */ u_char cpad[2];
	/* 0x4 */ u_int ipad[3];
} FOD_EF_FOCUS;

typedef struct { // 0x10
	/* 0x0 */ u_char efct_id;
	/* 0x1 */ u_char color;
	/* 0x2 */ u_char alpha;
	/* 0x3 */ u_char cont_type;
	/* 0x4 */ u_int ipad[3];
} FOD_EF_CONTRAST;

typedef struct { // 0x1c
	/* 0x00 */ u_char efct_id;
	/* 0x01 */ u_char color;
	/* 0x02 */ u_char alpha;
	/* 0x03 */ u_char alpha2;
	/* 0x04 */ u_char cont_type;
	/* 0x08 */ u_int cpad[3];
	/* 0x14 */ u_int ipad[2];
} FOD_EF_NEGA;

typedef struct { // 0x10
	/* 0x0 */ u_char efct_id;
	/* 0x1 */ u_char volume;
	/* 0x2 */ u_char cpad[2];
	/* 0x4 */ u_int ipad[3];
} FOD_EF_F_FRAME;

typedef struct { // 0x10
	/* 0x0 */ u_char efct_id;
	/* 0x1 */ u_char type;
	/* 0x2 */ u_char cpad[2];
	/* 0x4 */ float x;
	/* 0x8 */ float y;
	/* 0xc */ float z;
} FOD_EF_LENZ_F;

typedef struct { // 0x10
	/* 0x0 */ u_char efct_id;
	/* 0x1 */ u_char volume;
	/* 0x2 */ u_char cpad[2];
	/* 0x4 */ u_int ipad[3];
} FOD_EF_CROSS_F;

typedef struct { // 0x10
	/* 0x0 */ u_char efct_id;
	/* 0x1 */ u_char cpad[3];
	/* 0x4 */ u_char r;
	/* 0x5 */ u_char g;
	/* 0x6 */ u_char b;
	/* 0x7 */ u_char a;
	/* 0x8 */ u_int ipad[2];
} FOD_EF_FADE_SCR;

typedef struct { // 0x10
	/* 0x0 */ u_char efct_id;
	/* 0x1 */ u_char alpha;
	/* 0x2 */ u_char cpad[2];
	/* 0x4 */ u_char prefix[4];
	/* 0x8 */ u_int mdl_id;
	/* 0xc */ u_int ipad;
} FOD_EF_FADE_MDL;

typedef struct { // 0x10
	/* 0x0 */ u_char efct_id;
	/* 0x1 */ u_char data_type;
	/* 0x2 */ u_char type;
	/* 0x3 */ u_char alpha;
	/* 0x4 */ float rate;
	/* 0x8 */ float trate;
	/* 0xc */ int pad;
} FOD_EF_P_DEFORM1;

typedef struct { // 0x10
	/* 0x0 */ u_char efct_id;
	/* 0x1 */ u_char data_type;
	/* 0x2 */ u_char cpad[2];
	/* 0x4 */ float posx;
	/* 0x8 */ float posy;
	/* 0xc */ float posz;
} FOD_EF_P_DEFORM2;

typedef struct { // 0x10
	/* 0x0 */ u_char efct_id;
	/* 0x1 */ u_char data_type;
	/* 0x2 */ u_char cpad[2];
	/* 0x4 */ float sclx;
	/* 0x8 */ float scly;
	/* 0xc */ float pad;
} FOD_EF_P_DEFORM3;

typedef struct { // 0x10
	/* 0x0 */ u_char efct_id;
	/* 0x1 */ u_char cpad[3];
	/* 0x4 */ float posx;
	/* 0x8 */ float posy;
	/* 0xc */ float posz;
} FOD_EF_FIRE;

typedef struct { // 0x10
	/* 0x0 */ u_char efct_id;
	/* 0x1 */ u_char cpad[3];
	/* 0x4 */ float posx;
	/* 0x8 */ float posy;
	/* 0xc */ float posz;
} FOD_EF_ITEM;

typedef struct { // 0x10
	/* 0x0 */ u_char efct_id;
	/* 0x1 */ u_char type;
	/* 0x2 */ u_char cpad[2];
	/* 0x4 */ float posx;
	/* 0x8 */ float posy;
	/* 0xc */ float posz;
} FOD_EF_AMULET;

typedef struct { // 0x10
	/* 0x0 */ u_char efct_id;
	/* 0x1 */ u_char cpad[3];
	/* 0x4 */ u_char prefix[4];
	/* 0x8 */ u_int ipad[2];
} FOD_EF_ENEMY;

typedef struct { // 0x10
	/* 0x0 */ u_char efct_id;
	/* 0x1 */ u_char type;
	/* 0x2 */ u_char cpad[2];
	/* 0x4 */ u_int frame;
	/* 0x8 */ u_int ipad[2];
} FOD_EF_VIBRATE;

typedef union { // 0x1c
	/* 0x00 */ FOD_EF_DITHER dither;
	/* 0x00 */ FOD_EF_BLUR blur;
	/* 0x00 */ FOD_EF_DEFORM deform;
	/* 0x00 */ FOD_EF_FOCUS focus;
	/* 0x00 */ FOD_EF_CONTRAST contrast;
	/* 0x00 */ FOD_EF_NEGA nega;
	/* 0x00 */ FOD_EF_F_FRAME f_frame;
	/* 0x00 */ FOD_EF_LENZ_F lenz_f;
	/* 0x00 */ FOD_EF_CROSS_F cross_f;
	/* 0x00 */ FOD_EF_P_DEFORM1 pdf1;
	/* 0x00 */ FOD_EF_P_DEFORM2 pdf2;
	/* 0x00 */ FOD_EF_P_DEFORM3 pdf3;
	/* 0x00 */ FOD_EF_FADE_SCR fade_scr;
	/* 0x00 */ FOD_EF_FADE_MDL fade_mdl;
	/* 0x00 */ FOD_EF_FIRE fire;
	/* 0x00 */ FOD_EF_ITEM item;
	/* 0x00 */ FOD_EF_AMULET amulet;
	/* 0x00 */ FOD_EF_ENEMY enemy;
	/* 0x00 */ FOD_EF_VIBRATE vibrate;
	/* 0x00 */ u_char unit[16];
} FOD_EFF_DATA;

typedef struct { // 0x80
	/* 0x00 */ FOD_EFF_DATA *fix[12];
	/* 0x30 */ float lenz_pos[4];
	/* 0x40 */ float lenz_rot[4];
	/* 0x50 */ float pdf_pos[4];
	/* 0x60 */ float pdf_spd;
	/* 0x64 */ float pdf_rate;
	/* 0x68 */ float pdf_trate;
	/* 0x6c */ void *pdf_p;
	/* 0x70 */ u_int fix_eff_num;
	/* 0x74 */ u_int fade_mdl_cnt;
	/* 0x78 */ u_int fire_num;
	/* 0x7c */ u_int mono_flg;
} FOD_EFF_PARAM;

typedef struct { // 0x10
	/* 0x0 */ u_int file_id;
	/* 0x4 */ float version;
	/* 0x8 */ u_int reso;
	/* 0xc */ u_int frame;
} FOD_FILE_HDR;

typedef struct { // 0x1510
	/* 0x0000 */ FOD_LIGHT fod_light;
	/* 0x14c0 */ FOD_FILE_HDR *cam_file_hdr;
	/* 0x14c4 */ FOD_CAM_FRAME *cam_frame_top;
	/* 0x14c8 */ FOD_CAM_FRAME *cam_frame;
	/* 0x14cc */ FOD_CAM_FRAME *cam_frame_next;
	/* 0x14d0 */ FOD_FILE_HDR *lit_file_hdr;
	/* 0x14d4 */ FOD_LIT_FRAME *lit_frame_top;
	/* 0x14d8 */ FOD_LIT_FRAME *lit_frame;
	/* 0x14dc */ FOD_LIT_FRAME *lit_frame_next;
	/* 0x14e0 */ FOD_FILE_HDR *eff_file_hdr;
	/* 0x14e4 */ FOD_EFF_FRAME *eff_frame_top;
	/* 0x14e8 */ FOD_EFF_FRAME *eff_frame;
	/* 0x14ec */ u_int now_frame;
	/* 0x14f0 */ u_int frame_max;
	/* 0x14f4 */ u_int now_reso;
	/* 0x14f8 */ u_char resolution;
	/* 0x14f9 */ u_char end_flg;
	/* 0x14fc */ float float_now_frame;
	/* 0x1500 */ int cut_timing_index;
} FOD_CTRL;

typedef struct { // 0x18
	/* 0x00 */ u_int type;
	/* 0x04 */ float sclx;
	/* 0x08 */ float scly;
	/* 0x0c */ u_int alpha;
	/* 0x10 */ float rate;
	/* 0x14 */ float trate;
} SCN_ENE_EF_PDF;

typedef struct { // 0x4c
	/* 0x00 */ u_short scene_no;
	/* 0x02 */ u_short mdl_no;
	/* 0x04 */ float aura_size;
	/* 0x08 */ float aura_rate;
	/* 0x0c */ u_int aura_rgba;
	/* 0x10 */ SCN_ENE_EF_PDF pdf1;
	/* 0x28 */ SCN_ENE_EF_PDF pdf2;
	/* 0x40 */ float pdf_dist;
	/* 0x44 */ float aura_pos_ajst;
	/* 0x48 */ int mdl_alpha;
} SCN_ENE_EFCT;

typedef struct { // 0x4c
	/* 0x00 */ ANI_CTRL *pMdlAnm;
	/* 0x04 */ SCN_ENE_EFCT *ene_efct;
	/* 0x08 */ void *efct_addr[4];
	/* 0x18 */ char prefix[9];
	/* 0x24 */ u_int mdl_no;
	/* 0x28 */ u_int mdl_alpha;
	/* 0x2c */ u_int scn_mdl_no;
	/* 0x30 */ u_int *mdl_addr;
	/* 0x34 */ u_int *mdl_addr_db;
	/* 0x38 */ u_int *mot_addr;
	/* 0x3c */ u_int *mim_addr;
	/* 0x40 */ u_int *mim_buf_addr;
	/* 0x44 */ u_int *pk2_addr;
	/* 0x48 */ u_int disp_flg;
} SCN_ANM_MDL;

typedef struct { // 0x20
	/* 0x00 */ float min;
	/* 0x04 */ float max;
	/* 0x08 */ float near;
	/* 0x0c */ float far;
	/* 0x10 */ int r;
	/* 0x14 */ int g;
	/* 0x18 */ int b;
	/* 0x1c */ int pad;
} SCENE_FOG;

struct fixed_array_base<SCN_ANM_MDL,8,SCN_ANM_MDL[8]> { // 0x260
protected:
	/* 0x000 */ SCN_ANM_MDL m_aData[8];
	
public:
	fixed_array_base<SCN_ANM_MDL,8,SCN_ANM_MDL[8]>& operator=();
	fixed_array_base();
protected:
	fixed_array_base();
public:
	SCN_ANM_MDL& operator[]();
	SCN_ANM_MDL& operator[]();
	SCN_ANM_MDL* data();
	SCN_ANM_MDL* begin();
	SCN_ANM_MDL* end();
	void fill();
	size_t size();
	bool empty();
};

struct fixed_array<SCN_ANM_MDL,8> : /* 0x000 */ fixed_array_base<SCN_ANM_MDL,8,SCN_ANM_MDL[8]> { // 0x260
};

struct fixed_array_base<SCN_ANM_MDL,14,SCN_ANM_MDL[14]> { // 0x428
protected:
	/* 0x000 */ SCN_ANM_MDL m_aData[14];
	
public:
	fixed_array_base<SCN_ANM_MDL,14,SCN_ANM_MDL[14]>& operator=();
	fixed_array_base();
protected:
	fixed_array_base();
public:
	SCN_ANM_MDL& operator[]();
	SCN_ANM_MDL& operator[]();
	SCN_ANM_MDL* data();
	SCN_ANM_MDL* begin();
	SCN_ANM_MDL* end();
	void fill();
	size_t size();
	bool empty();
};

struct fixed_array<SCN_ANM_MDL,14> : /* 0x000 */ fixed_array_base<SCN_ANM_MDL,14,SCN_ANM_MDL[14]> { // 0x428
};

struct fixed_array_base<int,8,int[8]> { // 0x20
protected:
	/* 0x00 */ int m_aData[8];
	
public:
	fixed_array_base<int,8,int[8]>& operator=();
	fixed_array_base();
protected:
	fixed_array_base();
public:
	int& operator[]();
	int& operator[]();
	int* data();
	int* begin();
	int* end();
	void fill();
	size_t size();
	bool empty();
};

struct fixed_array<int,8> : /* 0x00 */ fixed_array_base<int,8,int[8]> { // 0x20
};

typedef struct { // 0x2130
	/* 0x0000 */ fixed_array<SCN_ANM_MDL,8> man_mdl;
	/* 0x0260 */ fixed_array<SCN_ANM_MDL,14> furn_mdl;
	/* 0x0688 */ fixed_array<SCN_ANM_MDL,8> item_mdl;
	/* 0x08e8 */ fixed_array<SCN_ANM_MDL,8> door_mdl;
	/* 0x0b48 */ fixed_array<int,8> man_mdl_tex;
	/* 0x0b70 */ FOD_CTRL fod_ctrl;
	/* 0x2080 */ SCENE_FOG fog;
	/* 0x20a0 */ FOD_CAMERA_DATA CameraData;
	/* 0x20d0 */ int man_mdl_num;
	/* 0x20d4 */ int door_num;
	/* 0x20d8 */ int furn_num;
	/* 0x20dc */ int item_num;
	/* 0x20e0 */ u_int *scn_data_addr;
	/* 0x20e4 */ u_int *light_rev_addr;
	/* 0x20e8 */ u_int *effect_addr;
	/* 0x20ec */ u_int *pMimBuf;
	/* 0x20f0 */ int scene_no;
	/* 0x20f4 */ int room_no;
	/* 0x20f8 */ int sub_room_no;
	/* 0x20fc */ int count_flg;
	/* 0x2100 */ int mirror_flg;
	/* 0x2104 */ int init_flg;
	/* 0x2108 */ float fNearZBak;
	/* 0x210c */ float fFarZBak;
	/* 0x2110 */ int DrawAneFlg;
	/* 0x2114 */ int DrawImoutoFlg;
	/* 0x2118 */ int DoubleBufferId;
	/* 0x211c */ int AreaNoBak;
	/* 0x2120 */ int MonotoneEnableBak;
	/* 0x2124 */ int *pPlayerAccessoryPk2;
	/* 0x2128 */ int *pSisterAccessoryPk2;
} SCENE_CTRL;

typedef struct { // 0x30
	/* 0x00 */ u_int *scn_file_addr;
	/* 0x04 */ u_int file_num;
	/* 0x08 */ u_int *ofs_top_addr;
	/* 0x0c */ u_int *hdr_addr;
	/* 0x10 */ u_int *cam_fod_addr;
	/* 0x14 */ u_int *lit_fod_addr;
	/* 0x18 */ u_int *eff_fod_addr;
	/* 0x1c */ u_int *man_mot_addr;
	/* 0x20 */ u_int *man_mim_addr;
	/* 0x24 */ u_int *furn_mot_addr;
	/* 0x28 */ u_int *door_mot_addr;
	/* 0x2c */ u_int *item_mot_addr;
} SCENE_FILE;

typedef struct { // 0x6
	/* 0x0 */ u_short start;
	/* 0x2 */ u_short end;
	/* 0x4 */ u_short type;
} SCN_VIB_DATA;

typedef struct { // 0xc
	/* 0x0 */ int time0;
	/* 0x4 */ int time1;
	/* 0x8 */ int val;
} SCN_VIB_TYPE;

typedef struct { // 0x4
	/* 0x0 */ u_short scene_no;
	/* 0x2 */ u_short movie_no;
} SCENE_MOVIE_DATA;

struct _SCENE_DATA_CMN { // 0x1
	/* 0x0 */ unsigned char vol;
};

typedef _SCENE_DATA_CMN SCENE_DATA_CMN;

typedef struct { // 0x4
	/* 0x0 */ u_char state;
	/* 0x1 */ u_char dumy1;
	/* 0x2 */ short int dumy2;
} EVENT_STATE;

struct fixed_array_base<EVENT_STATE,1931,EVENT_STATE[1931]> { // 0x1e2c
protected:
	/* 0x0000 */ EVENT_STATE m_aData[1931];
	
public:
	fixed_array_base<EVENT_STATE,1931,EVENT_STATE[1931]>& operator=();
	fixed_array_base();
protected:
	fixed_array_base();
public:
	EVENT_STATE& operator[]();
	EVENT_STATE& operator[]();
	EVENT_STATE* data();
	EVENT_STATE* begin();
	EVENT_STATE* end();
	void fill();
	size_t size();
	bool empty();
};

struct fixed_array<EVENT_STATE,1931> : /* 0x0000 */ fixed_array_base<EVENT_STATE,1931,EVENT_STATE[1931]> { // 0x1e2c
};

typedef struct { // 0x1e38
	/* 0x0000 */ int step;
	/* 0x0004 */ int ev_no;
	/* 0x0008 */ fixed_array<EVENT_STATE,1931> ev_state;
	/* 0x1e34 */ u_char wait_flg;
} EV_WRK;

struct CEventGazeWrk { // 0x20
protected:
	/* 0x00:0 */ unsigned char mActive : 1;
	/* 0x00:1 */ unsigned char mObjAppoint : 1;
	/* 0x01 */ char mObjType;
	/* 0x04 */ int mObjId;
	/* 0x10 */ sceVu0FVECTOR mPos;
	
public:
	CEventGazeWrk& operator=();
	CEventGazeWrk();
	CEventGazeWrk();
	void Init();
	void SetObjType();
	void SetPoint();
};

struct CEventSisterGazeWrk : /* 0x00 */ CEventGazeWrk { // 0x20
	CEventSisterGazeWrk& operator=();
	CEventSisterGazeWrk();
	CEventSisterGazeWrk();
	void Work();
};

struct CEventPlayerGazeWrk : /* 0x00 */ CEventGazeWrk { // 0x20
	CEventPlayerGazeWrk& operator=();
	CEventPlayerGazeWrk();
	CEventPlayerGazeWrk();
	void Work();
};

struct PhotoData { // 0x18
	/* 0x00 */ float Top;
	/* 0x04 */ float Bottom;
	/* 0x08 */ float Dist;
	/* 0x0c */ short unsigned int Point;
	/* 0x0e */ short int image;
	/* 0x10 */ short int mestype;
	/* 0x12 */ short int mesnuma;
	/* 0x14:0 */ short unsigned int f_finder : 1;
	/* 0x14:1 */ short unsigned int f_filament : 1;
	/* 0x14:2 */ short unsigned int f_deform : 1;
	/* 0x14:3 */ short unsigned int f_sound : 1;
	/* 0x14:4 */ short unsigned int f_seal_ghost : 1;
	/* 0x14:5 */ short unsigned int f_unlock_ghost : 1;
	/* 0x16 */ short int ghost_list_rel_no;
};

enum _MAP_OBJ_EFFECT_ENUM {
	MAP_OBJ_EFFECT_ITEM = 0,
	MAP_OBJ_EFFECT_TORCH0 = 1,
	MAP_OBJ_EFFECT_TORCH1 = 2,
	MAP_OBJ_EFFECT_TORCH2 = 3,
	MAP_OBJ_EFFECT_TORCH3 = 4,
	MAP_OBJ_EFFECT_TORCH4 = 5,
	MAP_OBJ_EFFECT_TORCH5 = 6,
	MAP_OBJ_EFFECT_TORCH6 = 7,
	MAP_OBJ_EFFECT_BUTTERFLY0 = 8,
	MAP_OBJ_EFFECT_CANDLE = 9,
	MAP_OBJ_EFFECT_RAIN = 10,
	MAP_OBJ_EFFECT_HIKARI = 11,
	MAP_OBJ_EFFECT_MOYA = 12,
	MAP_OBJ_EFFECT_OCHIBA = 13,
	MAP_OBJ_EFFECT_MIZU = 14,
	MAP_OBJ_EFFECT_KAWA = 15,
	MAP_OBJ_EFFECT_TOUROU = 16,
	MAP_OBJ_EFFECT_CANDLE2 = 17,
	MAP_OBJ_EFFECT_SIMI = 18,
	MAP_OBJ_EFFECT_TORCH7 = 19,
	MAP_OBJ_EFFECT_MAX = 20
};

typedef _MAP_OBJ_EFFECT_ENUM MAP_OBJ_EFFECT_ENUM;

typedef struct { // 0x1c
	/* 0x00 */ int stat;
	/* 0x04 */ int flg;
	/* 0x08 */ int *mdl_addr;
	/* 0x0c */ int anim_id;
	/* 0x10 */ void *obj_ptr;
	/* 0x14 */ void *obj_hdl;
	/* 0x18 */ void *obj_save;
} MAPOBJ_DAT;

typedef struct { // 0x20d4
	/* 0x0000 */ int *lit_addr;
	/* 0x0004 */ MAPOBJ_DAT dat[300];
} MAPOBJ_HEAD;

typedef struct { // 0x60
	/* 0x00 */ int doorID;
	/* 0x04 */ int room_no[2];
	/* 0x0c */ int attribute;
	/* 0x10 */ u_short type;
	/* 0x12 */ u_short se;
	/* 0x20 */ float player_pos[4];
	/* 0x30 */ float sister_bpos[4];
	/* 0x40 */ float sister_pos[4];
	/* 0x50 */ float player_rot;
	/* 0x54 */ float sister_brot;
	/* 0x58 */ float sister_rot;
} MLOAD_DOOR_DAT;

typedef struct { // 0x10
	/* 0x0 */ int draw_flg;
	/* 0x4 */ int draw_hight;
	/* 0x8 */ int predb_mode;
	/* 0xc */ int save;
} MH_CTL_DB_FLG;

struct _CD_DAT_TBL { // 0xc
	/* 0x0:0 */ unsigned int cmp_flg : 1;
	/* 0x0:1 */ unsigned int exist_flg : 1;
	/* 0x0:2 */ unsigned int start_sector : 30;
	/* 0x4 */ int size;
	/* 0x8 */ int cmp_size;
};

typedef _CD_DAT_TBL CD_DAT_TBL;

typedef struct { // 0x8
	/* 0x0 */ char cmp_flg;
	/* 0x1 */ char path_no;
	/* 0x4 */ char *name;
} FNAME_DAT;

enum INGAME_SCENE_STATUS {
	INGAME_SCENE_STREAM_BACKUP = 0,
	INGAME_SCENE_DATA_LOAD_REQ = 1,
	INGAME_SCENE_DATA_LOAD_WAIT = 2,
	INGAME_SCENE_ROOM_LOAD = 3,
	INGAME_SCENE_PLAY = 4,
	INGAME_SCENE_PLAY_MOVIE = 5,
	INGAME_SCENE_DEBUG_SKIP = 6
};

enum INGAME_SCENE_ROOM_LOAD_STATUS {
	INGAME_SCENE_ROOM_LOAD_WAIT = 0,
	INGAME_SCENE_ROOM_SUB_LOAD_REQ = 1,
	INGAME_SCENE_ROOM_SUB_LOAD = 2,
	INGAME_SCENE_ROOM_MAIN_LOAD_REQ = 3,
	INGAME_SCENE_ROOM_MAIN_LOAD = 4
};

typedef struct { // 0x10
	/* 0x0 */ int SceneNo;
	/* 0x4 */ u_int *pLoadAdrs;
	/* 0x8 */ int Status;
	/* 0xc */ int RoomLoadStatus;
} INGAME_SCENE_CTRL;

typedef struct { // 0x80
	/* 0x00 */ short int id;
	/* 0x02 */ short int flg;
	/* 0x04 */ u_int frame;
	/* 0x08 */ u_int *mot_p;
	/* 0x0c */ float *mat[4][4];
	/* 0x10 */ ANI_CTRL *ctl;
	/* 0x20 */ float offset[4];
	/* 0x30 */ float rot[4];
	/* 0x40 */ RST_DATA rst;
	/* 0x70 */ void *func_dat[2];
	/* 0x78 */ int (*func)(/* parameters unknown */);
} MAP_ANIM_CTL;

struct fixed_array_base<MAP_ANIM_CTL,32,MAP_ANIM_CTL[32]> { // 0x1000
protected:
	/* 0x000 */ MAP_ANIM_CTL m_aData[32];
	
public:
	fixed_array_base<MAP_ANIM_CTL,32,MAP_ANIM_CTL[32]>& operator=();
	fixed_array_base();
protected:
	fixed_array_base();
public:
	MAP_ANIM_CTL& operator[]();
	MAP_ANIM_CTL& operator[]();
	MAP_ANIM_CTL* data();
	MAP_ANIM_CTL* begin();
	MAP_ANIM_CTL* end();
	void fill();
	size_t size();
	bool empty();
};

struct fixed_array<MAP_ANIM_CTL,32> : /* 0x000 */ fixed_array_base<MAP_ANIM_CTL,32,MAP_ANIM_CTL[32]> { // 0x1000
};

struct fixed_array_base<ANI_CTRL,2,ANI_CTRL[2]> { // 0x480
protected:
	/* 0x000 */ ANI_CTRL m_aData[2];
	
public:
	fixed_array_base<ANI_CTRL,2,ANI_CTRL[2]>& operator=();
	fixed_array_base();
protected:
	fixed_array_base();
public:
	ANI_CTRL& operator[]();
	ANI_CTRL& operator[]();
	ANI_CTRL* data();
	ANI_CTRL* begin();
	ANI_CTRL* end();
	void fill();
	size_t size();
	bool empty();
};

struct fixed_array<ANI_CTRL,2> : /* 0x000 */ fixed_array_base<ANI_CTRL,2,ANI_CTRL[2]> { // 0x480
};

struct MAPMANIM_MATRIX { // 0x50
	/* 0x00 */ short int flg;
	/* 0x02 */ short int anim_id;
	/* 0x04 */ int mat_id;
	/* 0x08 */ char *mot_addr;
	/* 0x0c */ MAPMANIM_MATRIX *next;
	/* 0x10 */ float mat[4][4];
};

typedef struct { // 0x14
	/* 0x00 */ int id;
	/* 0x04 */ int buff_id;
	/* 0x08 */ char *mdl_addr;
	/* 0x0c */ MAPMANIM_MATRIX *mat_addr;
	/* 0x10 */ int mat_num;
} MAPMANIM_HEAD;

struct fixed_array_base<MAPMANIM_MATRIX,255,MAPMANIM_MATRIX[255]> { // 0x4fb0
protected:
	/* 0x0000 */ MAPMANIM_MATRIX m_aData[255];
	
public:
	fixed_array_base<MAPMANIM_MATRIX,255,MAPMANIM_MATRIX[255]>& operator=();
	fixed_array_base();
protected:
	fixed_array_base();
public:
	MAPMANIM_MATRIX& operator[]();
	MAPMANIM_MATRIX& operator[]();
	MAPMANIM_MATRIX* data();
	MAPMANIM_MATRIX* begin();
	MAPMANIM_MATRIX* end();
	void fill();
	size_t size();
	bool empty();
};

struct fixed_array<MAPMANIM_MATRIX,255> : /* 0x0000 */ fixed_array_base<MAPMANIM_MATRIX,255,MAPMANIM_MATRIX[255]> { // 0x4fb0
};

struct fixed_array_base<MAPMANIM_HEAD,64,MAPMANIM_HEAD[64]> { // 0x500
protected:
	/* 0x000 */ MAPMANIM_HEAD m_aData[64];
	
public:
	fixed_array_base<MAPMANIM_HEAD,64,MAPMANIM_HEAD[64]>& operator=();
	fixed_array_base();
protected:
	fixed_array_base();
public:
	MAPMANIM_HEAD& operator[]();
	MAPMANIM_HEAD& operator[]();
	MAPMANIM_HEAD* data();
	MAPMANIM_HEAD* begin();
	MAPMANIM_HEAD* end();
	void fill();
	size_t size();
	bool empty();
};

struct fixed_array<MAPMANIM_HEAD,64> : /* 0x000 */ fixed_array_base<MAPMANIM_HEAD,64,MAPMANIM_HEAD[64]> { // 0x500
};

struct DEBUG_SUB_MENU { // 0x18
	/* 0x00 */ char *name;
	/* 0x04 */ u_int attr;
	/* 0x08 */ void *child;
	/* 0x0c */ float nmin;
	/* 0x10 */ float nmax;
	/* 0x14 */ float nadd;
};

struct DEBUG_MENU { // 0x1fc
	/* 0x000 */ void *parent;
	/* 0x004 */ int *off_num;
	/* 0x008 */ char *title;
	/* 0x00c */ DEBUG_SUB_MENU submenu[20];
	/* 0x1ec */ int mnum;
	/* 0x1f0 */ int kai;
	/* 0x1f4 */ int max;
	/* 0x1f8 */ int pos;
};

struct DEBUG_VAR { // 0xac
	/* 0x00 */ int hit_disp;
	/* 0x04 */ int ene_stop;
	/* 0x08 */ int fog_sw;
	/* 0x0c */ int near;
	/* 0x10 */ int far;
	/* 0x14 */ int min;
	/* 0x18 */ int max;
	/* 0x1c */ int fog_r;
	/* 0x20 */ int fog_g;
	/* 0x24 */ int fog_b;
	/* 0x28 */ int hi_spd;
	/* 0x2c */ int perf_count_sw;
	/* 0x30 */ int move_speed;
	/* 0x34 */ int cut_len;
	/* 0x38 */ int muteki;
	/* 0x3c */ int fl_sw;
	/* 0x40 */ float fl_intens;
	/* 0x44 */ float fl_range;
	/* 0x48 */ float fl_py;
	/* 0x4c */ float fl_pz;
	/* 0x50 */ float fl_y;
	/* 0x54 */ float fl_z;
	/* 0x58 */ int fl_line;
	/* 0x5c */ float flrf_y;
	/* 0x60 */ float flrf_z;
	/* 0x64 */ float flrf_range;
	/* 0x68 */ float flrf_si_rate;
	/* 0x6c */ float pl_amb;
	/* 0x70 */ float sis_para_r;
	/* 0x74 */ float sis_para_g;
	/* 0x78 */ float sis_para_b;
	/* 0x7c */ float fStaticDirLightColStepR;
	/* 0x80 */ float fStaticDirLightColStepG;
	/* 0x84 */ float fStaticDirLightColStepB;
	/* 0x88 */ float fYFlashlightStep;
	/* 0x8c */ float fRangeFlashlightStep;
	/* 0x90 */ float fl2_range;
	/* 0x94 */ int shadow_model_disp;
	/* 0x98 */ int sis_tr_point;
	/* 0x9c */ float dummy[4];
};

struct SISALG_WRK { // 0xb0
	/* 0x00 */ u_char job_no;
	/* 0x01 */ u_char pos_no;
	/* 0x02 */ u_char wait_time;
	/* 0x04 */ float loop[2];
	/* 0x10 */ P_INT comm_add;
	/* 0x18 */ long int comm_add_top;
	/* 0x20 */ long int data_addr;
	/* 0x28 */ u_long stack_b[16];
	/* 0xa8 */ u_long *stack_p;
	/* 0xac */ u_char flag;
};

struct SIS_WRK { // 0x250
	/* 0x000 */ PLCMN_WRK cmn_wrk;
	/* 0x110 */ SISALG_WRK alg;
	/* 0x1c0 */ u_char on;
	/* 0x1c1 */ u_char modedead;
	/* 0x1c2 */ u_char anime_no;
	/* 0x1c3 */ u_char trace_dist;
	/* 0x1c4 */ u_char trace_dist_bak;
	/* 0x1c6 */ u_short stop_tm;
	/* 0x1c8 */ u_short walk_tm;
	/* 0x1ca */ u_short run_tm;
	/* 0x1cc */ u_short scared_rcvr_tm;
	/* 0x1ce */ u_short dmg_tm;
	/* 0x1d0 */ u_short dmg_se_num;
	/* 0x1d2 */ u_short dmg_se_cnt;
	/* 0x1d4 */ u_short btl_recv_tm;
	/* 0x1d6 */ u_short push_se_tm;
	/* 0x1d8 */ u_short se_nanika2_tm;
	/* 0x1dc */ int se_deadly;
	/* 0x1e0 */ u_char se_matte;
	/* 0x1e1 */ u_char se_konaide;
	/* 0x1e2 */ u_short cower_tm;
	/* 0x1e4 */ u_short se_cower_cnt;
	/* 0x1e6 */ short int se_door_fl;
	/* 0x1e8 */ float pl_dist;
	/* 0x1f0 */ float wpos[4];
	/* 0x200 */ float spd[4];
	/* 0x210 */ float old_spd[4];
	/* 0x220 */ SND_3D_SET s3d;
	/* 0x230 */ float bwp[4];
	/* 0x240 */ int lock_cnt;
	/* 0x244 */ u_char join_flg;
};

struct SIS_ANI_TBL { // 0x4
	/* 0x0 */ u_char ani_no;
	/* 0x1 */ u_char frm;
	/* 0x2 */ short int loop;
};

typedef struct { // 0x1
	/* 0x0 */ u_char amode;
} SIS_ALG_WORK;

struct fixed_array_base<float[4],64,float[64][4]> { // 0x400
protected:
	/* 0x000 */ float m_aData[64][4];
	
public:
	fixed_array_base<float[4],64,float[64][4]>& operator=();
	fixed_array_base();
protected:
	fixed_array_base();
public:
	float&[4] operator[]();
	float&[4] operator[]();
	sceVu0FVECTOR* data();
	sceVu0FVECTOR* begin();
	sceVu0FVECTOR* end();
	void fill();
	size_t size();
	bool empty();
};

struct fixed_array<float[4],64> : /* 0x000 */ fixed_array_base<float[4],64,float[64][4]> { // 0x400
};

struct fixed_array_base<float,64,float[64]> { // 0x100
protected:
	/* 0x00 */ float m_aData[64];
	
public:
	fixed_array_base<float,64,float[64]>& operator=();
	fixed_array_base();
protected:
	fixed_array_base();
public:
	float& operator[]();
	float& operator[]();
	float* data();
	float* begin();
	float* end();
	void fill();
	size_t size();
	bool empty();
};

struct fixed_array<float,64> : /* 0x00 */ fixed_array_base<float,64,float[64]> { // 0x100
};

struct fixed_array_base<unsigned char,64,unsigned char[64]> { // 0x40
protected:
	/* 0x00 */ u_char m_aData[64];
	
public:
	fixed_array_base<unsigned char,64,unsigned char[64]>& operator=();
	fixed_array_base();
protected:
	fixed_array_base();
public:
	u_char& operator[]();
	u_char& operator[]();
	u_char* data();
	u_char* begin();
	u_char* end();
	void fill();
	size_t size();
	bool empty();
};

struct fixed_array<unsigned char,64> : /* 0x00 */ fixed_array_base<unsigned char,64,unsigned char[64]> { // 0x40
};

struct SIS_TRACE { // 0x5c0
	/* 0x000 */ int top;
	/* 0x004 */ int now;
	/* 0x008 */ int num;
	/* 0x00c */ int cnt;
	/* 0x010 */ float trgt[4];
	/* 0x020 */ int trgt_floor;
	/* 0x030 */ float vwpos[4];
	/* 0x040 */ int push_tm;
	/* 0x044 */ int push_cnt;
	/* 0x048 */ int push;
	/* 0x04c */ int push_dir;
	/* 0x050 */ int push_pldir;
	/* 0x054 */ float push_dist;
	/* 0x058 */ float push_rot;
	/* 0x05c */ float push_orot;
	/* 0x060 */ u_char view_hit;
	/* 0x064 */ float dist;
	/* 0x068 */ float wsdist;
	/* 0x06c */ float wedist;
	/* 0x070 */ float rsdist;
	/* 0x074 */ float redist;
	/* 0x080 */ fixed_array<float[4],64> p;
	/* 0x480 */ fixed_array<float,64> l;
	/* 0x580 */ fixed_array<unsigned char,64> fl;
};

struct G3DDMACHAINTAG { // 0x10
	/* 0x0:0 */ long unsigned int QWC : 16;
	/* 0x2:0 */ long unsigned int pad0 : 10;
	/* 0x3:2 */ long unsigned int PCE : 2;
	/* 0x3:4 */ long unsigned int ID : 3;
	/* 0x3:7 */ long unsigned int IRQ : 1;
	/* 0x4:0 */ long unsigned int ADDR : 31;
	/* 0x7:7 */ long unsigned int SPR : 1;
	/* 0x8 */ long unsigned int pad1;
};

struct G3DDMACREATIONDATA { // 0x8
	/* 0x0 */ unsigned int uiBufferTop;
	/* 0x4 */ unsigned int uiBufferSize;
};

struct OBJ_DRAW_FLG { // 0x24
	/* 0x00 */ int player;
	/* 0x04 */ int sister;
	/* 0x08 */ int enemy;
	/* 0x0c */ int effect;
	/* 0x10 */ int room;
	/* 0x14 */ int obj;
	/* 0x18 */ int sky;
	/* 0x1c */ int shadow;
	/* 0x20 */ int shadow_src;
};

typedef struct { // 0x14
	/* 0x00 */ int id;
	/* 0x04 */ int flg;
	/* 0x08 */ int stat;
	/* 0x0c */ int key;
	/* 0x10 */ float *rec;
} MAPHIT_HEAD;

typedef struct { // 0xc
	/* 0x0 */ float *pos[4];
	/* 0x4 */ float r;
	/* 0x8 */ int call_work;
} MAPHIT_DAT;

enum _AUTO_BD_ERR {
	AUTO_BD_ERR_OK = 0,
	AUTO_BD_ERR_NO_WRK = 1
};

typedef _AUTO_BD_ERR AUTO_BD_ERR;

struct fixed_array_base<int,2,int[2]> { // 0x8
protected:
	/* 0x0 */ int m_aData[2];
	
public:
	fixed_array_base<int,2,int[2]>& operator=();
	fixed_array_base();
protected:
	fixed_array_base();
public:
	int& operator[]();
	int& operator[]();
	int* data();
	int* begin();
	int* end();
	void fill();
	size_t size();
	bool empty();
};

struct fixed_array<int,2> : /* 0x0 */ fixed_array_base<int,2,int[2]> { // 0x8
};

struct fixed_array_base<MDAT_DOOR *,2,MDAT_DOOR *[2]> { // 0x8
protected:
	/* 0x0 */ MDAT_DOOR *m_aData[2];
	
public:
	fixed_array_base<MDAT_DOOR *,2,MDAT_DOOR *[2]>& operator=();
	fixed_array_base();
protected:
	fixed_array_base();
public:
	MDAT_DOOR*& operator[]();
	MDAT_DOOR*& operator[]();
	MDAT_DOOR** data();
	MDAT_DOOR** begin();
	MDAT_DOOR** end();
	void fill();
	size_t size();
	bool empty();
};

struct fixed_array<MDAT_DOOR *,2> : /* 0x0 */ fixed_array_base<MDAT_DOOR *,2,MDAT_DOOR *[2]> { // 0x8
};

typedef struct { // 0x14
	/* 0x00 */ fixed_array<int,2> buff_id;
	/* 0x08 */ fixed_array<MDAT_DOOR *,2> dat;
	/* 0x10 */ void *hdl;
} MAPDOOR_HEAD;

struct fixed_array_base<MAPDOOR_HEAD,16,MAPDOOR_HEAD[16]> { // 0x140
protected:
	/* 0x000 */ MAPDOOR_HEAD m_aData[16];
	
public:
	fixed_array_base<MAPDOOR_HEAD,16,MAPDOOR_HEAD[16]>& operator=();
	fixed_array_base();
protected:
	fixed_array_base();
public:
	MAPDOOR_HEAD& operator[]();
	MAPDOOR_HEAD& operator[]();
	MAPDOOR_HEAD* data();
	MAPDOOR_HEAD* begin();
	MAPDOOR_HEAD* end();
	void fill();
	size_t size();
	bool empty();
};

struct fixed_array<MAPDOOR_HEAD,16> : /* 0x000 */ fixed_array_base<MAPDOOR_HEAD,16,MAPDOOR_HEAD[16]> { // 0x140
};

typedef struct { // 0x6
	/* 0x0 */ char label;
	/* 0x1 */ char cRFlg;
	/* 0x2 */ char anim[2];
	/* 0x4 */ char type[2];
} MAPDOOR_SEL;

enum HAZE_ALL_VELOCITY_STATUS {
	HAZE_ALL_VELOCITY_TYPE1 = 0,
	HAZE_ALL_VELOCITY_TYPE1_TO_2 = 1,
	HAZE_ALL_VELOCITY_TYPE2 = 2,
	HAZE_ALL_VELOCITY_TYPE2_TO_3 = 3,
	HAZE_ALL_VELOCITY_TYPE3 = 4,
	HAZE_ALL_VELOCITY_TYPE3_TO_1 = 5
};

enum HAZE_PARAMETER_TYPE {
	HAZE_PARAMETER_NORMAL = 0,
	HAZE_PARAMETER_KUSABI = 1,
	HAZE_PARAMETER_SAE = 2
};

enum ITEM_EFFECT_TYPE {
	ITEM_EFFECT_TYPE00 = 0,
	ITEM_EFFECT_TYPE01 = 1
};

typedef struct { // 0x50
	/* 0x00 */ int fl;
	/* 0x04 */ u_char r;
	/* 0x05 */ u_char g;
	/* 0x06 */ u_char b;
	/* 0x07 */ u_char a;
	/* 0x08 */ float mang;
	/* 0x0c */ float cnt;
	/* 0x10 */ float pos[4];
	/* 0x20 */ float opos[4];
	/* 0x30 */ float vel[4];
	/* 0x40 */ float ang[4];
} EFF_LEAF_ONE;

struct fixed_array_base<EFF_LEAF_ONE,16,EFF_LEAF_ONE[16]> { // 0x500
protected:
	/* 0x000 */ EFF_LEAF_ONE m_aData[16];
	
public:
	fixed_array_base<EFF_LEAF_ONE,16,EFF_LEAF_ONE[16]>& operator=();
	fixed_array_base();
protected:
	fixed_array_base();
public:
	EFF_LEAF_ONE& operator[]();
	EFF_LEAF_ONE& operator[]();
	EFF_LEAF_ONE* data();
	EFF_LEAF_ONE* begin();
	EFF_LEAF_ONE* end();
	void fill();
	size_t size();
	bool empty();
};

struct fixed_array<EFF_LEAF_ONE,16> : /* 0x000 */ fixed_array_base<EFF_LEAF_ONE,16,EFF_LEAF_ONE[16]> { // 0x500
};

typedef struct { // 0x520
	/* 0x000 */ int flag;
	/* 0x004 */ int type;
	/* 0x010 */ float bpos[4];
	/* 0x020 */ fixed_array<EFF_LEAF_ONE,16> lo;
} EFF_LEAF;

typedef struct { // 0x50
	/* 0x00 */ float position[4];
	/* 0x10 */ float color[4];
	/* 0x20 */ float velocity[4];
	/* 0x30 */ float acceleration[4];
	/* 0x40 */ float alp_step;
	/* 0x44 */ int lifetime;
	/* 0x48 */ int BaseLifeTime;
	/* 0x4c */ float Scale;
} PARTICLE;

struct fixed_array_base<PARTICLE,200,PARTICLE[200]> { // 0x3e80
protected:
	/* 0x0000 */ PARTICLE m_aData[200];
	
public:
	fixed_array_base<PARTICLE,200,PARTICLE[200]>& operator=();
	fixed_array_base();
protected:
	fixed_array_base();
public:
	PARTICLE& operator[]();
	PARTICLE& operator[]();
	PARTICLE* data();
	PARTICLE* begin();
	PARTICLE* end();
	void fill();
	size_t size();
	bool empty();
};

struct fixed_array<PARTICLE,200> : /* 0x0000 */ fixed_array_base<PARTICLE,200,PARTICLE[200]> { // 0x3e80
};

typedef struct { // 0x3e90
	/* 0x0000 */ fixed_array<PARTICLE,200> particles;
	/* 0x3e80 */ int head;
	/* 0x3e84 */ int cnt;
	/* 0x3e88 */ short int flag;
	/* 0x3e8a */ short int max;
	/* 0x3e8c */ short int disp;
	/* 0x3e8e */ short int blife;
} HEAT_HAZE;

struct fixed_array_base<PARTICLE,30,PARTICLE[30]> { // 0x960
protected:
	/* 0x000 */ PARTICLE m_aData[30];
	
public:
	fixed_array_base<PARTICLE,30,PARTICLE[30]>& operator=();
	fixed_array_base();
protected:
	fixed_array_base();
public:
	PARTICLE& operator[]();
	PARTICLE& operator[]();
	PARTICLE* data();
	PARTICLE* begin();
	PARTICLE* end();
	void fill();
	size_t size();
	bool empty();
};

struct fixed_array<PARTICLE,30> : /* 0x000 */ fixed_array_base<PARTICLE,30,PARTICLE[30]> { // 0x960
};

typedef struct { // 0x990
	/* 0x000 */ fixed_array<PARTICLE,30> particles;
	/* 0x960 */ float Pos[4];
	/* 0x970 */ int head;
	/* 0x974 */ int cnt;
	/* 0x978 */ short int max;
	/* 0x97a */ short int disp;
	/* 0x97c */ short int blife;
	/* 0x980 */ float BrakeRate;
} CLOUD_OF_DUST_CTRL;

typedef struct { // 0xa8
	/* 0x00 */ int AreaRadius;
	/* 0x04 */ int MaxY;
	/* 0x08 */ int MinY;
	/* 0x0c */ int Frequency;
	/* 0x10 */ int SpeedXMax;
	/* 0x14 */ int SpeedXMin;
	/* 0x18 */ int SpeedYMax;
	/* 0x1c */ int SpeedYMin;
	/* 0x20 */ int SpeedZMax;
	/* 0x24 */ int SpeedZMin;
	/* 0x28 */ int AllSpeedX_1;
	/* 0x2c */ int AllSpeedY_1;
	/* 0x30 */ int AllSpeedZ_1;
	/* 0x34 */ int AllSpeedX_2;
	/* 0x38 */ int AllSpeedY_2;
	/* 0x3c */ int AllSpeedZ_2;
	/* 0x40 */ int AllSpeedX_3;
	/* 0x44 */ int AllSpeedY_3;
	/* 0x48 */ int AllSpeedZ_3;
	/* 0x4c */ int AllSpeedTime_1;
	/* 0x50 */ int AllSpeedTime_2;
	/* 0x54 */ int AllSpeedTime_3;
	/* 0x58 */ int Alpha;
	/* 0x5c */ int AlphaInTime;
	/* 0x60 */ int AlphaKeepTime;
	/* 0x64 */ int AlphaOutTime;
	/* 0x68 */ int StartScale;
	/* 0x6c */ int EndScale;
	/* 0x70 */ int R;
	/* 0x74 */ int G;
	/* 0x78 */ int B;
	/* 0x7c */ int RotZMax;
	/* 0x80 */ int RotZMin;
	/* 0x84 */ int RotZTime;
	/* 0x88 */ int AlphaBlendA;
	/* 0x8c */ int AlphaBlendB;
	/* 0x90 */ int AlphaBlendC;
	/* 0x94 */ int AlphaBlendD;
	/* 0x98 */ int AlphaBlendFIX;
	/* 0x9c */ int OffsetX;
	/* 0xa0 */ int OffsetY;
	/* 0xa4 */ int OffsetZ;
} HAZE_PARAMETER;

typedef struct { // 0x40
	/* 0x00 */ float Position[4];
	/* 0x10 */ float Velocity[4];
	/* 0x20 */ int Lifetime;
	/* 0x24 */ int Alpha;
	/* 0x28 */ float Scale;
	/* 0x2c */ float RotZ;
	/* 0x30 */ float RotZSpeed;
} HAZE_PARTICLE;

struct fixed_array_base<HAZE_PARTICLE,64,HAZE_PARTICLE[64]> { // 0x1000
protected:
	/* 0x000 */ HAZE_PARTICLE m_aData[64];
	
public:
	fixed_array_base<HAZE_PARTICLE,64,HAZE_PARTICLE[64]>& operator=();
	fixed_array_base();
protected:
	fixed_array_base();
public:
	HAZE_PARTICLE& operator[]();
	HAZE_PARTICLE& operator[]();
	HAZE_PARTICLE* data();
	HAZE_PARTICLE* begin();
	HAZE_PARTICLE* end();
	void fill();
	size_t size();
	bool empty();
};

struct fixed_array<HAZE_PARTICLE,64> : /* 0x000 */ fixed_array_base<HAZE_PARTICLE,64,HAZE_PARTICLE[64]> { // 0x1000
};

typedef struct { // 0x1020
	/* 0x0000 */ fixed_array<HAZE_PARTICLE,64> Particles;
	/* 0x1000 */ sceVu0FVECTOR *pPos;
	/* 0x1004 */ sceVu0FVECTOR *pRot;
	/* 0x1008 */ float *pAlphaRate;
	/* 0x100c */ int AllVelocityTime;
	/* 0x1010 */ int AllVelocityStatus;
	/* 0x1014 */ int Id;
	/* 0x1018 */ short int disp;
	/* 0x101a */ short int Type;
} HAZE_CTRL;

typedef struct { // 0x40
	/* 0x00 */ float npos[4];
	/* 0x10 */ sceVu0FVECTOR *oposp;
	/* 0x14 */ float *wmtxp[4][4];
	/* 0x18 */ int time;
	/* 0x1c */ short int top;
	/* 0x1e */ short int num;
	/* 0x20 */ float xp;
	/* 0x24 */ float xm;
	/* 0x28 */ float rot;
	/* 0x2c */ float rotp;
	/* 0x30 */ float x;
	/* 0x34 */ float y;
	/* 0x38 */ float n;
	/* 0x3c */ float cnt;
} NEW_PERTICLE;

typedef struct { // 0x20
	/* 0x00 */ float Position[4];
	/* 0x10 */ int Alpha;
	/* 0x14 */ int FreaAlpha;
	/* 0x18 */ int Count;
} MANY_CANDLE_PARTICLE;

struct fixed_array_base<MANY_CANDLE_PARTICLE,120,MANY_CANDLE_PARTICLE[120]> { // 0xf00
protected:
	/* 0x000 */ MANY_CANDLE_PARTICLE m_aData[120];
	
public:
	fixed_array_base<MANY_CANDLE_PARTICLE,120,MANY_CANDLE_PARTICLE[120]>& operator=();
	fixed_array_base();
protected:
	fixed_array_base();
public:
	MANY_CANDLE_PARTICLE& operator[]();
	MANY_CANDLE_PARTICLE& operator[]();
	MANY_CANDLE_PARTICLE* data();
	MANY_CANDLE_PARTICLE* begin();
	MANY_CANDLE_PARTICLE* end();
	void fill();
	size_t size();
	bool empty();
};

struct fixed_array<MANY_CANDLE_PARTICLE,120> : /* 0x000 */ fixed_array_base<MANY_CANDLE_PARTICLE,120,MANY_CANDLE_PARTICLE[120]> { // 0xf00
};

typedef struct { // 0xf30
	/* 0x000 */ fixed_array<MANY_CANDLE_PARTICLE,120> Particles;
	/* 0xf00 */ float CenterPos[4];
	/* 0xf10 */ int Id;
	/* 0xf14 */ int R;
	/* 0xf18 */ int G;
	/* 0xf1c */ int B;
	/* 0xf20 */ int DataNum;
} MANY_CANDLE_CTRL;

struct DEBUG_LIGHT { // 0x18
	/* 0x00 */ int save;
	/* 0x04 */ int load;
	/* 0x08 */ int camera_sw;
	/* 0x0c */ int line_sw;
	/* 0x10 */ int bSavePrelightedMap;
	/* 0x14 */ int bSavePrelightedMapAll;
};

struct FOG_WRK { // 0x14
	/* 0x00 */ float min;
	/* 0x04 */ float max;
	/* 0x08 */ float near;
	/* 0x0c */ float far;
	/* 0x10 */ u_char r;
	/* 0x11 */ u_char g;
	/* 0x12 */ u_char b;
};

typedef struct { // 0x28
	/* 0x00 */ int buf_id;
	/* 0x04 */ int id_num;
	/* 0x08 */ int id_list[8];
} MapRecBufCtrl;

typedef struct { // 0x64
	/* 0x00 */ int id_num;
	/* 0x04 */ int rec_num_list[8];
	/* 0x24 */ int buf_ids[8];
	/* 0x44 */ MB_OUT_RECT *rec_list[8];
} MapRecInfo;

typedef struct { // 0x28
	/* 0x00 */ float hight;
	/* 0x04 */ float scale_min;
	/* 0x08 */ float scale_max;
	/* 0x0c */ float scale_now;
	/* 0x10 */ int frame_now;
	/* 0x14 */ int frame;
	/* 0x18 */ int fr;
	/* 0x1c */ int fg;
	/* 0x20 */ int fb;
	/* 0x24 */ int fa;
} MAP_SKY_ST;

typedef struct { // 0xa0
	/* 0x00 */ float len;
	/* 0x04 */ float speed;
	/* 0x08 */ float offset_y;
	/* 0x0c */ int offset_y2;
	/* 0x10 */ int move_y;
	/* 0x14 */ float scale;
	/* 0x18 */ int fog_r;
	/* 0x1c */ int fog_g;
	/* 0x20 */ int fog_b;
	/* 0x24 */ int fog_al;
	/* 0x28 */ MAP_SKY_ST sky_stat[3];
} MAP_SKY_DB;

typedef struct { // 0x1c
	/* 0x00 */ int r;
	/* 0x04 */ int g;
	/* 0x08 */ int b;
	/* 0x0c */ int near;
	/* 0x10 */ int far;
	/* 0x14 */ int min;
	/* 0x18 */ int max;
} MAP_FOG_HEAD;

struct fixed_array_base<MAPHIT_HEAD,32,MAPHIT_HEAD[32]> { // 0x280
protected:
	/* 0x000 */ MAPHIT_HEAD m_aData[32];
	
public:
	fixed_array_base<MAPHIT_HEAD,32,MAPHIT_HEAD[32]>& operator=();
	fixed_array_base();
protected:
	fixed_array_base();
public:
	MAPHIT_HEAD& operator[]();
	MAPHIT_HEAD& operator[]();
	MAPHIT_HEAD* data();
	MAPHIT_HEAD* begin();
	MAPHIT_HEAD* end();
	void fill();
	size_t size();
	bool empty();
};

struct fixed_array<MAPHIT_HEAD,32> : /* 0x000 */ fixed_array_base<MAPHIT_HEAD,32,MAPHIT_HEAD[32]> { // 0x280
};

typedef struct { // 0xc
	/* 0x0 */ int labelID;
	/* 0x4 */ int cnt;
	/* 0x8 */ int stat;
} MAP_LBUFF_ST;

typedef struct { // 0x14
	/* 0x00 */ int max;
	/* 0x04 */ int frame[4];
} MAPMEI_FRAME;

typedef struct { // 0x10
	/* 0x0 */ int flg;
	/* 0x4 */ G3DLIGHT *addr;
	/* 0x8 */ GRA3DLIGHTSTATUS *st_addr;
	/* 0xc */ float power;
} MAP_LIGHT_SORT;

typedef struct { // 0x90
	/* 0x00 */ int flg;
	/* 0x10 */ G3DLIGHT ldat;
	/* 0x80 */ GRA3DLIGHTSTATUS lstat;
} MAP_LIGHT_DAT;

typedef struct { // 0x8
	/* 0x0 */ int iFlg;
	/* 0x4 */ float fPow;
} MAP_LIGHT_HEAD;

typedef struct { // 0x10
	/* 0x0 */ MAPMEI_FRAME *top_dat_p;
	/* 0x4 */ MAPMEI_FRAME *now_dat_p;
	/* 0x8 */ int stat;
	/* 0xc */ int frame;
} MAPMEI_HEAD;

typedef struct { // 0x80
	/* 0x00 */ G3DLIGHT *lip;
	/* 0x10 */ G3DLIGHT m_light;
} MAPMEI_LIGHTONE;

struct C_PERFORMANCE_MEASURE { // 0x4
private:
	/* 0x0 */ int m_MarkCnt;
	
public:
	C_PERFORMANCE_MEASURE& operator=();
	C_PERFORMANCE_MEASURE();
	C_PERFORMANCE_MEASURE();
	void FrameStart();
	int Get();
	void SetMark();
	int GetFromMark();
};

struct C_ZERO2_PERF_CNT { // 0x8
private:
	/* 0x0 */ int m_NowCnt;
	/* 0x4 */ C_PERFORMANCE_MEASURE c_performance_measure;
	
public:
	C_ZERO2_PERF_CNT& operator=();
	C_ZERO2_PERF_CNT();
	C_ZERO2_PERF_CNT();
	void FrameInit();
	void SetMark();
	void AddDraw();
	float GetPercent();
	float GetPercentFromMark();
};

struct CZero2PerfDisplay { // 0x8
private:
	/* 0x0 */ char *m_pFuncName;
	/* 0x4 */ int m_iLine;
};

struct fixed_array_base<MLOAD_HEAD,2,MLOAD_HEAD[2]> { // 0x27e0
protected:
	/* 0x0000 */ MLOAD_HEAD m_aData[2];
	
public:
	fixed_array_base<MLOAD_HEAD,2,MLOAD_HEAD[2]>& operator=();
	fixed_array_base();
protected:
	fixed_array_base();
public:
	MLOAD_HEAD& operator[]();
	MLOAD_HEAD& operator[]();
	MLOAD_HEAD* data();
	MLOAD_HEAD* begin();
	MLOAD_HEAD* end();
	void fill();
	size_t size();
	bool empty();
};

struct fixed_array<MLOAD_HEAD,2> : /* 0x0000 */ fixed_array_base<MLOAD_HEAD,2,MLOAD_HEAD[2]> { // 0x27e0
};

enum ENE_HIT_EFFECT_LABEL {
	ENE_HIT_EFFECT_SMALL = 0,
	ENE_HIT_EFFECT_LARGE = 1,
	ENE_HIT_EFFECT_SP = 2,
	ENE_HIT_EFFECT_SLOW = 3,
	ENE_HIT_EFFECT_ZERO = 4,
	ENE_HIT_EFFECT_ZERO_SC = 5,
	ENE_HIT_EFFECT_ZERO_SP = 6,
	ENE_HIT_EFFECT_KOKU = 7,
	ENE_HIT_EFFECT_KOKU_SC = 8,
	ENE_HIT_EFFECT_KOKU_SP = 9,
	ENE_HIT_EFFECT_PARALYZE = 10,
	ENE_HIT_EFFECT_VIEW = 11,
	ENE_HIT_EFFECT_METSU = 12,
	ENE_HIT_EFFECT_METSU_SC = 13,
	ENE_HIT_EFFECT_METSU_SP = 14,
	ENE_HIT_EFFECT_REN = 15,
	ENE_HIT_EFFECT_REN_SC = 16,
	ENE_HIT_EFFECT_REN_SP = 17,
	ENE_HIT_EFFECT_TSUI = 18,
	ENE_HIT_EFFECT_FUU = 19
};

enum ENUM_ENE_DMG_LARGE_HIT {
	ENE_DMG_LARGE_HIT_SMALL = 0,
	ENE_DMG_LARGE_HIT_LARGE = 1,
	ENE_DMG_LARGE_HIT_SP_A = 2,
	ENE_DMG_LARGE_HIT_SP_B = 3,
	ENE_DMG_LARGE_HIT_SLOW_A = 4,
	ENE_DMG_LARGE_HIT_SLOW_B = 5,
	ENE_DMG_LARGE_HIT_ZERO_A = 6,
	ENE_DMG_LARGE_HIT_ZERO_B = 7,
	ENE_DMG_LARGE_HIT_ZERO_SC_A = 8,
	ENE_DMG_LARGE_HIT_ZERO_SC_B = 9,
	ENE_DMG_LARGE_HIT_ZERO_SP_A = 10,
	ENE_DMG_LARGE_HIT_ZERO_SP_B = 11,
	ENE_DMG_LARGE_HIT_KOKU_A = 12,
	ENE_DMG_LARGE_HIT_KOKU_B = 13,
	ENE_DMG_LARGE_HIT_KOKU_SC_A = 14,
	ENE_DMG_LARGE_HIT_KOKU_SC_B = 15,
	ENE_DMG_LARGE_HIT_KOKU_SP_A = 16,
	ENE_DMG_LARGE_HIT_KOKU_SP_B = 17,
	ENE_DMG_LARGE_HIT_PARALYZE_A = 18,
	ENE_DMG_LARGE_HIT_PARALYZE_B = 19,
	ENE_DMG_LARGE_HIT_VIEW_A = 20,
	ENE_DMG_LARGE_HIT_VIEW_B = 21,
	ENE_DMG_LARGE_HIT_METSU_A = 22,
	ENE_DMG_LARGE_HIT_METSU_B = 23,
	ENE_DMG_LARGE_HIT_METSU_SC_A = 24,
	ENE_DMG_LARGE_HIT_METSU_SC_B = 25,
	ENE_DMG_LARGE_HIT_METSU_SP_A = 26,
	ENE_DMG_LARGE_HIT_METSU_SP_B = 27,
	ENE_DMG_LARGE_HIT_REN_A = 28,
	ENE_DMG_LARGE_HIT_REN_B = 29,
	ENE_DMG_LARGE_HIT_REN_SC_A = 30,
	ENE_DMG_LARGE_HIT_REN_SC_B = 31,
	ENE_DMG_LARGE_HIT_REN_SP_A = 32,
	ENE_DMG_LARGE_HIT_REN_SP_B = 33,
	ENE_DMG_LARGE_HIT_TSUI_A = 34,
	ENE_DMG_LARGE_HIT_TSUI_B = 35,
	ENE_DMG_LARGE_HIT_FUU_A = 36,
	ENE_DMG_LARGE_HIT_FUU_B = 37
};

enum ENE_DMG_PARTICLE_TYPE {
	ENE_DMG_PARTICLE_TYPE_HIT_DAMAGE = 0,
	ENE_DMG_PARTICLE_TYPE_EFFECT_END = 1
};

enum EFFECT_END_PARTICLE_TYPE {
	EFFECT_END_PARTICLE_SLOW = 0,
	EFFECT_END_PARTICLE_PARALYZE = 1,
	EFFECT_END_PARTICLE_VIEW = 2,
	EFFECT_END_PARTICLE_TSUI = 3,
	EFFECT_END_PARTICLE_FUU = 4,
	EFFECT_END_PARTICLE_TYPE_NUM = 5
};

struct fixed_array_base<float[4],2,float[2][4]> { // 0x20
protected:
	/* 0x00 */ float m_aData[2][4];
	
public:
	fixed_array_base<float[4],2,float[2][4]>& operator=();
	fixed_array_base();
protected:
	fixed_array_base();
public:
	float&[4] operator[]();
	float&[4] operator[]();
	sceVu0FVECTOR* data();
	sceVu0FVECTOR* begin();
	sceVu0FVECTOR* end();
	void fill();
	size_t size();
	bool empty();
};

struct fixed_array<float[4],2> : /* 0x00 */ fixed_array_base<float[4],2,float[2][4]> { // 0x20
};

struct fixed_array_base<float,4,float[4]> { // 0x10
protected:
	/* 0x0 */ float m_aData[4];
	
public:
	fixed_array_base<float,4,float[4]>& operator=();
	fixed_array_base();
protected:
	fixed_array_base();
public:
	float& operator[]();
	float& operator[]();
	float* data();
	float* begin();
	float* end();
	void fill();
	size_t size();
	bool empty();
};

struct fixed_array<float,4> : /* 0x0 */ fixed_array_base<float,4,float[4]> { // 0x10
};

struct fixed_array_base<int,4,int[4]> { // 0x10
protected:
	/* 0x0 */ int m_aData[4];
	
public:
	fixed_array_base<int,4,int[4]>& operator=();
	fixed_array_base();
protected:
	fixed_array_base();
public:
	int& operator[]();
	int& operator[]();
	int* data();
	int* begin();
	int* end();
	void fill();
	size_t size();
	bool empty();
};

struct fixed_array<int,4> : /* 0x0 */ fixed_array_base<int,4,int[4]> { // 0x10
};

typedef struct { // 0x90
	/* 0x00 */ fixed_array<float[4],2> wbpos;
	/* 0x20 */ fixed_array<float,4> scw;
	/* 0x30 */ fixed_array<float,4> sch;
	/* 0x40 */ fixed_array<float,4> rot_z;
	/* 0x50 */ fixed_array<float,4> alp;
	/* 0x60 */ fixed_array<int,4> cnt;
	/* 0x70 */ fixed_array<int,4> flow;
	/* 0x80 */ int enedmg_no;
	/* 0x84 */ int enedmg1_flg;
	/* 0x88 */ int enedmg_chance;
	/* 0x8c */ int dummy;
} ENDMG1;

typedef struct { // 0xc
	/* 0x0 */ int enedmg_no;
	/* 0x4 */ int enedmg2_flg;
	/* 0x8 */ int enedmg_chance;
} ENDMG2;

typedef struct { // 0x5c
	/* 0x00 */ int CenterRgba[4];
	/* 0x10 */ int OutsideRgba[4];
	/* 0x20 */ int VertexNumW;
	/* 0x24 */ int VertexNumH;
	/* 0x28 */ int Size;
	/* 0x2c */ int LastScale;
	/* 0x30 */ int AllFrame;
	/* 0x34 */ int MoveDist;
	/* 0x38 */ int Distance;
	/* 0x3c */ int RotVal;
	/* 0x40 */ int CaptureInterval;
	/* 0x44 */ int CaptureNumber;
	/* 0x48 */ int AlphaBlendA;
	/* 0x4c */ int AlphaBlendB;
	/* 0x50 */ int AlphaBlendC;
	/* 0x54 */ int AlphaBlendD;
	/* 0x58 */ int AlphaBlendFIX;
} ENE_DMG_LARGE_HIT_PARAMETER;

typedef struct { // 0x50
	/* 0x00 */ int StartFrame;
	/* 0x04 */ int InTime;
	/* 0x08 */ int KeepTime;
	/* 0x0c */ int OutTime;
	/* 0x10 */ int MinBlurScale;
	/* 0x14 */ int MaxBlurScale;
	/* 0x18 */ int MinBlurAlpha;
	/* 0x1c */ int MaxBlurAlpha;
	/* 0x20 */ int MinBlurRot;
	/* 0x24 */ int MaxBlurRot;
	/* 0x28 */ int BlurOnFlg;
	/* 0x2c */ int MinContrastColor;
	/* 0x30 */ int MaxContrastColor;
	/* 0x34 */ int MinContrastAlpha;
	/* 0x38 */ int MaxContrastAlpha;
	/* 0x3c */ int ContrastOnFlg;
	/* 0x40 */ int CameraShakeOnFlg;
	/* 0x44 */ int CameraShakeFrame;
	/* 0x48 */ int PadVibrateOnFlg;
	/* 0x4c */ int PadVibrateFrame;
} ENE_DMG_BLUR_CONTRAST_PARAMETER;

struct fixed_array_base<unsigned char,4,unsigned char[4]> { // 0x4
protected:
	/* 0x0 */ u_char m_aData[4];
	
public:
	fixed_array_base<unsigned char,4,unsigned char[4]>& operator=();
	fixed_array_base();
protected:
	fixed_array_base();
public:
	u_char& operator[]();
	u_char& operator[]();
	u_char* data();
	u_char* begin();
	u_char* end();
	void fill();
	size_t size();
	bool empty();
};

struct fixed_array<unsigned char,4> : /* 0x0 */ fixed_array_base<unsigned char,4,unsigned char[4]> { // 0x4
};

typedef struct { // 0x60
	/* 0x00 */ float CenterPos[4];
	/* 0x10 */ long int AlphaBlend;
	/* 0x18 */ float Scale;
	/* 0x1c */ float LastScale;
	/* 0x20 */ float MoveDist;
	/* 0x24 */ float Distance;
	/* 0x28 */ float RotVal;
	/* 0x2c */ u_int VertexNumW;
	/* 0x30 */ u_int VertexNumH;
	/* 0x34 */ u_int NowFrame;
	/* 0x38 */ u_int AllFrame;
	/* 0x3c */ u_int CaptureInterval;
	/* 0x40 */ u_int CaptureNumber;
	/* 0x44 */ fixed_array<unsigned char,4> CenterRgba;
	/* 0x48 */ fixed_array<unsigned char,4> OutsideRgba;
	/* 0x4c */ u_int InitCenterAlpha;
	/* 0x50 */ u_int InitOutsideAlpha;
	/* 0x54 */ int Delay;
} ENE_DMG_LARGE_HIT;

struct fixed_array_base<ENE_DMG_LARGE_HIT,2,ENE_DMG_LARGE_HIT[2]> { // 0xc0
protected:
	/* 0x00 */ ENE_DMG_LARGE_HIT m_aData[2];
	
public:
	fixed_array_base<ENE_DMG_LARGE_HIT,2,ENE_DMG_LARGE_HIT[2]>& operator=();
	fixed_array_base();
protected:
	fixed_array_base();
public:
	ENE_DMG_LARGE_HIT& operator[]();
	ENE_DMG_LARGE_HIT& operator[]();
	ENE_DMG_LARGE_HIT* data();
	ENE_DMG_LARGE_HIT* begin();
	ENE_DMG_LARGE_HIT* end();
	void fill();
	size_t size();
	bool empty();
};

struct fixed_array<ENE_DMG_LARGE_HIT,2> : /* 0x00 */ fixed_array_base<ENE_DMG_LARGE_HIT,2,ENE_DMG_LARGE_HIT[2]> { // 0xc0
};

typedef struct { // 0xd0
	/* 0x00 */ fixed_array<ENE_DMG_LARGE_HIT,2> Work;
	/* 0xc0 */ fixed_array<int,2> Status;
} ENE_DMG_LARGE_HIT_CTRL;

typedef struct { // 0x50
	/* 0x00 */ float Center[4];
	/* 0x10 */ float rpos[4];
	/* 0x20 */ float rrad;
	/* 0x24 */ float rrot;
	/* 0x28 */ float racc;
	/* 0x2c */ float rbrk;
	/* 0x30 */ float ralp;
	/* 0x34 */ float rrad_max;
	/* 0x38 */ float cnt_f;
	/* 0x3c */ float cnt_spd;
	/* 0x40 */ float rot_spd;
	/* 0x44 */ int anm_count;
	/* 0x48 */ float AlphaRate;
} ENEDMG_PARTICLE_ONE;

struct fixed_array_base<float[4][4],10,float[10][4][4]> { // 0x280
protected:
	/* 0x000 */ float m_aData[10][4][4];
	
public:
	fixed_array_base<float[4][4],10,float[10][4][4]>& operator=();
	fixed_array_base();
protected:
	fixed_array_base();
public:
	float&[4][4] operator[]();
	float&[4][4] operator[]();
	float*[4][4] data();
	float*[4][4] begin();
	float*[4][4] end();
	void fill();
	size_t size();
	bool empty();
};

struct fixed_array<float[4][4],10> : /* 0x000 */ fixed_array_base<float[4][4],10,float[10][4][4]> { // 0x280
};

typedef struct { // 0x330
	/* 0x000 */ fixed_array<float[4][4],10> LwMatrix;
	/* 0x280 */ fixed_array<float[4],10> OldPos;
	/* 0x320 */ int NumMax;
	/* 0x324 */ int Num;
	/* 0x328 */ int Top;
} ENEDMG_P_TAIL_WRK;

struct fixed_array_base<ENEDMG_PARTICLE_ONE,48,ENEDMG_PARTICLE_ONE[48]> { // 0xf00
protected:
	/* 0x000 */ ENEDMG_PARTICLE_ONE m_aData[48];
	
public:
	fixed_array_base<ENEDMG_PARTICLE_ONE,48,ENEDMG_PARTICLE_ONE[48]>& operator=();
	fixed_array_base();
protected:
	fixed_array_base();
public:
	ENEDMG_PARTICLE_ONE& operator[]();
	ENEDMG_PARTICLE_ONE& operator[]();
	ENEDMG_PARTICLE_ONE* data();
	ENEDMG_PARTICLE_ONE* begin();
	ENEDMG_PARTICLE_ONE* end();
	void fill();
	size_t size();
	bool empty();
};

struct fixed_array<ENEDMG_PARTICLE_ONE,48> : /* 0x000 */ fixed_array_base<ENEDMG_PARTICLE_ONE,48,ENEDMG_PARTICLE_ONE[48]> { // 0xf00
};

struct _ENEDMG_P_WRK { // 0xf50
	/* 0x000 */ fixed_array<ENEDMG_PARTICLE_ONE,48> particle;
	/* 0xf00 */ float StartPos[4];
	/* 0xf10 */ float EndPos[4];
	/* 0xf20 */ float *pEndPos[4];
	/* 0xf24 */ ENEDMG_P_TAIL_WRK *pTailWrk;
	/* 0xf28 */ int Num;
	/* 0xf2c */ int flow;
	/* 0xf30 */ int cnt;
	/* 0xf34 */ float SpeedRate;
	/* 0xf38 */ int SuctionFlg;
	/* 0xf3c */ int Type;
	/* 0xf40 */ int EffectType;
	/* 0xf44 */ _ENEDMG_P_WRK *pNext;
};

typedef _ENEDMG_P_WRK ENEDMG_P_WRK;

typedef struct { // 0x30
	/* 0x00 */ float StartPos[4];
	/* 0x10 */ float *pEndPos[4];
	/* 0x14 */ int ParticleNum;
	/* 0x18 */ float DistPE;
	/* 0x1c */ int SuctionFlg;
	/* 0x20 */ int EffectType;
} ENE_DMG_PARTICLE_REQ;

enum IG_ENE_DMG_EFFECT_TYPE {
	IG_ENE_DMG_EFFECT_NORMAL = 0,
	IG_ENE_DMG_EFFECT_SC = 1,
	IG_ENE_DMG_EFFECT_SP = 2
};

enum EFF_LIGHT_COMEIN_ALPHA_MODE {
	EFF_LIGHT_COMEIN_ALPHA_CALC_DIRECTION = 0,
	EFF_LIGHT_COMEIN_ALPHA_CALC_DISTANCE = 1
};

enum EFF_LIGHT_COMEIN_TYPE {
	EFF_LIGHT_COMEIN_TYPE_NORMAL = 0,
	EFF_LIGHT_COMEIN_TYPE_F607 = 1,
	EFF_LIGHT_COMEIN_TYPE_F609 = 2
};

enum EFF_WATER_FLOW_MOVE_TYPE {
	EFF_WATER_MOVE_RIVER0 = 0,
	EFF_WATER_MOVE_RIVER1 = 1,
	EFF_WATER_MOVE_LAKE0 = 2,
	EFF_WATER_MOVE_LAKE1 = 3,
	EFF_WATER_MOVE_RIVER_MINAKAMI0 = 4,
	EFF_WATER_MOVE_RIVER_MINAKAMI1 = 5,
	EFF_WATER_MOVE_LAKE_FUKAMICHI0 = 6,
	EFF_WATER_MOVE_LAKE_FUKAMICHI1 = 7
};

enum EFF_WATER_FLOW_MOVE_STATUS {
	EFF_WATER_MOVE_TYPE_A = 0,
	EFF_WATER_MOVE_TYPE_A_TO_B = 1,
	EFF_WATER_MOVE_TYPE_B = 2,
	EFF_WATER_MOVE_TYPE_B_TO_C = 3,
	EFF_WATER_MOVE_TYPE_C = 4,
	EFF_WATER_MOVE_TYPE_C_TO_A = 5
};

struct fixed_array_base<int,10,int[10]> { // 0x28
protected:
	/* 0x00 */ int m_aData[10];
	
public:
	fixed_array_base<int,10,int[10]>& operator=();
	fixed_array_base();
protected:
	fixed_array_base();
public:
	int& operator[]();
	int& operator[]();
	int* data();
	int* begin();
	int* end();
	void fill();
	size_t size();
	bool empty();
};

struct fixed_array<int,10> : /* 0x00 */ fixed_array_base<int,10,int[10]> { // 0x28
};

typedef struct { // 0x6c
	/* 0x00 */ fixed_array<int,10> on;
	/* 0x28 */ fixed_array<int,10> flg;
	/* 0x50 */ u_int flow;
	/* 0x54 */ u_int cnt;
	/* 0x58 */ u_int in;
	/* 0x5c */ u_int keep;
	/* 0x60 */ u_int out;
	/* 0x64 */ u_int max;
	/* 0x68 */ float *vol;
} EFF_PARTSBLUR;

typedef struct { // 0x28
	/* 0x00 */ float r;
	/* 0x04 */ float add;
	/* 0x08 */ float h;
	/* 0x0c */ float x;
	/* 0x10 */ float y;
	/* 0x14 */ float z;
	/* 0x18 */ float ox;
	/* 0x1c */ float oy;
	/* 0x20 */ float oz;
	/* 0x24 */ float lng;
} EFFPOS;

typedef struct { // 0x2d30
	/* 0x0000 */ EFFPOS ep[17][17];
	/* 0x2d28 */ short int use;
	/* 0x2d2a */ short int pass;
	/* 0x2d2c */ float r;
} EFFINFO;

struct fixed_array_base<EFFPOS,289,EFFPOS[289]> { // 0x2d28
protected:
	/* 0x0000 */ EFFPOS m_aData[289];
	
public:
	fixed_array_base<EFFPOS,289,EFFPOS[289]>& operator=();
	fixed_array_base();
protected:
	fixed_array_base();
public:
	EFFPOS& operator[]();
	EFFPOS& operator[]();
	EFFPOS* data();
	EFFPOS* begin();
	EFFPOS* end();
	void fill();
	size_t size();
	bool empty();
};

struct fixed_array<EFFPOS,289> : /* 0x0000 */ fixed_array_base<EFFPOS,289,EFFPOS[289]> { // 0x2d28
};

typedef struct { // 0x2d30
	/* 0x0000 */ fixed_array<EFFPOS,289> ep;
	/* 0x2d28 */ short int use;
	/* 0x2d2a */ short int pass;
	/* 0x2d2c */ float r;
} EFFINFO2;

typedef struct { // 0x18
	/* 0x00 */ void *pSgdTop;
	/* 0x04 */ float TotalS;
	/* 0x08 */ float TotalT;
	/* 0x0c */ int MapBuffId;
	/* 0x10 */ int AlphaMax;
	/* 0x14 */ int Type;
} LIGHT_COME_IN_DATA;

typedef struct { // 0x20
	/* 0x00 */ void *pHandle;
	/* 0x04 */ int Id;
	/* 0x08 */ float ScaleX;
	/* 0x0c */ float ScaleY;
	/* 0x10 */ int Alpha;
	/* 0x14 */ int Time;
	/* 0x18 */ int Counter;
	/* 0x1c */ int FlameCounter;
} TOUROU_FREA_DATA;

typedef struct { // 0x20
	/* 0x00 */ sceVu0IVECTOR Color;
	/* 0x10 */ void *pSgdTop;
	/* 0x14 */ int Id;
	/* 0x18 */ int Time;
	/* 0x1c */ int Counter;
} TOUROU_BASE_DATA;

typedef struct { // 0x40
	/* 0x00 */ float Position[4];
	/* 0x10 */ float CenterPos[4];
	/* 0x20 */ void *adr;
	/* 0x24 */ int furn_id;
	/* 0x28 */ int Type;
	/* 0x2c */ float RotY;
	/* 0x30 */ float WavePos;
} EFFRDR_RSV;

typedef struct { // 0x60
	/* 0x00 */ float ligdiff[4];
	/* 0x10 */ float ligpos[4];
	/* 0x20 */ float fpos[4];
	/* 0x30 */ void *ebuf;
	/* 0x34 */ float ligpow;
	/* 0x38 */ float wavew;
	/* 0x3c */ float rate;
	/* 0x40 */ float szw;
	/* 0x44 */ float szh;
	/* 0x48 */ float sw;
	/* 0x4c */ float sh;
	/* 0x50 */ int furn_id;
	/* 0x54 */ u_char lignum;
	/* 0x55 */ u_char usefl;
	/* 0x56 */ u_char sta;
	/* 0x57 */ u_char pat;
} BURN_FIRE;

typedef struct { // 0x50
	/* 0x00 */ float bpos[4];
	/* 0x10 */ float brot[4];
	/* 0x20 */ float lpos[4];
	/* 0x30 */ float ww;
	/* 0x34 */ float hh;
	/* 0x38 */ int power;
	/* 0x3c */ u_char r;
	/* 0x3d */ u_char g;
	/* 0x3e */ u_char b;
	/* 0x3f */ u_char a;
	/* 0x40 */ void *adr;
} SUNSHINE;

typedef struct { // 0x74
	/* 0x00 */ int LifeTime;
	/* 0x04 */ int AppearNumMax;
	/* 0x08 */ int AppearNumMin;
	/* 0x0c */ int Range;
	/* 0x10 */ int SpeedXMax;
	/* 0x14 */ int SpeedXMin;
	/* 0x18 */ int SpeedYMax;
	/* 0x1c */ int SpeedYMin;
	/* 0x20 */ int SpeedZMax;
	/* 0x24 */ int SpeedZMin;
	/* 0x28 */ int Scale;
	/* 0x2c */ int StartScale;
	/* 0x30 */ int EndScale;
	/* 0x34 */ int StartAlpha;
	/* 0x38 */ int EndAlpha;
	/* 0x3c */ int R;
	/* 0x40 */ int G;
	/* 0x44 */ int B;
	/* 0x48 */ int AlphaBlendA;
	/* 0x4c */ int AlphaBlendB;
	/* 0x50 */ int AlphaBlendC;
	/* 0x54 */ int AlphaBlendD;
	/* 0x58 */ int AlphaBlendFIX;
	/* 0x5c */ int FreaSize;
	/* 0x60 */ int FreaR;
	/* 0x64 */ int FreaG;
	/* 0x68 */ int FreaB;
	/* 0x6c */ int FreaAlpha;
	/* 0x70 */ int ParticleFollowMove;
} TORCH2_PARAMETER;

typedef struct { // 0x24
	/* 0x00 */ int Range1;
	/* 0x04 */ int Range2;
	/* 0x08 */ int StartScale1;
	/* 0x0c */ int StartScale2;
	/* 0x10 */ int Frame1;
	/* 0x14 */ int Frame2;
	/* 0x18 */ int EndFrame;
	/* 0x1c */ int IntervalMax;
	/* 0x20 */ int IntervalMin;
} TORCH2_BURST_PARAMETER;

typedef struct { // 0x50
	/* 0x00 */ int LifeTimeMax;
	/* 0x04 */ int LifeTimeMin;
	/* 0x08 */ int AppearNumMax;
	/* 0x0c */ int AppearNumMin;
	/* 0x10 */ int SpeedXMax;
	/* 0x14 */ int SpeedXMin;
	/* 0x18 */ int SpeedYMax;
	/* 0x1c */ int SpeedYMin;
	/* 0x20 */ int SpeedZMax;
	/* 0x24 */ int SpeedZMin;
	/* 0x28 */ int AccelYMax;
	/* 0x2c */ int AccelYMin;
	/* 0x30 */ int BrakeRate;
	/* 0x34 */ int StartScale;
	/* 0x38 */ int EndScale;
	/* 0x3c */ int StartAlpha;
	/* 0x40 */ int EndAlpha;
	/* 0x44 */ int R;
	/* 0x48 */ int G;
	/* 0x4c */ int B;
} TORCH2_SPARK_PARAMETER;

typedef struct { // 0x3ed0
	/* 0x0000 */ fixed_array<PARTICLE,200> particles;
	/* 0x3e80 */ float BasePos[4];
	/* 0x3e90 */ float WindMax[4];
	/* 0x3ea0 */ int head;
	/* 0x3ea4 */ int BurstCount;
	/* 0x3ea8 */ int BurstInterval;
	/* 0x3eac */ int WindCount;
	/* 0x3eb0 */ int WindInterval;
	/* 0x3eb4 */ float AlphaRate;
	/* 0x3eb8 */ short int max;
	/* 0x3eba */ short int disp;
	/* 0x3ebc */ short int blife;
	/* 0x3ebe */ short int Type;
	/* 0x3ec0 */ short int SeReqFlg;
} TORCH_CTRL;

struct fixed_array_base<PARTICLE,50,PARTICLE[50]> { // 0xfa0
protected:
	/* 0x000 */ PARTICLE m_aData[50];
	
public:
	fixed_array_base<PARTICLE,50,PARTICLE[50]>& operator=();
	fixed_array_base();
protected:
	fixed_array_base();
public:
	PARTICLE& operator[]();
	PARTICLE& operator[]();
	PARTICLE* data();
	PARTICLE* begin();
	PARTICLE* end();
	void fill();
	size_t size();
	bool empty();
};

struct fixed_array<PARTICLE,50> : /* 0x000 */ fixed_array_base<PARTICLE,50,PARTICLE[50]> { // 0xfa0
};

typedef struct { // 0xfc0
	/* 0x000 */ fixed_array<PARTICLE,50> particles;
	/* 0xfa0 */ int head;
	/* 0xfa4 */ int cnt;
	/* 0xfa8 */ short int max;
	/* 0xfaa */ short int disp;
	/* 0xfac */ short int blife;
	/* 0xfae */ short int Type;
	/* 0xfb0 */ float BrakeRate;
	/* 0xfb4 */ float WholeScale;
	/* 0xfb8 */ float AlphaRate;
} SPARK_CTRL;

typedef struct { // 0x3
	/* 0x0 */ unsigned char sta;
	/* 0x1 */ unsigned char cnt;
	/* 0x2 */ unsigned char no;
} PHOTO_EXPAND;

struct _SLIDE_ENCODE_HEADER { // 0x20
	/* 0x00 */ int size;
	/* 0x04 */ int type;
	/* 0x08 */ int pad[2];
	/* 0x10 */ int sizeRGB[3];
	/* 0x1c */ int quality;
};

typedef _SLIDE_ENCODE_HEADER SLIDE_ENCODE_HEADER;

struct SUBJECT_WRK { // 0x6
	/* 0x0 */ u_short sp_no;
	/* 0x2 */ u_short no;
	/* 0x4 */ short int type;
};

struct _PICTURE_SUBJECT { // 0x4
	/* 0x0 */ short int type;
	/* 0x2 */ short int obj_no;
};

typedef _PICTURE_SUBJECT PICTURE_SUBJECT;

struct fixed_array_base<_PICTURE_SUBJECT,3,_PICTURE_SUBJECT[3]> { // 0xc
protected:
	/* 0x0 */ PICTURE_SUBJECT m_aData[3];
	
public:
	fixed_array_base<_PICTURE_SUBJECT,3,_PICTURE_SUBJECT[3]>& operator=();
	fixed_array_base();
protected:
	fixed_array_base();
public:
	PICTURE_SUBJECT& operator[]();
	PICTURE_SUBJECT& operator[]();
	PICTURE_SUBJECT* data();
	PICTURE_SUBJECT* begin();
	PICTURE_SUBJECT* end();
	void fill();
	size_t size();
	bool empty();
};

struct fixed_array<_PICTURE_SUBJECT,3> : /* 0x0 */ fixed_array_base<_PICTURE_SUBJECT,3,_PICTURE_SUBJECT[3]> { // 0xc
};

typedef struct { // 0x20
	/* 0x00 */ u_char adr_no;
	/* 0x01 */ u_char chp_no;
	/* 0x02 */ u_char status;
	/* 0x04 */ fixed_array<_PICTURE_SUBJECT,3> maSubject;
	/* 0x10 */ u_int score;
	/* 0x14 */ sceCdCLOCK time;
	/* 0x1c */ short int room;
} PICTURE_WRK;

struct fixed_array_base<PICTURE_WRK,16,PICTURE_WRK[16]> { // 0x200
protected:
	/* 0x000 */ PICTURE_WRK m_aData[16];
	
public:
	fixed_array_base<PICTURE_WRK,16,PICTURE_WRK[16]>& operator=();
	fixed_array_base();
protected:
	fixed_array_base();
public:
	PICTURE_WRK& operator[]();
	PICTURE_WRK& operator[]();
	PICTURE_WRK* data();
	PICTURE_WRK* begin();
	PICTURE_WRK* end();
	void fill();
	size_t size();
	bool empty();
};

struct fixed_array<PICTURE_WRK,16> : /* 0x000 */ fixed_array_base<PICTURE_WRK,16,PICTURE_WRK[16]> { // 0x200
};

typedef struct { // 0x208
	/* 0x000 */ u_char pic_num;
	/* 0x001 */ u_char protect_num;
	/* 0x002 */ u_char sort_key;
	/* 0x003 */ u_char skey_bak;
	/* 0x004 */ fixed_array<PICTURE_WRK,16> pic;
	/* 0x204 */ u_int padding;
} PFILE_WRK;

struct _HINT_PHOTO_REQ { // 0x4
	/* 0x0 */ int no;
};

typedef _HINT_PHOTO_REQ HINT_PHOTO_REQ;

enum _PHOTO_TYPE {
	PHOTO_TYPE_HINT = 0,
	PHOTO_TYPE_HINT3D = 1,
	PHOTO_TYPE_RARE = 2,
	PHOTO_TYPE_MAYU_CURSE = 3,
	PHOTO_TYPE_INVALID = 4
};

typedef _PHOTO_TYPE PHOTO_TYPE;

struct _PHOTO_WRK_DEF { // 0x40
	/* 0x00 */ float pos[4];
	/* 0x10 */ HINT_PHOTO_REQ hint_pict[5];
	/* 0x24 */ int hint_cnt;
	/* 0x28 */ int adr_no;
	/* 0x2c */ PHOTO_TYPE type;
	/* 0x30 */ int msg_name;
	/* 0x34 */ int msg_type;
	/* 0x38 */ int unlock_ghost;
};

typedef _PHOTO_WRK_DEF PHOTO_WRK_DEF;

typedef struct { // 0x8
	/* 0x0 */ char *name;
	/* 0x4 */ int id;
} MAPOBJ_EFF;

typedef struct { // 0x8
	/* 0x0 */ float pow;
	/* 0x4 */ int cycle;
} MAPOBJ_WIND;

struct fixed_array_base<MAPOBJ_HEAD,2,MAPOBJ_HEAD[2]> { // 0x41a8
protected:
	/* 0x0000 */ MAPOBJ_HEAD m_aData[2];
	
public:
	fixed_array_base<MAPOBJ_HEAD,2,MAPOBJ_HEAD[2]>& operator=();
	fixed_array_base();
protected:
	fixed_array_base();
public:
	MAPOBJ_HEAD& operator[]();
	MAPOBJ_HEAD& operator[]();
	MAPOBJ_HEAD* data();
	MAPOBJ_HEAD* begin();
	MAPOBJ_HEAD* end();
	void fill();
	size_t size();
	bool empty();
};

struct fixed_array<MAPOBJ_HEAD,2> : /* 0x0000 */ fixed_array_base<MAPOBJ_HEAD,2,MAPOBJ_HEAD[2]> { // 0x41a8
};

struct MAPPUT_OBJ { // 0x90
	/* 0x00 */ short int buff_id;
	/* 0x02 */ short int first_id;
	/* 0x04 */ int flg;
	/* 0x08 */ float z_num;
	/* 0x0c */ float z_offset;
	/* 0x10 */ u_int *addr;
	/* 0x14 */ void (*func)(/* parameters unknown */);
	/* 0x18 */ int work;
	/* 0x20 */ float mat[4][4];
	/* 0x60 */ float *mp[4][4];
	/* 0x64 */ GRA3DLIGHTDATA *lit;
	/* 0x70 */ float c_pos[4];
	/* 0x80 */ MAPPUT_OBJ *next;
	/* 0x84 */ MAPPUT_OBJ *befo;
	/* 0x88 */ MAPPUT_OBJ *next_draw;
};

struct fixed_array_base<MAPPUT_OBJ,320,MAPPUT_OBJ[320]> { // 0xb400
protected:
	/* 0x0000 */ MAPPUT_OBJ m_aData[320];
	
public:
	fixed_array_base<MAPPUT_OBJ,320,MAPPUT_OBJ[320]>& operator=();
	fixed_array_base();
protected:
	fixed_array_base();
public:
	MAPPUT_OBJ& operator[]();
	MAPPUT_OBJ& operator[]();
	MAPPUT_OBJ* data();
	MAPPUT_OBJ* begin();
	MAPPUT_OBJ* end();
	void fill();
	size_t size();
	bool empty();
};

struct fixed_array<MAPPUT_OBJ,320> : /* 0x0000 */ fixed_array_base<MAPPUT_OBJ,320,MAPPUT_OBJ[320]> { // 0xb400
};

typedef struct { // 0x10
	/* 0x0 */ int labelID;
	/* 0x4 */ char HitCheck;
	/* 0x5 */ char PhotoAble;
	/* 0x6 */ char Visible;
	/* 0x7 */ char ActionType;
	/* 0x8 */ short int Action;
	/* 0xa */ short int Weight;
	/* 0xc */ int Attribute;
} MAPSAVE_HEAD;

typedef struct { // 0x8
	/* 0x0 */ int AreaID;
	/* 0x4 */ MAPSAVE_HEAD *head;
} MAPSAVE_JMP_TBL;

typedef void (*LPFUNC_VIEWSCREENMATRIX)(/* parameters unknown */);
typedef void (*LPFUNC_VIEWCLIPMATRIX)(/* parameters unknown */);

struct fixed_array_base<unsigned int,12,unsigned int[12]> { // 0x30
protected:
	/* 0x00 */ u_int m_aData[12];
	
public:
	fixed_array_base<unsigned int,12,unsigned int[12]>& operator=();
	fixed_array_base();
protected:
	fixed_array_base();
public:
	u_int& operator[]();
	u_int& operator[]();
	u_int* data();
	u_int* begin();
	u_int* end();
	void fill();
	size_t size();
	bool empty();
};

struct fixed_array<unsigned int,12> : /* 0x00 */ fixed_array_base<unsigned int,12,unsigned int[12]> { // 0x30
};

typedef struct { // 0x18
	/* 0x00 */ float fMinSpeed;
	/* 0x04 */ float fMaxSpeed;
	/* 0x08 */ int iMinFrame;
	/* 0x0c */ int iMaxFrame;
	/* 0x10 */ float fReelSpeed;
	/* 0x14 */ int iSave;
} MAPSP_KAZ_DB;

typedef struct { // 0x30
	/* 0x00 */ void *pHdl;
	/* 0x04 */ float fRot;
	/* 0x08 */ float *pfMstRot;
	/* 0x0c */ int iGroupID;
	/* 0x10 */ int iType;
	/* 0x20 */ float vPos[4];
} MAPSP_KAZ_HEAD;

typedef struct { // 0x14
	/* 0x00 */ float fSpeed;
	/* 0x04 */ float fMstSpeed;
	/* 0x08 */ float fNextSpeed;
	/* 0x0c */ int iFrame;
	/* 0x10 */ int iNextFrame;
} MAPSP_KAZ_SPEED;

struct fixed_array_base<MAPSP_KAZ_HEAD,64,MAPSP_KAZ_HEAD[64]> { // 0xc00
protected:
	/* 0x000 */ MAPSP_KAZ_HEAD m_aData[64];
	
public:
	fixed_array_base<MAPSP_KAZ_HEAD,64,MAPSP_KAZ_HEAD[64]>& operator=();
	fixed_array_base();
protected:
	fixed_array_base();
public:
	MAPSP_KAZ_HEAD& operator[]();
	MAPSP_KAZ_HEAD& operator[]();
	MAPSP_KAZ_HEAD* data();
	MAPSP_KAZ_HEAD* begin();
	MAPSP_KAZ_HEAD* end();
	void fill();
	size_t size();
	bool empty();
};

struct fixed_array<MAPSP_KAZ_HEAD,64> : /* 0x000 */ fixed_array_base<MAPSP_KAZ_HEAD,64,MAPSP_KAZ_HEAD[64]> { // 0xc00
};

struct fixed_array_base<MAPSP_KAZ_SPEED,5,MAPSP_KAZ_SPEED[5]> { // 0x64
protected:
	/* 0x00 */ MAPSP_KAZ_SPEED m_aData[5];
	
public:
	fixed_array_base<MAPSP_KAZ_SPEED,5,MAPSP_KAZ_SPEED[5]>& operator=();
	fixed_array_base();
protected:
	fixed_array_base();
public:
	MAPSP_KAZ_SPEED& operator[]();
	MAPSP_KAZ_SPEED& operator[]();
	MAPSP_KAZ_SPEED* data();
	MAPSP_KAZ_SPEED* begin();
	MAPSP_KAZ_SPEED* end();
	void fill();
	size_t size();
	bool empty();
};

struct fixed_array<MAPSP_KAZ_SPEED,5> : /* 0x00 */ fixed_array_base<MAPSP_KAZ_SPEED,5,MAPSP_KAZ_SPEED[5]> { // 0x64
};

typedef struct { // 0x10
	/* 0x0 */ char magic[4];
	/* 0x4 */ unsigned int f_size;
	/* 0x8 */ int h_num;
	/* 0xc */ int dat_offset;
} PHF_FILE_HEAD;

typedef struct { // 0x20
	/* 0x00 */ char name[24];
	/* 0x18 */ unsigned int offset;
	/* 0x1c */ unsigned int size;
} PACK_HEAD;

typedef struct { // 0x8
	/* 0x0 */ int st_num;
	/* 0x4 */ MB_OUT_RECT *dat;
} RD_REG_ST_DAT;

struct fixed_array_base<RD_REG_ST_DAT,14,RD_REG_ST_DAT[14]> { // 0x70
protected:
	/* 0x00 */ RD_REG_ST_DAT m_aData[14];
	
public:
	fixed_array_base<RD_REG_ST_DAT,14,RD_REG_ST_DAT[14]>& operator=();
	fixed_array_base();
protected:
	fixed_array_base();
public:
	RD_REG_ST_DAT& operator[]();
	RD_REG_ST_DAT& operator[]();
	RD_REG_ST_DAT* data();
	RD_REG_ST_DAT* begin();
	RD_REG_ST_DAT* end();
	void fill();
	size_t size();
	bool empty();
};

struct fixed_array<RD_REG_ST_DAT,14> : /* 0x00 */ fixed_array_base<RD_REG_ST_DAT,14,RD_REG_ST_DAT[14]> { // 0x70
};

typedef struct { // 0x8c
	/* 0x00 */ fixed_array<RD_REG_ST_DAT,14> StPtrList;
	/* 0x70 */ char *RegDatPtr;
	/* 0x74 */ int LabVecID;
	/* 0x78 */ int LabVecNum;
	/* 0x7c */ MB_OUT_RECT *LabVecPtr;
	/* 0x80 */ int type_id;
	/* 0x84 */ int type_search_num;
	/* 0x88 */ MB_OUT_SECTION *type_search_p;
} RD_REG_HEAD;

struct fixed_array_base<RD_REG_HEAD,8,RD_REG_HEAD[8]> { // 0x460
protected:
	/* 0x000 */ RD_REG_HEAD m_aData[8];
	
public:
	fixed_array_base<RD_REG_HEAD,8,RD_REG_HEAD[8]>& operator=();
	fixed_array_base();
protected:
	fixed_array_base();
public:
	RD_REG_HEAD& operator[]();
	RD_REG_HEAD& operator[]();
	RD_REG_HEAD* data();
	RD_REG_HEAD* begin();
	RD_REG_HEAD* end();
	void fill();
	size_t size();
	bool empty();
};

struct fixed_array<RD_REG_HEAD,8> : /* 0x000 */ fixed_array_base<RD_REG_HEAD,8,RD_REG_HEAD[8]> { // 0x460
};

typedef short unsigned int ushort;
typedef unsigned int uint;
typedef long int daddr_t;
typedef char *caddr_t;
typedef short unsigned int ino_t;
typedef short int dev_t;
typedef long int off_t;
typedef short unsigned int uid_t;
typedef short unsigned int gid_t;
typedef int pid_t;
typedef long int key_t;
typedef long int ssize_t;
typedef unsigned int mode_t;
typedef short unsigned int nlink_t;
typedef long int fd_mask;

typedef struct { // 0x8
	/* 0x0 */ fd_mask fds_bits[1];
} _types_fd_set;

struct _SLL_CELL { // 0x20
	/* 0x00 */ _SLL_CELL *pNext;
	/* 0x10 */ char BodyStart;
};

typedef _SLL_CELL SLL_CELL;

typedef struct { // 0x10
	/* 0x0 */ u_int ElemSize;
	/* 0x4 */ u_int RegCount;
	/* 0x8 */ SLL_CELL *pBeginCell;
	/* 0xc */ SLL_CELL *pEndCell;
} SINGLE_LINK_LIST;

struct fixed_array_base<SPRING,20,SPRING[20]> { // 0xa0
protected:
	/* 0x00 */ SPRING m_aData[20];
	
public:
	fixed_array_base<SPRING,20,SPRING[20]>& operator=();
	fixed_array_base();
protected:
	fixed_array_base();
public:
	SPRING& operator[]();
	SPRING& operator[]();
	SPRING* data();
	SPRING* begin();
	SPRING* end();
	void fill();
	size_t size();
	bool empty();
};

struct fixed_array<SPRING,20> : /* 0x00 */ fixed_array_base<SPRING,20,SPRING[20]> { // 0xa0
};

struct fixed_array_base<fixed_array<SPRING, 20>,9,fixed_array<SPRING, 20>[9]> { // 0x5a0
protected:
	/* 0x000 */ fixed_array<SPRING,20> m_aData[9];
	
public:
	fixed_array_base<fixed_array<SPRING, 20>,9,fixed_array<SPRING, 20>[9]>& operator=();
	fixed_array_base();
protected:
	fixed_array_base();
public:
	fixed_array<SPRING,20>& operator[]();
	fixed_array<SPRING,20>& operator[]();
	fixed_array<SPRING,20>* data();
	fixed_array<SPRING,20>* begin();
	fixed_array<SPRING,20>* end();
	void fill();
	size_t size();
	bool empty();
};

struct fixed_array<fixed_array<SPRING, 20>,9> : /* 0x000 */ fixed_array_base<fixed_array<SPRING, 20>,9,fixed_array<SPRING, 20>[9]> { // 0x5a0
};

struct fixed_array_base<C_PARTICLE,20,C_PARTICLE[20]> { // 0x780
protected:
	/* 0x000 */ C_PARTICLE m_aData[20];
	
public:
	fixed_array_base<C_PARTICLE,20,C_PARTICLE[20]>& operator=();
	fixed_array_base();
protected:
	fixed_array_base();
public:
	C_PARTICLE& operator[]();
	C_PARTICLE& operator[]();
	C_PARTICLE* data();
	C_PARTICLE* begin();
	C_PARTICLE* end();
	void fill();
	size_t size();
	bool empty();
};

struct fixed_array<C_PARTICLE,20> : /* 0x000 */ fixed_array_base<C_PARTICLE,20,C_PARTICLE[20]> { // 0x780
};

struct fixed_array_base<fixed_array<C_PARTICLE, 20>,10,fixed_array<C_PARTICLE, 20>[10]> { // 0x4b00
protected:
	/* 0x0000 */ fixed_array<C_PARTICLE,20> m_aData[10];
	
public:
	fixed_array_base<fixed_array<C_PARTICLE, 20>,10,fixed_array<C_PARTICLE, 20>[10]>& operator=();
	fixed_array_base();
protected:
	fixed_array_base();
public:
	fixed_array<C_PARTICLE,20>& operator[]();
	fixed_array<C_PARTICLE,20>& operator[]();
	fixed_array<C_PARTICLE,20>* data();
	fixed_array<C_PARTICLE,20>* begin();
	fixed_array<C_PARTICLE,20>* end();
	void fill();
	size_t size();
	bool empty();
};

struct fixed_array<fixed_array<C_PARTICLE, 20>,10> : /* 0x0000 */ fixed_array_base<fixed_array<C_PARTICLE, 20>,10,fixed_array<C_PARTICLE, 20>[10]> { // 0x4b00
};

struct fixed_array_base<float[4][4],5,float[5][4][4]> { // 0x140
protected:
	/* 0x000 */ float m_aData[5][4][4];
	
public:
	fixed_array_base<float[4][4],5,float[5][4][4]>& operator=();
	fixed_array_base();
protected:
	fixed_array_base();
public:
	float&[4][4] operator[]();
	float&[4][4] operator[]();
	float*[4][4] data();
	float*[4][4] begin();
	float*[4][4] end();
	void fill();
	size_t size();
	bool empty();
};

struct fixed_array<float[4][4],5> : /* 0x000 */ fixed_array_base<float[4][4],5,float[5][4][4]> { // 0x140
};

struct fixed_array_base<C_ACS_CTRL,15,C_ACS_CTRL[15]> { // 0xf0
protected:
	/* 0x00 */ C_ACS_CTRL m_aData[15];
	
public:
	fixed_array_base<C_ACS_CTRL,15,C_ACS_CTRL[15]>& operator=();
	fixed_array_base();
protected:
	fixed_array_base();
public:
	C_ACS_CTRL& operator[]();
	C_ACS_CTRL& operator[]();
	C_ACS_CTRL* data();
	C_ACS_CTRL* begin();
	C_ACS_CTRL* end();
	void fill();
	size_t size();
	bool empty();
};

struct fixed_array<C_ACS_CTRL,15> : /* 0x00 */ fixed_array_base<C_ACS_CTRL,15,C_ACS_CTRL[15]> { // 0xf0
};

struct fixed_array_base<fixed_array<C_ACS_CTRL, 15>,2,fixed_array<C_ACS_CTRL, 15>[2]> { // 0x1e0
protected:
	/* 0x000 */ fixed_array<C_ACS_CTRL,15> m_aData[2];
	
public:
	fixed_array_base<fixed_array<C_ACS_CTRL, 15>,2,fixed_array<C_ACS_CTRL, 15>[2]>& operator=();
	fixed_array_base();
protected:
	fixed_array_base();
public:
	fixed_array<C_ACS_CTRL,15>& operator[]();
	fixed_array<C_ACS_CTRL,15>& operator[]();
	fixed_array<C_ACS_CTRL,15>* data();
	fixed_array<C_ACS_CTRL,15>* begin();
	fixed_array<C_ACS_CTRL,15>* end();
	void fill();
	size_t size();
	bool empty();
};

struct fixed_array<fixed_array<C_ACS_CTRL, 15>,2> : /* 0x000 */ fixed_array_base<fixed_array<C_ACS_CTRL, 15>,2,fixed_array<C_ACS_CTRL, 15>[2]> { // 0x1e0
};

struct fixed_array_base<ENE_COLLISION,13,ENE_COLLISION[13]> { // 0x68
protected:
	/* 0x00 */ ENE_COLLISION m_aData[13];
	
public:
	fixed_array_base<ENE_COLLISION,13,ENE_COLLISION[13]>& operator=();
	fixed_array_base();
protected:
	fixed_array_base();
public:
	ENE_COLLISION& operator[]();
	ENE_COLLISION& operator[]();
	ENE_COLLISION* data();
	ENE_COLLISION* begin();
	ENE_COLLISION* end();
	void fill();
	size_t size();
	bool empty();
};

struct fixed_array<ENE_COLLISION,13> : /* 0x00 */ fixed_array_base<ENE_COLLISION,13,ENE_COLLISION[13]> { // 0x68
};

struct fixed_array_base<COLLISION_DAT,13,COLLISION_DAT[13]> { // 0x68
protected:
	/* 0x00 */ COLLISION_DAT m_aData[13];
	
public:
	fixed_array_base<COLLISION_DAT,13,COLLISION_DAT[13]>& operator=();
	fixed_array_base();
protected:
	fixed_array_base();
public:
	COLLISION_DAT& operator[]();
	COLLISION_DAT& operator[]();
	COLLISION_DAT* data();
	COLLISION_DAT* begin();
	COLLISION_DAT* end();
	void fill();
	size_t size();
	bool empty();
};

struct fixed_array<COLLISION_DAT,13> : /* 0x00 */ fixed_array_base<COLLISION_DAT,13,COLLISION_DAT[13]> { // 0x68
};

struct fixed_array_base<TUBE,13,TUBE[13]> { // 0x270
protected:
	/* 0x000 */ TUBE m_aData[13];
	
public:
	fixed_array_base<TUBE,13,TUBE[13]>& operator=();
	fixed_array_base();
protected:
	fixed_array_base();
public:
	TUBE& operator[]();
	TUBE& operator[]();
	TUBE* data();
	TUBE* begin();
	TUBE* end();
	void fill();
	size_t size();
	bool empty();
};

struct fixed_array<TUBE,13> : /* 0x000 */ fixed_array_base<TUBE,13,TUBE[13]> { // 0x270
};

enum _enum_LOAD_PRIORITY {
	LOAD_PRIORITY_DUMMY = 0,
	LOAD_PRIORITY_STREAM_HEADER = 1,
	LOAD_PRIORITY_MENU = 2,
	LOAD_PRIORITY_EVENT = 3,
	LOAD_PRIORITY_LOGO = 4,
	LOAD_PRIORITY_TITLE = 5,
	LOAD_PRIORITY_NORMAL = 6,
	LOAD_PRIORITY_PRELOAD_MDL = 7
};

typedef _enum_LOAD_PRIORITY enum_LOAD_PRIORITY;

enum _STREAM_PRIORITY {
	dummySTREAM_PRIORITY_START = 10,
	STREAM_PRIORITY_SETUP = 11,
	STREAM_PRIORITY_TITLE = 12,
	STREAM_PRIORITY_SCENE = 13,
	STREAM_PRIORITY_CRYSTAL = 14,
	STREAM_PRIORITY_SUBTITLE = 15,
	STREAM_PRIORITY_AUTO_GHOST = 16,
	STREAM_PRIORITY_EVENT = 17,
	STREAM_PRIORITY_GHOSTEND = 18,
	STREAM_PRIORITY_GHOST = 19,
	STREAM_PRIORITY_MENU = 20,
	STREAM_PRIORITY_MAP = 21
};

typedef _STREAM_PRIORITY STREAM_PRIORITY;

enum _SND_GROUP {
	SND_GROUP_SOUND_EFFECT = 0,
	SND_GROUP_BGM = 1
};

typedef _SND_GROUP SND_GROUP;

typedef struct { // 0x20c
	/* 0x000 */ int album_type;
	/* 0x004 */ PFILE_WRK album_info;
} ALBUM_INFO;

typedef struct { // 0x10
	/* 0x0 */ char step;
	/* 0x1 */ char mode_step;
	/* 0x2 */ char mode;
	/* 0x3 */ char album_init_mode;
	/* 0x4 */ char current_album;
	/* 0x5 */ char photo_no;
	/* 0x8 */ void *album_photo_addr[2];
} ALBUM_CTRL;

typedef struct { // 0x2
	/* 0x0 */ char anim_step;
	/* 0x1 */ char anim_timer;
} ALBUM_DISP_CTRL;

struct fixed_array_base<ALBUM_INFO,2,ALBUM_INFO[2]> { // 0x418
protected:
	/* 0x000 */ ALBUM_INFO m_aData[2];
	
public:
	fixed_array_base<ALBUM_INFO,2,ALBUM_INFO[2]>& operator=();
	fixed_array_base();
protected:
	fixed_array_base();
public:
	ALBUM_INFO& operator[]();
	ALBUM_INFO& operator[]();
	ALBUM_INFO* data();
	ALBUM_INFO* begin();
	ALBUM_INFO* end();
	void fill();
	size_t size();
	bool empty();
};

struct fixed_array<ALBUM_INFO,2> : /* 0x000 */ fixed_array_base<ALBUM_INFO,2,ALBUM_INFO[2]> { // 0x418
};

struct fixed_array_base<int,7,int *> { // 0x4
protected:
	/* 0x0 */ int *m_aData;
	
public:
	fixed_array_base<int,7,int *>& operator=();
	fixed_array_base();
protected:
	fixed_array_base();
public:
	int& operator[]();
	int& operator[]();
	int* data();
	int* begin();
	int* end();
	void fill();
	size_t size();
	bool empty();
};

struct reference_fixed_array<int,7> : /* 0x0 */ fixed_array_base<int,7,int *> { // 0x4
};

typedef struct { // 0x10
	/* 0x0 */ float start_pos;
	/* 0x4 */ float end_pos;
	/* 0x8 */ short int start_time;
	/* 0xa */ short int end_time;
	/* 0xc */ int anim_label;
} POS_ANIM_TBL;

typedef struct { // 0xc
	/* 0x0 */ float start_scl;
	/* 0x4 */ float end_scl;
	/* 0x8 */ short int start_time;
	/* 0xa */ short int end_time;
} SCL_ANIM_TBL;

typedef struct { // 0x8
	/* 0x0 */ short int start_alpha;
	/* 0x2 */ short int end_alpha;
	/* 0x4 */ short int start_time;
	/* 0x6 */ short int end_time;
} ALPHA_ANIM_TBL;

typedef struct { // 0x8
	/* 0x0 */ short int start_rgb;
	/* 0x2 */ short int end_rgb;
	/* 0x4 */ short int start_time;
	/* 0x6 */ short int end_time;
} RGB_ANIM_TBL;

typedef struct { // 0xc
	/* 0x0 */ float start_rot;
	/* 0x4 */ float end_rot;
	/* 0x8 */ short int start_time;
	/* 0xa */ short int end_time;
} ROT_ANIM_TBL;

typedef struct { // 0x18
	/* 0x00 */ char cap_label;
	/* 0x04 */ int x[5];
} CAP_GROUP;

typedef struct { // 0x18
	/* 0x00 */ char btn_label;
	/* 0x04 */ int x[5];
} BTN_GROUP;

typedef struct { // 0x8
	/* 0x0 */ CAP_GROUP *cap_group;
	/* 0x4 */ BTN_GROUP *btn_group;
} CAP_BTN_GROUP_CTRL;

typedef struct { // 0xc
	/* 0x0 */ int year;
	/* 0x4 */ int month;
	/* 0x8 */ int day;
} DAY_INFO;

typedef struct { // 0xc
	/* 0x0 */ int hour;
	/* 0x4 */ int min;
	/* 0x8 */ int sec;
} TIME_INFO;

typedef struct { // 0x18
	/* 0x00 */ DAY_INFO day;
	/* 0x0c */ TIME_INFO time;
} DATE_INFO;

typedef struct { // 0x20
	/* 0x00 */ TIME_INFO play_time;
	/* 0x0c */ int score;
	/* 0x10 */ int total_score;
	/* 0x14 */ int photo_num;
	/* 0x18 */ int buster_num;
	/* 0x1c */ int max_score;
} PLAY_DATA_CTRL;

typedef struct { // 0x9
	/* 0x0 */ char step;
	/* 0x1 */ char sub_step;
	/* 0x2 */ char mode;
	/* 0x3 */ char next_mode;
	/* 0x4 */ char photo_flg;
	/* 0x5 */ char menu_csr;
	/* 0x6 */ char sort_csr;
	/* 0x7 */ char sort_flg;
	/* 0x8 */ char conf_csr;
} ALBUM_EDIT_CTRL;

typedef struct { // 0x9
	/* 0x0 */ char anim_step;
	/* 0x1 */ char anim_timer;
	/* 0x2 */ char menu_anim_step;
	/* 0x3 */ char menu_anim_timer;
	/* 0x4 */ char sort_anim_step;
	/* 0x5 */ char sort_anim_timer;
	/* 0x6 */ char copy_csr_timer;
	/* 0x7 */ char del_csr_timer;
	/* 0x8 */ char album_flare_timer;
} ALBUM_EDIT_DISP;

typedef struct { // 0x4
	/* 0x0 */ char album_data;
	/* 0x1 */ char copy_photo_no;
	/* 0x2 */ char photo_no;
	/* 0x3 */ char short_cut_flg;
} ALBUM_COPY_CTRL;

typedef int _iconVu0IVECTOR[4];
typedef float _iconVu0FVECTOR[4];

typedef struct { // 0x3c4
	/* 0x000 */ unsigned char Head[4];
	/* 0x004 */ short unsigned int Reserv1;
	/* 0x006 */ short unsigned int OffsLF;
	/* 0x008 */ unsigned int Reserv2;
	/* 0x00c */ unsigned int TransRate;
	/* 0x010 */ _iconVu0IVECTOR BgColor[4];
	/* 0x050 */ _iconVu0FVECTOR LightDir[3];
	/* 0x080 */ _iconVu0FVECTOR LightColor[3];
	/* 0x0b0 */ _iconVu0FVECTOR Ambient;
	/* 0x0c0 */ unsigned char TitleName[68];
	/* 0x104 */ unsigned char FnameView[64];
	/* 0x144 */ unsigned char FnameCopy[64];
	/* 0x184 */ unsigned char FnameDel[64];
	/* 0x1c4 */ unsigned char Reserve3[512];
} sceMcIconSys;

typedef struct { // 0x8
	/* 0x0 */ unsigned char Resv2;
	/* 0x1 */ unsigned char Sec;
	/* 0x2 */ unsigned char Min;
	/* 0x3 */ unsigned char Hour;
	/* 0x4 */ unsigned char Day;
	/* 0x5 */ unsigned char Month;
	/* 0x6 */ short unsigned int Year;
} sceMcStDateTime;

struct fixed_array_base<char,5,char[5]> { // 0x5
protected:
	/* 0x0 */ char m_aData[5];
	
public:
	fixed_array_base<char,5,char[5]>& operator=();
	fixed_array_base();
protected:
	fixed_array_base();
public:
	char& operator[]();
	char& operator[]();
	char* data();
	char* begin();
	char* end();
	void fill();
	size_t size();
	bool empty();
};

struct fixed_array<char,5> : /* 0x0 */ fixed_array_base<char,5,char[5]> { // 0x5
};

typedef struct { // 0xd
	/* 0x0 */ char step;
	/* 0x1 */ char mc_step;
	/* 0x2 */ char mode;
	/* 0x3 */ char dir_check_cnt;
	/* 0x4 */ char slot_csr;
	/* 0x5 */ char album_sel_csr;
	/* 0x6 */ char conf_csr;
	/* 0x7 */ char load_file_cnt;
	/* 0x8 */ fixed_array<char,5> album_flg;
} ALBUM_LOAD_CTRL;

typedef struct { // 0x8
	/* 0x0 */ char anim_step;
	/* 0x1 */ char anim_timer;
	/* 0x2 */ char csr_anim_timer;
	/* 0x4 */ int msg_id;
} ALBUM_LOAD_DISP;

typedef struct { // 0xc
	/* 0x0 */ u_int mem_size;
	/* 0x4 */ char step;
	/* 0x8 */ void *mem_addr;
} ALBUM_MEM_CTRL;

typedef struct { // 0x9
	/* 0x0 */ char step;
	/* 0x1 */ char mc_step;
	/* 0x2 */ char mode;
	/* 0x3 */ char dir_check_cnt;
	/* 0x4 */ char slot_csr;
	/* 0x5 */ char album_sel_csr;
	/* 0x6 */ char conf_csr;
	/* 0x7 */ char save_file_cnt;
	/* 0x8 */ char format_end_cnt;
} ALBUM_SAVE_CTRL;

typedef struct { // 0x8
	/* 0x0 */ char anim_step;
	/* 0x1 */ char anim_timer;
	/* 0x2 */ char csr_anim_timer;
	/* 0x4 */ int msg_id;
} ALBUM_SAVE_DISP;

typedef struct { // 0x5
	/* 0x0 */ char step;
	/* 0x1 */ char album_type;
	/* 0x2 */ char photo_no_csr;
	/* 0x3 */ char disp_photo_num;
	/* 0x4 */ char photo_flg;
} ALBUM_VIEW_CTRL;

typedef struct { // 0x3
	/* 0x0 */ char anim_step;
	/* 0x1 */ char anim_timer;
	/* 0x2 */ char csr_anim_timer;
} ALBUM_VIEW_DISP;

struct fixed_array_base<char,16,char[16]> { // 0x10
protected:
	/* 0x0 */ char m_aData[16];
	
public:
	fixed_array_base<char,16,char[16]>& operator=();
	fixed_array_base();
protected:
	fixed_array_base();
public:
	char& operator[]();
	char& operator[]();
	char* data();
	char* begin();
	char* end();
	void fill();
	size_t size();
	bool empty();
};

struct fixed_array<char,16> : /* 0x0 */ fixed_array_base<char,16,char[16]> { // 0x10
};

typedef struct { // 0x40
	/* 0x00 */ int mode;
	/* 0x04 */ int now_place;
	/* 0x08 */ int next_place;
	/* 0x0c */ int anm_alpha;
	/* 0x10 */ int now_tex;
	/* 0x14 */ int main_step;
	/* 0x18 */ int anm_step;
	/* 0x1c */ int save_step;
	/* 0x20 */ int vib_time;
	/* 0x24 */ int test_vib_flg;
	/* 0x28 */ int window;
	/* 0x2c */ int yn_csr;
	/* 0x30 */ int cursor;
	/* 0x34 */ int next_csr;
	/* 0x38 */ int old_csr;
	/* 0x3c */ int old_csr2;
} OPT_CTRL;

typedef struct { // 0x8
	/* 0x0 */ char step;
	/* 0x1 */ char csr;
	/* 0x2 */ short int move_timer;
	/* 0x4 */ int msg_id;
} AUTO_LOAD_CTRL;

struct RT_EV_WRK { // 0x14
	/* 0x00 */ int time;
	/* 0x04 */ int cnt;
	/* 0x08 */ char type;
	/* 0x0c */ int sptime;
	/* 0x10 */ char sptype;
};

struct CFINDER_SND_BUF_PLAY : /* 0x0 */ CSND_BUF_PLAY { // 0x4
	CFINDER_SND_BUF_PLAY& operator=();
	CFINDER_SND_BUF_PLAY();
	CFINDER_SND_BUF_PLAY();
	void Play();
};

struct fixed_array_base<short int,9,short int[9]> { // 0x12
protected:
	/* 0x00 */ short int m_aData[9];
	
public:
	fixed_array_base<short int,9,short int[9]>& operator=();
	fixed_array_base();
protected:
	fixed_array_base();
public:
	short int& operator[]();
	short int& operator[]();
	short int* data();
	short int* begin();
	short int* end();
	void fill();
	size_t size();
	bool empty();
};

struct fixed_array<short int,9> : /* 0x00 */ fixed_array_base<short int,9,short int[9]> { // 0x12
};

struct BONUS_SHOT_SCORE { // 0x16
	/* 0x00 */ fixed_array<short int,9> mScore;
	/* 0x12 */ short int mSP;
	/* 0x14 */ short int mComboNum;
};

struct CVariable<char,0,9> { // 0x1
private:
	/* 0x0 */ char mValue;
	
public:
	CVariable<char,0,9>& operator=();
	CVariable();
	CVariable();
	void Init();
	void SetMax();
	void SetMin();
	char GetMax();
	char GetMin();
	char GetWidth();
	void Set();
	int Increment();
	int Decrement();
	int LoopIncrement();
	int LoopDecrement();
	int Offset();
	int Add();
	int Sub();
	int LoopAdd();
	int LoopSub();
	int Get();
};

struct CFadeVariable<short int> { // 0x6
private:
	/* 0x0 */ short int mValue;
	/* 0x2 */ short int mSpeed;
	/* 0x4 */ short int mTarget;
	
public:
	CFadeVariable<short int>& operator=();
	CFadeVariable();
	CFadeVariable();
	void Set();
	void Fade();
	void Fade2();
	int IsEnd();
	int GetState();
	void Work();
	short int Get();
};

struct CFadeVariable<char> { // 0x3
private:
	/* 0x0 */ char mValue;
	/* 0x1 */ char mSpeed;
	/* 0x2 */ char mTarget;
	
public:
	CFadeVariable<char>& operator=();
	CFadeVariable();
	CFadeVariable();
	void Set();
	void Fade();
	void Fade2();
	int IsEnd();
	int GetState();
	void Work();
	char Get();
};

struct CWrkVariable<char,0,127> { // 0x2
private:
	/* 0x0 */ char mValue;
	/* 0x1 */ char mAdd;
	
public:
	CWrkVariable<char,0,127>& operator=();
	CWrkVariable();
	CWrkVariable();
	void Init();
	void SetMax();
	void SetMin();
	char GetMax();
	char GetMin();
	char GetWidth();
	void SetAddVal();
	void Set();
	void Work();
	int LoopWork();
	char Get();
	int GetState();
};

struct CWrkVariable<char,0,100> { // 0x2
private:
	/* 0x0 */ char mValue;
	/* 0x1 */ char mAdd;
	
public:
	CWrkVariable<char,0,100>& operator=();
	CWrkVariable();
	CWrkVariable();
	void Init();
	void SetMax();
	void SetMin();
	char GetMax();
	char GetMin();
	char GetWidth();
	void SetAddVal();
	void Set();
	void Work();
	int LoopWork();
	char Get();
	int GetState();
};

struct CBonusShotOne { // 0x14
	/* 0x00 */ CVariable<char,0,9> mIndex;
private:
	/* 0x02 */ short int mYPosSave;
	/* 0x04 */ CFadeVariable<short int> mYPos;
	/* 0x0a */ CFadeVariable<char> mXOffset;
	/* 0x0d */ CWrkVariable<char,0,127> mAlpha;
	/* 0x0f */ CWrkVariable<char,0,127> mUnderLineAlpha;
	/* 0x11 */ CWrkVariable<char,0,100> mUnderLineScale;
	
public:
	CBonusShotOne& operator=();
	CBonusShotOne();
	CBonusShotOne();
	void Init();
	void InReqUnderLine();
	void InReq();
	void OutReq();
	void Work();
	void Draw();
};

struct CWaitVariable<char> { // 0x1
private:
	/* 0x0 */ char mValue;
	
public:
	CWaitVariable<char>& operator=();
	CWaitVariable();
	CWaitVariable();
	void Reset();
	void Wait();
	int Work();
	char Get();
};

struct fixed_array_base<CBonusShotOne,9,CBonusShotOne[9]> { // 0xb4
protected:
	/* 0x00 */ CBonusShotOne m_aData[9];
	
public:
	fixed_array_base<CBonusShotOne,9,CBonusShotOne[9]>& operator=();
	fixed_array_base();
protected:
	fixed_array_base();
public:
	CBonusShotOne& operator[]();
	CBonusShotOne& operator[]();
	CBonusShotOne* data();
	CBonusShotOne* begin();
	CBonusShotOne* end();
	void fill();
	size_t size();
	bool empty();
};

struct fixed_array<CBonusShotOne,9> : /* 0x00 */ fixed_array_base<CBonusShotOne,9,CBonusShotOne[9]> { // 0xb4
};

struct CBonusShot { // 0xe4
private:
	/* 0x00 */ CWaitVariable<char> mFadeOutWaiter;
	/* 0x01 */ CWrkVariable<char,0,127> mNewScoreAlpha;
	/* 0x03 */ CWrkVariable<char,0,127> mOldScoreAlpha;
	/* 0x05 */ CWrkVariable<char,0,127> mScorePtsAlpha;
	/* 0x07 */ CWrkVariable<char,0,127> mComboAlpha;
	/* 0x09 */ char mDispNum;
	/* 0x0a */ char mReqUnderLineCnt;
	/* 0x0b */ char mReqUnderLineTimer;
	/* 0x0c */ char mInReqCnt;
	/* 0x0d */ char mInReqTimer;
	/* 0x0e */ char mOutReqCnt;
	/* 0x0f */ char mOutReqTimer;
	/* 0x10 */ CWaitVariable<short int> mTimer;
	/* 0x12 */ BONUS_SHOT_SCORE mBonus;
	/* 0x28 */ fixed_array<CBonusShotOne,9> mAnim;
	/* 0xdc */ int mOldScore;
	/* 0xe0 */ int mNewScore;
	
public:
	CBonusShot& operator=();
	CBonusShot();
	CBonusShot();
	void Req();
	void Work();
	void Draw();
	void Init();
private:
	void ReqUnderLineWrk();
	void InReqWrk();
	void OutReqWrk();
};

struct SHOT_NAME_TEX { // 0x2
	/* 0x0 */ unsigned char mPreTexNo;
	/* 0x1 */ unsigned char mAfterTexNo;
};

struct MyPoint { // 0x2
	/* 0x0 */ short int x;
};

enum _CAMERA_SUB_FUNC_ENUM {
	CAMERA_SUB_FUNC_NONE = 0,
	CAMERA_SUB_FUNC_SLOW = 1,
	CAMERA_SUB_FUNC_STOP = 2,
	CAMERA_SUB_FUNC_VIEW = 3,
	CAMERA_SUB_FUNC_TRACE = 4,
	CAMERA_SUB_FUNC_SEAL = 5,
	CAMERA_SUB_FUNC_KOKU = 6,
	CAMERA_SUB_FUNC_ZERO = 7,
	CAMERA_SUB_FUNC_METSU = 8,
	CAMERA_SUB_FUNC_REN = 9,
	SUB_FUNC_NUM = 10
};

typedef _CAMERA_SUB_FUNC_ENUM CAMERA_SUB_FUNC_ENUM;

struct _SUB_FUNC_SI_PARAM { // 0x2
	/* 0x0 */ char EffTime;
	/* 0x1 */ char SearchFlg;
};

typedef _SUB_FUNC_SI_PARAM SUB_FUNC_SI_PARAM;

struct _SUB_FUNC_SUB_PARAM { // 0x1
	/* 0x0 */ char EffTime;
};

typedef _SUB_FUNC_SUB_PARAM SUB_FUNC_SUB_PARAM;

struct _SUB_FUNC_MAHI_PARAM { // 0x3
	/* 0x0 */ char EffTime;
	/* 0x1 */ char StopTime;
	/* 0x2 */ char ActTime;
};

typedef _SUB_FUNC_MAHI_PARAM SUB_FUNC_MAHI_PARAM;

struct _SUB_FUNC_SEAL_PARAM { // 0x1
	/* 0x0 */ char EffTime;
};

typedef _SUB_FUNC_SEAL_PARAM SUB_FUNC_SEAL_PARAM;

struct _SUB_FUNC_KOUGEKI_PARAM { // 0x10
	/* 0x0 */ float NDmgMag;
	/* 0x4 */ float SDmgMag;
	/* 0x8 */ int SlowHTTime;
	/* 0xc */ float SlowHTRate;
};

typedef _SUB_FUNC_KOUGEKI_PARAM SUB_FUNC_KOUGEKI_PARAM;

struct NEQUIP_FUNC_DAT { // 0xc
	/* 0x0 */ int need_stock_num;
	/* 0x4 */ int pk2_no;
	/* 0x8 */ unsigned char r;
	/* 0x9 */ unsigned char g;
	/* 0xa */ unsigned char b;
	/* 0xb */ char bHitBack;
};

struct fixed_array_base<CVariable<char, 0, 3>,10,CVariable<char, 0, 3>[10]> { // 0xa
protected:
	/* 0x0 */ CVariable<char,0,3> m_aData[10];
	
public:
	fixed_array_base<CVariable<char, 0, 3>,10,CVariable<char, 0, 3>[10]>& operator=();
	fixed_array_base();
protected:
	fixed_array_base();
public:
	CVariable<char,0,3>& operator[]();
	CVariable<char,0,3>& operator[]();
	CVariable<char,0,3>* data();
	CVariable<char,0,3>* begin();
	CVariable<char,0,3>* end();
	void fill();
	size_t size();
	bool empty();
};

struct fixed_array<CVariable<char, 0, 3>,10> : /* 0x0 */ fixed_array_base<CVariable<char, 0, 3>,10,CVariable<char, 0, 3>[10]> { // 0xa
};

struct fixed_array_base<CVariable<char, 0, 9>,3,CVariable<char, 0, 9>[3]> { // 0x3
protected:
	/* 0x0 */ CVariable<char,0,9> m_aData[3];
	
public:
	fixed_array_base<CVariable<char, 0, 9>,3,CVariable<char, 0, 9>[3]>& operator=();
	fixed_array_base();
protected:
	fixed_array_base();
public:
	CVariable<char,0,9>& operator[]();
	CVariable<char,0,9>& operator[]();
	CVariable<char,0,9>* data();
	CVariable<char,0,9>* begin();
	CVariable<char,0,9>* end();
	void fill();
	size_t size();
	bool empty();
};

struct fixed_array<CVariable<char, 0, 9>,3> : /* 0x0 */ fixed_array_base<CVariable<char, 0, 9>,3,CVariable<char, 0, 9>[3]> { // 0x3
};

struct CVariable<char,0,2> { // 0x1
private:
	/* 0x0 */ char mValue;
	
public:
	CVariable<char,0,2>& operator=();
	CVariable();
	CVariable();
	void Init();
	void SetMax();
	void SetMin();
	char GetMax();
	char GetMin();
	char GetWidth();
	void Set();
	int Increment();
	int Decrement();
	int LoopIncrement();
	int LoopDecrement();
	int Offset();
	int Add();
	int Sub();
	int LoopAdd();
	int LoopSub();
	int Get();
};

struct CNEquipTraySave { // 0x20
	/* 0x00 */ fixed_array<CVariable<char, 0, 3>,10> mSubFuncLv;
	/* 0x0a */ CVariable<char,0,3> mStockGrade;
	/* 0x0b */ fixed_array<CVariable<char, 0, 9>,3> mEquipFunc;
	/* 0x0e */ CVariable<char,0,2> mSlctNo;
private:
	/* 0x10 */ int mDispGage;
	/* 0x14 */ int mBankGage;
	/* 0x18 */ int mStockNum;
	static char aStockMaxTbl[4];
	/* 0x1c */ float mAbsorbMultiRate;
	static SUB_FUNC_SI_PARAM sub_func_si_param[4];
	static SUB_FUNC_MAHI_PARAM sub_func_mahi_param[4];
	static SUB_FUNC_SUB_PARAM sub_func_oso_param[4];
	static SUB_FUNC_SUB_PARAM sub_func_seal_param[4];
	static SUB_FUNC_SUB_PARAM sub_func_trace_param[4];
	static SUB_FUNC_KOUGEKI_PARAM sub_func_rei_param[4];
	static SUB_FUNC_KOUGEKI_PARAM sub_func_koku_param[4];
	static SUB_FUNC_KOUGEKI_PARAM sub_func_metsu_param[4];
	static SUB_FUNC_KOUGEKI_PARAM sub_func_ren_param[4];
	
public:
	CNEquipTraySave& operator=();
	CNEquipTraySave();
	CNEquipTraySave();
	int NextFuncSet();
	void Absorb();
	void End();
	int ConvertGage2StockNum();
	int StockAdd();
	int IsStockMax();
	void Init();
	void ResetGage();
	void PushGage();
	void PopGage();
};

struct CFadeVariable<float> { // 0xc
private:
	/* 0x0 */ float mValue;
	/* 0x4 */ float mSpeed;
	/* 0x8 */ float mTarget;
	
public:
	CFadeVariable<float>& operator=();
	CFadeVariable();
	CFadeVariable();
	void Set();
	void Fade();
	void Fade2();
	int IsEnd();
	int GetState();
	void Work();
	float Get();
};

struct CBlinkVariable<char,0,127> { // 0x2
private:
	/* 0x0 */ char mValue;
	/* 0x1 */ char mSpeed;
	
public:
	CBlinkVariable<char,0,127>& operator=();
	CBlinkVariable();
	CBlinkVariable();
	void Init();
	void Blink();
	int IsOn();
	void Work();
	char Get();
	char Set();
	void SetMax();
	void SetMin();
	char GetMax();
	char GetMin();
	char GetWidth();
};

struct CBlinkVariable<char,0,100> { // 0x2
private:
	/* 0x0 */ char mValue;
	/* 0x1 */ char mSpeed;
	
public:
	CBlinkVariable<char,0,100>& operator=();
	CBlinkVariable();
	CBlinkVariable();
	void Init();
	void Blink();
	int IsOn();
	void Work();
	char Get();
	char Set();
	void SetMax();
	void SetMin();
	char GetMax();
	char GetMin();
	char GetWidth();
};

struct CBlinkSwitchVariable<unsigned char,50,100,1,0> { // 0x2
private:
	/* 0x0 */ unsigned char mValue;
	/* 0x1:0 */ unsigned char mOn : 1;
	/* 0x1:1 */ unsigned char mUp : 1;
	
public:
	CBlinkSwitchVariable<unsigned char,50,100,1,0>& operator=();
	CBlinkSwitchVariable();
	CBlinkSwitchVariable();
	void Init();
	void BlinkOn();
	void BlinkOff();
	int IsOn();
	void Work();
	unsigned char Get();
	void Set();
	unsigned char GetMax();
	unsigned char GetMin();
	unsigned char GetInitVal();
};

struct CBlinkSwitchVariable<unsigned char,0,60,20,0> { // 0x2
private:
	/* 0x0 */ unsigned char mValue;
	/* 0x1:0 */ unsigned char mOn : 1;
	/* 0x1:1 */ unsigned char mUp : 1;
	
public:
	CBlinkSwitchVariable<unsigned char,0,60,20,0>& operator=();
	CBlinkSwitchVariable();
	CBlinkSwitchVariable();
	void Init();
	void BlinkOn();
	void BlinkOff();
	int IsOn();
	void Work();
	unsigned char Get();
	void Set();
	unsigned char GetMax();
	unsigned char GetMin();
	unsigned char GetInitVal();
};

struct CWrkVariable<short int,0,128> { // 0x4
private:
	/* 0x0 */ short int mValue;
	/* 0x2 */ short int mAdd;
	
public:
	CWrkVariable<short int,0,128>& operator=();
	CWrkVariable();
	CWrkVariable();
	void Init();
	void SetMax();
	void SetMin();
	short int GetMax();
	short int GetMin();
	short int GetWidth();
	void SetAddVal();
	void Set();
	void Work();
	int LoopWork();
	short int Get();
	int GetState();
};

struct CWrkVariable<short int,20,128> { // 0x4
private:
	/* 0x0 */ short int mValue;
	/* 0x2 */ short int mAdd;
	
public:
	CWrkVariable<short int,20,128>& operator=();
	CWrkVariable();
	CWrkVariable();
	void Init();
	void SetMax();
	void SetMin();
	short int GetMax();
	short int GetMin();
	short int GetWidth();
	void SetAddVal();
	void Set();
	void Work();
	int LoopWork();
	short int Get();
	int GetState();
};

struct CBlinkSwitchVariable<short int,20,60,15,0> { // 0x4
private:
	/* 0x0 */ short int mValue;
	/* 0x2:0 */ unsigned char mOn : 1;
	/* 0x2:1 */ unsigned char mUp : 1;
	
public:
	CBlinkSwitchVariable<short int,20,60,15,0>& operator=();
	CBlinkSwitchVariable();
	CBlinkSwitchVariable();
	void Init();
	void BlinkOn();
	void BlinkOff();
	int IsOn();
	void Work();
	short int Get();
	void Set();
	short int GetMax();
	short int GetMin();
	short int GetInitVal();
};

struct CWrkVariable<short int,0,76> { // 0x4
private:
	/* 0x0 */ short int mValue;
	/* 0x2 */ short int mAdd;
	
public:
	CWrkVariable<short int,0,76>& operator=();
	CWrkVariable();
	CWrkVariable();
	void Init();
	void SetMax();
	void SetMin();
	short int GetMax();
	short int GetMin();
	short int GetWidth();
	void SetAddVal();
	void Set();
	void Work();
	int LoopWork();
	short int Get();
	int GetState();
};

struct CNEquipTrayWrk { // 0x80
	/* 0x00 */ CNEquipTraySave mSave;
	static NEQUIP_FUNC_DAT equip_func_tbl[0];
private:
	/* 0x20 */ int mRemainParticleNum;
	/* 0x24 */ CFadeVariable<float> mFOV;
	/* 0x30 */ CBlinkVariable<char,0,127> mStockAnm;
	/* 0x32 */ CBlinkVariable<char,0,100> mSubFuncAnmShot;
	/* 0x34 */ CBlinkSwitchVariable<unsigned char,50,100,1,0> mSubFuncAnmBlink;
	/* 0x36 */ CBlinkSwitchVariable<unsigned char,0,60,20,0> mSubFuncAnmBlinkNoSetup;
	/* 0x38 */ CFadeVariable<char> mGageAnmAlpha;
	/* 0x3c */ int mMode;
	/* 0x40 */ float mRot;
	/* 0x44 */ float mRotSpd;
	/* 0x48 */ int mRemainTime;
	/* 0x4c */ CWrkVariable<short int,0,128> mFcs;
	/* 0x50 */ CWrkVariable<short int,20,128> mRenzMarkBlink;
	/* 0x54 */ CBlinkSwitchVariable<short int,20,60,15,0> mAccumulateBollFlare;
	/* 0x58 */ CFVariable mAccumulateBollRot;
	/* 0x64 */ CWrkVariable<short int,0,76> mRenzMarkAlpha;
	/* 0x68 */ CWrkVariable<char,0,100> mSuckMouthScale;
	/* 0x6a */ CWrkVariable<short int,0,128> mSuckMouthAlpha;
	/* 0x6e */ CFadeVariable<short int> mPreSlctAlpha;
	/* 0x74 */ int mPreSlctYOffset;
	/* 0x78 */ CFadeVariable<short int> mNowOffset;
	/* 0x7e:0 */ unsigned int mSetupFlg : 1;
	/* 0x7e:1 */ unsigned int mGageUpFlg : 1;
	/* 0x7e:2 */ unsigned int mBattleFlg : 1;
	/* 0x7e:3 */ unsigned int mShotAble : 1;
	/* 0x7e:4 */ unsigned int mFirstFlg : 1;
	
public:
	CNEquipTrayWrk& operator=();
	CNEquipTrayWrk();
	CNEquipTrayWrk();
	void Init();
	void End();
	void Work();
	float GetDmgRate();
	void FinderConvertGage2StockNum();
	void Draw();
	void AbsorbImmediately();
	int Use2();
	int SetUp();
	void PutOut();
	int IsSetUp();
	void Rotate();
	void SetEffect();
	int Use();
	void Reset();
	void Draw();
	void RangeDrawSub();
	void SetRangeFlg();
	int IsMoving();
	float GetTargetFOV();
	float GetFOV();
	void SetRemainParticle();
	void SetSave();
	void SetBattleFlg();
	void GetSubFuncArray();
	void SetSubFuncArray();
	void RenzMarkDraw();
	void SetAbsorbMultiRate();
	int IsChargeResetOK();
	int IsHitBackON();
	void RenzMarkOn();
	void RenzMarkOff();
	void SetEffectsPre();
private:
	int IsReady();
	void BaseDraw();
	void AccumulaterDraw();
	int GetNowSubFuncNo();
	int EquipTrayFuncCostNum();
	void DispOneSub();
	void BarFlareDisp();
	int GetNowEquipFuncNum();
	int GetNowSubFuncLv();
};

struct CVariable<char,0,4> { // 0x1
private:
	/* 0x0 */ char mValue;
	
public:
	CVariable<char,0,4>& operator=();
	CVariable();
	CVariable();
	void Init();
	void SetMax();
	void SetMin();
	char GetMax();
	char GetMin();
	char GetWidth();
	void Set();
	int Increment();
	int Decrement();
	int LoopIncrement();
	int LoopDecrement();
	int Offset();
	int Add();
	int Sub();
	int LoopAdd();
	int LoopSub();
	int Get();
};

struct CCameraFilm { // 0x1
	/* 0x0 */ CVariable<char,0,4> mFilmType;
private:
	static unsigned char aFilmDamageTbl[5];
	static unsigned char aFilmMinPercentTbl[5];
	static unsigned char aFilmChargeSpdTbl[5];
	
public:
	CCameraFilm& operator=();
	CCameraFilm();
	CCameraFilm();
	int GetFilmDamage();
	int GetFilmMinPercent();
	int GetFilmChargeSpd();
};

typedef struct { // 0xc
	/* 0x0 */ int PlayerFollowON;
	/* 0x4 */ int FreeCameraON;
	/* 0x8 */ int CameraDebugON;
} DEBUG_CAMERA_MENU;

struct BIT_FLAGS<4> { // 0x4
protected:
	/* 0x0 */ int flag_32[1];
	
public:
	BIT_FLAGS<4>& operator=();
	BIT_FLAGS();
	BIT_FLAGS();
	void AllDown();
	void AllUp();
	int GetUpNum();
	void FlgUp();
	void FlgDown();
	int IsUp();
};

struct BIT_FLAGS<10> { // 0x4
protected:
	/* 0x0 */ int flag_32[1];
	
public:
	BIT_FLAGS<10>& operator=();
	BIT_FLAGS();
	BIT_FLAGS();
	void AllDown();
	void AllUp();
	int GetUpNum();
	void FlgUp();
	void FlgDown();
	int IsUp();
};

struct CCameraPowerUp { // 0x20
	/* 0x00 */ CVariable<char,0,3> mSensitiveGrade;
	/* 0x01 */ CVariable<char,0,3> mRadiusGrade;
	/* 0x02 */ CVariable<char,0,3> mRadiusGem;
	/* 0x03 */ CVariable<char,0,3> mSensiteiveGem;
	/* 0x04 */ CVariable<char,0,3> mAccumGem;
	/* 0x05 */ CVariable<char,0,3> mSubFuncGem[10];
	/* 0x10 */ BIT_FLAGS<4> mAdditionFlg;
	/* 0x14 */ BIT_FLAGS<4> mCamPartsFlg;
	/* 0x18 */ BIT_FLAGS<4> mCamPartsSetFlg;
	/* 0x1c */ BIT_FLAGS<10> mTemperedRenzFlg;
private:
	static float aRadiusTbl[4];
	static float aDistanceTbl[4];
	static float aDmgTbl[4];
	
public:
	CCameraPowerUp& operator=();
	CCameraPowerUp();
	CCameraPowerUp();
	float GetRadius();
	float GetRadiusRate();
	float GetDistance();
	float GetDmgRate();
	void Init();
	void AllRelease();
};

struct CCenterCircle { // 0x24
private:
	/* 0x00 */ CWrkVariable<char,0,100> maScale[4];
	/* 0x08 */ CWrkVariable<short int,0,128> mRippleAlpha;
	/* 0x0c */ CFadeVariable<short int> mR;
	/* 0x12 */ CFadeVariable<short int> mG;
	/* 0x18 */ CFadeVariable<short int> mB;
	/* 0x1e */ CFadeVariable<char> mMainAlpha;
	/* 0x21:0 */ unsigned int mHintFlg : 1;
	/* 0x21:1 */ unsigned int mAutoFlg : 1;
	/* 0x21:2 */ unsigned int mBattleFlg : 1;
	/* 0x21:3 */ unsigned int mEnemyFlg : 1;
	static char aMainAlpha[4];
	static unsigned char aRgb[4][3];
	
public:
	CCenterCircle& operator=();
	CCenterCircle();
	CCenterCircle();
	void Init();
	void FrameReset();
	void Work();
	void Draw();
	void SetMode();
	void SetHintFlg();
	void SetAutoFlg();
	void SetBattleFlg();
	void SetEneCatchFlg();
};

typedef struct { // 0xc
	/* 0x0 */ int cnt;
	/* 0x4 */ short int tx;
	/* 0x6 */ short int ty;
	/* 0x8 */ u_char alp;
} CENTER_CROSS;

struct CCenterCross { // 0x78
private:
	/* 0x00 */ CENTER_CROSS center_cercle[10];
	
public:
	CCenterCross& operator=();
	CCenterCross();
	CCenterCross();
	void Init();
	void Work();
	void Draw();
};

struct fixed_array_base<ENE_WRK,10,ENE_WRK[10]> { // 0x2da0
protected:
	/* 0x0000 */ ENE_WRK m_aData[10];
	
public:
	fixed_array_base<ENE_WRK,10,ENE_WRK[10]>& operator=();
	fixed_array_base();
protected:
	fixed_array_base();
public:
	ENE_WRK& operator[]();
	ENE_WRK& operator[]();
	ENE_WRK* data();
	ENE_WRK* begin();
	ENE_WRK* end();
	void fill();
	size_t size();
	bool empty();
};

struct fixed_array<ENE_WRK,10> : /* 0x0000 */ fixed_array_base<ENE_WRK,10,ENE_WRK[10]> { // 0x2da0
};

typedef struct { // 0x8
	/* 0x0 */ char step;
	/* 0x1 */ char menu_csr;
	/* 0x2 */ char chapter_csr;
	/* 0x3 */ char costume_csr;
	/* 0x4 */ char mio_csr;
	/* 0x5 */ char mayu_csr;
	/* 0x6 */ char diff_csr;
	/* 0x7 */ char clear_csr;
} CHAPTER_SEL_CTRL;

enum GRA3DBOUNDINGBOXVERTEXINDEX {
	BBVI_MMM = 0,
	BBVI_PMM = 1,
	BBVI_MPM = 2,
	BBVI_PPM = 3,
	BBVI_MMP = 4,
	BBVI_PMP = 5,
	BBVI_MPP = 6,
	BBVI_PPP = 7,
	BBVI_CENTER = 8,
	NUM_GRA3DBOUNDINGBOXVERTEXINDEX = 9
};

struct CHARBBDATA { // 0x30
	/* 0x00 */ float vMin[4];
	/* 0x10 */ float vMax[4];
	/* 0x20 */ int iProxyId;
};

struct BIT_FLAGS<3> { // 0x4
protected:
	/* 0x0 */ int flag_32[1];
	
public:
	BIT_FLAGS<3>& operator=();
	BIT_FLAGS();
	BIT_FLAGS();
	void AllDown();
	void AllUp();
	int GetUpNum();
	void FlgUp();
	void FlgDown();
	int IsUp();
};

struct BIT_FLAGS<2> { // 0x4
protected:
	/* 0x0 */ int flag_32[1];
	
public:
	BIT_FLAGS<2>& operator=();
	BIT_FLAGS();
	BIT_FLAGS();
	void AllDown();
	void AllUp();
	int GetUpNum();
	void FlgUp();
	void FlgDown();
	int IsUp();
};

struct BIT_FLAGS<9> { // 0x4
protected:
	/* 0x0 */ int flag_32[1];
	
public:
	BIT_FLAGS<9>& operator=();
	BIT_FLAGS();
	BIT_FLAGS();
	void AllDown();
	void AllUp();
	int GetUpNum();
	void FlgUp();
	void FlgDown();
	int IsUp();
};

typedef struct { // 0x18
	/* 0x00 */ fixed_array<char,4> clear_cnt;
	/* 0x04 */ char clear_flg;
	/* 0x05 */ char comp_soul_list_flg;
	/* 0x08 */ BIT_FLAGS<3> accessory_flg;
	/* 0x0c */ BIT_FLAGS<2> ending_movie_flg;
	/* 0x10 */ BIT_FLAGS<9> costume_flg;
	/* 0x14 */ BIT_FLAGS<4> difficulty_flg;
} CLEAR_FLG_CTRL;

struct CHpBar { // 0x6
private:
	/* 0x0 */ CWrkVariable<short int,0,128> mAlpha;
	/* 0x4 */ CWaitVariable<short int> mFadeWaitCnt;
	
public:
	CHpBar& operator=();
	CHpBar();
	CHpBar();
	void Init();
	void FadeIn();
	void FadeOut();
	void Work();
	void Draw();
};

typedef struct { // 0x14
	/* 0x00 */ int mode;
	/* 0x04 */ int cnt;
	/* 0x08 */ int flow;
	/* 0x0c */ float bright;
	/* 0x10 */ int flg;
} FILLAMENT_WRK;

struct CFilament { // 0x4c
	/* 0x00 */ RT_EV_WRK rt_ev_wrk;
private:
	/* 0x14 */ CWrkVariable<short int,0,128> mMasterAlp;
	/* 0x18 */ float mRate;
	/* 0x1c */ char mMode;
	/* 0x20 */ int mLockCnt;
	/* 0x24 */ int mRTTime;
	/* 0x28 */ float mHintRate;
	/* 0x2c */ float mAutoRate;
	/* 0x30 */ float mBattleRate;
	/* 0x34:0 */ unsigned int mRTFlg : 1;
	/* 0x38 */ FILLAMENT_WRK fillament_wrk;
	
public:
	CFilament& operator=();
	CFilament();
	CFilament();
	void DrawLock();
	void DrawUnlock();
	void RTModeOn();
	void RTModeOff();
	void SetBattle();
	void SetHint();
	void SetAuto();
	void FadeOut();
	void FadeIn();
	void Work();
	void Draw();
	void FrameReset();
	void Init();
	void SetSave();
};

struct CBlinkSwitchVariable<short int,0,128,1,0> { // 0x4
private:
	/* 0x0 */ short int mValue;
	/* 0x2:0 */ unsigned char mOn : 1;
	/* 0x2:1 */ unsigned char mUp : 1;
	
public:
	CBlinkSwitchVariable<short int,0,128,1,0>& operator=();
	CBlinkSwitchVariable();
	CBlinkSwitchVariable();
	void Init();
	void BlinkOn();
	void BlinkOff();
	int IsOn();
	void Work();
	short int Get();
	void Set();
	short int GetMax();
	short int GetMin();
	short int GetInitVal();
};

struct CSPChance { // 0x10
private:
	/* 0x0:0 */ unsigned int mbSeFlg : 1;
	/* 0x0:1 */ unsigned int mSPFlg : 1;
	/* 0x4 */ CFINDER_SND_BUF_PLAY mSe;
	/* 0x8 */ CWrkVariable<short int,0,128> mLampAlpha;
	/* 0xc */ CBlinkSwitchVariable<short int,0,128,1,0> mAlpha;
	
public:
	CSPChance& operator=();
	CSPChance();
	CSPChance();
	void Init();
	void Work();
	void Draw();
	void Release();
	void Set();
	void SEEnable();
	void SEDisable();
};

struct CWrkVariable<short int,0,127> { // 0x4
private:
	/* 0x0 */ short int mValue;
	/* 0x2 */ short int mAdd;
	
public:
	CWrkVariable<short int,0,127>& operator=();
	CWrkVariable();
	CWrkVariable();
	void Init();
	void SetMax();
	void SetMin();
	short int GetMax();
	short int GetMin();
	short int GetWidth();
	void SetAddVal();
	void Set();
	void Work();
	int LoopWork();
	short int Get();
	int GetState();
};

struct CEneLife { // 0x1c
private:
	/* 0x00 */ int red_bar_wait;
	/* 0x04 */ float now_hp_percent;
	/* 0x08 */ float disp_hp_percent;
	/* 0x0c */ float old_hp_percent;
	/* 0x10 */ float ene_hp_len;
	/* 0x14 */ CWrkVariable<short int,0,127> mDamageAlpha;
	/* 0x18 */ short int mDamage;
	
public:
	CEneLife& operator=();
	CEneLife();
	CEneLife();
	void Decrease();
	void Set();
	void FrameLenSet();
	void Work();
	void SetDamage();
	void Draw();
};

struct CBlinkSwitchVariable<char,70,90,15,40> { // 0x2
private:
	/* 0x0 */ char mValue;
	/* 0x1:0 */ unsigned char mOn : 1;
	/* 0x1:1 */ unsigned char mUp : 1;
	
public:
	CBlinkSwitchVariable<char,70,90,15,40>& operator=();
	CBlinkSwitchVariable();
	CBlinkSwitchVariable();
	void Init();
	void BlinkOn();
	void BlinkOff();
	int IsOn();
	void Work();
	char Get();
	void Set();
	char GetMax();
	char GetMin();
	char GetInitVal();
};

struct CFilmNo { // 0x2
private:
	/* 0x0 */ CBlinkSwitchVariable<char,70,90,15,40> mBlinkAlpha;
	
public:
	CFilmNo& operator=();
	CFilmNo();
	CFilmNo();
	void Init();
	void Work();
	void Draw();
	void BlinkOn();
	void BlinkOff();
};

struct CBlinkVariable<char,50,127> { // 0x2
private:
	/* 0x0 */ char mValue;
	/* 0x1 */ char mSpeed;
	
public:
	CBlinkVariable<char,50,127>& operator=();
	CBlinkVariable();
	CBlinkVariable();
	void Init();
	void Blink();
	int IsOn();
	void Work();
	char Get();
	char Set();
	void SetMax();
	void SetMin();
	char GetMax();
	char GetMin();
	char GetWidth();
};

struct CPhotoCharger { // 0x8
private:
	/* 0x0 */ CWaitVariable<short int> mNowWaitCnt;
	/* 0x2 */ CBlinkVariable<char,50,127> mFlare;
	/* 0x4 */ short int mWaitCnt;
	/* 0x6 */ short unsigned int mReady;
	
public:
	CPhotoCharger& operator=();
	CPhotoCharger();
	CPhotoCharger();
	void Init();
	void Reset();
	void Work();
	int IsReady();
	void Draw();
};

struct CSearchMark { // 0x8
private:
	/* 0x0 */ float mRot;
	/* 0x4 */ CWrkVariable<short int,0,128> mAlpha;
	
public:
	CSearchMark& operator=();
	CSearchMark();
	CSearchMark();
	void Init();
	void Work();
	void SetRot();
	void FadeIn();
	void FadeOut();
	void Draw();
	void Release();
};

struct _PHOTO_BONUS_SHOT { // 0x4
	/* 0x0:0 */ unsigned int triple : 1;
	/* 0x0:1 */ unsigned int dbl : 1;
	/* 0x0:2 */ unsigned int core : 1;
	/* 0x0:3 */ unsigned int close : 1;
	/* 0x0:4 */ unsigned int SP : 1;
	/* 0x0:5 */ unsigned int chance : 1;
};

typedef _PHOTO_BONUS_SHOT PHOTO_BONUS_SHOT;

struct CDamageDisp { // 0xc
private:
	/* 0x0 */ CWaitVariable<short int> mWaiter;
	/* 0x2 */ CBlinkVariable<char,0,127> mOneBlink;
	/* 0x4 */ short int mDamage;
	/* 0x8 */ int mScore;
	
public:
	CDamageDisp& operator=();
	CDamageDisp();
	CDamageDisp();
	void Init();
	void Work();
	void Req();
	void Draw();
};

struct CFinderBase { // 0x1
	CFinderBase& operator=();
	CFinderBase();
	CFinderBase();
	void Draw();
private:
	void DrawKakiwari();
};

struct CWrkVariable<char,0,64> { // 0x2
private:
	/* 0x0 */ char mValue;
	/* 0x1 */ char mAdd;
	
public:
	CWrkVariable<char,0,64>& operator=();
	CWrkVariable();
	CWrkVariable();
	void Init();
	void SetMax();
	void SetMin();
	char GetMax();
	char GetMin();
	char GetWidth();
	void SetAddVal();
	void Set();
	void Work();
	int LoopWork();
	char Get();
	int GetState();
};

struct CWrkVariable<int,0,128> { // 0x8
private:
	/* 0x0 */ int mValue;
	/* 0x4 */ int mAdd;
	
public:
	CWrkVariable<int,0,128>& operator=();
	CWrkVariable();
	CWrkVariable();
	void Init();
	void SetMax();
	void SetMin();
	int GetMax();
	int GetMin();
	int GetWidth();
	void SetAddVal();
	void Set();
	void Work();
	int LoopWork();
	int Get();
	int GetState();
};

struct CFadeVariable<int> { // 0xc
private:
	/* 0x0 */ int mValue;
	/* 0x4 */ int mSpeed;
	/* 0x8 */ int mTarget;
	
public:
	CFadeVariable<int>& operator=();
	CFadeVariable();
	CFadeVariable();
	void Set();
	void Fade();
	void Fade2();
	int IsEnd();
	int GetState();
	void Work();
	int Get();
};

struct CNPlyrCamera { // 0x30c
	/* 0x000 */ CCameraPowerUp camera_power_up;
	/* 0x020 */ CCameraFilm camera_film;
	/* 0x024 */ CNEquipTrayWrk eq_tray;
	/* 0x0a4 */ CFilament filament;
	/* 0x0f0 */ CCenterCircle center_circle;
	/* 0x114 */ CHpBar hp;
	/* 0x11a */ CFinderBase finder_base;
	/* 0x11c */ CSPChance sp;
	/* 0x12c */ CEneLife ene_life;
	/* 0x148 */ CSearchMark search_mark;
private:
	/* 0x150 */ CWrkVariable<short int,0,128> mFcs;
	/* 0x154 */ CFadeVariable<float> mFOV;
	/* 0x160 */ float mZoomRate;
	/* 0x164 */ void *finder_buf;
	/* 0x168 */ void *pl_life_buf;
	/* 0x16c:0 */ unsigned char mBattleFlg : 1;
	/* 0x16c:1 */ unsigned char mHintFlg : 1;
	/* 0x16d */ char mNoSpiritGageTimer;
	/* 0x16e */ char mDrawLockCnt;
	/* 0x16f */ CWrkVariable<char,0,64> mSpiritGageScale;
	/* 0x171 */ CWaitVariable<char> mFOVTimer;
	/* 0x172 */ CWaitVariable<short int> mInWaiter;
	/* 0x174 */ CWrkVariable<int,0,128> mMasterAlpha;
	/* 0x17c */ CWrkVariable<short int,0,128> mInAlpha;
	/* 0x180 */ short int mCntFinder;
	/* 0x184 */ CCenterCross center_cross;
	/* 0x1fc */ CFilmNo film_no;
	/* 0x200 */ CSpiritGage *mpSpiritGage;
	/* 0x204 */ CFadeVariable<int> mSpiritGageAlpha;
	/* 0x210 */ CPhotoCharger charger;
	/* 0x218 */ CFINDER_SND_BUF_PLAY mSpiritNoise;
	/* 0x21c */ CDamageDisp mDmgDisp;
	/* 0x228 */ CBonusShot mBonusShot;
	
public:
	CNPlyrCamera& operator=();
	CNPlyrCamera();
	CNPlyrCamera();
	void SetUp();
	void FinderIn();
	void FinderOut();
	void DrawLock();
	void DrawUnlock();
	void Init();
	void Release();
	void Main();
	void Draw();
	void SetSpiritGage();
	int IsPhotoAble();
	void ResetCharge();
	void SetBattleFlg();
	void SetHintFlg();
	void FrameReset();
	void InCircleDrawLock();
	void ReqNoiseUp();
	void ReqNoiseReset();
	float GetFOVRate();
	void ReqZoomIn();
	void ReqZoomOut();
	void PhotoInfoDisp();
	void PhotoInfoDispNew();
private:
	void ZoomWork();
	void DrawSpiritGageBase();
	void CaptureCircleDraw();
	void GetFinderMovePos();
};

struct fixed_array_base<char,42,char[42]> { // 0x2a
protected:
	/* 0x00 */ char m_aData[42];
	
public:
	fixed_array_base<char,42,char[42]>& operator=();
	fixed_array_base();
protected:
	fixed_array_base();
public:
	char& operator[]();
	char& operator[]();
	char* data();
	char* begin();
	char* end();
	void fill();
	size_t size();
	bool empty();
};

struct fixed_array<char,42> : /* 0x00 */ fixed_array_base<char,42,char[42]> { // 0x2a
};

struct fixed_array_base<char,40,char[40]> { // 0x28
protected:
	/* 0x00 */ char m_aData[40];
	
public:
	fixed_array_base<char,40,char[40]>& operator=();
	fixed_array_base();
protected:
	fixed_array_base();
public:
	char& operator[]();
	char& operator[]();
	char* data();
	char* begin();
	char* end();
	void fill();
	size_t size();
	bool empty();
};

struct fixed_array<char,40> : /* 0x00 */ fixed_array_base<char,40,char[40]> { // 0x28
};

struct fixed_array_base<char,26,char[26]> { // 0x1a
protected:
	/* 0x00 */ char m_aData[26];
	
public:
	fixed_array_base<char,26,char[26]>& operator=();
	fixed_array_base();
protected:
	fixed_array_base();
public:
	char& operator[]();
	char& operator[]();
	char* data();
	char* begin();
	char* end();
	void fill();
	size_t size();
	bool empty();
};

struct fixed_array<char,26> : /* 0x00 */ fixed_array_base<char,26,char[26]> { // 0x1a
};

struct fixed_array_base<char,10,char[10]> { // 0xa
protected:
	/* 0x0 */ char m_aData[10];
	
public:
	fixed_array_base<char,10,char[10]>& operator=();
	fixed_array_base();
protected:
	fixed_array_base();
public:
	char& operator[]();
	char& operator[]();
	char* data();
	char* begin();
	char* end();
	void fill();
	size_t size();
	bool empty();
};

struct fixed_array<char,10> : /* 0x0 */ fixed_array_base<char,10,char[10]> { // 0xa
};

typedef struct { // 0xa0
	/* 0x00 */ fixed_array<char,42> pocketbook;
	/* 0x2a */ fixed_array<char,42> scrap;
	/* 0x54 */ fixed_array<char,40> oldbook;
	/* 0x7c */ fixed_array<char,26> photograph;
	/* 0x96 */ fixed_array<char,10> map;
} PLYR_FILE;

typedef struct { // 0x4
	/* 0x0 */ int tex_id;
} FILE_DAT;

typedef struct { // 0x8
	/* 0x0 */ char step;
	/* 0x4 */ int stream_id;
} CLEAR_MENU_CTRL;

typedef struct { // 0x10
	/* 0x0 */ int fade_timer;
	/* 0x4 */ int bg_anim_timer;
	/* 0x8 */ int moyou1_anim_timer;
	/* 0xc */ int moyou2_anim_timer;
} CLEAR_MENU_DISP;

typedef struct { // 0x4
	/* 0x0 */ char step;
	/* 0x1 */ char mode;
	/* 0x2 */ char csr;
	/* 0x3 */ char conf_csr;
} CLEAR_MENU_TOP_CTRL;

typedef struct { // 0x4
	/* 0x0 */ char anim_step;
	/* 0x1 */ char anim_timer;
	/* 0x2 */ char conf_anim_step;
	/* 0x3 */ char conf_anim_timer;
} CLEAR_MENU_TOP_DISP;

typedef struct { // 0x2
	/* 0x0 */ char row;
	/* 0x1 */ char col;
} DCT_ROOT;

typedef struct { // 0xc
	/* 0x0 */ char *file;
	/* 0x4 */ unsigned char mask;
	/* 0x8 */ int rack;
} BIT_FILE;

typedef struct { // 0xc
	/* 0x0 */ int msg_id;
	/* 0x4 */ int start_frame;
	/* 0x8 */ int end_frame;
} MOVIE_TITLE_DAT;

enum SCN_DB_EFF_TYPE {
	SCN_DB_EFF_Z_DEP = 0,
	SCN_DB_EFF_MONO = 1,
	SCN_DB_EFF_SEPIA = 2,
	SCN_DB_EFF_FLG_ONLY = 2,
	SCN_DB_EFF_DITHER = 3,
	SCN_DB_EFF_BLUR_N = 4,
	SCN_DB_EFF_BLUR_B = 5,
	SCN_DB_EFF_BLUR_W = 6,
	SCN_DB_EFF_DEFORM = 7,
	SCN_DB_EFF_FOCUS = 8,
	SCN_DB_EFF_CONTRAST1 = 9,
	SCN_DB_EFF_CONTRAST2 = 10,
	SCN_DB_EFF_CONTRAST3 = 11,
	SCN_DB_EFF_NEGA = 12,
	SCN_DB_EFF_FADE_FRAME = 13,
	SCN_DB_EFF_CROSS_FADE = 14,
	SCN_DB_EFF_FADE_SCR = 15,
	SCN_DB_EFF_SHIBATA = 16,
	SCN_DB_EFF_MAX = 17
};

typedef struct { // 0x24
	/* 0x00 */ u_char mode;
	/* 0x01 */ u_char mdl_num;
	/* 0x02 */ u_char anm_num;
	/* 0x03 */ char cur_id;
	/* 0x04 */ u_char sel_id;
	/* 0x05 */ char mot_num;
	/* 0x06 */ char mim_num;
	/* 0x07 */ char bg_num;
	/* 0x08 */ char ani_type;
	/* 0x0c */ ANI_CODE **tbl;
	/* 0x10 */ u_int type;
	/* 0x14 */ u_int mdl_id;
	/* 0x18 */ u_int anm_id;
	/* 0x1c */ u_int mimloop;
	/* 0x20 */ u_int motloop;
} MOTTEST_WORK;

typedef struct { // 0x10
	/* 0x0 */ u_int r;
	/* 0x4 */ u_int g;
	/* 0x8 */ u_int b;
	/* 0xc */ u_int pad;
} MT_RGB_WORK;

typedef struct { // 0x10
	/* 0x0 */ int x;
	/* 0x4 */ int y;
	/* 0x8 */ int z;
	/* 0xc */ u_int pad;
} MT_IVECTOR;

enum BUTTERFLY_MOVE_TYPE {
	BUTTERFLY_MOVE_DEFAULT = 0,
	BUTTERFLY_MOVE_TO_TARGET = 1
};

typedef struct { // 0x2c
	/* 0x00 */ int Speed;
	/* 0x04 */ int TurnMax;
	/* 0x08 */ int BureLeftRight;
	/* 0x0c */ int BureUpDown;
	/* 0x10 */ int InTime;
	/* 0x14 */ int OutTime;
	/* 0x18 */ int LockOnIntervalNear;
	/* 0x1c */ int LockOnIntervalMiddle;
	/* 0x20 */ int LockOnIntervalFar;
	/* 0x24 */ int NearDistance;
	/* 0x28 */ int FarDistance;
} BUTTERFLY_TARGET_PARAMETER;

typedef struct { // 0xbc
	/* 0x00 */ ENE_DMG_LARGE_HIT_PARAMETER Param;
	/* 0x5c */ ENE_DMG_BLUR_CONTRAST_PARAMETER BlurContParam;
	/* 0xac */ int PadR2_Req;
	/* 0xb0 */ int FileNo;
	/* 0xb4 */ int SaveSwitch;
	/* 0xb8 */ int SaveSwitchBlur;
} DEBUG_LARGE_HIT;

typedef struct { // 0xa4
	/* 0x00 */ int Speed;
	/* 0x04 */ int PosX;
	/* 0x08 */ int PosY;
	/* 0x0c */ int PosZ;
	/* 0x10 */ int ParticleScaleX;
	/* 0x14 */ int ParticleScaleY;
	/* 0x18 */ int ParticleR;
	/* 0x1c */ int ParticleG;
	/* 0x20 */ int ParticleB;
	/* 0x24 */ int ParticleAlpha;
	/* 0x28 */ int TailDivision;
	/* 0x2c */ int TailR;
	/* 0x30 */ int TailG;
	/* 0x34 */ int TailB;
	/* 0x38 */ int TailAlpha;
	/* 0x3c */ int TailWidth;
	/* 0x40 */ int BouStartScaleX;
	/* 0x44 */ int BouEndScaleX;
	/* 0x48 */ int BouStartScaleY;
	/* 0x4c */ int BouEndScaleY;
	/* 0x50 */ int BouStartAlpha;
	/* 0x54 */ int BouEndAlpha;
	/* 0x58 */ int BouStartRot;
	/* 0x5c */ int BouEndRot;
	/* 0x60 */ int WakkaStartScaleX;
	/* 0x64 */ int WakkaEndScaleX;
	/* 0x68 */ int WakkaStartScaleY;
	/* 0x6c */ int WakkaEndScaleY;
	/* 0x70 */ int WakkaStartAlpha;
	/* 0x74 */ int WakkaEndAlpha;
	/* 0x78 */ int AlphaBlendA;
	/* 0x7c */ int AlphaBlendB;
	/* 0x80 */ int AlphaBlendC;
	/* 0x84 */ int AlphaBlendD;
	/* 0x88 */ int AlphaBlendFIX;
	/* 0x8c */ int SpreadTime;
	/* 0x90 */ int StartSpeed;
	/* 0x94 */ int AnimaStartTimeMin;
	/* 0x98 */ int AnimaStartTimeWidth;
	/* 0x9c */ int DispPositionFlg;
	/* 0xa0 */ int SaveSwitch;
} DEBUG_SUIKOMI;

typedef struct { // 0x1c
	/* 0x00 */ int WaveSpeed;
	/* 0x04 */ int WaveRate;
	/* 0x08 */ int Alpha;
	/* 0x0c */ int R;
	/* 0x10 */ int G;
	/* 0x14 */ int B;
	/* 0x18 */ int SaveSwitch;
} DEBUG_PARTS_DEFORM;

typedef struct { // 0x34
	/* 0x00 */ int TypeCursor;
	/* 0x04 */ int StartFrame;
	/* 0x08 */ int InFrame;
	/* 0x0c */ int KeepFrame;
	/* 0x10 */ int OutFrame;
	/* 0x14 */ int ParticleFrame;
	/* 0x18 */ int WaveSpeed;
	/* 0x1c */ int WaveRate;
	/* 0x20 */ int Alpha;
	/* 0x24 */ int R;
	/* 0x28 */ int G;
	/* 0x2c */ int B;
	/* 0x30 */ int SaveSwitch;
} DEBUG_ZERO_PARTS_DEFORM;

typedef struct { // 0x38
	/* 0x00 */ int ScaleX_00;
	/* 0x04 */ int ScaleY_00;
	/* 0x08 */ int Alpha_00;
	/* 0x0c */ float fAlpha_00;
	/* 0x10 */ int WaveSpeed;
	/* 0x14 */ float fWaveSpeed;
	/* 0x18 */ int WaveRate;
	/* 0x1c */ float fWaveRate;
	/* 0x20 */ int ScaleX_01;
	/* 0x24 */ int ScaleY_01;
	/* 0x28 */ int Alpha_01;
	/* 0x2c */ float fAlpha_01;
	/* 0x30 */ int SaveSwitch;
	/* 0x34 */ int DeadSaveSwitch;
} DEBUG_ENEMY_PARTS_DEFORM;

typedef struct { // 0x34
	/* 0x00 */ int LifeTime;
	/* 0x04 */ int MoveInterval;
	/* 0x08 */ int InOutTime;
	/* 0x0c */ int SpeedRate;
	/* 0x10 */ int Alpha;
	/* 0x14 */ int FreaSizeW;
	/* 0x18 */ int FreaSizeH;
	/* 0x1c */ int FreaAlphaMax;
	/* 0x20 */ int FreaAlphaMin;
	/* 0x24 */ int BirthRate;
	/* 0x28 */ int BirthMax;
	/* 0x2c */ int Request;
	/* 0x30 */ int SaveSwitch;
} DEBUG_BUTTERFLY_BODY;

typedef struct { // 0x3c
	/* 0x00 */ int LifeTime;
	/* 0x04 */ int VelocityMin;
	/* 0x08 */ int VelocityMax;
	/* 0x0c */ int DirectionX;
	/* 0x10 */ int DirectionY;
	/* 0x14 */ int SpreadX;
	/* 0x18 */ int SpreadY;
	/* 0x1c */ int AccelY;
	/* 0x20 */ int NumMin;
	/* 0x24 */ int NumMax;
	/* 0x28 */ int SizeW;
	/* 0x2c */ int SizeH;
	/* 0x30 */ int Alpha;
	/* 0x34 */ int OutputRate;
	/* 0x38 */ int SaveSwitch;
} DEBUG_BUTTERFLY_PARTICLE;

typedef struct { // 0x34
	/* 0x00 */ BUTTERFLY_TARGET_PARAMETER Param;
	/* 0x2c */ int FileNo;
	/* 0x30 */ int SaveSwitch;
} DEBUG_BUTTERFLY_TARGET;

typedef struct { // 0x44
	/* 0x00 */ int RainNum;
	/* 0x04 */ int ColorTopR;
	/* 0x08 */ int ColorTopG;
	/* 0x0c */ int ColorTopB;
	/* 0x10 */ int ColorTopA;
	/* 0x14 */ int ColorBottomR;
	/* 0x18 */ int ColorBottomG;
	/* 0x1c */ int ColorBottomB;
	/* 0x20 */ int ColorBottomA;
	/* 0x24 */ int SpeedXMax;
	/* 0x28 */ int SpeedXMin;
	/* 0x2c */ int SpeedYMax;
	/* 0x30 */ int SpeedYMin;
	/* 0x34 */ int SpeedZMax;
	/* 0x38 */ int SpeedZMin;
	/* 0x3c */ int Length;
	/* 0x40 */ int SaveSwitch;
} DEBUG_RAIN;

typedef struct { // 0x48
	/* 0x00 */ int SprayNum;
	/* 0x04 */ int LifeTime;
	/* 0x08 */ int StartScale;
	/* 0x0c */ int LastScaleMax;
	/* 0x10 */ int LastScaleMin;
	/* 0x14 */ int AppearNumMin;
	/* 0x18 */ int AppearNumMax;
	/* 0x1c */ int R;
	/* 0x20 */ int G;
	/* 0x24 */ int B;
	/* 0x28 */ int Alpha;
	/* 0x2c */ int SpeedXMax;
	/* 0x30 */ int SpeedXMin;
	/* 0x34 */ int SpeedYMax;
	/* 0x38 */ int SpeedYMin;
	/* 0x3c */ int SpeedZMax;
	/* 0x40 */ int SpeedZMin;
	/* 0x44 */ int SaveSwitch;
} DEBUG_SPRAY;

typedef struct { // 0x40
	/* 0x00 */ int Frequency;
	/* 0x04 */ int ScaleX;
	/* 0x08 */ int ScaleY;
	/* 0x0c */ int R;
	/* 0x10 */ int G;
	/* 0x14 */ int B;
	/* 0x18 */ int Alpha;
	/* 0x1c */ int SpeedXMax;
	/* 0x20 */ int SpeedXMin;
	/* 0x24 */ int SpeedYMax;
	/* 0x28 */ int SpeedYMin;
	/* 0x2c */ int SpeedZMax;
	/* 0x30 */ int SpeedZMin;
	/* 0x34 */ int Gravity;
	/* 0x38 */ int GroundHeight;
	/* 0x3c */ int SaveSwitch;
} DEBUG_DROP_OF_WATER;

typedef struct { // 0x7c
	/* 0x00 */ TORCH2_PARAMETER Param;
	/* 0x74 */ int FileNo;
	/* 0x78 */ int SaveSwitch;
} DEBUG_TORCH;

typedef struct { // 0x2c
	/* 0x00 */ TORCH2_BURST_PARAMETER Param;
	/* 0x24 */ int FileNo;
	/* 0x28 */ int SaveSwitch;
} DEBUG_TORCH_BURST;

typedef struct { // 0x58
	/* 0x00 */ TORCH2_SPARK_PARAMETER Param;
	/* 0x50 */ int FileNo;
	/* 0x54 */ int SaveSwitch;
} DEBUG_TORCH_SPARK;

typedef struct { // 0x28
	/* 0x00 */ int InTime;
	/* 0x04 */ int KeepTime;
	/* 0x08 */ int OutTime;
	/* 0x0c */ int PowerMax;
	/* 0x10 */ int PowerMin;
	/* 0x14 */ int AngleMax;
	/* 0x18 */ int AngleMin;
	/* 0x1c */ int IntervalMax;
	/* 0x20 */ int IntervalMin;
	/* 0x24 */ int SaveSwitch;
} DEBUG_TORCH_WIND;

typedef struct { // 0x74
	/* 0x00 */ int LifeTimeMax;
	/* 0x04 */ int LifeTimeMin;
	/* 0x08 */ int AppearNumMax;
	/* 0x0c */ int AppearNumMin;
	/* 0x10 */ int OffsetX;
	/* 0x14 */ int OffsetY;
	/* 0x18 */ int OffsetZ;
	/* 0x1c */ int SpeedXMax;
	/* 0x20 */ int SpeedXMin;
	/* 0x24 */ int SpeedYMax;
	/* 0x28 */ int SpeedYMin;
	/* 0x2c */ int SpeedZMax;
	/* 0x30 */ int SpeedZMin;
	/* 0x34 */ int AccelYMax;
	/* 0x38 */ int AccelYMin;
	/* 0x3c */ int BrakeRate;
	/* 0x40 */ int StartScale;
	/* 0x44 */ int EndScale;
	/* 0x48 */ int StartAlpha;
	/* 0x4c */ int EndAlpha;
	/* 0x50 */ int R;
	/* 0x54 */ int G;
	/* 0x58 */ int B;
	/* 0x5c */ int AlphaBlendA;
	/* 0x60 */ int AlphaBlendB;
	/* 0x64 */ int AlphaBlendC;
	/* 0x68 */ int AlphaBlendD;
	/* 0x6c */ int AlphaBlendFIX;
	/* 0x70 */ int SaveSwitch;
} DEBUG_CLOUD_OF_DUST;

typedef struct { // 0xa0
	/* 0x00 */ int ScrollU;
	/* 0x04 */ int ScrollV;
	/* 0x08 */ int AlphaMax;
	/* 0x0c */ int Color00R;
	/* 0x10 */ int Color00G;
	/* 0x14 */ int Color00B;
	/* 0x18 */ int Color01R;
	/* 0x1c */ int Color01G;
	/* 0x20 */ int Color01B;
	/* 0x24 */ int Color02R;
	/* 0x28 */ int Color02G;
	/* 0x2c */ int Color02B;
	/* 0x30 */ int Color03R;
	/* 0x34 */ int Color03G;
	/* 0x38 */ int Color03B;
	/* 0x3c */ int Color04R;
	/* 0x40 */ int Color04G;
	/* 0x44 */ int Color04B;
	/* 0x48 */ int Color05R;
	/* 0x4c */ int Color05G;
	/* 0x50 */ int Color05B;
	/* 0x54 */ int Color06R;
	/* 0x58 */ int Color06G;
	/* 0x5c */ int Color06B;
	/* 0x60 */ int Color07R;
	/* 0x64 */ int Color07G;
	/* 0x68 */ int Color07B;
	/* 0x6c */ int Color08R;
	/* 0x70 */ int Color08G;
	/* 0x74 */ int Color08B;
	/* 0x78 */ int Color09R;
	/* 0x7c */ int Color09G;
	/* 0x80 */ int Color09B;
	/* 0x84 */ int Color10R;
	/* 0x88 */ int Color10G;
	/* 0x8c */ int Color10B;
	/* 0x90 */ int Color11R;
	/* 0x94 */ int Color11G;
	/* 0x98 */ int Color11B;
	/* 0x9c */ int SaveSwitch;
} DEBUG_LIGHT_COME_IN;

typedef struct { // 0x34
	/* 0x00 */ int AlphaMax;
	/* 0x04 */ int AlphaMin;
	/* 0x08 */ int CycleFrame;
	/* 0x0c */ int R;
	/* 0x10 */ int G;
	/* 0x14 */ int B;
	/* 0x18 */ int DoubleDispFlg;
	/* 0x1c */ int ScaleX;
	/* 0x20 */ int ScaleY;
	/* 0x24 */ int OffsetX;
	/* 0x28 */ int OffsetY;
	/* 0x2c */ int OffsetZ;
	/* 0x30 */ int SaveSwitch;
} DEBUG_TORCH_BIGFREA;

typedef struct { // 0x20
	/* 0x00 */ int Radius;
	/* 0x04 */ int Speed;
	/* 0x08 */ int WaveYSize;
	/* 0x0c */ int WaveYSpeed;
	/* 0x10 */ int OffsetX;
	/* 0x14 */ int OffsetY;
	/* 0x18 */ int OffsetZ;
	/* 0x1c */ int SaveSwitch;
} DEBUG_TORCH_MOVE;

typedef struct { // 0xbc
	/* 0x00 */ HAZE_PARAMETER Param;
	/* 0xa8 */ int AllSpeedCall;
	/* 0xac */ int Request;
	/* 0xb0 */ int RequestOld;
	/* 0xb4 */ int SaveSwitch;
	/* 0xb8 */ void *pEffRet;
} DEBUG_HAZE;

typedef struct { // 0x40
	/* 0x00 */ int ParticleMax;
	/* 0x04 */ int Area;
	/* 0x08 */ int Height;
	/* 0x0c */ int AlphaInTime;
	/* 0x10 */ int AlphaOutTime;
	/* 0x14 */ int SpeedX;
	/* 0x18 */ int SpeedY;
	/* 0x1c */ int SpeedZ;
	/* 0x20 */ int MoveRange;
	/* 0x24 */ int R;
	/* 0x28 */ int G;
	/* 0x2c */ int B;
	/* 0x30 */ int Alpha;
	/* 0x34 */ int SaveSwitch;
	/* 0x38 */ int Request;
	/* 0x3c */ int RequestOld;
} DEBUG_LEAVES_FALL;

typedef struct { // 0x1c
	/* 0x00 */ int ScrollU[2];
	/* 0x08 */ int ScrollV[2];
	/* 0x10 */ int Alpha[2];
	/* 0x18 */ int SaveSwitch;
} DEBUG_RIVER;

typedef struct { // 0x48
	/* 0x00 */ int ScrollU_A[2];
	/* 0x08 */ int ScrollV_A[2];
	/* 0x10 */ int ScrollU_B[2];
	/* 0x18 */ int ScrollV_B[2];
	/* 0x20 */ int ScrollU_C[2];
	/* 0x28 */ int ScrollV_C[2];
	/* 0x30 */ int Frame_A;
	/* 0x34 */ int Frame_B;
	/* 0x38 */ int Frame_C;
	/* 0x3c */ int Alpha[2];
	/* 0x44 */ int SaveSwitch;
} DEBUG_LAKE;

typedef struct { // 0x54
	/* 0x00 */ int OffsetX;
	/* 0x04 */ int OffsetY;
	/* 0x08 */ int OffsetZ;
	/* 0x0c */ int PolygonScale;
	/* 0x10 */ int StartScale;
	/* 0x14 */ int EndScale;
	/* 0x18 */ int R;
	/* 0x1c */ int G;
	/* 0x20 */ int B;
	/* 0x24 */ int AlphaInTime;
	/* 0x28 */ int AlphaKeepTime;
	/* 0x2c */ int AlphaOutTime;
	/* 0x30 */ int AlphaMaxCenter;
	/* 0x34 */ int AlphaMaxEdge;
	/* 0x38 */ int AlphaBlendA;
	/* 0x3c */ int AlphaBlendB;
	/* 0x40 */ int AlphaBlendC;
	/* 0x44 */ int AlphaBlendD;
	/* 0x48 */ int AlphaBlendFIX;
	/* 0x4c */ int Request;
	/* 0x50 */ int SaveSwitch;
} DEBUG_CAMERA_FLASH;

typedef struct { // 0x2c
	/* 0x00 */ int ColorR;
	/* 0x04 */ int ColorG;
	/* 0x08 */ int ColorB;
	/* 0x0c */ int FlameScale;
	/* 0x10 */ int FreaOffsetY;
	/* 0x14 */ int FreaScale;
	/* 0x18 */ int FreaAlphaMax;
	/* 0x1c */ int FreaAlphaMin;
	/* 0x20 */ int Request;
	/* 0x24 */ int RequestOld;
	/* 0x28 */ int SaveSwitch;
} DEBUG_MANY_CANDLE;

typedef struct { // 0x34
	/* 0x00 */ int ScaleXMax;
	/* 0x04 */ int ScaleXMin;
	/* 0x08 */ int ScaleYMax;
	/* 0x0c */ int ScaleYMin;
	/* 0x10 */ int AlphaMax;
	/* 0x14 */ int AlphaMin;
	/* 0x18 */ int Time;
	/* 0x1c */ int ColorR;
	/* 0x20 */ int ColorG;
	/* 0x24 */ int ColorB;
	/* 0x28 */ int FlameAlpha;
	/* 0x2c */ int FlameOffsetY;
	/* 0x30 */ int SaveSwitch;
} DEBUG_TOUROU_FREA;

typedef struct { // 0x28
	/* 0x00 */ int ColorMaxR;
	/* 0x04 */ int ColorMaxG;
	/* 0x08 */ int ColorMaxB;
	/* 0x0c */ int ColorMinR;
	/* 0x10 */ int ColorMinG;
	/* 0x14 */ int ColorMinB;
	/* 0x18 */ int Alpha;
	/* 0x1c */ int TimeMax;
	/* 0x20 */ int TimeMin;
	/* 0x24 */ int SaveSwitch;
} DEBUG_TOUROU_BASE;

typedef struct { // 0x54
	/* 0x00 */ int Item0_ScaleMax;
	/* 0x04 */ int Item0_ScaleMin;
	/* 0x08 */ int Item0_ScaleTime;
	/* 0x0c */ int Item0_AlphaMax;
	/* 0x10 */ int Item0_AlphaMin;
	/* 0x14 */ int Item0_AlphaTime;
	/* 0x18 */ int Item0_R;
	/* 0x1c */ int Item0_G;
	/* 0x20 */ int Item0_B;
	/* 0x24 */ int Item1_ScaleMax;
	/* 0x28 */ int Item1_ScaleMin;
	/* 0x2c */ int Item1_ScaleTime;
	/* 0x30 */ int Item1_AlphaMax;
	/* 0x34 */ int Item1_AlphaMin;
	/* 0x38 */ int Item1_AlphaTime;
	/* 0x3c */ int Item1_R;
	/* 0x40 */ int Item1_G;
	/* 0x44 */ int Item1_B;
	/* 0x48 */ int TotalTime;
	/* 0x4c */ int CounterReset;
	/* 0x50 */ int SaveSwitch;
} DEBUG_ITEM_EFFECT2;

typedef struct { // 0x60
	/* 0x00 */ int DitherAlphaMax;
	/* 0x04 */ int DitherAlphaMin;
	/* 0x08 */ int DitherIntervalMax;
	/* 0x0c */ int DitherIntervalMin;
	/* 0x10 */ int DitherSpeed;
	/* 0x14 */ int DitherPatternAlpha;
	/* 0x18 */ int DitherPatternColor;
	/* 0x1c */ int IntervalMax;
	/* 0x20 */ int IntervalMin;
	/* 0x24 */ int DispTimeMax;
	/* 0x28 */ int DispTimeMin;
	/* 0x2c */ int ShakeX;
	/* 0x30 */ int ShakeY;
	/* 0x34 */ int ScaleMin;
	/* 0x38 */ int ScaleMax;
	/* 0x3c */ int AlphaRate;
	/* 0x40 */ int AlphaInMax;
	/* 0x44 */ int AlphaInMin;
	/* 0x48 */ int AlphaKeepMax;
	/* 0x4c */ int AlphaKeepMin;
	/* 0x50 */ int AlphaOutMax;
	/* 0x54 */ int AlphaOutMin;
	/* 0x58 */ int Request;
	/* 0x5c */ int SaveSwitch;
} DEBUG_SCREEN_SAVER;

typedef struct { // 0x28
	/* 0x00 */ int OffsetX;
	/* 0x04 */ int OffsetY;
	/* 0x08 */ int OffsetZ;
	/* 0x0c */ int ColorR;
	/* 0x10 */ int ColorG;
	/* 0x14 */ int ColorB;
	/* 0x18 */ int Alpha;
	/* 0x1c */ int ScaleX;
	/* 0x20 */ int ScaleY;
	/* 0x24 */ int SaveSwitch;
} DEBUG_DOOR_SEAL_SOUL;

typedef struct { // 0x88
	/* 0x00 */ int SoulInTime;
	/* 0x04 */ int SoulKeepTime;
	/* 0x08 */ int DeformInTime;
	/* 0x0c */ int DeformKeepTime;
	/* 0x10 */ int SoulOutTime;
	/* 0x14 */ int DeformOutTime;
	/* 0x18 */ int OffsetX;
	/* 0x1c */ int OffsetY;
	/* 0x20 */ int OffsetZ;
	/* 0x24 */ int SoulColorR;
	/* 0x28 */ int SoulColorG;
	/* 0x2c */ int SoulColorB;
	/* 0x30 */ int SoulAlpha;
	/* 0x34 */ int SoulScaleX;
	/* 0x38 */ int SoulScaleY;
	/* 0x3c */ int DeformScaleX;
	/* 0x40 */ int DeformScaleY;
	/* 0x44 */ int DeformR;
	/* 0x48 */ int DeformG;
	/* 0x4c */ int DeformB;
	/* 0x50 */ int DeformSpeed;
	/* 0x54 */ int DeformWaveRate;
	/* 0x58 */ int DeformAlphaMax;
	/* 0x5c */ int BlurScaleX;
	/* 0x60 */ int BlurScaleY;
	/* 0x64 */ int BlurAlphaMax;
	/* 0x68 */ int DitherType;
	/* 0x6c */ int DitherAlpha;
	/* 0x70 */ int DitherSpeed;
	/* 0x74 */ int DitherPatternAlpha;
	/* 0x78 */ int DitherPatternColor;
	/* 0x7c */ int PadR2_Req;
	/* 0x80 */ int Request;
	/* 0x84 */ int SaveSwitch;
} DEBUG_DOOR_SEAL_DISAPPEAR;

typedef struct { // 0x5c
	/* 0x00 */ int ParticleNum;
	/* 0x04 */ int Speed;
	/* 0x08 */ int Alpha;
	/* 0x0c */ int ParticleScaleX;
	/* 0x10 */ int ParticleScaleY;
	/* 0x14 */ int SpreadTime;
	/* 0x18 */ int SlowColorR;
	/* 0x1c */ int SlowColorG;
	/* 0x20 */ int SlowColorB;
	/* 0x24 */ int ParalyzeColorR;
	/* 0x28 */ int ParalyzeColorG;
	/* 0x2c */ int ParalyzeColorB;
	/* 0x30 */ int ViewColorR;
	/* 0x34 */ int ViewColorG;
	/* 0x38 */ int ViewColorB;
	/* 0x3c */ int TsuiColorR;
	/* 0x40 */ int TsuiColorG;
	/* 0x44 */ int TsuiColorB;
	/* 0x48 */ int FuuColorR;
	/* 0x4c */ int FuuColorG;
	/* 0x50 */ int FuuColorB;
	/* 0x54 */ int Request;
	/* 0x58 */ int SaveSwitch;
} DEBUG_EFFECT_END_PARTICLE;

typedef struct { // 0x2a00
	/* 0x0000 */ SCREEN_EFFECT_PARAMETER ScreenParam;
	/* 0x0060 */ int PartsBlurSwitch;
	/* 0x0064 */ int PartsBlurAlpha;
	/* 0x0068 */ int PartsDeformPage;
	/* 0x006c */ int PartsDeformPage1Cursor;
	/* 0x0070 */ int PartsDeformPage2Cursor;
	/* 0x0074 */ int PartsDeformPage3Cursor;
	/* 0x0078 */ int EnemySwitch;
	/* 0x007c */ int EnemyAlpha;
	/* 0x0080 */ int EnemySize;
	/* 0x0084 */ int FileNo;
	/* 0x0088 */ int SaveSwitch;
	/* 0x008c */ int FinderFileNo;
	/* 0x0090 */ int FinderSaveSwitch;
	/* 0x0094 */ int EnemyDeadFileNo;
	/* 0x0098 */ int EnemyDeadSaveSwitch;
	/* 0x009c */ int RainRequest;
	/* 0x00a0 */ int RainRequestOld;
	/* 0x00a4 */ int RainSprayRequest;
	/* 0x00a8 */ int RainSprayRequestOld;
	/* 0x00ac */ int DropOfWaterRequest;
	/* 0x00b0 */ int DropOfWaterRequestOld;
	/* 0x00b4 */ int TorchRequest;
	/* 0x00b8 */ int TorchRequestOld;
	/* 0x00bc */ int SparkRequest;
	/* 0x00c0 */ int WindRequest;
	/* 0x00c4 */ int DustWalkRequest;
	/* 0x00c8 */ int DustRunRequest;
	/* 0x00cc */ int EffectDisp;
	/* 0x00d0 */ int ScreenEffectNo;
	/* 0x00d4 */ int ScreenEffectApply;
	/* 0x00d8 */ DEBUG_LARGE_HIT SmallHit;
	/* 0x0194 */ DEBUG_LARGE_HIT LargeHit;
	/* 0x0250 */ DEBUG_LARGE_HIT LargeHitSP_A;
	/* 0x030c */ DEBUG_LARGE_HIT LargeHitSP_B;
	/* 0x03c8 */ DEBUG_LARGE_HIT SlowHit_A;
	/* 0x0484 */ DEBUG_LARGE_HIT SlowHit_B;
	/* 0x0540 */ DEBUG_LARGE_HIT ZeroHit_A;
	/* 0x05fc */ DEBUG_LARGE_HIT ZeroHit_B;
	/* 0x06b8 */ DEBUG_LARGE_HIT ZeroHitSC_A;
	/* 0x0774 */ DEBUG_LARGE_HIT ZeroHitSC_B;
	/* 0x0830 */ DEBUG_LARGE_HIT ZeroHitSP_A;
	/* 0x08ec */ DEBUG_LARGE_HIT ZeroHitSP_B;
	/* 0x09a8 */ DEBUG_LARGE_HIT KokuHit_A;
	/* 0x0a64 */ DEBUG_LARGE_HIT KokuHit_B;
	/* 0x0b20 */ DEBUG_LARGE_HIT KokuHitSC_A;
	/* 0x0bdc */ DEBUG_LARGE_HIT KokuHitSC_B;
	/* 0x0c98 */ DEBUG_LARGE_HIT KokuHitSP_A;
	/* 0x0d54 */ DEBUG_LARGE_HIT KokuHitSP_B;
	/* 0x0e10 */ DEBUG_LARGE_HIT MetsuHit_A;
	/* 0x0ecc */ DEBUG_LARGE_HIT MetsuHit_B;
	/* 0x0f88 */ DEBUG_LARGE_HIT MetsuHitSC_A;
	/* 0x1044 */ DEBUG_LARGE_HIT MetsuHitSC_B;
	/* 0x1100 */ DEBUG_LARGE_HIT MetsuHitSP_A;
	/* 0x11bc */ DEBUG_LARGE_HIT MetsuHitSP_B;
	/* 0x1278 */ DEBUG_LARGE_HIT RenHit_A;
	/* 0x1334 */ DEBUG_LARGE_HIT RenHit_B;
	/* 0x13f0 */ DEBUG_LARGE_HIT RenHitSC_A;
	/* 0x14ac */ DEBUG_LARGE_HIT RenHitSC_B;
	/* 0x1568 */ DEBUG_LARGE_HIT RenHitSP_A;
	/* 0x1624 */ DEBUG_LARGE_HIT RenHitSP_B;
	/* 0x16e0 */ DEBUG_LARGE_HIT ParalyzeHit_A;
	/* 0x179c */ DEBUG_LARGE_HIT ParalyzeHit_B;
	/* 0x1858 */ DEBUG_LARGE_HIT ViewHit_A;
	/* 0x1914 */ DEBUG_LARGE_HIT ViewHit_B;
	/* 0x19d0 */ DEBUG_LARGE_HIT TsuiHit_A;
	/* 0x1a8c */ DEBUG_LARGE_HIT TsuiHit_B;
	/* 0x1b48 */ DEBUG_LARGE_HIT FuuHit_A;
	/* 0x1c04 */ DEBUG_LARGE_HIT FuuHit_B;
	/* 0x1cc0 */ DEBUG_SUIKOMI Suikomi;
	/* 0x1d64 */ DEBUG_PARTS_DEFORM PartsDeform;
	/* 0x1d80 */ DEBUG_ZERO_PARTS_DEFORM ZeroPDeform;
	/* 0x1db4 */ DEBUG_ZERO_PARTS_DEFORM SlowPDeform;
	/* 0x1de8 */ DEBUG_ZERO_PARTS_DEFORM KokuPDeform;
	/* 0x1e1c */ DEBUG_ZERO_PARTS_DEFORM MetsuPDeform;
	/* 0x1e50 */ DEBUG_ZERO_PARTS_DEFORM RenPDeform;
	/* 0x1e84 */ DEBUG_ZERO_PARTS_DEFORM ParalyzePDeform;
	/* 0x1eb8 */ DEBUG_ZERO_PARTS_DEFORM ViewPDeform;
	/* 0x1eec */ DEBUG_ZERO_PARTS_DEFORM TsuiPDeform;
	/* 0x1f20 */ DEBUG_ZERO_PARTS_DEFORM FuuPDeform;
	/* 0x1f54 */ DEBUG_ENEMY_PARTS_DEFORM EnemyPDeform;
	/* 0x1f8c */ DEBUG_BUTTERFLY_BODY ButterflyBody;
	/* 0x1fc0 */ DEBUG_BUTTERFLY_PARTICLE ButterflyParticle;
	/* 0x1ffc */ DEBUG_BUTTERFLY_TARGET ButterflyTarget;
	/* 0x2030 */ DEBUG_RAIN RainParam;
	/* 0x2074 */ DEBUG_SPRAY SprayParam;
	/* 0x20bc */ DEBUG_SPRAY SprayParam2;
	/* 0x2104 */ DEBUG_DROP_OF_WATER DropOfWater;
	/* 0x2144 */ DEBUG_TORCH Torch2;
	/* 0x21c0 */ DEBUG_TORCH_BURST TorchBurst;
	/* 0x21ec */ DEBUG_TORCH_SPARK TorchSpark;
	/* 0x2244 */ DEBUG_TORCH_WIND TorchWind;
	/* 0x226c */ DEBUG_CLOUD_OF_DUST CloudOfDustRun;
	/* 0x22e0 */ DEBUG_LIGHT_COME_IN LightComeIn;
	/* 0x2380 */ DEBUG_TORCH_BIGFREA TorchBigFrea;
	/* 0x23b4 */ DEBUG_TORCH_MOVE TorchMove;
	/* 0x23d4 */ DEBUG_HAZE Haze;
	/* 0x2490 */ DEBUG_HAZE KusabiHaze;
	/* 0x254c */ DEBUG_HAZE SaeHaze;
	/* 0x2608 */ DEBUG_LEAVES_FALL LeavesFall;
	/* 0x2648 */ DEBUG_RIVER River;
	/* 0x2664 */ DEBUG_LAKE Lake;
	/* 0x26ac */ DEBUG_RIVER MinaRiver;
	/* 0x26c8 */ DEBUG_LAKE FukaLake;
	/* 0x2710 */ DEBUG_CAMERA_FLASH CameraFlash;
	/* 0x2764 */ DEBUG_CAMERA_FLASH CameraFlashTex;
	/* 0x27b8 */ DEBUG_MANY_CANDLE ManyCandle;
	/* 0x27e4 */ DEBUG_TOUROU_FREA TourouFrea;
	/* 0x2818 */ DEBUG_TOUROU_BASE TourouBase;
	/* 0x2840 */ DEBUG_ITEM_EFFECT2 ItemEffect2;
	/* 0x2894 */ DEBUG_SCREEN_SAVER ScreenSaver;
	/* 0x28f4 */ DEBUG_DOOR_SEAL_SOUL DoorSealSoul;
	/* 0x291c */ DEBUG_DOOR_SEAL_DISAPPEAR DoorSealDisappear;
	/* 0x29a4 */ DEBUG_EFFECT_END_PARTICLE EffectEndParticle;
} DEBUG_EFFECT_MENU;

enum DEVICETYPE {
	DT_HOST0 = 0,
	NUM_DEVICETYPE = 1
};

struct rebind<basic_string<char, string_char_traits<char>, ctl::custom_allocator<char> > > { // 0x1
};

struct _Alloc_traits<basic_string<char, string_char_traits<char>, ctl::custom_allocator<char> >,ctl::custom_allocator<basic_string<char, string_char_traits<char>, ctl::custom_allocator<char> > > > { // 0x1
	static bool _S_instanceless;
};

struct _Vector_alloc_base<basic_string<char, string_char_traits<char>, ctl::custom_allocator<char> >,ctl::custom_allocator<basic_string<char, string_char_traits<char>, ctl::custom_allocator<char> > >,false> { // 0x10
protected:
	/* 0x0 */ custom_allocator<basic_string<char, string_char_traits<char>, ctl::custom_allocator<char> > > _M_data_allocator;
	/* 0x4 */ string *_M_start;
	/* 0x8 */ string *_M_finish;
	/* 0xc */ string *_M_end_of_storage;
	
public:
	_Vector_alloc_base<basic_string<char, string_char_traits<char>, ctl::custom_allocator<char> >,ctl::custom_allocator<basic_string<char, string_char_traits<char>, ctl::custom_allocator<char> > >,false>& operator=();
	_Vector_alloc_base();
	custom_allocator<basic_string<char, string_char_traits<char>, ctl::custom_allocator<char> > > get_allocator();
	_Vector_alloc_base();
protected:
	string* _M_allocate();
	void _M_deallocate();
};

struct _Vector_base<basic_string<char, string_char_traits<char>, ctl::custom_allocator<char> >,ctl::custom_allocator<basic_string<char, string_char_traits<char>, ctl::custom_allocator<char> > > > : /* 0x0 */ _Vector_alloc_base<basic_string<char, string_char_traits<char>, ctl::custom_allocator<char> >,ctl::custom_allocator<basic_string<char, string_char_traits<char>, ctl::custom_allocator<char> > >,false> { // 0x10
};

struct vector<basic_string<char, string_char_traits<char>, ctl::custom_allocator<char> >,ctl::custom_allocator<basic_string<char, string_char_traits<char>, ctl::custom_allocator<char> > > > : /* 0x0 */ private _Vector_base<basic_string<char, string_char_traits<char>, ctl::custom_allocator<char> >,ctl::custom_allocator<basic_string<char, string_char_traits<char>, ctl::custom_allocator<char> > > > { // 0x10
	custom_allocator<basic_string<char, string_char_traits<char>, ctl::custom_allocator<char> > > get_allocator();
protected:
	void _M_insert_aux();
	void _M_insert_aux();
public:
	string* begin();
	string* begin();
	string* end();
	string* end();
	reverse_iterator<basic_string<char, string_char_traits<char>, ctl::custom_allocator<char> > *> rbegin();
	reverse_iterator<const basic_string<char, string_char_traits<char>, ctl::custom_allocator<char> > *> rbegin();
	reverse_iterator<basic_string<char, string_char_traits<char>, ctl::custom_allocator<char> > *> rend();
	reverse_iterator<const basic_string<char, string_char_traits<char>, ctl::custom_allocator<char> > *> rend();
	size_t size();
	size_t max_size();
	size_t capacity();
	bool empty();
	string& operator[]();
	string& operator[]();
	vector();
	vector();
	vector();
	vector();
	vector(vector<basic_string<char, string_char_traits<char>, ctl::custom_allocator<char> >,ctl::custom_allocator<basic_string<char, string_char_traits<char>, ctl::custom_allocator<char> > > >*, int, void);
	vector<basic_string<char, string_char_traits<char>, ctl::custom_allocator<char> >,ctl::custom_allocator<basic_string<char, string_char_traits<char>, ctl::custom_allocator<char> > > >& operator=();
	void reserve();
	void assign();
	string& front();
	string& front();
	string& back();
	string& back();
	void push_back();
	void push_back();
	void swap();
	string* insert();
	string* insert();
	void insert();
	void pop_back();
	string* erase();
	string* erase();
	void resize();
	void resize();
	void clear();
};

struct vector<basic_string<char, string_char_traits<char>, ctl::custom_allocator<char> > > : /* 0x0 */ vector<basic_string<char, string_char_traits<char>, ctl::custom_allocator<char> >,ctl::custom_allocator<basic_string<char, string_char_traits<char>, ctl::custom_allocator<char> > > > { // 0x10
};

struct rebind<sce_dirent> { // 0x1
};

struct _Alloc_traits<sce_dirent,ctl::custom_allocator<sce_dirent> > { // 0x1
	static bool _S_instanceless;
};

struct _Vector_alloc_base<sce_dirent,ctl::custom_allocator<sce_dirent>,false> { // 0x10
protected:
	/* 0x0 */ custom_allocator<sce_dirent> _M_data_allocator;
	/* 0x4 */ sce_dirent *_M_start;
	/* 0x8 */ sce_dirent *_M_finish;
	/* 0xc */ sce_dirent *_M_end_of_storage;
	
public:
	_Vector_alloc_base<sce_dirent,ctl::custom_allocator<sce_dirent>,false>& operator=();
	_Vector_alloc_base();
	custom_allocator<sce_dirent> get_allocator();
	_Vector_alloc_base();
protected:
	sce_dirent* _M_allocate();
	void _M_deallocate();
};

struct _Vector_base<sce_dirent,ctl::custom_allocator<sce_dirent> > : /* 0x0 */ _Vector_alloc_base<sce_dirent,ctl::custom_allocator<sce_dirent>,false> { // 0x10
};

struct vector<sce_dirent,ctl::custom_allocator<sce_dirent> > : /* 0x0 */ private _Vector_base<sce_dirent,ctl::custom_allocator<sce_dirent> > { // 0x10
	custom_allocator<sce_dirent> get_allocator();
protected:
	void _M_insert_aux();
	void _M_insert_aux();
public:
	sce_dirent* begin();
	sce_dirent* begin();
	sce_dirent* end();
	sce_dirent* end();
	reverse_iterator<sce_dirent *> rbegin();
	reverse_iterator<const sce_dirent *> rbegin();
	reverse_iterator<sce_dirent *> rend();
	reverse_iterator<const sce_dirent *> rend();
	size_t size();
	size_t max_size();
	size_t capacity();
	bool empty();
	sce_dirent& operator[]();
	sce_dirent& operator[]();
	vector();
	vector();
	vector();
	vector();
	vector(vector<sce_dirent,ctl::custom_allocator<sce_dirent> >*, int, void);
	vector<sce_dirent,ctl::custom_allocator<sce_dirent> >& operator=();
	void reserve();
	void assign();
	sce_dirent& front();
	sce_dirent& front();
	sce_dirent& back();
	sce_dirent& back();
	void push_back();
	void push_back();
	void swap();
	sce_dirent* insert();
	sce_dirent* insert();
	void insert();
	void pop_back();
	sce_dirent* erase();
	sce_dirent* erase();
	void resize();
	void resize();
	void clear();
};

struct vector<sce_dirent> : /* 0x0 */ vector<sce_dirent,ctl::custom_allocator<sce_dirent> > { // 0x10
};

enum MAPVIEWER_PADCOMMAND {
	PADCMD_UP = 0,
	PADCMD_DOWN = 1,
	PADCMD_LEFT = 2,
	PADCMD_RIGHT = 3,
	PADCMD_SANKAKU = 4,
	PADCMD_BATU = 5,
	PADCMD_SIKAKU = 6,
	PADCMD_MARU = 7,
	PADCMD_L3 = 8,
	PADCMD_R3 = 9,
	PADCMD_SELECT = 10,
	PADCMD_R1 = 11,
	PADCMD_R2 = 12,
	PADCMD_L1 = 13,
	PADCMD_L2 = 14,
	PADCMD_START = 15,
	NUM_PADCMD = 16
};

enum PHASE {
	PHASE_EXPLORER = 0,
	PHASE_CAMERACONTROL = 1,
	PHASE_EDITCONTROL = 2,
	NUM_PHASE = 3
};

enum COMMAND {
	CMD_LOADDATA = 0,
	NUM_COMMAND = 1
};

struct LOADDATA { // 0x100
	/* 0x00 */ char strFileName[256];
};

struct CONFIG { // 0x4
	/* 0x0 */ int bDisplayCameraPosition;
};

struct fixed_array_base<IPhase *,3,IPhase *[3]> { // 0xc
protected:
	/* 0x0 */ IPhase *m_aData[3];
	
public:
	fixed_array_base<IPhase *,3,IPhase *[3]>& operator=();
	fixed_array_base();
protected:
	fixed_array_base();
public:
	IPhase*& operator[]();
	IPhase*& operator[]();
	IPhase** data();
	IPhase** begin();
	IPhase** end();
	void fill();
	size_t size();
	bool empty();
};

struct fixed_array<IPhase *,3> : /* 0x0 */ fixed_array_base<IPhase *,3,IPhase *[3]> { // 0xc
};

typedef struct { // 0x8
	/* 0x0 */ int item_id;
	/* 0x4 */ int have_num;
} PLYR_ITEM;

typedef struct { // 0x2c
	/* 0x00 */ int item_id;
	/* 0x04 */ u_char type;
	/* 0x05 */ u_char get_max;
	/* 0x06 */ u_char def_use_num;
	/* 0x08 */ int value;
	/* 0x0c */ char item_name[32];
} ITEM_DAT;

struct fixed_array_base<PLYR_ITEM,58,PLYR_ITEM[58]> { // 0x1d0
protected:
	/* 0x000 */ PLYR_ITEM m_aData[58];
	
public:
	fixed_array_base<PLYR_ITEM,58,PLYR_ITEM[58]>& operator=();
	fixed_array_base();
protected:
	fixed_array_base();
public:
	PLYR_ITEM& operator[]();
	PLYR_ITEM& operator[]();
	PLYR_ITEM* data();
	PLYR_ITEM* begin();
	PLYR_ITEM* end();
	void fill();
	size_t size();
	bool empty();
};

struct fixed_array<PLYR_ITEM,58> : /* 0x000 */ fixed_array_base<PLYR_ITEM,58,PLYR_ITEM[58]> { // 0x1d0
};

typedef struct { // 0x1
	/* 0x0 */ u_char lock_id;
} DOOR_CTRL;

typedef struct { // 0x8
	/* 0x0 */ int msg_id;
	/* 0x4 */ int sound_id;
} DOOR_LOCK_INFO;

typedef struct { // 0xc
	/* 0x0 */ int set_event_id;
	/* 0x4 */ int change_id;
	/* 0x8 */ u_char change_state;
} EV_CHANGE_CTRL;

typedef struct { // 0x8
	/* 0x0 */ int msg_id;
	/* 0x4 */ int sound_id;
} DOOR_LOCK_STATE_CTRL;

struct fixed_array_base<DOOR_CTRL,208,DOOR_CTRL[208]> { // 0xd0
protected:
	/* 0x00 */ DOOR_CTRL m_aData[208];
	
public:
	fixed_array_base<DOOR_CTRL,208,DOOR_CTRL[208]>& operator=();
	fixed_array_base();
protected:
	fixed_array_base();
public:
	DOOR_CTRL& operator[]();
	DOOR_CTRL& operator[]();
	DOOR_CTRL* data();
	DOOR_CTRL* begin();
	DOOR_CTRL* end();
	void fill();
	size_t size();
	bool empty();
};

struct fixed_array<DOOR_CTRL,208> : /* 0x00 */ fixed_array_base<DOOR_CTRL,208,DOOR_CTRL[208]> { // 0xd0
};

typedef struct { // 0x18
	/* 0x00 */ float x;
	/* 0x04 */ float y;
	/* 0x08 */ int ghost_seal_door_label;
	/* 0x0c */ int room_label1;
	/* 0x10 */ int room_label2;
	/* 0x14 */ int door_type_label;
} MAP_DOOR_POINT;

typedef struct { // 0x10
	/* 0x0 */ unsigned int data;
	/* 0x4 */ unsigned int addr;
	/* 0x8 */ unsigned int size;
	/* 0xc */ unsigned int mode;
} sceSifDmaData;

typedef struct { // 0x10
	/* 0x0:0 */ unsigned int psize : 8;
	/* 0x1:0 */ unsigned int dsize : 24;
	/* 0x4 */ unsigned int daddr;
	/* 0x8 */ unsigned int fcode;
	/* 0xc */ unsigned int opt;
} sceSifCmdHdr;

typedef void (*sceSifCmdHandler)(/* parameters unknown */);

typedef struct { // 0xc
	/* 0x0 */ sceSifCmdHandler func;
	/* 0x4 */ void *data;
	/* 0x8 */ void *gp;
} sceSifCmdData;

typedef struct { // 0x14
	/* 0x00 */ sceSifCmdHdr chdr;
	/* 0x10 */ void *newaddr;
} sceSifCmdCSData;

typedef struct { // 0x18
	/* 0x00 */ sceSifCmdHdr chdr;
	/* 0x10 */ int rno;
	/* 0x14 */ unsigned int value;
} sceSifCmdSRData;

typedef struct { // 0x68
	/* 0x00 */ sceSifCmdHdr chdr;
	/* 0x10 */ int size;
	/* 0x14 */ int flag;
	/* 0x18 */ char arg[80];
} sceSifCmdResetData;

enum PS2EXCEPTION {
	PS2E_INTERRUPT = 0,
	PS2E_TLB_MOD = 1,
	PS2E_TLB_LOAD_OR_IFETCH = 2,
	PS2E_TLB_STORE = 3,
	PS2E_ADDRESS_ERROR_LOAD_OR_IFETCH = 4,
	PS2E_ADDRESS_ERROR_STORE = 5,
	PS2E_BUS_ERROR_IFETCH = 6,
	PS2E_BUS_ERROR_DATAREF_LOAD_OR_STORE = 7,
	PS2E_SYSCALL = 8,
	PS2E_BREAKPOINT = 9,
	PS2E_RESERVED_INSTRUCTION = 10,
	PS2E_COP_UNUSABLE = 11,
	PS2E_ARITHMETIC_OVERFLOW = 12,
	PS2E_TRAP = 13,
	NUM_PS2EXCEPTION = 14
};

struct IOPEXCEPTIONCREATIONDATA { // 0x4
	/* 0x0 */ char *pModuleName;
};

struct PROFILEFUNCTION { // 0x8
	/* 0x0 */ void *pThisFunction;
	/* 0x4 */ void *pCallSite;
};

enum OpenFlags {
	modeRead = 0,
	modeWrite = 1,
	modeCreate = 4096,
	RWMASK = 3,
	WRITEMASK = 4096
};

enum SeekPosition {
	begin = 0,
	current = 1,
	end = 2
};

typedef string std_string;

struct CFileName : /* 0x00 */ basic_string<char,string_char_traits<char>,ctl::custom_allocator<char> > { // 0x24
protected:
	/* 0x04 */ std_string m_strDrive;
	/* 0x08 */ std_string m_strDir;
	/* 0x0c */ std_string m_strFile;
	/* 0x10 */ std_string m_strExt;
	/* 0x14 */ std_string m_strDriveDir;
	/* 0x18 */ std_string m_strParentDir;
	/* 0x1c */ std_string m_strFileExt;
public:
	/* 0x20 */ __vtbl_ptr_type *$vf1364;
	
	CFileName& operator=();
	CFileName();
protected:
	void GetPathName();
public:
	CFileName();
	CFileName();
	/* vtable[1] */ virtual CFileName(CFileName*, int, void);
	char* DriveName();
	char* DirName();
	char* FileName();
	char* ExtName();
	char* DriveDirName();
	char* FileExtName();
	char* ParentDirName();
	char* LowestDirName();
	void MakePath();
	int IsExist();
	static int IsExist(/* parameters unknown */);
};

struct CStdioFile : /* 0x000 */ CFile { // 0x150
	CStdioFile& operator=();
	CStdioFile();
	CStdioFile();
	/* vtable[1] */ virtual CStdioFile(CStdioFile*, int, void);
	/* vtable[5] */ virtual void WriteString();
	/* vtable[6] */ virtual char* ReadString();
};

struct CFile { // 0x150
protected:
	/* 0x000 */ string m_strError;
private:
	/* 0x004 */ int m_iHandle;
	/* 0x008 */ sce_stat m_Status;
	/* 0x048 */ char m_strFileName[260];
public:
	/* 0x14c */ __vtbl_ptr_type *$vf1359;
	
	CFile& operator=();
	CFile();
protected:
	int OnError();
public:
	char* ErrorString();
	CFile();
	/* vtable[1] */ virtual CFile(CFile*, int, void);
	int Open();
	unsigned int Read();
	int Write();
	void Close();
	int Seek();
	unsigned int GetLength();
	unsigned int SeekToEnd();
	void SeekToBegin();
	/* vtable[2] */ virtual string GetFileName();
	/* vtable[3] */ virtual string GetFileTitle();
	/* vtable[4] */ virtual string GetFilePath();
};

struct iterator_traits<basic_string<char, string_char_traits<char>, ctl::custom_allocator<char> > *> { // 0x1
};

struct __type_traits<basic_string<char, string_char_traits<char>, ctl::custom_allocator<char> > > { // 0x1
};

// warning: multiple differing types with the same name (type name not equal)
typedef __false_type _Trivial_destructor;

struct iterator_traits<sce_dirent *> { // 0x1
};

struct __type_traits<sce_dirent> { // 0x1
};

// warning: multiple differing types with the same name (type name not equal)
typedef string _Tp;
// warning: multiple differing types with the same name (type name not equal)
typedef __false_type _Trivial;

struct __copy_dispatch<basic_string<char, string_char_traits<char>, ctl::custom_allocator<char> > *,basic_string<char, string_char_traits<char>, ctl::custom_allocator<char> > *,__false_type> { // 0x1
	__copy_dispatch<basic_string<char, string_char_traits<char>, ctl::custom_allocator<char> > *,basic_string<char, string_char_traits<char>, ctl::custom_allocator<char> > *,__false_type>& operator=();
	__copy_dispatch();
	__copy_dispatch();
	static string* copy(/* parameters unknown */);
};

typedef random_access_iterator_tag _Category;
typedef ptrdiff_t _Distance;
// warning: multiple differing types with the same name (type name not equal)
typedef sce_dirent _Tp;

struct __copy_dispatch<sce_dirent *,sce_dirent *,__false_type> { // 0x1
	__copy_dispatch<sce_dirent *,sce_dirent *,__false_type>& operator=();
	__copy_dispatch();
	__copy_dispatch();
	static sce_dirent* copy(/* parameters unknown */);
};

struct __copy_backward_dispatch<basic_string<char, string_char_traits<char>, ctl::custom_allocator<char> > *,basic_string<char, string_char_traits<char>, ctl::custom_allocator<char> > *,__false_type> { // 0x1
	__copy_backward_dispatch<basic_string<char, string_char_traits<char>, ctl::custom_allocator<char> > *,basic_string<char, string_char_traits<char>, ctl::custom_allocator<char> > *,__false_type>& operator=();
	__copy_backward_dispatch();
	__copy_backward_dispatch();
	static string* copy(/* parameters unknown */);
};

// warning: multiple differing types with the same name (type name not equal)
typedef __false_type _Is_POD;

struct __copy_backward_dispatch<sce_dirent *,sce_dirent *,__false_type> { // 0x1
	__copy_backward_dispatch<sce_dirent *,sce_dirent *,__false_type>& operator=();
	__copy_backward_dispatch();
	__copy_backward_dispatch();
	static sce_dirent* copy(/* parameters unknown */);
};

struct CFindFile { // 0x60
protected:
	/* 0x00 */ string m_strError;
private:
	/* 0x04 */ string m_strOriginDirectory;
	/* 0x08 */ string m_strCurrentDirectory;
	/* 0x0c */ vector<basic_string<char, string_char_traits<char>, ctl::custom_allocator<char> > > m_vstrFileSpec;
	/* 0x1c */ vector<sce_dirent> m_vDirEntry;
	/* 0x2c */ vector<sce_dirent> m_vMatchFile;
	/* 0x3c */ vector<sce_dirent> m_vSubDirectory;
	/* 0x4c */ vector<sce_dirent> m_vSubDirectoryAll;
public:
	/* 0x5c */ __vtbl_ptr_type *$vf1529;
	
	CFindFile& operator=();
	CFindFile();
protected:
	int OnError();
public:
	char* ErrorString();
private:
	int ScanDirectory();
	int IsMatchSpec();
	int AnalyzeSpec();
public:
	CFindFile();
	/* vtable[1] */ virtual CFindFile(CFindFile*, int, void);
	int Scan();
	int Scan();
	void SetDirectory();
	void SetFileSpec();
	void Clear();
	int GetNumMatchFile();
	sce_dirent& GetMatchFileRef();
	int GetNumFile();
	sce_dirent& GetFileRef();
	int GetNumSubDirectory();
	sce_dirent& GetSubDirectoryRef();
	int GetNumSubDirectoryAll();
	sce_dirent& GetSubDirectoryAllRef();
	char* CurrentDirectory();
	static int IsDirectory(/* parameters unknown */);
};

struct custom_allocator<sce_dirent> { // 0x4
	/* 0x0 */ __vtbl_ptr_type *$vf1431;
	
	custom_allocator<sce_dirent>& operator=();
	sce_dirent* address();
	sce_dirent* address();
	custom_allocator();
	custom_allocator();
	/* vtable[1] */ virtual sce_dirent* custom_allocate();
	sce_dirent* allocate();
	sce_dirent* allocate();
	/* vtable[2] */ virtual void custom_deallocate();
	void deallocate();
	void construct();
	void destroy();
	size_t max_size();
};

struct custom_allocator<basic_string<char, string_char_traits<char>, ctl::custom_allocator<char> > > { // 0x4
	/* 0x0 */ __vtbl_ptr_type *$vf1357;
	
	custom_allocator<basic_string<char, string_char_traits<char>, ctl::custom_allocator<char> > >& operator=();
	string* address();
	string* address();
	custom_allocator();
	custom_allocator();
	/* vtable[1] */ virtual string* custom_allocate();
	string* allocate();
	string* allocate();
	/* vtable[2] */ virtual void custom_deallocate();
	void deallocate();
	void construct();
	void destroy();
	size_t max_size();
};

typedef struct { // 0x1c
	/* 0x00 */ int disp_flg;
	/* 0x04 */ int monochro_mode;
	/* 0x08 */ int stop_flg;
	/* 0x0c */ int change_bank;
	/* 0x10 */ int blur_off;
	/* 0x14 */ int dith_off;
	/* 0x18 */ int filament_off;
} EFF_WRK;

struct fixed_array_base<EFFECT_CONT,64,EFFECT_CONT[64]> { // 0x1c00
protected:
	/* 0x0000 */ EFFECT_CONT m_aData[64];
	
public:
	fixed_array_base<EFFECT_CONT,64,EFFECT_CONT[64]>& operator=();
	fixed_array_base();
protected:
	fixed_array_base();
public:
	EFFECT_CONT& operator[]();
	EFFECT_CONT& operator[]();
	EFFECT_CONT* data();
	EFFECT_CONT* begin();
	EFFECT_CONT* end();
	void fill();
	size_t size();
	bool empty();
};

struct fixed_array<EFFECT_CONT,64> : /* 0x0000 */ fixed_array_base<EFFECT_CONT,64,EFFECT_CONT[64]> { // 0x1c00
};

struct fixed_array_base<EFFECT_CONT,48,EFFECT_CONT[48]> { // 0x1500
protected:
	/* 0x0000 */ EFFECT_CONT m_aData[48];
	
public:
	fixed_array_base<EFFECT_CONT,48,EFFECT_CONT[48]>& operator=();
	fixed_array_base();
protected:
	fixed_array_base();
public:
	EFFECT_CONT& operator[]();
	EFFECT_CONT& operator[]();
	EFFECT_CONT* data();
	EFFECT_CONT* begin();
	EFFECT_CONT* end();
	void fill();
	size_t size();
	bool empty();
};

struct fixed_array<EFFECT_CONT,48> : /* 0x0000 */ fixed_array_base<EFFECT_CONT,48,EFFECT_CONT[48]> { // 0x1500
};

struct fixed_array_base<SCREEN_EFFECT_PARAMETER *,6,SCREEN_EFFECT_PARAMETER **> { // 0x4
protected:
	/* 0x0 */ SCREEN_EFFECT_PARAMETER **m_aData;
	
public:
	fixed_array_base<SCREEN_EFFECT_PARAMETER *,6,SCREEN_EFFECT_PARAMETER **>& operator=();
	fixed_array_base();
protected:
	fixed_array_base();
public:
	SCREEN_EFFECT_PARAMETER*& operator[]();
	SCREEN_EFFECT_PARAMETER*& operator[]();
	SCREEN_EFFECT_PARAMETER** data();
	SCREEN_EFFECT_PARAMETER** begin();
	SCREEN_EFFECT_PARAMETER** end();
	void fill();
	size_t size();
	bool empty();
};

struct reference_fixed_array<SCREEN_EFFECT_PARAMETER *,6> : /* 0x0 */ fixed_array_base<SCREEN_EFFECT_PARAMETER *,6,SCREEN_EFFECT_PARAMETER **> { // 0x4
};

struct fixed_array_base<int,48,int[48]> { // 0xc0
protected:
	/* 0x00 */ int m_aData[48];
	
public:
	fixed_array_base<int,48,int[48]>& operator=();
	fixed_array_base();
protected:
	fixed_array_base();
public:
	int& operator[]();
	int& operator[]();
	int* data();
	int* begin();
	int* end();
	void fill();
	size_t size();
	bool empty();
};

struct fixed_array<int,48> : /* 0x00 */ fixed_array_base<int,48,int[48]> { // 0xc0
};

enum BUTTERFLY_TARGET_PARAMETER_TYPE {
	BUTTERFLY_TARGET_PARAMETER_TYPE00 = 0,
	BUTTERFLY_TARGET_PARAMETER_TYPE01 = 1,
	BUTTERFLY_TARGET_PARAMETER_TYPE02 = 2,
	BUTTERFLY_TARGET_PARAMETER_TYPE03 = 3,
	BUTTERFLY_TARGET_PARAMETER_TYPE04 = 4,
	BUTTERFLY_TARGET_PARAMETER_NUM = 5
};

struct _BUTTERFLY_DISP { // 0x2c0
	/* 0x000 */ float Position[4];
	/* 0x010 */ float OldPosition[4];
	/* 0x020 */ float Target[4];
	/* 0x030 */ float Rot[4];
	/* 0x040 */ float Velocity[4];
	/* 0x050 */ ANI_CTRL AniCtrl;
	/* 0x290 */ int LifeTime;
	/* 0x294 */ int MoveInterval;
	/* 0x298 */ float AlphaRate;
	/* 0x29c */ int MoveType;
	/* 0x2a0 */ int InTime;
	/* 0x2a4 */ int OutTime;
	/* 0x2a8 */ int Count;
	/* 0x2ac */ int Type;
	/* 0x2b0 */ int Id;
};

typedef _BUTTERFLY_DISP BUTTERFLY_DISP;

typedef struct { // 0x10
	/* 0x0 */ SINGLE_LINK_LIST ButterflyList;
} BUTTERFLY_DISP_CTRL;

struct _BUTTERFLY_PARTICLE { // 0x40
	/* 0x00 */ float Position[4];
	/* 0x10 */ float Velocity[4];
	/* 0x20 */ float Acceleration[4];
	/* 0x30 */ int LifeTime;
	/* 0x34 */ float AlphaRate;
};

typedef _BUTTERFLY_PARTICLE BUTTERFLY_PARTICLE;

typedef struct { // 0x10
	/* 0x0 */ SINGLE_LINK_LIST ParticleList;
} BUTTERFLY_PARTICLE_CTRL;

struct fixed_array_base<BUTTERFLY_TARGET_PARAMETER *,5,BUTTERFLY_TARGET_PARAMETER **> { // 0x4
protected:
	/* 0x0 */ BUTTERFLY_TARGET_PARAMETER **m_aData;
	
public:
	fixed_array_base<BUTTERFLY_TARGET_PARAMETER *,5,BUTTERFLY_TARGET_PARAMETER **>& operator=();
	fixed_array_base();
protected:
	fixed_array_base();
public:
	BUTTERFLY_TARGET_PARAMETER*& operator[]();
	BUTTERFLY_TARGET_PARAMETER*& operator[]();
	BUTTERFLY_TARGET_PARAMETER** data();
	BUTTERFLY_TARGET_PARAMETER** begin();
	BUTTERFLY_TARGET_PARAMETER** end();
	void fill();
	size_t size();
	bool empty();
};

struct reference_fixed_array<BUTTERFLY_TARGET_PARAMETER *,5> : /* 0x0 */ fixed_array_base<BUTTERFLY_TARGET_PARAMETER *,5,BUTTERFLY_TARGET_PARAMETER **> { // 0x4
};

typedef struct { // 0x40
	/* 0x00 */ float EneMposP0[4];
	/* 0x10 */ ENE_DMG_BLUR_CONTRAST_PARAMETER *pBlurContrast;
	/* 0x14 */ int Flow;
	/* 0x18 */ int EneWrkNo;
	/* 0x1c */ int HitEffecType;
	/* 0x20 */ int Counter;
	/* 0x24 */ int ContrastColor;
	/* 0x28 */ int ContrastAlpha;
	/* 0x2c */ int BlurScale;
	/* 0x30 */ int BlurRot;
	/* 0x34 */ u_char BlurAlpha;
} ENE_HIT_EFFECT_CTRL;

struct fixed_array_base<ENDMG1,10,ENDMG1[10]> { // 0x5a0
protected:
	/* 0x000 */ ENDMG1 m_aData[10];
	
public:
	fixed_array_base<ENDMG1,10,ENDMG1[10]>& operator=();
	fixed_array_base();
protected:
	fixed_array_base();
public:
	ENDMG1& operator[]();
	ENDMG1& operator[]();
	ENDMG1* data();
	ENDMG1* begin();
	ENDMG1* end();
	void fill();
	size_t size();
	bool empty();
};

struct fixed_array<ENDMG1,10> : /* 0x000 */ fixed_array_base<ENDMG1,10,ENDMG1[10]> { // 0x5a0
};

struct fixed_array_base<float[4][4],12,float[12][4][4]> { // 0x300
protected:
	/* 0x000 */ float m_aData[12][4][4];
	
public:
	fixed_array_base<float[4][4],12,float[12][4][4]>& operator=();
	fixed_array_base();
protected:
	fixed_array_base();
public:
	float&[4][4] operator[]();
	float&[4][4] operator[]();
	float*[4][4] data();
	float*[4][4] begin();
	float*[4][4] end();
	void fill();
	size_t size();
	bool empty();
};

struct fixed_array<float[4][4],12> : /* 0x000 */ fixed_array_base<float[4][4],12,float[12][4][4]> { // 0x300
};

struct fixed_array_base<float[4],12,float[12][4]> { // 0xc0
protected:
	/* 0x00 */ float m_aData[12][4];
	
public:
	fixed_array_base<float[4],12,float[12][4]>& operator=();
	fixed_array_base();
protected:
	fixed_array_base();
public:
	float&[4] operator[]();
	float&[4] operator[]();
	sceVu0FVECTOR* data();
	sceVu0FVECTOR* begin();
	sceVu0FVECTOR* end();
	void fill();
	size_t size();
	bool empty();
};

struct fixed_array<float[4],12> : /* 0x00 */ fixed_array_base<float[4],12,float[12][4]> { // 0xc0
};

typedef struct { // 0x3c0
	/* 0x000 */ fixed_array<float[4][4],12> wmtx;
	/* 0x300 */ fixed_array<float[4],12> opos;
} TAIL_DMG2_DAT;

typedef struct { // 0x10
	/* 0x0 */ int sw;
	/* 0x4 */ int num;
	/* 0x8 */ int top;
	/* 0xc */ int dummy;
} SWORD_LINE;

struct fixed_array_base<ENE_DMG_LARGE_HIT_PARAMETER *,38,ENE_DMG_LARGE_HIT_PARAMETER **> { // 0x4
protected:
	/* 0x0 */ ENE_DMG_LARGE_HIT_PARAMETER **m_aData;
	
public:
	fixed_array_base<ENE_DMG_LARGE_HIT_PARAMETER *,38,ENE_DMG_LARGE_HIT_PARAMETER **>& operator=();
	fixed_array_base();
protected:
	fixed_array_base();
public:
	ENE_DMG_LARGE_HIT_PARAMETER*& operator[]();
	ENE_DMG_LARGE_HIT_PARAMETER*& operator[]();
	ENE_DMG_LARGE_HIT_PARAMETER** data();
	ENE_DMG_LARGE_HIT_PARAMETER** begin();
	ENE_DMG_LARGE_HIT_PARAMETER** end();
	void fill();
	size_t size();
	bool empty();
};

struct reference_fixed_array<ENE_DMG_LARGE_HIT_PARAMETER *,38> : /* 0x0 */ fixed_array_base<ENE_DMG_LARGE_HIT_PARAMETER *,38,ENE_DMG_LARGE_HIT_PARAMETER **> { // 0x4
};

struct fixed_array_base<ENE_DMG_BLUR_CONTRAST_PARAMETER *,20,ENE_DMG_BLUR_CONTRAST_PARAMETER **> { // 0x4
protected:
	/* 0x0 */ ENE_DMG_BLUR_CONTRAST_PARAMETER **m_aData;
	
public:
	fixed_array_base<ENE_DMG_BLUR_CONTRAST_PARAMETER *,20,ENE_DMG_BLUR_CONTRAST_PARAMETER **>& operator=();
	fixed_array_base();
protected:
	fixed_array_base();
public:
	ENE_DMG_BLUR_CONTRAST_PARAMETER*& operator[]();
	ENE_DMG_BLUR_CONTRAST_PARAMETER*& operator[]();
	ENE_DMG_BLUR_CONTRAST_PARAMETER** data();
	ENE_DMG_BLUR_CONTRAST_PARAMETER** begin();
	ENE_DMG_BLUR_CONTRAST_PARAMETER** end();
	void fill();
	size_t size();
	bool empty();
};

struct reference_fixed_array<ENE_DMG_BLUR_CONTRAST_PARAMETER *,20> : /* 0x0 */ fixed_array_base<ENE_DMG_BLUR_CONTRAST_PARAMETER *,20,ENE_DMG_BLUR_CONTRAST_PARAMETER **> { // 0x4
};

struct fixed_array_base<SPRT_DAT,14,SPRT_DAT *> { // 0x4
protected:
	/* 0x0 */ SPRT_DAT *m_aData;
	
public:
	fixed_array_base<SPRT_DAT,14,SPRT_DAT *>& operator=();
	fixed_array_base();
protected:
	fixed_array_base();
public:
	SPRT_DAT& operator[]();
	SPRT_DAT& operator[]();
	SPRT_DAT* data();
	SPRT_DAT* begin();
	SPRT_DAT* end();
	void fill();
	size_t size();
	bool empty();
};

struct reference_fixed_array<SPRT_DAT,14> : /* 0x0 */ fixed_array_base<SPRT_DAT,14,SPRT_DAT *> { // 0x4
};

struct fixed_array_base<float[4],4,float[4][4]> { // 0x40
protected:
	/* 0x00 */ float m_aData[4][4];
	
public:
	fixed_array_base<float[4],4,float[4][4]>& operator=();
	fixed_array_base();
protected:
	fixed_array_base();
public:
	float&[4] operator[]();
	float&[4] operator[]();
	sceVu0FVECTOR* data();
	sceVu0FVECTOR* begin();
	sceVu0FVECTOR* end();
	void fill();
	size_t size();
	bool empty();
};

struct fixed_array<float[4],4> : /* 0x00 */ fixed_array_base<float[4],4,float[4][4]> { // 0x40
};

struct fixed_array_base<unsigned int,4,unsigned int[4]> { // 0x10
protected:
	/* 0x0 */ u_int m_aData[4];
	
public:
	fixed_array_base<unsigned int,4,unsigned int[4]>& operator=();
	fixed_array_base();
protected:
	fixed_array_base();
public:
	u_int& operator[]();
	u_int& operator[]();
	u_int* data();
	u_int* begin();
	u_int* end();
	void fill();
	size_t size();
	bool empty();
};

struct fixed_array<unsigned int,4> : /* 0x0 */ fixed_array_base<unsigned int,4,unsigned int[4]> { // 0x10
};

struct fixed_array_base<long unsigned int,4,long unsigned int[4]> { // 0x20
protected:
	/* 0x00 */ u_long m_aData[4];
	
public:
	fixed_array_base<long unsigned int,4,long unsigned int[4]>& operator=();
	fixed_array_base();
protected:
	fixed_array_base();
public:
	u_long& operator[]();
	u_long& operator[]();
	u_long* data();
	u_long* begin();
	u_long* end();
	void fill();
	size_t size();
	bool empty();
};

struct fixed_array<long unsigned int,4> : /* 0x00 */ fixed_array_base<long unsigned int,4,long unsigned int[4]> { // 0x20
};

struct fixed_array_base<unsigned int,4,unsigned int *> { // 0x4
protected:
	/* 0x0 */ u_int *m_aData;
	
public:
	fixed_array_base<unsigned int,4,unsigned int *>& operator=();
	fixed_array_base();
protected:
	fixed_array_base();
public:
	u_int& operator[]();
	u_int& operator[]();
	u_int* data();
	u_int* begin();
	u_int* end();
	void fill();
	size_t size();
	bool empty();
};

struct reference_fixed_array<unsigned int,4> : /* 0x0 */ fixed_array_base<unsigned int,4,unsigned int *> { // 0x4
};

struct fixed_array_base<TAIL_DMG2_DAT,48,TAIL_DMG2_DAT[48]> { // 0xb400
protected:
	/* 0x0000 */ TAIL_DMG2_DAT m_aData[48];
	
public:
	fixed_array_base<TAIL_DMG2_DAT,48,TAIL_DMG2_DAT[48]>& operator=();
	fixed_array_base();
protected:
	fixed_array_base();
public:
	TAIL_DMG2_DAT& operator[]();
	TAIL_DMG2_DAT& operator[]();
	TAIL_DMG2_DAT* data();
	TAIL_DMG2_DAT* begin();
	TAIL_DMG2_DAT* end();
	void fill();
	size_t size();
	bool empty();
};

struct fixed_array<TAIL_DMG2_DAT,48> : /* 0x0000 */ fixed_array_base<TAIL_DMG2_DAT,48,TAIL_DMG2_DAT[48]> { // 0xb400
};

struct fixed_array_base<NEW_PERTICLE,48,NEW_PERTICLE[48]> { // 0xc00
protected:
	/* 0x000 */ NEW_PERTICLE m_aData[48];
	
public:
	fixed_array_base<NEW_PERTICLE,48,NEW_PERTICLE[48]>& operator=();
	fixed_array_base();
protected:
	fixed_array_base();
public:
	NEW_PERTICLE& operator[]();
	NEW_PERTICLE& operator[]();
	NEW_PERTICLE* data();
	NEW_PERTICLE* begin();
	NEW_PERTICLE* end();
	void fill();
	size_t size();
	bool empty();
};

struct fixed_array<NEW_PERTICLE,48> : /* 0x000 */ fixed_array_base<NEW_PERTICLE,48,NEW_PERTICLE[48]> { // 0xc00
};

struct fixed_array_base<float[4],30,float[30][4]> { // 0x1e0
protected:
	/* 0x000 */ float m_aData[30][4];
	
public:
	fixed_array_base<float[4],30,float[30][4]>& operator=();
	fixed_array_base();
protected:
	fixed_array_base();
public:
	float&[4] operator[]();
	float&[4] operator[]();
	sceVu0FVECTOR* data();
	sceVu0FVECTOR* begin();
	sceVu0FVECTOR* end();
	void fill();
	size_t size();
	bool empty();
};

struct fixed_array<float[4],30> : /* 0x000 */ fixed_array_base<float[4],30,float[30][4]> { // 0x1e0
};

struct fixed_array_base<float[4],3,float[3][4]> { // 0x30
protected:
	/* 0x00 */ float m_aData[3][4];
	
public:
	fixed_array_base<float[4],3,float[3][4]>& operator=();
	fixed_array_base();
protected:
	fixed_array_base();
public:
	float&[4] operator[]();
	float&[4] operator[]();
	sceVu0FVECTOR* data();
	sceVu0FVECTOR* begin();
	sceVu0FVECTOR* end();
	void fill();
	size_t size();
	bool empty();
};

struct fixed_array<float[4],3> : /* 0x00 */ fixed_array_base<float[4],3,float[3][4]> { // 0x30
};

typedef struct { // 0x50
	/* 0x00 */ float MposP0[4];
	/* 0x10 */ u_char flow;
	/* 0x11 */ u_char alp;
	/* 0x12 */ u_char chance;
	/* 0x14 */ int scl;
	/* 0x18 */ int rot;
	/* 0x1c */ int cntcol;
	/* 0x20 */ int cntalp;
	/* 0x24 */ u_int cnt;
	/* 0x28 */ float x;
	/* 0x2c */ float y;
	/* 0x30 */ float dist;
	/* 0x34 */ int almx;
	/* 0x38 */ int scmx;
	/* 0x3c */ int rtmx;
	/* 0x40 */ int ccmx;
	/* 0x44 */ int camx;
	/* 0x48 */ int DmgType;
} ENE_DMG_EFF;

struct fixed_array_base<int,3,int *> { // 0x4
protected:
	/* 0x0 */ int *m_aData;
	
public:
	fixed_array_base<int,3,int *>& operator=();
	fixed_array_base();
protected:
	fixed_array_base();
public:
	int& operator[]();
	int& operator[]();
	int* data();
	int* begin();
	int* end();
	void fill();
	size_t size();
	bool empty();
};

struct reference_fixed_array<int,3> : /* 0x0 */ fixed_array_base<int,3,int *> { // 0x4
};

struct fixed_array_base<int,30,int[30]> { // 0x78
protected:
	/* 0x00 */ int m_aData[30];
	
public:
	fixed_array_base<int,30,int[30]>& operator=();
	fixed_array_base();
protected:
	fixed_array_base();
public:
	int& operator[]();
	int& operator[]();
	int* data();
	int* begin();
	int* end();
	void fill();
	size_t size();
	bool empty();
};

struct fixed_array<int,30> : /* 0x00 */ fixed_array_base<int,30,int[30]> { // 0x78
};

struct fixed_array_base<int[4],30,int[30][4]> { // 0x1e0
protected:
	/* 0x000 */ int m_aData[30][4];
	
public:
	fixed_array_base<int[4],30,int[30][4]>& operator=();
	fixed_array_base();
protected:
	fixed_array_base();
public:
	int&[4] operator[]();
	int&[4] operator[]();
	int*[4] data();
	int*[4] begin();
	int*[4] end();
	void fill();
	size_t size();
	bool empty();
};

struct fixed_array<int[4],30> : /* 0x000 */ fixed_array_base<int[4],30,int[30][4]> { // 0x1e0
};

struct fixed_array_base<long unsigned int,30,long unsigned int[30]> { // 0xf0
protected:
	/* 0x00 */ u_long m_aData[30];
	
public:
	fixed_array_base<long unsigned int,30,long unsigned int[30]>& operator=();
	fixed_array_base();
protected:
	fixed_array_base();
public:
	u_long& operator[]();
	u_long& operator[]();
	u_long* data();
	u_long* begin();
	u_long* end();
	void fill();
	size_t size();
	bool empty();
};

struct fixed_array<long unsigned int,30> : /* 0x00 */ fixed_array_base<long unsigned int,30,long unsigned int[30]> { // 0xf0
};

struct fixed_array_base<float[4],256,float[256][4]> { // 0x1000
protected:
	/* 0x000 */ float m_aData[256][4];
	
public:
	fixed_array_base<float[4],256,float[256][4]>& operator=();
	fixed_array_base();
protected:
	fixed_array_base();
public:
	float&[4] operator[]();
	float&[4] operator[]();
	sceVu0FVECTOR* data();
	sceVu0FVECTOR* begin();
	sceVu0FVECTOR* end();
	void fill();
	size_t size();
	bool empty();
};

struct fixed_array<float[4],256> : /* 0x000 */ fixed_array_base<float[4],256,float[256][4]> { // 0x1000
};

struct fixed_array_base<int[4],256,int[256][4]> { // 0x1000
protected:
	/* 0x000 */ int m_aData[256][4];
	
public:
	fixed_array_base<int[4],256,int[256][4]>& operator=();
	fixed_array_base();
protected:
	fixed_array_base();
public:
	int&[4] operator[]();
	int&[4] operator[]();
	sceVu0IVECTOR* data();
	sceVu0IVECTOR* begin();
	sceVu0IVECTOR* end();
	void fill();
	size_t size();
	bool empty();
};

struct fixed_array<int[4],256> : /* 0x000 */ fixed_array_base<int[4],256,int[256][4]> { // 0x1000
};

struct fixed_array_base<int,256,int[256]> { // 0x400
protected:
	/* 0x000 */ int m_aData[256];
	
public:
	fixed_array_base<int,256,int[256]>& operator=();
	fixed_array_base();
protected:
	fixed_array_base();
public:
	int& operator[]();
	int& operator[]();
	int* data();
	int* begin();
	int* end();
	void fill();
	size_t size();
	bool empty();
};

struct fixed_array<int,256> : /* 0x000 */ fixed_array_base<int,256,int[256]> { // 0x400
};

typedef struct { // 0x10
	/* 0x0 */ float pr11;
	/* 0x4 */ float pr12;
	/* 0x8 */ float pr21;
	/* 0xc */ float pr22;
} PDEFORM_PARA;

typedef struct { // 0x1c
	/* 0x00 */ void *pSgdTop;
	/* 0x04 */ float TotalS;
	/* 0x08 */ float TotalT;
	/* 0x0c */ int Id;
	/* 0x10 */ int MoveType;
	/* 0x14 */ int Count;
	/* 0x18 */ int MoveDataNo;
} WATER_FLOW_DATA;

typedef struct { // 0x18
	/* 0x00 */ void *pSgdTop;
	/* 0x04 */ int Id;
	/* 0x08 */ int AlphaStart;
	/* 0x0c */ int AlphaEnd;
	/* 0x10 */ int Time;
	/* 0x14 */ int Counter;
} MODEL_ALPHA_CAHNGE_DATA;

struct fixed_array_base<EFFINFO2,8,EFFINFO2[8]> { // 0x16980
protected:
	/* 0x00000 */ EFFINFO2 m_aData[8];
	
public:
	fixed_array_base<EFFINFO2,8,EFFINFO2[8]>& operator=();
	fixed_array_base();
protected:
	fixed_array_base();
public:
	EFFINFO2& operator[]();
	EFFINFO2& operator[]();
	EFFINFO2* data();
	EFFINFO2* begin();
	EFFINFO2* end();
	void fill();
	size_t size();
	bool empty();
};

struct fixed_array<EFFINFO2,8> : /* 0x00000 */ fixed_array_base<EFFINFO2,8,EFFINFO2[8]> { // 0x16980
};

struct fixed_array_base<int,289,int[289]> { // 0x484
protected:
	/* 0x000 */ int m_aData[289];
	
public:
	fixed_array_base<int,289,int[289]>& operator=();
	fixed_array_base();
protected:
	fixed_array_base();
public:
	int& operator[]();
	int& operator[]();
	int* data();
	int* begin();
	int* end();
	void fill();
	size_t size();
	bool empty();
};

struct fixed_array<int,289> : /* 0x000 */ fixed_array_base<int,289,int[289]> { // 0x484
};

struct fixed_array_base<int[4],289,int[289][4]> { // 0x1210
protected:
	/* 0x0000 */ int m_aData[289][4];
	
public:
	fixed_array_base<int[4],289,int[289][4]>& operator=();
	fixed_array_base();
protected:
	fixed_array_base();
public:
	int&[4] operator[]();
	int&[4] operator[]();
	int*[4] data();
	int*[4] begin();
	int*[4] end();
	void fill();
	size_t size();
	bool empty();
};

struct fixed_array<int[4],289> : /* 0x0000 */ fixed_array_base<int[4],289,int[289][4]> { // 0x1210
};

struct fixed_array_base<float[4],289,float[289][4]> { // 0x1210
protected:
	/* 0x0000 */ float m_aData[289][4];
	
public:
	fixed_array_base<float[4],289,float[289][4]>& operator=();
	fixed_array_base();
protected:
	fixed_array_base();
public:
	float&[4] operator[]();
	float&[4] operator[]();
	float*[4] data();
	float*[4] begin();
	float*[4] end();
	void fill();
	size_t size();
	bool empty();
};

struct fixed_array<float[4],289> : /* 0x0000 */ fixed_array_base<float[4],289,float[289][4]> { // 0x1210
};

struct fixed_array_base<int,10,int *> { // 0x4
protected:
	/* 0x0 */ int *m_aData;
	
public:
	fixed_array_base<int,10,int *>& operator=();
	fixed_array_base();
protected:
	fixed_array_base();
public:
	int& operator[]();
	int& operator[]();
	int* data();
	int* begin();
	int* end();
	void fill();
	size_t size();
	bool empty();
};

struct reference_fixed_array<int,10> : /* 0x0 */ fixed_array_base<int,10,int *> { // 0x4
};

struct fixed_array_base<EFFINFO2,5,EFFINFO2[5]> { // 0xe1f0
protected:
	/* 0x0000 */ EFFINFO2 m_aData[5];
	
public:
	fixed_array_base<EFFINFO2,5,EFFINFO2[5]>& operator=();
	fixed_array_base();
protected:
	fixed_array_base();
public:
	EFFINFO2& operator[]();
	EFFINFO2& operator[]();
	EFFINFO2* data();
	EFFINFO2* begin();
	EFFINFO2* end();
	void fill();
	size_t size();
	bool empty();
};

struct fixed_array<EFFINFO2,5> : /* 0x0000 */ fixed_array_base<EFFINFO2,5,EFFINFO2[5]> { // 0xe1f0
};

struct fixed_array_base<float,17,float[17]> { // 0x44
protected:
	/* 0x00 */ float m_aData[17];
	
public:
	fixed_array_base<float,17,float[17]>& operator=();
	fixed_array_base();
protected:
	fixed_array_base();
public:
	float& operator[]();
	float& operator[]();
	float* data();
	float* begin();
	float* end();
	void fill();
	size_t size();
	bool empty();
};

struct fixed_array<float,17> : /* 0x00 */ fixed_array_base<float,17,float[17]> { // 0x44
};

typedef struct { // 0x10
	/* 0x0 */ u_int type;
	/* 0x4 */ u_char rgba[4];
	/* 0x8 */ float lscl;
	/* 0xc */ float tscl;
} EFRENZ;

typedef struct { // 0x10
	/* 0x0 */ SINGLE_LINK_LIST LightList;
} LIGHT_COME_IN_CTRL;

enum CANDLE_FLAME_FLOW {
	CANDLE_FLAME_INIT = 0,
	CANDLE_FLAME_START1 = 1,
	CANDLE_FLAME_START2 = 2,
	CANDLE_FLAME_NORMAL = 3,
	CANDLE_FLAME_YURAMEKI = 4,
	CANDLE_FLAME_FUKKI = 5
};

enum MANY_CANDLE_LOAD_CTRL_STATUS {
	CANDLE_LOAD_IDLE = 0,
	CANDLE_LOAD_WAIT = 1,
	CANDLE_LOAD_EXEC = 2,
	CANDLE_LOAD_CANCEL = 3
};

typedef struct { // 0x40
	/* 0x00 */ float Offset[4];
	/* 0x10 */ u_int *pLoadBuf;
	/* 0x14 */ int Status;
	/* 0x18 */ int LoadId;
	/* 0x1c */ int PackNum;
	/* 0x20 */ void *pEffRet[5];
} MANY_CANDLE_LOAD_CTRL;

typedef struct { // 0x10
	/* 0x0 */ char FileId[4];
	/* 0x4 */ int DataNum;
	/* 0x8 */ int Pad[2];
} MANY_CANDLE_POS_DATA_HEADER;

enum DOOR_SEAL_DISAPPEAR_STATUS {
	DOOR_SEAL_STATUS_IDLE = 0,
	DOOR_SEAL_STATUS_PRELOAD_WAIT = 1,
	DOOR_SEAL_STATUS_SOUL_IN = 2,
	DOOR_SEAL_STATUS_SOUL_KEEP = 3,
	DOOR_SEAL_STATUS_DEFORM_IN = 4,
	DOOR_SEAL_STATUS_DEFORM_KEEP = 5,
	DOOR_SEAL_STATUS_SOUL_OUT = 6,
	DOOR_SEAL_STATUS_DEFORM_OUT = 7
};

typedef struct { // 0x110
	/* 0x000 */ int Counter;
	/* 0x004 */ int Status;
	/* 0x008 */ float AlphaRate;
	/* 0x010 */ EFFECT_CONT EffectCont;
	/* 0x080 */ EFFECT_CONT EffectContBlur;
	/* 0x0f0 */ float BasePos[4];
	/* 0x100 */ float DeformSpeed;
	/* 0x104 */ float DeformRate;
	/* 0x108 */ float DeformAlphaRate;
	/* 0x10c */ int StreamId;
} DOOR_SEAL_DISAPPEAR_CTRL;

struct fixed_array_base<EFF_LEAF,6,EFF_LEAF[6]> { // 0x1ec0
protected:
	/* 0x0000 */ EFF_LEAF m_aData[6];
	
public:
	fixed_array_base<EFF_LEAF,6,EFF_LEAF[6]>& operator=();
	fixed_array_base();
protected:
	fixed_array_base();
public:
	EFF_LEAF& operator[]();
	EFF_LEAF& operator[]();
	EFF_LEAF* data();
	EFF_LEAF* begin();
	EFF_LEAF* end();
	void fill();
	size_t size();
	bool empty();
};

struct fixed_array<EFF_LEAF,6> : /* 0x0000 */ fixed_array_base<EFF_LEAF,6,EFF_LEAF[6]> { // 0x1ec0
};

struct fixed_array_base<HEAT_HAZE,4,HEAT_HAZE[4]> { // 0xfa40
protected:
	/* 0x0000 */ HEAT_HAZE m_aData[4];
	
public:
	fixed_array_base<HEAT_HAZE,4,HEAT_HAZE[4]>& operator=();
	fixed_array_base();
protected:
	fixed_array_base();
public:
	HEAT_HAZE& operator[]();
	HEAT_HAZE& operator[]();
	HEAT_HAZE* data();
	HEAT_HAZE* begin();
	HEAT_HAZE* end();
	void fill();
	size_t size();
	bool empty();
};

struct fixed_array<HEAT_HAZE,4> : /* 0x0000 */ fixed_array_base<HEAT_HAZE,4,HEAT_HAZE[4]> { // 0xfa40
};

struct fixed_array_base<HEAT_HAZE,1,HEAT_HAZE[1]> { // 0x3e90
protected:
	/* 0x0000 */ HEAT_HAZE m_aData[1];
	
public:
	fixed_array_base<HEAT_HAZE,1,HEAT_HAZE[1]>& operator=();
	fixed_array_base();
protected:
	fixed_array_base();
public:
	HEAT_HAZE& operator[]();
	HEAT_HAZE& operator[]();
	HEAT_HAZE* data();
	HEAT_HAZE* begin();
	HEAT_HAZE* end();
	void fill();
	size_t size();
	bool empty();
};

struct fixed_array<HEAT_HAZE,1> : /* 0x0000 */ fixed_array_base<HEAT_HAZE,1,HEAT_HAZE[1]> { // 0x3e90
};

struct fixed_array_base<HEAT_HAZE,5,HEAT_HAZE[5]> { // 0x138d0
protected:
	/* 0x00000 */ HEAT_HAZE m_aData[5];
	
public:
	fixed_array_base<HEAT_HAZE,5,HEAT_HAZE[5]>& operator=();
	fixed_array_base();
protected:
	fixed_array_base();
public:
	HEAT_HAZE& operator[]();
	HEAT_HAZE& operator[]();
	HEAT_HAZE* data();
	HEAT_HAZE* begin();
	HEAT_HAZE* end();
	void fill();
	size_t size();
	bool empty();
};

struct fixed_array<HEAT_HAZE,5> : /* 0x00000 */ fixed_array_base<HEAT_HAZE,5,HEAT_HAZE[5]> { // 0x138d0
};

struct fixed_array_base<int[4],480,int[480][4]> { // 0x1e00
protected:
	/* 0x0000 */ int m_aData[480][4];
	
public:
	fixed_array_base<int[4],480,int[480][4]>& operator=();
	fixed_array_base();
protected:
	fixed_array_base();
public:
	int&[4] operator[]();
	int&[4] operator[]();
	sceVu0IVECTOR* data();
	sceVu0IVECTOR* begin();
	sceVu0IVECTOR* end();
	void fill();
	size_t size();
	bool empty();
};

struct fixed_array<int[4],480> : /* 0x0000 */ fixed_array_base<int[4],480,int[480][4]> { // 0x1e00
};

struct fixed_array_base<int,120,int[120]> { // 0x1e0
protected:
	/* 0x000 */ int m_aData[120];
	
public:
	fixed_array_base<int,120,int[120]>& operator=();
	fixed_array_base();
protected:
	fixed_array_base();
public:
	int& operator[]();
	int& operator[]();
	int* data();
	int* begin();
	int* end();
	void fill();
	size_t size();
	bool empty();
};

struct fixed_array<int,120> : /* 0x000 */ fixed_array_base<int,120,int[120]> { // 0x1e0
};

typedef struct { // 0x40
	/* 0x00 */ float Position[4];
	/* 0x10 */ int Flow;
	/* 0x14 */ float Rot;
	/* 0x18 */ float fCounter;
	/* 0x1c */ int ScaleCounter0;
	/* 0x20 */ int ScaleCounter1;
	/* 0x24 */ int AlphaCounter0;
	/* 0x28 */ int AlphaCounter1;
	/* 0x2c */ int ItemNo;
	/* 0x30 */ int Type;
} ITEM_EFFECT_DATA;

struct fixed_array_base<int,16,int[16]> { // 0x40
protected:
	/* 0x00 */ int m_aData[16];
	
public:
	fixed_array_base<int,16,int[16]>& operator=();
	fixed_array_base();
protected:
	fixed_array_base();
public:
	int& operator[]();
	int& operator[]();
	int* data();
	int* begin();
	int* end();
	void fill();
	size_t size();
	bool empty();
};

struct fixed_array<int,16> : /* 0x00 */ fixed_array_base<int,16,int[16]> { // 0x40
};

struct fixed_array_base<int,64,int[64]> { // 0x100
protected:
	/* 0x00 */ int m_aData[64];
	
public:
	fixed_array_base<int,64,int[64]>& operator=();
	fixed_array_base();
protected:
	fixed_array_base();
public:
	int& operator[]();
	int& operator[]();
	int* data();
	int* begin();
	int* end();
	void fill();
	size_t size();
	bool empty();
};

struct fixed_array<int,64> : /* 0x00 */ fixed_array_base<int,64,int[64]> { // 0x100
};

typedef struct { // 0x40
	/* 0x00 */ float LightningDirection[4];
	/* 0x10 */ float ThunderPosition[4];
	/* 0x20 */ int LightningStatus;
	/* 0x24 */ int LightningTime;
	/* 0x28 */ int LightningFlg;
	/* 0x2c */ int ThunderStatus;
	/* 0x30 */ int ThunderTime;
} THUNDER_LIGHT_CTRL;

typedef struct { // 0x30
	/* 0x00 */ float Position[4];
	/* 0x10 */ float Target[4];
	/* 0x20 */ float Fov;
	/* 0x24 */ float Roll;
} DOOR_SEAL_CAMERA_BACKUP;

typedef float RectVECTOR[4][4];

typedef struct { // 0x30
	/* 0x00 */ float Position[4];
	/* 0x10 */ float Velocity[4];
	/* 0x20 */ float Length;
	/* 0x24 */ float RotX;
	/* 0x28 */ float RotY;
} EFFECT_RAIN_PARTICLE;

typedef struct { // 0x40
	/* 0x00 */ sceVu0IVECTOR Color0;
	/* 0x10 */ sceVu0IVECTOR Color1;
	/* 0x20 */ float Offset[4];
	/* 0x30 */ int ParticleNum;
	/* 0x34 */ EFFECT_RAIN_PARTICLE *pParticle;
} EFFECT_RAIN_CTRL;

typedef struct { // 0x30
	/* 0x00 */ float Position[4];
	/* 0x10 */ float Velocity[4];
	/* 0x20 */ int LifeTime;
	/* 0x24 */ float StartScale;
	/* 0x28 */ float LastScale;
} EFFECT_SPRAY_PARTICLE;

typedef struct { // 0x50
	/* 0x00 */ RectVECTOR Rect;
	/* 0x40 */ int Rate;
} SPRAY_APPEAR_DATA;

typedef struct { // 0x60
	/* 0x00 */ float Offset[4];
	/* 0x10 */ SPRAY_APPEAR_DATA *pAppearData;
	/* 0x14 */ int RectNum;
	/* 0x18 */ int ParticleNum;
	/* 0x1c */ int R;
	/* 0x20 */ int G;
	/* 0x24 */ int B;
	/* 0x28 */ int Alpha;
	/* 0x2c */ float SpeedXMax;
	/* 0x30 */ float SpeedXMin;
	/* 0x34 */ float SpeedYMax;
	/* 0x38 */ float SpeedYMin;
	/* 0x3c */ float SpeedZMax;
	/* 0x40 */ float SpeedZMin;
	/* 0x44 */ int AppearNumMin;
	/* 0x48 */ int AppearNumMax;
	/* 0x4c */ int InitLifeTime;
	/* 0x50 */ float StartScale;
	/* 0x54 */ float LastScaleMax;
	/* 0x58 */ float LastScaleMin;
	/* 0x5c */ EFFECT_SPRAY_PARTICLE *pParticle;
} EFFECT_SPRAY_CTRL;

typedef struct { // 0x20
	/* 0x00 */ float Max[4];
	/* 0x10 */ float Min[4];
} RAIN_HIT_BOX;

struct _EFFECT_DROP_PARTICLE { // 0x30
	/* 0x00 */ float Position[4];
	/* 0x10 */ float Velocity[4];
	/* 0x20 */ float Gravity;
	/* 0x24 */ float GroundHeight;
};

typedef _EFFECT_DROP_PARTICLE EFFECT_DROP_PARTICLE;

typedef struct { // 0x40
	/* 0x00 */ float Offset[4];
	/* 0x10 */ SINGLE_LINK_LIST *pList;
	/* 0x14 */ float *pAppearPos[4];
	/* 0x18 */ int AppearPosNum;
	/* 0x1c */ float ScaleX;
	/* 0x20 */ float ScaleY;
	/* 0x24 */ int R;
	/* 0x28 */ int G;
	/* 0x2c */ int B;
	/* 0x30 */ int Alpha;
} EFFECT_DROP_CTRL;

struct fixed_array_base<BURN_FIRE,30,BURN_FIRE[30]> { // 0xb40
protected:
	/* 0x000 */ BURN_FIRE m_aData[30];
	
public:
	fixed_array_base<BURN_FIRE,30,BURN_FIRE[30]>& operator=();
	fixed_array_base();
protected:
	fixed_array_base();
public:
	BURN_FIRE& operator[]();
	BURN_FIRE& operator[]();
	BURN_FIRE* data();
	BURN_FIRE* begin();
	BURN_FIRE* end();
	void fill();
	size_t size();
	bool empty();
};

struct fixed_array<BURN_FIRE,30> : /* 0x000 */ fixed_array_base<BURN_FIRE,30,BURN_FIRE[30]> { // 0xb40
};

struct fixed_array_base<EFFRDR_RSV,10,EFFRDR_RSV[10]> { // 0x280
protected:
	/* 0x000 */ EFFRDR_RSV m_aData[10];
	
public:
	fixed_array_base<EFFRDR_RSV,10,EFFRDR_RSV[10]>& operator=();
	fixed_array_base();
protected:
	fixed_array_base();
public:
	EFFRDR_RSV& operator[]();
	EFFRDR_RSV& operator[]();
	EFFRDR_RSV* data();
	EFFRDR_RSV* begin();
	EFFRDR_RSV* end();
	void fill();
	size_t size();
	bool empty();
};

struct fixed_array<EFFRDR_RSV,10> : /* 0x000 */ fixed_array_base<EFFRDR_RSV,10,EFFRDR_RSV[10]> { // 0x280
};

enum MAP_CAM_HOKAN_TYPE {
	MCD_HOKAN_LINE = 0,
	MCD_HOKAN_BEZIER = 1,
	MCD_HOKAN_HERMITE = 2,
	MCD_HOKAN_NUM = 3
};

enum MAP_CAM_MODE {
	MAP_CAM_MODE_NORMAL = 0,
	MAP_CAM_MODE_FINDER_IN = 1,
	MAP_CAM_MODE_FINDER = 2,
	MAP_CAM_MODE_APPROACH = 3
};

enum PLYR_SHOULDER_CAMERA_TYPE {
	PLYR_SHOULDER_CAMERA_TYPE_DEFAULT = 0,
	PLYR_SHOULDER_CAMERA_TYPE_TWINS = 1,
	PLYR_SHOULDER_CAMERA_TYPE_ONIKODOMO = 2
};

typedef struct { // 0xb0
	/* 0x00 */ int mode;
	/* 0x04 */ int crossfade;
	/* 0x08 */ float cnt;
	/* 0x0c */ int flow;
	/* 0x10 */ float offy;
	/* 0x14 */ float dist;
	/* 0x18 */ float offy2;
	/* 0x20 */ float ipos[4];
	/* 0x30 */ float pmv[4];
	/* 0x40 */ float npos[4];
	/* 0x50 */ float imv[4];
	/* 0x60 */ float inpos[4];
	/* 0x70 */ float trot[4];
	/* 0x80 */ float NeckInitVector[4];
	/* 0x90 */ float PosInitVector[4];
	/* 0xa0 */ ENE_WRK *pEneWrk;
} APPROACH_CAMERA;

enum SCREEN_SAVER_LOAD_STATUS {
	SCREEN_SAVER_LOAD_IDLE = 0,
	SCREEN_SAVER_LOAD_WAIT = 1,
	SCREEN_SAVER_LOAD_END = 2
};

struct EFF_BLUR { // 0x28
	/* 0x00 */ u_int flow;
	/* 0x04 */ u_int cnt;
	/* 0x08 */ u_int in;
	/* 0x0c */ u_int keep;
	/* 0x10 */ u_int out;
	/* 0x14 */ u_int alp;
	/* 0x18 */ float scl;
	/* 0x1c */ float rot;
	/* 0x20 */ float cx;
	/* 0x24 */ float cy;
};

struct EFF_FOCUS { // 0x18
	/* 0x00 */ u_int flow;
	/* 0x04 */ u_int cnt;
	/* 0x08 */ u_int in;
	/* 0x0c */ u_int keep;
	/* 0x10 */ u_int out;
	/* 0x14 */ u_int max;
};

struct EFF_DEFORM { // 0x4
	/* 0x0 */ u_char type;
	/* 0x1 */ u_char otype;
	/* 0x2 */ u_char init;
	/* 0x3 */ u_char pass;
};

typedef struct { // 0x3
	/* 0x0 */ u_char OldAlpha;
	/* 0x1 */ u_char OldColor;
	/* 0x2 */ u_char MakeFlg;
} MAKE_DITHER_PATTERN_CTRL;

typedef struct { // 0x2c
	/* 0x00 */ float Scale;
	/* 0x04 */ int BasePosX;
	/* 0x08 */ int BasePosY;
	/* 0x0c */ int PosX;
	/* 0x10 */ int PosY;
	/* 0x14 */ int AlphaInTime;
	/* 0x18 */ int AlphaKeepTime;
	/* 0x1c */ int AlphaOutTime;
	/* 0x20 */ int DispTime;
	/* 0x24 */ int DispTimeAll;
	/* 0x28 */ int Alpha;
} SCREEN_SAVER_TEX;

struct fixed_array_base<SCREEN_SAVER_TEX,1,SCREEN_SAVER_TEX[1]> { // 0x2c
protected:
	/* 0x00 */ SCREEN_SAVER_TEX m_aData[1];
	
public:
	fixed_array_base<SCREEN_SAVER_TEX,1,SCREEN_SAVER_TEX[1]>& operator=();
	fixed_array_base();
protected:
	fixed_array_base();
public:
	SCREEN_SAVER_TEX& operator[]();
	SCREEN_SAVER_TEX& operator[]();
	SCREEN_SAVER_TEX* data();
	SCREEN_SAVER_TEX* begin();
	SCREEN_SAVER_TEX* end();
	void fill();
	size_t size();
	bool empty();
};

struct fixed_array<SCREEN_SAVER_TEX,1> : /* 0x00 */ fixed_array_base<SCREEN_SAVER_TEX,1,SCREEN_SAVER_TEX[1]> { // 0x2c
};

typedef struct { // 0x58
	/* 0x00 */ fixed_array<SCREEN_SAVER_TEX,1> TexData;
	/* 0x2c */ u_int *pTexBuf;
	/* 0x30 */ int Counter;
	/* 0x34 */ int IntervalTime;
	/* 0x38 */ int DispTime;
	/* 0x3c */ int LoadStatus;
	/* 0x40 */ int LoadId;
	/* 0x44 */ int ScreenEffectNo;
	/* 0x48 */ int DitherInterval;
	/* 0x4c */ float DitherAlpha;
	/* 0x50 */ int DitherChangeTime;
	/* 0x54 */ int PlayId;
} SCREEN_SAVER_CTRL;

typedef struct { // 0x18
	/* 0x00 */ float rrr;
	/* 0x04 */ float lll;
	/* 0x08 */ float mm1;
	/* 0x0c */ float mm2;
	/* 0x10 */ float sss;
	/* 0x14 */ float ccc;
} DEFWORK;

typedef struct { // 0x20
	/* 0x00 */ float stq[4];
	/* 0x10 */ float vtw[4];
} SCRDEF;

typedef struct { // 0x10
	/* 0x0 */ int screen_flag;
	/* 0x4 */ int time;
	/* 0x8 */ int cnt;
	/* 0xc */ u_char col_r;
	/* 0xd */ u_char col_g;
	/* 0xe */ u_char col_b;
	/* 0xf */ u_char now_alpha;
} SCRCTRL;

struct fixed_array_base<short int,4,short int[4]> { // 0x8
protected:
	/* 0x0 */ short int m_aData[4];
	
public:
	fixed_array_base<short int,4,short int[4]>& operator=();
	fixed_array_base();
protected:
	fixed_array_base();
public:
	short int& operator[]();
	short int& operator[]();
	short int* data();
	short int* begin();
	short int* end();
	void fill();
	size_t size();
	bool empty();
};

struct fixed_array<short int,4> : /* 0x0 */ fixed_array_base<short int,4,short int[4]> { // 0x8
};

typedef struct { // 0x50
	/* 0x00 */ float Position[4];
	/* 0x10 */ float Aim[4];
	/* 0x20 */ float Accel[4];
	/* 0x30 */ float Rots[4];
	/* 0x40 */ short int at_ground;
	/* 0x42 */ fixed_array<short int,4> rgba;
	/* 0x4a */ short int InCount;
} LEAVES_PARTICLE;

typedef struct { // 0x60
	/* 0x00 */ LEAVES_PARTICLE *pLeavesParticle;
	/* 0x10 */ float FallSpeed[4];
	/* 0x20 */ float CenterPos[4];
	/* 0x30 */ int ParticleMax;
	/* 0x34 */ int ParticleNum;
	/* 0x38 */ float AppearRate;
	/* 0x3c */ float AppearRateCount;
	/* 0x40 */ short int FallDistance;
	/* 0x44 */ int StopTime;
	/* 0x48 */ int Id;
	/* 0x4c */ short int Area;
	/* 0x4e */ fixed_array<short int,4> Color;
} LEAVES_FALL_CTRL;

typedef struct { // 0xc
	/* 0x0 */ int FileNo;
	/* 0x4 */ int BankNo;
	/* 0x8 */ int IsReady;
} EFFECT_SOUNDFILE_DATA;

typedef struct { // 0x4
	/* 0x0 */ int FileNo;
} EFFECT_FILEDEL_DATA;

typedef struct { // 0x30
	/* 0x00 */ float Position[4];
	/* 0x10 */ int SetPositionFlg;
	/* 0x14 */ int FileNo;
	/* 0x18 */ int No;
	/* 0x1c */ int Effect;
	/* 0x20 */ int FadeTime;
	/* 0x24 */ int PlayId;
	/* 0x28 */ u_int DeleteKey;
} EFFECT_SOUNDPLAY_DATA;

typedef struct { // 0x30
	/* 0x00 */ SINGLE_LINK_LIST FileReadyList;
	/* 0x10 */ SINGLE_LINK_LIST FileDeleteList;
	/* 0x20 */ SINGLE_LINK_LIST PlayList;
} EFFECT_SOUND_CTRL;

struct fixed_array_base<TORCH2_PARAMETER *,9,TORCH2_PARAMETER **> { // 0x4
protected:
	/* 0x0 */ TORCH2_PARAMETER **m_aData;
	
public:
	fixed_array_base<TORCH2_PARAMETER *,9,TORCH2_PARAMETER **>& operator=();
	fixed_array_base();
protected:
	fixed_array_base();
public:
	TORCH2_PARAMETER*& operator[]();
	TORCH2_PARAMETER*& operator[]();
	TORCH2_PARAMETER** data();
	TORCH2_PARAMETER** begin();
	TORCH2_PARAMETER** end();
	void fill();
	size_t size();
	bool empty();
};

struct reference_fixed_array<TORCH2_PARAMETER *,9> : /* 0x0 */ fixed_array_base<TORCH2_PARAMETER *,9,TORCH2_PARAMETER **> { // 0x4
};

struct fixed_array_base<TORCH2_BURST_PARAMETER *,9,TORCH2_BURST_PARAMETER **> { // 0x4
protected:
	/* 0x0 */ TORCH2_BURST_PARAMETER **m_aData;
	
public:
	fixed_array_base<TORCH2_BURST_PARAMETER *,9,TORCH2_BURST_PARAMETER **>& operator=();
	fixed_array_base();
protected:
	fixed_array_base();
public:
	TORCH2_BURST_PARAMETER*& operator[]();
	TORCH2_BURST_PARAMETER*& operator[]();
	TORCH2_BURST_PARAMETER** data();
	TORCH2_BURST_PARAMETER** begin();
	TORCH2_BURST_PARAMETER** end();
	void fill();
	size_t size();
	bool empty();
};

struct reference_fixed_array<TORCH2_BURST_PARAMETER *,9> : /* 0x0 */ fixed_array_base<TORCH2_BURST_PARAMETER *,9,TORCH2_BURST_PARAMETER **> { // 0x4
};

struct fixed_array_base<TORCH2_SPARK_PARAMETER *,9,TORCH2_SPARK_PARAMETER **> { // 0x4
protected:
	/* 0x0 */ TORCH2_SPARK_PARAMETER **m_aData;
	
public:
	fixed_array_base<TORCH2_SPARK_PARAMETER *,9,TORCH2_SPARK_PARAMETER **>& operator=();
	fixed_array_base();
protected:
	fixed_array_base();
public:
	TORCH2_SPARK_PARAMETER*& operator[]();
	TORCH2_SPARK_PARAMETER*& operator[]();
	TORCH2_SPARK_PARAMETER** data();
	TORCH2_SPARK_PARAMETER** begin();
	TORCH2_SPARK_PARAMETER** end();
	void fill();
	size_t size();
	bool empty();
};

struct reference_fixed_array<TORCH2_SPARK_PARAMETER *,9> : /* 0x0 */ fixed_array_base<TORCH2_SPARK_PARAMETER *,9,TORCH2_SPARK_PARAMETER **> { // 0x4
};

typedef struct { // 0x20
	/* 0x00 */ float Position[4];
	/* 0x10 */ short int Count;
	/* 0x12 */ short int Cycle;
	/* 0x14 */ short int ExecFlg;
} TORCH2_BIGFREA_CTRL;

struct ENE_MOT_CTRL { // 0x4
	/* 0x0 */ short int old_mot;
	/* 0x2 */ short int old_frm;
};

struct ENE_MOT_WRK { // 0x8
	/* 0x0 */ u_int attr;
	/* 0x4 */ short int frm;
	/* 0x6 */ short int sub;
};

struct fixed_array_base<ENE_MOT_WRK **,63,ENE_MOT_WRK ***> { // 0x4
protected:
	/* 0x0 */ ENE_MOT_WRK ***m_aData;
	
public:
	fixed_array_base<ENE_MOT_WRK **,63,ENE_MOT_WRK ***>& operator=();
	fixed_array_base();
protected:
	fixed_array_base();
public:
	ENE_MOT_WRK**& operator[]();
	ENE_MOT_WRK**& operator[]();
	ENE_MOT_WRK*** data();
	ENE_MOT_WRK*** begin();
	ENE_MOT_WRK*** end();
	void fill();
	size_t size();
	bool empty();
};

struct reference_fixed_array<ENE_MOT_WRK **,63> : /* 0x0 */ fixed_array_base<ENE_MOT_WRK **,63,ENE_MOT_WRK ***> { // 0x4
};

struct fixed_array_base<ENE_MOT_CTRL,10,ENE_MOT_CTRL[10]> { // 0x28
protected:
	/* 0x00 */ ENE_MOT_CTRL m_aData[10];
	
public:
	fixed_array_base<ENE_MOT_CTRL,10,ENE_MOT_CTRL[10]>& operator=();
	fixed_array_base();
protected:
	fixed_array_base();
public:
	ENE_MOT_CTRL& operator[]();
	ENE_MOT_CTRL& operator[]();
	ENE_MOT_CTRL* data();
	ENE_MOT_CTRL* begin();
	ENE_MOT_CTRL* end();
	void fill();
	size_t size();
	bool empty();
};

struct fixed_array<ENE_MOT_CTRL,10> : /* 0x00 */ fixed_array_base<ENE_MOT_CTRL,10,ENE_MOT_CTRL[10]> { // 0x28
};

typedef struct { // 0x10
	/* 0x0 */ int event_id;
	/* 0x4 */ u_int stop_timer;
	/* 0x8 */ u_char *event_addr;
	/* 0xc */ u_char if_state;
	/* 0xd */ u_char process;
} EV_EXE_CTRL;

typedef struct { // 0x8
	/* 0x0 */ int obj1_id;
	/* 0x4 */ int obj2_id;
} MORPH_DAT;

struct DEFORM_TYPE { // 0xc
	/* 0x0 */ u_char no;
	/* 0x1 */ u_char alp;
	/* 0x4 */ float spd;
	/* 0x8 */ float wave;
};

struct DITHER_TYPE { // 0x10
	/* 0x0 */ u_char type;
	/* 0x2 */ u_short alp;
	/* 0x4 */ u_short spd;
	/* 0x6 */ u_short amax;
	/* 0x8 */ u_short cmax;
	/* 0xa */ u_short in;
	/* 0xc */ u_short keep;
	/* 0xe */ u_short out;
};

struct _NEAREST_ENE_MANAGE { // 0xc
	/* 0x0 */ int wrk_no;
	/* 0x4 */ int in_circle;
	/* 0x8 */ float dist;
};

typedef _NEAREST_ENE_MANAGE NEAREST_ENE_MANAGE;

enum _MOVIE_PROJECTER_STATE {
	MOVIE_PROJECTER_STATE_NONE = 0,
	MOVIE_PROJECTER_STATE_PRELOAD = 1,
	MOVIE_PROJECTER_STATE_PLAY = 2
};

typedef _MOVIE_PROJECTER_STATE MOVIE_PROJECTER_STATE;

struct _ENE_DAT_SAVE { // 0x1
	/* 0x0 */ char release_type;
};

typedef _ENE_DAT_SAVE ENE_DAT_SAVE;

typedef struct { // 0x8
	/* 0x0 */ short int condition;
	/* 0x2 */ short int event_id;
	/* 0x4 */ u_char *exe_addr;
} EV_CTRL_CENTER;

typedef struct { // 0x8
	/* 0x0 */ u_char obj_type;
	/* 0x4 */ int obj_id;
} EV_PHOTO_OBJ;

enum EV_TBL_TYPE {
	SUB_EVENT_OPEN_TBL = 0,
	EV_DAT_INIT_TBL = 1,
	EV_DAT_MAIN_TBL = 2,
	EV_DAT_IS_DESTRCT_TBL = 3,
	EV_DAT_DESTRCT_TBL = 4,
	EV_DAT_PARENT_TBL = 5,
	EV_DAT_SUBEVENT_TBL_TBL = 6
};

struct fixed_array_base<EV_CHANGE_CTRL,30,EV_CHANGE_CTRL[30]> { // 0x168
protected:
	/* 0x000 */ EV_CHANGE_CTRL m_aData[30];
	
public:
	fixed_array_base<EV_CHANGE_CTRL,30,EV_CHANGE_CTRL[30]>& operator=();
	fixed_array_base();
protected:
	fixed_array_base();
public:
	EV_CHANGE_CTRL& operator[]();
	EV_CHANGE_CTRL& operator[]();
	EV_CHANGE_CTRL* data();
	EV_CHANGE_CTRL* begin();
	EV_CHANGE_CTRL* end();
	void fill();
	size_t size();
	bool empty();
};

struct fixed_array<EV_CHANGE_CTRL,30> : /* 0x000 */ fixed_array_base<EV_CHANGE_CTRL,30,EV_CHANGE_CTRL[30]> { // 0x168
};

struct fixed_array_base<int,50,int[50]> { // 0xc8
protected:
	/* 0x00 */ int m_aData[50];
	
public:
	fixed_array_base<int,50,int[50]>& operator=();
	fixed_array_base();
protected:
	fixed_array_base();
public:
	int& operator[]();
	int& operator[]();
	int* data();
	int* begin();
	int* end();
	void fill();
	size_t size();
	bool empty();
};

struct fixed_array<int,50> : /* 0x00 */ fixed_array_base<int,50,int[50]> { // 0xc8
};

typedef struct { // 0x30
	/* 0x00 */ u_char step;
	/* 0x01 */ u_char anim_step;
	/* 0x02 */ u_char disp_flg;
	/* 0x03 */ u_char win_flg;
	/* 0x04 */ int file_label;
	/* 0x08 */ int fade_time;
	/* 0x0c */ int timer;
	/* 0x10 */ SPRT_DAT sprt;
} EV_DISP2D_CTRL;

typedef struct { // 0x8
	/* 0x0 */ u_char step;
	/* 0x1 */ u_char chapter_num;
	/* 0x2 */ u_char disp_flg;
	/* 0x3 */ u_char anim_step;
	/* 0x4 */ int timer;
} EV_CHAPTER_DISP;

typedef struct { // 0x14
	/* 0x00 */ u_char anim_step;
	/* 0x01 */ u_char disp_flg;
	/* 0x04 */ int msg_type;
	/* 0x08 */ int msg_id;
	/* 0x0c */ int fade_time;
	/* 0x10 */ int timer;
} EV_ITEM_NAME_DISP;

struct fixed_array_base<int,11,int *> { // 0x4
protected:
	/* 0x0 */ int *m_aData;
	
public:
	fixed_array_base<int,11,int *>& operator=();
	fixed_array_base();
protected:
	fixed_array_base();
public:
	int& operator[]();
	int& operator[]();
	int* data();
	int* begin();
	int* end();
	void fill();
	size_t size();
	bool empty();
};

struct reference_fixed_array<int,11> : /* 0x0 */ fixed_array_base<int,11,int *> { // 0x4
};

struct _ENE_DATS { // 0x8
	/* 0x0 */ int ene_type;
	/* 0x4 */ int dat_no;
};

typedef _ENE_DATS ENE_DATS;

struct _ENE_LOAD_DATS { // 0x8
	/* 0x0 */ ENE_DATS dats;
};

typedef _ENE_LOAD_DATS ENE_LOAD_DATS;

struct fixed_array_base<EV_EXE_CTRL,150,EV_EXE_CTRL[150]> { // 0x960
protected:
	/* 0x000 */ EV_EXE_CTRL m_aData[150];
	
public:
	fixed_array_base<EV_EXE_CTRL,150,EV_EXE_CTRL[150]>& operator=();
	fixed_array_base();
protected:
	fixed_array_base();
public:
	EV_EXE_CTRL& operator[]();
	EV_EXE_CTRL& operator[]();
	EV_EXE_CTRL* data();
	EV_EXE_CTRL* begin();
	EV_EXE_CTRL* end();
	void fill();
	size_t size();
	bool empty();
};

struct fixed_array<EV_EXE_CTRL,150> : /* 0x000 */ fixed_array_base<EV_EXE_CTRL,150,EV_EXE_CTRL[150]> { // 0x960
};

typedef struct { // 0x8
	/* 0x0 */ int msg_id;
	/* 0x4 */ int subtitle_label;
} TALK_DATA;

struct fixed_array_base<TALK_DATA,16,TALK_DATA[16]> { // 0x80
protected:
	/* 0x00 */ TALK_DATA m_aData[16];
	
public:
	fixed_array_base<TALK_DATA,16,TALK_DATA[16]>& operator=();
	fixed_array_base();
protected:
	fixed_array_base();
public:
	TALK_DATA& operator[]();
	TALK_DATA& operator[]();
	TALK_DATA* data();
	TALK_DATA* begin();
	TALK_DATA* end();
	void fill();
	size_t size();
	bool empty();
};

struct fixed_array<TALK_DATA,16> : /* 0x00 */ fixed_array_base<TALK_DATA,16,TALK_DATA[16]> { // 0x80
};

typedef struct { // 0x88
	/* 0x00 */ char data_num;
	/* 0x01 */ char data_pos;
	/* 0x02 */ u_char cam_flg;
	/* 0x04 */ int talk_type;
	/* 0x08 */ fixed_array<TALK_DATA,16> data;
} TALK_TBL;

typedef struct { // 0x10
	/* 0x0 */ int event_id;
	/* 0x4 */ u_int timer;
	/* 0x8 */ int req_event_id;
	/* 0xc */ u_char req_state;
} REGIST_TIMER;

struct fixed_array_base<REGIST_TIMER,30,REGIST_TIMER[30]> { // 0x1e0
protected:
	/* 0x000 */ REGIST_TIMER m_aData[30];
	
public:
	fixed_array_base<REGIST_TIMER,30,REGIST_TIMER[30]>& operator=();
	fixed_array_base();
protected:
	fixed_array_base();
public:
	REGIST_TIMER& operator[]();
	REGIST_TIMER& operator[]();
	REGIST_TIMER* data();
	REGIST_TIMER* begin();
	REGIST_TIMER* end();
	void fill();
	size_t size();
	bool empty();
};

struct fixed_array<REGIST_TIMER,30> : /* 0x000 */ fixed_array_base<REGIST_TIMER,30,REGIST_TIMER[30]> { // 0x1e0
};

typedef struct { // 0x1e4
	/* 0x000 */ u_int event_timer;
	/* 0x004 */ fixed_array<REGIST_TIMER,30> regist_timer;
} EV_TIMER_CTRL;

typedef int (*sceSdTransIntrHandler)(/* parameters unknown */);
typedef int (*sceSdSpu2IntrHandler)(/* parameters unknown */);

typedef struct { // 0x8
	/* 0x0 */ short unsigned int func;
	/* 0x2 */ short unsigned int entry;
	/* 0x4 */ unsigned int value;
} sceSdBatch;

typedef struct { // 0x14
	/* 0x00 */ int core;
	/* 0x04 */ int mode;
	/* 0x08 */ short int depth_L;
	/* 0x0a */ short int depth_R;
	/* 0x0c */ int delay;
	/* 0x10 */ int feedback;
} sceSdEffectAttr;

struct _HXD_HEADER { // 0x20
	/* 0x00 */ int name;
	/* 0x04 */ int version;
	/* 0x08 */ int num;
	/* 0x0c */ int type;
	/* 0x10 */ int size;
	/* 0x14 */ int interleave_byte;
	/* 0x18 */ int padding[2];
};

typedef _HXD_HEADER HXD_HEADER;

enum _VOICE_TYPE_ENUM {
	VOICE_ATTRIBUTE_GROUP_A = 0,
	VOICE_ATTRIBUTE_GROUP_B = 1,
	VOICE_ATTRIBUTE_GROUP_C = 2,
	VOICE_ATTRIBUTE_GROUP_D = 3,
	VOICE_ATTRIBUTE_GROUP_E = 4,
	VOICE_TYPE_NUM = 5
};

typedef _VOICE_TYPE_ENUM VOICE_TYPE_ENUM;

struct _VOICE_ATTR { // 0x2
	/* 0x0:0 */ short unsigned int effect : 1;
	/* 0x0:1 */ short unsigned int type : 3;
	/* 0x0:4 */ short unsigned int s3d : 1;
	/* 0x0:5 */ short unsigned int loop : 1;
	/* 0x0:6 */ short unsigned int core : 1;
	/* 0x0:7 */ short unsigned int male : 1;
	/* 0x1:0 */ short unsigned int dummy : 8;
};

typedef _VOICE_ATTR VOICE_ATTR;

struct _SOUND_INFO { // 0x1c
	/* 0x00 */ int smpl_rate;
	/* 0x04 */ int offset;
	/* 0x08 */ short int pitch;
	/* 0x0a */ short int vol;
	/* 0x0c */ short unsigned int adsr1;
	/* 0x0e */ short unsigned int adsr2;
	/* 0x10 */ VOICE_ATTR attr;
	/* 0x12 */ short int pan;
	/* 0x14 */ int loopstart;
	/* 0x18 */ int loopend;
};

typedef _SOUND_INFO SOUND_INFO;

struct _EEIOP_DEF { // 0x3c
	/* 0x00 */ void* (*malloc64)(/* parameters unknown */);
	/* 0x04 */ void (*free64)(/* parameters unknown */);
	/* 0x08 */ int command_send_buffer_size;
	/* 0x0c */ char *iop_def_module;
	/* 0x10 */ char *hil_file_name;
	/* 0x14 */ char *dil_file_name;
	/* 0x18 */ int media;
	/* 0x1c */ int file_load_wrk_num;
	/* 0x20 */ int snd_bank_wrk_num;
	/* 0x24 */ int stream_auto_wrk_num;
	/* 0x28 */ int auto_bd_wrk_num;
	/* 0x2c */ int snd_stream_load_priority;
	/* 0x30 */ int snd_bank_load_priority;
	/* 0x34 */ int cmp_use_flg;
	/* 0x38 */ int rom_boot;
};

typedef _EEIOP_DEF EEIOP_DEF;

enum _EEIOP_STREAM_STATUS {
	ST_STREAM_NO_USE = 0,
	ST_STREAM_HEADER_LOAD = 1,
	ST_STREAM_PRE_LOAD = 2,
	ST_STREAM_PLAYING = 3,
	ST_STREAM_WAIT_END = 4,
	ST_STREAM_END = 5,
	ST_STREAM_START = 6,
	ST_STREAM_PRE_NO_USE = 7,
	ST_STREAM_FORCE_DWORD = -1
};

typedef _EEIOP_STREAM_STATUS EEIOP_STREAM_STATUS;

struct _IOP_STREAM_RET { // 0x8
	/* 0x0 */ EEIOP_STREAM_STATUS status;
	/* 0x4 */ int offset;
};

typedef _IOP_STREAM_RET IOP_STREAM_RET;

struct _IOP_RET_STATUS { // 0x1a8
	/* 0x000 */ int voice_end[2];
	/* 0x008 */ IOP_STREAM_RET stream_ret[2];
	/* 0x018 */ IOP_STREAM_RET pcm_stream_ret[2];
	/* 0x028 */ int mpLoopAdrs[2][24];
	/* 0x0e8 */ int mpNowAdrs[2][24];
};

typedef _IOP_RET_STATUS IOP_RET_STATUS;

struct _SPU_BLOCK_HEADER { // 0x2
	/* 0x0 */ unsigned char decode_param;
	/* 0x1 */ unsigned char loop;
};

typedef _SPU_BLOCK_HEADER SPU_BLOCK_HEADER;

struct _SPU_BLOCK_DATA { // 0x10
	/* 0x0 */ SPU_BLOCK_HEADER header;
	/* 0x2 */ short unsigned int data[7];
};

typedef _SPU_BLOCK_DATA SPU_BLOCK_DATA;

enum _enumSPU_LOOP {
	SPU_LOOP_NON = 0,
	SPU_LOOP = 2,
	SPU_LOOP_START = 6,
	SPU_LOOP_END = 3,
	SPU_END = 1,
	SPU_STOP_BLOCK = 7
};

typedef _enumSPU_LOOP enumSPU_LOOP;

enum _IOP_COMMAND_QUERY_ENUM {
	REQ_FILE_SIZE = 0,
	REQ_Q_LOAD_CANCEL = 1,
	REQ_SPU_TRANS_CORE_GET = 2,
	REQ_SPU_TRANS_CORE_RELEASE = 3
};

typedef _IOP_COMMAND_QUERY_ENUM IOP_COMMAND_QUERY_ENUM;

enum _IOP_COMMAND_ENUM {
	IOP_COM_END = 0,
	REQ_IOP_REBOOT = 1,
	REQ_CDVD_INIT = 2,
	REQ_SET_CD_DAT = 3,
	REQ_CD_READ_MODE_CHANGE = 4,
	REQ_IOP_SND_INIT = 5,
	REQ_SET_SND_EFFECT = 6,
	REQ_VOICE_STOP = 7,
	REQ_VOICE_LOOP_SET = 8,
	REQ_STREAM_CREATE = 9,
	REQ_STREAM_RELEASE = 10,
	REQ_STREAM_START = 11,
	REQ_STREAM_PLAY = 12,
	REQ_STREAM_STOP = 13,
	REQ_STREAM_ABORT = 14,
	REQ_STREAM_PAUSE = 15,
	REQ_STREAM_RESTART = 16,
	REQ_STREAM_SETVOL = 17,
	REQ_STREAM_SETPITCH = 18,
	REQ_SB_INIT = 19,
	REQ_SB_PLAY = 20,
	REQ_SB_STOP = 21,
	REQ_SB_PAUSE = 22,
	REQ_SB_RESTART = 23,
	REQ_SB_SETVOL = 24,
	REQ_SB_SETPITCH = 25,
	REQ_PCM_STREAMCREATE = 26,
	REQ_PCM_STREAMINIT = 27,
	REQ_PCM_STREAMSTART = 28,
	REQ_PCM_STREAMPLAY = 29,
	REQ_PCM_STREAMSTOP = 30,
	REQ_PCM_STREAMPAUSE = 31,
	REQ_PCM_STREAMRESTART = 32,
	REQ_PCM_STREAMSETVOL = 33,
	IOP_COMMAND_ENUM_FORCE_DWORD = -1
};

typedef _IOP_COMMAND_ENUM IOP_COMMAND_ENUM;

struct _IOP_SND_INIT { // 0xc
	/* 0x0 */ int media;
	/* 0x4 */ int mvol;
	/* 0x8 */ void *stop_block;
};

typedef _IOP_SND_INIT IOP_SND_INIT;

struct _SET_SND_EFFECT { // 0x1c
	/* 0x00 */ int core;
	/* 0x04 */ int end_adrs;
	/* 0x08 */ sceSdEffectAttr r_attr;
};

typedef _SET_SND_EFFECT SET_SND_EFFECT;

struct _VOICE_STOP { // 0x4
	/* 0x0 */ short int voice_no;
	/* 0x2 */ short int core;
};

typedef _VOICE_STOP VOICE_STOP;

struct _CD_READ_MODE_CHANGE { // 0x4
	/* 0x0 */ int mode;
};

typedef _CD_READ_MODE_CHANGE CD_READ_MODE_CHANGE;

struct _SOUND_BUF_PLAY { // 0x14
	/* 0x00 */ VOLSET vol;
	/* 0x04 */ unsigned int adrs;
	/* 0x08 */ short int pitch;
	/* 0x0a */ short int adsr1;
	/* 0x0c */ short int adsr2;
	/* 0x0e */ VOICE_ATTR attr;
	/* 0x10 */ int voice_no;
};

typedef _SOUND_BUF_PLAY SOUND_BUF_PLAY;

struct _VOICE_LOOP_SET { // 0x8
	/* 0x0 */ short int core;
	/* 0x2 */ short int voice_no;
	/* 0x4 */ int loop_adrs;
};

typedef _VOICE_LOOP_SET VOICE_LOOP_SET;

struct _SOUND_BUF_SETVOL { // 0x8
	/* 0x0 */ VOLSET vol;
	/* 0x4 */ char voice_no;
	/* 0x5 */ char core;
	/* 0x6 */ char padding[2];
};

typedef _SOUND_BUF_SETVOL SOUND_BUF_SETVOL;

struct _SOUND_BUF_SETPITCH { // 0x4
	/* 0x0 */ short int pitch;
	/* 0x2 */ char voice_no;
	/* 0x3 */ char core;
};

typedef _SOUND_BUF_SETPITCH SOUND_BUF_SETPITCH;

struct _SOUND_BUF_STOP { // 0x4
	/* 0x0 */ char voice_no;
	/* 0x1 */ char core;
	/* 0x2 */ char padding[2];
};

typedef _SOUND_BUF_STOP SOUND_BUF_STOP;

struct _SOUND_BUF_PAUSE { // 0x4
	/* 0x0 */ char voice_no;
	/* 0x1 */ char core;
	/* 0x2 */ char padding[2];
};

typedef _SOUND_BUF_PAUSE SOUND_BUF_PAUSE;

struct _SOUND_BUF_RESTART { // 0x4
	/* 0x0 */ char voice_no;
	/* 0x1 */ char core;
	/* 0x2 */ char padding[2];
};

typedef _SOUND_BUF_RESTART SOUND_BUF_RESTART;

struct _STREAM_RELEASE { // 0x4
	/* 0x0 */ int wrk_id;
};

typedef _STREAM_RELEASE STREAM_RELEASE;

struct _STREAM_START { // 0x13c
	/* 0x000 */ int start_sector;
	/* 0x004 */ int size;
	/* 0x008 */ unsigned int spu_packet[2][2];
	/* 0x018 */ short int nchannel;
	/* 0x01a */ char irq_core;
	/* 0x01b */ char wrk_id;
	/* 0x01c */ int interleave_byte;
	/* 0x020 */ int loop_start_block;
	/* 0x024 */ int loop_end_block;
	/* 0x028 */ int loop_start_fraction;
	/* 0x02c */ int loop_end_fraction;
	/* 0x030 */ unsigned int spu_loop_packet[2];
	/* 0x038 */ int offset;
	/* 0x03c */ char file_name[256];
};

typedef _STREAM_START STREAM_START;

struct _STREAM_PLAY { // 0x1c
	/* 0x00 */ VOLSET vol[2];
	/* 0x08 */ VOICE_ATTR attr[2];
	/* 0x0c */ short int adsr1[2];
	/* 0x10 */ short int adsr2[2];
	/* 0x14 */ char voice[2];
	/* 0x16 */ short int pitch;
	/* 0x18 */ short int irq_core;
	/* 0x1a */ short int wrk_id;
};

typedef _STREAM_PLAY STREAM_PLAY;

struct _STREAM_STOP { // 0x4
	/* 0x0 */ int wrk_id;
};

typedef _STREAM_STOP STREAM_STOP;

struct _STREAM_ABORT { // 0x4
	/* 0x0 */ int wrk_id;
};

typedef _STREAM_ABORT STREAM_ABORT;

struct _STREAM_PAUSE { // 0x4
	/* 0x0 */ int wrk_id;
};

typedef _STREAM_PAUSE STREAM_PAUSE;

struct _STREAM_RESTART { // 0x4
	/* 0x0 */ int wrk_id;
};

typedef _STREAM_RESTART STREAM_RESTART;

struct _STREAM_SETVOL { // 0xc
	/* 0x0 */ VOLSET vol[2];
	/* 0x8 */ int wrk_id;
};

typedef _STREAM_SETVOL STREAM_SETVOL;

struct _STREAM_SETPITCH { // 0x4
	/* 0x0 */ short int wrk_id;
	/* 0x2 */ short int pitch;
};

typedef _STREAM_SETPITCH STREAM_SETPITCH;

struct _PCM_STREAM_INIT { // 0x4
	/* 0x0 */ int wrk_id;
};

typedef _PCM_STREAM_INIT PCM_STREAM_INIT;

struct _PCM_STREAM_START { // 0x110
	/* 0x000 */ int start_sector;
	/* 0x004 */ int size;
	/* 0x008 */ short int nchannel;
	/* 0x00a */ short int wrk_id;
	/* 0x00c */ int offset;
	/* 0x010 */ char file_name[256];
};

typedef _PCM_STREAM_START PCM_STREAM_START;

struct _PCM_STREAM_PLAY { // 0x4
	/* 0x0 */ short int wrk_id;
	/* 0x2 */ short int vol;
};

typedef _PCM_STREAM_PLAY PCM_STREAM_PLAY;

struct _PCM_STREAM_STOP { // 0x4
	/* 0x0 */ int wrk_id;
};

typedef _PCM_STREAM_STOP PCM_STREAM_STOP;

struct _PCM_STREAM_PAUSE { // 0x4
	/* 0x0 */ int wrk_id;
};

typedef _PCM_STREAM_PAUSE PCM_STREAM_PAUSE;

struct _PCM_STREAM_RESTART { // 0x4
	/* 0x0 */ int wrk_id;
};

typedef _PCM_STREAM_RESTART PCM_STREAM_RESTART;

struct _PCM_STREAM_SETVOL { // 0x4
	/* 0x0 */ short int wrk_id;
	/* 0x2 */ short int vol;
};

typedef _PCM_STREAM_SETVOL PCM_STREAM_SETVOL;

struct _SET_CD_DAT { // 0x10
	/* 0x0 */ char file_name[16];
};

typedef _SET_CD_DAT SET_CD_DAT;

struct _LOAD_DEF_STRUCT { // 0x110
	/* 0x000 */ int one_buf_size;
	/* 0x004 */ int ring_buf_num;
	/* 0x008 */ int start_sector;
	/* 0x00c */ int size;
	/* 0x010 */ char file_name[256];
};

typedef _LOAD_DEF_STRUCT LOAD_DEF_STRUCT;

typedef struct { // 0x10
	/* 0x0 */ char FileId[4];
	/* 0x4 */ u_short Frame;
	/* 0x6 */ u_short DataNum;
	/* 0x8 */ u_short HokanType;
	/* 0xa */ u_short AccelTime;
	/* 0xc */ u_short EqualTime;
	/* 0xe */ u_short BrakeTime;
} VCI_CAMERA_HEADER;

typedef struct { // 0x30
	/* 0x00 */ float LocalPosition[4];
	/* 0x10 */ float LocalTarget[4];
	/* 0x20 */ float Roll;
	/* 0x24 */ float Proj;
} VCI_CAMERA_POINT;

typedef struct { // 0x1
	/* 0x0 */ char info;
} ROOM_IN_INFO;

typedef struct { // 0x2c
	/* 0x00 */ u_char event_label;
	/* 0x04 */ int (*event_func)(/* parameters unknown */);
	/* 0x08 */ int ev_dat_size;
	/* 0x0c */ char label_name[32];
} EV_EXE_WRK;

typedef struct { // 0x28
	/* 0x00 */ u_char if_label;
	/* 0x04 */ u_char (*ev_if_func)(/* parameters unknown */);
	/* 0x08 */ char if_name[32];
} IF_COND_WRK;

typedef struct { // 0x2
	/* 0x0 */ char csr;
	/* 0x1 */ char sel_num;
} EV_CHOICE_CTRL;

typedef struct { // 0xc
	/* 0x0 */ int sound_id;
	/* 0x4 */ int file_label;
	/* 0x8 */ int pos;
} EV_SOUND_CTRL;

typedef struct { // 0x8
	/* 0x0 */ int stream_id;
	/* 0x4 */ int file_label;
} EV_STREAM_CTRL;

typedef struct { // 0xc
	/* 0x0 */ int ghost_label;
	/* 0x4 */ u_char ghost_type;
	/* 0x8 */ int wrk_id;
} EV_GHOST_CTRL;

typedef struct { // 0x4
	/* 0x0 */ void *dither_id;
} EV_EFF_CTRL;

typedef struct { // 0x10
	/* 0x0 */ u_char set_flg;
	/* 0x4 */ int stream_id;
	/* 0x8 */ int file_label;
	/* 0xc */ int volume;
} EV_SAVE_STREAM;

typedef struct { // 0x18
	/* 0x00 */ u_char set_flg;
	/* 0x04 */ int obj_type;
	/* 0x08 */ int obj_id;
	/* 0x0c */ int stream_id;
	/* 0x10 */ int file_label;
	/* 0x14 */ int volume;
} EV_SAVE_OBJ_STREAM;

typedef struct { // 0x20
	/* 0x00 */ u_char set_flg;
	/* 0x04 */ int stream_id;
	/* 0x08 */ int file_label;
	/* 0x0c */ int volume;
	/* 0x10 */ float pos[4];
} EV_SAVE_POS_STREAM;

typedef struct { // 0x6
	/* 0x0 */ u_char set_flg;
	/* 0x1 */ u_char type;
	/* 0x2 */ u_char speed;
	/* 0x3 */ u_char alpha;
	/* 0x4 */ u_char alpha_max;
	/* 0x5 */ u_char col_max;
} EV_SAVE_EFF_DITHER;

typedef struct { // 0x4
	/* 0x0 */ int eff_number;
} EV_SAVE_SCREEN_EFFECT;

struct fixed_array_base<EV_SOUND_CTRL,30,EV_SOUND_CTRL[30]> { // 0x168
protected:
	/* 0x000 */ EV_SOUND_CTRL m_aData[30];
	
public:
	fixed_array_base<EV_SOUND_CTRL,30,EV_SOUND_CTRL[30]>& operator=();
	fixed_array_base();
protected:
	fixed_array_base();
public:
	EV_SOUND_CTRL& operator[]();
	EV_SOUND_CTRL& operator[]();
	EV_SOUND_CTRL* data();
	EV_SOUND_CTRL* begin();
	EV_SOUND_CTRL* end();
	void fill();
	size_t size();
	bool empty();
};

struct fixed_array<EV_SOUND_CTRL,30> : /* 0x000 */ fixed_array_base<EV_SOUND_CTRL,30,EV_SOUND_CTRL[30]> { // 0x168
};

struct fixed_array_base<EV_STREAM_CTRL,2,EV_STREAM_CTRL[2]> { // 0x10
protected:
	/* 0x0 */ EV_STREAM_CTRL m_aData[2];
	
public:
	fixed_array_base<EV_STREAM_CTRL,2,EV_STREAM_CTRL[2]>& operator=();
	fixed_array_base();
protected:
	fixed_array_base();
public:
	EV_STREAM_CTRL& operator[]();
	EV_STREAM_CTRL& operator[]();
	EV_STREAM_CTRL* data();
	EV_STREAM_CTRL* begin();
	EV_STREAM_CTRL* end();
	void fill();
	size_t size();
	bool empty();
};

struct fixed_array<EV_STREAM_CTRL,2> : /* 0x0 */ fixed_array_base<EV_STREAM_CTRL,2,EV_STREAM_CTRL[2]> { // 0x10
};

struct fixed_array_base<EV_GHOST_CTRL,10,EV_GHOST_CTRL[10]> { // 0x78
protected:
	/* 0x00 */ EV_GHOST_CTRL m_aData[10];
	
public:
	fixed_array_base<EV_GHOST_CTRL,10,EV_GHOST_CTRL[10]>& operator=();
	fixed_array_base();
protected:
	fixed_array_base();
public:
	EV_GHOST_CTRL& operator[]();
	EV_GHOST_CTRL& operator[]();
	EV_GHOST_CTRL* data();
	EV_GHOST_CTRL* begin();
	EV_GHOST_CTRL* end();
	void fill();
	size_t size();
	bool empty();
};

struct fixed_array<EV_GHOST_CTRL,10> : /* 0x00 */ fixed_array_base<EV_GHOST_CTRL,10,EV_GHOST_CTRL[10]> { // 0x78
};

struct fixed_array_base<EV_SAVE_STREAM,2,EV_SAVE_STREAM[2]> { // 0x20
protected:
	/* 0x00 */ EV_SAVE_STREAM m_aData[2];
	
public:
	fixed_array_base<EV_SAVE_STREAM,2,EV_SAVE_STREAM[2]>& operator=();
	fixed_array_base();
protected:
	fixed_array_base();
public:
	EV_SAVE_STREAM& operator[]();
	EV_SAVE_STREAM& operator[]();
	EV_SAVE_STREAM* data();
	EV_SAVE_STREAM* begin();
	EV_SAVE_STREAM* end();
	void fill();
	size_t size();
	bool empty();
};

struct fixed_array<EV_SAVE_STREAM,2> : /* 0x00 */ fixed_array_base<EV_SAVE_STREAM,2,EV_SAVE_STREAM[2]> { // 0x20
};

struct fixed_array_base<EV_SAVE_OBJ_STREAM,2,EV_SAVE_OBJ_STREAM[2]> { // 0x30
protected:
	/* 0x00 */ EV_SAVE_OBJ_STREAM m_aData[2];
	
public:
	fixed_array_base<EV_SAVE_OBJ_STREAM,2,EV_SAVE_OBJ_STREAM[2]>& operator=();
	fixed_array_base();
protected:
	fixed_array_base();
public:
	EV_SAVE_OBJ_STREAM& operator[]();
	EV_SAVE_OBJ_STREAM& operator[]();
	EV_SAVE_OBJ_STREAM* data();
	EV_SAVE_OBJ_STREAM* begin();
	EV_SAVE_OBJ_STREAM* end();
	void fill();
	size_t size();
	bool empty();
};

struct fixed_array<EV_SAVE_OBJ_STREAM,2> : /* 0x00 */ fixed_array_base<EV_SAVE_OBJ_STREAM,2,EV_SAVE_OBJ_STREAM[2]> { // 0x30
};

struct fixed_array_base<EV_SAVE_POS_STREAM,2,EV_SAVE_POS_STREAM[2]> { // 0x40
protected:
	/* 0x00 */ EV_SAVE_POS_STREAM m_aData[2];
	
public:
	fixed_array_base<EV_SAVE_POS_STREAM,2,EV_SAVE_POS_STREAM[2]>& operator=();
	fixed_array_base();
protected:
	fixed_array_base();
public:
	EV_SAVE_POS_STREAM& operator[]();
	EV_SAVE_POS_STREAM& operator[]();
	EV_SAVE_POS_STREAM* data();
	EV_SAVE_POS_STREAM* begin();
	EV_SAVE_POS_STREAM* end();
	void fill();
	size_t size();
	bool empty();
};

struct fixed_array<EV_SAVE_POS_STREAM,2> : /* 0x00 */ fixed_array_base<EV_SAVE_POS_STREAM,2,EV_SAVE_POS_STREAM[2]> { // 0x40
};

typedef struct { // 0x2c
	/* 0x00 */ u_char cond_label;
	/* 0x04 */ int (*judge_func)(/* parameters unknown */);
	/* 0x08 */ int cond_size;
	/* 0x0c */ u_char label_name[32];
} EV_COND_WRK;

typedef struct { // 0x8
	/* 0x0 */ int event_id;
	/* 0x4 */ u_char priority;
} EV_PRI_CTRL;

typedef struct { // 0x2
	/* 0x0 */ u_char open_switch;
	/* 0x1 */ u_char end_switch;
} EV_COND_CTRL;

struct fixed_array_base<EV_CTRL_CENTER,250,EV_CTRL_CENTER[250]> { // 0x7d0
protected:
	/* 0x000 */ EV_CTRL_CENTER m_aData[250];
	
public:
	fixed_array_base<EV_CTRL_CENTER,250,EV_CTRL_CENTER[250]>& operator=();
	fixed_array_base();
protected:
	fixed_array_base();
public:
	EV_CTRL_CENTER& operator[]();
	EV_CTRL_CENTER& operator[]();
	EV_CTRL_CENTER* data();
	EV_CTRL_CENTER* begin();
	EV_CTRL_CENTER* end();
	void fill();
	size_t size();
	bool empty();
};

struct fixed_array<EV_CTRL_CENTER,250> : /* 0x000 */ fixed_array_base<EV_CTRL_CENTER,250,EV_CTRL_CENTER[250]> { // 0x7d0
};

struct fixed_array_base<EV_PRI_CTRL,250,EV_PRI_CTRL[250]> { // 0x7d0
protected:
	/* 0x000 */ EV_PRI_CTRL m_aData[250];
	
public:
	fixed_array_base<EV_PRI_CTRL,250,EV_PRI_CTRL[250]>& operator=();
	fixed_array_base();
protected:
	fixed_array_base();
public:
	EV_PRI_CTRL& operator[]();
	EV_PRI_CTRL& operator[]();
	EV_PRI_CTRL* data();
	EV_PRI_CTRL* begin();
	EV_PRI_CTRL* end();
	void fill();
	size_t size();
	bool empty();
};

struct fixed_array<EV_PRI_CTRL,250> : /* 0x000 */ fixed_array_base<EV_PRI_CTRL,250,EV_PRI_CTRL[250]> { // 0x7d0
};

struct fixed_array_base<int,250,int[250]> { // 0x3e8
protected:
	/* 0x000 */ int m_aData[250];
	
public:
	fixed_array_base<int,250,int[250]>& operator=();
	fixed_array_base();
protected:
	fixed_array_base();
public:
	int& operator[]();
	int& operator[]();
	int* data();
	int* begin();
	int* end();
	void fill();
	size_t size();
	bool empty();
};

struct fixed_array<int,250> : /* 0x000 */ fixed_array_base<int,250,int[250]> { // 0x3e8
};

typedef struct { // 0x10
	/* 0x0 */ u_char talk_step;
	/* 0x4 */ int stream_id;
	/* 0x8 */ int data_pos;
	/* 0xc */ int pad_accept_counter;
} TALK_EXE_CTRL;

struct fixed_array_base<TALK_TBL,8,TALK_TBL[8]> { // 0x440
protected:
	/* 0x000 */ TALK_TBL m_aData[8];
	
public:
	fixed_array_base<TALK_TBL,8,TALK_TBL[8]>& operator=();
	fixed_array_base();
protected:
	fixed_array_base();
public:
	TALK_TBL& operator[]();
	TALK_TBL& operator[]();
	TALK_TBL* data();
	TALK_TBL* begin();
	TALK_TBL* end();
	void fill();
	size_t size();
	bool empty();
};

struct fixed_array<TALK_TBL,8> : /* 0x000 */ fixed_array_base<TALK_TBL,8,TALK_TBL[8]> { // 0x440
};

struct fixed_array_base<int,8,int *> { // 0x4
protected:
	/* 0x0 */ int *m_aData;
	
public:
	fixed_array_base<int,8,int *>& operator=();
	fixed_array_base();
protected:
	fixed_array_base();
public:
	int& operator[]();
	int& operator[]();
	int* data();
	int* begin();
	int* end();
	void fill();
	size_t size();
	bool empty();
};

struct reference_fixed_array<int,8> : /* 0x0 */ fixed_array_base<int,8,int *> { // 0x4
};

enum EVENT_CAMERA_POINT_TYPE {
	EVECAM_POINT_POSITION = 0,
	EVECAM_POINT_TARGET = 1
};

typedef struct { // 0x8
	/* 0x0 */ u_int *pDataTop;
	/* 0x4 */ int NowFrame;
} VCI_CAMERA_CTRL;

typedef struct { // 0x70
	/* 0x00 */ float EventPosition[4];
	/* 0x10 */ float EventTarget[4];
	/* 0x20 */ float EventPositionOffset[4];
	/* 0x30 */ float EventTargetOffset[4];
	/* 0x40 */ int EventPositonObjType;
	/* 0x44 */ int EventPositonObjId;
	/* 0x48 */ int EventTargetObjType;
	/* 0x4c */ int EventTargetObjId;
	/* 0x50 */ float EventFov;
	/* 0x54 */ float EventRoll;
	/* 0x58 */ float EventMargin;
	/* 0x5c */ u_int *pEventCamData;
	/* 0x60 */ u_int WorldFlg;
} EVENT_CAMERA_CTRL;

struct fixed_array_base<float[4],50,float[50][4]> { // 0x320
protected:
	/* 0x000 */ float m_aData[50][4];
	
public:
	fixed_array_base<float[4],50,float[50][4]>& operator=();
	fixed_array_base();
protected:
	fixed_array_base();
public:
	float&[4] operator[]();
	float&[4] operator[]();
	float*[4] data();
	float*[4] begin();
	float*[4] end();
	void fill();
	size_t size();
	bool empty();
};

struct fixed_array<float[4],50> : /* 0x000 */ fixed_array_base<float[4],50,float[50][4]> { // 0x320
};

typedef struct { // 0xc
	/* 0x0 */ u_char fade_state;
	/* 0x1 */ u_char alpha;
	/* 0x2 */ u_char change_alp;
	/* 0x3 */ u_char r;
	/* 0x4 */ u_char g;
	/* 0x5 */ u_char b;
	/* 0x8 */ int timer;
} FADE_MODE_CTRL;

struct CBlinkSwitchVariable<char,90,118,6,90> { // 0x2
private:
	/* 0x0 */ char mValue;
	/* 0x1:0 */ unsigned char mOn : 1;
	/* 0x1:1 */ unsigned char mUp : 1;
	
public:
	CBlinkSwitchVariable<char,90,118,6,90>& operator=();
	CBlinkSwitchVariable();
	CBlinkSwitchVariable();
	void Init();
	void BlinkOn();
	void BlinkOff();
	int IsOn();
	void Work();
	char Get();
	void Set();
	char GetMax();
	char GetMin();
	char GetInitVal();
};

struct CBlinkSwitchVariable<char,90,112,11,90> { // 0x2
private:
	/* 0x0 */ char mValue;
	/* 0x1:0 */ unsigned char mOn : 1;
	/* 0x1:1 */ unsigned char mUp : 1;
	
public:
	CBlinkSwitchVariable<char,90,112,11,90>& operator=();
	CBlinkSwitchVariable();
	CBlinkSwitchVariable();
	void Init();
	void BlinkOn();
	void BlinkOff();
	int IsOn();
	void Work();
	char Get();
	void Set();
	char GetMax();
	char GetMin();
	char GetInitVal();
};

struct CBlinkSwitchVariable<char,90,116,13,90> { // 0x2
private:
	/* 0x0 */ char mValue;
	/* 0x1:0 */ unsigned char mOn : 1;
	/* 0x1:1 */ unsigned char mUp : 1;
	
public:
	CBlinkSwitchVariable<char,90,116,13,90>& operator=();
	CBlinkSwitchVariable();
	CBlinkSwitchVariable();
	void Init();
	void BlinkOn();
	void BlinkOff();
	int IsOn();
	void Work();
	char Get();
	void Set();
	char GetMax();
	char GetMin();
	char GetInitVal();
};

struct CBlinkSwitchVariable<char,75,112,17,75> { // 0x2
private:
	/* 0x0 */ char mValue;
	/* 0x1:0 */ unsigned char mOn : 1;
	/* 0x1:1 */ unsigned char mUp : 1;
	
public:
	CBlinkSwitchVariable<char,75,112,17,75>& operator=();
	CBlinkSwitchVariable();
	CBlinkSwitchVariable();
	void Init();
	void BlinkOn();
	void BlinkOff();
	int IsOn();
	void Work();
	char Get();
	void Set();
	char GetMax();
	char GetMin();
	char GetInitVal();
};

typedef struct { // 0x8
	/* 0x0 */ int cnt;
	/* 0x4 */ int flow;
} CTRL_STR;

typedef struct { // 0x8
	/* 0x0 */ CTRL_STR ctrl;
} PLYR_HP_WRK;

typedef struct { // 0x2
	/* 0x0 */ u_char ene_no;
	/* 0x1 */ u_char flg;
} ENE_HP_WRK;

typedef struct { // 0x8
	/* 0x0 */ int cnt;
	/* 0x4 */ int flow;
} SHOT_ENABLE;

typedef struct { // 0x8
	/* 0x0 */ int cnt;
	/* 0x4 */ int flow;
} CHARGE_GUAGE_ONE;

typedef struct { // 0x6c
	/* 0x00 */ int flow;
	/* 0x04 */ int bg_flow;
	/* 0x08 */ u_char old_ch_num;
	/* 0x0c */ CHARGE_GUAGE_ONE cgo[12];
} CHARGE_GUAGE;

typedef struct { // 0x1c
	/* 0x00 */ int flow_num;
	/* 0x04 */ int cnt_num;
	/* 0x08 */ int flow_sp;
	/* 0x0c */ int cnt_sp;
	/* 0x10 */ int score;
	/* 0x14 */ int mes_alp;
	/* 0x18 */ int num_alp;
} DISPFMES;

typedef struct { // 0xac
	/* 0x00 */ u_char phot_shot;
	/* 0x01 */ u_char disp_pause;
	/* 0x02 */ short int alp_battle;
	/* 0x04 */ u_char alp_finder;
	/* 0x05 */ u_char alp_hpbar;
	/* 0x06 */ char fade_finder;
	/* 0x07 */ char fade_hpbar;
	/* 0x08 */ u_char sw_finder;
	/* 0x09 */ u_char sw_hpbar;
	/* 0x0a */ u_char sw_filament;
	/* 0x0c */ u_int cnt_finder;
	/* 0x10 */ u_int cnt_hpbar;
	/* 0x14 */ u_short time_hpbar;
	/* 0x16 */ u_char film_num;
	/* 0x18 */ SHOT_ENABLE sena;
	/* 0x20 */ CHARGE_GUAGE cg;
	/* 0x8c */ DISPFMES dispfmes;
	/* 0xa8 */ u_char alp;
} INFO_WRK;

typedef struct { // 0x10
	/* 0x0 */ float sclw;
	/* 0x4 */ float sclh;
	/* 0x8 */ float rot;
	/* 0xc */ float dist;
} ENEDMGLINE_SUB;

typedef struct { // 0x3d0
	/* 0x000 */ ENEDMGLINE_SUB edl_sub[60];
	/* 0x3c0 */ int flow;
	/* 0x3c4 */ int cnt;
	/* 0x3c8 */ u_char alp;
	/* 0x3c9 */ u_char dummy08[3];
	/* 0x3cc */ int col;
} ENEDMGLINE_WRK;

enum _SP_CHANCE_MODE {
	SP_CHANCE_NONE = 0,
	SP_CHANCE_IN = 1,
	SP_CHANCE_OUT = 2,
	SP_CHANCE_END = 3
};

typedef _SP_CHANCE_MODE SP_CHANCE_MODE;

struct fixed_array_base<FLY_WRK,40,FLY_WRK[40]> { // 0x32f00
protected:
	/* 0x00000 */ FLY_WRK m_aData[40];
	
public:
	fixed_array_base<FLY_WRK,40,FLY_WRK[40]>& operator=();
	fixed_array_base();
protected:
	fixed_array_base();
public:
	FLY_WRK& operator[]();
	FLY_WRK& operator[]();
	FLY_WRK* data();
	FLY_WRK* begin();
	FLY_WRK* end();
	void fill();
	size_t size();
	bool empty();
};

struct fixed_array<FLY_WRK,40> : /* 0x00000 */ fixed_array_base<FLY_WRK,40,FLY_WRK[40]> { // 0x32f00
};

struct fixed_array_base<G3DLIGHT,3,G3DLIGHT[3]> { // 0x150
protected:
	/* 0x000 */ G3DLIGHT m_aData[3];
	
public:
	fixed_array_base<G3DLIGHT,3,G3DLIGHT[3]>& operator=();
	fixed_array_base();
protected:
	fixed_array_base();
public:
	G3DLIGHT& operator[]();
	G3DLIGHT& operator[]();
	G3DLIGHT* data();
	G3DLIGHT* begin();
	G3DLIGHT* end();
	void fill();
	size_t size();
	bool empty();
};

struct fixed_array<G3DLIGHT,3> : /* 0x000 */ fixed_array_base<G3DLIGHT,3,G3DLIGHT[3]> { // 0x150
};

struct _FOOT_SE_MANAGE { // 0x4
	/* 0x0 */ int bank_id;
};

typedef _FOOT_SE_MANAGE FOOT_SE_MANAGE;

typedef struct { // 0x14
	/* 0x00 */ int frq_flow;
	/* 0x04 */ int frq_cnt;
	/* 0x08 */ int fov_flow;
	/* 0x0c */ int fov_cnt;
	/* 0x10 */ float fov_bak;
} FREQ_CAM;

struct PK2D_WRK { // 0x10
	/* 0x0 */ Q_WORDDATA *idx_top;
	/* 0x4 */ Q_WORDDATA *idx_now;
	/* 0x8 */ Q_WORDDATA *buf_top;
	/* 0xc */ Q_WORDDATA *buf_now;
};

typedef struct { // 0x28
	/* 0x00 */ int stbp;
	/* 0x04 */ int sfbw;
	/* 0x08 */ int stw;
	/* 0x0c */ int sth;
	/* 0x10 */ int dtbp;
	/* 0x14 */ int dfbw;
	/* 0x18 */ int dw;
	/* 0x1c */ int dh;
	/* 0x20 */ int du;
	/* 0x24 */ int dv;
} SCREEN_COPY_WRK;

typedef struct { // 0x8
	/* 0x0 */ Q_WORDDATA *pp0;
	/* 0x4 */ Q_WORDDATA *pp1;
} VIF1_GS_PACKET_CTRL;

typedef struct { // 0x10
	/* 0x0 */ u_char menu_step;
	/* 0x1 */ u_char top_cursor;
	/* 0x2 */ u_char step;
	/* 0x3 */ u_char menu_out_flg;
	/* 0x4 */ u_char menu_sys_flg;
	/* 0x5 */ char next_menu_step;
	/* 0x8 */ int cursor;
	/* 0xc */ int stream_id;
} MENU_WRK;

struct G2D_WRK { // 0x8
	/* 0x0 */ int init;
	/* 0x4 */ int flow;
};

enum G3DBOUNINGVOLUMETYPE {
	BVT_BOX = 0,
	BVT_SPHERE = 1,
	BVT_ELLIPSE = 2,
	BVT_COLUMN = 3
};

struct BOUNDINGVOLUMEDATA { // 0x50
	/* 0x00 */ G3DBOUNINGVOLUMETYPE Type;
	/* 0x10 */ float matCoord[4][4];
};

enum G3DRESOURCETYPE {
	G3DRTYPE_TEXTURE = 1,
	G3DRTYPE_VERTEXBUFFER = 2,
	G3DRTYPE_INDEXBUFFER = 3,
	INVALID_G3DRESOURCETYPE = 2147483647,
	G3DRTYPE_FORCE_DWORD = 2147483647
};

struct G3DTEXTUREDATA_LONG { // 0x10
	/* 0x0 */ long int lTex0;
	/* 0x8 */ long int lTex1;
};

struct G3DTEXTUREDATA_GS { // 0x10
	/* 0x0 */ sceGsTex0 gsTex0;
	/* 0x8 */ sceGsTex1 gsTex1;
};

union G3DTEXTUREDATA { // 0x10
	/* 0x0 */ G3DTEXTUREDATA_LONG l;
	/* 0x0 */ G3DTEXTUREDATA_GS gs;
};

typedef void (*LPFUNC_CALCCOLORDATA)(/* parameters unknown */);
typedef void (*LPFUNC_LOADMATERIAL)(/* parameters unknown */);
typedef void (*LPFUNC_LOADCOLOR)(/* parameters unknown */);
typedef void (*LPFUNC_LOADCOLORCOEFF)(/* parameters unknown */);
typedef void (*LPFUNC_CALCVERTEXCOLOR)(/* parameters unknown */);

struct _PACKET { // 0x30
	/* 0x00 */ qword qwVif1Code;
	/* 0x10 */ void gt;
	/* 0x20 */ sceGifPackAd aGPA[1];
};

enum VIF1_STAT_VPS {
	VPS_IDLE = 0,
	VPS_WAITINGFORDATA = 1,
	VPS_DECODE = 2,
	VPS_PROCESSING = 3
};

enum VIF1_STAT_VEW {
	VEW_NOTWAIT = 0,
	VEW_WAIT = 1
};

enum VIF1_STAT_VGW {
	VGW_NOTWAIT = 0,
	VGW_WAIT = 1
};

enum VIF1_STAT_MRK {
	MRK_NOTDETECT = 0,
	MRK_DETECT = 1
};

enum VIF1_STAT_DBF {
	DBF_BASE = 0,
	DBF_BASEplusOFFSET = 1
};

enum VIF1_STAT_VSS {
	VSS_NOTSTALL = 0,
	VSS_STALL = 1
};

enum VIF1_STAT_VFS {
	VFS_NOTSTALL = 0,
	VFS_STALL = 1
};

enum VIF1_STAT_VIS {
	VIS_NOTSTALL = 0,
	VIS_STALL = 1
};

enum VIF1_STAT_INT {
	INT_NOTDETECT = 0,
	INT_DETECT = 1
};

enum VIF1_STAT_ERO {
	ERO_NOERROR = 0,
	ERO_ERROR = 1
};

enum VIF1_STAT_ER1 {
	ER1_NOTDETECT = 0,
	ER1_DETECT = 1
};

enum VIF1_STAT_FDR {
	FDR_MEMtoVIF1 = 0,
	FDR_VIF1toMEM = 1
};

struct _PACKET_SETGSREGISTER { // 0x30
	/* 0x00 */ qword qwVif1Code;
	/* 0x10 */ void GT;
	/* 0x20 */ sceGifPackAd gpa;
};

typedef int (*LPFUNC_ISBBLIGHTINGUP)(/* parameters unknown */);

struct iterator_traits<LIGHTCOMPAREDATA *> { // 0x1
};

struct __type_traits<LIGHTCOMPAREDATA> { // 0x1
};

struct __copy_backward_dispatch<LIGHTCOMPAREDATA *,LIGHTCOMPAREDATA *,__false_type> { // 0x1
	__copy_backward_dispatch<LIGHTCOMPAREDATA *,LIGHTCOMPAREDATA *,__false_type>& operator=();
	__copy_backward_dispatch();
	__copy_backward_dispatch();
	static LIGHTCOMPAREDATA* copy(/* parameters unknown */);
};

struct RENDERTARGETCREATIONDATA { // 0x10
	/* 0x0 */ sceGsTex0 gsTex0;
	/* 0x8 */ G3DCOLOR ClearColor;
	/* 0xc */ float fZMax;
};

struct G3DSPRITEDATA { // 0x30
	/* 0x00 */ G3DFRECT Rect;
	/* 0x10 */ G3DCOLOR Color;
	/* 0x14 */ float fZ;
	/* 0x18 */ sceGsSt StLT;
	/* 0x20 */ sceGsSt StRB;
};

struct VIFPACKET_SETTEXTURE { // 0x30
	/* 0x00 */ qword qwVifCode;
	/* 0x10 */ void Gt;
	/* 0x20 */ sceGsTex0 Tex0;
};

struct PACKETHEADER { // 0x20
	/* 0x00 */ qword qwVifCode;
	/* 0x10 */ void Gt;
};

struct GIFPACKET_WITHTEXTURE { // 0x50
	/* 0x00 */ sceGifPackRgbaq Rgbaq;
	/* 0x10 */ sceGifPackSt StLT;
	/* 0x20 */ sceGifPackXyzf XyzfLT;
	/* 0x30 */ sceGifPackSt StRB;
	/* 0x40 */ sceGifPackXyzf XyzfRB;
};

struct GIFPACKET_WITHOUTTEXTURE { // 0x30
	/* 0x00 */ sceGifPackRgbaq Rgbaq;
	/* 0x10 */ sceGifPackXyzf XyzfLT;
	/* 0x20 */ sceGifPackXyzf XyzfRB;
};

struct CSprite { // 0x80
private:
	/* 0x00 */ G3DSPRITEDATA m_SpriteData;
	/* 0x30 */ PACKETHEADER m_Header;
	/* 0x50 */ CTexture *m_pTexture;
	/* 0x54 */ sceGifPackRgbaq m_Rgbaq;
	/* 0x68 */ sceGsXyz m_GsXyzLT;
	/* 0x70 */ sceGsXyz m_GsXyzRB;
	/* 0x78 */ int m_iQWSizePacket;
public:
	/* 0x7c */ __vtbl_ptr_type *$vf1780;
	
	CSprite& operator=();
	CSprite();
	CSprite();
	/* vtable[1] */ virtual CSprite(CSprite*, int, void);
	int Create();
	void Draw();
};

struct CRenderTarget : /* 0x00 */ IG3DCompatible { // 0xb0
private:
	/* 0x08 */ sceGsTex0 m_gsTex0;
	/* 0x10 */ CAutoGsRegisters<3> m_AutoGsRegisters;
	/* 0x50 */ CAutoTransform<G3DTS_VIEW> m_AutoTransformView;
	/* 0xa0 */ G3DCOLOR m_ClearColor;
	/* 0xa4 */ float m_fZMax;
public:
	/* 0xa8 */ __vtbl_ptr_type *$vf1771;
	
	CRenderTarget& operator=();
	CRenderTarget();
	CRenderTarget();
	/* vtable[1] */ virtual CRenderTarget(CRenderTarget*, int, void);
	int Create();
	void Begin();
	void End();
	void Clear();
	void Clear();
	void SetClearColor();
	void SetWidth(CRenderTarget*, int, void);
	void SetHeight(CRenderTarget*, int, void);
	int GetWidth();
	int GetHeight();
	sceGsTex0& GetGsTex0Ref();
};

struct CAutoTransform<G3DTS_VIEW> : /* 0x00 */ IAutoState { // 0x50
private:
	/* 0x10 */ float m_mat[4][4];
	
public:
	CAutoTransform<G3DTS_VIEW>& operator=();
	CAutoTransform();
	CAutoTransform();
	CAutoTransform();
	/* vtable[1] */ virtual CAutoTransform(CAutoTransform<G3DTS_VIEW>*, int, void);
	void Push();
	/* vtable[2] */ virtual void Pop();
};

struct CAutoGsRegisters<3> : /* 0x00 */ IAutoState { // 0x40
private:
	/* 0x10 */ sceGifPackAd m_aGPA[3];
	
public:
	CAutoGsRegisters<3>& operator=();
	CAutoGsRegisters();
	CAutoGsRegisters();
	CAutoGsRegisters();
	/* vtable[1] */ virtual CAutoGsRegisters(CAutoGsRegisters<3>*, int, void);
	void Push();
	/* vtable[2] */ virtual void Pop();
	u_long& operator[]();
};

struct IAutoState : /* 0x0 */ IG3DCompatible { // 0xc
private:
	/* 0x4 */ int m_iNumStack;
public:
	/* 0x8 */ __vtbl_ptr_type *$vf1802;
	
	IAutoState& operator=();
	IAutoState();
protected:
	int PushStack();
	int PopStack();
	int GetNumStack();
public:
	IAutoState();
	/* vtable[1] */ virtual IAutoState(IAutoState*, int, void);
};

struct CTexture : /* 0x00 */ IG3DResource { // 0x90
private:
	/* 0x10 */ void m_gsLoadImage;
	/* 0x70 */ G3DTEXTUREDATA m_TextureData;
	/* 0x80 */ unsigned char *m_pbyData;
	/* 0x84 */ int m_iSize;
	
public:
	CTexture& operator=();
	CTexture();
	CTexture();
	/* vtable[1] */ virtual CTexture(CTexture*, int, void);
	int Create();
	G3DTEXTUREDATA& GetTextureDataRef();
	unsigned char* GetImage();
	int GetSize();
	/* vtable[2] */ virtual void PreLoad();
};

struct IG3DResource { // 0x8
protected:
	/* 0x0 */ G3DRESOURCETYPE m_Type;
public:
	/* 0x4 */ __vtbl_ptr_type *$vf1531;
	
	IG3DResource& operator=();
	IG3DResource();
	static void* operator new(/* parameters unknown */);
	static void* operator new [](/* parameters unknown */);
	static void operator delete(/* parameters unknown */);
	static void operator delete [](/* parameters unknown */);
	IG3DResource();
	IG3DResource();
	/* vtable[1] */ virtual IG3DResource(IG3DResource*, int, void);
	G3DRESOURCETYPE GetType();
	/* vtable[2] */ virtual void PreLoad();
};

struct _VIF1CMDINFO { // 0x1c
	/* 0x00 */ unsigned int uiCmd;
	/* 0x04 */ qword *pqwSubstantialRegister;
	/* 0x08 */ int iLengthSubPacket;
	/* 0x0c */ int *apiLocalRegister[4];
};

typedef struct { // 0x78
	/* 0x00 */ int setup_pic_flg;
	/* 0x04 */ int game_clear_flg;
	/* 0x08 */ int ending1_mov_flg;
	/* 0x0c */ int ending2_mov_flg;
	/* 0x10 */ int movie_no;
	/* 0x14 */ int end1_mov_cnt;
	/* 0x18 */ int main_step;
	/* 0x1c */ int now_place;
	/* 0x20 */ int next_place;
	/* 0x24 */ int now_tex;
	/* 0x28 */ int csr_map[8];
	/* 0x48 */ int cursor;
	/* 0x4c */ int next_csr;
	/* 0x50 */ int old_csr;
	/* 0x54 */ int anm_step;
	/* 0x58 */ int anm_alpha;
	/* 0x5c */ int pic_mode;
	/* 0x60 */ int pic_step;
	/* 0x64 */ int pic_no;
	/* 0x68 */ int next_pic_no;
	/* 0x6c */ int pic_max;
	/* 0x70 */ int file_no;
	/* 0x74 */ int pic_anm_alpha;
} GAL_CTRL;

typedef struct { // 0x8
	/* 0x0 */ int map_label;
	/* 0x4 */ int map_tex_id;
} MAP_INFO_DAT;

typedef struct { // 0x14
	/* 0x00 */ int map_label;
	/* 0x04 */ int room_label;
	/* 0x08 */ int room_group_label;
	/* 0x0c */ int snap_tex_label;
	/* 0x10 */ int room_tex_label;
} ROOM_INFO_DAT;

typedef struct { // 0x10
	/* 0x0 */ int room_label;
	/* 0x4 */ int house_tex_label;
	/* 0x8 */ int start_room_label;
	/* 0xc */ int end_room_label;
} HOUSE_INFO_DAT;

typedef struct { // 0xc
	/* 0x0 */ int area_label;
	/* 0x4 */ int floor_label;
	/* 0x8 */ int map_label;
} AREA_MAP_TBL;

typedef struct { // 0xc
	/* 0x0 */ char step;
	/* 0x1 */ char mc_step;
	/* 0x2 */ char csr;
	/* 0x3 */ char conf_csr;
	/* 0x4 */ char save_exe_label;
	/* 0x5 */ char format_end_cnt;
	/* 0x8 */ int save_file_cnt;
} GAME_DATA_SAVE_CTRL;

typedef struct { // 0x8
	/* 0x0 */ int msg_id;
	/* 0x4 */ char anim_step;
	/* 0x5 */ char anim_timer;
	/* 0x6 */ char csr_timer;
} GAME_DATA_SAVE_DISP;

struct fixed_array_base<int,5,int *> { // 0x4
protected:
	/* 0x0 */ int *m_aData;
	
public:
	fixed_array_base<int,5,int *>& operator=();
	fixed_array_base();
protected:
	fixed_array_base();
public:
	int& operator[]();
	int& operator[]();
	int* data();
	int* begin();
	int* end();
	void fill();
	size_t size();
	bool empty();
};

struct reference_fixed_array<int,5> : /* 0x0 */ fixed_array_base<int,5,int *> { // 0x4
};

typedef struct { // 0x8
	/* 0x0 */ int anim_timer;
	/* 0x4 */ char step;
} GAME_RESULT_CTRL;

struct fixed_array_base<int,7,int[7]> { // 0x1c
protected:
	/* 0x00 */ int m_aData[7];
	
public:
	fixed_array_base<int,7,int[7]>& operator=();
	fixed_array_base();
protected:
	fixed_array_base();
public:
	int& operator[]();
	int& operator[]();
	int* data();
	int* begin();
	int* end();
	void fill();
	size_t size();
	bool empty();
};

struct fixed_array<int,7> : /* 0x00 */ fixed_array_base<int,7,int[7]> { // 0x1c
};

typedef struct { // 0x20
	/* 0x00 */ fixed_array<int,7> flg_msg_id;
	/* 0x1c */ char flg_msg_num;
	/* 0x1d */ char step;
	/* 0x1e */ char rank;
} GAME_RESULT_TOP_CTRL;

struct fixed_array_base<char,7,char[7]> { // 0x7
protected:
	/* 0x0 */ char m_aData[7];
	
public:
	fixed_array_base<char,7,char[7]>& operator=();
	fixed_array_base();
protected:
	fixed_array_base();
public:
	char& operator[]();
	char& operator[]();
	char* data();
	char* begin();
	char* end();
	void fill();
	size_t size();
	bool empty();
};

struct fixed_array<char,7> : /* 0x0 */ fixed_array_base<char,7,char[7]> { // 0x7
};

typedef struct { // 0x12
	/* 0x00 */ char rank_anim_step;
	/* 0x01 */ char rank_anim_timer;
	/* 0x02 */ fixed_array<char,7> flg_anim_step;
	/* 0x09 */ fixed_array<char,7> flg_anim_timer;
	/* 0x10 */ char line_anim_step;
	/* 0x11 */ char line_anim_timer;
} GAME_RESULT_TOP_DISP;

typedef struct { // 0x2
	/* 0x0 */ short int fade_timer;
} GAMEOVER_FADE_CTRL;

typedef struct { // 0x8
	/* 0x0 */ int stream_id;
	/* 0x4 */ char step;
} GAMEOVER_MENU_CTRL;

typedef struct { // 0x10
	/* 0x0 */ int fade_timer;
	/* 0x4 */ int bg_anim_timer;
	/* 0x8 */ int moyou1_anim_timer;
	/* 0xc */ int moyou2_anim_timer;
} GAMEOVER_MENU_DISP;

typedef struct { // 0x8
	/* 0x0 */ char step;
	/* 0x1 */ char mc_step;
	/* 0x2 */ short int wait_timer;
	/* 0x4 */ char csr;
	/* 0x5 */ char conf_csr;
	/* 0x6 */ char csr_timer;
} GAMEOVER_LOAD_CTRL;

typedef struct { // 0x8
	/* 0x0 */ char anim_step;
	/* 0x1 */ char anim_timer;
	/* 0x2 */ char csr_timer;
	/* 0x4 */ int msg_id;
} GAMEOVER_LOAD_DISP;

typedef struct { // 0x4
	/* 0x0 */ char step;
	/* 0x1 */ char mode;
	/* 0x2 */ char csr;
	/* 0x3 */ char conf_csr;
} GAMEOVER_MENU_TOP_CTRL;

typedef struct { // 0x4
	/* 0x0 */ char anim_step;
	/* 0x1 */ char anim_timer;
	/* 0x2 */ char conf_anim_step;
	/* 0x3 */ char conf_anim_timer;
} GAMEOVER_MENU_TOP_DISP;

typedef struct { // 0xc
	/* 0x0 */ int end_room_label;
	/* 0x4 */ float pos_x;
	/* 0x8 */ float pos_y;
} GHOST_SEAL_DOOR_DATA;

struct fixed_array_base<unsigned char,9,unsigned char[9]> { // 0x9
protected:
	/* 0x0 */ u_char m_aData[9];
	
public:
	fixed_array_base<unsigned char,9,unsigned char[9]>& operator=();
	fixed_array_base();
protected:
	fixed_array_base();
public:
	u_char& operator[]();
	u_char& operator[]();
	u_char* data();
	u_char* begin();
	u_char* end();
	void fill();
	size_t size();
	bool empty();
};

struct fixed_array<unsigned char,9> : /* 0x0 */ fixed_array_base<unsigned char,9,unsigned char[9]> { // 0x9
};

struct _GPHASE_DAT { // 0x10
	/* 0x0 */ int layer;
	/* 0x4 */ int superID;
	/* 0x8 */ int son_ID;
	/* 0xc */ int son_num;
};

typedef _GPHASE_DAT GPHASE_DAT;

struct _GPHASE_SYS { // 0x48
	/* 0x00 */ GPHASE_ID_ENUM now[6];
	/* 0x18 */ GPHASE_ID_ENUM next[6];
	/* 0x30 */ int ini_flg[6];
};

typedef _GPHASE_SYS GPHASE_SYS;

struct G3DLIGHTMANAGE { // 0x270
	/* 0x000 */ fixed_array<GRA3DLIGHTSTATUS,39> aStatus;
};

struct iterator_traits<G3D_EMULATE_DIRECTIONALLIGHT_DATA *> { // 0x1
};

struct _GT { // 0x10
	/* 0x0:0 */ long int l0_46 : 47;
	/* 0x5:7 */ long int l47_51 : 5;
	/* 0x6:4 */ long int lFogEnable : 1;
	/* 0x6:5 */ long int l53_63 : 11;
	/* 0x8 */ long int l64_127;
};

struct SETREGISTERPAIR { // 0x10
	/* 0x0 */ long int lAddress;
	/* 0x8 */ LPFUNC_SETREGISTER_WITHCONTEXT pFuncWithContext;
	/* 0xc */ LPFUNC_SETREGISTER pFunc;
};

struct GETREGISTERPAIR { // 0x10
	/* 0x0 */ long int lAddress;
	/* 0x8 */ LPFUNC_GETREGISTER_WITHCONTEXT pFuncWithContext;
	/* 0xc */ LPFUNC_GETREGISTER pFunc;
};

struct ___ { // 0x5f0
	/* 0x000 */ GRA3DSCRATCHPADLAYOUT gra3dSL;
	/* 0x440 */ GRA3DSCRATCHPADLAYOUT_MAPSHADOW gra3dshadowSL;
	/* 0x5e0 */ G3DCREATIONDATA g3dSL;
};

struct __type_traits<G3D_EMULATE_DIRECTIONALLIGHT_DATA> { // 0x1
};

struct __copy_backward_dispatch<G3D_EMULATE_DIRECTIONALLIGHT_DATA *,G3D_EMULATE_DIRECTIONALLIGHT_DATA *,__false_type> { // 0x1
	__copy_backward_dispatch<G3D_EMULATE_DIRECTIONALLIGHT_DATA *,G3D_EMULATE_DIRECTIONALLIGHT_DATA *,__false_type>& operator=();
	__copy_backward_dispatch();
	__copy_backward_dispatch();
	static G3D_EMULATE_DIRECTIONALLIGHT_DATA* copy(/* parameters unknown */);
};

struct _PACKET_DRAWSPRITE { // 0x50
	/* 0x00 */ qword qwVifCode;
	/* 0x10 */ void Gt;
	/* 0x20 */ sceGifPackRgbaq Rgbaq;
	/* 0x30 */ sceGifPackXyzf aXyzf2[2];
};

struct TRI2SIZEDATA { // 0x14
	/* 0x00 */ unsigned int uiMaxAddress;
	/* 0x04 */ unsigned int uiMinAddress;
	/* 0x08 */ unsigned int uiVRAMTexSize;
	/* 0x0c */ unsigned int uiMaxTbp;
	/* 0x10 */ unsigned int uiPageSize;
};

struct _SGDVUVNDATA_WEIGHTED_2 { // 0x8
	/* 0x0 */ float *pVertex[4];
	/* 0x4 */ float *pNormal[4];
};

struct _SGDVUVNDATA_WEIGHTEDVERTEX_3 { // 0x20
	/* 0x00 */ float vVertex[4];
	/* 0x10 */ unsigned int aui[3];
	/* 0x1c */ unsigned char ucBoneId0;
	/* 0x1d */ unsigned char ucBoneId1;
	/* 0x1e */ unsigned char auc[2];
};

struct _SGDVUVNDATA_WEIGHTED_3 { // 0x8
	/* 0x0 */ _SGDVUVNDATA_WEIGHTEDVERTEX_3 *pWeightedVertex;
	/* 0x4 */ float *pNormal[4];
};

typedef void (*LPFUNC_CALCWEIGHTEDVECTORBUFFER)(/* parameters unknown */);

struct _LIGHTCOMPAREDATA { // 0x8
	/* 0x0 */ float fMaxPower;
	/* 0x4 */ int iIndex;
};

struct SGDVUMESHTEXGIFTAG { // 0x28
	/* 0x00 */ unsigned int auiVifCode[2];
	/* 0x08 */ unsigned int auiGifTag[4];
	/* 0x18 */ long unsigned int aulData[2];
};

struct SGDVUMESHPOINTNUMREGSET { // 0x8
	/* 0x0 */ unsigned int auiVifCode[2];
};

struct SGDVUMESHPOINTNUM { // 0x8
	/* 0x0 */ G3DVIF1CODE_UNPACK VifUnpack;
	/* 0x4 */ unsigned int uiPointNum;
};

struct SGDVUMESHSTREGSET { // 0xc
	/* 0x0 */ unsigned int auiVifCode[3];
};

struct SGDVUMESHST { // 0x8
	/* 0x0 */ float fS;
	/* 0x4 */ float fT;
};

struct SGDVUMESHSTDATA { // 0xc
	/* 0x0 */ G3DVIF1CODE_UNPACK VifUnpack;
	/* 0x4 */ SGDVUMESHST astData[1];
};

struct fixed_array_base<_LIGHTCOMPAREDATA,4,_LIGHTCOMPAREDATA[4]> { // 0x20
protected:
	/* 0x00 */ _LIGHTCOMPAREDATA m_aData[4];
	
public:
	fixed_array_base<_LIGHTCOMPAREDATA,4,_LIGHTCOMPAREDATA[4]>& operator=();
	fixed_array_base();
protected:
	fixed_array_base();
public:
	_LIGHTCOMPAREDATA& operator[]();
	_LIGHTCOMPAREDATA& operator[]();
	_LIGHTCOMPAREDATA* data();
	_LIGHTCOMPAREDATA* begin();
	_LIGHTCOMPAREDATA* end();
	void fill();
	size_t size();
	bool empty();
};

struct fixed_array<_LIGHTCOMPAREDATA,4> : /* 0x00 */ fixed_array_base<_LIGHTCOMPAREDATA,4,_LIGHTCOMPAREDATA[4]> { // 0x20
};

struct fixed_array_base<SGDFILEHEADER *,40,SGDFILEHEADER *[40]> { // 0xa0
protected:
	/* 0x00 */ SGDFILEHEADER *m_aData[40];
	
public:
	fixed_array_base<SGDFILEHEADER *,40,SGDFILEHEADER *[40]>& operator=();
	fixed_array_base();
protected:
	fixed_array_base();
public:
	SGDFILEHEADER*& operator[]();
	SGDFILEHEADER*& operator[]();
	SGDFILEHEADER** data();
	SGDFILEHEADER** begin();
	SGDFILEHEADER** end();
	void fill();
	size_t size();
	bool empty();
};

struct fixed_array<SGDFILEHEADER *,40> : /* 0x00 */ fixed_array_base<SGDFILEHEADER *,40,SGDFILEHEADER *[40]> { // 0xa0
};

struct fixed_stack<SGDFILEHEADER *,40> { // 0xa4
protected:
	/* 0x00 */ fixed_array<SGDFILEHEADER *,40> c;
	/* 0xa0 */ SGDFILEHEADER *null;
	
public:
	fixed_stack<SGDFILEHEADER *,40>& operator=();
	fixed_stack();
	fixed_stack();
	bool empty();
	size_t size();
	SGDFILEHEADER*& top();
	SGDFILEHEADER*& top();
	void push();
	void pop();
	SGDFILEHEADER*& operator[]();
	void clear();
	void push_exclusive();
	size_t max_size();
};

typedef struct { // 0x8
	/* 0x0 */ int s;
	/* 0x4 */ int e;
} BoundLine;

struct originholder<G3DLIGHT> { // 0x80
private:
	/* 0x00 */ G3DLIGHT *m_pOriginValue;
	/* 0x10 */ G3DLIGHT m_OriginValue;
	
public:
	originholder<G3DLIGHT>& operator=();
	originholder();
	originholder();
	originholder(originholder<G3DLIGHT>*, int, void);
	void store();
	void restore();
};

typedef struct { // 0x54
	/* 0x00 */ char step;
	/* 0x01 */ char sub_step;
	/* 0x02 */ char next_sub_step;
	/* 0x03 */ char csr_tate;
	/* 0x04 */ char csr_yoko;
	/* 0x05 */ char clear_flg;
	/* 0x06 */ char exit_csr;
	/* 0x08 */ int timer;
	/* 0x0c */ int hina_pos[4][4];
	/* 0x4c */ char in_anim_flg;
	/* 0x50 */ int snd_id;
} HINA_PZL_CTRL;

typedef struct { // 0xe
	/* 0x0 */ char anim_step;
	/* 0x2 */ short int anim_timer;
	/* 0x4 */ char sub_anim_step;
	/* 0x6 */ short int sub_anim_timer;
	/* 0x8 */ short int csr_anim_timer;
	/* 0xa */ short int smoke_anim_timer;
	/* 0xc */ short int stand_anim_timer;
} HINA_PZL_DISP;

typedef struct { // 0x2
	/* 0x0 */ short int anim_timer;
} HINA_PZL_CROSS_DISP;

typedef struct { // 0x2
	/* 0x0:0 */ short unsigned int mission : 1;
} PHASE_CANGE_REQ_OUTGAME;

struct _PHASE_CHANGE_REQS { // 0x8
	/* 0x0:0 */ short unsigned int event_load : 1;
	/* 0x0:1 */ short unsigned int game_over : 1;
	/* 0x0:2 */ short unsigned int game_over_pre : 1;
	/* 0x0:3 */ short unsigned int ending_normal : 1;
	/* 0x0:4 */ short unsigned int ending_hard : 1;
	/* 0x0:5 */ short unsigned int plyr_damage : 1;
	/* 0x0:6 */ short unsigned int plyr_door : 1;
	/* 0x0:7 */ short unsigned int pause : 1;
	/* 0x1:0 */ short unsigned int menu : 1;
	/* 0x1:1 */ short unsigned int map : 1;
	/* 0x1:2 */ short unsigned int dbg_menu : 1;
	/* 0x1:3 */ short unsigned int ene_dead : 1;
	/* 0x1:4 */ short unsigned int photo : 1;
	/* 0x1:5 */ short unsigned int movie_room_menu : 1;
	/* 0x2 */ short int scene_no;
	/* 0x4 */ short int effect_mode_time;
	/* 0x6 */ short int event_stop_cnt;
};

typedef _PHASE_CHANGE_REQS PHASE_CHANGE_REQS;

enum SUBFUNC_PDEFORM_TYPE {
	PDEFORM_TYPE_ZERO = 0,
	PDEFORM_TYPE_SLOW = 1,
	PDEFORM_TYPE_KOKU = 2,
	PDEFORM_TYPE_PARALYZE = 3,
	PDEFORM_TYPE_VIEW = 4,
	PDEFORM_TYPE_METSU = 5,
	PDEFORM_TYPE_REN = 6,
	PDEFORM_TYPE_TSUI = 7,
	PDEFORM_TYPE_FUU = 8,
	PDEFORM_TYPE_FREQ = 9
};

enum SUBFUNC_PDEFORM_STATUS {
	SUBFUNC_PDEFORM_STATUS_NOT_USE = 0,
	SUBFUNC_PDEFORM_STATUS_USE = 1,
	SUBFUNC_PDEFORM_STATUS_WAIT = 2
};

typedef struct { // 0x18
	/* 0x00 */ int EneWrkNo;
	/* 0x04 */ int Count;
	/* 0x08 */ int Type;
	/* 0x0c */ int StartFrame;
	/* 0x10 */ void *pEffRet;
	/* 0x14 */ int Status;
} SUBFUNC_PDEFORM_CTRL;

typedef struct { // 0x8
	/* 0x0 */ int EneWrkNo;
	/* 0x4 */ int Count;
} ZERO_PARTICLE_CTRL;

struct fixed_array_base<SUBFUNC_PDEFORM_CTRL,10,SUBFUNC_PDEFORM_CTRL[10]> { // 0xf0
protected:
	/* 0x00 */ SUBFUNC_PDEFORM_CTRL m_aData[10];
	
public:
	fixed_array_base<SUBFUNC_PDEFORM_CTRL,10,SUBFUNC_PDEFORM_CTRL[10]>& operator=();
	fixed_array_base();
protected:
	fixed_array_base();
public:
	SUBFUNC_PDEFORM_CTRL& operator[]();
	SUBFUNC_PDEFORM_CTRL& operator[]();
	SUBFUNC_PDEFORM_CTRL* data();
	SUBFUNC_PDEFORM_CTRL* begin();
	SUBFUNC_PDEFORM_CTRL* end();
	void fill();
	size_t size();
	bool empty();
};

struct fixed_array<SUBFUNC_PDEFORM_CTRL,10> : /* 0x00 */ fixed_array_base<SUBFUNC_PDEFORM_CTRL,10,SUBFUNC_PDEFORM_CTRL[10]> { // 0xf0
};

typedef struct { // 0x8
	/* 0x0 */ int mode;
	/* 0x4 */ int (*func)(/* parameters unknown */);
} KAIPZL_MODE;

typedef struct { // 0x10
	/* 0x0 */ int iInit;
	/* 0x4 */ int iRotL;
	/* 0x8 */ int iRotR;
	/* 0xc */ int iClear;
} KAIPZL_ROT;

struct fixed_array_base<int,5,int[5]> { // 0x14
protected:
	/* 0x00 */ int m_aData[5];
	
public:
	fixed_array_base<int,5,int[5]>& operator=();
	fixed_array_base();
protected:
	fixed_array_base();
public:
	int& operator[]();
	int& operator[]();
	int* data();
	int* begin();
	int* end();
	void fill();
	size_t size();
	bool empty();
};

struct fixed_array<int,5> : /* 0x00 */ fixed_array_base<int,5,int[5]> { // 0x14
};

typedef struct { // 0x24
	/* 0x00 */ char step;
	/* 0x01 */ char mode;
	/* 0x02 */ char next_mode;
	/* 0x03 */ char clear_flg;
	/* 0x04 */ int snd_id;
	/* 0x08 */ char csr_yoko;
	/* 0x09 */ char csr_tate;
	/* 0x0a */ char exit_csr;
	/* 0x0b */ char rot_anim_flg;
	/* 0x0c */ fixed_array<int,5> rot_num;
	/* 0x20 */ char remainder_frequency;
} KAZA_PZL_CTRL;

struct fixed_array_base<float,5,float[5]> { // 0x14
protected:
	/* 0x00 */ float m_aData[5];
	
public:
	fixed_array_base<float,5,float[5]>& operator=();
	fixed_array_base();
protected:
	fixed_array_base();
public:
	float& operator[]();
	float& operator[]();
	float* data();
	float* begin();
	float* end();
	void fill();
	size_t size();
	bool empty();
};

struct fixed_array<float,5> : /* 0x00 */ fixed_array_base<float,5,float[5]> { // 0x14
};

typedef struct { // 0x20
	/* 0x00 */ char anim_step;
	/* 0x01 */ char sub_anim_step;
	/* 0x02 */ char rot_anim_step;
	/* 0x04 */ short int flare_anim_timer;
	/* 0x06 */ short int rot_anim_timer;
	/* 0x08 */ short int anim_timer;
	/* 0x0a */ short int sub_anim_timer;
	/* 0x0c */ fixed_array<float,5> panel_rot;
} KAZA_PZL_DISP;

struct fixed_array_base<int,4,int *> { // 0x4
protected:
	/* 0x0 */ int *m_aData;
	
public:
	fixed_array_base<int,4,int *>& operator=();
	fixed_array_base();
protected:
	fixed_array_base();
public:
	int& operator[]();
	int& operator[]();
	int* data();
	int* begin();
	int* end();
	void fill();
	size_t size();
	bool empty();
};

struct reference_fixed_array<int,4> : /* 0x0 */ fixed_array_base<int,4,int *> { // 0x4
};

typedef struct { // 0x8
	/* 0x0 */ char step;
	/* 0x2 */ short int move_timer;
	/* 0x4 */ int msg_id;
} LANG_CHECK_CTRL;

typedef struct { // 0x8
	/* 0x0 */ int anim_timer;
	/* 0x4 */ char step;
	/* 0x5 */ char csr;
} LANG_SEL_CTRL;

typedef struct { // 0xc
	/* 0x0 */ char step;
	/* 0x1 */ char csr;
	/* 0x2 */ char conf_csr;
	/* 0x3 */ char csr_timer;
	/* 0x4 */ int msg_id;
	/* 0x8 */ short int wait_timer;
} LOAD_GAME_CTRL;

typedef struct { // 0x6
	/* 0x0 */ char step;
	/* 0x1 */ char anim_step;
	/* 0x2 */ short int anim_timer;
	/* 0x4 */ short int fade_timer;
} LOADING_CTRL;

struct LOGO_WRK { // 0xc
	/* 0x0 */ char step;
	/* 0x4 */ int cnt;
	/* 0x8 */ int mode;
};

struct MAN_DATA { // 0x30
	/* 0x00 */ int man_data_draw_lock_cnt;
private:
	/* 0x04 */ ANI_CTRL *mpAniCtrl;
	/* 0x08 */ ANI_CTRL *mpShadowAniCtrl;
	/* 0x0c */ int mpAcsMdl;
	/* 0x10 */ int mMdlNo;
	/* 0x14 */ int mSMdlNo;
	/* 0x18 */ int mAnmNo;
	/* 0x1c */ int mBDNo;
	/* 0x20 */ int mAcsNo;
	/* 0x24 */ int man_data_bank_no;
	/* 0x28:0 */ unsigned int man_ready_anm_init : 1;
	/* 0x28:1 */ unsigned int man_ready_req_mdl : 1;
	/* 0x28:2 */ unsigned int man_ready_req_smdl : 1;
	/* 0x28:3 */ unsigned int man_ready_req_anm : 1;
	/* 0x28:4 */ unsigned int man_ready_req_bd : 1;
	/* 0x28:5 */ unsigned int man_ready_collision : 1;
public:
	/* 0x2c */ __vtbl_ptr_type *$vf2806;
	
	MAN_DATA& operator=();
	MAN_DATA();
	MAN_DATA();
	/* vtable[1] */ virtual int Setup();
	/* vtable[2] */ virtual int IsReady();
	ANI_CTRL* GetAniCtrl();
	ANI_CTRL* GetShadowAniCtrl();
	void DrawLock();
	void DrawUnlock();
	int IsLocked();
	int GetSndBankNo();
	void AccessoryDraw();
protected:
	int GetAnmNo();
	int SetupIn();
	void InitIn();
	int ReadyIn();
	void ReleaseAnmIn();
	void ReleaseIn();
	void InitializeIn();
};

typedef struct { // 0x24
	/* 0x00 */ char map_label;
	/* 0x01 */ char area_label;
	/* 0x02 */ short int room_label;
	/* 0x04 */ float pos[4][2];
} MAP_AREA_DAT;

struct _MAP_BGM_DAT { // 0x4
	/* 0x0 */ int str_file;
};

typedef _MAP_BGM_DAT MAP_BGM_DAT;

struct fixed_array_base<int,240,int[240]> { // 0x3c0
protected:
	/* 0x000 */ int m_aData[240];
	
public:
	fixed_array_base<int,240,int[240]>& operator=();
	fixed_array_base();
protected:
	fixed_array_base();
public:
	int& operator[]();
	int& operator[]();
	int* data();
	int* begin();
	int* end();
	void fill();
	size_t size();
	bool empty();
};

struct fixed_array<int,240> : /* 0x000 */ fixed_array_base<int,240,int[240]> { // 0x3c0
};

struct _MAP_BGM_SAVE { // 0x3c4
	/* 0x000 */ fixed_array<int,240> aMapWrkBGMTbl;
	/* 0x3c0 */ int disable_cnt;
};

typedef _MAP_BGM_SAVE MAP_BGM_SAVE;

enum APPROACH_CAMERA_FLOW {
	APPROACH_CAMERA_FLOW_INIT = 0,
	APPROACH_CAMERA_FLOW_MOVE = 1,
	APPROACH_CAMERA_FLOW_KEEP = 2,
	APPROACH_CAMERA_FLOW_SHOULDER = 3,
	APPROACH_CAMERA_FLOW_TALK_INIT = 10,
	APPROACH_CAMERA_FLOW_TALK_KEEP = 11,
	APPROACH_CAMERA_FLOW_DEAD_INIT = 20,
	APPROACH_CAMERA_FLOW_DEAD_KEEP = 21
};

typedef struct { // 0x24
	/* 0x00 */ int EventCamFlg;
	/* 0x04 */ int SpecialCamFlg;
	/* 0x08 */ int RoomNo;
	/* 0x0c */ float *pFinCamTarget[4];
	/* 0x10 */ void *pRectStat;
	/* 0x14 */ int CamDataType;
	/* 0x18 */ int BattleCamAccept;
	/* 0x1c */ int RectCamLastTime;
	/* 0x20 */ int CamTarget;
} MAP_CAMERA_CTRL;

typedef struct { // 0x14
	/* 0x00 */ float Power[2];
	/* 0x08 */ int Counter;
	/* 0x0c */ int AllTime;
	/* 0x10 */ short int RequestFlg;
	/* 0x12 */ short int LoopNum;
} QUAKE_CAMERA_CTRL;

struct fixed_array_base<MhCtrl *,2,MhCtrl *[2]> { // 0x8
protected:
	/* 0x0 */ MhCtrl *m_aData[2];
	
public:
	fixed_array_base<MhCtrl *,2,MhCtrl *[2]>& operator=();
	fixed_array_base();
protected:
	fixed_array_base();
public:
	MhCtrl*& operator[]();
	MhCtrl*& operator[]();
	MhCtrl** data();
	MhCtrl** begin();
	MhCtrl** end();
	void fill();
	size_t size();
	bool empty();
};

struct fixed_array<MhCtrl *,2> : /* 0x0 */ fixed_array_base<MhCtrl *,2,MhCtrl *[2]> { // 0x8
};

struct _MAP_REVERB_DAT { // 0x2
	/* 0x0 */ short int depth;
};

typedef _MAP_REVERB_DAT MAP_REVERB_DAT;

typedef struct { // 0x8
	/* 0x0 */ float x;
	/* 0x4 */ float y;
} MAP_WORLD_POINT;

typedef struct { // 0x8
	/* 0x0 */ int w;
	/* 0x4 */ int h;
} MAP_SIZE_DAT;

typedef struct { // 0x8
	/* 0x0 */ float normal;
	/* 0x4 */ float big;
} MAP_SCALL_DAT;

typedef struct { // 0x44
	/* 0x00 */ char step;
	/* 0x04 */ int port;
	/* 0x08 */ int slot;
	/* 0x0c */ char name[55];
} MC_CHECK_CTRL;

typedef struct { // 0x14
	/* 0x00 */ int port;
	/* 0x04 */ int slot;
	/* 0x08 */ int type;
	/* 0x0c */ int free;
	/* 0x10 */ int format;
} MC_INFO;

typedef struct { // 0xc
	/* 0x0 */ char step;
	/* 0x1 */ char retry_cnt;
	/* 0x2 */ char unformat_flg;
	/* 0x4 */ int port;
	/* 0x8 */ int slot;
} MC_CHECK_CARD_CTRL;

typedef struct { // 0x8
	/* 0x0 */ int port;
	/* 0x4 */ int slot;
} MC_CHECK_CARD_EVERY_FRAME;

typedef struct { // 0x4c0
	/* 0x000 */ void table[18];
	/* 0x480 */ short int get_filenum;
} MC_DIR_INFO;

typedef struct { // 0x44
	/* 0x00 */ char step;
	/* 0x01 */ char retry_cnt;
	/* 0x04 */ int port;
	/* 0x08 */ int slot;
	/* 0x0c */ char name[55];
} MC_CHECK_DIR_CTRL;

typedef struct { // 0x8
	/* 0x0 */ char step;
	/* 0x1 */ char retry_cnt;
	/* 0x4 */ int fd;
} MC_FILE_CLOSE_CTRL;

typedef struct { // 0x14
	/* 0x00 */ char step;
	/* 0x04 */ int port;
	/* 0x08 */ int slot;
	/* 0x0c */ int dir_label;
	/* 0x10 */ int del_file_cnt;
} MC_DEL_ALL_FILE_CTRL;

typedef struct { // 0x10
	/* 0x0 */ char step;
	/* 0x4 */ int port;
	/* 0x8 */ int slot;
	/* 0xc */ int dir_label;
} MC_DIR_DEL_CTRL;

typedef struct { // 0x44
	/* 0x00 */ char step;
	/* 0x01 */ char retry_cnt;
	/* 0x04 */ int port;
	/* 0x08 */ int slot;
	/* 0x0c */ char name[55];
} MC_FILE_DEL_CTRL;

typedef struct { // 0xc
	/* 0x0 */ char step;
	/* 0x1 */ char retry_cnt;
	/* 0x4 */ int port;
	/* 0x8 */ int slot;
} MC_FORMAT_CTRL;

typedef struct { // 0x14
	/* 0x00 */ char step;
	/* 0x04 */ int port;
	/* 0x08 */ int slot;
	/* 0x0c */ int dir_label;
	/* 0x10 */ int icon_type;
} MC_ICON_CTRL;

typedef struct { // 0x3d4
	/* 0x000 */ char step;
	/* 0x004 */ int port;
	/* 0x008 */ int slot;
	/* 0x00c */ int dir_label;
	/* 0x010 */ sceMcIconSys icon_sys;
} MC_ICON_SYS_CTRL;

typedef struct { // 0x50
	/* 0x00 */ char step;
	/* 0x04 */ int port;
	/* 0x08 */ int slot;
	/* 0x0c */ int size;
	/* 0x10 */ int fd;
	/* 0x14 */ void *data_addr;
	/* 0x18 */ char name[55];
} MC_LOAD_CTRL;

typedef struct { // 0x18
	/* 0x00 */ char step;
	/* 0x04 */ int port;
	/* 0x08 */ int slot;
	/* 0x0c */ int dir_label;
	/* 0x10 */ void *buff_addr;
	/* 0x14 */ int buff_size;
} MC_NEW_MAKE_CTRL;

typedef struct { // 0x20
	/* 0x00 */ char step;
	/* 0x04 */ int port;
	/* 0x08 */ int slot;
	/* 0x0c */ int dir_label;
	/* 0x10 */ int data_file_num;
	/* 0x14 */ int make_data_file_num;
	/* 0x18 */ void *buff_addr;
	/* 0x1c */ int buff_size;
} MC_MAKE_ALL_FILE_CTRL;

typedef struct { // 0x24
	/* 0x00 */ char step;
	/* 0x01 */ char retry_cnt;
	/* 0x04 */ int port;
	/* 0x08 */ int slot;
	/* 0x0c */ char name[21];
} MC_MAKE_DIR_CTRL;

typedef struct { // 0x50
	/* 0x00 */ char step;
	/* 0x04 */ int port;
	/* 0x08 */ int slot;
	/* 0x0c */ int size;
	/* 0x10 */ int fd;
	/* 0x14 */ void *data_addr;
	/* 0x18 */ char name[55];
} MC_MAKE_FILE_CTRL;

typedef struct { // 0x14
	/* 0x00 */ char step;
	/* 0x01 */ char retry_cnt;
	/* 0x04 */ int port;
	/* 0x08 */ int slot;
	/* 0x0c */ int mode;
	/* 0x10 */ char *name;
} MC_FILE_OPEN_CTRL;

typedef struct { // 0x14
	/* 0x00 */ char step;
	/* 0x01 */ char retry_cnt;
	/* 0x04 */ int fd;
	/* 0x08 */ int size;
	/* 0x0c */ int error;
	/* 0x10 */ void *data_addr;
} MC_FILE_READ_CTRL;

typedef struct { // 0x50
	/* 0x00 */ char step;
	/* 0x04 */ int port;
	/* 0x08 */ int slot;
	/* 0x0c */ int size;
	/* 0x10 */ int fd;
	/* 0x14 */ void *data_addr;
	/* 0x18 */ char name[55];
} MC_SAVE_CTRL;

struct fixed_array_base<TIME_INFO,5,TIME_INFO[5]> { // 0x3c
protected:
	/* 0x00 */ TIME_INFO m_aData[5];
	
public:
	fixed_array_base<TIME_INFO,5,TIME_INFO[5]>& operator=();
	fixed_array_base();
protected:
	fixed_array_base();
public:
	TIME_INFO& operator[]();
	TIME_INFO& operator[]();
	TIME_INFO* data();
	TIME_INFO* begin();
	TIME_INFO* end();
	void fill();
	size_t size();
	bool empty();
};

struct fixed_array<TIME_INFO,5> : /* 0x00 */ fixed_array_base<TIME_INFO,5,TIME_INFO[5]> { // 0x3c
};

typedef struct { // 0x84
	/* 0x00 */ fixed_array<int,5> chapter;
	/* 0x14 */ fixed_array<int,5> clear_num;
	/* 0x28 */ fixed_array<int,5> room_label;
	/* 0x3c */ fixed_array<TIME_INFO,5> play_time;
	/* 0x78 */ fixed_array<char,5> clear_data_flg;
	/* 0x7d */ fixed_array<char,5> data_flg;
} MC_PLAY_DATA_HEAD;

typedef struct { // 0x14
	/* 0x00 */ char step;
	/* 0x01 */ char retry_cnt;
	/* 0x04 */ int fd;
	/* 0x08 */ int size;
	/* 0x0c */ int error;
	/* 0x10 */ void *data_addr;
} MC_FILE_WRITE_CTRL;

typedef struct { // 0x8
	/* 0x0 */ int state;
	/* 0x4 */ int msg_step;
} PLYR_MEMO;

struct fixed_array_base<PLYR_MEMO,20,PLYR_MEMO[20]> { // 0xa0
protected:
	/* 0x00 */ PLYR_MEMO m_aData[20];
	
public:
	fixed_array_base<PLYR_MEMO,20,PLYR_MEMO[20]>& operator=();
	fixed_array_base();
protected:
	fixed_array_base();
public:
	PLYR_MEMO& operator[]();
	PLYR_MEMO& operator[]();
	PLYR_MEMO* data();
	PLYR_MEMO* begin();
	PLYR_MEMO* end();
	void fill();
	size_t size();
	bool empty();
};

struct fixed_array<PLYR_MEMO,20> : /* 0x00 */ fixed_array_base<PLYR_MEMO,20,PLYR_MEMO[20]> { // 0xa0
};

typedef struct { // 0x1
	/* 0x0 */ char csr;
} MENU_YES_NO_CTRL;

typedef struct { // 0xc
	/* 0x0 */ int disp_start_pos;
	/* 0x4 */ int data_pos;
	/* 0x8 */ int data_num;
} MENU_REF_CTRL;

typedef struct { // 0x8
	/* 0x0 */ void (*menu_func)(/* parameters unknown */);
	/* 0x4 */ void (*menu_disp)(/* parameters unknown */);
} MENU_CTRL;

typedef struct { // 0x12
	/* 0x00 */ short int anim_step;
	/* 0x02 */ short int menu_bg_anim;
	/* 0x04 */ short int bg_anim_timer;
	/* 0x06 */ short int bg_anim_out_timer;
	/* 0x08 */ char tourou_anim_step;
	/* 0x09 */ char tourou_out_timer;
	/* 0x0a */ short int tourou_anim_timer;
	/* 0x0c */ short int moyou1_anim_timer;
	/* 0x0e */ short int moyou2_anim_timer;
	/* 0x10 */ char bganim_in_to_out;
} MENU_DISP_CTRL;

typedef struct { // 0x18
	/* 0x00 */ char mode;
	/* 0x01 */ char step;
	/* 0x02 */ char menu_csr;
	/* 0x03 */ char equip_pos_csr;
	/* 0x04 */ char lens_csr;
	/* 0x05 */ char edit_sel_csr;
	/* 0x06 */ char conf_csr;
	/* 0x07 */ char sp_equip_init_flg;
	/* 0x08 */ char edit_init_flg;
	/* 0x09 */ char gem_anim_flg;
	/* 0x0c */ MENU_REF_CTRL ref_ctrl;
} MENU_CAM_EDIT_CTRL;

typedef struct { // 0x6
	/* 0x0 */ char anim_step;
	/* 0x1 */ char anim_timer;
	/* 0x2 */ char csr_anim_timer;
	/* 0x3 */ char scroll_anim_timer;
	/* 0x4 */ short int gem_anim_timer;
} MENU_CAM_EDIT_DISP;

typedef struct { // 0x4
	/* 0x0 */ int lens_label;
} DISP_LENS_DATA;

typedef struct { // 0x4
	/* 0x0 */ char data_pos;
	/* 0x1 */ char lv;
	/* 0x2 */ short int timer;
} GEM_ANIM_CTRL;

struct fixed_array_base<DISP_LENS_DATA,10,DISP_LENS_DATA[10]> { // 0x28
protected:
	/* 0x00 */ DISP_LENS_DATA m_aData[10];
	
public:
	fixed_array_base<DISP_LENS_DATA,10,DISP_LENS_DATA[10]>& operator=();
	fixed_array_base();
protected:
	fixed_array_base();
public:
	DISP_LENS_DATA& operator[]();
	DISP_LENS_DATA& operator[]();
	DISP_LENS_DATA* data();
	DISP_LENS_DATA* begin();
	DISP_LENS_DATA* end();
	void fill();
	size_t size();
	bool empty();
};

struct fixed_array<DISP_LENS_DATA,10> : /* 0x00 */ fixed_array_base<DISP_LENS_DATA,10,DISP_LENS_DATA[10]> { // 0x28
};

struct fixed_array_base<char,3,char[3]> { // 0x3
protected:
	/* 0x0 */ char m_aData[3];
	
public:
	fixed_array_base<char,3,char[3]>& operator=();
	fixed_array_base();
protected:
	fixed_array_base();
public:
	char& operator[]();
	char& operator[]();
	char* data();
	char* begin();
	char* end();
	void fill();
	size_t size();
	bool empty();
};

struct fixed_array<char,3> : /* 0x0 */ fixed_array_base<char,3,char[3]> { // 0x3
};

struct fixed_array_base<int,12,int *> { // 0x4
protected:
	/* 0x0 */ int *m_aData;
	
public:
	fixed_array_base<int,12,int *>& operator=();
	fixed_array_base();
protected:
	fixed_array_base();
public:
	int& operator[]();
	int& operator[]();
	int* data();
	int* begin();
	int* end();
	void fill();
	size_t size();
	bool empty();
};

struct reference_fixed_array<int,12> : /* 0x0 */ fixed_array_base<int,12,int *> { // 0x4
};

typedef struct { // 0x6
	/* 0x0 */ char sub_step;
	/* 0x1 */ char step;
	/* 0x2 */ char mode;
	/* 0x3 */ char next_mode;
	/* 0x4 */ char exit_flg;
	/* 0x5 */ char init_type;
} MENU_CAM_MAIN_CTRL;

typedef struct { // 0x7
	/* 0x0 */ char mode;
	/* 0x1 */ char step;
	/* 0x2 */ char csr_yoko;
	/* 0x3 */ char csr_tate;
	/* 0x4 */ char add_csr;
	/* 0x5 */ char equip_csr;
	/* 0x6 */ char csr_yoko_backup;
} MENU_CAM_TOP_CTRL;

typedef struct { // 0x3
	/* 0x0 */ char anim_step;
	/* 0x1 */ char anim_timer;
	/* 0x2 */ char csr_anim_timer;
} MENU_CAM_TOP_DISP;

typedef struct { // 0xc
	/* 0x0 */ char load_step;
	/* 0x1 */ char anim_step;
	/* 0x2 */ char anim_timer;
	/* 0x4 */ int tex_label;
	/* 0x8 */ void *data_addr;
} MENU_CROSS_FADE;

typedef struct { // 0xc
	/* 0x0 */ u_char dbuff_flg;
	/* 0x4 */ void *data_addr_1;
	/* 0x8 */ void *data_addr_2;
} MENU_DBUFF_CTRL;

struct fixed_array_base<MENU_REF_CTRL,5,MENU_REF_CTRL[5]> { // 0x3c
protected:
	/* 0x00 */ MENU_REF_CTRL m_aData[5];
	
public:
	fixed_array_base<MENU_REF_CTRL,5,MENU_REF_CTRL[5]>& operator=();
	fixed_array_base();
protected:
	fixed_array_base();
public:
	MENU_REF_CTRL& operator[]();
	MENU_REF_CTRL& operator[]();
	MENU_REF_CTRL* data();
	MENU_REF_CTRL* begin();
	MENU_REF_CTRL* end();
	void fill();
	size_t size();
	bool empty();
};

struct fixed_array<MENU_REF_CTRL,5> : /* 0x00 */ fixed_array_base<MENU_REF_CTRL,5,MENU_REF_CTRL[5]> { // 0x3c
};

typedef struct { // 0x58
	/* 0x00 */ char sub_step;
	/* 0x01 */ char mode;
	/* 0x02 */ char next_mode;
	/* 0x03 */ u_char cross_fade_flg;
	/* 0x04 */ int tag_csr;
	/* 0x08 */ fixed_array<int,5> top_csr;
	/* 0x1c */ fixed_array<MENU_REF_CTRL,5> ref_ctrl;
} MENU_FILE_CTRL;

typedef struct { // 0x6
	/* 0x0 */ char anim_step;
	/* 0x1 */ char anim_timer;
	/* 0x2 */ u_char rgb;
	/* 0x3 */ char scroll_timer;
	/* 0x4 */ char sub_anim_step;
	/* 0x5 */ char sub_anim_timer;
} MENU_FILE_DISP;

typedef struct { // 0x8
	/* 0x0 */ int file_id;
	/* 0x4 */ char state;
} MENU_FILE_DATA;

struct fixed_array_base<MENU_FILE_DATA,42,MENU_FILE_DATA[42]> { // 0x150
protected:
	/* 0x000 */ MENU_FILE_DATA m_aData[42];
	
public:
	fixed_array_base<MENU_FILE_DATA,42,MENU_FILE_DATA[42]>& operator=();
	fixed_array_base();
protected:
	fixed_array_base();
public:
	MENU_FILE_DATA& operator[]();
	MENU_FILE_DATA& operator[]();
	MENU_FILE_DATA* data();
	MENU_FILE_DATA* begin();
	MENU_FILE_DATA* end();
	void fill();
	size_t size();
	bool empty();
};

struct fixed_array<MENU_FILE_DATA,42> : /* 0x000 */ fixed_array_base<MENU_FILE_DATA,42,MENU_FILE_DATA[42]> { // 0x150
};

struct fixed_array_base<MENU_FILE_DATA,40,MENU_FILE_DATA[40]> { // 0x140
protected:
	/* 0x000 */ MENU_FILE_DATA m_aData[40];
	
public:
	fixed_array_base<MENU_FILE_DATA,40,MENU_FILE_DATA[40]>& operator=();
	fixed_array_base();
protected:
	fixed_array_base();
public:
	MENU_FILE_DATA& operator[]();
	MENU_FILE_DATA& operator[]();
	MENU_FILE_DATA* data();
	MENU_FILE_DATA* begin();
	MENU_FILE_DATA* end();
	void fill();
	size_t size();
	bool empty();
};

struct fixed_array<MENU_FILE_DATA,40> : /* 0x000 */ fixed_array_base<MENU_FILE_DATA,40,MENU_FILE_DATA[40]> { // 0x140
};

struct fixed_array_base<MENU_FILE_DATA,26,MENU_FILE_DATA[26]> { // 0xd0
protected:
	/* 0x00 */ MENU_FILE_DATA m_aData[26];
	
public:
	fixed_array_base<MENU_FILE_DATA,26,MENU_FILE_DATA[26]>& operator=();
	fixed_array_base();
protected:
	fixed_array_base();
public:
	MENU_FILE_DATA& operator[]();
	MENU_FILE_DATA& operator[]();
	MENU_FILE_DATA* data();
	MENU_FILE_DATA* begin();
	MENU_FILE_DATA* end();
	void fill();
	size_t size();
	bool empty();
};

struct fixed_array<MENU_FILE_DATA,26> : /* 0x00 */ fixed_array_base<MENU_FILE_DATA,26,MENU_FILE_DATA[26]> { // 0xd0
};

struct fixed_array_base<MENU_FILE_DATA,10,MENU_FILE_DATA[10]> { // 0x50
protected:
	/* 0x00 */ MENU_FILE_DATA m_aData[10];
	
public:
	fixed_array_base<MENU_FILE_DATA,10,MENU_FILE_DATA[10]>& operator=();
	fixed_array_base();
protected:
	fixed_array_base();
public:
	MENU_FILE_DATA& operator[]();
	MENU_FILE_DATA& operator[]();
	MENU_FILE_DATA* data();
	MENU_FILE_DATA* begin();
	MENU_FILE_DATA* end();
	void fill();
	size_t size();
	bool empty();
};

struct fixed_array<MENU_FILE_DATA,10> : /* 0x00 */ fixed_array_base<MENU_FILE_DATA,10,MENU_FILE_DATA[10]> { // 0x50
};

typedef struct { // 0x500
	/* 0x000 */ fixed_array<MENU_FILE_DATA,42> pocketbook;
	/* 0x150 */ fixed_array<MENU_FILE_DATA,42> scrap;
	/* 0x2a0 */ fixed_array<MENU_FILE_DATA,40> oldbook;
	/* 0x3e0 */ fixed_array<MENU_FILE_DATA,26> photograph;
	/* 0x4b0 */ fixed_array<MENU_FILE_DATA,10> map;
} DISP_FILE_DATA;

typedef struct { // 0x10
	/* 0x0 */ u_char sub_step;
	/* 0x1 */ u_char cross_fade_flg;
	/* 0x2 */ u_char conf_csr;
	/* 0x4 */ MENU_REF_CTRL ref_ctrl;
} MENU_ITEM_CTRL;

typedef struct { // 0x4
	/* 0x0 */ char anim_step;
	/* 0x1 */ char anim_timer;
	/* 0x2 */ u_char rgb;
	/* 0x3 */ char scroll_timer;
} MENU_ITEM_DISP;

typedef struct { // 0x8
	/* 0x0 */ int item_id;
	/* 0x4 */ int have_num;
} DISP_ITEM_DATA;

struct fixed_array_base<DISP_ITEM_DATA,58,DISP_ITEM_DATA[58]> { // 0x1d0
protected:
	/* 0x000 */ DISP_ITEM_DATA m_aData[58];
	
public:
	fixed_array_base<DISP_ITEM_DATA,58,DISP_ITEM_DATA[58]>& operator=();
	fixed_array_base();
protected:
	fixed_array_base();
public:
	DISP_ITEM_DATA& operator[]();
	DISP_ITEM_DATA& operator[]();
	DISP_ITEM_DATA* data();
	DISP_ITEM_DATA* begin();
	DISP_ITEM_DATA* end();
	void fill();
	size_t size();
	bool empty();
};

struct fixed_array<DISP_ITEM_DATA,58> : /* 0x000 */ fixed_array_base<DISP_ITEM_DATA,58,DISP_ITEM_DATA[58]> { // 0x1d0
};

typedef struct { // 0x10
	/* 0x0 */ float x;
	/* 0x4 */ float y;
	/* 0x8 */ int map_label;
	/* 0xc */ int room_label;
} MAP_SAVE_POINT;

typedef struct { // 0x8
	/* 0x0 */ char step;
	/* 0x4 */ int tex_label;
} MENU_MAP_LOAD_CTRL;

typedef struct { // 0x14
	/* 0x00 */ char plyr_map;
	/* 0x01 */ char cross_fade_flg;
	/* 0x04 */ MENU_MAP_LOAD_CTRL snap_load;
	/* 0x0c */ int hit_room;
	/* 0x10 */ int map_area_id;
} MENU_MAP_CTRL;

typedef struct { // 0x18
	/* 0x00 */ char anim_step;
	/* 0x01 */ char anim_timer;
	/* 0x02 */ fixed_array<char,4> tri_pad_flg;
	/* 0x06 */ char tri_anim_step;
	/* 0x07 */ u_char tri_alpha;
	/* 0x08 */ char tri_timer;
	/* 0x0c */ float map_off_x;
	/* 0x10 */ float map_off_y;
	/* 0x14 */ u_char map_scall_flg;
	/* 0x15 */ char disp_map_label;
	/* 0x16 */ char before_disp_map;
} MENU_MAP_DISP;

typedef struct { // 0x10
	/* 0x0 */ u_char mode;
	/* 0x1 */ u_char next_mode;
	/* 0x2 */ u_char sub_step;
	/* 0x4 */ MENU_REF_CTRL ref_ctrl;
} MENU_MEMO_CTRL;

typedef struct { // 0x6
	/* 0x0 */ char anim_step;
	/* 0x1 */ char anim_timer;
	/* 0x2 */ u_char rgb;
	/* 0x3 */ char scroll_timer;
	/* 0x4 */ char sub_anim_step;
	/* 0x5 */ char sub_anim_timer;
} MENU_MEMO_DISP;

typedef struct { // 0x8
	/* 0x0 */ int memo_label;
	/* 0x4 */ u_char state;
	/* 0x5 */ u_char msg_step;
} DISP_MEMO_DATA;

struct fixed_array_base<DISP_MEMO_DATA,20,DISP_MEMO_DATA[20]> { // 0xa0
protected:
	/* 0x00 */ DISP_MEMO_DATA m_aData[20];
	
public:
	fixed_array_base<DISP_MEMO_DATA,20,DISP_MEMO_DATA[20]>& operator=();
	fixed_array_base();
protected:
	fixed_array_base();
public:
	DISP_MEMO_DATA& operator[]();
	DISP_MEMO_DATA& operator[]();
	DISP_MEMO_DATA* data();
	DISP_MEMO_DATA* begin();
	DISP_MEMO_DATA* end();
	void fill();
	size_t size();
	bool empty();
};

struct fixed_array<DISP_MEMO_DATA,20> : /* 0x00 */ fixed_array_base<DISP_MEMO_DATA,20,DISP_MEMO_DATA[20]> { // 0xa0
};

typedef struct { // 0xb
	/* 0x0 */ char step;
	/* 0x1 */ char csr_yoko;
	/* 0x2 */ char csr_tate;
	/* 0x3 */ char sub_csr;
	/* 0x4 */ char sort_csr;
	/* 0x5 */ char photo_flg;
	/* 0x6 */ char sort_flg;
	/* 0x7 */ char sub_anim_step;
	/* 0x8 */ char sub_anim_timer;
	/* 0x9 */ char csr_timer;
	/* 0xa */ u_char rgb;
} MENU_PHOTO_CTRL;

typedef struct { // 0x2
	/* 0x0 */ char anim_step;
	/* 0x1 */ char anim_timer;
} MENU_PHOTO_DISP;

typedef struct { // 0x14
	/* 0x00 */ u_char sub_step;
	/* 0x01 */ u_char cross_fade_flg;
	/* 0x04 */ MENU_REF_CTRL ref_ctrl;
	/* 0x10 */ int stream_id;
} MENU_RADIO_CTRL;

typedef struct { // 0xc
	/* 0x0 */ char anim_step;
	/* 0x1 */ char anim_timer;
	/* 0x2 */ char crystal_anim_step;
	/* 0x3 */ char crystal_anim_timer;
	/* 0x4 */ char crystal_alpha;
	/* 0x5 */ char crystal_flare_alpha;
	/* 0x6 */ u_char rgb;
	/* 0x7 */ char scroll_timer;
	/* 0x8 */ int title_timer;
} MENU_RADIO_DISP;

typedef struct { // 0x8
	/* 0x0 */ int crystal_id;
	/* 0x4 */ int state;
} DISP_CRYSTAL_DATA;

struct fixed_array_base<DISP_CRYSTAL_DATA,40,DISP_CRYSTAL_DATA[40]> { // 0x140
protected:
	/* 0x000 */ DISP_CRYSTAL_DATA m_aData[40];
	
public:
	fixed_array_base<DISP_CRYSTAL_DATA,40,DISP_CRYSTAL_DATA[40]>& operator=();
	fixed_array_base();
protected:
	fixed_array_base();
public:
	DISP_CRYSTAL_DATA& operator[]();
	DISP_CRYSTAL_DATA& operator[]();
	DISP_CRYSTAL_DATA* data();
	DISP_CRYSTAL_DATA* begin();
	DISP_CRYSTAL_DATA* end();
	void fill();
	size_t size();
	bool empty();
};

struct fixed_array<DISP_CRYSTAL_DATA,40> : /* 0x000 */ fixed_array_base<DISP_CRYSTAL_DATA,40,DISP_CRYSTAL_DATA[40]> { // 0x140
};

typedef struct { // 0x20
	/* 0x00 */ char mode;
	/* 0x01 */ char cross_fade_flg;
	/* 0x04 */ MENU_REF_CTRL ref_ctrl;
	/* 0x10 */ int before_list_data_pos;
	/* 0x14 */ fixed_array<int,3> max_score_order;
} MENU_SOUL_CTRL;

typedef struct { // 0xc
	/* 0x0 */ char anim_step;
	/* 0x1 */ char anim_timer;
	/* 0x2 */ u_char rgb;
	/* 0x3 */ char scroll_timer;
	/* 0x4 */ fixed_array<int,2> disp_msg_id;
} MENU_SOUL_DISP;

typedef struct { // 0x8
	/* 0x0 */ int ghost_list_label;
	/* 0x4 */ int state;
} DISP_SOUL_LIST_DATA;

struct fixed_array_base<DISP_SOUL_LIST_DATA,176,DISP_SOUL_LIST_DATA[176]> { // 0x580
protected:
	/* 0x000 */ DISP_SOUL_LIST_DATA m_aData[176];
	
public:
	fixed_array_base<DISP_SOUL_LIST_DATA,176,DISP_SOUL_LIST_DATA[176]>& operator=();
	fixed_array_base();
protected:
	fixed_array_base();
public:
	DISP_SOUL_LIST_DATA& operator[]();
	DISP_SOUL_LIST_DATA& operator[]();
	DISP_SOUL_LIST_DATA* data();
	DISP_SOUL_LIST_DATA* begin();
	DISP_SOUL_LIST_DATA* end();
	void fill();
	size_t size();
	bool empty();
};

struct fixed_array<DISP_SOUL_LIST_DATA,176> : /* 0x000 */ fixed_array_base<DISP_SOUL_LIST_DATA,176,DISP_SOUL_LIST_DATA[176]> { // 0x580
};

typedef struct { // 0x20
	/* 0x00 */ u_char anim_step;
	/* 0x01 */ char anim_timer;
	/* 0x02 */ u_char move_flg;
	/* 0x04 */ int now_time_cnt;
	/* 0x08 */ DATE_INFO now_time;
} MENU_TOP_DISP;

typedef struct { // 0x3
	/* 0x0 */ u_char r;
	/* 0x1 */ u_char g;
	/* 0x2 */ u_char b;
} MSG_COLOR;

typedef struct { // 0x50
	/* 0x00 */ int pri;
	/* 0x04 */ int bx;
	/* 0x08 */ int by;
	/* 0x0c */ u_char r;
	/* 0x0d */ u_char g;
	/* 0x0e */ u_char b;
	/* 0x0f */ u_char alp;
	/* 0x10 */ u_char *str;
	/* 0x14 */ u_char *stp;
	/* 0x18 */ int sta;
	/* 0x1c */ int flg;
	/* 0x20 */ int pass;
	/* 0x24 */ int csr;
	/* 0x28 */ int decide;
	/* 0x2c */ int mes_is_end;
	/* 0x30 */ int cnt;
	/* 0x34 */ int retst;
	/* 0x38 */ int disptype;
	/* 0x3c */ int fntmcnt;
	/* 0x40 */ int fntcnt;
	/* 0x44 */ int fntwait;
	/* 0x48 */ u_char usrgb[4];
	/* 0x4c */ u_char vib;
	/* 0x4d */ u_char bx_pass;
	/* 0x4e */ u_char bx_pass_old;
	/* 0x4f */ u_char bx_pass_st;
} MES_DAT;

typedef struct { // 0x30c
	/* 0x000 */ u_short dummy;
	/* 0x002 */ u_char pass;
	/* 0x003 */ u_char pass_flg;
	/* 0x004 */ u_char *old_adr;
	/* 0x008 */ int cnt;
	/* 0x00c */ u_char mes_alps[16][48];
} MESV22;

struct MES_WRK { // 0x1
	/* 0x0 */ u_char texbank;
};

typedef struct { // 0x8
	/* 0x0 */ char pass_btn_wait;
	/* 0x1 */ u_char disp_state;
	/* 0x2 */ u_char init_flg;
	/* 0x4 */ int cnt;
} MSG_DISP_CTRL;

typedef struct { // 0x14
	/* 0x00 */ u_char disp_type;
	/* 0x04 */ int now_bank;
	/* 0x08 */ int start_x;
	/* 0x0c */ int start_y;
	/* 0x10 */ u_char font_pos;
	/* 0x11 */ u_char font_w;
	/* 0x12 */ u_char font_h;
	/* 0x13 */ u_char arrange;
} MSG_EXE_CTRL;

struct fixed_array_base<unsigned int,50,unsigned int[50]> { // 0xc8
protected:
	/* 0x00 */ u_int m_aData[50];
	
public:
	fixed_array_base<unsigned int,50,unsigned int[50]>& operator=();
	fixed_array_base();
protected:
	fixed_array_base();
public:
	u_int& operator[]();
	u_int& operator[]();
	u_int* data();
	u_int* begin();
	u_int* end();
	void fill();
	size_t size();
	bool empty();
};

struct fixed_array<unsigned int,50> : /* 0x00 */ fixed_array_base<unsigned int,50,unsigned int[50]> { // 0xc8
};

struct fixed_array_base<unsigned int *,50,unsigned int *[50]> { // 0xc8
protected:
	/* 0x00 */ u_int *m_aData[50];
	
public:
	fixed_array_base<unsigned int *,50,unsigned int *[50]>& operator=();
	fixed_array_base();
protected:
	fixed_array_base();
public:
	u_int*& operator[]();
	u_int*& operator[]();
	u_int** data();
	u_int** begin();
	u_int** end();
	void fill();
	size_t size();
	bool empty();
};

struct fixed_array<unsigned int *,50> : /* 0x00 */ fixed_array_base<unsigned int *,50,unsigned int *[50]> { // 0xc8
};

struct fixed_array_base<unsigned char,6,unsigned char[6]> { // 0x6
protected:
	/* 0x0 */ u_char m_aData[6];
	
public:
	fixed_array_base<unsigned char,6,unsigned char[6]>& operator=();
	fixed_array_base();
protected:
	fixed_array_base();
public:
	u_char& operator[]();
	u_char& operator[]();
	u_char* data();
	u_char* begin();
	u_char* end();
	void fill();
	size_t size();
	bool empty();
};

struct fixed_array<unsigned char,6> : /* 0x0 */ fixed_array_base<unsigned char,6,unsigned char[6]> { // 0x6
};

struct fixed_array_base<unsigned char,30,unsigned char[30]> { // 0x1e
protected:
	/* 0x00 */ u_char m_aData[30];
	
public:
	fixed_array_base<unsigned char,30,unsigned char[30]>& operator=();
	fixed_array_base();
protected:
	fixed_array_base();
public:
	u_char& operator[]();
	u_char& operator[]();
	u_char* data();
	u_char* begin();
	u_char* end();
	void fill();
	size_t size();
	bool empty();
};

struct fixed_array<unsigned char,30> : /* 0x00 */ fixed_array_base<unsigned char,30,unsigned char[30]> { // 0x1e
};

typedef struct { // 0x24
	/* 0x00 */ short int sType;
	/* 0x02 */ u_short usPlyrHp;
	/* 0x04 */ u_short usSisHp;
	/* 0x06 */ char cManyouNum;
	/* 0x07 */ char cFilm[5];
	/* 0x0c */ int iPrize;
	/* 0x10 */ int iRank[5];
} MISSION_TBL;

typedef struct { // 0xc
	/* 0x0 */ char step;
	/* 0x1 */ char before_step;
	/* 0x2 */ char csr;
	/* 0x3 */ char title_csr;
	/* 0x4 */ int vib_csr;
	/* 0x8 */ int vib_time;
} PAUSE_CTRL;

typedef struct { // 0x8
	/* 0x0 */ char step;
	/* 0x1 */ char next_phase;
	/* 0x4 */ int stream_id;
} MISSION_SEL_CTRL;

typedef struct { // 0x2
	/* 0x0 */ char anim_step;
	/* 0x1 */ char anim_timer;
} MISSION_SEL_DISP;

typedef struct { // 0xc
	/* 0x0 */ MC_SAVE_DATA aMC;
	/* 0x8 */ void *pAddr;
} MIS_SAVE_DATA;

typedef struct { // 0x14
	/* 0x00 */ MORPH_CODE *code;
	/* 0x04 */ float cnt;
	/* 0x08 */ int target;
	/* 0x0c */ int value;
	/* 0x10 */ int sta;
} MORPH_CODE_CTRL;

typedef struct { // 0x9c
	/* 0x00 */ ANI_CTRL *ani_ctrl;
	/* 0x04 */ MORPH_CODE_CTRL morph;
	/* 0x18 */ float rate;
	/* 0x1c */ int model_no;
	/* 0x20 */ int old_anm;
	/* 0x24 */ int obj1_id;
	/* 0x28 */ int obj2_id;
	/* 0x2c */ int flg;
	/* 0x30 */ PHEAD ph1;
	/* 0x64 */ PHEAD ph2;
	/* 0x98 */ float *morph_buf[4];
} MORPH_CTRL;

struct fixed_array_base<MORPH_CTRL,15,MORPH_CTRL[15]> { // 0x924
protected:
	/* 0x000 */ MORPH_CTRL m_aData[15];
	
public:
	fixed_array_base<MORPH_CTRL,15,MORPH_CTRL[15]>& operator=();
	fixed_array_base();
protected:
	fixed_array_base();
public:
	MORPH_CTRL& operator[]();
	MORPH_CTRL& operator[]();
	MORPH_CTRL* data();
	MORPH_CTRL* begin();
	MORPH_CTRL* end();
	void fill();
	size_t size();
	bool empty();
};

struct fixed_array<MORPH_CTRL,15> : /* 0x000 */ fixed_array_base<MORPH_CTRL,15,MORPH_CTRL[15]> { // 0x924
};

struct fixed_array_base<float[4][4],60,float[60][4][4]> { // 0xf00
protected:
	/* 0x000 */ float m_aData[60][4][4];
	
public:
	fixed_array_base<float[4][4],60,float[60][4][4]>& operator=();
	fixed_array_base();
protected:
	fixed_array_base();
public:
	float&[4][4] operator[]();
	float&[4][4] operator[]();
	float*[4][4] data();
	float*[4][4] begin();
	float*[4][4] end();
	void fill();
	size_t size();
	bool empty();
};

struct fixed_array<float[4][4],60> : /* 0x000 */ fixed_array_base<float[4][4],60,float[60][4][4]> { // 0xf00
};

struct fixed_array_base<RST_DATA,60,RST_DATA[60]> { // 0xb40
protected:
	/* 0x000 */ RST_DATA m_aData[60];
	
public:
	fixed_array_base<RST_DATA,60,RST_DATA[60]>& operator=();
	fixed_array_base();
protected:
	fixed_array_base();
public:
	RST_DATA& operator[]();
	RST_DATA& operator[]();
	RST_DATA* data();
	RST_DATA* begin();
	RST_DATA* end();
	void fill();
	size_t size();
	bool empty();
};

struct fixed_array<RST_DATA,60> : /* 0x000 */ fixed_array_base<RST_DATA,60,RST_DATA[60]> { // 0xb40
};

typedef int (*sceSdrUserCommandFunction)(/* parameters unknown */);

typedef struct { // 0x20
	/* 0x00 */ char id[4];
	/* 0x04 */ int size;
	/* 0x08 */ int type;
	/* 0x0c */ int rate;
	/* 0x10 */ int ch;
	/* 0x14 */ int interSize;
	/* 0x18 */ int loopStart;
	/* 0x1c */ int loopEnd;
} SpuStreamHeader;

typedef struct { // 0x8
	/* 0x0 */ char id[4];
	/* 0x4 */ int size;
} SpuStreamBody;

typedef struct { // 0x60
	/* 0x00 */ int state;
	/* 0x04 */ SpuStreamHeader sshd;
	/* 0x24 */ SpuStreamBody ssbd;
	/* 0x2c */ int hdrCount;
	/* 0x30 */ u_char *data;
	/* 0x34 */ int put;
	/* 0x38 */ int count;
	/* 0x3c */ int size;
	/* 0x40 */ int totalBytes;
	/* 0x44 */ int iopBuff;
	/* 0x48 */ int iopBuffSize;
	/* 0x4c */ int iopLastPos;
	/* 0x50 */ int iopPausePos;
	/* 0x54 */ int totalBytesSent;
	/* 0x58 */ int iopZero;
	/* 0x5c */ int iopZeroSize;
} AudioDec;

typedef struct { // 0x34
	/* 0x00 */ int isOnCD;
	/* 0x04 */ int size;
	/* 0x08 */ sceCdlFILE fp;
	/* 0x2c */ u_char *iopBuf;
	/* 0x30 */ int fd;
} StrFile;

typedef struct { // 0x7
	/* 0x0 */ u_char step;
	/* 0x1 */ u_char mode;
	/* 0x2 */ u_char cursor;
	/* 0x3 */ u_char next_cursor;
	/* 0x4 */ u_char conf_csr;
	/* 0x5 */ u_char play_flg;
	/* 0x6 */ u_char have_num;
} MOVIE_ROOM_MENU_CTRL;

typedef struct { // 0x8
	/* 0x0 */ char anim_step;
	/* 0x1 */ char anim_timer;
	/* 0x2 */ char cursor_timer;
	/* 0x3 */ char move_anim_step;
	/* 0x4 */ short int move_anim_timer;
	/* 0x6 */ char move_rot;
} MOVIE_ROOM_MENU_DISP;

typedef struct { // 0xc
	/* 0x0 */ int item_label;
	/* 0x4 */ int tex_label;
	/* 0x8 */ void *data_addr;
} DISP_FILM_REEL;

typedef struct { // 0x4
	/* 0x0 */ int scene_no;
} MOVIE_TITLE_CTRL;

typedef struct { // 0x4
	/* 0x0 */ char mode;
	/* 0x1 */ char cursor;
	/* 0x2 */ short int wait_timer;
} NEW_GAME_CTRL;

typedef struct { // 0x14
	/* 0x00 */ int pack_num;
	/* 0x04 */ int pad[3];
	/* 0x10 */ int offset[1];
} PK2_HEAD;

typedef struct { // 0x14
	/* 0x00 */ int analog_timer[4];
	/* 0x10 */ char rpt_flg[4];
} ANALOG_PAD_CTRL;

struct PHOTO_WRK { // 0xc
	/* 0x0 */ int mode;
	/* 0x4 */ u_int sta;
	/* 0x8 */ u_char adr_no;
	/* 0x9 */ u_char cnt;
	/* 0xa:0 */ unsigned char furn_flg : 1;
	/* 0xa:1 */ unsigned char bGradual : 1;
	/* 0xa:2 */ unsigned char b3DDraw : 1;
	/* 0xa:3 */ unsigned char bRareEne : 1;
};

struct fixed_array_base<_HINT_PHOTO_REQ,5,_HINT_PHOTO_REQ[5]> { // 0x14
protected:
	/* 0x00 */ HINT_PHOTO_REQ m_aData[5];
	
public:
	fixed_array_base<_HINT_PHOTO_REQ,5,_HINT_PHOTO_REQ[5]>& operator=();
	fixed_array_base();
protected:
	fixed_array_base();
public:
	HINT_PHOTO_REQ& operator[]();
	HINT_PHOTO_REQ& operator[]();
	HINT_PHOTO_REQ* data();
	HINT_PHOTO_REQ* begin();
	HINT_PHOTO_REQ* end();
	void fill();
	size_t size();
	bool empty();
};

struct fixed_array<_HINT_PHOTO_REQ,5> : /* 0x00 */ fixed_array_base<_HINT_PHOTO_REQ,5,_HINT_PHOTO_REQ[5]> { // 0x14
};

struct BIT_FLAGS<72> { // 0xc
protected:
	/* 0x0 */ int flag_32[3];
	
public:
	BIT_FLAGS<72>& operator=();
	BIT_FLAGS();
	BIT_FLAGS();
	void AllDown();
	void AllUp();
	int GetUpNum();
	void FlgUp();
	void FlgDown();
	int IsUp();
};

struct _PHOTO_DAT_OBJ_WRK { // 0x20
	/* 0x00 */ MDAT_OBJ *p_obj;
	/* 0x04 */ void *p_deform;
	/* 0x08 */ CWrkVariable<short int,0,128> mGhostAlpha;
	/* 0x10 */ float pos[4];
};

typedef _PHOTO_DAT_OBJ_WRK PHOTO_DAT_OBJ_WRK;
typedef void (*LPFUNC_SETFLASHLIGHT)(/* parameters unknown */);

struct MDL_REQ_SAVE { // 0x10
	/* 0x0 */ int mMdlNo;
	/* 0x4 */ int mAnmNo;
	/* 0x8 */ int mBdNo;
	/* 0xc */ int mSmdlNo;
	
	MDL_REQ_SAVE& operator=();
	MDL_REQ_SAVE();
	MDL_REQ_SAVE();
	void Set();
	void SetSave();
};

enum _LTD_MODE {
	LTD_MODE_NORMAL = 0,
	LTD_MODE_TIRED = 1
};

typedef _LTD_MODE LTD_MODE;

struct _GAME_COSTUME { // 0x10
	/* 0x0 */ int mPlyrMdlNo;
	/* 0x4 */ int mSisterMdlNo;
	/* 0x8 */ int mPlyrAcsNo;
	/* 0xc */ int mSisterAcsNo;
};

typedef _GAME_COSTUME GAME_COSTUME;

struct PLYR_PLYR_DATA : /* 0x00 */ MAN_DATA { // 0x3c
	/* 0x30 */ int plyr_cam_mdl_p;
	/* 0x34 */ int plyr_light_mdl_p;
	/* 0x38 */ u_char plyr_cam_alpha;
	/* 0x39 */ u_char plyr_light_alpha;
private:
	/* 0x3a:0 */ unsigned int plyr_req_other_mdl : 1;
	/* 0x3a:1 */ unsigned int plyr_init_ok : 1;
	
public:
	PLYR_PLYR_DATA& operator=();
	PLYR_PLYR_DATA();
	PLYR_PLYR_DATA();
	/* vtable[1] */ virtual int Setup();
	/* vtable[2] */ virtual int IsReady();
	void Release();
	void Initialize();
private:
	void Init();
};

struct fixed_array_base<ROOM_IN_INFO,240,ROOM_IN_INFO[240]> { // 0xf0
protected:
	/* 0x00 */ ROOM_IN_INFO m_aData[240];
	
public:
	fixed_array_base<ROOM_IN_INFO,240,ROOM_IN_INFO[240]>& operator=();
	fixed_array_base();
protected:
	fixed_array_base();
public:
	ROOM_IN_INFO& operator[]();
	ROOM_IN_INFO& operator[]();
	ROOM_IN_INFO* data();
	ROOM_IN_INFO* begin();
	ROOM_IN_INFO* end();
	void fill();
	size_t size();
	bool empty();
};

struct fixed_array<ROOM_IN_INFO,240> : /* 0x00 */ fixed_array_base<ROOM_IN_INFO,240,ROOM_IN_INFO[240]> { // 0xf0
};

typedef struct { // 0x18
	/* 0x00 */ char step;
	/* 0x01 */ char conf_csr;
	/* 0x02 */ short int fade_timer;
	/* 0x04 */ int puzzle_id;
	/* 0x08 */ int con_color;
	/* 0x0c */ int con_alpha;
	/* 0x10 */ int snd_id;
	/* 0x14 */ int snd_bank_id;
} PZL_EXE_CTRL;

typedef struct { // 0x48
	/* 0x00 */ char step;
	/* 0x01 */ char sub_step;
	/* 0x02 */ char next_sub_step;
	/* 0x03 */ char clear_flg;
	/* 0x04 */ char book_sel_csr;
	/* 0x05 */ char next_book_csr;
	/* 0x06 */ char book_shelf_csr;
	/* 0x07 */ char exit_csr;
	/* 0x08 */ int snd_id;
	/* 0x0c */ fixed_array<int,5> have_book;
	/* 0x20 */ fixed_array<int,5> book_shelf;
	/* 0x34 */ fixed_array<int,5> order_enter_book;
} SIX_PZL_CTRL;

typedef struct { // 0x10
	/* 0x0 */ char anim_step;
	/* 0x1 */ char sub_anim_step;
	/* 0x2 */ short int anim_timer;
	/* 0x4 */ short int sub_anim_timer;
	/* 0x6 */ char move_anim_step;
	/* 0x7 */ char move_rot;
	/* 0x8 */ char msg_anim_step;
	/* 0x9 */ char cap_win_anim_flg;
	/* 0xa */ short int move_anim_timer;
	/* 0xc */ short int msg_anim_timer;
	/* 0xe */ short int shelf_anim_timer;
} SIX_PZL_DISP;

typedef struct { // 0x8
	/* 0x0 */ char step;
	/* 0x4 */ int fade_timer;
} SAVE_POINT_FADE_IN_CTRL;

typedef struct { // 0x8
	/* 0x0 */ int stream_id;
	/* 0x4 */ char step;
} SAVEPOINT_MAIN_CTRL;

typedef struct { // 0x10
	/* 0x0 */ int fade_timer;
	/* 0x4 */ int bg_anim_timer;
	/* 0x8 */ int moyou1_anim_timer;
	/* 0xc */ int moyou2_anim_timer;
} SAVEPOINT_MAIN_DISP;

typedef struct { // 0x4
	/* 0x0 */ char step;
	/* 0x1 */ char mode;
	/* 0x2 */ char csr;
	/* 0x3 */ char conf_csr;
} SAVEPOINT_TOP_CTRL;

typedef struct { // 0x4
	/* 0x0 */ char anim_step;
	/* 0x1 */ char anim_timer;
	/* 0x2 */ char conf_anim_step;
	/* 0x3 */ char conf_anim_timer;
} SAVEPOINT_TOP_DISP;

enum _EXTENSION_LABEL {
	EXT_LABEL_PKS = 0,
	EXT_LABEL_CMP = 1,
	EXT_LABEL_PK2 = 2,
	EXT_LABEL_TM2 = 3,
	EXT_LABEL_PAK = 4,
	EXT_LABEL_OBJ = 5,
	EXT_LABEL_MDL = 6,
	EXT_LABEL_ANM = 7,
	EXT_LABEL_MOT = 8,
	EXT_LABEL_DMY = 9,
	EXT_LABEL_ZLD = 10,
	EXT_LABEL_MH = 11,
	EXT_LABEL_HXD = 12,
	EXT_LABEL_STR = 13,
	EXT_LABEL_BD = 14,
	EXT_LABEL_PSS = 15,
	EXT_LABEL_SLT = 16,
	EXT_LABEL_EFF = 17,
	EXT_LABEL_SCN = 18,
	EXT_LABEL_ICO = 19
};

typedef _EXTENSION_LABEL EXT_LABEL;

typedef struct { // 0x1c
	/* 0x00 */ int buf_id;
	/* 0x04 */ int status;
	/* 0x08 */ fixed_array<int,3> id;
	/* 0x14 */ int file_num;
	/* 0x18 */ int adpcm_id;
} SCENE_LOAD_CTRL;

typedef struct { // 0x8
	/* 0x0 */ char *prefix;
	/* 0x4 */ int top_no;
} AREA_PREFIX_TO_NO;

struct fixed_array_base<SCENE_CTRL,2,SCENE_CTRL[2]> { // 0x4260
protected:
	/* 0x0000 */ SCENE_CTRL m_aData[2];
	
public:
	fixed_array_base<SCENE_CTRL,2,SCENE_CTRL[2]>& operator=();
	fixed_array_base();
protected:
	fixed_array_base();
public:
	SCENE_CTRL& operator[]();
	SCENE_CTRL& operator[]();
	SCENE_CTRL* data();
	SCENE_CTRL* begin();
	SCENE_CTRL* end();
	void fill();
	size_t size();
	bool empty();
};

struct fixed_array<SCENE_CTRL,2> : /* 0x0000 */ fixed_array_base<SCENE_CTRL,2,SCENE_CTRL[2]> { // 0x4260
};

struct fixed_array_base<AREA_PREFIX_TO_NO,10,AREA_PREFIX_TO_NO *> { // 0x4
protected:
	/* 0x0 */ AREA_PREFIX_TO_NO *m_aData;
	
public:
	fixed_array_base<AREA_PREFIX_TO_NO,10,AREA_PREFIX_TO_NO *>& operator=();
	fixed_array_base();
protected:
	fixed_array_base();
public:
	AREA_PREFIX_TO_NO& operator[]();
	AREA_PREFIX_TO_NO& operator[]();
	AREA_PREFIX_TO_NO* data();
	AREA_PREFIX_TO_NO* begin();
	AREA_PREFIX_TO_NO* end();
	void fill();
	size_t size();
	bool empty();
};

struct reference_fixed_array<AREA_PREFIX_TO_NO,10> : /* 0x0 */ fixed_array_base<AREA_PREFIX_TO_NO,10,AREA_PREFIX_TO_NO *> { // 0x4
};

typedef struct { // 0x20
	/* 0x00 */ u_int SceneNo;
	/* 0x04 */ char RoomName[6];
	/* 0x0a */ char SubRoomName[6];
	/* 0x10 */ short int MirrorFlg;
	/* 0x12 */ short int BoneModelNum;
	/* 0x14 */ short int DoorModelNum;
	/* 0x16 */ short int FurnModelNum;
	/* 0x18 */ short int ItemModelNum;
	/* 0x1a */ short int PadShort;
	/* 0x1c */ int PadInt[1];
} SCENE_DATA_HEADER;

struct fixed_array_base<char,33,char[33]> { // 0x21
protected:
	/* 0x00 */ char m_aData[33];
	
public:
	fixed_array_base<char,33,char[33]>& operator=();
	fixed_array_base();
protected:
	fixed_array_base();
public:
	char& operator[]();
	char& operator[]();
	char* data();
	char* begin();
	char* end();
	void fill();
	size_t size();
	bool empty();
};

struct fixed_array<char,33> : /* 0x00 */ fixed_array_base<char,33,char[33]> { // 0x21
};

struct fixed_array_base<int,65,int[65]> { // 0x104
protected:
	/* 0x000 */ int m_aData[65];
	
public:
	fixed_array_base<int,65,int[65]>& operator=();
	fixed_array_base();
protected:
	fixed_array_base();
public:
	int& operator[]();
	int& operator[]();
	int* data();
	int* begin();
	int* end();
	void fill();
	size_t size();
	bool empty();
};

struct fixed_array<int,65> : /* 0x000 */ fixed_array_base<int,65,int[65]> { // 0x104
};

struct fixed_array_base<char *,4,char **> { // 0x4
protected:
	/* 0x0 */ char **m_aData;
	
public:
	fixed_array_base<char *,4,char **>& operator=();
	fixed_array_base();
protected:
	fixed_array_base();
public:
	char*& operator[]();
	char*& operator[]();
	char** data();
	char** begin();
	char** end();
	void fill();
	size_t size();
	bool empty();
};

struct reference_fixed_array<char *,4> : /* 0x0 */ fixed_array_base<char *,4,char **> { // 0x4
};

typedef struct { // 0xc
	/* 0x0 */ int TableNum;
	/* 0x4 */ u_int TimingTableOffset;
	/* 0x8 */ u_int VibrationDataOffset;
} SCENE_EFFECT_HEADER;

typedef struct { // 0x8
	/* 0x0 */ int Frame;
	/* 0x4 */ int Offset;
} SCENE_EFFECT_TABLE;

struct _SCENE_EFFECT_CTRL_DATA { // 0x30
	/* 0x00 */ void *pRet;
	/* 0x04 */ int EffectId;
	/* 0x08 */ int StartFrame;
	/* 0x0c */ int EndFrame;
	/* 0x10 */ _SCENE_EFFECT_CTRL_DATA *pNext;
	/* 0x20 */ char ChangeData;
};

typedef _SCENE_EFFECT_CTRL_DATA SCENE_EFFECT_CTRL_DATA;

typedef struct { // 0x40
	/* 0x00 */ SCENE_EFFECT_CTRL_DATA *pDataTop;
	/* 0x04 */ SCENE_EFFECT_CTRL_DATA *pDataLast;
	/* 0x08 */ int LenzFlareFlg;
	/* 0x10 */ float SpotLightPos[4];
	/* 0x20 */ float SpotLightRot[4];
	/* 0x30 */ int ExecutedFrame;
} SCENE_EFFECT_CTRL;

struct _SCENE_FADE_MODEL_DATA { // 0x1c
	/* 0x00 */ int ModelType;
	/* 0x04 */ int ModelId;
	/* 0x08 */ int StartFrame;
	/* 0x0c */ int EndFrame;
	/* 0x10 */ int StartAlpha;
	/* 0x14 */ int EndAlpha;
	/* 0x18 */ _SCENE_FADE_MODEL_DATA *pNext;
};

typedef _SCENE_FADE_MODEL_DATA SCENE_FADE_MODEL_DATA;

typedef struct { // 0x8
	/* 0x0 */ SCENE_FADE_MODEL_DATA *pDataTop;
	/* 0x4 */ SCENE_FADE_MODEL_DATA *pDataLast;
} SCENE_FADE_MODEL_CTRL;

typedef struct { // 0xc
	/* 0x0 */ short int FuncNo;
	/* 0x2 */ short int ModelType;
	/* 0x4 */ short int ModelId;
	/* 0x6 */ short int StartAlpha;
	/* 0x8 */ short int EndAlpha;
	/* 0xa */ short int Frame;
} SCENE_EFFECT_MODELFADE;

typedef struct { // 0x24
	/* 0x00 */ short int FuncNo;
	/* 0x02 */ short int ModelId;
	/* 0x04 */ short int Type;
	/* 0x06 */ short int StartScaleX;
	/* 0x08 */ short int EndScaleX;
	/* 0x0a */ short int StartScaleY;
	/* 0x0c */ short int EndScaleY;
	/* 0x0e */ short int StartAlpha;
	/* 0x10 */ short int EndAlpha;
	/* 0x12 */ short int StartWaveRate;
	/* 0x14 */ short int EndWaveRate;
	/* 0x16 */ short int StartTexRate;
	/* 0x18 */ short int EndTexRate;
	/* 0x1a */ short int StartWaveSpeed;
	/* 0x1c */ short int EndWaveSpeed;
	/* 0x1e */ short int Distance;
	/* 0x20 */ short int Time;
	/* 0x22 */ short int Pad;
} SCENE_EFFECT_PDEFORM;

struct _SCENE_PDEFORM_DATA { // 0x50
	/* 0x00 */ float Position[4];
	/* 0x10 */ SCENE_EFFECT_PDEFORM Param;
	/* 0x34 */ float WaveSpeed;
	/* 0x38 */ float WaveRate;
	/* 0x3c */ float TexRate;
	/* 0x40 */ int StartFrame;
	/* 0x44 */ int EndFrame;
};

typedef _SCENE_PDEFORM_DATA SCENE_PDEFORM_DATA;

typedef struct { // 0x8
	/* 0x0 */ SCENE_PDEFORM_DATA *pDataTop;
	/* 0x4 */ SCENE_PDEFORM_DATA *pDataLast;
} SCENE_PDEFORM_CTRL;

struct _SCENE_ENE_AURA_DATA { // 0x30
	/* 0x00 */ float Position[4];
	/* 0x10 */ int ModelId;
	/* 0x14 */ u_int Rgba;
	/* 0x18 */ float Size;
	/* 0x1c */ float AlphaRate;
	/* 0x20 */ float Adjust;
	/* 0x24 */ void *pRet;
	/* 0x28 */ _SCENE_ENE_AURA_DATA *pNext;
};

typedef _SCENE_ENE_AURA_DATA SCENE_ENE_AURA_DATA;

typedef struct { // 0x8
	/* 0x0 */ SCENE_ENE_AURA_DATA *pDataTop;
	/* 0x4 */ SCENE_ENE_AURA_DATA *pDataLast;
} SCENE_ENE_AURA_CTRL;

typedef struct { // 0x14
	/* 0x00 */ short int FuncNo;
	/* 0x02 */ short int ModelId;
	/* 0x04 */ short int Size;
	/* 0x06 */ short int AlphaRate;
	/* 0x08 */ short int R;
	/* 0x0a */ short int G;
	/* 0x0c */ short int B;
	/* 0x0e */ short int A;
	/* 0x10 */ short int Adjust;
	/* 0x12 */ short int Pad;
} SCENE_EFFECT_ENE_AURA;

struct _SCENE_HAZE_DATA { // 0x50
	/* 0x00 */ float Position[4];
	/* 0x10 */ float HipPosition[4];
	/* 0x20 */ float OldHipPosition[4];
	/* 0x30 */ float Rot[4];
	/* 0x40 */ int ModelId;
	/* 0x44 */ void *pEffRet;
};

typedef _SCENE_HAZE_DATA SCENE_HAZE_DATA;

typedef struct { // 0x4
	/* 0x0 */ short int FuncNo;
	/* 0x2 */ short int ModelId;
} SCENE_EFFECT_HAZE;

typedef struct { // 0x4
	/* 0x0 */ short int FuncNo;
	/* 0x2 */ short int ModelId;
} SCENE_EFFECT_HAZE_OFF;

struct _SCENE_VIBRATION_DATA { // 0x18
	/* 0x00 */ short int StartFrame;
	/* 0x02 */ short int EndFrame;
	/* 0x04 */ short int BlankTime;
	/* 0x06 */ short int VibrateTime;
	/* 0x08 */ short int Power;
	/* 0x0a */ short int ActuaterNo;
	/* 0x0c */ int BlankCount;
	/* 0x10 */ int VibrateCount;
	/* 0x14 */ _SCENE_VIBRATION_DATA *pNext;
};

typedef _SCENE_VIBRATION_DATA SCENE_VIBRATION_DATA;

typedef struct { // 0x8
	/* 0x0 */ SCENE_VIBRATION_DATA *pDataTop;
	/* 0x4 */ SCENE_VIBRATION_DATA *pDataLast;
} SCENE_VIBRATION_CTRL;

typedef struct { // 0xc
	/* 0x0 */ short int FuncNo;
	/* 0x2 */ short int BlankTime;
	/* 0x4 */ short int VibrateTime;
	/* 0x6 */ short int Power;
	/* 0x8 */ short int TotalTime;
	/* 0xa */ short int ActuaterNo;
} SCENE_EFFECT_VIBRATION;

typedef struct { // 0xe
	/* 0x0 */ short int FuncNo;
	/* 0x2 */ short int StartTime;
	/* 0x4 */ short int EndTime;
	/* 0x6 */ short int BlankTime;
	/* 0x8 */ short int VibrateTime;
	/* 0xa */ short int Power;
	/* 0xc */ short int ActuaterNo;
} SCENE_EFFECT_VIBRATION2;

typedef struct { // 0x20
	/* 0x00 */ float Position[4];
	/* 0x10 */ void *pEffectRet;
	/* 0x14 */ ANI_CTRL *pMdlAnm;
} SCENE_EFFECT_TORCH_DATA;

typedef struct { // 0x8
	/* 0x0 */ short int FuncNo;
	/* 0x2 */ short int ModelId;
	/* 0x4 */ short int TorchType;
	/* 0x6 */ short int Pad;
} SCENE_EFFECT_TORCH;

typedef struct { // 0x14
	/* 0x00 */ short int FuncNo;
	/* 0x02 */ short int Type;
	/* 0x04 */ short int StartSpeed;
	/* 0x06 */ short int EndSpeed;
	/* 0x08 */ short int StartAlpha;
	/* 0x0a */ short int EndAlpha;
	/* 0x0c */ short int AlphaMax;
	/* 0x0e */ short int ColorMax;
	/* 0x10 */ short int Time;
	/* 0x12 */ short int Pad;
} SCENE_EFFECT_DITHER;

typedef struct { // 0x14
	/* 0x00 */ short int FuncNo;
	/* 0x02 */ short int Type;
	/* 0x04 */ short int StartAlpha;
	/* 0x06 */ short int EndAlpha;
	/* 0x08 */ short int StartScale;
	/* 0x0a */ short int EndScale;
	/* 0x0c */ short int StartRot;
	/* 0x0e */ short int EndRot;
	/* 0x10 */ short int Time;
	/* 0x12 */ short int Pad;
} SCENE_EFFECT_BLUR;

typedef struct { // 0xc
	/* 0x0 */ short int FuncNo;
	/* 0x2 */ short int Type;
	/* 0x4 */ short int StartRate;
	/* 0x6 */ short int EndRate;
	/* 0x8 */ short int Time;
	/* 0xa */ short int Pad;
} SCENE_EFFECT_DEFORM;

typedef struct { // 0x8
	/* 0x0 */ short int FuncNo;
	/* 0x2 */ short int StartRate;
	/* 0x4 */ short int EndRate;
	/* 0x6 */ short int Time;
} SCENE_EFFECT_FOCUS;

typedef struct { // 0x10
	/* 0x0 */ short int FuncNo;
	/* 0x2 */ short int Type;
	/* 0x4 */ short int StartColor;
	/* 0x6 */ short int EndColor;
	/* 0x8 */ short int StartAlpha;
	/* 0xa */ short int EndAlpha;
	/* 0xc */ short int Time;
	/* 0xe */ short int Pad;
} SCENE_EFFECT_CONTRAST;

typedef struct { // 0x10
	/* 0x0 */ short int FuncNo;
	/* 0x2 */ short int StartColor;
	/* 0x4 */ short int EndColor;
	/* 0x6 */ short int StartAlpha;
	/* 0x8 */ short int EndAlpha;
	/* 0xa */ short int StartAlpha2;
	/* 0xc */ short int EndAlpha2;
	/* 0xe */ short int Time;
} SCENE_EFFECT_NEGA;

typedef struct { // 0x8
	/* 0x0 */ short int FuncNo;
	/* 0x2 */ short int StartAlpha;
	/* 0x4 */ short int EndAlpha;
	/* 0x6 */ short int Time;
} SCENE_EFFECT_FADEFRAME;

typedef struct { // 0x4
	/* 0x0 */ short int FuncNo;
	/* 0x2 */ short int EffectId;
} SCENE_EFFECT_OFF;

typedef struct { // 0x4
	/* 0x0 */ short int FuncNo;
	/* 0x2 */ short int Type;
} SCENE_EFFECT_FOCUSDEPTH;

typedef struct { // 0x4
	/* 0x0 */ short int FuncNo;
	/* 0x2 */ short int Frame;
} SCENE_EFFECT_OVERLAP;

typedef struct { // 0x4
	/* 0x0 */ short int FuncNo;
	/* 0x2 */ short int Pad;
} SCENE_EFFECT_LENZ_FLARE;

typedef struct { // 0x10
	/* 0x0 */ short int FuncNo;
	/* 0x2 */ short int ModelType;
	/* 0x4 */ short int ModelId;
	/* 0x6 */ short int LightNo;
	/* 0x8 */ short int R;
	/* 0xa */ short int G;
	/* 0xc */ short int B;
	/* 0xe */ short int Power;
} SCENE_EFFECT_POINTLIGHT;

typedef struct { // 0x14
	/* 0x00 */ short int FuncNo;
	/* 0x02 */ short int ModelType;
	/* 0x04 */ short int ModelId;
	/* 0x06 */ short int LightNo;
	/* 0x08 */ short int R;
	/* 0x0a */ short int G;
	/* 0x0c */ short int B;
	/* 0x0e */ short int Power;
	/* 0x10 */ short int Cone;
	/* 0x12 */ short int Pad;
} SCENE_EFFECT_SPOTLIGHT;

typedef struct { // 0xc
	/* 0x0 */ short int FuncNo;
	/* 0x2 */ short int R;
	/* 0x4 */ short int G;
	/* 0x6 */ short int B;
	/* 0x8 */ short int Power;
	/* 0xa */ short int Cone;
} SCENE_EFFECT_HANDSPOTLIGHT;

typedef struct { // 0x4
	/* 0x0 */ short int FuncNo;
	/* 0x2 */ short int ModelId;
} SCENE_EFFECT_PDEFORM_OFF;

typedef struct { // 0x4
	/* 0x0 */ short int FuncNo;
	/* 0x2 */ short int OnFlg;
} SCENE_EFFECT_MONOCHRO_ONOFF;

typedef struct { // 0x8
	/* 0x0 */ short int FuncNo;
	/* 0x2 */ short int InFlg;
	/* 0x4 */ short int ColorType;
	/* 0x6 */ short int Time;
} SCENE_EFFECT_FADE_IN_OUT;

typedef struct { // 0xc
	/* 0x0 */ short int FuncNo;
	/* 0x2 */ short int ColorR;
	/* 0x4 */ short int ColorG;
	/* 0x6 */ short int ColorB;
	/* 0x8 */ short int Alpha;
	/* 0xa */ short int Pad;
} SCENE_EFFECT_FADE_SCREEN;

typedef struct { // 0x4
	/* 0x0 */ short int FuncNo;
	/* 0x2 */ short int Pad;
} SCENE_EFFECT_FADE_SCREEN_OFF;

enum SCN_TEST_MODE {
	SCN_TEST_SLCT = 0,
	SCN_TEST_PLAY = 1,
	SCN_TEST_PLAY_MOVIE = 2,
	SCN_TEST_MENU = 3
};

typedef struct { // 0x1120
	/* 0x0000 */ G3DLIGHT light_tmp[36];
	/* 0x0fc0 */ SCENE_FOG fog_tmp;
	/* 0x0fe0 */ float amb_tmp[6][4];
	/* 0x1040 */ u_int mode;
	/* 0x1044 */ int select_stat;
	/* 0x1048 */ int scene_no;
	/* 0x104c */ u_int init;
	/* 0x1050 */ u_int load_status;
	/* 0x1054 */ int debug_flg;
	/* 0x1058 */ int main_menu_csr;
	/* 0x105c */ int menu_csr;
	/* 0x1060 */ int now_menu;
	/* 0x1064 */ int loop_flg;
	/* 0x1068 */ int light_no;
	/* 0x106c */ int l_menu_csr;
	/* 0x1070 */ int effect_id;
	/* 0x1074 */ int effect_csr;
	/* 0x1078 */ int ene_mdl_no;
	/* 0x107c */ u_int *load_adrs;
	/* 0x1080 */ int LightAllDispFlg;
	/* 0x1084 */ int LightDispFlg[36];
	/* 0x1114 */ int LightDispNum;
	/* 0x1118 */ u_int *pMovieEffect;
} SCN_TEST_WRK;

typedef struct { // 0x2c
	/* 0x00 */ FOD_EFF_DATA eff_data;
	/* 0x1c */ u_int eff_flg;
	/* 0x20 */ int eff_no;
	/* 0x24 */ int param_num;
	/* 0x28 */ char *eff_name;
} SCN_EFF_CTRL;

typedef struct { // 0x40
	/* 0x00 */ SCN_ENE_EF_PDF Param;
	/* 0x20 */ float Position[4];
	/* 0x30 */ float Distance;
	/* 0x34 */ float WaveSpeed;
	/* 0x38 */ int ModelId;
	/* 0x3c */ void *pEffRet;
} SCN_TEST_PDEFORM;

typedef struct { // 0x8
	/* 0x0 */ char step;
	/* 0x4 */ int stream_id;
} SETUP_CTRL;

typedef struct { // 0x2
	/* 0x0 */ char anim_step;
	/* 0x1 */ char anim_timer;
} SETUP_DISP_CTRL;

typedef struct { // 0x10
	/* 0x0 */ char step;
	/* 0x1 */ char mode;
	/* 0x2 */ char conf_csr;
	/* 0x3 */ char menu_csr;
	/* 0x4 */ char setup_csr;
	/* 0x5 */ char costume_csr;
	/* 0x6 */ char mio_csr;
	/* 0x7 */ char mayu_csr;
	/* 0x8 */ char difficulty_csr;
	/* 0x9 */ char next_place;
	/* 0xc */ int stream_id;
} SETUP_MENU_CTRL;

typedef struct { // 0xc
	/* 0x0 */ char anim_step;
	/* 0x1 */ char anim_timer;
	/* 0x2 */ char csr_timer;
	/* 0x3 */ char menu_csr_timer;
	/* 0x4 */ char sel_anim_timer;
	/* 0x8 */ int fade_anim_timer;
} SETUP_MENU_DISP;

struct _COSTUME_TWIN_TBL { // 0x8
	/* 0x0 */ short int mMioMdl;
	/* 0x2 */ short int mMayuMdl;
	/* 0x4 */ short int mMioAcsMdl;
	/* 0x6 */ short int mMayuAcsMdl;
};

typedef _COSTUME_TWIN_TBL COSTUME_TWIN_TBL;

typedef struct { // 0x10
	/* 0x0 */ int loop_cnt;
	/* 0x4 */ unsigned char hit;
	/* 0x8 */ long unsigned int ghost_erase_tm;
} SIS_LOCAL_ALG;

struct SIS_DATA : /* 0x00 */ MAN_DATA { // 0x38
private:
	/* 0x30:0 */ unsigned int plyr_ready_sort : 1;
	/* 0x30:1 */ unsigned int ane_alg_req : 1;
	/* 0x34 */ int ane_alg_adrs;
	
public:
	SIS_DATA& operator=();
	SIS_DATA();
	SIS_DATA();
	/* vtable[1] */ virtual int Setup();
	/* vtable[2] */ virtual int IsReady();
	void Release();
	void* GetAlgAdrs();
	void Initialize();
private:
	void Init();
};

struct SIS_SEARCH { // 0x3
	/* 0x0 */ char start;
	/* 0x1 */ char end;
	/* 0x2 */ char flg;
};

struct SIS_MOTION { // 0x8
	/* 0x0 */ char mot_loop;
	/* 0x1 */ char mot_end;
	/* 0x2 */ char now_tbl;
	/* 0x4 */ SIS_ANI_TBL *sat;
};

struct fixed_array_base<SIS_ANI_TBL *,10,SIS_ANI_TBL **> { // 0x4
protected:
	/* 0x0 */ SIS_ANI_TBL **m_aData;
	
public:
	fixed_array_base<SIS_ANI_TBL *,10,SIS_ANI_TBL **>& operator=();
	fixed_array_base();
protected:
	fixed_array_base();
public:
	SIS_ANI_TBL*& operator[]();
	SIS_ANI_TBL*& operator[]();
	SIS_ANI_TBL** data();
	SIS_ANI_TBL** begin();
	SIS_ANI_TBL** end();
	void fill();
	size_t size();
	bool empty();
};

struct reference_fixed_array<SIS_ANI_TBL *,10> : /* 0x0 */ fixed_array_base<SIS_ANI_TBL *,10,SIS_ANI_TBL **> { // 0x4
};

struct SIS_AREA_CHG_SUB { // 0x20
	/* 0x00 */ int now;
	/* 0x10 */ float pos[4];
};

struct SIS_AREA_CHG { // 0x8
	/* 0x0 */ int old;
	/* 0x4 */ SIS_AREA_CHG_SUB *target;
};

typedef struct { // 0x8
	/* 0x0 */ char state;
	/* 0x4 */ int max_score;
} PLYR_SOUL_LIST;

struct fixed_array_base<PLYR_SOUL_LIST,176,PLYR_SOUL_LIST[176]> { // 0x580
protected:
	/* 0x000 */ PLYR_SOUL_LIST m_aData[176];
	
public:
	fixed_array_base<PLYR_SOUL_LIST,176,PLYR_SOUL_LIST[176]>& operator=();
	fixed_array_base();
protected:
	fixed_array_base();
public:
	PLYR_SOUL_LIST& operator[]();
	PLYR_SOUL_LIST& operator[]();
	PLYR_SOUL_LIST* data();
	PLYR_SOUL_LIST* begin();
	PLYR_SOUL_LIST* end();
	void fill();
	size_t size();
	bool empty();
};

struct fixed_array<PLYR_SOUL_LIST,176> : /* 0x000 */ fixed_array_base<PLYR_SOUL_LIST,176,PLYR_SOUL_LIST[176]> { // 0x580
};

struct CMIN_MAX<float> { // 0x8
	/* 0x0 */ float mMin;
	/* 0x4 */ float mMax;
	
	CMIN_MAX<float>& operator=();
	CMIN_MAX();
	CMIN_MAX();
	float GetWidth();
	float GetByProportion();
	float GetAverage();
};

struct CStackMem { // 0x8
private:
	/* 0x0 */ void *mp_Adrs;
	/* 0x4 */ void *mp_EndAdrs;
	
public:
	CStackMem& operator=();
	CStackMem();
	CStackMem();
	void* GetPush();
	void FreePop();
};

enum SUBTITLE_STATUS {
	SUBTITLE_STATUS_IDLE = 0,
	SUBTITLE_STATUS_PRELOAD = 1,
	SUBTITLE_STATUS_EXEC = 2
};

typedef struct { // 0x4
	/* 0x0 */ short int MsgId;
	/* 0x2 */ short int Frame;
} SUBTITLE_MSG_DATA;

typedef struct { // 0x4
	/* 0x0 */ short int StreamFile;
	/* 0x2 */ short int CharId;
	/* 0x4 */ SUBTITLE_MSG_DATA MsgData[0];
} SUBTITLE_DATA;

typedef struct { // 0x1c
	/* 0x00 */ SUBTITLE_DATA *pSubTitleData;
	/* 0x04 */ int StreamId;
	/* 0x08 */ int Status;
	/* 0x0c */ int Counter;
	/* 0x10 */ int MsgDataNo;
	/* 0x14 */ int ObjType;
	/* 0x18 */ int ObjId;
} SUBTITLE_CTRL;

typedef struct { // 0x5
	/* 0x0 */ char step;
	/* 0x1 */ char mc_step;
	/* 0x2 */ char conf_csr;
	/* 0x3 */ char exit_state;
	/* 0x4 */ char format_end_cnt;
} SYSTEM_DATA_SAVE_CTRL;

typedef struct { // 0x8
	/* 0x0 */ int msg_id;
	/* 0x4 */ char anim_step;
	/* 0x5 */ char anim_timer;
} SYSTEM_DATA_SAVE_DISP;

typedef struct { // 0x14
	/* 0x00 */ u_char title_step;
	/* 0x01 */ u_char wait_timer;
	/* 0x04 */ int stream_id;
	/* 0x08 */ int snd_id;
	/* 0x0c */ int snd_bank_id;
	/* 0x10 */ int iOriginSndBankLoadPriority;
} TITLE_WRK;

typedef struct { // 0x8
	/* 0x0 */ u_char rgb;
	/* 0x1 */ char start_timer;
	/* 0x4 */ int timer;
} TITLE_DISP_CTRL;

typedef struct { // 0x1
	/* 0x0 */ char csr;
} TITLE_MENU_CTRL;

typedef struct { // 0x6
	/* 0x0 */ short int move_movie_timer;
	/* 0x2 */ char title_movie_flg;
	/* 0x3 */ char play_demo_cnt;
	/* 0x4 */ char movie_lock_flg;
} TITLE_MOVIE_WRK;

typedef int wchar_t;

enum _ENCODE_TYPE {
	ENCODE_TYPE_NONE = 0,
	ENCODE_TYPE_SLIDE = 1,
	ENCODE_TYPE_FORCE_WORD = 65535
};

typedef _ENCODE_TYPE ENCODE_TYPE;

struct _ENCODE_DIV_SECTION { // 0x4
	/* 0x0 */ short int type;
	/* 0x2 */ short unsigned int size;
};

typedef _ENCODE_DIV_SECTION ENCODE_DIV_SECTION;

struct _CMP_HEADER { // 0x20
	/* 0x00 */ int size;
	/* 0x04 */ int ext;
	/* 0x08 */ int div_size;
	/* 0x0c */ int div_num;
	/* 0x10 */ int data_offset;
	/* 0x14 */ ENCODE_DIV_SECTION *div_p;
	/* 0x18 */ int mapping;
	/* 0x1c */ int cmp_size;
};

typedef _CMP_HEADER CMP_HEADER;

enum _FILE_LOAD_TYPE {
	FILE_LOAD_TYPE_EE = 0,
	FILE_LOAD_TYPE_SPU = 1,
	FILE_LOAD_TYPE_DECODE_EE = 2,
	FILE_LOAD_TYPE_DECODE_IOP = 3,
	FILE_LOAD_TYPE_FORCE_DWORD = -1
};

typedef _FILE_LOAD_TYPE FILE_LOAD_TYPE;

struct _LOAD_REQ_NEW { // 0x11c
	/* 0x000 */ FILE_LOAD_TYPE type;
	/* 0x004 */ int tmp_ee_adrs;
	/* 0x008 */ int adrs;
	/* 0x00c */ LOAD_DEF_STRUCT ld;
};

typedef _LOAD_REQ_NEW LOAD_REQ_NEW;

struct _FILE_LOAD_RET { // 0x8
	/* 0x0 */ int read_size;
	/* 0x4 */ int cancel_flg;
};

typedef _FILE_LOAD_RET FILE_LOAD_RET;

enum _CMP_EEIOP_DECODE_STATE {
	DECODE_STATE_HEADER_LOAD = 1025,
	DECODE_STATE_END = 1026
};

typedef _CMP_EEIOP_DECODE_STATE CMP_EEIOP_DECODE_STATE;

enum _LOAD_CANCEL_TYPE {
	LOAD_CANCEL_NONE = 0,
	LOAD_CANCEL_STORE = 1,
	LOAD_CANCEL_NORMAL = 2,
	LOAD_CANCEL_WAIT = 3
};

typedef _LOAD_CANCEL_TYPE LOAD_CANCEL_TYPE;

struct _FILE_LOAD_SYS { // 0x28
	/* 0x00 */ int yet_files;
	/* 0x04 */ LOAD_CANCEL_TYPE cancel_type;
	/* 0x08 */ void (*cancel_func)(/* parameters unknown */);
	/* 0x0c */ void *cancel_arg;
	/* 0x10 */ int master_thread_id;
	/* 0x14 */ int ring_buf_num;
	/* 0x18 */ int one_buf_size;
	/* 0x1c */ int file_load_wrk_max;
	/* 0x20 */ int load_th_priority;
	/* 0x24 */ int decode_th_priority;
};

typedef _FILE_LOAD_SYS FILE_LOAD_SYS;

struct _FILE_LOAD_WRK { // 0x28
	/* 0x00 */ int file_no;
	/* 0x04 */ int start_sector;
	/* 0x08 */ char *buffer;
	/* 0x0c */ void (*func)(/* parameters unknown */);
	/* 0x10 */ FILE_LOAD_TYPE type;
	/* 0x14 */ int priority;
	/* 0x18 */ void *arg;
	/* 0x1c */ int read_size;
	/* 0x20 */ int size;
	/* 0x24 */ short unsigned int temp_id;
	/* 0x26 */ short int id;
};

typedef _FILE_LOAD_WRK FILE_LOAD_WRK;

struct _SPU_BUF { // 0x18
	/* 0x00 */ int use;
	/* 0x04 */ int adrs;
	/* 0x08 */ int end_adrs;
	/* 0x0c */ int size;
	/* 0x10 */ int next_buf_len;
	/* 0x14 */ _SPU_BUF *next;
};

typedef _SPU_BUF SPU_BUF;

enum {
	FADE_STOP_NONE = 0,
	FADE_STOP_REQ = 1,
	FADE_STOP_END = 2,
	FADE_STOP_WAIT = 3
};

struct _SND_BUF_PLAYER { // 0x34
	/* 0x00 */ SOUND_BUF_PLAY p;
	/* 0x14 */ void *s3d;
	/* 0x18 */ short int play_id;
	/* 0x1a */ short int vol;
	/* 0x1c */ short int target_vol;
	/* 0x1e */ short int bvol;
	/* 0x20 */ short int spd;
	/* 0x22 */ short int pitch;
	/* 0x24 */ short int bpitch;
	/* 0x26 */ short int target_pitch;
	/* 0x28 */ short int pspd;
	/* 0x2a:0 */ unsigned char use : 1;
	/* 0x2a:1 */ unsigned char s3d_free : 1;
	/* 0x2a:2 */ unsigned char pause : 1;
	/* 0x2b */ char fadestop;
	/* 0x2c */ short int pan;
	/* 0x2e */ short int cnt;
	/* 0x30 */ int loopend_next;
};

typedef _SND_BUF_PLAYER SND_BUF_PLAYER;

struct _HIL_ONE_FORMAT { // 0x10
	/* 0x0 */ char irx_name[8];
	/* 0x8 */ int offset;
	/* 0xc */ int size;
};

typedef _HIL_ONE_FORMAT HIL_ONE_FORMAT;

struct _HIL_FORMAT { // 0x10
	/* 0x0 */ int num;
	/* 0x4 */ int dil_size;
	/* 0x8 */ int padding[2];
};

typedef _HIL_FORMAT HIL_FORMAT;

enum _SND_STREAM_ERR {
	SND_STREAM_OK = 0,
	SND_STREAM_ERR_IOPSEND = 1,
	SND_STREAM_ERR_HEADER = 2,
	SND_STREAM_ERR_NOT_USE = 3,
	SND_STREAM_ERR_IN_USE = 4,
	SND_STREAM_ERR_VOICE = 5,
	SND_STREAM_ERR_SPU_MEM = 6,
	SND_STREAM_ERR_WAIT_QUEUE = 7
};

typedef _SND_STREAM_ERR SND_STREAM_ERR;

enum _SND_STREAM_RET {
	SND_STREAM_RET_NOT_USE = 0,
	SND_STREAM_RET_PLAYING = 1,
	SND_STREAM_RET_PRELOADING = 0,
	SND_STREAM_RET_PRELOAD_OK = 1
};

typedef _SND_STREAM_RET SND_STREAM_RET;

struct _STREAM_QUEUE { // 0x60
	/* 0x00 */ sceVu0FVECTOR pos;
	/* 0x10 */ sceVu0FVECTOR vel;
	/* 0x20 */ sceVu0FVECTOR dir;
	/* 0x30 */ int status;
	/* 0x34 */ int priority;
	/* 0x38:0 */ unsigned int s3d : 1;
	/* 0x38:1 */ unsigned int effect : 1;
	/* 0x38:2 */ unsigned int loop : 1;
	/* 0x38:3 */ unsigned int use : 1;
	/* 0x38:4 */ unsigned int playing : 1;
	/* 0x38:5 */ unsigned int end : 1;
	/* 0x38:6 */ unsigned int resume : 1;
	/* 0x38:7 */ unsigned int pause : 1;
	/* 0x39:0 */ unsigned int reset_flg : 1;
	/* 0x39:1 */ unsigned int first_flg : 1;
	/* 0x39:2 */ unsigned int vel_flg : 1;
	/* 0x39:3 */ unsigned int dir_flg : 1;
	/* 0x3c */ int reset_in_time;
	/* 0x40 */ int in_time;
	/* 0x44 */ int vol;
	/* 0x48 */ int file_no;
	/* 0x4c */ int header_file_no;
	/* 0x50 */ int id;
	/* 0x54 */ int offset;
	/* 0x58 */ float play_spd;
};

typedef _STREAM_QUEUE STREAM_QUEUE;

struct _SND_BANK_FILE { // 0x10
	/* 0x0 */ short int m_Ready;
	/* 0x2 */ short int m_RefCnt;
	/* 0x4 */ int m_FileNo;
	/* 0x8 */ void *m_pAdrs;
	/* 0xc */ int m_Size;
};

typedef _SND_BANK_FILE SND_BANK_FILE;

struct _SND_BANK { // 0x14
	/* 0x00:0 */ unsigned int use : 1;
	/* 0x04 */ void *s3d;
	/* 0x08 */ SND_BANK_FILE *pSndBDFile;
	/* 0x0c */ SND_BANK_FILE *pSndHXDFile;
	/* 0x10 */ int id;
};

typedef _SND_BANK SND_BANK;

// warning: multiple differing types with the same name (size not equal)
struct exception { // 0x28
	/* 0x00 */ int type;
	/* 0x04 */ char *name;
	/* 0x08 */ double arg1;
	/* 0x10 */ double arg2;
	/* 0x18 */ double retval;
	/* 0x20 */ int err;
};

struct _SND_3D_WRK { // 0x30
	/* 0x00 */ sceVu0FVECTOR pos;
	/* 0x10 */ sceVu0FVECTOR velocity;
	/* 0x20 */ int status;
	/* 0x24 */ int voll;
	/* 0x28 */ int volr;
	/* 0x2c */ int pitch;
};

typedef _SND_3D_WRK SND_3D_WRK;

struct _SND_3D_LISTENER { // 0x50
	/* 0x00 */ sceVu0FVECTOR pos;
	/* 0x10 */ sceVu0FVECTOR velocity;
	/* 0x20 */ sceVu0FVECTOR dir;
	/* 0x30 */ sceVu0FVECTOR top;
	/* 0x40 */ int defer;
};

typedef _SND_3D_LISTENER SND_3D_LISTENER;

enum _SND_PCM_STREAM_ERR {
	SND_PCM_STREAM_OK = 0,
	SND_PCM_STREAM_ERR_IOPSEND = 1,
	SND_PCM_STREAM_ERR_HEADER = 2,
	SND_PCM_STREAM_ERR_NOT_USE = 3,
	SND_PCM_STREAM_ERR_IN_USE = 4,
	SND_PCM_STREAM_ERR_WAIT_QUEUE = 5
};

typedef _SND_PCM_STREAM_ERR SND_PCM_STREAM_ERR;

enum _SND_PCM_STREAM_RET {
	SND_PCM_STREAM_RET_NOT_USE = 0,
	SND_PCM_STREAM_RET_PLAYING = 1,
	SND_PCM_STREAM_RET_PRELOADING = 0,
	SND_PCM_STREAM_RET_PRELOAD_OK = 1
};

typedef _SND_PCM_STREAM_RET SND_PCM_STREAM_RET;

struct _SOUND_SYS { // 0x18
	/* 0x00 */ char mono;
	/* 0x04 */ int type_vol[5];
};

typedef _SOUND_SYS SOUND_SYS;

struct _SND_PCM_STREAM_WRK { // 0x128
	/* 0x000 */ PCM_STREAM_PLAY p;
	/* 0x004 */ PCM_STREAM_START s;
	/* 0x114 */ EEIOP_STREAM_STATUS status;
	/* 0x118:0 */ unsigned int pre_load_ok : 1;
	/* 0x118:1 */ unsigned int play_flg : 1;
	/* 0x118:2 */ unsigned int pause : 1;
	/* 0x11c */ int file_no;
	/* 0x120 */ short int vol;
	/* 0x122 */ short int target_vol;
	/* 0x124 */ short int spd;
};

typedef _SND_PCM_STREAM_WRK SND_PCM_STREAM_WRK;

enum _AUTO_BD_MODE {
	AUTO_BD_MODE_NO_USE = 0,
	AUTO_BD_MODE_MEM_WAIT = 1,
	AUTO_BD_MODE_LOAD_WAIT = 2,
	AUTO_BD_MODE_PLAYEND_WAIT = 3
};

typedef _AUTO_BD_MODE AUTO_BD_MODE;

struct _AUTO_BD_WRK { // 0x60
	/* 0x00 */ int mode;
	/* 0x04 */ int file_no;
	/* 0x08 */ int header_file_no;
	/* 0x0c */ int bank_no;
	/* 0x10 */ int play_id;
	/* 0x14 */ short int pitch;
	/* 0x16 */ short int vol;
	/* 0x20 */ sceVu0FVECTOR pos;
	/* 0x30 */ sceVu0FVECTOR vel;
	/* 0x40 */ sceVu0FVECTOR dir;
	/* 0x50 */ int in_time;
	/* 0x54:0 */ unsigned int s3d : 1;
	/* 0x54:1 */ unsigned int effect : 1;
	/* 0x54:2 */ unsigned int loop : 1;
	/* 0x54:3 */ unsigned int use : 1;
	/* 0x54:4 */ unsigned int start : 1;
	/* 0x54:5 */ unsigned int playing : 1;
	/* 0x54:6 */ unsigned int end : 1;
	/* 0x54:7 */ unsigned int resume : 1;
	/* 0x55:0 */ unsigned int pause : 1;
};

typedef _AUTO_BD_WRK AUTO_BD_WRK;

enum _FILE_STREAM_REQ_ENUM {
	REQ_STM_START = 0,
	REQ_STM_READ = 1,
	REQ_STM_STOP = 2
};

typedef _FILE_STREAM_REQ_ENUM FILE_STREAM_REQ_ENUM;

struct _strSTM_START { // 0x110
	/* 0x000 */ LOAD_DEF_STRUCT ld;
};

typedef _strSTM_START strSTM_START;

struct _strSTM_READ { // 0x8
	/* 0x0 */ int read_size;
	/* 0x4 */ void *ee_buf;
};

typedef _strSTM_READ strSTM_READ;

struct _SND_STREAM_WRK { // 0x1c0
	/* 0x000 */ STREAM_PLAY p;
	/* 0x01c */ STREAM_START s;
	/* 0x158 */ SOUND_INFO info[2];
	/* 0x190 */ EEIOP_STREAM_STATUS status;
	/* 0x194:0 */ unsigned int header_ready : 1;
	/* 0x194:1 */ unsigned int pre_load_ok : 1;
	/* 0x194:2 */ unsigned int play_flg : 1;
	/* 0x194:3 */ unsigned int fade_stop : 1;
	/* 0x194:4 */ unsigned int stop : 1;
	/* 0x198 */ int header_id;
	/* 0x19c */ void *s3dhndl;
	/* 0x1a0 */ void *header_buf;
	/* 0x1a4 */ short int vol;
	/* 0x1a6 */ short int target_vol;
	/* 0x1a8 */ short int spd;
	/* 0x1aa */ short int pitch;
	/* 0x1ac */ short int target_pitch;
	/* 0x1ae */ short int pspd;
	/* 0x1b0 */ short int abort_cnt;
	/* 0x1b2 */ char s3d[2];
	/* 0x1b4 */ int offset;
	/* 0x1b8 */ float play_spd;
	/* 0x1bc */ int file_no;
};

typedef _SND_STREAM_WRK SND_STREAM_WRK;

// warning: multiple differing types with the same name (descriptor not equal)
typedef struct { // 0x10
	/* 0x0:0 */ long unsigned int NLOOP : 15;
	/* 0x1:7 */ long unsigned int EOP : 1;
	/* 0x2:0 */ long unsigned int pad16 : 16;
	/* 0x4:0 */ long unsigned int id : 14;
	/* 0x5:6 */ long unsigned int PRE : 1;
	/* 0x5:7 */ long unsigned int PRIM : 11;
	/* 0x7:2 */ long unsigned int FLG : 2;
	/* 0x7:4 */ long unsigned int NREG : 4;
	/* 0x8:0 */ long unsigned int REGS0 : 4;
	/* 0x8:4 */ long unsigned int REGS1 : 4;
	/* 0x9:0 */ long unsigned int REGS2 : 4;
	/* 0x9:4 */ long unsigned int REGS3 : 4;
	/* 0xa:0 */ long unsigned int REGS4 : 4;
	/* 0xa:4 */ long unsigned int REGS5 : 4;
	/* 0xb:0 */ long unsigned int REGS6 : 4;
	/* 0xb:4 */ long unsigned int REGS7 : 4;
	/* 0xc:0 */ long unsigned int REGS8 : 4;
	/* 0xc:4 */ long unsigned int REGS9 : 4;
	/* 0xd:0 */ long unsigned int REGS10 : 4;
	/* 0xd:4 */ long unsigned int REGS11 : 4;
	/* 0xe:0 */ long unsigned int REGS12 : 4;
	/* 0xe:4 */ long unsigned int REGS13 : 4;
	/* 0xf:0 */ long unsigned int REGS14 : 4;
	/* 0xf:4 */ long unsigned int REGS15 : 4;
} sceGifTag;

// warning: multiple differing types with the same name (descriptor not equal)
typedef struct { // 0x80
	/* 0x00 */ sceGsFrame frame1;
	/* 0x08 */ u_long frame1addr;
	/* 0x10 */ sceGsZbuf zbuf1;
	/* 0x18 */ long int zbuf1addr;
	/* 0x20 */ sceGsXyoffset xyoffset1;
	/* 0x28 */ long int xyoffset1addr;
	/* 0x30 */ sceGsScissor scissor1;
	/* 0x38 */ long int scissor1addr;
	/* 0x40 */ sceGsPrmodecont prmodecont;
	/* 0x48 */ long int prmodecontaddr;
	/* 0x50 */ sceGsColclamp colclamp;
	/* 0x58 */ long int colclampaddr;
	/* 0x60 */ sceGsDthe dthe;
	/* 0x68 */ long int dtheaddr;
	/* 0x70 */ sceGsTest test1;
	/* 0x78 */ long int test1addr;
} sceGsDrawEnv1;

// warning: multiple differing types with the same name (descriptor not equal)
typedef struct { // 0x80
	/* 0x00 */ sceGsFrame frame2;
	/* 0x08 */ u_long frame2addr;
	/* 0x10 */ sceGsZbuf zbuf2;
	/* 0x18 */ long int zbuf2addr;
	/* 0x20 */ sceGsXyoffset xyoffset2;
	/* 0x28 */ long int xyoffset2addr;
	/* 0x30 */ sceGsScissor scissor2;
	/* 0x38 */ long int scissor2addr;
	/* 0x40 */ sceGsPrmodecont prmodecont;
	/* 0x48 */ long int prmodecontaddr;
	/* 0x50 */ sceGsColclamp colclamp;
	/* 0x58 */ long int colclampaddr;
	/* 0x60 */ sceGsDthe dthe;
	/* 0x68 */ long int dtheaddr;
	/* 0x70 */ sceGsTest test2;
	/* 0x78 */ long int test2addr;
} sceGsDrawEnv2;

// warning: multiple differing types with the same name (descriptor not equal)
typedef struct { // 0x60
	/* 0x00 */ sceGsTest testa;
	/* 0x08 */ long int testaaddr;
	/* 0x10 */ sceGsPrim prim;
	/* 0x18 */ long int primaddr;
	/* 0x20 */ sceGsRgbaq rgbaq;
	/* 0x28 */ long int rgbaqaddr;
	/* 0x30 */ sceGsXyz xyz2a;
	/* 0x38 */ long int xyz2aaddr;
	/* 0x40 */ sceGsXyz xyz2b;
	/* 0x48 */ long int xyz2baddr;
	/* 0x50 */ sceGsTest testb;
	/* 0x58 */ long int testbaddr;
} sceGsClear;

// warning: multiple differing types with the same name (descriptor not equal)
typedef struct { // 0x230
	/* 0x000 */ sceGsDispEnv disp[2];
	/* 0x050 */ sceGifTag giftag0;
	/* 0x060 */ sceGsDrawEnv1 draw0;
	/* 0x0e0 */ sceGsClear clear0;
	/* 0x140 */ sceGifTag giftag1;
	/* 0x150 */ sceGsDrawEnv1 draw1;
	/* 0x1d0 */ sceGsClear clear1;
} sceGsDBuff;

// warning: multiple differing types with the same name (descriptor not equal)
typedef struct { // 0x330
	/* 0x000 */ sceGsDispEnv disp[2];
	/* 0x050 */ sceGifTag giftag0;
	/* 0x060 */ sceGsDrawEnv1 draw01;
	/* 0x0e0 */ sceGsDrawEnv2 draw02;
	/* 0x160 */ sceGsClear clear0;
	/* 0x1c0 */ sceGifTag giftag1;
	/* 0x1d0 */ sceGsDrawEnv1 draw11;
	/* 0x250 */ sceGsDrawEnv2 draw12;
	/* 0x2d0 */ sceGsClear clear1;
} sceGsDBuffDc;

// warning: multiple differing types with the same name (descriptor not equal)
typedef struct { // 0x40
	/* 0x00 */ sceGsTexflush texflush;
	/* 0x08 */ long int texflushaddr;
	/* 0x10 */ sceGsTex1 tex11;
	/* 0x18 */ long int tex11addr;
	/* 0x20 */ sceGsTex0 tex01;
	/* 0x28 */ long int tex01addr;
	/* 0x30 */ sceGsClamp clamp1;
	/* 0x38 */ long int clamp1addr;
} sceGsTexEnv;

// warning: multiple differing types with the same name (descriptor not equal)
typedef struct { // 0x40
	/* 0x00 */ sceGsTexflush texflush;
	/* 0x08 */ long int texflushaddr;
	/* 0x10 */ sceGsTex1 tex12;
	/* 0x18 */ long int tex12addr;
	/* 0x20 */ sceGsTex0 tex02;
	/* 0x28 */ long int tex02addr;
	/* 0x30 */ sceGsClamp clamp2;
	/* 0x38 */ long int clamp2addr;
} sceGsTexEnv2;

// warning: multiple differing types with the same name (descriptor not equal)
typedef struct { // 0x40
	/* 0x00 */ sceGsAlpha alpha1;
	/* 0x08 */ long int alpha1addr;
	/* 0x10 */ sceGsPabe pabe;
	/* 0x18 */ long int pabeaddr;
	/* 0x20 */ sceGsTexa texa;
	/* 0x28 */ long int texaaddr;
	/* 0x30 */ sceGsFba fba1;
	/* 0x38 */ long int fba1addr;
} sceGsAlphaEnv;

// warning: multiple differing types with the same name (descriptor not equal)
typedef struct { // 0x40
	/* 0x00 */ sceGsAlpha alpha2;
	/* 0x08 */ long int alpha2addr;
	/* 0x10 */ sceGsPabe pabe;
	/* 0x18 */ long int pabeaddr;
	/* 0x20 */ sceGsTexa texa;
	/* 0x28 */ long int texaaddr;
	/* 0x30 */ sceGsFba fba2;
	/* 0x38 */ long int fba2addr;
} sceGsAlphaEnv2;

// warning: multiple differing types with the same name (descriptor not equal)
typedef struct { // 0x60
	/* 0x00 */ sceGifTag giftag0;
	/* 0x10 */ sceGsBitbltbuf bitbltbuf;
	/* 0x18 */ long int bitbltbufaddr;
	/* 0x20 */ sceGsTrxpos trxpos;
	/* 0x28 */ long int trxposaddr;
	/* 0x30 */ sceGsTrxreg trxreg;
	/* 0x38 */ long int trxregaddr;
	/* 0x40 */ sceGsTrxdir trxdir;
	/* 0x48 */ long int trxdiraddr;
	/* 0x50 */ sceGifTag giftag1;
} sceGsLoadImage;

// warning: multiple differing types with the same name (descriptor not equal)
typedef struct { // 0x70
	/* 0x00 */ u_int vifcode[4];
	/* 0x10 */ sceGifTag giftag;
	/* 0x20 */ sceGsBitbltbuf bitbltbuf;
	/* 0x28 */ long int bitbltbufaddr;
	/* 0x30 */ sceGsTrxpos trxpos;
	/* 0x38 */ long int trxposaddr;
	/* 0x40 */ sceGsTrxreg trxreg;
	/* 0x48 */ long int trxregaddr;
	/* 0x50 */ sceGsFinish finish;
	/* 0x58 */ long int finishaddr;
	/* 0x60 */ sceGsTrxdir trxdir;
	/* 0x68 */ long int trxdiraddr;
} sceGsStoreImage;

// warning: multiple differing types with the same name (descriptor not equal)
typedef struct { // 0x10
	/* 0x0 */ short int sceGsInterMode;
	/* 0x2 */ short int sceGsOutMode;
	/* 0x4 */ short int sceGsFFMode;
	/* 0x6 */ short int sceGsVersion;
	/* 0x8 */ int (*sceGsVSCfunc)(/* parameters unknown */);
	/* 0xc */ int sceGsVSCid;
} sceGsGParam;

struct _PLAY_PSS_FLAGS { // 0x4
	/* 0x0 */ short int sStopPhase;
	/* 0x2:0 */ short unsigned int bStarted : 1;
	/* 0x2:1 */ short unsigned int bPauseFlg : 1;
	/* 0x2:2 */ short unsigned int bNtsc2Pal : 1;
	/* 0x2:3 */ short unsigned int bSendImage : 1;
	/* 0x2:4 */ short unsigned int bErrorCallback : 1;
};

typedef _PLAY_PSS_FLAGS PLAY_PSS_FLAGS;
typedef __uint32_t ULong;

// warning: multiple differing types with the same name (type name not equal)
struct _Bigint { // 0x18
	/* 0x00 */ _Bigint *_next;
	/* 0x04 */ int _k;
	/* 0x08 */ int _maxwds;
	/* 0x0c */ int _sign;
	/* 0x10 */ int _wds;
	/* 0x14 */ ULong _x[1];
};

// warning: multiple differing types with the same name (size not equal)
struct _reent { // 0x2ec
	/* 0x000 */ int _errno;
	/* 0x004 */ __sFILE *_stdin;
	/* 0x008 */ __sFILE *_stdout;
	/* 0x00c */ __sFILE *_stderr;
	/* 0x010 */ int _inc;
	/* 0x014 */ char _emergency[25];
	/* 0x030 */ int _current_category;
	/* 0x034 */ char *_current_locale;
	/* 0x038 */ int __sdidinit;
	/* 0x03c */ void (*__cleanup)(/* parameters unknown */);
	/* 0x040 */ _Bigint *_result;
	/* 0x044 */ int _result_k;
	/* 0x048 */ _Bigint *_p5s;
	/* 0x04c */ _Bigint **_freelist;
	/* 0x050 */ int _cvtlen;
	/* 0x054 */ char *_cvtbuf;
	/* 0x058 */ union { // 0xf0
		/* 0x058 */ struct { // 0x4c
			/* 0x058 */ unsigned int _rand_next;
			/* 0x05c */ char *_strtok_last;
			/* 0x060 */ char _asctime_buf[26];
			/* 0x07c */ tm _localtime_buf;
			/* 0x0a0 */ int _gamma_signgam;
		} _reent;
		/* 0x058 */ struct { // 0xf0
			/* 0x058 */ unsigned char *_nextf[30];
			/* 0x0d0 */ unsigned int _nmalloc[30];
		} _unused;
	} _new;
	/* 0x148 */ _atexit *_atexit;
	/* 0x14c */ _atexit _atexit0;
	/* 0x1d4 */ void (**_sig_func)(/* parameters unknown */);
	/* 0x1d8 */ _glue __sglue;
	/* 0x1e4 */ __sFILE __sf[3];
};

struct rqueue { // 0x408
	/* 0x000 */ int top;
	/* 0x004 */ int btm;
	/* 0x008 */ struct { // 0x2
		/* 0x008 */ u_char type;
		/* 0x009 */ u_char id;
	} que[512];
};

// warning: multiple differing types with the same name (descriptor not equal)
typedef char *__gnuc_va_list;

enum {
	__no_type_class = -1,
	__void_type_class = 0,
	__integer_type_class = 1,
	__char_type_class = 2,
	__enumeral_type_class = 3,
	__boolean_type_class = 4,
	__pointer_type_class = 5,
	__reference_type_class = 6,
	__offset_type_class = 7,
	__real_type_class = 8,
	__complex_type_class = 9,
	__function_type_class = 10,
	__method_type_class = 11,
	__record_type_class = 12,
	__union_type_class = 13,
	__array_type_class = 14,
	__string_type_class = 15,
	__set_type_class = 16,
	__file_type_class = 17,
	__lang_type_class = 18
};

typedef struct { // 0x24
	/* 0x00 */ void *cpbuffer;
	/* 0x04 */ void *sbuffer;
	/* 0x08 */ void *obuffer;
	/* 0x0c */ sceSifCmdData *sysdata;
	/* 0x10 */ int ssize;
	/* 0x14 */ sceSifCmdData *userdata;
	/* 0x18 */ int usize;
	/* 0x1c */ unsigned int *sreg;
	/* 0x20 */ int evflag;
} sceSifCmdDataTable;

typedef struct { // 0x14
	/* 0x00 */ unsigned int request;
	/* 0x04 */ unsigned int opt0;
	/* 0x08 */ unsigned int opt1;
	/* 0x0c */ unsigned int opt2;
	/* 0x10 */ unsigned int opt3;
} _enddata;

typedef struct { // 0x4
	/* 0x0 */ unsigned int command;
} _binddata;

typedef struct { // 0xc
	/* 0x0 */ void *src;
	/* 0x4 */ void *dest;
	/* 0x8 */ int size;
} _rdata;

typedef struct { // 0x18
	/* 0x00 */ unsigned int fno;
	/* 0x04 */ int ssize;
	/* 0x08 */ void *receive;
	/* 0x0c */ int rsize;
	/* 0x10 */ int mode;
	/* 0x14 */ sceSifServeData *serve;
} _calldata;

typedef struct { // 0x8
	/* 0x0 */ unsigned int fno;
	/* 0x4 */ sceSifServeData *serve;
} _canceldata;

typedef struct { // 0x40
	/* 0x00 */ sceSifCmdHdr chdr;
	/* 0x10 */ unsigned int status;
	/* 0x14 */ void *paddr;
	/* 0x18 */ unsigned int pid;
	/* 0x1c */ sceSifRpcData *client;
	/* 0x20 */ union { // 0x20
		/* 0x20 */ unsigned int dummy[8];
		/* 0x20 */ _enddata end;
		/* 0x20 */ _binddata bind;
		/* 0x20 */ _calldata call;
		/* 0x20 */ _canceldata cancel;
		/* 0x20 */ _rdata rdata;
	} type;
} _sceRpcPacket;

typedef struct { // 0x2c
	/* 0x00 */ unsigned int idkey;
	/* 0x04 */ _sceRpcPacket *sys_buffer;
	/* 0x08 */ int ssize;
	/* 0x0c */ _sceRpcPacket *user_buffer;
	/* 0x10 */ int usize;
	/* 0x14 */ _sceRpcPacket *free_buffer;
	/* 0x18 */ int fsize;
	/* 0x1c */ _sceRpcPacket *free_buffer2;
	/* 0x20 */ int fsize2;
	/* 0x24 */ int findex;
	/* 0x28 */ sceSifQueueData *qdata;
} _sceRpcDataTable;

typedef struct { // 0x418
	/* 0x000 */ int ee_semid;
	/* 0x004 */ unsigned int ee_retadr;
	/* 0x008 */ unsigned int ee_retsiz;
	/* 0x00c */ int flag;
	/* 0x010 */ unsigned int mode;
	/* 0x014 */ char name[1024];
	/* 0x414 */ int ee_fds;
} _sceFsOpenData;

typedef struct { // 0x14
	/* 0x00 */ int ee_semid;
	/* 0x04 */ unsigned int ee_retadr;
	/* 0x08 */ unsigned int ee_retsiz;
	/* 0x0c */ int fd;
	/* 0x10 */ int ee_fds;
} _sceFsCloseData;

typedef struct { // 0x1c
	/* 0x00 */ int ee_semid;
	/* 0x04 */ unsigned int ee_retadr;
	/* 0x08 */ unsigned int ee_retsiz;
	/* 0x0c */ int fd;
	/* 0x10 */ int offset;
	/* 0x14 */ int how;
	/* 0x18 */ int ee_fds;
} _sceFsLseekData;

typedef struct { // 0x20
	/* 0x00 */ int ee_semid;
	/* 0x04 */ unsigned int ee_retadr;
	/* 0x08 */ unsigned int ee_retsiz;
	/* 0x0c */ int fd;
	/* 0x10 */ unsigned int addr;
	/* 0x14 */ int size;
	/* 0x18 */ unsigned int intr_addr;
	/* 0x1c */ int ee_fds;
} _sceFsReadData;

typedef struct { // 0x30
	/* 0x00 */ int ee_semid;
	/* 0x04 */ unsigned int ee_retadr;
	/* 0x08 */ unsigned int ee_retsiz;
	/* 0x0c */ int fd;
	/* 0x10 */ unsigned int addr;
	/* 0x14 */ int size;
	/* 0x18 */ int psize;
	/* 0x1c */ unsigned char pdata[16];
	/* 0x2c */ int ee_fds;
} _sceFsWriteData;

typedef struct { // 0x420
	/* 0x000 */ int ee_semid;
	/* 0x004 */ unsigned int ee_retadr;
	/* 0x008 */ unsigned int ee_retsiz;
	/* 0x00c */ int fd;
	/* 0x010 */ int cmd;
	/* 0x014 */ unsigned char arg[1024];
	/* 0x414 */ void *ret_argadr;
	/* 0x418 */ int ret_argsiz;
	/* 0x41c */ int arglen;
} _sceFsIoctlData;

typedef struct { // 0x40c
	/* 0x000 */ int ee_semid;
	/* 0x004 */ unsigned int ee_retadr;
	/* 0x008 */ unsigned int ee_retsiz;
	/* 0x00c */ char name[1024];
} _sceFsNameData;

typedef struct { // 0x10
	/* 0x0 */ int ee_semid;
	/* 0x4 */ unsigned int ee_retadr;
	/* 0x8 */ unsigned int ee_retsiz;
	/* 0xc */ void *addr;
} _sceFsAddrData;

typedef struct { // 0x410
	/* 0x000 */ int ee_semid;
	/* 0x004 */ unsigned int ee_retadr;
	/* 0x008 */ unsigned int ee_retsiz;
	/* 0x00c */ void *addr;
	/* 0x010 */ unsigned char name[1024];
} _sceFsGStatData;

typedef struct { // 0x450
	/* 0x000 */ int ee_semid;
	/* 0x004 */ unsigned int ee_retadr;
	/* 0x008 */ unsigned int ee_retsiz;
	/* 0x00c */ unsigned int cbit;
	/* 0x010 */ sce_stat stat;
	/* 0x050 */ unsigned char name[1024];
} _sceFsCStatData;

typedef struct { // 0xc10
	/* 0x000 */ int ee_semid;
	/* 0x004 */ unsigned int ee_retadr;
	/* 0x008 */ unsigned int ee_retsiz;
	/* 0x00c */ char path[1024];
	/* 0x40c */ char blkdevname[1024];
	/* 0x80c */ unsigned char arg[1024];
	/* 0xc0c */ int arglen;
} _sceFsFormatData;

typedef struct { // 0x80c
	/* 0x000 */ int ee_semid;
	/* 0x004 */ unsigned int ee_retadr;
	/* 0x008 */ unsigned int ee_retsiz;
	/* 0x00c */ char oldpath[1024];
	/* 0x40c */ char newpath[1024];
} _sceFsRenameData;

typedef struct { // 0x414
	/* 0x000 */ int ee_semid;
	/* 0x004 */ unsigned int ee_retadr;
	/* 0x008 */ unsigned int ee_retsiz;
	/* 0x00c */ int fd;
	/* 0x010 */ int flag;
	/* 0x014 */ char path[1024];
} _sceFsSyncData;

typedef struct { // 0x410
	/* 0x000 */ int ee_semid;
	/* 0x004 */ unsigned int ee_retadr;
	/* 0x008 */ unsigned int ee_retsiz;
	/* 0x00c */ int flag;
	/* 0x010 */ char name[1024];
} _sceFsMkdirData;

typedef struct { // 0xc14
	/* 0x000 */ int ee_semid;
	/* 0x004 */ unsigned int ee_retadr;
	/* 0x008 */ unsigned int ee_retsiz;
	/* 0x00c */ char fsdevname[1024];
	/* 0x40c */ char blkdevname[1024];
	/* 0x80c */ unsigned char arg[1024];
	/* 0xc0c */ int flag;
	/* 0xc10 */ int arglen;
} _sceFsMountData;

typedef struct { // 0x20
	/* 0x00 */ int ee_semid;
	/* 0x04 */ unsigned int ee_retadr;
	/* 0x08 */ unsigned int ee_retsiz;
	/* 0x0c */ int fd;
	/* 0x10 */ long int offset;
	/* 0x18 */ int how;
	/* 0x1c */ int ee_fds;
} _sceFsLseek64Data;

typedef struct { // 0x81c
	/* 0x000 */ int ee_semid;
	/* 0x004 */ unsigned int ee_retadr;
	/* 0x008 */ unsigned int ee_retsiz;
	/* 0x00c */ char path[1024];
	/* 0x40c */ unsigned char arg_buf[1024];
	/* 0x80c */ int cmd;
	/* 0x810 */ int arglen;
	/* 0x814 */ void *ret_argadr;
	/* 0x818 */ int ret_arglen;
} _sceFsDevctlData;

typedef struct { // 0x80c
	/* 0x000 */ int ee_semid;
	/* 0x004 */ unsigned int ee_retadr;
	/* 0x008 */ unsigned int ee_retsiz;
	/* 0x00c */ char existing[1024];
	/* 0x40c */ char new[1024];
} _sceFsSymlinkData;

typedef struct { // 0x414
	/* 0x000 */ int ee_semid;
	/* 0x004 */ unsigned int ee_retadr;
	/* 0x008 */ unsigned int ee_retsiz;
	/* 0x00c */ u_int bufsize;
	/* 0x010 */ u_int bufaddr;
	/* 0x014 */ char path[1024];
} _sceFsReadlinkData;

typedef struct { // 0x90
	/* 0x00 */ int psize;
	/* 0x04 */ int ssize;
	/* 0x08 */ unsigned int paddr;
	/* 0x0c */ unsigned int saddr;
	/* 0x10 */ unsigned char pdata[64];
	/* 0x50 */ unsigned char sdata[64];
} _sceFsReadIntrData;

typedef struct { // 0x20
	/* 0x00 */ int ee_semid;
	/* 0x04 */ unsigned int ee_retmod;
	/* 0x08 */ unsigned int ee_retadr;
	/* 0x0c */ unsigned int ee_retsiz;
	/* 0x10 */ int data_top[4];
} _sceFsIntrRcvData;

typedef struct { // 0x15c
	/* 0x000 */ int ee_semid;
	/* 0x004 */ unsigned int ee_retmod;
	/* 0x008 */ unsigned int ee_retadr;
	/* 0x00c */ unsigned int ee_retsiz;
	/* 0x010 */ int ee_ret;
	/* 0x014 */ unsigned int ee_dentadr;
	/* 0x018 */ sce_dirent dent;
} _sceFsIntrRcvDirData;

typedef struct { // 0x41c
	/* 0x000 */ int ee_semid;
	/* 0x004 */ unsigned int ee_retmod;
	/* 0x008 */ unsigned int ee_retadr;
	/* 0x00c */ unsigned int ee_retsiz;
	/* 0x010 */ int ee_ret;
	/* 0x014 */ unsigned int ee_readladr;
	/* 0x018 */ unsigned int ee_readlsiz;
	/* 0x01c */ char linkname[1024];
} _sceFsIntrRcvReadLData;

typedef struct { // 0x41c
	/* 0x000 */ int ee_semid;
	/* 0x004 */ unsigned int ee_retmod;
	/* 0x008 */ unsigned int ee_retadr;
	/* 0x00c */ unsigned int ee_retsiz;
	/* 0x010 */ int ee_ret;
	/* 0x014 */ unsigned int ret_argadr;
	/* 0x018 */ unsigned int ret_argsiz;
	/* 0x01c */ unsigned char arg[1024];
} _sceFsIntrRcvIoctlData;

typedef struct { // 0x41c
	/* 0x000 */ int ee_semid;
	/* 0x004 */ unsigned int ee_retmod;
	/* 0x008 */ unsigned int ee_retadr;
	/* 0x00c */ unsigned int ee_retsiz;
	/* 0x010 */ int ee_ret;
	/* 0x014 */ unsigned int ret_argadr;
	/* 0x018 */ unsigned int ret_argsiz;
	/* 0x01c */ unsigned char arg[1024];
} _sceFsIntrRcvDevctlData;

typedef struct { // 0x10
	/* 0x0 */ int i_fd;
	/* 0x4 */ unsigned int i_flag;
	/* 0x8 */ int i_errno;
	/* 0xc */ void *i_private;
} _sceFsIob;

typedef struct { // 0x8
	/* 0x0 */ void (*sceFsPoffCbfunc)(/* parameters unknown */);
	/* 0x4 */ void *sceFsPoffCbdata;
} _sceFsPoffData;

typedef struct { // 0x100
	/* 0x00 */ void *load_addr;
	/* 0x04 */ char name[252];
} _sceLoadIHData;

typedef struct { // 0x4
	/* 0x0 */ unsigned int heap_size;
} _sceAllocIHData;

typedef struct { // 0x4
	/* 0x0 */ void *heap_addr;
} _sceFreeIHData;

typedef struct { // 0xc
	/* 0x0 */ unsigned int heap_size;
	/* 0x4 */ int alloc_type;
	/* 0x8 */ void *addr;
} _sceAllocSMData;

typedef struct { // 0x200
	/* 0x000 */ unsigned int code0;
	/* 0x004 */ unsigned int code1;
	/* 0x008 */ char data0[252];
	/* 0x104 */ char data1[252];
} _sceLoadFileData;

struct TLBEntry { // 0x10
	/* 0x0 */ u_int pageMask;
	/* 0x4 */ u_int entryHi;
	/* 0x8 */ u_int entryLo0;
	/* 0xc */ u_int entryLo1;
};

struct TLB { // 0x1c
	/* 0x00 */ int numKernel;
	/* 0x04 */ int numFix;
	/* 0x08 */ int numUnfix;
	/* 0x0c */ int wired;
	/* 0x10 */ TLBEntry *kernelTLB;
	/* 0x14 */ TLBEntry *fixTLB;
	/* 0x18 */ TLBEntry *unfixTLB;
};

typedef struct { // 0x8
	/* 0x0 */ int num;
	/* 0x4 */ void *func;
} SysEntry;

typedef struct { // 0x4
	/* 0x0:0 */ u_int Spdif : 1;
	/* 0x0:1 */ u_int Aspct : 2;
	/* 0x0:3 */ u_int Video : 1;
	/* 0x0:4 */ u_int oldLang : 1;
	/* 0x0:5 */ u_int Compval : 8;
	/* 0x1:5 */ u_int pad0 : 3;
	/* 0x2:0 */ u_int Language : 5;
	/* 0x2:5 */ int TimeZone : 11;
} OsdConfigParam;

// warning: multiple differing types with the same name (size not equal)
typedef struct { // 0x4
	/* 0x0:0 */ unsigned int OPTION : 28;
	/* 0x3:4 */ unsigned int CODE : 4;
} tIPU_CMD_read;

// warning: multiple differing types with the same name (size not equal)
typedef struct { // 0x8
	/* 0x0 */ unsigned int DATA;
	/* 0x4:0 */ unsigned int p0 : 31;
	/* 0x7:7 */ unsigned int BUSY : 1;
} tIPU_CMD_write;

// warning: multiple differing types with the same name (size not equal)
typedef struct { // 0x4
	/* 0x0:0 */ unsigned int tag : 15;
	/* 0x1:7 */ unsigned int PRE : 1;
	/* 0x2:0 */ unsigned int PRIM : 10;
	/* 0x3:2 */ unsigned int FLG : 2;
	/* 0x3:4 */ unsigned int NREG : 4;
} tGIF_TAG1;

// warning: multiple differing types with the same name (fields size not equal)
typedef struct { // 0x4
	/* 0x0:0 */ unsigned int VPS : 2;
	/* 0x0:2 */ unsigned int VEW : 1;
	/* 0x0:3 */ unsigned int p0 : 1;
	/* 0x0:4 */ unsigned int p1 : 2;
	/* 0x0:6 */ unsigned int MRK : 1;
	/* 0x0:7 */ unsigned int p2 : 1;
	/* 0x1:0 */ unsigned int VSS : 1;
	/* 0x1:1 */ unsigned int VFS : 1;
	/* 0x1:2 */ unsigned int VIS : 1;
	/* 0x1:3 */ unsigned int INT : 1;
	/* 0x1:4 */ unsigned int ERO : 1;
	/* 0x1:5 */ unsigned int ER1 : 1;
	/* 0x1:6 */ unsigned int p3 : 10;
	/* 0x3:0 */ unsigned int FQC : 4;
	/* 0x3:4 */ unsigned int p4 : 1;
	/* 0x3:5 */ unsigned int p5 : 3;
} tVIF0_STAT;

// warning: multiple differing types with the same name (size not equal)
typedef struct { // 0x4
	/* 0x0:0 */ unsigned int num : 16;
	/* 0x2:0 */ unsigned int p0 : 16;
} tVIF1_NUM;

// warning: multiple differing types with the same name (fields size not equal)
typedef struct { // 0x4
	/* 0x0:0 */ unsigned int p0 : 4;
	/* 0x0:4 */ unsigned int ADDR : 27;
	/* 0x3:7 */ unsigned int SPR : 1;
} tD_MADR;

// warning: multiple differing types with the same name (fields size not equal)
typedef struct { // 0x4
	/* 0x0:0 */ unsigned int p0 : 4;
	/* 0x0:4 */ unsigned int ADDR : 27;
	/* 0x3:7 */ unsigned int SPR : 1;
} tD_TADR;

// warning: multiple differing types with the same name (fields size not equal)
typedef struct { // 0x4
	/* 0x0:0 */ unsigned int p0 : 4;
	/* 0x0:4 */ unsigned int ADDR : 27;
	/* 0x3:7 */ unsigned int SPR : 1;
} tD_ASR0;

// warning: multiple differing types with the same name (fields size not equal)
typedef struct { // 0x4
	/* 0x0:0 */ unsigned int p0 : 4;
	/* 0x0:4 */ unsigned int ADDR : 27;
	/* 0x3:7 */ unsigned int SPR : 1;
} tD_ASR1;

// warning: multiple differing types with the same name (fields size not equal)
typedef struct { // 0x4
	/* 0x0:0 */ unsigned int p0 : 4;
	/* 0x0:4 */ unsigned int ADDR : 10;
	/* 0x1:6 */ unsigned int p1 : 18;
} tD_SADR;

// warning: multiple differing types with the same name (fields size not equal)
typedef struct { // 0x4
	/* 0x0:0 */ unsigned int p0 : 4;
	/* 0x0:4 */ unsigned int RMSK : 27;
	/* 0x3:7 */ unsigned int p1 : 1;
} tD_RBSR;

// warning: multiple differing types with the same name (fields size not equal)
typedef struct { // 0x4
	/* 0x0:0 */ unsigned int p0 : 4;
	/* 0x0:4 */ unsigned int RMSK : 27;
	/* 0x3:7 */ unsigned int p1 : 1;
} tD_RBOR;

// warning: multiple differing types with the same name (fields size not equal)
typedef struct { // 0x4
	/* 0x0:0 */ unsigned int p0 : 4;
	/* 0x0:4 */ unsigned int ADDR : 27;
	/* 0x3:7 */ unsigned int p1 : 1;
} tD_STADR;

typedef struct { // 0x4
	/* 0x0:0 */ unsigned int GS : 1;
	/* 0x0:1 */ unsigned int SBUS : 1;
	/* 0x0:2 */ unsigned int VBON : 1;
	/* 0x0:3 */ unsigned int VBOF : 1;
	/* 0x0:4 */ unsigned int VIF0 : 1;
	/* 0x0:5 */ unsigned int VIF1 : 1;
	/* 0x0:6 */ unsigned int VU0 : 1;
	/* 0x0:7 */ unsigned int VU1 : 1;
	/* 0x1:0 */ unsigned int IPU : 1;
	/* 0x1:1 */ unsigned int TIM0 : 1;
	/* 0x1:2 */ unsigned int TIM1 : 1;
	/* 0x1:3 */ unsigned int TIM2 : 1;
	/* 0x1:4 */ unsigned int TIM3 : 1;
	/* 0x1:5 */ unsigned int SFIF0 : 1;
	/* 0x1:6 */ unsigned int VU0WD : 1;
	/* 0x1:7 */ unsigned int PGPU : 1;
	/* 0x2:0 */ unsigned int p0 : 16;
} tI_STAT;

typedef struct { // 0x4
	/* 0x0:0 */ unsigned int GS : 1;
	/* 0x0:1 */ unsigned int SBUS : 1;
	/* 0x0:2 */ unsigned int VBON : 1;
	/* 0x0:3 */ unsigned int VBOF : 1;
	/* 0x0:4 */ unsigned int VIF0 : 1;
	/* 0x0:5 */ unsigned int VIF1 : 1;
	/* 0x0:6 */ unsigned int VU0 : 1;
	/* 0x0:7 */ unsigned int VU1 : 1;
	/* 0x1:0 */ unsigned int IPU : 1;
	/* 0x1:1 */ unsigned int TIM0 : 1;
	/* 0x1:2 */ unsigned int TIM1 : 1;
	/* 0x1:3 */ unsigned int TIM2 : 1;
	/* 0x1:4 */ unsigned int TIM3 : 1;
	/* 0x1:5 */ unsigned int SFIF0 : 1;
	/* 0x1:6 */ unsigned int VU0WD : 1;
	/* 0x1:7 */ unsigned int PGPU : 1;
	/* 0x2:0 */ unsigned int p0 : 16;
} tI_MASK;

typedef struct { // 0x4
	/* 0x0:0 */ unsigned int UMOD : 2;
	/* 0x0:2 */ unsigned int USBL : 1;
	/* 0x0:3 */ unsigned int UPEN : 1;
	/* 0x0:4 */ unsigned int UEPS : 1;
	/* 0x0:5 */ unsigned int SCS : 2;
	/* 0x0:7 */ unsigned int p0 : 1;
	/* 0x1:0 */ unsigned int HSE : 1;
	/* 0x1:1 */ unsigned int p1 : 4;
	/* 0x1:5 */ unsigned int UODE : 1;
	/* 0x1:6 */ unsigned int TWUB : 1;
	/* 0x1:7 */ unsigned int RWUB : 1;
	/* 0x2:0 */ unsigned int p2 : 16;
} tS_LCR;

typedef struct { // 0x4
	/* 0x0:0 */ unsigned int DATA0 : 8;
	/* 0x1:0 */ unsigned int DATA1 : 8;
	/* 0x2:0 */ unsigned int DATA2 : 8;
	/* 0x3:0 */ unsigned int DATA3 : 8;
} tSB_MSCOM;

typedef struct { // 0x4
	/* 0x0:0 */ unsigned int DATA0 : 8;
	/* 0x1:0 */ unsigned int DATA1 : 8;
	/* 0x2:0 */ unsigned int DATA2 : 8;
	/* 0x3:0 */ unsigned int DATA3 : 8;
} tSB_SMCOM;

typedef struct { // 0x4
	/* 0x0 */ unsigned int FLAG;
} tSB_MSFLG;

typedef struct { // 0x4
	/* 0x0 */ unsigned int FLAG;
} tSB_SMFLG;

typedef struct { // 0x4
	/* 0x0:0 */ unsigned int MRQM : 1;
	/* 0x0:1 */ unsigned int MDE : 3;
	/* 0x0:4 */ unsigned int SRQM : 1;
	/* 0x0:5 */ unsigned int SDE : 3;
	/* 0x1:0 */ unsigned int MSOK : 1;
	/* 0x1:1 */ unsigned int STOP : 1;
	/* 0x1:2 */ unsigned int p0 : 1;
	/* 0x1:3 */ unsigned int DIR : 1;
	/* 0x1:4 */ unsigned int DMAS : 2;
	/* 0x1:6 */ unsigned int ACH : 2;
	/* 0x2:0 */ unsigned int DBSY : 1;
	/* 0x2:1 */ unsigned int LOCK : 1;
	/* 0x2:2 */ unsigned int SINT : 1;
	/* 0x2:3 */ unsigned int SRST : 1;
	/* 0x2:4 */ unsigned int MSBE : 4;
	/* 0x3:0 */ unsigned int SMBE : 4;
	/* 0x3:4 */ unsigned int FIFO : 4;
} tSB_STAT;

typedef struct { // 0x4
	/* 0x0:0 */ unsigned int MRQM : 1;
	/* 0x0:1 */ unsigned int p0 : 7;
	/* 0x1:0 */ unsigned int MSOK : 1;
	/* 0x1:1 */ unsigned int STOP : 1;
	/* 0x1:2 */ unsigned int p1 : 3;
	/* 0x1:5 */ unsigned int DMAS : 1;
	/* 0x1:6 */ unsigned int p2 : 3;
	/* 0x2:1 */ unsigned int LOCK : 1;
	/* 0x2:2 */ unsigned int SINT : 1;
	/* 0x2:3 */ unsigned int SRST : 1;
	/* 0x2:4 */ unsigned int p3 : 12;
} tSB_MCNT;

typedef struct { // 0x8
	/* 0x0:0 */ unsigned int IOER : 1;
	/* 0x0:1 */ unsigned int DSER : 1;
	/* 0x0:2 */ unsigned int DMER : 1;
	/* 0x0:3 */ unsigned int DMIS : 1;
	/* 0x0:4 */ unsigned int MDIR : 1;
	/* 0x0:5 */ unsigned int FDST : 1;
	/* 0x4:0 */ unsigned int p0 : 27;
} tSB_ERR;

typedef struct { // 0x4
	/* 0x0:0 */ unsigned int TBX : 4;
	/* 0x0:4 */ unsigned int TBY : 1;
	/* 0x0:5 */ unsigned int ABR : 2;
	/* 0x0:7 */ unsigned int TPF : 2;
	/* 0x1:1 */ unsigned int DTD : 1;
	/* 0x1:2 */ unsigned int DFE : 1;
	/* 0x1:3 */ unsigned int PBW : 1;
	/* 0x1:4 */ unsigned int PBC : 1;
	/* 0x1:5 */ unsigned int p0 : 3;
	/* 0x2:0 */ unsigned int HDS2 : 1;
	/* 0x2:1 */ unsigned int HDS : 2;
	/* 0x2:3 */ unsigned int VDS : 1;
	/* 0x2:4 */ unsigned int NPB : 1;
	/* 0x2:5 */ unsigned int LBS : 1;
	/* 0x2:6 */ unsigned int IRS : 1;
	/* 0x2:7 */ unsigned int DMSK : 1;
	/* 0x3:0 */ unsigned int IRQ : 1;
	/* 0x3:1 */ unsigned int DREQ : 1;
	/* 0x3:2 */ unsigned int IDLE : 1;
	/* 0x3:3 */ unsigned int RFFL : 1;
	/* 0x3:4 */ unsigned int WFEP : 1;
	/* 0x3:5 */ unsigned int DMD : 2;
	/* 0x3:7 */ unsigned int ODE : 1;
} tPG_STAT;

typedef struct { // 0x4
	/* 0x0:0 */ unsigned int PARAMETER : 4;
} tPG_PA0;

typedef struct { // 0x4
	/* 0x0:0 */ unsigned int PARAMETER : 4;
} tPG_PA1;

typedef struct { // 0x4
	/* 0x0:0 */ unsigned int PARAMETER : 4;
} tPG_PA2;

typedef struct { // 0x4
	/* 0x0:0 */ unsigned int PARAMETER : 4;
} tPG_PA3;

typedef struct { // 0x4
	/* 0x0:0 */ unsigned int DATA : 4;
} tPG_MSCOM;

typedef struct { // 0x4
	/* 0x0:0 */ unsigned int DATA : 4;
} tPG_SMCOM;

typedef struct { // 0x4
	/* 0x0:0 */ unsigned int IDMA : 1;
	/* 0x0:1 */ unsigned int IFIF : 1;
	/* 0x0:2 */ unsigned int ICOM : 1;
	/* 0x0:3 */ unsigned int DRON : 1;
	/* 0x0:4 */ unsigned int DMOD : 2;
	/* 0x0:6 */ unsigned int MSE : 1;
	/* 0x0:7 */ unsigned int SME : 1;
	/* 0x1:0 */ unsigned int VGF : 5;
	/* 0x1:5 */ unsigned int p0 : 3;
	/* 0x2:0 */ unsigned int VSF : 3;
	/* 0x2:3 */ unsigned int p1 : 1;
	/* 0x2:4 */ unsigned int PMOD : 1;
	/* 0x2:5 */ unsigned int p2 : 3;
	/* 0x3:0 */ unsigned int IDMAF : 1;
	/* 0x3:1 */ unsigned int IFIFF : 1;
	/* 0x3:2 */ unsigned int ICOMF : 1;
	/* 0x3:3 */ unsigned int p3 : 5;
} tPG_IF;

typedef struct { // 0x4
	/* 0x0:0 */ unsigned int EN : 1;
	/* 0x0:1 */ unsigned int p0 : 31;
} tPM_CNT;

typedef struct { // 0x4
	/* 0x0:0 */ unsigned int TMOUT : 16;
	/* 0x2:0 */ unsigned int p0 : 15;
	/* 0x3:7 */ unsigned int EN : 1;
} tVU0WD_CTRL;

// warning: multiple differing types with the same name (fields size not equal)
typedef struct { // 0x8
	/* 0x0:0 */ unsigned int EN1 : 1;
	/* 0x0:1 */ unsigned int EN2 : 1;
	/* 0x0:2 */ unsigned int CRTMD : 3;
	/* 0x0:5 */ unsigned int MMOD : 1;
	/* 0x0:6 */ unsigned int AMOD : 1;
	/* 0x0:7 */ unsigned int SLBG : 1;
	/* 0x1:0 */ unsigned int ALP : 8;
	/* 0x2:0 */ unsigned int NFLD : 1;
	/* 0x2:1 */ unsigned int p0 : 15;
	/* 0x4:0 */ unsigned int EXVWINS : 10;
	/* 0x5:2 */ unsigned int EXVWINE : 10;
	/* 0x6:4 */ unsigned int EXSYNCMD : 1;
	/* 0x6:5 */ unsigned int p1 : 11;
} tGS_PMODE;

typedef struct { // 0x8
	/* 0x0:0 */ unsigned int RC : 3;
	/* 0x0:3 */ unsigned int LC : 7;
	/* 0x1:2 */ unsigned int T1248 : 2;
	/* 0x1:4 */ unsigned int SCLK : 1;
	/* 0x1:5 */ unsigned int CMOD : 2;
	/* 0x1:7 */ unsigned int EX : 1;
	/* 0x2:0 */ unsigned int PRST : 1;
	/* 0x2:1 */ unsigned int SINT : 1;
	/* 0x2:2 */ unsigned int XPCK : 1;
	/* 0x2:3 */ unsigned int PCK2 : 2;
	/* 0x2:5 */ unsigned int SPML : 4;
	/* 0x3:1 */ unsigned int GCONT : 1;
	/* 0x3:2 */ unsigned int PHS : 1;
	/* 0x3:3 */ unsigned int PVS : 1;
	/* 0x3:4 */ unsigned int PEHS : 1;
	/* 0x3:5 */ unsigned int PEVS : 1;
	/* 0x3:6 */ unsigned int CLKSEL : 2;
	/* 0x4:0 */ unsigned int NVCK : 1;
	/* 0x4:1 */ unsigned int SLCK2 : 1;
	/* 0x4:2 */ unsigned int VCKSEL : 2;
	/* 0x4:4 */ unsigned int VHP : 1;
	/* 0x4:5 */ unsigned int COFF : 1;
	/* 0x4:6 */ unsigned int p0 : 26;
} tGS_SMODE1;

// warning: multiple differing types with the same name (size not equal)
typedef struct { // 0x4
	/* 0x0:0 */ unsigned int INT : 1;
	/* 0x0:1 */ unsigned int FFMD : 1;
	/* 0x0:2 */ unsigned int DPMS : 2;
	/* 0x0:4 */ unsigned int p0 : 28;
} tGS_SMODE2;

typedef struct { // 0x4
	/* 0x0:0 */ unsigned int RFSH : 6;
	/* 0x0:6 */ unsigned int p0 : 26;
} tGS_SRFSH;

typedef struct { // 0x8
	/* 0x0:0 */ unsigned int HFP : 11;
	/* 0x1:3 */ unsigned int HBP : 11;
	/* 0x2:6 */ unsigned int HSEQ : 10;
	/* 0x4:0 */ unsigned int HSVS : 11;
	/* 0x5:3 */ unsigned int HS : 10;
	/* 0x6:5 */ unsigned int p0 : 11;
} tGS_SYNCH1;

typedef struct { // 0xc
	/* 0x0:0 */ unsigned int HF : 11;
	/* 0x1:3 */ unsigned int HB : 11;
	/* 0x4:0 */ unsigned int p0 : 20;
	/* 0x8 */ unsigned int p1;
} tGS_SYNCH2;

typedef struct { // 0x8
	/* 0x0:0 */ unsigned int VFP : 10;
	/* 0x1:2 */ unsigned int VFPE : 10;
	/* 0x2:4 */ unsigned int VBP : 10;
	/* 0x3:6 */ unsigned int p0 : 2;
	/* 0x4:0 */ unsigned int VBPE : 10;
	/* 0x5:2 */ unsigned int VDP : 11;
	/* 0x6:5 */ unsigned int VS : 10;
	/* 0x7:7 */ unsigned int p1 : 1;
} tGS_SYNCV;

// warning: multiple differing types with the same name (fields size not equal)
typedef struct { // 0x8
	/* 0x0:0 */ unsigned int EN1 : 1;
	/* 0x0:1 */ unsigned int EN2 : 1;
	/* 0x0:2 */ unsigned int CRTMD : 3;
	/* 0x0:5 */ unsigned int MMOD : 1;
	/* 0x0:6 */ unsigned int AMOD : 1;
	/* 0x0:7 */ unsigned int SLBG : 1;
	/* 0x1:0 */ unsigned int ALP : 8;
	/* 0x2:0 */ unsigned int NFLD : 1;
	/* 0x2:1 */ unsigned int p0 : 15;
	/* 0x4:0 */ unsigned int EXVWINS : 10;
	/* 0x5:2 */ unsigned int EXVWINE : 10;
	/* 0x6:4 */ unsigned int EXSYNCMD : 1;
	/* 0x6:5 */ unsigned int p1 : 11;
} tGS_EXTBUF;

// warning: multiple differing types with the same name (descriptor not equal)
typedef struct { // 0x8
	/* 0x0:0 */ unsigned int R : 8;
	/* 0x1:0 */ unsigned int G : 8;
	/* 0x2:0 */ unsigned int B : 8;
	/* 0x3 */ unsigned char p0;
	/* 0x4 */ unsigned int p1;
} tGS_BGCOLOR;

// warning: multiple differing types with the same name (fields size not equal)
typedef struct { // 0x8
	/* 0x0:0 */ unsigned int SIGNAL : 1;
	/* 0x0:1 */ unsigned int FINISH : 1;
	/* 0x0:2 */ unsigned int HSINT : 1;
	/* 0x0:3 */ unsigned int VSINT : 1;
	/* 0x0:4 */ unsigned int EDWINT : 1;
	/* 0x0:5 */ unsigned int EXHSINT : 1;
	/* 0x0:6 */ unsigned int EXVSINT : 1;
	/* 0x0:7 */ unsigned int p0 : 1;
	/* 0x1:0 */ unsigned int FLUSH : 1;
	/* 0x1:1 */ unsigned int RESET : 1;
	/* 0x1:2 */ unsigned int EXVERR : 1;
	/* 0x1:3 */ unsigned int EXFIELD : 1;
	/* 0x1:4 */ unsigned int NFIELD : 1;
	/* 0x1:5 */ unsigned int FIELD : 1;
	/* 0x1:6 */ unsigned int FIFO : 2;
	/* 0x2:0 */ unsigned int REV : 8;
	/* 0x3:0 */ unsigned int ID : 8;
	/* 0x4 */ unsigned int p1;
} tGS_CSR;

// warning: multiple differing types with the same name (fields size not equal)
typedef struct { // 0x8
	/* 0x0:0 */ unsigned int p0 : 8;
	/* 0x1:0 */ unsigned int SIGMSK : 1;
	/* 0x1:1 */ unsigned int FINISHMSK : 1;
	/* 0x1:2 */ unsigned int HSMSK : 1;
	/* 0x1:3 */ unsigned int VSMSK : 1;
	/* 0x1:4 */ unsigned int EDWMSK : 1;
	/* 0x1:5 */ unsigned int EXHSMSK : 1;
	/* 0x1:6 */ unsigned int EXVSMSK : 1;
	/* 0x1:7 */ unsigned int p1 : 17;
	/* 0x4 */ unsigned int p2;
} tGS_IMR;

typedef struct { // 0x8
	/* 0x0 */ unsigned int ID;
	/* 0x4 */ unsigned int p0;
} tGS_SIGID;

typedef struct { // 0x8
	/* 0x0 */ unsigned int ID;
	/* 0x4 */ unsigned int p0;
} tGS_LABELID;

typedef struct { // 0x8
	/* 0x0:0 */ unsigned int AFMODE : 1;
	/* 0x0:1 */ unsigned int p0 : 31;
	/* 0x4 */ unsigned int p1;
} tGS_SYSCNT;

typedef struct { // 0x8
	/* 0x0:0 */ unsigned int DISPLAY : 2;
	/* 0x0:2 */ unsigned int p0 : 30;
	/* 0x4:0 */ unsigned int MAGV : 16;
	/* 0x6:0 */ unsigned int MAGH : 16;
} tGS_SIMU_DISPLAY;

typedef struct { // 0x40
	/* 0x00 */ COUNTER *pNext;
	/* 0x04 */ COUNTER *pPrev;
	/* 0x08 */ u_int uiKey;
	/* 0x0c */ u_int uiMode;
	/* 0x10 */ u_long ulBaseTime;
	/* 0x18 */ u_long ulBaseCount;
	/* 0x20 */ u_long ulSchedule;
	/* 0x28 */ u_long (*cbHandler)(/* parameters unknown */);
	/* 0x2c */ void *gp_value;
	/* 0x30 */ void *arg;
	/* 0x34 */ u_int pad[3];
} COUNTER;

typedef unsigned int wint_t;

typedef struct { // 0x10
	/* 0x0 */ ALARM *pNext;
	/* 0x4 */ int counterid;
	/* 0x8 */ u_long (*cbHandler)(/* parameters unknown */);
	/* 0xc */ void *arg;
} ALARM;

struct stat { // 0x68
	/* 0x00 */ dev_t st_dev;
	/* 0x02 */ ino_t st_ino;
	/* 0x04 */ mode_t st_mode;
	/* 0x08 */ nlink_t st_nlink;
	/* 0x0a */ uid_t st_uid;
	/* 0x0c */ gid_t st_gid;
	/* 0x0e */ dev_t st_rdev;
	/* 0x10 */ off_t st_size;
	/* 0x18 */ time_t st_atime;
	/* 0x20 */ long int st_spare1;
	/* 0x28 */ time_t st_mtime;
	/* 0x30 */ long int st_spare2;
	/* 0x38 */ time_t st_ctime;
	/* 0x40 */ long int st_spare3;
	/* 0x48 */ long int st_blksize;
	/* 0x50 */ long int st_blocks;
	/* 0x58 */ long int st_spare4[2];
};

typedef struct { // 0x8
	/* 0x0 */ short unsigned int len;
	/* 0x2 */ short unsigned int rsvd;
	/* 0x4 */ short unsigned int proto;
	/* 0x6 */ unsigned char src;
	/* 0x7 */ unsigned char dest;
} sceDeci2Hdr;

typedef struct { // 0x4
	/* 0x0 */ u_char type;
	/* 0x1 */ u_char code;
	/* 0x2 */ u_short unused;
} sceDcmpHdr;

typedef struct { // 0x110
	/* 0x000 */ int num;
	/* 0x004 */ int count;
	/* 0x008 */ void *rp;
	/* 0x00c */ void *wp;
	/* 0x010 */ char buf[256];
} CHQUEUE;

typedef struct { // 0x1c
	/* 0x00 */ int s;
	/* 0x04 */ u_int wlen;
	/* 0x08 */ u_int rlen;
	/* 0x0c */ u_int isSending;
	/* 0x10 */ char *wptr;
	/* 0x14 */ char *rptr;
	/* 0x18 */ CHQUEUE *rq;
} TTYINFO;

typedef union { // 0x8
	/* 0x0 */ double value;
	/* 0x0 */ struct { // 0x8
		/* 0x0 */ __uint32_t lsw;
		/* 0x4 */ __uint32_t msw;
	} parts;
} ieee_double_shape_type;

typedef union { // 0x4
	/* 0x0 */ float value;
	/* 0x0 */ __uint32_t word;
} ieee_float_shape_type;

enum cmp_type {
	CMP_SI = 0,
	CMP_DI = 1,
	CMP_SF = 2,
	CMP_DF = 3,
	CMP_MAX = 4
};

enum delay_type {
	DELAY_NONE = 0,
	DELAY_LOAD = 1,
	DELAY_HILO = 2,
	DELAY_HILO1 = 3,
	DELAY_FCMP = 4
};

enum processor_type {
	PROCESSOR_DEFAULT = 0,
	PROCESSOR_R3000 = 1,
	PROCESSOR_R3900 = 2,
	PROCESSOR_R6000 = 3,
	PROCESSOR_R4000 = 4,
	PROCESSOR_R4100 = 5,
	PROCESSOR_R4300 = 6,
	PROCESSOR_R4600 = 7,
	PROCESSOR_R4650 = 8,
	PROCESSOR_R5000 = 9,
	PROCESSOR_R5400 = 10,
	PROCESSOR_R5900 = 11,
	PROCESSOR_R8000 = 12
};

enum mips_abicalls_type {
	MIPS_ABICALLS_NO = 0,
	MIPS_ABICALLS_YES = 1
};

enum block_move_type {
	BLOCK_MOVE_NORMAL = 0,
	BLOCK_MOVE_NOT_LAST = 1,
	BLOCK_MOVE_LAST = 2
};

enum reg_class {
	NO_REGS = 0,
	ARGP_REGS = 1,
	M16_NA_REGS = 2,
	M16_REGS = 3,
	T_REG = 4,
	M16_T_REGS = 5,
	GR_REGS = 6,
	FP_REGS = 7,
	HI_REG = 8,
	LO_REG = 9,
	HILO_REG = 10,
	MD_REGS = 11,
	AP_AND_GR_REGS = 12,
	HI_AND_GR_REGS = 13,
	LO_AND_GR_REGS = 14,
	HILO_AND_GR_REGS = 15,
	HI1_REG = 16,
	LO1_REG = 17,
	HILO1_REG = 18,
	MD1_REGS = 19,
	HI1_AND_GR_REGS = 20,
	LO1_AND_GR_REGS = 21,
	HILO1_AND_GR_REGS = 22,
	HI01_REG = 23,
	LO01_REG = 24,
	HILO01_REG = 25,
	MD01_REGS = 26,
	HI01_AND_GR_REGS = 27,
	LO01_AND_GR_REGS = 28,
	HILO01_AND_GR_REGS = 29,
	ST_REGS = 30,
	ALL_REGS = 31,
	LIM_REG_CLASSES = 32
};

enum frameinfo_state {
	fi_blank = 0,
	fi_partially_initialized = 1,
	fi_modes_known = 2,
	fi_initialized = 3
};

struct mips_frame_info { // 0x80
	/* 0x00 */ long int total_size;
	/* 0x08 */ long int var_size;
	/* 0x10 */ long int args_size;
	/* 0x18 */ long int extra_size;
	/* 0x20 */ int gp_reg_size;
	/* 0x24 */ int fp_reg_size;
	/* 0x28 */ int gp_quad_size;
	/* 0x30 */ long int mask;
	/* 0x38 */ long int fmask;
	/* 0x40 */ long int gp_save_offset;
	/* 0x48 */ long int fp_save_offset;
	/* 0x50 */ long int gp_sp_offset;
	/* 0x58 */ long int rap_offset;
	/* 0x60 */ long int fp_sp_offset;
	/* 0x68 */ frameinfo_state state;
	/* 0x6c */ int num_gp;
	/* 0x70 */ int num_fp;
	/* 0x78 */ long int insns_len;
};

struct mips_args { // 0x3c
	/* 0x00 */ int gp_reg_found;
	/* 0x04 */ unsigned int arg_number;
	/* 0x08 */ unsigned int arg_words;
	/* 0x0c */ unsigned int fp_arg_words;
	/* 0x10 */ int last_arg_fp;
	/* 0x14 */ int fp_code;
	/* 0x18 */ unsigned int num_adjusts;
	/* 0x1c */ rtx_def *adjust[8];
};

typedef mips_args CUMULATIVE_ARGS;

enum mips_builtins {
	MIPS5900_BUILTIN_PABSH = 0,
	MIPS5900_BUILTIN_PABSW = 1,
	MIPS5900_BUILTIN_PADDB = 2,
	MIPS5900_BUILTIN_PADDH = 3,
	MIPS5900_BUILTIN_PADDSB = 4,
	MIPS5900_BUILTIN_PADDSH = 5,
	MIPS5900_BUILTIN_PADDSW = 6,
	MIPS5900_BUILTIN_PADDUB = 7,
	MIPS5900_BUILTIN_PADDUH = 8,
	MIPS5900_BUILTIN_PADDUW = 9,
	MIPS5900_BUILTIN_PADDW = 10,
	MIPS5900_BUILTIN_PADSBH = 11,
	MIPS5900_BUILTIN_PAND = 12,
	MIPS5900_BUILTIN_PCEQB = 13,
	MIPS5900_BUILTIN_PCEQH = 14,
	MIPS5900_BUILTIN_PCEQW = 15,
	MIPS5900_BUILTIN_PCGTB = 16,
	MIPS5900_BUILTIN_PCGTH = 17,
	MIPS5900_BUILTIN_PCGTW = 18,
	MIPS5900_BUILTIN_PCPYH = 19,
	MIPS5900_BUILTIN_PCPYLD = 20,
	MIPS5900_BUILTIN_PCPYUD = 21,
	MIPS5900_BUILTIN_PDIVBW = 22,
	MIPS5900_BUILTIN_PDIVUW = 23,
	MIPS5900_BUILTIN_PDIVW = 24,
	MIPS5900_BUILTIN_PHMADH = 25,
	MIPS5900_BUILTIN_PHMSBH = 26,
	MIPS5900_BUILTIN_PMADDH = 27,
	MIPS5900_BUILTIN_PMADDUW = 28,
	MIPS5900_BUILTIN_PMADDW = 29,
	MIPS5900_BUILTIN_PMSUBH = 30,
	MIPS5900_BUILTIN_PMSUBW = 31,
	MIPS5900_BUILTIN_PMTHI = 32,
	MIPS5900_BUILTIN_PMTLO = 33,
	MIPS5900_BUILTIN_PMTHL_LW = 34,
	MIPS5900_BUILTIN_PMULTH = 35,
	MIPS5900_BUILTIN_PMULTUW = 36,
	MIPS5900_BUILTIN_PMULTW = 37,
	MIPS5900_BUILTIN_PEXCH = 38,
	MIPS5900_BUILTIN_PEXCW = 39,
	MIPS5900_BUILTIN_PEXEH = 40,
	MIPS5900_BUILTIN_PEXEW = 41,
	MIPS5900_BUILTIN_PEXT5 = 42,
	MIPS5900_BUILTIN_PEXTLB = 43,
	MIPS5900_BUILTIN_PEXTLH = 44,
	MIPS5900_BUILTIN_PEXTLW = 45,
	MIPS5900_BUILTIN_PEXTUB = 46,
	MIPS5900_BUILTIN_PEXTUH = 47,
	MIPS5900_BUILTIN_PEXTUW = 48,
	MIPS5900_BUILTIN_PINTH = 49,
	MIPS5900_BUILTIN_PINTEH = 50,
	MIPS5900_BUILTIN_PLZCW = 51,
	MIPS5900_BUILTIN_PMAXH = 52,
	MIPS5900_BUILTIN_PMAXW = 53,
	MIPS5900_BUILTIN_PMINH = 54,
	MIPS5900_BUILTIN_PMINW = 55,
	MIPS5900_BUILTIN_PNOR = 56,
	MIPS5900_BUILTIN_POR = 57,
	MIPS5900_BUILTIN_PPAC5 = 58,
	MIPS5900_BUILTIN_PPACB = 59,
	MIPS5900_BUILTIN_PPACH = 60,
	MIPS5900_BUILTIN_PPACW = 61,
	MIPS5900_BUILTIN_PREVH = 62,
	MIPS5900_BUILTIN_PROT3W = 63,
	MIPS5900_BUILTIN_PSLLH = 64,
	MIPS5900_BUILTIN_PSLLVW = 65,
	MIPS5900_BUILTIN_PSLLW = 66,
	MIPS5900_BUILTIN_PSRAH = 67,
	MIPS5900_BUILTIN_PSRAVW = 68,
	MIPS5900_BUILTIN_PSRAW = 69,
	MIPS5900_BUILTIN_PSRLH = 70,
	MIPS5900_BUILTIN_PSRLVW = 71,
	MIPS5900_BUILTIN_PSRLW = 72,
	MIPS5900_BUILTIN_PSUBB = 73,
	MIPS5900_BUILTIN_PSUBH = 74,
	MIPS5900_BUILTIN_PSUBSB = 75,
	MIPS5900_BUILTIN_PSUBSH = 76,
	MIPS5900_BUILTIN_PSUBSW = 77,
	MIPS5900_BUILTIN_PSUBUB = 78,
	MIPS5900_BUILTIN_PSUBUH = 79,
	MIPS5900_BUILTIN_PSUBUW = 80,
	MIPS5900_BUILTIN_PSUBW = 81,
	MIPS5900_BUILTIN_PXOR = 82,
	MIPS5900_BUILTIN_MFSA = 83,
	MIPS5900_BUILTIN_MTSA = 84,
	MIPS5900_BUILTIN_MTSAB = 85,
	MIPS5900_BUILTIN_MTSAH = 86,
	MIPS5900_BUILTIN_QFSRV = 87,
	MIPS5900_BUILTIN_PMFHI = 88,
	MIPS5900_BUILTIN_PMFLO = 89,
	MIPS5900_BUILTIN_PMFHL_LW = 90,
	MIPS5900_BUILTIN_PMFHL_UW = 91,
	MIPS5900_BUILTIN_PMFHL_SLW = 92,
	MIPS5900_BUILTIN_PMFHL_LH = 93,
	MIPS5900_BUILTIN_PMFHL_SH = 94,
	MIPS_BUILTIN_MAX = 95
};

enum machine_mode {
	VOIDmode = 0,
	BImode = 1,
	QImode = 2,
	HImode = 3,
	SImode = 4,
	DImode = 5,
	TImode = 6,
	OImode = 7,
	PQImode = 8,
	PHImode = 9,
	PSImode = 10,
	PDImode = 11,
	QFmode = 12,
	HFmode = 13,
	TQFmode = 14,
	SFmode = 15,
	DFmode = 16,
	XFmode = 17,
	TFmode = 18,
	QCmode = 19,
	HCmode = 20,
	SCmode = 21,
	DCmode = 22,
	XCmode = 23,
	TCmode = 24,
	CQImode = 25,
	CHImode = 26,
	CSImode = 27,
	CDImode = 28,
	CTImode = 29,
	COImode = 30,
	V2QImode = 31,
	V2HImode = 32,
	V2SImode = 33,
	V2DImode = 34,
	V4QImode = 35,
	V4HImode = 36,
	V4SImode = 37,
	V4DImode = 38,
	V8QImode = 39,
	V8HImode = 40,
	V8SImode = 41,
	V8DImode = 42,
	V16QImode = 43,
	V2SFmode = 44,
	V2DFmode = 45,
	V4SFmode = 46,
	V4DFmode = 47,
	V8SFmode = 48,
	V8DFmode = 49,
	BLKmode = 50,
	CCmode = 51,
	MAX_MACHINE_MODE = 52
};

enum mode_class {
	MODE_RANDOM = 0,
	MODE_INT = 1,
	MODE_FLOAT = 2,
	MODE_PARTIAL_INT = 3,
	MODE_CC = 4,
	MODE_COMPLEX_INT = 5,
	MODE_COMPLEX_FLOAT = 6,
	MODE_VECTOR_INT = 7,
	MODE_VECTOR_FLOAT = 8,
	MAX_MODE_CLASS = 9
};

typedef signed char QItype;
typedef unsigned char UQItype;
typedef short int HItype;
typedef short unsigned int UHItype;
typedef int SItype;
typedef unsigned int USItype;
typedef long int DItype;
typedef long unsigned int UDItype;
typedef float SFtype;
typedef double DFtype;
typedef long int word_type;

struct DWstruct { // 0x8
	/* 0x0 */ SItype low;
	/* 0x4 */ SItype high;
};

typedef union { // 0x8
	/* 0x0 */ DWstruct s;
	/* 0x0 */ DItype ll;
} DWunion;

typedef void (*func_ptr)(/* parameters unknown */);

typedef struct { // 0x478
	/* 0x000 */ void *cfa;
	/* 0x004 */ void *eh_ptr;
	/* 0x008 */ long int cfa_offset;
	/* 0x010 */ long int base_offset;
	/* 0x018 */ long int args_size;
	/* 0x020 */ long int reg_or_offset[123];
	/* 0x3f8 */ short unsigned int cfa_reg;
	/* 0x3fa */ short unsigned int retaddr_column;
	/* 0x3fc */ char saved[123];
	/* 0x477 */ char indirect;
} frame_state;

struct object { // 0x18
	/* 0x00 */ void *pc_begin;
	/* 0x04 */ void *pc_end;
	/* 0x08 */ dwarf_fde *fde_begin;
	/* 0x0c */ dwarf_fde **fde_array;
	/* 0x10 */ size_t count;
	/* 0x14 */ object *next;
};

typedef int __gthread_key_t;
typedef int __gthread_once_t;
typedef int __gthread_mutex_t;

struct eh_context { // 0xe0
	/* 0x00 */ void *handler_label;
	/* 0x04 */ void **dynamic_handler_chain;
	/* 0x08 */ void *info;
	/* 0x0c */ void *table_index;
	/* 0x10 */ char alloc_buffer[192];
	/* 0xd0 */ unsigned int alloc_mask;
};

typedef struct { // 0xc
	/* 0x0 */ void *start_region;
	/* 0x4 */ void *end_region;
	/* 0x8 */ void *exception_handler;
} old_exception_table;

typedef struct { // 0x10
	/* 0x0 */ void *start_region;
	/* 0x4 */ void *end_region;
	/* 0x8 */ void *exception_handler;
	/* 0xc */ void *match_info;
} exception_table;

typedef struct { // 0x4
	/* 0x0 */ short int language;
	/* 0x2 */ short int version;
} exception_lang_info;

typedef struct { // 0x18
	/* 0x00 */ void *runtime_id_field;
	/* 0x04 */ exception_lang_info lang;
	/* 0x08 */ exception_table table[1];
} exception_descriptor;

typedef void* (*__eh_matcher)(/* parameters unknown */);

typedef struct { // 0x8
	/* 0x0 */ __eh_matcher match_function;
	/* 0x4 */ short int language;
	/* 0x6 */ short int version;
} __eh_info;

enum exception_source_language {
	EH_LANG_C89 = 1,
	EH_LANG_C = 2,
	EH_LANG_Ada83 = 3,
	EH_LANG_C_plus_plus = 4,
	EH_LANG_Cobol74 = 5,
	EH_LANG_Cobol85 = 6,
	EH_LANG_Fortran77 = 7,
	EH_LANG_Fortran90 = 8,
	EH_LANG_Pascal83 = 9,
	EH_LANG_Modula2 = 10,
	EH_LANG_Java = 11,
	EH_LANG_Mips_Assembler = 32769
};

struct eh_full_context { // 0xf0
	/* 0x00 */ eh_context c;
	/* 0xe0 */ void *top_elt[2];
};

typedef int ptr_type;
// warning: multiple differing types with the same name (type name not equal)
typedef USItype fractype;
// warning: multiple differing types with the same name (type name not equal)
typedef UHItype halffractype;
// warning: multiple differing types with the same name (type name not equal)
typedef SFtype FLO_type;
// warning: multiple differing types with the same name (type name not equal)
typedef SItype intfrac;

typedef enum {
	CLASS_SNAN = 0,
	CLASS_QNAN = 1,
	CLASS_ZERO = 2,
	CLASS_NUMBER = 3,
	CLASS_INFINITY = 4
} fp_class_type;

// warning: multiple differing types with the same name (size not equal)
typedef struct { // 0x10
	/* 0x0 */ fp_class_type class;
	/* 0x4 */ unsigned int sign;
	/* 0x8 */ int normal_exp;
	/* 0xc */ union { // 0x4
		/* 0xc */ fractype ll;
		/* 0xc */ halffractype l[2];
	} fraction;
} fp_number_type;

// warning: multiple differing types with the same name (size not equal)
typedef union { // 0x4
	/* 0x0 */ FLO_type value;
	/* 0x0 */ fractype value_raw;
	/* 0x0 */ struct { // 0x4
		/* 0x0:0 */ fractype fraction : 23;
		/* 0x2:7 */ unsigned int exp : 8;
		/* 0x3:7 */ unsigned int sign : 1;
	} bits;
} FLO_union_type;

// warning: multiple differing types with the same name (type name not equal)
typedef UDItype fractype;
// warning: multiple differing types with the same name (type name not equal)
typedef USItype halffractype;
// warning: multiple differing types with the same name (type name not equal)
typedef DFtype FLO_type;
// warning: multiple differing types with the same name (type name not equal)
typedef DItype intfrac;

// warning: multiple differing types with the same name (size not equal)
typedef struct { // 0x18
	/* 0x00 */ fp_class_type class;
	/* 0x04 */ unsigned int sign;
	/* 0x08 */ int normal_exp;
	/* 0x10 */ union { // 0x8
		/* 0x10 */ fractype ll;
		/* 0x10 */ halffractype l[2];
	} fraction;
} fp_number_type;

// warning: multiple differing types with the same name (size not equal)
typedef union { // 0x8
	/* 0x0 */ FLO_type value;
	/* 0x0 */ fractype value_raw;
	/* 0x0 */ halffractype words[2];
	/* 0x0 */ struct { // 0x8
		/* 0x0:0 */ fractype fraction : 52;
		/* 0x6:4 */ unsigned int exp : 11;
		/* 0x7:7 */ unsigned int sign : 1;
	} bits;
} FLO_union_type;

enum dwarf_tag {
	DW_TAG_padding = 0,
	DW_TAG_array_type = 1,
	DW_TAG_class_type = 2,
	DW_TAG_entry_point = 3,
	DW_TAG_enumeration_type = 4,
	DW_TAG_formal_parameter = 5,
	DW_TAG_imported_declaration = 8,
	DW_TAG_label = 10,
	DW_TAG_lexical_block = 11,
	DW_TAG_member = 13,
	DW_TAG_pointer_type = 15,
	DW_TAG_reference_type = 16,
	DW_TAG_compile_unit = 17,
	DW_TAG_string_type = 18,
	DW_TAG_structure_type = 19,
	DW_TAG_subroutine_type = 21,
	DW_TAG_typedef = 22,
	DW_TAG_union_type = 23,
	DW_TAG_unspecified_parameters = 24,
	DW_TAG_variant = 25,
	DW_TAG_common_block = 26,
	DW_TAG_common_inclusion = 27,
	DW_TAG_inheritance = 28,
	DW_TAG_inlined_subroutine = 29,
	DW_TAG_module = 30,
	DW_TAG_ptr_to_member_type = 31,
	DW_TAG_set_type = 32,
	DW_TAG_subrange_type = 33,
	DW_TAG_with_stmt = 34,
	DW_TAG_access_declaration = 35,
	DW_TAG_base_type = 36,
	DW_TAG_catch_block = 37,
	DW_TAG_const_type = 38,
	DW_TAG_constant = 39,
	DW_TAG_enumerator = 40,
	DW_TAG_file_type = 41,
	DW_TAG_friend = 42,
	DW_TAG_namelist = 43,
	DW_TAG_namelist_item = 44,
	DW_TAG_packed_type = 45,
	DW_TAG_subprogram = 46,
	DW_TAG_template_type_param = 47,
	DW_TAG_template_value_param = 48,
	DW_TAG_thrown_type = 49,
	DW_TAG_try_block = 50,
	DW_TAG_variant_part = 51,
	DW_TAG_variable = 52,
	DW_TAG_volatile_type = 53,
	DW_TAG_MIPS_loop = 16513,
	DW_TAG_format_label = 16641,
	DW_TAG_function_template = 16642,
	DW_TAG_class_template = 16643
};

enum dwarf_form {
	DW_FORM_addr = 1,
	DW_FORM_block2 = 3,
	DW_FORM_block4 = 4,
	DW_FORM_data2 = 5,
	DW_FORM_data4 = 6,
	DW_FORM_data8 = 7,
	DW_FORM_string = 8,
	DW_FORM_block = 9,
	DW_FORM_block1 = 10,
	DW_FORM_data1 = 11,
	DW_FORM_flag = 12,
	DW_FORM_sdata = 13,
	DW_FORM_strp = 14,
	DW_FORM_udata = 15,
	DW_FORM_ref_addr = 16,
	DW_FORM_ref1 = 17,
	DW_FORM_ref2 = 18,
	DW_FORM_ref4 = 19,
	DW_FORM_ref8 = 20,
	DW_FORM_ref_udata = 21,
	DW_FORM_indirect = 22
};

enum dwarf_attribute {
	DW_AT_sibling = 1,
	DW_AT_location = 2,
	DW_AT_name = 3,
	DW_AT_ordering = 9,
	DW_AT_subscr_data = 10,
	DW_AT_byte_size = 11,
	DW_AT_bit_offset = 12,
	DW_AT_bit_size = 13,
	DW_AT_element_list = 15,
	DW_AT_stmt_list = 16,
	DW_AT_low_pc = 17,
	DW_AT_high_pc = 18,
	DW_AT_language = 19,
	DW_AT_member = 20,
	DW_AT_discr = 21,
	DW_AT_discr_value = 22,
	DW_AT_visibility = 23,
	DW_AT_import = 24,
	DW_AT_string_length = 25,
	DW_AT_common_reference = 26,
	DW_AT_comp_dir = 27,
	DW_AT_const_value = 28,
	DW_AT_containing_type = 29,
	DW_AT_default_value = 30,
	DW_AT_inline = 32,
	DW_AT_is_optional = 33,
	DW_AT_lower_bound = 34,
	DW_AT_producer = 37,
	DW_AT_prototyped = 39,
	DW_AT_return_addr = 42,
	DW_AT_start_scope = 44,
	DW_AT_stride_size = 46,
	DW_AT_upper_bound = 47,
	DW_AT_abstract_origin = 49,
	DW_AT_accessibility = 50,
	DW_AT_address_class = 51,
	DW_AT_artificial = 52,
	DW_AT_base_types = 53,
	DW_AT_calling_convention = 54,
	DW_AT_count = 55,
	DW_AT_data_member_location = 56,
	DW_AT_decl_column = 57,
	DW_AT_decl_file = 58,
	DW_AT_decl_line = 59,
	DW_AT_declaration = 60,
	DW_AT_discr_list = 61,
	DW_AT_encoding = 62,
	DW_AT_external = 63,
	DW_AT_frame_base = 64,
	DW_AT_friend = 65,
	DW_AT_identifier_case = 66,
	DW_AT_macro_info = 67,
	DW_AT_namelist_items = 68,
	DW_AT_priority = 69,
	DW_AT_segment = 70,
	DW_AT_specification = 71,
	DW_AT_static_link = 72,
	DW_AT_type = 73,
	DW_AT_use_location = 74,
	DW_AT_variable_parameter = 75,
	DW_AT_virtuality = 76,
	DW_AT_vtable_elem_location = 77,
	DW_AT_MIPS_fde = 8193,
	DW_AT_MIPS_loop_begin = 8194,
	DW_AT_MIPS_tail_loop_begin = 8195,
	DW_AT_MIPS_epilog_begin = 8196,
	DW_AT_MIPS_loop_unroll_factor = 8197,
	DW_AT_MIPS_software_pipeline_depth = 8198,
	DW_AT_MIPS_linkage_name = 8199,
	DW_AT_MIPS_stride = 8200,
	DW_AT_MIPS_abstract_name = 8201,
	DW_AT_MIPS_clone_origin = 8202,
	DW_AT_MIPS_has_inlines = 8203,
	DW_AT_sf_names = 8449,
	DW_AT_src_info = 8450,
	DW_AT_mac_info = 8451,
	DW_AT_src_coords = 8452,
	DW_AT_body_begin = 8453,
	DW_AT_body_end = 8454
};

enum dwarf_location_atom {
	DW_OP_addr = 3,
	DW_OP_deref = 6,
	DW_OP_const1u = 8,
	DW_OP_const1s = 9,
	DW_OP_const2u = 10,
	DW_OP_const2s = 11,
	DW_OP_const4u = 12,
	DW_OP_const4s = 13,
	DW_OP_const8u = 14,
	DW_OP_const8s = 15,
	DW_OP_constu = 16,
	DW_OP_consts = 17,
	DW_OP_dup = 18,
	DW_OP_drop = 19,
	DW_OP_over = 20,
	DW_OP_pick = 21,
	DW_OP_swap = 22,
	DW_OP_rot = 23,
	DW_OP_xderef = 24,
	DW_OP_abs = 25,
	DW_OP_and = 26,
	DW_OP_div = 27,
	DW_OP_minus = 28,
	DW_OP_mod = 29,
	DW_OP_mul = 30,
	DW_OP_neg = 31,
	DW_OP_not = 32,
	DW_OP_or = 33,
	DW_OP_plus = 34,
	DW_OP_plus_uconst = 35,
	DW_OP_shl = 36,
	DW_OP_shr = 37,
	DW_OP_shra = 38,
	DW_OP_xor = 39,
	DW_OP_bra = 40,
	DW_OP_eq = 41,
	DW_OP_ge = 42,
	DW_OP_gt = 43,
	DW_OP_le = 44,
	DW_OP_lt = 45,
	DW_OP_ne = 46,
	DW_OP_skip = 47,
	DW_OP_lit0 = 48,
	DW_OP_lit1 = 49,
	DW_OP_lit2 = 50,
	DW_OP_lit3 = 51,
	DW_OP_lit4 = 52,
	DW_OP_lit5 = 53,
	DW_OP_lit6 = 54,
	DW_OP_lit7 = 55,
	DW_OP_lit8 = 56,
	DW_OP_lit9 = 57,
	DW_OP_lit10 = 58,
	DW_OP_lit11 = 59,
	DW_OP_lit12 = 60,
	DW_OP_lit13 = 61,
	DW_OP_lit14 = 62,
	DW_OP_lit15 = 63,
	DW_OP_lit16 = 64,
	DW_OP_lit17 = 65,
	DW_OP_lit18 = 66,
	DW_OP_lit19 = 67,
	DW_OP_lit20 = 68,
	DW_OP_lit21 = 69,
	DW_OP_lit22 = 70,
	DW_OP_lit23 = 71,
	DW_OP_lit24 = 72,
	DW_OP_lit25 = 73,
	DW_OP_lit26 = 74,
	DW_OP_lit27 = 75,
	DW_OP_lit28 = 76,
	DW_OP_lit29 = 77,
	DW_OP_lit30 = 78,
	DW_OP_lit31 = 79,
	DW_OP_reg0 = 80,
	DW_OP_reg1 = 81,
	DW_OP_reg2 = 82,
	DW_OP_reg3 = 83,
	DW_OP_reg4 = 84,
	DW_OP_reg5 = 85,
	DW_OP_reg6 = 86,
	DW_OP_reg7 = 87,
	DW_OP_reg8 = 88,
	DW_OP_reg9 = 89,
	DW_OP_reg10 = 90,
	DW_OP_reg11 = 91,
	DW_OP_reg12 = 92,
	DW_OP_reg13 = 93,
	DW_OP_reg14 = 94,
	DW_OP_reg15 = 95,
	DW_OP_reg16 = 96,
	DW_OP_reg17 = 97,
	DW_OP_reg18 = 98,
	DW_OP_reg19 = 99,
	DW_OP_reg20 = 100,
	DW_OP_reg21 = 101,
	DW_OP_reg22 = 102,
	DW_OP_reg23 = 103,
	DW_OP_reg24 = 104,
	DW_OP_reg25 = 105,
	DW_OP_reg26 = 106,
	DW_OP_reg27 = 107,
	DW_OP_reg28 = 108,
	DW_OP_reg29 = 109,
	DW_OP_reg30 = 110,
	DW_OP_reg31 = 111,
	DW_OP_breg0 = 112,
	DW_OP_breg1 = 113,
	DW_OP_breg2 = 114,
	DW_OP_breg3 = 115,
	DW_OP_breg4 = 116,
	DW_OP_breg5 = 117,
	DW_OP_breg6 = 118,
	DW_OP_breg7 = 119,
	DW_OP_breg8 = 120,
	DW_OP_breg9 = 121,
	DW_OP_breg10 = 122,
	DW_OP_breg11 = 123,
	DW_OP_breg12 = 124,
	DW_OP_breg13 = 125,
	DW_OP_breg14 = 126,
	DW_OP_breg15 = 127,
	DW_OP_breg16 = 128,
	DW_OP_breg17 = 129,
	DW_OP_breg18 = 130,
	DW_OP_breg19 = 131,
	DW_OP_breg20 = 132,
	DW_OP_breg21 = 133,
	DW_OP_breg22 = 134,
	DW_OP_breg23 = 135,
	DW_OP_breg24 = 136,
	DW_OP_breg25 = 137,
	DW_OP_breg26 = 138,
	DW_OP_breg27 = 139,
	DW_OP_breg28 = 140,
	DW_OP_breg29 = 141,
	DW_OP_breg30 = 142,
	DW_OP_breg31 = 143,
	DW_OP_regx = 144,
	DW_OP_fbreg = 145,
	DW_OP_bregx = 146,
	DW_OP_piece = 147,
	DW_OP_deref_size = 148,
	DW_OP_xderef_size = 149,
	DW_OP_nop = 150
};

enum dwarf_type {
	DW_ATE_void = 0,
	DW_ATE_address = 1,
	DW_ATE_boolean = 2,
	DW_ATE_complex_float = 3,
	DW_ATE_float = 4,
	DW_ATE_signed = 5,
	DW_ATE_signed_char = 6,
	DW_ATE_unsigned = 7,
	DW_ATE_unsigned_char = 8
};

enum dwarf_array_dim_ordering {
	DW_ORD_row_major = 0,
	DW_ORD_col_major = 1
};

enum dwarf_access_attribute {
	DW_ACCESS_public = 1,
	DW_ACCESS_protected = 2,
	DW_ACCESS_private = 3
};

enum dwarf_visibility_attribute {
	DW_VIS_local = 1,
	DW_VIS_exported = 2,
	DW_VIS_qualified = 3
};

enum dwarf_virtuality_attribute {
	DW_VIRTUALITY_none = 0,
	DW_VIRTUALITY_virtual = 1,
	DW_VIRTUALITY_pure_virtual = 2
};

enum dwarf_id_case {
	DW_ID_case_sensitive = 0,
	DW_ID_up_case = 1,
	DW_ID_down_case = 2,
	DW_ID_case_insensitive = 3
};

enum dwarf_calling_convention {
	DW_CC_normal = 1,
	DW_CC_program = 2,
	DW_CC_nocall = 3
};

enum dwarf_inline_attribute {
	DW_INL_not_inlined = 0,
	DW_INL_inlined = 1,
	DW_INL_declared_not_inlined = 2,
	DW_INL_declared_inlined = 3
};

enum dwarf_discrim_list {
	DW_DSC_label = 0,
	DW_DSC_range = 1
};

enum dwarf_line_number_ops {
	DW_LNS_extended_op = 0,
	DW_LNS_copy = 1,
	DW_LNS_advance_pc = 2,
	DW_LNS_advance_line = 3,
	DW_LNS_set_file = 4,
	DW_LNS_set_column = 5,
	DW_LNS_negate_stmt = 6,
	DW_LNS_set_basic_block = 7,
	DW_LNS_const_add_pc = 8,
	DW_LNS_fixed_advance_pc = 9
};

enum dwarf_line_number_x_ops {
	DW_LNE_end_sequence = 1,
	DW_LNE_set_address = 2,
	DW_LNE_define_file = 3
};

enum dwarf_call_frame_info {
	DW_CFA_advance_loc = 64,
	DW_CFA_offset = 128,
	DW_CFA_restore = 192,
	DW_CFA_nop = 0,
	DW_CFA_set_loc = 1,
	DW_CFA_advance_loc1 = 2,
	DW_CFA_advance_loc2 = 3,
	DW_CFA_advance_loc4 = 4,
	DW_CFA_offset_extended = 5,
	DW_CFA_restore_extended = 6,
	DW_CFA_undefined = 7,
	DW_CFA_same_value = 8,
	DW_CFA_register = 9,
	DW_CFA_remember_state = 10,
	DW_CFA_restore_state = 11,
	DW_CFA_def_cfa = 12,
	DW_CFA_def_cfa_register = 13,
	DW_CFA_def_cfa_offset = 14,
	DW_CFA_def_cfa_expression = 15,
	DW_CFA_expression = 16,
	DW_CFA_MIPS_advance_loc8 = 29,
	DW_CFA_GNU_window_save = 45,
	DW_CFA_GNU_args_size = 46,
	DW_CFA_GNU_negative_offset_extended = 47
};

enum dwarf_source_language {
	DW_LANG_C89 = 1,
	DW_LANG_C = 2,
	DW_LANG_Ada83 = 3,
	DW_LANG_C_plus_plus = 4,
	DW_LANG_Cobol74 = 5,
	DW_LANG_Cobol85 = 6,
	DW_LANG_Fortran77 = 7,
	DW_LANG_Fortran90 = 8,
	DW_LANG_Pascal83 = 9,
	DW_LANG_Modula2 = 10,
	DW_LANG_Java = 11,
	DW_LANG_Mips_Assembler = 32769
};

enum dwarf_macinfo_record_type {
	DW_MACINFO_define = 1,
	DW_MACINFO_undef = 2,
	DW_MACINFO_start_file = 3,
	DW_MACINFO_end_file = 4,
	DW_MACINFO_vendor_ext = 255
};

typedef int sword;
typedef unsigned int uword;
typedef unsigned int uaddr;
typedef int saddr;
typedef unsigned char ubyte;

struct dwarf_cie { // 0xc
	/* 0x0 */ uword length;
	/* 0x4 */ sword CIE_id;
	/* 0x8 */ ubyte version;
	/* 0x9 */ char augmentation[0];
};

struct dwarf_fde { // 0x10
	/* 0x0 */ uword length;
	/* 0x4 */ sword CIE_delta;
	/* 0x8 */ void *pc_begin;
	/* 0xc */ uaddr pc_range;
};

typedef dwarf_fde fde;

struct cie_info { // 0x14
	/* 0x00 */ char *augmentation;
	/* 0x04 */ void *eh_ptr;
	/* 0x08 */ int code_align;
	/* 0x0c */ int data_align;
	/* 0x10 */ unsigned int ra_regno;
};

struct frame_state_internal { // 0x480
	/* 0x000 */ frame_state s;
	/* 0x478 */ frame_state_internal *saved_state;
};

union unaligned { // 0x8
	/* 0x0 */ void *p;
	/* 0x0 */ short unsigned int b2;
	/* 0x0 */ unsigned int b4;
	/* 0x0 */ long unsigned int b8;
};

typedef struct { // 0x8
	/* 0x0 */ fde **array;
	/* 0x4 */ size_t count;
} fde_vector;

typedef struct { // 0x10
	/* 0x0 */ fde_vector linear;
	/* 0x8 */ fde_vector erratic;
} fde_accumulator;

struct type_info { // 0x8
protected:
	/* 0x0 */ char *__name;
public:
	/* 0x4 */ __vtbl_ptr_type *$vf32;
	
	/* vtable[1] */ virtual type_info(type_info*, int, void);
private:
	type_info& operator=();
	type_info();
protected:
	type_info();
public:
	bool before();
	char* name();
	bool operator==();
	bool operator!=();
};

struct bad_cast : /* 0x0 */ exception { // 0x4
};

struct bad_typeid : /* 0x0 */ exception { // 0x4
};

enum sub_kind {
	unknown = 0,
	not_contained = 1,
	contained_ambig = 2,
	contained_mask = 4,
	contained_virtual_mask = 1,
	contained_public_mask = 2,
	contained_private = 4,
	contained_public = 6
};

struct upcast_result { // 0xc
	/* 0x0 */ void *target_obj;
	/* 0x4 */ sub_kind whole2target;
	/* 0x8 */ type_info *base_type;
};

struct dyncast_result { // 0x10
	/* 0x0 */ void *target_obj;
	/* 0x4 */ sub_kind whole2target;
	/* 0x8 */ sub_kind whole2sub;
	/* 0xc */ sub_kind target2sub;
};

typedef int myint32;

enum access {
	PUBLIC = 1,
	PROTECTED = 2,
	PRIVATE = 3
};

struct base_info { // 0x8
	/* 0x0 */ __user_type_info *base;
	/* 0x4:0 */ myint32 offset : 29;
	/* 0x7:5 */ bool is_virtual : 1;
	/* 0x7 */ access access;
};

struct __class_type_info : /* 0x0 */ __user_type_info { // 0x10
	/* 0x8 */ base_info *base_list;
	/* 0xc */ size_t n_bases;
	
	__class_type_info& operator=();
	__class_type_info();
	/* vtable[1] */ virtual __class_type_info(__class_type_info*, int, void);
	__class_type_info();
	/* vtable[2] */ virtual bool do_upcast();
	/* vtable[3] */ virtual bool do_dyncast();
	/* vtable[4] */ virtual sub_kind do_find_public_subobj();
};

struct __si_type_info : /* 0x0 */ __user_type_info { // 0xc
private:
	/* 0x8 */ __user_type_info &base;
	
public:
	__si_type_info& operator=();
	__si_type_info();
	/* vtable[1] */ virtual __si_type_info(__si_type_info*, int, void);
	__si_type_info();
private:
	/* vtable[2] */ virtual bool do_upcast();
	/* vtable[3] */ virtual bool do_dyncast();
	/* vtable[4] */ virtual sub_kind do_find_public_subobj();
};

struct __user_type_info : /* 0x0 */ type_info { // 0x8
	static type_info *nonvirtual_base_type;
	
	__user_type_info& operator=();
	__user_type_info();
	/* vtable[1] */ virtual __user_type_info(__user_type_info*, int, void);
	__user_type_info();
	int upcast();
	void* dyncast();
	static bool contained_p(/* parameters unknown */);
	static bool contained_public_p(/* parameters unknown */);
	static bool contained_nonpublic_p(/* parameters unknown */);
	static bool contained_nonvirtual_p(/* parameters unknown */);
	static bool contained_virtual_p(/* parameters unknown */);
	/* vtable[2] */ virtual bool do_upcast();
	/* vtable[3] */ virtual bool do_dyncast();
	sub_kind find_public_subobj();
	/* vtable[4] */ virtual sub_kind do_find_public_subobj();
};

enum cv {
	NONE = 0,
	CONST = 1,
	VOLATILE = 2,
	CONSTVOL = 3
};

struct __array_type_info : /* 0x0 */ type_info { // 0x8
};

struct __ptmd_type_info : /* 0x0 */ type_info { // 0x8
};

struct __ptmf_type_info : /* 0x0 */ type_info { // 0x8
};

struct __func_type_info : /* 0x0 */ type_info { // 0x8
};

struct __builtin_type_info : /* 0x0 */ type_info { // 0x8
};

struct __attr_type_info : /* 0x0 */ type_info { // 0x10
	/* 0x8 */ type_info &type;
	/* 0xc */ cv attr;
};

struct __pointer_type_info : /* 0x0 */ type_info { // 0xc
	/* 0x8 */ type_info &type;
};

// warning: multiple differing types with the same name (size not equal)
struct exception { // 0x4
	/* 0x0 */ __vtbl_ptr_type *$vf26;
	
	exception& operator=();
	exception();
	exception();
	/* vtable[1] */ virtual exception(exception*, int, void);
	/* vtable[2] */ virtual char* what();
};

struct bad_exception : /* 0x0 */ exception { // 0x4
};

typedef void (*cleanup_fn)(/* parameters unknown */);

struct cp_eh_info { // 0x30
	/* 0x00 */ __eh_info eh_info;
	/* 0x08 */ void *value;
	/* 0x0c */ void *type;
	/* 0x10 */ cleanup_fn cleanup;
	/* 0x14 */ bool caught;
	/* 0x18 */ cp_eh_info *next;
	/* 0x20 */ long int handlers;
	/* 0x28 */ void *original_value;
};

typedef long unsigned int sigset_t;

struct sigaction { // 0x18
	/* 0x00 */ void (*sa_handler)(/* parameters unknown */);
	/* 0x08 */ sigset_t sa_mask;
	/* 0x10 */ int sa_flags;
};

typedef int sig_atomic_t;
typedef void (*_sig_func_ptr)(/* parameters unknown */);
typedef long int _off_t;
typedef long int _ssize_t;

struct mallinfo { // 0x28
	/* 0x00 */ int arena;
	/* 0x04 */ int ordblks;
	/* 0x08 */ int smblks;
	/* 0x0c */ int hblks;
	/* 0x10 */ int hblkhd;
	/* 0x14 */ int usmblks;
	/* 0x18 */ int fsmblks;
	/* 0x1c */ int uordblks;
	/* 0x20 */ int fordblks;
	/* 0x24 */ int keepcost;
};

struct malloc_chunk { // 0x10
	/* 0x0 */ size_t prev_size;
	/* 0x4 */ size_t size;
	/* 0x8 */ malloc_chunk *fd;
	/* 0xc */ malloc_chunk *bk;
};

typedef malloc_chunk *mchunkptr;
typedef malloc_chunk *mbinptr;
// warning: multiple differing types with the same name (type name not equal)
typedef unsigned int __ULong;

struct __siov { // 0x8
	/* 0x0 */ void *iov_base;
	/* 0x4 */ size_t iov_len;
};

struct __suio { // 0xc
	/* 0x0 */ __siov *uio_iov;
	/* 0x4 */ int uio_iovcnt;
	/* 0x8 */ int uio_resid;
};

typedef union { // 0x10
	/* 0x0 */ double value;
	/* 0x0 */ struct { // 0x8
		/* 0x0 */ unsigned int fraction1;
		/* 0x4:0 */ unsigned int fraction0 : 20;
		/* 0x6:4 */ unsigned int exponent : 11;
		/* 0x7:7 */ unsigned int sign : 1;
	} number;
	/* 0x0 */ struct { // 0x8
		/* 0x0 */ unsigned int function1;
		/* 0x4:0 */ unsigned int function0 : 19;
		/* 0x6:3 */ unsigned int quiet : 1;
		/* 0x6:4 */ unsigned int exponent : 11;
		/* 0x7:7 */ unsigned int sign : 1;
	} nan;
	/* 0x0 */ struct { // 0x10
		/* 0x0 */ long unsigned int lsw;
		/* 0x8 */ long unsigned int msw;
	} parts;
	/* 0x0 */ long int aslong[2];
} __ieee_double_shape_type;

typedef union { // 0x8
	/* 0x0 */ float value;
	/* 0x0 */ struct { // 0x4
		/* 0x0:0 */ unsigned int fraction0 : 7;
		/* 0x0:7 */ unsigned int fraction1 : 16;
		/* 0x2:7 */ unsigned int exponent : 8;
		/* 0x3:7 */ unsigned int sign : 1;
	} number;
	/* 0x0 */ struct { // 0x4
		/* 0x0:0 */ unsigned int function1 : 16;
		/* 0x2:0 */ unsigned int function0 : 6;
		/* 0x2:6 */ unsigned int quiet : 1;
		/* 0x2:7 */ unsigned int exponent : 8;
		/* 0x3:7 */ unsigned int sign : 1;
	} nan;
	/* 0x0 */ long int p1;
} __ieee_float_shape_type;

typedef int fp_rnd;
typedef int fp_except;
typedef int fp_rdi;

union double_union { // 0x8
	/* 0x0 */ double d;
	/* 0x0 */ __uint32_t i[2];
};

enum {
	OCT = 0,
	DEC = 1,
	HEX = 2
};

struct lconv { // 0x30
	/* 0x00 */ char *decimal_point;
	/* 0x04 */ char *thousands_sep;
	/* 0x08 */ char *grouping;
	/* 0x0c */ char *int_curr_symbol;
	/* 0x10 */ char *currency_symbol;
	/* 0x14 */ char *mon_decimal_point;
	/* 0x18 */ char *mon_thousands_sep;
	/* 0x1c */ char *mon_grouping;
	/* 0x20 */ char *positive_sign;
	/* 0x24 */ char *negative_sign;
	/* 0x28 */ char int_frac_digits;
	/* 0x29 */ char frac_digits;
	/* 0x2a */ char p_cs_precedes;
	/* 0x2b */ char p_sep_by_space;
	/* 0x2c */ char n_cs_precedes;
	/* 0x2d */ char n_sep_by_space;
	/* 0x2e */ char p_sign_posn;
	/* 0x2f */ char n_sign_posn;
};

struct flock { // 0x20
	/* 0x00 */ short int l_type;
	/* 0x02 */ short int l_whence;
	/* 0x08 */ long int l_start;
	/* 0x10 */ long int l_len;
	/* 0x18 */ short int l_pid;
	/* 0x1a */ short int l_xxx;
};

struct eflock { // 0x30
	/* 0x00 */ short int l_type;
	/* 0x02 */ short int l_whence;
	/* 0x08 */ long int l_start;
	/* 0x10 */ long int l_len;
	/* 0x18 */ short int l_pid;
	/* 0x1a */ short int l_xxx;
	/* 0x20 */ long int l_rpid;
	/* 0x28 */ long int l_rsys;
};

struct ios;
struct istream;
struct ostream;
union _Obj;
struct vector<bool,__default_alloc_template<false, 0> >;
struct basic_string<char,string_char_traits<char>,__default_alloc_template<false, 0> >;
struct reverse_iterator<char *>;
struct reverse_iterator<const char *>;
struct reverse_iterator<IEditObject **>;
struct reverse_iterator<IEditObject *const *>;
struct IG3DVertexBuffer;
struct IG3DIndexBuffer;
struct reverse_iterator<basic_string<char, string_char_traits<char>, ctl::custom_allocator<char> > *>;
struct reverse_iterator<const basic_string<char, string_char_traits<char>, ctl::custom_allocator<char> > *>;
struct reverse_iterator<sce_dirent *>;
struct reverse_iterator<const sce_dirent *>;
struct IPhase;
struct rtx_def;
struct CAutoGsRegisters<6>;
