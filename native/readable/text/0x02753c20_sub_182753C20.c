// sub_2753C20
// rva 0x02753c20  size 341  section .text  group text
// window base 0x182753c20: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_2753C20(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _DWORD *a5,
        void (__fastcall *a6)(__int64, _DWORD *, __int64, _DWORD *, _DWORD *, _DWORD *))
{
  _DWORD *v6; // r14
  __int64 v7; // r15
  __int64 v9; // rcx
  __int64 v10; // rbx
  __int64 v11; // rbx
  __int64 v12; // rbp
  __int64 v13; // r9
  int v14; // edi
  unsigned int v15; // r9d
  __int64 v16; // rdi
  __int64 v17; // r9
  __int64 v18; // rdx
  __int64 v19; // rdi
  __int64 v20; // rsi
  __int64 v22; // [rsp+0h] [rbp-8h] BYREF

  if ( (unsigned __int64)&v22 <= *(_QWORD *)(v7 + 8) )
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
    return sub_2753D80();
  }
  if ( a5 != v6 && a5[2] == 4 )
  {
    v9 = (unsigned int)a5[3];
    if ( (_DWORD)v9 == 0 )
      goto LABEL_7;
    v10 = v6[2 * v9] >> 3;
    if ( SHIWORD(v6[2 * v10 + 15]) >= 2 && v6[2 * v6[2 * v10 + 4] + 4] == 7690 )
      goto LABEL_7;
  }
  do
  {
    while ( 1 )
    {
      while ( 1 )
      {
        a6 = (void (__fastcall *)(__int64, _DWORD *, __int64, _DWORD *, _DWORD *, _DWORD *))sub_2756FC0();
LABEL_7:
        v11 = (unsigned int)a5[4];
        if ( (_DWORD)v11 != 0 )
        {
          v12 = v6[2 * v11] >> 3;
          if ( SHIWORD(v6[2 * v12 + 15]) < 3 || v6[2 * v6[2 * v12 + 4] + 5] != 82525 )
            continue;
        }
        v13 = (unsigned int)a5[5];
        if ( (_DWORD)v13 != 0 )
          break;
      }
      v14 = v6[2 * v13] >> 3;
      if ( v14 == 4260808 )
        break;
      switch ( v14 )
      {
        case 4288437:
          v15 = SLOBYTE(v6[2 * v13 + 1]);
          goto LABEL_13;
        case 4288459:
          v15 = SLOWORD(v6[2 * v13 + 1]);
          goto LABEL_13;
        case 4288481:
          v15 = LOWORD(v6[2 * v13 + 1]);
          goto LABEL_13;
        default:
          break;
      }
    }
    v15 = v6[2 * v13 + 1];
LABEL_13:
    v16 = v15;
    v17 = (unsigned int)a5[6];
  }
  while ( (_DWORD)v17 != 0 && v6[2 * v17] >> 3 != 4935102 );
  a6(a1: v16, a2: &v6[2 * v17], a3, a4: &v6[2 * v9], a5: &v6[2 * v9], a6: &v6[2 * v11]);
  if ( *(int *)(v7 + 16) <= 0 )
    sub_277F280(a1: v19, a2: v20, a3: v18);
  return (__int64)v6;
}
