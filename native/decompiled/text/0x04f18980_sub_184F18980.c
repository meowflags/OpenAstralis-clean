// sub_184F18980
// rva 0x04f18980  size 817  section .text  group text
// window base 0x184f18980: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_184F18980(
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
  __int64 v10; // rdi
  unsigned __int64 v11; // rcx
  __int64 v12; // rdi
  unsigned int *v13; // rax
  unsigned __int64 v14; // rdx
  __int64 result; // rax
  unsigned __int64 v16; // rbp
  unsigned __int64 v17; // rbx
  __int64 v18; // rdx
  unsigned __int64 v19; // rcx
  __int64 v20; // rdi
  __int64 v21; // rsi
  unsigned __int64 v22; // rax
  __int64 v23; // rdx
  unsigned __int64 v24; // rdx
  __int64 v25; // [rsp+0h] [rbp-38h] BYREF
  _DWORD *v26; // [rsp+10h] [rbp-28h]
  int v27; // [rsp+1Ch] [rbp-1Ch]
  __int64 v28; // [rsp+20h] [rbp-18h]
  __int64 v29; // [rsp+28h] [rbp-10h]
  unsigned int *v30; // [rsp+30h] [rbp-8h]

  v30 = (unsigned int *)a3;
  v29 = a6;
  if ( (unsigned __int64)&v25 <= *(_QWORD *)(v8 + 8) )
  {
    v28 = a5;
    v9 = MEMORY[0x181EB84E0]();
    goto LABEL_17;
  }
  v9 = *(_DWORD *)(v7 + 374343896);
  v10 = 34101256;
  if ( a5 == v7 )
  {
LABEL_17:
    v28 = a5;
    v18 = *(_QWORD *)(v8 + 40);
    if ( (unsigned __int64)(v18 + 48) > *(_QWORD *)(v8 + 32) )
    {
      v27 = v9;
      v18 = MEMORY[0x181EAA920](a1: v10, a2, a3: v10);
      v9 = v27;
    }
    else
    {
      *(_QWORD *)(v8 + 40) = v18 + 48;
      *(_DWORD *)v18 = 34101256;
      *(_DWORD *)(v18 + 4) = 0;
      *(_QWORD *)(v18 + 8) = 0;
      *(_QWORD *)(v18 + 16) = 0;
      *(_QWORD *)(v18 + 24) = 0;
      *(_QWORD *)(v18 + 32) = 0;
      *(_QWORD *)(v18 + 40) = 0;
    }
    *(_DWORD *)(v18 + 20) = 46923644;
    *(_DWORD *)(v18 + 16) = v9;
    *(_DWORD *)(v18 + 12) = (unsigned __int64)(v18 - v7) >> 3;
    v26 = (_DWORD *)v18;
    MEMORY[0x18503B9A0](a1: v10, a2, a3: v18, a4, a5: 0);
    v22 = (unsigned __int64)v26;
    goto LABEL_20;
  }
  *(_DWORD *)(a3 + 8) = (unsigned __int64)(a5 - v7) >> 3;
  v11 = *(unsigned int *)a3;
  if ( (v11 & 2) != 0 )
  {
    v16 = (a3 & 0xFFFFFFFFFFF80000LL) + 2112;
    v11 = (a3 - v16) >> 9;
    if ( *(_BYTE *)((a3 & 0xFFFFFFFFFFF80000LL) + v11 + 0x38) != 0 )
      *(_BYTE *)((a3 & 0xFFFFFFFFFFF80000LL) + ((a3 - v16) >> 9) + 0x38) = 0;
  }
  if ( a6 == v7 )
  {
    while ( 1 )
    {
      v28 = a5;
      v23 = *(_QWORD *)(v8 + 40);
      if ( (unsigned __int64)(v23 + 48) > *(_QWORD *)(v8 + 32) )
      {
        v27 = v9;
        v23 = MEMORY[0x181EAA920](a1: v10, a2, a3: v10);
        v9 = v27;
      }
      else
      {
        *(_QWORD *)(v8 + 40) = v23 + 48;
        *(_DWORD *)v23 = 34101256;
        *(_DWORD *)(v23 + 4) = 0;
        *(_QWORD *)(v23 + 8) = 0;
        *(_QWORD *)(v23 + 16) = 0;
        *(_QWORD *)(v23 + 24) = 0;
        *(_QWORD *)(v23 + 32) = 0;
        *(_QWORD *)(v23 + 40) = 0;
      }
      *(_DWORD *)(v23 + 20) = 46923644;
      *(_DWORD *)(v23 + 16) = v9;
      *(_DWORD *)(v23 + 12) = (unsigned __int64)(v23 - v7) >> 3;
      v26 = (_DWORD *)v23;
      MEMORY[0x18503B9A0](a1: v10, a2, a3: v23, a4: v11, a5: 0);
      v24 = (unsigned __int64)v26;
      v26[2] = 45586367;
      if ( (*(_DWORD *)v24 & 2) != 0 )
      {
        v19 = (v24 & 0xFFFFFFFFFFF80000LL) + 2112;
        if ( *(_BYTE *)((v24 & 0xFFFFFFFFFFF80000LL) + ((v24 - v19) >> 9) + 0x38) != 0 )
          *(_BYTE *)((v24 & 0xFFFFFFFFFFF80000LL) + ((v24 - v19) >> 9) + 0x38) = 0;
        v22 = v24;
      }
      else
      {
        v22 = v24;
      }
LABEL_20:
      v9 = MEMORY[0x182769900](a1: v20, a2: v21, a3: v22, a4: v19, a5: &a7);
    }
  }
  v12 = *(_QWORD *)(v8 + 40);
  if ( (unsigned __int64)(v12 + 48) > *(_QWORD *)(v8 + 32) )
  {
    v28 = a5;
    v12 = MEMORY[0x181EAA920](a1: v12, a2, a3: 36879792);
    a6 = v29;
    a5 = v28;
    v13 = v30;
  }
  else
  {
    *(_QWORD *)(v8 + 40) = v12 + 48;
    *(_DWORD *)v12 = 36879792;
    *(_DWORD *)(v12 + 4) = 0;
    *(_QWORD *)(v12 + 8) = 0;
    *(_QWORD *)(v12 + 16) = 0;
    *(_QWORD *)(v12 + 24) = 0;
    *(_QWORD *)(v12 + 32) = 0;
    *(_QWORD *)(v12 + 40) = 0;
    v13 = (unsigned int *)a3;
  }
  v26 = (_DWORD *)v12;
  v28 = a5;
  MEMORY[0x18C8B98C0](a1: a6, a2, a3: v12, a4: a5, a5, a6: v13);
  v14 = (unsigned __int64)v30;
  v30[3] = ((unsigned __int64)v26 - v7) >> 3;
  result = *(unsigned int *)v14;
  if ( (result & 2) != 0 )
  {
    v17 = (v14 & 0xFFFFFFFFFFF80000LL) + 2112;
    result = (v14 - v17) >> 9;
    if ( *(_BYTE *)((v14 & 0xFFFFFFFFFFF80000LL) + result + 0x38) != 0 )
      *(_BYTE *)((v14 & 0xFFFFFFFFFFF80000LL) + ((v14 - v17) >> 9) + 0x38) = 0;
  }
  if ( *(int *)(v8 + 16) <= 0 )
    return MEMORY[0x18277F280]();
  return result;
}
