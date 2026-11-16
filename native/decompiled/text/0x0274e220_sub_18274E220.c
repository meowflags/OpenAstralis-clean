// sub_18274E220
// rva 0x0274e220  size 403  section .text  group text
// window base 0x18274e220: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_18274E220(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _DWORD *a5,
        void (__fastcall *a6)(_DWORD *, _QWORD, __int64, __int64, _QWORD, _QWORD))
{
  __int64 v6; // rbx
  __int64 v7; // rbp
  _DWORD *v8; // r14
  __int64 v9; // r15
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rsi
  __int64 v14; // r9
  __int64 v15; // rdx
  __int64 v16; // rdi
  __int64 v17; // rsi
  __int64 v19; // [rsp+0h] [rbp-8h] BYREF

  if ( (unsigned __int64)&v19 <= *(_QWORD *)(v9 + 8) )
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
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    return sub_18274E3C0();
  }
  if ( a5 != v8 && a5[2] == 4 )
  {
    v11 = (unsigned int)a5[3];
    if ( (_DWORD)v11 != 0 )
    {
      LODWORD(v6) = v8[2 * v11] >> 3;
      switch ( (_DWORD)v6 )
      {
        case 0x4103C8:
          v12 = (unsigned int)v8[2 * v11 + 1];
          break;
        case 0x416FB5:
          v12 = (unsigned int)SLOBYTE(v8[2 * v11 + 1]);
          break;
        case 0x416FCB:
          v12 = (unsigned int)SLOWORD(v8[2 * v11 + 1]);
          break;
        case 0x416FE1:
          v12 = LOWORD(v8[2 * v11 + 1]);
          break;
        default:
          goto LABEL_12;
      }
      v6 = (unsigned int)a5[4];
      if ( (_DWORD)v6 == 0 )
        goto LABEL_12;
      v7 = v8[2 * v6] >> 3;
      switch ( (_DWORD)v7 )
      {
        case 0x4103C8:
          LODWORD(v6) = v8[2 * v6 + 1];
          break;
        case 0x416FB5:
          LODWORD(v6) = SLOBYTE(v8[2 * v6 + 1]);
          break;
        case 0x416FCB:
          LODWORD(v6) = SLOWORD(v8[2 * v6 + 1]);
          break;
        case 0x416FE1:
          LODWORD(v6) = LOWORD(v8[2 * v6 + 1]);
          break;
        default:
          goto LABEL_12;
      }
      v7 = (unsigned int)a5[5];
      if ( (_DWORD)v7 == 0 )
        goto LABEL_13;
      v13 = v8[2 * v7] >> 3;
      if ( SHIWORD(v8[2 * v13 + 15]) >= 4 && v8[2 * v8[2 * v13 + 4] + 6] == 88574 )
        goto LABEL_13;
    }
  }
  do
  {
LABEL_12:
    a6 = (void (__fastcall *)(_DWORD *, _QWORD, __int64, __int64, _QWORD, _QWORD))sub_182756FC0();
LABEL_13:
    v14 = (unsigned int)a5[6];
  }
  while ( (_DWORD)v14 == 0 || v8[2 * v14] >> 3 != 4261917 );
  a6(a1: &v8[2 * v7], a2: LOBYTE(v8[2 * v14 + 1]), a3, a4: v12, a5: (unsigned int)v12, a6: (unsigned int)v6);
  if ( *(int *)(v9 + 16) <= 0 )
    sub_18277F280(a1: v16, a2: v17, a3: v15);
  return (__int64)v8;
}
