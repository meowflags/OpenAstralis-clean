// sub_4F25B40
// rva 0x04f25b40  size 303  section .text  group text
// window base 0x184f25b40: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
void __fastcall sub_4F25B40(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, char a7)
{
  __int64 v7; // r14
  __int64 v8; // r15
  __int64 v9; // r8
  unsigned __int64 v10; // rcx
  __int64 v11; // rdi
  __int64 v12; // rsi
  __int64 v13; // rax
  char v14; // [rsp+0h] [rbp-28h] BYREF
  __int64 v15; // [rsp+10h] [rbp-18h]
  __int64 v16; // [rsp+18h] [rbp-10h]
  int v17; // [rsp+24h] [rbp-4h]

  if ( (unsigned __int64)&v14 <= *(_QWORD *)(v8 + 8) )
  {
    v17 = a5;
    sub_1EB84E0();
LABEL_6:
    v17 = a5;
    v9 = *(_QWORD *)(v8 + 40);
    if ( (unsigned __int64)(v9 + 40) > *(_QWORD *)(v8 + 32) )
    {
      v9 = sub_1EAA920(a1, a2, a3: 34081944);
    }
    else
    {
      *(_QWORD *)(v8 + 40) = v9 + 40;
      *(_DWORD *)v9 = 34081944;
      *(_DWORD *)(v9 + 4) = 0;
      *(_QWORD *)(v9 + 8) = 0;
      *(_QWORD *)(v9 + 16) = 0;
      *(_QWORD *)(v9 + 24) = 0;
      *(_QWORD *)(v9 + 32) = 0;
    }
    *(_DWORD *)(v9 + 20) = 46923644;
    *(_DWORD *)(v9 + 16) = *(_DWORD *)(v7 + 374343896);
    *(_DWORD *)(v9 + 12) = (unsigned __int64)(v9 - v7) >> 3;
    v15 = v9;
    sub_503B9A0(a1, a2, a3: v9, a4, a5: 0);
    v13 = v15;
    *(_DWORD *)(v15 + 8) = 45958666;
    if ( (*(_DWORD *)v13 & 2) != 0 )
      goto LABEL_10;
    while ( 1 )
    {
      v13 = sub_2769900(a1: v11, a2: v12, a3: v13, a4: v10, a5: &a7);
LABEL_10:
      v10 = (v13 & 0xFFFFFFFFFFF80000LL) + 2112;
      if ( *(_BYTE *)((v13 & 0xFFFFFFFFFFF80000LL) + ((v13 - v10) >> 9) + 0x38) != 0 )
        *(_BYTE *)((v13 & 0xFFFFFFFFFFF80000LL) + ((v13 - v10) >> 9) + 0x38) = 0;
    }
  }
  v16 = a3;
  if ( (int)a5 < 0 )
    goto LABEL_6;
  v17 = a5;
  sub_4F25A20(a1, a2, a3, a4, a5, a6, a7: v14);
  *(_DWORD *)(v16 + 20) = *(_DWORD *)(v16 + 16);
  if ( *(int *)(v8 + 16) <= 0 )
    sub_277F280();
}
