// sub_2779A60
// rva 0x02779a60  size 40  section .text  group text
// window base 0x182779a60: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_2779A60(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r15
  __int64 v5; // [rsp+0h] [rbp-8h] BYREF

  if ( (unsigned __int64)&v5 <= *(_QWORD *)(v3 + 8) )
  {
    sub_1EB83C0();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    return sub_2779AA0();
  }
  else
  {
    if ( *(int *)(v3 + 16) <= 0 )
      sub_277F280(a1, a2, a3);
    return *(_QWORD *)(a3 + 8);
  }
}
