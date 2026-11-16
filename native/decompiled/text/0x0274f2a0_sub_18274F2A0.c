// sub_18274F2A0
// rva 0x0274f2a0  size 467  section .text  group text
// window base 0x18274f2a0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_18274F2A0(
        unsigned __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _DWORD *a5,
        __int64 (__fastcall *a6)(_DWORD *, _QWORD, _DWORD *, _QWORD, _DWORD *, _QWORD))
{
  _DWORD *v6; // r14
  __int64 v7; // r15
  __int64 v9; // rdx
  __int64 v10; // r9
  __int64 v11; // rcx
  __int64 v12; // rcx
  int v13; // ebx
  unsigned int v14; // r8d
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rdi
  __int64 v18; // rsi
  __int64 v20; // [rsp+0h] [rbp-8h] BYREF

  if ( (unsigned __int64)&v20 <= *(_QWORD *)(v7 + 8) )
    goto LABEL_33;
  if ( a5 == v6 )
    goto LABEL_32;
  if ( a5[2] != 5 )
    goto LABEL_32;
  v9 = (unsigned int)a5[3];
  if ( (_DWORD)v9 != 0 && v6[2 * v9] >> 3 != 4260710 )
    goto LABEL_32;
  v10 = (unsigned int)a5[4];
  if ( (_DWORD)v10 != 0 )
  {
    v11 = v6[2 * v10] >> 3;
    a1 = (unsigned __int64)&v6[2 * v6[2 * v11 + 5]];
    a2 = (unsigned __int16)*(_DWORD *)(a1 + 4LL * (v6[2 * v11 + 11] & (0x2331u >> HIBYTE(v6[2 * v11 + 11]))) + 12);
    if ( (_DWORD)a2 != 9009 )
      goto LABEL_32;
  }
  a1 = (unsigned int)a5[5];
  if ( (_DWORD)a1 == 0 )
    goto LABEL_32;
  a2 = v6[2 * a1] >> 3;
  switch ( (_DWORD)a2 )
  {
    case 0x4103C8:
      a1 = (unsigned int)v6[2 * a1 + 1];
      goto LABEL_11;
    case 0x416FB5:
      a1 = (unsigned int)SLOBYTE(v6[2 * a1 + 1]);
      goto LABEL_11;
    case 0x416FCB:
      a1 = (unsigned int)SLOWORD(v6[2 * a1 + 1]);
      goto LABEL_11;
    case 0x416FE1:
      a1 = LOWORD(v6[2 * a1 + 1]);
LABEL_11:
      a2 = (unsigned int)a5[6];
      if ( (_DWORD)a2 != 0 && v6[2 * a2] >> 3 != 4930273 )
        goto LABEL_32;
      v12 = (unsigned int)a5[7];
      if ( (_DWORD)v12 == 0 )
        goto LABEL_32;
      v13 = v6[2 * v12] >> 3;
      switch ( v13 )
      {
        case 4260808:
          v14 = v6[2 * v12 + 1];
LABEL_16:
          v15 = a6(a1: &v6[2 * a2], a2: v14, a3: &v6[2 * v9], a4: v14, a5: &v6[2 * v10], a6: (unsigned int)a1);
          if ( *(int *)(v7 + 16) <= 0 )
            v15 = sub_18277F280(a1: v17, a2: v18, a3: v16);
          if ( v15 != 0 )
            JUMPOUT(0x304E983C8LL);
          return (__int64)(v6 + 8781820);
        case 4288437:
          v14 = SLOBYTE(v6[2 * v12 + 1]);
          goto LABEL_16;
        case 4288459:
          v14 = SLOWORD(v6[2 * v12 + 1]);
          goto LABEL_16;
        case 4288481:
          v14 = LOWORD(v6[2 * v12 + 1]);
          goto LABEL_16;
        default:
          goto LABEL_32;
      }
    default:
LABEL_32:
      sub_182757000(a1, a2, a3: a5);
LABEL_33:
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
      return sub_18274F480();
  }
}
