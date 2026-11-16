// sub_2755580
// rva 0x02755580  size 250  section .text  group text
// window base 0x182755580: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_2755580(
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
  __int64 v15; // r9
  __int64 result; // rax
  __int64 v17; // rdx
  __int64 v18; // rdi
  __int64 v19; // rsi
  __int64 v20; // [rsp+0h] [rbp-8h] BYREF

  if ( (unsigned __int64)&v20 <= *(_QWORD *)(v7 + 8) )
  {
    sub_1EB84E0();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    return sub_2755680();
  }
  else
  {
    if ( a5 != v6 && a5[2] == 4 )
    {
      v9 = (unsigned int)a5[3];
      if ( (_DWORD)v9 == 0 )
        goto LABEL_7;
      v10 = v6[2 * v9] >> 3;
      if ( SHIWORD(v6[2 * v10 + 15]) >= 2 && v6[2 * v6[2 * v10 + 4] + 4] == 1274 )
        goto LABEL_7;
    }
    while ( 1 )
    {
      a6 = (__int64 (__fastcall *)(_DWORD *, __int64, _DWORD *, _DWORD *, _DWORD *, _DWORD *))sub_2757000(
                                                                                                a1,
                                                                                                a2,
                                                                                                a3: a5);
LABEL_7:
      v11 = (unsigned int)a5[4];
      if ( (_DWORD)v11 != 0 )
      {
        v12 = v6[2 * v11] >> 3;
        if ( SHIWORD(v6[2 * v12 + 15]) < 2 || v6[2 * v6[2 * v12 + 4] + 4] != 1274 )
          continue;
      }
      v13 = (unsigned int)a5[5];
      if ( (_DWORD)v13 != 0 )
      {
        v14 = v6[2 * v13] >> 3;
        if ( SHIWORD(v6[2 * v14 + 15]) < 2 || v6[2 * v6[2 * v14 + 4] + 4] != 1274 )
          continue;
      }
      v15 = (unsigned int)a5[6];
      if ( (_DWORD)v15 == 0 )
        break;
      a1 = v6[2 * v15] >> 3;
      if ( (_DWORD)a1 == 5063835 )
        break;
    }
    result = a6(a1: &v6[2 * v15], a2, a3: &v6[2 * v9], a4: &v6[2 * v9], a5: &v6[2 * v11], a6: &v6[2 * v13]);
    if ( *(int *)(v7 + 16) <= 0 )
      return sub_277F280(a1: v18, a2: v19, a3: v17);
  }
  return result;
}
