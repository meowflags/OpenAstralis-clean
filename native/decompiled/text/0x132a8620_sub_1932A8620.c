// sub_1932A8620
// rva 0x132a8620  size 56  section .text  group text
// window base 0x1932a8620: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1932A8620(__int64 a1, __int64 a2)
{
  if ( MEMORY[0x3374C8] != 0 )
    return 0;
  else
    return (unsigned int)((unsigned int)MEMORY[0x797E0](a1, a2, a3: sub_1932A8658, a4: 3372240, a5: 0, a6: 0) != 0) - 1;
}
