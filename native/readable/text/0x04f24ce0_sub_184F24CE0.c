// sub_4F24CE0
// rva 0x04f24ce0  size 92  section .text  group text
// window base 0x184f24ce0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_4F24CE0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // r14
  __int64 v6; // r15
  __int64 result; // rax
  _QWORD v8[3]; // [rsp+0h] [rbp-28h] BYREF
  __int64 v9; // [rsp+18h] [rbp-10h]
  unsigned int v10; // [rsp+24h] [rbp-4h]

  if ( (unsigned __int64)v8 <= *(_QWORD *)(v6 + 8) )
  {
    v9 = a3;
    sub_1EB84E0();
  }
  else if ( a5 != v5 )
  {
    v10 = *(_DWORD *)(a5 + 8);
    v9 = a3;
    v8[2] = a5;
    result = sub_4F239A0(a1: v10, a2, a3, a4: a3, a5, a6: 0);
    if ( *(int *)(v6 + 16) <= 0 )
      return sub_277F280();
    return result;
  }
  sub_2771080();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  return sub_4F24D40();
}
