// sub_184F40AA0
// rva 0x04f40aa0  size 90  section .text  group text
// window base 0x184f40aa0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_184F40AA0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // r14
  __int64 v6; // r15
  unsigned int v7; // ebp
  __int64 v9; // [rsp+0h] [rbp-8h] BYREF

  if ( (unsigned __int64)&v9 <= *(_QWORD *)(v6 + 8) )
  {
    MEMORY[0x181EB84E0]();
  }
  else if ( a5 != v5 )
  {
    if ( *(unsigned __int8 *)(a5 + 4) == *(unsigned __int8 *)(a3 + 4) )
    {
      v7 = 0;
    }
    else
    {
      if ( *(_BYTE *)(a3 + 4) != 0 )
        JUMPOUT(0x309E56AD3LL);
      v7 = 0xFFFFFFFF;
    }
    if ( *(int *)(v6 + 16) <= 0 )
      MEMORY[0x18277F280]();
    return v7;
  }
  MEMORY[0x182771080]();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  return sub_184F40B00();
}
