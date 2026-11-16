// sub_2756020
// rva 0x02756020  size 536  section .text  group text
// window base 0x182756020: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_2756020(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        double a4,
        double a5,
        __int64 a6,
        _DWORD *a7,
        void (__fastcall *a8)(__int64, __int64, __int64, _DWORD *, _DWORD *, _DWORD *, double, double))
{
  _DWORD *v8; // r14
  __int64 v9; // r15
  __int64 v11; // rcx
  __int64 v12; // rbx
  __int64 v13; // rbx
  __int64 v14; // rbp
  __int64 v15; // r9
  int v16; // ebp
  __int64 v17; // r9
  int v18; // ebp
  __int64 v19; // rdx
  __int64 v20; // rdi
  __int64 v21; // rsi
  __int64 v23; // [rsp+0h] [rbp-8h] BYREF

  if ( (unsigned __int64)&v23 <= *(_QWORD *)(v9 + 8) )
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
    return sub_2756240();
  }
  if ( a7 != v8 && a7[2] == 4 )
  {
    v11 = (unsigned int)a7[3];
    if ( (_DWORD)v11 == 0 )
      goto LABEL_7;
    v12 = v8[2 * v11] >> 3;
    if ( SHIWORD(v8[2 * v12 + 15]) >= 7 && v8[2 * v8[2 * v12 + 4] + 9] == 95350 )
      goto LABEL_7;
  }
  while ( 1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        a8 = (void (__fastcall *)(__int64, __int64, __int64, _DWORD *, _DWORD *, _DWORD *, double, double))sub_2756FC0();
LABEL_7:
        v13 = (unsigned int)a7[4];
        if ( (_DWORD)v13 != 0 )
        {
          v14 = v8[2 * v13] >> 3;
          if ( SHIWORD(v8[2 * v14 + 15]) < 2 || v8[2 * v8[2 * v14 + 4] + 4] != 1350 )
            continue;
        }
        v15 = (unsigned int)a7[5];
        if ( (_DWORD)v15 != 0 )
          break;
      }
      v16 = v8[2 * v15] >> 3;
      if ( v16 == 4279946 )
        break;
      switch ( v16 )
      {
        case 4260808:
          *(float *)&a4 = (float)(int)v8[2 * v15 + 1];
          goto LABEL_13;
        case 4260452:
          *(float *)&a4 = (float)*(__int64 *)&v8[2 * v15 + 2];
          goto LABEL_13;
        case 4288437:
          *(float *)&a4 = (float)SLOBYTE(v8[2 * v15 + 1]);
          goto LABEL_13;
        case 4288459:
          *(float *)&a4 = (float)SLOWORD(v8[2 * v15 + 1]);
          goto LABEL_13;
        case 4288481:
          *(float *)&a4 = (float)LOWORD(v8[2 * v15 + 1]);
          goto LABEL_13;
        default:
          break;
      }
    }
    *(_QWORD *)&a4 = (unsigned int)v8[2 * v15 + 1];
LABEL_13:
    v17 = (unsigned int)a7[6];
    if ( (_DWORD)v17 != 0 )
    {
      v18 = v8[2 * v17] >> 3;
      switch ( v18 )
      {
        case 4279946:
          *(_QWORD *)&a5 = (unsigned int)v8[2 * v17 + 1];
          goto LABEL_16;
        case 4260808:
          *(float *)&a5 = (float)(int)v8[2 * v17 + 1];
          goto LABEL_16;
        case 4260452:
          *(float *)&a5 = (float)*(__int64 *)&v8[2 * v17 + 2];
          goto LABEL_16;
        case 4288437:
          *(float *)&a5 = (float)SLOBYTE(v8[2 * v17 + 1]);
          goto LABEL_16;
        case 4288459:
          *(float *)&a5 = (float)SLOWORD(v8[2 * v17 + 1]);
          goto LABEL_16;
        default:
          break;
      }
      if ( v18 == 4288481 )
        break;
    }
  }
  *(float *)&a5 = (float)LOWORD(v8[2 * v17 + 1]);
LABEL_16:
  a8(a1, a2, a3, a4: &v8[2 * v11], a5: &v8[2 * v11], a6: &v8[2 * v13], a7: a4, a8: a5);
  if ( *(int *)(v9 + 16) <= 0 )
    sub_277F280(a1: v20, a2: v21, a3: v19);
  return (__int64)v8;
}
