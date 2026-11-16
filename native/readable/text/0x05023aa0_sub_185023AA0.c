// sub_5023AA0
// rva 0x05023aa0  size 124  section .text  group text
// window base 0x185023aa0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_5023AA0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r14
  __int64 v4; // r15
  unsigned int v5; // eax
  unsigned __int64 v6; // rdi
  unsigned __int64 v7; // rsi
  __int64 result; // rax
  int v9; // [rsp+0h] [rbp-18h] BYREF
  __int64 v10; // [rsp+8h] [rbp-10h]
  unsigned int v11; // [rsp+10h] [rbp-8h]
  unsigned int v12; // [rsp+14h] [rbp-4h]

  if ( (unsigned __int64)&v9 <= *(_QWORD *)(v4 + 8) )
  {
    sub_1EB84E0();
  }
  else if ( a3 != v3 )
  {
    v12 = *(_DWORD *)(a3 + 8) >> 1;
    v10 = a3;
    v5 = sub_50209A0(a1, a2, a3, a4: a3);
    if ( v5 != 0 )
    {
      v11 = v5;
      result = sub_5021B40(a1: v6, a2: v7, a3: v10, a4: v12, a5: v5, a6: v12 - v5, a7: v9, a8: v10);
    }
    else
    {
      v11 = 0;
      result = v3;
    }
    if ( *(int *)(v4 + 16) <= 0 )
      return sub_277F280(a1: v6, a2: v7, a3: v12, a4: v11);
    return result;
  }
  sub_2771080();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  return sub_5023B20();
}
