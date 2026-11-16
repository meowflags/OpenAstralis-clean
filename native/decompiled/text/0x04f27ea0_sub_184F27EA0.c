// sub_184F27EA0
// rva 0x04f27ea0  size 337  section .text  group text
// window base 0x184f27ea0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_184F27EA0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, char a7)
{
  __int64 v7; // r14
  __int64 v8; // r15
  __int64 v9; // r8
  __int64 v10; // rax
  __int64 result; // rax
  __int64 v12; // r8
  __int64 v13; // rcx
  __int64 v14; // rdi
  __int64 v15; // rsi
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // rax
  __int64 v18; // [rsp+0h] [rbp-28h] BYREF
  __int64 v19; // [rsp+10h] [rbp-18h]
  _DWORD *v20; // [rsp+18h] [rbp-10h]
  __int64 v21; // [rsp+20h] [rbp-8h]

  if ( (unsigned __int64)&v18 <= *(_QWORD *)(v8 + 8) )
  {
    result = MEMORY[0x181EB84E0]();
    goto LABEL_12;
  }
  v9 = *(unsigned int *)(v8 + 72);
  if ( (_DWORD)v9 != 0 )
  {
    v10 = *(unsigned int *)(v7 + 8 * v9 + 72);
    if ( (_DWORD)v10 != 0 )
      result = v7 + 8 * v10;
    else
      result = v7 + 8 * v9;
  }
  else
  {
    result = v7;
  }
  v12 = v7 + 8LL * *(unsigned int *)(a3 + 12);
  if ( v12 != result )
  {
LABEL_12:
    v13 = *(_QWORD *)(v8 + 40);
    if ( (unsigned __int64)(v13 + 40) > *(_QWORD *)(v8 + 32) )
    {
      v21 = v12;
      v20 = (_DWORD *)result;
      v19 = a3;
      v13 = MEMORY[0x181EAA920](a1, a2, a3: 38432696);
    }
    else
    {
      *(_QWORD *)(v8 + 40) = v13 + 40;
      *(_DWORD *)v13 = 38432696;
      *(_DWORD *)(v13 + 4) = 0;
      *(_QWORD *)(v13 + 8) = 0;
      *(_QWORD *)(v13 + 16) = 0;
      *(_QWORD *)(v13 + 24) = 0;
      *(_QWORD *)(v13 + 32) = 0;
      v19 = a3;
    }
    *(_DWORD *)(v13 + 20) = 46923644;
    *(_DWORD *)(v13 + 16) = *(_DWORD *)(v7 + 374343896);
    *(_DWORD *)(v13 + 12) = (unsigned __int64)(v13 - v7) >> 3;
    v20 = (_DWORD *)v13;
    MEMORY[0x18503B9A0](a1, a2, a3: v13, a4: v13, a5: 0);
    v16 = (unsigned __int64)v20;
    v20[2] = 44164841;
    if ( (*(_DWORD *)v16 & 2) != 0 )
      goto LABEL_16;
    while ( 1 )
    {
      MEMORY[0x182769900](a1: v14, a2: v15, a3: v16, a4: v16, a5: &a7);
LABEL_16:
      v17 = (v16 & 0xFFFFFFFFFFF80000LL) + 2112;
      if ( *(_BYTE *)((v16 & 0xFFFFFFFFFFF80000LL) + ((v16 - v17) >> 9) + 0x38) != 0 )
        *(_BYTE *)((v16 & 0xFFFFFFFFFFF80000LL) + ((v16 - v17) >> 9) + 0x38) = 0;
    }
  }
  *(_DWORD *)(a3 + 12) = 0;
  if ( *(int *)(v8 + 16) <= 0 )
    return MEMORY[0x18277F280]();
  return result;
}
