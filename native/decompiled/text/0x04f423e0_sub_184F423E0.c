// sub_184F423E0
// rva 0x04f423e0  size 70  section .text  group text
// window base 0x184f423e0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_184F423E0(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // r14
  __int64 v4; // r15
  __int64 v5; // rax
  __int64 v7; // [rsp+0h] [rbp-8h] BYREF

  if ( (unsigned __int64)&v7 <= *(_QWORD *)(v4 + 8) )
  {
    MEMORY[0x181EB84E0]();
    goto LABEL_7;
  }
  v5 = (unsigned int)(a3 + 128);
  if ( (unsigned int)v5 >= 0x100 )
  {
LABEL_7:
    MEMORY[0x182770B00]();
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
    __builtin_debugtrap();
    __builtin_debugtrap();
    return sub_184F42440();
  }
  if ( *(int *)(v4 + 16) <= 0 )
    v5 = MEMORY[0x18277F280]();
  return v3 + 8LL * *(unsigned int *)(v3 + 4 * v5 + 376354740);
}
