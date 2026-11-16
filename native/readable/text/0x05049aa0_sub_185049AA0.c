// sub_5049AA0
// rva 0x05049aa0  size 568  section .text  group text
// window base 0x185049aa0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
unsigned __int64 __fastcall sub_5049AA0(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        char a7)
{
  __int64 v7; // r14
  __int64 v8; // r15
  int v9; // eax
  unsigned __int64 v10; // rcx
  unsigned __int64 result; // rax
  __int64 v12; // rbx
  __int64 v13; // rcx
  __int64 v14; // rdi
  __int64 v15; // rsi
  __int64 v16; // rdx
  __int64 v17; // [rsp+0h] [rbp-38h] BYREF
  __int64 v18; // [rsp+10h] [rbp-28h]
  unsigned __int64 v19; // [rsp+18h] [rbp-20h]
  __int64 v20; // [rsp+20h] [rbp-18h]
  __int64 v21; // [rsp+28h] [rbp-10h]
  int v22; // [rsp+34h] [rbp-4h]

  if ( (unsigned __int64)&v17 <= *(_QWORD *)(v8 + 8) )
  {
    v9 = sub_1EB84E0();
    goto LABEL_14;
  }
  v9 = *(_DWORD *)(v7 + 374343896);
  v10 = 34101256;
  if ( a5 == v7 )
  {
LABEL_14:
    v12 = *(_QWORD *)(v8 + 40);
    if ( (unsigned __int64)(v12 + 48) > *(_QWORD *)(v8 + 32) )
    {
      v22 = v9;
      v21 = a6;
      v20 = a5;
      v19 = a3;
      v12 = sub_1EAA920(a1, a2, a3: v10);
      v9 = v22;
    }
    else
    {
      *(_QWORD *)(v8 + 40) = v12 + 48;
      *(_DWORD *)v12 = 34101256;
      *(_DWORD *)(v12 + 4) = 0;
      *(_QWORD *)(v12 + 8) = 0;
      *(_QWORD *)(v12 + 16) = 0;
      *(_QWORD *)(v12 + 24) = 0;
      *(_QWORD *)(v12 + 32) = 0;
      *(_QWORD *)(v12 + 40) = 0;
      v21 = a6;
      v19 = a3;
    }
    *(_DWORD *)(v12 + 20) = 46923644;
    *(_DWORD *)(v12 + 16) = v9;
    *(_DWORD *)(v12 + 12) = (unsigned __int64)(v12 - v7) >> 3;
    v18 = v12;
    sub_503B9A0(a1, a2, a3: (unsigned int *)v12, a4: v10, a5: 0);
    goto LABEL_17;
  }
  *(_DWORD *)(a3 + 4) = (unsigned __int64)(a5 - v7) >> 3;
  if ( (*(_DWORD *)a3 & 2) != 0 )
  {
    a2 = (a3 & 0xFFFFFFFFFFF80000LL) + 2112;
    if ( *(_BYTE *)((a3 & 0xFFFFFFFFFFF80000LL) + ((a3 - a2) >> 9) + 0x38) != 0 )
      *(_BYTE *)((a3 & 0xFFFFFFFFFFF80000LL) + ((a3 - a2) >> 9) + 0x38) = 0;
  }
  if ( a6 == v7 )
  {
    while ( 1 )
    {
      v19 = a3;
      v16 = *(_QWORD *)(v8 + 40);
      if ( (unsigned __int64)(v16 + 48) > *(_QWORD *)(v8 + 32) )
      {
        v22 = v9;
        v20 = a5;
        v16 = sub_1EAA920(a1, a2, a3: v10);
        v9 = v22;
      }
      else
      {
        *(_QWORD *)(v8 + 40) = v16 + 48;
        *(_DWORD *)v16 = 34101256;
        *(_DWORD *)(v16 + 4) = 0;
        *(_QWORD *)(v16 + 8) = 0;
        *(_QWORD *)(v16 + 16) = 0;
        *(_QWORD *)(v16 + 24) = 0;
        *(_QWORD *)(v16 + 32) = 0;
        *(_QWORD *)(v16 + 40) = 0;
        v20 = a5;
      }
      *(_DWORD *)(v16 + 20) = 46923644;
      *(_DWORD *)(v16 + 16) = v9;
      *(_DWORD *)(v16 + 12) = (unsigned __int64)(v16 - v7) >> 3;
      v18 = v16;
      sub_503B9A0(a1, a2, a3: (unsigned int *)v16, a4: v10, a5: 0);
LABEL_17:
      v9 = sub_2769900(a1: v14, a2: v15, a3: v18, a4: v13, a5: &a7);
    }
  }
  *(_DWORD *)(a3 + 8) = (unsigned __int64)(a6 - v7) >> 3;
  result = *(unsigned int *)a3;
  if ( (result & 2) != 0 )
  {
    v10 = a3 & 0xFFFFFFFFFFF80000LL;
    result = (a3 - ((a3 & 0xFFFFFFFFFFF80000LL) + 2112)) >> 9;
    if ( *(_BYTE *)((a3 & 0xFFFFFFFFFFF80000LL) + result + 0x38) != 0 )
      *(_BYTE *)(v10 + result + 56) = 0;
  }
  if ( *(int *)(v8 + 16) <= 0 )
    return sub_277F280(a1, a2, a3, a4: v10);
  return result;
}
