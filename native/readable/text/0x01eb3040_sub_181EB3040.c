// sub_1EB3040
// rva 0x01eb3040  size 1715  section .text  group text
// window base 0x181eb3040: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1EB3040(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        __int64 a9,
        int a10,
        __int64 a11,
        int a12,
        int a13,
        __int64 a14,
        int a15,
        __int64 a16)
{
  __int64 v16; // rbp
  __int64 v17; // r14
  __int64 v18; // r15
  __int64 v19; // r8
  __int64 v20; // r8
  _DWORD *v21; // rcx
  __int64 v22; // rdx
  _DWORD *v23; // rax
  unsigned int v24; // edx
  __int64 v25; // rsi
  __int64 v26; // rdi
  __int64 v27; // rcx
  int v28; // r9d
  signed int v29; // r9d
  __int64 v30; // rdx
  unsigned __int64 v31; // rdi
  __int64 v32; // rcx
  __int64 v33; // rsi
  __int64 v34; // rdi
  char v35; // si
  unsigned int v36; // ecx
  _DWORD *v37; // rdx
  char v38; // al
  __int64 v39; // rbx
  signed int v41; // eax
  __int64 v42; // rcx
  __int64 v43; // rdi
  __int64 v44; // rsi
  __int64 v45; // rdx
  unsigned __int64 v46; // r9
  unsigned __int64 v47; // r9
  __int64 v48; // rbx
  __int64 v49; // rcx
  int v50; // eax
  __int64 v51; // rdi
  __int64 v52; // rsi
  __int64 v53; // rcx
  __int64 v54; // rdx
  unsigned __int64 v55; // rcx
  __int64 v56; // rdi
  __int64 v57; // rsi
  unsigned __int64 v58; // rdx
  __int64 v59; // rdx
  __int64 v60; // rdx
  char v61; // [rsp+0h] [rbp-58h] BYREF
  _DWORD *v62; // [rsp+8h] [rbp-50h]
  unsigned int v63; // [rsp+14h] [rbp-44h]
  __int64 v64; // [rsp+18h] [rbp-40h]
  _DWORD *v65; // [rsp+20h] [rbp-38h]
  __int64 v66; // [rsp+28h] [rbp-30h]
  int v67; // [rsp+34h] [rbp-24h]
  unsigned int v68; // [rsp+38h] [rbp-20h]
  unsigned int v69; // [rsp+3Ch] [rbp-1Ch]
  __int64 v70; // [rsp+40h] [rbp-18h]
  __int64 v71; // [rsp+48h] [rbp-10h]
  __int64 v72; // [rsp+50h] [rbp-8h]

  if ( (unsigned __int64)&v61 <= *(_QWORD *)(v18 + 8) )
  {
    v66 = a3;
    sub_1EB84E0(a1, a2, a3, a4, a5, a6, a7: v61);
LABEL_34:
    v65 = v21;
    v64 = v16;
    v41 = sub_2771080();
LABEL_35:
    v68 = v41;
    v54 = *(_QWORD *)(v18 + 40);
    if ( (unsigned __int64)(v54 + 40) > *(_QWORD *)(v18 + 32) )
    {
      v54 = sub_1EAA920(a1: v43, a2: v44, a3: v72);
    }
    else
    {
      *(_QWORD *)(v18 + 40) = v54 + 40;
      *(_DWORD *)v54 = 34082880;
      *(_DWORD *)(v54 + 4) = 0;
      *(_QWORD *)(v54 + 8) = 0;
      *(_QWORD *)(v54 + 16) = 0;
      *(_QWORD *)(v54 + 24) = 0;
      *(_QWORD *)(v54 + 32) = 0;
    }
    *(_DWORD *)(v54 + 20) = 46923644;
    *(_DWORD *)(v54 + 16) = *(_DWORD *)(v17 + 374343896);
    *(_DWORD *)(v54 + 12) = (unsigned __int64)(v54 - v17) >> 3;
    v65 = (_DWORD *)v54;
    sub_503B9A0(a1: v43, a2: v44, a3: v54, a4: v42, a5: 0);
    v58 = (unsigned __int64)v65;
    v65[2] = 46004603;
    if ( (*(_DWORD *)v58 & 2) != 0 )
    {
      v55 = (v58 & 0xFFFFFFFFFFF80000LL) + 2112;
      if ( *(_BYTE *)((v58 & 0xFFFFFFFFFFF80000LL) + ((v58 - v55) >> 9) + 0x38) != 0 )
        *(_BYTE *)((v58 & 0xFFFFFFFFFFF80000LL) + ((v58 - v55) >> 9) + 0x38) = 0;
    }
    goto LABEL_38;
  }
  v19 = *(unsigned int *)(a3 + 4);
  if ( (_DWORD)v19 != 0 )
  {
    v20 = *(unsigned int *)(v17 + 8 * v19 + 4);
    v16 = v17 + 8 * v20;
    if ( (_DWORD)v20 == 0 )
      return sub_181EB32FE(a1, a2, a3, a4: 34082368, a5: 0, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16);
    v72 = 34082880;
    v70 = 34082680;
    v66 = a3;
    v21 = (_DWORD *)(v17 + 8 * v20);
    v22 = *(unsigned int *)(v16 + 4);
    v23 = (_DWORD *)(v17 + 58178192);
    if ( (_DWORD)v22 != 0 )
    {
      v24 = *(_DWORD *)(v17 + 8 * v22 + 8);
      if ( v24 == 0 )
        return sub_181EB3338(a1, a2, a3: 0, a4: (_DWORD)v21, a5: v20, a6, a7, a8, a9);
      v25 = (unsigned int)*(char *)(v16 + 12);
      v26 = *(unsigned int *)(v17 + 374343896);
      v65 = (_DWORD *)(v17 + 8 * v20);
      v27 = (unsigned int)v25;
      v28 = (v24 >> v25) + 2;
      if ( v28 < 0 )
        goto LABEL_39;
      v29 = v28 << v25;
      if ( v29 >= 0 )
      {
        v30 = *(_QWORD *)(v18 + 40);
        v31 = ((unsigned int)v29 + 19LL) & 0x1FFFFFFF8LL;
        if ( v31 >= 0x20000 || (v31 += v30, v31 > *(_QWORD *)(v18 + 32)) )
        {
          v69 = v29;
          v68 = v25;
          v62 = (_DWORD *)(v17 + 58178192);
          v64 = v17 + 8 * v20;
          v30 = sub_1EAA840(a1: v31, a2: v25, a3: 34082368, a4: (unsigned int)v25, a5: v29);
          v25 = v68;
          v23 = v62;
        }
        else
        {
          *(_QWORD *)(v18 + 40) = v31;
          *(_QWORD *)v30 = 34082368;
          *(_DWORD *)(v30 + 8) = v29;
          v69 = v29;
          v64 = v17 + 8 * v20;
        }
        v68 = v25;
        v62 = (_DWORD *)v30;
        sub_4FF2C40(a1: (unsigned int)v25, a2: v25, a3: v23, a4: v27, a5: v30, a6: 0);
        sub_4FF2C40(a1: v68, a2: v33, a3: v65, a4: v32, a5: v62, a6: 2);
        v35 = v68;
        v36 = 0;
        v37 = v62;
        v38 = 0;
        v39 = *(_QWORD *)(v18 + 40);
        if ( (unsigned __int64)(v39 + 24) > *(_QWORD *)(v18 + 32) )
        {
          v69 = 0;
          v67 = 0;
          v39 = sub_1EAA920(a1: v34, a2: v68, a3: v70);
          v35 = v68;
          v36 = v69;
          v37 = v62;
          v38 = v67;
        }
        else
        {
          *(_QWORD *)(v18 + 40) = v39 + 24;
          *(_DWORD *)v39 = 34082680;
          *(_DWORD *)(v39 + 4) = 0;
          *(_QWORD *)(v39 + 8) = 0;
          *(_QWORD *)(v39 + 16) = 0;
        }
        *(_BYTE *)(v39 + 13) = v38;
        *(_BYTE *)(v39 + 12) = v35;
        *(_DWORD *)(v39 + 8) = v36;
        *(_DWORD *)(v39 + 4) = ((unsigned __int64)v37 - v17) >> 3;
        if ( *(int *)(v18 + 16) <= 0 )
          sub_277F280();
        return v39;
      }
      v69 = v29;
      v68 = v25;
      v64 = v17 + 8 * v20;
      v60 = *(_QWORD *)(v18 + 40);
      if ( (unsigned __int64)(v60 + 40) > *(_QWORD *)(v18 + 32) )
      {
        v63 = v26;
        v60 = sub_1EAA920(a1: v26, a2: v25, a3: v72);
        v26 = v63;
      }
      else
      {
        *(_QWORD *)(v18 + 40) = v60 + 40;
        *(_DWORD *)v60 = 34082880;
        *(_DWORD *)(v60 + 4) = 0;
        *(_QWORD *)(v60 + 8) = 0;
        *(_QWORD *)(v60 + 16) = 0;
        *(_QWORD *)(v60 + 24) = 0;
        *(_QWORD *)(v60 + 32) = 0;
      }
      *(_DWORD *)(v60 + 20) = 46923644;
      *(_DWORD *)(v60 + 16) = v26;
      *(_DWORD *)(v60 + 12) = (unsigned __int64)(v60 - v17) >> 3;
      v62 = (_DWORD *)v60;
      sub_503B9A0(a1: v26, a2: v25, a3: v60, a4: v27, a5: 0);
      v58 = (unsigned __int64)v62;
      v62[2] = 46004603;
      if ( (*(_DWORD *)v58 & 2) != 0 )
      {
        v55 = (v58 & 0xFFFFFFFFFFF80000LL) + 2112;
        if ( *(_BYTE *)((v58 & 0xFFFFFFFFFFF80000LL) + ((v58 - v55) >> 9) + 0x38) != 0 )
          *(_BYTE *)((v58 & 0xFFFFFFFFFFF80000LL) + ((v58 - v55) >> 9) + 0x38) = 0;
      }
      while ( 1 )
      {
LABEL_38:
        sub_2769900(a1: v56, a2: v57, a3: v58, a4: v55, a5: &a7);
LABEL_39:
        v68 = v25;
        v64 = v16;
        v59 = *(_QWORD *)(v18 + 40);
        if ( (unsigned __int64)(v59 + 40) > *(_QWORD *)(v18 + 32) )
        {
          v69 = v28;
          v63 = v26;
          v59 = sub_1EAA920(a1: v26, a2: v25, a3: v72);
          v26 = v63;
        }
        else
        {
          *(_QWORD *)(v18 + 40) = v59 + 40;
          *(_DWORD *)v59 = 34082880;
          *(_DWORD *)(v59 + 4) = 0;
          *(_QWORD *)(v59 + 8) = 0;
          *(_QWORD *)(v59 + 16) = 0;
          *(_QWORD *)(v59 + 24) = 0;
          *(_QWORD *)(v59 + 32) = 0;
          v69 = v28;
        }
        *(_DWORD *)(v59 + 20) = 46923644;
        *(_DWORD *)(v59 + 16) = v26;
        *(_DWORD *)(v59 + 12) = (unsigned __int64)(v59 - v17) >> 3;
        v62 = (_DWORD *)v59;
        sub_503B9A0(a1: v26, a2: v25, a3: v59, a4: v27, a5: 0);
        v58 = (unsigned __int64)v62;
        v62[2] = 46004603;
        if ( (*(_DWORD *)v58 & 2) != 0 )
        {
          v55 = (v58 & 0xFFFFFFFFFFF80000LL) + 2112;
          if ( *(_BYTE *)((v58 & 0xFFFFFFFFFFF80000LL) + ((v58 - v55) >> 9) + 0x38) != 0 )
            *(_BYTE *)((v58 & 0xFFFFFFFFFFF80000LL) + ((v58 - v55) >> 9) + 0x38) = 0;
        }
      }
    }
    goto LABEL_34;
  }
  v16 = *(unsigned int *)(a3 + 12);
  if ( (int)v16 < 0 )
  {
    v66 = a3;
    if ( *(int *)(v18 + 16) <= 0 )
      sub_277F280(a1, a2, a3, a4: 34082368);
    return v17 + 352798784;
  }
  else
  {
    v72 = 34082880;
    v71 = 34082368;
    v70 = 34082680;
    v66 = a3;
    v69 = v16;
    v41 = sub_50130C0(a1, a2, a3: 2, a4: 34082368, a5: (unsigned int)v16);
    if ( v41 < 0 )
      goto LABEL_35;
    v45 = *(_QWORD *)(v18 + 40);
    v46 = ((unsigned int)v41 + 19LL) & 0x1FFFFFFF8LL;
    if ( v46 >= 0x20000 || (v47 = v45 + v46) > *(_QWORD *)(v18 + 32) )
    {
      v68 = v41;
      v45 = sub_1EAA840(a1: v43, a2: v44, a3: v71, a4: v42, a5: v41);
      v41 = v68;
    }
    else
    {
      v48 = v71;
      *(_QWORD *)(v18 + 40) = v47;
      *(_QWORD *)v45 = v48;
      *(_DWORD *)(v45 + 8) = v41;
    }
    v65 = (_DWORD *)v45;
    v68 = v41;
    sub_1EB4960(a1: v41, a2: 0, a3: v17 + 376351544, a4: v45, a5: 0, a6: v45, a7: v61);
    v50 = sub_5011920(a1: v69, a2: v17 + 58178216, a3: v68, a4: v49, a5: 0, a6: v65);
    v53 = *(_QWORD *)(v18 + 40);
    if ( (unsigned __int64)(v53 + 24) > *(_QWORD *)(v18 + 32) )
    {
      v67 = v50;
      v53 = sub_1EAA920(a1: v51, a2: v52, a3: v70);
    }
    else
    {
      *(_QWORD *)(v18 + 40) = v53 + 24;
      *(_DWORD *)v53 = 34082680;
      *(_DWORD *)(v53 + 4) = 0;
      *(_QWORD *)(v53 + 8) = 0;
      *(_QWORD *)(v53 + 16) = 0;
    }
    *(_DWORD *)(v53 + 4) = ((unsigned __int64)v65 - v17) >> 3;
    if ( *(int *)(v18 + 16) <= 0 )
      sub_277F280();
    return v53;
  }
}
