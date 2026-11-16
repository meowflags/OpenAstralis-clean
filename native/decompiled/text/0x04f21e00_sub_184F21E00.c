// sub_184F21E00
// rva 0x04f21e00  size 391  section .text  group text
// window base 0x184f21e00: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_184F21E00(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, char a7)
{
  __int64 v7; // r14
  __int64 v8; // r15
  __int64 v9; // rcx
  __int64 v10; // rsi
  __int64 v11; // rdx
  int v12; // r8d
  __int64 v13; // rdi
  __int64 v14; // rax
  unsigned int v15; // esi
  __int64 v16; // r8
  __int64 result; // rax
  __int64 v18; // rdx
  unsigned __int64 v19; // rcx
  __int64 v20; // rdi
  __int64 v21; // rsi
  __int64 v22; // rax
  char v23; // [rsp+0h] [rbp-28h] BYREF
  __int64 v24; // [rsp+8h] [rbp-20h]
  __int64 v25; // [rsp+10h] [rbp-18h]
  __int64 v26; // [rsp+18h] [rbp-10h]
  unsigned int v27; // [rsp+20h] [rbp-8h]
  unsigned int v28; // [rsp+24h] [rbp-4h]

  v26 = a3;
  v25 = a5;
  v28 = a1;
  if ( (unsigned __int64)&v23 <= *(_QWORD *)(v8 + 8) )
  {
    v27 = a6;
    MEMORY[0x181EB84E0]();
LABEL_8:
    v18 = *(_QWORD *)(v8 + 40);
    if ( (unsigned __int64)(v18 + 40) > *(_QWORD *)(v8 + 32) )
    {
      v18 = MEMORY[0x181EAA920](a1: v13, a2: v10, a3: 34107088);
    }
    else
    {
      *(_QWORD *)(v8 + 40) = v18 + 40;
      *(_DWORD *)v18 = 34107088;
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
    MEMORY[0x18503B9A0](a1: v13, a2: v10, a3: v18, a4: v9, a5: 0);
    v22 = v24;
    *(_DWORD *)(v24 + 8) = 45971821;
    if ( (*(_DWORD *)v22 & 2) != 0 )
      goto LABEL_14;
    goto LABEL_11;
  }
  v27 = a6;
  sub_184F21320(a1, a2, a3, a4, a5, a6, a7: v23);
  v11 = v26;
  v12 = *(_DWORD *)(v26 + 12);
  v13 = v28;
  if ( (int)v28 > v12 )
    goto LABEL_8;
  v14 = v25;
  v15 = v12 - v28;
  *(_DWORD *)(v26 + 12) = v12 - v28;
  if ( v14 == v7 )
    goto LABEL_12;
  v16 = *(unsigned int *)(v11 + 8);
  if ( (_DWORD)v16 == 0 )
  {
    while ( 1 )
    {
      v22 = MEMORY[0x182771080]();
LABEL_14:
      v19 = (v22 & 0xFFFFFFFFFFF80000LL) + 2112;
      if ( *(_BYTE *)((v22 & 0xFFFFFFFFFFF80000LL) + ((v22 - v19) >> 9) + 0x38) != 0 )
        *(_BYTE *)((v22 & 0xFFFFFFFFFFF80000LL) + ((v22 - v19) >> 9) + 0x38) = 0;
LABEL_11:
      MEMORY[0x182769900](a1: v20, a2: v21, a3: v22, a4: v19, a5: &a7);
LABEL_12:
      MEMORY[0x182771080]();
    }
  }
  result = MEMORY[0x181EB4960](a1: v15, a2: (unsigned int)v13, a3: v14, a4: v9, a5: v27, a6: v7 + 8 * v16);
  if ( *(int *)(v8 + 16) <= 0 )
    return MEMORY[0x18277F280]();
  return result;
}
