// sub_1932ACA14
// rva 0x132aca14  size 2014  section .text  group text
// window base 0x1932aca14: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1932ACA14(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4, _DWORD *a5, _DWORD *a6)
{
  __int64 v6; // rax
  __int64 v11; // rbp
  unsigned int v12; // r12d
  __int64 v13; // rdx
  __int64 v14; // rsi
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rdi
  unsigned int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rdi
  __int64 v21; // rsi
  int v22; // edi
  int v23; // esi
  int v24; // r9d
  int v25; // r8d
  __int64 v27; // rbx
  unsigned int v28; // eax
  __int64 v29; // rdi
  __int64 v30; // rsi
  __int64 v31; // rbx
  __int64 v32; // rdi
  __int64 v33; // rsi
  __int64 v34; // rdx
  __int64 v35; // rsi
  unsigned int v36; // eax
  __int64 v37; // rdi
  __int64 v38; // rsi
  __int64 v39; // rdi
  __int64 v40; // rsi
  __int64 v41; // rdi
  __int64 v42; // rsi
  __int64 v43; // rdx
  __int64 v44; // rsi
  __int64 v45; // rdi
  __int64 v46; // rbx
  __int64 v47; // rax
  __int64 v48; // rsi
  char v49; // cl
  __int64 v50; // rbx
  __int64 v51; // rax
  int v52; // eax
  __int64 v53; // rbx
  __int64 v54; // r13
  unsigned int v55; // r15d
  __int64 v56; // r12
  __int64 (__fastcall *v57)(__int64, __int64, _QWORD, _QWORD *, _QWORD); // r9
  __int64 v58; // rbx
  unsigned int v59; // eax
  __int64 v60; // rdi
  int v61; // esi
  __int64 v62; // rdi
  __int64 v63; // rsi
  __int64 v64; // rax
  __int64 v65; // rdi
  __int64 v66; // rsi
  __int64 v67; // rdi
  __int64 v68; // rsi
  __int64 v69; // rdx
  __int64 v70; // rdi
  __int64 v71; // rsi
  unsigned int v72; // r15d
  __int64 v73; // r15
  unsigned int v74; // eax
  __int64 v75; // rdi
  int v76; // esi
  __int64 v77; // rdx
  __int64 v78; // rdi
  __int64 v79; // rsi
  __int64 v80; // rdi
  __int64 v81; // rsi
  __int64 v82; // rax
  unsigned int v83; // r8d
  __int64 v84; // rdi
  __int64 v85; // rsi
  __int64 v86; // rdi
  __int64 v87; // rsi
  __int64 v88; // rdi
  __int64 v89; // rsi
  __int64 v90; // rdi
  __int64 v91; // rsi
  __int64 v92; // rdi
  __int64 v93; // rsi
  __int64 v94; // rdi
  __int64 v95; // rsi
  __int64 v96; // rdi
  __int64 v97; // rsi
  __int64 v98; // rdi
  __int64 v99; // rsi
  __int64 v100; // rax
  __int64 v101; // rbx
  __int64 v102; // rdi
  __int64 v103; // rsi
  __int64 v104; // [rsp+0h] [rbp-298h] BYREF
  __int64 v105; // [rsp+20h] [rbp-278h]
  int v106; // [rsp+28h] [rbp-270h] BYREF
  __int64 v107; // [rsp+30h] [rbp-268h]
  __int64 v108; // [rsp+38h] [rbp-260h]
  _BYTE v109[528]; // [rsp+40h] [rbp-258h] BYREF
  __int64 v110; // [rsp+250h] [rbp-48h]

  v6 = *a4;
  v105 = a3;
  v11 = 0;
  v12 = 0;
  v107 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD *, _QWORD))(v6 + 224))(
           a1,
           a2: 0,
           a3: MEMORY[0x337ED0],
           a4,
           a5: MEMORY[0x337EB0]);
  v17 = v107;
  if ( v107 != 0 )
  {
    v18 = MEMORY[0x792B0](a1: v107, a2: v14, a3: v109, a4: a3, a5: 257);
    if ( v18 != 0 )
    {
      MEMORY[0x793D8](a1: v20, a2: v21, a3: v19, a4: v18);
      v25 = 538144;
      goto LABEL_4;
    }
    v27 = *a4;
    v28 = MEMORY[0x79CB0](a1: v20, a2: v21, a3: v19, a4: v109);
    v31 = (*(__int64 (__fastcall **)(__int64, __int64, _BYTE *, _QWORD *, _QWORD))(v27 + 1304))(
            a1: v29,
            a2: v30,
            a3: v109,
            a4,
            a5: v28);
    if ( v31 != 0 )
    {
      (*(void (__fastcall **)(__int64, __int64, __int64, _QWORD *, _QWORD, __int64))(*a4 + 832LL))(
        a1: v17,
        a2: v14,
        a3: v17,
        a4,
        a5: MEMORY[0x337EC8],
        a6: v31);
      (*(void (__fastcall **)(__int64, __int64, __int64, _QWORD *))(*a4 + 184LL))(a1: v32, a2: v33, a3: v31, a4);
      v36 = MEMORY[0x79CB0](a1: *a4, a2: v35, a3: v34, a4: v105 + 542);
      v17 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, _QWORD *, _QWORD))(v37 + 1304))(
              a1: v37,
              a2: v38,
              a3: v105 + 542,
              a4,
              a5: v36);
      if ( v17 != 0 )
      {
        (*(void (__fastcall **)(__int64, __int64, __int64, _QWORD *, _QWORD, __int64))(*a4 + 832LL))(
          a1: v17,
          a2: v14,
          a3: v107,
          a4,
          a5: MEMORY[0x337EA0],
          a6: v17);
        (*(void (__fastcall **)(__int64, __int64, __int64, _QWORD *))(*a4 + 184LL))(a1: v39, a2: v40, a3: v39, a4);
        (*(void (__fastcall **)(__int64, __int64, __int64, _QWORD *, _QWORD, _QWORD))(*a4 + 872LL))(
          a1: v41,
          a2: v42,
          a3: v107,
          a4,
          a5: MEMORY[0x337EC0],
          a6: *(unsigned int *)(v105 + 8));
        v45 = 0;
        if ( *a5 > (unsigned int)v44 )
        {
          do
          {
            v46 = 10 * v45;
            if ( *(_QWORD *)&a5[20 * v45 + 10] == *(_QWORD *)v105 && (unsigned int)(a5[20 * v45 + 18] - 3) <= 1 )
            {
              ++v12;
              v47 = MEMORY[0x79AD0](a1: v45, a2: v44, a3: v43, a4: 40);
              v11 = v47;
              if ( v47 == 0 )
              {
                while ( v48 != 0 )
                  MEMORY[0x79AE0](a1: v45, a2: *(_QWORD *)(v48 + 32), a3: v43, a4: v48);
                goto LABEL_37;
              }
              *(_OWORD *)v47 = *(_OWORD *)&a5[2 * v46 + 2];
              *(_QWORD *)(v47 + 16) = *(_QWORD *)&a5[2 * v46 + 6];
              *(_DWORD *)(v47 + 24) = a5[2 * v46 + 8];
              v49 = a5[2 * v46 + 17];
              *(_QWORD *)(v47 + 32) = v48;
              v44 = v47;
              *(_BYTE *)(v47 + 28) = v49;
            }
            v45 = (unsigned int)(v45 + 1);
          }
          while ( (unsigned int)v45 < *a5 );
        }
        v45 = 0;
        if ( *a6 == 0 )
        {
LABEL_19:
          v108 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, _QWORD *, _QWORD, _QWORD))(*a4 + 1376LL))(
                   a1: v45,
                   a2: v44,
                   a3: v12,
                   a4,
                   a5: MEMORY[0x337F08],
                   a6: 0);
          v53 = v108;
          if ( v108 == 0 )
          {
            while ( v14 != 0 )
              MEMORY[0x79AE0](a1: v17, a2: *(_QWORD *)(v14 + 32), a3: v13, a4: v14);
            return sub_1932C8DE0(a1: v17, a2: v14, a3: v13, a4: (unsigned __int64)&v104 ^ v110, a5: v15, a6: v16);
          }
          v54 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, _QWORD *, _QWORD, _QWORD))(*a4 + 1376LL))(
                  a1: v17,
                  a2: v14,
                  a3: v12,
                  a4,
                  a5: MEMORY[0x337E90],
                  a6: 0);
          if ( v54 == 0 )
          {
            while ( v14 != 0 )
              MEMORY[0x79AE0](a1: v17, a2: *(_QWORD *)(v14 + 32), a3: v13, a4: v14);
            return sub_1932C8DE0(a1: v17, a2: v14, a3: v13, a4: (unsigned __int64)&v104 ^ v110, a5: v15, a6: v16);
          }
          v55 = 0;
          LODWORD(v105) = 0;
          if ( v11 == 0 )
          {
LABEL_81:
            while ( v14 != 0 )
              MEMORY[0x79AE0](a1: v17, a2: *(_QWORD *)(v14 + 32), a3: v13, a4: v14);
            (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD *, _QWORD, __int64))(*a4 + 832LL))(
              a1: v107,
              a2: 0,
              a3: v107,
              a4,
              a5: MEMORY[0x337EB8],
              a6: v53);
            (*(void (__fastcall **)(__int64, __int64, __int64, _QWORD *))(*a4 + 184LL))(a1: v92, a2: v93, a3: v53, a4);
            (*(void (__fastcall **)(__int64, __int64, __int64, _QWORD *, _QWORD, __int64))(*a4 + 832LL))(
              a1: v94,
              a2: v95,
              a3: v94,
              a4,
              a5: MEMORY[0x337EA8],
              a6: v54);
            (*(void (__fastcall **)(__int64, __int64, __int64, _QWORD *))(*a4 + 184LL))(a1: v96, a2: v97, a3: v54, a4);
            v100 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, _QWORD *, _QWORD, _QWORD))(*a4 + 1376LL))(
                     a1: v98,
                     a2: v99,
                     a3: 0,
                     a4,
                     a5: MEMORY[0x337ED0],
                     a6: 0);
            v101 = v100;
            if ( v100 != 0 )
            {
              (*(void (__fastcall **)(__int64, __int64, __int64, _QWORD *, _QWORD, __int64))(*a4 + 832LL))(
                a1: v17,
                a2: v14,
                a3: v17,
                a4,
                a5: MEMORY[0x337E98],
                a6: v100);
              (*(void (__fastcall **)(__int64, __int64, __int64, _QWORD *))(*a4 + 184LL))(
                a1: v102,
                a2: v103,
                a3: v101,
                a4);
            }
            return sub_1932C8DE0(a1: v17, a2: v14, a3: v13, a4: (unsigned __int64)&v104 ^ v110, a5: v15, a6: v16);
          }
          v56 = v107;
          while ( 1 )
          {
            v57 = *(__int64 (__fastcall **)(__int64, __int64, _QWORD, _QWORD *, _QWORD))(*a4 + 224LL);
            if ( *(_WORD *)v11 == 2 )
            {
              v58 = v57(a1: v17, a2: v14, a3: MEMORY[0x337F50], a4, a5: MEMORY[0x337F48]);
              if ( v58 == 0 )
              {
                while ( v14 != 0 )
                  MEMORY[0x79AE0](a1: v17, a2: *(_QWORD *)(v14 + 32), a3: v13, a4: v14);
                return sub_1932C8DE0(a1: v17, a2: v14, a3: v13, a4: (unsigned __int64)&v104 ^ v110, a5: v15, a6: v16);
              }
              v59 = MEMORY[0x79930](a1: v17, a2: v14, a3: v13, a4: *(unsigned int *)(v11 + 4));
              sub_1932AA4C0(a1: v60, a2: v61, a3: v58, (__int64)a4, a5: v59);
              if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64, _QWORD, _QWORD *))(*a4 + 1824LL))(
                     a1: v62,
                     a2: v63,
                     a3: *(_QWORD *)(*a4 + 1824LL),
                     a4) != 0 )
              {
                while ( v14 != 0 )
                  MEMORY[0x79AE0](a1: v17, a2: *(_QWORD *)(v14 + 32), a3: v13, a4: v14);
                return sub_1932C8DE0(a1: v17, a2: v14, a3: v13, a4: (unsigned __int64)&v104 ^ v110, a5: v15, a6: v16);
              }
              v64 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, _QWORD *, _QWORD))(*a4 + 224LL))(
                      a1: v17,
                      a2: v14,
                      a3: MEMORY[0x337E90],
                      a4,
                      a5: MEMORY[0x337E88]);
              v17 = v64;
              if ( v64 == 0 )
              {
                while ( v14 != 0 )
                  MEMORY[0x79AE0](a1: v17, a2: *(_QWORD *)(v14 + 32), a3: v13, a4: v14);
                return sub_1932C8DE0(a1: v17, a2: v14, a3: v13, a4: (unsigned __int64)&v104 ^ v110, a5: v15, a6: v16);
              }
              (*(void (__fastcall **)(__int64, __int64, __int64, _QWORD *, _QWORD, __int64))(*a4 + 832LL))(
                a1: v64,
                a2: v14,
                a3: v64,
                a4,
                a5: MEMORY[0x337E80],
                a6: v58);
              if ( *(_BYTE *)(v11 + 28) != 0xFF )
              {
                (*(void (__fastcall **)(__int64, __int64, __int64, _QWORD *, _QWORD, _QWORD))(*a4 + 864LL))(
                  a1: v65,
                  a2: v66,
                  a3: v65,
                  a4,
                  a5: MEMORY[0x337E70],
                  a6: *(unsigned __int8 *)(v11 + 28));
                v72 = MEMORY[0x792B8](a1: v67, a2: v68, a3: &v106, a4: *(unsigned __int8 *)(v11 + 28));
                if ( v72 != 0 )
                {
                  while ( v71 != 0 )
                    MEMORY[0x79AE0](a1: v70, a2: *(_QWORD *)(v71 + 32), a3: v69, a4: v71);
                  MEMORY[0x793D8](a1: v70, a2: 0, a3: v69, a4: v72);
                  v25 = 538192;
LABEL_4:
                  sub_1932AED04(a1: v22, a2: v23, a3: 534024, (_DWORD)a4, a5: v25, a6: v24);
                  return sub_1932C8DE0(a1: v17, a2: v14, a3: v13, a4: (unsigned __int64)&v104 ^ v110, a5: v15, a6: v16);
                }
                v73 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, _QWORD *, _QWORD))(*a4 + 224LL))(
                        a1: v70,
                        a2: v71,
                        a3: MEMORY[0x337F50],
                        a4,
                        a5: MEMORY[0x337F48]);
                if ( v73 == 0 )
                {
                  while ( v14 != 0 )
                    MEMORY[0x79AE0](a1: v17, a2: *(_QWORD *)(v14 + 32), a3: v13, a4: v14);
                  return sub_1932C8DE0(a1: v17, a2: v14, a3: v13, a4: (unsigned __int64)&v104 ^ v110, a5: v15, a6: v16);
                }
                v74 = MEMORY[0x79930](a1: v17, a2: v14, a3: v13, a4: *(_DWORD *)(v11 + 4) | (unsigned int)~v106);
                sub_1932AA4C0(a1: v75, a2: v76, a3: v73, (__int64)a4, a5: v74);
                if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64, __int64, _QWORD *))(*a4 + 1824LL))(
                       a1: v78,
                       a2: v79,
                       a3: v77,
                       a4) != 0 )
                {
                  while ( v14 != 0 )
                    MEMORY[0x79AE0](a1: v17, a2: *(_QWORD *)(v14 + 32), a3: v13, a4: v14);
                  return sub_1932C8DE0(a1: v17, a2: v14, a3: v13, a4: (unsigned __int64)&v104 ^ v110, a5: v15, a6: v16);
                }
                (*(void (__fastcall **)(__int64, __int64, __int64, _QWORD *, _QWORD, __int64))(*a4 + 832LL))(
                  a1: v17,
                  a2: v14,
                  a3: v17,
                  a4,
                  a5: MEMORY[0x337E78],
                  a6: v73);
                (*(void (__fastcall **)(__int64, __int64, __int64, _QWORD *))(*a4 + 184LL))(
                  a1: v80,
                  a2: v81,
                  a3: v73,
                  a4);
                v55 = v105;
              }
            }
            else
            {
              v82 = v57(a1: v17, a2: v14, a3: MEMORY[0x337F40], a4, a5: MEMORY[0x337F10]);
              v58 = v82;
              if ( v82 == 0 )
              {
                while ( v14 != 0 )
                  MEMORY[0x79AE0](a1: v17, a2: *(_QWORD *)(v14 + 32), a3: v13, a4: v14);
                return sub_1932C8DE0(a1: v17, a2: v14, a3: v13, a4: (unsigned __int64)&v104 ^ v110, a5: v15, a6: v16);
              }
              if ( sub_1932AA2C0(a1: v17, a2: v14, a3: v82, (__int64)a4) == 0 )
              {
                while ( v14 != 0 )
                  MEMORY[0x79AE0](a1: v17, a2: *(_QWORD *)(v14 + 32), a3: v13, a4: v14);
                return sub_1932C8DE0(a1: v17, a2: v14, a3: v13, a4: (unsigned __int64)&v104 ^ v110, a5: v15, a6: v16);
              }
              v83 = *(_DWORD *)(v11 + 24);
              if ( v83 != 0 )
              {
                sub_1932AA3B8(a1: v17, a2: v14, a3: v58, (__int64)a4, a5: v83);
                sub_1932AA44C(a1: v84, a2: v85, a3: v58, (__int64)a4, a5: v56);
              }
              v17 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, _QWORD *, _QWORD))(*a4 + 224LL))(
                      a1: v17,
                      a2: v14,
                      a3: MEMORY[0x337E90],
                      a4,
                      a5: MEMORY[0x337E88]);
              if ( v17 == 0 )
              {
                while ( v14 != 0 )
                  MEMORY[0x79AE0](a1: v17, a2: *(_QWORD *)(v14 + 32), a3: v13, a4: v14);
                return sub_1932C8DE0(a1: v17, a2: v14, a3: v13, a4: (unsigned __int64)&v104 ^ v110, a5: v15, a6: v16);
              }
              (*(void (__fastcall **)(__int64, __int64, __int64, _QWORD *, _QWORD, __int64))(*a4 + 832LL))(
                a1: v17,
                a2: v14,
                a3: v17,
                a4,
                a5: MEMORY[0x337E80],
                a6: v58);
              if ( *(_BYTE *)(v11 + 28) != 0xFF )
                (*(void (__fastcall **)(__int64, __int64, __int64, _QWORD *, _QWORD, _QWORD))(*a4 + 864LL))(
                  a1: v65,
                  a2: v66,
                  a3: v65,
                  a4,
                  a5: MEMORY[0x337E70],
                  a6: *(unsigned __int8 *)(v11 + 28));
            }
            (*(void (__fastcall **)(__int64, __int64, __int64, _QWORD *, _QWORD, __int64))(*a4 + 1392LL))(
              a1: v65,
              a2: v66,
              a3: v108,
              a4,
              a5: v55,
              a6: v58);
            (*(void (__fastcall **)(__int64, __int64, __int64, _QWORD *))(*a4 + 184LL))(a1: v86, a2: v87, a3: v58, a4);
            (*(void (__fastcall **)(__int64, __int64, __int64, _QWORD *, _QWORD, __int64))(*a4 + 1392LL))(
              a1: v88,
              a2: v89,
              a3: v54,
              a4,
              a5: v55,
              a6: v88);
            (*(void (__fastcall **)(__int64, __int64, __int64, _QWORD *))(*a4 + 184LL))(a1: v90, a2: v91, a3: v90, a4);
            v11 = *(_QWORD *)(v11 + 32);
            LODWORD(v105) = ++v55;
            if ( v11 == 0 )
            {
              v53 = v108;
              goto LABEL_81;
            }
          }
        }
        while ( 1 )
        {
          v50 = 6 * v45;
          if ( *(_QWORD *)&a6[12 * v45 + 10] == *(_QWORD *)v105 )
          {
            ++v12;
            v51 = MEMORY[0x79AD0](a1: v45, a2: v44, a3: v43, a4: 40);
            v11 = v51;
            if ( v51 == 0 )
            {
              while ( v48 != 0 )
                MEMORY[0x79AE0](a1: v45, a2: *(_QWORD *)(v48 + 32), a3: v43, a4: v48);
LABEL_37:
              sub_1932B15D0(a1: v45, a2: v48, a3: 538176, a4);
              return sub_1932C8DE0(a1: v17, a2: v14, a3: v13, a4: (unsigned __int64)&v104 ^ v110, a5: v15, a6: v16);
            }
            *(_OWORD *)v51 = *(_OWORD *)&a6[2 * v50 + 2];
            *(_QWORD *)(v51 + 16) = *(_QWORD *)&a6[2 * v50 + 6];
            v52 = a6[2 * v50 + 8];
            *(_QWORD *)(v11 + 32) = v48;
            v44 = v11;
            *(_DWORD *)(v11 + 24) = v52;
            *(_BYTE *)(v11 + 28) = -1;
          }
          v45 = (unsigned int)(v45 + 1);
          if ( (unsigned int)v45 >= *a6 )
            goto LABEL_19;
        }
      }
    }
  }
  return sub_1932C8DE0(a1: v17, a2: v14, a3: v13, a4: (unsigned __int64)&v104 ^ v110, a5: v15, a6: v16);
}
