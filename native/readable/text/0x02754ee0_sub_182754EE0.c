// sub_2754EE0
// rva 0x02754ee0  size 288  section .text  group text
// window base 0x182754ee0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_2754EE0(
        __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        __int64 a4,
        _DWORD *a5,
        void (__fastcall *a6)(_DWORD *, unsigned __int64, _DWORD *, _DWORD *, _DWORD *, _DWORD *))
{
  _DWORD *v6; // r14
  __int64 v7; // r15
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rbx
  __int64 v12; // rbp
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rdi
  __int64 v17; // rsi
  __int64 v19; // [rsp+0h] [rbp-8h] BYREF

  if ( (unsigned __int64)&v19 <= *(_QWORD *)(v7 + 8) )
  {
    sub_1EB84E0();
    return sub_2755000();
  }
  else
  {
    if ( a5 != v6 && a5[2] == 4 )
    {
      v9 = (unsigned int)a5[3];
      if ( (_DWORD)v9 == 0 )
        goto LABEL_7;
      v10 = v6[2 * v9] >> 3;
      if ( SHIWORD(v6[2 * v10 + 15]) >= 2 && v6[2 * v6[2 * v10 + 4] + 4] == 8057 )
        goto LABEL_7;
    }
    while ( 1 )
    {
      a6 = (void (__fastcall *)(_DWORD *, unsigned __int64, _DWORD *, _DWORD *, _DWORD *, _DWORD *))sub_2757000(a1, a2, a3: a5);
LABEL_7:
      v11 = (unsigned int)a5[4];
      if ( (_DWORD)v11 == 0 || v6[2 * v11] >> 3 == 4942163 )
      {
        v12 = (unsigned int)a5[5];
        if ( (_DWORD)v12 == 0
          || (v13 = v6[2 * v12] >> 3,
              a1 = (unsigned int)v6[2 * v13 + 11],
              (unsigned __int16)*(_DWORD *)((a2 = (unsigned __int64)&v6[2 * v6[2 * v13 + 5]])
                                          + 4LL * ((unsigned int)a1 & (0x2331u >> HIBYTE(v6[2 * v13 + 11])))
                                          + 12) == 9009) )
        {
          v14 = (unsigned int)a5[6];
          if ( (_DWORD)v14 == 0 )
            break;
          a2 = v6[2 * v14] >> 3;
          if ( SHIWORD(v6[2 * a2 + 15]) >= 3 )
          {
            a2 = (unsigned int)v6[2 * a2 + 4];
            if ( v6[2 * a2 + 5] == 72321 )
              break;
          }
        }
      }
    }
    a6(a1: &v6[2 * v14], a2, a3: &v6[2 * v9], a4: &v6[2 * v14], a5: &v6[2 * v11], a6: &v6[2 * v12]);
    if ( *(int *)(v7 + 16) <= 0 )
      sub_277F280(a1: v16, a2: v17, a3: v15);
    return (__int64)v6;
  }
}
