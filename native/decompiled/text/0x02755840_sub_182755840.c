// sub_182755840
// rva 0x02755840  size 2008  section .text  group text
// window base 0x182755840: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_182755840(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _DWORD *a5,
        __int64 (__fastcall *a6)(__int64, __int64, _DWORD *, __int64, _QWORD, _DWORD *, double, double, double, double))
{
  _DWORD *v6; // r14
  __int64 v7; // r15
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rcx
  int v12; // r9d
  double v13; // xmm0_8
  __int64 v14; // rcx
  int v15; // r9d
  double v16; // xmm1_8
  __int64 v17; // rcx
  int v18; // r9d
  double v19; // xmm2_8
  __int64 v20; // rcx
  int v21; // r9d
  double v22; // xmm3_8
  __int64 v23; // rcx
  int v24; // r9d
  double v25; // xmm4_8
  __int64 v26; // rcx
  int v27; // r9d
  double v28; // xmm5_8
  __int64 v29; // rcx
  int v30; // r9d
  unsigned int v31; // ecx
  unsigned int v32; // r9d
  __int64 v33; // rcx
  int v34; // ebx
  float v35; // xmm6_4
  __int64 v36; // rbx
  __int64 v37; // rcx
  __int64 result; // rax
  __int64 v39; // rdx
  __int64 v40; // rdi
  __int64 v41; // rsi
  _QWORD v42[3]; // [rsp+0h] [rbp-28h] BYREF
  float v43; // [rsp+18h] [rbp-10h]

  if ( (unsigned __int64)v42 <= *(_QWORD *)(v7 + 8) )
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
    return sub_182756020();
  }
  if ( a5 != v6 && a5[2] == 10 )
  {
    v9 = (unsigned int)a5[3];
    if ( (_DWORD)v9 == 0 )
      goto LABEL_7;
    v10 = v6[2 * v9] >> 3;
    if ( SHIWORD(v6[2 * v10 + 15]) >= 3 && v6[2 * v6[2 * v10 + 4] + 5] == 96185 )
      goto LABEL_7;
  }
  do
  {
    while ( 1 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          while ( 1 )
          {
            while ( 1 )
            {
              while ( 1 )
              {
                while ( 1 )
                {
                  while ( 1 )
                  {
                    do
                    {
                      a6 = (__int64 (__fastcall *)(__int64, __int64, _DWORD *, __int64, _QWORD, _DWORD *, double, double, double, double))sub_182757000(a1, a2, a3: a5);
LABEL_7:
                      v11 = (unsigned int)a5[4];
                    }
                    while ( (_DWORD)v11 == 0 );
                    v12 = v6[2 * v11] >> 3;
                    switch ( v12 )
                    {
                      case 4260831:
                        v13 = *(double *)&v6[2 * v11 + 2];
                        goto LABEL_10;
                      case 4279946:
                        v13 = *(float *)&v6[2 * v11 + 1];
                        goto LABEL_10;
                      case 4260808:
                        v13 = (double)(int)v6[2 * v11 + 1];
                        goto LABEL_10;
                      case 4260452:
                        v13 = (double)*(__int64 *)&v6[2 * v11 + 2];
                        goto LABEL_10;
                      case 4288437:
                        v13 = (double)SLOBYTE(v6[2 * v11 + 1]);
                        goto LABEL_10;
                      case 4288459:
                        v13 = (double)SLOWORD(v6[2 * v11 + 1]);
                        goto LABEL_10;
                      default:
                        break;
                    }
                    if ( v12 == 4288481 )
                    {
                      v13 = (double)LOWORD(v6[2 * v11 + 1]);
LABEL_10:
                      v14 = (unsigned int)a5[5];
                      if ( (_DWORD)v14 != 0 )
                        break;
                    }
                  }
                  v15 = v6[2 * v14] >> 3;
                  if ( v15 == 4260831 )
                    break;
                  switch ( v15 )
                  {
                    case 4279946:
                      v16 = *(float *)&v6[2 * v14 + 1];
                      goto LABEL_13;
                    case 4260808:
                      v16 = (double)(int)v6[2 * v14 + 1];
                      goto LABEL_13;
                    case 4260452:
                      v16 = (double)*(__int64 *)&v6[2 * v14 + 2];
                      goto LABEL_13;
                    case 4288437:
                      v16 = (double)SLOBYTE(v6[2 * v14 + 1]);
                      goto LABEL_13;
                    case 4288459:
                      v16 = (double)SLOWORD(v6[2 * v14 + 1]);
                      goto LABEL_13;
                    case 4288481:
                      v16 = (double)LOWORD(v6[2 * v14 + 1]);
                      goto LABEL_13;
                    default:
                      break;
                  }
                }
                v16 = *(double *)&v6[2 * v14 + 2];
LABEL_13:
                v17 = (unsigned int)a5[6];
                if ( (_DWORD)v17 != 0 )
                {
                  v18 = v6[2 * v17] >> 3;
                  switch ( v18 )
                  {
                    case 4260831:
                      v19 = *(double *)&v6[2 * v17 + 2];
                      goto LABEL_16;
                    case 4279946:
                      v19 = *(float *)&v6[2 * v17 + 1];
                      goto LABEL_16;
                    case 4260808:
                      v19 = (double)(int)v6[2 * v17 + 1];
                      goto LABEL_16;
                    case 4260452:
                      v19 = (double)*(__int64 *)&v6[2 * v17 + 2];
                      goto LABEL_16;
                    case 4288437:
                      v19 = (double)SLOBYTE(v6[2 * v17 + 1]);
                      goto LABEL_16;
                    case 4288459:
                      v19 = (double)SLOWORD(v6[2 * v17 + 1]);
                      goto LABEL_16;
                    default:
                      break;
                  }
                  if ( v18 == 4288481 )
                  {
                    v19 = (double)LOWORD(v6[2 * v17 + 1]);
LABEL_16:
                    v20 = (unsigned int)a5[7];
                    if ( (_DWORD)v20 != 0 )
                      break;
                  }
                }
              }
              v21 = v6[2 * v20] >> 3;
              if ( v21 == 4260831 )
                break;
              switch ( v21 )
              {
                case 4279946:
                  v22 = *(float *)&v6[2 * v20 + 1];
                  goto LABEL_19;
                case 4260808:
                  v22 = (double)(int)v6[2 * v20 + 1];
                  goto LABEL_19;
                case 4260452:
                  v22 = (double)*(__int64 *)&v6[2 * v20 + 2];
                  goto LABEL_19;
                case 4288437:
                  v22 = (double)SLOBYTE(v6[2 * v20 + 1]);
                  goto LABEL_19;
                case 4288459:
                  v22 = (double)SLOWORD(v6[2 * v20 + 1]);
                  goto LABEL_19;
                case 4288481:
                  v22 = (double)LOWORD(v6[2 * v20 + 1]);
                  goto LABEL_19;
                default:
                  break;
              }
            }
            v22 = *(double *)&v6[2 * v20 + 2];
LABEL_19:
            v23 = (unsigned int)a5[8];
            if ( (_DWORD)v23 != 0 )
            {
              v24 = v6[2 * v23] >> 3;
              switch ( v24 )
              {
                case 4260831:
                  v25 = *(double *)&v6[2 * v23 + 2];
                  goto LABEL_22;
                case 4279946:
                  v25 = *(float *)&v6[2 * v23 + 1];
                  goto LABEL_22;
                case 4260808:
                  v25 = (double)(int)v6[2 * v23 + 1];
                  goto LABEL_22;
                case 4260452:
                  v25 = (double)*(__int64 *)&v6[2 * v23 + 2];
                  goto LABEL_22;
                case 4288437:
                  v25 = (double)SLOBYTE(v6[2 * v23 + 1]);
                  goto LABEL_22;
                case 4288459:
                  v25 = (double)SLOWORD(v6[2 * v23 + 1]);
                  goto LABEL_22;
                default:
                  break;
              }
              if ( v24 == 4288481 )
              {
                v25 = (double)LOWORD(v6[2 * v23 + 1]);
LABEL_22:
                v26 = (unsigned int)a5[9];
                if ( (_DWORD)v26 != 0 )
                  break;
              }
            }
          }
          v27 = v6[2 * v26] >> 3;
          if ( v27 == 4260831 )
            break;
          switch ( v27 )
          {
            case 4279946:
              v28 = *(float *)&v6[2 * v26 + 1];
              goto LABEL_25;
            case 4260808:
              v28 = (double)(int)v6[2 * v26 + 1];
              goto LABEL_25;
            case 4260452:
              v28 = (double)*(__int64 *)&v6[2 * v26 + 2];
              goto LABEL_25;
            case 4288437:
              v28 = (double)SLOBYTE(v6[2 * v26 + 1]);
              goto LABEL_25;
            case 4288459:
              v28 = (double)SLOWORD(v6[2 * v26 + 1]);
              goto LABEL_25;
            case 4288481:
              v28 = (double)LOWORD(v6[2 * v26 + 1]);
              goto LABEL_25;
            default:
              break;
          }
        }
        v28 = *(double *)&v6[2 * v26 + 2];
LABEL_25:
        v29 = (unsigned int)a5[10];
        if ( (_DWORD)v29 != 0 )
        {
          v30 = v6[2 * v29] >> 3;
          switch ( v30 )
          {
            case 4260808:
              v31 = v6[2 * v29 + 1];
              goto LABEL_28;
            case 4288437:
              v31 = SLOBYTE(v6[2 * v29 + 1]);
              goto LABEL_28;
            case 4288459:
              v31 = SLOWORD(v6[2 * v29 + 1]);
              goto LABEL_28;
            default:
              break;
          }
          if ( v30 == 4288481 )
          {
            v31 = LOWORD(v6[2 * v29 + 1]);
LABEL_28:
            v32 = v31;
            v33 = (unsigned int)a5[11];
            if ( (_DWORD)v33 != 0 )
              break;
          }
        }
      }
      v34 = v6[2 * v33] >> 3;
      if ( v34 == 4279946 )
        break;
      switch ( v34 )
      {
        case 4260808:
          v35 = (float)(int)v6[2 * v33 + 1];
          goto LABEL_31;
        case 4260452:
          v35 = (float)*(__int64 *)&v6[2 * v33 + 2];
          goto LABEL_31;
        case 4288437:
          v33 = (unsigned int)SLOBYTE(v6[2 * v33 + 1]);
          v35 = (float)(int)v33;
          goto LABEL_31;
        case 4288459:
          v33 = (unsigned int)SLOWORD(v6[2 * v33 + 1]);
          v35 = (float)(int)v33;
          goto LABEL_31;
        case 4288481:
          v33 = LOWORD(v6[2 * v33 + 1]);
          v35 = (float)(int)v33;
          goto LABEL_31;
        default:
          break;
      }
    }
    v35 = *(float *)&v6[2 * v33 + 1];
LABEL_31:
    v36 = (unsigned int)a5[12];
    if ( (_DWORD)v36 == 0 )
      break;
    v37 = v6[2 * v36] >> 3;
    a2 = (unsigned int)v6[2 * v37 + 11];
    a1 = (unsigned int)a2 & (0xCF7u >> HIBYTE(v6[2 * v37 + 11]));
    v33 = (unsigned __int16)v6[2 * (unsigned int)v6[2 * v37 + 5] + 3 + a1];
  }
  while ( (_DWORD)v33 != 3319 );
  *(double *)&v42[1] = v25;
  *(double *)&v42[2] = v28;
  v43 = v35;
  result = a6(a1, a2, a3: &v6[2 * v9], a4: v33, a5: v32, a6: &v6[2 * v36], a7: v13, a8: v16, a9: v19, a10: v22);
  if ( *(int *)(v7 + 16) <= 0 )
    return sub_18277F280(a1: v40, a2: v41, a3: v39);
  return result;
}
