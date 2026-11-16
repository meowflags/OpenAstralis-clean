// sub_181ED0380
// rva 0x01ed0380  size 1882  section .text  group text
// window base 0x181ed0380: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_181ED0380(__int64 a1, __int64 a2, __int64 a3, __int64 a4, char *a5, __int64 a6, char a7)
{
  unsigned int v7; // ebx
  __int64 v8; // rbp
  __int64 v9; // r13
  char *v10; // r14
  __int64 v11; // r15
  __int64 v12; // rax
  __int64 (__fastcall *v13)(__int64, __int64, char *); // rcx
  _DWORD *v14; // rcx
  __int64 v15; // rdi
  unsigned int v16; // eax
  __int64 v17; // rdi
  __int64 v18; // rcx
  __int64 v19; // rsi
  __int64 v20; // rdx
  unsigned __int64 v21; // r9
  unsigned __int64 v22; // r9
  __int64 v23; // r8
  __int64 v24; // rcx
  __int64 v25; // rsi
  __int64 v26; // rsi
  __int64 v27; // rcx
  __int64 v28; // rdi
  __int64 v29; // rsi
  __int64 v30; // rdx
  char *v31; // rax
  __int64 v32; // rdi
  __int64 v33; // r8
  unsigned int v34; // eax
  __int64 v35; // rcx
  __int64 v36; // rdi
  __int64 v37; // rsi
  unsigned int v38; // eax
  __int64 v39; // rcx
  __int64 v40; // rdi
  __int64 v41; // rsi
  unsigned int v42; // eax
  __int64 v43; // rcx
  __int64 v44; // rdi
  __int64 v45; // rsi
  unsigned int v46; // eax
  __int64 v47; // rdi
  __int64 v48; // rsi
  __int64 v49; // rcx
  char *v50; // rdx
  unsigned __int64 v51; // r9
  char *v52; // r9
  __int64 v53; // r8
  __int64 v54; // rcx
  unsigned int v55; // eax
  __int64 v56; // rcx
  unsigned int v57; // eax
  __int64 v58; // rcx
  unsigned int v59; // eax
  __int64 v60; // rcx
  unsigned int v61; // eax
  __int64 v62; // rdi
  __int64 v63; // rsi
  __int64 v64; // rdx
  char *v65; // rcx
  __int64 v66; // rsi
  __int64 v68; // rdx
  unsigned __int64 v69; // rcx
  __int64 v70; // rdi
  __int64 v71; // rsi
  unsigned __int64 v72; // rdx
  __int64 v73; // rdx
  char v74; // [rsp+0h] [rbp-98h] BYREF
  char *v75; // [rsp+10h] [rbp-88h]
  char *v76; // [rsp+18h] [rbp-80h]
  __int64 v77; // [rsp+20h] [rbp-78h]
  _DWORD *v78; // [rsp+28h] [rbp-70h]
  __int64 v79; // [rsp+30h] [rbp-68h]
  __int64 v80; // [rsp+38h] [rbp-60h]
  __int64 v81; // [rsp+40h] [rbp-58h]
  char *v82; // [rsp+48h] [rbp-50h]
  __int64 v83; // [rsp+50h] [rbp-48h]
  __int64 v84; // [rsp+58h] [rbp-40h]
  __int64 v85; // [rsp+60h] [rbp-38h]
  unsigned int v86; // [rsp+6Ch] [rbp-2Ch]
  unsigned int v87; // [rsp+70h] [rbp-28h]
  unsigned int v88; // [rsp+74h] [rbp-24h]
  __int64 v89; // [rsp+78h] [rbp-20h]
  __int64 v90; // [rsp+80h] [rbp-18h]
  __int64 v91; // [rsp+88h] [rbp-10h]
  BOOL v92; // [rsp+94h] [rbp-4h]

  v85 = a3;
  v84 = a6;
  if ( (unsigned __int64)&v74 <= *(_QWORD *)(v11 + 8) )
  {
    v83 = a1;
    v82 = a5;
    v46 = sub_181EB84E0(a1, a2, a3, a4, (__int64)a5, a6, a7: v74);
    goto LABEL_45;
  }
  if ( (char *)a6 == v10 )
  {
    v92 = false;
  }
  else
  {
    v12 = *(unsigned int *)(a6 + 4);
    if ( (_DWORD)v12 == 0 )
      goto LABEL_49;
    v92 = *(_DWORD *)&v10[8 * v12 + 8] != 0;
  }
  v83 = a1;
  if ( a5 == v10 )
  {
    v82 = a5;
    v81 = (__int64)(v10 + 364828328);
  }
  else
  {
    v13 = (__int64 (__fastcall *)(__int64, __int64, char *))(v9 + *(_QWORD *)&v10[8 * (*(_DWORD *)a5 >> 3) + 288]);
    v82 = a5;
    v81 = v13(a1, a2, a3: a5);
  }
  v80 = MEMORY[0x184FF4BA0](a1, a2, a3: v10 + 372643920, a4, a5: v83);
  v14 = v10 + 373281248;
  v91 = 34082368;
  if ( v92 )
  {
    if ( (char *)v84 == v10 )
      v15 = (__int64)(v10 + 353301280);
    else
      v15 = v84;
    v79 = (__int64)(v10 + 353301280);
    v90 = 34082880;
    v89 = 34082680;
    v78 = v10 + 373281248;
    v77 = v15;
    v16 = MEMORY[0x1850132E0](a1: v15, a2: v92, a3: 10, a4: v14, a5: v15);
    v17 = v77;
    LODWORD(v8) = *(char *)(v77 + 12);
    v18 = (unsigned int)v8;
    v19 = v16 << *(_BYTE *)(v77 + 12);
    if ( (int)v19 < 0 )
      goto LABEL_50;
    v86 = *(char *)(v77 + 12);
    v20 = *(_QWORD *)(v11 + 40);
    v21 = ((unsigned int)v19 + 19LL) & 0x1FFFFFFF8LL;
    if ( v21 >= 0x20000 || (v22 = v20 + v21) > *(_QWORD *)(v11 + 32) )
    {
      v88 = v8;
      v87 = v16;
      v20 = sub_181EAA840(a1: v77, a2: v19, a3: v91, a4: (unsigned int)v8, a5: v19);
      LODWORD(v8) = v88;
    }
    else
    {
      v23 = v91;
      *(_QWORD *)(v11 + 40) = v22;
      *(_QWORD *)v20 = v23;
      *(_DWORD *)(v20 + 8) = v19;
      v87 = v16;
    }
    v76 = (char *)v20;
    v88 = v8;
    MEMORY[0x184FF2C40](a1: (unsigned int)v8, a2: v19, a3: v10 + 58179584, a4: v20, a5: v20, a6: 0);
    MEMORY[0x184FF2C40](a1: v88, a2: v25, a3: v77, a4: v24, a5: v76, a6: 9);
    v27 = *(unsigned int *)(v77 + 4);
    if ( (_DWORD)v27 == 0 )
    {
      MEMORY[0x182771080](a1: v77, a2: v26, a3: v76);
LABEL_55:
      v69 = (v72 & 0xFFFFFFFFFFF80000LL) + 2112;
      if ( *(_BYTE *)((v72 & 0xFFFFFFFFFFF80000LL) + ((v72 - v69) >> 9) + 0x38) != 0 )
        *(_BYTE *)((v72 & 0xFFFFFFFFFFF80000LL) + ((v72 - v69) >> 9) + 0x38) = 0;
      while ( 1 )
      {
LABEL_48:
        MEMORY[0x182769900](a1: v70, a2: v71, a3: v72, a4: v69, a5: &a7);
LABEL_49:
        v83 = a1;
        v82 = a5;
        v16 = MEMORY[0x182771080]();
LABEL_50:
        v88 = v8;
        v87 = v16;
        v73 = *(_QWORD *)(v11 + 40);
        if ( (unsigned __int64)(v73 + 40) > *(_QWORD *)(v11 + 32) )
        {
          v86 = v19;
          v73 = sub_181EAA920(a1: v17, a2: v19, a3: v90);
        }
        else
        {
          *(_QWORD *)(v11 + 40) = v73 + 40;
          *(_DWORD *)v73 = 34082880;
          *(_DWORD *)(v73 + 4) = 0;
          *(_QWORD *)(v73 + 8) = 0;
          *(_QWORD *)(v73 + 16) = 0;
          *(_QWORD *)(v73 + 24) = 0;
          *(_QWORD *)(v73 + 32) = 0;
          v86 = v19;
        }
        *(_DWORD *)(v73 + 20) = 46923644;
        *(_DWORD *)(v73 + 16) = *((_DWORD *)v10 + 93585974);
        *(_DWORD *)(v73 + 12) = (unsigned __int64)(v73 - (_QWORD)v10) >> 3;
        v76 = (char *)v73;
        MEMORY[0x18503B9A0](a1: v17, a2: v19, a3: v73, a4: v18, a5: 0);
        v72 = (unsigned __int64)v76;
        *((_DWORD *)v76 + 2) = 46004603;
        if ( (*(_DWORD *)v72 & 2) != 0 )
        {
          v69 = (v72 & 0xFFFFFFFFFFF80000LL) + 2112;
          if ( *(_BYTE *)((v72 & 0xFFFFFFFFFFF80000LL) + ((v72 - v69) >> 9) + 0x38) != 0 )
            *(_BYTE *)((v72 & 0xFFFFFFFFFFF80000LL) + ((v72 - v69) >> 9) + 0x38) = 0;
        }
      }
    }
    MEMORY[0x184FF2C40](
      a1: v88,
      a2: v26,
      a3: v10 + 58179608,
      a4: (unsigned int)*(char *)(v77 + 12),
      a5: v76,
      a6: (unsigned int)((*(_DWORD *)&v10[8 * v27 + 8] >> *(_BYTE *)(v77 + 12)) + 9));
    v30 = *(_QWORD *)(v11 + 40);
    if ( (unsigned __int64)(v30 + 24) > *(_QWORD *)(v11 + 32) )
    {
      v30 = sub_181EAA920(a1: v28, a2: v29, a3: v89);
    }
    else
    {
      *(_QWORD *)(v11 + 40) = v30 + 24;
      *(_DWORD *)v30 = 34082680;
      *(_DWORD *)(v30 + 4) = 0;
      *(_QWORD *)(v30 + 8) = 0;
      *(_QWORD *)(v30 + 16) = 0;
    }
    v31 = v76;
    *(_BYTE *)(v30 + 12) = v86;
    *(_DWORD *)(v30 + 4) = (unsigned __int64)(v31 - v10) >> 3;
    v32 = v30;
  }
  else
  {
    v32 = (__int64)(v10 + 373281248);
    v79 = (__int64)(v10 + 353301280);
    v90 = 34082880;
    v89 = 34082680;
    v78 = v10 + 373281248;
  }
  if ( (char *)v85 == v10 )
    v8 = v79;
  else
    v8 = v85;
  if ( (char *)v81 == v10 )
    v33 = v79;
  else
    v33 = v81;
  v86 = *(char *)(v32 + 12) | *(char *)(v33 + 12) | *(char *)(v8 + 12) | *(char *)(v80 + 12);
  v79 = v33;
  v76 = (char *)v32;
  v77 = v8;
  v34 = MEMORY[0x1850132E0](a1: v32, a2: v86, a3: 17, a4: v14, a5: v80);
  v38 = MEMORY[0x1850132E0](a1: v36, a2: v37, a3: v34, a4: v35, a5: v77);
  v42 = MEMORY[0x1850132E0](a1: v40, a2: v41, a3: v38, a4: v39, a5: v79);
  v46 = MEMORY[0x1850132E0](a1: v44, a2: v45, a3: v42, a4: v43, a5: v76);
  v49 = v86;
  v7 = v46 << v86;
  if ( ((v46 << v86) & 0x80000000) != 0 )
  {
LABEL_45:
    v88 = v46;
    v68 = *(_QWORD *)(v11 + 40);
    if ( (unsigned __int64)(v68 + 40) > *(_QWORD *)(v11 + 32) )
    {
      v87 = v7;
      v68 = sub_181EAA920(a1: v47, a2: v48, a3: v90);
    }
    else
    {
      *(_QWORD *)(v11 + 40) = v68 + 40;
      *(_DWORD *)v68 = 34082880;
      *(_DWORD *)(v68 + 4) = 0;
      *(_QWORD *)(v68 + 8) = 0;
      *(_QWORD *)(v68 + 16) = 0;
      *(_QWORD *)(v68 + 24) = 0;
      *(_QWORD *)(v68 + 32) = 0;
      v87 = v7;
    }
    *(_DWORD *)(v68 + 20) = 46923644;
    *(_DWORD *)(v68 + 16) = *((_DWORD *)v10 + 93585974);
    *(_DWORD *)(v68 + 12) = (unsigned __int64)(v68 - (_QWORD)v10) >> 3;
    v75 = (char *)v68;
    MEMORY[0x18503B9A0](a1: v47, a2: v48, a3: v68, a4: v49, a5: 0);
    v72 = (unsigned __int64)v75;
    *((_DWORD *)v75 + 2) = 46004603;
    if ( (*(_DWORD *)v72 & 2) == 0 )
      goto LABEL_48;
    goto LABEL_55;
  }
  v50 = *(char **)(v11 + 40);
  v51 = (v7 + 19LL) & 0x1FFFFFFF8LL;
  if ( v51 >= 0x20000 || (unsigned __int64)(v52 = &v50[v51]) > *(_QWORD *)(v11 + 32) )
  {
    v88 = v46;
    v50 = (char *)sub_181EAA840(a1: v47, a2: v48, a3: v91, a4: v86, a5: v7);
    v46 = v88;
  }
  else
  {
    v53 = v91;
    *(_QWORD *)(v11 + 40) = v52;
    *(_QWORD *)v50 = v53;
    *((_DWORD *)v50 + 2) = v7;
  }
  v75 = v50;
  v88 = v46;
  if ( v86 != 0 )
    MEMORY[0x184FF2C40](a1: 1, a2: v86, a3: v78, a4: v50, a5: v50, a6: v46);
  else
    sub_181EB4960(a1: v46, a2: 0, a3: (_DWORD *)v10 + 94087886, a4: v49, a5: 0, a6: v75, a7: v74);
  v55 = MEMORY[0x185011A80](a1: v76, a2: v78, a3: v88, a4: v54, a5: v86, a6: v75);
  v57 = MEMORY[0x185011A80](a1: v79, a2: v10 + 58179632, a3: v55, a4: v56, a5: v86, a6: v75);
  v59 = MEMORY[0x185011A80](a1: v77, a2: v10 + 58179656, a3: v57, a4: v58, a5: v86, a6: v75);
  v61 = MEMORY[0x185011A80](a1: v80, a2: v10 + 58179680, a3: v59, a4: v60, a5: v86, a6: v75);
  v64 = *(_QWORD *)(v11 + 40);
  if ( (unsigned __int64)(v64 + 24) > *(_QWORD *)(v11 + 32) )
  {
    v87 = v61;
    v64 = sub_181EAA920(a1: v62, a2: v63, a3: v89);
  }
  else
  {
    *(_QWORD *)(v11 + 40) = v64 + 24;
    *(_DWORD *)v64 = 34082680;
    *(_DWORD *)(v64 + 4) = 0;
    *(_QWORD *)(v64 + 8) = 0;
    *(_QWORD *)(v64 + 16) = 0;
  }
  v65 = v75;
  v66 = v86;
  *(_BYTE *)(v64 + 12) = v86;
  *(_DWORD *)(v64 + 4) = (unsigned __int64)(v65 - v10) >> 3;
  if ( *(int *)(v11 + 16) <= 0 )
    MEMORY[0x18277F280](a1: v62, a2: v66, a3: v64, a4: v65, a5: v65);
  return v64;
}
