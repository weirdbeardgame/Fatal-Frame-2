// STATUS: NOT STARTED

#ifndef USR_LOCAL_SCE_EE_GCC_SRC_NEWLIB_LIBC_LOCALE_LOCALE_H
#define USR_LOCAL_SCE_EE_GCC_SRC_NEWLIB_LIBC_LOCALE_LOCALE_H

struct lconv {
	char *decimal_point;
	char *thousands_sep;
	char *grouping;
	char *int_curr_symbol;
	char *currency_symbol;
	char *mon_decimal_point;
	char *mon_thousands_sep;
	char *mon_grouping;
	char *positive_sign;
	char *negative_sign;
	char int_frac_digits;
	char frac_digits;
	char p_cs_precedes;
	char p_sep_by_space;
	char n_cs_precedes;
	char n_sep_by_space;
	char p_sign_posn;
	char n_sign_posn;
};

extern int __mb_cur_max;

char* _setlocale_r(_reent *p, int category, char *locale);
lconv* _localeconv_r(_reent *data);
char* setlocale(int category, char *locale);
lconv* localeconv();

#endif // USR_LOCAL_SCE_EE_GCC_SRC_NEWLIB_LIBC_LOCALE_LOCALE_H
