// sub_15A01C0
// rva 0x015a01c0  size 115  section .text  group text
// window base 0x1815a01c0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
_BOOL8 __fastcall sub_15A01C0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // r14
  int v6; // eax
  __int64 v7; // rcx
  __int64 v8; // rdi
  __int64 v9; // rsi
  __int64 v11; // rcx
  __int64 v12; // rdi
  __int64 v13; // rsi

  v6 = sub_1EB6B00(a1: 0, a2, a3, a4, a5: 0, a6: 1);
  if ( v6 != 4 )
    return v6 == 0;
  sub_2839540(a1: v8, a2: v9, a3: a5, a4: v7, a5: 356, a6: 0);
  sub_1EB6D20();
  sub_1EB7820(a1: v12, a2: v13, a3: v5, a4: v11, a5);
  return true;
}
