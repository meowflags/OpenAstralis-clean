// sub_184F3B8C0
// rva 0x04f3b8c0  size 2841  section .text  group text
// window base 0x184f3b8c0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_184F3B8C0(__int64 a1, __int64 a2, _DWORD *a3, __int64 a4, char *a5, int a6, char a7)
{
  __int64 v7; // r13
  char *v8; // r14
  __int64 v9; // r15
  __int64 v10; // rcx
  int v11; // eax
  char *v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rbp
  char *v16; // rdx
  __int64 (__fastcall *v17)(__int64, __int64, char *); // rcx
  unsigned int v18; // eax
  __int64 v19; // rcx
  __int64 v20; // rdi
  __int64 v21; // rsi
  unsigned int v22; // ebx
  unsigned int v23; // ebp
  __int64 v24; // rsi
  __int64 v25; // rdi
  __int64 v26; // rdx
  __int64 v27; // rcx
  int v28; // r11d
  int v29; // eax
  __int64 v30; // rcx
  int v31; // r12d
  char *v32; // rax
  __int64 v33; // rsi
  __int64 v34; // rdx
  __int64 v35; // rdi
  __int64 v36; // rbp
  char *v37; // rbx
  unsigned int v38; // eax
  unsigned int v39; // ebp
  unsigned int v40; // r10d
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 result; // rax
  __int64 (__fastcall *v44)(__int64, __int64, _DWORD *, _DWORD *); // rax
  __int64 v45; // rsi
  unsigned int v46; // eax
  __int64 v47; // rcx
  __int64 v48; // rdi
  __int64 v49; // rsi
  __int64 v50; // rdi
  __int64 v51; // rsi
  __int64 v52; // rdx
  unsigned int v53; // eax
  __int64 v54; // rsi
  char *v55; // rax
  __int64 v56; // rdx
  char v57; // dl
  unsigned __int64 v58; // rdx
  unsigned int v59; // r10d
  char *v60; // rax
  _DWORD *v61; // rcx
  char v62; // r8
  __int64 v63; // rdx
  __int64 v64; // rcx
  unsigned __int64 v65; // rdx
  unsigned __int64 v66; // r9
  __int64 v67; // rbp
  unsigned __int64 v68; // r8
  unsigned __int64 v69; // rdx
  unsigned __int64 v70; // r9
  __int64 v71; // rdx
  __int64 v72; // r8
  __int64 v73; // rax
  unsigned __int64 v74; // rcx
  __int64 v75; // rcx
  __int64 v76; // rdi
  __int64 v77; // rsi
  __int64 v78; // rcx
  __int64 v79; // rdi
  __int64 v80; // rsi
  __int64 v81; // r8
  __int64 v82; // rdx
  __int64 v83; // r8
  unsigned __int64 v84; // rcx
  __int64 v85; // rdi
  __int64 v86; // rsi
  unsigned __int64 v87; // r8
  unsigned __int64 v88; // rbx
  __int64 v89; // r8
  char v90; // [rsp+0h] [rbp-78h] BYREF
  int v91; // [rsp+8h] [rbp-70h]
  int v92; // [rsp+Ch] [rbp-6Ch]
  char *v93; // [rsp+10h] [rbp-68h]
  char *i; // [rsp+18h] [rbp-60h]
  char *v95; // [rsp+20h] [rbp-58h]
  char *v96; // [rsp+28h] [rbp-50h]
  __int64 v97; // [rsp+30h] [rbp-48h]
  unsigned int v98; // [rsp+3Ch] [rbp-3Ch]
  unsigned int v99; // [rsp+40h] [rbp-38h]
  unsigned int v100; // [rsp+44h] [rbp-34h]
  unsigned int v101; // [rsp+48h] [rbp-30h]
  unsigned int v102; // [rsp+4Ch] [rbp-2Ch]
  unsigned int v103; // [rsp+50h] [rbp-28h]
  unsigned int v104; // [rsp+54h] [rbp-24h]
  int v105; // [rsp+58h] [rbp-20h]
  unsigned int v106; // [rsp+5Ch] [rbp-1Ch]
  unsigned int v107; // [rsp+60h] [rbp-18h]
  unsigned int v108; // [rsp+64h] [rbp-14h]
  __int64 v109; // [rsp+68h] [rbp-10h]
  __int64 v110; // [rsp+70h] [rbp-8h]

  v108 = a6;
  if ( (unsigned __int64)&v90 <= *(_QWORD *)(v9 + 8) )
  {
    v96 = a5;
    MEMORY[0x181EB84E0]();
    goto LABEL_72;
  }
  v97 = (__int64)a3;
  if ( a6 == 0 )
  {
    if ( *(int *)(v9 + 16) <= 0 )
    {
      v96 = a5;
      MEMORY[0x18277F280]();
      return v97;
    }
    return (__int64)a3;
  }
  if ( a6 < 0 )
  {
LABEL_72:
    v96 = a5;
    v72 = *(_QWORD *)(v9 + 40);
    if ( (unsigned __int64)(v72 + 24) <= *(_QWORD *)(v9 + 32) )
    {
      *(_QWORD *)(v9 + 40) = v72 + 24;
      *(_DWORD *)v72 = 34085680;
      *(_DWORD *)(v72 + 4) = 0;
      *(_QWORD *)(v72 + 8) = 0;
      *(_QWORD *)(v72 + 16) = 0;
LABEL_74:
      v95 = (char *)v72;
      v73 = *(_QWORD *)(v9 + 40);
      v74 = v73 + 32;
      if ( (unsigned __int64)(v73 + 32) > *(_QWORD *)(v9 + 32) )
      {
        v73 = MEMORY[0x181EAA840](a1, a2, a3: 34082368, a4: v74, a5: 16);
        v72 = (__int64)v95;
      }
      else
      {
        *(_QWORD *)(v9 + 40) = v74;
        *(_QWORD *)v73 = 34082368;
        *(_DWORD *)(v73 + 8) = 16;
        *(_DWORD *)(v73 + 12) = 0;
        *(_QWORD *)(v73 + 16) = 0;
        *(_QWORD *)(v73 + 24) = 0;
      }
      *(_DWORD *)(v72 + 4) = (unsigned __int64)(v73 - (_QWORD)v8) >> 3;
      if ( (*(_DWORD *)v72 & 2) != 0 )
      {
        v74 = v72 & 0xFFFFFFFFFFF80000LL;
        v88 = (v72 & 0xFFFFFFFFFFF80000LL) + 2112;
        if ( *(_BYTE *)((v72 & 0xFFFFFFFFFFF80000LL) + ((v72 - v88) >> 9) + 0x38) != 0 )
          *(_BYTE *)((v72 & 0xFFFFFFFFFFF80000LL) + ((v72 - v88) >> 9) + 0x38) = 0;
      }
      sub_184F36F80(a1, a2, a3: v72, a4: v74, a5: (__int64)(v8 + 362218232));
      sub_184F36640(a1: v76, a2: v77, a3: (__int64)v95, a4: v75, a5: v108);
      v81 = (__int64)v95;
      if ( *((_DWORD *)v95 + 2) == 0 )
        goto LABEL_85;
      v82 = *(_QWORD *)(v9 + 40);
      if ( (unsigned __int64)(v82 + 24) > *(_QWORD *)(v9 + 32) )
      {
        v82 = MEMORY[0x181EAA920](a1: v79, a2: v80, a3: 34082680);
        v81 = (__int64)v95;
      }
      else
      {
        *(_QWORD *)(v9 + 40) = v82 + 24;
        *(_DWORD *)v82 = 34082680;
        *(_DWORD *)(v82 + 4) = 0;
        *(_QWORD *)(v82 + 8) = 0;
        *(_QWORD *)(v82 + 16) = 0;
      }
      v93 = (char *)v82;
      MEMORY[0x184FE9280](a1: v79, a2: v80, a3: v82, a4: v81, a5: v81, a6: v8);
      v110 = v7;
      for ( i = v93; ; i = v8 + 373281248 )
      {
        v83 = *(_QWORD *)(v9 + 40);
        if ( (unsigned __int64)(v83 + 40) > *(_QWORD *)(v9 + 32) )
        {
          v83 = MEMORY[0x181EAA920](a1: v79, a2: v80, a3: 34081944);
        }
        else
        {
          *(_QWORD *)(v9 + 40) = v83 + 40;
          *(_DWORD *)v83 = 34081944;
          *(_DWORD *)(v83 + 4) = 0;
          *(_QWORD *)(v83 + 8) = 0;
          *(_QWORD *)(v83 + 16) = 0;
          *(_QWORD *)(v83 + 24) = 0;
          *(_QWORD *)(v83 + 32) = 0;
        }
        *(_DWORD *)(v83 + 20) = 46923644;
        *(_DWORD *)(v83 + 16) = *((_DWORD *)v8 + 93585974);
        *(_DWORD *)(v83 + 12) = (unsigned __int64)(v83 - (_QWORD)v8) >> 3;
        v93 = (char *)v83;
        MEMORY[0x18503B9A0](a1: v79, a2: v80, a3: v83, a4: v78, a5: 0);
        v87 = (unsigned __int64)v93;
        *((_DWORD *)v93 + 2) = (unsigned __int64)(i - v8) >> 3;
        if ( (*(_DWORD *)v87 & 2) != 0 )
        {
LABEL_87:
          v84 = (v87 & 0xFFFFFFFFFFF80000LL) + 2112;
          if ( *(_BYTE *)((v87 & 0xFFFFFFFFFFF80000LL) + ((v87 - v84) >> 9) + 0x38) != 0 )
            *(_BYTE *)((v87 & 0xFFFFFFFFFFF80000LL) + ((v87 - v84) >> 9) + 0x38) = 0;
        }
LABEL_84:
        MEMORY[0x182769900](a1: v85, a2: v86, a3: v87, a4: v84, a5: &a7);
LABEL_85:
        ;
      }
    }
LABEL_98:
    v72 = MEMORY[0x181EAA920](a1, a2, a3: 34085680);
    goto LABEL_74;
  }
  if ( a6 == 1 )
  {
    v44 = (__int64 (__fastcall *)(__int64, __int64, _DWORD *, _DWORD *))(v7 + *(_QWORD *)&v8[8 * (*a3 >> 3) + 208]);
    v96 = a5;
    result = v44(a1, a2, a3, a4: a3);
    if ( *(int *)(v9 + 16) <= 0 )
      return MEMORY[0x18277F280]();
  }
  else
  {
    if ( a5 == v8 )
      a5 = v8 + 353301280;
    v93 = a5;
    v10 = *(_DWORD *)a5 >> 3;
    v11 = *(_DWORD *)&v8[8 * v10 + 44];
    v12 = &v8[8 * *(unsigned int *)&v8[8 * v10 + 20]];
    v92 = *(_DWORD *)a5 >> 3;
    if ( (unsigned __int16)*(_DWORD *)&v12[4 * (v11 & (0x568u >> SHIBYTE(v11))) + 12] != 1384 )
    {
      MEMORY[0x182770780](a1, a2, a3: v97);
      goto LABEL_87;
    }
    v13 = *(_DWORD *)a5 >> 3;
    v14 = (__int64)&v8[8 * *(unsigned int *)&v8[8 * v13 + 20]];
    v15 = *(_DWORD *)&v8[8 * v13 + 44] & (0x568u >> HIBYTE(*(_DWORD *)&v8[8 * v13 + 44]));
    v16 = &v8[8 * v13];
    v17 = (__int64 (__fastcall *)(__int64, __int64, char *))(v7
                                                           + *(_QWORD *)&v16[HIWORD(*(_DWORD *)(v14 + 4 * v15 + 12))
                                                                           + 40]);
    i = v16;
    v95 = (char *)v14;
    v107 = v15;
    v18 = v17(a1, a2, a3: a5);
    if ( v18 != 0 )
    {
      if ( v18 != 1 )
      {
        v22 = *(_DWORD *)(v97 + 8);
        v23 = v18;
        v24 = v97;
        v25 = (unsigned int)*(char *)(v97 + 12);
        v107 = v25;
        v26 = *(unsigned int *)(v97 + 4);
        v27 = (unsigned int)v25;
        v28 = v18 << v25;
        if ( (int)(v18 << v25) > (int)(0x7FFFFFFF - v22) / (int)v108 )
        {
          v105 = v18 << v25;
          v95 = &v8[8 * v26];
          v104 = v22;
          v106 = v18;
          v89 = *(_QWORD *)(v9 + 40);
          if ( (unsigned __int64)(v89 + 40) <= *(_QWORD *)(v9 + 32) )
          {
            *(_QWORD *)(v9 + 40) = v89 + 40;
            *(_DWORD *)v89 = 34082880;
            *(_DWORD *)(v89 + 4) = 0;
            *(_QWORD *)(v89 + 8) = 0;
            *(_QWORD *)(v89 + 16) = 0;
            *(_QWORD *)(v89 + 24) = 0;
            *(_QWORD *)(v89 + 32) = 0;
LABEL_93:
            *(_DWORD *)(v89 + 20) = 46923644;
            *(_DWORD *)(v89 + 16) = *((_DWORD *)v8 + 93585974);
            *(_DWORD *)(v89 + 12) = (unsigned __int64)(v89 - (_QWORD)v8) >> 3;
            i = (char *)v89;
            MEMORY[0x18503B9A0](a1: v25, a2: v24, a3: v89, a4: v27, a5: 0);
            v87 = (unsigned __int64)i;
            *((_DWORD *)i + 2) = 45952550;
            if ( (*(_DWORD *)v87 & 2) != 0 )
            {
              v84 = (v87 & 0xFFFFFFFFFFF80000LL) + 2112;
              if ( *(_BYTE *)((v87 & 0xFFFFFFFFFFF80000LL) + ((v87 - v84) >> 9) + 0x38) != 0 )
                *(_BYTE *)((v87 & 0xFFFFFFFFFFF80000LL) + ((v87 - v84) >> 9) + 0x38) = 0;
            }
            goto LABEL_84;
          }
LABEL_105:
          v89 = MEMORY[0x181EAA920](a1: v25, a2: v24, a3: 34082880);
          goto LABEL_93;
        }
        v91 = *(_DWORD *)(v97 + 4);
        v29 = *(_DWORD *)v93 >> 3;
        v30 = v23 * v108;
        v31 = v22 + v23 * v108;
        v103 = v31;
        if ( v29 != 4260335 )
        {
          if ( *(__int16 *)&v8[8 * v92 + 62] < 2 || *(_DWORD *)&v8[8 * *(unsigned int *)&v8[8 * v92 + 16] + 16] != 26690 )
          {
            v102 = v23 * v108;
            v105 = v23 << v25;
            v104 = v22;
            v106 = v23;
            v95 = &v8[8 * v26];
            i = (char *)sub_184F39060(a1: v25, a2: v97, a3: (__int64)v95, a4: v30, a5: v25, a6: v31);
            v32 = (char *)sub_184F37880(a1: v93, a2: 0, a3: i, a4: v106, a5: v107, a6: v104);
            if ( i == v32 )
            {
              v35 = v107;
              v36 = v97;
            }
            else
            {
              v34 = v97;
              *(_BYTE *)(v97 + 12) = 1;
              v35 = 1;
              v36 = v34;
            }
            *(_DWORD *)(v36 + 4) = (unsigned __int64)(v32 - v8) >> 3;
            if ( (*(_DWORD *)v36 & 2) != 0 )
            {
              v66 = (v36 & 0xFFFFFFFFFFF80000LL) + 2112;
              if ( *(_BYTE *)((v36 & 0xFFFFFFFFFFF80000LL) + ((v36 - v66) >> 9) + 0x38) != 0 )
                *(_BYTE *)((v36 & 0xFFFFFFFFFFF80000LL) + ((v36 - v66) >> 9) + 0x38) = 0;
              v101 = 0;
              v37 = v32;
              v38 = v35;
            }
            else
            {
              v101 = 0;
              v37 = v32;
              v38 = v35;
            }
LABEL_17:
            v107 = v38;
            i = v37;
            v39 = v104 << v38;
            v99 = v104 << v38;
            v40 = v102 << v38;
            v98 = v102 << v38;
            v41 = v106 << v38;
            while ( 1 )
            {
              v42 = v39 + (unsigned int)v41;
              if ( (int)(v40 - v41) <= (int)v41 )
                break;
              if ( v37 == v8 )
                goto LABEL_96;
              v100 = v41;
              MEMORY[0x181EB4960](a1: (unsigned int)v42, a2: (unsigned int)v41, a3: v37, a4: v42, a5: v39, a6: v37);
              v41 = 2 * v100;
              v40 = v98;
              v39 = v99;
              v37 = i;
            }
            v100 = v41;
            if ( v37 != v8 )
            {
              MEMORY[0x181EB4960](
                a1: (unsigned int)v42,
                a2: v40 - (unsigned int)v41,
                a3: v37,
                a4: v42,
                a5: v99,
                a6: v37);
              v52 = v97;
              *(_DWORD *)(v97 + 8) = v103;
              if ( *(int *)(v9 + 16) <= 0 )
                MEMORY[0x18277F280]();
              return v52;
            }
            MEMORY[0x182771080](a1: v35, a2: v33, a3: v41, a4: v42);
LABEL_96:
            MEMORY[0x182771080](a1: v35, a2: v33, a3: v41, a4: v42, a5: v101);
            goto LABEL_97;
          }
          v102 = v23 * v108;
          v105 = v28;
          v95 = &v8[8 * v26];
          v104 = v22;
          v106 = v23;
          v59 = (char)(v93[12] | v25);
          if ( (_DWORD)v25 != v59 )
            goto LABEL_50;
          v30 = v59;
          v65 = (__int64)v31 << v59;
          if ( v91 != 0 )
          {
            if ( v65 <= *(unsigned int *)&v8[8 * v91 + 8] )
            {
              v60 = v95;
              v109 = v7;
              v99 = v107;
              v98 = v59;
LABEL_53:
              v64 = *(_QWORD *)&v8[8 * (*(_DWORD *)v93 >> 3) + 344];
              i = v60;
              ((void (__fastcall *)(_QWORD, __int64, char *, __int64, char *, _QWORD))(v7 + v64))(
                a1: v98,
                a2: v24,
                a3: v93,
                a4: v64,
                a5: v60,
                a6: v104);
              v109 = v7;
              v101 = v98;
              v37 = i;
              v38 = v99;
              goto LABEL_17;
            }
LABEL_50:
            v100 = v93[12] | (unsigned int)v25;
            v98 = v59;
            v60 = (char *)sub_184F38CC0(a1: v103, a2: v59, a3: (__int64)v95, a4: v30, a5: v107, a6: v104);
            v61 = (_DWORD *)v97;
            *(_DWORD *)(v97 + 4) = (unsigned __int64)(v60 - v8) >> 3;
            if ( (*v61 & 2) != 0 )
            {
              v70 = (v97 & 0xFFFFFFFFFFF80000LL) + 2112;
              if ( *(_BYTE *)((v97 & 0xFFFFFFFFFFF80000LL) + ((v97 - v70) >> 9) + 0x38) != 0 )
                *(_BYTE *)((v97 & 0xFFFFFFFFFFF80000LL) + ((v97 - v70) >> 9) + 0x38) = 0;
              v62 = v100;
              v63 = v97;
            }
            else
            {
              v62 = v100;
              v63 = (__int64)v61;
            }
            *(_BYTE *)(v63 + 12) = v62;
            v109 = v7;
            v99 = v98;
            goto LABEL_53;
          }
          MEMORY[0x182771080](a1: v25, a2: v97, a3: v65, a4: v102);
          goto LABEL_105;
        }
        v53 = v93[12] | (unsigned int)v25;
        v54 = (unsigned int)(char)(v93[12] | v25);
        if ( (_DWORD)v25 == (_DWORD)v54 )
        {
          v102 = v23 * v108;
          v105 = v28;
          v95 = &v8[8 * v26];
          v104 = v22;
          v106 = v23;
          v30 = (unsigned int)v54;
          v58 = (__int64)v31 << v54;
          if ( v91 == 0 )
          {
LABEL_97:
            MEMORY[0x182771080](a1: v25, a2: v54, a3: v58);
            goto LABEL_98;
          }
          if ( v58 <= *(unsigned int *)&v8[8 * v91 + 8] )
          {
            v55 = v95;
            v109 = v7;
            v100 = v107;
            v99 = v54;
LABEL_42:
            i = v55;
            MEMORY[0x184FF2C40](a1: v99, a2: v54, a3: v93, a4: v30, a5: v55, a6: v104);
            v109 = v7;
            v101 = v99;
            v37 = i;
            v38 = v100;
            goto LABEL_17;
          }
          v101 = v53;
        }
        else
        {
          v101 = v93[12] | (unsigned int)v25;
          v102 = v23 * v108;
          v105 = v28;
          v95 = &v8[8 * v26];
          v104 = v22;
          v106 = v23;
        }
        v99 = v54;
        v55 = (char *)sub_184F38CC0(a1: v103, a2: v54, a3: (__int64)v95, a4: v30, a5: v25, a6: v104);
        v56 = v97;
        *(_DWORD *)(v97 + 4) = (unsigned __int64)(v55 - v8) >> 3;
        if ( (*(_DWORD *)v56 & 2) != 0 )
        {
          v67 = v56;
          v68 = v56 & 0xFFFFFFFFFFF80000LL;
          v69 = (v56 - ((v56 & 0xFFFFFFFFFFF80000LL) + 2112)) >> 9;
          if ( *(_BYTE *)(v68 + v69 + 56) != 0 )
            *(_BYTE *)(v68 + v69 + 56) = 0;
          v57 = v101;
          v30 = v67;
        }
        else
        {
          v30 = v56;
          v57 = v101;
        }
        *(_BYTE *)(v30 + 12) = v57;
        v109 = v7;
        v100 = v99;
        goto LABEL_42;
      }
      v46 = ((__int64 (__fastcall *)(__int64, __int64, char *, __int64, _QWORD))(v7
                                                                               + *(_QWORD *)&i[HIWORD(*(_DWORD *)&v95[4 * v107 + 12])]))(
              a1: v20,
              a2: v21,
              a3: v93,
              a4: v19,
              a5: 0);
      sub_184F3B300(a1: v48, a2: v49, a3: v97, a4: v47, a5: v46, a6: v108, a7: v90);
      if ( *(int *)(v9 + 16) <= 0 )
        MEMORY[0x18277F280](a1: v50, a2: v51, a3: v97);
      return v97;
    }
    else
    {
      v45 = v97;
      if ( *(int *)(v9 + 16) <= 0 )
      {
        v106 = 0;
        MEMORY[0x18277F280](a1: v20, a2: v97, a3: v97, a4: v19, a5: v93, a6: v108);
        return v71;
      }
      return v45;
    }
  }
  return result;
}
