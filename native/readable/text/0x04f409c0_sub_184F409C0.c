// sub_4F409C0
// rva 0x04f409c0  size 72  section .text  group text
// window base 0x184f409c0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_4F409C0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // r14
  __int64 v6; // r15
  __int64 result; // rax
  _QWORD v8[2]; // [rsp+0h] [rbp-18h] BYREF
  __int64 v9; // [rsp+10h] [rbp-8h]

  if ( (unsigned __int64)v8 <= *(_QWORD *)(v6 + 8) )
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
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    return sub_4F40A20();
  }
  else
  {
    v9 = a3;
    v8[1] = a5;
    result = sub_4FF2420(a1, a2, a3: v5 + 350970688);
    *(_BYTE *)(v9 + 4) = result;
    if ( *(int *)(v6 + 16) <= 0 )
      return sub_277F280();
  }
  return result;
}
