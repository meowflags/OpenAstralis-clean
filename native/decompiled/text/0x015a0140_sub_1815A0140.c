// sub_1815A0140
// rva 0x015a0140  size 109  section .text  group text
// window base 0x1815a0140: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1815A0140(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v6; // rdi
  __int64 v7; // rsi

  if ( MEMORY[0x120019B8] != -1 )
    return sub_1815A01C0(a1, a2, a3: MEMORY[0x120019B8]);
  if ( (unsigned int)sub_1815A02C0() != 0 )
    return 1;
  return sub_1815A0240(a1: v6, a2: v7, a3, a4: a5);
}
