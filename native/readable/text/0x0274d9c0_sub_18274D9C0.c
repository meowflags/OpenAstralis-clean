// sub_274D9C0
// rva 0x0274d9c0  size 217  section .text  group text
// window base 0x18274d9c0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_274D9C0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _DWORD *a5,
        void (__fastcall *a6)(__int64, __int64, __int64, _DWORD *, _DWORD *, _QWORD))
{
  _DWORD *v6; // r14
  __int64 v7; // r15
  __int64 v9; // rcx
  __int64 v10; // rbx
  __int64 v11; // r9
  int v12; // ebx
  unsigned int v13; // r8d
  __int64 v14; // rdx
  __int64 v15; // rdi
  __int64 v16; // rsi
  __int64 v18; // [rsp+0h] [rbp-8h] BYREF

  if ( (unsigned __int64)&v18 <= *(_QWORD *)(v7 + 8) )
  {
    sub_1EB84E0();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    return sub_274DAA0();
  }
  else
  {
    if ( a5 != v6 && a5[2] == 2 )
    {
      v9 = (unsigned int)a5[3];
      if ( (_DWORD)v9 == 0 )
        goto LABEL_7;
      v10 = v6[2 * v9] >> 3;
      if ( SHIWORD(v6[2 * v10 + 15]) >= 3 && v6[2 * v6[2 * v10 + 4] + 5] == 82938 )
        goto LABEL_7;
    }
    do
    {
      do
      {
        a6 = (void (__fastcall *)(__int64, __int64, __int64, _DWORD *, _DWORD *, _QWORD))sub_2756FC0();
LABEL_7:
        v11 = (unsigned int)a5[4];
      }
      while ( (_DWORD)v11 == 0 );
      v12 = v6[2 * v11] >> 3;
      switch ( v12 )
      {
        case 4260808:
          v13 = v6[2 * v11 + 1];
          goto LABEL_10;
        case 4288437:
          v13 = SLOBYTE(v6[2 * v11 + 1]);
          goto LABEL_10;
        case 4288459:
          v13 = SLOWORD(v6[2 * v11 + 1]);
          goto LABEL_10;
        default:
          break;
      }
    }
    while ( v12 != 4288481 );
    v13 = LOWORD(v6[2 * v11 + 1]);
LABEL_10:
    a6(a1, a2, a3, a4: &v6[2 * v9], a5: &v6[2 * v9], a6: v13);
    if ( *(int *)(v7 + 16) <= 0 )
      sub_277F280(a1: v15, a2: v16, a3: v14);
    return (__int64)v6;
  }
}
