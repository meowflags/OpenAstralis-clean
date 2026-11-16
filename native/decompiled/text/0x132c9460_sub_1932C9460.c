// sub_1932C9460
// rva 0x132c9460  size 57  section .text  group text
// window base 0x1932c9460: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
char sub_1932C9460()
{
  signed __int64 v0; // rcx
  signed __int64 v1; // rax

  if ( (unsigned int)sub_1932C9DF0() != 0 )
  {
    v0 = *(_QWORD *)(__readgsqword(0x30u) + 8);
    while ( 1 )
    {
      v1 = __sync_val_compare_and_swap((volatile signed __int64 *)0x337DB8, 0, v0);
      if ( v1 == 0 )
        break;
      if ( v0 == v1 )
        return 1;
    }
  }
  return 0;
}
