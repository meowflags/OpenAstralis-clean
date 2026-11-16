// sub_502ED80
// rva 0x0502ed80  size 70  section .text  group text
// window base 0x18502ed80: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_502ED80(__int64 a1, __int64 a2, __int64 a3, __int64 a4, char a5)
{
  __int64 v5; // r14
  __int64 v6; // r15
  __int64 result; // rax
  int v8; // [rsp+0h] [rbp-8h] BYREF

  if ( (unsigned __int64)&v8 <= *(_QWORD *)(v6 + 8) )
  {
    sub_1EB84E0();
    goto LABEL_6;
  }
  result = *(unsigned int *)(a3 + 12);
  if ( (_DWORD)result == 0 )
  {
LABEL_6:
    sub_2771080();
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
    return sub_502EDE0();
  }
  *(_BYTE *)(v5 + 8 * result + 32) = MEMORY[0xe9691dc]/* 0xe9691dc */ & a5;
  __faststorefence();
  if ( *(int *)(v6 + 16) <= 0 )
    return sub_277F280();
  return result;
}
