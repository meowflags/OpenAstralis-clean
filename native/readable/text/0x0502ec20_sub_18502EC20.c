// sub_502EC20
// rva 0x0502ec20  size 87  section .text  group text
// window base 0x18502ec20: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_502EC20(__int64 a1, __int64 a2, _DWORD *a3)
{
  __int64 v3; // r15
  __int64 result; // rax
  int v5; // [rsp+0h] [rbp-8h] BYREF

  if ( (unsigned __int64)&v5 <= *(_QWORD *)(v3 + 8) )
  {
    sub_1EB84E0();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
  }
  a3[4] = 0;
  a3[5] = 0;
  if ( a3[11] != 0 )
  {
    a3[11] = 0;
    __faststorefence();
  }
  result = (unsigned int)a3[9];
  if ( (_DWORD)result != 0 )
    a3[9] = 0;
  if ( *(int *)(v3 + 16) <= 0 )
    return sub_277F280();
  return result;
}
