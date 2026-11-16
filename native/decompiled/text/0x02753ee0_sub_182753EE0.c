// sub_182753EE0
// rva 0x02753ee0  size 333  section .text  group text
// window base 0x182753ee0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_182753EE0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _DWORD *a5,
        __int64 (__fastcall *a6)(__int64, __int64, _DWORD *, __int64, _QWORD, _DWORD *))
{
  _DWORD *v6; // r14
  __int64 v7; // r15
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rcx
  int v12; // r9d
  __int64 v13; // rcx
  unsigned int v14; // r9d
  __int64 v15; // rbx
  __int64 v16; // rcx
  __int64 result; // rax
  __int64 v18; // rdx
  __int64 v19; // rdi
  __int64 v20; // rsi
  __int64 v21; // [rsp+0h] [rbp-8h] BYREF

  if ( (unsigned __int64)&v21 <= *(_QWORD *)(v7 + 8) )
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
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    return sub_182754040();
  }
  if ( a5 != v6 && a5[2] == 3 )
  {
    v9 = (unsigned int)a5[3];
    if ( (_DWORD)v9 == 0 )
      goto LABEL_7;
    v10 = v6[2 * v9] >> 3;
    if ( SHIWORD(v6[2 * v10 + 15]) >= 3 && v6[2 * v6[2 * v10 + 4] + 5] == 72321 )
      goto LABEL_7;
  }
  do
  {
    while ( 1 )
    {
      do
      {
        a6 = (__int64 (__fastcall *)(__int64, __int64, _DWORD *, __int64, _QWORD, _DWORD *))sub_182757000(
                                                                                              a1,
                                                                                              a2,
                                                                                              a3: a5);
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
          v13 = (unsigned int)SLOBYTE(v6[2 * v11 + 1]);
          goto LABEL_10;
        case 4288459:
          v13 = (unsigned int)SLOWORD(v6[2 * v11 + 1]);
          goto LABEL_10;
        case 4288481:
          v13 = LOWORD(v6[2 * v11 + 1]);
          goto LABEL_10;
        default:
          break;
      }
    }
    v13 = (unsigned int)v6[2 * v11 + 1];
LABEL_10:
    v14 = v13;
    v15 = (unsigned int)a5[5];
    if ( (_DWORD)v15 == 0 )
      break;
    v16 = v6[2 * v15] >> 3;
    a2 = (unsigned int)v6[2 * v16 + 11];
    a1 = (unsigned int)a2 & (0x653u >> HIBYTE(v6[2 * v16 + 11]));
    v13 = (unsigned __int16)v6[2 * (unsigned int)v6[2 * v16 + 5] + 3 + a1];
  }
  while ( (_DWORD)v13 != 1619 );
  result = a6(a1, a2, a3: &v6[2 * v9], a4: v13, a5: v14, a6: &v6[2 * v15]);
  if ( *(int *)(v7 + 16) <= 0 )
    return sub_18277F280(a1: v19, a2: v20, a3: v18);
  return result;
}
