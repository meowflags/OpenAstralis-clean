// sub_1850483E0
// rva 0x050483e0  size 1298  section .text  group text
// window base 0x1850483e0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1850483E0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        int a8,
        int a9,
        int a10,
        __int64 a11)
{
  __int64 v11; // r13
  __int64 v12; // r14
  __int64 v13; // r15
  __int64 v14; // r8
  __int64 v15; // rdi
  __int64 v16; // rsi
  __int64 v17; // rcx
  __int64 v18; // rdi
  __int64 v19; // rsi
  int v20; // r9d
  __int64 v21; // r8
  __int64 v22; // rax
  __int64 v23; // r8
  __int64 v24; // rcx
  __int64 v25; // rdi
  __int64 v26; // rsi
  __int64 v27; // rcx
  __int64 v28; // rdi
  __int64 v29; // rsi
  __int64 v30; // rdi
  __int64 v31; // rsi
  int v32; // r9d
  __int64 v33; // rax
  __int64 v34; // rdi
  __int64 v35; // rsi
  int v36; // r9d
  __int64 v37; // rax
  __int64 v38; // rcx
  int v39; // ebx
  __int64 v40; // rax
  int v41; // eax
  _DWORD *v42; // rcx
  __int64 v43; // rdi
  __int64 v44; // rsi
  __int64 v45; // rdx
  int v46; // ebx
  __int64 v47; // rcx
  __int64 v48; // rdi
  __int64 v49; // rsi
  __int64 v50; // r8
  __int64 v51; // r9
  int v52; // eax
  __int64 v53; // r8
  __int64 v54; // rdx
  __int64 v55; // rdx
  __int64 v57; // rcx
  __int64 v58; // rcx
  __int64 v59; // rax
  __int64 v60; // rcx
  __int64 v61; // rdi
  __int64 v62; // rsi
  __int64 v63; // rdx
  __int64 v64; // rcx
  __int64 v65; // rdi
  __int64 v66; // rsi
  __int64 v67; // rdx
  __int64 v68; // rdx
  int v69; // edx
  int v70; // edx
  __int64 v71; // r8
  __int64 v72; // rcx
  __int64 v73; // rdi
  __int64 v74; // rsi
  __int64 v75; // rax
  _DWORD *v76; // rcx
  __int64 v77; // rdi
  __int64 v78; // rsi
  __int64 v79; // rdx
  __int64 v80; // rdx
  __int64 v81; // rdx
  int v82; // [rsp+0h] [rbp-58h] BYREF
  __int64 v83; // [rsp+8h] [rbp-50h]
  __int64 v84; // [rsp+10h] [rbp-48h]
  _DWORD *v85; // [rsp+18h] [rbp-40h]
  __int64 i; // [rsp+20h] [rbp-38h]
  __int64 v87; // [rsp+28h] [rbp-30h]
  __int64 v88; // [rsp+30h] [rbp-28h]
  __int64 v89; // [rsp+38h] [rbp-20h]
  int v90; // [rsp+40h] [rbp-18h]
  int v91; // [rsp+44h] [rbp-14h]
  __int64 v92; // [rsp+48h] [rbp-10h]
  __int64 v93; // [rsp+50h] [rbp-8h]

  v89 = a3;
  if ( (unsigned __int64)&v82 <= *(_QWORD *)(v13 + 8) )
  {
    v22 = MEMORY[0x181EB84E0]();
LABEL_61:
    v87 = v22;
    v22 = MEMORY[0x182771080]();
    goto LABEL_62;
  }
  v14 = *(_QWORD *)(v13 + 40);
  if ( (unsigned __int64)(v14 + 24) > *(_QWORD *)(v13 + 32) )
  {
    v14 = MEMORY[0x181EAA920](a1, a2, a3: 34085680);
  }
  else
  {
    *(_QWORD *)(v13 + 40) = v14 + 24;
    *(_DWORD *)v14 = 34085680;
    *(_DWORD *)(v14 + 4) = 0;
    *(_QWORD *)(v14 + 8) = 0;
    *(_QWORD *)(v14 + 16) = 0;
  }
  v88 = v14;
  MEMORY[0x184F35AC0](a1, a2, a3: v14, a4, a5: v12 + 366170816);
  v92 = *(_QWORD *)(v89 + 80);
  MEMORY[0x184F371C0](a1: v15, a2: v16, a3: v88, a4: v92, a5: v92);
  v21 = *(unsigned int *)(v89 + 4);
  v22 = v12 + 8 * v21;
  if ( (_DWORD)v21 == 0 )
    goto LABEL_61;
  v23 = *(unsigned int *)(v12 + 8 * v21 + 4);
  if ( (_DWORD)v23 == 0 )
  {
LABEL_62:
    v87 = v22;
    v75 = MEMORY[0x182771080]();
    goto LABEL_63;
  }
  if ( *(_DWORD *)(v12 + 8 * v23 + 8) == 0 )
    return sub_185048636(a1: v18, a2: v19, a3: v89, a4: v17, a5: v23, a6: v20, a7, a8, a9, a10, a11);
  v87 = v22;
  MEMORY[0x184F36F80](a1: v18, a2: v19, a3: v88, a4: v17, a5: v12 + 372643920);
  MEMORY[0x184F36F80](a1: v25, a2: v26, a3: v88, a4: v24, a5: v87);
  MEMORY[0x184F36F80](a1: v28, a2: v29, a3: v88, a4: v27, a5: v12 + 365345592);
  v33 = *(unsigned int *)(v13 + 72);
  if ( (_DWORD)v33 == 0
    || ((_DWORD)(v57 = *(unsigned int *)(v12 + 8 * v33 + 72)) == 0 ? (v58 = v12 + 8 * v33) : (v58 = v12 + 8 * v57),
        v58 != v89) )
  {
    MEMORY[0x18635F240]();
    v37 = *(unsigned int *)(v89 + 28);
    v38 = v12 + 8 * v37;
    if ( (_DWORD)v37 == 0 )
    {
      i = MEMORY[0x18276BEE0](a1: v34, a2: v35, a3: v89, a4: v38);
      goto LABEL_55;
    }
    v85 = (_DWORD *)(v12 + 8 * v37);
    v39 = *(_DWORD *)(v12 + 8LL * (*v85 >> 3) + 48);
    if ( v39 != 0 )
    {
      v35 = *(unsigned int *)(v38 + v39);
      if ( (_DWORD)v35 != 0 && v13 != *(_QWORD *)(v12 + 376351704) )
      {
        v34 = *(_QWORD *)(v13 + 64);
        v40 = *(_QWORD *)(v12 + 8 * v35 + 16);
        if ( v40 != 0 )
        {
          if ( v40 == v34 )
          {
            v70 = *(_DWORD *)(v12 + 8 * v35 + 28) + 1;
            if ( v70 >= 0 )
            {
              *(_DWORD *)(v12 + 8 * v35 + 28) = v70;
              v92 = v39;
              v91 = v39;
LABEL_15:
              v41 = sub_185044280(
                      a1: v34,
                      a2: v35,
                      a3: v89,
                      a4: v38,
                      a5: v88,
                      a6: v36,
                      a7: v82,
                      a8: v83,
                      a9: v84,
                      a10: (__int64)v85,
                      a11: i,
                      a12: v87);
              if ( v91 != 0 )
              {
                v42 = v85;
                v45 = *(unsigned int *)((char *)v85 + v92);
                v46 = *(_DWORD *)(v12 + 8 * v45 + 28);
                if ( v46 == 1 )
                {
                  *(_QWORD *)(v12 + 8 * v45 + 16) = 0;
                  __faststorefence();
                }
                else
                {
                  *(_DWORD *)(v12 + 8 * v45 + 28) = v46 - 1;
                }
                if ( v46 != 1 )
                {
                  v90 = v41;
LABEL_20:
                  MEMORY[0x186360580]();
                  v52 = v90;
                  goto LABEL_21;
                }
                v67 = *(unsigned int *)(v12 + 8 * v45 + 4);
                if ( (_DWORD)v67 == 0 )
                {
                  v90 = v41;
                  goto LABEL_20;
                }
                v68 = *(unsigned int *)(v12 + 8 * v67 + 8);
                if ( (_DWORD)v68 == 0 )
                {
                  v90 = v41;
                  goto LABEL_20;
                }
                v69 = *(_DWORD *)(v12 + 8 * v68 + 16);
                if ( v69 == 0 )
                {
                  v90 = v41;
                  goto LABEL_20;
                }
                v90 = v41;
                v71 = v69 != 0;
              }
              else
              {
                v71 = 0xFFFFFFFFLL;
                v90 = v41;
              }
              MEMORY[0x18208CCA0](a1: v43, a2: v44, a3: v85, a4: v42, a5: v71);
              goto LABEL_20;
            }
          }
        }
        else if ( __sync_val_compare_and_swap((volatile signed __int64 *)(v12 + 8 * v35 + 16), 0, v34) == 0 )
        {
          v92 = v39;
          v91 = v39;
          goto LABEL_15;
        }
      }
    }
    v92 = v39;
    v91 = v39;
    MEMORY[0x18208CC20](a1: v34, a2: v35, a3: v38);
    goto LABEL_15;
  }
  v52 = sub_185044280(
          a1: v30,
          a2: v31,
          a3: v89,
          a4: v58,
          a5: v88,
          a6: v32,
          a7: v82,
          a8: v83,
          a9: v84,
          a10: (__int64)v85,
          a11: i,
          a12: v87);
LABEL_21:
  if ( v52 == 0 )
  {
    v90 = 0;
    v59 = sub_185047940(a1: v48, a2: v49, a3: v89, a4: v47, a5: v50, a6: v51, a7: v82);
    if ( v59 == v12 )
    {
      MEMORY[0x182771080]();
    }
    else
    {
      v63 = *(unsigned int *)(v59 + 4);
      if ( (_DWORD)v63 != 0 )
      {
        v84 = v12 + 8 * v63;
        v83 = MEMORY[0x184FFDFE0](a1: v61, a2: v62, a3: v84, a4: v60, a5: v12 + 376257808);
        MEMORY[0x184F36F80](a1: v65, a2: v66, a3: v88, a4: v64, a5: v83);
        goto LABEL_23;
      }
    }
    v83 = MEMORY[0x182771080]();
    v76 = v85;
    while ( 1 )
    {
      MEMORY[0x18208CCA0](a1: v77, a2: v78, a3: v76);
      v93 = v11;
      for ( i = v83; ; i = v75 )
      {
        while ( 1 )
        {
LABEL_55:
          while ( 1 )
          {
            MEMORY[0x186360580]();
            v75 = MEMORY[0x182769900](a1: v73, a2: v74, a3: i, a4: v72, a5: &a7);
            v80 = *(unsigned int *)(v12 + 8 * v79 + 4);
            if ( (_DWORD)v80 != 0 )
              break;
            i = v75;
          }
          v81 = *(unsigned int *)(v12 + 8 * v80 + 8);
          if ( (_DWORD)v81 != 0 )
            break;
LABEL_63:
          i = v75;
        }
        if ( *(_DWORD *)(v12 + 8 * v81 + 16) != 0 )
          break;
      }
      v83 = v75;
    }
  }
  v90 = v52;
LABEL_23:
  v53 = v88;
  if ( *(_DWORD *)(v88 + 8) != 0 )
  {
    v54 = *(_QWORD *)(v13 + 40);
    if ( (unsigned __int64)(v54 + 24) > *(_QWORD *)(v13 + 32) )
    {
      v54 = MEMORY[0x181EAA920](a1: v48, a2: v49, a3: 34082680);
      v53 = v88;
    }
    else
    {
      *(_QWORD *)(v13 + 40) = v54 + 24;
      *(_DWORD *)v54 = 34082680;
      *(_DWORD *)(v54 + 4) = 0;
      *(_QWORD *)(v54 + 8) = 0;
      *(_QWORD *)(v54 + 16) = 0;
    }
    v83 = v54;
    MEMORY[0x184FE9280](a1: v48, a2: v49, a3: v54, a4: v53, a5: v53, a6: v12);
    v55 = v83;
  }
  else
  {
    v55 = v12 + 373281248;
  }
  if ( *(int *)(v13 + 16) <= 0 )
    MEMORY[0x18277F280](a1: v48, a2: v49, a3: v55);
  return v55;
}
