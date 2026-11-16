// sub_184F19AE0
// rva 0x04f19ae0  size 342  section .text  group text
// window base 0x184f19ae0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_184F19AE0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, unsigned int a6, char a7)
{
  __int64 v7; // r14
  __int64 v8; // r15
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rsi
  __int64 result; // rax
  __int64 v13; // rdx
  unsigned __int64 v14; // rcx
  __int64 v15; // rdi
  __int64 v16; // rsi
  __int64 v17; // rax
  char v18; // [rsp+0h] [rbp-38h] BYREF
  __int64 v19; // [rsp+10h] [rbp-28h]
  __int64 v20; // [rsp+18h] [rbp-20h]
  __int64 v21; // [rsp+20h] [rbp-18h]
  __int64 v22; // [rsp+28h] [rbp-10h]
  unsigned int v23; // [rsp+34h] [rbp-4h]

  v22 = a5;
  if ( (unsigned __int64)&v18 <= *(_QWORD *)(v8 + 8) )
  {
    v21 = a1;
    v23 = a6;
    v20 = a3;
    MEMORY[0x181EB84E0]();
LABEL_6:
    v21 = a1;
    v23 = a6;
    v20 = a3;
    v13 = *(_QWORD *)(v8 + 40);
    if ( (unsigned __int64)(v13 + 48) > *(_QWORD *)(v8 + 32) )
    {
      v13 = MEMORY[0x181EAA920](a1, a2, a3: 34101256);
    }
    else
    {
      *(_QWORD *)(v8 + 40) = v13 + 48;
      *(_DWORD *)v13 = 34101256;
      *(_DWORD *)(v13 + 4) = 0;
      *(_QWORD *)(v13 + 8) = 0;
      *(_QWORD *)(v13 + 16) = 0;
      *(_QWORD *)(v13 + 24) = 0;
      *(_QWORD *)(v13 + 32) = 0;
      *(_QWORD *)(v13 + 40) = 0;
    }
    *(_DWORD *)(v13 + 20) = 46923644;
    *(_DWORD *)(v13 + 16) = *(_DWORD *)(v7 + 374343896);
    *(_DWORD *)(v13 + 12) = (unsigned __int64)(v13 - v7) >> 3;
    v19 = v13;
    MEMORY[0x18503B9A0](a1, a2, a3: v13, a4, a5: 0);
    v17 = v19;
    *(_DWORD *)(v19 + 8) = 46042123;
    if ( (*(_DWORD *)v17 & 2) != 0 )
      goto LABEL_10;
    while ( 1 )
    {
      v17 = MEMORY[0x182769900](a1: v15, a2: v16, a3: v17, a4: v14, a5: &a7);
LABEL_10:
      v14 = (v17 & 0xFFFFFFFFFFF80000LL) + 2112;
      if ( *(_BYTE *)((v17 & 0xFFFFFFFFFFF80000LL) + ((v17 - v14) >> 9) + 0x38) != 0 )
        *(_BYTE *)((v17 & 0xFFFFFFFFFFF80000LL) + ((v17 - v14) >> 9) + 0x38) = 0;
    }
  }
  if ( a5 == v7 )
    goto LABEL_6;
  v23 = a6;
  v20 = a3;
  v21 = a1;
  v9 = sub_184F1BE00(a1, a2, a3: a1, a4, a5, a6, a7: v18);
  result = sub_184F19C40(a1: v9, a2: v11, a3: v20, a4: v10, a5: v22, a6: v23);
  if ( *(int *)(v8 + 16) <= 0 )
    return MEMORY[0x18277F280]();
  return result;
}
