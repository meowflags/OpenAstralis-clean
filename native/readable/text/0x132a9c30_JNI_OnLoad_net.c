// JNI_OnLoad_net
// rva 0x132a9c30  size 19  section .text  group text
// window base 0x1932a9c30: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall JNI_OnLoad_net(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // [rsp+0h] [rbp-28h]
  __int64 v8; // [rsp+8h] [rbp-20h]
  __int64 v9; // [rsp+10h] [rbp-18h]

  sub_132A9B24(a1, a2, a3, a4, a5, a6, a7: v7, a8: v8, a9: v9);
  return 65544;
}
