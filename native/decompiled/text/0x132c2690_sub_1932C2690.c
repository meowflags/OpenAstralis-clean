// sub_1932C2690
// rva 0x132c2690  size 2532  section .text  group text
// window base 0x1932c2690: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1932C2690(__int64 a1, _DWORD a2, int a3, __int64 a4)
{
  int v5; // eax
  __int64 v6; // rsi
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rdi
  __int64 v10; // rbx
  __int64 v11; // rdx
  int v13; // eax
  int v14; // eax
  int v15; // edx
  unsigned int v16; // ecx
  unsigned int v17; // r8d
  __int64 v18; // rax
  __int64 v19; // rcx
  unsigned int v20; // eax
  __int16 v21; // r8
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rdx
  __int16 v26; // r8
  __int64 v27; // rax
  __int64 v28; // rcx
  int v29; // eax
  __int64 v30; // rsi
  int v31; // edx
  int v32; // edi
  int v33; // r8d
  int v34; // r9d
  int v35; // eax
  int v36; // edx
  __int64 v37; // rax
  __int64 v38; // rcx
  __int64 v39; // rax
  __int64 v40; // rcx
  __int64 v41; // rax
  __int64 v42; // rcx
  __int64 v43; // rax
  __int64 v44; // rcx
  __int64 v45; // rax
  __int64 v46; // rcx
  __int64 v47; // rax
  __int64 v48; // rcx
  int v49; // eax
  __int64 v50; // rcx
  __int64 v51; // rax
  __int64 v52; // rcx
  __int64 v53; // rax
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // rax
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // rax
  __int64 v60; // rdx
  __int64 v61; // rcx
  __int64 v62; // rax
  __int64 v63; // rdx
  __int64 v64; // rcx
  int v65; // eax
  __int64 v66; // rcx
  char v67; // dl
  __int64 v68; // rax
  __int64 v69; // rcx
  __int64 v70; // rax
  unsigned int v71; // ecx
  __int64 v72; // rax
  __int64 v73; // rcx
  int v74; // eax
  int v75; // eax
  __int64 v76; // rax
  unsigned int v77; // r12d
  unsigned int v78; // r15d
  unsigned int v79; // ebp
  __int64 v80; // rcx
  unsigned int v81; // r9d
  unsigned int v82; // ebp
  int v83; // edx
  int v84; // edi
  __int64 v85; // rsi
  int v86; // r8d
  int v87; // r9d
  __int64 v88; // rax
  unsigned int v89; // ecx
  int v90; // eax
  __int64 v91; // rax
  unsigned int v92; // ecx
  int v93; // eax
  int v94; // eax
  __int64 v95; // rcx
  int v96; // eax
  int v97; // eax
  __int64 v98; // rcx
  int v99; // eax
  unsigned int v100; // ecx
  __int64 v101; // rcx
  __int64 v102; // rdx
  int v103; // eax
  __int64 v104; // rcx
  int v105; // eax
  __int64 v106; // rdx
  int v107; // eax
  __int64 v108; // rcx
  __int64 v109; // rdx
  __int64 v110; // rcx
  __int64 v111; // rdx
  __int64 v112; // rcx
  __int64 v113; // rdx
  __int64 v114; // rcx
  __int64 v115; // rdx
  __int64 v116; // rcx
  __int64 v117; // rdx
  __int64 v118; // rcx
  __int64 v119; // rdx
  __int64 v120; // rcx
  __int64 v121; // rdx
  __int16 v122; // r8
  __int64 v123; // rax
  __int64 v124; // rcx
  __int64 v125; // rax
  __int64 v126; // rax
  __int64 v127; // rcx
  unsigned int v128; // edi
  int v129; // eax

  v5 = sub_1932C39D8(a1, a2: a4);
  v9 = 0;
  if ( v5 != 0 || (unsigned int)a3 > 5 )
    return 4294967294LL;
  v10 = *(_QWORD *)(v6 + 40);
  if ( *(_QWORD *)(v6 + 16) == 0
    || *(_DWORD *)(v6 + 8) != 0 && *(_QWORD *)v6 == 0
    || *(_DWORD *)(v10 + 8) == 666 && a3 != 4 )
  {
    *(_QWORD *)(v6 + 32) = MEMORY[0x88180];
    return 4294967294LL;
  }
  if ( *(_DWORD *)(v6 + 24) == 0 )
  {
LABEL_19:
    *(_QWORD *)(v6 + 32) = MEMORY[0x88198];
    return 4294967291LL;
  }
  LODWORD(v11) = *(_DWORD *)(v10 + 64);
  *(_DWORD *)(v10 + 64) = a3;
  if ( *(_DWORD *)(v10 + 40) != 0 )
  {
    sub_1932C417C(a1: 0, a2: v6, a3: v11, a4: v6, a5: v7, a6: v8);
    if ( *(_DWORD *)(v6 + 24) == (_DWORD)v9 )
      goto LABEL_11;
  }
  else if ( *(_DWORD *)(v6 + 8) == 0 )
  {
    if ( (int)v11 <= 4 )
      JUMPOUT(0x32651C73DLL);
    LODWORD(v11) = 2 * v11 - 9;
    if ( a3 <= 4 )
      JUMPOUT(0x32651C74CLL);
    if ( 2 * a3 - 9 <= (int)v11 )
      goto LABEL_19;
  }
  if ( *(_DWORD *)(v10 + 8) == 666 )
  {
    if ( *(_DWORD *)(v6 + 8) != (_DWORD)v9 )
      goto LABEL_19;
  }
  else if ( *(_DWORD *)(v10 + 8) == 42 )
  {
    if ( *(_DWORD *)(v10 + 44) == (_DWORD)v9 )
    {
      *(_DWORD *)(v10 + 8) = 113;
    }
    else
    {
      if ( *(int *)(v10 + 176) >= 2 || (v13 = *(_DWORD *)(v10 + 172)) < 2 )
      {
        v14 = v9;
        v15 = 32;
      }
      else if ( v13 >= 6 )
      {
        if ( v13 == 6 )
        {
          v14 = 128;
          v15 = 160;
        }
        else
        {
          v14 = 192;
          v15 = 224;
        }
      }
      else
      {
        v14 = 64;
        v15 = 96;
      }
      v16 = v14 | ((*(_DWORD *)(v10 + 72) << 12) - 30720);
      if ( *(_DWORD *)(v10 + 148) != (_DWORD)v9 )
        v16 = ((*(_DWORD *)(v10 + 72) << 12) - 30720) | v15;
      v17 = 31 * (v16 / 0x1F + 1);
      *(_BYTE *)(*(unsigned int *)(v10 + 40) + *(_QWORD *)(v10 + 16)) = BYTE1(v17);
      v18 = *(_QWORD *)(v10 + 16);
      v19 = (unsigned int)(*(_DWORD *)(v10 + 40) + 1);
      *(_DWORD *)(v10 + 40) = v19;
      *(_BYTE *)(v19 + v18) = v17;
      v20 = *(_DWORD *)(v10 + 40) + 1;
      *(_DWORD *)(v10 + 40) = v20;
      if ( *(_DWORD *)(v10 + 148) != (_DWORD)v9 )
      {
        v21 = *(_WORD *)(v6 + 78);
        *(_BYTE *)(v20 + *(_QWORD *)(v10 + 16)) = HIBYTE(v21);
        v22 = *(_QWORD *)(v10 + 16);
        v23 = (unsigned int)(*(_DWORD *)(v10 + 40) + 1);
        *(_DWORD *)(v10 + 40) = v23;
        *(_BYTE *)(v23 + v22) = v21;
        v24 = *(_QWORD *)(v10 + 16);
        v25 = (unsigned int)(*(_DWORD *)(v10 + 40) + 1);
        *(_DWORD *)(v10 + 40) = v25;
        v26 = *(_WORD *)(v6 + 76);
        *(_BYTE *)(v25 + v24) = HIBYTE(v26);
        v27 = *(_QWORD *)(v10 + 16);
        v28 = (unsigned int)(*(_DWORD *)(v10 + 40) + 1);
        *(_DWORD *)(v10 + 40) = v28;
        *(_BYTE *)(v28 + v27) = v26;
        ++*(_DWORD *)(v10 + 40);
      }
      v29 = sub_1932C5FE4(a1: v9, a2: v6, a3: 0, a4: 0, a5: 0);
      *(_DWORD *)(v30 + 76) = v29;
      *(_DWORD *)(v10 + 8) = 113;
      sub_1932C417C(a1: v32, a2: v30, a3: v31, a4: v30, a5: v33, a6: v34);
      if ( *(_DWORD *)(v10 + 40) != (_DWORD)v9 )
        goto LABEL_11;
    }
  }
  if ( *(_DWORD *)(v10 + 8) == 57 )
  {
    v35 = sub_1932C62D4(a1: v9, a2: v6, a3: 0, a4: 0, a5: 0);
    *(_DWORD *)(v6 + 76) = v35;
    *(_BYTE *)(*(unsigned int *)(v10 + 40) + *(_QWORD *)(v10 + 16)) = 31;
    v37 = *(_QWORD *)(v10 + 16);
    v38 = (unsigned int)(*(_DWORD *)(v10 + 40) + 1);
    *(_DWORD *)(v10 + 40) = v38;
    *(_BYTE *)(v38 + v37) = -117;
    v39 = *(_QWORD *)(v10 + 16);
    v40 = (unsigned int)(*(_DWORD *)(v10 + 40) + 1);
    *(_DWORD *)(v10 + 40) = v40;
    *(_BYTE *)(v40 + v39) = 8;
    v8 = *(_QWORD *)(v10 + 48);
    v7 = (unsigned int)(*(_DWORD *)(v10 + 40) + 1);
    *(_DWORD *)(v10 + 40) = v7;
    if ( v8 != 0 )
    {
      *(_BYTE *)(v7 + *(_QWORD *)(v10 + 16)) = (*(_DWORD *)v8 != (_DWORD)v9)
                                             + (*(_QWORD *)(v8 + 16) != 0 ? 4 : 0)
                                             + (*(_QWORD *)(v8 + 32) != 0 ? 8 : 0)
                                             + (*(_DWORD *)(v8 + 60) != 0 ? 2 : 0)
                                             + (*(_QWORD *)(v8 + 48) != 0 ? 0x10 : 0);
      v53 = *(_QWORD *)(v10 + 48);
      v54 = (unsigned int)(*(_DWORD *)(v10 + 40) + 1);
      v55 = *(_QWORD *)(v10 + 16);
      *(_DWORD *)(v10 + 40) = v54;
      *(_BYTE *)(v54 + v55) = *(_BYTE *)(v53 + 4);
      v56 = *(_QWORD *)(v10 + 48);
      v57 = (unsigned int)(*(_DWORD *)(v10 + 40) + 1);
      v58 = *(_QWORD *)(v10 + 16);
      *(_DWORD *)(v10 + 40) = v57;
      *(_BYTE *)(v57 + v58) = *(_BYTE *)(v56 + 5);
      v59 = *(_QWORD *)(v10 + 48);
      v60 = (unsigned int)(*(_DWORD *)(v10 + 40) + 1);
      v61 = *(_QWORD *)(v10 + 16);
      *(_DWORD *)(v10 + 40) = v60;
      *(_BYTE *)(v60 + v61) = *(_BYTE *)(v59 + 6);
      v62 = *(_QWORD *)(v10 + 48);
      v63 = (unsigned int)(*(_DWORD *)(v10 + 40) + 1);
      v64 = *(_QWORD *)(v10 + 16);
      *(_DWORD *)(v10 + 40) = v63;
      *(_BYTE *)(v63 + v64) = *(_BYTE *)(v62 + 7);
      v65 = *(_DWORD *)(v10 + 172);
      v66 = (unsigned int)(*(_DWORD *)(v10 + 40) + 1);
      *(_DWORD *)(v10 + 40) = v66;
      if ( v65 == 9 )
      {
        v67 = 2;
      }
      else if ( *(int *)(v10 + 176) >= 2 || (v67 = v9, v65 < 2) )
      {
        v67 = 4;
      }
      *(_BYTE *)(v66 + *(_QWORD *)(v10 + 16)) = v67;
      v68 = *(_QWORD *)(v10 + 48);
      v11 = (unsigned int)(*(_DWORD *)(v10 + 40) + 1);
      v69 = *(_QWORD *)(v10 + 16);
      *(_DWORD *)(v10 + 40) = v11;
      *(_BYTE *)(v11 + v69) = *(_BYTE *)(v68 + 12);
      v70 = *(_QWORD *)(v10 + 48);
      v71 = *(_DWORD *)(v10 + 40) + 1;
      *(_DWORD *)(v10 + 40) = v71;
      if ( *(_QWORD *)(v70 + 16) != v9 )
      {
        *(_BYTE *)(v71 + *(_QWORD *)(v10 + 16)) = *(_BYTE *)(v70 + 24);
        v72 = *(_QWORD *)(v10 + 48);
        v11 = (unsigned int)(*(_DWORD *)(v10 + 40) + 1);
        v73 = *(_QWORD *)(v10 + 16);
        *(_DWORD *)(v10 + 40) = v11;
        *(_BYTE *)(v11 + v73) = *(_BYTE *)(v72 + 25);
        LODWORD(v72) = *(_DWORD *)(v10 + 40) + 1;
        *(_DWORD *)(v10 + 40) = v72;
        v71 = v72;
      }
      if ( *(_DWORD *)(*(_QWORD *)(v10 + 48) + 60LL) != (_DWORD)v9 )
      {
        v74 = sub_1932C62DC(a1: v9, a2: v6, a3: *(_QWORD *)(v10 + 16), a4: *(_DWORD *)(v6 + 76), a5: v71, a6: v8);
        *(_DWORD *)(v6 + 76) = v74;
      }
      *(_DWORD *)(v10 + 56) = v9;
      *(_DWORD *)(v10 + 8) = 69;
    }
    else
    {
      *(_BYTE *)(v7 + *(_QWORD *)(v10 + 16)) = v9;
      v41 = *(_QWORD *)(v10 + 16);
      v42 = (unsigned int)(*(_DWORD *)(v10 + 40) + 1);
      *(_DWORD *)(v10 + 40) = v42;
      *(_BYTE *)(v42 + v41) = v9;
      v43 = *(_QWORD *)(v10 + 16);
      v44 = (unsigned int)(*(_DWORD *)(v10 + 40) + 1);
      *(_DWORD *)(v10 + 40) = v44;
      *(_BYTE *)(v44 + v43) = v9;
      v45 = *(_QWORD *)(v10 + 16);
      v46 = (unsigned int)(*(_DWORD *)(v10 + 40) + 1);
      *(_DWORD *)(v10 + 40) = v46;
      *(_BYTE *)(v46 + v45) = v9;
      v47 = *(_QWORD *)(v10 + 16);
      v48 = (unsigned int)(*(_DWORD *)(v10 + 40) + 1);
      *(_DWORD *)(v10 + 40) = v48;
      *(_BYTE *)(v48 + v47) = v9;
      v49 = *(_DWORD *)(v10 + 172);
      v50 = (unsigned int)(*(_DWORD *)(v10 + 40) + 1);
      *(_DWORD *)(v10 + 40) = v50;
      if ( v49 == 9 )
      {
        LOBYTE(v36) = 2;
      }
      else if ( *(int *)(v10 + 176) >= 2 || (LOBYTE(v36) = v9, v49 < 2) )
      {
        LOBYTE(v36) = 4;
      }
      *(_BYTE *)(v50 + *(_QWORD *)(v10 + 16)) = v36;
      v51 = *(_QWORD *)(v10 + 16);
      v52 = (unsigned int)(*(_DWORD *)(v10 + 40) + 1);
      *(_DWORD *)(v10 + 40) = v52;
      *(_BYTE *)(v52 + v51) = 10;
      ++*(_DWORD *)(v10 + 40);
      *(_DWORD *)(v10 + 8) = 113;
      sub_1932C417C(a1: v9, a2: v6, a3: v36, a4: v6, a5: v7, a6: 0);
      if ( *(_DWORD *)(v10 + 40) != (_DWORD)v9 )
        goto LABEL_11;
    }
  }
  v75 = *(_DWORD *)(v10 + 8);
  switch ( v75 )
  {
    case 'E':
      v76 = *(_QWORD *)(v10 + 48);
      if ( *(_QWORD *)(v76 + 16) != v9 )
      {
        v77 = *(unsigned __int16 *)(v76 + 24) - *(_DWORD *)(v10 + 56);
        v78 = *(_DWORD *)(v10 + 40);
        v79 = *(_DWORD *)(v10 + 24);
        v80 = v78;
        if ( v78 + v77 > v79 )
        {
          v81 = *(_DWORD *)(v10 + 40);
          do
          {
            v82 = v79 - v81;
            sub_1932CA15B(
              a1: v9,
              a2: v6,
              a3: *(_QWORD *)(*(_QWORD *)(v10 + 48) + 16LL) + *(unsigned int *)(v10 + 56),
              a4: *(_QWORD *)(v10 + 16) + v81,
              a5: v82);
            v88 = *(_QWORD *)(v10 + 48);
            v89 = *(_DWORD *)(v10 + 24);
            *(_DWORD *)(v10 + 40) = v89;
            if ( *(_DWORD *)(v88 + 60) != v84 && v89 > v78 )
            {
              v90 = sub_1932C62DC(
                      a1: v84,
                      a2: v85,
                      a3: *(_DWORD *)(v10 + 16) + v78,
                      a4: *(_DWORD *)(v85 + 76),
                      a5: v89 - v78,
                      a6: v87);
              *(_DWORD *)(v85 + 76) = v90;
            }
            *(_DWORD *)(v10 + 56) += v82;
            sub_1932C417C(a1: v84, a2: v85, a3: v83, a4: v85, a5: v86, a6: v87);
            v80 = *(unsigned int *)(v10 + 40);
            if ( (_DWORD)v80 != 0 )
              goto LABEL_11;
            v77 -= v82;
            v78 = v9;
            v79 = *(_DWORD *)(v10 + 24);
            v81 = v9;
          }
          while ( v77 > v79 );
        }
        sub_1932CA15B(
          a1: v9,
          a2: v6,
          a3: *(_QWORD *)(*(_QWORD *)(v10 + 48) + 16LL) + *(unsigned int *)(v10 + 56),
          a4: *(_QWORD *)(v10 + 16) + v80,
          a5: v77);
        v91 = *(_QWORD *)(v10 + 48);
        v92 = v77 + *(_DWORD *)(v10 + 40);
        *(_DWORD *)(v10 + 40) = v92;
        if ( *(_DWORD *)(v91 + 60) != (_DWORD)v9 && v92 > v78 )
        {
          v93 = sub_1932C62DC(
                  a1: v9,
                  a2: v6,
                  a3: *(_DWORD *)(v10 + 16) + v78,
                  a4: *(_DWORD *)(v6 + 76),
                  a5: v92 - v78,
                  a6: v8);
          *(_DWORD *)(v6 + 76) = v93;
        }
        *(_DWORD *)(v10 + 56) = v9;
      }
      *(_DWORD *)(v10 + 8) = 73;
      break;
    case 'I':
      break;
    case '[':
LABEL_85:
      if ( *(_QWORD *)(*(_QWORD *)(v10 + 48) + 48LL) != v9 )
      {
        LODWORD(v8) = *(_DWORD *)(v10 + 40);
        LODWORD(v7) = v8;
        do
        {
          if ( (_DWORD)v7 == *(_DWORD *)(v10 + 24) )
          {
            if ( *(_DWORD *)(*(_QWORD *)(v10 + 48) + 60LL) != (_DWORD)v9 && (unsigned int)v7 > (unsigned int)v8 )
            {
              v97 = sub_1932C62DC(
                      a1: v9,
                      a2: v6,
                      a3: *(_DWORD *)(v10 + 16) + (int)v8,
                      a4: *(_DWORD *)(v6 + 76),
                      a5: (int)v7 - (int)v8,
                      a6: v8);
              *(_DWORD *)(v6 + 76) = v97;
            }
            sub_1932C417C(a1: v9, a2: v6, a3: v11, a4: v6, a5: v7, a6: v8);
            if ( *(_DWORD *)(v10 + 40) != (_DWORD)v9 )
              goto LABEL_11;
            LODWORD(v8) = v9;
            LODWORD(v7) = v9;
          }
          v98 = *(unsigned int *)(v10 + 56);
          LOBYTE(v11) = *(_BYTE *)(v98 + *(_QWORD *)(*(_QWORD *)(v10 + 48) + 48LL));
          *(_DWORD *)(v10 + 56) = v98 + 1;
          *(_BYTE *)((unsigned int)v7 + *(_QWORD *)(v10 + 16)) = v11;
          LODWORD(v7) = *(_DWORD *)(v10 + 40) + 1;
          *(_DWORD *)(v10 + 40) = v7;
        }
        while ( (_BYTE)v11 != 0 );
        if ( *(_DWORD *)(*(_QWORD *)(v10 + 48) + 60LL) != (_DWORD)v9 && (unsigned int)v7 > (unsigned int)v8 )
        {
          v99 = sub_1932C62DC(
                  a1: v9,
                  a2: v6,
                  a3: *(_DWORD *)(v10 + 16) + (int)v8,
                  a4: *(_DWORD *)(v6 + 76),
                  a5: (int)v7 - (int)v8,
                  a6: v8);
          *(_DWORD *)(v6 + 76) = v99;
        }
      }
      *(_DWORD *)(v10 + 8) = 103;
LABEL_99:
      if ( *(_DWORD *)(*(_QWORD *)(v10 + 48) + 60LL) != (_DWORD)v9 )
      {
        v100 = *(_DWORD *)(v10 + 40);
        if ( v100 + 2 > *(_DWORD *)(v10 + 24) )
        {
          sub_1932C417C(a1: v9, a2: v6, a3: v11, a4: v6, a5: v7, a6: v8);
          v100 = *(_DWORD *)(v10 + 40);
          if ( v100 != 0 )
            goto LABEL_11;
        }
        *(_BYTE *)(v100 + *(_QWORD *)(v10 + 16)) = *(_BYTE *)(v6 + 76);
        v101 = *(_QWORD *)(v10 + 16);
        v102 = (unsigned int)(*(_DWORD *)(v10 + 40) + 1);
        *(_DWORD *)(v10 + 40) = v102;
        *(_BYTE *)(v102 + v101) = *(_BYTE *)(v6 + 77);
        ++*(_DWORD *)(v10 + 40);
        v103 = sub_1932C62D4(a1: v9, a2: v6, a3: 0, a4: 0, a5: 0);
        *(_DWORD *)(v6 + 76) = v103;
      }
      *(_DWORD *)(v10 + 8) = 113;
      sub_1932C417C(a1: v9, a2: v6, a3: v11, a4: v6, a5: v7, a6: v8);
      if ( *(_DWORD *)(v10 + 40) != (_DWORD)v9 )
      {
LABEL_11:
        *(_DWORD *)(v10 + 64) = -1;
        return 0;
      }
LABEL_104:
      if ( *(_DWORD *)(v6 + 8) != (_DWORD)v9 || *(_DWORD *)(v10 + 156) != (_DWORD)v9 )
        goto LABEL_145;
      if ( a3 == 0 )
        return 0;
      if ( *(_DWORD *)(v10 + 8) != 666 )
      {
LABEL_145:
        v104 = *(int *)(v10 + 172);
        if ( (_DWORD)v104 != 0 )
        {
          v107 = *(_DWORD *)(v10 + 176);
          if ( v107 == 2 )
          {
            v105 = sub_1932C3A2C(a1: v9, a2: v6, a3, a4: v10, a5: v7, a6: v8);
          }
          else if ( v107 == 3 )
          {
            v105 = sub_1932C3BF8(a1: v9, a2: v6, a3, a4: v10, a5: v7, a6: v8);
          }
          else
          {
            v105 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64))(16 * v104 + 0x85F48))(
                     a1: v9,
                     a2: v6,
                     (unsigned int)a3,
                     a4: v10);
          }
        }
        else
        {
          v105 = sub_1932C18A0(a1: v9, a2: v6, a3, a4: (_DWORD *)v10, a5: v7, a6: v8);
        }
        if ( (unsigned int)(v105 - 2) <= 1 )
          *(_DWORD *)(v10 + 8) = 666;
        if ( (v105 & 0xFFFFFFFD) == 0 )
        {
          if ( *(_DWORD *)(v6 + 24) != (_DWORD)v9 )
            return 0;
          goto LABEL_11;
        }
        if ( v105 == 1 )
        {
          if ( a3 == 1 )
          {
            sub_1932C65E8(a1: v9, a2: v6, a3: v106, a4: v10);
          }
          else if ( a3 != 5 )
          {
            sub_1932C6A48(a1: v9, a2: v6, a3: 0, a4: v10, a5: 0, a6: 0);
            if ( a3 == 3 )
            {
              *(_WORD *)(*(_QWORD *)(v10 + 104) + 2LL * (unsigned int)(*(_DWORD *)(v10 + 116) - 1)) = v9;
              sub_1932CA161(
                a1: v9,
                a2: v6,
                a3: 0,
                a4: *(_QWORD *)(v10 + 104),
                a5: 2LL * (unsigned int)(*(_DWORD *)(v10 + 116) - 1));
              *(_DWORD *)(v10 + 5916) = v9;
              if ( *(_DWORD *)(v10 + 156) == (_DWORD)v9 )
              {
                *(_DWORD *)(v10 + 148) = v9;
                *(_DWORD *)(v10 + 132) = v9;
                *(_DWORD *)(v10 + 5896) = v9;
              }
            }
          }
          sub_1932C417C(a1: v9, a2: v6, a3: v106, a4: v6, a5: v7, a6: v8);
          if ( *(_DWORD *)(v6 + 24) == (_DWORD)v9 )
            goto LABEL_11;
        }
      }
      if ( a3 != 4 )
        return 0;
      if ( *(_DWORD *)(v10 + 44) <= (int)v9 )
        return 1;
      if ( *(_DWORD *)(v10 + 44) == 2 )
      {
        *(_BYTE *)(*(unsigned int *)(v10 + 40) + *(_QWORD *)(v10 + 16)) = *(_BYTE *)(v6 + 76);
        v108 = *(_QWORD *)(v10 + 16);
        v109 = (unsigned int)(*(_DWORD *)(v10 + 40) + 1);
        *(_DWORD *)(v10 + 40) = v109;
        *(_BYTE *)(v109 + v108) = *(_BYTE *)(v6 + 77);
        v110 = *(_QWORD *)(v10 + 16);
        v111 = (unsigned int)(*(_DWORD *)(v10 + 40) + 1);
        *(_DWORD *)(v10 + 40) = v111;
        *(_BYTE *)(v111 + v110) = *(_BYTE *)(v6 + 78);
        v112 = *(_QWORD *)(v10 + 16);
        v113 = (unsigned int)(*(_DWORD *)(v10 + 40) + 1);
        *(_DWORD *)(v10 + 40) = v113;
        *(_BYTE *)(v113 + v112) = *(_BYTE *)(v6 + 79);
        v114 = *(_QWORD *)(v10 + 16);
        v115 = (unsigned int)(*(_DWORD *)(v10 + 40) + 1);
        *(_DWORD *)(v10 + 40) = v115;
        *(_BYTE *)(v115 + v114) = *(_BYTE *)(v6 + 12);
        v116 = *(_QWORD *)(v10 + 16);
        v117 = (unsigned int)(*(_DWORD *)(v10 + 40) + 1);
        *(_DWORD *)(v10 + 40) = v117;
        *(_BYTE *)(v117 + v116) = *(_BYTE *)(v6 + 13);
        v118 = *(_QWORD *)(v10 + 16);
        v119 = (unsigned int)(*(_DWORD *)(v10 + 40) + 1);
        *(_DWORD *)(v10 + 40) = v119;
        *(_BYTE *)(v119 + v118) = *(_BYTE *)(v6 + 14);
        v120 = *(_QWORD *)(v10 + 16);
        v121 = (unsigned int)(*(_DWORD *)(v10 + 40) + 1);
        *(_DWORD *)(v10 + 40) = v121;
        *(_BYTE *)(v121 + v120) = *(_BYTE *)(v6 + 15);
      }
      else
      {
        v122 = *(_WORD *)(v6 + 78);
        *(_BYTE *)(*(unsigned int *)(v10 + 40) + *(_QWORD *)(v10 + 16)) = HIBYTE(v122);
        v123 = *(_QWORD *)(v10 + 16);
        v124 = (unsigned int)(*(_DWORD *)(v10 + 40) + 1);
        *(_DWORD *)(v10 + 40) = v124;
        *(_BYTE *)(v124 + v123) = v122;
        v125 = *(_QWORD *)(v10 + 16);
        v121 = (unsigned int)(*(_DWORD *)(v10 + 40) + 1);
        *(_DWORD *)(v10 + 40) = v121;
        LODWORD(v7) = *(unsigned __int16 *)(v6 + 76);
        *(_BYTE *)(v121 + v125) = HIBYTE(*(_WORD *)(v6 + 76));
        v126 = *(_QWORD *)(v10 + 16);
        v127 = (unsigned int)(*(_DWORD *)(v10 + 40) + 1);
        *(_DWORD *)(v10 + 40) = v127;
        *(_BYTE *)(v127 + v126) = v7;
      }
      ++*(_DWORD *)(v10 + 40);
      sub_1932C417C(a1: v9, a2: v6, a3: v121, a4: v6, a5: v7, a6: v8);
      v129 = *(_DWORD *)(v10 + 44);
      if ( v129 > 0 )
        *(_DWORD *)(v10 + 44) = -v129;
      LOBYTE(v128) = *(_DWORD *)(v10 + 40) == v128;
      return v128;
    case 'g':
      goto LABEL_99;
    default:
      goto LABEL_104;
  }
  if ( *(_QWORD *)(*(_QWORD *)(v10 + 48) + 32LL) != v9 )
  {
    LODWORD(v8) = *(_DWORD *)(v10 + 40);
    LODWORD(v7) = v8;
    do
    {
      if ( (_DWORD)v7 == *(_DWORD *)(v10 + 24) )
      {
        if ( *(_DWORD *)(*(_QWORD *)(v10 + 48) + 60LL) != (_DWORD)v9 && (unsigned int)v7 > (unsigned int)v8 )
        {
          v94 = sub_1932C62DC(
                  a1: v9,
                  a2: v6,
                  a3: *(_DWORD *)(v10 + 16) + (int)v8,
                  a4: *(_DWORD *)(v6 + 76),
                  a5: (int)v7 - (int)v8,
                  a6: v8);
          *(_DWORD *)(v6 + 76) = v94;
        }
        sub_1932C417C(a1: v9, a2: v6, a3: v11, a4: v6, a5: v7, a6: v8);
        if ( *(_DWORD *)(v10 + 40) != (_DWORD)v9 )
          goto LABEL_11;
        LODWORD(v8) = v9;
        LODWORD(v7) = v9;
      }
      v95 = *(unsigned int *)(v10 + 56);
      LOBYTE(v11) = *(_BYTE *)(v95 + *(_QWORD *)(*(_QWORD *)(v10 + 48) + 32LL));
      *(_DWORD *)(v10 + 56) = v95 + 1;
      *(_BYTE *)((unsigned int)v7 + *(_QWORD *)(v10 + 16)) = v11;
      LODWORD(v7) = *(_DWORD *)(v10 + 40) + 1;
      *(_DWORD *)(v10 + 40) = v7;
    }
    while ( (_BYTE)v11 != 0 );
    if ( *(_DWORD *)(*(_QWORD *)(v10 + 48) + 60LL) != (_DWORD)v9 && (unsigned int)v7 > (unsigned int)v8 )
    {
      v96 = sub_1932C62DC(
              a1: v9,
              a2: v6,
              a3: *(_DWORD *)(v10 + 16) + (int)v8,
              a4: *(_DWORD *)(v6 + 76),
              a5: (int)v7 - (int)v8,
              a6: v8);
      *(_DWORD *)(v6 + 76) = v96;
    }
    *(_DWORD *)(v10 + 56) = v9;
  }
  *(_DWORD *)(v10 + 8) = 91;
  goto LABEL_85;
}
