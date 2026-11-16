// sub_4F42740
// rva 0x04f42740  size 1030  section .text  group text
// window base 0x184f42740: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_4F42740(__int64 a1, __int64 a2, __int64 a3, __int64 a4, _DWORD *a5)
{
  __int64 v5; // r13
  _DWORD *v6; // r14
  __int64 v7; // r15
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rbx
  _DWORD *v11; // rsi
  __int64 v12; // rdi
  __int64 (__fastcall *v13)(__int64, _DWORD *, _DWORD *); // rcx
  __int64 result; // rax
  __int64 v15; // rdi
  __int64 v16; // rsi
  __int64 v17; // r8
  __int64 v18; // rcx
  __int64 v19; // rax
  _DWORD *v20; // rsi
  __int64 v21; // rdi
  __int64 v22; // rcx
  unsigned int v23; // eax
  __int64 v24; // rdi
  __int64 v25; // rsi
  __int64 v26; // rbx
  int v27; // ebp
  __int64 v28; // rsi
  unsigned int v29; // ecx
  __int64 v30; // rsi
  __int64 v31; // rdx
  int v32; // ecx
  __int64 v33; // rdi
  __int64 v34; // rdi
  __int64 v35; // rdx
  __int64 v36; // r8
  __int64 v37; // rcx
  __int64 v38; // rcx
  __int64 v39; // rax
  __int64 v40; // rdi
  __int64 v41; // rcx
  unsigned int v42; // eax
  __int64 v43; // rdi
  int v44; // eax
  __int64 v45; // rax
  __int64 v46; // [rsp+0h] [rbp-38h] BYREF
  _DWORD *v47; // [rsp+10h] [rbp-28h]
  _DWORD *v48; // [rsp+18h] [rbp-20h]
  __int64 v49; // [rsp+20h] [rbp-18h]
  _DWORD *v50; // [rsp+28h] [rbp-10h]
  int i; // [rsp+30h] [rbp-8h]
  unsigned int v52; // [rsp+34h] [rbp-4h]

  v50 = a5;
  if ( (unsigned __int64)&v46 <= *(_QWORD *)(v7 + 8) )
  {
    sub_1EB84E0();
    goto LABEL_21;
  }
  v8 = *(unsigned int *)(a3 + 4);
  if ( (_DWORD)v8 == 0 )
  {
LABEL_21:
    sub_2771080();
    goto LABEL_22;
  }
  v49 = a3;
  v9 = v6[2 * v8] >> 3;
  if ( (unsigned __int16)v6[2 * v6[2 * v9 + 5] + 3 + (v6[2 * v9 + 11] & (0x568u >> HIBYTE(v6[2 * v9 + 11])))] != 1384 )
  {
LABEL_22:
    sub_2770780();
LABEL_23:
    sub_2771080();
LABEL_24:
    sub_2770780();
LABEL_25:
    sub_2771080();
    goto LABEL_26;
  }
  v10 = v6[2 * v8] >> 3;
  v11 = &v6[2 * v6[2 * v10 + 5]];
  v12 = v6[2 * v10 + 11] & (0x568u >> HIBYTE(v6[2 * v10 + 11]));
  v13 = (__int64 (__fastcall *)(__int64, _DWORD *, _DWORD *))(v5
                                                            + *(_QWORD *)((char *)&v6[2 * v10 + 10]
                                                                        + HIWORD(v11[v12 + 3])));
  v52 = *(_DWORD *)(a3 + 8);
  result = v13(a1: v12, a2: v11, a3: &v6[2 * v8]);
  if ( (int)result <= (int)v52 )
  {
LABEL_5:
    if ( *(int *)(v7 + 16) <= 0 )
      return sub_277F280(a1: v15, a2: v16, a3: v49);
    return result;
  }
  v17 = *(unsigned int *)(v49 + 4);
  if ( (_DWORD)v17 == 0 )
    goto LABEL_25;
  v18 = v6[2 * v17] >> 3;
  if ( (unsigned __int16)v6[2 * v6[2 * v18 + 5] + 3 + (v6[2 * v18 + 11] & (0x568u >> HIBYTE(v6[2 * v18 + 11])))] != 1384 )
  {
LABEL_26:
    sub_2770780();
    goto LABEL_27;
  }
  v19 = v6[2 * v17] >> 3;
  v20 = &v6[2 * v6[2 * v19 + 5]];
  v21 = v6[2 * v19 + 11] & (0x568u >> HIBYTE(v6[2 * v19 + 11]));
  v22 = HIWORD(v20[v21 + 3]);
  v23 = ((__int64 (__fastcall *)(__int64, _DWORD *, _DWORD *, __int64, _QWORD))(v5
                                                                              + *(_QWORD *)((char *)&v6[2 * v19] + v22)))(
          a1: v21,
          a2: v20,
          a3: &v6[2 * v17],
          a4: v22,
          a5: *(unsigned int *)(v49 + 8));
  if ( v50 == v6 )
  {
LABEL_27:
    sub_2771080(a1: v24, a2: v25, a3: v49);
    goto LABEL_28;
  }
  if ( (unsigned __int16)v6[2 * v6[2 * (*v50 >> 3) + 5]
                          + 3
                          + (v6[2 * (*v50 >> 3) + 11] & (0x641u >> HIBYTE(v6[2 * (*v50 >> 3) + 11])))] == 1601 )
  {
    v26 = *v50 >> 3;
    v27 = v6[2 * v26 + 11];
    v48 = &v6[2 * v6[2 * v26 + 5]];
    v28 = v27 & (0x641u >> SHIBYTE(v27));
    v52 = v27 & (0x641u >> SHIBYTE(v27));
    v29 = v48[v28 + 3];
    v47 = &v6[2 * v26];
    ((void (__fastcall *)(_DWORD *, __int64, _DWORD *, _QWORD, _QWORD))(v5 + *(_QWORD *)((char *)v47 + HIWORD(v29))))(
      a1: v48,
      a2: v28,
      a3: v50,
      a4: *(_QWORD *)((char *)v47 + HIWORD(v29)),
      a5: v23);
    v31 = v49;
    v32 = *(_DWORD *)(v49 + 8) + 1;
    *(_DWORD *)(v49 + 8) = v32;
    for ( i = v32; ; i = v44 )
    {
      v45 = *(unsigned int *)(v31 + 4);
      if ( (_DWORD)v45 == 0 )
        break;
      v33 = v6[2 * v45] >> 3;
      if ( (unsigned __int16)v6[2 * v6[2 * v33 + 5] + 3 + (v6[2 * v33 + 11] & (0x568u >> HIBYTE(v6[2 * v33 + 11])))] != 1384 )
        goto LABEL_24;
      v34 = v6[2 * v45] >> 3;
      result = ((__int64 (__fastcall *)(_DWORD *, __int64, _DWORD *))(v5
                                                                    + *(_QWORD *)((char *)&v6[2 * v34 + 10]
                                                                                + HIWORD(v6[2 * v6[2 * v34 + 5]
                                                                                          + 3
                                                                                          + (v6[2 * v34 + 11]
                                                                                           & (0x568u >> HIBYTE(v6[2 * v34 + 11])))]))))(
                 a1: &v6[2 * v34],
                 a2: v30,
                 a3: &v6[2 * v45]);
      if ( (int)result <= i )
        goto LABEL_5;
      v35 = v49;
      v36 = *(unsigned int *)(v49 + 4);
      if ( (_DWORD)v36 == 0 )
        goto LABEL_29;
      v37 = v6[2 * v36] >> 3;
      v38 = (unsigned __int16)v6[2 * v6[2 * v37 + 5] + 3 + (v6[2 * v37 + 11] & (0x568u >> HIBYTE(v6[2 * v37 + 11])))];
      if ( (_DWORD)v38 != 1384 )
        goto LABEL_30;
      v39 = v6[2 * v36] >> 3;
      v40 = (unsigned int)v6[2 * v39 + 11];
      v41 = HIWORD(v6[2 * v6[2 * v39 + 5] + 3 + ((unsigned int)v40 & (0x568u >> HIBYTE(v6[2 * v39 + 11])))]);
      v42 = ((__int64 (__fastcall *)(__int64, __int64, _DWORD *, __int64, _QWORD))(v5
                                                                                 + *(_QWORD *)((char *)&v6[2 * v39] + v41)))(
              a1: v40,
              a2: v16,
              a3: &v6[2 * v36],
              a4: v41,
              a5: *(unsigned int *)(v49 + 8));
      ((void (__fastcall *)(__int64, _QWORD, _DWORD *, _DWORD *, _QWORD))(v5
                                                                        + *(_QWORD *)((char *)v47 + HIWORD(v48[v52 + 3]))))(
        a1: v43,
        a2: v52,
        a3: v50,
        a4: v48,
        a5: v42);
      v31 = v49;
      v44 = *(_DWORD *)(v49 + 8) + 1;
      *(_DWORD *)(v49 + 8) = v44;
    }
    goto LABEL_23;
  }
LABEL_28:
  sub_2770780(a1: v24, a2: v25, a3: v49);
LABEL_29:
  sub_2771080();
LABEL_30:
  sub_2770780(a1: v15, a2: v16, a3: v35, a4: v38, a5: v50);
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
  return sub_4F42B60();
}
