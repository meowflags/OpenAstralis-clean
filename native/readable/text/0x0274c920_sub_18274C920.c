// sub_274C920
// rva 0x0274c920  size 403  section .text  group text
// window base 0x18274c920: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_274C920(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _DWORD *a5,
        __int64 (__fastcall *a6)(_QWORD, __int64, _DWORD *, _DWORD *, _DWORD *, __int64))
{
  _DWORD *v6; // r14
  __int64 v7; // r15
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rdx
  __int64 v12; // rbx
  __int64 v13; // r9
  __int64 v14; // r9
  int v15; // ebx
  unsigned int v16; // r8d
  __int64 result; // rax
  __int64 v18; // rdx
  __int64 v19; // rdi
  __int64 v20; // rsi
  __int64 v21; // [rsp+0h] [rbp-8h] BYREF

  if ( (unsigned __int64)&v21 <= *(_QWORD *)(v7 + 8) )
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
    return sub_274CAC0();
  }
  if ( a5 != v6 && a5[2] == 4 )
  {
    v9 = (unsigned int)a5[3];
    if ( (_DWORD)v9 == 0 )
      goto LABEL_7;
    v10 = v6[2 * v9] >> 3;
    if ( SHIWORD(v6[2 * v10 + 15]) >= 5 && v6[2 * v6[2 * v10 + 4] + 7] == 93799 )
      goto LABEL_7;
  }
  while ( 1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        a6 = (__int64 (__fastcall *)(_QWORD, __int64, _DWORD *, _DWORD *, _DWORD *, __int64))sub_2757000(
                                                                                               a1,
                                                                                               a2,
                                                                                               a3: a5);
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
          break;
      }
      a1 = v6[2 * v13] >> 3;
      if ( (_DWORD)a1 == 4260808 )
        break;
      switch ( (_DWORD)a1 )
      {
        case 0x416FB5:
          v14 = (unsigned int)SLOBYTE(v6[2 * v13 + 1]);
          goto LABEL_13;
        case 0x416FCB:
          v14 = (unsigned int)SLOWORD(v6[2 * v13 + 1]);
          goto LABEL_13;
        case 0x416FE1:
          v14 = LOWORD(v6[2 * v13 + 1]);
          goto LABEL_13;
        default:
          break;
      }
    }
    v14 = (unsigned int)v6[2 * v13 + 1];
LABEL_13:
    a1 = (unsigned int)a5[6];
    if ( (_DWORD)a1 != 0 )
    {
      v15 = v6[2 * a1] >> 3;
      switch ( v15 )
      {
        case 4260808:
          v16 = v6[2 * a1 + 1];
          goto LABEL_16;
        case 4288437:
          v16 = SLOBYTE(v6[2 * a1 + 1]);
          goto LABEL_16;
        case 4288459:
          v16 = SLOWORD(v6[2 * a1 + 1]);
          goto LABEL_16;
        default:
          break;
      }
      if ( v15 == 4288481 )
        break;
    }
  }
  v16 = LOWORD(v6[2 * a1 + 1]);
LABEL_16:
  result = a6(a1: v16, a2, a3: &v6[2 * v9], a4: &v6[2 * v9], a5: &v6[2 * v11], a6: v14);
  if ( *(int *)(v7 + 16) <= 0 )
    return sub_277F280(a1: v19, a2: v20, a3: v18);
  return result;
}
