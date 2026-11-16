// sub_1EB7C00
// rva 0x01eb7c00  size 109  section .text  group text
// window base 0x181eb7c00: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 sub_1EB7C00()
{
  signed __int64 v0; // rax
  __int64 result; // rax

  v0 = __sync_val_compare_and_swap((volatile signed __int64 *)0x11703F98, 0, 1);
  if ( v0 != 0 )
  {
    if ( v0 == 1 )
    {
      do
        _mm_pause();
      while ( MEMORY[0x11703f98]/* 0x11703f98 */ == 1 );
    }
    return sub_1EB7C80();
  }
  else
  {
    result = sub_1EB7C80();
    MEMORY[0x11703f98]/* 0x11703f98 */ = 2;
    __faststorefence();
  }
  return result;
}
