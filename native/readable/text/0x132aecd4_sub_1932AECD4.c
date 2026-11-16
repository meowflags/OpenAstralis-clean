// sub_132AECD4
// rva 0x132aecd4  size 45  section .text  group text
// window base 0x1932aecd4: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_132AECD4(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // rax
  __int64 v6; // rdi
  __int64 v7; // rsi
  unsigned int v8; // ebx

  v5 = __imp_WS2_32.dll!#23(a1, a2, a3, a4, a5);
  v8 = v5;
  if ( v5 != -1 )
    __imp_KERNEL32.dll!SetHandleInformation(a1: v6, a2: v7, a3: 1, a4: v5);
  return v8;
}
