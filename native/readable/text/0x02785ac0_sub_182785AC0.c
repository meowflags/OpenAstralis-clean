// sub_2785AC0
// rva 0x02785ac0  size 538  section .text  group text
// window base 0x182785ac0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_2785AC0(
        int a1,
        int a2,
        __int64 a3,
        __int64 a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        int a14,
        __int64 a15,
        __int64 a16,
        __int64 a17,
        __int64 a18,
        __int64 a19,
        __int64 a20)
{
  __int64 result; // rax

  result = MEMORY[0x10e442c0]/* 0x10e442c0 */;
  if ( MEMORY[0x10e442c0]/* 0x10e442c0 */ == 0 )
  {
    if ( MEMORY[0x10e44cb8]/* 0x10e44cb8 */ != 0 )
      return MEMORY[0x10e44cb8]/* 0x10e44cb8 */;
    else
      return sub_182785AEF(
               a1,
               a2,
               a3: 283397304,
               a4: 0,
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
               a20);
  }
  return result;
}
