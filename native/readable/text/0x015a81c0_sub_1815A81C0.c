// sub_15A81C0
// rva 0x015a81c0  size 134  section .text  group text
// window base 0x1815a81c0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
_DWORD *__fastcall sub_15A81C0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  _DWORD *v5; // r14
  __int64 v6; // r15
  _DWORD *result; // rax
  __int64 v8; // rdi
  __int64 v9; // rsi
  __int64 v10; // [rsp+0h] [rbp-18h] BYREF
  __int64 v11; // [rsp+10h] [rbp-8h]

  if ( (unsigned __int64)&v10 <= *(_QWORD *)(v6 + 8) )
  {
    v11 = a5;
    sub_1EB84E0();
    goto LABEL_8;
  }
  v11 = a5;
  result = (_DWORD *)sub_AF110A0(a1, a2, a3: v5 + 94153542, a4, a5, a6: v5);
  if ( result != v5 && *result >> 3 != 4475288 )
    goto LABEL_9;
  if ( result == v5 )
  {
LABEL_8:
    result = (_DWORD *)sub_28C1C40(a1: v8, a2: v9, a3: v5 + 92098704);
LABEL_9:
    sub_276FC00(a1: v8, a2: v9, a3: result, a4: v11, a5: v5 + 8950576);
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
    return (_DWORD *)sub_15A8260();
  }
  if ( *(int *)(v6 + 16) <= 0 )
    return (_DWORD *)sub_277F280();
  return result;
}
