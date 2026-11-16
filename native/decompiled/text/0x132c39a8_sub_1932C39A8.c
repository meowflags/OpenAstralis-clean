// sub_1932C39A8
// rva 0x132c39a8  size 47  section .text  group text
// window base 0x1932c39a8: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1932C39A8(__int64 a1, __int64 a2)
{
  __int64 v2; // r8
  __int64 v3; // r9
  __int64 v4; // rax

  if ( (unsigned int)sub_1932C39D8(a1, a2) != 0 )
    return 4294967294LL;
  v4 = *(_QWORD *)(v2 + 40);
  if ( *(_DWORD *)(v4 + 44) != 2 )
    return 4294967294LL;
  *(_QWORD *)(v4 + 48) = v3;
  return 0;
}
