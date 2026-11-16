// sub_27644E0
// rva 0x027644e0  size 119  section .text  group text
// window base 0x1827644e0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_27644E0(__int64 a1, __int64 a2, unsigned int *a3, __int64 a4)
{
  __int64 v4; // r14
  __int64 v5; // r15
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rdi
  __int64 result; // rax
  __int64 v10; // rdx
  __int64 v11; // rsi
  __int64 v12; // [rsp+0h] [rbp-28h] BYREF
  __int64 v13; // [rsp+8h] [rbp-20h]
  __int64 v14; // [rsp+10h] [rbp-18h]
  __int64 v15; // [rsp+18h] [rbp-10h]
  unsigned int *v16; // [rsp+20h] [rbp-8h]

  if ( (unsigned __int64)&v12 <= *(_QWORD *)(v5 + 8) )
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
    return sub_2764560();
  }
  else
  {
    v6 = v4 + 8LL * a3[1];
    v7 = v4 + 8LL * a3[2];
    v8 = v4 + 8LL * a3[3];
    v16 = a3;
    v15 = v6;
    v14 = v7;
    v13 = v8;
    result = sub_C965D60(a1: 1, a2: v4, a3: v6, a4, a5: v7, a6: v8);
    if ( *(int *)(v5 + 16) <= 0 )
      return sub_277F280(a1: v13, a2: v11, a3: v10);
  }
  return result;
}
