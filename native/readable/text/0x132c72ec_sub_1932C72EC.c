// sub_132C72EC
// rva 0x132c72ec  size 532  section .text  group text
// window base 0x1932c72ec: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_132C72EC(__int64 a1, __int64 a2, __int64 *a3, __int64 a4)
{
  __int64 v5; // rdi
  __int64 *v6; // rax
  __int64 v7; // r15
  __int64 v8; // r13
  int v9; // r12d
  int v10; // edx
  __m128i v11; // xmm0
  int v12; // esi
  __int64 result; // rax
  __int64 v14; // r9
  int *v15; // rbx
  __int64 v16; // r10
  __int64 v17; // rbp
  int v18; // ecx
  int v19; // r14d
  int v20; // ecx
  int v21; // r10d
  int v23; // [rsp+40h] [rbp+8h]

  v5 = *a3;
  v23 = *((_DWORD *)a3 + 2);
  v6 = (__int64 *)a3[2];
  v7 = *v6;
  v8 = v6[1];
  v9 = *((_DWORD *)v6 + 4);
  v10 = *((_DWORD *)v6 + 6);
  v11 = _mm_shuffle_epi32(_mm_cvtsi32_si128(0), 0);
  *(__m128i *)(a4 + 2952) = v11;
  *(__m128i *)(a4 + 2968) = v11;
  *(_WORD *)(v5 + 4LL * *(int *)(a4 + 4LL * *(int *)(a4 + 5280) + 2984) + 2) = 0;
  v12 = *(_DWORD *)(a4 + 5280) + 1;
  result = v12;
  if ( v12 < 573LL )
  {
    v14 = 573LL - v12;
    v15 = (int *)(a4 + 2984 + 4LL * v12);
    do
    {
      v16 = *v15;
      v17 = v16;
      v18 = *(unsigned __int16 *)(v5 + 4LL * *(unsigned __int16 *)(v5 + 4 * v16 + 2) + 2) + 1;
      if ( v18 > v10 )
        JUMPOUT(0x3265213AFLL);
      v19 = *(unsigned __int16 *)(v5 + 4LL * *(unsigned __int16 *)(v5 + 4 * v16 + 2) + 2) + 1;
      result = 0;
      *(_WORD *)(v5 + 4 * v16 + 2) = v18;
      if ( (int)v16 <= v23 )
      {
        ++*(_WORD *)(a4 + 2LL * v18 + 2952);
        v20 = 0;
        if ( (int)v16 >= v9 )
          v20 = *(_DWORD *)(v8 + 4LL * ((int)v16 - v9));
        v21 = *(unsigned __int16 *)(v5 + 4 * v16);
        result = (unsigned int)(v21 * (v19 + v20));
        *(_DWORD *)(a4 + 5884) += result;
        if ( v7 != 0 )
        {
          result = v21 * (v20 + (unsigned int)*(unsigned __int16 *)(v7 + 4 * v17 + 2));
          *(_DWORD *)(a4 + 5888) += result;
        }
      }
      ++v15;
      --v14;
    }
    while ( v14 != 0 );
  }
  return result;
}
