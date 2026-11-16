// sub_27739A0
// rva 0x027739a0  size 203  section .text  group text
// window base 0x1827739a0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_27739A0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r14
  __int64 v7; // r15
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rdi
  __int64 v11; // rsi
  int v12; // r8d
  __int64 result; // rax
  __int64 v14; // rdx
  __int64 v15; // rdi
  __int64 v16; // rsi
  int v17[4]; // [rsp+0h] [rbp-38h] BYREF
  __int64 v18; // [rsp+10h] [rbp-28h]
  __int64 v19; // [rsp+18h] [rbp-20h]
  __int64 v20; // [rsp+20h] [rbp-18h]
  __int64 v21; // [rsp+28h] [rbp-10h]
  __int64 v22; // [rsp+30h] [rbp-8h]

  v19 = a5;
  if ( (unsigned __int64)v17 <= *(_QWORD *)(v7 + 8) )
  {
    v22 = a2;
    v21 = a1;
    v20 = a6;
    v18 = a3;
    sub_1EB83C0();
    goto LABEL_6;
  }
  v22 = a2;
  v21 = a1;
  v20 = a6;
  v18 = a3;
  sub_2773F00(a1: 1, a2: 1, a3: a5, a4, a5: 0, a6: v6);
  sub_27737C0(
    a1: v21,
    a2: v22,
    a3: v18,
    a4: v8,
    a5: v19,
    a6: v20,
    a7: v17[0],
    a8: v17[2],
    a9: v18,
    a10: v19,
    a11: v20,
    a12: v21);
  v12 = v19;
  if ( v19 == v6 )
  {
LABEL_6:
    sub_276EFE0(a1: v21, a2: v22, a3: v18, a4: v9, a5: v12, a6: v20, a7: v17[0]);
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
    return sub_2773A80();
  }
  result = sub_2084840(a1: v10, a2: v11, a3: v6 + 376612120, a4: v9, a5: v6 + 350867296);
  if ( *(int *)(v7 + 16) <= 0 )
    return sub_277F280(a1: v15, a2: v16, a3: v14);
  return result;
}
