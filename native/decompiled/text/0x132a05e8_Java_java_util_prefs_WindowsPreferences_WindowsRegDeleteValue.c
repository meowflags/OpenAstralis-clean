// Java_java_util_prefs_WindowsPreferences_WindowsRegDeleteValue
// rva 0x132a05e8  size 128  section .text  group text
// window base 0x1932a05e8: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall Java_java_util_prefs_WindowsPreferences_WindowsRegDeleteValue(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  __int64 v7; // rax
  __int64 v8; // rdi
  __int64 v9; // rsi
  __int64 v10; // rbp
  __int64 v11; // rdi
  unsigned int v12; // ebx
  __int64 v13; // rsi

  if ( a6 == 0 )
    return 0xFFFFFFFFLL;
  v7 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, _QWORD))(*(_QWORD *)a4 + 1472LL))(
         a1: a4,
         a2: a6,
         a3: a6,
         a4,
         a5: 0);
  v10 = v7;
  if ( v7 == 0 )
    return 0xFFFFFFFFLL;
  v12 = MEMORY[0x79060](a1: v8, a2: v9, a3: v7, a4: a5);
  (*(void (__fastcall **)(__int64, __int64, __int64, __int64, __int64, _QWORD))(*(_QWORD *)v11 + 1536LL))(
    a1: v11,
    a2: v13,
    a3: v13,
    a4: v11,
    a5: v10,
    a6: 0);
  return v12;
}
