// sub_274E0C0
// rva 0x0274e0c0  size 348  section .text  group text
// window base 0x18274e0c0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_274E0C0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _DWORD *a5,
        __int64 (__fastcall *a6)(_DWORD *, _QWORD, __int64, _DWORD *, _DWORD *, _DWORD *))
{
  _DWORD *v6; // r14
  __int64 v7; // r15
  __int64 v9; // rcx
  __int64 v10; // rbx
  __int64 v11; // rbx
  __int64 v12; // rbp
  __int64 v13; // rbp
  __int64 v14; // rsi
  __int64 v15; // r9
  int v16; // edi
  unsigned int v17; // r8d
  int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rdi
  __int64 v21; // rsi
  __int64 v23; // [rsp+0h] [rbp-8h] BYREF

  if ( (unsigned __int64)&v23 <= *(_QWORD *)(v7 + 8) )
  {
    sub_1EB84E0();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    return sub_274E220();
  }
  else
  {
    if ( a5 != v6 && a5[2] == 4 )
    {
      v9 = (unsigned int)a5[3];
      if ( (_DWORD)v9 == 0 )
        goto LABEL_7;
      v10 = v6[2 * v9] >> 3;
      if ( SHIWORD(v6[2 * v10 + 15]) >= 4 && v6[2 * v6[2 * v10 + 4] + 6] == 80539 )
        goto LABEL_7;
    }
    do
    {
      while ( 1 )
      {
        a6 = (__int64 (__fastcall *)(_DWORD *, _QWORD, __int64, _DWORD *, _DWORD *, _DWORD *))sub_2756FC0();
LABEL_7:
        v11 = (unsigned int)a5[4];
        if ( (_DWORD)v11 != 0 )
        {
          v12 = v6[2 * v11] >> 3;
          if ( SHIWORD(v6[2 * v12 + 15]) < 4 || v6[2 * v6[2 * v12 + 4] + 6] != 80539 )
            continue;
        }
        v13 = (unsigned int)a5[5];
        if ( (_DWORD)v13 != 0 )
        {
          v14 = v6[2 * v13] >> 3;
          if ( SHIWORD(v6[2 * v14 + 15]) < 3 || v6[2 * v6[2 * v14 + 4] + 5] != 20484 )
            continue;
        }
        v15 = (unsigned int)a5[6];
        if ( (_DWORD)v15 != 0 )
          break;
      }
      v16 = v6[2 * v15] >> 3;
      switch ( v16 )
      {
        case 4260808:
          v17 = v6[2 * v15 + 1];
          goto LABEL_18;
        case 4288437:
          v17 = SLOBYTE(v6[2 * v15 + 1]);
          goto LABEL_18;
        case 4288459:
          v17 = SLOWORD(v6[2 * v15 + 1]);
          goto LABEL_18;
        default:
          break;
      }
    }
    while ( v16 != 4288481 );
    v17 = LOWORD(v6[2 * v15 + 1]);
LABEL_18:
    v18 = a6(a1: &v6[2 * v13], a2: v17, a3, a4: &v6[2 * v9], a5: &v6[2 * v9], a6: &v6[2 * v11]);
    if ( *(int *)(v7 + 16) <= 0 )
      v18 = sub_277F280(a1: v20, a2: v21, a3: v19);
    if ( v18 != 0 )
      JUMPOUT(0x304E971B2LL);
    return (__int64)(v6 + 8781820);
  }
}
