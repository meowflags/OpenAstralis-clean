// sub_18274A8E0
// rva 0x0274a8e0  size 691  section .text  group text
// window base 0x18274a8e0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_18274A8E0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _DWORD *a5,
        void (__fastcall *a6)(__int64, __int64, __int64, _QWORD, _DWORD *, _DWORD *))
{
  _DWORD *v6; // r14
  __int64 v7; // r15
  __int64 v9; // rcx
  __int64 v10; // rbx
  __int64 v11; // r9
  __int64 v12; // rdi
  int v13; // esi
  __int64 v14; // rdi
  __int64 v15; // rsi
  int v16; // ebx
  __int64 v17; // rsi
  __int64 v18; // rbx
  int v19; // ebp
  unsigned int v20; // ebx
  __int64 v21; // rbp
  int v22; // r10d
  int v23; // r8d
  __int64 v24; // rdx
  __int64 v25; // rdi
  __int64 v26; // rsi
  _DWORD v28[6]; // [rsp+0h] [rbp-18h] BYREF

  if ( (unsigned __int64)v28 <= *(_QWORD *)(v7 + 8) )
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
    return sub_18274ABA0();
  }
  if ( a5 != v6 && a5[2] == 6 )
  {
    v9 = (unsigned int)a5[3];
    if ( (_DWORD)v9 == 0 )
      goto LABEL_7;
    v10 = v6[2 * v9] >> 3;
    if ( SHIWORD(v6[2 * v10 + 15]) >= 2 && v6[2 * v6[2 * v10 + 4] + 4] == 7587 )
      goto LABEL_7;
  }
  while ( 1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          while ( 1 )
          {
            a6 = (void (__fastcall *)(__int64, __int64, __int64, _QWORD, _DWORD *, _DWORD *))sub_182756FC0();
LABEL_7:
            v11 = (unsigned int)a5[4];
            if ( (_DWORD)v11 == 0 || v6[2 * v11] >> 3 == 4260335 )
            {
              v12 = (unsigned int)a5[5];
              if ( (_DWORD)v12 != 0 )
                break;
            }
          }
          v13 = v6[2 * v12] >> 3;
          if ( v13 == 4260808 )
            break;
          switch ( v13 )
          {
            case 4288437:
              v14 = (unsigned int)SLOBYTE(v6[2 * v12 + 1]);
              goto LABEL_12;
            case 4288459:
              v14 = (unsigned int)SLOWORD(v6[2 * v12 + 1]);
              goto LABEL_12;
            case 4288481:
              v14 = LOWORD(v6[2 * v12 + 1]);
              goto LABEL_12;
            default:
              break;
          }
        }
        v14 = (unsigned int)v6[2 * v12 + 1];
LABEL_12:
        v15 = (unsigned int)a5[6];
        if ( (_DWORD)v15 != 0 )
        {
          v16 = v6[2 * v15] >> 3;
          switch ( v16 )
          {
            case 4260808:
              v17 = (unsigned int)v6[2 * v15 + 1];
              goto LABEL_15;
            case 4288437:
              v17 = (unsigned int)SLOBYTE(v6[2 * v15 + 1]);
              goto LABEL_15;
            case 4288459:
              v17 = (unsigned int)SLOWORD(v6[2 * v15 + 1]);
              goto LABEL_15;
            default:
              break;
          }
          if ( v16 == 4288481 )
          {
            v17 = LOWORD(v6[2 * v15 + 1]);
LABEL_15:
            v18 = (unsigned int)a5[7];
            if ( (_DWORD)v18 != 0 )
              break;
          }
        }
      }
      v19 = v6[2 * v18] >> 3;
      if ( v19 == 4260808 )
        break;
      switch ( v19 )
      {
        case 4288437:
          v20 = SLOBYTE(v6[2 * v18 + 1]);
          goto LABEL_18;
        case 4288459:
          v20 = SLOWORD(v6[2 * v18 + 1]);
          goto LABEL_18;
        case 4288481:
          v20 = LOWORD(v6[2 * v18 + 1]);
          goto LABEL_18;
        default:
          break;
      }
    }
    v20 = v6[2 * v18 + 1];
LABEL_18:
    v21 = (unsigned int)a5[8];
    if ( (_DWORD)v21 != 0 )
    {
      v22 = v6[2 * v21] >> 3;
      switch ( v22 )
      {
        case 4260808:
          v23 = v6[2 * v21 + 1];
          goto LABEL_21;
        case 4288437:
          v23 = SLOBYTE(v6[2 * v21 + 1]);
          goto LABEL_21;
        case 4288459:
          v23 = SLOWORD(v6[2 * v21 + 1]);
          goto LABEL_21;
        default:
          break;
      }
      if ( v22 == 4288481 )
        break;
    }
  }
  v23 = LOWORD(v6[2 * v21 + 1]);
LABEL_21:
  v28[2] = v23;
  a6(a1: v14, a2: v17, a3, a4: v20, a5: &v6[2 * v9], a6: &v6[2 * v11]);
  if ( *(int *)(v7 + 16) <= 0 )
    sub_18277F280(a1: v25, a2: v26, a3: v24);
  return (__int64)v6;
}
