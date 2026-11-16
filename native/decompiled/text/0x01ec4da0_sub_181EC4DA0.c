// sub_181EC4DA0
// rva 0x01ec4da0  size 110  section .text  group text
// window base 0x181ec4da0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_181EC4DA0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r14
  __int64 v7; // r15
  __int64 v8; // r8
  __int64 v9; // r8
  __int64 result; // rax
  char v11; // [rsp+0h] [rbp-18h] BYREF
  __int64 v12; // [rsp+10h] [rbp-8h]

  if ( (unsigned __int64)&v11 <= *(_QWORD *)(v7 + 8) )
  {
    v12 = a3;
    sub_181EB84E0(a1, a2, a3, a4, a5, a6, a7: v11);
  }
  else if ( a3 != v6 )
  {
    v8 = *(unsigned int *)(a3 + 28);
    if ( (_DWORD)v8 == 0 )
    {
LABEL_9:
      v12 = a3;
      MEMORY[0x182771080]();
      goto LABEL_10;
    }
    v9 = *(unsigned int *)(v6 + 8 * v8 + 44);
    if ( (_DWORD)v9 == 0 )
    {
LABEL_10:
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
      return sub_181EC4E20();
    }
    v12 = a3;
    result = MEMORY[0x1815ABC60](a1, a2, a3: v6 + 8 * v9, a4, a5: a3);
    if ( *(int *)(v7 + 16) <= 0 )
      return MEMORY[0x18277F280]();
    return result;
  }
  MEMORY[0x182771080]();
  goto LABEL_9;
}
