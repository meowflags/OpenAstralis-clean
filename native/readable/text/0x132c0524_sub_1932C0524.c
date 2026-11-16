// sub_132C0524
// rva 0x132c0524  size 75  section .text  group text
// window base 0x1932c0524: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_132C0524(_DWORD a1, _DWORD a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rdi
  __int64 v8; // rsi
  __int64 v9; // r9
  __int64 v11; // [rsp+0h] [rbp-28h]

  if ( handleLseek(a1: a5, a2: a3, a3: a6, a4, a5: 0, a6, a7: v11) == -1 )
    return 0xFFFFFFFFLL;
  else
    return sub_132C04B8(a1: v7, a2: v8, a3: v8, a4, a5: v7, a6: v9);
}
