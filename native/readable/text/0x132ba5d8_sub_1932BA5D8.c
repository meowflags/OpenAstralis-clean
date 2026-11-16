// sub_132BA5D8
// rva 0x132ba5d8  size 37  section .text  group text
// window base 0x1932ba5d8: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_132BA5D8(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        int a8,
        __int64 a9,
        __int64 a10)
{
  a10 = a6;
  return (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, __int64, __int64 *))(*(_QWORD *)a4 + 232LL))(
           a1,
           a2,
           a3,
           a4,
           a5,
           a6: &a10);
}
