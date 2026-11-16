// sub_181ED3F20
// rva 0x01ed3f20  size 236  section .text  group text
// window base 0x181ed3f20: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
_DWORD *__fastcall sub_181ED3F20(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  _DWORD *v6; // r14
  __int64 v7; // r15
  _DWORD *result; // rax
  char v9; // [rsp+0h] [rbp-18h] BYREF
  __int64 v10; // [rsp+10h] [rbp-8h]

  if ( (unsigned __int64)&v9 <= *(_QWORD *)(v7 + 8) )
  {
    sub_181EB84E0(a1, a2, a3, a4, a5, a6, a7: v9);
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
    return (_DWORD *)sub_181ED4020();
  }
  else
  {
    v10 = a3;
    result = (_DWORD *)sub_181ED4E60(a1, a2, a3: (int)v6 + 376659936, a4, a5: a3, a6: (_DWORD)v6, a7: v9);
    if ( result != v6 && *result >> 3 == 4262015 )
    {
      if ( *(int *)(v7 + 16) <= 0 )
        return (_DWORD *)MEMORY[0x18277F280]();
    }
    else
    {
      if ( *(int *)(v7 + 16) <= 0 )
        MEMORY[0x18277F280]();
      return v6;
    }
  }
  return result;
}
