// sub_274A680
// rva 0x0274a680  size 474  section .text  group text
// window base 0x18274a680: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_274A680(
        __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        __int64 a4,
        _DWORD *a5,
        __int64 (__fastcall *a6)(_DWORD *, _DWORD *, _DWORD *, _DWORD *, _DWORD *, _DWORD *))
{
  _DWORD *v6; // r14
  __int64 v7; // r15
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r9
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rbx
  __int64 v15; // rcx
  __int64 v16; // rbp
  __int64 v17; // rcx
  __int64 result; // rax
  __int64 v19; // rdx
  __int64 v20; // rdi
  __int64 v21; // rsi
  __int64 v22; // [rsp+0h] [rbp-8h] BYREF

  if ( (unsigned __int64)&v22 <= *(_QWORD *)(v7 + 8) )
  {
    sub_1EB84E0();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    return sub_274A860();
  }
  else
  {
    if ( a5 != v6 && a5[2] == 6 )
    {
      v9 = (unsigned int)a5[3];
      if ( (_DWORD)v9 == 0 )
        goto LABEL_7;
      v10 = v6[2 * v9] >> 3;
      if ( SHIWORD(v6[2 * v10 + 15]) >= 2 && v6[2 * v6[2 * v10 + 4] + 4] == 8893 )
        goto LABEL_7;
    }
    while ( 1 )
    {
      a6 = (__int64 (__fastcall *)(_DWORD *, _DWORD *, _DWORD *, _DWORD *, _DWORD *, _DWORD *))sub_2757000(
                                                                                                 a1,
                                                                                                 a2,
                                                                                                 a3: a5);
LABEL_7:
      v11 = (unsigned int)a5[4];
      if ( (_DWORD)v11 == 0 || v6[2 * v11] >> 3 == 4643784 )
      {
        a1 = (unsigned int)a5[5];
        if ( (_DWORD)a1 == 0
          || (v12 = v6[2 * a1] >> 3,
              (unsigned __int16)*(_DWORD *)((a2 = (unsigned __int64)&v6[2 * v6[2 * v12 + 5]])
                                          + 4LL * (v6[2 * v12 + 11] & (0x136u >> HIBYTE(v6[2 * v12 + 11])))
                                          + 12) == 310) )
        {
          a2 = (unsigned int)a5[6];
          if ( (_DWORD)a2 == 0
            || (v13 = v6[2 * a2] >> 3,
                (unsigned __int16)v6[2 * v6[2 * v13 + 5] + 3 + (v6[2 * v13 + 11] & (0x13Bu >> HIBYTE(v6[2 * v13 + 11])))] == 315) )
          {
            v14 = (unsigned int)a5[7];
            if ( (_DWORD)v14 == 0
              || (v15 = v6[2 * v14] >> 3,
                  (unsigned __int16)v6[2 * v6[2 * v15 + 5]
                                     + 3
                                     + (v6[2 * v15 + 11] & (0x13Bu >> HIBYTE(v6[2 * v15 + 11])))] == 315) )
            {
              v16 = (unsigned int)a5[8];
              if ( (_DWORD)v16 == 0 )
                break;
              v17 = v6[2 * v16] >> 3;
              if ( (unsigned __int16)v6[2 * v6[2 * v17 + 5]
                                      + 3
                                      + (v6[2 * v17 + 11] & (0x13Au >> HIBYTE(v6[2 * v17 + 11])))] == 314 )
                break;
            }
          }
        }
      }
    }
    result = a6(a1: &v6[2 * a2], a2: &v6[2 * v14], a3: &v6[2 * v9], a4: &v6[2 * v16], a5: &v6[2 * v11], a6: &v6[2 * a1]);
    if ( *(int *)(v7 + 16) <= 0 )
      return sub_277F280(a1: v20, a2: v21, a3: v19);
  }
  return result;
}
