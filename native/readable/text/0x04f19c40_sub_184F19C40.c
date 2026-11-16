// sub_4F19C40
// rva 0x04f19c40  size 784  section .text  group text
// window base 0x184f19c40: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_4F19C40(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, int a6)
{
  __int64 v6; // r14
  __int64 v7; // r15
  __int64 v8; // rax
  unsigned __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rdi
  __int64 v12; // rsi
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 result; // rax
  unsigned __int64 v17; // rbx
  unsigned __int64 v18; // rbx
  unsigned __int64 v19; // rbx
  unsigned __int64 v20; // rbx
  unsigned __int64 v21; // rbx
  char v22; // [rsp+0h] [rbp-38h] BYREF
  unsigned __int64 v23; // [rsp+10h] [rbp-28h]
  __int64 v24; // [rsp+18h] [rbp-20h]
  __int64 v25; // [rsp+20h] [rbp-18h]
  _DWORD *v26; // [rsp+28h] [rbp-10h]
  int v27; // [rsp+34h] [rbp-4h]

  if ( (unsigned __int64)&v22 <= *(_QWORD *)(v7 + 8) )
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
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    return sub_4F19F60();
  }
  else
  {
    v26 = (_DWORD *)a3;
    v25 = a1;
    v8 = *(_QWORD *)(v7 + 40);
    if ( (unsigned __int64)(v8 + 16) > *(_QWORD *)(v7 + 32) )
    {
      v27 = a6;
      v24 = a5;
      v8 = sub_1EAA920(a1, a2, a3: 34085496);
      a1 = v25;
      a6 = v27;
      a5 = v24;
      a3 = (__int64)v26;
    }
    else
    {
      *(_QWORD *)(v7 + 40) = v8 + 16;
      *(_DWORD *)v8 = 34085496;
      *(_DWORD *)(v8 + 4) = 0;
      *(_QWORD *)(v8 + 8) = 0;
    }
    *(_DWORD *)(a3 + 8) = (unsigned __int64)(v8 - v6) >> 3;
    if ( (*(_DWORD *)a3 & 2) != 0 )
    {
      v17 = (a3 & 0xFFFFFFFFFFF80000LL) + 2112;
      if ( *(_BYTE *)((a3 & 0xFFFFFFFFFFF80000LL) + ((a3 - v17) >> 9) + 0x38) != 0 )
        *(_BYTE *)((a3 & 0xFFFFFFFFFFF80000LL) + ((a3 - v17) >> 9) + 0x38) = 0;
    }
    *(_DWORD *)(a3 + 4) = (unsigned __int64)(a5 - v6) >> 3;
    if ( (*(_DWORD *)a3 & 2) != 0 )
    {
      v19 = (a3 & 0xFFFFFFFFFFF80000LL) + 2112;
      if ( *(_BYTE *)((a3 & 0xFFFFFFFFFFF80000LL) + ((a3 - v19) >> 9) + 0x38) != 0 )
        *(_BYTE *)((a3 & 0xFFFFFFFFFFF80000LL) + ((a3 - v19) >> 9) + 0x38) = 0;
    }
    *(_BYTE *)(a3 + 14) = 0;
    *(_BYTE *)(a3 + 15) = 0;
    *(_BYTE *)(a3 + 13) = MEMORY[0xea6e10c]/* 0xea6e10c */ & a6;
    v9 = *(_QWORD *)(v7 + 40);
    if ( v9 + 24 > *(_QWORD *)(v7 + 32) )
    {
      v27 = a6;
      v24 = a5;
      v9 = sub_1EAA920(a1, a2, a3: 34241520);
      a1 = v25;
      v10 = (__int64)v26;
    }
    else
    {
      *(_QWORD *)(v7 + 40) = v9 + 24;
      *(_DWORD *)v9 = 34241520;
      *(_DWORD *)(v9 + 4) = 0;
      *(_QWORD *)(v9 + 8) = 0;
      *(_QWORD *)(v9 + 16) = 0;
      v27 = a6;
      v24 = a5;
      v10 = a3;
    }
    v23 = v9;
    sub_4F18980(a1, a2, a3: v9, a4: v10, a5: v10, a6: a1, a7: v22);
    v13 = v23;
    v14 = (unsigned __int64)v26;
    v26[7] = (v23 - v6) >> 3;
    if ( (*(_DWORD *)v14 & 2) != 0 )
    {
      v18 = (v14 & 0xFFFFFFFFFFF80000LL) + 2112;
      if ( *(_BYTE *)((v14 & 0xFFFFFFFFFFF80000LL) + ((v14 - v18) >> 9) + 0x38) != 0 )
        *(_BYTE *)((v14 & 0xFFFFFFFFFFF80000LL) + ((v14 - v18) >> 9) + 0x38) = 0;
    }
    v15 = *(_QWORD *)(v7 + 40);
    if ( (unsigned __int64)(v15 + 40) > *(_QWORD *)(v7 + 32) )
    {
      v15 = sub_1EAA920(a1: v11, a2: v12, a3: 34241872);
      v13 = v23;
    }
    else
    {
      *(_QWORD *)(v7 + 40) = v15 + 40;
      *(_DWORD *)v15 = 34241872;
      *(_DWORD *)(v15 + 4) = 0;
      *(_QWORD *)(v15 + 8) = 0;
      *(_QWORD *)(v15 + 16) = 0;
      *(_QWORD *)(v15 + 24) = 0;
      *(_QWORD *)(v15 + 32) = 0;
    }
    v23 = v15;
    sub_4EB4E20(a1: v11, a2: v12, a3: v15, a4: v14, a5: v13);
    result = (__int64)v26;
    v26[6] = (v23 - v6) >> 3;
    if ( (*(_DWORD *)result & 2) != 0 )
    {
      v20 = (result & 0xFFFFFFFFFFF80000LL) + 2112;
      if ( *(_BYTE *)((result & 0xFFFFFFFFFFF80000LL) + ((result - v20) >> 9) + 0x38) != 0 )
        *(_BYTE *)((result & 0xFFFFFFFFFFF80000LL) + ((result - v20) >> 9) + 0x38) = 0;
    }
    *(_DWORD *)(result + 20) = (unsigned __int64)(v25 - v6) >> 3;
    if ( (*(_DWORD *)result & 2) != 0 )
    {
      v21 = (result & 0xFFFFFFFFFFF80000LL) + 2112;
      if ( *(_BYTE *)((result & 0xFFFFFFFFFFF80000LL) + ((result - v21) >> 9) + 0x38) != 0 )
        *(_BYTE *)((result & 0xFFFFFFFFFFF80000LL) + ((result - v21) >> 9) + 0x38) = 0;
    }
    if ( *(int *)(v7 + 16) <= 0 )
      return sub_277F280();
  }
  return result;
}
