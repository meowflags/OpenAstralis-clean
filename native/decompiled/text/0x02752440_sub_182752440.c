// sub_182752440
// rva 0x02752440  size 282  section .text  group text
// window base 0x182752440: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_182752440(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _DWORD *a5,
        __int64 (__fastcall *a6)(_DWORD *, __int64, _DWORD *, _DWORD *, _DWORD *, _DWORD *))
{
  _DWORD *v6; // r14
  __int64 v7; // r15
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rdx
  __int64 v12; // rbx
  __int64 v13; // rbx
  __int64 v14; // rbp
  __int64 v15; // rbp
  __int64 result; // rax
  __int64 v17; // rdx
  __int64 v18; // rdi
  __int64 v19; // rsi
  __int64 v20; // rax
  __int64 v21; // rdi
  __int64 v22; // rsi
  __int64 v23; // [rsp+0h] [rbp-8h] BYREF

  if ( (unsigned __int64)&v23 <= *(_QWORD *)(v7 + 8) )
  {
    v20 = MEMORY[0x181EB84E0]();
    MEMORY[0x181DF2640](a1: v21, a2: v22, a3: v20);
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    return sub_182752560();
  }
  else
  {
    if ( a5 != v6 && a5[2] == 4 )
    {
      v9 = (unsigned int)a5[3];
      if ( (_DWORD)v9 == 0 )
        goto LABEL_7;
      v10 = v6[2 * v9] >> 3;
      if ( SHIWORD(v6[2 * v10 + 15]) >= 2 && v6[2 * v6[2 * v10 + 4] + 4] == 43781 )
        goto LABEL_7;
    }
    while ( 1 )
    {
      a6 = (__int64 (__fastcall *)(_DWORD *, __int64, _DWORD *, _DWORD *, _DWORD *, _DWORD *))sub_182757000(
                                                                                                a1,
                                                                                                a2,
                                                                                                a3: a5);
LABEL_7:
      v11 = (unsigned int)a5[4];
      if ( (_DWORD)v11 != 0 )
      {
        v12 = v6[2 * v11] >> 3;
        if ( SHIWORD(v6[2 * v12 + 15]) < 3 || v6[2 * v6[2 * v12 + 4] + 5] != 96283 )
          continue;
      }
      v13 = (unsigned int)a5[5];
      if ( (_DWORD)v13 != 0 )
      {
        v14 = v6[2 * v13] >> 3;
        if ( SHIWORD(v6[2 * v14 + 15]) < 2 || v6[2 * v6[2 * v14 + 4] + 4] != 57683 )
          continue;
      }
      v15 = (unsigned int)a5[6];
      if ( (_DWORD)v15 == 0 )
        break;
      a2 = v6[2 * v15] >> 3;
      if ( SHIWORD(v6[2 * a2 + 15]) >= 2 )
      {
        a2 = (unsigned int)v6[2 * a2 + 4];
        if ( v6[2 * a2 + 4] == 9152 )
          break;
      }
    }
    result = a6(a1: &v6[2 * v15], a2, a3: &v6[2 * v9], a4: &v6[2 * v9], a5: &v6[2 * v11], a6: &v6[2 * v13]);
    if ( *(int *)(v7 + 16) <= 0 )
      return sub_18277F280(a1: v18, a2: v19, a3: v17);
  }
  return result;
}
