// sub_159D8A0
// rva 0x0159d8a0  size 98  section .text  group text
// window base 0x18159d8a0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
_BOOL8 __fastcall sub_159D8A0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r14
  _QWORD *i; // rax

  i = *(_QWORD **)(v3 + 376178840);
  if ( i != nullptr && i[9] <= (unsigned __int64)(a3 - i[10]) )
  {
    for ( i = (_QWORD *)i[20]; i != nullptr && i[9] <= (unsigned __int64)(a3 - i[10]); i = (_QWORD *)i[20] )
      ;
  }
  return i != nullptr;
}
