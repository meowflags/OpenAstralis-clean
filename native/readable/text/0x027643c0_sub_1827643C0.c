// sub_27643C0
// rva 0x027643c0  size 134  section .text  group text
// window base 0x1827643c0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_27643C0(__int64 a1, __int64 a2, unsigned int *a3, __int64 a4)
{
  __int64 v4; // r14
  __int64 v5; // r15
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rdi
  __int64 v9; // rax
  __int64 result; // rax
  __int64 v11; // rdx
  __int64 v12; // rsi
  _QWORD v13[3]; // [rsp+0h] [rbp-38h] BYREF
  __int64 v14; // [rsp+18h] [rbp-20h]
  __int64 v15; // [rsp+20h] [rbp-18h]
  __int64 v16; // [rsp+28h] [rbp-10h]
  unsigned int *v17; // [rsp+30h] [rbp-8h]

  if ( (unsigned __int64)v13 <= *(_QWORD *)(v5 + 8) )
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
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    return sub_2764460();
  }
  else
  {
    v6 = v4 + 8LL * a3[1];
    v7 = v4 + 8LL * a3[2];
    v8 = v4 + 8LL * a3[3];
    v9 = v4 + 8LL * a3[4];
    v17 = a3;
    v16 = v6;
    v15 = v7;
    v14 = v8;
    v13[2] = v9;
    result = sub_C96C240(a1: v9, a2, a3: v6, a4, a5: v7, a6: v8);
    if ( *(int *)(v5 + 16) <= 0 )
      return sub_277F280(a1: v14, a2: v12, a3: v11);
  }
  return result;
}
