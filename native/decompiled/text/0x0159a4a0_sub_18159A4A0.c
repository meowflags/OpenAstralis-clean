// sub_18159A4A0
// rva 0x0159a4a0  size 154  section .text  group text
// window base 0x18159a4a0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_18159A4A0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r14
  __int64 v7; // r15
  __int64 v8; // rcx
  __int64 v9; // rdi
  __int64 v10; // rsi
  __int64 v11; // r8
  __int64 result; // rax
  __int64 v13; // [rsp+0h] [rbp-38h] BYREF
  __int64 v14; // [rsp+10h] [rbp-28h]
  __int64 v15; // [rsp+18h] [rbp-20h]
  BOOL v16; // [rsp+20h] [rbp-18h]
  unsigned int v17; // [rsp+24h] [rbp-14h]
  __int64 v18; // [rsp+28h] [rbp-10h]
  unsigned int v19; // [rsp+34h] [rbp-4h]

  v15 = a5;
  if ( (unsigned __int64)&v13 <= *(_QWORD *)(v7 + 8) )
  {
    v17 = a2;
    v19 = a1;
    v18 = a6;
    v14 = a3;
    MEMORY[0x181EB83C0]();
    goto LABEL_6;
  }
  v19 = a1;
  v18 = a6;
  v14 = a3;
  v17 = a2;
  v16 = (int)a2 < 2;
  MEMORY[0x182782B60](a1, a2, a3: a5, a4, a5: (int)a2 < 2);
  v11 = v15;
  if ( v15 == v6 )
  {
LABEL_6:
    MEMORY[0x18276EFE0](a1: v19, a2: v17, a3: v14, a4: v8, a5: v11, a6: v18);
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    return sub_18159A540();
  }
  result = MEMORY[0x1820841E0](a1: v9, a2: v10, a3: v6 + 376612120);
  if ( *(int *)(v7 + 16) <= 0 )
    return MEMORY[0x18277F280]();
  return result;
}
