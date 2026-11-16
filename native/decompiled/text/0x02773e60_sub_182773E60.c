// sub_182773E60
// rva 0x02773e60  size 134  section .text  group text
// window base 0x182773e60: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_182773E60(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        int a8)
{
  __int64 v8; // r14
  __int64 v9; // r15
  int v10; // ecx
  __int64 result; // rax
  __int64 v12; // rdx
  __int64 v13; // rdi
  __int64 v14; // rsi
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rdi
  __int64 v18; // rsi
  __int64 v19; // r8
  __int64 v20; // r9
  int v21; // [rsp+0h] [rbp-48h] BYREF
  __int64 v22; // [rsp+18h] [rbp-30h]
  __int64 v23; // [rsp+20h] [rbp-28h]
  __int64 v24; // [rsp+28h] [rbp-20h]
  __int64 v25; // [rsp+30h] [rbp-18h]
  __int64 v26; // [rsp+38h] [rbp-10h]
  __int64 v27; // [rsp+40h] [rbp-8h]

  if ( (unsigned __int64)&v21 <= *(_QWORD *)(v9 + 8) )
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
    return sub_182773F00(a1: v17, a2: v18, a3: v15, a4: v16, a5: v19, a6: v20);
  }
  else
  {
    v24 = a4;
    v27 = a1;
    v26 = a2;
    v25 = a6;
    v23 = a5;
    v22 = a3;
    sub_182773900(a1, a2, a3, a4: v8, a5, a6, a7: v21, a8);
    result = sub_1827735C0(a1: v8, a2: v25, a3: v22, a4: v10, a5: v23, a6: v24);
    if ( *(int *)(v9 + 16) <= 0 )
      return sub_18277F280(a1: v13, a2: v14, a3: v12);
  }
  return result;
}
