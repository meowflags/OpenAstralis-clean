// sub_181EBDAE0
// rva 0x01ebdae0  size 94  section .text  group text
// window base 0x181ebdae0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_181EBDAE0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r14
  __int64 v7; // r15
  __int64 result; // rax
  char v9; // [rsp+0h] [rbp-8h] BYREF

  if ( (unsigned __int64)&v9 <= *(_QWORD *)(v7 + 8) )
  {
    sub_181EB84E0(a1, a2, a3, a4, a5, a6, a7: v9);
    __builtin_debugtrap();
    __builtin_debugtrap();
    return sub_181EBDB40();
  }
  else
  {
    for ( result = MEMORY[0x185031B40](a1, a2, a3: v6 + 376658920);
          *(_QWORD *)(v6 + 376656976) == 0;
          result = MEMORY[0x1850327A0]() )
    {
      ;
    }
    if ( *(int *)(v7 + 16) <= 0 )
      return MEMORY[0x18277F280]();
  }
  return result;
}
