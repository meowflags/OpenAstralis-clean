// sub_184F2CDA0
// rva 0x04f2cda0  size 815  section .text  group text
// window base 0x184f2cda0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_184F2CDA0(
        unsigned __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        int a5,
        __int64 a6,
        char a7)
{
  __int64 v7; // r14
  __int64 v8; // r15
  __int64 v9; // rbx
  unsigned __int64 v10; // rbp
  unsigned __int64 i; // rax
  __int64 v12; // rax
  unsigned __int64 v13; // rax
  __int64 result; // rax
  unsigned __int64 v15; // rbx
  unsigned __int64 v16; // rbp
  unsigned __int64 v17; // rbx
  __int64 v18; // rdx
  unsigned __int64 v19; // rcx
  __int64 v20; // rdi
  __int64 v21; // rsi
  __int64 v22; // rax
  __int64 v23; // [rsp+0h] [rbp-28h] BYREF
  __int64 v24; // [rsp+10h] [rbp-18h]
  unsigned int *v25; // [rsp+18h] [rbp-10h]
  int v26; // [rsp+24h] [rbp-4h]

  if ( (unsigned __int64)&v23 <= *(_QWORD *)(v8 + 8) )
  {
    v26 = a5;
    v25 = (unsigned int *)a3;
    MEMORY[0x181EB84E0]();
    goto LABEL_27;
  }
  *(_DWORD *)(a3 + 8) = (a3 - v7) >> 3;
  if ( (*(_DWORD *)a3 & 2) != 0 )
  {
    a4 = a3 & 0xFFFFFFFFFFF80000LL;
    v15 = (a3 & 0xFFFFFFFFFFF80000LL) + 2112;
    if ( *(_BYTE *)((a3 & 0xFFFFFFFFFFF80000LL) + ((a3 - v15) >> 9) + 0x38) != 0 )
      *(_BYTE *)((a3 & 0xFFFFFFFFFFF80000LL) + ((a3 - v15) >> 9) + 0x38) = 0;
  }
  if ( a5 < 0 )
  {
LABEL_27:
    v26 = a5;
    v25 = (unsigned int *)a3;
    v18 = *(_QWORD *)(v8 + 40);
    if ( (unsigned __int64)(v18 + 40) > *(_QWORD *)(v8 + 32) )
    {
      v18 = MEMORY[0x181EAA920](a1, a2, a3: 34081944);
    }
    else
    {
      *(_QWORD *)(v8 + 40) = v18 + 40;
      *(_DWORD *)v18 = 34081944;
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
    v22 = v24;
    *(_DWORD *)(v24 + 8) = 46062095;
    if ( (*(_DWORD *)v22 & 2) != 0 )
      goto LABEL_31;
    while ( 1 )
    {
      v22 = MEMORY[0x182769900](a1: v20, a2: v21, a3: v22, a4: v19, a5: &a7);
LABEL_31:
      v19 = (v22 & 0xFFFFFFFFFFF80000LL) + 2112;
      if ( *(_BYTE *)((v22 & 0xFFFFFFFFFFF80000LL) + ((v22 - v19) >> 9) + 0x38) != 0 )
        *(_BYTE *)((v22 & 0xFFFFFFFFFFF80000LL) + ((v22 - v19) >> 9) + 0x38) = 0;
    }
  }
  v9 = *(_QWORD *)(v8 + 40);
  v10 = ((unsigned int)a5 + 19LL) & 0x1FFFFFFF8LL;
  if ( v10 >= 0x20000 || (a2 = v9 + v10, v9 + v10 > *(_QWORD *)(v8 + 32)) )
  {
    v26 = a5;
    v25 = (unsigned int *)a3;
    v9 = MEMORY[0x181EAA840](a1, a2, a3: 34082368);
    a5 = v26;
    a3 = (unsigned __int64)v25;
  }
  else
  {
    *(_QWORD *)(v8 + 40) = a2;
    *(_QWORD *)v9 = 34082368;
    *(_DWORD *)(v9 + 8) = a5;
    *(_DWORD *)(v9 + 12) = 0;
    if ( v10 - 16 >= 0x800 )
    {
      v26 = a5;
      v25 = (unsigned int *)a3;
      memset((void *)(v9 + 16), 0, v10 - 16);
      a1 = v9 + v10;
    }
    else
    {
      for ( i = 16; v10 > i; i += 8LL )
        *(_QWORD *)(v9 + i) = 0;
    }
  }
  v12 = *(_QWORD *)(v8 + 40);
  if ( (unsigned __int64)(v12 + 32) > *(_QWORD *)(v8 + 32) )
  {
    v24 = v9;
    v26 = a5;
    v25 = (unsigned int *)a3;
    v12 = MEMORY[0x181EAA920](a1, a2, a3: 34168584);
    v9 = v24;
    a5 = v26;
    a3 = (unsigned __int64)v25;
  }
  else
  {
    *(_QWORD *)(v8 + 40) = v12 + 32;
    *(_DWORD *)v12 = 34168584;
    *(_DWORD *)(v12 + 4) = 0;
    *(_QWORD *)(v12 + 8) = 0;
    *(_QWORD *)(v12 + 16) = 0;
    *(_QWORD *)(v12 + 24) = 0;
  }
  *(_DWORD *)(v12 + 4) = (unsigned __int64)(v9 - v7) >> 3;
  v13 = (unsigned __int64)(v12 - v7) >> 3;
  *(_DWORD *)(a3 + 12) = v13;
  if ( (*(_DWORD *)a3 & 2) != 0 )
  {
    v16 = (a3 & 0xFFFFFFFFFFF80000LL) + 2112;
    if ( *(_BYTE *)((a3 & 0xFFFFFFFFFFF80000LL) + ((a3 - v16) >> 9) + 0x38) != 0 )
      *(_BYTE *)((a3 & 0xFFFFFFFFFFF80000LL) + ((a3 - v16) >> 9) + 0x38) = 0;
  }
  *(_DWORD *)(a3 + 8) = v13;
  result = *(unsigned int *)a3;
  if ( (result & 2) != 0 )
  {
    v17 = (a3 & 0xFFFFFFFFFFF80000LL) + 2112;
    result = (a3 - v17) >> 9;
    if ( *(_BYTE *)((a3 & 0xFFFFFFFFFFF80000LL) + result + 0x38) != 0 )
      *(_BYTE *)((a3 & 0xFFFFFFFFFFF80000LL) + ((a3 - v17) >> 9) + 0x38) = 0;
  }
  if ( *(int *)(v8 + 16) <= 0 )
  {
    v26 = a5;
    v25 = (unsigned int *)a3;
    return MEMORY[0x18277F280]();
  }
  return result;
}
