// Java_java_util_prefs_WindowsPreferences_WindowsRegOpenKey
// rva 0x132a0844  size 223  section .text  group text
// window base 0x1932a0844: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall Java_java_util_prefs_WindowsPreferences_WindowsRegOpenKey(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        unsigned int a11)
{
  __int64 result; // rax
  __int64 v14; // rdi
  __int64 v15; // rdi
  __int64 v16; // rsi
  __int64 v17; // rdi
  __int64 v18; // rbx
  __int64 v19; // rdi
  __int64 v20; // rsi

  result = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, _QWORD))(*(_QWORD *)a4 + 1472LL))(
             a1: a4,
             a2,
             a3: a6,
             a4,
             a5: 0);
  if ( result != 0 )
  {
    __imp_ADVAPI32.dll!RegOpenKeyExA(a1: v14, a2: result, a3: result, a4: a5, a5: 0, a6: a11);
    (*(void (__fastcall **)(__int64, __int64, __int64, __int64, __int64, _QWORD))(*(_QWORD *)v15 + 1536LL))(
      a1: v15,
      a2: v16,
      a3: a6,
      a4: v15,
      a5: v16,
      a6: 0);
    v18 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)v17 + 1440LL))(
            a1: v17,
            a2: 2,
            a3: 2,
            a4: v17);
    if ( v18 != 0 )
      (*(void (__fastcall **)(__int64, __int64, __int64, __int64, _QWORD, _QWORD))(*(_QWORD *)v19 + 1696LL))(
        a1: v19,
        a2: v20,
        a3: v18,
        a4: v19,
        a5: 0,
        a6: (unsigned int)v20);
    return v18;
  }
  return result;
}
