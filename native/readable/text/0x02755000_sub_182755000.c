// sub_2755000
// rva 0x02755000  size 339  section .text  group text
// window base 0x182755000: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_2755000(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _DWORD *a5,
        void (__fastcall *a6)(_DWORD *, __int64, _DWORD *, _DWORD *, _DWORD *, __int64))
{
  _DWORD *v6; // r14
  __int64 v7; // r15
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rdx
  int v12; // r9d
  __int64 v13; // rdx
  __int64 v14; // r9
  __int64 v15; // rdx
  __int64 v16; // rdx
  __int64 v17; // rdi
  __int64 v18; // rsi
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
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    return sub_2755160();
  }
  if ( a5 != v6 && a5[2] == 4 )
  {
    v9 = (unsigned int)a5[3];
    if ( (_DWORD)v9 == 0 )
      goto LABEL_7;
    v10 = v6[2 * v9] >> 3;
    if ( SHIWORD(v6[2 * v10 + 15]) >= 2 && v6[2 * v6[2 * v10 + 4] + 4] == 27444 )
      goto LABEL_7;
  }
  do
  {
    while ( 1 )
    {
      do
      {
        a6 = (void (__fastcall *)(_DWORD *, __int64, _DWORD *, _DWORD *, _DWORD *, __int64))sub_2757000(
                                                                                              a1,
                                                                                              a2,
                                                                                              a3: a5);
LABEL_7:
        v11 = (unsigned int)a5[5];
      }
      while ( (_DWORD)v11 == 0 );
      v12 = v6[2 * v11] >> 3;
      if ( v12 == 4260452 )
        break;
      switch ( v12 )
      {
        case 4260808:
          v13 = (int)v6[2 * v11 + 1];
          goto LABEL_10;
        case 4288437:
          v13 = SLOBYTE(v6[2 * v11 + 1]);
          goto LABEL_10;
        case 4288459:
          v13 = SLOWORD(v6[2 * v11 + 1]);
          goto LABEL_10;
        case 4288481:
          v13 = LOWORD(v6[2 * v11 + 1]);
          goto LABEL_10;
        default:
          break;
      }
    }
    v13 = *(_QWORD *)&v6[2 * v11 + 2];
LABEL_10:
    v14 = v13;
    v15 = (unsigned int)a5[6];
    if ( (_DWORD)v15 == 0 )
      break;
    a1 = v6[2 * v15] >> 3;
  }
  while ( (_DWORD)a1 != 4981966 );
  a6(a1: &v6[2 * v15], a2, a3: &v6[2 * v9], a4: &v6[2 * v9], a5: &v6[2 * a5[4]], a6: v14);
  if ( *(int *)(v7 + 16) <= 0 )
    sub_277F280(a1: v17, a2: v18, a3: v16);
  return (__int64)v6;
}
