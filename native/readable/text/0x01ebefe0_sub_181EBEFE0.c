// sub_1EBEFE0
// rva 0x01ebefe0  size 279  section .text  group text
// window base 0x181ebefe0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1EBEFE0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, char a7)
{
  __int64 v7; // r14
  __int64 v8; // r15
  int v9; // r8d
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 result; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rdi
  __int64 v16; // rsi
  char v17; // [rsp+0h] [rbp-18h] BYREF
  __int64 v18; // [rsp+8h] [rbp-10h]
  __int64 v19; // [rsp+10h] [rbp-8h]

  if ( (unsigned __int64)&v17 <= *(_QWORD *)(v8 + 8) )
  {
    v19 = a3;
    sub_1EB84E0(a1, a2, a3, a4, a5, a6, a7: v17);
    goto LABEL_8;
  }
  v9 = *(_DWORD *)(a3 + 8);
  if ( v9 == -1 )
  {
LABEL_8:
    v19 = a3;
    v13 = *(_QWORD *)(v8 + 40);
    if ( (unsigned __int64)(v13 + 40) > *(_QWORD *)(v8 + 32) )
      goto LABEL_13;
    *(_QWORD *)(v8 + 40) = v13 + 40;
    *(_DWORD *)v13 = 34152072;
    *(_DWORD *)(v13 + 4) = 0;
    *(_QWORD *)(v13 + 8) = 0;
    *(_QWORD *)(v13 + 16) = 0;
    *(_QWORD *)(v13 + 24) = 0;
    *(_QWORD *)(v13 + 32) = 0;
    goto LABEL_10;
  }
  v10 = *(unsigned int *)(a3 + 4);
  if ( (_DWORD)v10 == 0 )
    goto LABEL_11;
  v11 = *(unsigned int *)(v7 + 8 * v10 + 4);
  if ( (_DWORD)v11 == 0 )
  {
    while ( 1 )
    {
      v19 = a3;
      sub_2771080();
LABEL_13:
      v13 = sub_1EAA920(a1, a2, a3: 34152072);
LABEL_10:
      *(_DWORD *)(v13 + 20) = 46923644;
      *(_DWORD *)(v13 + 16) = *(_DWORD *)(v7 + 374343896);
      *(_DWORD *)(v13 + 12) = (unsigned __int64)(v13 - v7) >> 3;
      v18 = v13;
      sub_503B9A0(a1, a2, a3: v13, a4, a5: 0);
      sub_2769900(a1: v15, a2: v16, a3: v18, a4: v14, a5: &a7);
LABEL_11:
      v19 = a3;
      sub_2771080();
    }
  }
  v19 = a3;
  result = sub_57B78A0(a1, a2, a3: v7 + 8 * v11, a4, a5: (unsigned int)(v9 + 1));
  if ( *(int *)(v8 + 16) <= 0 )
    return sub_277F280();
  return result;
}
