// sub_184F42E80
// rva 0x04f42e80  size 2181  section .text  group text
// window base 0x184f42e80: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_184F42E80(__int64 a1, __int64 a2, _DWORD *a3, __int64 a4, _DWORD *a5, __int64 a6, char a7)
{
  __int64 v7; // r13
  _DWORD *v8; // r14
  __int64 v9; // r15
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rbx
  _DWORD *v13; // rsi
  __int64 v14; // rdi
  unsigned int v15; // ebx
  __int64 result; // rax
  _DWORD *v17; // rbx
  __int64 v18; // r8
  unsigned int i; // ebp
  __int64 v20; // rcx
  __int64 v21; // rsi
  __int64 v22; // rdi
  _DWORD *v23; // r9
  __int64 v24; // r10
  _DWORD *v25; // rsi
  __int64 v26; // rcx
  unsigned int v27; // eax
  _DWORD *v28; // rdx
  __int64 v29; // rdi
  __int64 v30; // rsi
  __int64 v31; // rcx
  __int64 v32; // rcx
  __int64 v33; // rdx
  _DWORD *v34; // rsi
  __int64 v35; // rdi
  void (__fastcall *v36)(__int64, _DWORD *, _DWORD *, _QWORD, _QWORD); // rcx
  unsigned int v37; // ebp
  __int64 v38; // rbx
  __int64 v39; // rcx
  __int64 v40; // rdi
  _DWORD *v41; // r10
  __int64 v42; // r11
  _DWORD *v43; // rdi
  __int64 (__fastcall *v44)(_DWORD *, _QWORD, _DWORD *, _QWORD, _QWORD); // rcx
  unsigned int v45; // eax
  __int64 v46; // rdi
  __int64 v47; // rdx
  _DWORD *v48; // rsi
  __int64 v49; // rdi
  void (__fastcall *v50)(__int64, _DWORD *, _DWORD *, _QWORD, _QWORD); // rcx
  __int64 v51; // r8
  __int64 v52; // rcx
  __int64 v53; // rax
  __int64 v54; // rsi
  __int64 v55; // rcx
  unsigned int v56; // eax
  __int64 v57; // rdi
  __int64 v58; // rsi
  __int64 v59; // rdx
  __int64 v60; // rdx
  _DWORD *v61; // rdi
  void (__fastcall *v62)(_DWORD *, _QWORD, _DWORD *, _QWORD, _QWORD); // rcx
  __int64 v63; // r8
  __int64 v64; // rax
  __int64 v65; // rax
  __int64 v66; // rsi
  __int64 v67; // rcx
  unsigned int v68; // eax
  __int64 v69; // rdx
  __int64 v70; // rdx
  _DWORD *v71; // rdi
  void (__fastcall *v72)(_DWORD *, _QWORD, _DWORD *, _QWORD, _QWORD); // rcx
  __int64 v73; // rax
  __int64 v74; // rcx
  __int64 v75; // rdi
  __int64 v76; // rsi
  _DWORD *v77; // rbx
  unsigned int v78; // edx
  __int64 v79; // [rsp+0h] [rbp-38h] BYREF
  _DWORD *v80; // [rsp+10h] [rbp-28h]
  _DWORD *v81; // [rsp+18h] [rbp-20h]
  unsigned int v82; // [rsp+20h] [rbp-18h]
  unsigned int v83; // [rsp+24h] [rbp-14h]
  unsigned int v84; // [rsp+28h] [rbp-10h]
  unsigned int v85; // [rsp+2Ch] [rbp-Ch]
  unsigned int v86; // [rsp+30h] [rbp-8h]
  signed int v87; // [rsp+34h] [rbp-4h]

  v81 = a5;
  if ( (unsigned __int64)&v79 <= *(_QWORD *)(v9 + 8) )
  {
    MEMORY[0x181EB84E0]();
    goto LABEL_47;
  }
  v10 = (unsigned int)a3[1];
  if ( (_DWORD)v10 == 0 )
  {
LABEL_47:
    MEMORY[0x182771080]();
    goto LABEL_48;
  }
  v80 = a3;
  v11 = v8[2 * v10] >> 3;
  if ( (unsigned __int16)v8[2 * v8[2 * v11 + 5] + 3 + (v8[2 * v11 + 11] & (0x568u >> HIBYTE(v8[2 * v11 + 11])))] != 1384 )
  {
LABEL_48:
    v73 = MEMORY[0x182770780]();
    v77 = v80;
    for ( i = v85; ; i = v84 )
    {
LABEL_45:
      v77[2] = i;
      v73 = MEMORY[0x182769900](a1: v75, a2: v76, a3: v73, a4: v74, a5: &a7);
      v77 = v80;
    }
  }
  v12 = v8[2 * v10] >> 3;
  v13 = &v8[2 * v8[2 * v12 + 5]];
  v14 = v8[2 * v12 + 11] & (0x568u >> HIBYTE(v8[2 * v12 + 11]));
  v87 = ((__int64 (__fastcall *)(__int64, _DWORD *, _DWORD *))(v7
                                                             + *(_QWORD *)((char *)&v8[2 * v12 + 10]
                                                                         + HIWORD(v13[v14 + 3]))))(
          a1: v14,
          a2: v13,
          a3: &v8[2 * v10]);
  v15 = v80[2];
  if ( v87 <= (int)v15 )
  {
    result = v15;
    v17 = v80;
    goto LABEL_6;
  }
  v18 = (unsigned int)v80[1];
  i = v15 + 1;
  if ( (_DWORD)v18 == 0 )
  {
    v86 = v15 + 1;
    v77 = v80;
    v73 = MEMORY[0x18276BEE0]();
    goto LABEL_45;
  }
  v20 = v8[2 * v18] >> 3;
  if ( (unsigned __int16)v8[2 * v8[2 * v20 + 5] + 3 + (v8[2 * v20 + 11] & (0x568u >> HIBYTE(v8[2 * v20 + 11])))] != 1384 )
  {
    v86 = v15 + 1;
    v77 = v80;
    v73 = MEMORY[0x18276B120]();
    goto LABEL_45;
  }
  v86 = v15 + 1;
  v21 = v8[2 * v18] >> 3;
  v22 = (unsigned int)v8[2 * v21 + 11];
  v23 = &v8[2 * v8[2 * v21 + 5]];
  v24 = (unsigned int)v22 & (0x568u >> HIBYTE(v8[2 * v21 + 11]));
  v25 = &v8[2 * v21];
  v26 = *(_QWORD *)((char *)v25 + HIWORD(v23[v24 + 3]));
  v85 = v15;
  v27 = ((__int64 (__fastcall *)(__int64, _DWORD *, _DWORD *, __int64, _QWORD))(v7 + v26))(
          a1: v22,
          a2: v25,
          a3: &v8[2 * v18],
          a4: v26,
          a5: v15);
  if ( v81 == v8 )
  {
    v32 = 0;
  }
  else
  {
    v31 = *v81 >> 3;
    v28 = &v8[2 * v8[2 * v31 + 5]];
    v32 = (unsigned __int16)v28[(v8[2 * v31 + 11] & (0x641u >> HIBYTE(v8[2 * v31 + 11]))) + 3] == 1601;
  }
  v84 = v27;
  if ( v27 < 0xD800 || v27 >= 0xDC00 || v87 <= (int)v86 )
  {
    if ( v81 != v8 )
    {
      if ( (_DWORD)v32 != 0 )
      {
        v33 = *v81 >> 3;
        v34 = &v8[2 * v8[2 * v33 + 5]];
        v35 = v8[2 * v33 + 11] & (0x641u >> HIBYTE(v8[2 * v33 + 11]));
        v36 = (void (__fastcall *)(__int64, _DWORD *, _DWORD *, _QWORD, _QWORD))(v7
                                                                               + *(_QWORD *)((char *)&v8[2 * v33]
                                                                                           + HIWORD(v34[v35 + 3])));
        v36(a1: v35, a2: v34, a3: v81, a4: v36, a5: v27);
        v37 = v86;
        goto LABEL_18;
      }
      goto LABEL_62;
    }
LABEL_59:
    v77 = v80;
    v73 = MEMORY[0x18276BEE0](a1: v29, a2: v30, a3: v28, a4: v32);
    i = v86;
    goto LABEL_45;
  }
  v28 = v80;
  v63 = (unsigned int)v80[1];
  if ( (_DWORD)v63 == 0 )
    goto LABEL_59;
  v83 = v32;
  v64 = v8[2 * v63] >> 3;
  if ( (unsigned __int16)v8[2 * v8[2 * v64 + 5] + 3 + (v8[2 * v64 + 11] & (0x568u >> HIBYTE(v8[2 * v64 + 11])))] != 1384 )
  {
LABEL_62:
    v77 = v80;
    v73 = MEMORY[0x18276B120]();
    i = v86;
    goto LABEL_45;
  }
  v65 = v8[2 * v63] >> 3;
  v66 = v8[2 * v65 + 11] & (0x568u >> HIBYTE(v8[2 * v65 + 11]));
  v67 = HIWORD(v8[2 * (unsigned int)v8[2 * v65 + 5] + 3 + v66]);
  v68 = ((__int64 (__fastcall *)(__int64, __int64, _DWORD *, __int64, _QWORD))(v7
                                                                             + *(_QWORD *)((char *)&v8[2 * v65] + v67)))(
          a1: v29,
          a2: v66,
          a3: &v8[2 * v63],
          a4: v67,
          a5: v86);
  if ( v68 < 0xDC00 || v68 >= 0xE000 )
  {
    v82 = v68;
    v32 = v83;
    if ( v81 != v8 )
    {
      if ( v83 != 0 )
      {
        v69 = *v81 >> 3;
        ((void (__fastcall *)(__int64, __int64, _DWORD *, _QWORD, _QWORD))(v7
                                                                         + *(_QWORD *)((char *)&v8[2 * v69]
                                                                                     + HIWORD(v8[2 * v8[2 * v69 + 5]
                                                                                               + 3
                                                                                               + (v8[2 * v69 + 11]
                                                                                                & (0x641u >> HIBYTE(v8[2 * v69 + 11])))]))))(
          a1: v29,
          a2: v30,
          a3: v81,
          a4: HIBYTE(v8[2 * v69 + 11]),
          a5: v84);
        v37 = v86;
        goto LABEL_18;
      }
      goto LABEL_62;
    }
    goto LABEL_59;
  }
  if ( v81 == v8 )
  {
    v85 += 2;
    v82 = v68;
    v77 = v80;
    v73 = MEMORY[0x18276BEE0]();
    i = v85;
    goto LABEL_45;
  }
  if ( v83 == 0 )
  {
    v82 = v68;
    v77 = v80;
    v73 = MEMORY[0x18276B120](a1: v29, a2: v30, a3: v85 + 2);
    i = v78;
    goto LABEL_45;
  }
  v85 += 2;
  v70 = *v81 >> 3;
  v71 = &v8[2 * v8[2 * v70 + 5]];
  v72 = (void (__fastcall *)(_DWORD *, _QWORD, _DWORD *, _QWORD, _QWORD))(v7
                                                                        + *(_QWORD *)((char *)&v8[2 * v70]
                                                                                    + HIWORD(v71[(v8[2 * v70 + 11]
                                                                                                & (0x641u >> HIBYTE(v8[2 * v70 + 11])))
                                                                                               + 3])));
  v82 = v68;
  v72(a1: v71, a2: v68 + (v84 << 10) - 56613888, a3: v81, a4: v72, a5: v68 + (v84 << 10) - 56613888);
  v37 = v85;
LABEL_18:
  while ( v87 > (int)v37 )
  {
    v38 = (unsigned int)v80[1];
    if ( (_DWORD)v38 == 0 )
    {
      v84 = v37 + 1;
      v77 = v80;
      v73 = MEMORY[0x18276BEE0]();
      i = v84;
      goto LABEL_45;
    }
    v39 = v8[2 * v38] >> 3;
    if ( (unsigned __int16)v8[2 * v8[2 * v39 + 5] + 3 + (v8[2 * v39 + 11] & (0x568u >> HIBYTE(v8[2 * v39 + 11])))] != 1384 )
    {
      v84 = v37 + 1;
      v77 = v80;
      v73 = MEMORY[0x18276B120]();
      i = v84;
      goto LABEL_45;
    }
    v84 = v37 + 1;
    v40 = v8[2 * v38] >> 3;
    v41 = &v8[2 * v8[2 * v40 + 5]];
    v42 = v8[2 * v40 + 11] & (0x568u >> HIBYTE(v8[2 * v40 + 11]));
    v43 = &v8[2 * v40];
    v44 = (__int64 (__fastcall *)(_DWORD *, _QWORD, _DWORD *, _QWORD, _QWORD))(v7
                                                                             + *(_QWORD *)((char *)v43
                                                                                         + HIWORD(v41[v42 + 3])));
    v82 = v37;
    v45 = v44(a1: v43, a2: v37 + 1, a3: &v8[2 * v38], a4: v44, a5: v37);
    v83 = v45;
    if ( v45 < 0xD800 || v45 >= 0xDC00 || v87 <= (int)v84 )
    {
      v47 = *v81 >> 3;
      v48 = &v8[2 * v8[2 * v47 + 5]];
      v49 = v8[2 * v47 + 11] & (0x641u >> HIBYTE(v8[2 * v47 + 11]));
      v50 = (void (__fastcall *)(__int64, _DWORD *, _DWORD *, _QWORD, _QWORD))(v7
                                                                             + *(_QWORD *)((char *)&v8[2 * v47]
                                                                                         + HIWORD(v48[v49 + 3])));
      v50(a1: v49, a2: v48, a3: v81, a4: v50, a5: v45);
      v37 = v84;
    }
    else
    {
      v51 = (unsigned int)v80[1];
      if ( (_DWORD)v51 == 0 )
      {
        v77 = v80;
        v73 = MEMORY[0x18276BEE0]();
        i = v84;
        goto LABEL_45;
      }
      v52 = v8[2 * v51] >> 3;
      if ( (unsigned __int16)v8[2 * v8[2 * v52 + 5] + 3 + (v8[2 * v52 + 11] & (0x568u >> HIBYTE(v8[2 * v52 + 11])))] != 1384 )
      {
        v77 = v80;
        v73 = MEMORY[0x18276B120]();
        i = v84;
        goto LABEL_45;
      }
      v53 = v8[2 * v51] >> 3;
      v54 = v8[2 * v53 + 11] & (0x568u >> HIBYTE(v8[2 * v53 + 11]));
      v55 = HIWORD(v8[2 * (unsigned int)v8[2 * v53 + 5] + 3 + v54]);
      v56 = ((__int64 (__fastcall *)(__int64, __int64, _DWORD *, __int64, _QWORD))(v7
                                                                                 + *(_QWORD *)((char *)&v8[2 * v53] + v55)))(
              a1: v46,
              a2: v54,
              a3: &v8[2 * v51],
              a4: v55,
              a5: v84);
      if ( v56 >= 0xDC00 && v56 < 0xE000 )
      {
        v60 = *v81 >> 3;
        v61 = &v8[2 * v8[2 * v60 + 5]];
        v62 = (void (__fastcall *)(_DWORD *, _QWORD, _DWORD *, _QWORD, _QWORD))(v7
                                                                              + *(_QWORD *)((char *)&v8[2 * v60]
                                                                                          + HIWORD(v61[(v8[2 * v60 + 11] & (0x641u >> HIBYTE(v8[2 * v60 + 11]))) + 3])));
        v85 = v56;
        v82 += 2;
        v62(a1: v61, a2: v56 + (v83 << 10) - 56613888, a3: v81, a4: v62, a5: v56 + (v83 << 10) - 56613888);
        v37 = v82;
      }
      else
      {
        v85 = v56;
        v59 = *v81 >> 3;
        ((void (__fastcall *)(__int64, __int64, _DWORD *, _QWORD, _QWORD))(v7
                                                                         + *(_QWORD *)((char *)&v8[2 * v59]
                                                                                     + HIWORD(v8[2 * v8[2 * v59 + 5]
                                                                                               + 3
                                                                                               + (v8[2 * v59 + 11]
                                                                                                & (0x641u >> HIBYTE(v8[2 * v59 + 11])))]))))(
          a1: v57,
          a2: v58,
          a3: v81,
          a4: HIBYTE(v8[2 * v59 + 11]),
          a5: v83);
        v37 = v84;
      }
    }
  }
  v17 = v80;
  result = v37;
LABEL_6:
  v17[2] = result;
  if ( *(int *)(v9 + 16) <= 0 )
    return MEMORY[0x18277F280]();
  return result;
}
