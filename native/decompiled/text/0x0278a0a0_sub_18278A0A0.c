// sub_18278A0A0
// rva 0x0278a0a0  size 145  section .text  group text
// window base 0x18278a0a0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_18278A0A0()
{
  __int64 v0; // r14
  __int64 v1; // rdi
  __int64 v2; // rsi
  __int64 v3; // rdi
  __int64 v4; // rsi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rdi
  __int64 v9; // rsi
  __int64 v10; // r8
  _BYTE v11[16]; // [rsp+40h] [rbp-28h] BYREF
  _BYTE *v12; // [rsp+50h] [rbp-18h]
  __int64 v13; // [rsp+58h] [rbp-10h]
  __int64 v14; // [rsp+60h] [rbp-8h]

  v14 = MEMORY[0x10E44FB0]();
  v13 = MEMORY[0x10E44FD8]();
  v12 = v11;
  if ( (unsigned int)MEMORY[0x10E44540](a1: v1, a2: v2, a3: v14, a4: v13, a5: v13, a6: v11) != 0 )
    return *(_QWORD *)v12;
  MEMORY[0x1828C1C40](a1: v3, a2: v4, a3: v0 + 371081208);
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
  return sub_18278A140(a1: v8, a2: v9, a3: v6, a4: v7, a5: v10);
}
