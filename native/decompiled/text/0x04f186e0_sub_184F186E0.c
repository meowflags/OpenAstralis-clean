// sub_184F186E0
// rva 0x04f186e0  size 657  section .text  group text
// window base 0x184f186e0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
unsigned __int64 __fastcall sub_184F186E0(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        char a7)
{
  __int64 v7; // r14
  __int64 v8; // r15
  int v9; // eax
  __int64 v10; // rcx
  unsigned __int64 result; // rax
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // rcx
  __int64 v14; // r8
  unsigned __int64 v15; // rcx
  __int64 v16; // rdi
  __int64 v17; // rsi
  unsigned __int64 v18; // rax
  __int64 v19; // rdx
  unsigned __int64 v20; // rdx
  __int64 v21; // [rsp+0h] [rbp-38h] BYREF
  _DWORD *v22; // [rsp+10h] [rbp-28h]
  int v23; // [rsp+1Ch] [rbp-1Ch]
  __int64 v24; // [rsp+20h] [rbp-18h]
  _DWORD *v25; // [rsp+28h] [rbp-10h]
  __int64 v26; // [rsp+30h] [rbp-8h]

  v26 = a6;
  if ( (unsigned __int64)&v21 <= *(_QWORD *)(v8 + 8) )
  {
    v24 = a5;
    v9 = MEMORY[0x181EB84E0]();
    goto LABEL_14;
  }
  v25 = (_DWORD *)a3;
  v9 = *(_DWORD *)(v7 + 374343896);
  v10 = 34101256;
  if ( a5 == v7 )
  {
LABEL_14:
    v24 = a5;
    v14 = *(_QWORD *)(v8 + 40);
    if ( (unsigned __int64)(v14 + 48) > *(_QWORD *)(v8 + 32) )
    {
      v23 = v9;
      v14 = MEMORY[0x181EAA920](a1, a2, a3: v10);
      v9 = v23;
    }
    else
    {
      *(_QWORD *)(v8 + 40) = v14 + 48;
      *(_DWORD *)v14 = 34101256;
      *(_DWORD *)(v14 + 4) = 0;
      *(_QWORD *)(v14 + 8) = 0;
      *(_QWORD *)(v14 + 16) = 0;
      *(_QWORD *)(v14 + 24) = 0;
      *(_QWORD *)(v14 + 32) = 0;
      *(_QWORD *)(v14 + 40) = 0;
    }
    *(_DWORD *)(v14 + 20) = 46923644;
    *(_DWORD *)(v14 + 16) = v9;
    *(_DWORD *)(v14 + 12) = (unsigned __int64)(v14 - v7) >> 3;
    v22 = (_DWORD *)v14;
    MEMORY[0x18503B9A0](a1, a2, a3: v14, a4: v10, a5: 0);
    v18 = (unsigned __int64)v22;
    goto LABEL_17;
  }
  *(_DWORD *)(a3 + 8) = (unsigned __int64)(a5 - v7) >> 3;
  if ( (*(_DWORD *)a3 & 2) != 0 )
  {
    a2 = (a3 & 0xFFFFFFFFFFF80000LL) + 2112;
    if ( *(_BYTE *)((a3 & 0xFFFFFFFFFFF80000LL) + ((a3 - a2) >> 9) + 0x38) != 0 )
      *(_BYTE *)((a3 & 0xFFFFFFFFFFF80000LL) + ((a3 - a2) >> 9) + 0x38) = 0;
  }
  if ( a6 == v7 )
  {
    while ( 1 )
    {
      v24 = a5;
      v19 = *(_QWORD *)(v8 + 40);
      if ( (unsigned __int64)(v19 + 48) > *(_QWORD *)(v8 + 32) )
      {
        v23 = v9;
        v19 = MEMORY[0x181EAA920](a1, a2, a3: v10);
        v9 = v23;
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
      *(_DWORD *)(v19 + 16) = v9;
      *(_DWORD *)(v19 + 12) = (unsigned __int64)(v19 - v7) >> 3;
      v22 = (_DWORD *)v19;
      MEMORY[0x18503B9A0](a1, a2, a3: v19, a4: v10, a5: 0);
      v20 = (unsigned __int64)v22;
      v22[2] = 45586334;
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
LABEL_17:
      v9 = MEMORY[0x182769900](a1: v16, a2: v17, a3: v18, a4: v15, a5: &a7);
    }
  }
  v24 = a5;
  result = (unsigned __int64)(MEMORY[0x18C8BAFC0](a1, a2, a3: a5, a4: 34101256, a5: a3) - v7) >> 3;
  v12 = (unsigned __int64)v25;
  v25[3] = result;
  if ( (*(_DWORD *)v12 & 2) != 0 )
  {
    result = v12 & 0xFFFFFFFFFFF80000LL;
    v13 = (v12 & 0xFFFFFFFFFFF80000LL) + 2112;
    if ( *(_BYTE *)((v12 & 0xFFFFFFFFFFF80000LL) + ((v12 - v13) >> 9) + 0x38) != 0 )
      *(_BYTE *)((v12 & 0xFFFFFFFFFFF80000LL) + ((v12 - v13) >> 9) + 0x38) = 0;
  }
  if ( *(int *)(v8 + 16) <= 0 )
    return MEMORY[0x18277F280]();
  return result;
}
