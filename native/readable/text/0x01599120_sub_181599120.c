// sub_1599120
// rva 0x01599120  size 2072  section .text  group text
// window base 0x181599120: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1599120(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        int a14,
        __int64 a15,
        __int64 a16,
        __int64 a17,
        __int64 a18)
{
  unsigned int v18; // ebp
  __int64 v19; // r14
  __int64 v20; // r15
  int v21; // eax
  __int64 v22; // rdi
  __int64 v23; // rsi
  int v24; // r9d
  __int64 v25; // rdx
  __int64 v26; // rcx
  _DWORD *v27; // rax
  __int64 v28; // rcx
  __int64 v29; // rdi
  __int64 v30; // rsi
  _DWORD *v31; // rax
  int v32; // edx
  int v33; // ecx
  __int64 v34; // rdi
  __int64 v35; // rsi
  int v36; // r8d
  int v37; // r9d
  _DWORD *v38; // rcx
  __int64 v39; // rdx
  _DWORD *v40; // rbx
  unsigned int v41; // edx
  __int64 v42; // rsi
  __int64 v43; // rcx
  __int64 v44; // rdi
  __int64 v45; // rdi
  __int64 v46; // rdx
  unsigned __int64 v47; // r9
  unsigned __int64 v48; // r9
  __int64 v49; // r8
  __int64 v50; // rcx
  __int64 v51; // rsi
  unsigned int v52; // ebp
  int v53; // ecx
  _DWORD *v54; // rdx
  unsigned int v55; // eax
  __int64 v56; // r8
  __int64 v58; // rcx
  __int64 v59; // rdi
  __int64 v60; // rsi
  __int64 v61; // rdx
  unsigned __int64 v62; // rcx
  __int64 v63; // rdi
  __int64 v64; // rsi
  unsigned __int64 v65; // rdx
  __int64 v66; // rcx
  __int64 v67; // rdi
  __int64 v68; // rsi
  __int64 v69; // rdx
  __int64 v70; // rdx
  __int64 v71; // [rsp+0h] [rbp-68h] BYREF
  unsigned int v72; // [rsp+Ch] [rbp-5Ch]
  _DWORD *v73; // [rsp+10h] [rbp-58h]
  _DWORD *v74; // [rsp+18h] [rbp-50h]
  _DWORD *v75; // [rsp+20h] [rbp-48h]
  _DWORD *v76; // [rsp+30h] [rbp-38h]
  __int64 v77; // [rsp+38h] [rbp-30h]
  unsigned int v78; // [rsp+44h] [rbp-24h]
  unsigned int v79; // [rsp+48h] [rbp-20h]
  int v80; // [rsp+4Ch] [rbp-1Ch]
  __int64 v81; // [rsp+50h] [rbp-18h]
  __int64 v82; // [rsp+58h] [rbp-10h]
  __int64 v83; // [rsp+60h] [rbp-8h]

  v77 = a3;
  if ( (unsigned __int64)&v71 <= *(_QWORD *)(v20 + 8) )
  {
    sub_1EB84E0();
LABEL_22:
    sub_2771080(a1: v22, a2: v23, a3: v25, a4: v26);
LABEL_23:
    v75 = v38;
    sub_2771080();
    sub_2771080();
    sub_2771080();
    sub_2771080();
    sub_2771220(a1: v59, a2: v60, a3: 0, a4: v58, a5: 0);
    goto LABEL_24;
  }
  v21 = sub_5409CE0();
  v25 = 34082680;
  v83 = 34082368;
  v26 = 34082880;
  if ( v21 == 0 )
    return sub_1815992DA(
             a1: v22,
             a2: v23,
             a3: 34082680,
             a4: 34082880,
             a5: 34082368,
             a6: v24,
             a7,
             a8,
             a9,
             a10,
             a11,
             a12,
             a13,
             a14,
             a15,
             a16,
             a17,
             a18);
  if ( v77 == v19 )
    goto LABEL_22;
  v82 = 34082880;
  v81 = 34082680;
  v27 = (_DWORD *)sub_4F66F40(a1: v22, a2: v23, a3: v77, a4: 34082880, a5: 1);
  v31 = sub_15977E0(a1: v29, a2: v30, a3: v27, a4: v28);
  if ( v31 == (_DWORD *)v19 )
    return sub_18159950B(a1: v34, a2: v35, a3: v32, a4: v33, a5: v36, a6: v37, a7, a8, a9, a10, a11, a12);
  v38 = v31;
  v76 = v31;
  v39 = (unsigned int)v31[1];
  v40 = (_DWORD *)(v19 + 57669384);
  if ( (_DWORD)v39 == 0 )
    goto LABEL_23;
  v41 = *(_DWORD *)(v19 + 8 * v39 + 8);
  if ( v41 != 0 )
  {
    v18 = *((char *)v31 + 12);
    v42 = *(unsigned int *)(v19 + 374343896);
    v75 = v31;
    v43 = v18;
    v44 = (v41 >> v18) + 23;
    if ( (int)v44 >= 0 )
    {
      v45 = (unsigned int)((_DWORD)v44 << v18);
      if ( (int)v45 >= 0 )
      {
        v46 = *(_QWORD *)(v20 + 40);
        v47 = ((unsigned int)v45 + 19LL) & 0x1FFFFFFF8LL;
        if ( v47 >= 0x20000 || (v48 = v46 + v47) > *(_QWORD *)(v20 + 32) )
        {
          v80 = v45;
          v79 = v18;
          v74 = (_DWORD *)(v19 + 57669384);
          v46 = sub_1EAA840(a1: v45, a2: v42, a3: v83, a4: v18, a5: (unsigned int)v45);
          v18 = v79;
          v40 = v74;
        }
        else
        {
          v49 = v83;
          *(_QWORD *)(v20 + 40) = v48;
          *(_QWORD *)v46 = v49;
          *(_DWORD *)(v46 + 8) = v45;
          v80 = v45;
        }
        v79 = v18;
        v74 = (_DWORD *)v46;
        sub_4FF2C40(a1: v18, a2: v74, a3: v40, a4: v43, a5: v74, a6: 0);
        sub_4FF2C40(a1: v79, a2: v51, a3: v75, a4: v50, a5: v74, a6: 23);
        v52 = v79;
        v53 = 0;
        v54 = v74;
        v55 = 0;
        goto LABEL_13;
      }
      v80 = v45;
      v79 = v18;
      v70 = *(_QWORD *)(v20 + 40);
      if ( (unsigned __int64)(v70 + 40) > *(_QWORD *)(v20 + 32) )
      {
        v72 = v42;
        v70 = sub_1EAA920(a1: v45, a2: v42, a3: v82);
        v42 = v72;
      }
      else
      {
        *(_QWORD *)(v20 + 40) = v70 + 40;
        *(_DWORD *)v70 = 34082880;
        *(_DWORD *)(v70 + 4) = 0;
        *(_QWORD *)(v70 + 8) = 0;
        *(_QWORD *)(v70 + 16) = 0;
        *(_QWORD *)(v70 + 24) = 0;
        *(_QWORD *)(v70 + 32) = 0;
      }
      *(_DWORD *)(v70 + 20) = 46923644;
      *(_DWORD *)(v70 + 16) = v42;
      *(_DWORD *)(v70 + 12) = (unsigned __int64)(v70 - v19) >> 3;
      v74 = (_DWORD *)v70;
      sub_503B9A0(a1: v45, a2: v42, a3: v70, a4: v43, a5: 0);
      v65 = (unsigned __int64)v74;
      v74[2] = 46004603;
      if ( (*(_DWORD *)v65 & 2) != 0 )
      {
        v62 = (v65 & 0xFFFFFFFFFFF80000LL) + 2112;
        if ( *(_BYTE *)((v65 & 0xFFFFFFFFFFF80000LL) + ((v65 - v62) >> 9) + 0x38) != 0 )
          *(_BYTE *)((v65 & 0xFFFFFFFFFFF80000LL) + ((v65 - v62) >> 9) + 0x38) = 0;
      }
      while ( 1 )
      {
        while ( 1 )
        {
LABEL_27:
          v79 = sub_2769900(a1: v63, a2: v64, a3: v65, a4: v62, a5: &a7);
          v69 = *(_QWORD *)(v20 + 40);
          if ( (unsigned __int64)(v69 + 40) > *(_QWORD *)(v20 + 32) )
          {
            v78 = v18;
            v69 = sub_1EAA920(a1: v67, a2: v68, a3: v82);
          }
          else
          {
            *(_QWORD *)(v20 + 40) = v69 + 40;
            *(_DWORD *)v69 = 34082880;
            *(_DWORD *)(v69 + 4) = 0;
            *(_QWORD *)(v69 + 8) = 0;
            *(_QWORD *)(v69 + 16) = 0;
            *(_QWORD *)(v69 + 24) = 0;
            *(_QWORD *)(v69 + 32) = 0;
            v78 = v18;
          }
          *(_DWORD *)(v69 + 20) = 46923644;
          *(_DWORD *)(v69 + 16) = *(_DWORD *)(v19 + 374343896);
          *(_DWORD *)(v69 + 12) = (unsigned __int64)(v69 - v19) >> 3;
          v73 = (_DWORD *)v69;
          sub_503B9A0(a1: v67, a2: v68, a3: v69, a4: v66, a5: 0);
          v65 = (unsigned __int64)v73;
          v73[2] = 46004603;
          if ( (*(_DWORD *)v65 & 2) != 0 )
          {
            v62 = (v65 & 0xFFFFFFFFFFF80000LL) + 2112;
            if ( *(_BYTE *)((v65 & 0xFFFFFFFFFFF80000LL) + ((v65 - v62) >> 9) + 0x38) != 0 )
              break;
          }
        }
        *(_BYTE *)((v65 & 0xFFFFFFFFFFF80000LL) + ((v65 - v62) >> 9) + 0x38) = 0;
      }
    }
LABEL_24:
    v79 = v18;
    v61 = *(_QWORD *)(v20 + 40);
    if ( (unsigned __int64)(v61 + 40) > *(_QWORD *)(v20 + 32) )
    {
      v80 = v44;
      v72 = v42;
      v61 = sub_1EAA920(a1: v44, a2: v42, a3: v82);
      v42 = v72;
    }
    else
    {
      *(_QWORD *)(v20 + 40) = v61 + 40;
      *(_DWORD *)v61 = 34082880;
      *(_DWORD *)(v61 + 4) = 0;
      *(_QWORD *)(v61 + 8) = 0;
      *(_QWORD *)(v61 + 16) = 0;
      *(_QWORD *)(v61 + 24) = 0;
      *(_QWORD *)(v61 + 32) = 0;
      v80 = v44;
    }
    *(_DWORD *)(v61 + 20) = 46923644;
    *(_DWORD *)(v61 + 16) = v42;
    *(_DWORD *)(v61 + 12) = (unsigned __int64)(v61 - v19) >> 3;
    v74 = (_DWORD *)v61;
    sub_503B9A0(a1: v44, a2: v42, a3: v61, a4: v43, a5: 0);
    v65 = (unsigned __int64)v74;
    v74[2] = 46004603;
    if ( (*(_DWORD *)v65 & 2) != 0 )
    {
      v62 = (v65 & 0xFFFFFFFFFFF80000LL) + 2112;
      if ( *(_BYTE *)((v65 & 0xFFFFFFFFFFF80000LL) + ((v65 - v62) >> 9) + 0x38) != 0 )
        *(_BYTE *)((v65 & 0xFFFFFFFFFFF80000LL) + ((v65 - v62) >> 9) + 0x38) = 0;
    }
    goto LABEL_27;
  }
  v55 = *(unsigned __int8 *)(v19 + 57669397);
  v54 = (_DWORD *)(v19 + 376613192);
  v52 = 0;
  v53 = -1316327393;
LABEL_13:
  v56 = *(_QWORD *)(v20 + 40);
  if ( (unsigned __int64)(v56 + 24) > *(_QWORD *)(v20 + 32) )
  {
    v79 = v52;
    v80 = v53;
    v74 = v54;
    v78 = v55;
    v56 = sub_1EAA920(a1: v34, a2: v35, a3: v81);
    LOBYTE(v52) = v79;
    v53 = v80;
    v54 = v74;
    LOBYTE(v55) = v78;
  }
  else
  {
    *(_QWORD *)(v20 + 40) = v56 + 24;
    *(_DWORD *)v56 = 34082680;
    *(_DWORD *)(v56 + 4) = 0;
    *(_QWORD *)(v56 + 8) = 0;
    *(_QWORD *)(v56 + 16) = 0;
  }
  *(_BYTE *)(v56 + 13) = v55;
  *(_BYTE *)(v56 + 12) = v52;
  *(_DWORD *)(v56 + 8) = v53;
  *(_DWORD *)(v56 + 4) = ((unsigned __int64)v54 - v19) >> 3;
  if ( *(int *)(v20 + 16) <= 0 )
    sub_277F280();
  return v56;
}
