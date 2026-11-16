// sub_1827817C0
// rva 0x027817c0  size 143  section .text  group text
// window base 0x1827817c0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1827817C0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __m128 a5,
        __m128 a6,
        __m128 a7,
        __m128 a8,
        __m128 a9,
        __m128 a10,
        __m128 a11,
        __m128 a12,
        __int64 a13,
        _DWORD *a14)
{
  _DWORD *v14; // r14
  __int64 v15; // r15
  __int64 v16; // r8
  __int64 v17; // rax
  __int64 result; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rdi
  __int64 v22; // rsi
  char v23; // [rsp+0h] [rbp-18h] BYREF
  __int64 v24; // [rsp+8h] [rbp-10h]
  _DWORD *v25; // [rsp+10h] [rbp-8h]

  v16 = (__int64)(v14 + 94153030);
  if ( (unsigned __int64)&v23 <= *(_QWORD *)(v15 + 8) )
  {
    v25 = a14;
    v24 = a3;
    MEMORY[0x181EB83C0](a1, a2, a3, a4, a5: v16);
LABEL_12:
    v25 = a14;
    v24 = a3;
    sub_18276EFE0(a1, a2, a3, a4, a5: v16, a6: (_DWORD)a14, a7: v23);
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
    return sub_182781860();
  }
  if ( a14 != v14 )
  {
    v17 = *a14 >> 3;
    if ( SHIWORD(v14[2 * v17 + 15]) < 2 || v14[2 * v14[2 * v17 + 4] + 4] != 1958 )
      sub_18276EAE0(
        a1,
        a2,
        a3,
        a4,
        a5: v16,
        a6: (__int64)a14,
        a7: a5,
        a8: a6,
        a9: a7,
        a10: a8,
        a11: a9,
        a12: a10,
        a13: a11,
        a14: a12,
        a15: v23);
  }
  if ( a14 == v14 )
    goto LABEL_12;
  v24 = a3;
  v25 = a14;
  result = sub_182781BA0(a1, a2, a3: a14, a4, a5: v16, a6: 0);
  if ( *(int *)(v15 + 16) <= 0 )
    return sub_18277F280(a1: v21, a2: v22, a3: v19, a4: v20);
  return result;
}
