// sub_184F19340
// rva 0x04f19340  size 75  section .text  group text
// window base 0x184f19340: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_184F19340(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r14
  __int64 v4; // r15
  __int64 v5; // rax
  __int64 result; // rax
  __int64 v7; // [rsp+0h] [rbp-18h] BYREF
  __int64 v8; // [rsp+10h] [rbp-8h]

  if ( (unsigned __int64)&v7 <= *(_QWORD *)(v4 + 8) )
  {
    v8 = a3;
    MEMORY[0x181EB84E0]();
    goto LABEL_6;
  }
  v5 = *(unsigned int *)(a3 + 12);
  if ( (_DWORD)v5 == 0 )
  {
LABEL_6:
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
    return sub_184F193A0();
  }
  v8 = a3;
  result = MEMORY[0x18C8BA3C0](a1, a2, a3: v3 + 8 * v5);
  if ( *(int *)(v4 + 16) <= 0 )
    return MEMORY[0x18277F280]();
  return result;
}
