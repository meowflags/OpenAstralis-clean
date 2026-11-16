// sub_182751780
// rva 0x02751780  size 344  section .text  group text
// window base 0x182751780: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_182751780(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _DWORD *a5,
        void (__fastcall *a6)(_QWORD, __int64, __int64, _QWORD, __int64, _DWORD *))
{
  _DWORD *v6; // r14
  __int64 v7; // r15
  __int64 v9; // r9
  int v10; // edi
  __int64 v11; // r9
  __int64 v12; // rdi
  __int64 v13; // rcx
  int v14; // ebx
  unsigned int v15; // r8d
  __int64 v16; // rdx
  __int64 v17; // rdi
  __int64 v18; // rsi
  __int64 v20; // [rsp+0h] [rbp-8h] BYREF

  if ( (unsigned __int64)&v20 <= *(_QWORD *)(v7 + 8) )
    goto LABEL_30;
  if ( a5 == v6 )
    goto LABEL_29;
  if ( a5[2] != 3 )
    goto LABEL_29;
  v9 = (unsigned int)a5[3];
  if ( (_DWORD)v9 == 0 )
    goto LABEL_29;
  v10 = v6[2 * v9] >> 3;
  switch ( v10 )
  {
    case 4260452:
      v11 = *(_QWORD *)&v6[2 * v9 + 2];
      goto LABEL_7;
    case 4260808:
      v11 = (int)v6[2 * v9 + 1];
      goto LABEL_7;
    case 4288437:
      v11 = SLOBYTE(v6[2 * v9 + 1]);
      goto LABEL_7;
    case 4288459:
      v11 = SLOWORD(v6[2 * v9 + 1]);
      goto LABEL_7;
    case 4288481:
      v11 = LOWORD(v6[2 * v9 + 1]);
LABEL_7:
      v12 = (unsigned int)a5[4];
      if ( (_DWORD)v12 != 0 && v6[2 * v12] >> 3 != 4786758 )
        goto LABEL_29;
      v13 = (unsigned int)a5[5];
      if ( (_DWORD)v13 == 0 )
        goto LABEL_29;
      v14 = v6[2 * v13] >> 3;
      switch ( v14 )
      {
        case 4260808:
          v15 = v6[2 * v13 + 1];
LABEL_12:
          a6(a1: v15, a2, a3, a4: v15, a5: v11, a6: &v6[2 * v12]);
          if ( *(int *)(v7 + 16) <= 0 )
            sub_18277F280(a1: v17, a2: v18, a3: v16);
          return (__int64)v6;
        case 4288437:
          v15 = SLOBYTE(v6[2 * v13 + 1]);
          goto LABEL_12;
        case 4288459:
          v15 = SLOWORD(v6[2 * v13 + 1]);
          goto LABEL_12;
        case 4288481:
          v15 = LOWORD(v6[2 * v13 + 1]);
          goto LABEL_12;
        default:
          goto LABEL_29;
      }
    default:
LABEL_29:
      sub_182756FC0();
LABEL_30:
      MEMORY[0x181EB84E0]();
      __builtin_debugtrap();
      __builtin_debugtrap();
      __builtin_debugtrap();
      __builtin_debugtrap();
      __builtin_debugtrap();
      __builtin_debugtrap();
      __builtin_debugtrap();
      __builtin_debugtrap();
      return sub_1827518E0();
  }
}
