#ifndef FIXED_ARRAY_H
#define FIXED_ARRAY_H
#include "common.h"

template<typename T, int I, typename J>
struct fixed_array_base
{// 0x4
 protected:
  /* 0x0 */ T m_aData[I];

 public:
  fixed_array_base<T, I, J> &operator=(const fixed_array_base<T, I, J> &rval);
  fixed_array_base();
  ~fixed_array_base();

 public:
  //char& operator[]();
  T *data();
  T *begin();
  T *end();
  void fill();
  int size();
  bool empty();
};

template<typename T, int I>
struct fixed_array : /* 0x0 */ fixed_array_base<T, I, T[I]>
{// 0x4
};

static void _fixed_array_assert(const char *strType, u_int v0, u_int v1)
{
}

template<typename T>
static T _fixed_array_verifyrange(u_int v, u_int _max)
{
  if (v < _max)
  {
    return 0;
  }
  _fixed_array_assert("unsigned int*", _max, v);
  return 0;
}

#endif
