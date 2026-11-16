// sub_1815A2B40
// rva 0x015a2b40  size 102  section .text  group text
// window base 0x1815a2b40: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1815A2B40(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // r14
  __int64 v6; // r15
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rdi
  __int64 v11; // rsi
  __int64 v13; // [rsp+0h] [rbp-28h] BYREF
  __int64 v14; // [rsp+10h] [rbp-18h]
  __int64 v15; // [rsp+18h] [rbp-10h]
  __int64 v16; // [rsp+20h] [rbp-8h]

  if ( (unsigned __int64)&v13 <= *(_QWORD *)(v6 + 8) )
  {
    v14 = a5;
    v16 = a3;
    MEMORY[0x181EB84E0]();
    goto LABEL_7;
  }
  v7 = *(unsigned int *)(a3 + 4);
  if ( (_DWORD)v7 == 0 )
  {
LABEL_7:
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
    return sub_1815A2BC0();
  }
  v16 = a3;
  v15 = v5 + 8 * v7;
  v14 = a5;
  v8 = sub_1815A5660(a1, a2, a3: v15, a4, a5);
  if ( *(int *)(v6 + 16) <= 0 )
    v8 = MEMORY[0x18277F280](a1: v10, a2: v11, a3: v9, a4: v15);
  return v8 != v5;
}
