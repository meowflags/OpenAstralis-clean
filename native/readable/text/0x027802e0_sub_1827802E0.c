// sub_27802E0
// rva 0x027802e0  size 402  section .text  group text
// window base 0x1827802e0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_27802E0(__int64 a1, __int64 a2, __m128 a3, __int64 a4, __int64 a5, __int64 a6, __int64 a7)
{
  __int64 v7; // r13
  unsigned int *v8; // r14
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 i; // rcx
  __int64 v18; // rdi
  __int64 v19; // rsi
  __int64 v20; // rax

  v9 = v8[94167255];
  if ( (_DWORD)v9 == 0
    || (v10 = v8[2 * v9] >> 3,
        v11 = v8[2 * v10 + 11] & (0x252u >> HIBYTE(v8[2 * v10 + 11])),
        ((void (__fastcall *)(__int64, __int64, unsigned int *, __int64))(v7
                                                                        + *(_QWORD *)((char *)&v8[2 * v10]
                                                                                    + HIWORD(v8[2 * v8[2 * v10 + 5]
                                                                                              + 3
                                                                                              + v11]))))(
          a1,
          a2: v11,
          a3: &v8[2 * v9],
          a4: a6),
        (_DWORD)(v12 = v8[94167254]) == 0)
    || (v13 = v8[2 * v12] >> 3,
        ((void (__fastcall *)(__int64, __int64, unsigned int *, _QWORD, __int64, __int64))(v7
                                                                                         + *(_QWORD *)((char *)&v8[2 * v13] + HIWORD(v8[2 * v8[2 * v13 + 5] + 3 + (v8[2 * v13 + 11] & (0x252u >> HIBYTE(v8[2 * v13 + 11])))]))))(
          a1,
          a2,
          a3: &v8[2 * v12],
          a4: HIBYTE(v8[2 * v13 + 11]),
          a5: a6,
          a6: a7),
        (_DWORD)(v14 = v8[94167253]) == 0) )
  {
    sub_276E420(a1, a2, a3);
    for ( i = v20; ; i = sub_28C1D00(a1: v18, a2: v19, a3: i) )
      ;
  }
  v15 = v8[2 * v14] >> 3;
  return ((__int64 (__fastcall *)(__int64, __int64, unsigned int *, _QWORD, __int64, __int64))(v7
                                                                                             + *(_QWORD *)((char *)&v8[2 * v15] + HIWORD(v8[2 * v8[2 * v15 + 5] + 3 + (v8[2 * v15 + 11] & (0x252u >> HIBYTE(v8[2 * v15 + 11])))]))))(
           a1,
           a2,
           a3: &v8[2 * v14],
           a4: HIBYTE(v8[2 * v15 + 11]),
           a5: a6,
           a6: a7);
}
