// sub_50337C0
// rva 0x050337c0  size 219  section .text  group text
// window base 0x1850337c0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_50337C0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, __int64 a6, char a7)
{
  __int64 v7; // r14
  __int64 v8; // r15
  __int64 v10; // rax
  unsigned __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rdi
  __int64 v14; // rsi
  __int64 v15; // [rsp+0h] [rbp-28h] BYREF
  __int64 v16; // [rsp+10h] [rbp-18h]
  __int64 v17; // [rsp+18h] [rbp-10h]
  int v18; // [rsp+24h] [rbp-4h]

  if ( (unsigned __int64)&v15 <= *(_QWORD *)(v8 + 8) )
  {
    sub_1EB84E0();
  }
  else if ( (unsigned int)(a5 - 1) < 0xA )
  {
    *(_DWORD *)(a3 + 28) = a5;
    if ( *(int *)(v8 + 16) <= 0 )
      sub_277F280();
    return a3;
  }
  v10 = *(_QWORD *)(v8 + 40);
  if ( (unsigned __int64)(v10 + 40) > *(_QWORD *)(v8 + 32) )
    goto LABEL_10;
  *(_QWORD *)(v8 + 40) = v10 + 40;
  *(_DWORD *)v10 = 34081944;
  *(_DWORD *)(v10 + 4) = 0;
  *(_QWORD *)(v10 + 8) = 0;
  *(_QWORD *)(v10 + 16) = 0;
  *(_QWORD *)(v10 + 24) = 0;
  *(_QWORD *)(v10 + 32) = 0;
  v18 = a5;
  v17 = a3;
  while ( 1 )
  {
    *(_DWORD *)(v10 + 20) = 46923644;
    *(_DWORD *)(v10 + 16) = *(_DWORD *)(v7 + 374343896);
    v11 = (unsigned __int64)(v10 - v7) >> 3;
    *(_DWORD *)(v10 + 12) = v11;
    v16 = v10;
    sub_503B9A0(a1, a2, a3: v10, a4: v11, a5: 0);
    sub_2769900(a1: v13, a2: v14, a3: v16, a4: v12, a5: &a7);
LABEL_10:
    v18 = a5;
    v17 = a3;
    v10 = sub_1EAA920(a1, a2, a3: 34081944);
  }
}
