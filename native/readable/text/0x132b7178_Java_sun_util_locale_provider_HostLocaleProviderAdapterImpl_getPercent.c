// Java_sun_util_locale_provider_HostLocaleProviderAdapterImpl_getPercent
// rva 0x132b7178  size 176  section .text  group text
// window base 0x1932b7178: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall Java_sun_util_locale_provider_HostLocaleProviderAdapterImpl_getPercent(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        unsigned __int16 a6)
{
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rdi
  __int64 v10; // rsi
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rbp
  __int64 v14; // rsi
  __int64 v15; // rdi
  __int64 v17; // [rsp+0h] [rbp-248h] BYREF
  __int16 v18; // [rsp+20h] [rbp-228h] BYREF
  __int64 v19; // [rsp+220h] [rbp-28h]

  v7 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, __int64, _QWORD))(*(_QWORD *)a4 + 1320LL))(
         a1: a6,
         a2: a4,
         a3: a5,
         a4,
         a5: 0);
  v13 = v7;
  if ( v7 != 0 )
  {
    sub_132B79F4(a1: v9, a2: v10, a3: 118, a4: v7, a5: (unsigned int)&v18, a6: 256);
    (*(void (__fastcall **)(__int64, __int64, __int64, __int64, __int64))(*(_QWORD *)v14 + 1328LL))(
      a1: v15,
      a2: v14,
      a3: a5,
      a4: v14,
      a5: v13);
  }
  return sub_132C8DE0(a1: v9, a2: v10, a3: v8, a4: (unsigned __int64)&v17 ^ v19, a5: v11, a6: v12);
}
