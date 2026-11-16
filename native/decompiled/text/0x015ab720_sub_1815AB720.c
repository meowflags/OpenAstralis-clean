// sub_1815AB720
// rva 0x015ab720  size 102  section .text  group text
// window base 0x1815ab720: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
void __fastcall sub_1815AB720()
{
  __int64 v0; // r14
  int v1; // eax
  __int64 v2; // rdi
  __int64 v3; // rsi

  if ( MEMORY[0x12001E80] == 0 )
  {
    v1 = MEMORY[0x12001ED0]();
    if ( v1 == 1 )
    {
      MEMORY[0x12001E80] = 1;
    }
    else if ( v1 == 2 )
    {
      MEMORY[0x12001E80] = 2;
    }
    else
    {
      MEMORY[0x1828C1C40](a1: v2, a2: v3, a3: v0 + 369029016);
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
      sub_1815AB7A0();
    }
  }
}
