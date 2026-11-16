// sub_15A59A0
// rva 0x015a59a0  size 1169  section .text  group text
// window base 0x1815a59a0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_15A59A0(
        __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        int a8,
        int a9,
        __int64 a10,
        int a11,
        int a12,
        int a13,
        int a14,
        int a15,
        __int64 a16)
{
  _DWORD *v16; // r14
  __int64 v17; // r15
  _DWORD *v18; // rax
  unsigned int v19; // ecx
  __int64 v20; // rcx
  __int64 v21; // rdi
  __int64 v22; // rsi
  unsigned int *v23; // rdx
  __int64 v24; // r8
  _DWORD *v25; // rax
  __int64 v26; // rcx
  __int64 v27; // rbx
  int v28; // r9d
  __int64 v29; // rbp
  _DWORD *v30; // rsi
  unsigned __int64 v31; // rdi
  _DWORD *v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // rbx
  _DWORD *v36; // rax
  __int64 v37; // rcx
  _DWORD *v38; // r9
  __int64 v39; // rsi
  unsigned __int64 v40; // r8
  __int64 v41; // rdi
  unsigned int v42; // edx
  __int64 v43; // rcx
  __int64 v44; // rbx
  unsigned __int64 v45; // rax
  unsigned int *v46; // rdx
  int v47; // r8d
  __int64 result; // rax
  unsigned __int64 v49; // rsi
  __int64 v50; // rdi
  unsigned __int64 v51; // rbx
  unsigned __int64 v52; // rbp
  unsigned __int64 v53; // rcx
  char *v54; // rdx
  unsigned __int64 v55; // rbp
  unsigned __int64 v56; // rbx
  char v57; // [rsp+0h] [rbp-68h] BYREF
  _DWORD *v58; // [rsp+8h] [rbp-60h]
  _DWORD *v59; // [rsp+10h] [rbp-58h]
  unsigned int v60; // [rsp+1Ch] [rbp-4Ch]
  _DWORD *v61; // [rsp+20h] [rbp-48h]
  unsigned int v62; // [rsp+2Ch] [rbp-3Ch]
  _DWORD *v63; // [rsp+30h] [rbp-38h]
  __int64 v64; // [rsp+38h] [rbp-30h]
  _DWORD *v65; // [rsp+40h] [rbp-28h]
  __int64 v66; // [rsp+48h] [rbp-20h]
  unsigned int *v67; // [rsp+50h] [rbp-18h]
  int v68; // [rsp+5Ch] [rbp-Ch]
  unsigned int v69; // [rsp+60h] [rbp-8h]
  unsigned int v70; // [rsp+64h] [rbp-4h]

  v67 = (unsigned int *)a3;
  v66 = a6;
  if ( (unsigned __int64)&v57 <= *(_QWORD *)(v17 + 8) )
  {
    v64 = a5;
    sub_1EB84E0();
LABEL_51:
    sub_2771080();
    goto LABEL_52;
  }
  if ( (_DWORD *)a5 == v16 )
    v18 = v16 + 94153502;
  else
    v18 = (_DWORD *)a5;
  v65 = v18;
  v19 = *(_DWORD *)((char *)v18 + (int)v16[2 * (*v18 >> 3) + 13]);
  v64 = a5;
  if ( v19 == 0 )
  {
    v19 = sub_1ED7320(a1, a2, a3: v65);
    a3 = (__int64)v67;
  }
  v20 = ((v19 ^ (v19 >> 12) ^ (v19 >> 20)) >> 4)
      ^ v19
      ^ (v19 >> 12)
      ^ (v19 >> 20)
      ^ ((v19 ^ (v19 >> 12) ^ (v19 >> 20)) >> 7);
  v70 = v20;
  sub_15A4C20(a1, a2, a3, a4: v20, a5, a6, a7: v57);
  v23 = v67;
  v24 = v67[3];
  v25 = &v16[2 * v24];
  v63 = v25;
  if ( (_DWORD)v24 == 0 )
    goto LABEL_51;
  v26 = (unsigned int)v16[2 * v24 + 2];
  LODWORD(v24) = v16[2 * v24 + 2] - 1;
  v27 = (unsigned int)v24 & v70;
  v69 = v27;
  if ( (unsigned int)v26 <= (unsigned int)v27 )
  {
LABEL_52:
    sub_2771220(a1: v21, a2: v22, a3: v69, a4: v26, a5: (unsigned int)v26);
    goto LABEL_53;
  }
  v28 = v66;
  v29 = (unsigned int)v25[v27 + 3];
  v30 = &v16[2 * v29];
  v31 = (unsigned __int64)(v66 - (_QWORD)v16) >> 3;
  v62 = v31;
  if ( (_DWORD)v29 == 0 )
  {
    v61 = &v16[2 * v29];
    v68 = v26;
    ++v67[11];
    v34 = *(_QWORD *)(v17 + 40);
    if ( (unsigned __int64)(v34 + 40) > *(_QWORD *)(v17 + 32) )
    {
      v34 = sub_1EAA920(a1: v31, a2: v30, a3: 35800544);
      v35 = v69;
      v36 = v63;
      v23 = v67;
    }
    else
    {
      *(_QWORD *)(v17 + 40) = v34 + 40;
      *(_DWORD *)v34 = 35800544;
      *(_DWORD *)(v34 + 4) = 0;
      *(_QWORD *)(v34 + 8) = 0;
      *(_QWORD *)(v34 + 16) = 0;
      *(_QWORD *)(v34 + 24) = 0;
      *(_QWORD *)(v34 + 32) = 0;
      v35 = v69;
      v36 = v63;
    }
    v37 = (unsigned int)v36[v35 + 3];
    v38 = &v16[2 * v23[4]];
    v61 = (_DWORD *)v34;
    v59 = &v16[2 * v37];
    v58 = v38;
    v60 = v37;
    sub_53F1120(a1: v31, a2: v30, a3: v34, a4: v37, a5: v65);
    v40 = (unsigned __int64)v61;
    v41 = v62;
    v61[5] = v62;
    if ( (*(_DWORD *)v40 & 2) != 0 )
    {
      v53 = (v40 & 0xFFFFFFFFFFF80000LL) + 2112;
      if ( *(_BYTE *)((v40 & 0xFFFFFFFFFFF80000LL) + ((v40 - v53) >> 9) + 0x38) != 0 )
        *(_BYTE *)((v40 & 0xFFFFFFFFFFF80000LL) + ((v40 - v53) >> 9) + 0x38) = 0;
    }
    v42 = v60;
    v43 = v70;
    *(_DWORD *)(v40 + 28) = v70;
    *(_DWORD *)(v40 + 24) = v42;
    if ( (*(_DWORD *)v40 & 2) != 0 )
    {
      v51 = (v40 & 0xFFFFFFFFFFF80000LL) + 2112;
      if ( *(_BYTE *)((v40 & 0xFFFFFFFFFFF80000LL) + ((v40 - v51) >> 9) + 0x38) != 0 )
        *(_BYTE *)((v40 & 0xFFFFFFFFFFF80000LL) + ((v40 - v51) >> 9) + 0x38) = 0;
    }
    v44 = v69;
    v45 = (unsigned __int64)v63;
    v63[v69 + 3] = (v40 - (unsigned __int64)v16) >> 3;
    if ( (*(_DWORD *)v45 & 2) != 0 )
    {
      if ( (*(_DWORD *)v45 & 1) != 0 )
      {
        v54 = (char *)(v45 - *(_QWORD *)(v45 - 8));
        v55 = (unsigned __int64)(4 * v44 + 12) >> 9;
        if ( v54[v55 + 48] != 0 )
          v54[v55 + 48] = 0;
      }
      else
      {
        v52 = (v45 & 0xFFFFFFFFFFF80000LL) + 2112;
        if ( *(_BYTE *)((v45 & 0xFFFFFFFFFFF80000LL) + ((v45 - v52) >> 9) + 0x38) != 0 )
          *(_BYTE *)((v45 & 0xFFFFFFFFFFF80000LL) + ((v45 - v52) >> 9) + 0x38) = 0;
      }
    }
    v46 = v67;
    v47 = v67[9] + 1;
    v67[9] = v47;
    if ( v47 >= (int)v46[10] )
      sub_15A7080(a1: v41, a2: v39, a3: v46, a4: v43, a5: (unsigned int)(2 * v68));
    if ( *(int *)(v17 + 16) <= 0 )
      sub_277F280();
    return (__int64)v16;
  }
  if ( v70 != v16[2 * v29 + 7] )
  {
    v68 = v26;
    goto LABEL_11;
  }
  v60 = v29;
  v68 = v26;
  v59 = &v16[2 * v29];
  if ( (unsigned int)sub_1EBE3A0(a1: v31, a2: v30, a3: v59, a4: v26, a5: v65) != 0 )
  {
LABEL_31:
    v49 = (unsigned __int64)v59;
    v50 = v62;
    if ( v59 != v16 )
    {
      result = (__int64)&v16[2 * v59[5]];
      if ( result != v66 )
      {
        v59[5] = v62;
        if ( (*(_DWORD *)v49 & 2) != 0 )
        {
          v56 = (v49 & 0xFFFFFFFFFFF80000LL) + 2112;
          if ( *(_BYTE *)((v49 & 0xFFFFFFFFFFF80000LL) + ((v49 - v56) >> 9) + 0x38) != 0 )
            *(_BYTE *)((v49 & 0xFFFFFFFFFFF80000LL) + ((v49 - v56) >> 9) + 0x38) = 0;
        }
      }
      if ( *(int *)(v17 + 16) <= 0 )
        return sub_277F280(a1: v50);
      return result;
    }
LABEL_53:
    sub_2771080(a1: v50, a2: v49, a3: v67, a4: v70, a5: v64, a6: v66);
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    return sub_15A5E40();
  }
  v29 = v60;
LABEL_11:
  v32 = &v16[2 * v16[2 * v29 + 6]];
  while ( 1 )
  {
    v33 = v70;
    if ( v32 == v16 )
      return sub_1815A5C18(
               a1: v31,
               a2: (_DWORD)v30,
               a3: (_DWORD)v32,
               a4: v70,
               a5: v24,
               a6: v28,
               a7,
               a8,
               a9,
               a10,
               a11,
               a12,
               a13,
               a14,
               a15,
               a16);
    if ( v70 == v32[7] )
    {
      v59 = v32;
      if ( (unsigned int)sub_1EBE3A0(a1: v31, a2: v30, a3: v32, a4: v70, a5: v65) != 0 )
        goto LABEL_31;
      v32 = v59;
    }
    v24 = (__int64)&v16[2 * v32[6]];
    if ( *(int *)(v17 + 16) <= 0 )
    {
      sub_277F280(a1: v31, a2: v30, a3: v32, a4: v33, a5: v24);
      v32 = (_DWORD *)v24;
    }
    else
    {
      v32 = &v16[2 * v32[6]];
    }
  }
}
