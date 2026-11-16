// sub_182750580
// rva 0x02750580  size 281  section .text  group text
// window base 0x182750580: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_182750580(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _DWORD *a5,
        void (__fastcall *a6)(__int64, __int64, _DWORD *, _DWORD *, _DWORD *, _QWORD))
{
  _DWORD *v6; // r14
  __int64 v7; // r15
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rdx
  __int64 v12; // rbx
  __int64 v13; // r9
  int v14; // ebx
  unsigned int v15; // r8d
  __int64 v16; // rdx
  __int64 v17; // rdi
  __int64 v18; // rsi
  __int64 v20; // [rsp+0h] [rbp-8h] BYREF

  if ( (unsigned __int64)&v20 <= *(_QWORD *)(v7 + 8) )
  {
    MEMORY[0x181EB84E0]();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    return sub_1827506A0();
  }
  else
  {
    if ( a5 != v6 && a5[2] == 3 )
    {
      v9 = (unsigned int)a5[3];
      if ( (_DWORD)v9 == 0 )
        goto LABEL_7;
      v10 = v6[2 * v9] >> 3;
      if ( SHIWORD(v6[2 * v10 + 15]) >= 2 && v6[2 * v6[2 * v10 + 4] + 4] == 9155 )
        goto LABEL_7;
    }
    do
    {
      while ( 1 )
      {
        a6 = (void (__fastcall *)(__int64, __int64, _DWORD *, _DWORD *, _DWORD *, _QWORD))sub_182757000(a1, a2, a3: a5);
LABEL_7:
        v11 = (unsigned int)a5[4];
        if ( (_DWORD)v11 != 0 )
        {
          v12 = v6[2 * v11] >> 3;
          if ( SHIWORD(v6[2 * v12 + 15]) < 3 || v6[2 * v6[2 * v12 + 4] + 5] != 72347 )
            continue;
        }
        v13 = (unsigned int)a5[5];
        if ( (_DWORD)v13 != 0 )
          break;
      }
      v14 = v6[2 * v13] >> 3;
      switch ( v14 )
      {
        case 4260808:
          v15 = v6[2 * v13 + 1];
          goto LABEL_13;
        case 4288437:
          v15 = SLOBYTE(v6[2 * v13 + 1]);
          goto LABEL_13;
        case 4288459:
          v15 = SLOWORD(v6[2 * v13 + 1]);
          goto LABEL_13;
        default:
          break;
      }
    }
    while ( v14 != 4288481 );
    v15 = LOWORD(v6[2 * v13 + 1]);
LABEL_13:
    a6(a1, a2, a3: &v6[2 * v9], a4: &v6[2 * v9], a5: &v6[2 * v11], a6: v15);
    if ( *(int *)(v7 + 16) <= 0 )
      sub_18277F280(a1: v17, a2: v18, a3: v16);
    return (__int64)v6;
  }
}
