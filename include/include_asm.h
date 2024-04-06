#ifndef INCLUDE_ASM_H
#define INCLUDE_ASM_H

#if !defined(SPLAT) && !defined(__CTX__) && !defined(PERMUTER)

#ifndef INCLUDE_ASM
#define INCLUDE_ASM(FOLDER, NAME)   \
    __asm__(                                       \
        ".section .text\n"                         \
        "\t.set noat\n"                            \
        "\t.set noreorder\n"                       \
        "\t.include \"" FOLDER "/" #NAME ".s\"\n"  \
        "\t.set reorder\n"                         \
        "\t.set at\n"                              \
        "\t.globl    " #NAME ".NON_MATCHING\n"     \
        "\t #NAME .NON_MATCHING  = " #NAME "\n");
#endif

#ifndef INCLUDE_RODATA
#define INCLUDE_RODATA(TYPE, FOLDER, NAME, ARGS...)                \
    __asm__(                                                       \
        ".section .rodata\n"                                       \
        "\t.include \"asm/nonmatchings/" FOLDER "/" #NAME ".s\"\n" \
        ".section .text");
#endif

__asm__(".include \"include/macro.inc\"\n");

#else

#ifndef INCLUDE_ASM
#define INCLUDE_ASM(TYPE, FOLDER, NAME, ARGS...)
#endif
#ifndef INCLUDE_RODATA
#define INCLUDE_RODATA(TYPE, FOLDER, NAME, ARGS...)
#endif

#endif

#endif /* INCLUDE_ASM_H */
