// JNU_ToString
// rva 0x132b15e0  size 67  section .text  group text
// window base 0x1932b15e0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall JNU_ToString(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  if ( a3 != 0 )
    return JNU_CallMethodByName(a1, a2, a3: 0, a4, a5: a3, a6: 543328);
  else
    return (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a4 + 1336LL))(a1, a2, a3: 543292);
}
