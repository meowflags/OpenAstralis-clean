// sub_182754AA0
// rva 0x02754aa0  size 1080  section .text  group text
// window base 0x182754aa0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_182754AA0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _DWORD *a5,
        void (__fastcall *a6)(__int64, __int64, _DWORD *, double, double, double, double))
{
  _DWORD *v6; // r14
  __int64 v7; // r15
  __int64 v8; // rdx
  int v9; // eax
  double v10; // xmm0_8
  __int64 v11; // rdx
  int v12; // eax
  double v13; // xmm1_8
  __int64 v14; // rdx
  int v15; // eax
  double v16; // xmm2_8
  __int64 v17; // rdx
  int v18; // eax
  double v19; // xmm3_8
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rdx
  __int64 v23; // rdi
  __int64 v24; // rsi
  __int64 v26; // [rsp+0h] [rbp-8h] BYREF

  if ( (unsigned __int64)&v26 <= *(_QWORD *)(v7 + 8) )
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
    return sub_182754EE0();
  }
  if ( a5 == v6 )
    goto LABEL_18;
  if ( a5[2] != 5 )
    goto LABEL_18;
  v8 = (unsigned int)a5[3];
  if ( (_DWORD)v8 == 0 )
    goto LABEL_18;
  v9 = v6[2 * v8] >> 3;
  switch ( v9 )
  {
    case 4260452:
      v10 = (double)*(__int64 *)&v6[2 * v8 + 2];
      break;
    case 4260808:
      v10 = (double)(int)v6[2 * v8 + 1];
      break;
    case 4260831:
      v10 = *(double *)&v6[2 * v8 + 2];
      break;
    case 4279946:
      v10 = *(float *)&v6[2 * v8 + 1];
      break;
    case 4288437:
      v10 = (double)SLOBYTE(v6[2 * v8 + 1]);
      break;
    case 4288459:
      v10 = (double)SLOWORD(v6[2 * v8 + 1]);
      break;
    case 4288481:
      v10 = (double)LOWORD(v6[2 * v8 + 1]);
      break;
    default:
      goto LABEL_18;
  }
  v11 = (unsigned int)a5[4];
  if ( (_DWORD)v11 == 0 )
    goto LABEL_18;
  v12 = v6[2 * v11] >> 3;
  switch ( v12 )
  {
    case 4260452:
      v13 = (double)*(__int64 *)&v6[2 * v11 + 2];
      break;
    case 4260808:
      v13 = (double)(int)v6[2 * v11 + 1];
      break;
    case 4260831:
      v13 = *(double *)&v6[2 * v11 + 2];
      break;
    case 4279946:
      v13 = *(float *)&v6[2 * v11 + 1];
      break;
    case 4288437:
      v13 = (double)SLOBYTE(v6[2 * v11 + 1]);
      break;
    case 4288459:
      v13 = (double)SLOWORD(v6[2 * v11 + 1]);
      break;
    case 4288481:
      v13 = (double)LOWORD(v6[2 * v11 + 1]);
      break;
    default:
      goto LABEL_18;
  }
  v14 = (unsigned int)a5[5];
  if ( (_DWORD)v14 == 0 )
    goto LABEL_18;
  v15 = v6[2 * v14] >> 3;
  switch ( v15 )
  {
    case 4260452:
      v16 = (double)*(__int64 *)&v6[2 * v14 + 2];
      break;
    case 4260808:
      v16 = (double)(int)v6[2 * v14 + 1];
      break;
    case 4260831:
      v16 = *(double *)&v6[2 * v14 + 2];
      break;
    case 4279946:
      v16 = *(float *)&v6[2 * v14 + 1];
      break;
    case 4288437:
      v16 = (double)SLOBYTE(v6[2 * v14 + 1]);
      break;
    case 4288459:
      v16 = (double)SLOWORD(v6[2 * v14 + 1]);
      break;
    case 4288481:
      v16 = (double)LOWORD(v6[2 * v14 + 1]);
      break;
    default:
      goto LABEL_18;
  }
  v17 = (unsigned int)a5[6];
  if ( (_DWORD)v17 == 0 )
  {
LABEL_18:
    v20 = sub_182757000(a1, a2, a3: a5);
    goto LABEL_19;
  }
  v18 = v6[2 * v17] >> 3;
  switch ( v18 )
  {
    case 4260452:
      v19 = (double)*(__int64 *)&v6[2 * v17 + 2];
      goto LABEL_16;
    case 4260808:
      v19 = (double)(int)v6[2 * v17 + 1];
      goto LABEL_16;
    case 4260831:
      v19 = *(double *)&v6[2 * v17 + 2];
LABEL_16:
      v20 = (unsigned int)a5[7];
      if ( (_DWORD)v20 != 0 )
      {
        v21 = v6[2 * v20] >> 3;
        if ( SHIWORD(v6[2 * v21 + 15]) < 6 || v6[2 * v6[2 * v21 + 4] + 8] != 95381 )
          goto LABEL_18;
      }
LABEL_19:
      a6(a1, a2, a3: &v6[2 * v20], a4: v10, a5: v13, a6: v16, a7: v19);
      if ( *(int *)(v7 + 16) <= 0 )
        sub_18277F280(a1: v23, a2: v24, a3: v22);
      return (__int64)v6;
    case 4279946:
      v19 = *(float *)&v6[2 * v17 + 1];
      goto LABEL_16;
    case 4288437:
      v19 = (double)SLOBYTE(v6[2 * v17 + 1]);
      goto LABEL_16;
    case 4288459:
      v19 = (double)SLOWORD(v6[2 * v17 + 1]);
      goto LABEL_16;
    case 4288481:
      v19 = (double)LOWORD(v6[2 * v17 + 1]);
      goto LABEL_16;
    default:
      goto LABEL_18;
  }
}
