// sub_501E0C0
// rva 0x0501e0c0  size 78  section .text  group text
// window base 0x18501e0c0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_501E0C0(unsigned int a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, unsigned int a6)
{
  __int64 v6; // r15
  int v7; // eax
  _QWORD v9[4]; // [rsp+0h] [rbp-28h] BYREF
  unsigned int v10; // [rsp+20h] [rbp-8h]
  unsigned int v11; // [rsp+24h] [rbp-4h]

  if ( (unsigned __int64)v9 <= *(_QWORD *)(v6 + 8) )
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
    return sub_501E120();
  }
  else
  {
    v9[3] = a5;
    v11 = a1;
    v9[2] = a3;
    v10 = a6;
    v7 = sub_50159C0(a1: a6, a2, a3: a5, a4, a5: a3, a6: a1);
    if ( *(int *)(v6 + 16) <= 0 )
      v7 = sub_277F280();
    return (unsigned int)-v7;
  }
}
