// sub_4F40E20
// rva 0x04f40e20  size 56  section .text  group text
// window base 0x184f40e20: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_4F40E20(__int64 a1, __int64 a2, int a3, __int64 a4, int a5)
{
  __int64 v5; // r15
  __int64 v7; // [rsp+0h] [rbp-8h] BYREF

  if ( (unsigned __int64)&v7 <= *(_QWORD *)(v5 + 8) )
  {
    sub_1EB84E0();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    return sub_4F40E60();
  }
  else
  {
    if ( *(int *)(v5 + 16) <= 0 )
      sub_277F280();
    if ( a3 != 0 )
      JUMPOUT(0x309E56E44LL);
    return a5 != 0;
  }
}
