// STATUS: NOT STARTED

#include "locale.h"

int __mb_cur_max = 1;

static lconv lconv = {
	/* .decimal_point = */ 0x3ed080,
	/* .thousands_sep = */ 0x3ed078,
	/* .grouping = */ 0x3ed078,
	/* .int_curr_symbol = */ 0x3ed078,
	/* .currency_symbol = */ 0x3ed078,
	/* .mon_decimal_point = */ 0x3ed078,
	/* .mon_thousands_sep = */ 0x3ed078,
	/* .mon_grouping = */ 0x3ed078,
	/* .positive_sign = */ 0x3ed078,
	/* .negative_sign = */ 0x3ed078,
	/* .int_frac_digits = */ 127,
	/* .frac_digits = */ 127,
	/* .p_cs_precedes = */ 127,
	/* .p_sep_by_space = */ 127,
	/* .n_cs_precedes = */ 127,
	/* .n_sep_by_space = */ 127,
	/* .p_sign_posn = */ 127,
	/* .n_sign_posn = */ 127
};

char* _setlocale_r(_reent *p, int category, char *locale) {
  int iVar1;
  
  if (locale != (char *)0x0) {
    iVar1 = strcmp(locale,"C");
    if ((iVar1 != 0) && (iVar1 = strcmp(locale,""), iVar1 != 0)) {
      return (char *)0x0;
    }
    p->_current_locale = locale;
    p->_current_category = category;
  }
  return "C";
}

lconv* _localeconv_r(_reent *data) {
  return &lconv;
}

char* setlocale(int category, char *locale) {
  char *pcVar1;
  
  pcVar1 = _setlocale_r(_impure_ptr,category,locale);
  return pcVar1;
}

lconv* localeconv() {
  lconv *plVar1;
  
  plVar1 = (lconv *)_localeconv_r(_impure_ptr);
  return plVar1;
}
