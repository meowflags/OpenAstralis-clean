// sub_15A2A80
// rva 0x015a2a80  size 77  section .text  group text
// window base 0x1815a2a80: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_15A2A80(
        unsigned __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  __int64 v6; // r14
  __int64 v7; // r15
  __int64 v8; // rcx
  __int64 v9; // rdi
  __int64 v10; // rsi
  __int64 v11; // rdx
  __int64 v12; // rcx
  char v14; // [rsp+0h] [rbp-18h] BYREF
  unsigned __int64 v15; // [rsp+10h] [rbp-8h]

  if ( (unsigned __int64)&v14 <= *(_QWORD *)(v7 + 8) )
  {
    sub_1EB84E0();
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
    return sub_15A2AE0();
  }
  else
  {
    v15 = a3;
    v8 = *(unsigned int *)(sub_15A25E0(a1, a2, a3, a4, a5, a6, a7: v14) + 4);
    v11 = v6 + 8 * v8;
    if ( (_DWORD)v8 == 47076751 )
      v12 = v6;
    else
      v12 = v6 + 8 * v8;
    if ( *(int *)(v7 + 16) <= 0 )
      sub_277F280(a1: v9, a2: v10, a3: v11, a4: v12);
    return v12;
  }
}
