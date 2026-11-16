// sub_1815ABAE0
// rva 0x015abae0  size 86  section .text  group text
// window base 0x1815abae0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1815ABAE0(int a1, int a2, __int64 a3, int a4, int a5, int a6, int a7, __int64 a8)
{
  __int64 v8; // r14
  __int64 v9; // r15
  __int64 v10; // rax
  __int64 result; // rax
  _QWORD v12[3]; // [rsp+0h] [rbp-18h] BYREF

  if ( (unsigned __int64)v12 <= *(_QWORD *)(v9 + 8) )
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
    return sub_1815ABB40();
  }
  else
  {
    *(_QWORD *)(a3 + 24) = 0;
    v10 = *(unsigned int *)(v9 + 72);
    if ( (_DWORD)v10 != 0 )
    {
      result = *(unsigned int *)(v8 + 8 * v10 + 72);
      v12[2] = a3;
      if ( (_DWORD)result != 0 )
        result = MEMORY[0x186360580]();
      if ( *(int *)(v9 + 16) <= 0 )
        return MEMORY[0x18277F280]();
    }
    else
    {
      return sub_1815ABB1A(a1, a2, a3, a4, a5, a6, a7, a8);
    }
  }
  return result;
}
