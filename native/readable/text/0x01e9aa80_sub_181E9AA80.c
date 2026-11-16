// sub_1E9AA80
// rva 0x01e9aa80  size 79  section .text  group text
// window base 0x181e9aa80: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1E9AA80(__int64 a1, __int64 a2)
{
  __int64 v2; // r14
  __int64 v3; // rdi
  __int64 v4; // rsi
  __int64 v5; // rdx
  __int64 v7; // [rsp+10h] [rbp-8h]

  sub_207FB60(a1, a2, a3: v2 + 376656712);
  v5 = *(unsigned int *)(v2 + 376613812);
  if ( (_DWORD)v5 != 0 )
    *(_DWORD *)(v2 + 376613812) = 0;
  v7 = v2 + 8 * v5;
  sub_207FC60(a1: v3, a2: v4, a3: v2 + 376656712);
  return v7;
}
