// sub_1932A11B8
// rva 0x132a11b8  size 44  section .text  group text
// window base 0x1932a11b8: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1932A11B8(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, char a7)
{
  return (*(unsigned int (__fastcall **)(__int64, __int64, char *, __int64, __int64))(*(_QWORD *)a4 + 48LL))(
           a1,
           a2,
           a3: &a7,
           a4,
           a5: 65538) != 0
       ? -3
       : 65538;
}
