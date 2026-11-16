// sub_1E98980
// rva 0x01e98980  size 84  section .text  group text
// window base 0x181e98980: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
_QWORD *__fastcall sub_1E98980()
{
  _QWORD *v0; // r14
  _QWORD *result; // rax
  unsigned __int64 v2; // rcx
  _QWORD *v3; // rdx

  result = (_QWORD *)v0[47082074];
  if ( result != nullptr )
  {
    v2 = *result - result[4];
    if ( v2 >= v0[47082043] )
    {
      v3 = (_QWORD *)v0[47082075];
      if ( v3 == nullptr || *v3 - v3[4] <= v2 )
        v0[47082075] = result;
    }
  }
  return result;
}
