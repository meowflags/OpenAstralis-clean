// sub_15AB7A0
// rva 0x015ab7a0  size 753  section .text  group text
// window base 0x1815ab7a0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_15AB7A0(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4, int a5, int a6)
{
  __int64 v6; // r14
  __int64 v7; // r15
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 result; // rax
  __int64 v12; // rcx
  unsigned __int64 v13; // rbx
  unsigned __int64 v14; // rbx
  unsigned __int64 v15; // rbx
  unsigned __int64 v16; // rbx
  unsigned __int64 v17; // rbp
  int v18; // [rsp+0h] [rbp-28h] BYREF
  __int64 v19; // [rsp+10h] [rbp-18h]
  unsigned int *v20; // [rsp+18h] [rbp-10h]
  int v21; // [rsp+20h] [rbp-8h]
  int v22; // [rsp+24h] [rbp-4h]

  if ( (unsigned __int64)&v18 <= *(_QWORD *)(v7 + 8) )
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
    return sub_15ABAA0();
  }
  else
  {
    *(_BYTE *)(a3 + 33) = 0;
    *(_BYTE *)(a3 + 32) = MEMORY[0x123f3c38]/* 0x123f3c38 */ & a6;
    if ( a6 != 0 )
      v8 = v6 + 57670080;
    else
      v8 = v6;
    *(_DWORD *)(a3 + 4) = (unsigned __int64)(v8 - v6) >> 3;
    if ( (*(_DWORD *)a3 & 2) != 0 )
    {
      v13 = (a3 & 0xFFFFFFFFFFF80000LL) + 2112;
      if ( *(_BYTE *)((a3 & 0xFFFFFFFFFFF80000LL) + ((a3 - v13) >> 9) + 0x38) != 0 )
        *(_BYTE *)((a3 & 0xFFFFFFFFFFF80000LL) + ((a3 - v13) >> 9) + 0x38) = 0;
    }
    *(_BYTE *)(a3 + 34) = a5 == 0;
    __faststorefence();
    if ( a5 != 0 )
    {
      v9 = v6;
    }
    else
    {
      v9 = *(_QWORD *)(v7 + 40);
      if ( (unsigned __int64)(v9 + 16) > *(_QWORD *)(v7 + 32) )
      {
        v22 = a6;
        v21 = 0;
        v20 = (unsigned int *)a3;
        v9 = sub_1EAA920(a1, a2, a3: 35657352);
        a6 = v22;
        a5 = v21;
        a3 = (unsigned __int64)v20;
      }
      else
      {
        *(_QWORD *)(v7 + 40) = v9 + 16;
        *(_DWORD *)v9 = 35657352;
        *(_DWORD *)(v9 + 4) = 0;
        *(_QWORD *)(v9 + 8) = 0;
      }
      v12 = *(_QWORD *)(v7 + 40);
      if ( (unsigned __int64)(v12 + 32) > *(_QWORD *)(v7 + 32) )
      {
        v19 = v9;
        v22 = a6;
        v21 = a5;
        v20 = (unsigned int *)a3;
        v12 = sub_1EAA920(a1, a2, a3: 34438064);
        v9 = v19;
        a6 = v22;
        a5 = v21;
        a3 = (unsigned __int64)v20;
      }
      else
      {
        *(_QWORD *)(v7 + 40) = v12 + 32;
        *(_DWORD *)v12 = 34438064;
        *(_DWORD *)(v12 + 4) = 0;
        *(_QWORD *)(v12 + 8) = 0;
        *(_QWORD *)(v12 + 16) = 0;
        *(_QWORD *)(v12 + 24) = 0;
      }
      *(_DWORD *)(v9 + 4) = (unsigned __int64)(v12 - v6) >> 3;
      if ( (*(_DWORD *)v9 & 2) != 0 )
      {
        v17 = (v9 & 0xFFFFFFFFFFF80000LL) + 2112;
        if ( *(_BYTE *)((v9 & 0xFFFFFFFFFFF80000LL) + ((v9 - v17) >> 9) + 0x38) != 0 )
          *(_BYTE *)((v9 & 0xFFFFFFFFFFF80000LL) + ((v9 - v17) >> 9) + 0x38) = 0;
      }
    }
    *(_DWORD *)(a3 + 8) = (unsigned __int64)(v9 - v6) >> 3;
    if ( (*(_DWORD *)a3 & 2) != 0 )
    {
      v15 = (a3 & 0xFFFFFFFFFFF80000LL) + 2112;
      if ( *(_BYTE *)((a3 & 0xFFFFFFFFFFF80000LL) + ((a3 - v15) >> 9) + 0x38) != 0 )
        *(_BYTE *)((a3 & 0xFFFFFFFFFFF80000LL) + ((a3 - v15) >> 9) + 0x38) = 0;
    }
    if ( a5 != 0 )
      v10 = v6 + 376614496;
    else
      v10 = v6 + 376614520;
    *(_DWORD *)(a3 + 16) = (unsigned __int64)(v10 - v6) >> 3;
    if ( (*(_DWORD *)a3 & 2) != 0 )
    {
      v14 = (a3 & 0xFFFFFFFFFFF80000LL) + 2112;
      if ( *(_BYTE *)((a3 & 0xFFFFFFFFFFF80000LL) + ((a3 - v14) >> 9) + 0x38) != 0 )
        *(_BYTE *)((a3 & 0xFFFFFFFFFFF80000LL) + ((a3 - v14) >> 9) + 0x38) = 0;
    }
    *(_BYTE *)(a3 + 35) = 0;
    *(_DWORD *)(a3 + 20) = 47076809;
    __faststorefence();
    result = *(unsigned int *)a3;
    if ( (result & 2) != 0 )
    {
      v16 = (a3 & 0xFFFFFFFFFFF80000LL) + 2112;
      result = (a3 - v16) >> 9;
      if ( *(_BYTE *)((a3 & 0xFFFFFFFFFFF80000LL) + result + 0x38) != 0 )
        *(_BYTE *)((a3 & 0xFFFFFFFFFFF80000LL) + ((a3 - v16) >> 9) + 0x38) = 0;
    }
    if ( *(int *)(v7 + 16) <= 0 )
    {
      v22 = a6;
      v21 = a5;
      v20 = (unsigned int *)a3;
      return sub_277F280();
    }
  }
  return result;
}
