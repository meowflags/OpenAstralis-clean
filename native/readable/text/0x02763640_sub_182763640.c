// sub_2763640
// rva 0x02763640  size 749  section .text  group text
// window base 0x182763640: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_2763640(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // r14
  __int64 v6; // r15
  __int64 v7; // rax
  __int64 v8; // rdi
  __int64 v9; // rsi
  __int64 v10; // rdx
  signed __int64 v11; // rcx
  __int64 v12; // rbx
  __int64 v13; // rbp
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rdi
  __int64 v17; // rsi
  __int64 v18; // rdx
  __int64 v19; // rdi
  __int64 v20; // rsi
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rdi
  __int64 v24; // rsi
  __int64 result; // rax
  __int64 v26; // rdi
  __int64 v27; // rsi
  __int64 v28; // rdx
  __int64 v29; // rdx
  unsigned __int64 v30; // rbx
  unsigned __int64 v31; // rbp
  int v32; // eax
  int v33; // [rsp+0h] [rbp-38h] BYREF
  __int64 v34; // [rsp+10h] [rbp-28h]
  __int64 v35; // [rsp+18h] [rbp-20h]
  __int64 v36; // [rsp+20h] [rbp-18h]
  __int64 v37; // [rsp+28h] [rbp-10h]
  __int64 v38; // [rsp+30h] [rbp-8h]

  v38 = a3;
  if ( (unsigned __int64)&v33 <= *(_QWORD *)(v6 + 8) )
  {
    v37 = a5;
    v7 = sub_1EB84E0();
    goto LABEL_32;
  }
  v37 = a5;
  v7 = sub_15972E0();
  v36 = v7;
  v10 = *(unsigned int *)(v7 + 48);
  if ( (_DWORD)v10 == 0 )
  {
    v13 = v7;
    goto LABEL_25;
  }
  if ( v6 == *(_QWORD *)(v5 + 376351704) )
  {
LABEL_32:
    v13 = v7;
    goto LABEL_25;
  }
  v11 = *(_QWORD *)(v6 + 64);
  v12 = *(_QWORD *)(v5 + 8 * v10 + 16);
  if ( v12 == 0 )
  {
    v13 = v7;
    if ( __sync_val_compare_and_swap((volatile signed __int64 *)(v5 + 8 * v10 + 16), 0, v11) == 0 )
      goto LABEL_6;
    goto LABEL_25;
  }
  v13 = v7;
  if ( v12 != v11 || (v32 = *(_DWORD *)(v5 + 8 * v10 + 28) + 1) < 0 )
  {
LABEL_25:
    sub_208CC20(a1: v8, a2: v9, a3: v13);
    v7 = v36;
    goto LABEL_6;
  }
  *(_DWORD *)(v5 + 8 * v10 + 28) = v32;
  v7 = v13;
LABEL_6:
  *(_BYTE *)(v7 + 45) = 1;
  v14 = *(unsigned int *)(v7 + 48);
  v15 = *(unsigned int *)(v5 + 8 * v14 + 28);
  if ( (_DWORD)v15 == 1 )
  {
    *(_QWORD *)(v5 + 8 * v14 + 16) = 0;
    __faststorefence();
  }
  else
  {
    *(_DWORD *)(v5 + 8 * v14 + 28) = v15 - 1;
  }
  if ( (_DWORD)v15 == 1 )
  {
    v28 = *(unsigned int *)(v5 + 8 * v14 + 4);
    if ( (_DWORD)v28 != 0 )
    {
      v29 = *(unsigned int *)(v5 + 8 * v28 + 8);
      if ( (_DWORD)v29 != 0 && *(_DWORD *)(v5 + 8 * v29 + 16) != 0 )
      {
        sub_208CCA0(a1: v8, a2: v9, a3: v36, a4: v15, a5: 1);
        v7 = v36;
      }
    }
  }
  v35 = sub_1596F80(a1: v8, a2: v9, a3: v7);
  v34 = sub_1597CE0(
          a1: v5 + 373281248,
          a2: v5 + 352265344,
          a3: v5 + 352055816,
          a4: v5 + 352265344,
          a5: v37,
          a6: v35);
  v18 = *(_QWORD *)(v6 + 40);
  if ( (unsigned __int64)(v18 + 40) > *(_QWORD *)(v6 + 32) )
  {
    v18 = sub_1EAA920(a1: v16, a2: v17, a3: 40539936);
  }
  else
  {
    *(_QWORD *)(v6 + 40) = v18 + 40;
    *(_DWORD *)v18 = 40539936;
    *(_DWORD *)(v18 + 4) = 0;
    *(_QWORD *)(v18 + 8) = 0;
    *(_QWORD *)(v18 + 16) = 0;
    *(_QWORD *)(v18 + 24) = 0;
    *(_QWORD *)(v18 + 32) = 0;
  }
  v35 = v18;
  *(_DWORD *)(v18 + 20) = 46923644;
  *(_DWORD *)(v18 + 16) = *(_DWORD *)(v5 + 374343896);
  *(_DWORD *)(v18 + 12) = (unsigned __int64)(v18 - v5) >> 3;
  sub_503B9A0(a1: v16, a2: v17, a3: v18, a4: v18, a5: 0);
  v21 = v35;
  *(_DWORD *)(v35 + 8) = (unsigned __int64)(v34 - v5) >> 3;
  if ( (*(_DWORD *)v21 & 2) != 0 )
  {
    v30 = (v21 & 0xFFFFFFFFFFF80000LL) + 2112;
    if ( *(_BYTE *)((v21 & 0xFFFFFFFFFFF80000LL) + ((v21 - v30) >> 9) + 0x38) != 0 )
      *(_BYTE *)((v21 & 0xFFFFFFFFFFF80000LL) + ((v21 - v30) >> 9) + 0x38) = 0;
  }
  *(_DWORD *)(v21 + 28) = (unsigned __int64)(v38 - v5) >> 3;
  if ( (*(_DWORD *)v21 & 2) != 0 )
  {
    v31 = (v21 & 0xFFFFFFFFFFF80000LL) + 2112;
    if ( *(_BYTE *)((v21 & 0xFFFFFFFFFFF80000LL) + ((v21 - v31) >> 9) + 0x38) != 0 )
      *(_BYTE *)((v21 & 0xFFFFFFFFFFF80000LL) + ((v21 - v31) >> 9) + 0x38) = 0;
  }
  v34 = sub_27632E0(a1: v19, a2: v20, a3: v21);
  result = sub_15981E0(a1: v23, a2: v24, a3: v35, a4: v22, a5: v34);
  if ( *(int *)(v6 + 16) <= 0 )
    return sub_277F280(a1: v26, a2: v27, a3: v35);
  return result;
}
