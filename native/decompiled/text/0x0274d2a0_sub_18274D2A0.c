// sub_18274D2A0
// rva 0x0274d2a0  size 600  section .text  group text
// window base 0x18274d2a0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_18274D2A0(
        unsigned __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _DWORD *a5,
        void (__fastcall *a6)(_DWORD *, _DWORD *, _DWORD *, _DWORD *, _DWORD *, _DWORD *, double))
{
  _DWORD *v6; // r14
  __int64 v7; // r15
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rbx
  __int64 v12; // rcx
  __int64 v13; // rbp
  __int64 v14; // rcx
  __int64 v15; // rcx
  int v16; // r9d
  double v17; // xmm0_8
  __int64 v18; // r9
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rdi
  __int64 v22; // rsi
  __int64 v24; // [rsp+0h] [rbp-8h] BYREF

  if ( (unsigned __int64)&v24 <= *(_QWORD *)(v7 + 8) )
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
    return sub_18274D500();
  }
  if ( a5 != v6 && a5[2] == 6 )
  {
    v9 = (unsigned int)a5[3];
    if ( (_DWORD)v9 == 0 )
      goto LABEL_7;
    v10 = v6[2 * v9] >> 3;
    if ( SHIWORD(v6[2 * v10 + 15]) >= 3 && v6[2 * v6[2 * v10 + 4] + 5] == 72325 )
      goto LABEL_7;
  }
  while ( 1 )
  {
    while ( 1 )
    {
      a6 = (void (__fastcall *)(_DWORD *, _DWORD *, _DWORD *, _DWORD *, _DWORD *, _DWORD *, double))sub_182757000(a1, a2, a3: a5);
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
      if ( (_DWORD)v15 != 0 )
        break;
    }
    v16 = v6[2 * v15] >> 3;
    switch ( v16 )
    {
      case 4260831:
        v17 = *(double *)&v6[2 * v15 + 2];
        goto LABEL_18;
      case 4279946:
        v17 = *(float *)&v6[2 * v15 + 1];
        goto LABEL_18;
      case 4260808:
        v17 = (double)(int)v6[2 * v15 + 1];
        goto LABEL_18;
      case 4260452:
        v17 = (double)*(__int64 *)&v6[2 * v15 + 2];
        goto LABEL_18;
      case 4288437:
        v17 = (double)SLOBYTE(v6[2 * v15 + 1]);
        goto LABEL_18;
      case 4288459:
        v17 = (double)SLOWORD(v6[2 * v15 + 1]);
        goto LABEL_18;
      default:
        break;
    }
    if ( v16 == 4288481 )
    {
      v17 = (double)LOWORD(v6[2 * v15 + 1]);
LABEL_18:
      v18 = (unsigned int)a5[7];
      if ( (_DWORD)v18 == 0
        || (v19 = v6[2 * v18] >> 3,
            a1 = (unsigned __int64)&v6[2 * v6[2 * v19 + 5]],
            (_DWORD)(a2 = (unsigned __int16)*(_DWORD *)(a1
                                                      + 4LL * (v6[2 * v19 + 11] & (0xDC5u >> HIBYTE(v6[2 * v19 + 11])))
                                                      + 12)) == 3525) )
      {
        a1 = (unsigned int)a5[8];
        if ( (_DWORD)a1 == 0 )
          break;
        a2 = v6[2 * a1] >> 3;
        if ( (_DWORD)a2 == 4549794 )
          break;
      }
    }
  }
  a6(a1: &v6[2 * v18], a2: &v6[2 * a1], a3: &v6[2 * v9], a4: &v6[2 * a1], a5: &v6[2 * v11], a6: &v6[2 * v13], a7: v17);
  if ( *(int *)(v7 + 16) <= 0 )
    sub_18277F280(a1: v21, a2: v22, a3: v20);
  return (__int64)v6;
}
