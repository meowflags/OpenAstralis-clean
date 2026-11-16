// sub_274EE00
// rva 0x0274ee00  size 1044  section .text  group text
// window base 0x18274ee00: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_274EE00(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _DWORD *a5,
        void (__fastcall *a6)(_QWORD, _QWORD, __int64, _QWORD, _QWORD, _QWORD))
{
  _DWORD *v6; // r14
  __int64 v7; // r15
  __int64 v9; // rdx
  int v10; // r9d
  __int64 v11; // rdx
  __int64 v12; // r9
  unsigned int v13; // r9d
  int v14; // ecx
  __int64 v15; // rcx
  int v16; // ebx
  unsigned int v17; // ecx
  __int64 v18; // rbx
  int v19; // ebp
  unsigned int v20; // ebx
  __int64 v21; // rbp
  int v22; // r10d
  int v23; // r8d
  __int64 v24; // rdx
  __int64 v25; // rdi
  __int64 v26; // rsi
  _DWORD v28[6]; // [rsp+0h] [rbp-18h] BYREF

  if ( (unsigned __int64)v28 <= *(_QWORD *)(v7 + 8) )
    goto LABEL_71;
  if ( a5 == v6 )
    goto LABEL_70;
  if ( a5[2] != 7 )
    goto LABEL_70;
  v9 = (unsigned int)a5[3];
  if ( (_DWORD)v9 == 0 )
    goto LABEL_70;
  v10 = v6[2 * v9] >> 3;
  switch ( v10 )
  {
    case 4260808:
      v11 = (unsigned int)v6[2 * v9 + 1];
      break;
    case 4288437:
      v11 = (unsigned int)SLOBYTE(v6[2 * v9 + 1]);
      break;
    case 4288459:
      v11 = (unsigned int)SLOWORD(v6[2 * v9 + 1]);
      break;
    case 4288481:
      v11 = LOWORD(v6[2 * v9 + 1]);
      break;
    default:
      goto LABEL_70;
  }
  v12 = (unsigned int)a5[4];
  if ( (_DWORD)v12 == 0 )
    goto LABEL_70;
  a1 = v6[2 * v12] >> 3;
  switch ( (_DWORD)a1 )
  {
    case 0x4103C8:
      v13 = v6[2 * v12 + 1];
      break;
    case 0x416FB5:
      v13 = SLOBYTE(v6[2 * v12 + 1]);
      break;
    case 0x416FCB:
      v13 = SLOWORD(v6[2 * v12 + 1]);
      break;
    case 0x416FE1:
      v13 = LOWORD(v6[2 * v12 + 1]);
      break;
    default:
      goto LABEL_70;
  }
  a1 = (unsigned int)a5[5];
  if ( (_DWORD)a1 == 0 )
    goto LABEL_70;
  a2 = v6[2 * a1] >> 3;
  switch ( (_DWORD)a2 )
  {
    case 0x4103C8:
      a1 = (unsigned int)v6[2 * a1 + 1];
      break;
    case 0x416FB5:
      a1 = (unsigned int)SLOBYTE(v6[2 * a1 + 1]);
      break;
    case 0x416FCB:
      a1 = (unsigned int)SLOWORD(v6[2 * a1 + 1]);
      break;
    case 0x416FE1:
      a1 = LOWORD(v6[2 * a1 + 1]);
      break;
    default:
      goto LABEL_70;
  }
  a2 = (unsigned int)a5[6];
  if ( (_DWORD)a2 == 0 )
    goto LABEL_70;
  v14 = v6[2 * a2] >> 3;
  switch ( v14 )
  {
    case 4260808:
      a2 = (unsigned int)v6[2 * a2 + 1];
      break;
    case 4288437:
      a2 = (unsigned int)SLOBYTE(v6[2 * a2 + 1]);
      break;
    case 4288459:
      a2 = (unsigned int)SLOWORD(v6[2 * a2 + 1]);
      break;
    case 4288481:
      a2 = LOWORD(v6[2 * a2 + 1]);
      break;
    default:
      goto LABEL_70;
  }
  v15 = (unsigned int)a5[7];
  if ( (_DWORD)v15 == 0 )
    goto LABEL_70;
  v16 = v6[2 * v15] >> 3;
  switch ( v16 )
  {
    case 4260808:
      v17 = v6[2 * v15 + 1];
      break;
    case 4288437:
      v17 = SLOBYTE(v6[2 * v15 + 1]);
      break;
    case 4288459:
      v17 = SLOWORD(v6[2 * v15 + 1]);
      break;
    case 4288481:
      v17 = LOWORD(v6[2 * v15 + 1]);
      break;
    default:
      goto LABEL_70;
  }
  v18 = (unsigned int)a5[8];
  if ( (_DWORD)v18 == 0 )
    goto LABEL_70;
  v19 = v6[2 * v18] >> 3;
  switch ( v19 )
  {
    case 4260808:
      v20 = v6[2 * v18 + 1];
      break;
    case 4288437:
      v20 = SLOBYTE(v6[2 * v18 + 1]);
      break;
    case 4288459:
      v20 = SLOWORD(v6[2 * v18 + 1]);
      break;
    case 4288481:
      v20 = LOWORD(v6[2 * v18 + 1]);
      break;
    default:
      goto LABEL_70;
  }
  v21 = (unsigned int)a5[9];
  if ( (_DWORD)v21 == 0 )
  {
LABEL_70:
    sub_2757000(a1, a2, a3: a5);
LABEL_71:
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
    return sub_274F220();
  }
  v22 = v6[2 * v21] >> 3;
  switch ( v22 )
  {
    case 4260808:
      v23 = v6[2 * v21 + 1];
LABEL_25:
      v28[2] = v23;
      a6(a1: (unsigned int)a2, a2: v17, a3: v11, a4: v20, a5: v13, a6: (unsigned int)a1);
      if ( *(int *)(v7 + 16) <= 0 )
        sub_277F280(a1: v25, a2: v26, a3: v24);
      return (__int64)v6;
    case 4288437:
      v23 = SLOBYTE(v6[2 * v21 + 1]);
      goto LABEL_25;
    case 4288459:
      v23 = SLOWORD(v6[2 * v21 + 1]);
      goto LABEL_25;
    case 4288481:
      v23 = LOWORD(v6[2 * v21 + 1]);
      goto LABEL_25;
    default:
      goto LABEL_70;
  }
}
