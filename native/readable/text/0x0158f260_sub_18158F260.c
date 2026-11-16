// sub_158F260
// rva 0x0158f260  size 1075  section .text  group text
// window base 0x18158f260: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_158F260(__int64 a1, __int64 a2, unsigned int *a3, __int64 a4, __int64 a5, int a6, char a7)
{
  unsigned int v7; // ebx
  __int64 v8; // r13
  __int64 v9; // r14
  __int64 v10; // r15
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rbx
  __int64 v14; // rsi
  __int64 v15; // rdi
  int v16; // r8d
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // r8
  unsigned int v21; // eax
  __int64 v22; // rcx
  __int64 v23; // rdi
  __int64 v24; // rsi
  unsigned int v25; // eax
  __int64 v26; // rcx
  __int64 v27; // rdi
  __int64 v28; // rsi
  int v29; // eax
  __int64 v30; // rdi
  __int64 v31; // rbp
  __int64 v32; // rcx
  __int64 v33; // rsi
  __int64 v34; // rdx
  unsigned __int64 v35; // r9
  unsigned __int64 v36; // r9
  __int64 v37; // rcx
  unsigned int v38; // eax
  __int64 v39; // rcx
  unsigned int v40; // eax
  __int64 v41; // rcx
  int v42; // eax
  __int64 v43; // rdi
  __int64 v44; // rsi
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v48; // rdx
  unsigned __int64 v49; // rcx
  __int64 v50; // rdi
  __int64 v51; // rsi
  __int64 v52; // rax
  int v53[4]; // [rsp+0h] [rbp-68h] BYREF
  __int64 v54; // [rsp+10h] [rbp-58h]
  __int64 v55; // [rsp+18h] [rbp-50h]
  __int64 v56; // [rsp+20h] [rbp-48h]
  unsigned int *v57; // [rsp+28h] [rbp-40h]
  int v58; // [rsp+30h] [rbp-38h]
  unsigned int v59; // [rsp+34h] [rbp-34h]
  __int64 v60; // [rsp+38h] [rbp-30h]
  __int64 v61; // [rsp+40h] [rbp-28h]
  __int64 v62; // [rsp+48h] [rbp-20h]
  __int64 v63; // [rsp+50h] [rbp-18h]
  int v64; // [rsp+58h] [rbp-10h]
  unsigned int v65; // [rsp+5Ch] [rbp-Ch]
  int v66; // [rsp+60h] [rbp-8h]
  unsigned int v67; // [rsp+64h] [rbp-4h]

  if ( (unsigned __int64)v53 <= *(_QWORD *)(v10 + 8) )
  {
    v57 = a3;
    sub_1EB84E0();
    goto LABEL_32;
  }
  v11 = a3[2];
  v12 = a3[3];
  v13 = a3[1];
  v14 = v9 + 8 * v12;
  v15 = v9 + 8 * v11;
  v16 = v9 + 353301280;
  if ( (_DWORD)v13 != 0 )
  {
    v63 = v9 + 353301280;
    v62 = v9 + 8 * v11;
    v61 = v9 + 8 * v12;
    v59 = v12;
    v58 = v11;
    v57 = a3;
    v60 = v9 + 8 * v13;
    v17 = sub_1585C80(a1: v15, a2: v14, a3: v60);
    if ( v17 == v9 )
    {
      v16 = v63;
      v56 = v63;
    }
    else
    {
      v56 = v17;
    }
  }
  else
  {
    v63 = v9 + 353301280;
    v62 = v9 + 8 * v11;
    v61 = v9 + 8 * v12;
    v60 = v9 + 8 * v13;
    v59 = v12;
    v58 = v11;
    v57 = a3;
    v56 = v9 + 353301280;
  }
  if ( v58 != 0 )
  {
    v18 = sub_158E920(
            a1: v15,
            a2: v14,
            a3: v62,
            a4: v12,
            a5: v16,
            a6,
            a7: v53[0],
            a8: v53[2],
            a9: v54,
            a10: v55,
            a11: v56,
            a12: (__int64)v57);
    if ( v18 == v9 )
      v55 = v63;
    else
      v55 = v18;
  }
  else
  {
    v55 = v63;
  }
  if ( v59 != 0 )
  {
    v19 = ((__int64 (__fastcall *)(__int64, __int64, __int64))(v8
                                                             + *(_QWORD *)(v9
                                                                         + 8LL * (*(_DWORD *)(v9 + 8LL * v59) >> 3)
                                                                         + 104)))(
            a1: v15,
            a2: v14,
            a3: v61);
    if ( v19 == v9 )
      v20 = v63;
    else
      v20 = v19;
  }
  else
  {
    v20 = v63;
  }
  v67 = *(char *)(v20 + 12) | *(char *)(v55 + 12) | *(char *)(v56 + 12);
  v63 = v20;
  v21 = sub_50132E0(a1: v15, a2: v14, a3: 43, a4: v56, a5: v56);
  v25 = sub_50132E0(a1: v23, a2: v24, a3: v21, a4: v22, a5: v55);
  v29 = sub_50132E0(a1: v27, a2: v28, a3: v25, a4: v26, a5: v63);
  v66 = v29;
  v7 = v29 - 1;
  v31 = v9 + 57668696;
  v32 = v67;
  v33 = (unsigned int)(v29 << v67);
  if ( (int)v33 < 0 )
  {
LABEL_32:
    v65 = v7;
    v48 = *(_QWORD *)(v10 + 40);
    if ( (unsigned __int64)(v48 + 40) > *(_QWORD *)(v10 + 32) )
    {
      v64 = v33;
      v48 = sub_1EAA920(a1: v30, a2: v33, a3: 34082880);
    }
    else
    {
      *(_QWORD *)(v10 + 40) = v48 + 40;
      *(_DWORD *)v48 = 34082880;
      *(_DWORD *)(v48 + 4) = 0;
      *(_QWORD *)(v48 + 8) = 0;
      *(_QWORD *)(v48 + 16) = 0;
      *(_QWORD *)(v48 + 24) = 0;
      *(_QWORD *)(v48 + 32) = 0;
      v64 = v33;
    }
    *(_DWORD *)(v48 + 20) = 46923644;
    *(_DWORD *)(v48 + 16) = *(_DWORD *)(v9 + 374343896);
    *(_DWORD *)(v48 + 12) = (unsigned __int64)(v48 - v9) >> 3;
    v54 = v48;
    sub_503B9A0(a1: v30, a2: v33, a3: v48, a4: v32, a5: 0);
    v52 = v54;
    *(_DWORD *)(v54 + 8) = 46004603;
    if ( (*(_DWORD *)v52 & 2) != 0 )
      goto LABEL_36;
    while ( 1 )
    {
      v52 = sub_2769900(a1: v50, a2: v51, a3: v52, a4: v49, a5: &a7);
LABEL_36:
      v49 = (v52 & 0xFFFFFFFFFFF80000LL) + 2112;
      if ( *(_BYTE *)((v52 & 0xFFFFFFFFFFF80000LL) + ((v52 - v49) >> 9) + 0x38) != 0 )
        *(_BYTE *)((v52 & 0xFFFFFFFFFFF80000LL) + ((v52 - v49) >> 9) + 0x38) = 0;
    }
  }
  v34 = *(_QWORD *)(v10 + 40);
  v35 = ((unsigned int)v33 + 19LL) & 0x1FFFFFFF8LL;
  if ( v35 >= 0x20000 || (v36 = v34 + v35) > *(_QWORD *)(v10 + 32) )
  {
    v54 = v9 + 57668696;
    v65 = v29 - 1;
    v34 = sub_1EAA840(a1: 34082368, a2: v33, a3: 34082368, a4: v67, a5: (unsigned int)v33);
    v31 = v54;
    v7 = v65;
  }
  else
  {
    *(_QWORD *)(v10 + 40) = v36;
    *(_QWORD *)v34 = 34082368;
    *(_DWORD *)(v34 + 8) = v33;
  }
  v54 = v34;
  v65 = v7;
  if ( v67 != 0 )
    sub_4FF2C40(a1: 1, a2: v33, a3: v31, a4: v32, a5: v34, a6: v7);
  else
    sub_1EB4960(a1: v7, a2: 1, a3: v9 + 376611792, a4: v32, a5: 0, a6: v54);
  v38 = sub_5011A80(a1: v63, a2: v9 + 57668720, a3: v65, a4: v37, a5: v67, a6: v54);
  v40 = sub_5011A80(a1: v55, a2: v9 + 57668744, a3: v38, a4: v39, a5: v67, a6: v54);
  v42 = sub_5011A80(a1: v56, a2: v9 + 57668768, a3: v40, a4: v41, a5: v67, a6: v54);
  v45 = *(_QWORD *)(v10 + 40);
  if ( (unsigned __int64)(v45 + 24) > *(_QWORD *)(v10 + 32) )
  {
    v66 = v42;
    v45 = sub_1EAA920(a1: v43, a2: v44, a3: 34082680);
  }
  else
  {
    *(_QWORD *)(v10 + 40) = v45 + 24;
    *(_DWORD *)v45 = 34082680;
    *(_DWORD *)(v45 + 4) = 0;
    *(_QWORD *)(v45 + 8) = 0;
    *(_QWORD *)(v45 + 16) = 0;
  }
  v46 = v54;
  *(_BYTE *)(v45 + 12) = v67;
  *(_DWORD *)(v45 + 4) = (unsigned __int64)(v46 - v9) >> 3;
  if ( *(int *)(v10 + 16) <= 0 )
    sub_277F280(a1: v43, a2: v44, a3: v45, a4: v46, a5: v46);
  return v45;
}
