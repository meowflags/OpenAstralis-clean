// sub_184F20BE0
// rva 0x04f20be0  size 661  section .text  group text
// window base 0x184f20be0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
unsigned __int64 __fastcall sub_184F20BE0(
        unsigned __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        __int64 a5,
        int a6,
        char a7)
{
  __int64 v7; // r14
  __int64 v8; // r15
  __int64 v9; // rbx
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rbp
  unsigned __int64 i; // rax
  unsigned __int64 result; // rax
  unsigned __int64 v14; // rbx
  __int64 v15; // rdx
  unsigned __int64 v16; // rcx
  __int64 v17; // rdi
  __int64 v18; // rsi
  __int64 v19; // rax
  int v20; // [rsp+0h] [rbp-28h] BYREF
  __int64 v21; // [rsp+8h] [rbp-20h]
  unsigned int *v22; // [rsp+10h] [rbp-18h]
  __int64 v23; // [rsp+18h] [rbp-10h]
  int v24; // [rsp+24h] [rbp-4h]

  if ( (unsigned __int64)&v20 <= *(_QWORD *)(v8 + 8) )
  {
    v24 = a6;
    v23 = a5;
    v22 = (unsigned int *)a3;
    MEMORY[0x181EB84E0]();
    goto LABEL_21;
  }
  *(_DWORD *)(a3 + 4) = (unsigned __int64)(a5 - v7) >> 3;
  __faststorefence();
  if ( (*(_DWORD *)a3 & 2) != 0 )
  {
    a4 = a3 & 0xFFFFFFFFFFF80000LL;
    v14 = (a3 & 0xFFFFFFFFFFF80000LL) + 2112;
    if ( *(_BYTE *)((a3 & 0xFFFFFFFFFFF80000LL) + ((a3 - v14) >> 9) + 0x38) != 0 )
      *(_BYTE *)((a3 & 0xFFFFFFFFFFF80000LL) + ((a3 - v14) >> 9) + 0x38) = 0;
  }
  if ( a6 < 1 )
  {
LABEL_21:
    v24 = a6;
    v23 = a5;
    v22 = (unsigned int *)a3;
    v15 = *(_QWORD *)(v8 + 40);
    if ( (unsigned __int64)(v15 + 40) > *(_QWORD *)(v8 + 32) )
    {
      v15 = MEMORY[0x181EAA920](a1, a2, a3: 34081944);
    }
    else
    {
      *(_QWORD *)(v8 + 40) = v15 + 40;
      *(_DWORD *)v15 = 34081944;
      *(_DWORD *)(v15 + 4) = 0;
      *(_QWORD *)(v15 + 8) = 0;
      *(_QWORD *)(v15 + 16) = 0;
      *(_QWORD *)(v15 + 24) = 0;
      *(_QWORD *)(v15 + 32) = 0;
    }
    *(_DWORD *)(v15 + 20) = 46923644;
    *(_DWORD *)(v15 + 16) = *(_DWORD *)(v7 + 374343896);
    *(_DWORD *)(v15 + 12) = (unsigned __int64)(v15 - v7) >> 3;
    v21 = v15;
    MEMORY[0x18503B9A0](a1, a2, a3: v15, a4, a5: 0);
    v19 = v21;
    *(_DWORD *)(v21 + 8) = 43993056;
    if ( (*(_DWORD *)v19 & 2) != 0 )
      goto LABEL_25;
    while ( 1 )
    {
      v19 = MEMORY[0x182769900](a1: v17, a2: v18, a3: v19, a4: v16, a5: &a7);
LABEL_25:
      v16 = (v19 & 0xFFFFFFFFFFF80000LL) + 2112;
      if ( *(_BYTE *)((v19 & 0xFFFFFFFFFFF80000LL) + ((v19 - v16) >> 9) + 0x38) != 0 )
        *(_BYTE *)((v19 & 0xFFFFFFFFFFF80000LL) + ((v19 - v16) >> 9) + 0x38) = 0;
    }
  }
  v9 = *(_QWORD *)(v8 + 40);
  v10 = 34082368;
  v11 = ((unsigned int)a6 + 19LL) & 0x1FFFFFFF8LL;
  if ( v11 >= 0x20000 || (a2 = v9 + v11, v9 + v11 > *(_QWORD *)(v8 + 32)) )
  {
    v23 = a5;
    v22 = (unsigned int *)a3;
    v24 = a6;
    v9 = MEMORY[0x181EAA840](a1, a2, a3: 34082368, a4: 34082368, a5: (unsigned int)a6);
    a6 = v24;
    a5 = v23;
    a3 = (unsigned __int64)v22;
  }
  else
  {
    *(_QWORD *)(v8 + 40) = a2;
    *(_QWORD *)v9 = 34082368;
    *(_DWORD *)(v9 + 8) = a6;
    *(_DWORD *)(v9 + 12) = 0;
    if ( v11 - 16 >= 0x800 )
    {
      v24 = a6;
      v23 = a5;
      v22 = (unsigned int *)a3;
      memset((void *)(v9 + 16), 0, v11 - 16);
      a1 = v9 + v11;
      v10 = 0;
    }
    else
    {
      for ( i = 16; v11 > i; i += 8LL )
        *(_QWORD *)(v9 + i) = 0;
    }
  }
  *(_DWORD *)(a3 + 8) = (unsigned __int64)(v9 - v7) >> 3;
  result = *(unsigned int *)a3;
  if ( (result & 2) != 0 )
  {
    v10 = a3 & 0xFFFFFFFFFFF80000LL;
    result = (a3 - ((a3 & 0xFFFFFFFFFFF80000LL) + 2112)) >> 9;
    if ( *(_BYTE *)((a3 & 0xFFFFFFFFFFF80000LL) + result + 0x38) != 0 )
      *(_BYTE *)(v10 + result + 56) = 0;
  }
  *(_DWORD *)(a3 + 12) = a6;
  if ( *(int *)(v8 + 16) <= 0 )
  {
    v24 = a6;
    v23 = a5;
    v22 = (unsigned int *)a3;
    return MEMORY[0x18277F280](a1, a2, a3, a4: v10);
  }
  return result;
}
