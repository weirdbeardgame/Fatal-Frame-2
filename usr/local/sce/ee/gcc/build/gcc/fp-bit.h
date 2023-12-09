// STATUS: NOT STARTED

#ifndef USR_LOCAL_SCE_EE_GCC_BUILD_GCC_FP_BIT_H
#define USR_LOCAL_SCE_EE_GCC_BUILD_GCC_FP_BIT_H

// warning: multiple differing types with the same name (#538, type name not equal)
typedef USItype fractype;
// warning: multiple differing types with the same name (#538, type name not equal)
typedef UHItype halffractype;

// warning: multiple differing types with the same name (#538, size not equal)
typedef struct {
	fp_class_type class;
	unsigned int sign;
	int normal_exp;
	union {
		fractype ll;
		halffractype l[2];
	} fraction;
} fp_number_type;

// warning: multiple differing types with the same name (#538, size not equal)
typedef union {
	FLO_type value;
	fractype value_raw;
	struct {
		fractype fraction : 23;
		unsigned int exp : 8;
		unsigned int sign : 1;
	} bits;
} FLO_union_type;

// warning: multiple differing types with the same name (#543, type name not equal)
typedef SFtype FLO_type;
DFtype fptodp(SFtype arg_a);
void __unpack_f(FLO_union_type *src, fp_number_type *dst);
SFtype __make_fp(fp_class_type class, unsigned int sign, int exp, USItype frac);
FLO_type __pack_f(fp_number_type *src);

#endif // USR_LOCAL_SCE_EE_GCC_BUILD_GCC_FP_BIT_H
