// Java_java_util_zip_Inflater_initIDs
// rva 0x132c15d8  size 106  section .text  group text
// window base 0x1932c15d8: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall Java_java_util_zip_Inflater_initIDs(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  __int64 v6; // rdi
  __int64 v7; // rsi

  result = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, __int64, __int64))(*(_QWORD *)a4 + 752LL))(
             a1: a3,
             a2,
             a3,
             a4,
             a5: 548480,
             a6: 535012);
  MEMORY[0x3377A0] = result;
  if ( result != 0 )
  {
    result = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, __int64, __int64))(*(_QWORD *)a4 + 752LL))(
               a1: v6,
               a2: v7,
               a3: v6,
               a4,
               a5: 548496,
               a6: 535012);
    MEMORY[0x3377A8] = result;
  }
  return result;
}
