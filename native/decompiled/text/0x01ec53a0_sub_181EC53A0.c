// sub_181EC53A0
// rva 0x01ec53a0  size 102  section .text  group text
// window base 0x181ec53a0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_181EC53A0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r14
  __int64 v7; // r15
  __int64 v8; // rax
  __int64 result; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rdi
  __int64 v13; // rsi
  __int64 v14; // r8
  char v15; // [rsp+0h] [rbp-18h] BYREF
  __int64 v16; // [rsp+8h] [rbp-10h]
  __int64 v17; // [rsp+10h] [rbp-8h]

  if ( (unsigned __int64)&v15 <= *(_QWORD *)(v7 + 8) )
  {
    sub_181EB84E0(a1, a2, a3, a4, a5, a6, a7: v15);
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
    return sub_181EC5420(a1: v12, a2: v13, a3: v10, a4: v11, a5: v14);
  }
  else
  {
    v8 = *(unsigned int *)(a3 + 8);
    if ( (_DWORD)v8 != 0 )
    {
      v17 = a5;
      v16 = a3;
      result = sub_181EB5100(a1, a2, a3: (_DWORD *)(v6 + 8 * v8), a4, a5, a6, a7: v15);
      if ( *(int *)(v7 + 16) <= 0 )
        return MEMORY[0x18277F280]();
    }
    else
    {
      v17 = a5;
      v16 = a3;
      if ( *(int *)(v7 + 16) <= 0 )
        MEMORY[0x18277F280]();
      return v6;
    }
  }
  return result;
}
