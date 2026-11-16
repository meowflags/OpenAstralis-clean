// Java_sun_util_locale_provider_HostLocaleProviderAdapterImpl_getCalendarDataValue
// rva 0x132b6450  size 152  section .text  group text
// window base 0x1932b6450: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall Java_sun_util_locale_provider_HostLocaleProviderAdapterImpl_getCalendarDataValue(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        int a6,
        unsigned int a7,
        __int64 a8,
        __int64 a9)
{
  __int64 v9; // rbx
  __int64 v10; // rbp
  __int64 v14; // rax
  __int64 v15; // rsi
  __int64 v16; // rdi
  int v17; // edx
  int v18; // esi

  a8 = v9;
  a9 = v10;
  v14 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int64, _QWORD))(*(_QWORD *)a4 + 1320LL))(
          a1,
          a2: 0,
          a3: a5,
          a4,
          a5: 0);
  v16 = v14;
  if ( v14 == 0 )
    return 0xFFFFFFFFLL;
  if ( a6 != 0 )
  {
    if ( a6 != 1 )
      goto LABEL_7;
    v17 = 536875021;
  }
  else
  {
    v17 = 536875020;
  }
  v15 = (unsigned int)sub_1932B79F4(a1: v14, a2: v15, a3: v17, a4: v14, a5: (unsigned int)&a7, a6: 4);
LABEL_7:
  (*(void (__fastcall **)(__int64, __int64, __int64, __int64, __int64))(*(_QWORD *)a4 + 1328LL))(
    a1: v16,
    a2: v15,
    a3: a5,
    a4,
    a5: v16);
  if ( v18 != 0 )
    return a7;
  return 0xFFFFFFFFLL;
}
