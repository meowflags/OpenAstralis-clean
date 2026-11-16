// sub_1827519A0
// rva 0x027519a0  size 763  section .text  group text
// window base 0x1827519a0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1827519A0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _DWORD *a5,
        __int64 (__fastcall *a6)(__int64, __int64, _DWORD *, double, double, double))
{
  _DWORD *v6; // r14
  __int64 v7; // r15
  __int64 v8; // rdx
  __int64 v9; // rax
  int v10; // ecx
  double v11; // xmm0_8
  __int64 v12; // rax
  int v13; // ecx
  double v14; // xmm1_8
  __int64 v15; // rax
  int v16; // ecx
  double v17; // xmm2_8
  __int64 result; // rax
  __int64 v19; // rdx
  __int64 v20; // rdi
  __int64 v21; // rsi
  __int64 v22; // [rsp+0h] [rbp-8h] BYREF

  if ( (unsigned __int64)&v22 <= *(_QWORD *)(v7 + 8) )
    goto LABEL_55;
  if ( a5 == v6 )
    goto LABEL_54;
  if ( a5[2] != 4 )
    goto LABEL_54;
  v8 = (unsigned int)a5[3];
  if ( (_DWORD)v8 != 0 && v6[2 * v8] >> 3 != 4260335 )
    goto LABEL_54;
  v9 = (unsigned int)a5[4];
  if ( (_DWORD)v9 == 0 )
    goto LABEL_54;
  v10 = v6[2 * v9] >> 3;
  switch ( v10 )
  {
    case 4260452:
      v11 = (double)*(__int64 *)&v6[2 * v9 + 2];
      break;
    case 4260808:
      v11 = (double)(int)v6[2 * v9 + 1];
      break;
    case 4260831:
      v11 = *(double *)&v6[2 * v9 + 2];
      break;
    case 4279946:
      v11 = *(float *)&v6[2 * v9 + 1];
      break;
    case 4288437:
      v11 = (double)SLOBYTE(v6[2 * v9 + 1]);
      break;
    case 4288459:
      v11 = (double)SLOWORD(v6[2 * v9 + 1]);
      break;
    case 4288481:
      v11 = (double)LOWORD(v6[2 * v9 + 1]);
      break;
    default:
      goto LABEL_54;
  }
  v12 = (unsigned int)a5[5];
  if ( (_DWORD)v12 == 0 )
  {
LABEL_54:
    sub_182757000(a1, a2, a3: a5);
LABEL_55:
    MEMORY[0x181EB84E0]();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    return sub_182751CA0();
  }
  v13 = v6[2 * v12] >> 3;
  switch ( v13 )
  {
    case 4260452:
      v14 = (double)*(__int64 *)&v6[2 * v12 + 2];
      goto LABEL_12;
    case 4260808:
      v14 = (double)(int)v6[2 * v12 + 1];
      goto LABEL_12;
    case 4260831:
      v14 = *(double *)&v6[2 * v12 + 2];
LABEL_12:
      v15 = (unsigned int)a5[6];
      if ( (_DWORD)v15 == 0 )
        goto LABEL_54;
      v16 = v6[2 * v15] >> 3;
      switch ( v16 )
      {
        case 4260452:
          v17 = (double)*(__int64 *)&v6[2 * v15 + 2];
          goto LABEL_15;
        case 4260808:
          v17 = (double)(int)v6[2 * v15 + 1];
          goto LABEL_15;
        case 4260831:
          v17 = *(double *)&v6[2 * v15 + 2];
          goto LABEL_15;
        case 4279946:
          v17 = *(float *)&v6[2 * v15 + 1];
          goto LABEL_15;
        case 4288437:
          v17 = (double)SLOBYTE(v6[2 * v15 + 1]);
          goto LABEL_15;
        case 4288459:
          v17 = (double)SLOWORD(v6[2 * v15 + 1]);
          goto LABEL_15;
        case 4288481:
          v17 = (double)LOWORD(v6[2 * v15 + 1]);
LABEL_15:
          result = a6(a1, a2, a3: &v6[2 * v8], a4: v11, a5: v14, a6: v17);
          if ( *(int *)(v7 + 16) <= 0 )
            return sub_18277F280(a1: v20, a2: v21, a3: v19);
          return result;
        default:
          goto LABEL_54;
      }
    case 4279946:
      v14 = *(float *)&v6[2 * v12 + 1];
      goto LABEL_12;
    case 4288437:
      v14 = (double)SLOBYTE(v6[2 * v12 + 1]);
      goto LABEL_12;
    case 4288459:
      v14 = (double)SLOWORD(v6[2 * v12 + 1]);
      goto LABEL_12;
    case 4288481:
      v14 = (double)LOWORD(v6[2 * v12 + 1]);
      goto LABEL_12;
    default:
      goto LABEL_54;
  }
}
