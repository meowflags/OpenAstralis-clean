// sub_18274C600
// rva 0x0274c600  size 400  section .text  group text
// window base 0x18274c600: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_18274C600(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _DWORD *a5,
        __int64 (__fastcall *a6)(__int64, __int64, _DWORD *, _DWORD *, _DWORD *, _QWORD))
{
  _DWORD *v6; // r14
  __int64 v7; // r15
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rdx
  __int64 v12; // r9
  int v13; // ebx
  unsigned int v14; // r8d
  int v15; // eax
  __int64 v16; // rdi
  __int64 v17; // rsi
  __int64 v18; // rdx
  __int64 v19; // rdx
  __int64 v21; // [rsp+0h] [rbp-18h] BYREF
  int v22; // [rsp+14h] [rbp-4h]

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
    return sub_18274C7A0();
  }
  else
  {
    if ( a5 != v6 && a5[2] == 3 )
    {
      v9 = (unsigned int)a5[3];
      if ( (_DWORD)v9 == 0 )
        goto LABEL_7;
      v10 = v6[2 * v9] >> 3;
      if ( SHIWORD(v6[2 * v10 + 15]) >= 2 && v6[2 * v6[2 * v10 + 4] + 4] == 72266 )
        goto LABEL_7;
    }
    do
    {
      while ( 1 )
      {
        a6 = (__int64 (__fastcall *)(__int64, __int64, _DWORD *, _DWORD *, _DWORD *, _QWORD))sub_182757000(
                                                                                               a1,
                                                                                               a2,
                                                                                               a3: a5);
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
      switch ( v13 )
      {
        case 4260808:
          v14 = v6[2 * v12 + 1];
          goto LABEL_12;
        case 4288437:
          v14 = SLOBYTE(v6[2 * v12 + 1]);
          goto LABEL_12;
        case 4288459:
          v14 = SLOWORD(v6[2 * v12 + 1]);
          goto LABEL_12;
        default:
          break;
      }
    }
    while ( v13 != 4288481 );
    v14 = LOWORD(v6[2 * v12 + 1]);
LABEL_12:
    v15 = a6(a1, a2, a3: &v6[2 * v9], a4: &v6[2 * v9], a5: &v6[2 * v11], a6: v14);
    v18 = (unsigned int)(v15 + 128);
    if ( (unsigned int)v18 >= 0x100 )
    {
      v19 = *(_QWORD *)(v7 + 40);
      if ( (unsigned __int64)(v19 + 16) > *(_QWORD *)(v7 + 32) )
      {
        v22 = v15;
        v19 = MEMORY[0x181EAA920](a1: v16, a2: v17, a3: 34086464);
        v15 = v22;
      }
      else
      {
        *(_QWORD *)(v7 + 40) = v19 + 16;
        *(_DWORD *)v19 = 34086464;
        *(_DWORD *)(v19 + 4) = 0;
        *(_QWORD *)(v19 + 8) = 0;
      }
      *(_DWORD *)(v19 + 4) = v15;
    }
    else
    {
      v19 = (__int64)&v6[2 * v6[v18 + 94088301]];
    }
    if ( *(int *)(v7 + 16) <= 0 )
      sub_18277F280(a1: v16, a2: v17, a3: v19);
    return v19;
  }
}
