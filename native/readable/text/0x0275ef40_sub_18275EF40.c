// sub_275EF40
// rva 0x0275ef40  size 79  section .text  group text
// window base 0x18275ef40: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_275EF40(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r14
  __int64 v4; // r15
  char *v5; // rax
  __int64 v6; // rcx
  int v7; // eax
  __int64 v9; // [rsp+0h] [rbp-8h] BYREF

  if ( (unsigned __int64)&v9 <= *(_QWORD *)(v4 + 8) )
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
    return sub_275EFA0();
  }
  else
  {
    v5 = *(char **)(a3 + 8);
    v6 = *(unsigned int *)(a3 + 20);
    if ( (_DWORD)v6 != 0 )
      v7 = v5[8 * v6 + v3];
    else
      v7 = *v5;
    if ( *(int *)(v4 + 16) <= 0 )
      v7 = sub_277F280(a1, a2, a3);
    return v3 + 8LL * *(unsigned int *)(v3 + 4LL * (unsigned int)(v7 + 128) + 376354740);
  }
}
