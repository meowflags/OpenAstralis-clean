// sub_182762440
// rva 0x02762440  size 62  section .text  group text
// window base 0x182762440: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int16 *__fastcall sub_182762440(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r14
  __int64 v4; // r15
  __int16 *result; // rax
  __int64 v6; // rcx
  __int64 v7; // [rsp+0h] [rbp-8h] BYREF

  if ( (unsigned __int64)&v7 <= *(_QWORD *)(v4 + 8) )
  {
    MEMORY[0x181EB84E0]();
    __builtin_debugtrap();
    __builtin_debugtrap();
    return (__int16 *)sub_182762480();
  }
  else
  {
    result = *(__int16 **)(a3 + 8);
    v6 = *(unsigned int *)(a3 + 20);
    if ( (_DWORD)v6 != 0 )
      LODWORD(result) = *(__int16 *)((char *)&result[4 * v6] + v3);
    else
      LODWORD(result) = *result;
    if ( *(int *)(v4 + 16) <= 0 )
      LODWORD(result) = sub_18277F280(a1, a2, a3);
    return (__int16 *)(int)result;
  }
}
