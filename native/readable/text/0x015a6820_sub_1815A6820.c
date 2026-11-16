// sub_15A6820
// rva 0x015a6820  size 1144  section .text  group text
// window base 0x1815a6820: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_15A6820(
        __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        __int64 a4,
        _DWORD *a5,
        __int64 a6,
        char a7)
{
  __int64 v7; // r13
  _DWORD *v8; // r14
  __int64 v9; // r15
  __int64 v10; // rcx
  __int64 v12; // rdx
  unsigned int v13; // eax
  __int64 (__fastcall *v14)(__int64, __int64, _DWORD *); // rax
  __int64 v15; // rdi
  __int64 v16; // rsi
  __int64 v17; // rax
  __int64 v18; // rdi
  __int64 v19; // rsi
  _DWORD *v20; // rdx
  unsigned int v21; // r8d
  unsigned int v22; // r8d
  unsigned int v23; // eax
  __int64 v24; // rcx
  __int64 v25; // rax
  __int64 v26; // rbx
  unsigned int v27; // r8d
  _DWORD *v28; // rax
  __int64 v29; // rsi
  __int64 v30; // rax
  __int64 v31; // rbx
  unsigned __int64 v32; // rdx
  unsigned __int64 v33; // rcx
  __int64 v34; // rdi
  _DWORD *v35; // rcx
  _DWORD *v36; // rbp
  unsigned __int64 v37; // r8
  unsigned __int64 v38; // rcx
  unsigned __int64 v39; // r8
  int v40; // edx
  int v41; // ecx
  int v42; // edi
  int v43; // esi
  int v44; // r8d
  int v45; // r9d
  char v46; // [rsp+0h] [rbp-58h] BYREF
  __int64 v47; // [rsp+8h] [rbp-50h]
  _DWORD *v48; // [rsp+10h] [rbp-48h]
  __int64 v49; // [rsp+18h] [rbp-40h]
  _DWORD *v50; // [rsp+20h] [rbp-38h]
  unsigned __int64 v51; // [rsp+28h] [rbp-30h]
  int v52; // [rsp+34h] [rbp-24h]
  _DWORD *v53; // [rsp+38h] [rbp-20h]
  unsigned __int64 v54; // [rsp+40h] [rbp-18h]
  unsigned int v55; // [rsp+48h] [rbp-10h]
  unsigned int v56; // [rsp+4Ch] [rbp-Ch]
  __int64 v57; // [rsp+50h] [rbp-8h]

  v54 = a3;
  v53 = a5;
  if ( (unsigned __int64)&v46 <= *(_QWORD *)(v9 + 8) )
  {
    sub_1EB84E0();
LABEL_55:
    v50 = v20;
    v23 = sub_2771080(a1: v18, a2: v19, a3: v20, a4: v51);
    goto LABEL_56;
  }
  if ( a5 == v8
    || (_DWORD)(v10 = (unsigned __int16)v8[2 * v8[2 * (*a5 >> 3) + 5]
                                         + 3
                                         + (v8[2 * (*a5 >> 3) + 11] & (0x61Cu >> HIBYTE(v8[2 * (*a5 >> 3) + 11])))]) != 1564 )
  {
    if ( *(int *)(v9 + 16) <= 0 )
      sub_277F280();
    return 0;
  }
  sub_15A4C20(a1, a2, a3, a4: v10, (__int64)a5, a6, a7: v46);
  v12 = *v53 >> 3;
  v13 = v8[2 * v8[2 * v12 + 5] + 3 + (v8[2 * v12 + 11] & (0x61Cu >> HIBYTE(v8[2 * v12 + 11])))];
  v52 = *(_DWORD *)(v54 + 12);
  v14 = (__int64 (__fastcall *)(__int64, __int64, _DWORD *))(v7 + *(_QWORD *)((char *)&v8[2 * v12 + 2] + HIWORD(v13)));
  v51 = (unsigned __int64)&v8[2 * v52];
  v17 = v14(a1: v15, a2: v16, a3: v53);
  if ( (_DWORD *)v17 == v8 )
    v20 = v8 + 94153502;
  else
    v20 = (_DWORD *)v17;
  v21 = *(_DWORD *)((char *)v20 + (int)v8[2 * (*v20 >> 3) + 13]);
  if ( v21 == 0 )
  {
    v50 = v20;
    v49 = v17;
    v21 = sub_1ED7320();
    v20 = v50;
  }
  v22 = ((v21 ^ (v21 >> 12) ^ (v21 >> 20)) >> 4)
      ^ v21
      ^ (v21 >> 12)
      ^ (v21 >> 20)
      ^ ((v21 ^ (v21 >> 12) ^ (v21 >> 20)) >> 7);
  v56 = v22;
  if ( v52 == 0 )
    goto LABEL_55;
  v23 = v8[2 * v52 + 2];
  v24 = v22 & (v23 - 1);
  if ( v23 <= (unsigned int)v24 )
  {
LABEL_56:
    v50 = v20;
    sub_2771220(a1: (unsigned int)v24, a2: v19, a3: (unsigned int)v24, a4: v51, a5: v23);
    goto LABEL_57;
  }
  v25 = *(unsigned int *)(v51 + 4 * v24 + 12);
  v26 = (__int64)&v8[2 * v25];
  if ( (_DWORD)v25 != 0 )
  {
    v19 = (__int64)&v8[2 * v8[2 * v25 + 6]];
    if ( v22 != v8[2 * v25 + 7] )
    {
      v55 = v24;
      v50 = v20;
      goto LABEL_16;
    }
    v49 = (__int64)&v8[2 * v8[2 * v25 + 6]];
    v55 = v24;
    v50 = v20;
    v48 = &v8[2 * v25];
    if ( (unsigned int)sub_15A04E0(a1: v18, a2: v19, a3: (__int64)v48, a4: v24, a5: v53) == 0 )
    {
      v19 = v49;
      v26 = (__int64)v48;
LABEL_16:
      v48 = (_DWORD *)v26;
      v27 = v56;
      v28 = v53;
      while ( (_DWORD *)v19 != v8 )
      {
        v20 = &v8[2 * *(unsigned int *)(v19 + 24)];
        if ( v27 == *(_DWORD *)(v19 + 28) )
        {
          v49 = (__int64)&v8[2 * *(unsigned int *)(v19 + 24)];
          v47 = v19;
          if ( (unsigned int)sub_15A04E0(a1: v18, a2: v19, a3: v19, a4: v24, a5: v28) != 0 )
          {
            v29 = v49;
            v30 = v47;
            goto LABEL_32;
          }
          v57 = v7;
          v48 = (_DWORD *)v47;
          v19 = v49;
          v27 = v56;
          v28 = v53;
        }
        else if ( *(int *)(v9 + 16) <= 0 )
        {
          v49 = (__int64)&v8[2 * *(unsigned int *)(v19 + 24)];
          v47 = v19;
          sub_277F280();
          v57 = v7;
          v48 = (_DWORD *)v47;
          v19 = v49;
          v28 = v53;
        }
        else
        {
          v48 = (_DWORD *)v19;
          v19 = (__int64)v20;
        }
      }
      goto LABEL_26;
    }
    v29 = v49;
    v30 = (__int64)v48;
LABEL_32:
    v31 = (__int64)v48;
    v32 = v54;
    ++*(_DWORD *)(v54 + 44);
    --*(_DWORD *)(v32 + 36);
    v33 = (unsigned __int64)(v29 - (_QWORD)v8) >> 3;
    if ( v30 == v31 )
    {
      v34 = v55;
      v36 = (_DWORD *)v51;
      *(_DWORD *)(v51 + 4LL * v55 + 12) = v33;
      if ( (*v36 & 2) != 0 )
      {
        if ( (*v36 & 1) != 0 )
        {
          v35 = (_DWORD *)v51;
          v32 = v51 - *(_QWORD *)(v51 - 8);
          v39 = (unsigned __int64)(4 * v34 + 12) >> 9;
          if ( *(_BYTE *)(v32 + v39 + 48) != 0 )
            *(_BYTE *)(v32 + v39 + 48) = 0;
        }
        else
        {
          v32 = v51 & 0xFFFFFFFFFFF80000LL;
          v37 = (v51 & 0xFFFFFFFFFFF80000LL) + 2112;
          if ( *(_BYTE *)((v51 & 0xFFFFFFFFFFF80000LL) + ((v51 - v37) >> 9) + 0x38) != 0 )
            *(_BYTE *)((v51 & 0xFFFFFFFFFFF80000LL) + ((v51 - v37) >> 9) + 0x38) = 0;
          v35 = (_DWORD *)v51;
        }
      }
      else
      {
        v35 = v36;
      }
      goto LABEL_36;
    }
    if ( (_DWORD *)v31 != v8 )
    {
      *(_DWORD *)(v31 + 24) = v33;
      if ( (*(_DWORD *)v31 & 2) != 0 )
      {
        v34 = v55;
        v38 = (v31 & 0xFFFFFFFFFFF80000LL) + 2112;
        v32 = (v31 - v38) >> 9;
        if ( *(_BYTE *)((v31 & 0xFFFFFFFFFFF80000LL) + v32 + 0x38) != 0 )
          *(_BYTE *)((v31 & 0xFFFFFFFFFFF80000LL) + ((v31 - v38) >> 9) + 0x38) = 0;
        v35 = (_DWORD *)v51;
      }
      else
      {
        v34 = v55;
        v35 = (_DWORD *)v51;
      }
LABEL_36:
      if ( *(int *)(v9 + 16) <= 0 )
        sub_277F280(a1: v34, a2: v29, a3: v32, a4: v35);
      return 1;
    }
LABEL_57:
    sub_2771080(a1: v55, a2: v29, a3: v32, a4: v51, a5: v53);
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    return sub_15A6CA0(a1: v42, a2: v43, a3: v40, a4: v41, a5: v44, a6: v45, a7);
  }
  v55 = v24;
  v50 = v20;
LABEL_26:
  if ( *(int *)(v9 + 16) <= 0 )
    sub_277F280(a1: v55, a2: v19, a3: v20, a4: v51);
  return 0;
}
