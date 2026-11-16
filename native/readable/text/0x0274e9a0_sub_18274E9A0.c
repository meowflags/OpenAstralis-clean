// sub_274E9A0
// rva 0x0274e9a0  size 280  section .text  group text
// window base 0x18274e9a0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_274E9A0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        double a4,
        __int64 a5,
        _DWORD *a6,
        void (__fastcall *a7)(__int64, __int64, __int64, __int64, _DWORD *, double))
{
  _DWORD *v7; // r14
  __int64 v8; // r15
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rcx
  int v12; // ebx
  __int64 v13; // rdx
  __int64 v14; // rdi
  __int64 v15; // rsi
  __int64 v17; // [rsp+0h] [rbp-8h] BYREF

  if ( (unsigned __int64)&v17 <= *(_QWORD *)(v8 + 8) )
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
    return sub_274EAC0();
  }
  else
  {
    if ( a6 != v7 && a6[2] == 2 )
    {
      v9 = (unsigned int)a6[3];
      if ( (_DWORD)v9 == 0 )
        goto LABEL_7;
      v10 = v7[2 * v9] >> 3;
      if ( SHIWORD(v7[2 * v10 + 15]) >= 2 && v7[2 * v7[2 * v10 + 4] + 4] == 37014 )
        goto LABEL_7;
    }
    do
    {
      do
      {
        v9 = sub_2756FC0();
LABEL_7:
        v11 = (unsigned int)a6[4];
      }
      while ( (_DWORD)v11 == 0 );
      v12 = v7[2 * v11] >> 3;
      switch ( v12 )
      {
        case 4279946:
          *(_QWORD *)&a4 = (unsigned int)v7[2 * v11 + 1];
          goto LABEL_10;
        case 4260808:
          *(float *)&a4 = (float)(int)v7[2 * v11 + 1];
          goto LABEL_10;
        case 4260452:
          *(float *)&a4 = (float)*(__int64 *)&v7[2 * v11 + 2];
          goto LABEL_10;
        case 4288437:
          *(float *)&a4 = (float)SLOBYTE(v7[2 * v11 + 1]);
          goto LABEL_10;
        case 4288459:
          *(float *)&a4 = (float)SLOWORD(v7[2 * v11 + 1]);
          goto LABEL_10;
        default:
          break;
      }
    }
    while ( v12 != 4288481 );
    *(float *)&a4 = (float)LOWORD(v7[2 * v11 + 1]);
LABEL_10:
    a7(a1, a2, a3, a4: v11, a5: &v7[2 * v9], a6: a4);
    if ( *(int *)(v8 + 16) <= 0 )
      sub_277F280(a1: v14, a2: v15, a3: v13);
    return (__int64)v7;
  }
}
