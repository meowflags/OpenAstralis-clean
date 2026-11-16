// sub_1329EB70
// rva 0x1329eb70  size 84  section .text  group text
// window base 0x19329eb70: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1329EB70(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10)
{
  __int64 v10; // rbx
  __int64 v11; // rdi
  __int64 v12; // rsi
  _QWORD *v13; // rax
  __int64 v14; // rdi
  __int64 v15; // rsi

  a8 = a3;
  a9 = a5;
  a10 = a6;
  v10 = sub_1932CA21B(a1: a4, a2: &a8, a3, a4: 0);
  v13 = (_QWORD *)sub_19329F4F0(a1: v11, a2: v12);
  return sub_1932CA257(a1: v14, a2: v15, a3: v10, a4: *v13 | 1LL, a5: v14, a6: 0);
}
