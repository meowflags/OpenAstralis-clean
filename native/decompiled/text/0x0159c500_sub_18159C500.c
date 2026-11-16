// sub_18159C500
// rva 0x0159c500  size 102  section .text  group text
// window base 0x18159c500: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_18159C500(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r14
  __int64 v7; // r15
  __int64 result; // rax
  __int64 v9; // rdx
  __int64 v10; // rdi
  __int64 v11; // rsi
  _QWORD v12[4]; // [rsp+0h] [rbp-38h] BYREF
  BOOL v13; // [rsp+20h] [rbp-18h]
  int v14; // [rsp+24h] [rbp-14h]
  __int64 v15; // [rsp+28h] [rbp-10h]
  int v16; // [rsp+34h] [rbp-4h]

  if ( (unsigned __int64)v12 <= *(_QWORD *)(v7 + 8) )
  {
    MEMORY[0x181EB83C0]();
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
    return sub_18159C580();
  }
  else
  {
    v16 = a1;
    v15 = a6;
    v12[3] = a3;
    v14 = a2;
    v13 = (int)a2 < 2;
    v12[2] = a5;
    result = MEMORY[0x182781AC0](a1, a2, a3: v6 + 376613312, a4: (int)a2 < 2, a5, a6: (int)a2 < 2);
    if ( *(int *)(v7 + 16) <= 0 )
      return MEMORY[0x18277F280](a1: v10, a2: v11, a3: v9, a4: v13);
  }
  return result;
}
