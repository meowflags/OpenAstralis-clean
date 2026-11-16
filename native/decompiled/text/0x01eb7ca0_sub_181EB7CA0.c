// sub_181EB7CA0
// rva 0x01eb7ca0  size 166  section .text  group text
// window base 0x181eb7ca0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_181EB7CA0(int a1, int a2, __int64 a3, int a4, int a5, int a6)
{
  __int64 v6; // r14
  __int64 v7; // r15
  __int64 result; // rax
  __int64 v9; // rdi
  __int64 v10; // rsi
  unsigned int v11; // eax
  char v12; // [rsp+0h] [rbp-18h] BYREF
  __int64 v13; // [rsp+8h] [rbp-10h]
  unsigned int v14; // [rsp+14h] [rbp-4h]

  if ( (unsigned __int64)&v12 <= *(_QWORD *)(v7 + 8) )
  {
    v14 = a5;
    sub_181EB84E0(a1, a2, a3, a4, a5, a6, a7: v12);
    goto LABEL_11;
  }
  if ( a5 >= 0x10000 )
  {
    v14 = a5;
    v13 = a3;
    result = sub_181EB7D60();
    if ( *(int *)(v7 + 16) <= 0 )
      return MEMORY[0x18277F280](a1: v9, a2: v10, a3: v13);
    return result;
  }
  v14 = a5;
  if ( a3 == v6 )
  {
LABEL_11:
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
    return sub_181EB7D60();
  }
  v11 = *(_DWORD *)(v6
                  + 8LL * *(unsigned int *)(a3 + 20)
                  + (int)(4 * (*(_DWORD *)(a3 + 44) & (v14 >> HIBYTE(*(_DWORD *)(a3 + 44)))) + 12));
  if ( *(int *)(v7 + 16) <= 0 )
    v11 = MEMORY[0x18277F280]();
  return HIWORD(v11);
}
