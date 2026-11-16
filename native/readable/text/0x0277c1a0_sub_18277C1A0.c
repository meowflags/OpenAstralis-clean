// sub_277C1A0
// rva 0x0277c1a0  size 475  section .text  group text
// window base 0x18277c1a0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_277C1A0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, int a6, char a7)
{
  __int64 v7; // r14
  __int64 v8; // r15
  __int64 result; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rdi
  __int64 v13; // rsi
  double v14; // xmm0_8
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rdi
  __int64 v18; // rsi
  __int64 v19; // r9
  __m128 v20; // xmm0
  __m128 v21; // xmm1
  __m128 v22; // xmm2
  __m128 v23; // xmm3
  __m128 v24; // xmm4
  __m128 v25; // xmm5
  __m128 v26; // xmm6
  __m128 v27; // xmm7
  unsigned __int64 v28; // rdx
  _DWORD *v29; // rax
  __int64 v30; // rdx
  char v31; // [rsp+0h] [rbp-28h] BYREF
  _DWORD *v32; // [rsp+10h] [rbp-18h]
  int v33; // [rsp+1Ch] [rbp-Ch]
  __int64 v34; // [rsp+20h] [rbp-8h]

  if ( (unsigned __int64)&v31 <= *(_QWORD *)(v8 + 8) )
  {
    v34 = a3;
    sub_1EB84E0();
LABEL_7:
    v34 = a3;
    v15 = *(_QWORD *)(v8 + 40);
    if ( (unsigned __int64)(v15 + 40) > *(_QWORD *)(v8 + 32) )
    {
      v15 = sub_1EAA920(a1, a2, a3: 34081944);
    }
    else
    {
      *(_QWORD *)(v8 + 40) = v15 + 40;
      *(_DWORD *)v15 = 34081944;
      *(_DWORD *)(v15 + 4) = 0;
      *(_QWORD *)(v15 + 8) = 0;
      *(_QWORD *)(v15 + 16) = 0;
      *(_QWORD *)(v15 + 24) = 0;
      *(_QWORD *)(v15 + 32) = 0;
    }
    *(_DWORD *)(v15 + 20) = 46923644;
    *(_DWORD *)(v15 + 16) = *(_DWORD *)(v7 + 374343896);
    *(_DWORD *)(v15 + 12) = (unsigned __int64)(v15 - v7) >> 3;
    v32 = (_DWORD *)v15;
    sub_503B9A0(a1, a2, a3: v15, a4, a5: 0);
    v28 = (unsigned __int64)v32;
    v32[2] = 45834860;
    if ( (*(_DWORD *)v28 & 2) != 0 )
    {
      v16 = (v28 & 0xFFFFFFFFFFF80000LL) + 2112;
      if ( *(_BYTE *)((v28 & 0xFFFFFFFFFFF80000LL) + ((v28 - v16) >> 9) + 0x38) != 0 )
        *(_BYTE *)((v28 & 0xFFFFFFFFFFF80000LL) + ((v28 - v16) >> 9) + 0x38) = 0;
      v29 = (_DWORD *)v28;
    }
    else
    {
      v29 = (_DWORD *)v28;
    }
    goto LABEL_11;
  }
  if ( a3 < 0 )
    goto LABEL_7;
  v34 = a3;
  sub_277C380(a1, a2, a3, a4, a5, a6, a7: v31);
  result = sub_502FD20();
  if ( (_DWORD)result != 0 )
  {
    while ( 1 )
    {
      v30 = *(_QWORD *)(v8 + 40);
      if ( (unsigned __int64)(v30 + 40) > *(_QWORD *)(v8 + 32) )
      {
        v33 = result;
        v30 = sub_1EAA920(a1: v12, a2: v13, a3: 34586824, a4: v14);
      }
      else
      {
        *(_QWORD *)(v8 + 40) = v30 + 40;
        *(_DWORD *)v30 = 34586824;
        *(_DWORD *)(v30 + 4) = 0;
        *(_QWORD *)(v30 + 8) = 0;
        *(_QWORD *)(v30 + 16) = 0;
        *(_QWORD *)(v30 + 24) = 0;
        *(_QWORD *)(v30 + 32) = 0;
      }
      *(_DWORD *)(v30 + 20) = 46923644;
      *(_DWORD *)(v30 + 16) = *(_DWORD *)(v7 + 374343896);
      *(_DWORD *)(v30 + 12) = (unsigned __int64)(v30 - v7) >> 3;
      v32 = (_DWORD *)v30;
      sub_503B9A0(a1: v12, a2: v13, a3: v30, a4: v11, a5: 0, a6: v14);
      v29 = v32;
LABEL_11:
      *(_QWORD *)&v14 = sub_2769900(
                          a1: v17,
                          a2: v18,
                          a3: v29,
                          a4: v16,
                          a5: (__int64)&a7,
                          a6: v19,
                          a7: v20,
                          a8: v21,
                          a9: v22,
                          a10: v23,
                          a11: v24,
                          a12: v25,
                          a13: v26,
                          a14: v27).m128i_u64[0];
    }
  }
  if ( *(int *)(v8 + 16) <= 0 )
    return sub_277F280(a1: v12, a2: v13, a3: v10);
  return result;
}
