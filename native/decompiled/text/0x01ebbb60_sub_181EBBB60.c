// sub_181EBBB60
// rva 0x01ebbb60  size 342  section .text  group text
// window base 0x181ebbb60: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
unsigned __int64 __fastcall sub_181EBBB60(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        char a7)
{
  __int64 v7; // r14
  __int64 v8; // r15
  __int64 v9; // rbx
  __int64 v11; // rax
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // rcx
  __int64 v14; // rdi
  __int64 v15; // rsi
  __int64 v16; // rax
  char v17; // [rsp+0h] [rbp-28h] BYREF
  __int64 v18; // [rsp+10h] [rbp-18h]
  __int64 v19; // [rsp+18h] [rbp-10h]
  int v20; // [rsp+24h] [rbp-4h]

  if ( (unsigned __int64)&v17 <= *(_QWORD *)(v8 + 8) )
  {
    sub_181EB84E0(a1, a2, a3, a4, a5, a6, a7: v17);
LABEL_8:
    v11 = *(_QWORD *)(v8 + 40);
    if ( (unsigned __int64)(v11 + 48) > *(_QWORD *)(v8 + 32) )
    {
      v20 = a5;
      v19 = a3;
      v11 = sub_181EAA920(a1, a2, a3: 34101256);
    }
    else
    {
      *(_QWORD *)(v8 + 40) = v11 + 48;
      *(_DWORD *)v11 = 34101256;
      *(_DWORD *)(v11 + 4) = 0;
      *(_QWORD *)(v11 + 8) = 0;
      *(_QWORD *)(v11 + 16) = 0;
      *(_QWORD *)(v11 + 24) = 0;
      *(_QWORD *)(v11 + 32) = 0;
      *(_QWORD *)(v11 + 40) = 0;
      v20 = a5;
      v19 = a3;
    }
    *(_DWORD *)(v11 + 20) = 46923644;
    *(_DWORD *)(v11 + 16) = *(_DWORD *)(v7 + 374343896);
    v12 = (unsigned __int64)(v11 - v7) >> 3;
    *(_DWORD *)(v11 + 12) = v12;
    v18 = v11;
    MEMORY[0x18503B9A0](a1, a2, a3: v11, a4: v12, a5: 0);
    v16 = v18;
    *(_DWORD *)(v18 + 8) = 45983136;
    if ( (*(_DWORD *)v16 & 2) != 0 )
      goto LABEL_12;
    while ( 1 )
    {
      v16 = MEMORY[0x182769900](a1: v14, a2: v15, a3: v16, a4: v13, a5: &a7);
LABEL_12:
      v13 = (v16 & 0xFFFFFFFFFFF80000LL) + 2112;
      if ( *(_BYTE *)((v16 & 0xFFFFFFFFFFF80000LL) + ((v16 - v13) >> 9) + 0x38) != 0 )
        *(_BYTE *)((v16 & 0xFFFFFFFFFFF80000LL) + ((v16 - v13) >> 9) + 0x38) = 0;
    }
  }
  v9 = *(unsigned int *)(a3 + 4);
  if ( (_DWORD)v9 == 0 )
    goto LABEL_8;
  if ( v7 + 8 * v9 == v7 )
    JUMPOUT(0x303D45B7FLL);
  if ( *(int *)(v8 + 16) <= 0 )
    MEMORY[0x18277F280]();
  return ((unsigned __int64)(unsigned int)a5 << *(_DWORD *)(v7 + 8LL * (*(_DWORD *)(v7 + 8 * v9) >> 3) + 32))
       + ((*(int *)(v7 + 8LL * (*(_DWORD *)(v7 + 8 * v9) >> 3) + 32) >> 8) & 0xFFF)
       + v7
       + 8 * v9;
}
