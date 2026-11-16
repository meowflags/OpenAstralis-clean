// sub_275FCA0
// rva 0x0275fca0  size 60  section .text  group text
// window base 0x18275fca0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
_DWORD *__fastcall sub_275FCA0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r14
  __int64 v4; // r15
  _DWORD *result; // rax
  __int64 v6; // rcx
  __int64 v7; // [rsp+0h] [rbp-8h] BYREF

  if ( (unsigned __int64)&v7 <= *(_QWORD *)(v4 + 8) )
  {
    sub_1EB84E0();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    return (_DWORD *)sub_275FCE0();
  }
  else
  {
    result = *(_DWORD **)(a3 + 8);
    v6 = *(unsigned int *)(a3 + 20);
    if ( (_DWORD)v6 != 0 )
      LODWORD(result) = *(_DWORD *)((char *)&result[2 * v6] + v3);
    else
      LODWORD(result) = *result;
    if ( *(int *)(v4 + 16) <= 0 )
      LODWORD(result) = sub_277F280(a1, a2, a3);
    return (_DWORD *)(int)result;
  }
}
