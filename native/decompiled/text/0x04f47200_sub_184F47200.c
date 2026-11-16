// sub_184F47200
// rva 0x04f47200  size 111  section .text  group text
// window base 0x184f47200: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_184F47200(__int64 a1, __int64 a2, int a3, __int64 a4, int a5)
{
  __int64 v5; // r15
  __int64 v7; // [rsp+0h] [rbp-8h] BYREF

  if ( (unsigned __int64)&v7 <= *(_QWORD *)(v5 + 8) )
  {
    MEMORY[0x181EB84E0]();
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
    return sub_184F47280();
  }
  else if ( a5 <= a3 || a3 < 0 )
  {
    if ( *(int *)(v5 + 16) <= 0 )
      MEMORY[0x18277F280]();
    return 0;
  }
  else
  {
    if ( *(int *)(v5 + 16) <= 0 )
      MEMORY[0x18277F280]();
    if ( (unsigned int)(a5 - 2) < 0x23 )
    {
      if ( a3 < 10 )
        return (unsigned int)(a3 + 48);
      else
        return (unsigned __int16)(a3 + 87);
    }
    else
    {
      return 0;
    }
  }
}
