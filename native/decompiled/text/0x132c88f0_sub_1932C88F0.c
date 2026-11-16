// sub_1932C88F0
// rva 0x132c88f0  size 47  section .text  group text
// window base 0x1932c88f0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1932C88F0(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = MEMORY[0x3377B0];
  if ( MEMORY[0x3377B0] == 0 )
  {
    result = MEMORY[0x797C0](a1, a2, a3: 1, a4: 0, a5: 0, a6: 0);
    MEMORY[0x3377B0] = result;
  }
  return result;
}
