// NET_WinBind
// rva 0x132aefbc  size 62  section .text  group text
// window base 0x1932aefbc: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall NET_WinBind(__int64 a1, __int64 a2, __int64 a3, int a4, unsigned int a5, char a6)
{
  __int64 v6; // rdi
  __int64 v7; // rsi

  v6 = a5;
  v7 = a3;
  if ( a6 == 1 )
    sub_132AF004(a1: a5, a2: a3, a3, a4, a5, a6: 1);
  return NET_Bind(a1: v6, a2, a3: v7, a4, a5: (unsigned int)v6);
}
