// sub_27632E0
// rva 0x027632e0  size 790  section .text  group text
// window base 0x1827632e0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_27632E0(__int64 a1, __int64 a2, __int64 a3)
{
  _DWORD *v3; // rbp
  __int64 v4; // r13
  _DWORD *v5; // r14
  __int64 v6; // r15
  __int64 v7; // rax
  int v8; // edx
  int v9; // ecx
  __int64 v10; // rdi
  __int64 v11; // rsi
  int v12; // r8d
  int v13; // r9d
  __int64 v14; // rax
  __int64 v15; // rdx
  _DWORD *v16; // rdi
  int v17; // esi
  int v18; // r8d
  int v19; // r9d
  __int64 v20; // rcx
  __int64 v21; // rbx
  __int64 v22; // rdx
  _DWORD *v23; // rax
  __int64 v24; // rdi
  int v25; // esi
  int v26; // r9d
  int v27; // ecx
  __int64 v28; // rdx
  __int64 v29; // rsi
  __int64 v30; // rsi
  int v31; // r8d
  int v32; // r9d
  _DWORD *v33; // rbp
  __int64 i; // rax
  __int64 v35; // r9
  _DWORD *v36; // r10
  _DWORD *v37; // rax
  __int64 v38; // rdi
  __int64 v39; // rsi
  int v40; // r9d
  __int64 v41; // rdx
  unsigned int v42; // eax
  unsigned int v43; // ecx
  char v45; // [rsp+0h] [rbp-58h] BYREF
  _DWORD *v46; // [rsp+10h] [rbp-48h]
  _DWORD *v47; // [rsp+18h] [rbp-40h]
  int v48; // [rsp+24h] [rbp-34h]
  _DWORD *v49; // [rsp+28h] [rbp-30h]
  _DWORD *v50; // [rsp+30h] [rbp-28h]
  _DWORD *v51; // [rsp+38h] [rbp-20h]
  __int64 v52; // [rsp+40h] [rbp-18h]
  __int64 v53; // [rsp+48h] [rbp-10h]
  int v54; // [rsp+50h] [rbp-8h]
  unsigned int v55; // [rsp+54h] [rbp-4h]

  if ( (unsigned __int64)&v45 <= *(_QWORD *)(v6 + 8) )
  {
    v53 = a3;
    sub_1EB84E0();
    goto LABEL_25;
  }
  v53 = a3;
  v7 = sub_503C560();
  if ( (_DWORD *)v7 == v5 )
  {
LABEL_25:
    sub_2771080(a1: v10, a2: v11, a3: v8, a4: v9, a5: v12, a6: v13, a7: v45);
LABEL_26:
    v51 = v3;
    LODWORD(v23) = sub_2771080(a1: (_DWORD)v16, a2: v17, a3: v15, a4: v20, a5: v18, a6: v19, a7: v45);
    goto LABEL_27;
  }
  v52 = v7;
  v14 = sub_1EB5100(a1: v10, a2: v11, a3: v7);
  v52 = v14;
  v20 = *(unsigned int *)(v14 + 8);
  v55 = v20;
  if ( (_DWORD)v20 == 0 )
  {
    v33 = v5;
    v30 = 0;
LABEL_20:
    if ( *(int *)(v6 + 16) <= 0 )
      sub_277F280(a1: v16, a2: v30, a3: v15);
    return (__int64)v33;
  }
  v21 = *(unsigned int *)(v14 + 12);
  v3 = &v5[2 * v21];
  if ( (_DWORD)v21 == 0 )
    goto LABEL_26;
  v51 = &v5[2 * v21];
  v22 = (unsigned int)v51[4];
  v50 = v5 + 94166906;
  v49 = &v5[2 * v22];
  v48 = v21;
  v23 = (_DWORD *)sub_58A26C0(a1: v49, a2: v5 + 94166906, a3: v5 + 94166906, a4: v20, a5: v49);
  if ( v23 == v5 )
    v23 = v5 + 13106284;
  v27 = (unsigned __int16)v5[2 * v5[2 * (*v23 >> 3) + 5]
                           + 3
                           + (v5[2 * (*v23 >> 3) + 11] & (0x1EFBu >> HIBYTE(v5[2 * (*v23 >> 3) + 11])))];
  if ( v27 == 7931 )
  {
    v28 = *v23 >> 3;
    v29 = v5[2 * v28 + 11] & (0x1EFBu >> HIBYTE(v5[2 * v28 + 11]));
    v30 = ((unsigned int (__fastcall *)(__int64, __int64, _DWORD *, _DWORD *, _DWORD *))(v4
                                                                                       + *(_QWORD *)((char *)&v5[2 * v28 + 6] + HIWORD(v5[2 * (unsigned int)v5[2 * v28 + 5] + 3 + v29]))))(
            a1: v24,
            a2: v29,
            a3: v23,
            a4: &v5[2 * v5[2 * v48 + 5]],
            a5: &v5[2 * v5[2 * v48 + 5]]);
    v33 = v5;
    for ( i = 1; ; i = v15 )
    {
      v16 = v50;
      v43 = v55;
      if ( (int)v55 <= (int)i )
        break;
      if ( v55 <= (unsigned int)i )
        goto LABEL_28;
      v35 = *(unsigned int *)(v52 + 4 * i + 12);
      v36 = &v5[2 * v35];
      if ( (_DWORD)v30 != 0 )
        v49 = &v5[2 * v35];
      else
        v49 = v33;
      if ( (_DWORD)v35 == 0 )
        goto LABEL_29;
      v47 = &v5[2 * v35];
      v54 = i;
      v46 = &v5[2 * v47[4]];
      v48 = v35;
      v37 = (_DWORD *)sub_58A26C0(a1: v50, a2: v46, a3: v50, a4: v55, a5: v46);
      if ( v37 == v5 )
        v37 = v5 + 13106284;
      if ( (unsigned __int16)v5[2 * v5[2 * (*v37 >> 3) + 5]
                              + 3
                              + (v5[2 * (*v37 >> 3) + 11] & (0x1EFBu >> HIBYTE(v5[2 * (*v37 >> 3) + 11])))] != 7931 )
        goto LABEL_30;
      v41 = *v37 >> 3;
      v42 = ((__int64 (__fastcall *)(__int64, __int64, _DWORD *, _DWORD *, _DWORD *))(v4
                                                                                    + *(_QWORD *)((char *)&v5[2 * v41 + 6]
                                                                                                + HIWORD(v5[2 * v5[2 * v41 + 5] + 3 + (v5[2 * v41 + 11] & (0x1EFBu >> HIBYTE(v5[2 * v41 + 11])))]))))(
              a1: v38,
              a2: v39,
              a3: v37,
              a4: &v5[2 * v5[2 * v48 + 5]],
              a5: &v5[2 * v5[2 * v48 + 5]]);
      v15 = (unsigned int)(v54 + 1);
      v30 = v42;
      v33 = v49;
    }
    goto LABEL_20;
  }
LABEL_27:
  LODWORD(i) = sub_276FC00(a1: v24, a2: v25, a3: (_DWORD)v23, a4: v27, a5: (int)v5 + 34421528, a6: v26, a7: v45);
LABEL_28:
  v54 = i;
  LODWORD(i) = sub_2771220(a1: (_DWORD)v16, a2: v30, a3: i, a4: v43, a5: v55, a6: v32, a7: v45);
LABEL_29:
  v47 = v36;
  v54 = i;
  LODWORD(v37) = sub_2771080(a1: (_DWORD)v16, a2: v30, a3: v15, a4: v43, a5: v31, a6: v35, a7: v45);
LABEL_30:
  sub_276FC00(a1: v53, a2: v54, a3: (_DWORD)v37, a4: v52, a5: (_DWORD)v5 + 34421528, a6: v40, a7: v45);
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
  return sub_2763600();
}
