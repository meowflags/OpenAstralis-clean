// sub_1EC0E80
// rva 0x01ec0e80  size 1019  section .text  group text
// window base 0x181ec0e80: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1EC0E80(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, char a7)
{
  unsigned int v7; // ebx
  _DWORD *v8; // r14
  __int64 v9; // r15
  __int64 v10; // rax
  unsigned int v11; // ecx
  unsigned int v12; // ebx
  __int64 v13; // rbp
  _DWORD *v14; // rsi
  _DWORD *v15; // rdi
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // r8
  unsigned int v19; // eax
  __int64 v20; // rcx
  __int64 v21; // rdi
  __int64 v22; // rsi
  unsigned int v23; // eax
  __int64 v24; // rcx
  __int64 v25; // rdi
  __int64 v26; // rsi
  unsigned int v27; // eax
  __int64 v28; // rcx
  __int64 v29; // rdi
  __int64 v30; // rsi
  int v31; // eax
  __int64 v32; // rdi
  _DWORD *v33; // rbp
  __int64 v34; // rcx
  __int64 v35; // rsi
  _DWORD *v36; // rdx
  unsigned __int64 v37; // r9
  char *v38; // r9
  __int64 v39; // rcx
  unsigned int v40; // eax
  __int64 v41; // rcx
  unsigned int v42; // eax
  __int64 v43; // rcx
  unsigned int v44; // eax
  __int64 v45; // rcx
  int v46; // eax
  __int64 v47; // rdi
  __int64 v48; // rsi
  __int64 v49; // rdx
  char *v50; // rbx
  __int64 v51; // rcx
  __int64 v53; // rdx
  unsigned __int64 v54; // rcx
  __int64 v55; // rdi
  __int64 v56; // rsi
  __int64 v57; // rax
  char v58; // [rsp+0h] [rbp-58h] BYREF
  _DWORD *v59; // [rsp+8h] [rbp-50h]
  _DWORD *v60; // [rsp+10h] [rbp-48h]
  __int64 v61; // [rsp+18h] [rbp-40h]
  int v62; // [rsp+24h] [rbp-34h]
  _DWORD *v63; // [rsp+28h] [rbp-30h]
  _DWORD *v64; // [rsp+30h] [rbp-28h]
  _DWORD *v65; // [rsp+38h] [rbp-20h]
  int v66; // [rsp+40h] [rbp-18h]
  unsigned int v67; // [rsp+44h] [rbp-14h]
  int v68; // [rsp+48h] [rbp-10h]
  unsigned int v69; // [rsp+4Ch] [rbp-Ch]
  unsigned int v70; // [rsp+50h] [rbp-8h]
  unsigned int v71; // [rsp+54h] [rbp-4h]

  if ( (unsigned __int64)&v58 <= *(_QWORD *)(v9 + 8) )
  {
    v61 = a3;
    sub_1EB84E0(a1, a2, a3, a4, a5, a6, a7: v58);
    goto LABEL_27;
  }
  v10 = *(unsigned int *)(a3 + 8);
  v11 = *(_DWORD *)(a3 + 12);
  v12 = *(__int16 *)(a3 + 16);
  v13 = *(unsigned int *)(a3 + 4);
  v14 = &v8[2 * v13];
  v15 = &v8[2 * v10];
  if ( (_DWORD)v13 != 0 )
  {
    v65 = v8 + 88325320;
    v64 = &v8[2 * v10];
    v71 = v12;
    v70 = v11;
    v62 = v10;
    v61 = a3;
    v63 = &v8[2 * v13];
    v16 = sub_4FA82E0(a1: v15, a2: v14, a3: v63);
    if ( (_DWORD *)v16 == v8 )
      v60 = v65;
    else
      v60 = (_DWORD *)v16;
  }
  else
  {
    v65 = v8 + 88325320;
    v64 = &v8[2 * v10];
    v63 = &v8[2 * v13];
    v71 = v12;
    v70 = v11;
    v62 = v10;
    v61 = a3;
    v60 = v8 + 88325320;
  }
  if ( v62 != 0 )
  {
    v17 = sub_4FA82E0(a1: v15, a2: v14, a3: v64);
    if ( (_DWORD *)v17 == v8 )
      v18 = (__int64)v65;
    else
      v18 = v17;
  }
  else
  {
    v18 = (__int64)v65;
  }
  v69 = *(char *)(v18 + 12) | *((char *)v60 + 12);
  v65 = (_DWORD *)v18;
  v19 = sub_50132E0(a1: v15, a2: v14, a3: 135, a4: v69, a5: v60);
  v23 = sub_50132E0(a1: v21, a2: v22, a3: v19, a4: v20, a5: v65);
  v27 = sub_50130C0(a1: v25, a2: v26, a3: v23, a4: v24, a5: v70);
  v31 = sub_50130C0(a1: v29, a2: v30, a3: v27, a4: v28, a5: v71);
  v68 = v31;
  v7 = v31 - 1;
  v33 = v8 + 14544614;
  v34 = v69;
  v35 = (unsigned int)(v31 << v69);
  if ( (int)v35 < 0 )
  {
LABEL_27:
    v67 = v7;
    v53 = *(_QWORD *)(v9 + 40);
    if ( (unsigned __int64)(v53 + 40) > *(_QWORD *)(v9 + 32) )
    {
      v66 = v35;
      v53 = sub_1EAA920(a1: v32, a2: v35, a3: 34082880);
    }
    else
    {
      *(_QWORD *)(v9 + 40) = v53 + 40;
      *(_DWORD *)v53 = 34082880;
      *(_DWORD *)(v53 + 4) = 0;
      *(_QWORD *)(v53 + 8) = 0;
      *(_QWORD *)(v53 + 16) = 0;
      *(_QWORD *)(v53 + 24) = 0;
      *(_QWORD *)(v53 + 32) = 0;
      v66 = v35;
    }
    *(_DWORD *)(v53 + 20) = 46923644;
    *(_DWORD *)(v53 + 16) = v8[93585974];
    *(_DWORD *)(v53 + 12) = (unsigned __int64)(v53 - (_QWORD)v8) >> 3;
    v59 = (_DWORD *)v53;
    sub_503B9A0(a1: v32, a2: v35, a3: v53, a4: v34, a5: 0);
    v57 = (__int64)v59;
    v59[2] = 46004603;
    if ( (*(_DWORD *)v57 & 2) != 0 )
      goto LABEL_31;
    while ( 1 )
    {
      v57 = sub_2769900(a1: v55, a2: v56, a3: v57, a4: v54, a5: &a7);
LABEL_31:
      v54 = (v57 & 0xFFFFFFFFFFF80000LL) + 2112;
      if ( *(_BYTE *)((v57 & 0xFFFFFFFFFFF80000LL) + ((v57 - v54) >> 9) + 0x38) != 0 )
        *(_BYTE *)((v57 & 0xFFFFFFFFFFF80000LL) + ((v57 - v54) >> 9) + 0x38) = 0;
    }
  }
  v36 = *(_DWORD **)(v9 + 40);
  v37 = ((unsigned int)v35 + 19LL) & 0x1FFFFFFF8LL;
  if ( v37 >= 0x20000 || (unsigned __int64)(v38 = (char *)v36 + v37) > *(_QWORD *)(v9 + 32) )
  {
    v59 = v8 + 14544614;
    v67 = v31 - 1;
    v36 = (_DWORD *)sub_1EAA840(a1: 34082368, a2: v35, a3: 34082368, a4: v69, a5: v35);
    v33 = v59;
    v7 = v67;
  }
  else
  {
    *(_QWORD *)(v9 + 40) = v38;
    *(_QWORD *)v36 = 34082368;
    v36[2] = v35;
  }
  v59 = v36;
  v67 = v7;
  if ( v69 != 0 )
    sub_4FF2C40(a1: 1, a2: v35, a3: v33, a4: v69, a5: v36, a6: v7);
  else
    sub_1EB4960(a1: v7, a2: 1, a3: v8 + 94164780, a4: v69, a5: 0, a6: v59, a7: v58);
  v40 = sub_5011920(a1: v71, a2: v8 + 14544620, a3: v67, a4: v39, a5: v69, a6: v59);
  v42 = sub_5011920(a1: v70, a2: v8 + 14544626, a3: v40, a4: v41, a5: v69, a6: v59);
  v44 = sub_5011A80(a1: v65, a2: v8 + 14544632, a3: v42, a4: v43, a5: v69, a6: v59);
  v46 = sub_5011A80(a1: v60, a2: v8 + 14544638, a3: v44, a4: v45, a5: v69, a6: v59);
  v49 = *(_QWORD *)(v9 + 40);
  if ( (unsigned __int64)(v49 + 24) > *(_QWORD *)(v9 + 32) )
  {
    v68 = v46;
    v49 = sub_1EAA920(a1: v47, a2: v48, a3: 34082680);
  }
  else
  {
    *(_QWORD *)(v9 + 40) = v49 + 24;
    *(_DWORD *)v49 = 34082680;
    *(_DWORD *)(v49 + 4) = 0;
    *(_QWORD *)(v49 + 8) = 0;
    *(_QWORD *)(v49 + 16) = 0;
  }
  v50 = (char *)v59;
  v51 = v69;
  *(_BYTE *)(v49 + 12) = v69;
  *(_DWORD *)(v49 + 4) = (unsigned __int64)(v50 - (char *)v8) >> 3;
  if ( *(int *)(v9 + 16) <= 0 )
    sub_277F280(a1: v47, a2: v48, a3: v49, a4: v51, a5: v50);
  return v49;
}
