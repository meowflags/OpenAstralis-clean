// sub_181E986A0
// rva 0x01e986a0  size 75  section .text  group text
// window base 0x181e986a0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_181E986A0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, _QWORD *a6)
{
  __int64 v6; // r14
  __int64 v7; // rcx
  __int64 v8; // rdi
  __int64 v9; // rsi
  __int64 result; // rax

  sub_181E98980(a1, a2, a3: v6 + 376656584);
  result = sub_181E98700(a1: v8, a2: v9, a3: v6 + 376656584, a4: v7, a5);
  if ( result != 0 )
    *a6 = a5;
  return result;
}
