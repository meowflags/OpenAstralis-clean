// sub_18504F540
// rva 0x0504f540  size 309  section .text  group text
// window base 0x18504f540: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
_DWORD *__fastcall sub_18504F540(__int64 a1, __int64 a2, _DWORD *a3, __int64 a4, __int64 a5)
{
  __int64 v5; // r13
  _DWORD *v6; // r14
  __int64 v7; // r15
  __int64 v8; // rdi
  __int64 v9; // rsi
  __int64 v10; // rax
  __int64 v11; // rdi
  __int64 v12; // r8
  __int64 v13; // rsi
  __int64 (__fastcall *v14)(__int64, __int64, _DWORD *, _QWORD, __int64); // rcx
  _DWORD *result; // rax
  __int64 v16; // rdi
  __int64 v17; // rsi
  __int64 v18; // [rsp+0h] [rbp-28h] BYREF
  __int64 v19; // [rsp+10h] [rbp-18h]
  __int64 v20; // [rsp+18h] [rbp-10h]
  _DWORD *v21; // [rsp+20h] [rbp-8h]

  v21 = a3;
  if ( (unsigned __int64)&v18 <= *(_QWORD *)(v7 + 8) )
  {
    v20 = a5;
    MEMORY[0x181EB84E0]();
    goto LABEL_8;
  }
  v20 = a5;
  v19 = MEMORY[0x185F46D60](a1, a2, a3: a5);
  v10 = MEMORY[0x18505F120](a1: v8, a2: v9, a3: v19);
  if ( (unsigned __int16)v6[2 * v6[2 * (*v21 >> 3) + 5]
                          + 3
                          + (v6[2 * (*v21 >> 3) + 11] & (0x1E9Du >> HIBYTE(v6[2 * (*v21 >> 3) + 11])))] != 7837 )
  {
LABEL_8:
    result = (_DWORD *)MEMORY[0x182770780]();
LABEL_9:
    MEMORY[0x18276FC00](a1: v16, a2: v17, a3: result, a4: v21, a5: v6 + 10827990);
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
    return (_DWORD *)sub_18504F680();
  }
  v12 = *v21 >> 3;
  v13 = v6[2 * v12 + 11] & (0x16BCu >> HIBYTE(v6[2 * v12 + 11]));
  v14 = (__int64 (__fastcall *)(__int64, __int64, _DWORD *, _QWORD, __int64))(v5
                                                                            + *(_QWORD *)((char *)&v6[2 * v12 + 8]
                                                                                        + HIWORD(v6[2 * (unsigned int)v6[2 * v12 + 5] + 3 + v13])));
  result = (_DWORD *)v14(a1: v11, a2: v13, a3: v21, a4: v14, a5: v10);
  if ( result != v6
    && (unsigned __int16)v6[2 * v6[2 * (*result >> 3) + 5]
                          + 3
                          + (v6[2 * (*result >> 3) + 11] & (0x1E9Du >> HIBYTE(v6[2 * (*result >> 3) + 11])))] != 7837 )
  {
    goto LABEL_9;
  }
  if ( *(int *)(v7 + 16) <= 0 )
    return (_DWORD *)MEMORY[0x18277F280]();
  return result;
}
