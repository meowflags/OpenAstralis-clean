// sub_1596440
// rva 0x01596440  size 157  section .text  group text
// window base 0x181596440: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
void __fastcall __spoils<> sub_1596440(
        __int64 a1,
        __int64 a2,
        __int16 *a3,
        __int64 a4,
        __int16 *a5,
        unsigned __int64 a6)
{
  unsigned __int64 i; // rax
  unsigned __int64 j; // rax

  if ( a5 > a3 )
  {
    if ( a6 != 0 )
    {
      *(__int16 *)((char *)a5 + a6 - 2) = __builtin_bswap32(*(__int16 *)((char *)a3 + a6 - 2)) >> 16;
      for ( i = a6 - 2; i != 0; i -= 2LL )
        *(__int16 *)((char *)a5 + i - 2) = __builtin_bswap32(*(__int16 *)((char *)a3 + i - 2)) >> 16;
    }
  }
  else if ( a6 != 0 )
  {
    *a5 = __builtin_bswap32(*a3) >> 16;
    for ( j = 2; a6 > j; j += 2LL )
      a5[j / 2] = __builtin_bswap32(a3[j / 2]) >> 16;
  }
}
