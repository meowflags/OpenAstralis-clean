// sub_2756360
// rva 0x02756360  size 344  section .text  group text
// window base 0x182756360: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_2756360(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        double a4,
        __int64 a5,
        _DWORD *a6,
        void (__fastcall *a7)(__int64, __int64, __int64, _DWORD *, _DWORD *, _DWORD *, double))
{
  _DWORD *v7; // r14
  __int64 v8; // r15
  __int64 v10; // rcx
  __int64 v11; // rbx
  __int64 v12; // rbx
  __int64 v13; // rbp
  __int64 v14; // r9
  int v15; // ebp
  __int64 v16; // rdx
  __int64 v17; // rdi
  __int64 v18; // rsi
  __int64 v20; // [rsp+0h] [rbp-8h] BYREF

  if ( (unsigned __int64)&v20 <= *(_QWORD *)(v8 + 8) )
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
    return sub_27564C0();
  }
  else
  {
    if ( a6 != v7 && a6[2] == 3 )
    {
      v10 = (unsigned int)a6[3];
      if ( (_DWORD)v10 == 0 )
        goto LABEL_7;
      v11 = v7[2 * v10] >> 3;
      if ( SHIWORD(v7[2 * v11 + 15]) >= 8 && v7[2 * v7[2 * v11 + 4] + 10] == 96191 )
        goto LABEL_7;
    }
    do
    {
      while ( 1 )
      {
        a7 = (void (__fastcall *)(__int64, __int64, __int64, _DWORD *, _DWORD *, _DWORD *, double))sub_2756FC0();
LABEL_7:
        v12 = (unsigned int)a6[4];
        if ( (_DWORD)v12 != 0 )
        {
          v13 = v7[2 * v12] >> 3;
          if ( SHIWORD(v7[2 * v13 + 15]) < 4 || v7[2 * v7[2 * v13 + 4] + 6] != 82708 )
            continue;
        }
        v14 = (unsigned int)a6[5];
        if ( (_DWORD)v14 != 0 )
          break;
      }
      v15 = v7[2 * v14] >> 3;
      switch ( v15 )
      {
        case 4279946:
          *(_QWORD *)&a4 = (unsigned int)v7[2 * v14 + 1];
          goto LABEL_13;
        case 4260808:
          *(float *)&a4 = (float)(int)v7[2 * v14 + 1];
          goto LABEL_13;
        case 4260452:
          *(float *)&a4 = (float)*(__int64 *)&v7[2 * v14 + 2];
          goto LABEL_13;
        case 4288437:
          *(float *)&a4 = (float)SLOBYTE(v7[2 * v14 + 1]);
          goto LABEL_13;
        case 4288459:
          *(float *)&a4 = (float)SLOWORD(v7[2 * v14 + 1]);
          goto LABEL_13;
        default:
          break;
      }
    }
    while ( v15 != 4288481 );
    *(float *)&a4 = (float)LOWORD(v7[2 * v14 + 1]);
LABEL_13:
    a7(a1, a2, a3, a4: &v7[2 * v10], a5: &v7[2 * v10], a6: &v7[2 * v12], a7: a4);
    if ( *(int *)(v8 + 16) <= 0 )
      sub_277F280(a1: v17, a2: v18, a3: v16);
    return (__int64)v7;
  }
}
