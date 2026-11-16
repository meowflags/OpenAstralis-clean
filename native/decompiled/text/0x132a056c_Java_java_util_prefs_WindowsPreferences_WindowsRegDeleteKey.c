// Java_java_util_prefs_WindowsPreferences_WindowsRegDeleteKey
// rva 0x132a056c  size 123  section .text  group text
// window base 0x1932a056c: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall Java_java_util_prefs_WindowsPreferences_WindowsRegDeleteKey(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  __int64 v8; // rax
  __int64 v9; // rdi
  __int64 v11; // rdi
  unsigned int v12; // ebx
  __int64 v13; // rsi

  v8 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, _QWORD))(*(_QWORD *)a4 + 1472LL))(
         a1: a4,
         a2,
         a3: a6,
         a4,
         a5: 0);
  if ( v8 == 0 )
    return 0xFFFFFFFFLL;
  v12 = MEMORY[0x79058](a1: v9, a2: v8, a3: v8, a4: a5);
  (*(void (__fastcall **)(__int64, __int64, __int64, __int64, __int64, _QWORD))(*(_QWORD *)v11 + 1536LL))(
    a1: v11,
    a2: v13,
    a3: a6,
    a4: v11,
    a5: v13,
    a6: 0);
  return v12;
}
