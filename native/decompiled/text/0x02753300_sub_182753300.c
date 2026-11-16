// sub_182753300
// rva 0x02753300  size 217  section .text  group text
// window base 0x182753300: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_182753300(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _DWORD *a5,
        __int64 (__fastcall *a6)(__int64, __int64, _DWORD *, __int64, _QWORD))
{
  _DWORD *v6; // r14
  __int64 v7; // r15
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rdx
  __int64 v11; // rcx
  unsigned int v12; // edx
  __int64 result; // rax
  __int64 v14; // rdx
  __int64 v15; // rdi
  __int64 v16; // rsi
  __int64 v17; // [rsp+0h] [rbp-8h] BYREF

  if ( (unsigned __int64)&v17 <= *(_QWORD *)(v7 + 8) )
  {
    MEMORY[0x181EB84E0]();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    return sub_1827533E0();
  }
  else
  {
    if ( a5 != v6 && a5[2] == 2 )
    {
      v8 = (unsigned int)a5[3];
      if ( (_DWORD)v8 == 0 )
        goto LABEL_7;
      v9 = v6[2 * v8] >> 3;
      if ( SHIWORD(v6[2 * v9 + 15]) >= 3 && v6[2 * v6[2 * v9 + 4] + 5] == 82525 )
        goto LABEL_7;
    }
    do
    {
      do
      {
        v8 = sub_182757000(a1, a2, a3: a5);
LABEL_7:
        v10 = (unsigned int)a5[4];
      }
      while ( (_DWORD)v10 == 0 );
      v11 = v6[2 * v10] >> 3;
      switch ( (_DWORD)v11 )
      {
        case 0x4103C8:
          v12 = v6[2 * v10 + 1];
          goto LABEL_10;
        case 0x416FB5:
          v12 = SLOBYTE(v6[2 * v10 + 1]);
          goto LABEL_10;
        case 0x416FCB:
          v12 = SLOWORD(v6[2 * v10 + 1]);
          goto LABEL_10;
        default:
          break;
      }
    }
    while ( (_DWORD)v11 != 4288481 );
    v12 = LOWORD(v6[2 * v10 + 1]);
LABEL_10:
    result = a6(a1, a2, a3: &v6[2 * v8], a4: v11, a5: v12);
    if ( *(int *)(v7 + 16) <= 0 )
      return sub_18277F280(a1: v15, a2: v16, a3: v14);
  }
  return result;
}
