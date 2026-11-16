// sub_504F8A0
// rva 0x0504f8a0  size 346  section .text  group text
// window base 0x18504f8a0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
_DWORD *__fastcall sub_504F8A0(int a1, int a2, _DWORD *a3, __int64 a4, __int64 a5, int a6, int a7, __int64 a8)
{
  __int64 v8; // r13
  _DWORD *v9; // r14
  __int64 v10; // r15
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rax
  __int64 (*v14)(void); // rax
  _DWORD *result; // rax
  __int64 v16; // rdi
  __int64 v17; // rsi
  __int64 v18; // [rsp+0h] [rbp-18h] BYREF
  _DWORD *v19; // [rsp+10h] [rbp-8h]

  if ( (unsigned __int64)&v18 <= *(_QWORD *)(v10 + 8) )
  {
    v19 = a3;
    sub_1EB84E0();
  }
  else if ( (unsigned __int16)v9[2 * v9[2 * (*a3 >> 3) + 5]
                               + 3
                               + (v9[2 * (*a3 >> 3) + 11] & (0x1E9Du >> HIBYTE(v9[2 * (*a3 >> 3) + 11])))] == 7837 )
  {
    v11 = *(_QWORD *)(v10 + 40);
    v12 = v11 + 16;
    if ( (unsigned __int64)(v11 + 16) > *(_QWORD *)(v10 + 32) )
      return (_DWORD *)sub_18504F9A7(a1, a2, (_DWORD)a3, a4: v11, a5: v12, a6, a7, a8);
    *(_QWORD *)(v10 + 40) = v12;
    *(_DWORD *)v11 = 43312240;
    *(_DWORD *)(v11 + 4) = 0;
    *(_QWORD *)(v11 + 8) = 0;
    *(_DWORD *)(v11 + 4) = 47151633;
    v13 = *a3 >> 3;
    v14 = (__int64 (*)(void))(v8
                            + *(_QWORD *)((char *)&v9[2 * v13 + 8]
                                        + HIWORD(v9[2 * v9[2 * v13 + 5]
                                                  + 3
                                                  + (v9[2 * v13 + 11] & (0x16BCu >> HIBYTE(v9[2 * v13 + 11])))])));
    v19 = a3;
    result = (_DWORD *)v14();
    if ( result != v9
      && (unsigned __int16)v9[2 * v9[2 * (*result >> 3) + 5]
                            + 3
                            + (v9[2 * (*result >> 3) + 11] & (0x1E9Du >> HIBYTE(v9[2 * (*result >> 3) + 11])))] != 7837 )
    {
LABEL_10:
      sub_276FC00(a1: v16, a2: v17, a3: result, a4: v19, a5: v9 + 10827990);
      __builtin_debugtrap();
      __builtin_debugtrap();
      __builtin_debugtrap();
      __builtin_debugtrap();
      __builtin_debugtrap();
      __builtin_debugtrap();
      return (_DWORD *)sub_504FA00();
    }
    if ( *(int *)(v10 + 16) <= 0 )
      return (_DWORD *)sub_277F280();
    return result;
  }
  v19 = a3;
  result = (_DWORD *)sub_2770780();
  goto LABEL_10;
}
