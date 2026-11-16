// sub_185042CA0
// rva 0x05042ca0  size 87  section .text  group text
// window base 0x185042ca0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_185042CA0(int a1, int a2, __int64 a3, int a4, __int64 a5, int a6)
{
  __int64 v6; // r14
  __int64 v7; // r15
  __int64 v8; // r8
  __int64 result; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rdi
  __int64 v13; // rsi
  char v14; // [rsp+0h] [rbp-18h] BYREF
  __int64 v15; // [rsp+8h] [rbp-10h]
  __int64 v16; // [rsp+10h] [rbp-8h]

  if ( (unsigned __int64)&v14 <= *(_QWORD *)(v7 + 8) )
  {
    v16 = a3;
    MEMORY[0x181EB84E0]();
    goto LABEL_6;
  }
  v8 = *(unsigned int *)(a3 + 4);
  if ( (_DWORD)v8 == 0 )
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
    return sub_185042D00();
  }
  v16 = a3;
  v15 = v6 + 8 * v8;
  result = sub_185049540(a1, a2, a3: (int)v6 + 8 * (int)v8, a4, a5: 1, a6, a7: v14);
  if ( *(int *)(v7 + 16) <= 0 )
    return MEMORY[0x18277F280](a1: v12, a2: v13, a3: v10, a4: v11, a5: v15);
  return result;
}
