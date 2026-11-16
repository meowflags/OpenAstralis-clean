// sub_1827854C0
// rva 0x027854c0  size 235  section .text  group text
// window base 0x1827854c0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1827854C0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, char a7)
{
  __int64 v7; // r14
  __int64 v8; // r15
  __int64 result; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rdi
  __int64 v13; // rsi
  __int64 v14; // rdx
  __m128 v15; // xmm0
  __int64 v16; // rcx
  __int64 v17; // rdi
  __int64 v18; // rsi
  __int64 v19; // r9
  __m128 v20; // xmm1
  __m128 v21; // xmm2
  __m128 v22; // xmm3
  __m128 v23; // xmm4
  __m128 v24; // xmm5
  __m128 v25; // xmm6
  __m128 v26; // xmm7
  __int64 v27; // [rsp+0h] [rbp-18h] BYREF
  _DWORD *v28; // [rsp+8h] [rbp-10h]
  __int64 v29; // [rsp+10h] [rbp-8h]

  v29 = a3;
  if ( (unsigned __int64)&v27 <= *(_QWORD *)(v8 + 8) )
  {
    MEMORY[0x181EB84E0]();
  }
  else if ( a3 != v7 )
  {
    result = MEMORY[0x18208C740](a1, a2, a3: v7 + 376381032, a4, a5: a3, a6: v7 + 376667248);
    if ( *(int *)(v8 + 16) <= 0 )
      return sub_18277F280(a1: v12, a2: v13, a3: v10, a4: v11);
    return result;
  }
  v14 = *(_QWORD *)(v8 + 40);
  if ( (unsigned __int64)(v14 + 48) > *(_QWORD *)(v8 + 32) )
    goto LABEL_9;
  *(_QWORD *)(v8 + 40) = v14 + 48;
  *(_DWORD *)v14 = 34101256;
  *(_DWORD *)(v14 + 4) = 0;
  *(_QWORD *)(v14 + 8) = 0;
  *(_QWORD *)(v14 + 16) = 0;
  *(_QWORD *)(v14 + 24) = 0;
  *(_QWORD *)(v14 + 32) = 0;
  *(_QWORD *)(v14 + 40) = 0;
  while ( 1 )
  {
    *(_DWORD *)(v14 + 20) = 46923644;
    *(_DWORD *)(v14 + 16) = *(_DWORD *)(v7 + 374343896);
    *(_DWORD *)(v14 + 12) = (unsigned __int64)(v14 - v7) >> 3;
    v28 = (_DWORD *)v14;
    *(double *)v15.m128_u64 = MEMORY[0x18503B9A0](a1, a2, a3: v14, a4, a5: 0);
    sub_182769900(
      a1: v17,
      a2: v18,
      a3: v28,
      a4: v16,
      a5: (__int64)&a7,
      a6: v19,
      a7: v15,
      a8: v20,
      a9: v21,
      a10: v22,
      a11: v23,
      a12: v24,
      a13: v25,
      a14: v26);
LABEL_9:
    v14 = MEMORY[0x181EAA920](a1, a2, a3: 34101256);
  }
}
