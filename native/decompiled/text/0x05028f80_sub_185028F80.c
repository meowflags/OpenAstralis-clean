// sub_185028F80
// rva 0x05028f80  size 75  section .text  group text
// window base 0x185028f80: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_185028F80(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // r14
  __int64 v6; // r15
  __int64 result; // rax
  _QWORD v8[2]; // [rsp+0h] [rbp-18h] BYREF
  __int64 v9; // [rsp+10h] [rbp-8h]

  if ( (unsigned __int64)v8 <= *(_QWORD *)(v6 + 8) )
  {
    v9 = a3;
    MEMORY[0x181EB84E0]();
  }
  else if ( a5 != v5 )
  {
    v9 = a3;
    v8[1] = a5;
    result = MEMORY[0x184FA4B80](a1, a2, a3: a5);
    if ( *(int *)(v6 + 16) <= 0 )
      return MEMORY[0x18277F280]();
    return result;
  }
  MEMORY[0x182771080]();
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
  return sub_185028FE0();
}
