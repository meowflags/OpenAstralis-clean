// sub_18274FD80
// rva 0x0274fd80  size 432  section .text  group text
// window base 0x18274fd80: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_18274FD80(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _DWORD *a5,
        void (__fastcall *a6)(_DWORD *, _DWORD *, __int64, _QWORD, _DWORD *, _DWORD *))
{
  __int64 v6; // rbx
  _DWORD *v7; // r14
  __int64 v8; // r15
  __int64 v10; // rcx
  __int64 v11; // rbp
  __int64 v12; // rcx
  __int64 v13; // rsi
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rdi
  __int64 v17; // r9
  int v18; // edi
  unsigned int v19; // r8d
  __int64 v20; // rdx
  __int64 v21; // rdi
  __int64 v22; // rsi
  __int64 v24; // [rsp+0h] [rbp-8h] BYREF

  if ( (unsigned __int64)&v24 <= *(_QWORD *)(v8 + 8) )
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
    return sub_18274FF40();
  }
  else
  {
    if ( a5 != v7 && a5[2] == 5 )
    {
      v6 = (unsigned int)a5[3];
      if ( (_DWORD)v6 == 0 )
        goto LABEL_7;
      v10 = v7[2 * v6] >> 3;
      if ( SHIWORD(v7[2 * v10 + 15]) >= 2 && v7[2 * v7[2 * v10 + 4] + 4] == 36652 )
        goto LABEL_7;
    }
    do
    {
      while ( 1 )
      {
        a6 = (void (__fastcall *)(_DWORD *, _DWORD *, __int64, _QWORD, _DWORD *, _DWORD *))sub_182756FC0();
LABEL_7:
        v11 = (unsigned int)a5[4];
        if ( (_DWORD)v11 != 0 )
        {
          v12 = v7[2 * v11] >> 3;
          if ( SHIWORD(v7[2 * v12 + 15]) < 2 || v7[2 * v7[2 * v12 + 4] + 4] != 1350 )
            continue;
        }
        v13 = (unsigned int)a5[5];
        if ( (_DWORD)v13 != 0 )
        {
          v14 = v7[2 * v13] >> 3;
          if ( (unsigned __int16)v7[2 * v7[2 * v14 + 5] + 3 + (v7[2 * v14 + 11] & (0x2360u >> HIBYTE(v7[2 * v14 + 11])))] != 9056 )
            continue;
        }
        v15 = (unsigned int)a5[6];
        if ( (_DWORD)v15 != 0 )
        {
          v16 = v7[2 * v15] >> 3;
          if ( SHIWORD(v7[2 * v16 + 15]) < 2 || v7[2 * v7[2 * v16 + 4] + 4] != 37014 )
            continue;
        }
        v17 = (unsigned int)a5[7];
        if ( (_DWORD)v17 != 0 )
          break;
      }
      v18 = v7[2 * v17] >> 3;
      switch ( v18 )
      {
        case 4260808:
          v19 = v7[2 * v17 + 1];
          goto LABEL_20;
        case 4288437:
          v19 = SLOBYTE(v7[2 * v17 + 1]);
          goto LABEL_20;
        case 4288459:
          v19 = SLOWORD(v7[2 * v17 + 1]);
          goto LABEL_20;
        default:
          break;
      }
    }
    while ( v18 != 4288481 );
    v19 = LOWORD(v7[2 * v17 + 1]);
LABEL_20:
    a6(a1: &v7[2 * v13], a2: &v7[2 * v15], a3, a4: v19, a5: &v7[2 * v6], a6: &v7[2 * v11]);
    if ( *(int *)(v8 + 16) <= 0 )
      sub_18277F280(a1: v21, a2: v22, a3: v20);
    return (__int64)v7;
  }
}
