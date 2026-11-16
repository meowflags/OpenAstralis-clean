// sub_18275EFE0
// rva 0x0275efe0  size 62  section .text  group text
// window base 0x18275efe0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
char *__fastcall sub_18275EFE0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r14
  __int64 v4; // r15
  char *result; // rax
  __int64 v6; // rcx
  __int64 v7; // [rsp+0h] [rbp-8h] BYREF

  if ( (unsigned __int64)&v7 <= *(_QWORD *)(v4 + 8) )
  {
    MEMORY[0x181EB84E0]();
    __builtin_debugtrap();
    __builtin_debugtrap();
    return (char *)sub_18275F020();
  }
  else
  {
    result = *(char **)(a3 + 8);
    v6 = *(unsigned int *)(a3 + 20);
    if ( (_DWORD)v6 != 0 )
      LODWORD(result) = result[8 * v6 + v3];
    else
      LODWORD(result) = *result;
    if ( *(int *)(v4 + 16) <= 0 )
      LODWORD(result) = sub_18277F280(a1, a2, a3);
    return (char *)(int)result;
  }
}
