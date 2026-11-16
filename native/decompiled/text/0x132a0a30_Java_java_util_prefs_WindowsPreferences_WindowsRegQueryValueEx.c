// Java_java_util_prefs_WindowsPreferences_WindowsRegQueryValueEx
// rva 0x132a0a30  size 348  section .text  group text
// window base 0x1932a0a30: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall Java_java_util_prefs_WindowsPreferences_WindowsRegQueryValueEx(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        unsigned int a7)
{
  __int64 v10; // rdi
  __int64 v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // rdi
  __int64 v14; // rsi
  __int64 v15; // rdi
  __int64 v16; // rsi
  __int64 v17; // rdx
  __int64 v18; // rdi
  __int64 v19; // rsi
  __int64 v20; // rax
  __int64 v21; // rbp
  __int64 v22; // rdi
  __int64 v23; // rsi
  _DWORD v25[10]; // [rsp+30h] [rbp-28h] BYREF

  v10 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, _QWORD))(*(_QWORD *)a4 + 1472LL))(
          a1,
          a2,
          a3: a6,
          a4,
          a5: 0);
  if ( v10 == 0 )
    return 0;
  if ( (unsigned int)MEMORY[0x79038](a1: v10, a2: v11, a3: v10, a4: a5, a5: 0, a6: v25) != 0 )
  {
LABEL_12:
    (*(void (__fastcall **)(__int64, __int64, __int64, __int64, __int64, _QWORD))(*(_QWORD *)a4 + 1536LL))(
      a1: v13,
      a2: v14,
      a3: a6,
      a4,
      a5: v13,
      a6: 0);
    return 0;
  }
  v16 = MEMORY[0x79AD0](a1: v13, a2: v14, a3: v12, a4: a7);
  if ( v16 == 0 )
  {
    sub_1932B15D0(a1: v15, a2: 0, a3: 533920, a4);
    goto LABEL_12;
  }
  if ( (unsigned int)MEMORY[0x79038](a1: v15, a2: v16, a3: v15, a4: a5, a5: 0, a6: v25) != 0 )
  {
    MEMORY[0x79AE0](a1: v18, a2: v19, a3: v17, a4: v19);
    goto LABEL_12;
  }
  if ( v25[0] == 1 )
  {
    v20 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64))(*(_QWORD *)a4 + 1408LL))(
            a1: v18,
            a2: v19,
            a3: a7,
            a4);
    v21 = v20;
    if ( v20 != 0 )
      (*(void (__fastcall **)(__int64, __int64, __int64, __int64, _QWORD, _QWORD))(*(_QWORD *)a4 + 1664LL))(
        a1: v18,
        a2: v19,
        a3: v20,
        a4,
        a5: 0,
        a6: a7);
  }
  else
  {
    v21 = 0;
  }
  MEMORY[0x79AE0](a1: v18, a2: v19, a3: v17, a4: v19);
  (*(void (__fastcall **)(__int64, __int64, __int64, __int64, __int64, _QWORD))(*(_QWORD *)a4 + 1536LL))(
    a1: v22,
    a2: v23,
    a3: a6,
    a4,
    a5: v22,
    a6: 0);
  return v21;
}
