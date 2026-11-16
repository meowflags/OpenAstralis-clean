// sub_182779340
// rva 0x02779340  size 239  section .text  group text
// window base 0x182779340: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_182779340(
        __int64 a1,
        __int64 a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        __m128 a7,
        __m128 a8,
        __m128 a9,
        __m128 a10,
        __int64 a11,
        __int64 a12,
        _DWORD *a13,
        __int64 a14,
        char a15)
{
  _DWORD *v15; // r14
  __int64 v16; // r15
  __int64 result; // rax
  __int64 v18; // rdx
  __int64 v19; // rdi
  __int64 v20; // rsi
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // [rsp+0h] [rbp-18h] BYREF
  _DWORD *v25; // [rsp+8h] [rbp-10h]
  char *v26; // [rsp+10h] [rbp-8h]

  if ( (unsigned __int64)&v24 <= *(_QWORD *)(v16 + 8) )
  {
    MEMORY[0x181EB84E0]();
    JUMPOUT(0x18277942FLL);
  }
  if ( a13 == v15 || *a13 >> 3 != 5067607 )
  {
    v26 = &a15;
    v25 = a13;
    result = sub_18277B240(a1, a2, a3: 0, a4: a12, a5: a13, a6: &a15);
    if ( *(int *)(v16 + 16) > 0 )
      return result;
    return sub_18277F280(a1: v19, a2: v20, a3: v18);
  }
  v21 = *(unsigned int *)(v16 + 72);
  if ( (_DWORD)v21 != 0 )
  {
    v22 = (unsigned int)v15[2 * v21 + 18];
    if ( (_DWORD)v22 != 0 )
      v23 = (__int64)&v15[2 * v22];
    else
      v23 = (__int64)&v15[2 * v21];
  }
  else
  {
    v23 = (__int64)v15;
  }
  if ( (_DWORD *)v23 == a13 )
  {
    v26 = &a15;
    v25 = a13;
    result = sub_182779220(a1, a2, a3: 0, a4: v23, a5: (__int64)a13, a6: (__int64)&a15);
    if ( *(int *)(v16 + 16) <= 0 )
      return sub_18277F280(a1: v19, a2: v20, a3: v18);
  }
  else
  {
    v26 = &a15;
    v25 = a13;
    result = sub_182778BA0(
               a1,
               a2,
               a3: (__int64)a13,
               a4: v23,
               a5: (__int64)a13,
               a6: a14,
               a7: a3,
               a8: a4,
               a9: a5,
               a10: a6,
               a11: a7,
               a12: a8,
               a13: a9,
               a14: a10);
    if ( *(int *)(v16 + 16) <= 0 )
      return sub_18277F280(a1: v19, a2: v20, a3: v18);
  }
  return result;
}
