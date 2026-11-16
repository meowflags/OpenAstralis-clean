// sub_27782AA
// rva 0x027782aa  size 57  section .text  group text
// window base 0x1827782aa: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_27782AA(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        _QWORD *a8,
        __int64 a9,
        __int64 (*a10)(void))
{
  a8[5] = 0;
  a8[4] = 0;
  a8[6] = 0;
  return a10();
}
