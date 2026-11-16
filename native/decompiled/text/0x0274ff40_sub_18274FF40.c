// sub_18274FF40
// rva 0x0274ff40  size 632  section .text  group text
// window base 0x18274ff40: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_18274FF40(
        __int64 a1,
        __int64 a2,
        double a3,
        double a4,
        __int64 a5,
        __int64 a6,
        _DWORD *a7,
        __int64 (__fastcall *a8)(__int64, __int64, __int64, __int64, _DWORD *, double, double))
{
  _DWORD *v8; // r14
  __int64 v9; // r15
  __int64 v10; // rdx
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rcx
  int v16; // ebx
  __int64 v17; // rcx
  int v18; // ebx
  __int64 result; // rax
  __int64 v20; // rdx
  __int64 v21; // rdi
  __int64 v22; // rsi
  __int64 v23; // [rsp+0h] [rbp-8h] BYREF

  if ( (unsigned __int64)&v23 <= *(_QWORD *)(v9 + 8) )
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
    return sub_1827501C0();
  }
  if ( a7 == v8 )
    goto LABEL_9;
  if ( a7[2] != 4 )
    goto LABEL_9;
  v10 = (unsigned int)a7[3];
  if ( (_DWORD)v10 == 0 )
    goto LABEL_9;
  v11 = v8[2 * v10] >> 3;
  switch ( v11 )
  {
    case 4260808:
      v12 = (unsigned int)v8[2 * v10 + 1];
LABEL_7:
      v13 = (unsigned int)a7[4];
      if ( (_DWORD)v13 == 0 )
        goto LABEL_10;
      v14 = v8[2 * v13] >> 3;
      if ( SHIWORD(v8[2 * v14 + 15]) >= 2 && v8[2 * v8[2 * v14 + 4] + 4] == 57683 )
        goto LABEL_10;
      goto LABEL_9;
    case 4288437:
      v12 = (unsigned int)SLOBYTE(v8[2 * v10 + 1]);
      goto LABEL_7;
    case 4288459:
      v12 = (unsigned int)SLOWORD(v8[2 * v10 + 1]);
      goto LABEL_7;
    case 4288481:
      v12 = LOWORD(v8[2 * v10 + 1]);
      goto LABEL_7;
    default:
      break;
  }
  while ( 1 )
  {
    while ( 1 )
    {
      do
      {
LABEL_9:
        v13 = sub_182757000(a1, a2, a3: a7);
LABEL_10:
        v15 = (unsigned int)a7[5];
      }
      while ( (_DWORD)v15 == 0 );
      v16 = v8[2 * v15] >> 3;
      if ( v16 == 4279946 )
        break;
      switch ( v16 )
      {
        case 4260808:
          *(float *)&a3 = (float)(int)v8[2 * v15 + 1];
          goto LABEL_13;
        case 4260452:
          *(float *)&a3 = (float)*(__int64 *)&v8[2 * v15 + 2];
          goto LABEL_13;
        case 4288437:
          *(float *)&a3 = (float)SLOBYTE(v8[2 * v15 + 1]);
          goto LABEL_13;
        case 4288459:
          *(float *)&a3 = (float)SLOWORD(v8[2 * v15 + 1]);
          goto LABEL_13;
        case 4288481:
          *(float *)&a3 = (float)LOWORD(v8[2 * v15 + 1]);
          goto LABEL_13;
        default:
          break;
      }
    }
    *(_QWORD *)&a3 = (unsigned int)v8[2 * v15 + 1];
LABEL_13:
    v17 = (unsigned int)a7[6];
    if ( (_DWORD)v17 != 0 )
    {
      v18 = v8[2 * v17] >> 3;
      switch ( v18 )
      {
        case 4279946:
          *(_QWORD *)&a4 = (unsigned int)v8[2 * v17 + 1];
          goto LABEL_16;
        case 4260808:
          *(float *)&a4 = (float)(int)v8[2 * v17 + 1];
          goto LABEL_16;
        case 4260452:
          *(float *)&a4 = (float)*(__int64 *)&v8[2 * v17 + 2];
          goto LABEL_16;
        case 4288437:
          *(float *)&a4 = (float)SLOBYTE(v8[2 * v17 + 1]);
          goto LABEL_16;
        case 4288459:
          *(float *)&a4 = (float)SLOWORD(v8[2 * v17 + 1]);
          goto LABEL_16;
        default:
          break;
      }
      if ( v18 == 4288481 )
        break;
    }
  }
  *(float *)&a4 = (float)LOWORD(v8[2 * v17 + 1]);
LABEL_16:
  result = a8(a1, a2, a3: v12, a4: v17, a5: &v8[2 * v13], a6: a3, a7: a4);
  if ( *(int *)(v9 + 16) <= 0 )
    return sub_18277F280(a1: v21, a2: v22, a3: v20);
  return result;
}
