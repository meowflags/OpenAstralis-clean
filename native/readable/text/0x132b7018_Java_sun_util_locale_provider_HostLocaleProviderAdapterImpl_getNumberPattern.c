// Java_sun_util_locale_provider_HostLocaleProviderAdapterImpl_getNumberPattern
// rva 0x132b7018  size 176  section .text  group text
// window base 0x1932b7018: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall Java_sun_util_locale_provider_HostLocaleProviderAdapterImpl_getNumberPattern(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        __int64 a6)
{
  __int64 v7; // rbx
  __int64 result; // rax
  int v9; // edi
  int v10; // esi
  int v11; // r8d
  int v12; // r9d
  __int64 v13; // rbp
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 *v16; // rdi
  __int64 v17; // rsi
  __int64 v18; // rbx
  unsigned int v19; // eax
  __int64 v20; // rdi
  __int64 v21; // rsi
  __int64 v22; // rdx
  __int64 v23; // rdi
  __int64 v24; // rsi

  v7 = 0;
  result = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int64, _QWORD))(*(_QWORD *)a4 + 1320LL))(
             a1: a4,
             a2: a5,
             a3: a6,
             a4,
             a5: 0);
  v13 = result;
  if ( result != 0 )
  {
    v14 = sub_132B7C24(a1: v9, a2: v10, a3: v10, a4: result, a5: v11, a6: v12);
    v17 = v14;
    if ( v14 != 0 )
    {
      v18 = *v16;
      v19 = __imp_api-ms-win-crt-string-l1-1-0.dll!wcslen(a1: v16, a2: v14, a3: v15, a4: v14);
      v7 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, _QWORD))(v18 + 1304))(
             a1: v20,
             a2: v21,
             a3: v21,
             a4: v20,
             a5: v19);
      __imp_api-ms-win-crt-heap-l1-1-0.dll!free(a1: v23, a2: v24, a3: v22, a4: v24);
    }
    (*(void (__fastcall **)(__int64 *, __int64, __int64, __int64 *, __int64))(*v16 + 1328))(
      a1: v16,
      a2: v17,
      a3: a6,
      a4: v16,
      a5: v13);
    return v7;
  }
  return result;
}
