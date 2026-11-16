// sub_185047200
// rva 0x05047200  size 1852  section .text  group text
// window base 0x185047200: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_185047200(__int64 a1, __int64 a2, __int64 a3, __int64 a4, _DWORD *a5, int a6, char a7)
{
  __int64 v7; // r13
  _DWORD *v8; // r14
  __int64 v9; // r15
  __int64 v10; // rcx
  __int64 v11; // rax
  _DWORD *v12; // rax
  __int64 v13; // rcx
  int v14; // eax
  __int64 v15; // rax
  _DWORD *v16; // rsi
  __int64 v17; // rdi
  __int64 result; // rax
  __int64 v19; // rdi
  __int64 v20; // rsi
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rbp
  _DWORD *v24; // rbp
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rsi
  __int64 v28; // rdi
  __int64 v29; // rcx
  __int64 v30; // rdx
  __int64 v31; // rcx
  int v32; // r9d
  __int64 v33; // rax
  _DWORD *v34; // rsi
  __int64 v35; // rdi
  _DWORD *v36; // rcx
  _DWORD *v37; // rax
  __int64 v38; // rdi
  __int64 v39; // rsi
  __int64 v40; // rcx
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // rdx
  __int64 v44; // rdx
  __int64 v45; // r8
  __int16 v46; // dx
  __int64 v47; // rcx
  __int64 v48; // rdx
  __int64 v49; // rdx
  __int64 v50; // r8
  __int16 v51; // dx
  __int64 v52; // rax
  __int64 v53; // rax
  __int64 v54; // [rsp+0h] [rbp-38h] BYREF
  _DWORD *v55; // [rsp+8h] [rbp-30h]
  _DWORD *v56; // [rsp+10h] [rbp-28h]
  _DWORD *v57; // [rsp+18h] [rbp-20h]
  __int64 v58; // [rsp+20h] [rbp-18h]
  unsigned int v59; // [rsp+2Ch] [rbp-Ch]
  BOOL v60; // [rsp+30h] [rbp-8h]
  int v61; // [rsp+34h] [rbp-4h]

  v58 = a3;
  v57 = a5;
  v61 = a6;
  if ( (unsigned __int64)&v54 > *(_QWORD *)(v9 + 8) )
  {
    v10 = *(unsigned int *)(v9 + 72);
    if ( (_DWORD)v10 != 0 )
      goto LABEL_4;
    while ( 1 )
    {
      MEMORY[0x182771080]();
LABEL_4:
      v11 = (unsigned int)v8[2 * v10 + 18];
      if ( (_DWORD)v11 != 0 )
        v12 = &v8[2 * v11];
      else
        v12 = &v8[2 * v10];
      if ( v12 != v8 )
      {
        v13 = *v12 >> 3;
        v14 = SHIWORD(v8[2 * v13 + 15]) >= 3 && v8[2 * v8[2 * v13 + 4] + 5] == 70129;
        if ( a5 == v8 )
          goto LABEL_44;
        v60 = (unsigned __int16)v8[2 * v8[2 * (*a5 >> 3) + 5]
                                 + 3
                                 + (v8[2 * (*a5 >> 3) + 11] & (0x626u >> HIBYTE(v8[2 * (*a5 >> 3) + 11])))] == 1574;
        goto LABEL_11;
      }
    }
  }
  v37 = (_DWORD *)MEMORY[0x181EB84E0]();
  v47 = *v37 >> 3;
  v48 = (unsigned int)v8[2 * v47 + 4];
  v31 = (unsigned int)SHIWORD(v8[2 * v47 + 15]);
  if ( ((__int16)v31 < 5 || v8[2 * v48 + 7] != 88185) && (__int16)v31 >= 5 && v8[2 * v48 + 7] == 88029 )
  {
    v55 = v37;
    v32 = v61;
    goto LABEL_34;
  }
  do
  {
    do
    {
      do
      {
LABEL_46:
        v37 = (_DWORD *)MEMORY[0x182769900](a1: v38, a2: v39, a3: v37, a4: v31, a5: &a7);
        v40 = *v37 >> 3;
        v41 = (unsigned int)v8[2 * v40 + 4];
        v31 = (unsigned int)SHIWORD(v8[2 * v40 + 15]);
      }
      while ( (__int16)v31 >= 5 && v8[2 * v41 + 7] == 88185 );
    }
    while ( (__int16)v31 < 5 || v8[2 * v41 + 7] != 88029 );
LABEL_50:
    v56 = v37;
  }
  while ( v61 == 0 );
  result = MEMORY[0x186119F60](a1: v38, a2: v39, a3: v8 + 93847164, a4: v31, a5: 0, a6: 100000000);
  v21 = 0;
  while ( (_DWORD)v21 == 0 )
  {
    v22 = *(unsigned int *)(v9 + 72);
    if ( (_DWORD)v22 == 0
      || ((_DWORD)(v23 = (unsigned int)v8[2 * v22 + 18]) == 0 ? (v24 = &v8[2 * v22]) : (v24 = &v8[2 * v23]), v24 == v8) )
    {
      v14 = MEMORY[0x182771080](a1: v19, a2: v20, a3: v58, a4: v21, a5: v57);
LABEL_44:
      v60 = false;
LABEL_11:
      if ( v14 != 0 )
      {
        MEMORY[0x18635F240]();
        if ( v57 == v8 )
        {
          v52 = MEMORY[0x18276BEE0]();
        }
        else
        {
          if ( v60 )
            goto LABEL_14;
          v52 = MEMORY[0x18276B120]();
        }
        v55 = (_DWORD *)v52;
        MEMORY[0x186360580]();
        v37 = v55;
        v44 = *v55 >> 3;
        v45 = (unsigned int)v8[2 * v44 + 4];
        v46 = HIWORD(v8[2 * v44 + 15]);
        if ( (v46 < 5 || v8[2 * v45 + 7] != 88185) && v46 >= 5 && v8[2 * v45 + 7] == 88029 )
          goto LABEL_50;
        goto LABEL_46;
      }
      if ( a5 == v8 )
      {
        v37 = (_DWORD *)MEMORY[0x18276BEE0]();
LABEL_52:
        v42 = *v37 >> 3;
        v43 = (unsigned int)v8[2 * v42 + 4];
        v31 = (unsigned int)SHIWORD(v8[2 * v42 + 15]);
        if ( ((__int16)v31 < 5 || v8[2 * v43 + 7] != 88185) && (__int16)v31 >= 5 && v8[2 * v43 + 7] == 88029 )
          goto LABEL_50;
        goto LABEL_46;
      }
      if ( !v60 )
      {
        v37 = (_DWORD *)MEMORY[0x18276B120]();
        goto LABEL_52;
      }
      v33 = *a5 >> 3;
      v34 = &v8[2 * v8[2 * v33 + 5]];
      v35 = v8[2 * v33 + 11] & (0x626u >> HIBYTE(v8[2 * v33 + 11]));
      v36 = &v8[2 * *(unsigned int *)(a3 + 108)];
      result = ((__int64 (__fastcall *)(__int64, _DWORD *, _DWORD *, _DWORD *, _DWORD *))(v7
                                                                                        + *(_QWORD *)((char *)&v8[2 * v33] + HIWORD(v34[v35 + 3]))))(
                 a1: v35,
                 a2: v34,
                 a3: a5,
                 a4: v36,
                 a5: v36);
      v21 = 1;
    }
    else
    {
      v25 = *v24 >> 3;
      if ( SHIWORD(v8[2 * v25 + 15]) >= 3 && v8[2 * v8[2 * v25 + 4] + 5] == 70129 )
      {
        v59 = 0;
        MEMORY[0x18635F240](a1: v19, a2: v20, a3: v58, a4: v21, a5: v57);
        if ( v57 == v8 )
        {
          v53 = MEMORY[0x18276BEE0]();
LABEL_67:
          v56 = (_DWORD *)v53;
          MEMORY[0x186360580]();
          v37 = v56;
          v49 = *v56 >> 3;
          v50 = (unsigned int)v8[2 * v49 + 4];
          v51 = HIWORD(v8[2 * v49 + 15]);
          if ( v51 >= 5 && v8[2 * v50 + 7] == 88185 || v51 < 5 || v8[2 * v50 + 7] != 88029 )
            goto LABEL_46;
          v55 = v56;
          v32 = v61;
          goto LABEL_34;
        }
        if ( !v60 )
        {
          v53 = MEMORY[0x18276B120]();
          goto LABEL_67;
        }
LABEL_14:
        v15 = *v57 >> 3;
        v16 = &v8[2 * v8[2 * v15 + 5]];
        v17 = v8[2 * v15 + 11] & (0x626u >> HIBYTE(v8[2 * v15 + 11]));
        ((void (__fastcall *)(__int64, _DWORD *, _DWORD *, _DWORD *, _DWORD *))(v7
                                                                              + *(_QWORD *)((char *)&v8[2 * v15]
                                                                                          + HIWORD(v16[v17 + 3]))))(
          a1: v17,
          a2: v16,
          a3: v57,
          a4: &v8[2 * *(unsigned int *)(v58 + 108)],
          a5: &v8[2 * *(unsigned int *)(v58 + 108)]);
        result = MEMORY[0x186360580]();
        v21 = 1;
      }
      else if ( v57 == v8 )
      {
        v59 = 0;
        v37 = (_DWORD *)MEMORY[0x18276BEE0](a1: v19, a2: v20, a3: v58, a4: v21, a5: v57);
LABEL_29:
        v29 = *v37 >> 3;
        v30 = (unsigned int)v8[2 * v29 + 4];
        v31 = (unsigned int)SHIWORD(v8[2 * v29 + 15]);
        if ( (__int16)v31 >= 5 && v8[2 * v30 + 7] == 88185 || (__int16)v31 < 5 || v8[2 * v30 + 7] != 88029 )
          goto LABEL_46;
        v55 = v37;
        v32 = v61;
LABEL_34:
        if ( v32 == 0 )
        {
          v37 = v55;
          goto LABEL_46;
        }
        result = MEMORY[0x186119F60](a1: v38, a2: v39, a3: v8 + 93847164, a4: v31, a5: 0, a6: 100000000);
        v21 = v59;
      }
      else
      {
        if ( !v60 )
        {
          v59 = 0;
          v37 = (_DWORD *)MEMORY[0x18276B120](a1: v19, a2: v20, a3: v58, a4: v21, a5: v57);
          goto LABEL_29;
        }
        v59 = 0;
        v26 = *v57 >> 3;
        v27 = (unsigned int)v8[2 * v26 + 11];
        v28 = (unsigned int)v27 & (0x626u >> HIBYTE(v8[2 * v26 + 11]));
        result = ((__int64 (__fastcall *)(__int64, __int64, _DWORD *, _DWORD *, _DWORD *))(v7
                                                                                         + *(_QWORD *)((char *)&v8[2 * v26] + HIWORD(v8[2 * (unsigned int)v8[2 * v26 + 5] + 3 + v28]))))(
                   a1: v28,
                   a2: v27,
                   a3: v57,
                   a4: &v8[2 * *(unsigned int *)(v58 + 108)],
                   a5: &v8[2 * *(unsigned int *)(v58 + 108)]);
        v21 = 1;
      }
    }
  }
  if ( *(int *)(v9 + 16) <= 0 )
    return MEMORY[0x18277F280](a1: v19, a2: v20, a3: v58, a4: v21, a5: v57);
  return result;
}
