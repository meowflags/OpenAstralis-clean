// sub_181EB6C80
// rva 0x01eb6c80  size 75  section .text  group text
// window base 0x181eb6c80: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_181EB6C80(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r14

  if ( *(int *)(v4 + 376195596) < 2 )
    return 5;
  if ( MEMORY[0x182783440](a1, a2, a3: v4 + 376658176, a4, a5: 0) != 0 )
    return 0;
  return 4;
}
