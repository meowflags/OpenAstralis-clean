// sub_1932BE404
// rva 0x132be404  size 69  section .text  group text
// window base 0x1932be404: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1932BE404(_DWORD a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  __int64 v4; // rdi
  int v5; // esi

  v3 = sub_1932C97D8(a1: a3, a2, a3: 560952);
  if ( v3 == 0 )
    JNU_ThrowByName(a1: v4, a2: v5, a3: 538568, a4: v4, a5: 545560);
  return v3;
}
