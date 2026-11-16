// sub_185052F80
// rva 0x05052f80  size 294  section .text  group text
// window base 0x185052f80: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
_DWORD *__fastcall sub_185052F80(__int64 a1, __int64 a2, _DWORD *a3)
{
  __int64 v3; // r13
  _DWORD *v4; // r14
  __int64 v5; // r15
  __int64 v6; // rax
  __int64 v7; // rdi
  __int64 v8; // r8
  __int64 v9; // rsi
  __int64 (__fastcall *v10)(__int64, __int64, _DWORD *, _QWORD, __int64); // rcx
  _DWORD *result; // rax
  __int64 v12; // rdi
  __int64 v13; // rsi
  __int64 v14; // [rsp+0h] [rbp-18h] BYREF
  _DWORD *v15; // [rsp+10h] [rbp-8h]

  v15 = a3;
  if ( (unsigned __int64)&v14 <= *(_QWORD *)(v5 + 8) )
  {
    MEMORY[0x181EB84E0]();
    goto LABEL_8;
  }
  v6 = MEMORY[0x18505FA40](a1, a2, a3: v4 + 94303524);
  if ( (unsigned __int16)v4[2 * v4[2 * (*v15 >> 3) + 5]
                          + 3
                          + (v4[2 * (*v15 >> 3) + 11] & (0x1E9Du >> HIBYTE(v4[2 * (*v15 >> 3) + 11])))] != 7837 )
  {
LABEL_8:
    result = (_DWORD *)MEMORY[0x182770780]();
LABEL_9:
    MEMORY[0x18276FC00](a1: v12, a2: v13, a3: result, a4: v15, a5: v4 + 10827990);
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
    return (_DWORD *)sub_1850530C0();
  }
  v8 = *v15 >> 3;
  v9 = v4[2 * v8 + 11] & (0x16BCu >> HIBYTE(v4[2 * v8 + 11]));
  v10 = (__int64 (__fastcall *)(__int64, __int64, _DWORD *, _QWORD, __int64))(v3
                                                                            + *(_QWORD *)((char *)&v4[2 * v8 + 8]
                                                                                        + HIWORD(v4[2 * (unsigned int)v4[2 * v8 + 5] + 3 + v9])));
  result = (_DWORD *)v10(a1: v7, a2: v9, a3: v15, a4: v10, a5: v6);
  if ( result != v4
    && (unsigned __int16)v4[2 * v4[2 * (*result >> 3) + 5]
                          + 3
                          + (v4[2 * (*result >> 3) + 11] & (0x1E9Du >> HIBYTE(v4[2 * (*result >> 3) + 11])))] != 7837 )
  {
    goto LABEL_9;
  }
  if ( *(int *)(v5 + 16) <= 0 )
    return (_DWORD *)MEMORY[0x18277F280]();
  return result;
}
