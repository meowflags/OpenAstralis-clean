// sub_501C120
// rva 0x0501c120  size 311  section .text  group text
// window base 0x18501c120: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_501C120(__int64 a1, __int64 a2, unsigned int *a3, __int64 a4, _DWORD *a5, __int64 a6, char a7)
{
  _DWORD *v7; // r14
  __int64 v8; // r15
  int v9; // r9d
  signed int v11; // edi
  unsigned int v12; // eax
  __int64 v13; // r8
  __int64 v14; // rcx
  __int64 v15; // rdi
  __int64 v16; // rsi
  __int64 v17; // [rsp+0h] [rbp-28h] BYREF
  __int64 v18; // [rsp+10h] [rbp-18h]
  unsigned int *v19; // [rsp+18h] [rbp-10h]
  _DWORD *v20; // [rsp+20h] [rbp-8h]

  v20 = a5;
  if ( (unsigned __int64)&v17 <= *(_QWORD *)(v8 + 8) )
  {
    sub_1EB84E0();
    goto LABEL_12;
  }
  v19 = a3;
  if ( a5 == v7 )
  {
LABEL_12:
    v13 = *(_QWORD *)(v8 + 40);
    if ( (unsigned __int64)(v13 + 48) > *(_QWORD *)(v8 + 32) )
      goto LABEL_15;
    *(_QWORD *)(v8 + 40) = v13 + 48;
    *(_DWORD *)v13 = 34101256;
    *(_DWORD *)(v13 + 4) = 0;
    *(_QWORD *)(v13 + 8) = 0;
    *(_QWORD *)(v13 + 16) = 0;
    *(_QWORD *)(v13 + 24) = 0;
    *(_QWORD *)(v13 + 32) = 0;
    *(_QWORD *)(v13 + 40) = 0;
    while ( 1 )
    {
      *(_DWORD *)(v13 + 20) = 46923644;
      *(_DWORD *)(v13 + 16) = v7[93585974];
      *(_DWORD *)(v13 + 12) = (unsigned __int64)(v13 - (_QWORD)v7) >> 3;
      v18 = v13;
      sub_503B9A0(a1, a2, a3: v13, a4, a5: 0);
      sub_2769900(a1: v15, a2: v16, a3: v18, a4: v14, a5: &a7);
LABEL_15:
      v13 = sub_1EAA920(a1, a2, a3: 34101256);
    }
  }
  v9 = a3[2];
  if ( v9 < 0 || (v11 = a3[3]) <= v9 )
  {
    if ( *(int *)(v8 + 16) <= 0 )
      sub_277F280();
    return 0;
  }
  else
  {
    v12 = sub_501BB00(a1: a5, a2, a3: (__int64)&v7[2 * a3[1]], a4, a5: v9, a6: v11);
    v19[2] = v12;
    if ( *(int *)(v8 + 16) <= 0 )
      sub_277F280();
    return 1;
  }
}
