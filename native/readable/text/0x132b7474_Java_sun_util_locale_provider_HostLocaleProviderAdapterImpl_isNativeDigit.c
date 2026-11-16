// Java_sun_util_locale_provider_HostLocaleProviderAdapterImpl_isNativeDigit
// rva 0x132b7474  size 137  section .text  group text
// window base 0x1932b7474: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
char __fastcall Java_sun_util_locale_provider_HostLocaleProviderAdapterImpl_isNativeDigit(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        __int64 a8,
        __int64 a9)
{
  __int64 v9; // rbx
  __int64 v10; // rbp
  __int64 v12; // rax
  int v13; // esi
  __int64 v14; // rbp
  __int64 v15; // rsi
  int v16; // ebx
  __int64 v17; // rdi
  char v18; // di

  a8 = v9;
  a9 = v10;
  v12 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, _QWORD))(*(_QWORD *)a4 + 1320LL))(
          a1,
          a2: a4,
          a3: a5,
          a4,
          a5: 0);
  v14 = v12;
  if ( v12 != 0 )
  {
    v16 = sub_132B79F4(a1: 0, a2: v13, a3: 536875028, a4: v12, a5: (unsigned int)&a7, a6: 4);
    (*(void (__fastcall **)(__int64, __int64, __int64, __int64, __int64))(*(_QWORD *)v15 + 1328LL))(
      a1: v17,
      a2: v15,
      a3: a5,
      a4: v15,
      a5: v14);
    if ( v16 != 0 && a7 == 2 )
      v18 = 1;
    LOBYTE(v12) = v18;
  }
  return v12;
}
