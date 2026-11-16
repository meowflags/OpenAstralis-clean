// sub_181EB6B80
// rva 0x01eb6b80  size 148  section .text  group text
// window base 0x181eb6b80: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_181EB6B80(bool *a1, __int64 a2, __int64 a3, __int64 a4, int a5, unsigned int a6)
{
  __int64 v6; // r14
  __int64 v7; // rax
  __int64 v8; // rsi

  if ( *(int *)(v6 + 376195596) < 2 )
    return 5;
  v7 = MEMORY[0x182783440](a1, a2, a3: v6 + 376658176, a4, a5: a6);
  if ( a1 != nullptr )
    *a1 = v7 != 0;
  if ( v7 != 0 )
    return 0;
  if ( a5 != 0 )
    return sub_181EB6580((__int64)a1, a2: v8, a3);
  return 4;
}
