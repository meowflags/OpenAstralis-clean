// sub_2780480
// rva 0x02780480  size 99  section .text  group text
// window base 0x182780480: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_2780480(__int64 a1, __int64 a2, __m128 a3)
{
  unsigned int *v3; // r14
  __int64 result; // rax
  double v5; // xmm0_8
  __int64 v6; // rax
  __int64 v7; // rdi
  __int64 v8; // rsi

  if ( v3[94167255] == 0 || v3[94167254] == 0 || (_DWORD)(result = v3[94167253]) == 0 )
  {
    while ( 1 )
    {
      *(_QWORD *)&v5 = sub_276E420(a1, a2, a3).m128i_u64[0];
      *(double *)a3.m128_u64 = sub_28C1D00(a1: v7, a2: v8, a3: v6, a4: v5);
    }
  }
  return result;
}
