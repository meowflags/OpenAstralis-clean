// sub_181EB7920
// rva 0x01eb7920  size 117  section .text  group text
// window base 0x181eb7920: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_181EB7920(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, int a6)
{
  __int64 v6; // r14
  __int64 v7; // r15
  __int64 v8; // rcx
  __int64 v9; // rdi
  __int64 v10; // rsi
  __int64 v11; // rdi
  __int64 v12; // rsi
  __int64 v13; // rax
  __int64 v14; // rdi
  __int64 v15; // rsi
  __int64 result; // rax
  double v17; // xmm0_8
  char v18; // [rsp+0h] [rbp-18h] BYREF
  __int64 v19; // [rsp+8h] [rbp-10h]
  __int64 v20; // [rsp+10h] [rbp-8h]

  if ( (unsigned __int64)&v18 <= *(_QWORD *)(v7 + 8) )
  {
    v17 = sub_181EB83C0(a1, a2, a3, a4, a5, a6, a7: v18);
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
    return sub_181EB79A0(a1: v17);
  }
  else
  {
    v20 = a3;
    v19 = v6 + 376612880;
    MEMORY[0x182084840](a1, a2, a3: v6 + 376612880, a4, a5: v6 + 366368192);
    MEMORY[0x182083F20](a1: v9, a2: v10, a3: v19, a4: v8, a5: v20);
    v13 = MEMORY[0x1820841E0](a1: v11, a2: v12, a3: v19);
    result = MEMORY[0x1820841E0](a1: v14, a2: v15, a3: v13);
    if ( *(int *)(v7 + 16) <= 0 )
      return MEMORY[0x18277F280]();
  }
  return result;
}
