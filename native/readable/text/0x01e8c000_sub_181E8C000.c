// sub_1E8C000
// rva 0x01e8c000  size 1126  section .text  group text
// window base 0x181e8c000: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1E8C000(
        __int64 a1,
        __int64 a2,
        int a3,
        int a4,
        __int64 a5,
        __int64 a6,
        double a7,
        double a8,
        double a9)
{
  __int64 v9; // r13
  __int64 v10; // r14
  __int64 v11; // r15
  unsigned int v12; // eax
  __int64 v13; // rcx
  __int64 v14; // rdi
  __int64 v15; // rsi
  unsigned int v16; // ebx
  __int64 *v17; // rdx
  double v18; // xmm0_8
  double v19; // xmm1_8
  double v20; // xmm0_8
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rbx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rdi
  __int64 v27; // rsi
  __int64 v28; // rcx
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rax
  __int64 v33; // rcx
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // rsi
  unsigned int (__fastcall *v39)(_QWORD, __int64, __int64, _QWORD, __int64, _QWORD); // rcx
  char v40; // [rsp+0h] [rbp-88h] BYREF
  __int64 v41; // [rsp+28h] [rbp-60h]
  __int64 v42; // [rsp+30h] [rbp-58h]
  __int64 v43; // [rsp+38h] [rbp-50h]
  _BYTE v44[20]; // [rsp+40h] [rbp-48h] BYREF
  unsigned int v45; // [rsp+54h] [rbp-34h]
  __int64 *v46; // [rsp+58h] [rbp-30h]
  unsigned int v47; // [rsp+60h] [rbp-28h]
  unsigned int v48; // [rsp+64h] [rbp-24h]
  unsigned int v49; // [rsp+68h] [rbp-20h]
  unsigned int v50; // [rsp+6Ch] [rbp-1Ch]
  __int64 v51; // [rsp+70h] [rbp-18h]
  unsigned int v52; // [rsp+7Ch] [rbp-Ch]
  __int64 v53; // [rsp+80h] [rbp-8h]

  v52 = a1;
  if ( (unsigned __int64)&v40 <= *(_QWORD *)(v11 + 8) )
  {
    v50 = a2;
    v51 = a6;
    v43 = a5;
    sub_1EB83C0(a1, a2, a3, a4, a5, a6, a7: v40);
LABEL_29:
    v51 = a6;
    v43 = a5;
    sub_276EFE0();
    goto LABEL_30;
  }
  if ( (_DWORD)a2 != 0 )
  {
    v12 = 0;
    v50 = a2;
    v51 = a6;
    v43 = a5;
    goto LABEL_4;
  }
  v30 = *(unsigned int *)(v10 + 376654972);
  if ( (_DWORD)v30 == 0 )
    goto LABEL_29;
  v31 = *(_DWORD *)(v10 + 8 * v30) >> 3;
  if ( (unsigned __int16)*(_DWORD *)(v10
                                   + 8LL * *(unsigned int *)(v10 + 8 * v31 + 20)
                                   + 4LL
                                   * (*(_DWORD *)(v10 + 8 * v31 + 44)
                                    & (0x207u >> HIBYTE(*(_DWORD *)(v10 + 8 * v31 + 44))))
                                   + 12) != 519 )
  {
LABEL_30:
    v51 = a6;
    v43 = a5;
    sub_276EDE0();
LABEL_31:
    sub_276EFE0();
    goto LABEL_32;
  }
  v50 = 0;
  v51 = a6;
  v43 = a5;
  v32 = *(_DWORD *)(v10 + 8 * v30) >> 3;
  v33 = HIWORD(*(_DWORD *)(v10
                         + 8LL * *(unsigned int *)(v10 + 8 * v32 + 20)
                         + 4LL * (*(_DWORD *)(v10 + 8 * v32 + 44) & (0x207u >> HIBYTE(*(_DWORD *)(v10 + 8 * v32 + 44))))
                         + 12));
  v12 = ((__int64 (__fastcall *)(__int64, __int64, __int64, __int64, _QWORD, _QWORD))(v9
                                                                                    + *(_QWORD *)(v10
                                                                                                + 8 * v32
                                                                                                + v33
                                                                                                + 168)))(
          a1,
          a2,
          a3: v10 + 8 * v30,
          a4: v33,
          a5: 0,
          a6: (unsigned int)a1)
      ^ 1;
LABEL_4:
  v49 = v12;
  if ( v12 != 0 )
  {
    v42 = v10 + 376654936;
    v41 = v10 + 369902360;
    v48 = sub_1E8C480(a1: 0, a2: 0, a3: v10 + 376654936, a4: v10 + 376654936, a5: v43, a6: v51);
    sub_1E9CE60(a1: v14, a2: v15, a3: *(_QWORD *)(v10 + 376654976), a4: v13, a5: v41, a6: 0);
    v16 = v48;
    v12 = v49;
  }
  else
  {
    v16 = 0;
    v42 = v10 + 376654936;
  }
  v48 = v16;
  if ( v12 == 0 )
    goto LABEL_7;
  if ( v16 != 0 )
    goto LABEL_7;
  a1 = v52;
  if ( v52 != 0 )
    goto LABEL_7;
  v34 = *(unsigned int *)(v10 + 376654972);
  if ( (_DWORD)v34 == 0 )
    goto LABEL_31;
  v35 = *(_DWORD *)(v10 + 8 * v34) >> 3;
  v36 = (unsigned __int16)*(_DWORD *)(v10
                                    + 8LL * *(unsigned int *)(v10 + 8 * v35 + 20)
                                    + 4LL
                                    * (*(_DWORD *)(v10 + 8 * v35 + 44)
                                     & (0x207u >> HIBYTE(*(_DWORD *)(v10 + 8 * v35 + 44))))
                                    + 12);
  if ( (_DWORD)v36 != 519 )
  {
LABEL_32:
    v20 = sub_276EDE0(a1, a2: v50, a3: v34, a4: v36, a5: v43, a6: v51);
    goto LABEL_33;
  }
  v37 = *(_DWORD *)(v10 + 8 * v34) >> 3;
  v38 = *(_DWORD *)(v10 + 8 * v37 + 44) & (0x207u >> HIBYTE(*(_DWORD *)(v10 + 8 * v37 + 44)));
  v39 = (unsigned int (__fastcall *)(_QWORD, __int64, __int64, _QWORD, __int64, _QWORD))(v9
                                                                                       + *(_QWORD *)(v10 + 8 * v37 + HIWORD(*(_DWORD *)(v10 + 8LL * *(unsigned int *)(v10 + 8 * v37 + 20) + 4 * v38 + 12)) + 168));
  if ( v39(a1: v52, a2: v38, a3: v10 + 8 * v34, a4: v39, a5: 1, a6: 0) != 0 )
  {
    v12 = v49;
LABEL_7:
    if ( v12 == 0 )
    {
      v21 = v51;
LABEL_11:
      v22 = v42;
      v46 = (__int64 *)v21;
      v23 = v21;
      v24 = v42;
      v42 = v10 + 370530392;
      v45 = sub_1E8C480(a1: 1, a2: v49, a3: v24, a4: v22, a5: v43, a6: v23);
      sub_1E9CE60(a1: v26, a2: v27, a3: *(_QWORD *)(v10 + 376654976), a4: v25, a5: v42, a6: 0);
      v53 = v9;
      v47 = v45;
      goto LABEL_12;
    }
    v17 = (__int64 *)v44;
    v46 = (__int64 *)v44;
    v18 = *(double *)(v10 + 376178920);
    v19 = 0.0;
    if ( v18 == 0.0 )
    {
      MEMORY[0x11703c40]/* 0x11703c40 */(a1, a2, a3: v44, a4: v44, a5: v18, a6: 0.0, a7: a9);
      v17 = v46;
      v18 = (double)*v46;
      v19 = MEMORY[0x11b12910]/* 0x11b12910 */ / v18;
      *(double *)(v10 + 376178920) = MEMORY[0x11b12910]/* 0x11b12910 */ / v18;
    }
    MEMORY[0x11703170]/* 0x11703170 */(a1, a2, a3: v17, a4: v17, a5: v18, a6: v19, a7: a9);
    v20 = (double)*v46 * *(double *)(v10 + 376178920);
    v21 = (__int64)v20;
    if ( (__int64)v20 != MEMORY[0x11b12908]/* 0x11b12908 */ )
      goto LABEL_11;
LABEL_33:
    if ( __builtin_isnan(v20) )
    {
      v21 = 0;
    }
    else if ( v20 > 0.0 )
    {
      v21 = ~v21;
    }
    goto LABEL_11;
  }
  v53 = v9;
  v47 = v48;
LABEL_12:
  sub_1E99180(a1, a2, a3: v10 + 376655336, a4: v28, a5: 0, a6: 0);
  if ( *(int *)(v11 + 16) <= 0 )
    sub_277F280();
  return v47;
}
