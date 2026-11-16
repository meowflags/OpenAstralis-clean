// sub_185055D00
// rva 0x05055d00  size 304  section .text  group text
// window base 0x185055d00: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
_DWORD *__fastcall sub_185055D00(__int64 a1, __int64 a2, _DWORD *a3, __int64 a4, __int64 a5, __int64 a6, char a7)
{
  __int64 v7; // r13
  _DWORD *v8; // r14
  __int64 v9; // r15
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rdi
  __int64 v13; // rsi
  __int64 v14; // rax
  __int64 v15; // rdi
  __int64 v16; // r8
  __int64 v17; // rsi
  __int64 (__fastcall *v18)(__int64, __int64, _DWORD *, _QWORD, __int64); // rcx
  _DWORD *result; // rax
  __int64 v20; // rdi
  __int64 v21; // rsi
  int v22; // edx
  int v23; // ecx
  int v24; // edi
  int v25; // esi
  int v26; // r8d
  int v27; // r9d
  __int64 v28; // [rsp+0h] [rbp-18h] BYREF
  __int64 v29; // [rsp+8h] [rbp-10h]
  _DWORD *v30; // [rsp+10h] [rbp-8h]

  v30 = a3;
  if ( (unsigned __int64)&v28 <= *(_QWORD *)(v9 + 8) )
  {
    v29 = a5;
    MEMORY[0x181EB84E0]();
    goto LABEL_8;
  }
  v29 = a5;
  v10 = MEMORY[0x185F47A60](a1, a2, a3: a5);
  v14 = MEMORY[0x18505F780](a1: v12, a2: v13, a3: v10, a4: v11, a5: v29);
  if ( (unsigned __int16)v8[2 * v8[2 * (*v30 >> 3) + 5]
                          + 3
                          + (v8[2 * (*v30 >> 3) + 11] & (0x1E9Du >> HIBYTE(v8[2 * (*v30 >> 3) + 11])))] != 7837 )
  {
LABEL_8:
    result = (_DWORD *)MEMORY[0x182770780]();
LABEL_9:
    MEMORY[0x18276FC00](a1: v20, a2: v21, a3: result, a4: v30, a5: v8 + 10827990);
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
    return (_DWORD *)sub_185055E40(a1: v24, a2: v25, a3: v22, a4: v23, a5: v26, a6: v27, a7);
  }
  v16 = *v30 >> 3;
  v17 = v8[2 * v16 + 11] & (0x16BCu >> HIBYTE(v8[2 * v16 + 11]));
  v18 = (__int64 (__fastcall *)(__int64, __int64, _DWORD *, _QWORD, __int64))(v7
                                                                            + *(_QWORD *)((char *)&v8[2 * v16 + 8]
                                                                                        + HIWORD(v8[2 * (unsigned int)v8[2 * v16 + 5] + 3 + v17])));
  result = (_DWORD *)v18(a1: v15, a2: v17, a3: v30, a4: v18, a5: v14);
  if ( result != v8
    && (unsigned __int16)v8[2 * v8[2 * (*result >> 3) + 5]
                          + 3
                          + (v8[2 * (*result >> 3) + 11] & (0x1E9Du >> HIBYTE(v8[2 * (*result >> 3) + 11])))] != 7837 )
  {
    goto LABEL_9;
  }
  if ( *(int *)(v9 + 16) <= 0 )
    return (_DWORD *)MEMORY[0x18277F280]();
  return result;
}
