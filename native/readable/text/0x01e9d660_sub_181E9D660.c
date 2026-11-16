// sub_1E9D660
// rva 0x01e9d660  size 92  section .text  group text
// window base 0x181e9d660: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1E9D660(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        __int64 a8,
        int a9,
        __int64 a10)
{
  __int64 v10; // r14
  __int64 v11; // rcx
  __int64 v12; // rdi
  __int64 v13; // rsi

  if ( a5 == v10 )
    return sub_181E9D6A2(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
  sub_1E9FF80(a1, a2, a3: a5, a4, a5: a3);
  if ( a6 == v10 )
    JUMPOUT(0x181E9D6ACLL);
  return sub_1E9FB20(a1: v12, a2: v13, a3: a6, a4: v11, a5: a3);
}
