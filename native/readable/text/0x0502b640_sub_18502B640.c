// sub_502B640
// rva 0x0502b640  size 45  section .text  group text
// window base 0x18502b640: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
_DWORD *__fastcall sub_502B640(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r15
  _DWORD *result; // rax
  __int64 v5; // [rsp+0h] [rbp-8h] BYREF

  if ( (unsigned __int64)&v5 <= *(_QWORD *)(v3 + 8) )
  {
    sub_1EB84E0();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
  }
  result = sub_502B3C0(a1, a2, a3);
  if ( *(int *)(v3 + 16) <= 0 )
    return (_DWORD *)sub_277F280();
  return result;
}
