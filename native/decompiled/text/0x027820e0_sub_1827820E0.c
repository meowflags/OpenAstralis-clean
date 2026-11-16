// sub_1827820E0
// rva 0x027820e0  size 602  section .text  group text
// window base 0x1827820e0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
unsigned __int64 __fastcall sub_1827820E0(__int64 a1, unsigned __int64 a2, __int64 a3, int a4, __int64 a5, int a6)
{
  __int64 v6; // r14
  __int64 v7; // r15
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rax
  unsigned __int64 v11; // rbp
  __int64 v12; // rbx
  unsigned __int64 v13; // rbx
  unsigned __int64 result; // rax
  __int64 v15; // rax
  unsigned __int64 v16; // rbp
  __int64 v17; // rbx
  unsigned __int64 v18; // rbx
  unsigned __int64 v19; // rbp
  unsigned __int64 v20; // rbp
  unsigned __int64 v21; // rbx
  unsigned __int64 v22; // rbx
  int v23; // [rsp+0h] [rbp-8h] BYREF

  if ( (unsigned __int64)&v23 <= *(_QWORD *)(v7 + 8) )
  {
    MEMORY[0x181EB83C0]();
    goto LABEL_34;
  }
  *(_BYTE *)(a5 + 20) = 0;
  __faststorefence();
  *(_QWORD *)(a5 + 8) = v7;
  v8 = *(unsigned int *)(a5 + 4);
  if ( (_DWORD)v8 == 0 )
  {
LABEL_34:
    sub_18276EFE0(a1, a2, a3, a4, a5, a6, a7: v23);
LABEL_35:
    sub_18276EFE0(a1, a2, a3, a4: v9, a5, a6, a7: v23);
    goto LABEL_36;
  }
  v9 = (unsigned __int64)(a5 - v6) >> 3;
  if ( *(_DWORD *)(v6 + 8 * v8 + 8) == 47076659 )
  {
    v15 = *(unsigned int *)(a3 + 16);
    if ( (_DWORD)v15 != 0 )
    {
      v16 = v6 + 8 * v15;
      if ( *(_DWORD *)(v16 + 4) != 0 )
      {
        v17 = *(unsigned int *)(v6 + 8 * v15 + 8);
        if ( (_DWORD)v17 == 0 )
        {
LABEL_38:
          sub_18276EFE0(a1, a2, a3, a4: v9, a5, a6, a7: v23);
          __builtin_debugtrap();
          __builtin_debugtrap();
          __builtin_debugtrap();
          __builtin_debugtrap();
          __builtin_debugtrap();
          __builtin_debugtrap();
          return sub_182782340();
        }
        *(_DWORD *)(v6 + 8 * v17 + 16) = v9;
        v18 = v6 + 8 * v17;
        a2 = *(unsigned int *)v18;
        if ( (a2 & 2) != 0 )
        {
          a2 = v18 & 0xFFFFFFFFFFF80000LL;
          a1 = (v18 & 0xFFFFFFFFFFF80000LL) + 2112;
          v22 = (v18 - a1) >> 9;
          if ( *(_BYTE *)(a2 + v22 + 56) != 0 )
            *(_BYTE *)(a2 + v22 + 56) = 0;
        }
      }
      else
      {
        *(_DWORD *)(v6 + 8 * v15 + 4) = v9;
        if ( (*(_DWORD *)v16 & 2) != 0 )
        {
          a2 = v16 & 0xFFFFFFFFFFF80000LL;
          a1 = (v16 & 0xFFFFFFFFFFF80000LL) + 2112;
          if ( *(_BYTE *)((v16 & 0xFFFFFFFFFFF80000LL) + ((v16 - a1) >> 9) + 0x38) != 0 )
            *(_BYTE *)((v16 & 0xFFFFFFFFFFF80000LL) + ((v16 - a1) >> 9) + 0x38) = 0;
        }
      }
      *(_DWORD *)(v6 + 8 * v15 + 8) = v9;
      result = *(unsigned int *)v16;
      if ( (result & 2) != 0 )
      {
        result = v16 & 0xFFFFFFFFFFF80000LL;
        v9 = (v16 & 0xFFFFFFFFFFF80000LL) + 2112;
        v19 = (v16 - v9) >> 9;
        if ( *(_BYTE *)(result + v19 + 56) != 0 )
          *(_BYTE *)(result + v19 + 56) = 0;
      }
      goto LABEL_9;
    }
    goto LABEL_35;
  }
  v10 = *(unsigned int *)(a3 + 12);
  if ( (_DWORD)v10 == 0 )
  {
LABEL_36:
    sub_18276EFE0(a1, a2, a3, a4: v9, a5, a6, a7: v23);
LABEL_37:
    sub_18276EFE0(a1, a2, a3, a4: v9, a5, a6, a7: v23);
    goto LABEL_38;
  }
  v11 = v6 + 8 * v10;
  if ( *(_DWORD *)(v11 + 4) == 0 )
  {
    *(_DWORD *)(v6 + 8 * v10 + 4) = v9;
    if ( (*(_DWORD *)v11 & 2) != 0 )
    {
      a2 = v11 & 0xFFFFFFFFFFF80000LL;
      a1 = (v11 & 0xFFFFFFFFFFF80000LL) + 2112;
      if ( *(_BYTE *)((v11 & 0xFFFFFFFFFFF80000LL) + ((v11 - a1) >> 9) + 0x38) != 0 )
        *(_BYTE *)((v11 & 0xFFFFFFFFFFF80000LL) + ((v11 - a1) >> 9) + 0x38) = 0;
    }
    goto LABEL_8;
  }
  v12 = *(unsigned int *)(v6 + 8 * v10 + 8);
  if ( (_DWORD)v12 == 0 )
    goto LABEL_37;
  *(_DWORD *)(v6 + 8 * v12 + 16) = v9;
  v13 = v6 + 8 * v12;
  a2 = *(unsigned int *)v13;
  if ( (a2 & 2) != 0 )
  {
    a2 = v13 & 0xFFFFFFFFFFF80000LL;
    a1 = (v13 & 0xFFFFFFFFFFF80000LL) + 2112;
    v21 = (v13 - a1) >> 9;
    if ( *(_BYTE *)(a2 + v21 + 56) != 0 )
      *(_BYTE *)(a2 + v21 + 56) = 0;
  }
LABEL_8:
  *(_DWORD *)(v6 + 8 * v10 + 8) = v9;
  result = *(unsigned int *)v11;
  if ( (result & 2) != 0 )
  {
    result = v11 & 0xFFFFFFFFFFF80000LL;
    v9 = (v11 & 0xFFFFFFFFFFF80000LL) + 2112;
    v20 = (v11 - v9) >> 9;
    if ( *(_BYTE *)(result + v20 + 56) != 0 )
      *(_BYTE *)(result + v20 + 56) = 0;
  }
LABEL_9:
  if ( *(int *)(v7 + 16) <= 0 )
    return sub_18277F280(a1, a2, a3, a4: v9);
  return result;
}
