// sub_15A8140
// rva 0x015a8140  size 117  section .text  group text
// window base 0x1815a8140: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_15A8140(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r14
  __int64 v5; // r15
  __int64 v6; // r8
  __int64 v7; // rax
  __int64 v8; // r8
  __int64 result; // rax
  _QWORD v10[2]; // [rsp+0h] [rbp-18h] BYREF
  __int64 v11; // [rsp+10h] [rbp-8h]

  if ( (unsigned __int64)v10 <= *(_QWORD *)(v5 + 8) )
  {
    v11 = a3;
    sub_1EB84E0();
    goto LABEL_7;
  }
  v6 = *(unsigned int *)(a3 + 4);
  if ( (_DWORD)v6 == 0 )
  {
LABEL_7:
    v11 = a3;
    sub_2771080();
    goto LABEL_8;
  }
  v7 = *(unsigned int *)(v4 + 8 * v6 + 4);
  v8 = v4 + 8 * v6;
  if ( (_DWORD)v7 == 0 )
  {
LABEL_8:
    sub_2771080(a1, a2, a3, a4, a5: v8);
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
    return sub_15A81C0();
  }
  v10[1] = v8;
  v11 = a3;
  result = sub_1EBBB60(a1, a2, a3: v4 + 8 * v7, a4, a5: 0);
  if ( *(int *)(v5 + 16) <= 0 )
    return sub_277F280();
  return result;
}
