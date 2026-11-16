// sub_18504CBA0
// rva 0x0504cba0  size 390  section .text  group text
// window base 0x18504cba0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
_DWORD *__fastcall sub_18504CBA0(__int64 a1, __int64 a2, _DWORD *a3, __int64 a4, __int64 a5, __int64 a6, char a7)
{
  __int64 v7; // r13
  _DWORD *v8; // r14
  __int64 v9; // r15
  __int64 v10; // r9
  __int64 v11; // rdi
  __int64 v12; // rsi
  __int64 v13; // r8
  _DWORD *result; // rax
  __int64 v15; // rdi
  __int64 v16; // rsi
  int v17; // edx
  int v18; // ecx
  int v19; // edi
  int v20; // esi
  int v21; // r8d
  int v22; // r9d
  __int64 v23; // [rsp+0h] [rbp-28h] BYREF
  __int64 v24; // [rsp+10h] [rbp-18h]
  __int64 v25; // [rsp+18h] [rbp-10h]
  _DWORD *v26; // [rsp+20h] [rbp-8h]

  v26 = a3;
  if ( (unsigned __int64)&v23 <= *(_QWORD *)(v9 + 8) )
  {
    v25 = a5;
    MEMORY[0x181EB84E0]();
LABEL_12:
    result = (_DWORD *)MEMORY[0x182770780]();
LABEL_13:
    MEMORY[0x18276FC00](a1: v15, a2: v16, a3: result, a4: v26, a5: v8 + 10822858);
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    return (_DWORD *)sub_18504CD40(a1: v19, a2: v20, a3: v17, a4: v18, a5: v21, a6: v22, a7);
  }
  v10 = *(_QWORD *)(v9 + 40);
  if ( (unsigned __int64)(v10 + 24) > *(_QWORD *)(v9 + 32) )
  {
    v25 = a5;
    v10 = MEMORY[0x181EAA920](a1, a2, a3: 43309984);
    a5 = v25;
  }
  else
  {
    *(_QWORD *)(v9 + 40) = v10 + 24;
    *(_DWORD *)v10 = 43309984;
    *(_DWORD *)(v10 + 4) = 0;
    *(_QWORD *)(v10 + 8) = 0;
    *(_QWORD *)(v10 + 16) = 0;
  }
  v24 = v10;
  v25 = a5;
  MEMORY[0x185F26720](a1, a2, a3: v10, a4, a5: v8 + 94303204, a6: a5);
  if ( (unsigned __int16)v8[2 * v8[2 * (*v26 >> 3) + 5]
                          + 3
                          + (v8[2 * (*v26 >> 3) + 11] & (0x1E99u >> HIBYTE(v8[2 * (*v26 >> 3) + 11])))] != 7833 )
    goto LABEL_12;
  v13 = *v26 >> 3;
  result = (_DWORD *)((__int64 (__fastcall *)(__int64, __int64, _DWORD *, _DWORD *, __int64))(v7
                                                                                            + *(_QWORD *)((char *)&v8[2 * v13 + 8] + HIWORD(v8[2 * v8[2 * v13 + 5] + 3 + (v8[2 * v13 + 11] & (0x16BCu >> HIBYTE(v8[2 * v13 + 11])))]))))(
                       a1: v11,
                       a2: v12,
                       a3: v26,
                       a4: v26,
                       a5: v24);
  if ( result != v8
    && (unsigned __int16)v8[2 * v8[2 * (*result >> 3) + 5]
                          + 3
                          + (v8[2 * (*result >> 3) + 11] & (0x1E99u >> HIBYTE(v8[2 * (*result >> 3) + 11])))] != 7833 )
  {
    goto LABEL_13;
  }
  if ( *(int *)(v9 + 16) <= 0 )
    return (_DWORD *)MEMORY[0x18277F280]();
  return result;
}
