// sub_18502E2C0
// rva 0x0502e2c0  size 389  section .text  group text
// window base 0x18502e2c0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_18502E2C0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, char a7)
{
  __int64 v7; // r14
  __int64 v8; // r15
  __int64 result; // rax
  __int64 v10; // rdx
  unsigned __int64 v11; // rcx
  __int64 v12; // rdi
  __int64 v13; // rsi
  __int64 v14; // rax
  __int64 v15; // [rsp+0h] [rbp-48h] BYREF
  __int64 v16; // [rsp+10h] [rbp-38h]
  __int64 v17; // [rsp+18h] [rbp-30h]
  __int64 v18; // [rsp+20h] [rbp-28h]
  __int64 v19; // [rsp+28h] [rbp-20h]
  __int64 v20; // [rsp+30h] [rbp-18h]
  __int64 v21; // [rsp+38h] [rbp-10h]
  int v22; // [rsp+44h] [rbp-4h]

  v20 = a1;
  if ( (unsigned __int64)&v15 <= *(_QWORD *)(v8 + 8) )
  {
    v22 = a4;
    v21 = a2;
    v19 = a6;
    v18 = a5;
    v17 = a3;
    MEMORY[0x181EB84E0]();
LABEL_7:
    v22 = a4;
    v21 = a2;
    v19 = a6;
    v18 = a5;
    v17 = a3;
    v10 = *(_QWORD *)(v8 + 40);
    if ( (unsigned __int64)(v10 + 48) > *(_QWORD *)(v8 + 32) )
    {
      v10 = MEMORY[0x181EAA920](a1, a2, a3: 34101256);
    }
    else
    {
      *(_QWORD *)(v8 + 40) = v10 + 48;
      *(_DWORD *)v10 = 34101256;
      *(_DWORD *)(v10 + 4) = 0;
      *(_QWORD *)(v10 + 8) = 0;
      *(_QWORD *)(v10 + 16) = 0;
      *(_QWORD *)(v10 + 24) = 0;
      *(_QWORD *)(v10 + 32) = 0;
      *(_QWORD *)(v10 + 40) = 0;
    }
    *(_DWORD *)(v10 + 20) = 46923644;
    *(_DWORD *)(v10 + 16) = *(_DWORD *)(v7 + 374343896);
    *(_DWORD *)(v10 + 12) = (unsigned __int64)(v10 - v7) >> 3;
    v16 = v10;
    sub_18503B9A0(a1, a2, a3: v10, a4, a5: 0);
    v14 = v16;
    *(_DWORD *)(v16 + 8) = 46586918;
    if ( (*(_DWORD *)v14 & 2) != 0 )
      goto LABEL_11;
    while ( 1 )
    {
      v14 = MEMORY[0x182769900](a1: v12, a2: v13, a3: v14, a4: v11, a5: &a7);
LABEL_11:
      v11 = (v14 & 0xFFFFFFFFFFF80000LL) + 2112;
      if ( *(_BYTE *)((v14 & 0xFFFFFFFFFFF80000LL) + ((v14 - v11) >> 9) + 0x38) != 0 )
        *(_BYTE *)((v14 & 0xFFFFFFFFFFF80000LL) + ((v14 - v11) >> 9) + 0x38) = 0;
    }
  }
  if ( a1 == v7 )
    goto LABEL_7;
  if ( (_DWORD)a4 != 0 )
    JUMPOUT(0x30A0492EBLL);
  v22 = 0;
  v17 = a3;
  v18 = a5;
  v19 = a6;
  v21 = a2;
  result = sub_18502E460(a1: 4, a2: a6, a3, a4: a2, a5);
  if ( *(int *)(v8 + 16) <= 0 )
    return MEMORY[0x18277F280]();
  return result;
}
