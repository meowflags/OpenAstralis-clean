// sub_1827785C0
// rva 0x027785c0  size 40  section .text  group text
// window base 0x1827785c0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1827785C0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  int v6; // r14d
  __int64 v7; // rcx
  __int64 v8; // rdi
  __int64 v9; // rsi
  int vars0; // [rsp+8h] [rbp+0h] BYREF
  __int64 vars10; // [rsp+18h] [rbp+10h]
  __int64 vars18; // [rsp+20h] [rbp+18h]
  __int64 vars20; // [rsp+28h] [rbp+20h]
  __int64 (*vars28)(void); // [rsp+30h] [rbp+28h]
  __int64 vars30; // [rsp+38h] [rbp+30h]

  vars20 = a6;
  vars30 = a5;
  vars28 = (__int64 (*)(void))sub_182778520(
                                a1: a6,
                                a2,
                                a3: v6 + 376668416,
                                a4: vars30,
                                a5: a3,
                                a6: vars30,
                                a7: vars0,
                                a8: (__int64)&vars0,
                                a9: vars10,
                                a10: a3);
  sub_182778640(a1: v8, a2: v9, a3: vars18, a4: v7, a5: vars28, a6: vars30);
  vars30 = (__int64)vars28;
  return vars28();
}
