// sub_1E9A700
// rva 0x01e9a700  size 246  section .text  group text
// window base 0x181e9a700: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
_BOOL8 __fastcall sub_1E9A700(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // r14
  __int64 v6; // rdi
  __int64 v7; // rsi
  BOOL v9; // [rsp+24h] [rbp-14h]

  sub_207FB60(a1, a2, a3: v5 + 376656712);
  while ( a3 == *(_QWORD *)(v5 + 376613824) && a5 == *(_QWORD *)(v5 + 376613832) )
    sub_207F720(a1: v6, a2: v7, a3: v5 + 376656744);
  v9 = *(_QWORD *)(v5 + 376613832) == a5;
  sub_207FC60(a1: v6, a2: v7, a3: v5 + 376656712);
  return v9;
}
