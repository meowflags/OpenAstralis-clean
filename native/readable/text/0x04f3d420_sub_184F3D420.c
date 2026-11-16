// sub_4F3D420
// rva 0x04f3d420  size 2961  section .text  group text
// window base 0x184f3d420: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_4F3D420(__int64 a1, __int64 a2, _DWORD *a3, __int64 a4, __int64 a5, __int64 a6, char a7)
{
  __int64 v7; // r13
  __int64 v8; // r14
  __int64 v9; // r15
  __int64 v10; // rcx
  signed __int64 v11; // rbx
  __int64 v12; // rbp
  __int64 v13; // rcx
  __int64 v14; // rdi
  __int64 v15; // rsi
  __int64 v16; // r8
  __int64 v17; // rcx
  __int64 v18; // rdi
  __int64 v19; // rsi
  __int64 v20; // rdx
  __int64 result; // rax
  __int64 v22; // rcx
  __int64 v23; // rdi
  __int64 v24; // rsi
  __int64 v25; // rdx
  int v26; // r8d
  __int64 v27; // rdx
  __int64 v28; // rdx
  int v29; // eax
  __int64 v30; // rax
  __int64 v31; // rdi
  __int64 v32; // rsi
  unsigned __int64 v33; // rcx
  int v34; // edx
  __int64 v35; // rdx
  __int64 v36; // rdx
  __int64 v37; // rdx
  __int64 v38; // rdx
  __int64 v39; // r8
  int v40; // eax
  int v41; // edx
  __int64 v42; // rdx
  __int64 v43; // rdx
  __int64 v44; // rdx
  __int64 v45; // r8
  int v46; // eax
  int v47; // edx
  __int64 v48; // rdx
  __int64 v49; // rdx
  __int64 v50; // rdx
  __int64 v51; // r8
  int v52; // eax
  __int64 v53; // rdx
  int v54; // r8d
  __int64 v55; // rdx
  __int64 v56; // r8
  __int64 v57; // r8
  __int64 v58; // r8
  __int64 v59; // r8
  __int64 v60; // r8
  __int64 v61; // r8
  __int64 v62; // rdx
  __int64 v63; // rdx
  __int64 v64; // rdx
  int v65; // [rsp+0h] [rbp-28h] BYREF
  _DWORD *v66; // [rsp+10h] [rbp-18h]
  _DWORD *v67; // [rsp+18h] [rbp-10h]
  __int64 v68; // [rsp+20h] [rbp-8h]

  v67 = a3;
  if ( (unsigned __int64)&v65 <= *(_QWORD *)(v9 + 8) )
  {
    sub_1EB84E0();
    goto LABEL_35;
  }
  v10 = *(unsigned int *)(v8 + 377133548);
  if ( (_DWORD)v10 == 0 || v9 == *(_QWORD *)(v8 + 376351704) )
    goto LABEL_23;
  v11 = *(_QWORD *)(v9 + 64);
  v12 = *(_QWORD *)(v8 + 8 * v10 + 16);
  if ( v12 == 0 )
  {
    if ( __sync_val_compare_and_swap((volatile signed __int64 *)(v8 + 8 * v10 + 16), 0, v11) == 0 )
      goto LABEL_6;
    goto LABEL_23;
  }
  if ( v12 != v11 || (v29 = *(_DWORD *)(v8 + 8 * v10 + 28) + 1) < 0 )
  {
LABEL_23:
    sub_208CC20(a1, a2, a3: v8 + 377133432);
    goto LABEL_6;
  }
  *(_DWORD *)(v8 + 8 * v10 + 28) = v29;
LABEL_6:
  if ( *(_DWORD *)(v8 + 374416892) == 0 )
  {
LABEL_35:
    v37 = *(_QWORD *)(v9 + 40);
    if ( (unsigned __int64)(v37 + 40) > *(_QWORD *)(v9 + 32) )
    {
      v37 = sub_1EAA920(a1, a2, a3: 34090048);
    }
    else
    {
      *(_QWORD *)(v9 + 40) = v37 + 40;
      *(_DWORD *)v37 = 34090048;
      *(_DWORD *)(v37 + 4) = 0;
      *(_QWORD *)(v37 + 8) = 0;
      *(_QWORD *)(v37 + 16) = 0;
      *(_QWORD *)(v37 + 24) = 0;
      *(_QWORD *)(v37 + 32) = 0;
    }
    v66 = (_DWORD *)v37;
    *(_DWORD *)(v37 + 20) = 46923644;
    *(_DWORD *)(v37 + 16) = *(_DWORD *)(v8 + 374343896);
    *(_DWORD *)(v37 + 12) = (unsigned __int64)(v37 - v8) >> 3;
    sub_503B9A0(a1, a2, a3: v37, a4: v10, a5: 0);
    v38 = (__int64)v66;
    v66[2] = 45897060;
    if ( (*(_DWORD *)v38 & 2) != 0 )
    {
      v33 = (v38 & 0xFFFFFFFFFFF80000LL) + 2112;
      if ( *(_BYTE *)((v38 & 0xFFFFFFFFFFF80000LL) + ((v38 - v33) >> 9) + 0x38) != 0 )
        *(_BYTE *)((v38 & 0xFFFFFFFFFFF80000LL) + ((v38 - v33) >> 9) + 0x38) = 0;
    }
    v39 = *(unsigned int *)(v8 + 377133548);
    v40 = *(_DWORD *)(v8 + 8 * v39 + 28);
    if ( v40 == 1 )
    {
      *(_QWORD *)(v8 + 8 * v39 + 16) = 0;
      __faststorefence();
    }
    else
    {
      v33 = (unsigned int)(v40 - 1);
      *(_DWORD *)(v8 + 8 * v39 + 28) = v33;
    }
    if ( v40 != 1 )
    {
      v30 = v38;
      goto LABEL_27;
    }
    v56 = *(unsigned int *)(v8 + 8 * v39 + 4);
    if ( (_DWORD)v56 == 0 )
    {
      v30 = v38;
      goto LABEL_27;
    }
    v57 = *(unsigned int *)(v8 + 8 * v56 + 8);
    if ( (_DWORD)v57 == 0 )
    {
      v30 = v38;
      goto LABEL_27;
    }
    if ( *(_DWORD *)(v8 + 8 * v57 + 16) == 0 )
    {
      v30 = v38;
      goto LABEL_27;
    }
LABEL_114:
    sub_208CCA0(a1: v31, a2: v32, a3: v8 + 377133432, a4: v33, a5: 1);
    v30 = (__int64)v66;
    goto LABEL_27;
  }
  if ( v67 == (_DWORD *)v8 )
  {
    v30 = sub_276BEE0();
    v33 = *(unsigned int *)(v8 + 377133548);
    v41 = *(_DWORD *)(v8 + 8 * v33 + 28);
    if ( v41 == 1 )
    {
      *(_QWORD *)(v8 + 8 * v33 + 16) = 0;
      __faststorefence();
    }
    else
    {
      *(_DWORD *)(v8 + 8 * v33 + 28) = v41 - 1;
    }
    if ( v41 != 1 )
      goto LABEL_27;
    v42 = *(unsigned int *)(v8 + 8 * v33 + 4);
    if ( (_DWORD)v42 == 0 )
      goto LABEL_27;
    v62 = *(unsigned int *)(v8 + 8 * v42 + 8);
    if ( (_DWORD)v62 == 0 || *(_DWORD *)(v8 + 8 * v62 + 16) == 0 )
      goto LABEL_27;
    goto LABEL_94;
  }
  if ( ((unsigned int (__fastcall *)(__int64, __int64, _DWORD *, _DWORD *))(v7
                                                                          + *(_QWORD *)(v8 + 8LL * (*v67 >> 3) + 112)))(
         a1,
         a2,
         a3: v67,
         a4: v67) != 0 )
  {
    v68 = 34081944;
    v43 = *(_QWORD *)(v9 + 40);
    if ( (unsigned __int64)(v43 + 40) > *(_QWORD *)(v9 + 32) )
    {
      v43 = sub_1EAA920(a1: v14, a2: v15, a3: v68);
    }
    else
    {
      *(_QWORD *)(v9 + 40) = v43 + 40;
      *(_DWORD *)v43 = 34081944;
      *(_DWORD *)(v43 + 4) = 0;
      *(_QWORD *)(v43 + 8) = 0;
      *(_QWORD *)(v43 + 16) = 0;
      *(_QWORD *)(v43 + 24) = 0;
      *(_QWORD *)(v43 + 32) = 0;
    }
    v66 = (_DWORD *)v43;
    *(_DWORD *)(v43 + 20) = 46923644;
    *(_DWORD *)(v43 + 16) = *(_DWORD *)(v8 + 374343896);
    *(_DWORD *)(v43 + 12) = (unsigned __int64)(v43 - v8) >> 3;
    sub_503B9A0(a1: v14, a2: v15, a3: v43, a4: v13, a5: 0);
    v44 = (__int64)v66;
    v66[2] = 46271324;
    if ( (*(_DWORD *)v44 & 2) != 0 )
    {
      v33 = (v44 & 0xFFFFFFFFFFF80000LL) + 2112;
      if ( *(_BYTE *)((v44 & 0xFFFFFFFFFFF80000LL) + ((v44 - v33) >> 9) + 0x38) != 0 )
        *(_BYTE *)((v44 & 0xFFFFFFFFFFF80000LL) + ((v44 - v33) >> 9) + 0x38) = 0;
    }
    v45 = *(unsigned int *)(v8 + 377133548);
    v46 = *(_DWORD *)(v8 + 8 * v45 + 28);
    if ( v46 == 1 )
    {
      *(_QWORD *)(v8 + 8 * v45 + 16) = 0;
      __faststorefence();
    }
    else
    {
      v33 = (unsigned int)(v46 - 1);
      *(_DWORD *)(v8 + 8 * v45 + 28) = v33;
    }
    if ( v46 != 1 )
    {
      v30 = v44;
      goto LABEL_27;
    }
    v58 = *(unsigned int *)(v8 + 8 * v45 + 4);
    if ( (_DWORD)v58 == 0 )
    {
      v30 = v44;
      goto LABEL_27;
    }
    v59 = *(unsigned int *)(v8 + 8 * v58 + 8);
    if ( (_DWORD)v59 == 0 )
    {
      v30 = v44;
      goto LABEL_27;
    }
    if ( *(_DWORD *)(v8 + 8 * v59 + 16) == 0 )
    {
      v30 = v44;
      goto LABEL_27;
    }
    goto LABEL_114;
  }
  v16 = *(unsigned int *)(v8 + 374416892);
  if ( (_DWORD)v16 == 0 )
  {
    v30 = sub_276BEE0(a1: v14, a2: v15, a3: 34081944);
    v33 = *(unsigned int *)(v8 + 377133548);
    v47 = *(_DWORD *)(v8 + 8 * v33 + 28);
    if ( v47 == 1 )
    {
      *(_QWORD *)(v8 + 8 * v33 + 16) = 0;
      __faststorefence();
    }
    else
    {
      *(_DWORD *)(v8 + 8 * v33 + 28) = v47 - 1;
    }
    if ( v47 != 1 )
      goto LABEL_27;
    v48 = *(unsigned int *)(v8 + 8 * v33 + 4);
    if ( (_DWORD)v48 == 0 )
      goto LABEL_27;
    v63 = *(unsigned int *)(v8 + 8 * v48 + 8);
    if ( (_DWORD)v63 == 0 || *(_DWORD *)(v8 + 8 * v63 + 16) == 0 )
      goto LABEL_27;
    goto LABEL_94;
  }
  v68 = 34081944;
  if ( ((unsigned int (__fastcall *)(__int64, __int64, __int64, __int64, _DWORD *))(v7
                                                                                  + *(_QWORD *)(v8
                                                                                              + 8LL
                                                                                              * (*(_DWORD *)(v8 + 8 * v16) >> 3)
                                                                                              + 256)))(
         a1: v14,
         a2: v15,
         a3: v8 + 8 * v16,
         a4: v13,
         a5: v67) != 0 )
  {
    v49 = *(_QWORD *)(v9 + 40);
    if ( (unsigned __int64)(v49 + 40) > *(_QWORD *)(v9 + 32) )
    {
      v49 = sub_1EAA920(a1: v18, a2: v19, a3: v68);
    }
    else
    {
      *(_QWORD *)(v9 + 40) = v49 + 40;
      *(_DWORD *)v49 = 34081944;
      *(_DWORD *)(v49 + 4) = 0;
      *(_QWORD *)(v49 + 8) = 0;
      *(_QWORD *)(v49 + 16) = 0;
      *(_QWORD *)(v49 + 24) = 0;
      *(_QWORD *)(v49 + 32) = 0;
    }
    v66 = (_DWORD *)v49;
    *(_DWORD *)(v49 + 20) = 46923644;
    *(_DWORD *)(v49 + 16) = *(_DWORD *)(v8 + 374343896);
    *(_DWORD *)(v49 + 12) = (unsigned __int64)(v49 - v8) >> 3;
    sub_503B9A0(a1: v18, a2: v19, a3: v49, a4: v17, a5: 0);
    v50 = (__int64)v66;
    v66[2] = 46271316;
    if ( (*(_DWORD *)v50 & 2) != 0 )
    {
      v33 = (v50 & 0xFFFFFFFFFFF80000LL) + 2112;
      if ( *(_BYTE *)((v50 & 0xFFFFFFFFFFF80000LL) + ((v50 - v33) >> 9) + 0x38) != 0 )
        *(_BYTE *)((v50 & 0xFFFFFFFFFFF80000LL) + ((v50 - v33) >> 9) + 0x38) = 0;
    }
    v51 = *(unsigned int *)(v8 + 377133548);
    v52 = *(_DWORD *)(v8 + 8 * v51 + 28);
    if ( v52 == 1 )
    {
      *(_QWORD *)(v8 + 8 * v51 + 16) = 0;
      __faststorefence();
    }
    else
    {
      v33 = (unsigned int)(v52 - 1);
      *(_DWORD *)(v8 + 8 * v51 + 28) = v33;
    }
    if ( v52 != 1 )
    {
      v30 = v50;
      goto LABEL_27;
    }
    v60 = *(unsigned int *)(v8 + 8 * v51 + 4);
    if ( (_DWORD)v60 == 0 )
    {
      v30 = v50;
      goto LABEL_27;
    }
    v61 = *(unsigned int *)(v8 + 8 * v60 + 8);
    if ( (_DWORD)v61 == 0 )
    {
      v30 = v50;
      goto LABEL_27;
    }
    if ( *(_DWORD *)(v8 + 8 * v61 + 16) == 0 )
    {
      v30 = v50;
      goto LABEL_27;
    }
    goto LABEL_114;
  }
  v20 = *(unsigned int *)(v8 + 374416892);
  if ( (_DWORD)v20 == 0 )
  {
    v30 = sub_276BEE0();
    v53 = *(unsigned int *)(v8 + 377133548);
    v54 = *(_DWORD *)(v8 + 8 * v53 + 28);
    if ( v54 == 1 )
    {
      *(_QWORD *)(v8 + 8 * v53 + 16) = 0;
      __faststorefence();
    }
    else
    {
      v33 = (unsigned int)(v54 - 1);
      *(_DWORD *)(v8 + 8 * v53 + 28) = v33;
    }
    if ( v54 != 1 )
      goto LABEL_27;
    v55 = *(unsigned int *)(v8 + 8 * v53 + 4);
    if ( (_DWORD)v55 == 0 )
      goto LABEL_27;
    v64 = *(unsigned int *)(v8 + 8 * v55 + 8);
    if ( (_DWORD)v64 == 0 || *(_DWORD *)(v8 + 8 * v64 + 16) == 0 )
      goto LABEL_27;
    while ( 1 )
    {
LABEL_94:
      v66 = (_DWORD *)v30;
      sub_208CCA0(a1: v31, a2: v32, a3: v8 + 377133432, a4: v33, a5: 1);
      v30 = (__int64)v66;
      while ( 1 )
      {
LABEL_27:
        v30 = sub_2769900(a1: v31, a2: v32, a3: v30, a4: v33, a5: &a7);
        v33 = *(unsigned int *)(v8 + 377133548);
        v34 = *(_DWORD *)(v8 + 8 * v33 + 28);
        if ( v34 == 1 )
        {
          *(_QWORD *)(v8 + 8 * v33 + 16) = 0;
          __faststorefence();
        }
        else
        {
          *(_DWORD *)(v8 + 8 * v33 + 28) = v34 - 1;
        }
        if ( v34 == 1 )
        {
          v35 = *(unsigned int *)(v8 + 8 * v33 + 4);
          if ( (_DWORD)v35 != 0 )
          {
            v36 = *(unsigned int *)(v8 + 8 * v35 + 8);
            if ( (_DWORD)v36 != 0 && *(_DWORD *)(v8 + 8 * v36 + 16) != 0 )
              break;
          }
        }
      }
    }
  }
  result = ((__int64 (__fastcall *)(__int64, __int64, __int64, __int64, _DWORD *, _DWORD *))(v7
                                                                                           + *(_QWORD *)(v8 + 8LL * (*(_DWORD *)(v8 + 8 * v20) >> 3) + 328)))(
             a1: v18,
             a2: v19,
             a3: v8 + 8 * v20,
             a4: v17,
             a5: v67,
             a6: v67);
  v25 = *(unsigned int *)(v8 + 377133548);
  v26 = *(_DWORD *)(v8 + 8 * v25 + 28);
  if ( v26 == 1 )
  {
    *(_QWORD *)(v8 + 8 * v25 + 16) = 0;
    __faststorefence();
  }
  else
  {
    result = (unsigned int)(v26 - 1);
    *(_DWORD *)(v8 + 8 * v25 + 28) = result;
  }
  if ( v26 == 1 )
  {
    v27 = *(unsigned int *)(v8 + 8 * v25 + 4);
    if ( (_DWORD)v27 != 0 )
    {
      v28 = *(unsigned int *)(v8 + 8 * v27 + 8);
      if ( (_DWORD)v28 != 0 && *(_DWORD *)(v8 + 8 * v28 + 16) != 0 )
        result = sub_208CCA0(a1: v23, a2: v24, a3: v8 + 377133432, a4: v22, a5: 1);
    }
  }
  if ( *(int *)(v9 + 16) <= 0 )
    return sub_277F280();
  return result;
}
