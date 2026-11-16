// sub_1815A25E0
// rva 0x015a25e0  size 651  section .text  group text
// window base 0x1815a25e0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1815A25E0(
        unsigned __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        char a7)
{
  __int64 v7; // r14
  __int64 v8; // r15
  __int64 v9; // rax
  __int64 v10; // r8
  __int64 v12; // rcx
  __int64 v13; // rdi
  __int64 v14; // rsi
  unsigned __int64 v15; // rbx
  unsigned __int64 v16; // rbx
  unsigned __int64 v17; // rbx
  __int64 v18; // r8
  __int64 v19; // rcx
  __int64 v20; // rdi
  __int64 v21; // rsi
  __int64 v22; // rdx
  char v23; // [rsp+0h] [rbp-18h] BYREF
  __int64 v24; // [rsp+8h] [rbp-10h]
  unsigned __int64 v25; // [rsp+10h] [rbp-8h]

  if ( (unsigned __int64)&v23 <= *(_QWORD *)(v8 + 8) )
  {
    MEMORY[0x181EB84E0]();
    goto LABEL_21;
  }
  v9 = *(unsigned int *)(a3 + 20);
  if ( (_DWORD)v9 == 0 )
  {
LABEL_21:
    MEMORY[0x182771080]();
    goto LABEL_22;
  }
  v25 = a3;
  if ( *(_DWORD *)(v7 + 8 * v9 + 44) != *(_DWORD *)(a3 + 28) )
  {
LABEL_22:
    v18 = *(_QWORD *)(v8 + 40);
    if ( (unsigned __int64)(v18 + 40) > *(_QWORD *)(v8 + 32) )
    {
      v18 = MEMORY[0x181EAA920](a1, a2, a3: 34449872);
    }
    else
    {
      *(_QWORD *)(v8 + 40) = v18 + 40;
      *(_DWORD *)v18 = 34449872;
      *(_DWORD *)(v18 + 4) = 0;
      *(_QWORD *)(v18 + 8) = 0;
      *(_QWORD *)(v18 + 16) = 0;
      *(_QWORD *)(v18 + 24) = 0;
      *(_QWORD *)(v18 + 32) = 0;
    }
    *(_DWORD *)(v18 + 20) = 46923644;
    *(_DWORD *)(v18 + 16) = *(_DWORD *)(v7 + 374343896);
    *(_DWORD *)(v18 + 12) = (unsigned __int64)(v18 - v7) >> 3;
    v24 = v18;
    MEMORY[0x18503B9A0](a1, a2, a3: v18, a4, a5: 0);
    goto LABEL_25;
  }
  if ( *(_DWORD *)(a3 + 12) == 0 )
  {
    if ( (unsigned int)sub_1815A2320(a1, a2, a3, a4, a5, a6, a7: v23) == 0 )
      goto LABEL_27;
    a3 = v25;
  }
  v10 = *(unsigned int *)(a3 + 4);
  *(_DWORD *)(a3 + 8) = v10;
  if ( (*(_DWORD *)a3 & 2) != 0 )
  {
    v15 = (a3 & 0xFFFFFFFFFFF80000LL) + 2112;
    if ( *(_BYTE *)((a3 & 0xFFFFFFFFFFF80000LL) + ((a3 - v15) >> 9) + 0x38) != 0 )
      *(_BYTE *)((a3 & 0xFFFFFFFFFFF80000LL) + ((a3 - v15) >> 9) + 0x38) = 0;
  }
  if ( (_DWORD)v10 == 0 )
  {
    while ( 1 )
    {
      MEMORY[0x182771080]();
LABEL_27:
      v22 = *(_QWORD *)(v8 + 40);
      if ( (unsigned __int64)(v22 + 40) > *(_QWORD *)(v8 + 32) )
      {
        v22 = MEMORY[0x181EAA920](a1: v13, a2: v14, a3: 34152072);
      }
      else
      {
        *(_QWORD *)(v8 + 40) = v22 + 40;
        *(_DWORD *)v22 = 34152072;
        *(_DWORD *)(v22 + 4) = 0;
        *(_QWORD *)(v22 + 8) = 0;
        *(_QWORD *)(v22 + 16) = 0;
        *(_QWORD *)(v22 + 24) = 0;
        *(_QWORD *)(v22 + 32) = 0;
      }
      *(_DWORD *)(v22 + 20) = 46923644;
      *(_DWORD *)(v22 + 16) = *(_DWORD *)(v7 + 374343896);
      *(_DWORD *)(v22 + 12) = (unsigned __int64)(v22 - v7) >> 3;
      v24 = v22;
      MEMORY[0x18503B9A0](a1: v13, a2: v14, a3: v22, a4: v12, a5: 0);
LABEL_25:
      MEMORY[0x182769900](a1: v20, a2: v21, a3: v24, a4: v19, a5: &a7);
    }
  }
  *(_DWORD *)(a3 + 4) = *(_DWORD *)(v7 + 8 * v10 + 24);
  if ( (*(_DWORD *)a3 & 2) != 0 )
  {
    v16 = (a3 & 0xFFFFFFFFFFF80000LL) + 2112;
    if ( *(_BYTE *)((a3 & 0xFFFFFFFFFFF80000LL) + ((a3 - v16) >> 9) + 0x38) != 0 )
      *(_BYTE *)((a3 & 0xFFFFFFFFFFF80000LL) + ((a3 - v16) >> 9) + 0x38) = 0;
  }
  *(_DWORD *)(a3 + 16) = *(_DWORD *)(a3 + 12);
  if ( (*(_DWORD *)a3 & 2) != 0 )
  {
    v17 = (a3 & 0xFFFFFFFFFFF80000LL) + 2112;
    if ( *(_BYTE *)((a3 & 0xFFFFFFFFFFF80000LL) + ((a3 - v17) >> 9) + 0x38) != 0 )
      *(_BYTE *)((a3 & 0xFFFFFFFFFFF80000LL) + ((a3 - v17) >> 9) + 0x38) = 0;
  }
  *(_DWORD *)(a3 + 12) = 0;
  if ( *(int *)(v8 + 16) <= 0 )
    MEMORY[0x18277F280]();
  return v7 + 8 * v10;
}
