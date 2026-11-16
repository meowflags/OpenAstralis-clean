// sub_185028580
// rva 0x05028580  size 2495  section .text  group text
// window base 0x185028580: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_185028580(__int64 a1, char *a2, __int64 a3, int a4, __int64 a5, __int64 a6, char a7)
{
  __int64 v7; // rbp
  __int64 v8; // r13
  char *v9; // r14
  __int64 v10; // r15
  unsigned __int64 v11; // rbx
  int v12; // r10d
  __int64 v13; // r11
  __int64 v15; // rcx
  __int64 v16; // rcx
  unsigned int v17; // ebx
  unsigned int v18; // eax
  __int64 v19; // rcx
  __int64 v20; // r11
  __int64 v21; // rcx
  __int64 i; // rbx
  __int64 v23; // rcx
  char *v24; // r11
  __int64 v25; // r11
  __int64 v26; // rcx
  __int64 v27; // rax
  __int64 v28; // rcx
  __int64 v29; // rcx
  unsigned __int64 v30; // r11
  unsigned __int64 v31; // r11
  unsigned int v32; // r11d
  __int64 v33; // r8
  __int64 v34; // rdi
  __int64 v35; // rsi
  __int64 v36; // rcx
  unsigned int v37; // edx
  __int64 v38; // rcx
  unsigned int v39; // edx
  char *v40; // rsi
  __int64 v41; // rcx
  __int64 v42; // rdi
  __int64 v43; // rdx
  __int64 v44; // rdi
  __int64 v45; // rsi
  __int64 result; // rax
  char *v47; // rcx
  __int64 v48; // rsi
  __int64 v49; // rdi
  __int64 v50; // rcx
  unsigned int v51; // edx
  __int64 v52; // rcx
  unsigned int v53; // edx
  __int64 v54; // rax
  char *v55; // rcx
  __int64 v56; // rdi
  __int64 v57; // rcx
  int v58; // eax
  __int64 v59; // rsi
  __int64 v60; // rdi
  __int64 v61; // rcx
  unsigned int v62; // eax
  unsigned int v63; // edx
  __int64 v64; // rbx
  __int64 v65; // rcx
  __int64 v66; // rdx
  int v67; // eax
  unsigned __int64 v68; // rcx
  __int64 v69; // rdi
  __int64 v70; // rsi
  unsigned __int64 v71; // rdx
  int v72; // eax
  __int64 v73; // rdx
  __int64 v74; // [rsp+0h] [rbp-A8h] BYREF
  unsigned __int64 v75; // [rsp+10h] [rbp-98h]
  int v76; // [rsp+1Ch] [rbp-8Ch]
  unsigned __int64 v77; // [rsp+20h] [rbp-88h]
  int v78; // [rsp+2Ch] [rbp-7Ch]
  char *v79; // [rsp+30h] [rbp-78h]
  __int64 v80; // [rsp+38h] [rbp-70h]
  char *v81; // [rsp+40h] [rbp-68h]
  __int64 v82; // [rsp+48h] [rbp-60h]
  __int64 v83; // [rsp+50h] [rbp-58h]
  __int64 v84; // [rsp+58h] [rbp-50h]
  unsigned int v85; // [rsp+60h] [rbp-48h]
  unsigned int v86; // [rsp+64h] [rbp-44h]
  __int64 v87; // [rsp+68h] [rbp-40h]
  __int64 v88; // [rsp+70h] [rbp-38h]
  __int64 v89; // [rsp+78h] [rbp-30h]
  unsigned int v90; // [rsp+84h] [rbp-24h]
  __int64 v91; // [rsp+88h] [rbp-20h]
  int v92; // [rsp+94h] [rbp-14h]
  unsigned int v93; // [rsp+98h] [rbp-10h]
  int v94; // [rsp+9Ch] [rbp-Ch]
  __int64 v95; // [rsp+A0h] [rbp-8h]

  v84 = a5;
  v83 = a6;
  v82 = a1;
  v81 = a2;
  v94 = a4;
  if ( (unsigned __int64)&v74 <= *(_QWORD *)(v10 + 8) )
  {
    v80 = a3;
    MEMORY[0x181EB84E0]();
  }
  else if ( (char *)a5 != v9 )
  {
    if ( (char *)a6 == v9 )
    {
LABEL_59:
      v80 = a3;
      MEMORY[0x182771080]();
      goto LABEL_60;
    }
    v11 = (unsigned int)*(char *)(a6 + 12);
    v7 = *(unsigned int *)(a5 + 4);
    v12 = v11 | *(char *)(a5 + 12);
    if ( (_DWORD)v7 == 0 )
    {
LABEL_60:
      v80 = a3;
      MEMORY[0x182771080]();
      goto LABEL_61;
    }
    v13 = *(unsigned int *)(a6 + 4);
    v7 = (unsigned int)(*(_DWORD *)&v9[8 * v7 + 8] >> *(_BYTE *)(a5 + 12));
    if ( (_DWORD)v13 == 0 )
    {
LABEL_61:
      v80 = a3;
      MEMORY[0x182771080]();
      goto LABEL_62;
    }
    v15 = (unsigned int)v11;
    v7 += (unsigned int)(*(_DWORD *)&v9[8 * v13 + 8] >> *(_BYTE *)(a6 + 12));
    if ( a4 >= 2 )
    {
      if ( (char *)a1 == v9 )
      {
LABEL_73:
        v80 = a3;
        MEMORY[0x182771080]();
        goto LABEL_74;
      }
      v16 = *(unsigned int *)(a1 + 4);
      if ( (_DWORD)v16 == 0 )
      {
LABEL_75:
        v80 = a3;
        MEMORY[0x182771080]();
        goto LABEL_76;
      }
      v17 = *(_DWORD *)&v9[8 * v16 + 8];
      v15 = (unsigned int)*(char *)(a1 + 12);
      v12 |= v15;
      v11 = (unsigned int)(a4 - 1) * (unsigned __int64)(v17 >> *(_BYTE *)(a1 + 12));
      v7 += v11;
    }
    if ( a4 < 1 )
    {
      v93 = 0;
    }
    else
    {
      if ( a2 == v9 )
      {
LABEL_74:
        v80 = a3;
        MEMORY[0x182771080]();
        goto LABEL_75;
      }
      v18 = *((_DWORD *)a2 + 2);
      if ( v18 == 0 )
      {
LABEL_76:
        v80 = a3;
        MEMORY[0x182771220](a1, a2, a3: 0, a4: v15, a5: 0);
        goto LABEL_77;
      }
      v19 = *((unsigned int *)a2 + 3);
      v11 = (unsigned __int64)&v9[8 * v19];
      if ( (_DWORD)v19 == 0 )
      {
LABEL_77:
        v80 = a3;
        MEMORY[0x182771080]();
        goto LABEL_78;
      }
      v20 = *(unsigned int *)&v9[8 * v19 + 4];
      if ( (_DWORD)v20 == 0 )
      {
LABEL_78:
        v80 = a3;
        MEMORY[0x182771080]();
LABEL_79:
        v93 = v39;
        MEMORY[0x182771080]();
        goto LABEL_80;
      }
      v21 = (unsigned int)v9[8 * v19 + 12];
      v12 |= v21;
      v7 += (unsigned int)(*(_DWORD *)&v9[8 * v20 + 8] >> v21);
      for ( i = 1; a4 > (int)i; i = (unsigned int)(i + 1) )
      {
        if ( v18 <= (unsigned int)i )
        {
          v80 = a3;
          MEMORY[0x182771220](a1, a2, a3: (unsigned int)i, a4: v21, a5: v18);
LABEL_95:
          v79 = v24;
          v80 = a3;
          MEMORY[0x182771080]();
LABEL_96:
          v80 = a3;
          MEMORY[0x182771080]();
LABEL_97:
          v62 = MEMORY[0x182771080](a1: v60, a2: v59, a3: v86);
LABEL_98:
          v86 = v63;
          MEMORY[0x182771220](a1: v60, a2: v59, a3: v93, a4: v75, a5: v62);
LABEL_99:
          v77 = v7;
          v86 = v63;
          MEMORY[0x182771080]();
LABEL_100:
          MEMORY[0x182771080](a1: v82, a2: v81, a3: v86, a4: v79, a5: v84, a6: v80);
          JUMPOUT(0x185028F3FLL);
        }
        v23 = *(unsigned int *)&a2[4 * i + 12];
        v24 = &v9[8 * v23];
        if ( (_DWORD)v23 == 0 )
          goto LABEL_95;
        v79 = &v9[8 * v23];
        v25 = *((unsigned int *)v79 + 1);
        if ( (_DWORD)v25 == 0 )
          goto LABEL_96;
        v21 = (unsigned int)v9[8 * v23 + 12];
        v12 |= v21;
        v7 += (unsigned int)(*(_DWORD *)&v9[8 * v25 + 8] >> v21);
      }
      v93 = i;
    }
    v92 = v12;
    v91 = v7;
    v78 = *((_DWORD *)v9 + 93585974);
    v90 = (char)v12;
    v26 = 34082880;
    if ( v7 < 0 )
    {
LABEL_62:
      v89 = v7;
      v88 = v26;
      goto LABEL_63;
    }
    v88 = 34082880;
    v27 = v7 << v12;
    v26 = (unsigned int)(v7 << v12);
    if ( (int)v26 != v7 << v12 )
      goto LABEL_67;
    v28 = HIDWORD(v27);
    v11 = (unsigned int)(v7 << v12) << SBYTE4(v27);
    if ( (v11 & 0x80000000) != 0LL )
    {
      v87 = v7 << v12;
      v72 = v78;
      v80 = a3;
      v73 = *(_QWORD *)(v10 + 40);
      if ( (unsigned __int64)(v73 + 40) > *(_QWORD *)(v10 + 32) )
      {
        v86 = (unsigned int)(v7 << v12) << SBYTE4(v27);
        v85 = (unsigned __int64)(v7 << v12) >> 32;
        v73 = MEMORY[0x181EAA920](a1, a2, a3: v88);
        v72 = v78;
      }
      else
      {
        *(_QWORD *)(v10 + 40) = v73 + 40;
        *(_DWORD *)v73 = 34082880;
        *(_DWORD *)(v73 + 4) = 0;
        *(_QWORD *)(v73 + 8) = 0;
        *(_QWORD *)(v73 + 16) = 0;
        *(_QWORD *)(v73 + 24) = 0;
        *(_QWORD *)(v73 + 32) = 0;
        v86 = (unsigned int)(v7 << v12) << SBYTE4(v27);
        v85 = (unsigned __int64)(v7 << v12) >> 32;
      }
      *(_DWORD *)(v73 + 20) = 46923644;
      *(_DWORD *)(v73 + 16) = v72;
      *(_DWORD *)(v73 + 12) = (unsigned __int64)(v73 - (_QWORD)v9) >> 3;
      v79 = (char *)v73;
      sub_18503B9A0(a1, a2, a3: v73, a4: v28, a5: 0);
      v71 = (unsigned __int64)v79;
      *((_DWORD *)v79 + 2) = 46004603;
      if ( (*(_DWORD *)v71 & 2) != 0 )
      {
        v68 = (v71 & 0xFFFFFFFFFFF80000LL) + 2112;
        if ( *(_BYTE *)((v71 & 0xFFFFFFFFFFF80000LL) + ((v71 - v68) >> 9) + 0x38) != 0 )
          *(_BYTE *)((v71 & 0xFFFFFFFFFFF80000LL) + ((v71 - v68) >> 9) + 0x38) = 0;
      }
      goto LABEL_66;
    }
    v29 = *(_QWORD *)(v10 + 40);
    v7 = *(_QWORD *)(v10 + 32);
    v30 = ((unsigned int)v11 + 19LL) & 0x1FFFFFFF8LL;
    if ( v30 >= 0x20000 || (v31 = v29 + v30) > v7 )
    {
      v87 = v27;
      v80 = a3;
      v29 = MEMORY[0x181EAA840](a1, a2, a3: 34082368, a4: v29, a5: (unsigned int)v11);
      v32 = v90;
      v33 = v84;
    }
    else
    {
      *(_QWORD *)(v10 + 40) = v31;
      *(_QWORD *)v29 = 34082368;
      *(_DWORD *)(v29 + 8) = v11;
      v87 = v27;
      v32 = v90;
      v33 = v84;
      v80 = a3;
    }
    v79 = (char *)v29;
    MEMORY[0x184FF2C40](a1: v32, a2, a3: v33, a4: v29, a5: v29, a6: 0);
    v36 = *(unsigned int *)(v84 + 4);
    if ( (_DWORD)v36 == 0 )
    {
      MEMORY[0x182771080]();
      goto LABEL_73;
    }
    v37 = *(_DWORD *)&v9[8 * v36 + 8];
    v38 = (unsigned int)*(char *)(v84 + 12);
    v39 = v37 >> *(_BYTE *)(v84 + 12);
    if ( v94 < 1 )
      goto LABEL_36;
    v40 = v81;
    if ( v81 == v9 )
      goto LABEL_79;
    if ( *((_DWORD *)v81 + 2) == 0 )
    {
LABEL_80:
      v93 = v39;
      MEMORY[0x182771220](a1: v34, a2: v40, a3: 0, a4: v38, a5: 0);
      goto LABEL_81;
    }
    v85 = *((_DWORD *)v81 + 2);
    v41 = *((unsigned int *)v81 + 3);
    v11 = (unsigned __int64)&v9[8 * v41];
    if ( (_DWORD)v41 == 0 )
    {
LABEL_81:
      v77 = v11;
      v93 = v39;
      MEMORY[0x182771080]();
      goto LABEL_82;
    }
    v76 = *((_DWORD *)v81 + 3);
    v77 = (unsigned __int64)&v9[8 * v41];
    v93 = v39;
    MEMORY[0x184FF2C40](a1: v90, a2: v81, a3: v77, a4: v41, a5: v79, a6: v39);
    v43 = *(unsigned int *)&v9[8 * v76 + 4];
    if ( (_DWORD)v43 == 0 )
    {
LABEL_82:
      MEMORY[0x182771080](a1: v42, a2: v35, a3: v93);
LABEL_83:
      v93 = v39;
      MEMORY[0x182771080]();
      goto LABEL_84;
    }
    v38 = (unsigned int)v9[8 * v76 + 12];
    v39 = v93 + (*(_DWORD *)&v9[8 * v43 + 8] >> v9[8 * v76 + 12]);
    if ( v94 < 2 )
      goto LABEL_36;
    if ( (char *)v82 == v9 )
      goto LABEL_83;
    v93 = v39;
    MEMORY[0x184FF2C40](a1: v90, a2: v35, a3: v82, a4: v38, a5: v79, a6: v39);
    v49 = v82;
    v50 = *(unsigned int *)(v82 + 4);
    if ( (_DWORD)v50 == 0 )
    {
LABEL_84:
      MEMORY[0x182771080](a1: v49, a2: v48, a3: v93);
      goto LABEL_85;
    }
    v51 = *(_DWORD *)&v9[8 * v50 + 8];
    v52 = (unsigned int)*(char *)(v82 + 12);
    v53 = v93 + (v51 >> *(_BYTE *)(v82 + 12));
    if ( v85 < 2 )
    {
LABEL_85:
      v93 = v53;
      MEMORY[0x182771220](a1: v49, a2: v48, a3: 1, a4: v52, a5: 1);
      goto LABEL_86;
    }
    v54 = *((unsigned int *)v81 + 4);
    v55 = &v9[8 * v54];
    if ( (_DWORD)v54 == 0 )
    {
LABEL_86:
      v77 = (unsigned __int64)v55;
      v93 = v53;
      MEMORY[0x182771080]();
      goto LABEL_87;
    }
    v76 = *((_DWORD *)v81 + 4);
    v77 = (unsigned __int64)&v9[8 * v54];
    v93 = v53;
    MEMORY[0x184FF2C40](a1: v90, a2: v81, a3: v55, a4: v55, a5: v79, a6: v53);
    v57 = *(unsigned int *)&v9[8 * v76 + 4];
    if ( (_DWORD)v57 == 0 )
    {
LABEL_87:
      MEMORY[0x182771080](a1: v56, a2: v35, a3: v93, a4: v77);
      while ( 1 )
      {
        v68 = (v71 & 0xFFFFFFFFFFF80000LL) + 2112;
        if ( *(_BYTE *)((v71 & 0xFFFFFFFFFFF80000LL) + ((v71 - v68) >> 9) + 0x38) != 0 )
          *(_BYTE *)((v71 & 0xFFFFFFFFFFF80000LL) + ((v71 - v68) >> 9) + 0x38) = 0;
        do
        {
LABEL_66:
          v27 = MEMORY[0x182769900](a1: v69, a2: v70, a3: v71, a4: v68, a5: &a7);
LABEL_67:
          v89 = v27;
LABEL_63:
          v80 = a3;
          v66 = *(_QWORD *)(v10 + 40);
          if ( (unsigned __int64)(v66 + 40) > *(_QWORD *)(v10 + 32) )
          {
            v66 = MEMORY[0x181EAA920](a1, a2, a3: v88);
          }
          else
          {
            *(_QWORD *)(v10 + 40) = v66 + 40;
            *(_DWORD *)v66 = 34082880;
            *(_DWORD *)(v66 + 4) = 0;
            *(_QWORD *)(v66 + 8) = 0;
            *(_QWORD *)(v66 + 16) = 0;
            *(_QWORD *)(v66 + 24) = 0;
            *(_QWORD *)(v66 + 32) = 0;
          }
          v67 = v78;
          *(_DWORD *)(v66 + 20) = 46923644;
          *(_DWORD *)(v66 + 16) = v67;
          *(_DWORD *)(v66 + 12) = (unsigned __int64)(v66 - (_QWORD)v9) >> 3;
          v79 = (char *)v66;
          sub_18503B9A0(a1, a2, a3: v66, a4: v26, a5: 0);
          v71 = (unsigned __int64)v79;
          *((_DWORD *)v79 + 2) = 45952665;
        }
        while ( (*(_DWORD *)v71 & 2) == 0 );
      }
    }
    v39 = v93 + (*(_DWORD *)&v9[8 * v57 + 8] >> v9[8 * v76 + 12]);
    v95 = v8;
    v75 = v77;
    v58 = 2;
    while ( 1 )
    {
      v38 = (unsigned int)v94;
      v93 = v58;
      if ( v94 <= v58 )
        break;
      v86 = v39;
      MEMORY[0x184FF2C40](a1: v90, a2: v35, a3: v82, a4: (unsigned int)v94, a5: v79, a6: v39);
      v60 = v82;
      v61 = *(unsigned int *)(v82 + 4);
      if ( (_DWORD)v61 == 0 )
        goto LABEL_97;
      v62 = v85;
      v63 = v86 + (*(_DWORD *)&v9[8 * v61 + 8] >> *(_BYTE *)(v82 + 12));
      if ( v85 <= v93 )
        goto LABEL_98;
      v64 = *(unsigned int *)&v81[4 * v93 + 12];
      v7 = (__int64)&v9[8 * v64];
      if ( (_DWORD)v64 == 0 )
        goto LABEL_99;
      v76 = *(_DWORD *)&v81[4 * v93 + 12];
      v77 = (unsigned __int64)&v9[8 * v64];
      v86 = v63;
      MEMORY[0x184FF2C40](a1: v90, a2: v81, a3: v77, a4: v93, a5: v79, a6: v63);
      v65 = *(unsigned int *)&v9[8 * v76 + 4];
      if ( (_DWORD)v65 == 0 )
        goto LABEL_100;
      v39 = v86 + (*(_DWORD *)&v9[8 * v65 + 8] >> v9[8 * v76 + 12]);
      v58 = v93 + 1;
      v95 = v8;
      v75 = v77;
    }
LABEL_36:
    v85 = v39;
    MEMORY[0x184FF2C40](a1: v90, a2: v35, a3: v83, a4: v38, a5: v79, a6: v39);
    result = *(_QWORD *)(v10 + 40);
    if ( (unsigned __int64)(result + 24) > *(_QWORD *)(v10 + 32) )
    {
      result = MEMORY[0x181EAA920](a1: v44, a2: v45, a3: 34082680);
    }
    else
    {
      *(_QWORD *)(v10 + 40) = result + 24;
      *(_DWORD *)result = 34082680;
      *(_DWORD *)(result + 4) = 0;
      *(_QWORD *)(result + 8) = 0;
      *(_QWORD *)(result + 16) = 0;
    }
    v47 = v79;
    *(_BYTE *)(result + 12) = v92;
    *(_DWORD *)(result + 4) = (unsigned __int64)(v47 - v9) >> 3;
    if ( *(int *)(v10 + 16) <= 0 )
      return MEMORY[0x18277F280](a1: v44, a2: v45, a3: v85);
    return result;
  }
  v80 = a3;
  MEMORY[0x182771080]();
  goto LABEL_59;
}
