// sub_274BD00
// rva 0x0274bd00  size 536  section .text  group text
// window base 0x18274bd00: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_274BD00(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _DWORD *a5,
        __int64 (__fastcall *a6)(__int64, __int64, _DWORD *, _DWORD *, _DWORD *, _QWORD, double))
{
  _DWORD *v6; // r14
  __int64 v7; // r15
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rbx
  __int64 v13; // r9
  int v14; // ebx
  double v15; // xmm0_8
  __int64 v16; // r9
  int v17; // ebx
  unsigned int v18; // r8d
  __int64 result; // rax
  __int64 v20; // rdx
  __int64 v21; // rdi
  __int64 v22; // rsi
  __int64 v23; // [rsp+0h] [rbp-8h] BYREF

  if ( (unsigned __int64)&v23 <= *(_QWORD *)(v7 + 8) )
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
    return sub_274BF20();
  }
  if ( a5 != v6 && a5[2] == 4 )
  {
    v9 = (unsigned int)a5[3];
    if ( (_DWORD)v9 == 0
      || (v10 = v6[2 * v9] >> 3,
          a2 = v6[2 * v10 + 11] & (0xE6Cu >> HIBYTE(v6[2 * v10 + 11])),
          (unsigned __int16)v6[2 * (unsigned int)v6[2 * v10 + 5] + 3 + a2] == 3692) )
    {
      v11 = (unsigned int)a5[4];
      if ( (_DWORD)v11 == 0 )
        goto LABEL_9;
      v12 = v6[2 * v11] >> 3;
      if ( SHIWORD(v6[2 * v12 + 15]) >= 2 && v6[2 * v6[2 * v12 + 4] + 4] == 7936 )
        goto LABEL_9;
    }
  }
  while ( 1 )
  {
    while ( 1 )
    {
      do
      {
        a6 = (__int64 (__fastcall *)(__int64, __int64, _DWORD *, _DWORD *, _DWORD *, _QWORD, double))sub_2757000(a1, a2, a3: a5);
LABEL_9:
        v13 = (unsigned int)a5[5];
      }
      while ( (_DWORD)v13 == 0 );
      v14 = v6[2 * v13] >> 3;
      if ( v14 == 4260831 )
        break;
      switch ( v14 )
      {
        case 4279946:
          v15 = *(float *)&v6[2 * v13 + 1];
          goto LABEL_12;
        case 4260808:
          v15 = (double)(int)v6[2 * v13 + 1];
          goto LABEL_12;
        case 4260452:
          v15 = (double)*(__int64 *)&v6[2 * v13 + 2];
          goto LABEL_12;
        case 4288437:
          v15 = (double)SLOBYTE(v6[2 * v13 + 1]);
          goto LABEL_12;
        case 4288459:
          v15 = (double)SLOWORD(v6[2 * v13 + 1]);
          goto LABEL_12;
        case 4288481:
          v15 = (double)LOWORD(v6[2 * v13 + 1]);
          goto LABEL_12;
        default:
          break;
      }
    }
    v15 = *(double *)&v6[2 * v13 + 2];
LABEL_12:
    v16 = (unsigned int)a5[6];
    if ( (_DWORD)v16 != 0 )
    {
      v17 = v6[2 * v16] >> 3;
      switch ( v17 )
      {
        case 4260808:
          v18 = v6[2 * v16 + 1];
          goto LABEL_15;
        case 4288437:
          v18 = SLOBYTE(v6[2 * v16 + 1]);
          goto LABEL_15;
        case 4288459:
          v18 = SLOWORD(v6[2 * v16 + 1]);
          goto LABEL_15;
        default:
          break;
      }
      if ( v17 == 4288481 )
        break;
    }
  }
  v18 = LOWORD(v6[2 * v16 + 1]);
LABEL_15:
  result = a6(a1, a2, a3: &v6[2 * v9], a4: &v6[2 * v11], a5: &v6[2 * v11], a6: v18, a7: v15);
  if ( *(int *)(v7 + 16) <= 0 )
    return sub_277F280(a1: v21, a2: v22, a3: v20);
  return result;
}
