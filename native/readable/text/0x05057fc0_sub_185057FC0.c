// sub_5057FC0
// rva 0x05057fc0  size 299  section .text  group text
// window base 0x185057fc0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
_DWORD *__fastcall sub_5057FC0(__int64 a1, __int64 a2, _DWORD *a3, __int64 a4, __int64 a5)
{
  __int64 v5; // r13
  _DWORD *v6; // r14
  __int64 v7; // r15
  __int64 v8; // rax
  __int64 v9; // rdi
  __int64 v10; // r8
  __int64 v11; // rsi
  __int64 (__fastcall *v12)(__int64, __int64, _DWORD *, _QWORD, __int64); // rcx
  _DWORD *result; // rax
  __int64 v14; // rdi
  __int64 v15; // rsi
  __int64 v16; // [rsp+0h] [rbp-18h] BYREF
  __int64 v17; // [rsp+8h] [rbp-10h]
  _DWORD *v18; // [rsp+10h] [rbp-8h]

  v18 = a3;
  if ( (unsigned __int64)&v16 <= *(_QWORD *)(v7 + 8) )
  {
    v17 = a5;
    sub_1EB84E0();
    goto LABEL_8;
  }
  v17 = a5;
  v8 = sub_5061200(a1, a2, a3: a5);
  if ( (unsigned __int16)v6[2 * v6[2 * (*v18 >> 3) + 5]
                          + 3
                          + (v6[2 * (*v18 >> 3) + 11] & (0x1E9Du >> HIBYTE(v6[2 * (*v18 >> 3) + 11])))] != 7837 )
  {
LABEL_8:
    result = (_DWORD *)sub_2770780();
LABEL_9:
    sub_276FC00(a1: v14, a2: v15, a3: result, a4: v18, a5: v6 + 10827990);
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
    return (_DWORD *)sub_5058100();
  }
  v10 = *v18 >> 3;
  v11 = v6[2 * v10 + 11] & (0x16BCu >> HIBYTE(v6[2 * v10 + 11]));
  v12 = (__int64 (__fastcall *)(__int64, __int64, _DWORD *, _QWORD, __int64))(v5
                                                                            + *(_QWORD *)((char *)&v6[2 * v10 + 8]
                                                                                        + HIWORD(v6[2 * (unsigned int)v6[2 * v10 + 5] + 3 + v11])));
  result = (_DWORD *)v12(a1: v9, a2: v11, a3: v18, a4: v12, a5: v8);
  if ( result != v6
    && (unsigned __int16)v6[2 * v6[2 * (*result >> 3) + 5]
                          + 3
                          + (v6[2 * (*result >> 3) + 11] & (0x1E9Du >> HIBYTE(v6[2 * (*result >> 3) + 11])))] != 7837 )
  {
    goto LABEL_9;
  }
  if ( *(int *)(v7 + 16) <= 0 )
    return (_DWORD *)sub_277F280();
  return result;
}
