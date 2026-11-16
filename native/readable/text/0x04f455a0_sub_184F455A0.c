// sub_4F455A0
// rva 0x04f455a0  size 107  section .text  group text
// window base 0x184f455a0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
_DWORD *__fastcall sub_4F455A0(__int64 a1, __int64 a2, __int64 a3)
{
  _DWORD *v3; // r14
  __int64 v4; // r15
  _DWORD *result; // rax
  __int64 v6; // rdi
  __int64 v7; // rsi
  __int64 v8; // [rsp+0h] [rbp-18h] BYREF
  _DWORD *v9; // [rsp+8h] [rbp-10h]
  __int64 v10; // [rsp+10h] [rbp-8h]

  if ( (unsigned __int64)&v8 <= *(_QWORD *)(v4 + 8) )
  {
    v10 = a3;
    result = (_DWORD *)sub_1EB84E0();
LABEL_7:
    sub_276FC00(a1: v6, a2: v7, a3: result, a4: v10, a5: v9);
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
    return (_DWORD *)sub_4F45620();
  }
  v10 = a3;
  v9 = v3 + 10821790;
  result = (_DWORD *)sub_4F797A0(a1, a2, a3: v3 + 10821790, a4: v10, a5: v10);
  if ( result != v3 && *result >> 3 != 5410895 )
    goto LABEL_7;
  if ( *(int *)(v4 + 16) <= 0 )
    return (_DWORD *)sub_277F280();
  return result;
}
