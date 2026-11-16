// sub_1329F0B0
// rva 0x1329f0b0  size 77  section .text  group text
// window base 0x19329f0b0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1329F0B0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  __int64 v5; // rdi
  __int64 v6; // rsi
  _QWORD *v7; // rax
  __int64 v8; // rdi
  __int64 v9; // rsi

  v4 = sub_1932CA21B(a1: a3, a2: a4, a3, a4: 1);
  v7 = (_QWORD *)sub_19329DC40(a1: v5, a2: v6);
  return sub_1932CA233(a1: v8, a2: v9, a3: v4, a4: *v7, a5: v9, a6: 0);
}
