// Java_java_util_prefs_WindowsPreferences_WindowsRegEnumValue
// rva 0x132a0750  size 231  section .text  group text
// window base 0x1932a0750: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall Java_java_util_prefs_WindowsPreferences_WindowsRegEnumValue(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        unsigned int a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        int a11)
{
  __int64 v12; // rax
  __int64 v13; // rdi
  __int64 v14; // rsi
  __int64 v15; // rbx
  __int64 v16; // rbp
  __int64 v18; // rdx
  __int64 v19; // rdi
  __int64 v20; // rsi
  __int64 v21; // rax

  v12 = __imp_api-ms-win-crt-heap-l1-1-0.dll!malloc(a1: a4, a2: a6, a3, a4: a11);
  v15 = 0;
  v16 = v12;
  if ( v12 != 0 )
  {
    if ( (unsigned int)__imp_ADVAPI32.dll!RegEnumValueA(a1: v13, a2: v14, a3: (unsigned int)v14, a4: a5, a5: v12, a6: &a11) == 0 )
    {
      v21 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64))(*(_QWORD *)v19 + 1408LL))(
              a1: v19,
              a2: v20,
              a3: (unsigned int)(a11 + 1),
              a4: v19);
      v20 = v21;
      if ( v21 != 0 )
        (*(void (__fastcall **)(__int64, __int64, __int64, __int64, _QWORD, _QWORD))(*(_QWORD *)v19 + 1664LL))(
          a1: v19,
          a2: v21,
          a3: v21,
          a4: v19,
          a5: 0,
          a6: (unsigned int)(a11 + 1));
      v15 = v20;
    }
    __imp_api-ms-win-crt-heap-l1-1-0.dll!free(a1: v19, a2: v20, a3: v18, a4: v16);
    return v15;
  }
  else
  {
    JNU_ThrowOutOfMemoryError(a1: v13, a2: v14, a3: 533920, a4: v13);
    return 0;
  }
}
