// sub_278A960
// rva 0x0278a960  size 433  section .text  group text
// window base 0x18278a960: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_278A960(
        int a1,
        int a2,
        int a3,
        int a4,
        __int64 a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13,
        int a14,
        int a15,
        int a16,
        int a17,
        int a18,
        int a19,
        __int64 a20,
        __int64 a21,
        int a22,
        __int64 a23,
        __int64 a24)
{
  if ( a5 == 0 )
    return 0;
  if ( MEMORY[0x10e443d0]/* 0x10e443d0 */ != 0 )
    JUMPOUT(0x18278A99FLL);
  return sub_18278AA36(
           a1,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           a9,
           a10,
           a11,
           a12,
           a13,
           a14,
           a15,
           a16,
           a17,
           a18,
           a19,
           a20,
           a21,
           a22,
           a23,
           a24);
}
