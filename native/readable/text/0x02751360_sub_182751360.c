// sub_2751360
// rva 0x02751360  size 593  section .text  group text
// window base 0x182751360: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_2751360(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _DWORD *a5,
        __int64 (__fastcall *a6)(__int64, __int64, __int64, _QWORD, _QWORD, _QWORD))
{
  _DWORD *v6; // r14
  __int64 v7; // r15
  __int64 v9; // rdx
  int v10; // r9d
  __int64 v11; // rdx
  __int64 v12; // r9
  int v13; // ecx
  unsigned int v14; // r9d
  __int64 v15; // rcx
  int v16; // ebx
  unsigned int v17; // r8d
  __int64 v18; // rax
  int v19; // ecx
  __int64 v20; // rdi
  __int64 v21; // rsi
  int v22; // r8d
  int v23; // r9d
  __int64 v24; // rdx
  __int64 v25; // rdx
  char v27; // [rsp+0h] [rbp-18h] BYREF
  __int64 v28; // [rsp+10h] [rbp-8h]

  if ( (unsigned __int64)&v27 <= *(_QWORD *)(v7 + 8) )
    goto LABEL_42;
  if ( a5 == v6 )
    goto LABEL_41;
  if ( a5[2] != 3 )
    goto LABEL_41;
  v9 = (unsigned int)a5[3];
  if ( (_DWORD)v9 == 0 )
    goto LABEL_41;
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
      goto LABEL_41;
  }
  v12 = (unsigned int)a5[4];
  if ( (_DWORD)v12 == 0 )
  {
LABEL_41:
    sub_2757000(a1, a2, a3: a5);
LABEL_42:
    sub_1EB84E0();
    goto LABEL_43;
  }
  v13 = v6[2 * v12] >> 3;
  switch ( v13 )
  {
    case 4260808:
      v14 = v6[2 * v12 + 1];
LABEL_10:
      v15 = (unsigned int)a5[5];
      if ( (_DWORD)v15 == 0 )
        goto LABEL_41;
      v16 = v6[2 * v15] >> 3;
      switch ( v16 )
      {
        case 4260808:
          v17 = v6[2 * v15 + 1];
          goto LABEL_13;
        case 4288437:
          v17 = SLOBYTE(v6[2 * v15 + 1]);
          goto LABEL_13;
        case 4288459:
          v17 = SLOWORD(v6[2 * v15 + 1]);
          goto LABEL_13;
        case 4288481:
          v17 = LOWORD(v6[2 * v15 + 1]);
LABEL_13:
          v18 = a6(a1, a2, a3: v11, a4: v17, a5: v14, a6: v17);
          if ( (unsigned __int64)(v18 + 128) >= 0x100 )
          {
            v25 = *(_QWORD *)(v7 + 40);
            if ( (unsigned __int64)(v25 + 16) > *(_QWORD *)(v7 + 32) )
            {
              v28 = v18;
              v25 = sub_1EAA920(a1: v20, a2: v21, a3: 34083616);
              v18 = v28;
            }
            else
            {
              *(_QWORD *)(v7 + 40) = v25 + 16;
              *(_DWORD *)v25 = 34083616;
              *(_DWORD *)(v25 + 4) = 0;
              *(_QWORD *)(v25 + 8) = 0;
            }
            *(_QWORD *)(v25 + 8) = v18;
            goto LABEL_16;
          }
          v24 = (unsigned int)(v18 + 128);
          if ( (unsigned int)v24 >= 0x100 )
          {
LABEL_43:
            sub_2770B00(a1: v20, a2: v21, a3: v24, a4: v19, a5: v22, a6: v23, a7: v27);
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
            __builtin_debugtrap();
            __builtin_debugtrap();
            return sub_27515C0();
          }
          v25 = (__int64)&v6[2 * v6[v24 + 94088023]];
LABEL_16:
          if ( *(int *)(v7 + 16) <= 0 )
            sub_277F280(a1: v20, a2: v21, a3: v25);
          return v25;
        default:
          goto LABEL_41;
      }
    case 4288437:
      v14 = SLOBYTE(v6[2 * v12 + 1]);
      goto LABEL_10;
    case 4288459:
      v14 = SLOWORD(v6[2 * v12 + 1]);
      goto LABEL_10;
    case 4288481:
      v14 = LOWORD(v6[2 * v12 + 1]);
      goto LABEL_10;
    default:
      goto LABEL_41;
  }
}
