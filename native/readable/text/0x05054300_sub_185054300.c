// sub_5054300
// rva 0x05054300  size 309  section .text  group text
// window base 0x185054300: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
_DWORD *__fastcall sub_5054300(__int64 a1, __int64 a2, _DWORD *a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r13
  _DWORD *v7; // r14
  __int64 v8; // r15
  __int64 v9; // rax
  __int64 v10; // rdi
  __int64 v11; // r8
  __int64 v12; // rsi
  __int64 (__fastcall *v13)(__int64, __int64, _DWORD *, _QWORD, __int64); // rcx
  _DWORD *result; // rax
  __int64 v15; // rdi
  __int64 v16; // rsi
  __int64 v17; // [rsp+0h] [rbp-28h] BYREF
  __int64 v18; // [rsp+10h] [rbp-18h]
  __int64 v19; // [rsp+18h] [rbp-10h]
  _DWORD *v20; // [rsp+20h] [rbp-8h]

  v20 = a3;
  if ( (unsigned __int64)&v17 <= *(_QWORD *)(v8 + 8) )
  {
    v18 = a6;
    v19 = a5;
    sub_1EB84E0();
    goto LABEL_8;
  }
  v19 = a5;
  v18 = a6;
  v9 = sub_5060C00(a1, a2, a3: a5, a4, a5: a6);
  if ( (unsigned __int16)v7[2 * v7[2 * (*v20 >> 3) + 5]
                          + 3
                          + (v7[2 * (*v20 >> 3) + 11] & (0x1E9Du >> HIBYTE(v7[2 * (*v20 >> 3) + 11])))] != 7837 )
  {
LABEL_8:
    result = (_DWORD *)sub_2770780();
LABEL_9:
    sub_276FC00(a1: v15, a2: v16, a3: result, a4: v20, a5: v7 + 10827990, a6: v18);
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
    return (_DWORD *)sub_5054440();
  }
  v11 = *v20 >> 3;
  v12 = v7[2 * v11 + 11] & (0x16BCu >> HIBYTE(v7[2 * v11 + 11]));
  v13 = (__int64 (__fastcall *)(__int64, __int64, _DWORD *, _QWORD, __int64))(v6
                                                                            + *(_QWORD *)((char *)&v7[2 * v11 + 8]
                                                                                        + HIWORD(v7[2 * (unsigned int)v7[2 * v11 + 5] + 3 + v12])));
  result = (_DWORD *)v13(a1: v10, a2: v12, a3: v20, a4: v13, a5: v9);
  if ( result != v7
    && (unsigned __int16)v7[2 * v7[2 * (*result >> 3) + 5]
                          + 3
                          + (v7[2 * (*result >> 3) + 11] & (0x1E9Du >> HIBYTE(v7[2 * (*result >> 3) + 11])))] != 7837 )
  {
    goto LABEL_9;
  }
  if ( *(int *)(v8 + 16) <= 0 )
    return (_DWORD *)sub_277F280();
  return result;
}
