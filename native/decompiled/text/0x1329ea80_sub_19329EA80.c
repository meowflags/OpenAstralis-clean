// sub_19329EA80
// rva 0x1329ea80  size 68  section .text  group text
// window base 0x19329ea80: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_19329EA80(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        __int64 a8,
        __int64 a9,
        __int64 a10)
{
  _QWORD *v11; // rax
  __int64 v12; // rdi
  __int64 v13; // rsi

  a9 = a5;
  a10 = a6;
  v11 = (_QWORD *)sub_19329F4F0(a1: a3, a2: &a9);
  return sub_1932CA257(a1: v12, a2: v13, a3: a4, a4: *v11, a5: v12, a6: 0);
}
