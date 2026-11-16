// sub_502B680
// rva 0x0502b680  size 115  section .text  group text
// window base 0x18502b680: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_502B680(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // r15
  __int64 v6; // rcx
  __int64 v7; // rdi
  __int64 v8; // rsi
  __int64 v9; // rdi
  __int64 v10; // rsi
  __int64 result; // rax
  __int64 v12; // [rsp+0h] [rbp-28h] BYREF
  __int64 v13; // [rsp+10h] [rbp-18h]
  __int64 v14; // [rsp+18h] [rbp-10h]
  unsigned int v15; // [rsp+24h] [rbp-4h]

  if ( (unsigned __int64)&v12 <= *(_QWORD *)(v5 + 8) )
  {
    sub_1EB84E0();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
  }
  v14 = a5;
  v13 = a3;
  v15 = sub_6116840();
  sub_4ECE520(a1: v7, a2: v8, a3: v13, a4: v6, a5: v14);
  result = sub_6116940(a1: v9, a2: v10, a3: v15);
  if ( *(int *)(v5 + 16) <= 0 )
    return sub_277F280();
  return result;
}
