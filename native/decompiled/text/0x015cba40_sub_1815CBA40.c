// sub_1815CBA40
// rva 0x015cba40  size 198  section .text  group text
// window base 0x1815cba40: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1815CBA40(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // r14
  __int64 v6; // r15
  __int64 result; // rax
  __int64 v8; // [rsp+0h] [rbp-18h] BYREF
  __int64 v9; // [rsp+8h] [rbp-10h]
  __int64 v10; // [rsp+10h] [rbp-8h]

  if ( (unsigned __int64)&v8 <= *(_QWORD *)(v6 + 8) )
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
    return sub_1815CBB20();
  }
  else
  {
    result = *(_QWORD *)(v6 + 40);
    if ( (unsigned __int64)(result + 32) > *(_QWORD *)(v6 + 32) )
    {
      v10 = a5;
      v9 = a3;
      result = MEMORY[0x181EAA920](a1, a2, a3: 35864376);
      a5 = v10;
      a3 = v9;
    }
    else
    {
      *(_QWORD *)(v6 + 40) = result + 32;
      *(_DWORD *)result = 35864376;
      *(_DWORD *)(result + 4) = 0;
      *(_QWORD *)(result + 8) = 0;
      *(_QWORD *)(result + 16) = 0;
      *(_QWORD *)(result + 24) = 0;
    }
    *(_DWORD *)(result + 16) = (unsigned __int64)(a5 - v5) >> 3;
    *(_DWORD *)(result + 12) = (unsigned __int64)(a3 - v5) >> 3;
    *(_DWORD *)(result + 8) = 43966575;
    *(_DWORD *)(result + 4) = 45605518;
    if ( *(int *)(v6 + 16) <= 0 )
    {
      v10 = a5;
      v9 = a3;
      return MEMORY[0x18277F280]();
    }
  }
  return result;
}
