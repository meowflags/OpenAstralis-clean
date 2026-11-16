// sub_4F21FA0
// rva 0x04f21fa0  size 365  section .text  group text
// window base 0x184f21fa0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_4F21FA0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, char a7)
{
  __int64 v7; // r14
  __int64 v8; // r15
  __int64 v9; // rdi
  __int64 v10; // rsi
  __int64 v11; // rdx
  int v12; // r8d
  __int64 v13; // r8
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 result; // rax
  __int64 v17; // r8
  unsigned __int64 v18; // rcx
  unsigned __int64 v19; // rcx
  __int64 v20; // rdi
  __int64 v21; // rsi
  __int64 v22; // rax
  char v23; // [rsp+0h] [rbp-28h] BYREF
  __int64 v24; // [rsp+10h] [rbp-18h]
  __int64 v25; // [rsp+18h] [rbp-10h]
  unsigned int v26; // [rsp+24h] [rbp-4h]

  v25 = a3;
  v26 = a5;
  if ( (unsigned __int64)&v23 <= *(_QWORD *)(v8 + 8) )
  {
    sub_1EB84E0(a1, a2, a3, a4: (unsigned int)a5);
LABEL_8:
    v17 = *(_QWORD *)(v8 + 40);
    if ( (unsigned __int64)(v17 + 40) > *(_QWORD *)(v8 + 32) )
    {
      v17 = sub_1EAA920(a1: v9, a2: v10, a3: 34107088, a4: v26);
    }
    else
    {
      *(_QWORD *)(v8 + 40) = v17 + 40;
      *(_DWORD *)v17 = 34107088;
      *(_DWORD *)(v17 + 4) = 0;
      *(_QWORD *)(v17 + 8) = 0;
      *(_QWORD *)(v17 + 16) = 0;
      *(_QWORD *)(v17 + 24) = 0;
      *(_QWORD *)(v17 + 32) = 0;
    }
    *(_DWORD *)(v17 + 20) = 46923644;
    *(_DWORD *)(v17 + 16) = *(_DWORD *)(v7 + 374343896);
    v18 = (unsigned __int64)(v17 - v7) >> 3;
    *(_DWORD *)(v17 + 12) = v18;
    v24 = v17;
    sub_503B9A0(a1: v9, a2: v10, a3: v17, a4: v18, a5: 0);
    v22 = v24;
    *(_DWORD *)(v24 + 8) = 45971821;
    if ( (*(_DWORD *)v22 & 2) != 0 )
      goto LABEL_14;
    goto LABEL_11;
  }
  sub_4F21320(a1, a2, a3, a4, a5, a6, a7: v23);
  v11 = v25;
  v12 = *(_DWORD *)(v25 + 12);
  if ( v12 == 0 )
    goto LABEL_8;
  v13 = (unsigned int)(v12 - 1);
  *(_DWORD *)(v25 + 12) = v13;
  v14 = *(unsigned int *)(v11 + 8);
  if ( (_DWORD)v14 == 0 )
    goto LABEL_12;
  v15 = *(unsigned int *)(v7 + 8 * v14 + 8);
  if ( (unsigned int)v15 <= (unsigned int)v13 )
  {
    while ( 1 )
    {
      v22 = sub_2771220(a1: v9, a2: v10, a3: (unsigned int)v13, a4: v15, a5: (unsigned int)v15);
LABEL_14:
      v19 = (v22 & 0xFFFFFFFFFFF80000LL) + 2112;
      if ( *(_BYTE *)((v22 & 0xFFFFFFFFFFF80000LL) + ((v22 - v19) >> 9) + 0x38) != 0 )
        *(_BYTE *)((v22 & 0xFFFFFFFFFFF80000LL) + ((v22 - v19) >> 9) + 0x38) = 0;
LABEL_11:
      sub_2769900(a1: v20, a2: v21, a3: v22, a4: v19, a5: &a7);
LABEL_12:
      sub_2771080();
    }
  }
  result = v7 + 8 * v14;
  *(_BYTE *)(result + v13 + 12) = v26;
  if ( *(int *)(v8 + 16) <= 0 )
    return sub_277F280();
  return result;
}
