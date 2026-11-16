// sub_181EC98E0
// rva 0x01ec98e0  size 173  section .text  group text
// window base 0x181ec98e0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
_DWORD *__fastcall sub_181EC98E0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  _DWORD *v6; // r14
  __int64 v7; // r15
  _DWORD *result; // rax
  __int64 v9; // rcx
  __int64 v10; // rdi
  __int64 v11; // rsi
  __int64 v12; // r8
  char v13; // [rsp+0h] [rbp-18h] BYREF
  __int64 v14; // [rsp+8h] [rbp-10h]
  __int64 v15; // [rsp+10h] [rbp-8h]

  v15 = a3;
  if ( (unsigned __int64)&v13 <= *(_QWORD *)(v7 + 8) )
  {
    sub_181EB84E0(a1, a2, a3, a4, a5, a6, a7: v13);
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
    return (_DWORD *)sub_181EC99A0();
  }
  v14 = a5;
  result = sub_181EC95E0(a1, a2, a3, a4: a5, a5, a6);
  if ( result != v6 || (_DWORD)(v12 = *(unsigned int *)(v15 + 8)) == 0 )
  {
    if ( *(int *)(v7 + 16) > 0 )
      return result;
    return (_DWORD *)MEMORY[0x18277F280]();
  }
  result = (_DWORD *)MEMORY[0x1859E49A0](a1: v10, a2: v11, a3: &v6[2 * v12], a4: v9, a5: v14);
  if ( result != v6 && *result >> 3 == 4262015 )
  {
    if ( *(int *)(v7 + 16) > 0 )
      return result;
    return (_DWORD *)MEMORY[0x18277F280]();
  }
  if ( *(int *)(v7 + 16) <= 0 )
    MEMORY[0x18277F280]();
  return v6;
}
