// sub_5022720
// rva 0x05022720  size 3999  section .text  group text
// window base 0x185022720: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_5022720(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        unsigned int a6,
        char a7,
        __int64 a8,
        int a9,
        int a10)
{
  __int64 v10; // rbx
  __int64 v11; // rbp
  __int64 v12; // r13
  __int64 v13; // r14
  __int64 v14; // r15
  unsigned int v15; // r10d
  unsigned int v16; // r11d
  __int64 v17; // rdi
  int v18; // eax
  __int64 v19; // rsi
  unsigned int v20; // r10d
  unsigned int v21; // r11d
  __int64 v22; // rdi
  int v23; // eax
  __int64 result; // rax
  __int64 v25; // rdx
  __int64 v26; // r9
  __int64 v27; // rcx
  __int64 v28; // rsi
  __int64 v29; // rdi
  __int64 v30; // r8
  unsigned int v31; // r11d
  unsigned int v32; // r12d
  __int64 v33; // rdi
  __int64 v34; // rdx
  unsigned int v35; // edx
  __int64 v36; // rsi
  __int64 v37; // rdi
  __int64 v38; // r8
  unsigned int v39; // eax
  __int64 v40; // rdi
  __int64 v41; // rsi
  __int64 v42; // rdx
  unsigned __int64 v43; // r9
  unsigned __int64 j; // rax
  __int64 v45; // rax
  __int64 v46; // rcx
  unsigned __int64 v47; // rdi
  __int64 v48; // rsi
  int v49; // r11d
  int v50; // r12d
  __int64 v51; // r8
  __int64 v52; // r9
  __int64 v53; // r10
  __int64 v54; // rcx
  __int64 v55; // rsi
  unsigned int v56; // eax
  __int64 v57; // rcx
  int v58; // eax
  __int64 v59; // rcx
  __int64 v60; // rsi
  unsigned int v61; // r10d
  unsigned int v62; // r10d
  __int64 v63; // rsi
  __int64 v64; // rcx
  unsigned __int64 v65; // rcx
  int v66; // eax
  __int64 v67; // rax
  __int64 v68; // rdi
  __int64 v69; // rsi
  __int64 v70; // rdx
  __int64 v71; // rsi
  unsigned int v72; // edx
  __int64 v73; // rcx
  __int64 v74; // r9
  unsigned __int64 v75; // rdi
  __int64 v76; // r8
  unsigned __int64 v77; // r10
  __int64 v78; // rcx
  __int64 v79; // r11
  __int64 v80; // r8
  unsigned __int64 v81; // rcx
  unsigned __int64 v82; // r10
  __int64 v83; // r8
  __int64 v84; // rcx
  void *v85; // rdi
  unsigned int v86; // edx
  __int64 i; // rax
  __int64 v88; // rdi
  __int64 v89; // rsi
  __int64 v90; // rdx
  __int64 v91; // rcx
  unsigned __int64 v92; // rax
  unsigned __int64 v93; // rcx
  char v94; // [rsp+0h] [rbp-98h] BYREF
  _DWORD *v95; // [rsp+10h] [rbp-88h]
  __int64 v96; // [rsp+18h] [rbp-80h]
  __int64 v97; // [rsp+20h] [rbp-78h]
  __int64 v98; // [rsp+28h] [rbp-70h]
  __int64 v99; // [rsp+30h] [rbp-68h]
  __int64 v100; // [rsp+38h] [rbp-60h]
  __int64 v101; // [rsp+40h] [rbp-58h]
  unsigned int v102; // [rsp+48h] [rbp-50h]
  int v103; // [rsp+4Ch] [rbp-4Ch]
  int v104; // [rsp+50h] [rbp-48h]
  unsigned int v105; // [rsp+54h] [rbp-44h]
  __int64 v106; // [rsp+58h] [rbp-40h]
  int v107; // [rsp+60h] [rbp-38h]
  unsigned int v108; // [rsp+64h] [rbp-34h]
  unsigned int v109; // [rsp+68h] [rbp-30h]
  unsigned int v110; // [rsp+6Ch] [rbp-2Ch]
  unsigned int v111; // [rsp+70h] [rbp-28h]
  unsigned int v112; // [rsp+74h] [rbp-24h]
  unsigned int v113; // [rsp+78h] [rbp-20h]
  signed int v114; // [rsp+7Ch] [rbp-1Ch]
  unsigned int v115; // [rsp+80h] [rbp-18h]
  unsigned int v116; // [rsp+84h] [rbp-14h]
  __int64 v117; // [rsp+88h] [rbp-10h]
  __int64 v118; // [rsp+90h] [rbp-8h]

  v100 = a3;
  v116 = a5;
  v115 = a6;
  v99 = a1;
  v114 = a2;
  v113 = a4;
  v98 = a8;
  if ( (unsigned __int64)&v94 <= *(_QWORD *)(v14 + 8) )
  {
    sub_1EB84E0();
    goto LABEL_157;
  }
  if ( a6 != 0 && (_DWORD)a4 == 0 )
  {
    if ( *(int *)(v14 + 16) <= 0 )
      sub_277F280();
    return v13;
  }
  if ( a6 != 0 )
  {
    if ( a1 == v13 )
    {
      v39 = sub_2771080();
      goto LABEL_177;
    }
    v10 = *(unsigned int *)(a1 + 8);
    if ( (_DWORD)v10 != 0 )
    {
      if ( a3 == v13 )
        goto LABEL_178;
      v11 = *(unsigned int *)(a3 + 8);
      if ( (_DWORD)v11 != 0 )
      {
        if ( (unsigned int)v10 > (unsigned int)v11 )
        {
          v18 = -1;
        }
        else if ( (_DWORD)v10 == 1 )
        {
          v18 = sub_2830F40(a1: 0, a2: *(unsigned __int8 *)(a1 + 12), a3, a4, a5: 12, a6: (unsigned int)v11);
        }
        else
        {
          v11 = (unsigned int)(v11 - v10 + 2);
          if ( (int)v11 < 1 )
          {
            v18 = -1;
          }
          else
          {
            v112 = *(_DWORD *)(a1 + 8);
            v111 = v11;
            v15 = *(unsigned __int8 *)(a1 + 12);
            v110 = v15;
            v16 = *(unsigned __int8 *)(a1 + 13);
            v109 = v16;
            v17 = 0;
            while ( 1 )
            {
              v18 = sub_2832B40(a1: v17, a2: v15, a3, a4: v16, a5: 12, a6: (unsigned int)v11);
              if ( v18 < 0 )
              {
                v18 = -1;
                goto LABEL_18;
              }
              if ( v112 == 2 )
                goto LABEL_18;
              v108 = v18;
              if ( (unsigned int)sub_282F960(
                                   a1: 12,
                                   a2: v112,
                                   a3: v100,
                                   a4,
                                   a5: (unsigned int)v18 + 12LL,
                                   a6: v99) != 0 )
              {
                v18 = v108;
                goto LABEL_18;
              }
              v11 = v111;
              if ( (int)v111 <= (int)(v108 + 1) )
                break;
              v17 = v108 + 1;
              v16 = v109;
              v15 = v110;
              a3 = v100;
            }
            v18 = -1;
          }
        }
      }
      else
      {
        v18 = -1;
      }
    }
    else
    {
      v18 = 0;
    }
  }
  else if ( (_DWORD)a4 != 0 )
  {
    v18 = sub_5020380(a1, a2, a3, a4, a5: v99);
  }
  else
  {
    v18 = sub_501FF80(a1, a2, a3, a4, a5: v99);
  }
LABEL_18:
  v108 = v18;
  if ( v18 < 0 )
  {
    if ( *(int *)(v14 + 16) <= 0 )
      sub_277F280();
    return v13;
  }
  v19 = (unsigned int)(v18 + v114);
  v109 = v18 + v114;
  v10 = v116 - v114 + 2;
  v110 = v116 - v114 + 2;
  if ( v115 != 0 )
  {
    v11 = (unsigned int)v114;
    if ( v114 > (int)(v116 - v19) )
    {
      v23 = -1;
    }
    else if ( v114 == 1 )
    {
      v23 = sub_2830F40(a1: v109, a2: *(unsigned __int8 *)(v99 + 12), a3: v100, a4, a5: 12, a6: v116);
    }
    else if ( (int)v10 <= (int)v19 )
    {
      v23 = -1;
    }
    else
    {
      v20 = *(unsigned __int8 *)(v99 + 12);
      v111 = v20;
      v21 = *(unsigned __int8 *)(v99 + 13);
      v112 = v21;
      v22 = (unsigned int)v19;
      while ( 1 )
      {
        v23 = sub_2832B40(a1: v22, a2: v20, a3: v100, a4: v21, a5: 12, a6: (unsigned int)v10);
        if ( v23 < 0 )
        {
          v23 = -1;
          goto LABEL_39;
        }
        if ( v114 == 2 )
          goto LABEL_39;
        v107 = v23;
        if ( (unsigned int)sub_282F960(
                             a1: 12,
                             a2: (unsigned int)v114,
                             a3: v100,
                             a4,
                             a5: (unsigned int)v23 + 12LL,
                             a6: v99) != 0 )
        {
          v23 = v107;
          goto LABEL_39;
        }
        v10 = v110;
        if ( (int)v110 <= v107 + 1 )
          break;
        v22 = (unsigned int)(v107 + 1);
        v21 = v112;
        v20 = v111;
      }
      v23 = -1;
    }
  }
  else if ( v113 != 0 )
  {
    v23 = sub_5020540(a1: v114, a2: v19, a3: v100, a4: v113, a5: v116, a6: v99);
  }
  else
  {
    v23 = sub_5020120(a1: v114, a2: v19, a3: v100, a4: v113, a5: v116, a6: v99);
  }
LABEL_39:
  v25 = *(_QWORD *)(v14 + 40);
  v26 = 34089120;
  v106 = 34089120;
  if ( (unsigned __int64)(v25 + 80) > *(_QWORD *)(v14 + 32) )
  {
    v107 = v23;
    v25 = sub_1EAA840(a1, a2: v19, a3: v106, a4, a5: 16);
    v26 = v106;
    v23 = v107;
  }
  else
  {
    *(_QWORD *)(v14 + 40) = v25 + 80;
    *(_QWORD *)v25 = 34089120;
    *(_DWORD *)(v25 + 8) = 16;
    *(_DWORD *)(v25 + 12) = 0;
    *(_QWORD *)(v25 + 16) = 0;
    *(_QWORD *)(v25 + 24) = 0;
    *(_QWORD *)(v25 + 32) = 0;
    *(_QWORD *)(v25 + 40) = 0;
    *(_QWORD *)(v25 + 48) = 0;
    *(_QWORD *)(v25 + 56) = 0;
    *(_QWORD *)(v25 + 64) = 0;
    *(_QWORD *)(v25 + 72) = 0;
  }
  if ( v23 < 1 )
  {
    v27 = v108;
    *(_DWORD *)(v25 + 12) = v108;
    v97 = v25;
    v35 = 0;
    goto LABEL_69;
  }
  v27 = v108;
  *(_DWORD *)(v25 + 16) = v23;
  *(_DWORD *)(v25 + 12) = v27;
  v11 = (unsigned int)(v114 + v23);
  v108 = 1;
  v96 = v25;
  v10 = v110;
  v28 = (unsigned int)v114;
  v29 = v99;
  v26 = v115;
  v30 = v116;
  while ( 1 )
  {
    v109 = v11;
    if ( (_DWORD)v26 != 0 )
    {
      if ( (int)v28 > (int)v30 - (int)v11 )
      {
        v23 = -1;
      }
      else if ( (_DWORD)v28 == 1 )
      {
        v23 = sub_2830F40(a1: v109, a2: *(unsigned __int8 *)(v29 + 12), a3: v100, a4: v27, a5: 12, a6: v116);
      }
      else if ( (int)v10 <= (int)v11 )
      {
        v23 = -1;
      }
      else
      {
        v31 = *(unsigned __int8 *)(v29 + 12);
        v111 = v31;
        v32 = *(unsigned __int8 *)(v29 + 13);
        v105 = v32;
        v33 = (unsigned int)v11;
        while ( 1 )
        {
          v23 = sub_2832B40(a1: v33, a2: v31, a3: v100, a4: v32, a5: 12, a6: (unsigned int)v10);
          if ( v23 < 0 )
          {
            v23 = -1;
            goto LABEL_54;
          }
          if ( v114 == 2 )
            goto LABEL_54;
          v104 = v23;
          if ( (unsigned int)sub_282F960(
                               a1: 12,
                               a2: (unsigned int)v114,
                               a3: v100,
                               a4: v27,
                               a5: (unsigned int)v23 + 12LL,
                               a6: v99) != 0 )
          {
            v23 = v104;
            goto LABEL_54;
          }
          v10 = v110;
          if ( (int)v110 <= v104 + 1 )
            break;
          v33 = (unsigned int)(v104 + 1);
          v32 = v105;
          v31 = v111;
        }
        v23 = -1;
      }
    }
    else
    {
      v23 = v113 != 0
          ? sub_5020540(a1: v114, a2: v109, a3: v100, a4: v113, a5: v30, a6: v99)
          : sub_5020120(a1: v114, a2: v109, a3: v100, a4: v113, a5: v30, a6: v99);
    }
LABEL_54:
    if ( v23 < 1 )
      break;
    v27 = v96;
    v104 = v23;
    v105 = *(_DWORD *)(v96 + 8);
    v11 = v108 + 1;
    v111 = v11;
    if ( v105 != (_DWORD)v11 )
      goto LABEL_56;
LABEL_157:
    v71 = (unsigned int)v11 >> 1;
    if ( (_DWORD)v71 == 0 )
      JUMPOUT(0x30A03E369LL);
    v72 = v11 + v71;
    if ( (unsigned int)(v11 + v71 - 1) >= 0x7FFFFFF7 )
    {
      v103 = v11 + v71;
      v102 = (unsigned int)v11 >> 1;
      v72 = sub_63202E0(a1: v29, a2: v71, a3: (unsigned int)v11, a4: v27, a5: 1);
      v11 = v111;
    }
    LODWORD(v10) = v105;
    v23 = v104;
    v73 = v96;
    v74 = v106;
    if ( (v72 & 0x80000000) != 0 )
    {
      sub_579AB60(a1: v29, a2: v71, a3: v96, a4: v96, a5: v72, a6: v106);
LABEL_189:
      sub_2771220(a1: v29, a2: v109, a3: (unsigned int)v11, a4: v27, a5: (unsigned int)v10);
LABEL_190:
      for ( i = sub_276B3A0(); ; i = sub_276B3A0(a1: v37) )
      {
        v96 = i;
        v90 = *(_QWORD *)(v14 + 40);
        v91 = v90 + 40;
        if ( (unsigned __int64)(v90 + 40) > *(_QWORD *)(v14 + 32) )
        {
          v90 = sub_1EAA920(a1: v88, a2: v89, a3: 34082880);
        }
        else
        {
          *(_QWORD *)(v14 + 40) = v91;
          *(_DWORD *)v90 = 34082880;
          *(_DWORD *)(v90 + 4) = 0;
          *(_QWORD *)(v90 + 8) = 0;
          *(_QWORD *)(v90 + 16) = 0;
          *(_QWORD *)(v90 + 24) = 0;
          *(_QWORD *)(v90 + 32) = 0;
        }
        *(_DWORD *)(v90 + 20) = 46923644;
        *(_DWORD *)(v90 + 16) = *(_DWORD *)(v13 + 374343896);
        *(_DWORD *)(v90 + 12) = (unsigned __int64)(v90 - v13) >> 3;
        v95 = (_DWORD *)v90;
        sub_503B9A0(a1: v88, a2: v89, a3: v90, a4: v91, a5: 0);
        v92 = (unsigned __int64)v95;
        v95[2] = 45952550;
        if ( (*(_DWORD *)v92 & 2) != 0 )
        {
          v93 = (v92 & 0xFFFFFFFFFFF80000LL) + 2112;
          if ( *(_BYTE *)((v92 & 0xFFFFFFFFFFF80000LL) + ((v92 - v93) >> 9) + 0x38) != 0 )
            *(_BYTE *)((v92 & 0xFFFFFFFFFFF80000LL) + ((v92 - v93) >> 9) + 0x38) = 0;
        }
        sub_2769900(a1: v99, a2: v116, a3: v92, a4: &a7, a5: &a7, a6: v115);
LABEL_195:
        ;
      }
    }
    v28 = *(_QWORD *)(v14 + 40);
    v75 = *(_QWORD *)(v14 + 32);
    v76 = v72;
    v77 = (4LL * v72 + 19) & 0x7FFFFFFF8LL;
    if ( v77 >= 0x20000 || (v82 = v28 + v77) > v75 )
    {
      v101 = v72;
      v102 = v72;
      v28 = sub_1EAA840(a1: v75, a2: v28, a3: v106, a4: v96, a5: v72);
      v76 = v101;
      v72 = v102;
      v11 = v111;
      LODWORD(v10) = v105;
      v23 = v104;
      v73 = v96;
    }
    else
    {
      *(_QWORD *)(v14 + 40) = v82;
      *(_QWORD *)v28 = v74;
      *(_DWORD *)(v28 + 8) = v72;
    }
    if ( v72 < (unsigned int)v10 )
      JUMPOUT(0x30A03E415LL);
    v29 = (unsigned int)v10;
    v10 = (unsigned int)v10;
    if ( v72 <= (unsigned int)v10 )
      JUMPOUT(0x30A03E420LL);
    if ( (_DWORD)v10 != 0 )
    {
      v78 = v73 + 12;
      v79 = 0;
      do
      {
        *(_DWORD *)(v28 + 12 + 4 * v79) = *(_DWORD *)(v78 + 4 * v79);
        ++v79;
      }
      while ( v79 <= (unsigned int)v10 - 1LL );
    }
    v80 = v76 - (unsigned int)v10;
    v81 = 4 * v80;
    if ( 4 * v80 < 2048 )
    {
      if ( v72 > (unsigned int)v10 )
      {
        v83 = v80 - 1;
        v84 = 0;
        do
          *(_DWORD *)(v28 + 4LL * (unsigned int)v10 + 12 + 4 * v84++) = 0;
        while ( v84 <= v83 );
      }
      goto LABEL_170;
    }
LABEL_186:
    v85 = (void *)(v28 + 4 * v10 + 12);
    memset(v85, 0, v81);
    v29 = (__int64)v85 + v81;
    v23 = v104;
LABEL_170:
    v27 = v28;
LABEL_56:
    LODWORD(v10) = *(_DWORD *)(v27 + 8);
    if ( (unsigned int)v10 <= (unsigned int)v11 )
      goto LABEL_189;
    *(_DWORD *)(v27 + 4 * v11 + 12) = v23;
    v34 = (unsigned int)(v114 + v23);
    if ( *(int *)(v14 + 16) <= 0 )
    {
      sub_277F280(a1: v29, a2: v28, a3: v34);
      v11 = v86;
      v118 = v12;
      v108 = v111;
      v96 = v27;
      v10 = v110;
      v28 = (unsigned int)v114;
      v29 = v99;
      v26 = v115;
      v30 = v116;
    }
    else
    {
      v108 = v11;
      v96 = v27;
      v10 = v110;
      v28 = (unsigned int)v114;
      v29 = v99;
      v26 = v115;
      v30 = v116;
      v11 = (unsigned int)v34;
    }
  }
  v117 = v12;
  v97 = v96;
  v35 = v108;
LABEL_69:
  v107 = v23;
  v118 = v12;
  v112 = v109;
  v36 = v35 + 1;
  v108 = v36;
  v37 = (unsigned int)(v36 * (a9 - v114));
  if ( !is_mul_ok(v36, a9 - v114) )
    goto LABEL_195;
  v38 = (unsigned int)v37 + v116;
  v110 = v37 + v116;
  if ( __OFADD__((_DWORD)v37, v116) )
    goto LABEL_190;
  if ( (_DWORD)v38 == 0 )
  {
    if ( *(int *)(v14 + 16) <= 0 )
      sub_277F280();
    return v13 + 373281248;
  }
  v39 = sub_50217A0(a1: v37, a2: v36, a3: v38, a4: v27, a5: v38, a6: v26, a7: v94);
  if ( (v39 & 0x80000000) != 0 )
  {
LABEL_177:
    sub_2770E80(a1: v40, a2: v41, a3: v39);
LABEL_178:
    sub_2771080();
LABEL_179:
    sub_2771220(a1: v47, a2: v48, a3: (unsigned int)v47, a4: v46, a5: (unsigned int)v46, a6: v52);
LABEL_180:
    sub_2771080(a1: v47, a2: v60, a3: v42, a4: v59, a5: v51);
LABEL_181:
    sub_2771080();
LABEL_182:
    sub_2771220(a1: v47, a2: v60, a3: (unsigned int)v10, a4: v59, a5: v61);
LABEL_183:
    sub_2771080(a1: v47, a2: v48, a3: v42, a4: v54, a5: v51);
LABEL_184:
    sub_2771220(a1: v47, a2: v48, a3: (unsigned int)v48, a4: v57, a5: (unsigned int)v57);
LABEL_185:
    sub_2771220(a1: v47, a2: v55, a3: (unsigned int)v10, a4: v54, a5: (unsigned int)v55);
    goto LABEL_186;
  }
  v42 = *(_QWORD *)(v14 + 40);
  v43 = (v39 + 19LL) & 0x1FFFFFFF8LL;
  if ( v43 >= 0x20000 || v42 + v43 > *(_QWORD *)(v14 + 32) )
  {
    v111 = v39;
    v42 = sub_1EAA840(a1: v40, a2: v41, a3: 34082368, a4: 34082368, a5: v39);
  }
  else
  {
    *(_QWORD *)(v14 + 40) = v42 + v43;
    *(_QWORD *)v42 = 34082368;
    *(_DWORD *)(v42 + 8) = v39;
    *(_DWORD *)(v42 + 12) = 0;
    if ( v43 - 16 >= 0x800 )
    {
      memset((void *)(v42 + 16), 0, v43 - 16);
    }
    else
    {
      for ( j = 16; v43 > j; j += 8LL )
        *(_QWORD *)(v42 + j) = 0;
    }
  }
  v45 = v97;
  v96 = v42;
  v46 = *(unsigned int *)(v97 + 8);
  v111 = *(_DWORD *)(v97 + 8);
  v47 = 0;
  v11 = 0;
  v10 = 0;
  v48 = v108;
  v49 = a10;
  v50 = a9;
  v51 = v98;
  v52 = v115;
  while ( 1 )
  {
    v53 = v100;
    if ( (int)v48 <= (int)v47 )
      break;
    if ( (unsigned int)v46 <= (unsigned int)v47 )
      goto LABEL_179;
    v54 = *(unsigned int *)(v45 + 4 * v47 + 12);
    v104 = *(_DWORD *)(v45 + 4 * v47 + 12);
    if ( (_DWORD)v52 != 0 )
    {
      while ( (int)v54 > (int)v10 )
      {
        if ( v53 == v13 )
          goto LABEL_183;
        v55 = *(unsigned int *)(v53 + 8);
        if ( (unsigned int)v55 <= (unsigned int)v10 )
          goto LABEL_185;
        v48 = 2 * (int)v11;
        *(_WORD *)(v42 + v48 + 12) = *(unsigned __int8 *)(v53 + v10 + 12);
        v11 = (unsigned int)(v11 + 1);
        v10 = (unsigned int)(v10 + 1);
      }
    }
    else
    {
      while ( (int)v54 > (int)v10 )
      {
        v48 = 2 * (int)v11;
        *(_WORD *)(v42 + v48 + 12) = *(_WORD *)(v53 + 2 * (int)v10 + 12);
        v11 = (unsigned int)(v11 + 1);
        LODWORD(v10) = v10 + 1;
      }
    }
    v10 = (unsigned int)(v114 + v10);
    v56 = v47 + 1;
    if ( v49 != 0 )
    {
      v48 = 0;
      while ( v50 > (int)v48 )
      {
        if ( v51 == v13 )
          goto LABEL_181;
        v57 = *(unsigned int *)(v51 + 8);
        if ( (unsigned int)v57 <= (unsigned int)v48 )
          goto LABEL_184;
        v54 = 2 * (int)v11;
        *(_WORD *)(v42 + v54 + 12) = *(unsigned __int8 *)(v51 + v48 + 12);
        v48 = (unsigned int)(v48 + 1);
        v11 = (unsigned int)(v11 + 1);
      }
      if ( *(int *)(v14 + 16) > 0 )
      {
        v47 = v56;
        v46 = v111;
        v48 = v108;
        v45 = v97;
        continue;
      }
    }
    else
    {
      v54 = 0;
      while ( v50 > (int)v54 )
      {
        v48 = (unsigned int)*(__int16 *)(v51 + 2 * (int)v54 + 12);
        *(_WORD *)(v42 + 2 * (int)v11 + 12) = *(_WORD *)(v51 + 2 * (int)v54 + 12);
        v54 = (unsigned int)(v54 + 1);
        v11 = (unsigned int)(v11 + 1);
      }
      if ( *(int *)(v14 + 16) > 0 )
      {
        v47 = v56;
        v46 = v111;
        v48 = v108;
        v45 = v97;
        continue;
      }
    }
    v47 = (unsigned int)sub_277F280(a1: v47, a2: v48, a3: v42, a4: v54, a5: v51);
    v46 = v111;
    v48 = v108;
    v45 = v97;
  }
  if ( (_DWORD)v52 != 0 )
  {
    v58 = v116;
    v59 = v100;
    while ( v58 > (int)v10 )
    {
      v60 = (unsigned int)(v10 + 1);
      if ( v59 == v13 )
        goto LABEL_180;
      v61 = *(_DWORD *)(v59 + 8);
      if ( v61 <= (unsigned int)v10 )
        goto LABEL_182;
      v62 = *(unsigned __int8 *)(v59 + v10 + 12);
      *(_WORD *)(v42 + 2 * (int)v11 + 12) = v62;
      v11 = (unsigned int)(v11 + 1);
      v47 = v62;
      v10 = (unsigned int)v60;
    }
  }
  else
  {
    v66 = v116;
    v59 = v100;
    while ( v66 > (int)v10 )
    {
      *(_WORD *)(v42 + 2 * (int)v11 + 12) = *(_WORD *)(v59 + 2 * (int)v10 + 12);
      LODWORD(v11) = v11 + 1;
      LODWORD(v10) = v10 + 1;
    }
  }
  v111 = v47;
  v105 = v11;
  v102 = v10;
  v63 = 34082680;
  if ( v49 != 0 && v113 == 0 )
  {
    v106 = 34082680;
    v67 = sub_501E2C0(a1: v47, a2: 0x2080F78u, a3: v42, a4: v59, a5: 0, a6: v110);
    v70 = *(_QWORD *)(v14 + 40);
    if ( (unsigned __int64)(v70 + 24) > *(_QWORD *)(v14 + 32) )
    {
      v95 = (_DWORD *)v67;
      v70 = sub_1EAA920(a1: v68, a2: v106, a3: v106);
      v67 = (__int64)v95;
    }
    else
    {
      *(_QWORD *)(v14 + 40) = v70 + 24;
      *(_DWORD *)v70 = 34082680;
      *(_DWORD *)(v70 + 4) = 0;
      *(_QWORD *)(v70 + 8) = 0;
      *(_QWORD *)(v70 + 16) = 0;
    }
    *(_BYTE *)(v70 + 12) = (int)(v110 - *(_DWORD *)(v67 + 8)) < 0;
    *(_DWORD *)(v70 + 4) = (unsigned __int64)(v67 - v13) >> 3;
    if ( *(int *)(v14 + 16) <= 0 )
      sub_277F280(a1: v68, a2: v69, a3: v70, a4: v105, a5: v111);
    return v70;
  }
  else
  {
    result = *(_QWORD *)(v14 + 40);
    v64 = result + 24;
    if ( (unsigned __int64)(result + 24) > *(_QWORD *)(v14 + 32) )
    {
      v106 = 34082680;
      result = sub_1EAA920(a1: v47, a2: 34082680, a3: 34082680, a4: v64, a5: v51);
      v42 = v96;
      v51 = v98;
      v52 = v115;
    }
    else
    {
      *(_QWORD *)(v14 + 40) = v64;
      *(_DWORD *)result = 34082680;
      *(_DWORD *)(result + 4) = 0;
      *(_QWORD *)(result + 8) = 0;
      *(_QWORD *)(result + 16) = 0;
    }
    *(_BYTE *)(result + 12) = 1;
    v65 = (unsigned __int64)(v42 - v13) >> 3;
    *(_DWORD *)(result + 4) = v65;
    if ( *(int *)(v14 + 16) <= 0 )
      return sub_277F280(a1: v47, a2: v63, a3: v42, a4: v65, a5: v51, a6: v52);
  }
  return result;
}
