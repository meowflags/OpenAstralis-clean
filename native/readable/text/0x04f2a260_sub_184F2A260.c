// sub_4F2A260
// rva 0x04f2a260  size 47  section .text  group text
// window base 0x184f2a260: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_4F2A260(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5)
{
  __int64 v5; // r15
  __int64 result; // rax
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
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    return sub_4F2A2A0();
  }
  else
  {
    result = MEMORY[0xea6e11c]/* 0xea6e11c */ & a5;
    *(_BYTE *)(a3 + 48) = MEMORY[0xea6e11c]/* 0xea6e11c */ & a5;
    if ( *(int *)(v5 + 16) <= 0 )
      return sub_277F280();
  }
  return result;
}
