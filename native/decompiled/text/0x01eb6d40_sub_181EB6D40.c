// sub_181EB6D40
// rva 0x01eb6d40  size 49  section .text  group text
// window base 0x181eb6d40: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 sub_181EB6D40()
{
  unsigned int v0; // eax
  unsigned int v2; // [rsp+Ch] [rbp-Ch]

  v0 = sub_181EB6D80();
  if ( v0 == 0 )
    return 0;
  v2 = v0;
  sub_181EB7A60();
  return v2;
}
