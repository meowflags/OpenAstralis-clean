// sub_1827520C0
// rva 0x027520c0  size 659  section .text  group text
// window base 0x1827520c0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1827520C0(
        double a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        _DWORD *a6,
        void (__fastcall *a7)(_DWORD *, _DWORD *, __int64, _DWORD *, _DWORD *, _DWORD *, double))
{
  __int64 v7; // rbx
  unsigned __int64 v8; // rbp
  _DWORD *v9; // r14
  __int64 v10; // r15
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rsi
  __int64 v16; // rsi
  __int64 v17; // rdi
  __int64 v18; // r9
  __int64 v19; // rdi
  int v20; // r10d
  __int64 v21; // rdi
  __int64 v22; // rsi
  int v23; // xmm0_4
  __int64 result; // rax
  __int64 v25; // rdx
  __int64 v26; // [rsp+0h] [rbp-18h] BYREF
  int v27; // [rsp+14h] [rbp-4h]

  if ( (unsigned __int64)&v26 <= *(_QWORD *)(v10 + 8) )
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
    return sub_182752360();
  }
  else
  {
    if ( a6 != v9 && a6[2] == 6 )
    {
      v7 = (unsigned int)a6[3];
      if ( (_DWORD)v7 == 0
        || (v12 = v9[2 * v7] >> 3,
            (unsigned __int16)*(_DWORD *)((v8 = (unsigned __int64)&v9[2 * v9[2 * v12 + 5]])
                                        + 4LL * (v9[2 * v12 + 11] & (0x1031u >> HIBYTE(v9[2 * v12 + 11])))
                                        + 12) == 4145) )
      {
        v8 = (unsigned int)a6[4];
        if ( (_DWORD)v8 == 0
          || (v13 = v9[2 * v8] >> 3,
              (unsigned __int16)v9[2 * v9[2 * v13 + 5] + 3 + (v9[2 * v13 + 11] & (0x1F95u >> HIBYTE(v9[2 * v13 + 11])))] == 8085) )
        {
          v14 = (unsigned int)a6[5];
          if ( (_DWORD)v14 == 0 )
            goto LABEL_11;
          v15 = v9[2 * v14] >> 3;
          if ( SHIWORD(v9[2 * v15 + 15]) >= 3 && v9[2 * v9[2 * v15 + 4] + 5] == 72321 )
            goto LABEL_11;
        }
      }
    }
    do
    {
      while ( 1 )
      {
        a7 = (void (__fastcall *)(_DWORD *, _DWORD *, __int64, _DWORD *, _DWORD *, _DWORD *, double))sub_182756FC0();
LABEL_11:
        v16 = (unsigned int)a6[6];
        if ( (_DWORD)v16 != 0 )
        {
          v17 = v9[2 * v16] >> 3;
          if ( SHIWORD(v9[2 * v17 + 15]) < 4 || v9[2 * v9[2 * v17 + 4] + 6] != 73883 )
            continue;
        }
        v18 = (unsigned int)a6[7];
        if ( (_DWORD)v18 == 0 || v9[2 * v18] >> 3 == 4663900 )
        {
          v19 = (unsigned int)a6[8];
          if ( (_DWORD)v19 != 0 )
            break;
        }
      }
      v20 = v9[2 * v19] >> 3;
      switch ( v20 )
      {
        case 4279946:
          *(_QWORD *)&a1 = (unsigned int)v9[2 * v19 + 1];
          goto LABEL_19;
        case 4260808:
          *(float *)&a1 = (float)(int)v9[2 * v19 + 1];
          goto LABEL_19;
        case 4260452:
          *(float *)&a1 = (float)*(__int64 *)&v9[2 * v19 + 2];
          goto LABEL_19;
        case 4288437:
          *(float *)&a1 = (float)SLOBYTE(v9[2 * v19 + 1]);
          goto LABEL_19;
        case 4288459:
          *(float *)&a1 = (float)SLOWORD(v9[2 * v19 + 1]);
          goto LABEL_19;
        default:
          break;
      }
    }
    while ( v20 != 4288481 );
    *(float *)&a1 = (float)LOWORD(v9[2 * v19 + 1]);
LABEL_19:
    a7(a1: &v9[2 * v14], a2: &v9[2 * v16], a3: a4, a4: &v9[2 * v18], a5: &v9[2 * v7], a6: &v9[2 * v8], a7: a1);
    result = *(_QWORD *)(v10 + 40);
    v25 = result + 16;
    if ( (unsigned __int64)(result + 16) > *(_QWORD *)(v10 + 32) )
    {
      v27 = v23;
      result = MEMORY[0x181EAA920](a1: v21, a2: v22, a3: 34239568);
      v23 = v27;
    }
    else
    {
      *(_QWORD *)(v10 + 40) = v25;
      *(_DWORD *)result = 34239568;
      *(_DWORD *)(result + 4) = 0;
      *(_QWORD *)(result + 8) = 0;
    }
    *(_DWORD *)(result + 4) = v23;
    if ( *(int *)(v10 + 16) <= 0 )
      return sub_18277F280(a1: v21, a2: v22, a3: v25);
  }
  return result;
}
