// sub_1EC95E0
// rva 0x01ec95e0  size 179  section .text  group text
// window base 0x181ec95e0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
_DWORD *__fastcall sub_1EC95E0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  _DWORD *v6; // r14
  __int64 v7; // r15
  __int64 v8; // r9
  _DWORD *result; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rdi
  __int64 v13; // rsi
  __int64 v14; // r8
  char v15; // [rsp+0h] [rbp-28h] BYREF
  _DWORD *v16; // [rsp+10h] [rbp-18h]
  __int64 v17; // [rsp+18h] [rbp-10h]
  __int64 v18; // [rsp+20h] [rbp-8h]

  if ( (unsigned __int64)&v15 <= *(_QWORD *)(v7 + 8) )
  {
    v18 = a5;
    v17 = a3;
    result = (_DWORD *)sub_1EB84E0(a1, a2, a3, a4, a5, a6, a7: v15);
    goto LABEL_12;
  }
  v8 = *(unsigned int *)(a3 + 4);
  if ( (_DWORD)v8 != 0 )
  {
    v17 = a3;
    v16 = &v6[2 * v8];
    v18 = a5;
    result = (_DWORD *)sub_AF110A0(a1, a2, a3: v16, a4: a5, a5, a6: v6);
    if ( result == v6 || (_DWORD)(v10 = *result >> 3) == 4262015 )
    {
      if ( *(int *)(v7 + 16) <= 0 )
        return (_DWORD *)sub_277F280(a1: v12, a2: v13, a3: v10, a4: v11, a5: v14, a6: v16);
      return result;
    }
LABEL_12:
    sub_276FC00(a1: v12, a2: v13, a3: result, a4: v17, a5: v6 + 8524030);
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
    return (_DWORD *)sub_1EC96A0();
  }
  v18 = a5;
  v17 = a3;
  if ( *(int *)(v7 + 16) <= 0 )
    sub_277F280();
  return v6;
}
