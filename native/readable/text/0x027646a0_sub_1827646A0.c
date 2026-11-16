// sub_27646A0
// rva 0x027646a0  size 1853  section .text  group text
// window base 0x1827646a0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_27646A0(unsigned __int64 a1, __int64 a2, unsigned __int64 a3, int a4, char *a5, int a6)
{
  int v6; // ebp
  __int64 v7; // r13
  char *v8; // r14
  __int64 v9; // r15
  int v10; // ecx
  unsigned int v11; // eax
  __int64 v12; // rdi
  __int64 v13; // r8
  __int64 v14; // rcx
  __int64 v15; // rdi
  __int64 v16; // rsi
  char *v17; // rax
  __int64 (__fastcall *v18)(unsigned __int64, __int64, char *); // rax
  int v19; // ecx
  char *v20; // r8
  int v21; // ebp
  unsigned int v22; // eax
  __int64 v23; // rcx
  __int64 v24; // rdi
  __int64 v25; // rsi
  char *v26; // rbx
  char *v27; // rcx
  __int64 v29; // rdx
  int v30; // r8d
  int v31; // r9d
  __int64 v32; // rdx
  __int64 v33; // rdx
  __int16 v34; // bp
  char *v35; // rcx
  BOOL v36; // edx
  char *v37; // rax
  int v38; // edx
  int v39; // ebx
  int v40; // ebp
  __int64 v41; // rdx
  char *v42; // rsi
  char *v43; // rax
  int v44; // ecx
  int v45; // r9d
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int16 v48; // r10
  char *v49; // r9
  __int64 v50; // r12
  unsigned __int64 v51; // r11
  __int64 v52; // rax
  unsigned __int64 v53; // r9
  char *v54; // rax
  unsigned __int64 v55; // r9
  int i; // eax
  char v57; // [rsp+0h] [rbp-68h] BYREF
  char *v58; // [rsp+8h] [rbp-60h]
  char *v59; // [rsp+10h] [rbp-58h]
  _DWORD *v60; // [rsp+18h] [rbp-50h]
  char *v61; // [rsp+20h] [rbp-48h]
  char *v62; // [rsp+28h] [rbp-40h]
  unsigned int v63; // [rsp+34h] [rbp-34h]
  int v64; // [rsp+38h] [rbp-30h]
  unsigned int v65; // [rsp+3Ch] [rbp-2Ch]
  __int64 v66; // [rsp+40h] [rbp-28h]
  int v67; // [rsp+4Ch] [rbp-1Ch]
  int v68; // [rsp+50h] [rbp-18h]
  unsigned int v69; // [rsp+54h] [rbp-14h]
  __int64 (__fastcall *v70)(unsigned __int64, __int64, char *); // [rsp+58h] [rbp-10h]
  unsigned int v71; // [rsp+60h] [rbp-8h]
  int v72; // [rsp+64h] [rbp-4h]

  v62 = (char *)a3;
  v61 = a5;
  v72 = a6;
  v60 = (_DWORD *)a1;
  if ( (unsigned __int64)&v57 <= *(_QWORD *)(v9 + 8) )
  {
    sub_1EB84E0();
  }
  else if ( (char *)a3 != v8 )
  {
    v10 = *(_DWORD *)(a3 + 8);
    if ( v10 != 0 )
    {
      v71 = *(_DWORD *)(a3 + 8);
      if ( a5 != v8 )
      {
        v70 = (__int64 (__fastcall *)(unsigned __int64, __int64, char *))(v7
                                                                        + *(_QWORD *)&v8[8 * (*(_DWORD *)a5 >> 3) + 408]);
        v11 = v70(a1, a2, a3: a5);
        v13 = *(unsigned int *)&v8[8 * (*(_DWORD *)v62 >> 3) + 24];
        v14 = *(unsigned int *)&v8[8 * v13 + 36];
        v69 = *(_DWORD *)&v8[8 * v13 + 36];
        v68 = *(__int16 *)&v8[8 * v13 + 60];
        v67 = *(_DWORD *)&v8[8 * v13 + 40];
        v66 = (__int16)v68;
        if ( v11 != v72 )
        {
          v65 = v11;
          sub_2767200(a1: v12, a2: (__int16)v68, a3: v11, a4: v14, a5: v61);
          v17 = (char *)sub_C965A80(a1: v15, a2: v16, a3: v65);
          a2 = v66;
          a1 = v69;
          a3 = (unsigned __int64)v62;
          goto LABEL_7;
        }
        v65 = v11;
        v29 = *v60 >> 3;
        v17 = (char *)((__int64 (__fastcall *)(_DWORD *, _QWORD, _DWORD *))(v7
                                                                          + *(_QWORD *)&v8[8 * v29
                                                                                         + HIWORD(*(_DWORD *)&v8[8 * *(unsigned int *)&v8[8 * v29 + 20] + 12 + 4 * (*(_DWORD *)&v8[8 * v29 + 44] & (0x654u >> HIBYTE(*(_DWORD *)&v8[8 * v29 + 44])))])]))(
                        a1: v60,
                        a2: (__int16)v68,
                        a3: v60);
        if ( v17 != v8 )
        {
          v32 = *(_DWORD *)v17 >> 3;
          if ( *(__int16 *)&v8[8 * v32 + 62] >= 2 )
            goto LABEL_27;
        }
        while ( 1 )
        {
          if ( v17 == v8 )
          {
            a2 = v66;
            a1 = v69;
            a3 = (unsigned __int64)v62;
LABEL_33:
            *(_DWORD *)(a3 + 12) = (unsigned __int64)(v17 - v8) >> 3;
            if ( (*(_DWORD *)a3 & 2) != 0 )
            {
              if ( (*(_DWORD *)a3 & 1) != 0 )
              {
                v37 = (char *)(a3 - *(_QWORD *)(a3 - 8));
                if ( v37[48] != 0 )
                  v37[48] = 0;
                v17 = v8;
              }
              else
              {
                if ( *(_BYTE *)((a3 & 0xFFFFFFFFFFF80000LL) + ((a3 - ((a3 & 0xFFFFFFFFFFF80000LL) + 2112)) >> 9) + 0x38) != 0 )
                  *(_BYTE *)((a3 & 0xFFFFFFFFFFF80000LL) + ((a3 - ((a3 & 0xFFFFFFFFFFF80000LL) + 2112)) >> 9) + 0x38) = 0;
                v17 = v8;
              }
            }
            else
            {
              v17 = v8;
            }
LABEL_7:
            v59 = v17;
            v18 = v70;
            v19 = v71;
            v20 = v61;
            v21 = 1;
            while ( 1 )
            {
LABEL_8:
              if ( v19 <= v21 )
              {
                v26 = v59;
                goto LABEL_14;
              }
              v65 = v21;
              v22 = ((__int64 (__fastcall *)(unsigned __int64, __int64, char *, __int64 (__fastcall *)(unsigned __int64, __int64, char *)))v18)(
                      a1,
                      a2,
                      a3: v20,
                      a4: v18);
              v6 = v65 + 1;
              if ( v22 == v72 )
                break;
              v64 = v65 + 1;
              v63 = v22;
              sub_2767200(a1: v24, a2: v25, a3: v22, a4: v23, a5: v61);
              if ( v59 == v8 )
              {
                v52 = sub_C965A80(a1, a2, a3: v63);
                v21 = v64;
                v59 = (char *)v52;
              }
              else
              {
                v21 = v64;
              }
              v18 = v70;
              v19 = v71;
              v20 = v61;
            }
LABEL_55:
            v64 = v6;
            v63 = v22;
            v41 = *v60 >> 3;
            v42 = &v8[8 * *(unsigned int *)&v8[8 * v41 + 20]];
            v43 = (char *)((__int64 (__fastcall *)(_DWORD *, char *, _DWORD *))(v7
                                                                              + *(_QWORD *)&v8[8 * v41
                                                                                             + HIWORD(*(_DWORD *)&v42[4 * (*(_DWORD *)&v8[8 * v41 + 44] & (0x654u >> HIBYTE(*(_DWORD *)&v8[8 * v41 + 44]))) + 12])]))(
                            a1: v60,
                            a2: v42,
                            a3: v60);
            if ( v43 != v8 )
            {
              v46 = *(_DWORD *)v43 >> 3;
              if ( *(__int16 *)&v8[8 * v46 + 62] >= 2
                && *(_DWORD *)&v8[8 * *(unsigned int *)&v8[8 * v46 + 16] + 16] == 63780 )
              {
                a2 = v66;
                a3 = v69;
                a1 = v71;
                if ( v59 != v8 )
                {
                  v18 = v70;
                  v19 = v71;
                  v20 = v61;
                  v21 = v64;
                  goto LABEL_8;
                }
                goto LABEL_73;
              }
            }
            a2 = v66;
            a3 = v69;
            a1 = v71;
            v58 = v43;
            if ( v71 <= v65 )
            {
              sub_2771220(a1: v71, a2: v66, a3: v65, a4: v44, a5: v71, a6: v45, a7: v57);
              __builtin_debugtrap();
              __builtin_debugtrap();
              __builtin_debugtrap();
              return sub_2764DE0();
            }
            if ( v43 == v8 )
            {
              v50 = v65;
              v51 = (unsigned __int64)v62;
            }
            else
            {
              v47 = *(_DWORD *)v43 >> 3;
              v48 = *(_WORD *)&v8[8 * v47 + 62];
              v49 = &v8[8 * *(unsigned int *)&v8[8 * v47 + 16]];
              if ( (v68 & 0x8000u) != 0 )
              {
                if ( v67 < 0x10000 )
                {
                  v49 = &v8[8 * *(unsigned int *)&v8[8 * v47 + 20]];
                  LODWORD(v47) = v67 == (unsigned __int16)*(_DWORD *)&v49[4
                                                                        * (*(_DWORD *)&v8[8 * v47 + 44]
                                                                         & ((unsigned int)v67 >> HIBYTE(*(_DWORD *)&v8[8 * v47 + 44])))
                                                                        + 12];
                  goto LABEL_63;
                }
                v50 = v65;
                v51 = (unsigned __int64)v62;
                LODWORD(v47) = 2 * *(__int16 *)&v8[8 * v47 + 64];
                for ( i = 0; ; i += 2 )
                {
                  if ( (int)v47 <= i )
                  {
                    LODWORD(v43) = (_DWORD)v58;
                    goto LABEL_72;
                  }
                  if ( v67 == *(_DWORD *)&v49[4 * v48 + 12 + 4 * i] )
                    break;
                }
                v43 = v58;
              }
              else
              {
                if ( v48 <= (__int16)v68 )
                  goto LABEL_72;
                LODWORD(v47) = v69 == *(_DWORD *)&v49[4 * v66 + 12];
LABEL_63:
                if ( (_DWORD)v47 == 0 )
                {
LABEL_72:
                  v43 = (char *)sub_276F520(
                                  a1: v71,
                                  a2: v66,
                                  a3: (_DWORD)v43,
                                  a4: v47,
                                  a5: v68,
                                  a6: (_DWORD)v49,
                                  a7: v57);
LABEL_73:
                  v59 = v43;
                  v18 = v70;
                  v19 = a1;
                  v20 = v61;
                  v21 = v64;
                  goto LABEL_8;
                }
                v50 = v65;
                v51 = (unsigned __int64)v62;
              }
            }
            *(_DWORD *)(v51 + 4 * v50 + 12) = (unsigned __int64)(v43 - v8) >> 3;
            if ( (*(_DWORD *)v51 & 2) != 0 )
            {
              if ( (*(_DWORD *)v51 & 1) != 0 )
              {
                v54 = (char *)(v51 - *(_QWORD *)(v51 - 8));
                v55 = (unsigned __int64)(4 * v50 + 12) >> 9;
                if ( v54[v55 + 48] != 0 )
                  v54[v55 + 48] = 0;
                v18 = v70;
                v19 = a1;
                v20 = v61;
                v21 = v64;
              }
              else
              {
                v53 = (v51 & 0xFFFFFFFFFFF80000LL) + 2112;
                if ( *(_BYTE *)((v51 & 0xFFFFFFFFFFF80000LL) + ((v51 - v53) >> 9) + 0x38) != 0 )
                  *(_BYTE *)((v51 & 0xFFFFFFFFFFF80000LL) + ((v51 - v53) >> 9) + 0x38) = 0;
                v18 = v70;
                v19 = a1;
                v20 = v61;
                v21 = v64;
              }
            }
            else
            {
              v18 = v70;
              v19 = a1;
              v20 = v61;
              v21 = v64;
            }
            goto LABEL_8;
          }
          v33 = *(_DWORD *)v17 >> 3;
          v34 = *(_WORD *)&v8[8 * v33 + 62];
          v35 = &v8[8 * *(unsigned int *)&v8[8 * v33 + 16]];
          if ( (v68 & 0x8000u) != 0 )
          {
            if ( v67 >= 0x10000 )
            {
              v38 = 2 * *(__int16 *)&v8[8 * v33 + 64];
              v39 = v34;
              v40 = 0;
              LODWORD(a2) = v67;
              while ( 1 )
              {
                if ( v38 <= v40 )
                  goto LABEL_26;
                a1 = 4 * (v39 + v40) + 12;
                if ( v67 == *(_DWORD *)&v35[a1] )
                  break;
                v40 += 2;
              }
              a1 = v69;
              a3 = (unsigned __int64)v62;
              a2 = v66;
              goto LABEL_33;
            }
            LODWORD(v35) = (unsigned __int16)*(_DWORD *)&v8[8 * *(unsigned int *)&v8[8 * v33 + 20]
                                                          + 4
                                                          * (*(_DWORD *)&v8[8 * v33 + 44]
                                                           & ((unsigned int)v67 >> HIBYTE(*(_DWORD *)&v8[8 * v33 + 44])))
                                                          + 12];
            v36 = v67 == (_DWORD)v35;
            a2 = v66;
            a1 = v69;
          }
          else
          {
            if ( v34 <= (__int16)v68 )
              goto LABEL_26;
            a2 = v66;
            a1 = v69;
            v36 = v69 == *(_DWORD *)&v35[4 * v66 + 12];
          }
          if ( v36 )
          {
            a3 = (unsigned __int64)v62;
            goto LABEL_33;
          }
LABEL_26:
          v17 = (char *)sub_276F520(a1, a2, a3: (_DWORD)v17, a4: (_DWORD)v35, a5: v30, a6: v31, a7: v57);
LABEL_27:
          if ( *(_DWORD *)&v8[8 * *(unsigned int *)&v8[8 * v32 + 16] + 16] == 63780 )
          {
            a2 = v66;
            a1 = v69;
            a3 = (unsigned __int64)v62;
            goto LABEL_7;
          }
        }
      }
LABEL_54:
      v22 = sub_2771080(a1, a2, a3, a4: v10, (_DWORD)a5, a6, a7: v57);
      goto LABEL_55;
    }
    v26 = v8;
LABEL_14:
    if ( v26 == v8 )
      v27 = v62;
    else
      v27 = v26;
    if ( *(int *)(v9 + 16) <= 0 )
      sub_277F280(a1, a2, a3);
    return (__int64)v27;
  }
  sub_2771080(a1, a2, a3, a4, (_DWORD)a5, a6, a7: v57);
  goto LABEL_54;
}
