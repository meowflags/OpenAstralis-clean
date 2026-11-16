// Java_sun_net_spi_DefaultProxySelector_getSystemProxies
// rva 0x132ad874  size 1427  section .text  group text
// window base 0x1932ad874: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall Java_sun_net_spi_DefaultProxySelector_getSystemProxies(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  __int64 v7; // r15
  __int64 v8; // r12
  int v9; // ebx
  __int64 v10; // rdi
  __int64 v11; // rsi
  __int64 v12; // rdi
  __int64 v13; // rsi
  __int64 v14; // rsi
  __int64 v15; // rdi
  __int64 v16; // rdx
  __int64 v17; // rdi
  __int64 *v18; // rsi
  __int64 v19; // r14
  __int64 v20; // rax
  char v21; // al
  __int64 v22; // rdx
  __int64 v23; // rdi
  __int64 v24; // rsi
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rdx
  __int64 v28; // rdi
  __int64 v29; // rsi
  __int64 v30; // r13
  __int64 v31; // rsi
  __int64 v32; // rdi
  __int64 v33; // rdi
  __int64 v34; // rsi
  __int64 v35; // rdx
  int v36; // eax
  __int64 v37; // rdi
  __int64 v38; // rsi
  __int64 v39; // rbx
  __int64 v40; // rcx
  __int64 v41; // rax
  __int64 v42; // r14
  __int64 v43; // r15
  __int64 v44; // rdi
  __int64 v45; // rsi
  __int64 v46; // rdi
  __int64 v47; // rsi
  __int64 v48; // rdi
  __int64 v49; // rsi
  bool v50; // zf
  __int64 v51; // rdi
  __int64 v52; // rsi
  __int64 (__fastcall *v53)(__int64, __int64, _QWORD, __int64, __int64); // r9
  __int64 v54; // r8
  int v55; // r9d
  unsigned int v56; // eax
  _QWORD *v57; // r14
  unsigned int v58; // ebx
  __int64 v59; // rax
  _QWORD *v60; // r15
  int v61; // r13d
  int v62; // ecx
  __int64 v63; // r14
  __int64 v64; // rbx
  unsigned int v65; // eax
  __int64 v66; // rdi
  __int64 v67; // rsi
  __int64 v68; // rbx
  __int64 v69; // rdi
  __int64 v70; // rsi
  __int64 (__fastcall *v71)(__int64, __int64, _QWORD, __int64, _QWORD, __int64); // r10
  __int64 v72; // rbx
  __int64 v73; // rdi
  __int64 *v74; // rsi
  __int64 v75; // rax
  __int64 v76; // rbx
  __int64 v77; // rdi
  __int64 v78; // rsi
  __int64 *v79; // rsi
  __int64 v80; // rax
  __int64 v81; // rdi
  char v82; // al
  _QWORD *v83; // rbx
  __int64 v84; // rdx
  __int64 v85; // rdi
  __int64 v86; // rsi
  __int64 v87; // rsi
  __int64 v88; // rdi
  __int64 v90[2]; // [rsp+0h] [rbp-100h] BYREF
  int v91; // [rsp+10h] [rbp-F0h]
  int v92; // [rsp+18h] [rbp-E8h]
  __int64 v93; // [rsp+20h] [rbp-E0h]
  __int64 v94; // [rsp+30h] [rbp-D0h]
  unsigned int v95; // [rsp+38h] [rbp-C8h]
  int v96; // [rsp+3Ch] [rbp-C4h]
  __int64 v97; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD *v98; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v99; // [rsp+50h] [rbp-B0h]
  int v100; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v101; // [rsp+60h] [rbp-A0h]
  __int64 v102; // [rsp+68h] [rbp-98h]
  __int64 v103; // [rsp+70h] [rbp-90h]
  __int64 v104; // [rsp+78h] [rbp-88h]
  __int64 v105; // [rsp+80h] [rbp-80h]
  __int64 v106; // [rsp+88h] [rbp-78h]
  char v107[8]; // [rsp+90h] [rbp-70h] BYREF
  __int64 v108; // [rsp+98h] [rbp-68h]
  __int64 v109; // [rsp+A0h] [rbp-60h]
  _DWORD v110[2]; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v111; // [rsp+B0h] [rbp-50h]
  int v112; // [rsp+C4h] [rbp-3Ch]
  _BYTE v113[2048]; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v114; // [rsp+8D0h] [rbp+7D0h]

  v106 = a5;
  v105 = a6;
  v98 = nullptr;
  v7 = a6;
  v8 = 0;
  v9 = 0;
  sub_1932CA161(a1: 0, a2: a4, a3: 0, a4: &v100, a5: 32);
  sub_1932CA161(a1: v10, a2: v11, a3: 0, a4: v110, a5: 32);
  sub_1932CA161(a1: v12, a2: v13, a3: 0, a4: v107, a5: (unsigned int)(v12 + 24));
  v19 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, _QWORD))(*(_QWORD *)v14 + 1320LL))(
          a1: v15,
          a2: v14,
          a3: v7,
          a4: v14,
          a5: 0);
  v94 = v19;
  v20 = *v18;
  if ( v19 == 0 )
  {
    v21 = (*(__int64 (__fastcall **)(__int64, __int64 *, __int64, __int64 *))(v20 + 1824))(
            a1: v17,
            a2: v18,
            a3: v16,
            a4: v18);
    goto LABEL_5;
  }
  v104 = (*(__int64 (__fastcall **)(__int64, __int64 *, __int64, __int64 *, _QWORD))(v20 + 1320))(
           a1: v17,
           a2: v18,
           a3: a5,
           a4: v18,
           a5: 0);
  v30 = v104;
  if ( v104 != 0 )
  {
    if ( (unsigned int)MEMORY[0x79900](a1: v28, a2: v29, a3: v27, a4: &v100) == 0 )
    {
LABEL_73:
      (*(void (__fastcall **)(__int64, __int64, __int64, __int64, __int64))(*(_QWORD *)v34 + 1328LL))(
        a1: v33,
        a2: v34,
        a3: v7,
        a4: v34,
        a5: v19);
      (*(void (__fastcall **)(__int64, __int64, __int64, __int64, __int64))(*(_QWORD *)v87 + 1328LL))(
        a1: v88,
        a2: v87,
        a3: v106,
        a4: v87,
        a5: v30);
      return sub_1932C8DE0(a1: v23, a2: v24, a3: v22, a4: (unsigned __int64)v90 ^ v114, a5: v25, a6: v26);
    }
    v35 = 1;
    if ( v100 == (_DWORD)v33 )
    {
      v36 = v110[0];
    }
    else
    {
      v110[1] = 3;
      v36 = 1;
      v110[0] = 1;
      v9 = 1;
      v112 = 1;
    }
    if ( v101 != 0 )
    {
      v111 = v101;
      v110[0] = v36 | 2;
      v9 = 1;
    }
    if ( v9 != 0
      && (v93 = v19,
          sub_19329E4C0(a1: v33, a2: v34, a3: 1024, a4: (__int64)v113, a5: 539008),
          (unsigned int)MEMORY[0x79908](a1: v37, a2: v38, a3: v113, a4: MEMORY[0x337518], a5: v110, a6: v107) != 0) )
    {
      v39 = v108;
      v40 = v109;
    }
    else
    {
      v39 = v102;
      if ( v102 == 0 )
      {
LABEL_62:
        if ( v108 != 0 )
          MEMORY[0x79440](a1: v33, a2: v34, a3: v35);
        if ( v109 != 0 )
          MEMORY[0x79440](a1: v33, a2: v34, a3: v35);
        if ( v101 != 0 )
          MEMORY[0x79440](a1: v33, a2: v34, a3: v35);
        if ( v102 != 0 )
          MEMORY[0x79440](a1: v33, a2: v34, a3: v35);
        if ( v103 != 0 )
          MEMORY[0x79440](a1: v33, a2: v34, a3: v35);
        v7 = v105;
        v33 = v8;
        goto LABEL_73;
      }
      v40 = v103;
    }
    if ( v40 != 0 )
    {
      v97 = v33;
      while ( 1 )
      {
        v41 = MEMORY[0x79C58](a1: v33, a2: v34, a3: 539024, a4: v40, a5: &v97);
        v42 = v41;
        if ( v41 == 0 )
          break;
        v43 = MEMORY[0x79CB0](a1: v33, a2: v34, a3: v35, a4: v41);
        if ( (unsigned int)MEMORY[0x79C70](a1: v44, a2: v45, a3: v94, a4: v42, a5: v43) == 0 )
          goto LABEL_61;
        if ( (unsigned int)MEMORY[0x79C70](a1: v33, a2: v34, a3: 539032, a4: v42, a5: v43) == 0 )
        {
          v19 = v94;
          if ( sub_1932CA167(a1: v33, a2: v34, a3: 46, a4: v94) == 0 )
            goto LABEL_62;
        }
        v40 = 0;
      }
      v19 = v94;
    }
    if ( v39 == 0 )
      goto LABEL_62;
    if ( (unsigned int)MEMORY[0x79C68](a1: v33, a2: v34, a3: 539048, a4: v30) != 0 )
      MEMORY[0x79C68](a1: v46, a2: v47, a3: 539064, a4: v30);
    if ( (unsigned int)MEMORY[0x79C68](a1: v46, a2: v47, a3: 539072, a4: v30) != 0 )
      JUMPOUT(0x326507AFELL);
    v96 = 443;
    v50 = (unsigned int)MEMORY[0x79C68](a1: v48, a2: v49, a3: 539088, a4: v30) == 0;
    v53 = *(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64, __int64))(*(_QWORD *)v52 + 1160LL);
    if ( v50 )
    {
      v54 = MEMORY[0x337E30];
      v96 = 1080;
    }
    else
    {
      v54 = MEMORY[0x337E38];
    }
    v99 = v53(a1: v51, a2: v52, a3: MEMORY[0x337E58], a4: v52, a5: v54);
    if ( v99 != 0
      && (*(unsigned __int8 (__fastcall **)(__int64, __int64, _QWORD, __int64))(*(_QWORD *)v34 + 1824LL))(
           a1: v33,
           a2: v34,
           a3: *(_QWORD *)(*(_QWORD *)v34 + 1824LL),
           a4: v34) == 0 )
    {
      v56 = sub_1932ADE50(
              a1: v33,
              a2: v34,
              a3: v30,
              a4: v39,
              a5: (unsigned int)&v98,
              a6: v55,
              a7: v90[0],
              a8: v90[1],
              a9: v91,
              a10: v92);
      v57 = v98;
      v58 = v56;
      LODWORD(v97) = v56;
      if ( v56 == 0 )
      {
LABEL_59:
        if ( v57 != nullptr )
        {
          do
          {
            v83 = (_QWORD *)v57[2];
            MEMORY[0x79AE0](a1: v33, a2: v34, a3: v35, a4: *v57);
            MEMORY[0x79AE0](a1: v85, a2: v86, a3: v84, a4: v57);
            v57 = v83;
          }
          while ( v83 != nullptr );
        }
        goto LABEL_61;
      }
      if ( v98 != nullptr )
      {
        v59 = *(_QWORD *)v34;
        v95 = v33;
        v60 = v98;
        v8 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64, _QWORD, _QWORD))(v59 + 1376))(
               a1: v33,
               a2: v34,
               a3: v58,
               a4: v34,
               a5: MEMORY[0x337E68],
               a6: 0);
        if ( v8 != 0
          && (*(unsigned __int8 (__fastcall **)(__int64, __int64, _QWORD, __int64))(*(_QWORD *)v34 + 1824LL))(
               a1: v33,
               a2: v34,
               a3: *(_QWORD *)(*(_QWORD *)v34 + 1824LL),
               a4: v34) == 0 )
        {
          v61 = v96;
          v62 = v33;
          v63 = v99;
          do
          {
            if ( v62 >= (int)v58 )
              break;
            if ( *v60 != v33 && v8 != 0 )
            {
              if ( *((_DWORD *)v60 + 2) == (_DWORD)v33 )
                *((_DWORD *)v60 + 2) = v61;
              v64 = *(_QWORD *)v34;
              v65 = MEMORY[0x79CB0](a1: v33, a2: v34, a3: v35, a4: *v60);
              v68 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64, _QWORD))(v64 + 1304))(
                      a1: v66,
                      a2: v67,
                      a3: *v60,
                      a4: v67,
                      a5: v65);
              if ( v68 == 0
                || (*(unsigned __int8 (__fastcall **)(__int64, __int64, _QWORD, __int64))(*(_QWORD *)v70 + 1824LL))(
                     a1: v69,
                     a2: v70,
                     a3: *(_QWORD *)(*(_QWORD *)v70 + 1824LL),
                     a4: v70) != 0 )
              {
                v8 = v69;
              }
              v71 = *(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64, _QWORD, __int64))(*(_QWORD *)v70 + 912LL);
              LODWORD(v93) = *((_DWORD *)v60 + 2);
              v72 = v71(a1: v69, a2: v70, a3: MEMORY[0x337E60], a4: v70, a5: MEMORY[0x337E50], a6: v68);
              if ( v72 == 0
                || (*(unsigned __int8 (__fastcall **)(__int64, __int64 *, _QWORD, __int64 *))(*v74 + 1824))(
                     a1: v73,
                     a2: v74,
                     a3: *(_QWORD *)(*v74 + 1824),
                     a4: v74) != 0 )
              {
                v8 = v73;
              }
              v75 = *v74;
              v93 = v72;
              v76 = (*(__int64 (__fastcall **)(__int64, __int64 *, _QWORD, __int64 *, _QWORD, __int64))(v75 + 224))(
                      a1: v73,
                      a2: v74,
                      a3: MEMORY[0x337E68],
                      a4: v74,
                      a5: MEMORY[0x337E48],
                      a6: v63);
              if ( v76 == 0
                || (*(unsigned __int8 (__fastcall **)(__int64, __int64, _QWORD, __int64))(*(_QWORD *)v78 + 1824LL))(
                     a1: v77,
                     a2: v78,
                     a3: *(_QWORD *)(*(_QWORD *)v78 + 1824LL),
                     a4: v78) != 0 )
              {
                v8 = v77;
              }
              (*(void (__fastcall **)(__int64, __int64, __int64, __int64, _QWORD, __int64))(*(_QWORD *)v78 + 1392LL))(
                a1: v77,
                a2: v78,
                a3: v8,
                a4: v78,
                a5: v95,
                a6: v76);
              v80 = *v79;
              ++v95;
              v82 = (*(__int64 (__fastcall **)(__int64, __int64 *, _QWORD, __int64 *))(v80 + 1824))(
                      a1: v81,
                      a2: v79,
                      a3: *(_QWORD *)(v80 + 1824),
                      a4: v79);
              v58 = v97;
              if ( v82 != 0 )
                JUMPOUT(0x326507D0FLL);
              v62 = v95;
            }
            v60 = (_QWORD *)v60[2];
          }
          while ( v60 != nullptr );
          v57 = v98;
          v30 = v104;
        }
        goto LABEL_59;
      }
    }
LABEL_61:
    v19 = v94;
    goto LABEL_62;
  }
  (*(void (__fastcall **)(__int64, __int64, __int64, __int64, __int64))(*(_QWORD *)v29 + 1328LL))(
    a1: v28,
    a2: v29,
    a3: v7,
    a4: v29,
    a5: v19);
  v21 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64))(*(_QWORD *)v31 + 1824LL))(
          a1: v32,
          a2: v31,
          a3: *(_QWORD *)(*(_QWORD *)v31 + 1824LL),
          a4: v31);
LABEL_5:
  if ( v21 == 0 )
    sub_1932B15D0(a1: v23, a2: v24, a3: 0, a4: v24);
  return sub_1932C8DE0(a1: v23, a2: v24, a3: v22, a4: (unsigned __int64)v90 ^ v114, a5: v25, a6: v26);
}
