// sub_184F16D60
// rva 0x04f16d60  size 391  section .text  group text
// window base 0x184f16d60: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_184F16D60(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, char a7)
{
  __int64 v7; // r14
  __int64 v8; // r15
  __int64 result; // rax
  unsigned __int64 v10; // rbx
  unsigned __int64 v11; // rbx
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rdi
  __int64 v16; // rsi
  __int64 v17; // [rsp+0h] [rbp-28h] BYREF
  __int64 v18; // [rsp+8h] [rbp-20h]
  __int64 v19; // [rsp+10h] [rbp-18h]
  __int64 v20; // [rsp+18h] [rbp-10h]
  int v21; // [rsp+24h] [rbp-4h]

  if ( (unsigned __int64)&v17 <= *(_QWORD *)(v8 + 8) )
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
    *(_DWORD *)(a3 + 12) = (unsigned __int64)(a6 - v7) >> 3;
    if ( (*(_DWORD *)a3 & 2) != 0 )
    {
      v11 = (a3 & 0xFFFFFFFFFFF80000LL) + 2112;
      if ( *(_BYTE *)((a3 & 0xFFFFFFFFFFF80000LL) + ((a3 - v11) >> 9) + 0x38) != 0 )
        *(_BYTE *)((a3 & 0xFFFFFFFFFFF80000LL) + ((a3 - v11) >> 9) + 0x38) = 0;
    }
    result = MEMORY[0xEA6E0FC] & (unsigned int)a1;
    *(_BYTE *)(a3 + 28) = MEMORY[0xEA6E0FC] & a1;
    *(_DWORD *)(a3 + 20) = 0;
    *(_DWORD *)(a3 + 8) = 0;
    if ( *(int *)(v8 + 16) <= 0 )
      return MEMORY[0x18277F280]();
    return result;
  }
  v12 = *(_QWORD *)(v8 + 40);
  v13 = v12 + 48;
  if ( (unsigned __int64)(v12 + 48) > *(_QWORD *)(v8 + 32) )
    goto LABEL_16;
  *(_QWORD *)(v8 + 40) = v13;
  *(_DWORD *)v12 = 34101256;
  *(_DWORD *)(v12 + 4) = 0;
  *(_QWORD *)(v12 + 8) = 0;
  *(_QWORD *)(v12 + 16) = 0;
  *(_QWORD *)(v12 + 24) = 0;
  *(_QWORD *)(v12 + 32) = 0;
  *(_QWORD *)(v12 + 40) = 0;
  v21 = a1;
  v20 = a6;
  v18 = a3;
  while ( 1 )
  {
    *(_DWORD *)(v12 + 20) = 46923644;
    *(_DWORD *)(v12 + 16) = *(_DWORD *)(v7 + 374343896);
    *(_DWORD *)(v12 + 12) = (unsigned __int64)(v12 - v7) >> 3;
    v19 = v12;
    MEMORY[0x18503B9A0](a1, a2, a3: v12, a4: v13, a5: 0);
    MEMORY[0x182769900](a1: v15, a2: v16, a3: v19, a4: v14, a5: &a7);
LABEL_16:
    v21 = a1;
    v20 = a6;
    v19 = a5;
    v18 = a3;
    v12 = MEMORY[0x181EAA920](a1, a2, a3: 34101256);
  }
}
