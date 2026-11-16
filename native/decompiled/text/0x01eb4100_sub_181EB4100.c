// sub_181EB4100
// rva 0x01eb4100  size 427  section .text  group text
// window base 0x181eb4100: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_181EB4100(int a1, int a2, __int64 a3, int a4, __int64 a5, int a6, __int64 a7, __int64 a8)
{
  __int64 v8; // r14
  __int64 v9; // r15
  __int64 result; // rax
  char v11; // [rsp+0h] [rbp-18h] BYREF

  if ( (unsigned __int64)&v11 <= *(_QWORD *)(v9 + 8) )
  {
    sub_181EB84E0(a1, a2, a3, a4, a5, a6, a7: v11);
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
    return sub_181EB42C0();
  }
  else if ( a5 == a3 )
  {
    if ( *(int *)(v9 + 16) <= 0 )
      MEMORY[0x18277F280]();
    return 1;
  }
  else if ( a5 == v8 || *(_DWORD *)a5 >> 3 != 5058276 )
  {
    if ( *(int *)(v9 + 16) <= 0 )
      MEMORY[0x18277F280]();
    return 0;
  }
  else if ( *(_BYTE *)(a3 + 20) == *(_BYTE *)(a5 + 20) )
  {
    return sub_181EB417B(a1, a2, a3, a4, a5, a6, a7, a8);
  }
  else
  {
    result = 0;
    if ( *(int *)(v9 + 16) <= 0 )
      return MEMORY[0x18277F280]();
  }
  return result;
}
