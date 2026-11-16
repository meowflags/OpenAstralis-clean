// sub_4F28460
// rva 0x04f28460  size 311  section .text  group text
// window base 0x184f28460: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_4F28460(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, char a7)
{
  __int64 v7; // r14
  __int64 v8; // r15
  __int64 v9; // rcx
  __int64 v10; // rdi
  __int64 v11; // rsi
  unsigned __int64 v12; // rdx
  __int64 result; // rax
  unsigned __int64 v14; // rbx
  __int64 v15; // r8
  __int64 v16; // rcx
  __int64 v17; // rdi
  __int64 v18; // rsi
  char v19; // [rsp+0h] [rbp-18h] BYREF
  __int64 v20; // [rsp+8h] [rbp-10h]
  unsigned int *v21; // [rsp+10h] [rbp-8h]

  v21 = (unsigned int *)a3;
  if ( (unsigned __int64)&v19 <= *(_QWORD *)(v8 + 8) )
  {
    sub_1EB84E0();
    goto LABEL_10;
  }
  v20 = a5;
  sub_4F28180(a1, a2, a3, a4, a5, a6, a7: v19);
  if ( v20 == v7 )
  {
LABEL_10:
    v15 = *(_QWORD *)(v8 + 40);
    if ( (unsigned __int64)(v15 + 48) > *(_QWORD *)(v8 + 32) )
      goto LABEL_13;
    *(_QWORD *)(v8 + 40) = v15 + 48;
    *(_DWORD *)v15 = 34101256;
    *(_DWORD *)(v15 + 4) = 0;
    *(_QWORD *)(v15 + 8) = 0;
    *(_QWORD *)(v15 + 16) = 0;
    *(_QWORD *)(v15 + 24) = 0;
    *(_QWORD *)(v15 + 32) = 0;
    *(_QWORD *)(v15 + 40) = 0;
    while ( 1 )
    {
      *(_DWORD *)(v15 + 20) = 46923644;
      *(_DWORD *)(v15 + 16) = *(_DWORD *)(v7 + 374343896);
      *(_DWORD *)(v15 + 12) = (unsigned __int64)(v15 - v7) >> 3;
      v20 = v15;
      sub_503B9A0(a1: v10, a2: v11, a3: v15, a4: v9, a5: 0);
      sub_2769900(a1: v17, a2: v18, a3: v20, a4: v16, a5: &a7);
LABEL_13:
      v15 = sub_1EAA920(a1: v10, a2: v11, a3: 34101256);
    }
  }
  v12 = (unsigned __int64)v21;
  v21[1] = (unsigned __int64)(v20 - v7) >> 3;
  result = *(unsigned int *)v12;
  if ( (result & 2) != 0 )
  {
    v14 = (v12 & 0xFFFFFFFFFFF80000LL) + 2112;
    result = (v12 - v14) >> 9;
    if ( *(_BYTE *)((v12 & 0xFFFFFFFFFFF80000LL) + result + 0x38) != 0 )
      *(_BYTE *)((v12 & 0xFFFFFFFFFFF80000LL) + ((v12 - v14) >> 9) + 0x38) = 0;
  }
  if ( *(int *)(v8 + 16) <= 0 )
    return sub_277F280();
  return result;
}
