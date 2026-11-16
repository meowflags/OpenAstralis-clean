// sub_5037B00
// rva 0x05037b00  size 1001  section .text  group text
// window base 0x185037b00: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_5037B00(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        __int64 a6,
        __int64 a7,
        int a8,
        __int64 a9,
        int a10,
        __int64 a11,
        int a12,
        int a13,
        int a14)
{
  unsigned int v14; // ebp
  __int64 v15; // r13
  _DWORD *v16; // r14
  __int64 v17; // r15
  unsigned __int64 v18; // rcx
  unsigned __int64 v19; // rbx
  __int64 v20; // rsi
  __int64 v21; // rsi
  __int64 v22; // rdi
  __int64 (__fastcall *v23)(__int64, __int64, _DWORD *); // r10
  _DWORD *v24; // rax
  int v25; // edx
  int v26; // esi
  int v27; // r8d
  int v28; // r9d
  __int64 v29; // rdx
  __int64 v30; // rsi
  __int64 v31; // r8
  __int64 v32; // rdi
  __int64 i; // r9
  unsigned int v34; // r10d
  __int64 v35; // rsi
  __int64 v36; // r11
  __int16 v37; // r12
  __int16 v38; // si
  _DWORD *v39; // rax
  BOOL v40; // eax
  char *v41; // rax
  unsigned __int64 v42; // rsi
  int j; // r12d
  __int64 v45; // [rsp+0h] [rbp-48h] BYREF
  _DWORD *v46; // [rsp+8h] [rbp-40h]
  int v47; // [rsp+14h] [rbp-34h]
  _DWORD *v48; // [rsp+18h] [rbp-30h]
  int v49; // [rsp+20h] [rbp-28h]
  unsigned int v50; // [rsp+24h] [rbp-24h]
  __int64 v51; // [rsp+28h] [rbp-20h]
  _DWORD *v52; // [rsp+30h] [rbp-18h]
  unsigned int v53; // [rsp+3Ch] [rbp-Ch]
  signed int v54; // [rsp+40h] [rbp-8h]
  unsigned int v55; // [rsp+44h] [rbp-4h]

  v55 = a5;
  if ( (unsigned __int64)&v45 <= *(_QWORD *)(v17 + 8) )
  {
LABEL_50:
    sub_1EB84E0();
    goto LABEL_51;
  }
  v18 = *(unsigned int *)(a3 + 4);
  v19 = (unsigned __int64)&v16[2 * v18];
  v52 = (_DWORD *)v19;
  if ( (_DWORD)v18 == 0 )
  {
LABEL_51:
    sub_2771080();
    goto LABEL_52;
  }
  v14 = v16[2 * v18 + 2];
  if ( v14 <= a5 )
  {
LABEL_52:
    sub_2771220(a1, a2, a3: v55, a4: v18, a5: v14);
    goto LABEL_53;
  }
  v20 = *(unsigned int *)(v19 + 4LL * a5 + 12);
  if ( (_DWORD)v20 != 0 )
  {
    v51 = a3;
    v50 = v18;
    v54 = v14;
    v16[2 * v20 + 5] = 0;
    *(_DWORD *)(v19 + 4LL * a5 + 12) = 0;
    --*(_DWORD *)(a3 + 8);
    if ( (int)v14 <= (int)(a5 + 1) )
      JUMPOUT(0x30A052B78LL);
    v21 = a5 + 1;
    while ( 1 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          v53 = v21;
          if ( v14 <= (unsigned int)v21 )
          {
            sub_2771220(a1, a2: v21, a3: v53, a4: v18, a5: v14);
            goto LABEL_50;
          }
          v22 = *(unsigned int *)(v19 + 4 * v21 + 12);
          if ( (_DWORD)v22 == 0 )
          {
            v48 = &v16[2 * v22];
            if ( *(int *)(v17 + 16) <= 0 )
              JUMPOUT(0x185037E94LL);
            return v53;
          }
          v23 = (__int64 (__fastcall *)(__int64, __int64, _DWORD *))(v15 + *(_QWORD *)&v16[2 * (v16[2 * v22] >> 3) + 38]);
          v49 = v16[2 * v22] >> 3;
          v48 = &v16[2 * v22];
          v47 = v22;
          v24 = (_DWORD *)v23(a1: v22, a2: v21, a3: v48);
          if ( v24 != v16 )
          {
            v18 = *v24 >> 3;
            if ( SHIWORD(v16[2 * v18 + 15]) < 2 )
              return sub_185037E6B(a1, a2: v26, a3: v25, a4: v18, a5: v27, a6: v28, a7, a8, a9, a10, a11, a12, a13, a14);
            v18 = (unsigned int)v16[2 * v18 + 4];
            if ( v16[2 * v18 + 4] != 4075 )
              return sub_185037E6B(a1, a2: v26, a3: v25, a4: v18, a5: v27, a6: v28, a7, a8, a9, a10, a11, a12, a13, a14);
          }
          v14 = v54;
          if ( v54 <= (int)(v53 + 1) )
            JUMPOUT(0x30A052C02LL);
          v29 = v53 + 1;
          if ( v24 != v16 )
            break;
          v35 = v53;
          v19 = (unsigned __int64)v52;
          v36 = v51;
          v16[2 * v47 + 5] = 0;
          *(_DWORD *)(v19 + 4 * v35 + 12) = 0;
          --*(_DWORD *)(v36 + 8);
          v21 = (unsigned int)v29;
        }
        v18 = v24[1] & (unsigned int)(v54 - 1);
        if ( (_DWORD)v18 != v53 )
          break;
        v21 = (unsigned int)v29;
        v19 = (unsigned __int64)v52;
      }
      v30 = v53;
      v19 = (unsigned __int64)v52;
      v31 = v50;
      v52[v53 + 3] = 0;
      v32 = (unsigned int)v16[2 * v31];
      for ( i = (unsigned int)v18; ; i = v34 )
      {
        if ( v14 <= (unsigned int)i )
          goto LABEL_54;
        if ( *(_DWORD *)(v19 + 4 * i + 12) == 0 )
          break;
        v18 = (unsigned int)(i + 1);
        if ( (int)v14 <= (int)v18 )
          JUMPOUT(0x30A052C67LL);
        v34 = i + 1;
        if ( *(int *)(v17 + 16) <= 0 )
          v24 = (_DWORD *)sub_277F280(a1: v32, a2: v30, a3: v29);
      }
      v46 = v24;
      a1 = (unsigned int)v16[2 * ((unsigned int)v32 >> 3) + 6];
      v37 = v16[2 * a1 + 15];
      v38 = HIWORD(v16[2 * v49 + 15]);
      v39 = &v16[2 * v16[2 * v49 + 4]];
      if ( v37 < 0 )
      {
        a1 = (unsigned int)v16[2 * a1 + 10];
        if ( (int)a1 >= 0x10000 )
        {
          v18 = (unsigned int)(2 * SLOWORD(v16[2 * v49 + 16]));
          for ( j = 0; ; j += 2 )
          {
            if ( (int)v18 <= j )
              goto LABEL_60;
            if ( (_DWORD)a1 == v39[v38 + 3 + j] )
              break;
          }
          v19 = (unsigned __int64)v52;
          goto LABEL_27;
        }
        v18 = (int)(4 * (v16[2 * v49 + 11] & ((unsigned int)a1 >> HIBYTE(v16[2 * v49 + 11]))) + 12);
        v40 = a1 == (unsigned __int16)*(_DWORD *)((char *)&v16[2 * v16[2 * v49 + 5]] + v18);
      }
      else
      {
        if ( v38 <= v37 )
          goto LABEL_60;
        v18 = v16[2 * a1 + 9] == v39[(unsigned __int16)v37 + 3];
        v40 = v16[2 * a1 + 9] == v39[(unsigned __int16)v37 + 3];
      }
      if ( !v40 )
LABEL_60:
        JUMPOUT(0x185037E8ALL);
LABEL_27:
      *(_DWORD *)(v19 + 4 * i + 12) = v47;
      if ( (*(_DWORD *)v19 & 2) != 0 )
      {
        if ( (*(_DWORD *)v19 & 1) != 0 )
        {
          v41 = (char *)(v19 - *(_QWORD *)(v19 - 8));
          v18 = v19;
          v42 = (unsigned __int64)(4 * i + 12) >> 9;
          if ( v41[v42 + 48] != 0 )
            v41[v42 + 48] = 0;
          v21 = (unsigned int)v29;
        }
        else
        {
          v18 = (v19 - ((v19 & 0xFFFFFFFFFFF80000LL) + 2112)) >> 9;
          if ( *(_BYTE *)((v19 & 0xFFFFFFFFFFF80000LL) + v18 + 0x38) != 0 )
            *(_BYTE *)((v19 & 0xFFFFFFFFFFF80000LL) + ((v19 - ((v19 & 0xFFFFFFFFFFF80000LL) + 2112)) >> 9) + 0x38) = 0;
          v21 = (unsigned int)v29;
        }
      }
      else
      {
        v21 = (unsigned int)v29;
      }
    }
  }
LABEL_53:
  v24 = (_DWORD *)sub_2771080();
LABEL_54:
  v46 = v24;
  sub_2771220(a1: v32, a2: v30, a3: (unsigned int)i, a4: v18, a5: v14);
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
  return sub_5037F00();
}
