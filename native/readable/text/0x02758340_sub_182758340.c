// sub_2758340
// rva 0x02758340  size 85  section .text  group text
// window base 0x182758340: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_2758340(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // r14
  __int64 v6; // r15
  __int64 v7; // rdi
  __int64 v8; // rsi
  unsigned __int16 *v9; // rax
  __int64 result; // rax
  __int64 v11; // [rsp+0h] [rbp-18h] BYREF
  __int64 v12; // [rsp+8h] [rbp-10h]
  __int64 v13; // [rsp+10h] [rbp-8h]

  if ( (unsigned __int64)&v11 <= *(_QWORD *)(v6 + 8) )
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
    return sub_27583A0();
  }
  else
  {
    v13 = a5;
    v12 = a3;
    sub_275A260(a1, a2, a3, a4: a5);
    v9 = *(unsigned __int16 **)(v12 + 8);
    if ( v13 == v5 )
      result = *v9;
    else
      result = *(unsigned __int16 *)((char *)v9 + v13);
    if ( *(int *)(v6 + 16) <= 0 )
      return sub_277F280(a1: v7, a2: v8, a3: v12);
  }
  return result;
}
