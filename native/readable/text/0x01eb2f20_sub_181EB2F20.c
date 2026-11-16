// sub_1EB2F20
// rva 0x01eb2f20  size 281  section .text  group text
// window base 0x181eb2f20: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1EB2F20(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, int a6, char a7)
{
  __int64 v7; // r14
  __int64 v8; // r15
  unsigned int v9; // r8d
  __int64 v11; // r8
  unsigned __int64 v12; // rcx
  __int64 v13; // rdi
  __int64 v14; // rsi
  __int64 v15; // rax
  char v16; // [rsp+0h] [rbp-18h] BYREF
  __int64 v17; // [rsp+8h] [rbp-10h]
  __int64 v18; // [rsp+10h] [rbp-8h]

  if ( (unsigned __int64)&v16 <= *(_QWORD *)(v8 + 8) )
  {
    sub_1EB84E0(a1, a2, a3, a4, a5, a6, a7: v16);
LABEL_7:
    v11 = *(_QWORD *)(v8 + 40);
    if ( (unsigned __int64)(v11 + 40) > *(_QWORD *)(v8 + 32) )
    {
      v18 = a3;
      v11 = sub_1EAA920(a1, a2, a3: 34090048);
    }
    else
    {
      *(_QWORD *)(v8 + 40) = v11 + 40;
      *(_DWORD *)v11 = 34090048;
      *(_DWORD *)(v11 + 4) = 0;
      *(_QWORD *)(v11 + 8) = 0;
      *(_QWORD *)(v11 + 16) = 0;
      *(_QWORD *)(v11 + 24) = 0;
      *(_QWORD *)(v11 + 32) = 0;
      v18 = a3;
    }
    *(_DWORD *)(v11 + 20) = 46923644;
    *(_DWORD *)(v11 + 16) = *(_DWORD *)(v7 + 374343896);
    *(_DWORD *)(v11 + 12) = (unsigned __int64)(v11 - v7) >> 3;
    v17 = v11;
    sub_503B9A0(a1, a2, a3: v11, a4, a5: 0);
    v15 = v17;
    *(_DWORD *)(v17 + 8) = 46045729;
    if ( (*(_DWORD *)v15 & 2) != 0 )
      goto LABEL_11;
    while ( 1 )
    {
      v15 = sub_2769900(a1: v13, a2: v14, a3: v15, a4: v12, a5: &a7);
LABEL_11:
      v12 = (v15 & 0xFFFFFFFFFFF80000LL) + 2112;
      if ( *(_BYTE *)((v15 & 0xFFFFFFFFFFF80000LL) + ((v15 - v12) >> 9) + 0x38) != 0 )
        *(_BYTE *)((v15 & 0xFFFFFFFFFFF80000LL) + ((v15 - v12) >> 9) + 0x38) = 0;
    }
  }
  v9 = *(_DWORD *)(a3 + 12);
  if ( v9 == -1 )
    goto LABEL_7;
  if ( *(int *)(v8 + 16) <= 0 )
    sub_277F280();
  return v9;
}
