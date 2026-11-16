// sub_1E9D6C0
// rva 0x01e9d6c0  size 134  section .text  group text
// window base 0x181e9d6c0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1E9D6C0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r14
  __int64 v7; // rcx
  __int64 v8; // rdi
  __int64 v9; // rsi
  __int64 result; // rax
  __int64 v11; // rdi
  __int64 v12; // rsi
  __int64 v13; // rdx
  __int64 v14; // rdi
  __int64 v15; // rsi

  sub_1EA0060(a1, a2, a3: a5, a4, a5: a3);
  if ( a6 == v6 )
  {
    sub_276EFE0(a1: v8, a2: v9, a3, a4: v7, a5);
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
    return sub_1E9D760(a1: v14, a2: v15, a3: v13);
  }
  else
  {
    result = sub_1E9FBC0(a1: v8, a2: v9, a3: a6, a4: v7, a5: a3);
    if ( *(_DWORD *)(a6 + 48) == 16 )
    {
      if ( *(int *)(a5 + 48) < 16 )
        return sub_1EAC020(a1: v11, a2: v12, a3);
      else
        return sub_1EABEE0(a1: v11, a2: v12, a3);
    }
  }
  return result;
}
