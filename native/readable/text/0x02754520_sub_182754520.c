// sub_2754520
// rva 0x02754520  size 787  section .text  group text
// window base 0x182754520: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_2754520(
        unsigned __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _DWORD *a5,
        void (__fastcall *a6)(_DWORD *, _QWORD, _DWORD *, _DWORD *, _DWORD *, _DWORD *))
{
  _DWORD *v6; // r14
  __int64 v7; // r15
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rbx
  __int64 v12; // rbp
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rcx
  unsigned int v16; // ecx
  __int64 v17; // r9
  __int64 v18; // r9
  int v19; // r10d
  int v20; // r9d
  int v21; // r10d
  __int64 v22; // r9
  int v23; // r11d
  int v24; // r8d
  __int64 v25; // rdx
  __int64 v26; // rdi
  __int64 v27; // rsi
  _DWORD v29[6]; // [rsp+0h] [rbp-18h] BYREF

  if ( (unsigned __int64)v29 <= *(_QWORD *)(v7 + 8) )
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
    return sub_2754840();
  }
  if ( a5 != v6 && a5[2] == 8 )
  {
    v9 = (unsigned int)a5[3];
    if ( (_DWORD)v9 == 0 )
      goto LABEL_7;
    v10 = v6[2 * v9] >> 3;
    if ( SHIWORD(v6[2 * v10 + 15]) >= 2 && v6[2 * v6[2 * v10 + 4] + 4] == 35152 )
      goto LABEL_7;
  }
  while ( 1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          a6 = (void (__fastcall *)(_DWORD *, _QWORD, _DWORD *, _DWORD *, _DWORD *, _DWORD *))sub_2757000(
                                                                                                a1,
                                                                                                a2,
                                                                                                a3: a5);
LABEL_7:
          v11 = (unsigned int)a5[4];
          if ( (_DWORD)v11 == 0 || v6[2 * v11] >> 3 == 4291287 )
          {
            v12 = (unsigned int)a5[5];
            if ( (_DWORD)v12 == 0
              || (v13 = v6[2 * v12] >> 3, SHIWORD(v6[2 * v13 + 15]) >= 2) && v6[2 * v6[2 * v13 + 4] + 4] == 1350 )
            {
              a2 = (unsigned int)a5[6];
              if ( (_DWORD)a2 == 0
                || (v14 = v6[2 * a2] >> 3,
                    (unsigned __int16)*(_DWORD *)((a1 = (unsigned __int64)&v6[2 * v6[2 * v14 + 5]])
                                                + 4LL * (v6[2 * v14 + 11] & (0x2360u >> HIBYTE(v6[2 * v14 + 11])))
                                                + 12) == 9056) )
              {
                v15 = (unsigned int)a5[7];
                if ( (_DWORD)v15 != 0 )
                  break;
              }
            }
          }
        }
        a1 = v6[2 * v15] >> 3;
        switch ( (_DWORD)a1 )
        {
          case 0x4103C8:
            v16 = v6[2 * v15 + 1];
            goto LABEL_17;
          case 0x416FB5:
            v16 = SLOBYTE(v6[2 * v15 + 1]);
            goto LABEL_17;
          case 0x416FCB:
            v16 = SLOWORD(v6[2 * v15 + 1]);
            goto LABEL_17;
          default:
            break;
        }
        if ( (_DWORD)a1 == 4288481 )
        {
          v16 = LOWORD(v6[2 * v15 + 1]);
LABEL_17:
          a1 = (unsigned int)a5[8];
          if ( (_DWORD)a1 == 0
            || (v17 = v6[2 * a1] >> 3, SHIWORD(v6[2 * v17 + 15]) >= 3) && v6[2 * v6[2 * v17 + 4] + 5] == 72123 )
          {
            v18 = (unsigned int)a5[9];
            if ( (_DWORD)v18 != 0 )
              break;
          }
        }
      }
      v19 = v6[2 * v18] >> 3;
      if ( v19 == 4260808 )
        break;
      switch ( v19 )
      {
        case 4288437:
          v20 = SLOBYTE(v6[2 * v18 + 1]);
          goto LABEL_25;
        case 4288459:
          v20 = SLOWORD(v6[2 * v18 + 1]);
          goto LABEL_25;
        case 4288481:
          v20 = LOWORD(v6[2 * v18 + 1]);
          goto LABEL_25;
        default:
          break;
      }
    }
    v20 = v6[2 * v18 + 1];
LABEL_25:
    v21 = v20;
    v22 = (unsigned int)a5[10];
    if ( (_DWORD)v22 != 0 )
    {
      v23 = v6[2 * v22] >> 3;
      switch ( v23 )
      {
        case 4260808:
          v24 = v6[2 * v22 + 1];
          goto LABEL_28;
        case 4288437:
          v24 = SLOBYTE(v6[2 * v22 + 1]);
          goto LABEL_28;
        case 4288459:
          v24 = SLOWORD(v6[2 * v22 + 1]);
          goto LABEL_28;
        default:
          break;
      }
      if ( v23 == 4288481 )
        break;
    }
  }
  v24 = LOWORD(v6[2 * v22 + 1]);
LABEL_28:
  v29[2] = v21;
  v29[4] = v24;
  a6(a1: &v6[2 * a2], a2: v16, a3: &v6[2 * v9], a4: &v6[2 * a1], a5: &v6[2 * v11], a6: &v6[2 * v12]);
  if ( *(int *)(v7 + 16) <= 0 )
    sub_277F280(a1: v26, a2: v27, a3: v25);
  return (__int64)v6;
}
