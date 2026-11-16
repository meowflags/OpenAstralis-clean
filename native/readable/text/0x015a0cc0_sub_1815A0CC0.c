// sub_15A0CC0
// rva 0x015a0cc0  size 75  section .text  group text
// window base 0x1815a0cc0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_15A0CC0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r14
  __int64 v4; // r15
  __int64 v5; // rax
  __int64 result; // rax
  __int64 v7; // [rsp+0h] [rbp-18h] BYREF
  __int64 v8; // [rsp+10h] [rbp-8h]

  if ( (unsigned __int64)&v7 <= *(_QWORD *)(v4 + 8) )
  {
    v8 = a3;
    sub_1EB84E0();
    goto LABEL_6;
  }
  v5 = *(unsigned int *)(a3 + 4);
  if ( (_DWORD)v5 == 0 )
  {
LABEL_6:
    sub_2771080();
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
    return sub_15A0D20();
  }
  v8 = a3;
  result = sub_15A4680(a1, a2, a3: v3 + 8 * v5);
  if ( *(int *)(v4 + 16) <= 0 )
    return sub_277F280();
  return result;
}
