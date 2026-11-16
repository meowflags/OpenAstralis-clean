// sub_18274B840
// rva 0x0274b840  size 267  section .text  group text
// window base 0x18274b840: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_18274B840(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _DWORD *a5,
        void (__fastcall *a6)(_DWORD *, _DWORD *, __int64, _DWORD *, _DWORD *, _DWORD *))
{
  _DWORD *v6; // r14
  __int64 v7; // r15
  __int64 v9; // rcx
  __int64 v10; // rbx
  __int64 v11; // rbx
  __int64 v12; // rbp
  __int64 v13; // rbp
  __int64 v14; // rsi
  __int64 v15; // r9
  __int64 v16; // rdx
  __int64 v17; // rdi
  __int64 v18; // rsi
  __int64 v20; // [rsp+0h] [rbp-8h] BYREF

  if ( (unsigned __int64)&v20 <= *(_QWORD *)(v7 + 8) )
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
    return sub_18274B960();
  }
  else
  {
    if ( a5 != v6 && a5[2] == 4 )
    {
      v9 = (unsigned int)a5[3];
      if ( (_DWORD)v9 == 0 )
        goto LABEL_7;
      v10 = v6[2 * v9] >> 3;
      if ( SHIWORD(v6[2 * v10 + 15]) >= 4 && v6[2 * v6[2 * v10 + 4] + 6] == 73883 )
        goto LABEL_7;
    }
    while ( 1 )
    {
      a6 = (void (__fastcall *)(_DWORD *, _DWORD *, __int64, _DWORD *, _DWORD *, _DWORD *))sub_182756FC0();
LABEL_7:
      v11 = (unsigned int)a5[4];
      if ( (_DWORD)v11 != 0 )
      {
        v12 = v6[2 * v11] >> 3;
        if ( SHIWORD(v6[2 * v12 + 15]) < 2 || v6[2 * v6[2 * v12 + 4] + 4] != 95996 )
          continue;
      }
      v13 = (unsigned int)a5[5];
      if ( (_DWORD)v13 != 0 )
      {
        v14 = v6[2 * v13] >> 3;
        if ( SHIWORD(v6[2 * v14 + 15]) < 3 || v6[2 * v6[2 * v14 + 4] + 5] != 72321 )
          continue;
      }
      v15 = (unsigned int)a5[6];
      if ( (_DWORD)v15 == 0 || v6[2 * v15] >> 3 == 4513089 )
        break;
    }
    a6(a1: &v6[2 * v13], a2: &v6[2 * v15], a3, a4: &v6[2 * v9], a5: &v6[2 * v9], a6: &v6[2 * v11]);
    if ( *(int *)(v7 + 16) <= 0 )
      sub_18277F280(a1: v17, a2: v18, a3: v16);
    return (__int64)v6;
  }
}
