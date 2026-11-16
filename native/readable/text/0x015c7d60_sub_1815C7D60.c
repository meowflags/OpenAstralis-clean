// sub_15C7D60
// rva 0x015c7d60  size 182  section .text  group text
// window base 0x1815c7d60: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_15C7D60(__int64 a1, __int64 a2, int a3, __int64 a4, __int64 a5, __int64 a6)
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
    return sub_15C7E20();
  }
  else
  {
    result = *(_QWORD *)(v7 + 40);
    if ( (unsigned __int64)(result + 24) > *(_QWORD *)(v7 + 32) )
    {
      v11 = a6;
      v10 = a5;
      v12 = a3;
      result = sub_1EAA920(a1, a2, a3: 35480488);
      a6 = v11;
      a5 = v10;
      a3 = v12;
    }
    else
    {
      *(_QWORD *)(v7 + 40) = result + 24;
      *(_DWORD *)result = 35480488;
      *(_DWORD *)(result + 4) = 0;
      *(_QWORD *)(result + 8) = 0;
      *(_QWORD *)(result + 16) = 0;
    }
    *(_DWORD *)(result + 12) = a3;
    *(_DWORD *)(result + 8) = (unsigned __int64)(a6 - v6) >> 3;
    *(_DWORD *)(result + 4) = (unsigned __int64)(a5 - v6) >> 3;
    if ( *(int *)(v7 + 16) <= 0 )
    {
      v11 = a6;
      v10 = a5;
      v12 = a3;
      return sub_277F280();
    }
  }
  return result;
}
