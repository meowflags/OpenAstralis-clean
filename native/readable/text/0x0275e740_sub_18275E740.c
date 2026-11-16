// sub_275E740
// rva 0x0275e740  size 678  section .text  group text
// window base 0x18275e740: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
unsigned __int64 __fastcall sub_275E740(__int64 a1, __int64 a2, __int64 a3, __int64 a4, _DWORD *a5, char *a6)
{
  char *v6; // r14
  __int64 v7; // r15
  char *v8; // rcx
  __int64 i; // rdi
  __int64 v10; // rsi
  __int64 v11; // rdx
  int v12; // r9d
  unsigned __int64 v13; // r8
  __int64 v14; // rdx
  unsigned __int64 result; // rax
  __int64 v16; // r8
  __int64 v17; // rax
  __int64 v18; // r8
  unsigned int v19; // ebx
  __int16 v20; // bp
  char *v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rdx
  int v25; // [rsp+0h] [rbp-28h] BYREF
  char *v26; // [rsp+10h] [rbp-18h]
  _DWORD *v27; // [rsp+18h] [rbp-10h]
  __int64 v28; // [rsp+20h] [rbp-8h]

  v28 = a3;
  v27 = a5;
  v26 = a6;
  if ( (unsigned __int64)&v25 <= *(_QWORD *)(v7 + 8) )
  {
    sub_1EB84E0();
    goto LABEL_30;
  }
  sub_275A260(a1, a2, a3, a4: (int)a5, a5);
  v11 = v28;
  if ( *(_BYTE *)(v28 + 17) != 0 )
  {
LABEL_30:
    v22 = v11;
    v23 = (__int64)(v6 + 373281248);
    if ( v26 == v6 )
      goto LABEL_34;
    v24 = (__int64)&v6[8 * *(unsigned int *)&v6[8 * (*(_DWORD *)v26 >> 3) + 12]];
    goto LABEL_32;
  }
  v12 = (int)v26;
  if ( v26 != v6 )
  {
    v16 = *(unsigned int *)(v28 + 4);
    if ( (_DWORD)v16 != 0 )
    {
      v17 = *(unsigned int *)&v6[8 * v16 + 28];
      if ( (_DWORD)v17 != 0 )
      {
        v18 = *(_DWORD *)v26 >> 3;
        LOWORD(v19) = *(_WORD *)&v6[8 * v18 + 62];
        v20 = *(_WORD *)&v6[8 * v17 + 60];
        v8 = &v6[8 * *(unsigned int *)&v6[8 * v18 + 16]];
        if ( v20 < 0 )
          goto LABEL_13;
        if ( (__int16)v19 > v20 )
        {
          LODWORD(v11) = *(_DWORD *)&v6[8 * v17 + 36] == *(_DWORD *)&v8[4 * (unsigned __int16)v20 + 12];
          goto LABEL_15;
        }
        while ( 1 )
        {
          while ( 1 )
          {
            v17 = sub_275BEC0(
                    a1: i,
                    a2: v10,
                    a3: v11,
                    a4: v11,
                    a5: (__int64)&v6[8 * *(unsigned int *)&v6[8 * v18 + 12]],
                    a6: (__int64)(v6 + 373281248),
                    a7: v25);
LABEL_13:
            LODWORD(v11) = *(_DWORD *)&v6[8 * v17 + 40];
            if ( (int)v11 < 0x10000 )
              break;
            v10 = (unsigned int)(2 * *(__int16 *)&v6[8 * v18 + 64]);
            for ( i = 0; (int)v10 > (int)i; i = (unsigned int)(i + 2) )
            {
              if ( (_DWORD)v11 == *(_DWORD *)&v8[4 * (__int16)v19 + 12 + 4 * (int)i] )
                goto LABEL_4;
            }
            v11 = v28;
          }
          v19 = *(_DWORD *)&v6[8 * v18 + 44] & ((unsigned int)v11 >> HIBYTE(*(_DWORD *)&v6[8 * v18 + 44]));
          LODWORD(v8) = (unsigned __int16)*(_DWORD *)&v6[8 * *(unsigned int *)&v6[8 * v18 + 20] + 4 * v19 + 12];
          LODWORD(v11) = v11 == (_DWORD)v8;
LABEL_15:
          if ( (_DWORD)v11 != 0 )
            goto LABEL_4;
          v11 = v28;
        }
      }
    }
    else
    {
      sub_2771080(a1: i, a2: v10, a3: v28, a4: (_DWORD)v8, a5: 0, a6: (_DWORD)v26, a7: v25);
    }
    sub_2771080(a1: i, a2: v10, a3: v11, a4: (_DWORD)v8, a5: v16, a6: v12, a7: v25);
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
    return sub_275EA00();
  }
LABEL_4:
  v13 = (unsigned __int64)v27;
  if ( v27 == (_DWORD *)v6 )
  {
    while ( 1 )
    {
      v22 = sub_2771080(a1: i, a2: v10, a3: v11, a4: (_DWORD)v8, a5: v13, a6: (_DWORD)v26, a7: v25);
LABEL_34:
      v24 = v23;
LABEL_32:
      sub_275BDA0(a1: i, a2: v10, a3: v22, a4: v23, a5: v24, a6: v23, a7: v25);
    }
  }
  v14 = v28;
  result = *(_QWORD *)(v28 + 8);
  *(_DWORD *)((char *)v27 + result) = (unsigned __int64)(v26 - v6) >> 3;
  __faststorefence();
  if ( (*(_DWORD *)v13 & 2) != 0 )
  {
    if ( (*(_DWORD *)v13 & 1) != 0 )
    {
      v21 = (char *)(v13 - *(_QWORD *)(v13 - 8));
      result >>= 9;
      if ( v21[result + 48] != 0 )
        v21[result + 48] = 0;
    }
    else
    {
      result = v13 & 0xFFFFFFFFFFF80000LL;
      if ( *(_BYTE *)((v13 & 0xFFFFFFFFFFF80000LL) + ((v13 - ((v13 & 0xFFFFFFFFFFF80000LL) + 2112)) >> 9) + 0x38) != 0 )
        *(_BYTE *)((v13 & 0xFFFFFFFFFFF80000LL) + ((v13 - ((v13 & 0xFFFFFFFFFFF80000LL) + 2112)) >> 9) + 0x38) = 0;
    }
  }
  if ( *(int *)(v7 + 16) <= 0 )
    return sub_277F280(a1: i, a2: v10, a3: v14);
  return result;
}
