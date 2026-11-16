// sub_1827509C0
// rva 0x027509c0  size 403  section .text  group text
// window base 0x1827509c0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1827509C0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _DWORD *a5,
        void (__fastcall *a6)(_DWORD *, _DWORD *, __int64, _DWORD *, _DWORD *, __int64))
{
  __int64 v6; // rbx
  _DWORD *v7; // r14
  __int64 v8; // r15
  __int64 v10; // rcx
  __int64 v11; // rcx
  int v12; // ebp
  __int64 v13; // rcx
  __int64 v14; // rbp
  __int64 v15; // rsi
  __int64 v16; // rcx
  __int64 v17; // r9
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rdi
  __int64 v21; // rsi
  __int64 v23; // [rsp+0h] [rbp-8h] BYREF

  if ( (unsigned __int64)&v23 <= *(_QWORD *)(v8 + 8) )
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
    return sub_182750B60();
  }
  if ( a5 != v7 && a5[2] == 4 )
  {
    v6 = (unsigned int)a5[3];
    if ( (_DWORD)v6 == 0 )
      goto LABEL_7;
    v10 = v7[2 * v6] >> 3;
    if ( SHIWORD(v7[2 * v10 + 15]) >= 3 && v7[2 * v7[2 * v10 + 4] + 5] == 96185 )
      goto LABEL_7;
  }
  while ( 1 )
  {
    do
    {
      a6 = (void (__fastcall *)(_DWORD *, _DWORD *, __int64, _DWORD *, _DWORD *, __int64))sub_182756FC0();
LABEL_7:
      v11 = (unsigned int)a5[4];
    }
    while ( (_DWORD)v11 == 0 );
    v12 = v7[2 * v11] >> 3;
    switch ( v12 )
    {
      case 4260452:
        v13 = *(_QWORD *)&v7[2 * v11 + 2];
        goto LABEL_10;
      case 4260808:
        v13 = (int)v7[2 * v11 + 1];
        goto LABEL_10;
      case 4288437:
        v13 = SLOBYTE(v7[2 * v11 + 1]);
        goto LABEL_10;
      case 4288459:
        v13 = SLOWORD(v7[2 * v11 + 1]);
        goto LABEL_10;
      default:
        break;
    }
    if ( v12 == 4288481 )
    {
      v13 = LOWORD(v7[2 * v11 + 1]);
LABEL_10:
      v14 = v13;
      v15 = (unsigned int)a5[5];
      if ( (_DWORD)v15 == 0
        || (v16 = v7[2 * v15] >> 3, SHIWORD(v7[2 * v16 + 15]) >= 3) && v7[2 * v7[2 * v16 + 4] + 5] == 75070 )
      {
        v17 = (unsigned int)a5[6];
        if ( (_DWORD)v17 == 0 )
          break;
        v18 = v7[2 * v17] >> 3;
        if ( (unsigned __int16)v7[2 * v7[2 * v18 + 5] + 3 + (v7[2 * v18 + 11] & (0x13Bu >> HIBYTE(v7[2 * v18 + 11])))] == 315 )
          break;
      }
    }
  }
  a6(a1: &v7[2 * v15], a2: &v7[2 * v17], a3, a4: &v7[2 * v17], a5: &v7[2 * v6], a6: v14);
  if ( *(int *)(v8 + 16) <= 0 )
    sub_18277F280(a1: v20, a2: v21, a3: v19);
  return (__int64)v7;
}
