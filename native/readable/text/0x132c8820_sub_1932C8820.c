// sub_132C8820
// rva 0x132c8820  size 70  section .text  group text
// window base 0x1932c8820: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_132C8820(_DWORD a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  __int64 v6; // rdi
  __int64 v7; // rsi

  if ( a3 == 0 )
    return 0;
  result = sub_1329D840(a1: a4, a2, a3, a4: a3);
  if ( result == 0 )
    return __imp_KERNEL32.dll!GetProcAddress(a1: v6, a2: v7, a3, a4: v6);
  return result;
}
