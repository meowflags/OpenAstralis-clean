// sub_159FD60
// rva 0x0159fd60  size 117  section .text  group text
// window base 0x18159fd60: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_159FD60(_DWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, _DWORD *a6)
{
  _DWORD *v6; // r14
  __int64 v7; // r15
  __int64 result; // rax
  __int64 v9; // rcx
  __int64 v10; // [rsp+0h] [rbp-8h] BYREF

  result = a3;
  v9 = a5;
  if ( (unsigned __int64)&v10 <= *(_QWORD *)(v7 + 8) )
  {
    sub_1EB84E0(a1, a2, a3, a4: a5);
    goto LABEL_11;
  }
  if ( a6 != v6 )
  {
    a3 = *a6 >> 3;
    if ( (_DWORD)a3 != 4261917 )
    {
      sub_276FC00(a1, a2, a3: a6, a4: a5, a5: v6 + 8523834);
      return sub_277F280(a1, a2, a3, a4: v9);
    }
  }
  if ( a1 != v6 )
  {
    a3 = *a1 >> 3;
    if ( (_DWORD)a3 != 4261917 )
    {
LABEL_11:
      sub_276FC00(a1, a2, a3: a1, a4: v9, a5: v6 + 8523834);
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
      return sub_159FDE0();
    }
  }
  if ( *(int *)(v7 + 16) <= 0 )
    return sub_277F280(a1, a2, a3, a4: v9);
  return result;
}
