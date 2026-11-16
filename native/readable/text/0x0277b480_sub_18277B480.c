// sub_277B480
// rva 0x0277b480  size 91  section .text  group text
// window base 0x18277b480: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_277B480(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // r15
  __int64 v4; // rdi
  __int64 v5; // rsi
  __int64 v6; // rdx
  __int64 v7; // rdi
  __int64 v8; // rsi
  __int64 v10; // [rsp+0h] [rbp-18h] BYREF
  unsigned int v11; // [rsp+10h] [rbp-8h]
  unsigned int v12; // [rsp+14h] [rbp-4h]

  if ( (unsigned __int64)&v10 <= *(_QWORD *)(v3 + 8) )
  {
    sub_1EB84E0();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    return ((__int64 (*)(void))sub_277B4E0)();
  }
  else
  {
    v12 = a3;
    sub_2780C20();
    v11 = sub_277B4E0(a1: v4, a2: v5, a3: v12);
    sub_2781280();
    if ( *(int *)(v3 + 16) <= 0 )
      sub_277F280(a1: v7, a2: v8, a3: v6);
    return v11;
  }
}
