// sub_181EA2A20
// rva 0x01ea2a20  size 134  section .text  group text
// window base 0x181ea2a20: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_181EA2A20(__int64 a1, __int64 a2, __int64 a3, __int64 a4, _DWORD *a5, int a6)
{
  _DWORD *v6; // r14
  __int64 v7; // r15
  __int64 v8; // rax
  __int64 result; // rax
  char v10; // [rsp+0h] [rbp-18h] BYREF
  _DWORD *v11; // [rsp+8h] [rbp-10h]
  __int64 v12; // [rsp+10h] [rbp-8h]

  if ( (unsigned __int64)&v10 <= *(_QWORD *)(v7 + 8) )
  {
    v11 = a5;
    v12 = a3;
    sub_181EB84E0(a1, a2, a3, a4, (_DWORD)a5, a6, a7: v10);
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
    return sub_181EA2AC0();
  }
  else
  {
    if ( a5 != v6 )
    {
      v8 = *a5 >> 3;
      if ( SHIWORD(v6[2 * v8 + 15]) < 3 || v6[2 * v6[2 * v8 + 4] + 5] != 20033 )
      {
        v12 = a3;
        MEMORY[0x18276FC00](a1, a2, a3: a5, a4, a5: v6 + 10115918);
      }
    }
    v12 = a3;
    v11 = a5;
    result = sub_181EA32E0(a1, a2, a3: (_DWORD)a5, a4, (_DWORD)a5, a6, a7: v10);
    if ( *(int *)(v7 + 16) <= 0 )
      return MEMORY[0x18277F280]();
  }
  return result;
}
