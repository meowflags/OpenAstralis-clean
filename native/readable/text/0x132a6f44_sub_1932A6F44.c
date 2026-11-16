// sub_132A6F44
// rva 0x132a6f44  size 58  section .text  group text
// window base 0x1932a6f44: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_132A6F44(int a1, int a2, int a3, __int64 a4)
{
  __int64 result; // rax
  __int64 v6; // rdi
  __int64 v7; // rsi

  result = JNU_NewObjectByName(a1, a2, a3: 535656, a4, a5: 535644, a6: a3);
  if ( result != 0 )
    return (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)a4 + 104LL))(
             a1: v6,
             a2: v7,
             a3: result,
             a4);
  return result;
}
