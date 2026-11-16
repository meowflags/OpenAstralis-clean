// sub_5055920
// rva 0x05055920  size 351  section .text  group text
// window base 0x185055920: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
_DWORD *__fastcall sub_5055920(__int64 a1, __int64 a2, _DWORD *a3, __int64 a4, _DWORD *a5)
{
  __int64 v5; // r13
  _DWORD *v6; // r14
  __int64 v7; // r15
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 (*v10)(void); // rax
  _DWORD *result; // rax
  __int64 v12; // rdi
  __int64 v13; // rsi
  __int64 v14; // [rsp+0h] [rbp-18h] BYREF
  _DWORD *v15; // [rsp+8h] [rbp-10h]
  _DWORD *v16; // [rsp+10h] [rbp-8h]

  if ( (unsigned __int64)&v14 <= *(_QWORD *)(v7 + 8) )
  {
    v15 = a5;
    v16 = a3;
    sub_1EB84E0();
    goto LABEL_10;
  }
  if ( a5 != v6 )
  {
    v8 = *a5 >> 3;
    if ( (_DWORD)v8 != 5414078 )
      goto LABEL_11;
  }
  if ( (unsigned __int16)v6[2 * v6[2 * (*a3 >> 3) + 5]
                          + 3
                          + (v6[2 * (*a3 >> 3) + 11] & (0x1E9Du >> HIBYTE(v6[2 * (*a3 >> 3) + 11])))] != 7837 )
  {
LABEL_10:
    v15 = a5;
    v16 = a3;
    sub_2770780();
LABEL_11:
    v15 = a5;
    v16 = a3;
    result = (_DWORD *)sub_276FC00(a1, a2, a3: a5, a4: v8, a5: v6 + 10828156);
LABEL_12:
    sub_276FC00(a1: v12, a2: v13, a3: result, a4: v16, a5: v6 + 10827990);
    __builtin_debugtrap();
    return (_DWORD *)sub_5055A80();
  }
  v9 = *a3 >> 3;
  v10 = (__int64 (*)(void))(v5
                          + *(_QWORD *)((char *)&v6[2 * v9 + 8]
                                      + HIWORD(v6[2 * v6[2 * v9 + 5]
                                                + 3
                                                + (v6[2 * v9 + 11] & (0x16BCu >> HIBYTE(v6[2 * v9 + 11])))])));
  v16 = a3;
  v15 = a5;
  result = (_DWORD *)v10();
  if ( result != v6
    && (unsigned __int16)v6[2 * v6[2 * (*result >> 3) + 5]
                          + 3
                          + (v6[2 * (*result >> 3) + 11] & (0x1E9Du >> HIBYTE(v6[2 * (*result >> 3) + 11])))] != 7837 )
  {
    goto LABEL_12;
  }
  if ( *(int *)(v7 + 16) <= 0 )
    return (_DWORD *)sub_277F280();
  return result;
}
