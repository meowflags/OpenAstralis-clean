// sub_184F2FB00
// rva 0x04f2fb00  size 134  section .text  group text
// window base 0x184f2fb00: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_184F2FB00(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // r14
  __int64 v6; // r15
  unsigned int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rdi
  __int64 v11; // rsi
  __int64 result; // rax
  __int64 v13; // [rsp+0h] [rbp-28h] BYREF
  __int64 v14; // [rsp+10h] [rbp-18h]
  __int64 v15; // [rsp+18h] [rbp-10h]
  unsigned int v16; // [rsp+24h] [rbp-4h]

  v15 = a5;
  if ( (unsigned __int64)&v13 <= *(_QWORD *)(v6 + 8) )
  {
    v14 = a3;
    MEMORY[0x181EB84E0]();
    goto LABEL_10;
  }
  v14 = a3;
  v7 = sub_184F31A20(a1, a2, a3, a4: a5);
  if ( v7 != 3 )
  {
    v16 = v7;
    result = v5;
    goto LABEL_4;
  }
  if ( v15 == v5 )
  {
LABEL_10:
    MEMORY[0x182771080](a1: v10, a2: v11, a3: v14);
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
    return sub_184F2FBA0();
  }
  v16 = 3;
  result = MEMORY[0x184FFD140](a1: v10, a2: v11, a3: v15, a4: v9, a5: 0, a6: 2);
LABEL_4:
  if ( *(int *)(v6 + 16) <= 0 )
    return MEMORY[0x18277F280](a1: v10, a2: v11, a3: v8, a4: v16);
  return result;
}
