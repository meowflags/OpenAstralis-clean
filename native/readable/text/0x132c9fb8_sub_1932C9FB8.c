// sub_132C9FB8
// rva 0x132c9fb8  size 32  section .text  group text
// window base 0x1932c9fb8: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
void __fastcall __noreturn sub_132C9FB8(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdi
  __int64 v4; // rsi
  _BYTE v5[40]; // [rsp+20h] [rbp-28h] BYREF

  sub_1932C9EE8(a1, a2, a3, a4: v5);
  sub_1932CA1AF(a1: v3, a2: v4, a3: 3312416, a4: v5);
  __builtin_debugtrap();
}
