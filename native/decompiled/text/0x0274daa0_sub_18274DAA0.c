// sub_18274DAA0
// rva 0x0274daa0  size 1563  section .text  group text
// window base 0x18274daa0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_18274DAA0(
        __int64 a1,
        __int64 a2,
        double a3,
        double a4,
        double a5,
        double a6,
        __int64 a7,
        __int64 a8,
        _DWORD *a9,
        void (__fastcall *a10)(_QWORD, _QWORD, _DWORD *, _QWORD, _DWORD *, _QWORD, double, double, double, double))
{
  _DWORD *v10; // r14
  __int64 v11; // r15
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r9
  int v16; // ecx
  __int64 v17; // rcx
  int v18; // ebx
  unsigned int v19; // ecx
  __int64 v20; // rbx
  int v21; // ebp
  __int64 v22; // rbx
  int v23; // ebp
  __int64 v24; // rbx
  int v25; // ebp
  unsigned int v26; // r8d
  __int64 v27; // rdx
  __int64 v28; // rdi
  __int64 v29; // rsi
  __int64 v31; // rax
  __int64 v32; // rdi
  __int64 v33; // rsi
  __int64 v34; // [rsp+0h] [rbp-8h] BYREF

  if ( (unsigned __int64)&v34 <= *(_QWORD *)(v11 + 8) )
    goto LABEL_100;
  if ( a9 == v10 )
    goto LABEL_99;
  if ( a9[2] != 10 )
    goto LABEL_99;
  v13 = (unsigned int)a9[3];
  if ( (_DWORD)v13 != 0 )
  {
    v14 = v10[2 * v13] >> 3;
    a2 = v10[2 * v14 + 11] & (0x17Fu >> HIBYTE(v10[2 * v14 + 11]));
    a1 = (unsigned __int16)v10[2 * (unsigned int)v10[2 * v14 + 5] + 3 + a2];
    if ( (_DWORD)a1 != 383 )
      goto LABEL_99;
  }
  v15 = (unsigned int)a9[4];
  if ( (_DWORD)v15 != 0 )
  {
    a1 = v10[2 * v15] >> 3;
    if ( (_DWORD)a1 != 4425568 )
      goto LABEL_99;
  }
  a1 = (unsigned int)a9[5];
  if ( (_DWORD)a1 == 0 )
    goto LABEL_99;
  a2 = v10[2 * a1] >> 3;
  switch ( (_DWORD)a2 )
  {
    case 0x410264:
      *(float *)&a3 = (float)*(__int64 *)&v10[2 * a1 + 2];
      break;
    case 0x4103C8:
      *(float *)&a3 = (float)(int)v10[2 * a1 + 1];
      break;
    case 0x414E8A:
      *(_QWORD *)&a3 = (unsigned int)v10[2 * a1 + 1];
      break;
    case 0x416FB5:
      *(float *)&a3 = (float)SLOBYTE(v10[2 * a1 + 1]);
      break;
    case 0x416FCB:
      *(float *)&a3 = (float)SLOWORD(v10[2 * a1 + 1]);
      break;
    case 0x416FE1:
      *(float *)&a3 = (float)LOWORD(v10[2 * a1 + 1]);
      break;
    default:
      goto LABEL_99;
  }
  a1 = (unsigned int)a9[6];
  if ( (_DWORD)a1 == 0 )
    goto LABEL_99;
  a2 = v10[2 * a1] >> 3;
  switch ( (_DWORD)a2 )
  {
    case 0x410264:
      *(float *)&a4 = (float)*(__int64 *)&v10[2 * a1 + 2];
      break;
    case 0x4103C8:
      *(float *)&a4 = (float)(int)v10[2 * a1 + 1];
      break;
    case 0x414E8A:
      *(_QWORD *)&a4 = (unsigned int)v10[2 * a1 + 1];
      break;
    case 0x416FB5:
      *(float *)&a4 = (float)SLOBYTE(v10[2 * a1 + 1]);
      break;
    case 0x416FCB:
      *(float *)&a4 = (float)SLOWORD(v10[2 * a1 + 1]);
      break;
    case 0x416FE1:
      *(float *)&a4 = (float)LOWORD(v10[2 * a1 + 1]);
      break;
    default:
      goto LABEL_99;
  }
  a1 = (unsigned int)a9[7];
  if ( (_DWORD)a1 == 0 )
    goto LABEL_99;
  a2 = v10[2 * a1] >> 3;
  switch ( (_DWORD)a2 )
  {
    case 0x4103C8:
      a1 = (unsigned int)v10[2 * a1 + 1];
      break;
    case 0x416FB5:
      a1 = (unsigned int)SLOBYTE(v10[2 * a1 + 1]);
      break;
    case 0x416FCB:
      a1 = (unsigned int)SLOWORD(v10[2 * a1 + 1]);
      break;
    case 0x416FE1:
      a1 = LOWORD(v10[2 * a1 + 1]);
      break;
    default:
      goto LABEL_99;
  }
  a2 = (unsigned int)a9[8];
  if ( (_DWORD)a2 == 0 )
    goto LABEL_99;
  v16 = v10[2 * a2] >> 3;
  switch ( v16 )
  {
    case 4260808:
      a2 = (unsigned int)v10[2 * a2 + 1];
      break;
    case 4288437:
      a2 = (unsigned int)SLOBYTE(v10[2 * a2 + 1]);
      break;
    case 4288459:
      a2 = (unsigned int)SLOWORD(v10[2 * a2 + 1]);
      break;
    case 4288481:
      a2 = LOWORD(v10[2 * a2 + 1]);
      break;
    default:
      goto LABEL_99;
  }
  v17 = (unsigned int)a9[9];
  if ( (_DWORD)v17 == 0 )
    goto LABEL_99;
  v18 = v10[2 * v17] >> 3;
  switch ( v18 )
  {
    case 4260808:
      v19 = v10[2 * v17 + 1];
      break;
    case 4288437:
      v19 = SLOBYTE(v10[2 * v17 + 1]);
      break;
    case 4288459:
      v19 = SLOWORD(v10[2 * v17 + 1]);
      break;
    case 4288481:
      v19 = LOWORD(v10[2 * v17 + 1]);
      break;
    default:
      goto LABEL_99;
  }
  v20 = (unsigned int)a9[10];
  if ( (_DWORD)v20 == 0 )
    goto LABEL_99;
  v21 = v10[2 * v20] >> 3;
  switch ( v21 )
  {
    case 4260452:
      *(float *)&a5 = (float)*(__int64 *)&v10[2 * v20 + 2];
      break;
    case 4260808:
      *(float *)&a5 = (float)(int)v10[2 * v20 + 1];
      break;
    case 4279946:
      *(_QWORD *)&a5 = (unsigned int)v10[2 * v20 + 1];
      break;
    case 4288437:
      *(float *)&a5 = (float)SLOBYTE(v10[2 * v20 + 1]);
      break;
    case 4288459:
      *(float *)&a5 = (float)SLOWORD(v10[2 * v20 + 1]);
      break;
    case 4288481:
      *(float *)&a5 = (float)LOWORD(v10[2 * v20 + 1]);
      break;
    default:
      goto LABEL_99;
  }
  v22 = (unsigned int)a9[11];
  if ( (_DWORD)v22 == 0 )
    goto LABEL_99;
  v23 = v10[2 * v22] >> 3;
  switch ( v23 )
  {
    case 4260452:
      *(float *)&a6 = (float)*(__int64 *)&v10[2 * v22 + 2];
      break;
    case 4260808:
      *(float *)&a6 = (float)(int)v10[2 * v22 + 1];
      break;
    case 4279946:
      *(_QWORD *)&a6 = (unsigned int)v10[2 * v22 + 1];
      break;
    case 4288437:
      *(float *)&a6 = (float)SLOBYTE(v10[2 * v22 + 1]);
      break;
    case 4288459:
      *(float *)&a6 = (float)SLOWORD(v10[2 * v22 + 1]);
      break;
    case 4288481:
      *(float *)&a6 = (float)LOWORD(v10[2 * v22 + 1]);
      break;
    default:
      goto LABEL_99;
  }
  v24 = (unsigned int)a9[12];
  if ( (_DWORD)v24 == 0 )
  {
LABEL_99:
    v31 = sub_182757000(a1, a2, a3: a9);
    MEMORY[0x181DF2640](a1: v32, a2: v33, a3: v31);
LABEL_100:
    MEMORY[0x181EB84E0]();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    return sub_18274E0C0();
  }
  v25 = v10[2 * v24] >> 3;
  switch ( v25 )
  {
    case 4260808:
      v26 = v10[2 * v24 + 1];
LABEL_32:
      a10(
        a1: (unsigned int)a2,
        a2: v19,
        a3: &v10[2 * v13],
        a4: v26,
        a5: &v10[2 * v15],
        a6: (unsigned int)a1,
        a7: a3,
        a8: a4,
        a9: a5,
        a10: a6);
      if ( *(int *)(v11 + 16) <= 0 )
        sub_18277F280(a1: v28, a2: v29, a3: v27);
      return (__int64)v10;
    case 4288437:
      v26 = SLOBYTE(v10[2 * v24 + 1]);
      goto LABEL_32;
    case 4288459:
      v26 = SLOWORD(v10[2 * v24 + 1]);
      goto LABEL_32;
    case 4288481:
      v26 = LOWORD(v10[2 * v24 + 1]);
      goto LABEL_32;
    default:
      goto LABEL_99;
  }
}
