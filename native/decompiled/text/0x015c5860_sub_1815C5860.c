// sub_1815C5860
// rva 0x015c5860  size 1102  section .text  group text
// window base 0x1815c5860: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1815C5860(__int64 a1, __int64 a2)
{
  __int64 v2; // r14
  __int64 v3; // r15
  __int64 result; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rbx
  __int64 v8; // rbp
  __int64 v9; // rsi
  __int64 v10; // rsi
  __int64 v11; // rdi
  unsigned __int64 v12; // r9
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // rbp
  unsigned __int64 v15; // r8
  unsigned __int64 v16; // rdi
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // rdx
  __int64 v19; // [rsp+0h] [rbp-38h] BYREF
  __int64 v20; // [rsp+10h] [rbp-28h]
  __int64 v21; // [rsp+18h] [rbp-20h]
  __int64 v22; // [rsp+20h] [rbp-18h]
  __int64 v23; // [rsp+28h] [rbp-10h]
  __int64 v24; // [rsp+30h] [rbp-8h]

  if ( (unsigned __int64)&v19 <= *(_QWORD *)(v3 + 8) )
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
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    return sub_1815C5CC0();
  }
  else
  {
    result = *(_QWORD *)(v3 + 40);
    if ( (unsigned __int64)(result + 24) > *(_QWORD *)(v3 + 32) )
    {
      result = MEMORY[0x181EAA920](a1, a2, a3: 35846400);
    }
    else
    {
      *(_QWORD *)(v3 + 40) = result + 24;
      *(_DWORD *)result = 35846400;
      *(_DWORD *)(result + 4) = 0;
      *(_QWORD *)(result + 8) = 0;
      *(_QWORD *)(result + 16) = 0;
    }
    *(_DWORD *)(result + 8) = -1;
    v5 = *(_QWORD *)(v3 + 40);
    if ( (unsigned __int64)(v5 + 56) > *(_QWORD *)(v3 + 32) )
    {
      v24 = result;
      v5 = MEMORY[0x181EAA920](a1, a2, a3: 35840824);
      result = v24;
    }
    else
    {
      *(_QWORD *)(v3 + 40) = v5 + 56;
      *(_DWORD *)v5 = 35840824;
      *(_DWORD *)(v5 + 4) = 0;
      *(_QWORD *)(v5 + 8) = 0;
      *(_QWORD *)(v5 + 16) = 0;
      *(_QWORD *)(v5 + 24) = 0;
      *(_QWORD *)(v5 + 32) = 0;
      *(_QWORD *)(v5 + 40) = 0;
      *(_QWORD *)(v5 + 48) = 0;
    }
    *(_DWORD *)(v5 + 32) = 16;
    *(_DWORD *)(v5 + 20) = 16;
    *(_DWORD *)(v5 + 16) = 16;
    v6 = *(_QWORD *)(v3 + 40);
    if ( (unsigned __int64)(v6 + 48) > *(_QWORD *)(v3 + 32) )
    {
      v23 = v5;
      v24 = result;
      v6 = MEMORY[0x181EAA840](a1, a2, a3: 34082368, a4: v6, a5: 32);
      v5 = v23;
      result = v24;
    }
    else
    {
      *(_QWORD *)(v3 + 40) = v6 + 48;
      *(_QWORD *)v6 = 34082368;
      *(_DWORD *)(v6 + 8) = 32;
      *(_DWORD *)(v6 + 12) = 0;
      *(_QWORD *)(v6 + 16) = 0;
      *(_QWORD *)(v6 + 24) = 0;
      *(_QWORD *)(v6 + 32) = 0;
      *(_QWORD *)(v6 + 40) = 0;
    }
    v7 = *(_QWORD *)(v3 + 40);
    if ( (unsigned __int64)(v7 + 16) > *(_QWORD *)(v3 + 32) )
    {
      v22 = v6;
      v23 = v5;
      v24 = result;
      v7 = MEMORY[0x181EAA920](a1, a2, a3: 35840936);
      v6 = v22;
      v5 = v23;
      result = v24;
    }
    else
    {
      *(_QWORD *)(v3 + 40) = v7 + 16;
      *(_DWORD *)v7 = 35840936;
      *(_DWORD *)(v7 + 4) = 0;
      *(_QWORD *)(v7 + 8) = 0;
    }
    *(_DWORD *)(v7 + 4) = 16;
    v8 = *(_QWORD *)(v3 + 40);
    v9 = v8 + 24;
    if ( (unsigned __int64)(v8 + 24) > *(_QWORD *)(v3 + 32) )
    {
      v21 = v7;
      v22 = v6;
      v23 = v5;
      v24 = result;
      v8 = MEMORY[0x181EAA920](a1, a2: v9, a3: 35841072);
      v7 = v21;
      v6 = v22;
      v5 = v23;
      result = v24;
    }
    else
    {
      *(_QWORD *)(v3 + 40) = v9;
      *(_DWORD *)v8 = 35841072;
      *(_DWORD *)(v8 + 4) = 0;
      *(_QWORD *)(v8 + 8) = 0;
      *(_QWORD *)(v8 + 16) = 0;
    }
    *(_DWORD *)(v8 + 12) = 16;
    v10 = *(_QWORD *)(v3 + 40);
    v11 = v10 + 32;
    if ( (unsigned __int64)(v10 + 32) > *(_QWORD *)(v3 + 32) )
    {
      v20 = v8;
      v21 = v7;
      v22 = v6;
      v23 = v5;
      v24 = result;
      v10 = MEMORY[0x181EAA920](a1: v11, a2: v10, a3: 35841256);
      v8 = v20;
      v7 = v21;
      v6 = v22;
      v5 = v23;
      result = v24;
    }
    else
    {
      *(_QWORD *)(v3 + 40) = v11;
      *(_DWORD *)v10 = 35841256;
      *(_DWORD *)(v10 + 4) = 0;
      *(_QWORD *)(v10 + 8) = 0;
      *(_QWORD *)(v10 + 16) = 0;
      *(_QWORD *)(v10 + 24) = 0;
    }
    *(_DWORD *)(result + 4) = (unsigned __int64)(v5 - v2) >> 3;
    if ( (*(_DWORD *)result & 2) != 0 )
    {
      v12 = (result & 0xFFFFFFFFFFF80000LL) + 2112;
      if ( *(_BYTE *)((result & 0xFFFFFFFFFFF80000LL) + ((result - v12) >> 9) + 0x38) != 0 )
        *(_BYTE *)((result & 0xFFFFFFFFFFF80000LL) + ((result - v12) >> 9) + 0x38) = 0;
    }
    *(_DWORD *)(v5 + 4) = (unsigned __int64)(v6 - v2) >> 3;
    if ( (*(_DWORD *)v5 & 2) != 0 )
    {
      v15 = (v5 & 0xFFFFFFFFFFF80000LL) + 2112;
      if ( *(_BYTE *)((v5 & 0xFFFFFFFFFFF80000LL) + ((v5 - v15) >> 9) + 0x38) != 0 )
        *(_BYTE *)((v5 & 0xFFFFFFFFFFF80000LL) + ((v5 - v15) >> 9) + 0x38) = 0;
    }
    *(_DWORD *)(v5 + 8) = (unsigned __int64)(v7 - v2) >> 3;
    if ( (*(_DWORD *)v5 & 2) != 0 )
    {
      v16 = (v5 & 0xFFFFFFFFFFF80000LL) + 2112;
      if ( *(_BYTE *)((v5 & 0xFFFFFFFFFFF80000LL) + ((v5 - v16) >> 9) + 0x38) != 0 )
        *(_BYTE *)((v5 & 0xFFFFFFFFFFF80000LL) + ((v5 - v16) >> 9) + 0x38) = 0;
    }
    *(_DWORD *)(v5 + 12) = (unsigned __int64)(v8 - v2) >> 3;
    if ( (*(_DWORD *)v5 & 2) != 0 )
    {
      v17 = v5 & 0xFFFFFFFFFFF80000LL;
      v18 = (v5 - ((v5 & 0xFFFFFFFFFFF80000LL) + 2112)) >> 9;
      if ( *(_BYTE *)(v17 + v18 + 56) != 0 )
        *(_BYTE *)(v17 + v18 + 56) = 0;
    }
    *(_DWORD *)(v8 + 4) = (unsigned __int64)(v10 - v2) >> 3;
    if ( (*(_DWORD *)v8 & 2) != 0 )
    {
      v13 = v8 & 0xFFFFFFFFFFF80000LL;
      v14 = (v8 - ((v8 & 0xFFFFFFFFFFF80000LL) + 2112)) >> 9;
      if ( *(_BYTE *)(v13 + v14 + 56) != 0 )
        *(_BYTE *)(v13 + v14 + 56) = 0;
    }
    if ( *(int *)(v3 + 16) <= 0 )
    {
      v24 = result;
      MEMORY[0x18277F280]();
      return v24;
    }
  }
  return result;
}
