// sub_18278D8C0
// rva 0x0278d8c0  size 618  section .text  group text
// window base 0x18278d8c0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_18278D8C0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        char a7,
        unsigned int a8,
        char a9,
        char a10)
{
  __int64 v10; // r14
  __int64 v11; // r15
  char v12; // bp
  char v13; // bl
  __int64 result; // rax
  unsigned __int64 v15; // rbp
  unsigned __int64 v16; // rbp
  unsigned __int64 v17; // rbp
  __int64 v18; // r9
  __m128 v19; // xmm0
  __int64 v20; // rcx
  __int64 v21; // rdi
  __int64 v22; // rsi
  __int64 v23; // r9
  __m128 v24; // xmm1
  __m128 v25; // xmm2
  __m128 v26; // xmm3
  __m128 v27; // xmm4
  __m128 v28; // xmm5
  __m128 v29; // xmm6
  __m128 v30; // xmm7
  __int64 v31; // [rsp+0h] [rbp-38h] BYREF
  _DWORD *v32; // [rsp+10h] [rbp-28h]
  __int64 v33; // [rsp+18h] [rbp-20h]
  __int64 v34; // [rsp+20h] [rbp-18h]
  __int64 v35; // [rsp+28h] [rbp-10h]
  int v36; // [rsp+30h] [rbp-8h]
  int v37; // [rsp+34h] [rbp-4h]

  if ( (unsigned __int64)&v31 <= *(_QWORD *)(v11 + 8) )
  {
    MEMORY[0x181EB84E0]();
LABEL_16:
    v18 = *(_QWORD *)(v11 + 40);
    if ( (unsigned __int64)(v18 + 48) > *(_QWORD *)(v11 + 32) )
      goto LABEL_19;
    *(_QWORD *)(v11 + 40) = v18 + 48;
    *(_DWORD *)v18 = 34101256;
    *(_DWORD *)(v18 + 4) = 0;
    *(_QWORD *)(v18 + 8) = 0;
    *(_QWORD *)(v18 + 16) = 0;
    *(_QWORD *)(v18 + 24) = 0;
    *(_QWORD *)(v18 + 32) = 0;
    *(_QWORD *)(v18 + 40) = 0;
    v35 = a4;
    v37 = a2;
    v36 = a1;
    v34 = a5;
    v33 = a3;
    while ( 1 )
    {
      *(_DWORD *)(v18 + 20) = 46923644;
      *(_DWORD *)(v18 + 16) = *(_DWORD *)(v10 + 374343896);
      *(_DWORD *)(v18 + 12) = (unsigned __int64)(v18 - v10) >> 3;
      v32 = (_DWORD *)v18;
      *(double *)v19.m128_u64 = MEMORY[0x18503B9A0](a1, a2, a3: v18, a4, a5: 0);
      sub_182769900(
        a1: v21,
        a2: v22,
        a3: v32,
        a4: v20,
        a5: (__int64)&a7,
        a6: v23,
        a7: v19,
        a8: v24,
        a9: v25,
        a10: v26,
        a11: v27,
        a12: v28,
        a13: v29,
        a14: v30);
LABEL_19:
      v35 = a4;
      v37 = a2;
      v36 = a1;
      v34 = a5;
      v33 = a3;
      v18 = MEMORY[0x181EAA920](a1, a2, a3: 34101256);
    }
  }
  *(_DWORD *)(a3 + 28) = -1;
  *(_DWORD *)(a3 + 32) = -1;
  *(_DWORD *)(a3 + 40) = -1;
  *(_DWORD *)(a3 + 4) = (unsigned __int64)(a4 - v10) >> 3;
  if ( (*(_DWORD *)a3 & 2) != 0 )
  {
    v15 = (a3 & 0xFFFFFFFFFFF80000LL) + 2112;
    if ( *(_BYTE *)((a3 & 0xFFFFFFFFFFF80000LL) + ((a3 - v15) >> 9) + 0x38) != 0 )
      *(_BYTE *)((a3 & 0xFFFFFFFFFFF80000LL) + ((a3 - v15) >> 9) + 0x38) = 0;
  }
  *(_DWORD *)(a3 + 8) = (unsigned __int64)(a5 - v10) >> 3;
  if ( (*(_DWORD *)a3 & 2) != 0 )
  {
    v16 = (a3 & 0xFFFFFFFFFFF80000LL) + 2112;
    if ( *(_BYTE *)((a3 & 0xFFFFFFFFFFF80000LL) + ((a3 - v16) >> 9) + 0x38) != 0 )
      *(_BYTE *)((a3 & 0xFFFFFFFFFFF80000LL) + ((a3 - v16) >> 9) + 0x38) = 0;
  }
  if ( a6 == v10 )
    goto LABEL_16;
  *(_DWORD *)(a3 + 12) = (unsigned __int64)(a6 - v10) >> 3;
  if ( (*(_DWORD *)a3 & 2) != 0 )
  {
    v17 = (a3 & 0xFFFFFFFFFFF80000LL) + 2112;
    if ( *(_BYTE *)((a3 & 0xFFFFFFFFFFF80000LL) + ((a3 - v17) >> 9) + 0x38) != 0 )
      *(_BYTE *)((a3 & 0xFFFFFFFFFFF80000LL) + ((a3 - v17) >> 9) + 0x38) = 0;
  }
  v12 = a10;
  v13 = a9;
  result = a8;
  *(_BYTE *)(a3 + 47) = MEMORY[0x112397C0] & a1;
  *(_BYTE *)(a3 + 44) = MEMORY[0x112397C0] & a2;
  *(_BYTE *)(a3 + 45) = MEMORY[0x112397C0] & result;
  *(_BYTE *)(a3 + 46) = MEMORY[0x112397C0] & v13;
  *(_BYTE *)(a3 + 48) = MEMORY[0x112397C0] & v12;
  if ( *(int *)(v11 + 16) <= 0 )
    return sub_18277F280(a1, a2, a3, a4);
  return result;
}
