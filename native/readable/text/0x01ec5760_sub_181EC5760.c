// sub_1EC5760
// rva 0x01ec5760  size 827  section .text  group text
// window base 0x181ec5760: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1EC5760(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        int a12,
        __int64 a13,
        __int64 a14)
{
  int v14; // ebx
  __int64 v15; // r14
  _QWORD *v16; // r15
  __int64 v17; // rcx
  __int64 v18; // rax
  int v19; // edi
  int v20; // esi
  int v21; // r9d
  __int64 v22; // rdx
  __int64 v24; // rcx
  __int64 v25; // rdi
  __int64 v26; // rsi
  __int64 v27; // rdx
  unsigned __int64 v28; // rcx
  __int64 v29; // rdi
  __int64 v30; // rsi
  __int64 v31; // rax
  char v32; // [rsp+0h] [rbp-48h] BYREF
  __int64 v33; // [rsp+10h] [rbp-38h]
  __int64 v34; // [rsp+20h] [rbp-28h]
  __int64 v35; // [rsp+28h] [rbp-20h]
  int v36; // [rsp+30h] [rbp-18h]
  int v37; // [rsp+34h] [rbp-14h]
  int v38; // [rsp+44h] [rbp-4h]

  if ( (unsigned __int64)&v32 <= v16[1] )
  {
    v34 = a3;
    sub_1EB84E0(a1, a2, a3, a4, a5, a6, a7: v32);
    v37 = v14;
    v27 = v16[5];
    if ( (unsigned __int64)(v27 + 40) > v16[4] )
    {
      v36 = v26;
      v27 = sub_1EAA920(a1: v25, a2: v26, a3: 34082880);
    }
    else
    {
      v16[5] = v27 + 40;
      *(_DWORD *)v27 = 34082880;
      *(_DWORD *)(v27 + 4) = 0;
      *(_QWORD *)(v27 + 8) = 0;
      *(_QWORD *)(v27 + 16) = 0;
      *(_QWORD *)(v27 + 24) = 0;
      *(_QWORD *)(v27 + 32) = 0;
      v36 = v26;
    }
    *(_DWORD *)(v27 + 20) = 46923644;
    *(_DWORD *)(v27 + 16) = *(_DWORD *)(v15 + 374343896);
    *(_DWORD *)(v27 + 12) = (unsigned __int64)(v27 - v15) >> 3;
    v33 = v27;
    sub_503B9A0(a1: v25, a2: v26, a3: v27, a4: v24, a5: 0);
    v31 = v33;
    *(_DWORD *)(v33 + 8) = 46004603;
    if ( (*(_DWORD *)v31 & 2) != 0 )
      goto LABEL_11;
    while ( 1 )
    {
      v31 = sub_2769900(a1: v29, a2: v30, a3: v31, a4: v28, a5: &a7);
LABEL_11:
      v28 = (v31 & 0xFFFFFFFFFFF80000LL) + 2112;
      if ( *(_BYTE *)((v31 & 0xFFFFFFFFFFF80000LL) + ((v31 - v28) >> 9) + 0x38) != 0 )
        *(_BYTE *)((v31 & 0xFFFFFFFFFFF80000LL) + ((v31 - v28) >> 9) + 0x38) = 0;
    }
  }
  v17 = *(unsigned int *)(a3 + 4);
  if ( (_DWORD)v17 == 0 )
    return sub_181EC590E(a1, a2, a3, a4: 0, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14);
  v38 = *(_DWORD *)(a3 + 8);
  v34 = a3;
  v35 = v15 + 8 * v17;
  v18 = sub_1EBFC60(a1, a2, a3: v35, a4: v17, a5, a6);
  if ( v18 == v15 )
    v22 = v15 + 353301280;
  else
    v22 = v18;
  return sub_181EC57C2(
           a1: v19,
           a2: v20,
           a3: 56,
           a4: *(char *)(v22 + 12),
           a5: v22,
           a6: v21,
           a7,
           a8,
           a9,
           a10,
           a11,
           a12,
           a13,
           a14);
}
