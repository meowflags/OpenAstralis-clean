// sub_1932C972C
// rva 0x132c972c  size 36  section .text  group text
// window base 0x1932c972c: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1932C972C(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  __int64 result; // rax

  result = sub_1932C9DF0(a1, a2);
  if ( (_DWORD)result != 0 && a4 == 0 )
    __atomic_exchange_n((volatile __int64 *)0x337DB8, 0, __ATOMIC_SEQ_CST);
  return result;
}
