// sub_181ED74A0
// rva 0x01ed74a0  size 675  section .text  group text
// window base 0x181ed74a0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_181ED74A0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        char a7,
        __int64 a8,
        __int64 a9,
        __int64 a10)
{
  __int64 v10; // r14
  __int64 v11; // r15
  __int64 v12; // rax
  __int64 v13; // rbx
  __int64 v14; // rbp
  __int64 v15; // rax
  __int64 v16; // rdi
  unsigned __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 result; // rax
  __int64 v20; // r8
  unsigned __int64 v21; // r12
  unsigned __int64 v22; // r12
  unsigned __int64 v23; // rbp
  unsigned __int64 v24; // rsi
  __int64 v25; // rbp
  __int64 v26; // rsi
  __int64 v27; // rcx
  __int64 v28; // rdi
  __int64 v29; // rsi
  char v30; // [rsp+0h] [rbp-48h] BYREF
  __int64 v31; // [rsp+8h] [rbp-40h]
  __int64 v32; // [rsp+10h] [rbp-38h]
  __int64 v33; // [rsp+18h] [rbp-30h]
  __int64 v34; // [rsp+20h] [rbp-28h]
  __int64 v35; // [rsp+28h] [rbp-20h]
  __int64 v36; // [rsp+30h] [rbp-18h]
  int v37; // [rsp+3Ch] [rbp-Ch]
  int v38; // [rsp+40h] [rbp-8h]
  unsigned int v39; // [rsp+44h] [rbp-4h]

  v12 = a8;
  v13 = a9;
  v14 = a10;
  if ( (unsigned __int64)&v30 <= *(_QWORD *)(v11 + 8) )
  {
    v32 = a10;
    v37 = a2;
    v38 = a1;
    v31 = a6;
    sub_181EB84E0(a1, a2, a3, a4, a5, a6, a7: v30);
LABEL_19:
    v25 = *(_QWORD *)(v11 + 40);
    v26 = v25 + 48;
    if ( (unsigned __int64)(v25 + 48) > *(_QWORD *)(v11 + 32) )
      goto LABEL_22;
    *(_QWORD *)(v11 + 40) = v26;
    *(_DWORD *)v25 = 34101256;
    *(_DWORD *)(v25 + 4) = 0;
    *(_QWORD *)(v25 + 8) = 0;
    *(_QWORD *)(v25 + 16) = 0;
    *(_QWORD *)(v25 + 24) = 0;
    *(_QWORD *)(v25 + 32) = 0;
    *(_QWORD *)(v25 + 40) = 0;
    while ( 1 )
    {
      *(_DWORD *)(v25 + 20) = 46923644;
      *(_DWORD *)(v25 + 16) = *(_DWORD *)(v10 + 374343896);
      *(_DWORD *)(v25 + 12) = (unsigned __int64)(v25 - v10) >> 3;
      v35 = v25;
      MEMORY[0x18503B9A0](a1: v16, a2: v26, a3: v25, a4: v18, a5: 0);
      MEMORY[0x182769900](a1: v28, a2: v29, a3: v35, a4: v27, a5: &a7);
LABEL_22:
      v25 = sub_181EAA920(a1: v16, a2: v26, a3: 34101256);
    }
  }
  *(_DWORD *)(a3 + 4) = (unsigned __int64)(a5 - v10) >> 3;
  if ( (*(_DWORD *)a3 & 2) != 0 )
  {
    v21 = (a3 & 0xFFFFFFFFFFF80000LL) + 2112;
    if ( *(_BYTE *)((a3 & 0xFFFFFFFFFFF80000LL) + ((a3 - v21) >> 9) + 0x38) != 0 )
      *(_BYTE *)((a3 & 0xFFFFFFFFFFF80000LL) + ((a3 - v21) >> 9) + 0x38) = 0;
  }
  v36 = a3;
  v35 = a5;
  v39 = a4;
  v34 = v12;
  v33 = v13;
  *(_DWORD *)(a3 + 8) = (unsigned __int64)(a6 - v10) >> 3;
  if ( (*(_DWORD *)a3 & 2) != 0 )
  {
    v22 = (a3 & 0xFFFFFFFFFFF80000LL) + 2112;
    if ( *(_BYTE *)((a3 & 0xFFFFFFFFFFF80000LL) + ((a3 - v22) >> 9) + 0x38) != 0 )
      *(_BYTE *)((a3 & 0xFFFFFFFFFFF80000LL) + ((a3 - v22) >> 9) + 0x38) = 0;
  }
  v32 = v14;
  v31 = a6;
  *(_DWORD *)(a3 + 12) = a1;
  v38 = a1;
  v37 = a2;
  v15 = MEMORY[0x181DF45C0](a1, a2, a3: (unsigned int)a2, a4, a5: v10 + 376660728);
  v17 = v36;
  *(_QWORD *)(v36 + 16) = v15;
  v18 = v39;
  *(_DWORD *)(v17 + 24) = v39;
  result = v34;
  *(_DWORD *)(v17 + 28) = (unsigned __int64)(v34 - v10) >> 3;
  if ( (*(_DWORD *)v17 & 2) != 0 )
  {
    v23 = (v17 & 0xFFFFFFFFFFF80000LL) + 2112;
    if ( *(_BYTE *)((v17 & 0xFFFFFFFFFFF80000LL) + ((v17 - v23) >> 9) + 0x38) != 0 )
      *(_BYTE *)((v17 & 0xFFFFFFFFFFF80000LL) + ((v17 - v23) >> 9) + 0x38) = 0;
  }
  *(_DWORD *)(v17 + 32) = (unsigned __int64)(v33 - v10) >> 3;
  if ( (*(_DWORD *)v17 & 2) != 0 )
  {
    v24 = (v17 & 0xFFFFFFFFFFF80000LL) + 2112;
    if ( *(_BYTE *)((v17 & 0xFFFFFFFFFFF80000LL) + ((v17 - v24) >> 9) + 0x38) != 0 )
      *(_BYTE *)((v17 & 0xFFFFFFFFFFF80000LL) + ((v17 - v24) >> 9) + 0x38) = 0;
  }
  v20 = v35;
  *(_DWORD *)(v17 + 36) = 0;
  if ( v20 == v10 )
    goto LABEL_19;
  if ( *(int *)(v11 + 16) <= 0 )
    return MEMORY[0x18277F280]();
  return result;
}
