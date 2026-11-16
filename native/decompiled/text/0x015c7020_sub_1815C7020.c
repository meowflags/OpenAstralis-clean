// sub_1815C7020
// rva 0x015c7020  size 595  section .text  group text
// window base 0x1815c7020: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1815C7020(
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
        __int64 a13,
        __int64 a14)
{
  __int64 v14; // r14
  __int64 v15; // r15
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rbx
  __int64 v20; // rax
  unsigned __int64 v22; // rsi
  __int64 v23; // [rsp+0h] [rbp-28h] BYREF
  __int64 v24; // [rsp+8h] [rbp-20h]
  __int64 v25; // [rsp+10h] [rbp-18h]
  int v26; // [rsp+1Ch] [rbp-Ch]
  __int64 v27; // [rsp+20h] [rbp-8h]

  if ( (unsigned __int64)&v23 <= *(_QWORD *)(v15 + 8) )
  {
    *(double *)a3.m128_u64 = MEMORY[0x181EB84E0]();
LABEL_20:
    v27 = v17;
    v26 = v16;
    sub_1815ACE20(
      a1,
      a2,
      a3: v14 + 34264672,
      a4: v17,
      a5: a13,
      a6: a14,
      a7: a3,
      a8: a4,
      a9: a5,
      a10: a6,
      a11: a7,
      a12: a8,
      a13: a9,
      a14: a10);
    v17 = v27;
    LODWORD(v16) = v26;
    goto LABEL_5;
  }
  v16 = *(unsigned int *)(v14 + 374429924);
  v17 = v14 + 8 * v16;
  if ( *(_BYTE *)(v14 + 376616026) != 0 )
  {
    v27 = v14 + 8 * v16;
    v26 = v16;
    sub_1815ACE20(
      a1,
      a2,
      a3: v14 + 34264672,
      a4: v17,
      a5: a13,
      a6: a14,
      a7: a3,
      a8: a4,
      a9: a5,
      a10: a6,
      a11: a7,
      a12: a8,
      a13: a9,
      a14: a10);
    v17 = v27;
    LODWORD(v16) = v26;
  }
  if ( *(_BYTE *)(v14 + 376616026) != 0 )
    goto LABEL_20;
LABEL_5:
  v18 = v14 + 8LL * *(unsigned int *)(v14 + 374446960);
  if ( *(_BYTE *)(v14 + 376616026) != 0 )
  {
    v25 = v14 + 8LL * *(unsigned int *)(v14 + 374446960);
    v27 = v17;
    v26 = v16;
    sub_1815ACE20(
      a1,
      a2,
      a3: v14 + 34264672,
      a4: v17,
      a5: a13,
      a6: a14,
      a7: a3,
      a8: a4,
      a9: a5,
      a10: a6,
      a11: a7,
      a12: a8,
      a13: a9,
      a14: a10);
    v18 = v25;
    v17 = v27;
    LODWORD(v16) = v26;
  }
  v19 = *(_QWORD *)(v15 + 40);
  if ( (unsigned __int64)(v19 + 56) > *(_QWORD *)(v15 + 32) )
  {
    v25 = v18;
    v27 = v17;
    v26 = v16;
    v19 = MEMORY[0x181EAA920](a1, a2, a3: 35849416);
    v18 = v25;
    v17 = v27;
    LODWORD(v16) = v26;
  }
  else
  {
    *(_QWORD *)(v15 + 40) = v19 + 56;
    *(_DWORD *)v19 = 35849416;
    *(_DWORD *)(v19 + 4) = 0;
    *(_QWORD *)(v19 + 8) = 0;
    *(_QWORD *)(v19 + 16) = 0;
    *(_QWORD *)(v19 + 24) = 0;
    *(_QWORD *)(v19 + 32) = 0;
    *(_QWORD *)(v19 + 40) = 0;
    *(_QWORD *)(v19 + 48) = 0;
  }
  *(_DWORD *)(v19 + 20) = 46660156;
  *(_DWORD *)(v19 + 16) = v16;
  *(_DWORD *)(v19 + 12) = *(_DWORD *)(v14 + 374446960);
  *(_DWORD *)(v19 + 8) = 46660156;
  *(_DWORD *)(v19 + 4) = 46660156;
  v20 = *(_QWORD *)(v15 + 40);
  if ( (unsigned __int64)(v20 + 24) > *(_QWORD *)(v15 + 32) )
  {
    v24 = v19;
    v25 = v18;
    v27 = v17;
    v20 = MEMORY[0x181EAA920](a1, a2, a3: 34161576);
    v19 = v24;
    v18 = v25;
    v17 = v27;
  }
  else
  {
    *(_QWORD *)(v15 + 40) = v20 + 24;
    *(_DWORD *)v20 = 34161576;
    *(_DWORD *)(v20 + 4) = 0;
    *(_QWORD *)(v20 + 8) = 0;
    *(_QWORD *)(v20 + 16) = 0;
  }
  *(_DWORD *)(v20 + 8) = 47045786;
  *(_DWORD *)(v19 + 24) = (unsigned __int64)(v20 - v14) >> 3;
  if ( (*(_DWORD *)v19 & 2) != 0 )
  {
    v22 = (v19 & 0xFFFFFFFFFFF80000LL) + 2112;
    if ( *(_BYTE *)((v19 & 0xFFFFFFFFFFF80000LL) + ((v19 - v22) >> 9) + 0x38) != 0 )
      *(_BYTE *)((v19 & 0xFFFFFFFFFFF80000LL) + ((v19 - v22) >> 9) + 0x38) = 0;
  }
  if ( *(int *)(v15 + 16) <= 0 )
  {
    v24 = v19;
    v25 = v18;
    v27 = v17;
    MEMORY[0x18277F280]();
    return v24;
  }
  return v19;
}
