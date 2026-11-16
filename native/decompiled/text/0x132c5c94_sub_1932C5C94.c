// sub_1932C5C94
// rva 0x132c5c94  size 43  section .text  group text
// window base 0x1932c5c94: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 sub_1932C5C94()
{
  __int64 v0; // rcx
  __int64 v2; // rax

  if ( (unsigned int)sub_1932C5EA0() != 0 )
    return 4294967294LL;
  v2 = *(_QWORD *)(v0 + 40);
  *(_QWORD *)(v2 + 52) = 0;
  *(_DWORD *)(v2 + 60) = 0;
  return sub_1932C5D5C();
}
