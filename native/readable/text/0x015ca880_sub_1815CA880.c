// sub_15CA880
// rva 0x015ca880  size 717  section .text  group text
// window base 0x1815ca880: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
_DWORD *__fastcall sub_15CA880(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, char a7)
{
  __int64 v7; // r14
  __int64 v8; // r15
  __int64 v9; // rcx
  __int64 v10; // rdi
  __int64 v11; // rsi
  __int64 v12; // r8
  __int64 v13; // r9
  __m128 v14; // xmm0
  __m128 v15; // xmm1
  __m128 v16; // xmm2
  __m128 v17; // xmm3
  __m128 v18; // xmm4
  __m128 v19; // xmm5
  __m128 v20; // xmm6
  __m128 v21; // xmm7
  __int64 v22; // rcx
  __int64 v23; // rdi
  __int64 v24; // rsi
  __int64 v25; // rdx
  _DWORD *v26; // rcx
  unsigned int v27; // ebx
  __int64 v28; // rbp
  __int64 v29; // r8
  __int64 v31; // rdx
  unsigned __int64 v32; // rcx
  __int64 v33; // rdi
  __int64 v34; // rsi
  __int64 v35; // rax
  __int64 v36; // rdx
  unsigned __int64 v37; // rdx
  __int64 v38; // [rsp+0h] [rbp-48h] BYREF
  _DWORD *v39; // [rsp+10h] [rbp-38h]
  __int64 v40; // [rsp+18h] [rbp-30h]
  unsigned int v41; // [rsp+24h] [rbp-24h]
  __int64 v42; // [rsp+28h] [rbp-20h]
  __int64 v43; // [rsp+30h] [rbp-18h]
  __int64 v44; // [rsp+38h] [rbp-10h]
  int v45; // [rsp+44h] [rbp-4h]

  v44 = a3;
  v43 = a5;
  if ( (unsigned __int64)&v38 <= *(_QWORD *)(v8 + 8) )
  {
    sub_1EB84E0();
  }
  else if ( a3 != v7 )
  {
    v42 = sub_5837940(a1, a2, a3: v7 + 35855512);
    if ( *(_BYTE *)(v7 + 376397722) != 0 )
      sub_15ACE20(
        a1: v10,
        a2: v11,
        a3: v7 + 34256064,
        a4: v9,
        a5: v12,
        a6: v13,
        a7: v14,
        a8: v15,
        a9: v16,
        a10: v17,
        a11: v18,
        a12: v19,
        a13: v20,
        a14: v21);
    v41 = *(_DWORD *)(v7 + 374347372);
    v40 = v7 + 8LL * v41;
    v45 = sub_951ABA0(a1: v10, a2: v11, a3: v43);
    if ( v45 == 0 )
    {
      while ( 1 )
      {
        v36 = *(_QWORD *)(v8 + 40);
        if ( (unsigned __int64)(v36 + 40) > *(_QWORD *)(v8 + 32) )
        {
          v36 = sub_1EAA920(a1: v23, a2: v24, a3: 34081944);
        }
        else
        {
          *(_QWORD *)(v8 + 40) = v36 + 40;
          *(_DWORD *)v36 = 34081944;
          *(_DWORD *)(v36 + 4) = 0;
          *(_QWORD *)(v36 + 8) = 0;
          *(_QWORD *)(v36 + 16) = 0;
          *(_QWORD *)(v36 + 24) = 0;
          *(_QWORD *)(v36 + 32) = 0;
        }
        *(_DWORD *)(v36 + 20) = 46923644;
        *(_DWORD *)(v36 + 16) = *(_DWORD *)(v7 + 374343896);
        *(_DWORD *)(v36 + 12) = (unsigned __int64)(v36 - v7) >> 3;
        v39 = (_DWORD *)v36;
        sub_503B9A0(a1: v23, a2: v24, a3: v36, a4: v22, a5: 0);
        v37 = (unsigned __int64)v39;
        v39[2] = 45791827;
        if ( (*(_DWORD *)v37 & 2) != 0 )
        {
          v32 = (v37 & 0xFFFFFFFFFFF80000LL) + 2112;
          if ( *(_BYTE *)((v37 & 0xFFFFFFFFFFF80000LL) + ((v37 - v32) >> 9) + 0x38) != 0 )
            *(_BYTE *)((v37 & 0xFFFFFFFFFFF80000LL) + ((v37 - v32) >> 9) + 0x38) = 0;
          v35 = v37;
        }
        else
        {
          v35 = v37;
        }
LABEL_16:
        sub_2769900(a1: v33, a2: v34, a3: v35, a4: v32, a5: &a7);
      }
    }
    v25 = *(_QWORD *)(v8 + 40);
    if ( (unsigned __int64)(v25 + 48) > *(_QWORD *)(v8 + 32) )
    {
      v26 = (_DWORD *)sub_1EAA920(a1: v23, a2: v24, a3: 35862400);
    }
    else
    {
      *(_QWORD *)(v8 + 40) = v25 + 48;
      *(_DWORD *)v25 = 35862400;
      *(_DWORD *)(v25 + 4) = 0;
      *(_QWORD *)(v25 + 8) = 0;
      *(_QWORD *)(v25 + 16) = 0;
      *(_QWORD *)(v25 + 24) = 0;
      *(_QWORD *)(v25 + 32) = 0;
      *(_QWORD *)(v25 + 40) = 0;
      v26 = (_DWORD *)v25;
    }
    v27 = v41;
    v28 = v42;
    v29 = v43;
    v26[8] = (unsigned __int64)(v44 - v7) >> 3;
    v26[3] = v27;
    v26[2] = (unsigned __int64)(v29 - v7) >> 3;
    v26[1] = (unsigned __int64)(v28 - v7) >> 3;
    if ( *(int *)(v8 + 16) <= 0 )
      sub_277F280();
    return v26;
  }
  v31 = *(_QWORD *)(v8 + 40);
  if ( (unsigned __int64)(v31 + 48) > *(_QWORD *)(v8 + 32) )
  {
    v31 = sub_1EAA920(a1, a2, a3: 34101256);
  }
  else
  {
    *(_QWORD *)(v8 + 40) = v31 + 48;
    *(_DWORD *)v31 = 34101256;
    *(_DWORD *)(v31 + 4) = 0;
    *(_QWORD *)(v31 + 8) = 0;
    *(_QWORD *)(v31 + 16) = 0;
    *(_QWORD *)(v31 + 24) = 0;
    *(_QWORD *)(v31 + 32) = 0;
    *(_QWORD *)(v31 + 40) = 0;
  }
  *(_DWORD *)(v31 + 20) = 46923644;
  *(_DWORD *)(v31 + 16) = *(_DWORD *)(v7 + 374343896);
  *(_DWORD *)(v31 + 12) = (unsigned __int64)(v31 - v7) >> 3;
  v42 = v31;
  sub_503B9A0(a1, a2, a3: v31, a4, a5: 0);
  v35 = v42;
  goto LABEL_16;
}
