// sub_5027DC0
// rva 0x05027dc0  size 94  section .text  group text
// window base 0x185027dc0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_5027DC0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // r14
  __int64 v6; // r15
  __int64 v7; // r9
  __int64 v8; // rdx
  __int64 result; // rax
  __int64 v10; // [rsp+0h] [rbp-18h] BYREF
  __int64 v11; // [rsp+8h] [rbp-10h]
  __int64 v12; // [rsp+10h] [rbp-8h]

  if ( (unsigned __int64)&v10 <= *(_QWORD *)(v6 + 8) )
  {
    v11 = a5;
    v12 = a3;
    sub_1EB84E0();
  }
  else if ( a5 != v5 )
  {
    v12 = a3;
    v7 = v5 + 8LL * *(unsigned int *)(a5 + 4);
    v8 = (unsigned int)*(char *)(a5 + 12);
    v11 = a5;
    result = sub_4FF0580(a1, a2, a3: v8, a4, a5: v7, a6: 0);
    if ( *(int *)(v6 + 16) <= 0 )
      return sub_277F280();
    return result;
  }
  sub_2771080();
  __builtin_debugtrap();
  __builtin_debugtrap();
  return sub_5027E20();
}
