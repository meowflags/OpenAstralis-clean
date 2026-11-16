// sub_5029540
// rva 0x05029540  size 57  section .text  group text
// window base 0x185029540: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_5029540()
{
  __int64 v0; // r14
  __int64 v1; // r15
  __int64 v2; // rax
  __int64 v4; // [rsp+0h] [rbp-8h] BYREF

  if ( (unsigned __int64)&v4 <= *(_QWORD *)(v1 + 8) )
  {
    sub_1EB84E0();
    goto LABEL_7;
  }
  v2 = *(unsigned int *)(v1 + 72);
  if ( (_DWORD)v2 == 0 )
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
    return sub_5029580();
  }
  if ( *(int *)(v1 + 16) <= 0 )
    v2 = sub_277F280();
  return v0 + 8LL * *(unsigned int *)(v0 + 8 * v2 + 68);
}
