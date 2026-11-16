// sub_1932AE6D0
// rva 0x132ae6d0  size 49  section .text  group text
// window base 0x1932ae6d0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1932AE6D0(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rdi
  __int64 v5; // rsi

  v2 = MEMORY[0x799E8](a1, a2, a3: 1, a4: 23, a5: 0);
  if ( v2 == -1 )
    return 0;
  MEMORY[0x79A00](a1: v4, a2: v5, a3: v3, a4: v2);
  return 1;
}
