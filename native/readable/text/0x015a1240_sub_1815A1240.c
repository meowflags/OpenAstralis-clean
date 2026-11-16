// sub_15A1240
// rva 0x015a1240  size 82  section .text  group text
// window base 0x1815a1240: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_15A1240(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // r14
  __int64 v6; // r15
  __int64 v7; // rax
  __int64 result; // rax
  __int64 v9; // [rsp+0h] [rbp-18h] BYREF
  __int64 v10; // [rsp+8h] [rbp-10h]
  __int64 v11; // [rsp+10h] [rbp-8h]

  if ( (unsigned __int64)&v9 <= *(_QWORD *)(v6 + 8) )
  {
    v10 = a5;
    v11 = a3;
    sub_1EB84E0();
    goto LABEL_6;
  }
  v7 = *(unsigned int *)(a3 + 4);
  if ( (_DWORD)v7 == 0 )
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
    return sub_15A12A0();
  }
  v11 = a3;
  v10 = a5;
  result = sub_15A6820(a1, a2, a3: v5 + 8 * v7);
  if ( *(int *)(v6 + 16) <= 0 )
    return sub_277F280();
  return result;
}
