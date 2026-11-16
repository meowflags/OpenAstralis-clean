// sub_184F48B40
// rva 0x04f48b40  size 83  section .text  group text
// window base 0x184f48b40: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_184F48B40(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r15
  __int64 v4; // rcx
  __int64 v6; // [rsp+0h] [rbp-8h] BYREF

  if ( (unsigned __int64)&v6 <= *(_QWORD *)(v3 + 8) )
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
    return sub_184F48BA0();
  }
  else
  {
    if ( (int)a3 < 160 )
    {
      if ( (int)a3 < 127 )
      {
        if ( (a3 & 0xFFFFFFE0) != 0 )
          JUMPOUT(0x309E5EB84LL);
        v4 = 1;
      }
      else
      {
        v4 = 1;
      }
    }
    else
    {
      v4 = 0;
    }
    if ( *(int *)(v3 + 16) <= 0 )
      MEMORY[0x18277F280](a1, a2, a3, a4: v4);
    return (unsigned int)v4;
  }
}
