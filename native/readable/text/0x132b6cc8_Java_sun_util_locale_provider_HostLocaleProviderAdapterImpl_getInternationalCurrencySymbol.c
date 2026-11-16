// Java_sun_util_locale_provider_HostLocaleProviderAdapterImpl_getInternationalCurrencySymbol
// rva 0x132b6cc8  size 207  section .text  group text
// window base 0x1932b6cc8: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall Java_sun_util_locale_provider_HostLocaleProviderAdapterImpl_getInternationalCurrencySymbol(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 *v9; // rdi
  __int64 v10; // rsi
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rbp
  __int64 v14; // rdi
  int v15; // ebx
  __int64 v16; // rsi
  __int64 v17; // rbx
  unsigned int v18; // eax
  __int64 v19; // rdi
  __int64 v20; // rsi
  __int64 v22; // [rsp+0h] [rbp-248h] BYREF
  _BYTE v23[512]; // [rsp+20h] [rbp-228h] BYREF
  __int64 v24; // [rsp+220h] [rbp-28h]

  v7 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, _QWORD))(*(_QWORD *)a4 + 1320LL))(
         a1: a4,
         a2: a6,
         a3: a5,
         a4,
         a5: 0);
  v13 = v7;
  if ( v7 != 0 )
  {
    v15 = sub_132B79F4(a1: (_DWORD)v9, a2: v10, a3: 21, a4: v7, a5: (unsigned int)v23, a6: 256);
    (*(void (__fastcall **)(__int64, __int64, __int64, __int64, __int64))(*(_QWORD *)v14 + 1328LL))(
      a1: v14,
      a2: v16,
      a3: a5,
      a4: v14,
      a5: v13);
    if ( v15 != 0 )
    {
      v17 = *v9;
      v18 = __imp_api-ms-win-crt-string-l1-1-0.dll!wcslen(a1: v9, a2: v10, a3: v8, a4: v23);
      (*(void (__fastcall **)(__int64, __int64, _BYTE *, __int64, _QWORD))(v17 + 1304))(
        a1: v19,
        a2: v20,
        a3: v23,
        a4: v19,
        a5: v18);
    }
  }
  return sub_132C8DE0(a1: v9, a2: v10, a3: v8, a4: (unsigned __int64)&v22 ^ v24, a5: v11, a6: v12);
}
