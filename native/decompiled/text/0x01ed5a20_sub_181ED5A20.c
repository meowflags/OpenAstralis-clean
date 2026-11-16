// sub_181ED5A20
// rva 0x01ed5a20  size 714  section .text  group text
// window base 0x181ed5a20: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_181ED5A20(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, char a7)
{
  __int64 v7; // r14
  __int64 v8; // r15
  __int64 v9; // rax
  __int64 v10; // rcx
  unsigned __int64 v11; // rcx
  __int64 result; // rax
  unsigned __int64 v13; // rbp
  unsigned __int64 v14; // rbx
  unsigned __int64 v15; // rbx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rdi
  __int64 v19; // rsi
  char v20; // [rsp+0h] [rbp-28h] BYREF
  __int64 v21; // [rsp+10h] [rbp-18h]
  __int64 v22; // [rsp+18h] [rbp-10h]
  __int64 v23; // [rsp+20h] [rbp-8h]

  v23 = a5;
  if ( (unsigned __int64)&v20 <= *(_QWORD *)(v8 + 8) )
  {
    v22 = a3;
    sub_181EB84E0(a1, a2, a3, a4, a5, a6, a7: v20);
LABEL_22:
    v22 = a3;
    v16 = *(_QWORD *)(v8 + 40);
    if ( (unsigned __int64)(v16 + 48) > *(_QWORD *)(v8 + 32) )
      goto LABEL_25;
    *(_QWORD *)(v8 + 40) = v16 + 48;
    *(_DWORD *)v16 = 34101256;
    *(_DWORD *)(v16 + 4) = 0;
    *(_QWORD *)(v16 + 8) = 0;
    *(_QWORD *)(v16 + 16) = 0;
    *(_QWORD *)(v16 + 24) = 0;
    *(_QWORD *)(v16 + 32) = 0;
    *(_QWORD *)(v16 + 40) = 0;
    while ( 1 )
    {
      *(_DWORD *)(v16 + 20) = 46923644;
      *(_DWORD *)(v16 + 16) = *(_DWORD *)(v7 + 374343896);
      *(_DWORD *)(v16 + 12) = (unsigned __int64)(v16 - v7) >> 3;
      v21 = v16;
      MEMORY[0x18503B9A0](a1, a2, a3: v16, a4: v11, a5: 0);
      MEMORY[0x182769900](a1: v18, a2: v19, a3: v21, a4: v17, a5: &a7);
LABEL_25:
      v16 = sub_181EAA920(a1, a2, a3: 34101256);
    }
  }
  *(_DWORD *)(a3 + 4) = 0;
  v9 = *(_QWORD *)(v8 + 40);
  if ( (unsigned __int64)(v9 + 64) > *(_QWORD *)(v8 + 32) )
  {
    v22 = a3;
    v9 = sub_181EAA920(a1, a2, a3: 34107288);
    a5 = v23;
    a3 = v22;
  }
  else
  {
    *(_QWORD *)(v8 + 40) = v9 + 64;
    *(_DWORD *)v9 = 34107288;
    *(_DWORD *)(v9 + 4) = 0;
    *(_QWORD *)(v9 + 8) = 0;
    *(_QWORD *)(v9 + 16) = 0;
    *(_QWORD *)(v9 + 24) = 0;
    *(_QWORD *)(v9 + 32) = 0;
    *(_QWORD *)(v9 + 40) = 0;
    *(_QWORD *)(v9 + 48) = 0;
    *(_QWORD *)(v9 + 56) = 0;
  }
  *(_DWORD *)(a3 + 8) = (unsigned __int64)(v9 - v7) >> 3;
  if ( (*(_DWORD *)a3 & 2) != 0 )
  {
    v13 = (a3 & 0xFFFFFFFFFFF80000LL) + 2112;
    if ( *(_BYTE *)((a3 & 0xFFFFFFFFFFF80000LL) + ((a3 - v13) >> 9) + 0x38) != 0 )
      *(_BYTE *)((a3 & 0xFFFFFFFFFFF80000LL) + ((a3 - v13) >> 9) + 0x38) = 0;
  }
  v10 = *(_QWORD *)(v8 + 40);
  if ( (unsigned __int64)(v10 + 24) > *(_QWORD *)(v8 + 32) )
  {
    v21 = v9;
    v22 = a3;
    v10 = sub_181EAA920(a1, a2, a3: 34161576);
    a5 = v23;
    a3 = v22;
  }
  else
  {
    *(_QWORD *)(v8 + 40) = v10 + 24;
    *(_DWORD *)v10 = 34161576;
    *(_DWORD *)(v10 + 4) = 0;
    *(_QWORD *)(v10 + 8) = 0;
    *(_QWORD *)(v10 + 16) = 0;
  }
  *(_DWORD *)(v10 + 8) = 47045786;
  v11 = (unsigned __int64)(v10 - v7) >> 3;
  *(_DWORD *)(a3 + 16) = v11;
  if ( (*(_DWORD *)a3 & 2) != 0 )
  {
    v11 = a3 & 0xFFFFFFFFFFF80000LL;
    v14 = (a3 & 0xFFFFFFFFFFF80000LL) + 2112;
    if ( *(_BYTE *)((a3 & 0xFFFFFFFFFFF80000LL) + ((a3 - v14) >> 9) + 0x38) != 0 )
      *(_BYTE *)((a3 & 0xFFFFFFFFFFF80000LL) + ((a3 - v14) >> 9) + 0x38) = 0;
  }
  if ( a5 == v7 )
    goto LABEL_22;
  *(_DWORD *)(a3 + 20) = (unsigned __int64)(a5 - v7) >> 3;
  if ( (*(_DWORD *)a3 & 2) != 0 )
  {
    v15 = (a3 & 0xFFFFFFFFFFF80000LL) + 2112;
    if ( *(_BYTE *)((a3 & 0xFFFFFFFFFFF80000LL) + ((a3 - v15) >> 9) + 0x38) != 0 )
      *(_BYTE *)((a3 & 0xFFFFFFFFFFF80000LL) + ((a3 - v15) >> 9) + 0x38) = 0;
  }
  result = v7 + 376660624 == a5;
  *(_BYTE *)(a3 + 24) = result;
  if ( *(int *)(v8 + 16) <= 0 )
  {
    v22 = a3;
    return MEMORY[0x18277F280]();
  }
  return result;
}
