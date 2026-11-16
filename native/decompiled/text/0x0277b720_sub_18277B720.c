// sub_18277B720
// rva 0x0277b720  size 156  section .text  group text
// window base 0x18277b720: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_18277B720(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __m128 a7,
        __m128 a8,
        __m128 a9,
        __m128 a10,
        __m128 a11,
        __m128 a12,
        __m128 a13,
        __m128 a14)
{
  __int64 v14; // r14
  __int64 v15; // r15
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rcx
  int v19; // eax
  __int64 result; // rax
  __int64 v21; // rdx
  __int64 v22; // rdi
  __int64 v23; // rsi
  char v24; // [rsp+0h] [rbp-18h] BYREF
  __int64 v25; // [rsp+8h] [rbp-10h]
  int v26; // [rsp+14h] [rbp-4h]

  if ( (unsigned __int64)&v24 <= *(_QWORD *)(v15 + 8) )
  {
    v25 = a3;
    *(double *)a7.m128_u64 = MEMORY[0x181EB84E0]();
    goto LABEL_12;
  }
  v16 = *(unsigned int *)(v15 + 72);
  if ( (_DWORD)v16 == 0 )
  {
LABEL_12:
    v25 = a3;
    sub_182771080(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15: v24);
    goto LABEL_13;
  }
  v17 = *(_DWORD *)(v14 + 8 * v16) >> 3;
  if ( *(__int16 *)(v14 + 8 * v17 + 62) < 3
    || *(_DWORD *)(v14 + 8LL * *(unsigned int *)(v14 + 8 * v17 + 16) + 20) != 70129 )
  {
    v18 = *(unsigned int *)(v14 + 8 * v16 + 12);
    if ( (_DWORD)v18 != 0 )
    {
      v19 = *(unsigned __int8 *)(v14 + 8 * v18 + 32);
      goto LABEL_6;
    }
LABEL_13:
    sub_182771080(a1, a2, a3, a4: v18, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15: v24);
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    return ((__int64 (*)(void))sub_18277B7C0)();
  }
  v19 = 1;
LABEL_6:
  v25 = a3;
  v26 = v19 ^ 1;
  result = sub_18277B7C0(a1, a2, a3: v19 ^ 1u);
  if ( *(int *)(v15 + 16) <= 0 )
    return sub_18277F280(a1: v22, a2: v23, a3: v21);
  return result;
}
