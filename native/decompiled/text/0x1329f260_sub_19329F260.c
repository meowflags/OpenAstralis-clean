// sub_19329F260
// rva 0x1329f260  size 67  section .text  group text
// window base 0x19329f260: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_19329F260(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *v4; // rax
  __int64 v5; // rdi
  __int64 v6; // rsi

  v4 = (_QWORD *)sub_19329F4F0(a1: a3, a2: a4);
  return sub_1932CA239(a1: v5, a2: v6, a3: v6, a4: *v4, a5: v5, a6: 0);
}
