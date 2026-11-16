// sub_185032B40
// rva 0x05032b40  size 568  section .text  group text
// window base 0x185032b40: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_185032B40(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        char a7)
{
  __int64 v7; // r14
  __int64 v8; // r15
  int v9; // eax
  __int64 result; // rax
  unsigned __int64 v11; // rbx
  __int64 v12; // rcx
  __int64 v13; // rdi
  __int64 v14; // rsi
  unsigned __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // rcx
  __int64 v20; // [rsp+0h] [rbp-38h] BYREF
  _DWORD *v21; // [rsp+10h] [rbp-28h]
  unsigned __int64 v22; // [rsp+18h] [rbp-20h]
  __int64 v23; // [rsp+20h] [rbp-18h]
  int v24; // [rsp+2Ch] [rbp-Ch]
  __int64 v25; // [rsp+30h] [rbp-8h]

  if ( (unsigned __int64)&v20 <= *(_QWORD *)(v8 + 8) )
  {
    v9 = MEMORY[0x181EB84E0]();
    goto LABEL_11;
  }
  v9 = *(_DWORD *)(v7 + 374343896);
  if ( a5 == v7 )
  {
LABEL_11:
    v12 = *(_QWORD *)(v8 + 40);
    if ( (unsigned __int64)(v12 + 48) > *(_QWORD *)(v8 + 32) )
    {
      v24 = v9;
      v25 = a6;
      v23 = a5;
      v22 = a3;
      v12 = MEMORY[0x181EAA920](a1, a2, a3: 34101256);
      v9 = v24;
    }
    else
    {
      *(_QWORD *)(v8 + 40) = v12 + 48;
      *(_DWORD *)v12 = 34101256;
      *(_DWORD *)(v12 + 4) = 0;
      *(_QWORD *)(v12 + 8) = 0;
      *(_QWORD *)(v12 + 16) = 0;
      *(_QWORD *)(v12 + 24) = 0;
      *(_QWORD *)(v12 + 32) = 0;
      *(_QWORD *)(v12 + 40) = 0;
      v25 = a6;
      v22 = a3;
    }
    *(_DWORD *)(v12 + 20) = 46923644;
    *(_DWORD *)(v12 + 16) = v9;
    *(_DWORD *)(v12 + 12) = (unsigned __int64)(v12 - v7) >> 3;
    v21 = (_DWORD *)v12;
    sub_18503B9A0(a1, a2, a3: v12, a4: v12, a5: 0);
    v15 = (unsigned __int64)v21;
    goto LABEL_14;
  }
  if ( a6 < 0 )
  {
    while ( 1 )
    {
      v25 = a6;
      v22 = a3;
      v16 = *(_QWORD *)(v8 + 40);
      v17 = v16 + 40;
      if ( (unsigned __int64)(v16 + 40) > *(_QWORD *)(v8 + 32) )
      {
        v24 = v9;
        v23 = a5;
        v16 = MEMORY[0x181EAA920](a1, a2, a3: 34081944);
        v9 = v24;
      }
      else
      {
        *(_QWORD *)(v8 + 40) = v17;
        *(_DWORD *)v16 = 34081944;
        *(_DWORD *)(v16 + 4) = 0;
        *(_QWORD *)(v16 + 8) = 0;
        *(_QWORD *)(v16 + 16) = 0;
        *(_QWORD *)(v16 + 24) = 0;
        *(_QWORD *)(v16 + 32) = 0;
        v23 = a5;
      }
      *(_DWORD *)(v16 + 20) = 46923644;
      *(_DWORD *)(v16 + 16) = v9;
      *(_DWORD *)(v16 + 12) = (unsigned __int64)(v16 - v7) >> 3;
      v21 = (_DWORD *)v16;
      sub_18503B9A0(a1, a2, a3: v16, a4: v17, a5: 0);
      v18 = (unsigned __int64)v21;
      v21[2] = 46586634;
      if ( (*(_DWORD *)v18 & 2) != 0 )
      {
        v19 = (v18 & 0xFFFFFFFFFFF80000LL) + 2112;
        if ( *(_BYTE *)((v18 & 0xFFFFFFFFFFF80000LL) + ((v18 - v19) >> 9) + 0x38) != 0 )
          *(_BYTE *)((v18 & 0xFFFFFFFFFFF80000LL) + ((v18 - v19) >> 9) + 0x38) = 0;
        v15 = v18;
      }
      else
      {
        v15 = v18;
      }
LABEL_14:
      v9 = MEMORY[0x182769900](a1: v13, a2: v14, a3: v15, a4: v15, a5: &a7);
    }
  }
  *(_DWORD *)(a3 + 4) = (unsigned __int64)(a5 - v7) >> 3;
  result = *(unsigned int *)a3;
  if ( (result & 2) != 0 )
  {
    v11 = (a3 & 0xFFFFFFFFFFF80000LL) + 2112;
    result = (a3 - v11) >> 9;
    if ( *(_BYTE *)((a3 & 0xFFFFFFFFFFF80000LL) + result + 0x38) != 0 )
      *(_BYTE *)((a3 & 0xFFFFFFFFFFF80000LL) + ((a3 - v11) >> 9) + 0x38) = 0;
  }
  *(_QWORD *)(a3 + 16) = a6;
  if ( *(int *)(v8 + 16) <= 0 )
    return MEMORY[0x18277F280]();
  return result;
}
