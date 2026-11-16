// sub_184F1BE00
// rva 0x04f1be00  size 604  section .text  group text
// window base 0x184f1be00: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_184F1BE00(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, char a7)
{
  __int64 v7; // r14
  __int64 v8; // r15
  __int64 result; // rax
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rdi
  __int64 v13; // rsi
  __int64 v14; // rdx
  unsigned __int64 v15; // rcx
  __int64 v16; // rdi
  __int64 v17; // rsi
  unsigned __int64 v18; // rax
  __int64 v19; // r8
  unsigned __int64 v20; // r8
  unsigned __int64 v21; // rbx
  __int64 v22; // [rsp+0h] [rbp-28h] BYREF
  _DWORD *v23; // [rsp+10h] [rbp-18h]
  _DWORD *v24; // [rsp+18h] [rbp-10h]
  __int64 v25; // [rsp+20h] [rbp-8h]

  if ( (unsigned __int64)&v22 <= *(_QWORD *)(v8 + 8) )
  {
    MEMORY[0x181EB84E0]();
LABEL_10:
    v19 = *(_QWORD *)(v8 + 40);
    if ( (unsigned __int64)(v19 + 48) > *(_QWORD *)(v8 + 32) )
    {
      v19 = MEMORY[0x181EAA920](a1, a2, a3: 34101256);
    }
    else
    {
      *(_QWORD *)(v8 + 40) = v19 + 48;
      *(_DWORD *)v19 = 34101256;
      *(_DWORD *)(v19 + 4) = 0;
      *(_QWORD *)(v19 + 8) = 0;
      *(_QWORD *)(v19 + 16) = 0;
      *(_QWORD *)(v19 + 24) = 0;
      *(_QWORD *)(v19 + 32) = 0;
      *(_QWORD *)(v19 + 40) = 0;
    }
    *(_DWORD *)(v19 + 20) = 46923644;
    *(_DWORD *)(v19 + 16) = *(_DWORD *)(v7 + 374343896);
    *(_DWORD *)(v19 + 12) = (unsigned __int64)(v19 - v7) >> 3;
    v24 = (_DWORD *)v19;
    MEMORY[0x18503B9A0](a1, a2, a3: v19, a4, a5: 0);
    v20 = (unsigned __int64)v24;
    v24[2] = 45586334;
    if ( (*(_DWORD *)v20 & 2) != 0 )
    {
      v15 = (v20 & 0xFFFFFFFFFFF80000LL) + 2112;
      if ( *(_BYTE *)((v20 & 0xFFFFFFFFFFF80000LL) + ((v20 - v15) >> 9) + 0x38) != 0 )
        *(_BYTE *)((v20 & 0xFFFFFFFFFFF80000LL) + ((v20 - v15) >> 9) + 0x38) = 0;
      v18 = v20;
    }
    else
    {
      v18 = v20;
    }
    while ( 1 )
    {
      while ( 1 )
      {
        v10 = MEMORY[0x182769900](a1: v16, a2: v17, a3: v18, a4: v15, a5: &a7);
        v14 = *(_QWORD *)(v8 + 40);
        if ( (unsigned __int64)(v14 + 40) > *(_QWORD *)(v8 + 32) )
        {
          v24 = (_DWORD *)v10;
          v14 = MEMORY[0x181EAA920](a1: v12, a2: v13, a3: 39788216);
        }
        else
        {
          *(_QWORD *)(v8 + 40) = v14 + 40;
          *(_DWORD *)v14 = 39788216;
          *(_DWORD *)(v14 + 4) = 0;
          *(_QWORD *)(v14 + 8) = 0;
          *(_QWORD *)(v14 + 16) = 0;
          *(_QWORD *)(v14 + 24) = 0;
          *(_QWORD *)(v14 + 32) = 0;
          v24 = (_DWORD *)v10;
        }
        *(_DWORD *)(v14 + 20) = 46923644;
        *(_DWORD *)(v14 + 16) = *(_DWORD *)(v7 + 374343896);
        *(_DWORD *)(v14 + 12) = (unsigned __int64)(v14 - v7) >> 3;
        v23 = (_DWORD *)v14;
        MEMORY[0x18503B9A0](a1: v12, a2: v13, a3: v14, a4: v11, a5: 0);
        v18 = (unsigned __int64)v23;
        v23[2] = (unsigned __int64)(v25 - v7) >> 3;
        if ( (*(_DWORD *)v18 & 2) != 0 )
        {
          v15 = v18 & 0xFFFFFFFFFFF80000LL;
          v21 = (v18 & 0xFFFFFFFFFFF80000LL) + 2112;
          if ( *(_BYTE *)((v18 & 0xFFFFFFFFFFF80000LL) + ((v18 - v21) >> 9) + 0x38) != 0 )
            break;
        }
      }
      *(_BYTE *)((v18 & 0xFFFFFFFFFFF80000LL) + ((v18 - v21) >> 9) + 0x38) = 0;
    }
  }
  v25 = a3;
  if ( a3 == v7 )
    goto LABEL_10;
  result = MEMORY[0x1855449E0]();
  if ( *(int *)(v8 + 16) <= 0 )
    return MEMORY[0x18277F280]();
  return result;
}
