// sub_1815A8820
// rva 0x015a8820  size 103  section .text  group text
// window base 0x1815a8820: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1815A8820(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdi
  __int64 v5; // rsi

  if ( a3 == 0 )
    return 2;
  MEMORY[0x181EB6D20]();
  if ( __sync_val_compare_and_swap((volatile signed __int32 *)(a3 + 20), 3, 1) != 3 )
    MEMORY[0x18277F4A0](a1: v4, a2: v5, a3: 1, a4: 1, a5: 0);
  MEMORY[0x1827831A0]();
  return MEMORY[0x181EB7A60]();
}
