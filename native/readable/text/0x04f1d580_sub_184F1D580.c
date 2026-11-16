// sub_4F1D580
// rva 0x04f1d580  size 501  section .text  group text
// window base 0x184f1d580: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_4F1D580(__int64 a1, __int64 a2, unsigned int *a3, __int64 a4, __int64 a5)
{
  __int64 v5; // r14
  __int64 v6; // r15
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rdi
  __int64 v10; // rsi
  __int64 v11; // r9
  unsigned __int64 v12; // rdx
  char *v13; // r8
  __int64 v14; // rdi
  __int64 v15; // rsi
  __int64 v16; // rdx
  char *v17; // r8
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rcx
  __int64 result; // rax
  unsigned __int64 v21; // rsi
  unsigned __int64 v22; // rbp
  char v23; // [rsp+0h] [rbp-28h] BYREF
  char *v24; // [rsp+10h] [rbp-18h]
  __int64 v25; // [rsp+18h] [rbp-10h]
  unsigned int *v26; // [rsp+20h] [rbp-8h]

  if ( (unsigned __int64)&v23 <= *(_QWORD *)(v6 + 8) )
  {
    sub_1EB84E0();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    return sub_4F1D780();
  }
  else
  {
    v26 = a3;
    v7 = *(_QWORD *)(v6 + 40);
    if ( (unsigned __int64)(v7 + 32) > *(_QWORD *)(v6 + 32) )
    {
      v25 = a5;
      v7 = sub_1EAA920(a1, a2, a3: 34236280);
      a5 = v25;
    }
    else
    {
      *(_QWORD *)(v6 + 40) = v7 + 32;
      *(_DWORD *)v7 = 34236280;
      *(_DWORD *)(v7 + 4) = 0;
      *(_QWORD *)(v7 + 8) = 0;
      *(_QWORD *)(v7 + 16) = 0;
      *(_QWORD *)(v7 + 24) = 0;
    }
    v25 = a5;
    v24 = (char *)v7;
    sub_4ECD780(a1, a2, a3: v7);
    v12 = *(_QWORD *)(v6 + 40);
    if ( v12 + 24 > *(_QWORD *)(v6 + 32) )
    {
      v12 = sub_1EAA920(a1: v9, a2: v10, a3: 34241520);
    }
    else
    {
      *(_QWORD *)(v6 + 40) = v12 + 24;
      *(_DWORD *)v12 = 34241520;
      *(_DWORD *)(v12 + 4) = 0;
      *(_QWORD *)(v12 + 8) = 0;
      *(_QWORD *)(v12 + 16) = 0;
    }
    v13 = v24;
    v24 = (char *)v12;
    sub_4F18460(a1: v9, a2: v10, a3: v12, a4: v8, a5: v13, a6: v11, a7: v23);
    v16 = *(_QWORD *)(v6 + 40);
    if ( (unsigned __int64)(v16 + 40) > *(_QWORD *)(v6 + 32) )
    {
      v16 = sub_1EAA920(a1: v14, a2: v15, a3: 34241872);
    }
    else
    {
      *(_QWORD *)(v6 + 40) = v16 + 40;
      *(_DWORD *)v16 = 34241872;
      *(_DWORD *)(v16 + 4) = 0;
      *(_QWORD *)(v16 + 8) = 0;
      *(_QWORD *)(v16 + 16) = 0;
      *(_QWORD *)(v16 + 24) = 0;
      *(_QWORD *)(v16 + 32) = 0;
    }
    v17 = v24;
    v24 = (char *)v16;
    sub_4EB4E20(a1: v14, a2: v15, a3: v16, a4: v16, a5: v17);
    v18 = (unsigned __int64)&v24[-v5] >> 3;
    v19 = (unsigned __int64)v26;
    v26[2] = v18;
    if ( (*(_DWORD *)v19 & 2) != 0 )
    {
      v21 = (v19 & 0xFFFFFFFFFFF80000LL) + 2112;
      if ( *(_BYTE *)((v19 & 0xFFFFFFFFFFF80000LL) + ((v19 - v21) >> 9) + 0x38) != 0 )
        *(_BYTE *)((v19 & 0xFFFFFFFFFFF80000LL) + ((v19 - v21) >> 9) + 0x38) = 0;
    }
    *(_DWORD *)(v19 + 20) = 0;
    *(_DWORD *)(v19 + 12) = v18;
    result = *(unsigned int *)v19;
    if ( (result & 2) != 0 )
    {
      v22 = (v19 & 0xFFFFFFFFFFF80000LL) + 2112;
      result = (v19 - v22) >> 9;
      if ( *(_BYTE *)((v19 & 0xFFFFFFFFFFF80000LL) + result + 0x38) != 0 )
        *(_BYTE *)((v19 & 0xFFFFFFFFFFF80000LL) + ((v19 - v22) >> 9) + 0x38) = 0;
    }
    *(_BYTE *)(v19 + 24) = 0;
    if ( *(int *)(v6 + 16) <= 0 )
      return sub_277F280();
  }
  return result;
}
