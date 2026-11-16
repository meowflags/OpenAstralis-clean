// run_main
// rva 0x01e2daa0  size 484  section .text  group text
// window base 0x181e2daa0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall run_main(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  return MEMORY[0x181595480](a1, a2, a3: (unsigned int)a4, a4, a5: a3);
}
