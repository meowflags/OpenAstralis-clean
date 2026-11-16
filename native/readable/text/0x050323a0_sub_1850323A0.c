// sub_50323A0
// rva 0x050323a0  size 56  section .text  group text
// window base 0x1850323a0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_50323A0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r14
  __int64 v4; // r15
  __int64 v5; // rax
  __int64 v7; // [rsp+0h] [rbp-8h] BYREF

  if ( (unsigned __int64)&v7 <= *(_QWORD *)(v4 + 8) )
  {
    sub_1EB84E0();
    goto LABEL_7;
  }
  v5 = *(unsigned int *)(a3 + 12);
  if ( (_DWORD)v5 == 0 )
  {
LABEL_7:
    sub_2771080();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    return sub_50323E0();
  }
  if ( *(int *)(v4 + 16) <= 0 )
    v5 = sub_277F280();
  return v3 + 8LL * *(unsigned int *)(v3 + 8 * v5 + 12);
}
