// sub_132C9924
// rva 0x132c9924  size 35  section .text  group text
// window base 0x1932c9924: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_132C9924(__int64 a1, __int64 a2, int a3)
{
  if ( a3 == 1 && __imp_KERNEL32.dll!DisableThreadLibraryCalls == 0 )
    MEMORY[0x79568]/* 0x79568 */();
  return 1;
}
