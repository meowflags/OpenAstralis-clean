// sub_277F600
// rva 0x0277f600  size 92  section .text  group text
// window base 0x18277f600: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_277F600(__int64 a1, __int64 a2)
{
  __int64 v2; // r14
  __int64 v3; // r15
  __int64 result; // rax
  __int64 v5; // rdi
  __int64 v6; // rsi

  for ( result = sub_207FB60(a1, a2, a3: v2 + 376668752); *(int *)(v3 + 332) >= 1; result = v2 + 376668848 )
    sub_207F720(a1: v5, a2: v6, a3: v2 + 376668848);
  return result;
}
