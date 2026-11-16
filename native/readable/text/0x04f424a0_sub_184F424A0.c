// sub_4F424A0
// rva 0x04f424a0  size 77  section .text  group text
// window base 0x184f424a0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_4F424A0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5, __int64 a6)
{
  __int64 v6; // r14
  __int64 v7; // r15
  int v8; // eax
  char v10; // [rsp+0h] [rbp-18h] BYREF
  __int64 v11; // [rsp+8h] [rbp-10h]
  unsigned int v12; // [rsp+14h] [rbp-4h]

  if ( (unsigned __int64)&v10 <= *(_QWORD *)(v7 + 8) )
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
    return sub_4F42500();
  }
  else
  {
    v11 = a3;
    v12 = a5;
    v8 = sub_4F41F80(a1, a2, a3, a4: a5, a5, a6, a7: v10);
    if ( *(int *)(v7 + 16) <= 0 )
      v8 = sub_277F280();
    return v6 + 8LL * *(unsigned int *)(v6 + 4LL * (unsigned int)(v8 + 128) + 376354740);
  }
}
