// sub_132CA8D4
// rva 0x132ca8d4  size 31  section .text  group text
// window base 0x1932ca8d4: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_132CA8D4(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rcx
  __int64 result; // rax

  v3 = *(_QWORD *)(a3 + 48);
  if ( v3 != 0 )
    return sub_1932C97D0(a1, a2, a3, a4: v3);
  return result;
}
