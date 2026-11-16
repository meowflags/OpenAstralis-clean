// sub_181ED3A00
// rva 0x01ed3a00  size 126  section .text  group text
// window base 0x181ed3a00: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_181ED3A00(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r14
  __int64 v7; // r15
  __int64 v8; // rcx
  __int64 v9; // rdi
  __int64 v10; // rsi
  __int64 v11; // rax
  __int64 v12; // rdi
  __int64 v13; // rsi
  __int64 v14; // rcx
  __int64 v15; // rdi
  __int64 v16; // rsi
  __int64 result; // rax
  char v18; // [rsp+0h] [rbp-28h] BYREF
  __int64 v19; // [rsp+8h] [rbp-20h]
  __int64 v20; // [rsp+10h] [rbp-18h]
  __int64 v21; // [rsp+18h] [rbp-10h]
  __int64 v22; // [rsp+20h] [rbp-8h]

  if ( (unsigned __int64)&v18 <= *(_QWORD *)(v7 + 8) )
  {
    sub_181EB84E0(a1, a2, a3, a4, a5, a6, a7: v18);
    __builtin_debugtrap();
    __builtin_debugtrap();
    return sub_181ED3A80();
  }
  else
  {
    v22 = v6 + 366376984;
    v21 = a6;
    v20 = a3;
    v19 = v6 + 376612880;
    MEMORY[0x182084840](a1, a2, a3: v6 + 376612880, a4: v6 + 376612880, a5: v6 + 366057408);
    v11 = MEMORY[0x182084840](a1: v9, a2: v10, a3: v19, a4: v8, a5: v22);
    MEMORY[0x1820841E0](a1: v12, a2: v13, a3: v11);
    result = MEMORY[0x182083F20](a1: v15, a2: v16, a3: v19, a4: v14, a5: v21);
    if ( *(int *)(v7 + 16) <= 0 )
      return MEMORY[0x18277F280]();
  }
  return result;
}
