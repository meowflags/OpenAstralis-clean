// Java_java_util_prefs_WindowsPreferences_WindowsRegSetValueEx
// rva 0x132a0b8c  size 266  section .text  group text
// window base 0x1932a0b8c: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall Java_java_util_prefs_WindowsPreferences_WindowsRegSetValueEx(
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
        __int64 a11)
{
  __int64 v14; // rdi
  __int64 v15; // rsi
  __int64 v16; // rdi
  __int64 v17; // rsi
  __int64 v18; // r14
  __int64 v19; // rax
  __int64 v20; // rsi
  __int64 v21; // rdi
  __int64 v22; // r15
  unsigned int v23; // eax
  __int64 v24; // rsi
  unsigned int v25; // edi

  if ( a6 == 0 )
    return 0xFFFFFFFFLL;
  if ( a11 == 0 )
    return 0xFFFFFFFFLL;
  (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a4 + 1368LL))(a1, a2, a3: a11);
  v18 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, _QWORD))(*(_QWORD *)a4 + 1472LL))(
          a1: v14,
          a2: v15,
          a3: a11,
          a4,
          a5: 0);
  if ( v18 == 0 )
    return 0xFFFFFFFFLL;
  v19 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, _QWORD))(*(_QWORD *)a4 + 1472LL))(
          a1: v16,
          a2: v17,
          a3: a6,
          a4,
          a5: 0);
  v21 = 0xFFFFFFFFLL;
  v22 = v19;
  if ( v19 != 0 )
  {
    v23 = MEMORY[0x791C0](a1: 0xFFFFFFFFLL, a2: v20, a3: v19, a4: a5, a5: 0, a6: 1);
    (*(void (__fastcall **)(_QWORD, __int64, __int64, __int64, __int64, _QWORD))(*(_QWORD *)a4 + 1536LL))(
      a1: v23,
      a2: v24,
      a3: a6,
      a4,
      a5: v22,
      a6: 0);
  }
  (*(void (__fastcall **)(__int64, __int64, __int64, __int64, __int64, _QWORD))(*(_QWORD *)a4 + 1536LL))(
    a1: v21,
    a2: v20,
    a3: a11,
    a4,
    a5: v18,
    a6: 0);
  return v25;
}
