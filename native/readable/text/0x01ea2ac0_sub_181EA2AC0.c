// sub_1EA2AC0
// rva 0x01ea2ac0  size 134  section .text  group text
// window base 0x181ea2ac0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1EA2AC0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, _DWORD *a5, int a6, char a7)
{
  _DWORD *v7; // r14
  __int64 v8; // r15
  __int64 v9; // rax
  __int64 result; // rax
  int v11; // edx
  int v12; // ecx
  int v13; // edi
  int v14; // esi
  int v15; // r8d
  int v16; // r9d
  char v17; // [rsp+0h] [rbp-18h] BYREF
  _DWORD *v18; // [rsp+8h] [rbp-10h]
  __int64 v19; // [rsp+10h] [rbp-8h]

  if ( (unsigned __int64)&v17 <= *(_QWORD *)(v8 + 8) )
  {
    v18 = a5;
    v19 = a3;
    sub_1EB84E0(a1, a2, a3, a4, (_DWORD)a5, a6, a7: v17);
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
    return sub_1EA2B60(a1: v13, a2: v14, a3: v11, a4: v12, a5: v15, a6: v16, a7);
  }
  else
  {
    if ( a5 != v7 )
    {
      v9 = *a5 >> 3;
      if ( SHIWORD(v7[2 * v9 + 15]) < 3 || v7[2 * v7[2 * v9 + 4] + 5] != 20033 )
      {
        v19 = a3;
        sub_276FC00(a1, a2, a3: a5, a4, a5: v7 + 10115918);
      }
    }
    v19 = a3;
    v18 = a5;
    result = sub_1EA2B60(a1, a2, a3: (_DWORD)a5, a4, (_DWORD)a5, a6, a7: v17);
    if ( *(int *)(v8 + 16) <= 0 )
      return sub_277F280();
  }
  return result;
}
