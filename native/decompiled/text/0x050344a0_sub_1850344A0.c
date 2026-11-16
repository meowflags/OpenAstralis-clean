// sub_1850344A0
// rva 0x050344a0  size 295  section .text  group text
// window base 0x1850344a0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1850344A0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, char a7)
{
  __int64 v7; // r14
  __int64 v8; // r15
  unsigned __int64 v10; // rbx
  __int64 v11; // rax
  unsigned __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rdi
  __int64 v15; // rsi
  __int64 v16; // [rsp+0h] [rbp-28h] BYREF
  __int64 v17; // [rsp+10h] [rbp-18h]
  __int64 v18; // [rsp+18h] [rbp-10h]
  __int64 v19; // [rsp+20h] [rbp-8h]

  if ( (unsigned __int64)&v16 <= *(_QWORD *)(v8 + 8) )
  {
    MEMORY[0x181EB84E0]();
  }
  else if ( a5 != v7 )
  {
    *(_DWORD *)(a3 + 4) = (unsigned __int64)(a5 - v7) >> 3;
    if ( (*(_DWORD *)a3 & 2) != 0 )
    {
      v10 = (a3 & 0xFFFFFFFFFFF80000LL) + 2112;
      if ( *(_BYTE *)((a3 & 0xFFFFFFFFFFF80000LL) + ((a3 - v10) >> 9) + 0x38) != 0 )
        *(_BYTE *)((a3 & 0xFFFFFFFFFFF80000LL) + ((a3 - v10) >> 9) + 0x38) = 0;
    }
    *(_QWORD *)(a3 + 16) = -1;
    if ( *(int *)(v8 + 16) <= 0 )
      MEMORY[0x18277F280]();
    return a3;
  }
  v11 = *(_QWORD *)(v8 + 40);
  if ( (unsigned __int64)(v11 + 48) > *(_QWORD *)(v8 + 32) )
    goto LABEL_13;
  *(_QWORD *)(v8 + 40) = v11 + 48;
  *(_DWORD *)v11 = 34101256;
  *(_DWORD *)(v11 + 4) = 0;
  *(_QWORD *)(v11 + 8) = 0;
  *(_QWORD *)(v11 + 16) = 0;
  *(_QWORD *)(v11 + 24) = 0;
  *(_QWORD *)(v11 + 32) = 0;
  *(_QWORD *)(v11 + 40) = 0;
  v19 = a5;
  v18 = a3;
  while ( 1 )
  {
    *(_DWORD *)(v11 + 20) = 46923644;
    *(_DWORD *)(v11 + 16) = *(_DWORD *)(v7 + 374343896);
    v12 = (unsigned __int64)(v11 - v7) >> 3;
    *(_DWORD *)(v11 + 12) = v12;
    v17 = v11;
    sub_18503B9A0(a1, a2, a3: v11, a4: v12, a5: 0);
    MEMORY[0x182769900](a1: v14, a2: v15, a3: v17, a4: v13, a5: &a7);
LABEL_13:
    v19 = a5;
    v18 = a3;
    v11 = MEMORY[0x181EAA920](a1, a2, a3: 34101256);
  }
}
