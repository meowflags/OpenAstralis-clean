// sub_1EBF100
// rva 0x01ebf100  size 298  section .text  group text
// window base 0x181ebf100: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1EBF100(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, char a7)
{
  __int64 v7; // r14
  __int64 v8; // r15
  int v9; // r8d
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rax
  int v13; // eax
  __int64 v15; // r8
  __int64 v16; // rcx
  __int64 v17; // rdi
  __int64 v18; // rsi
  char v19; // [rsp+0h] [rbp-28h] BYREF
  __int64 v20; // [rsp+10h] [rbp-18h]
  __int64 v21; // [rsp+18h] [rbp-10h]
  unsigned int v22; // [rsp+24h] [rbp-4h]

  if ( (unsigned __int64)&v19 <= *(_QWORD *)(v8 + 8) )
  {
    sub_1EB84E0(a1, a2, a3, a4, a5, a6, a7: v19);
    goto LABEL_9;
  }
  v21 = a3;
  v9 = *(_DWORD *)(a3 + 8);
  if ( v9 == -1 )
  {
LABEL_9:
    v15 = *(_QWORD *)(v8 + 40);
    if ( (unsigned __int64)(v15 + 40) > *(_QWORD *)(v8 + 32) )
      goto LABEL_14;
    *(_QWORD *)(v8 + 40) = v15 + 40;
    *(_DWORD *)v15 = 34152072;
    *(_DWORD *)(v15 + 4) = 0;
    *(_QWORD *)(v15 + 8) = 0;
    *(_QWORD *)(v15 + 16) = 0;
    *(_QWORD *)(v15 + 24) = 0;
    *(_QWORD *)(v15 + 32) = 0;
    goto LABEL_11;
  }
  v10 = *(unsigned int *)(a3 + 4);
  if ( (_DWORD)v10 == 0 )
    goto LABEL_12;
  v11 = (unsigned int)(v9 - *(_DWORD *)(v7 + 8 * v10 + 12));
  v12 = *(unsigned int *)(v7 + 8 * v10 + 4);
  if ( (_DWORD)v12 == 0 )
  {
    while ( 1 )
    {
      sub_2771080(a1, a2, a3, a4: v11);
LABEL_14:
      v15 = sub_1EAA920(a1, a2, a3: 34152072);
LABEL_11:
      *(_DWORD *)(v15 + 20) = 46923644;
      *(_DWORD *)(v15 + 16) = *(_DWORD *)(v7 + 374343896);
      *(_DWORD *)(v15 + 12) = (unsigned __int64)(v15 - v7) >> 3;
      v20 = v15;
      sub_503B9A0(a1, a2, a3: v15, a4, a5: 0);
      sub_2769900(a1: v17, a2: v18, a3: v20, a4: v16, a5: &a7);
LABEL_12:
      sub_2771080();
    }
  }
  v22 = v11;
  v13 = sub_57B88C0(a1, a2, a3: v7 + 8 * v12, a4: v11, a5: (unsigned int)(v9 + 2));
  *(_DWORD *)(v21 + 8) = v13;
  if ( *(int *)(v8 + 16) <= 0 )
    sub_277F280();
  return v22;
}
