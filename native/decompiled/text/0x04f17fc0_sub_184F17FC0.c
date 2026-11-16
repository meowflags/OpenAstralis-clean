// sub_184F17FC0
// rva 0x04f17fc0  size 280  section .text  group text
// window base 0x184f17fc0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_184F17FC0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, char a7)
{
  __int64 v7; // r14
  __int64 v8; // r15
  __int64 result; // rax
  __int64 v10; // r8
  __int64 v11; // rcx
  unsigned __int64 v12; // rcx
  __int64 v13; // rdi
  __int64 v14; // rsi
  __int64 v15; // rax
  __int64 v16; // [rsp+0h] [rbp-28h] BYREF
  __int64 v17; // [rsp+10h] [rbp-18h]
  __int64 v18; // [rsp+18h] [rbp-10h]
  int v19; // [rsp+24h] [rbp-4h]

  if ( (unsigned __int64)&v16 <= *(_QWORD *)(v8 + 8) )
  {
    LODWORD(result) = MEMORY[0x181EB84E0]();
LABEL_6:
    v10 = *(_QWORD *)(v8 + 40);
    v11 = v10 + 40;
    if ( (unsigned __int64)(v10 + 40) > *(_QWORD *)(v8 + 32) )
    {
      v19 = result;
      v18 = a3;
      v10 = MEMORY[0x181EAA920](a1, a2, a3: 34107088);
    }
    else
    {
      *(_QWORD *)(v8 + 40) = v11;
      *(_DWORD *)v10 = 34107088;
      *(_DWORD *)(v10 + 4) = 0;
      *(_QWORD *)(v10 + 8) = 0;
      *(_QWORD *)(v10 + 16) = 0;
      *(_QWORD *)(v10 + 24) = 0;
      *(_QWORD *)(v10 + 32) = 0;
      v18 = a3;
    }
    *(_DWORD *)(v10 + 20) = 46923644;
    *(_DWORD *)(v10 + 16) = *(_DWORD *)(v7 + 374343896);
    *(_DWORD *)(v10 + 12) = (unsigned __int64)(v10 - v7) >> 3;
    v17 = v10;
    MEMORY[0x18503B9A0](a1, a2, a3: v10, a4: v11, a5: 0);
    v15 = v17;
    *(_DWORD *)(v17 + 8) = 45876601;
    if ( (*(_DWORD *)v15 & 2) != 0 )
      goto LABEL_10;
    while ( 1 )
    {
      v15 = MEMORY[0x182769900](a1: v13, a2: v14, a3: v15, a4: v12, a5: &a7);
LABEL_10:
      v12 = (v15 & 0xFFFFFFFFFFF80000LL) + 2112;
      if ( *(_BYTE *)((v15 & 0xFFFFFFFFFFF80000LL) + ((v15 - v12) >> 9) + 0x38) != 0 )
        *(_BYTE *)((v15 & 0xFFFFFFFFFFF80000LL) + ((v15 - v12) >> 9) + 0x38) = 0;
    }
  }
  result = *(unsigned __int8 *)(a3 + 4);
  if ( *(_BYTE *)(a3 + 4) != 0 )
    goto LABEL_6;
  if ( *(int *)(v8 + 16) <= 0 )
    return MEMORY[0x18277F280]();
  return result;
}
