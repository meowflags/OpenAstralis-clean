// sub_1815ACB20
// rva 0x015acb20  size 77  section .text  group text
// window base 0x1815acb20: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1815ACB20(int a1, int a2, __int64 a3, int a4, int a5, int a6, int a7, __int64 a8)
{
  __int64 v8; // r14
  __int64 v9; // r15
  __int64 result; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rdi
  __int64 v14; // rsi
  __int64 v15; // r8
  __int64 v16; // [rsp+0h] [rbp-18h] BYREF

  if ( (unsigned __int64)&v16 <= *(_QWORD *)(v9 + 8) )
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
    __builtin_debugtrap();
    __builtin_debugtrap();
    return sub_1815ACB80(a1: v13, a2: v14, a3: v11, a4: v12, a5: v15);
  }
  else
  {
    result = *(unsigned int *)(v9 + 72);
    if ( (_DWORD)result != 0 && (_DWORD)(result = *(unsigned int *)(v8 + 8 * result + 72)) != 0 )
    {
      return sub_1815ACB4B(a1, a2, a3, a4, a5, a6, a7, a8);
    }
    else
    {
      *(_QWORD *)(a3 + 24) = v9;
      if ( *(int *)(v9 + 16) <= 0 )
        return MEMORY[0x18277F280]();
    }
  }
  return result;
}
