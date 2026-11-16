// sub_182762660
// rva 0x02762660  size 136  section .text  group text
// window base 0x182762660: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_182762660(__int64 a1, __int64 a2, __int64 a3, __int64 a4, _DWORD *a5)
{
  _DWORD *v5; // r14
  __int64 v6; // r15
  __int64 result; // rax
  _DWORD *v8; // rax
  _DWORD *v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rdi
  __int64 v12; // rsi
  __int64 v13; // [rsp+0h] [rbp-18h] BYREF
  __int64 v14; // [rsp+8h] [rbp-10h]
  _DWORD *v15; // [rsp+10h] [rbp-8h]

  if ( (unsigned __int64)&v13 <= *(_QWORD *)(v6 + 8) )
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
    return sub_182762700();
  }
  else if ( a5 != v5 && *a5 >> 3 == 5067478 )
  {
    v8 = &v5[2 * *(unsigned int *)(a3 + 4)];
    v9 = &v5[2 * a5[1]];
    v14 = a3;
    v15 = a5;
    result = MEMORY[0x1857A0680](a1, a2, a3: v8, a4: v9, a5: v9);
    if ( *(int *)(v6 + 16) <= 0 )
      return sub_18277F280(a1: v11, a2: v12, a3: v10);
  }
  else
  {
    v15 = a5;
    v14 = a3;
    if ( *(int *)(v6 + 16) <= 0 )
      sub_18277F280(a1, a2, a3);
    return 0;
  }
  return result;
}
