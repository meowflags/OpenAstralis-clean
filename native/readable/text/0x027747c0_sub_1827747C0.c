// sub_27747C0
// rva 0x027747c0  size 181  section .text  group text
// window base 0x1827747c0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_27747C0(__int64 a1, __int64 a2, __int64 a3, int a4, int a5, int a6, int a7, __int64 a8)
{
  __int64 v8; // r14
  __int64 v9; // r15
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v13; // [rsp+0h] [rbp-18h] BYREF

  if ( (unsigned __int64)&v13 <= *(_QWORD *)(v9 + 8) )
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
    return sub_2774880();
  }
  else
  {
    v10 = *(unsigned int *)(a3 + 16);
    if ( (_DWORD)v10 != 0 )
    {
      v11 = v8 + 8 * v10;
      if ( *(int *)(v9 + 16) <= 0 )
        v11 = sub_277F280(a1, a2, a3);
      return *(unsigned __int16 *)(v11 + 4);
    }
    else
    {
      return sub_1827747EF(a1, a2, a3, a4, a5, a6, a7, a8);
    }
  }
}
