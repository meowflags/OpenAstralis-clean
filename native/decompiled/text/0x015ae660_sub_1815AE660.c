// sub_1815AE660
// rva 0x015ae660  size 883  section .text  group text
// window base 0x1815ae660: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1815AE660(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  __int64 v3; // r14
  __int64 v4; // r15
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 result; // rax
  unsigned __int64 v10; // rbx
  unsigned __int64 v11; // rbp
  unsigned __int64 v12; // rbx
  unsigned __int64 v13; // rbx
  unsigned __int64 v14; // rbx
  __int64 v15; // rdx
  __int64 v16; // rdi
  __int64 v17; // rsi
  __int64 v18; // [rsp+0h] [rbp-18h] BYREF
  __int64 v19; // [rsp+8h] [rbp-10h]
  unsigned int *v20; // [rsp+10h] [rbp-8h]

  if ( (unsigned __int64)&v18 <= *(_QWORD *)(v4 + 8) )
  {
    MEMORY[0x181EB84E0]();
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
    return sub_1815AE9E0(a1: v16, a2: v17, a3: v15);
  }
  else
  {
    v5 = *(_QWORD *)(v4 + 40);
    if ( (unsigned __int64)(v5 + 32) > *(_QWORD *)(v4 + 32) )
    {
      v20 = (unsigned int *)a3;
      v5 = MEMORY[0x181EAA920](a1, a2, a3: 35803168);
      a3 = (unsigned __int64)v20;
    }
    else
    {
      *(_QWORD *)(v4 + 40) = v5 + 32;
      *(_DWORD *)v5 = 35803168;
      *(_DWORD *)(v5 + 4) = 0;
      *(_QWORD *)(v5 + 8) = 0;
      *(_QWORD *)(v5 + 16) = 0;
      *(_QWORD *)(v5 + 24) = 0;
    }
    *(_QWORD *)(v5 + 16) = -1;
    *(_DWORD *)(a3 + 4) = (unsigned __int64)(v5 - v3) >> 3;
    if ( (*(_DWORD *)a3 & 2) != 0 )
    {
      v10 = (a3 & 0xFFFFFFFFFFF80000LL) + 2112;
      if ( *(_BYTE *)((a3 & 0xFFFFFFFFFFF80000LL) + ((a3 - v10) >> 9) + 0x38) != 0 )
        *(_BYTE *)((a3 & 0xFFFFFFFFFFF80000LL) + ((a3 - v10) >> 9) + 0x38) = 0;
    }
    v6 = *(_QWORD *)(v4 + 40);
    if ( (unsigned __int64)(v6 + 24) > *(_QWORD *)(v4 + 32) )
    {
      v20 = (unsigned int *)a3;
      v6 = MEMORY[0x181EAA920](a1, a2, a3: 35803536);
      a3 = (unsigned __int64)v20;
    }
    else
    {
      *(_QWORD *)(v4 + 40) = v6 + 24;
      *(_DWORD *)v6 = 35803536;
      *(_DWORD *)(v6 + 4) = 0;
      *(_QWORD *)(v6 + 8) = 0;
      *(_QWORD *)(v6 + 16) = 0;
    }
    v7 = *(_QWORD *)(v4 + 40);
    if ( (unsigned __int64)(v7 + 72) > *(_QWORD *)(v4 + 32) )
    {
      v19 = v6;
      v20 = (unsigned int *)a3;
      v7 = MEMORY[0x181EAA920](a1, a2, a3: 35803656);
      v6 = v19;
      a3 = (unsigned __int64)v20;
    }
    else
    {
      *(_QWORD *)(v4 + 40) = v7 + 72;
      *(_DWORD *)v7 = 35803656;
      *(_DWORD *)(v7 + 4) = 0;
      *(_QWORD *)(v7 + 8) = 0;
      *(_QWORD *)(v7 + 16) = 0;
      *(_QWORD *)(v7 + 24) = 0;
      *(_QWORD *)(v7 + 32) = 0;
      *(_QWORD *)(v7 + 40) = 0;
      *(_QWORD *)(v7 + 48) = 0;
      *(_QWORD *)(v7 + 56) = 0;
      *(_QWORD *)(v7 + 64) = 0;
    }
    *(_DWORD *)(v7 + 24) = 7679;
    *(_QWORD *)(v7 + 16) = -1;
    *(_DWORD *)(v7 + 12) = -1;
    *(_DWORD *)(v7 + 8) = 46660156;
    *(_DWORD *)(v6 + 4) = (unsigned __int64)(v7 - v3) >> 3;
    if ( (*(_DWORD *)v6 & 2) != 0 )
    {
      v11 = (v6 & 0xFFFFFFFFFFF80000LL) + 2112;
      if ( *(_BYTE *)((v6 & 0xFFFFFFFFFFF80000LL) + ((v6 - v11) >> 9) + 0x38) != 0 )
        *(_BYTE *)((v6 & 0xFFFFFFFFFFF80000LL) + ((v6 - v11) >> 9) + 0x38) = 0;
    }
    *(_DWORD *)(a3 + 8) = (unsigned __int64)(v6 - v3) >> 3;
    if ( (*(_DWORD *)a3 & 2) != 0 )
    {
      v12 = (a3 & 0xFFFFFFFFFFF80000LL) + 2112;
      if ( *(_BYTE *)((a3 & 0xFFFFFFFFFFF80000LL) + ((a3 - v12) >> 9) + 0x38) != 0 )
        *(_BYTE *)((a3 & 0xFFFFFFFFFFF80000LL) + ((a3 - v12) >> 9) + 0x38) = 0;
    }
    v8 = *(_QWORD *)(v4 + 40);
    if ( (unsigned __int64)(v8 + 32) > *(_QWORD *)(v4 + 32) )
    {
      v20 = (unsigned int *)a3;
      v8 = MEMORY[0x181EAA920](a1, a2, a3: 35804064);
      a3 = (unsigned __int64)v20;
    }
    else
    {
      *(_QWORD *)(v4 + 40) = v8 + 32;
      *(_DWORD *)v8 = 35804064;
      *(_DWORD *)(v8 + 4) = 0;
      *(_QWORD *)(v8 + 8) = 0;
      *(_QWORD *)(v8 + 16) = 0;
      *(_QWORD *)(v8 + 24) = 0;
    }
    *(_BYTE *)(v8 + 21) = 1;
    *(_DWORD *)(v8 + 16) = -1;
    *(_DWORD *)(v8 + 4) = -1;
    *(_DWORD *)(a3 + 12) = (unsigned __int64)(v8 - v3) >> 3;
    if ( (*(_DWORD *)a3 & 2) != 0 )
    {
      v13 = (a3 & 0xFFFFFFFFFFF80000LL) + 2112;
      if ( *(_BYTE *)((a3 & 0xFFFFFFFFFFF80000LL) + ((a3 - v13) >> 9) + 0x38) != 0 )
        *(_BYTE *)((a3 & 0xFFFFFFFFFFF80000LL) + ((a3 - v13) >> 9) + 0x38) = 0;
    }
    *(_DWORD *)(a3 + 16) = 47076849;
    result = *(unsigned int *)a3;
    if ( (result & 2) != 0 )
    {
      v14 = (a3 & 0xFFFFFFFFFFF80000LL) + 2112;
      result = (a3 - v14) >> 9;
      if ( *(_BYTE *)((a3 & 0xFFFFFFFFFFF80000LL) + result + 0x38) != 0 )
        *(_BYTE *)((a3 & 0xFFFFFFFFFFF80000LL) + ((a3 - v14) >> 9) + 0x38) = 0;
    }
    if ( *(int *)(v4 + 16) <= 0 )
    {
      v20 = (unsigned int *)a3;
      return MEMORY[0x18277F280]();
    }
  }
  return result;
}
