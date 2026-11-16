// sub_4F4B8C0
// rva 0x04f4b8c0  size 49  section .text  group text
// window base 0x184f4b8c0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_4F4B8C0(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // r15
  __int64 result; // rax
  _DWORD v5[6]; // [rsp+0h] [rbp-18h] BYREF

  if ( (unsigned __int64)v5 <= *(_QWORD *)(v3 + 8) )
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
    return sub_4F4B900();
  }
  else
  {
    v5[5] = a3;
    LOWORD(result) = sub_4F4B900();
    if ( *(int *)(v3 + 16) <= 0 )
      LOWORD(result) = sub_277F280();
    return (unsigned __int16)result;
  }
}
