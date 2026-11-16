// sub_159FDE0
// rva 0x0159fde0  size 35  section .text  group text
// window base 0x18159fde0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
signed __int64 __fastcall sub_159FDE0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, signed __int64 a5)
{
  signed __int64 result; // rax

  result = __sync_val_compare_and_swap((volatile signed __int64 *)0x120019B8, 0, a5);
  if ( result != 0 )
    MEMORY[0x120019b8]/* 0x120019b8 */ = -1;
  return result;
}
