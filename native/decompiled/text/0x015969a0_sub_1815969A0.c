// sub_1815969A0
// rva 0x015969a0  size 115  section .text  group text
// window base 0x1815969a0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1815969A0(__int64 a1, __int64 a2, __int64 a3, int a4, _DWORD *a5, int a6)
{
  _DWORD *v6; // r14
  __int64 v7; // r15
  __int64 result; // rax
  char v9; // [rsp+0h] [rbp-18h] BYREF
  _DWORD *v10; // [rsp+8h] [rbp-10h]
  __int64 v11; // [rsp+10h] [rbp-8h]

  if ( (unsigned __int64)&v9 <= *(_QWORD *)(v7 + 8) )
  {
    v10 = a5;
    v11 = a3;
    MEMORY[0x181EB84E0]();
LABEL_7:
    MEMORY[0x18276FC00](a1, a2, a3: a5, a4: a3, a5: v6 + 8520670);
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
    return sub_181596A20();
  }
  if ( a5 != v6 && *a5 >> 3 != 4260335 )
    goto LABEL_7;
  v11 = a3;
  v10 = a5;
  result = sub_181597A20(a1, a2, a3: (_DWORD)a5, a4, (_DWORD)a5, a6, a7: v9);
  if ( *(int *)(v7 + 16) <= 0 )
    return MEMORY[0x18277F280]();
  return result;
}
