// sub_1932C9588
// rva 0x132c9588  size 48  section .text  group text
// window base 0x1932c9588: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1932C9588(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rdi
  __int64 v5; // rsi
  __int64 result; // rax

  if ( (unsigned int)sub_1932C9DF0(a1, a2) != 0 )
    return sub_1932CA2B1(a1: v4, a2: v5, a3: v2, a4: 3374536);
  result = sub_1932A4ED4(a1: v4, a2: v5, a3: v2, a4: v3);
  if ( (_DWORD)result == 0 )
    return sub_1932CA2BD();
  return result;
}
