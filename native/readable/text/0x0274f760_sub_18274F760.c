// sub_274F760
// rva 0x0274f760  size 171  section .text  group text
// window base 0x18274f760: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_274F760(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _DWORD *a5,
        __int64 (__fastcall *a6)(__int64, __int64, _DWORD *, _DWORD *, _DWORD *))
{
  _DWORD *v6; // r14
  __int64 v7; // r15
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 result; // rax
  __int64 v13; // rdx
  __int64 v14; // rdi
  __int64 v15; // rsi
  __int64 v16; // [rsp+0h] [rbp-8h] BYREF

  if ( (unsigned __int64)&v16 <= *(_QWORD *)(v7 + 8) )
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
    __builtin_debugtrap();
    __builtin_debugtrap();
    return sub_274F820();
  }
  else
  {
    if ( a5 != v6 && a5[2] == 2 )
    {
      v8 = (unsigned int)a5[3];
      if ( (_DWORD)v8 == 0 )
        goto LABEL_7;
      v9 = v6[2 * v8] >> 3;
      if ( SHIWORD(v6[2 * v9 + 15]) >= 2 && v6[2 * v6[2 * v9 + 4] + 4] == 44212 )
        goto LABEL_7;
    }
    do
    {
      v8 = sub_2757000(a1, a2, a3: a5);
LABEL_7:
      v10 = (unsigned int)a5[4];
      if ( (_DWORD)v10 == 0 )
        break;
      v11 = v6[2 * v10] >> 3;
    }
    while ( SHIWORD(v6[2 * v11 + 15]) < 3 || v6[2 * v6[2 * v11 + 4] + 5] != 44204 );
    result = a6(a1, a2, a3: &v6[2 * v8], a4: &v6[2 * v10], a5: &v6[2 * v10]);
    if ( *(int *)(v7 + 16) <= 0 )
      return sub_277F280(a1: v14, a2: v15, a3: v13);
  }
  return result;
}
