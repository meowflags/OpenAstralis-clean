// sub_503A140
// rva 0x0503a140  size 109  section .text  group text
// window base 0x18503a140: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_503A140(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // r14
  __int64 v6; // r15
  __int64 v7; // r9
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 result; // rax
  _QWORD v11[3]; // [rsp+0h] [rbp-18h] BYREF

  if ( (unsigned __int64)v11 <= *(_QWORD *)(v6 + 8) )
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
    return ((__int64 (*)(void))sub_503A1C0)();
  }
  else
  {
    v7 = *(unsigned int *)(v6 + 72);
    if ( (_DWORD)v7 != 0 )
    {
      v8 = *(unsigned int *)(v5 + 8 * v7 + 72);
      if ( (_DWORD)v8 != 0 )
        v9 = v5 + 8 * v8;
      else
        v9 = v5 + 8 * v7;
    }
    else
    {
      v9 = v5;
    }
    v11[2] = a3;
    v11[1] = a5;
    result = sub_503A1C0(a1, a2, a3, a4: a3, a5: v9, a6: a5);
    if ( *(int *)(v6 + 16) <= 0 )
      return sub_277F280();
  }
  return result;
}
