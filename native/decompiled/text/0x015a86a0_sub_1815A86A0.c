// sub_1815A86A0
// rva 0x015a86a0  size 32  section .text  group text
// window base 0x1815a86a0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1815A86A0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // r14
  __int64 v6; // rax

  v6 = *(unsigned int *)(a5 + 8);
  if ( (unsigned int)v6 < 4 )
    return *(unsigned int *)(v5 + 8 * v6 + 376614216);
  MEMORY[0x18276F0E0]();
  return sub_1815A86C0();
}
