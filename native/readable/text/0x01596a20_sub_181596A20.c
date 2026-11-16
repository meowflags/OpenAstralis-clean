// sub_1596A20
// rva 0x01596a20  size 134  section .text  group text
// window base 0x181596a20: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1596A20(__int64 a1, __int64 a2, __int64 a3, __int64 a4, _DWORD *a5)
{
  _DWORD *v5; // r14
  __int64 v6; // r15
  __int64 result; // rax
  __int64 v8; // [rsp+0h] [rbp-18h] BYREF
  _DWORD *v9; // [rsp+8h] [rbp-10h]
  __int64 v10; // [rsp+10h] [rbp-8h]

  if ( (unsigned __int64)&v8 <= *(_QWORD *)(v6 + 8) )
  {
    v9 = a5;
    v10 = a3;
    sub_1EB84E0();
    goto LABEL_8;
  }
  if ( a5 != v5 && *a5 >> 3 != 4262015 )
    goto LABEL_9;
  if ( a5 == v5 )
  {
LABEL_8:
    v10 = a3;
    sub_2771080();
LABEL_9:
    sub_276FC00(a1, a2, a3: a5, a4: a3, a5: v5 + 8524030);
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
    __builtin_debugtrap();
    __builtin_debugtrap();
    return sub_1596AC0();
  }
  v10 = a3;
  v9 = a5;
  result = sub_4F68C80(a1, a2, a3: a5);
  if ( *(int *)(v6 + 16) <= 0 )
    return sub_277F280();
  return result;
}
