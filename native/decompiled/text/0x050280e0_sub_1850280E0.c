// sub_1850280E0
// rva 0x050280e0  size 138  section .text  group text
// window base 0x1850280e0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
_DWORD *__fastcall sub_1850280E0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, _DWORD *a5)
{
  _DWORD *v5; // r14
  __int64 v6; // r15
  _DWORD *result; // rax
  __int64 v8; // rcx
  __int64 v9; // rdi
  __int64 v10; // rsi
  __int64 v11; // rdx
  __int64 v12; // [rsp+0h] [rbp-18h] BYREF
  _DWORD *v13; // [rsp+8h] [rbp-10h]
  __int64 v14; // [rsp+10h] [rbp-8h]

  if ( (unsigned __int64)&v12 <= *(_QWORD *)(v6 + 8) )
  {
    v13 = a5;
    v14 = a3;
    MEMORY[0x181EB84E0]();
  }
  else if ( a5 != v5 )
  {
    v14 = a3;
    v13 = a5;
    result = (_DWORD *)MEMORY[0x184F66720](a1, a2, a3: a5);
    if ( result != v5 )
    {
      v11 = *result >> 3;
      if ( SHIWORD(v5[2 * v11 + 15]) < 3 || v5[2 * v5[2 * v11 + 4] + 5] != 85398 )
        result = (_DWORD *)MEMORY[0x18276FC00](a1: v9, a2: v10, a3: result, a4: v8, a5: v5 + 8554956);
    }
    if ( *(int *)(v6 + 16) <= 0 )
      return (_DWORD *)MEMORY[0x18277F280]();
    return result;
  }
  v14 = a3;
  MEMORY[0x182771080]();
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
  return (_DWORD *)sub_185028180();
}
