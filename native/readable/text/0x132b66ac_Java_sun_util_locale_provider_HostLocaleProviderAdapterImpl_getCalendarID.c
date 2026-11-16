// Java_sun_util_locale_provider_HostLocaleProviderAdapterImpl_getCalendarID
// rva 0x132b66ac  size 108  section .text  group text
// window base 0x1932b66ac: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall Java_sun_util_locale_provider_HostLocaleProviderAdapterImpl_getCalendarID(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  __int64 result; // rax
  int v7; // edx
  int v8; // edi
  int v9; // r8d
  int v10; // r9d
  __int64 v11; // rdi
  unsigned int v12; // ebx
  __int64 v13; // rsi

  result = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, _QWORD))(*(_QWORD *)a4 + 1320LL))(
             a1: a4,
             a2,
             a3: a5,
             a4,
             a5: 0);
  if ( result != 0 )
  {
    v12 = sub_132B7580(a1: v8, a2: result, a3: v7, a4: result, a5: v9, a6: v10);
    (*(void (__fastcall **)(__int64, __int64, __int64, __int64, __int64))(*(_QWORD *)v11 + 1328LL))(
      a1: v11,
      a2: v13,
      a3: a5,
      a4: v11,
      a5: v13);
    return v12;
  }
  return result;
}
