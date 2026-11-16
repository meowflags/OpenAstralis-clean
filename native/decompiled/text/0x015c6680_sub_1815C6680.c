// sub_1815C6680
// rva 0x015c6680  size 198  section .text  group text
// window base 0x1815c6680: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1815C6680(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, int a6)
{
  __int64 v6; // r14
  __int64 v7; // r15
  __int64 result; // rax
  __int64 v9; // [rsp+0h] [rbp-28h] BYREF
  __int64 v10; // [rsp+10h] [rbp-18h]
  __int64 v11; // [rsp+18h] [rbp-10h]
  int v12; // [rsp+24h] [rbp-4h]

  if ( (unsigned __int64)&v9 <= *(_QWORD *)(v7 + 8) )
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
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    return sub_1815C6760();
  }
  else
  {
    result = *(_QWORD *)(v7 + 40);
    if ( (unsigned __int64)(result + 24) > *(_QWORD *)(v7 + 32) )
    {
      v12 = a6;
      v11 = a5;
      v10 = a3;
      result = MEMORY[0x181EAA920](a1, a2, a3: 35848704);
      a6 = v12;
      a5 = v11;
      a3 = v10;
    }
    else
    {
      *(_QWORD *)(v7 + 40) = result + 24;
      *(_DWORD *)result = 35848704;
      *(_DWORD *)(result + 4) = 0;
      *(_QWORD *)(result + 8) = 0;
      *(_QWORD *)(result + 16) = 0;
    }
    *(_BYTE *)(result + 12) = MEMORY[0x123F3C4C] & a6;
    *(_DWORD *)(result + 8) = (unsigned __int64)(a5 - v6) >> 3;
    *(_DWORD *)(result + 4) = (unsigned __int64)(a3 - v6) >> 3;
    if ( *(int *)(v7 + 16) <= 0 )
    {
      v12 = a6;
      v11 = a5;
      v10 = a3;
      return MEMORY[0x18277F280]();
    }
  }
  return result;
}
