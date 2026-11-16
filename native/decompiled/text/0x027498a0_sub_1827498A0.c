// sub_1827498A0
// rva 0x027498a0  size 313  section .text  group text
// window base 0x1827498a0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1827498A0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _DWORD *a5,
        __int64 (__fastcall *a6)(_QWORD, __int64, _DWORD *, _DWORD *, _DWORD *, _DWORD *))
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
  __int64 result; // rax
  __int64 v17; // rdx
  __int64 v18; // rdi
  __int64 v19; // rsi
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
    return sub_1827499E0();
  }
  else
  {
    if ( a5 != v6 && a5[2] == 4 )
    {
      v9 = (unsigned int)a5[3];
      if ( (_DWORD)v9 == 0 )
        goto LABEL_7;
      v10 = v6[2 * v9] >> 3;
      if ( SHIWORD(v6[2 * v10 + 15]) >= 2 && v6[2 * v6[2 * v10 + 4] + 4] == 8062 )
        goto LABEL_7;
    }
    do
    {
      while ( 1 )
      {
        a6 = (__int64 (__fastcall *)(_QWORD, __int64, _DWORD *, _DWORD *, _DWORD *, _DWORD *))sub_182757000(
                                                                                                a1,
                                                                                                a2,
                                                                                                a3: a5);
LABEL_7:
        v11 = (unsigned int)a5[4];
        if ( (_DWORD)v11 != 0 )
        {
          v12 = v6[2 * v11] >> 3;
          if ( SHIWORD(v6[2 * v12 + 15]) < 2 || v6[2 * v6[2 * v12 + 4] + 4] != 8067 )
            continue;
        }
        v13 = (unsigned int)a5[5];
        if ( (_DWORD)v13 != 0 )
        {
          a1 = v6[2 * v13] >> 3;
          if ( (_DWORD)a1 != 4686763 )
            continue;
        }
        a1 = (unsigned int)a5[6];
        if ( (_DWORD)a1 != 0 )
          break;
      }
      v14 = v6[2 * a1] >> 3;
      switch ( v14 )
      {
        case 4260808:
          v15 = v6[2 * a1 + 1];
          goto LABEL_15;
        case 4288437:
          v15 = SLOBYTE(v6[2 * a1 + 1]);
          goto LABEL_15;
        case 4288459:
          v15 = SLOWORD(v6[2 * a1 + 1]);
          goto LABEL_15;
        default:
          break;
      }
    }
    while ( v14 != 4288481 );
    v15 = LOWORD(v6[2 * a1 + 1]);
LABEL_15:
    result = a6(a1: v15, a2, a3: &v6[2 * v9], a4: &v6[2 * v9], a5: &v6[2 * v11], a6: &v6[2 * v13]);
    if ( *(int *)(v7 + 16) <= 0 )
      return sub_18277F280(a1: v18, a2: v19, a3: v17);
  }
  return result;
}
