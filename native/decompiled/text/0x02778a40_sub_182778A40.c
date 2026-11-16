// sub_182778A40
// rva 0x02778a40  size 325  section .text  group text
// window base 0x182778a40: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_182778A40(
        int a1,
        int a2,
        __int64 a3,
        int a4,
        __int64 a5,
        int a6,
        int a7,
        int a8,
        int a9,
        __int64 a10,
        int a11,
        __int64 a12,
        __int64 a13,
        __int64 a14)
{
  if ( __sync_val_compare_and_swap((volatile signed __int32 *)(a3 + a5), 0, 1) != 0 )
    return sub_182778A61(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14);
  else
    return 1;
}
