// sub_5020FE0
// rva 0x05020fe0  size 237  section .text  group text
// window base 0x185020fe0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_5020FE0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, int a6)
{
  __int64 v6; // r14
  __int64 v7; // r15
  __int64 result; // rax
  __int64 v9; // rcx
  __int64 v10; // rdi
  __int64 v11; // rsi
  __int64 v12; // [rsp+0h] [rbp-18h] BYREF
  __int64 v13; // [rsp+8h] [rbp-10h]
  unsigned int v14; // [rsp+10h] [rbp-8h]
  unsigned int v15; // [rsp+14h] [rbp-4h]

  if ( (unsigned __int64)&v12 <= *(_QWORD *)(v7 + 8) )
  {
    sub_1EB84E0();
    goto LABEL_22;
  }
  if ( a5 >= 0x10000 )
  {
    v14 = a5;
    v15 = a6;
    v13 = a3;
    result = sub_5021480();
    if ( *(int *)(v7 + 16) <= 0 )
      return sub_277F280(a1: v10, a2: v11, a3: v13, a4: v9, a5: v14, a6: v15);
    return result;
  }
  v15 = a6;
  v14 = a5;
  if ( a3 == v6 )
  {
LABEL_22:
    sub_2771080();
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
    return sub_50210E0();
  }
  if ( (*(_DWORD *)(a3 + 8) >> 1) - 1 < a6 )
    JUMPOUT(0x30A03C043LL);
  result = (unsigned int)a6;
  if ( a6 < 0 )
  {
LABEL_8:
    if ( *(int *)(v7 + 16) <= 0 )
      sub_277F280();
    return 0xFFFFFFFFLL;
  }
  if ( *(unsigned __int16 *)(a3 + (unsigned int)(2 * a6) + 12) != v14 )
  {
    for ( result = (unsigned int)(a6 - 1); (int)result >= 0; result = (unsigned int)(result - 1) )
    {
      if ( *(unsigned __int16 *)(a3 + 2 * (int)result + 12) == a5 )
        goto LABEL_12;
    }
    goto LABEL_8;
  }
LABEL_12:
  if ( *(int *)(v7 + 16) <= 0 )
    return sub_277F280();
  return result;
}
