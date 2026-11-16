// sub_1815C5D60
// rva 0x015c5d60  size 440  section .text  group text
// window base 0x1815c5d60: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1815C5D60(__int64 a1, __int64 a2)
{
  __int64 v2; // r14
  __int64 v3; // r15
  __int64 result; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  unsigned __int64 v7; // rsi
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rdx
  __int64 v10; // [rsp+0h] [rbp-18h] BYREF
  __int64 v11; // [rsp+8h] [rbp-10h]
  __int64 v12; // [rsp+10h] [rbp-8h]

  if ( (unsigned __int64)&v10 <= *(_QWORD *)(v3 + 8) )
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
    return sub_1815C5F20();
  }
  else
  {
    result = *(_QWORD *)(v3 + 40);
    if ( (unsigned __int64)(result + 16) > *(_QWORD *)(v3 + 32) )
    {
      result = MEMORY[0x181EAA920](a1, a2, a3: 35846944);
    }
    else
    {
      *(_QWORD *)(v3 + 40) = result + 16;
      *(_DWORD *)result = 35846944;
      *(_DWORD *)(result + 4) = 0;
      *(_QWORD *)(result + 8) = 0;
    }
    v5 = *(_QWORD *)(v3 + 40);
    if ( (unsigned __int64)(v5 + 24) > *(_QWORD *)(v3 + 32) )
    {
      v12 = result;
      v5 = MEMORY[0x181EAA920](a1, a2, a3: 35847112);
      result = v12;
    }
    else
    {
      *(_QWORD *)(v3 + 40) = v5 + 24;
      *(_DWORD *)v5 = 35847112;
      *(_DWORD *)(v5 + 4) = 0;
      *(_QWORD *)(v5 + 8) = 0;
      *(_QWORD *)(v5 + 16) = 0;
    }
    *(_DWORD *)(v5 + 12) = 16;
    v6 = *(_QWORD *)(v3 + 40);
    if ( (unsigned __int64)(v6 + 24) > *(_QWORD *)(v3 + 32) )
    {
      v11 = v5;
      v12 = result;
      v6 = MEMORY[0x181EAA840](a1, a2, a3: 34089120, a4: v6, a5: 2);
      v5 = v11;
      result = v12;
    }
    else
    {
      *(_QWORD *)(v3 + 40) = v6 + 24;
      *(_QWORD *)v6 = 34089120;
      *(_DWORD *)(v6 + 8) = 2;
      *(_DWORD *)(v6 + 12) = 0;
      *(_QWORD *)(v6 + 16) = 0;
    }
    *(_DWORD *)(v6 + 16) = 8;
    *(_DWORD *)(v6 + 12) = 4;
    *(_DWORD *)(result + 4) = (unsigned __int64)(v5 - v2) >> 3;
    if ( (*(_DWORD *)result & 2) != 0 )
    {
      v7 = (result & 0xFFFFFFFFFFF80000LL) + 2112;
      if ( *(_BYTE *)((result & 0xFFFFFFFFFFF80000LL) + ((result - v7) >> 9) + 0x38) != 0 )
        *(_BYTE *)((result & 0xFFFFFFFFFFF80000LL) + ((result - v7) >> 9) + 0x38) = 0;
    }
    *(_DWORD *)(v5 + 8) = (unsigned __int64)(v6 - v2) >> 3;
    if ( (*(_DWORD *)v5 & 2) != 0 )
    {
      v8 = v5 & 0xFFFFFFFFFFF80000LL;
      v9 = (v5 - ((v5 & 0xFFFFFFFFFFF80000LL) + 2112)) >> 9;
      if ( *(_BYTE *)(v8 + v9 + 56) != 0 )
        *(_BYTE *)(v8 + v9 + 56) = 0;
    }
    if ( *(int *)(v3 + 16) <= 0 )
    {
      v12 = result;
      MEMORY[0x18277F280]();
      return v12;
    }
  }
  return result;
}
