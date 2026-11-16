// sub_18274EBE0
// rva 0x0274ebe0  size 213  section .text  group text
// window base 0x18274ebe0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_18274EBE0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _DWORD *a5,
        void (__fastcall *a6)(_DWORD *, __int64, __int64, _DWORD *, _DWORD *, _DWORD *))
{
  _DWORD *v6; // r14
  __int64 v7; // r15
  __int64 v9; // rcx
  __int64 v10; // rbx
  __int64 v11; // rbx
  __int64 v12; // rbp
  __int64 v13; // rsi
  __int64 v14; // rdx
  __int64 v15; // rdi
  __int64 v16; // rsi
  __int64 v18; // [rsp+0h] [rbp-8h] BYREF

  if ( (unsigned __int64)&v18 <= *(_QWORD *)(v7 + 8) )
  {
    MEMORY[0x181EB84E0]();
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
    return sub_18274ECC0();
  }
  else
  {
    if ( a5 != v6 && a5[2] == 3 )
    {
      v9 = (unsigned int)a5[3];
      if ( (_DWORD)v9 == 0 )
        goto LABEL_7;
      v10 = v6[2 * v9] >> 3;
      if ( SHIWORD(v6[2 * v10 + 15]) >= 3 && v6[2 * v6[2 * v10 + 4] + 5] == 73836 )
        goto LABEL_7;
    }
    while ( 1 )
    {
      a6 = (void (__fastcall *)(_DWORD *, __int64, __int64, _DWORD *, _DWORD *, _DWORD *))sub_182756FC0();
LABEL_7:
      v11 = (unsigned int)a5[4];
      if ( (_DWORD)v11 == 0 || v6[2 * v11] >> 3 == 4789765 )
      {
        v12 = (unsigned int)a5[5];
        if ( (_DWORD)v12 == 0 )
          break;
        v13 = v6[2 * v12] >> 3;
        if ( SHIWORD(v6[2 * v13 + 15]) >= 2 )
        {
          a2 = (unsigned int)v6[2 * v13 + 4];
          if ( v6[2 * a2 + 4] == 7579 )
            break;
        }
      }
    }
    a6(a1: &v6[2 * v12], a2, a3, a4: &v6[2 * v9], a5: &v6[2 * v9], a6: &v6[2 * v11]);
    if ( *(int *)(v7 + 16) <= 0 )
      sub_18277F280(a1: v15, a2: v16, a3: v14);
    return (__int64)v6;
  }
}
