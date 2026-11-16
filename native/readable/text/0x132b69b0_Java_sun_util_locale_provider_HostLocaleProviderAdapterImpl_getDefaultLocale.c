// Java_sun_util_locale_provider_HostLocaleProviderAdapterImpl_getDefaultLocale
// rva 0x132b69b0  size 122  section .text  group text
// window base 0x1932b69b0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall Java_sun_util_locale_provider_HostLocaleProviderAdapterImpl_getDefaultLocale(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5)
{
  __int64 v5; // rbx
  unsigned __int16 v6; // ax
  int v7; // edx
  int v8; // edi
  int v9; // esi
  int v10; // r8d
  int v11; // r9d
  __int64 v12; // rax
  __int64 v13; // rsi
  __int64 v14; // rdx
  __int64 v15; // rdi
  __int64 v16; // rsi

  v5 = 0;
  if ( a5 != 0 )
    v6 = __imp_KERNEL32.dll!GetUserDefaultLCID(a1, a2: a4);
  else
    v6 = __imp_KERNEL32.dll!GetUserDefaultUILanguage(a1, a2: a4);
  v12 = getJavaIDFromLangID(a1: v8, a2: v9, a3: v7, a4: v6, a5: v10, a6: v11);
  if ( v12 != 0 )
  {
    v5 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)v13 + 1336LL))(
           a1: v12,
           a2: v13,
           a3: v12,
           a4: v13);
    __imp_api-ms-win-crt-heap-l1-1-0.dll!free(a1: v15, a2: v16, a3: v14, a4: v15);
  }
  else
  {
    JNU_ThrowOutOfMemoryError(a1: 0, a2: v13, a3: 545040, a4: v13);
  }
  return v5;
}
