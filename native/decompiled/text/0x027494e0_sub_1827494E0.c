// sub_1827494E0
// rva 0x027494e0  size 267  section .text  group text
// window base 0x1827494e0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1827494E0(
        _DWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _DWORD *a5,
        void (__fastcall *a6)(_DWORD *, __int64, _DWORD *, _DWORD *, _DWORD *, _DWORD *))
{
  _DWORD *v6; // r14
  __int64 v7; // r15
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rbx
  __int64 v12; // rcx
  __int64 v13; // r9
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rdi
  __int64 v17; // rsi
  __int64 v19; // [rsp+0h] [rbp-8h] BYREF

  if ( (unsigned __int64)&v19 <= *(_QWORD *)(v7 + 8) )
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
    return sub_182749600();
  }
  else
  {
    if ( a5 != v6 && a5[2] == 4 )
    {
      v9 = (unsigned int)a5[3];
      if ( (_DWORD)v9 == 0 )
        goto LABEL_7;
      v10 = v6[2 * v9] >> 3;
      if ( SHIWORD(v6[2 * v10 + 15]) >= 2 && v6[2 * v6[2 * v10 + 4] + 4] == 18334 )
        goto LABEL_7;
    }
    while ( 1 )
    {
      a6 = (void (__fastcall *)(_DWORD *, __int64, _DWORD *, _DWORD *, _DWORD *, _DWORD *))sub_182757000(a1, a2, a3: a5);
LABEL_7:
      v11 = (unsigned int)a5[4];
      if ( (_DWORD)v11 != 0 )
      {
        v12 = v6[2 * v11] >> 3;
        if ( SHIWORD(v6[2 * v12 + 15]) < 2 || v6[2 * v6[2 * v12 + 4] + 4] != 18334 )
          continue;
      }
      v13 = (unsigned int)a5[6];
      if ( (_DWORD)v13 == 0 )
        break;
      v14 = v6[2 * v13] >> 3;
      a1 = &v6[2 * v6[2 * v14 + 5]];
      a2 = v6[2 * v14 + 11] & (0x61Du >> HIBYTE(v6[2 * v14 + 11]));
      if ( (unsigned __int16)a1[a2 + 3] == 1565 )
        break;
    }
    a6(a1: &v6[2 * v13], a2, a3: &v6[2 * v9], a4: &v6[2 * v13], a5: &v6[2 * v11], a6: &v6[2 * a5[5]]);
    if ( *(int *)(v7 + 16) <= 0 )
      sub_18277F280(a1: v16, a2: v17, a3: v15);
    return (__int64)v6;
  }
}
