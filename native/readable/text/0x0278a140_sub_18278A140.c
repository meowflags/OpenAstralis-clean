// sub_278A140
// rva 0x0278a140  size 105  section .text  group text
// window base 0x18278a140: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_278A140(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // r14
  __int64 v6; // rdx
  __int64 v7; // rdi
  __int64 v8; // rsi
  __int64 result; // rax
  __int64 v10; // rdi
  __int64 v11; // rsi

  if ( (unsigned int)MEMORY[0x10e44680]/* 0x10e44680 */(a1, a2, a3: 0xFFFFFFFFLL, a4: a5) != 0 )
  {
    sub_28C1C40(a1: v7, a2: v8, a3: v5 + 369620288);
    goto LABEL_5;
  }
  result = MEMORY[0x10e44f48]/* 0x10e44f48 */(a1: v7, a2: v8, a3: v6, a4: a5);
  if ( (_DWORD)result == 0 )
  {
LABEL_5:
    sub_28C1C40(a1: v10, a2: v11, a3: v5 + 371398272);
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
    return sub_278A1C0();
  }
  return result;
}
