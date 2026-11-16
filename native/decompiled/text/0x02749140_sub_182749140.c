// sub_182749140
// rva 0x02749140  size 468  section .text  group text
// window base 0x182749140: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_182749140(
        _DWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _DWORD *a5,
        __int64 (__fastcall *a6)(_DWORD *, _DWORD *, _DWORD *, _DWORD *, _DWORD *, _DWORD *))
{
  _DWORD *v6; // r14
  __int64 v7; // r15
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rbx
  __int64 v12; // rcx
  __int64 v13; // rbp
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // r9
  __int64 v17; // rcx
  int v18; // eax
  __int64 v19; // rdi
  __int64 v20; // rsi
  __int64 v21; // rdx
  __int64 v22; // rdx
  __int64 v24; // rax
  __int64 v25; // rdi
  __int64 v26; // rsi
  __int64 v27; // [rsp+0h] [rbp-18h] BYREF
  int v28; // [rsp+14h] [rbp-4h]

  if ( (unsigned __int64)&v27 <= *(_QWORD *)(v7 + 8) )
  {
    v24 = MEMORY[0x181EB84E0]();
    MEMORY[0x181DF2640](a1: v25, a2: v26, a3: v24);
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
    return sub_182749320();
  }
  else
  {
    if ( a5 != v6 && a5[2] == 5 )
    {
      v9 = (unsigned int)a5[3];
      if ( (_DWORD)v9 == 0 )
        goto LABEL_7;
      v10 = v6[2 * v9] >> 3;
      if ( SHIWORD(v6[2 * v10 + 15]) >= 2 && v6[2 * v6[2 * v10 + 4] + 4] == 72266 )
        goto LABEL_7;
    }
    while ( 1 )
    {
      a6 = (__int64 (__fastcall *)(_DWORD *, _DWORD *, _DWORD *, _DWORD *, _DWORD *, _DWORD *))sub_182757000(
                                                                                                 a1,
                                                                                                 a2,
                                                                                                 a3: a5);
LABEL_7:
      v11 = (unsigned int)a5[4];
      if ( (_DWORD)v11 != 0 )
      {
        v12 = v6[2 * v11] >> 3;
        if ( SHIWORD(v6[2 * v12 + 15]) < 3 || v6[2 * v6[2 * v12 + 4] + 5] != 72321 )
          continue;
      }
      v13 = (unsigned int)a5[5];
      if ( (_DWORD)v13 != 0 )
      {
        v14 = v6[2 * v13] >> 3;
        if ( SHIWORD(v6[2 * v14 + 15]) < 3 || v6[2 * v6[2 * v14 + 4] + 5] != 72321 )
          continue;
      }
      a2 = (unsigned int)a5[6];
      if ( (_DWORD)a2 != 0 )
      {
        v15 = v6[2 * a2] >> 3;
        if ( SHIWORD(v6[2 * v15 + 15]) < 2 || v6[2 * v6[2 * v15 + 4] + 4] != 38172 )
          continue;
      }
      v16 = (unsigned int)a5[7];
      if ( (_DWORD)v16 == 0 )
        break;
      v17 = v6[2 * v16] >> 3;
      a1 = &v6[2 * v6[2 * v17 + 5]];
      if ( (unsigned __int16)a1[(v6[2 * v17 + 11] & (0x653u >> HIBYTE(v6[2 * v17 + 11]))) + 3] == 1619 )
        break;
    }
    v18 = a6(a1: &v6[2 * a2], a2: &v6[2 * v16], a3: &v6[2 * v9], a4: &v6[2 * v16], a5: &v6[2 * v11], a6: &v6[2 * v13]);
    v21 = (unsigned int)(v18 + 128);
    if ( (unsigned int)v21 >= 0x100 )
    {
      v22 = *(_QWORD *)(v7 + 40);
      if ( (unsigned __int64)(v22 + 16) > *(_QWORD *)(v7 + 32) )
      {
        v28 = v18;
        v22 = MEMORY[0x181EAA920](a1: v19, a2: v20, a3: 34086464);
        v18 = v28;
      }
      else
      {
        *(_QWORD *)(v7 + 40) = v22 + 16;
        *(_DWORD *)v22 = 34086464;
        *(_DWORD *)(v22 + 4) = 0;
        *(_QWORD *)(v22 + 8) = 0;
      }
      *(_DWORD *)(v22 + 4) = v18;
    }
    else
    {
      v22 = (__int64)&v6[2 * v6[v21 + 94088301]];
    }
    if ( *(int *)(v7 + 16) <= 0 )
      sub_18277F280(a1: v19, a2: v20, a3: v22);
    return v22;
  }
}
