// sub_1ED6C00
// rva 0x01ed6c00  size 1814  section .text  group text
// window base 0x181ed6c00: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
_DWORD *__fastcall sub_1ED6C00(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, char a7)
{
  __int64 v7; // r13
  _DWORD *v8; // r14
  __int64 v9; // r15
  __int64 v10; // rax
  _DWORD *result; // rax
  __int64 v12; // rdi
  __int64 v13; // rsi
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rbx
  int v18; // ebp
  __int64 v19; // rsi
  unsigned int v20; // ecx
  __int64 (__fastcall *v21)(_DWORD *, __int64, _DWORD *); // rcx
  _DWORD *v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rsi
  __int64 v25; // rdi
  __int64 v26; // rcx
  __int64 v27; // rdi
  __int64 v28; // rsi
  _DWORD *v29; // rax
  __int64 v30; // rdi
  _DWORD *v31; // rax
  __int64 v32; // rdi
  __int64 v33; // rdx
  __int64 v34; // rsi
  _DWORD *v35; // rbx
  __int64 v36; // r8
  _DWORD *v37; // rax
  __int64 v38; // rcx
  __int64 v39; // rdi
  __int64 v40; // rsi
  __int64 v41; // rdx
  __int64 v42; // rdi
  __int64 v43; // rsi
  _DWORD *v44; // rcx
  _DWORD *v45; // rax
  __int64 v46; // rdi
  __int64 v47; // rsi
  __int64 v48; // rdx
  __int64 v49; // rsi
  __int64 v50; // rcx
  __int64 v51; // rdi
  __int64 v52; // rsi
  __int64 (__fastcall *v53)(__int64, _QWORD, _DWORD *, _DWORD *); // rbp
  _DWORD *v54; // rax
  __int64 v55; // rdi
  _DWORD *v56; // rax
  __int64 v57; // rdi
  __int64 v58; // rdx
  __int64 v59; // rsi
  _DWORD *v60; // rax
  __int64 v61; // rdi
  __int64 v62; // rdx
  __int64 v63; // rsi
  __int64 v64; // rax
  char v65; // [rsp+0h] [rbp-58h] BYREF
  _DWORD *v66; // [rsp+8h] [rbp-50h]
  _DWORD *v67; // [rsp+10h] [rbp-48h]
  _DWORD *v68; // [rsp+18h] [rbp-40h]
  _DWORD *v69; // [rsp+20h] [rbp-38h]
  _DWORD *v70; // [rsp+28h] [rbp-30h]
  __int64 v71; // [rsp+30h] [rbp-28h]
  __int64 v72; // [rsp+38h] [rbp-20h]
  __int64 v73; // [rsp+40h] [rbp-18h]
  unsigned int v74; // [rsp+4Ch] [rbp-Ch]
  __int64 (__fastcall *v75)(__int64, __int64, __int64); // [rsp+50h] [rbp-8h]

  v73 = a3;
  if ( (unsigned __int64)&v65 <= *(_QWORD *)(v9 + 8) )
  {
    v72 = a5;
    sub_1EB84E0(a1, a2, a3, a4, a5, a6, a7: v65);
  }
  else if ( (_DWORD *)a3 != v8 )
  {
    v10 = *(unsigned int *)(a3 + 4);
    if ( (_DWORD)v10 == 0 )
    {
LABEL_46:
      v72 = a5;
      result = (_DWORD *)sub_2771080();
LABEL_47:
      v64 = sub_276FC00(a1: v12, a2: v13, a3: result, a4: v14, a5: v8 + 10117358);
      v35 = v69;
      v43 = v74;
      v44 = v70;
      v71 = v64;
      goto LABEL_25;
    }
    v75 = (__int64 (__fastcall *)(__int64, __int64, __int64))(v7 + *(_QWORD *)&v8[2 * (v8[2 * v10] >> 3) + 98]);
    v71 = (__int64)&v8[2 * v10];
    v72 = a5;
    result = (_DWORD *)v75(a1, a2, a3: v71);
    if ( result != v8 )
    {
      v14 = *result >> 3;
      if ( (_DWORD)v14 != 5058679 )
        goto LABEL_47;
    }
    if ( result != v8 )
    {
      if ( *(int *)(v9 + 16) <= 0 )
        return (_DWORD *)sub_277F280();
      return result;
    }
    v15 = *(unsigned int *)(v73 + 12);
    if ( (_DWORD)v15 == 0 )
    {
      sub_2771080();
      goto LABEL_49;
    }
    v16 = v8[2 * v15] >> 3;
    if ( (unsigned __int16)v8[2 * v8[2 * v16 + 5] + 3 + (v8[2 * v16 + 11] & (0x631u >> HIBYTE(v8[2 * v16 + 11])))] != 1585 )
    {
LABEL_49:
      sub_2770780();
      goto LABEL_50;
    }
    v17 = v8[2 * v15] >> 3;
    v18 = v8[2 * v17 + 11];
    v70 = &v8[2 * v8[2 * v17 + 5]];
    v19 = v18 & (0x631u >> SHIBYTE(v18));
    v74 = v18 & (0x631u >> SHIBYTE(v18));
    v20 = v70[v19 + 3];
    v69 = &v8[2 * v17];
    v21 = (__int64 (__fastcall *)(_DWORD *, __int64, _DWORD *))(v7 + *(_QWORD *)((char *)v69 + HIWORD(v20)));
    v68 = &v8[2 * v15];
    v22 = (_DWORD *)v21(a1: v70, a2: v19, a3: v68);
    if ( v22 == v8 )
    {
LABEL_50:
      sub_2771080();
    }
    else if ( (unsigned __int16)v8[2 * v8[2 * (*v22 >> 3) + 5]
                                 + 3
                                 + (v8[2 * (*v22 >> 3) + 11] & (0x630u >> HIBYTE(v8[2 * (*v22 >> 3) + 11])))] == 1584 )
    {
      v23 = *v22 >> 3;
      v24 = (unsigned int)v8[2 * v23 + 11];
      v25 = (unsigned int)v24 & (0x630u >> HIBYTE(v8[2 * v23 + 11]));
      ((void (__fastcall *)(__int64, __int64, _DWORD *))(v7
                                                       + *(_QWORD *)((char *)&v8[2 * v23]
                                                                   + HIWORD(v8[2 * (unsigned int)v8[2 * v23 + 5]
                                                                             + 3
                                                                             + v25]))))(
        a1: v25,
        a2: v24,
        a3: v22);
      v29 = (_DWORD *)((__int64 (__fastcall *)(__int64, __int64, __int64, __int64, __int64))v75)(
                        a1: v27,
                        a2: v28,
                        a3: v71,
                        a4: v26,
                        a5: v72);
      if ( v29 != v8 && *v29 >> 3 != 5058679 )
        goto LABEL_52;
      if ( v29 == v8 )
      {
        v35 = v69;
        v36 = *(unsigned int *)(v73 + 8);
        if ( (_DWORD)v36 != 0 )
        {
          v37 = (_DWORD *)((__int64 (__fastcall *)(__int64, _QWORD, _DWORD *, _DWORD *, __int64))(v7
                                                                                                + *(_QWORD *)&v8[2 * (v8[2 * v36] >> 3) + 70]))(
                            a1: v30,
                            a2: v74,
                            a3: &v8[2 * v36],
                            a4: v70,
                            a5: v72);
          if ( v37 == v8 )
            goto LABEL_28;
          v41 = *v37 >> 3;
          if ( SHIWORD(v8[2 * v41 + 15]) >= 3 && v8[2 * v8[2 * v41 + 4] + 5] == 27488 )
            goto LABEL_28;
          v71 = sub_276A220(a1: v39, a2: v40, a3: v37, a4: v38, a5: v8 + 8552540);
          v35 = v69;
          v43 = v74;
          v44 = v70;
        }
        else
        {
          v71 = sub_276BEE0(a1: v30, a2: v74, a3: v73, a4: v70);
        }
        goto LABEL_25;
      }
      v67 = v29;
      v31 = (_DWORD *)((__int64 (__fastcall *)(__int64, _QWORD, _DWORD *))(v7
                                                                         + *(_QWORD *)((char *)v69 + HIWORD(v70[v74 + 3]))))(
                        a1: v30,
                        a2: v74,
                        a3: v68);
      if ( v31 == v8 )
      {
        sub_2771080();
      }
      else if ( (unsigned __int16)v8[2 * v8[2 * (*v31 >> 3) + 5]
                                   + 3
                                   + (v8[2 * (*v31 >> 3) + 11] & (0x630u >> HIBYTE(v8[2 * (*v31 >> 3) + 11])))] == 1584 )
      {
        v33 = *v31 >> 3;
        v34 = v8[2 * v33 + 11] & (0x630u >> HIBYTE(v8[2 * v33 + 11]));
        ((void (__fastcall *)(__int64, __int64, _DWORD *))(v7
                                                         + *(_QWORD *)((char *)&v8[2 * v33 + 10]
                                                                     + HIWORD(v8[2 * (unsigned int)v8[2 * v33 + 5]
                                                                               + 3
                                                                               + v34]))))(
          a1: v32,
          a2: v34,
          a3: v31);
        if ( *(int *)(v9 + 16) <= 0 )
          sub_277F280();
        return v67;
      }
      sub_2770780();
LABEL_56:
      sub_2771080();
LABEL_57:
      sub_2770780(a1: v46, a2: v47, a3: v71);
LABEL_58:
      sub_2771080();
      do
      {
        sub_2770780();
LABEL_60:
        sub_2771080();
LABEL_61:
        v54 = (_DWORD *)sub_2770780();
        while ( 1 )
        {
          v35 = v69;
          v71 = sub_276A220(a1: v55, a2: v74, a3: v54, a4: v70, a5: v8 + 10117358);
LABEL_25:
          v45 = (_DWORD *)((__int64 (__fastcall *)(__int64, __int64, _DWORD *))(v7
                                                                              + *(_QWORD *)((char *)v35
                                                                                          + HIWORD(v44[v43 + 3]))))(
                            a1: v42,
                            a2: v43,
                            a3: v68);
          if ( v45 == v8 )
            goto LABEL_56;
          if ( (unsigned __int16)v8[2 * v8[2 * (*v45 >> 3) + 5]
                                  + 3
                                  + (v8[2 * (*v45 >> 3) + 11] & (0x630u >> HIBYTE(v8[2 * (*v45 >> 3) + 11])))] != 1584 )
            goto LABEL_57;
          v48 = *v45 >> 3;
          v49 = v8[2 * v48 + 11] & (0x630u >> HIBYTE(v8[2 * v48 + 11]));
          ((void (__fastcall *)(__int64, __int64, _DWORD *))(v7
                                                           + *(_QWORD *)((char *)&v8[2 * v48 + 10]
                                                                       + HIWORD(v8[2 * (unsigned int)v8[2 * v48 + 5]
                                                                                 + 3
                                                                                 + v49]))))(
            a1: v46,
            a2: v49,
            a3: v45);
          v37 = (_DWORD *)sub_2769900(a1: v51, a2: v52, a3: v71, a4: v50, a5: &a7);
LABEL_28:
          if ( v37 == v8 )
            break;
          v53 = (__int64 (__fastcall *)(__int64, _QWORD, _DWORD *, _DWORD *))(v7 + *(_QWORD *)&v8[2 * (*v37 >> 3) + 38]);
          v67 = v37;
          v54 = (_DWORD *)v53(a1: v39, a2: v74, a3: v37, a4: v70);
          if ( v54 == v8 || *v54 >> 3 == 5058679 )
          {
            v66 = v54;
            v56 = (_DWORD *)((__int64 (__fastcall *)(__int64, _QWORD, _DWORD *))(v7
                                                                               + *(_QWORD *)((char *)v69
                                                                                           + HIWORD(v70[v74 + 3]))))(
                              a1: v55,
                              a2: v74,
                              a3: v68);
            if ( v56 == v8 )
              goto LABEL_60;
            if ( (unsigned __int16)v8[2 * v8[2 * (*v56 >> 3) + 5]
                                    + 3
                                    + (v8[2 * (*v56 >> 3) + 11] & (0x630u >> HIBYTE(v8[2 * (*v56 >> 3) + 11])))] == 1584 )
            {
              v58 = *v56 >> 3;
              v59 = v8[2 * v58 + 11] & (0x630u >> HIBYTE(v8[2 * v58 + 11]));
              ((void (__fastcall *)(__int64, __int64, _DWORD *))(v7
                                                               + *(_QWORD *)((char *)&v8[2 * v58 + 10]
                                                                           + HIWORD(v8[2 * (unsigned int)v8[2 * v58 + 5]
                                                                                     + 3
                                                                                     + v59]))))(
                a1: v57,
                a2: v59,
                a3: v56);
              if ( *(int *)(v9 + 16) <= 0 )
                sub_277F280();
              return v66;
            }
            goto LABEL_61;
          }
        }
        v60 = (_DWORD *)((__int64 (__fastcall *)(__int64, _QWORD, _DWORD *))(v7
                                                                           + *(_QWORD *)((char *)v69
                                                                                       + HIWORD(v70[v74 + 3]))))(
                          a1: v39,
                          a2: v74,
                          a3: v68);
        if ( v60 == v8 )
          goto LABEL_58;
      }
      while ( (unsigned __int16)v8[2 * v8[2 * (*v60 >> 3) + 5]
                                 + 3
                                 + (v8[2 * (*v60 >> 3) + 11] & (0x630u >> HIBYTE(v8[2 * (*v60 >> 3) + 11])))] != 1584 );
      v62 = *v60 >> 3;
      v63 = v8[2 * v62 + 11] & (0x630u >> HIBYTE(v8[2 * v62 + 11]));
      ((void (__fastcall *)(__int64, __int64, _DWORD *))(v7
                                                       + *(_QWORD *)((char *)&v8[2 * v62 + 10]
                                                                   + HIWORD(v8[2 * (unsigned int)v8[2 * v62 + 5]
                                                                             + 3
                                                                             + v63]))))(
        a1: v61,
        a2: v63,
        a3: v60);
      if ( *(int *)(v9 + 16) <= 0 )
        sub_277F280();
      return v8;
    }
    v29 = (_DWORD *)sub_2770780();
LABEL_52:
    v67 = v29;
    v35 = v69;
    v71 = sub_276A220(a1: v30, a2: v74, a3: v29, a4: v70, a5: v8 + 10117358);
    goto LABEL_25;
  }
  v72 = a5;
  sub_2771080();
  goto LABEL_46;
}
