// sub_274B460
// rva 0x0274b460  size 979  section .text  group text
// window base 0x18274b460: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_274B460(__int64 a1, __int64 a2, __int64 a3, __int64 a4, _DWORD *a5, __int64 a6)
{
  _DWORD *v6; // r14
  __int64 v7; // r15
  __int64 v9; // rcx
  __int64 v10; // rbx
  __int64 v11; // rbx
  int v12; // ebp
  unsigned int v13; // ebx
  __int64 v14; // rbp
  int v15; // esi
  unsigned int v16; // ebp
  __int64 v17; // rsi
  int v18; // edi
  __int64 v19; // rsi
  __int64 v20; // rdi
  __int64 v21; // r9
  __int64 v22; // r9
  int v23; // r10d
  int v24; // r9d
  int v25; // r10d
  __int64 v26; // r9
  int v27; // r11d
  int v28; // r9d
  int v29; // r11d
  __int64 v30; // r9
  __int64 v31; // r12
  __int64 v32; // rax
  int v33; // eax
  __int64 v34; // rdx
  __int64 v35; // rdi
  __int64 v36; // rsi
  _QWORD v38[6]; // [rsp+0h] [rbp-38h] BYREF
  __int64 (__fastcall *v39)(_QWORD, __int64, __int64, _DWORD *, _DWORD *, _QWORD); // [rsp+30h] [rbp-8h]

  if ( (unsigned __int64)v38 <= *(_QWORD *)(v7 + 8) )
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
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    return sub_274B840();
  }
  if ( a5 != v6 && a5[2] == 9 )
  {
    v9 = (unsigned int)a5[3];
    if ( (_DWORD)v9 == 0 )
      goto LABEL_7;
    v10 = v6[2 * v9] >> 3;
    if ( SHIWORD(v6[2 * v10 + 15]) >= 3 && v6[2 * v6[2 * v10 + 4] + 5] == 67683 )
      goto LABEL_7;
  }
  while ( 1 )
  {
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
                do
                {
                  a6 = sub_2756FC0();
LABEL_7:
                  v11 = (unsigned int)a5[4];
                }
                while ( (_DWORD)v11 == 0 );
                v12 = v6[2 * v11] >> 3;
                if ( v12 == 4260808 )
                  break;
                switch ( v12 )
                {
                  case 4288437:
                    v13 = SLOBYTE(v6[2 * v11 + 1]);
                    goto LABEL_10;
                  case 4288459:
                    v13 = SLOWORD(v6[2 * v11 + 1]);
                    goto LABEL_10;
                  case 4288481:
                    v13 = LOWORD(v6[2 * v11 + 1]);
                    goto LABEL_10;
                  default:
                    break;
                }
              }
              v13 = v6[2 * v11 + 1];
LABEL_10:
              v14 = (unsigned int)a5[5];
              if ( (_DWORD)v14 != 0 )
              {
                v15 = v6[2 * v14] >> 3;
                switch ( v15 )
                {
                  case 4260808:
                    v16 = v6[2 * v14 + 1];
                    goto LABEL_13;
                  case 4288437:
                    v16 = SLOBYTE(v6[2 * v14 + 1]);
                    goto LABEL_13;
                  case 4288459:
                    v16 = SLOWORD(v6[2 * v14 + 1]);
                    goto LABEL_13;
                  default:
                    break;
                }
                if ( v15 == 4288481 )
                {
                  v16 = LOWORD(v6[2 * v14 + 1]);
LABEL_13:
                  v17 = (unsigned int)a5[6];
                  if ( (_DWORD)v17 != 0 )
                    break;
                }
              }
            }
            v18 = v6[2 * v17] >> 3;
            if ( v18 == 4260808 )
              break;
            switch ( v18 )
            {
              case 4288437:
                v19 = (unsigned int)SLOBYTE(v6[2 * v17 + 1]);
                goto LABEL_16;
              case 4288459:
                v19 = (unsigned int)SLOWORD(v6[2 * v17 + 1]);
                goto LABEL_16;
              case 4288481:
                v19 = LOWORD(v6[2 * v17 + 1]);
                goto LABEL_16;
              default:
                break;
            }
          }
          v19 = (unsigned int)v6[2 * v17 + 1];
LABEL_16:
          v20 = (unsigned int)a5[7];
          if ( (_DWORD)v20 != 0 )
          {
            v21 = v6[2 * v20] >> 3;
            if ( SHIWORD(v6[2 * v21 + 15]) < 3 || v6[2 * v6[2 * v21 + 4] + 5] != 20545 )
              continue;
          }
          v22 = (unsigned int)a5[8];
          if ( (_DWORD)v22 != 0 )
          {
            v23 = v6[2 * v22] >> 3;
            switch ( v23 )
            {
              case 4260808:
                v24 = v6[2 * v22 + 1];
                goto LABEL_22;
              case 4288437:
                v24 = SLOBYTE(v6[2 * v22 + 1]);
                goto LABEL_22;
              case 4288459:
                v24 = SLOWORD(v6[2 * v22 + 1]);
                goto LABEL_22;
              default:
                break;
            }
            if ( v23 == 4288481 )
            {
              v24 = LOWORD(v6[2 * v22 + 1]);
LABEL_22:
              v25 = v24;
              v26 = (unsigned int)a5[9];
              if ( (_DWORD)v26 != 0 )
                break;
            }
          }
        }
        v27 = v6[2 * v26] >> 3;
        if ( v27 == 4260808 )
          break;
        switch ( v27 )
        {
          case 4288437:
            v28 = SLOBYTE(v6[2 * v26 + 1]);
            goto LABEL_25;
          case 4288459:
            v28 = SLOWORD(v6[2 * v26 + 1]);
            goto LABEL_25;
          case 4288481:
            v28 = LOWORD(v6[2 * v26 + 1]);
            goto LABEL_25;
          default:
            break;
        }
      }
      v28 = v6[2 * v26 + 1];
LABEL_25:
      v29 = v28;
      v30 = (unsigned int)a5[10];
    }
    while ( (_DWORD)v30 != 0 && v6[2 * v30] >> 3 != 4260888 );
    v31 = (unsigned int)a5[11];
    if ( (_DWORD)v31 == 0 )
      break;
    v39 = (__int64 (__fastcall *)(_QWORD, __int64, __int64, _DWORD *, _DWORD *, _QWORD))a6;
    v32 = v6[2 * v31] >> 3;
    if ( SHIWORD(v6[2 * v32 + 15]) >= 2 && v6[2 * v6[2 * v32 + 4] + 4] == 2329 )
      goto LABEL_39;
  }
  v39 = (__int64 (__fastcall *)(_QWORD, __int64, __int64, _DWORD *, _DWORD *, _QWORD))a6;
LABEL_39:
  LODWORD(v38[1]) = v25;
  LODWORD(v38[2]) = v29;
  v38[3] = &v6[2 * v30];
  v38[4] = &v6[2 * v31];
  v33 = v39(a1: v16, a2: v19, a3, a4: &v6[2 * v20], a5: &v6[2 * v9], a6: v13);
  if ( *(int *)(v7 + 16) <= 0 )
    v33 = sub_277F280(a1: v35, a2: v36, a3: v34);
  if ( v33 != 0 )
    JUMPOUT(0x304E946A6LL);
  return (__int64)(v6 + 8781820);
}
