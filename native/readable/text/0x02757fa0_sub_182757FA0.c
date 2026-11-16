// sub_2757FA0
// rva 0x02757fa0  size 111  section .text  group text
// window base 0x182757fa0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_2757FA0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // r14
  __int64 v6; // r15
  __int64 v7; // rdi
  __int64 v8; // rsi
  char *v9; // rax
  int v10; // eax
  __int64 v12; // [rsp+0h] [rbp-18h] BYREF
  __int64 v13; // [rsp+8h] [rbp-10h]
  __int64 v14; // [rsp+10h] [rbp-8h]

  if ( (unsigned __int64)&v12 <= *(_QWORD *)(v6 + 8) )
  {
    sub_1EB84E0();
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
    return sub_2758020();
  }
  else
  {
    v14 = a5;
    v13 = a3;
    sub_275A260(a1, a2, a3, a4: a5);
    v9 = *(char **)(v13 + 8);
    if ( v14 == v5 )
      v10 = *v9;
    else
      v10 = v9[v14];
    if ( *(int *)(v6 + 16) <= 0 )
      v10 = sub_277F280(a1: v7, a2: v8, a3: v13);
    return v5 + 8LL * *(unsigned int *)(v5 + 4LL * (unsigned int)(v10 + 128) + 376354740);
  }
}
