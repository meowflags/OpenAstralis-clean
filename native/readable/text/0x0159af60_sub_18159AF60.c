// sub_159AF60
// rva 0x0159af60  size 119  section .text  group text
// window base 0x18159af60: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_159AF60(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // r14
  __int64 v6; // r15
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rdi
  __int64 v10; // rsi
  __int64 v11; // rcx
  __int64 v12; // rdi
  __int64 v13; // rsi
  __int64 v14; // rcx
  __int64 v15; // rdi
  __int64 v16; // rsi
  __int64 result; // rax
  __int64 v18; // [rsp+0h] [rbp-18h] BYREF
  __int64 v19; // [rsp+8h] [rbp-10h]
  __int64 v20; // [rsp+10h] [rbp-8h]

  if ( (unsigned __int64)&v18 <= *(_QWORD *)(v6 + 8) )
  {
    sub_1EB83C0();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    return sub_159AFE0();
  }
  else
  {
    v20 = a5;
    v19 = v5 + 376612120;
    v7 = sub_2084840(a1, a2, a3: v5 + 376612120, a4: v5 + 370566568, a5: v5 + 370566568);
    sub_2084180(a1: v9, a2: v10, a3: v7, a4: v8, a5: 1);
    sub_159CD00(a1: v12, a2: v13, a3: v19, a4: v11, a5: v20);
    result = sub_2084180(a1: v15, a2: v16, a3: v19, a4: v14, a5: 0);
    if ( *(int *)(v6 + 16) <= 0 )
      return sub_277F280();
  }
  return result;
}
