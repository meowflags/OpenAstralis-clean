// sub_1815A8900
// rva 0x015a8900  size 140  section .text  group text
// window base 0x1815a8900: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 sub_1815A8900()
{
  unsigned int v0; // eax
  __int64 v1; // rdi
  __int64 v2; // rsi
  unsigned int v3; // ecx

  v0 = MEMORY[0x181EB6C20]();
  if ( v0 != 0 )
  {
    v3 = v0;
  }
  else if ( MEMORY[0x14] == 3 || MEMORY[0x14] == 2 )
  {
    v3 = 0;
    if ( __sync_val_compare_and_swap((volatile signed __int32 *)0x14, 3, 1) != 3 )
    {
      MEMORY[0x18277F4A0](a1: v1, a2: v2, a3: 1, a4: v0, a5: 0);
      v3 = 0;
    }
  }
  else
  {
    v3 = 0;
  }
  if ( v3 == 0 )
  {
    MEMORY[0x14] = 3;
    __faststorefence();
  }
  return 0;
}
