#ifndef INLINES_H
#define INLINES_H

/* inlined from sgd_types.h @ line 642 */
inline bool sgdIsPresetData(SGDFILEHEADER *pSGDTop)
{
  return pSGDTop->ucModelType & 1;
}

/* inlined from g3dxVu0.h */
inline void SetVec(register sceVu0FVECTOR* src, register sceVu0FVECTOR* v) {
     long long val;
    __asm__ volatile (
    "lq $6, 0(%1)\n"
    "sq $6, 0(%2)\n"
    : "=r" (val)
    : "r" (v), "r" (src)
    );
}


/* inlined from g3dMemory.h @ line 81 */
inline void FuncA(u_long128 *pqwDest, u_long128 *pqwSrc, size_t qwcount)
{
    for (; qwcount != -1; qwcount--) {
        __asm__ (
            "pref    0x0,0x10(%0);"
        : : "r" (pqwSrc) );
        *pqwDest++ = *pqwSrc++;
    }
}

/* inlined from g3dxVu0.h @ line 2165 */
inline void FuncB(void* dst, void* src)
{
    __asm__ (
        "lw    $2,0(%1);"
        "lw    $3,4(%1);"
        "lq    $6,0($2);"
        "lq    $7,0($3);"
        "sq    $6,0(%0);"
        "sq    $7,0x10(%0);"
    : : "r" (dst), "r" (src) : "$2", "$3", "$6", "$7", "memory");
}


#endif