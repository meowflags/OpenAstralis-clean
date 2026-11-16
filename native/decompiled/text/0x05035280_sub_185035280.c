// sub_185035280
// rva 0x05035280  size 592  section .text  group text
// window base 0x185035280: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_185035280(
        unsigned __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        __int64 a6,
        char a7)
{
  __int64 v7; // rbp
  __int64 v8; // r14
  __int64 v9; // r15
  __int64 result; // rax
  __int64 v12; // r8
  unsigned __int64 v13; // rsi
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int16 v16; // r9
  __int64 v17; // rcx
  __int16 v18; // r11
  __int64 v19; // r10
  BOOL v20; // ecx
  unsigned __int64 v21; // rcx
  char *v22; // rdx
  unsigned __int64 v23; // rcx
  int v24; // ecx
  int v25; // r9d
  int i; // r11d
  int v27; // edx
  int v28; // ecx
  int v29; // edi
  int v30; // esi
  int v31; // r8d
  int v32; // r9d
  __int64 v33; // [rsp+0h] [rbp-8h] BYREF

  result = a3;
  if ( (unsigned __int64)&v33 <= *(_QWORD *)(v9 + 8) )
  {
    MEMORY[0x181EB84E0]();
    goto LABEL_33;
  }
  v12 = *(unsigned int *)(a3 + 16);
  v7 = (unsigned int)(*(_DWORD *)(a3 + 28) - 1);
  v13 = v8 + 8 * v12;
  if ( *(_DWORD *)(a3 + 28) > (signed int)a5 )
  {
    if ( (_DWORD)v12 == 0 )
    {
LABEL_35:
      MEMORY[0x182771080](a1, a2: v13);
      goto LABEL_36;
    }
    v14 = *(unsigned int *)(v8 + 8 * v12 + 8);
    if ( (unsigned int)v14 <= (unsigned int)v7 )
    {
LABEL_36:
      MEMORY[0x182771220](a1, a2: v13, a3: (unsigned int)v7, a4: v14, a5: (unsigned int)v14);
    }
    else if ( (unsigned int)v14 > a5 )
    {
      v15 = *(unsigned int *)(v13 + 4 * v7 + 12);
      if ( (_DWORD)v15 == 0 )
        goto LABEL_14;
      a1 = *(unsigned int *)(v8 + 8LL * (*(_DWORD *)(v8 + 8 * v12) >> 3) + 24);
      v16 = *(_WORD *)(v8 + 8 * a1 + 60);
      v17 = *(_DWORD *)(v8 + 8 * v15) >> 3;
      v18 = *(_WORD *)(v8 + 8 * v17 + 62);
      v19 = v8 + 8LL * *(unsigned int *)(v8 + 8 * v17 + 16);
      if ( v16 < 0 )
      {
        a1 = *(unsigned int *)(v8 + 8 * a1 + 40);
        if ( (int)a1 >= 0x10000 )
        {
          v24 = 2 * *(__int16 *)(v8 + 8 * v17 + 64);
          v25 = v18;
          for ( i = 0; v24 > i; i += 2 )
          {
            if ( (_DWORD)a1 == *(_DWORD *)(v19 + 4 * (v25 + i) + 12) )
              goto LABEL_14;
          }
          goto LABEL_13;
        }
        v20 = a1 == (unsigned __int16)*(_DWORD *)(v8
                                                + 8LL * *(unsigned int *)(v8 + 8 * v17 + 20)
                                                + (int)(4
                                                      * (*(_DWORD *)(v8 + 8 * v17 + 44)
                                                       & ((unsigned int)a1 >> HIBYTE(*(_DWORD *)(v8 + 8 * v17 + 44))))
                                                      + 12));
      }
      else
      {
        if ( v18 <= v16 )
          goto LABEL_13;
        a1 = *(unsigned int *)(v8 + 8 * a1 + 36);
        v20 = a1 == *(_DWORD *)(v19 + 4LL * (unsigned __int16)v16 + 12);
      }
      if ( v20 )
      {
LABEL_14:
        *(_DWORD *)(v13 + 4LL * a5 + 12) = v15;
        if ( (*(_DWORD *)v13 & 2) != 0 )
        {
          if ( (*(_DWORD *)v13 & 1) != 0 )
          {
            v22 = (char *)(v13 - *(_QWORD *)(v13 - 8));
            a1 = v13;
            v23 = (4 * (unsigned __int64)a5 + 12) >> 9;
            if ( v22[v23 + 48] != 0 )
              v22[v23 + 48] = 0;
          }
          else
          {
            v21 = (v13 & 0xFFFFFFFFFFF80000LL) + 2112;
            a1 = (v13 - v21) >> 9;
            if ( *(_BYTE *)((v13 & 0xFFFFFFFFFFF80000LL) + a1 + 0x38) != 0 )
              *(_BYTE *)((v13 & 0xFFFFFFFFFFF80000LL) + ((v13 - v21) >> 9) + 0x38) = 0;
          }
        }
        goto LABEL_3;
      }
LABEL_13:
      result = MEMORY[0x18276F520](a1, a2: v13, a3: v8 + 8 * v15);
      goto LABEL_14;
    }
    MEMORY[0x182771220](a1, a2: v13, a3: a5, a4: v14, a5: (unsigned int)v14);
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
    return sub_1850354E0(a1: v29, a2: v30, a3: v27, a4: v28, a5: v31, a6: v32, a7);
  }
LABEL_3:
  if ( (_DWORD)v12 == 0 )
  {
LABEL_33:
    MEMORY[0x182771080](a1, a2: v13);
  }
  else if ( *(_DWORD *)(v8 + 8 * v12 + 8) > (unsigned int)v7 )
  {
    *(_DWORD *)(v13 + 4 * v7 + 12) = 0;
    *(_DWORD *)(result + 28) = v7;
    if ( *(int *)(v9 + 16) <= 0 )
      return MEMORY[0x18277F280]();
    return result;
  }
  MEMORY[0x182771220](a1, a2: v13, a3: (unsigned int)v7);
  goto LABEL_35;
}
