// sub_4F41DA0
// rva 0x04f41da0  size 109  section .text  group text
// window base 0x184f41da0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_4F41DA0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // r14
  __int64 v6; // r15
  __int64 v8; // [rsp+0h] [rbp-8h] BYREF

  if ( (unsigned __int64)&v8 <= *(_QWORD *)(v6 + 8) )
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
    return sub_4F41E20();
  }
  else if ( a5 != v5 && *(_DWORD *)a5 >> 3 == 4288437 )
  {
    if ( *(int *)(v6 + 16) <= 0 )
      sub_277F280();
    return *(_BYTE *)(a5 + 4) == *(_BYTE *)(a3 + 4);
  }
  else
  {
    if ( *(int *)(v6 + 16) <= 0 )
      sub_277F280();
    return 0;
  }
}
