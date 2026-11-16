// sub_1932C9E10
// rva 0x132c9e10  size 60  section .text  group text
// window base 0x1932c9e10: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1932C9E10(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 i; // rbx
  __int64 result; // rax
  __int64 v6; // rdx
  __int64 v7; // rdi
  __int64 v8; // rsi

  for ( i = a4; ; a4 = i )
  {
    result = sub_1932CA1EB(a1, a2, a3, a4);
    if ( result != 0 )
      break;
    if ( (unsigned int)sub_1932CA2C3(a1: v7, a2: v8, a3: v6, a4: i) == 0 )
    {
      if ( i != -1 )
        sub_1932C9F98();
      sub_1932C9FB8();
    }
  }
  return result;
}
