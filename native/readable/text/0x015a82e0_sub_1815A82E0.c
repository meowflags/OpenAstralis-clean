// sub_15A82E0
// rva 0x015a82e0  size 173  section .text  group text
// window base 0x1815a82e0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_15A82E0(int a1, int a2, int a3, __int64 a4, _BYTE *a5, int a6, __int64 a7, __int64 a8)
{
  __int64 v8; // r14
  __int64 v9; // r15
  __int64 v10; // rcx
  __int64 v12; // [rsp+0h] [rbp-18h] BYREF

  if ( (unsigned __int64)&v12 <= *(_QWORD *)(v9 + 8) )
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
    return sub_15A83A0();
  }
  else if ( a5 != nullptr )
  {
    if ( *a5 == 0 )
      JUMPOUT(0x1815A8363LL);
    v10 = 1;
    while ( a5[v10] != 0 )
    {
      if ( *(int *)(v9 + 16) <= 0 )
        v10 = sub_277F280();
      else
        ++v10;
    }
    return sub_1815A8342(a1, a2, a3, a4: v10, (_DWORD)a5, a6, a7, a8);
  }
  else
  {
    if ( *(int *)(v9 + 16) <= 0 )
      JUMPOUT(0x1815A836ALL);
    return v8;
  }
}
