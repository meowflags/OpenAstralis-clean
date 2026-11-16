// sub_184F40CC0
// rva 0x04f40cc0  size 134  section .text  group text
// window base 0x184f40cc0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_184F40CC0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r14
  __int64 v4; // r15
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rdi
  __int64 v8; // rsi
  __int64 result; // rax
  __int64 v10; // [rsp+0h] [rbp-18h] BYREF
  __int64 v11; // [rsp+8h] [rbp-10h]
  __int64 v12; // [rsp+10h] [rbp-8h]

  if ( (unsigned __int64)&v10 <= *(_QWORD *)(v4 + 8) )
  {
    v12 = a3;
    MEMORY[0x181EB84E0]();
    goto LABEL_12;
  }
  if ( a3 != v3 )
  {
    v5 = *(unsigned int *)(a3 + 4);
    if ( (_DWORD)v5 != 0 )
    {
      if ( *(_DWORD *)(v3 + 8 * v5 + 8) != 0 )
      {
        v12 = a3;
        v11 = MEMORY[0x18502C0C0]();
        result = MEMORY[0x184FF2420](a1: v7, a2: v8, a3: v3 + 350970688, a4: v6, a5: v11);
      }
      else
      {
        result = 0;
        v12 = a3;
      }
      goto LABEL_6;
    }
LABEL_12:
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
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    return sub_184F40D60();
  }
  result = 0;
  v12 = a3;
LABEL_6:
  if ( *(int *)(v4 + 16) <= 0 )
    return MEMORY[0x18277F280]();
  return result;
}
