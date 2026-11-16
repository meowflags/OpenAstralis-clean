// sub_1E9A2E0
// rva 0x01e9a2e0  size 171  section .text  group text
// window base 0x181e9a2e0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1E9A2E0(__int64 a1, __int64 a2, __int64 a3, int a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r14
  __int64 v7; // r15
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rdi
  __int64 v11; // rsi
  __int64 v12; // rcx
  __int64 v13; // rdi
  __int64 v14; // rsi
  __int64 v15; // rcx
  __int64 v16; // rdi
  __int64 v17; // rsi
  __int64 result; // rax
  char v19; // [rsp+0h] [rbp-38h] BYREF
  __int64 v20; // [rsp+10h] [rbp-28h]
  __int64 v21; // [rsp+18h] [rbp-20h]
  __int64 v22; // [rsp+20h] [rbp-18h]
  __int64 v23; // [rsp+28h] [rbp-10h]
  int v24; // [rsp+30h] [rbp-8h]
  int v25; // [rsp+34h] [rbp-4h]

  if ( (unsigned __int64)&v19 <= *(_QWORD *)(v7 + 8) )
  {
    v25 = a2;
    v24 = a1;
    v23 = a6;
    v21 = a3;
    sub_1EB83C0(a1, a2, a3, a4, a5, a6, a7: v19);
  }
  else if ( a5 != v6 )
  {
    v25 = a2;
    v24 = a1;
    v23 = a6;
    v22 = a5;
    v21 = a3;
    v20 = v6 + 376612120;
    v8 = sub_2084840(a1, a2, a3: v6 + 376612120, a4: v6 + 369916536, a5: v6 + 369916536);
    sub_2084180(a1: v10, a2: v11, a3: v8, a4: v9, a5: 1);
    sub_1E9C060(a1: v13, a2: v14, a3: v6 + 58177792, a4: v12, a5: v20);
    result = sub_2084180(a1: v16, a2: v17, a3: v20, a4: v15, a5: 0);
    if ( *(int *)(v7 + 16) <= 0 )
      return sub_277F280();
    return result;
  }
  sub_276EFE0();
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
  return sub_1E9A3A0();
}
