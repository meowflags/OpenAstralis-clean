// sub_1827539C0
// rva 0x027539c0  size 371  section .text  group text
// window base 0x1827539c0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1827539C0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _DWORD *a5,
        __int64 (__fastcall *a6)(__int64, __int64, _DWORD *, _DWORD *, _QWORD, _QWORD))
{
  _DWORD *v6; // r14
  __int64 v7; // r15
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rdx
  int v12; // r9d
  unsigned int v13; // edx
  unsigned int v14; // r9d
  __int64 v15; // rdx
  int v16; // ebx
  unsigned int v17; // edx
  __int64 result; // rax
  __int64 v19; // rdx
  __int64 v20; // rdi
  __int64 v21; // rsi
  __int64 v22; // [rsp+0h] [rbp-8h] BYREF

  if ( (unsigned __int64)&v22 <= *(_QWORD *)(v7 + 8) )
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
    return sub_182753B40();
  }
  if ( a5 != v6 && a5[2] == 3 )
  {
    v9 = (unsigned int)a5[3];
    if ( (_DWORD)v9 == 0 )
      goto LABEL_7;
    v10 = v6[2 * v9] >> 3;
    if ( SHIWORD(v6[2 * v10 + 15]) >= 2 && v6[2 * v6[2 * v10 + 4] + 4] == 49865 )
      goto LABEL_7;
  }
  while ( 1 )
  {
    while ( 1 )
    {
      do
      {
        a6 = (__int64 (__fastcall *)(__int64, __int64, _DWORD *, _DWORD *, _QWORD, _QWORD))sub_182757000(a1, a2, a3: a5);
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
    v14 = v13;
    v15 = (unsigned int)a5[5];
    if ( (_DWORD)v15 != 0 )
    {
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
        default:
          break;
      }
      if ( v16 == 4288481 )
        break;
    }
  }
  v17 = LOWORD(v6[2 * v15 + 1]);
LABEL_13:
  result = a6(a1, a2, a3: &v6[2 * v9], a4: &v6[2 * v9], a5: v14, a6: v17);
  if ( *(int *)(v7 + 16) <= 0 )
    return sub_18277F280(a1: v20, a2: v21, a3: v19);
  return result;
}
