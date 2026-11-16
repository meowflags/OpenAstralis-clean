// sub_18274AEC0
// rva 0x0274aec0  size 358  section .text  group text
// window base 0x18274aec0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_18274AEC0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _DWORD *a5,
        __int64 (__fastcall *a6)(__int64, __int64, __int64, _DWORD *, _DWORD *, __int64))
{
  _DWORD *v6; // r14
  __int64 v7; // r15
  __int64 v9; // rcx
  __int64 v10; // rbx
  __int64 v11; // r9
  int v12; // edi
  __int64 v13; // r9
  __int64 v14; // rdi
  int v15; // ebx
  __int64 v16; // r8
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
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    return sub_18274B040();
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
  while ( 1 )
  {
    while ( 1 )
    {
      do
      {
        a6 = (__int64 (__fastcall *)(__int64, __int64, __int64, _DWORD *, _DWORD *, __int64))sub_182756FC0();
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
    v14 = (unsigned int)a5[5];
    if ( (_DWORD)v14 != 0 )
    {
      v15 = v6[2 * v14] >> 3;
      switch ( v15 )
      {
        case 4260452:
          v16 = *(_QWORD *)&v6[2 * v14 + 2];
          goto LABEL_13;
        case 4260808:
          v16 = (int)v6[2 * v14 + 1];
          goto LABEL_13;
        case 4288437:
          v16 = SLOBYTE(v6[2 * v14 + 1]);
          goto LABEL_13;
        case 4288459:
          v16 = SLOWORD(v6[2 * v14 + 1]);
          goto LABEL_13;
        default:
          break;
      }
      if ( v15 == 4288481 )
        break;
    }
  }
  v16 = LOWORD(v6[2 * v14 + 1]);
LABEL_13:
  result = a6(a1: v16, a2, a3, a4: &v6[2 * v9], a5: &v6[2 * v9], a6: v13);
  if ( *(int *)(v7 + 16) <= 0 )
    return sub_18277F280(a1: v19, a2: v20, a3: v18);
  return result;
}
