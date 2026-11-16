// sub_182784780
// rva 0x02784780  size 269  section .text  group text
// window base 0x182784780: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_182784780(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, __int64 a6, char a7)
{
  __int64 v7; // r14
  __int64 v8; // r15
  __int64 result; // rax
  __int64 v10; // rax
  unsigned __int64 v11; // rcx
  __m128 v12; // xmm0
  __int64 v13; // rcx
  __int64 v14; // rdi
  __int64 v15; // rsi
  __int64 v16; // r9
  __m128 v17; // xmm1
  __m128 v18; // xmm2
  __m128 v19; // xmm3
  __m128 v20; // xmm4
  __m128 v21; // xmm5
  __m128 v22; // xmm6
  __m128 v23; // xmm7
  __int64 v24; // [rsp+0h] [rbp-38h] BYREF
  _DWORD *v25; // [rsp+10h] [rbp-28h]
  __int64 v26; // [rsp+18h] [rbp-20h]
  __int64 v27; // [rsp+20h] [rbp-18h]
  int v28; // [rsp+2Ch] [rbp-Ch]
  int v29; // [rsp+30h] [rbp-8h]
  int v30; // [rsp+34h] [rbp-4h]

  if ( (unsigned __int64)&v24 <= *(_QWORD *)(v8 + 8) )
    goto LABEL_12;
  if ( a5 < 0
    || (int)a1 < 0
    || (int)a2 < 0
    || a5 > *(_DWORD *)(a3 + 8) - (int)a2
    || (result = (unsigned int)(*(_DWORD *)(a6 + 8) - a2), (int)a1 > (int)result) )
  {
    v10 = *(_QWORD *)(v8 + 40);
    if ( (unsigned __int64)(v10 + 40) > *(_QWORD *)(v8 + 32) )
      goto LABEL_13;
    *(_QWORD *)(v8 + 40) = v10 + 40;
    *(_DWORD *)v10 = 34150672;
    *(_DWORD *)(v10 + 4) = 0;
    *(_QWORD *)(v10 + 8) = 0;
    *(_QWORD *)(v10 + 16) = 0;
    *(_QWORD *)(v10 + 24) = 0;
    *(_QWORD *)(v10 + 32) = 0;
    v30 = a2;
    v29 = a1;
    v27 = a6;
    v28 = a5;
    v26 = a3;
    while ( 1 )
    {
      *(_DWORD *)(v10 + 20) = 46923644;
      *(_DWORD *)(v10 + 16) = *(_DWORD *)(v7 + 374343896);
      v11 = (unsigned __int64)(v10 - v7) >> 3;
      *(_DWORD *)(v10 + 12) = v11;
      v25 = (_DWORD *)v10;
      *(double *)v12.m128_u64 = MEMORY[0x18503B9A0](a1, a2, a3: v10, a4: v11, a5: 0);
      sub_182769900(
        a1: v14,
        a2: v15,
        a3: v25,
        a4: v13,
        a5: (__int64)&a7,
        a6: v16,
        a7: v12,
        a8: v17,
        a9: v18,
        a10: v19,
        a11: v20,
        a12: v21,
        a13: v22,
        a14: v23);
LABEL_12:
      MEMORY[0x181EB84E0]();
LABEL_13:
      v30 = a2;
      v29 = a1;
      v27 = a6;
      v28 = a5;
      v26 = a3;
      v10 = MEMORY[0x181EAA920](a1, a2, a3: 34150672);
    }
  }
  if ( *(int *)(v8 + 16) <= 0 )
    return sub_18277F280(a1, a2, a3, a4);
  return result;
}
